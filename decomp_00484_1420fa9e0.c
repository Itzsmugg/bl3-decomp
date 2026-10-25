// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1420fa9e0 FUN_1420fa9e0 body=261 status=ok
// SIG undefined FUN_1420fa9e0(void)

longlong FUN_1420fa9e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (lVar3 != 0) {
    lVar2 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = UMaterialInstanceDynamic::Create(lVar3,param_1);
      *(longlong *)(param_1 + 0x188) = lVar3;
      local_58 = *(undefined8 *)(param_1 + 0x180);
      local_48 = *(undefined4 *)(param_1 + 400);
      uStack_44 = *(undefined4 *)(param_1 + 0x194);
      uStack_40 = *(undefined4 *)(param_1 + 0x198);
      uStack_3c = *(undefined4 *)(param_1 + 0x19c);
      local_20 = *(longlong *)(param_1 + 0x1b8);
      local_28 = *(undefined8 *)(param_1 + 0x1b0);
      local_38 = *(undefined4 *)(param_1 + 0x1a0);
      uStack_34 = *(undefined4 *)(param_1 + 0x1a4);
      uStack_30 = *(undefined4 *)(param_1 + 0x1a8);
      uStack_2c = *(undefined4 *)(param_1 + 0x1ac);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      local_18 = *(undefined8 *)(param_1 + 0x1c0);
      local_10 = *(undefined4 *)(param_1 + 0x1c8);
      local_c = *(undefined1 *)(param_1 + 0x1cc);
      local_50 = lVar3;
      FUN_1421316c0(param_1,&local_58);
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 1420faaf0 GetDynamicMaterial body=263 status=ok
// SIG undefined GetDynamicMaterial(void)

longlong UBorder::GetDynamicMaterial(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x198);
  if (lVar3 != 0) {
    lVar2 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_1429ba110();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        lVar3 = UMaterialInstanceDynamic::Create(lVar3,param_1);
        FSlateBrush::SetResourceObject(param_1 + 0x150,lVar3);
        if (*(longlong *)(param_1 + 0x250) != 0) {
          local_18 = 0;
          local_10 = 0;
          local_20 = 1;
          local_28 = param_1 + 0x150;
          FUN_1419a06c0(*(longlong *)(param_1 + 0x250),&local_28);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
        }
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1420fac00 GetDynamicMaterial body=267 status=ok
// SIG undefined GetDynamicMaterial(void)

longlong UImage::GetDynamicMaterial(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x148);
  if (lVar3 != 0) {
    lVar2 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_1429ba110();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        lVar3 = UMaterialInstanceDynamic::Create(lVar3,param_1);
        FSlateBrush::SetResourceObject(param_1 + 0x100,lVar3);
        if (*(longlong *)(param_1 + 0x1c8) != 0) {
          local_18 = 0;
          local_10 = 0;
          local_20 = 1;
          local_28 = param_1 + 0x100;
          FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_28);
          FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),5);
        }
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1420fad10 GetDynamicMaterial body=185 status=ok
// SIG undefined GetDynamicMaterial(void)

longlong UWidgetBlueprintLibrary::GetDynamicMaterial(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = FUN_1429ba110();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar2 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    lVar3 = UMaterialInstanceDynamic::Create(lVar3,0);
    FSlateBrush::SetResourceObject(param_1,lVar3);
  }
  return lVar3;
}



// FUNCTION 1420fadd0 FUN_1420fadd0 body=2919 status=ok
// SIG undefined FUN_1420fadd0(void)

void FUN_1420fadd0(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 *in_stack_fffffffffffffda8;
  undefined8 in_stack_fffffffffffffdb8;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  float local_220;
  float local_218;
  float fStack_214;
  float local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  int local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined8 local_190;
  float local_188 [4];
  undefined8 local_178;
  longlong local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144 [3];
  undefined1 local_138 [32];
  float local_118;
  float local_114;
  float local_110;
  int local_10c;
  undefined8 local_108;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  local_108 = (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x2a8))
                        (*(longlong **)(param_1 + 0x3c8),(*(uint *)(param_1 + 0x18) & 0x300) != 0,0)
  ;
  lVar7 = *(longlong *)(param_1 + 0x3c0);
  local_170 = param_1 + 0x80;
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x60) != 0)) {
    if (*(char *)(param_1 + 0x3e1) == '\0') {
      iVar4 = *(int *)(lVar7 + 0xc0);
      iVar8 = 0;
      iVar6 = *(int *)(lVar7 + 0xc4);
      fVar21 = *(float *)(param_1 + 0x3ac);
      fVar19 = *(float *)(param_1 + 0x3b0);
      if (0 < (int)param_2[1]) {
        uVar9 = 1;
        lVar7 = 0;
        do {
          in_stack_fffffffffffffda8 =
               (undefined8 *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffffffffff00);
          FUN_1424290d0(local_138,*(undefined4 *)(*(longlong *)(*param_2 + lVar7) + 0x1a38),1,0,
                        in_stack_fffffffffffffda8);
          if ((param_4 & uVar9) != 0) {
            local_1e8 = 0x3f800000;
            local_1e0 = 0.0;
            fVar14 = -((float)-iVar4 * fVar21);
            local_1f8 = 0;
            fVar16 = -((float)-iVar6 * fVar19);
            local_1f0 = -1.0;
            local_208 = 0xbf80000000000000;
            local_200 = 0;
            local_178 = 0;
            local_218 = -0.0;
            fStack_214 = fVar14;
            local_210 = fVar16;
            uVar1 = FUN_14242c0d0(local_138,&local_218,&local_178,&local_208,&local_1f8,&local_1e8,
                                  &DAT_1464aa730);
            local_228 = 0x3f800000;
            local_220 = 0.0;
            local_238 = 0;
            local_230 = 0xbf800000;
            local_144[0] = 0.0;
            local_144[1] = -1.0;
            local_144[2] = 0.0;
            fVar15 = (fVar19 - 1.0) * (float)iVar6;
            local_188[2] = 0.0;
            local_188[3] = 1.0;
            local_150 = -0.0;
            local_14c = fVar14;
            local_148 = fVar15;
            uVar2 = FUN_14242c0d0(local_138,&local_150,local_188 + 2,local_144,&local_238,&local_228
                                  ,&DAT_1464aa730);
            local_15c = 0x3f800000;
            local_154 = 0;
            local_168 = 0;
            local_160 = 0xbf800000;
            local_f8._0_12_ = ZEXT812(0xbf80000000000000);
            fVar14 = (fVar21 - 1.0) * (float)iVar4;
            local_188[0] = 1.0;
            local_188[1] = 1.0;
            local_e8 = -0.0;
            fStack_e4 = fVar14;
            fStack_e0 = fVar15;
            uVar3 = FUN_14242c0d0(local_138,&local_e8,local_188,local_f8,&local_168,&local_15c,
                                  &DAT_1464aa730);
            local_1d0 = 0x3f800000;
            local_1c8 = 0.0;
            local_1c0 = 0;
            uVar5 = 1;
            in_stack_fffffffffffffda8 = &local_1c0;
            local_1b8 = -1.0;
            local_1b0 = 0.0;
            local_1ac = -1.0;
            local_1a8 = 0.0;
            local_190 = 0x3f800000;
            local_1a0 = -0.0;
            local_19c = fVar14;
            local_198 = fVar16;
            FUN_14242c0d0(local_138,&local_1a0,&local_190,&local_1b0,in_stack_fffffffffffffda8,
                          &local_1d0,&DAT_1464aa730);
            FUN_14242bf10(local_138,uVar1,uVar2,uVar3);
            FUN_14242bf10(local_138,uVar1,uVar3);
            in_stack_fffffffffffffda8 =
                 (undefined8 *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffffffffff00);
            FDynamicMeshBuilder::GetMesh
                      (local_138,local_170,local_108,0,in_stack_fffffffffffffda8,1,
                       CONCAT44(uVar5,iVar8),param_5);
          }
          FDynamicMeshBuilder::~FDynamicMeshBuilder(local_138);
          iVar8 = iVar8 + 1;
          uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
          lVar7 = lVar7 + 8;
        } while (iVar8 < (int)param_2[1]);
      }
    }
    else {
      fVar14 = (float)*(int *)(lVar7 + 0xc0) / *(float *)(param_1 + 0x3e4);
      iVar4 = (int)(*(float *)(param_1 + 0x3e4) * 8.912677 + 4.0);
      local_118 = fVar14;
      auVar13._0_8_ = __libm_sse2_sincosf_();
      auVar13._8_8_ = extraout_XMM0_Qb;
      fStack_e4 = (float)auVar13._0_8_;
      fVar21 = *(float *)(param_1 + 0x3b0);
      local_e8 = (float)((ulonglong)auVar13._0_8_ >> 0x20) * fVar14;
      local_1d8 = 0;
      local_f8._4_12_ = auVar13._4_12_;
      fVar19 = (float)*(int *)(lVar7 + 0xc4);
      local_f8._0_4_ = fStack_e4 * (fVar14 + fVar14) * (0.5 - *(float *)(param_1 + 0x3ac));
      fVar14 = (float)-*(int *)(lVar7 + 0xc4) * fVar21;
      local_190 = CONCAT44(local_190._4_4_,fVar14);
      if (0 < (int)param_2[1]) {
        local_1d4 = 1;
        local_170 = 0;
        local_188[0] = fVar21;
        local_188[2] = fVar19;
        fStack_e0 = fStack_e4;
        fStack_dc = fStack_e4;
        do {
          lVar7 = local_170;
          uVar9 = local_1d4;
          iVar6 = local_1d8;
          in_stack_fffffffffffffda8 =
               (undefined8 *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffffffffff00);
          FUN_1424290d0(local_138,*(undefined4 *)(*(longlong *)(*param_2 + local_170) + 0x1a38),1,0,
                        in_stack_fffffffffffffda8);
          uVar1 = (undefined4)((ulonglong)in_stack_fffffffffffffdb8 >> 0x20);
          if ((param_4 & uVar9) != 0) {
            fVar15 = 1.0 / (float)iVar4;
            fVar16 = fVar15 * *(float *)(param_1 + 0x3e4);
            if (0 < iVar4) {
              fVar14 = -fVar14;
              fVar19 = (fVar21 - 1.0) * fVar19;
              iVar6 = 0;
              do {
                fVar21 = *(float *)(param_1 + 0x3e4);
                uVar10 = __libm_sse2_sincosf_();
                uVar11 = __libm_sse2_sincosf_(fVar16 + ((float)iVar6 * fVar16 - fVar21 * 0.5));
                local_10c = iVar6 + 1;
                fVar20 = (float)iVar6 * fVar15;
                local_1b0 = local_e8 - (float)((ulonglong)uVar10 >> 0x20) * local_118;
                local_1ac = -((float)uVar10 * local_118 + (float)local_f8._0_4_);
                local_110 = (float)local_10c * fVar15;
                fVar21 = local_e8 - (float)((ulonglong)uVar11 >> 0x20) * local_118;
                fVar17 = -((float)uVar11 * local_118 + (float)local_f8._0_4_);
                fVar18 = fVar17 - local_1ac;
                local_1c0 = CONCAT44(fVar17,fVar21);
                local_1d0 = CONCAT44(fVar17,fVar21);
                fVar21 = fVar21 - local_1b0;
                local_238 = CONCAT44(fVar18,fVar21);
                fVar17 = fVar18 * fVar18 + fVar21 * fVar21;
                if (1e-08 < fVar17) {
                  auVar13 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
                  fVar12 = auVar13._0_4_;
                  fVar12 = fVar12 + fVar12 * (0.5 - fVar17 * 0.5 * fVar12 * fVar12);
                  fVar12 = fVar12 + fVar12 * (0.5 - fVar17 * 0.5 * fVar12 * fVar12);
                  fVar18 = fVar12 * fVar18;
                  fVar21 = fVar12 * fVar21;
                  local_238 = CONCAT44(fVar18,fVar21);
                }
                local_230 = 0;
                local_220 = fVar19 - fVar14;
                fVar17 = local_220 * local_220;
                if (1e-08 < fVar17) {
                  auVar13 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
                  fVar12 = auVar13._0_4_;
                  fVar12 = fVar12 + fVar12 * (0.5 - fVar17 * 0.5 * fVar12 * fVar12);
                  local_220 = (fVar12 + fVar12 * (0.5 - fVar17 * 0.5 * fVar12 * fVar12)) * local_220
                  ;
                }
                local_228 = 0;
                local_218 = local_220 * fVar18 - 0.0;
                fStack_214 = 0.0 - local_220 * fVar21;
                local_210 = fVar21 * 0.0 - fVar18 * 0.0;
                if (iVar6 == 0) {
                  local_208 = local_238;
                  local_200 = 0;
                  local_1f8 = 0;
                  local_1e8 = CONCAT44(fStack_214,local_218);
                  local_1f0 = local_220;
                  local_1e0 = local_210;
                }
                local_168 = (ulonglong)(uint)fVar20;
                local_1c8 = fVar14;
                local_1b8 = fVar19;
                local_1a8 = fVar19;
                local_1a0 = local_1b0;
                local_19c = local_1ac;
                local_198 = fVar14;
                local_114 = fVar20;
                uVar2 = FUN_14242c0d0(local_138,&local_1a0,&local_168,&local_208,&local_1f8,
                                      &local_1e8,&DAT_1464aa730);
                local_15c = CONCAT44(0x3f800000,fVar20);
                uVar3 = FUN_14242c0d0(local_138,&local_1b0,&local_15c,&local_208,&local_1f8,
                                      &local_1e8,&DAT_1464aa730);
                fVar21 = local_110;
                local_150 = local_110;
                local_14c = 1.0;
                uVar5 = FUN_14242c0d0(local_138,&local_1c0,&local_150,&local_238,&local_228,
                                      &local_218,&DAT_1464aa730);
                uVar1 = 1;
                local_144[0] = fVar21;
                in_stack_fffffffffffffda8 = &local_228;
                local_144[1] = 0.0;
                FUN_14242c0d0(local_138,&local_1d0,local_144,&local_238,in_stack_fffffffffffffda8,
                              &local_218,&DAT_1464aa730);
                FUN_14242bf10(local_138,uVar2,uVar3,uVar5);
                FUN_14242bf10(local_138,uVar2,uVar5);
                local_208 = local_238;
                local_200 = local_230;
                local_1f8 = local_228;
                local_1f0 = local_220;
                local_1e8 = CONCAT44(fStack_214,local_218);
                local_1e0 = local_210;
                iVar6 = local_10c;
              } while (local_10c < iVar4);
              lVar7 = local_170;
              fVar21 = local_188[0];
              uVar9 = local_1d4;
              iVar6 = local_1d8;
              fVar19 = local_188[2];
              fVar14 = (float)local_190;
            }
            in_stack_fffffffffffffdb8 = CONCAT44(uVar1,iVar6);
            in_stack_fffffffffffffda8 =
                 (undefined8 *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffffffffff00);
            FDynamicMeshBuilder::GetMesh
                      (local_138,param_1 + 0x80,local_108,0,in_stack_fffffffffffffda8,1,
                       in_stack_fffffffffffffdb8,param_5);
          }
          FDynamicMeshBuilder::~FDynamicMeshBuilder(local_138);
          local_1d8 = iVar6 + 1;
          local_1d4 = uVar9 << 1 | (uint)((int)uVar9 < 0);
          local_170 = lVar7 + 8;
        } while (local_1d8 < (int)param_2[1]);
      }
    }
  }
  return;
}



// FUNCTION 1420fb940 FUN_1420fb940 body=268 status=ok
// SIG undefined FUN_1420fb940(void)

longlong FUN_1420fb940(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar3 = *(longlong *)(param_1 + 0x198);
  if (lVar3 != 0) {
    lVar2 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = UMaterialInstanceDynamic::Create(lVar3,param_1);
      *(longlong *)(param_1 + 0x198) = lVar3;
      local_58 = *(undefined8 *)(param_1 + 0x180);
      local_20 = *(longlong *)(param_1 + 0x1b8);
      local_50 = *(undefined8 *)(param_1 + 0x188);
      local_28 = *(undefined8 *)(param_1 + 0x1b0);
      local_48 = *(undefined4 *)(param_1 + 400);
      uStack_44 = *(undefined4 *)(param_1 + 0x194);
      uStack_40 = *(undefined4 *)(param_1 + 0x198);
      uStack_3c = *(undefined4 *)(param_1 + 0x19c);
      local_38 = *(undefined4 *)(param_1 + 0x1a0);
      uStack_34 = *(undefined4 *)(param_1 + 0x1a4);
      uStack_30 = *(undefined4 *)(param_1 + 0x1a8);
      uStack_2c = *(undefined4 *)(param_1 + 0x1ac);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      local_18 = *(undefined8 *)(param_1 + 0x1c0);
      local_10 = *(undefined4 *)(param_1 + 0x1c8);
      local_c = *(undefined1 *)(param_1 + 0x1cc);
      FUN_1421316c0(param_1,&local_58);
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 1420fba50 FUN_1420fba50 body=25 status=ok
// SIG undefined FUN_1420fba50(void)

undefined8 FUN_1420fba50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x430) + 0x28);
  }
  return 0;
}



// FUNCTION 1420fba70 GetEndTime body=105 status=ok
// SIG undefined GetEndTime(void)

void UWidgetAnimation::GetEndTime(void)

{
  return;
}



// FUNCTION 1420fbaf0 FUN_1420fbaf0 body=108 status=ok
// SIG undefined FUN_1420fbaf0(void)

longlong * FUN_1420fbaf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x358);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x358);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
  }
  return param_2;
}



// FUNCTION 1420fbb60 FUN_1420fbb60 body=274 status=ok
// SIG undefined FUN_1420fbb60(void)

undefined4 * FUN_1420fbb60(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res8 [8];
  longlong local_38;
  longlong *local_30;
  
  fVar7 = *(float *)(param_1 + 0x1d4);
  fVar8 = *(float *)(param_1 + 0x1d0);
  if ((((fVar8 == 0.0) && (fVar7 == 0.0)) &&
      (*(float *)(param_1 + 0x1c4) == *(float *)(param_1 + 0x1bc))) &&
     (*(float *)(param_1 + 0x1c0) == *(float *)(param_1 + 0x1b8))) {
    FUN_1420f9830(*(float *)(param_1 + 0x1c0),&local_38);
    if (local_38 != 0) {
      pfVar6 = (float *)SWidget::GetDesiredSize(local_38,local_res8);
      fVar8 = *pfVar6;
      fVar7 = pfVar6[1];
    }
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  *param_2 = *(undefined4 *)(param_1 + 0x1c8);
  param_2[1] = *(undefined4 *)(param_1 + 0x1cc);
  param_2[2] = fVar8;
  param_2[3] = fVar7;
  return param_2;
}



// FUNCTION 1420fbc90 GetHitResultAtScreenPositionAndCache body=150 status=ok
// SIG undefined GetHitResultAtScreenPositionAndCache(void)

undefined8
FWidget3DHitTester::GetHitResultAtScreenPositionAndCache
          (longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((((ulonglong)DAT_1464aaa8c == *(ulonglong *)(param_1 + 0x20)) &&
      (local_18 = (float)param_3, local_18 == *(float *)(param_1 + 0x28))) &&
     (uStack_14 = (float)((ulonglong)param_3 >> 0x20), uStack_14 == *(float *)(param_1 + 0x2c))) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xa4);
    return uVar2;
  }
  *(ulonglong *)(param_1 + 0x20) = (ulonglong)DAT_1464aaa8c;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  if (param_2 != 0) {
    cVar1 = FUN_14270a0a0(param_2,param_3,3,1,param_1 + 0x30);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0xa4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1420fbd30 FUN_1420fbd30 body=856 status=ok
// SIG undefined FUN_1420fbd30(void)

longlong *
FUN_1420fbd30(longlong param_1,longlong *param_2,longlong param_3,undefined1 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong lVar11;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar5 = (longlong *)operator_new(0x10);
  uStack_60 = (longlong *)0x0;
  local_68 = uStack_60;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)plVar5 = (undefined4)DAT_1468b5d88;
    *(undefined4 *)((longlong)plVar5 + 4) = DAT_1468b5d88._4_4_;
    *(undefined4 *)(plVar5 + 1) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)((longlong)plVar5 + 0xc) = DAT_1468b5d88._4_4_;
    local_68 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_144d50328;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_68;
    uStack_60 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
  *local_68 = param_3;
  local_68[1] = *(longlong *)(param_1 + 0x838);
  *(longlong *)(param_1 + 0x838) = param_3;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x828) != 0) {
    puVar6 = (undefined8 *)FUN_141839450(*(longlong *)(param_1 + 0x828),local_48);
    plVar5 = (longlong *)FUN_141832350(*puVar6,local_58,param_3,param_5,param_4);
    if (param_2 != plVar5) {
      iVar7 = (int)param_2[1];
      lVar8 = *param_2;
      if (iVar7 != 0) {
        plVar9 = (longlong *)(lVar8 + 0x40);
        do {
          plVar4 = (longlong *)plVar9[2];
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
          plVar4 = (longlong *)*plVar9;
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
          plVar9 = plVar9 + 0xb;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar8 = *param_2;
      }
      if (lVar8 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_2 + 1) = (int)plVar5[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
    ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(local_58);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    lVar8 = *param_2;
    lVar11 = (longlong)(int)param_2[1] * 0x58 + lVar8;
    if (lVar8 != lVar11) {
      pplVar10 = (longlong **)(lVar8 + 0x48);
      do {
        local_78 = local_68;
        uStack_70 = (undefined4)uStack_60;
        uStack_6c = uStack_60._4_4_;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
          UNLOCK();
        }
        if (pplVar10 != &local_78) {
          *pplVar10 = local_68;
          local_78 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(pplVar10 + 1,&uStack_70);
        }
        if (CONCAT44(uStack_6c,uStack_70) != 0) {
          LOCK();
          piVar2 = (int *)(CONCAT44(uStack_6c,uStack_70) + 8);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            puVar6 = (undefined8 *)CONCAT44(uStack_6c,uStack_70);
            (**(code **)*puVar6)(puVar6);
            LOCK();
            piVar2 = (int *)((longlong)puVar6 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*(longlong *)CONCAT44(uStack_6c,uStack_70) + 8))
                        ((longlong *)CONCAT44(uStack_6c,uStack_70),1);
            }
          }
        }
        lVar8 = lVar8 + 0x58;
        pplVar10 = pplVar10 + 0xb;
      } while (lVar8 != lVar11);
    }
  }
  plVar5 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_60 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420fc090 FUN_1420fc090 body=8 status=ok
// SIG undefined FUN_1420fc090(void)

undefined8 FUN_1420fc090(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x430);
}



// FUNCTION 1420fc0a0 FUN_1420fc0a0 body=157 status=ok
// SIG undefined FUN_1420fc0a0(void)

ulonglong FUN_1420fc0a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x28);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x38));
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar5 = uVar5 & 0xffffffff;
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1420fc140 GetIndexForItem body=60 status=ok
// SIG undefined GetIndexForItem(void)

longlong UListView::GetIndexForItem(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x2a8);
  plVar2 = plVar1;
  while( true ) {
    if (plVar2 == plVar1 + *(int *)(param_1 + 0x2b0)) {
      return 0xffffffff;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return (longlong)plVar2 - (longlong)plVar1 >> 3;
}



// FUNCTION 1420fc180 GetInitialValue body=313 status=ok
// SIG undefined GetInitialValue(void)

int * TMovieSceneInitialValueStore<FWidgetTransform>::GetInitialValue
                (longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 local_res8;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined8 local_18;
  int local_10;
  
  iVar6 = -1;
  local_res8._4_4_ = 0;
  local_res8 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar6 = (int)local_res8;
  }
  uVar4 = local_res8;
  plVar2 = (longlong *)*param_1;
  piVar5 = (int *)plVar2[3];
  piVar1 = piVar5 + (longlong)(int)plVar2[4] * 9;
  do {
    if (piVar5 == piVar1) {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_28,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar3 = *param_1;
        iVar6 = *(int *)(lVar3 + 0x20);
        *(int *)(lVar3 + 0x20) = iVar6 + 1;
        if (*(int *)(lVar3 + 0x24) < iVar6 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::
          ResizeGrow(lVar3 + 0x18,iVar6);
        }
        lVar3 = *(longlong *)(lVar3 + 0x18);
        *(undefined8 *)(lVar3 + (longlong)iVar6 * 0x24) = uVar4;
        lVar3 = lVar3 + (longlong)iVar6 * 0x24;
        *(ulonglong *)(lVar3 + 8) = CONCAT44(iStack_24,local_28);
        *(ulonglong *)(lVar3 + 0x10) = CONCAT44(iStack_1c,iStack_20);
        *(undefined8 *)(lVar3 + 0x18) = local_18;
        *(int *)(lVar3 + 0x20) = local_10;
      }
LAB_1420fc28d:
      *param_2 = local_28;
      param_2[1] = iStack_24;
      param_2[2] = iStack_20;
      param_2[3] = iStack_1c;
      *(undefined8 *)(param_2 + 4) = local_18;
      param_2[6] = local_10;
      return param_2;
    }
    if ((*piVar5 == iVar6) && (piVar5[1] == local_res8._4_4_)) {
      local_28 = piVar5[2];
      iStack_24 = piVar5[3];
      iStack_20 = piVar5[4];
      iStack_1c = piVar5[5];
      local_10 = piVar5[8];
      local_18 = *(undefined8 *)(piVar5 + 6);
      goto LAB_1420fc28d;
    }
    piVar5 = piVar5 + 9;
  } while( true );
}



// FUNCTION 1420fc2c0 GetInputEventFromCharacterEvent body=43 status=ok
// SIG undefined GetInputEventFromCharacterEvent(void)

undefined8 *
UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_144d56560;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 1420fc2f0 FUN_1420fc2f0 body=224 status=ok
// SIG undefined FUN_1420fc2f0(void)

byte FUN_1420fc2f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  byte bVar8;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == 0) {
    bVar8 = *(byte *)(param_1 + 0xb4) >> 2 & 1;
  }
  else {
    if ((*(int *)(local_18 + 0xa8) != 0) && (*(longlong **)(local_18 + 0xa0) != (longlong *)0x0)) {
      cVar5 = (**(code **)(**(longlong **)(local_18 + 0xa0) + 0x18))();
      if (cVar5 != '\0') {
        if (*(int *)(local_18 + 0xa8) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(local_18 + 0xa0);
        }
        uVar6 = (**(code **)(*plVar7 + 0x38))();
        *(undefined1 *)(local_18 + 0x98) = uVar6;
      }
    }
    bVar8 = *(byte *)(local_18 + 0x98);
  }
  plVar7 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return bVar8;
  }
  return bVar8;
}



// FUNCTION 1420fc3d0 GetIsExpanded body=33 status=ok
// SIG undefined GetIsExpanded(void)

ulonglong UExpandableArea::GetIsExpanded(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 800);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001420fc3e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x208))(plVar1);
    return uVar2;
  }
  return (ulonglong)*(byte *)(param_1 + 0x2d8);
}



// FUNCTION 1420fc400 FUN_1420fc400 body=21 status=ok
// SIG undefined FUN_1420fc400(void)

undefined1 FUN_1420fc400(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x650) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x650) + 0x2f0);
  }
  return 0;
}



// FUNCTION 1420fc420 FUN_1420fc420 body=41 status=ok
// SIG undefined FUN_1420fc420(void)

ulonglong FUN_1420fc420(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 0x1e0) != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1e8) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1420fc450 GetItemAt body=30 status=ok
// SIG undefined GetItemAt(void)

undefined8 UListView::GetItemAt(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x2b0))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 1420fc470 GetInventoryEquipments body=8 status=ok
// SIG undefined GetInventoryEquipments(void)

longlong AMWInventoryModel::GetInventoryEquipments(longlong param_1)

{
  return param_1 + 0x438;
}



// FUNCTION 1420fc480 GetLayout body=29 status=ok
// SIG DWORD GetLayout(HDC hdc)

DWORD __stdcall UCanvasPanelSlot::GetLayout(HDC hdc)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_RDX;
  
  uVar1 = *(undefined8 *)(hdc + 0x10);
  uVar2 = *(undefined8 *)(hdc + 0x12);
  uVar3 = *(undefined8 *)(hdc + 0x14);
  *in_RDX = *(undefined8 *)(hdc + 0xe);
  in_RDX[1] = uVar1;
  uVar1 = *(undefined8 *)(hdc + 0x16);
  in_RDX[2] = uVar2;
  in_RDX[3] = uVar3;
  in_RDX[4] = uVar1;
  return (DWORD)in_RDX;
}



// FUNCTION 1420fc4c0 FUN_1420fc4c0 body=417 status=ok
// SIG undefined FUN_1420fc4c0(void)

undefined8 * FUN_1420fc4c0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char local_res18 [8];
  undefined1 local_res20;
  char local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined4 *local_68;
  longlong *local_60;
  undefined **local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined **local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar7 != 0) {
    pcVar1 = (char *)(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 == '\0')) {
      local_90 = 0;
      uStack_88 = 0;
      cVar6 = FCachedPropertyPath::IsFullyResolved(param_1 + 0x30);
      if (cVar6 == '\0') {
        local_58 = &PTR_FUN_144fb26c0;
        local_50 = &local_90;
        local_48 = local_a0;
        cVar6 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar7,param_1 + 0x30,&local_58);
      }
      else {
        cVar6 = FUN_1420c6620(lVar7,param_1 + 0x30,&local_90,local_a0);
      }
      if (cVar6 != '\0') {
        if (local_res18 != pcVar1) {
          pcVar1[0] = '\0';
          pcVar1[1] = '\x01';
        }
        *param_2 = local_90;
        param_2[1] = uStack_88;
        return param_2;
      }
    }
    local_res20 = 1;
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 != '\0')) {
      param_1 = param_1 + 0x30;
      local_70 = 0;
      local_68 = (undefined4 *)0x0;
      local_80 = 0x3f800000;
      uStack_7c = 0;
      uStack_78 = 0x3f800000;
      uStack_74 = 0x3f800000;
      local_60 = (longlong *)0x0;
      cVar6 = FCachedPropertyPath::IsFullyResolved(param_1);
      if (cVar6 == '\0') {
        local_40 = &PTR_FUN_144fb26a8;
        local_38 = &local_80;
        local_30 = local_98;
        cVar6 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar7,param_1,&local_40);
      }
      else {
        cVar6 = FUN_1420c6880(lVar7,param_1,&local_80,local_98);
      }
      plVar5 = local_60;
      if (cVar6 != '\0') {
        if (local_a8 != pcVar1) {
          pcVar1[0] = '\x01';
          pcVar1[1] = '\x01';
        }
        uVar8 = local_80;
        uVar9 = uStack_7c;
        uVar10 = uStack_78;
        uVar11 = uStack_74;
        if (local_68 != (undefined4 *)0x0) {
          uVar8 = *local_68;
          uVar9 = local_68[1];
          uVar10 = local_68[2];
          uVar11 = local_68[3];
        }
        *(undefined4 *)param_2 = uVar8;
        *(undefined4 *)((longlong)param_2 + 4) = uVar9;
        *(undefined4 *)(param_2 + 1) = uVar10;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar11;
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1420fc670 FUN_1420fc670 body=377 status=ok
// SIG undefined FUN_1420fc670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420fc670(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 in_XMM5 [16];
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x230);
  fVar1 = auVar5._4_4_;
  fVar2 = auVar5._8_4_;
  auVar5 = rcpps(in_XMM5,auVar5);
  fVar8 = *(float *)(param_1 + 0x210) * _DAT_146ae7940;
  fVar9 = *(float *)(param_1 + 0x214) * fRam0000000146ae7944;
  fVar10 = *(float *)(param_1 + 0x218) * fRam0000000146ae7948;
  fVar11 = *(float *)(param_1 + 0x21c) * fRam0000000146ae794c;
  fVar12 = (float)((uint)(*param_2 - *(float *)(param_1 + 0x220)) & _DAT_146ae7820);
  fVar13 = (float)((uint)(param_2[1] - *(float *)(param_1 + 0x224)) & uRam0000000146ae7824);
  fVar14 = (float)((uint)(param_2[2] - *(float *)(param_1 + 0x228)) & uRam0000000146ae7828);
  fVar3 = fVar14 * fVar9 - fVar13 * fVar10;
  fVar4 = fVar12 * fVar10 - fVar14 * fVar8;
  fVar12 = fVar13 * fVar8 - fVar12 * fVar9;
  fVar6 = auVar5._4_4_;
  fVar7 = auVar5._8_4_;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar12 = fVar12 + fVar12;
  fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar1;
  fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar2;
  fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar1;
  fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar2;
  *(ulonglong *)param_3 =
       CONCAT44(((fVar4 * fVar8 - fVar3 * fVar9) + fVar11 * fVar12 + fVar14) *
                (float)(-(uint)((float)((uint)fVar2 & uRam0000000146ae78e8) <= fRam0000000146ae7938)
                        & (uint)fVar7 ^ (uint)fVar7),
                ((fVar3 * fVar10 - fVar12 * fVar8) + fVar11 * fVar4 + fVar13) *
                (float)(-(uint)((float)((uint)fVar1 & uRam0000000146ae78e4) <= fRam0000000146ae7934)
                        & (uint)fVar6 ^ (uint)fVar6)) ^ 0x8000000080000000;
  *param_3 = (float)*(int *)(param_1 + 0x750) * *(float *)(param_1 + 0x75c) + *param_3;
  fVar2 = (float)*(int *)(param_1 + 0x754) * *(float *)(param_1 + 0x760) + param_3[1];
  param_3[1] = fVar2;
  fVar1 = (float)(int)((ulonglong)*(undefined8 *)(param_1 + 0x750) >> 0x20);
  param_3[1] = (fVar2 / fVar1) * fVar1;
  return;
}



// FUNCTION 1420fc7f0 GetMaterial body=86 status=ok
// SIG undefined GetMaterial(void)

longlong TMaterialStructType<FFontOutlineSettings>::GetMaterial(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar3 = UMaterialInterface::GetPrivateStaticClass();
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



// FUNCTION 1420fc8e0 FUN_1420fc8e0 body=600 status=ok
// SIG undefined FUN_1420fc8e0(void)

longlong FUN_1420fc8e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = UWidget::GetPrivateStaticClass();
  lVar3 = *(longlong *)(param_2 + 0x10);
  if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    GetPropertyValueByPath(&local_18,param_2,lVar3,param_1 + 8,0);
    if ((local_18 == 0) || (local_10 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar4 < DAT_146ae7aa0) && (_Init_thread_header(&DAT_146ae7aa0), DAT_146ae7aa0 == -1)) {
      FName::FName(&DAT_146ae7a98,"SlateFontInfo",1);
      _Init_thread_footer(&DAT_146ae7aa0);
    }
    if (local_18 == DAT_146ae7a98) {
      lVar3 = *(longlong *)(local_10 + 8);
      if (lVar3 != 0) {
        lVar2 = UMaterialInterface::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar3;
        }
      }
    }
    else {
      if ((*piVar4 < DAT_146ae7a90) && (_Init_thread_header(&DAT_146ae7a90), DAT_146ae7a90 == -1)) {
        FName::FName(&DAT_146ae7a88,"SlateBrush",1);
        _Init_thread_footer(&DAT_146ae7a90);
      }
      if (local_18 == DAT_146ae7a88) {
        lVar3 = UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(local_10);
        return lVar3;
      }
      if ((*piVar4 < DAT_146ae7ab0) && (_Init_thread_header(&DAT_146ae7ab0), DAT_146ae7ab0 == -1)) {
        FName::FName(&DAT_146ae7aa8,"FontOutlineSettings",1);
        _Init_thread_footer(&DAT_146ae7ab0);
      }
      if (local_18 == DAT_146ae7aa8) {
        lVar3 = TMaterialStructType<FFontOutlineSettings>::GetMaterial(local_10);
        return lVar3;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1420fcb40 FUN_1420fcb40 body=8 status=ok
// SIG undefined FUN_1420fcb40(void)

undefined8 FUN_1420fcb40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x800);
}



// FUNCTION 1420fcb50 FUN_1420fcb50 body=99 status=ok
// SIG undefined FUN_1420fcb50(void)

undefined4 FUN_1420fcb50(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x7f7fffff;
  if (*(longlong *)(param_1 + 0x4f0) == 0) {
    if ((*(byte *)(param_1 + 0x4d8) & 8) != 0) {
      return *(undefined4 *)(param_1 + 0x4e8);
    }
  }
  else {
    puVar1 = (undefined4 *)
             TAttribute<TOptional<float>_>::Get(*(longlong *)(param_1 + 0x4f0) + 0x488);
    if (*(char *)(puVar1 + 1) != '\0') {
      uVar2 = *puVar1;
    }
  }
  return uVar2;
}



// FUNCTION 1420fcbc0 FUN_1420fcbc0 body=99 status=ok
// SIG undefined FUN_1420fcbc0(void)

undefined4 FUN_1420fcbc0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x7f7fffff;
  if (*(longlong *)(param_1 + 0x4f0) == 0) {
    if ((*(byte *)(param_1 + 0x4d8) & 2) != 0) {
      return *(undefined4 *)(param_1 + 0x4e0);
    }
  }
  else {
    puVar1 = (undefined4 *)
             TAttribute<TOptional<float>_>::Get(*(longlong *)(param_1 + 0x4f0) + 0x448);
    if (*(char *)(puVar1 + 1) != '\0') {
      uVar2 = *puVar1;
    }
  }
  return uVar2;
}



// FUNCTION 1420fcc40 GetMenuPosition body=49 status=ok
// SIG undefined GetMenuPosition(void)

undefined8 * UMenuAnchor::GetMenuPosition(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_141940d80();
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1420fcc80 FUN_1420fcc80 body=107 status=ok
// SIG undefined FUN_1420fcc80(void)

undefined4 FUN_1420fcc80(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    uVar2 = 0xff7fffff;
    puVar1 = (undefined4 *)
             TAttribute<TOptional<float>_>::Get(*(longlong *)(param_1 + 0x4f0) + 0x468);
    if (*(char *)(puVar1 + 1) != '\0') {
      uVar2 = *puVar1;
    }
    return uVar2;
  }
  if ((*(byte *)(param_1 + 0x4d8) & 4) != 0) {
    return *(undefined4 *)(param_1 + 0x4e4);
  }
  return 0x800000;
}



// FUNCTION 1420fccf0 FUN_1420fccf0 body=99 status=ok
// SIG undefined FUN_1420fccf0(void)

undefined4 FUN_1420fccf0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xff7fffff;
  if (*(longlong *)(param_1 + 0x4f0) == 0) {
    if ((*(byte *)(param_1 + 0x4d8) & 1) != 0) {
      return *(undefined4 *)(param_1 + 0x4dc);
    }
  }
  else {
    puVar1 = (undefined4 *)
             TAttribute<TOptional<float>_>::Get(*(longlong *)(param_1 + 0x4f0) + 0x428);
    if (*(char *)(puVar1 + 1) != '\0') {
      uVar2 = *puVar1;
    }
  }
  return uVar2;
}



// FUNCTION 1420fcd60 GetMousePositionOnPlatform body=53 status=ok
// SIG undefined GetMousePositionOnPlatform(void)

undefined8 * UWidgetLayoutLibrary::GetMousePositionOnPlatform(undefined8 *param_1)

{
  if (DAT_1469f4590 != (longlong *)0x0) {
    (**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,param_1);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1420fcda0 FUN_1420fcda0 body=609 status=ok
// SIG undefined FUN_1420fcda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1420fcda0(float *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (DAT_1469f4590 == (longlong *)0x0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
  }
  else {
    (**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,&local_78);
    lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
    if ((((lVar6 != 0) && (cVar4 = UWorld::IsGameWorld(lVar6), cVar4 != '\0')) &&
        (lVar6 = UWorld::GetGameViewport(lVar6), lVar6 != 0)) &&
       (plVar3 = *(longlong **)(lVar6 + 0xe8), plVar3 != (longlong *)0x0)) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar8) {
        LOCK();
        bVar8 = iVar5 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar8) {
          if (plVar3 != (longlong *)0x0) {
            if (*(undefined8 **)(lVar6 + 0xe0) != (undefined8 *)0x0) {
              puVar7 = (undefined8 *)(**(code **)**(undefined8 **)(lVar6 + 0xe0))();
              local_68 = *puVar7;
              uStack_60 = puVar7[1];
              local_58 = puVar7[2];
              uStack_50 = puVar7[3];
              local_48 = *(float *)(puVar7 + 4);
              fStack_44 = *(float *)((longlong)puVar7 + 0x24);
              fStack_40 = *(float *)(puVar7 + 5);
              fStack_3c = *(float *)((longlong)puVar7 + 0x2c);
              local_38 = puVar7[6];
              LOCK();
              plVar1 = plVar3 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
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
              goto LAB_1420fcf0f;
            }
            LOCK();
            plVar1 = plVar3 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    FGeometry::FGeometry(&local_68);
LAB_1420fcf0f:
    fVar9 = 1.0 / (uStack_50._4_4_ * fStack_40 - local_48 * fStack_44);
    param_1[1] = uStack_50._4_4_ * fVar9 * local_74 + -(local_48 * fVar9) * local_78 +
                 -(float)local_38 * uStack_50._4_4_ * fVar9 + -fStack_3c * -(local_48 * fVar9);
    *param_1 = -(fStack_44 * fVar9) * local_74 + fStack_40 * fVar9 * local_78 +
               -(float)local_38 * -(fStack_44 * fVar9) + -fStack_3c * fStack_40 * fVar9;
  }
  return param_1;
}



// FUNCTION 1420fd010 GetMousePositionScaledByDPI body=113 status=ok
// SIG undefined GetMousePositionScaledByDPI(void)

undefined1
UWidgetLayoutLibrary::GetMousePositionScaledByDPI(longlong param_1,float *param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  
  if (param_1 != 0) {
    cVar1 = FUN_14270bc50();
    if (cVar1 != '\0') {
      fVar2 = (float)FUN_1420ffff0(param_1);
      *param_2 = (1.0 / fVar2) * *param_2;
      *param_3 = (1.0 / fVar2) * *param_3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1420fd0a0 GetNumEntries body=45 status=ok
// SIG undefined GetNumEntries(void)

undefined8 UDynamicEntryBox::GetNumEntries(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x130) + 0x170))();
                    /* WARNING: Could not recover jumptable at 0x0001420fd0c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)*puVar1)(puVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1420fd0d0 GetCurrentSceneIndex body=7 status=ok
// SIG undefined GetCurrentSceneIndex(void)

undefined4 FSlateRHIRenderer::GetCurrentSceneIndex(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2b0);
}



// FUNCTION 1420fd0e0 FUN_1420fd0e0 body=32 status=ok
// SIG undefined FUN_1420fd0e0(void)

ulonglong FUN_1420fd0e0(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001420fd0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x120) + 0x220))();
    return uVar1;
  }
  return (ulonglong)*(uint *)(param_1 + 0x108);
}



// FUNCTION 1420fd100 GetOffsets body=123 status=ok
// SIG undefined GetOffsets(void)

undefined8 * UCanvasPanelSlot::GetOffsets(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x40) != 0) && (*(longlong **)(lVar1 + 0x38) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x18))();
      if (cVar3 != '\0') {
        if (*(int *)(lVar1 + 0x40) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x38);
        }
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
        *(undefined8 *)(lVar1 + 0x20) = local_18;
        *(undefined8 *)(lVar1 + 0x28) = uStack_10;
      }
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *param_2 = *(undefined8 *)(lVar1 + 0x20);
    param_2[1] = uVar2;
    return param_2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 1420fd180 GetOptionAtIndex body=75 status=ok
// SIG undefined GetOptionAtIndex(void)

undefined8 * UComboBoxString::GetOptionAtIndex(longlong param_1,undefined8 *param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0xc80))) {
    FString::FString(param_2,*(undefined8 *)
                              (*(longlong *)(param_1 + 0xc78) + (longlong)param_3 * 0x10));
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1420fd1d0 GetOptionCount body=7 status=ok
// SIG undefined GetOptionCount(void)

undefined4 UComboBoxString::GetOptionCount(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc80);
}



// FUNCTION 1420fd1e0 FUN_1420fd1e0 body=683 status=ok
// SIG undefined FUN_1420fd1e0(void)

longlong FUN_1420fd1e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 uStack_2c;
  
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x1ac) & 0x40) == 0)) {
    plVar7 = (longlong *)(param_1 + 0x170);
    plVar13 = (longlong *)*plVar7;
    plVar1 = plVar13 + *(int *)(param_1 + 0x178);
    do {
      if (plVar13 == plVar1) {
        lVar12 = 0;
        local_res10 = 0;
        local_res18 = 0;
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar5 = FUN_1421581c0();
        lVar6 = FUN_1417985e0(uVar5,param_1,0,0x40,0,0,0,0,0);
        iVar3 = *(int *)(param_1 + 0x178);
        *(int *)(param_1 + 0x178) = iVar3 + 1;
        if (*(int *)(param_1 + 0x17c) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar3);
        }
        plVar1 = (longlong *)(lVar6 + 0x6c8);
        *(longlong *)(*plVar7 + (longlong)iVar3 * 8) = lVar6;
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          *(undefined4 *)(plVar7 + 2) = 0x42109b40;
          *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
          *(undefined4 *)(plVar7 + 3) = 0;
          *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2c;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar8;
          *plVar7 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_res10);
          iVar3 = *(int *)(lVar6 + 0x6d0);
          *(int *)(lVar6 + 0x6d0) = iVar3 + 1;
          if (*(int *)(lVar6 + 0x6d4) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
          }
          puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
          *puVar9 = plVar7;
          *(undefined4 *)(puVar9 + 1) = 3;
        }
        *(longlong *)(lVar6 + 0x378) = param_2;
        FWeakObjectPtr::operator=(lVar6 + 0x380,param_1);
        lVar10 = (**(code **)(**(longlong **)(lVar6 + 0x378) + 0x298))();
        lVar8 = lVar12;
        if (*(char *)(lVar10 + 0xa8) == '\0') {
          lVar8 = 4;
        }
        lVar11 = lVar12;
        if (*(char *)(lVar10 + 0xb0) == '\x01') {
          lVar11 = 4;
        }
        *(int *)(lVar6 + 0x6b4) =
             ((*(int *)((longlong)&DAT_144f1bc90 + lVar11) -
              *(int *)((longlong)&DAT_144f1bc88 + lVar8)) - *(int *)(lVar10 + 0xac)) +
             *(int *)(lVar10 + 0xb4);
        *(undefined8 *)(lVar6 + 0x6a0) = *(undefined8 *)(lVar10 + 0xb8);
        if (*(char *)(lVar10 + 0xa8) == '\0') {
          lVar12 = 4;
        }
        *(int *)(lVar6 + 0x6a8) =
             *(int *)((longlong)&DAT_144f1bc88 + lVar12) + *(int *)(lVar10 + 0xac);
        return lVar6;
      }
      lVar6 = *plVar13;
      if (*(longlong *)(lVar6 + 0x378) == param_2) {
        plVar4 = *(longlong **)(param_1 + 0x180);
        plVar2 = plVar4 + *(int *)(param_1 + 0x188);
        while( true ) {
          if (plVar4 == plVar2) {
            return lVar6;
          }
          if (*plVar4 == lVar6) break;
          plVar4 = plVar4 + 1;
        }
      }
      plVar13 = plVar13 + 1;
    } while( true );
  }
  return 0;
}



// FUNCTION 1420fd490 FUN_1420fd490 body=59 status=ok
// SIG undefined FUN_1420fd490(void)

void FUN_1420fd490(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x768) != 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  UGameInstance::GetFirstGamePlayer(*(undefined8 *)(lVar1 + 400));
  return;
}



// FUNCTION 1420fd4d0 FUN_1420fd4d0 body=46 status=ok
// SIG undefined FUN_1420fd4d0(void)

undefined8 FUN_1420fd4d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14254a410(param_1 + 0x1f0);
  if (cVar1 != '\0') {
    uVar2 = FUN_1423111a0(param_1 + 0x1f0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1420fd500 FUN_1420fd500 body=162 status=ok
// SIG undefined FUN_1420fd500(void)

undefined8 FUN_1420fd500(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar3 = UWidgetTree::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar4 + 0x20), plVar1 != (longlong *)0x0)) {
      lVar4 = UUserWidget::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001420fd593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar1 + 0x2a8))(plVar1);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1420fd5b0 FUN_1420fd5b0 body=46 status=ok
// SIG undefined FUN_1420fd5b0(void)

undefined8 FUN_1420fd5b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14254a410(param_1 + 0x1f0);
  if (cVar1 != '\0') {
    uVar2 = FUN_142547b00(param_1 + 0x1f0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1420fd5e0 FUN_1420fd5e0 body=162 status=ok
// SIG undefined FUN_1420fd5e0(void)

undefined8 FUN_1420fd5e0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar3 = UWidgetTree::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar4 + 0x20), plVar1 != (longlong *)0x0)) {
      lVar4 = UUserWidget::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001420fd673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar1 + 0x2a0))(plVar1);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1420fd690 FUN_1420fd690 body=35 status=ok
// SIG undefined FUN_1420fd690(void)

undefined8 FUN_1420fd690(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x488);
  }
  return 0;
}



// FUNCTION 1420fd6c0 GetParent body=15 status=ok
// SIG HWND GetParent(HWND hWnd)

HWND __stdcall UWidget::GetParent(HWND hWnd)

{
  if (*(longlong *)(hWnd + 10) != 0) {
    return *(HWND *)(*(longlong *)(hWnd + 10) + 0x28);
  }
  return (HWND)0x0;
}



// FUNCTION 1420fd6d0 GetParentObject body=86 status=ok
// SIG undefined GetParentObject(void)

undefined8 UWidgetAnimation::GetParentObject(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UPanelSlot::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(undefined8 *)(param_2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1420fd730 FUN_1420fd730 body=45 status=ok
// SIG undefined FUN_1420fd730(void)

undefined4 FUN_1420fd730(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x850) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x850) + 0x2f8);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x208);
  }
  return 0;
}



// FUNCTION 1420fd760 FUN_1420fd760 body=350 status=ok
// SIG undefined FUN_1420fd760(void)

undefined8 * FUN_1420fd760(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  bool bVar12;
  
  lVar9 = UEngine::GetWorldFromContextObject(DAT_146b17150);
  if ((((lVar9 != 0) && (cVar7 = UWorld::IsGameWorld(lVar9), cVar7 != '\0')) &&
      (lVar9 = UWorld::GetGameViewport(lVar9), lVar9 != 0)) &&
     (plVar2 = *(longlong **)(lVar9 + 0xe8), plVar2 != (longlong *)0x0)) {
    LOCK();
    iVar8 = (int)plVar2[1];
    bVar12 = iVar8 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar8 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar2 != (longlong *)0x0) {
          plVar3 = *(longlong **)(lVar9 + 0xe0);
          if (plVar3 != (longlong *)0x0) {
            lVar9 = *plVar3;
            uVar10 = FUN_14270bb10(param_2);
            puVar11 = (undefined8 *)(**(code **)(lVar9 + 8))(plVar3,uVar10);
            uVar10 = puVar11[1];
            *param_1 = *puVar11;
            param_1[1] = uVar10;
            uVar10 = puVar11[3];
            param_1[2] = puVar11[2];
            param_1[3] = uVar10;
            uVar4 = *(undefined4 *)((longlong)puVar11 + 0x24);
            uVar5 = *(undefined4 *)(puVar11 + 5);
            uVar6 = *(undefined4 *)((longlong)puVar11 + 0x2c);
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar11 + 4);
            *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
            *(undefined4 *)(param_1 + 5) = uVar5;
            *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
            param_1[6] = puVar11[6];
            LOCK();
            plVar3 = plVar2 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 != 1) {
              return param_1;
            }
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 != 1) {
              return param_1;
            }
            (**(code **)(*plVar2 + 8))(plVar2,1);
            return param_1;
          }
          LOCK();
          plVar3 = plVar2 + 1;
          lVar9 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar2[1];
      bVar12 = iVar8 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  FGeometry::FGeometry(param_1);
  return param_1;
}



// FUNCTION 1420fd8c0 GetPosition body=137 status=ok
// SIG undefined GetPosition(void)

undefined4 * UCanvasPanelSlot::GetPosition(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x40) != 0) && (*(longlong **)(lVar1 + 0x38) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x18))();
      if (cVar3 != '\0') {
        if (*(int *)(lVar1 + 0x40) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x38);
        }
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
        *(undefined8 *)(lVar1 + 0x20) = local_18;
        *(undefined8 *)(lVar1 + 0x28) = uStack_10;
      }
    }
    uVar2 = *(undefined4 *)(lVar1 + 0x24);
    *param_2 = *(undefined4 *)(lVar1 + 0x20);
    param_2[1] = uVar2;
    return param_2;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[1] = *(undefined4 *)(param_1 + 0x3c);
  return param_2;
}



// FUNCTION 1420fd950 GetPropertyValueByPath body=384 status=ok
// SIG undefined GetPropertyValueByPath(void)

longlong *
GetPropertyValueByPath
          (longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((param_2 != 0) && (param_5 < (int)param_4[1])) {
    if (param_3 == 0) {
      lStack_30 = 0;
    }
    else {
      lStack_30 = *(longlong *)(param_3 + 0x38);
    }
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    local_38 = param_3;
    FUN_140472e10(&local_38);
    lVar3 = lStack_30;
    while (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x18) == *(longlong *)(*param_4 + (longlong)param_5 * 8)) {
        lStack_30 = lVar3;
        lVar4 = UStructProperty::GetPrivateStaticClass();
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
          if (param_5 != (int)param_4[1] + -1) {
            GetPropertyValueByPath
                      (param_1,*(int *)(lVar3 + 0x44) + param_2,*(undefined8 *)(lVar3 + 0x70),
                       param_4,param_5 + 1);
            return param_1;
          }
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x18);
          plVar5 = (longlong *)FUN_1420ff4f0(local_res10);
          if (((lVar4 == *plVar5) ||
              (plVar5 = (longlong *)FUN_1420ff470(local_res10), lVar4 == *plVar5)) ||
             (plVar5 = (longlong *)FUN_1420ff3f0(local_res10), lVar4 == *plVar5)) {
            iVar1 = *(int *)(lVar3 + 0x44);
            *param_1 = lVar4;
            param_1[1] = iVar1 + param_2;
            return param_1;
          }
        }
        break;
      }
      lStack_30 = *(longlong *)(lVar3 + 0x28);
      FUN_140472e10(&local_38);
      lVar3 = lStack_30;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1420fdad0 GetReferencerName body=737 status=ok
// SIG undefined GetReferencerName(void)

longlong * SObjectWidget::GetReferencerName(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  void *pvVar6;
  int iVar7;
  void *local_res8;
  undefined8 local_res10;
  void *local_res18;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  
  local_58 = (void *)0x0;
  local_50 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  _Src = local_58;
  FGenericPlatformString::Convert<char,wchar_t>(local_58,3,&DAT_144f9766c,3,0x3f);
  local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FName::ToString(&local_res10,&local_68);
  local_48 = (void *)0x0;
  local_40 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  pvVar1 = local_48;
  local_res8 = local_48;
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0x10,"SObjectWidget( ",0x10,0x3f);
  pvVar6 = local_68;
  iVar2 = (int)local_60;
  if ((int)local_40 < 2) {
    local_68 = (void *)0x0;
    iVar7 = local_60._4_4_;
    local_60 = 0;
  }
  else {
    iVar3 = 0;
    if ((int)local_60 != 0) {
      iVar3 = (int)local_60 + -1;
    }
    if (((int)local_40 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = 0;
    }
    local_res8 = (void *)0x0;
    local_78 = pvVar1;
    local_70 = (int)local_40;
    local_6c = local_40._4_4_;
    if (local_40._4_4_ < iVar2 + (int)local_40 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    }
    iVar4 = local_70;
    local_res18 = local_68;
    pvVar6 = local_78;
    iVar7 = local_6c;
    iVar2 = local_70;
    if (iVar3 != 0) {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar3;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
      }
      iVar7 = local_6c;
      iVar2 = local_70;
      pvVar6 = local_78;
      pvVar1 = (void *)((longlong)local_78 + (lVar5 - (ulonglong)(iVar4 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar1,local_res18,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar1) = 0;
    }
  }
  iVar3 = 1;
  if (iVar2 < 2) {
    *param_2 = (longlong)_Src;
    *(int *)(param_2 + 1) = (int)local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
    _Src = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
      _Src = (void *)0x0;
    }
  }
  else {
    iVar4 = 0;
    if ((int)local_50 != 0) {
      iVar4 = (int)local_50 + -1;
    }
    if ((iVar2 != 0) || (iVar4 == 0)) {
      iVar3 = 0;
    }
    local_78 = pvVar6;
    local_70 = iVar2;
    local_6c = iVar7;
    if (iVar7 < iVar2 + iVar3 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    }
    iVar2 = local_70;
    pvVar6 = local_78;
    iVar7 = local_6c;
    iVar3 = local_70;
    if (iVar4 != 0) {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar4;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar2);
      }
      iVar7 = local_6c;
      iVar3 = local_70;
      pvVar6 = local_78;
      pvVar1 = (void *)((longlong)local_78 + (lVar5 - (ulonglong)(iVar2 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar1,_Src,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
    }
    *param_2 = (longlong)pvVar6;
    *(int *)(param_2 + 1) = iVar3;
    *(int *)((longlong)param_2 + 0xc) = iVar7;
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return param_2;
}



// FUNCTION 1420fddc0 FUN_1420fddc0 body=371 status=ok
// SIG undefined FUN_1420fddc0(void)

void FUN_1420fddc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  undefined8 local_10;
  
  local_10._0_4_ = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168) != 0)) {
    lVar4 = FUN_14238b2f0();
    FUN_14238b380(lVar4,1,&local_18);
    uVar3 = local_10;
    lVar6 = (longlong)(int)local_10;
    iVar5 = (int)local_10 + 1;
    local_10 = CONCAT44(local_10._4_4_,iVar5);
    if (local_10._4_4_ < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_18,uVar3 & 0xffffffff);
    }
    local_18[lVar6] = lVar4;
  }
  plVar1 = local_18 + (int)local_10;
  for (plVar7 = local_18; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      lVar6 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar6 = AUGDungeon::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          iVar5 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
          }
          *(longlong *)(*param_2 + (longlong)iVar5 * 8) = lVar4;
        }
      }
    }
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1420fdf40 FUN_1420fdf40 body=153 status=ok
// SIG undefined FUN_1420fdf40(void)

undefined4 FUN_1420fdf40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong local_28;
  longlong *local_20;
  
  FUN_1420f9830(param_1,&local_28);
  plVar5 = local_20;
  if (local_28 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0xb8);
  }
  else {
    uVar6 = *(undefined4 *)(local_28 + 200);
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1420fdfe0 FUN_1420fdfe0 body=8 status=ok
// SIG undefined FUN_1420fdfe0(void)

undefined8 FUN_1420fdfe0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x7f8);
}



// FUNCTION 1420fdff0 GetRootWidget body=18 status=ok
// SIG undefined GetRootWidget(void)

undefined8 UUserWidget::GetRootWidget(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x28);
  }
  return 0;
}



// FUNCTION 1420fe010 FUN_1420fe010 body=435 status=ok
// SIG undefined FUN_1420fe010(void)

void FUN_1420fe010(undefined8 param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  float local_res10;
  float local_res14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae8770) {
    _Init_thread_header(&DAT_146ae8770);
    if (DAT_146ae8770 == -1) {
      DAT_146ae8758 = DAT_1468c21b0;
      DAT_146ae8768 = '\0';
      atexit((_func_5014 *)&LAB_143ea6810);
      _Init_thread_footer(&DAT_146ae8770);
    }
  }
  if ((DAT_146ae8768 == '\0') || (DAT_146ae8758 != DAT_1468c21b0)) {
    local_res18 = 0x3f800000;
    uStackX_1c = 0x3f800000;
    lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar3 != 0) {
      cVar2 = UWorld::IsGameWorld(lVar3);
      if (cVar2 != '\0') {
        lVar3 = UWorld::GetGameViewport(lVar3);
        if (lVar3 != 0) {
          FUN_142481d50(lVar3,&local_res18);
        }
      }
    }
    DAT_146ae8760 = CONCAT44(uStackX_1c,local_res18);
    DAT_146ae8758 = DAT_1468c21b0;
    DAT_146ae8768 = '\x01';
  }
  local_res10 = (float)DAT_146ae8760;
  local_28 = 0;
  uStack_20 = 0;
  local_res14 = DAT_146ae8760._4_4_;
  FUN_14183d4c0(DAT_1469f4590,&local_28,&local_res10);
  param_2[2] = (float)uStack_20;
  if ((float)uStack_20 <= (float)local_28) {
    uStack_20._0_4_ = (float)local_28;
  }
  param_2[3] = uStack_20._4_4_;
  if (uStack_20._4_4_ <= local_28._4_4_) {
    uStack_20._4_4_ = local_28._4_4_;
  }
  *param_2 = (float)local_28;
  param_2[1] = local_28._4_4_;
  *param_3 = CONCAT44(uStack_20._4_4_ / local_res14,(float)uStack_20 / local_res10);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *param_4 = *(undefined8 *)param_2;
  param_4[1] = uVar1;
  return;
}



// FUNCTION 1420fe1d0 GetScene body=32 status=ok
// SIG undefined GetScene(void)

undefined8 FUMGViewportClient::GetScene(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x1b8);
  }
  return 0;
}



// FUNCTION 1420fe220 FUN_1420fe220 body=29 status=ok
// SIG undefined FUN_1420fe220(void)

undefined4 FUN_1420fe220(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x850) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x850) + 0x2f0);
}



// FUNCTION 1420fe240 FUN_1420fe240 body=464 status=ok
// SIG undefined FUN_1420fe240(void)

int FUN_1420fe240(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  lVar4 = (**(code **)(*param_1 + 0x30))();
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar4 + 0x560);
  iVar6 = *(int *)(lVar4 + 0x58c);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar1 - iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar1 = *(int *)(lVar4 + 0x580);
  puStack_30 = (uint *)(lVar4 + 0x568);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar1 != 0) {
    puVar7 = *(uint **)(lVar4 + 0x578);
    if (*(uint **)(lVar4 + 0x578) == (uint *)0x0) {
      puVar7 = puStack_30;
    }
    uVar2 = *puVar7;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1420fe32b;
      uVar2 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_58._4_4_ = (uStack_50 - iVar6) + 0x1f;
    if (iVar1 < local_58._4_4_) {
LAB_1420fe32b:
      local_58._4_4_ = iVar1;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iVar6 = local_58._4_4_;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  bVar3 = local_58._4_4_ < iVar1;
  local_58 = puStack_30;
  local_40 = (longlong *)(lVar4 + 0x558);
  uStack_50 = 0xffffffff;
  iStack_4c = iVar6;
  if (bVar3) {
    do {
      iVar6 = iStack_4c;
      iVar1 = (int)param_2[1];
      lVar5 = *(longlong *)(lVar4 + 0x558);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar5 + (longlong)iVar6 * 0x10);
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return *(int *)(lVar4 + 0x560) - *(int *)(lVar4 + 0x58c);
}



// FUNCTION 1420fe410 FUN_1420fe410 body=415 status=ok
// SIG undefined FUN_1420fe410(void)

longlong * FUN_1420fe410(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x560) != *(int *)(param_1 + 0x58c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x580);
  puStack_20 = (uint *)(param_1 + 0x568);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar6 = *(uint **)(param_1 + 0x578);
    if (*(uint **)(param_1 + 0x578) == (uint *)0x0) {
      puVar6 = puStack_20;
    }
    uVar2 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_1420fe4ed;
      uVar2 = puVar6[lVar4 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_1420fe4ed:
      local_48._4_4_ = iVar1;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  uStack_c = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iVar5 = local_48._4_4_;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  bVar3 = local_48._4_4_ < iVar1;
  local_48 = puStack_20;
  local_30 = (longlong *)(param_1 + 0x558);
  uStack_40 = 0xffffffff;
  iStack_3c = iVar5;
  if (bVar3) {
    do {
      iVar5 = iStack_3c;
      iVar1 = (int)param_2[1];
      lVar4 = *(longlong *)(param_1 + 0x558);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar4 + (longlong)iVar5 * 0x10);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return param_2;
}



// FUNCTION 1420fe5b0 GetSelectedOption body=56 status=ok
// SIG undefined GetSelectedOption(void)

undefined8 * UComboBoxString::GetSelectedOption(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0xca8) != 0) {
    FString::FString(param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1420fe5f0 FUN_1420fe5f0 body=165 status=ok
// SIG undefined FUN_1420fe5f0(void)

int FUN_1420fe5f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 0xca8);
  if (puVar1 == (undefined8 *)0x0) {
    return -1;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xc80)) {
    lVar7 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar7 + *(longlong *)(param_1 + 0xc78));
      if (*(int *)(puVar1 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar1;
      }
      if (*(int *)(puVar2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar2;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (iVar3 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0xc80));
  }
  return -1;
}



// FUNCTION 1420fe6a0 FUN_1420fe6a0 body=154 status=ok
// SIG undefined FUN_1420fe6a0(void)

ulonglong FUN_1420fe6a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 0x28);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = (**(code **)(*plVar6 + 0x98))(plVar6);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar5 = uVar5 & 0xffffffff;
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1420fe740 GetSize body=144 status=ok
// SIG undefined GetSize(void)

undefined4 * UCanvasPanelSlot::GetSize(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x40) != 0) && (*(longlong **)(lVar1 + 0x38) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x18))();
      if (cVar3 != '\0') {
        if (*(int *)(lVar1 + 0x40) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x38);
        }
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
        *(undefined8 *)(lVar1 + 0x20) = local_18;
        *(undefined8 *)(lVar1 + 0x28) = uStack_10;
      }
    }
    uVar2 = *(undefined4 *)(lVar1 + 0x28);
    param_2[1] = *(undefined4 *)(lVar1 + 0x2c);
    *param_2 = uVar2;
    return param_2;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  return param_2;
}



// FUNCTION 1420fe7d0 FUN_1420fe7d0 body=557 status=ok
// SIG undefined FUN_1420fe7d0(void)

undefined8 * FUN_1420fe7d0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  char local_res18 [8];
  undefined1 local_res20;
  char local_b8 [8];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined **local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar8 != 0) {
    pcVar1 = (char *)(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 == '\0')) {
      local_a0 = 0;
      local_b0 = 0x3f800000;
      uStack_ac = 0;
      uStack_a8 = 0x3f800000;
      uStack_a4 = 0x3f800000;
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      cVar7 = FCachedPropertyPath::IsFullyResolved(param_1 + 0x30);
      if (cVar7 == '\0') {
        local_68 = &PTR_FUN_144fb26a8;
        local_60 = &local_b0;
        local_58 = local_88;
        cVar7 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar8,param_1 + 0x30,&local_68);
      }
      else {
        cVar7 = FUN_1420c6880(lVar8,param_1 + 0x30,&local_b0,local_88);
      }
      plVar6 = plStack_90;
      if (cVar7 != '\0') {
        if (local_res18 != pcVar1) {
          pcVar1[0] = '\0';
          pcVar1[1] = '\x01';
        }
        *(undefined4 *)param_2 = local_b0;
        *(undefined4 *)((longlong)param_2 + 4) = uStack_ac;
        *(undefined4 *)(param_2 + 1) = uStack_a8;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_a4;
        *(undefined1 *)(param_2 + 2) = local_a0;
        param_2[3] = local_98;
        param_2[4] = plStack_90;
        if (plStack_90 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
        if (plStack_90 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar2 = plStack_90 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 != 1) {
          return param_2;
        }
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return param_2;
        }
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return param_2;
      }
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_90 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
    local_res20 = 1;
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 != '\0')) {
      param_1 = param_1 + 0x30;
      local_78 = 0;
      uStack_70 = 0;
      cVar7 = FCachedPropertyPath::IsFullyResolved(param_1);
      if (cVar7 == '\0') {
        local_50 = &PTR_FUN_144fb26c0;
        local_48 = &local_78;
        local_40 = local_80;
        cVar7 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar8,param_1,&local_50);
      }
      else {
        cVar7 = FUN_1420c6620(lVar8,param_1,&local_78,local_80);
      }
      if (cVar7 != '\0') {
        if (local_b8 != pcVar1) {
          pcVar1[0] = '\x01';
          pcVar1[1] = '\x01';
        }
        *param_2 = local_78;
        param_2[1] = uStack_70;
        *(undefined1 *)(param_2 + 2) = 0;
        goto LAB_1420fe9e2;
      }
    }
  }
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  *(undefined1 *)(param_2 + 2) = 0;
LAB_1420fe9e2:
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 1420feb10 FUN_1420feb10 body=102 status=ok
// SIG undefined FUN_1420feb10(void)

void FUN_1420feb10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_146ae7858;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_146ae78d0;
  return;
}



// FUNCTION 1420feb80 FUN_1420feb80 body=315 status=ok
// SIG undefined FUN_1420feb80(void)

void FUN_1420feb80(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *local_res8;
  longlong local_res18;
  longlong local_28 [2];
  code *local_18;
  longlong **pplStack_10;
  
  lVar2 = *(longlong *)(param_1 + -0xf0);
  if (lVar2 != 0) {
    lVar5 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = *(int *)(lVar2 + 0x318);
      if (iVar1 == 0) {
        return;
      }
      iVar4 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar4 = (int)param_2[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar4 * 8),*(void **)(lVar2 + 0x310),
                 (longlong)iVar1 << 3);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0xa0);
  local_28[0] = 0;
  local_28[1] = 0;
  local_res8 = local_28;
  pplStack_10 = &local_res8;
  local_18 = FUN_1420e6740;
  local_res18 = *(longlong *)(lVar2 + 0x28);
  if (local_res18 != 0) {
    FUN_1420e6740(&local_res8,&local_res18);
    FUN_1420f6990(*(undefined8 *)(lVar2 + 0x28),&local_18,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1420fecc0 GetStartTime body=105 status=ok
// SIG undefined GetStartTime(void)

void UWidgetAnimation::GetStartTime(void)

{
  return;
}



// FUNCTION 1420fed30 GetStringValue body=510 status=ok
// SIG undefined GetStringValue(void)

longlong * UTextBinding::GetStringValue(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  char local_res18 [8];
  undefined1 local_res20;
  char local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined **local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar6 != 0) {
    pcVar1 = (char *)(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 == '\0')) {
      local_a0 = 0;
      local_98 = 0;
      cVar5 = FCachedPropertyPath::IsFullyResolved(param_1 + 0x30);
      if (cVar5 == '\0') {
        local_68 = &PTR_FUN_144fb2720;
        local_60 = &local_a0;
        local_58 = local_90;
        cVar5 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar6,param_1 + 0x30,&local_68);
      }
      else {
        cVar5 = FUN_1420c69b0(lVar6,param_1 + 0x30,&local_a0,local_90);
      }
      if (cVar5 != '\0') {
        if (local_res18 != pcVar1) {
          pcVar1[0] = '\0';
          pcVar1[1] = '\x01';
        }
        *param_2 = local_a0;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_98._4_4_;
        return param_2;
      }
      if (local_a0 != 0) {
        FMemory::Free();
      }
    }
    local_res20 = 1;
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 != '\0')) {
      uVar7 = FUN_1404b03b0();
      FText::FText(local_80,uVar7);
      param_1 = param_1 + 0x30;
      cVar5 = FCachedPropertyPath::IsFullyResolved(param_1);
      if (cVar5 == '\0') {
        local_50 = &PTR_FUN_144fb2708;
        local_48 = local_80;
        local_40 = local_88;
        cVar5 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar6,param_1,&local_50);
      }
      else {
        cVar5 = FUN_1420c6ae0(lVar6,param_1,local_80,local_88);
      }
      if (cVar5 != '\0') {
        if (local_a8 != pcVar1) {
          pcVar1[0] = '\x01';
          pcVar1[1] = '\x01';
        }
        uVar7 = FText::ToString(local_80);
        FString::FString(param_2,uVar7);
        if (local_78 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar2 = local_78 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return param_2;
        }
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar3 = (int *)((longlong)local_78 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return param_2;
        }
        (**(code **)(*local_78 + 8))(local_78,1);
        return param_2;
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_78 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar3 = (int *)((longlong)local_78 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1420fef40 GetText body=62 status=ok
// SIG undefined GetText(void)

undefined8 UEditableText::GetText(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x438) != 0) {
    SEditableText::GetText(*(longlong *)(param_1 + 0x438));
    return param_2;
  }
  FText::FText(param_2,param_1 + 0x100);
  return param_2;
}



// FUNCTION 1420fef80 FUN_1420fef80 body=66 status=ok
// SIG undefined FUN_1420fef80(void)

undefined8 FUN_1420fef80(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    SEditableText::GetText(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x3a0));
    return param_2;
  }
  FText::FText(param_2,param_1 + 0x100);
  return param_2;
}



// FUNCTION 1420fefd0 GetText body=62 status=ok
// SIG undefined GetText(void)

undefined8 UMultiLineEditableText::GetText(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    SMultiLineEditableText::GetText(*(longlong *)(param_1 + 0x3c0));
    return param_2;
  }
  FText::FText(param_2,param_1 + 0x120);
  return param_2;
}



// FUNCTION 1420ff010 FUN_1420ff010 body=66 status=ok
// SIG undefined FUN_1420ff010(void)

undefined8 FUN_1420ff010(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    SMultiLineEditableText::GetText(*(undefined8 *)(*(longlong *)(param_1 + 0xbe0) + 0x388));
    return param_2;
  }
  FText::FText(param_2,param_1 + 0x120);
  return param_2;
}



// FUNCTION 1420ff060 FUN_1420ff060 body=82 status=ok
// SIG undefined FUN_1420ff060(void)

undefined8 FUN_1420ff060(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x350);
  if (lVar1 == 0) {
    param_1 = param_1 + 0x120;
  }
  else {
    param_1 = FUN_1404b03b0();
    if (*(char *)(lVar1 + 0x220) != '\0') {
      param_1 = TAttribute<FText>::Get();
    }
  }
  FText::FText(param_2,param_1);
  return param_2;
}



// FUNCTION 1420ff0c0 FUN_1420ff0c0 body=77 status=ok
// SIG undefined FUN_1420ff0c0(void)

undefined8 FUN_1420ff0c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x200) != 0) {
    uVar1 = TAttribute<FText>::Get(*(longlong *)(param_1 + 0x200) + 0x208);
    FText::FText(param_2,uVar1);
    return param_2;
  }
  FText::FText(param_2,param_1 + 0x120);
  return param_2;
}



// FUNCTION 1420ff110 GetTextValue body=532 status=ok
// SIG undefined GetTextValue(void)

undefined8 UTextBinding::GetTextValue(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  char local_res18 [8];
  undefined1 local_res20;
  char local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined **local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined **local_50;
  longlong *local_48;
  undefined1 *local_40;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar7 != 0) {
    pcVar1 = (char *)(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 == '\0')) {
      uVar8 = FUN_1404b03b0();
      FText::FText(local_80,uVar8);
      cVar6 = FCachedPropertyPath::IsFullyResolved(param_1 + 0x30);
      if (cVar6 == '\0') {
        local_68 = &PTR_FUN_144fb2708;
        local_60 = local_80;
        local_58 = local_90;
        cVar6 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar7,param_1 + 0x30,&local_68);
      }
      else {
        cVar6 = FUN_1420c6ae0(lVar7,param_1 + 0x30,local_80,local_90);
      }
      if (cVar6 != '\0') {
        if (local_res18 != pcVar1) {
          pcVar1[0] = '\0';
          pcVar1[1] = '\x01';
        }
        FText::FText(param_2,local_80);
        if (local_78 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar2 = local_78 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return param_2;
        }
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar3 = (int *)((longlong)local_78 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return param_2;
        }
        (**(code **)(*local_78 + 8))(local_78,1);
        return param_2;
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_78 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar3 = (int *)((longlong)local_78 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
    local_res20 = 1;
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 != '\0')) {
      param_1 = param_1 + 0x30;
      local_a0[0] = 0;
      local_a0[1] = 0;
      cVar6 = FCachedPropertyPath::IsFullyResolved(param_1);
      if (cVar6 == '\0') {
        local_50 = &PTR_FUN_144fb2720;
        local_48 = local_a0;
        local_40 = local_88;
        cVar6 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar7,param_1,&local_50);
      }
      else {
        cVar6 = FUN_1420c69b0(lVar7,param_1,local_a0,local_88);
      }
      if (cVar6 != '\0') {
        if (local_a8 != pcVar1) {
          pcVar1[0] = '\x01';
          pcVar1[1] = '\x01';
        }
        FText::FromString(param_2,local_a0);
        if (local_a0[0] == 0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
      if (local_a0[0] != 0) {
        FMemory::Free();
      }
    }
  }
  uVar8 = FUN_1404b03b0();
  FText::FText(param_2,uVar8);
  return param_2;
}



// FUNCTION 1420ff340 FUN_1420ff340 body=170 status=ok
// SIG undefined FUN_1420ff340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1420ff340(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7c60) {
    _Init_thread_header(&DAT_146ae7c60);
    if (DAT_146ae7c60 == -1) {
      _DAT_146ae7c58 = 0xf;
      DAT_146ae7c50 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146ae7c50,0);
      FGenericPlatformString::Memcpy(DAT_146ae7c50,L"FUMGDragDropOp",0x1e);
      atexit((_func_5014 *)&LAB_143ea67e0);
      _Init_thread_footer(&DAT_146ae7c60);
      return &DAT_146ae7c50;
    }
  }
  return &DAT_146ae7c50;
}



// FUNCTION 1420ff3f0 FUN_1420ff3f0 body=123 status=ok
// SIG undefined FUN_1420ff3f0(void)

undefined8 * FUN_1420ff3f0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7ab0) {
    _Init_thread_header(&DAT_146ae7ab0);
    if (DAT_146ae7ab0 == -1) {
      FName::FName(&DAT_146ae7aa8,"FontOutlineSettings",1);
      _Init_thread_footer(&DAT_146ae7ab0);
    }
  }
  *param_1 = DAT_146ae7aa8;
  return param_1;
}



// FUNCTION 1420ff470 FUN_1420ff470 body=123 status=ok
// SIG undefined FUN_1420ff470(void)

undefined8 * FUN_1420ff470(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7a90) {
    _Init_thread_header(&DAT_146ae7a90);
    if (DAT_146ae7a90 == -1) {
      FName::FName(&DAT_146ae7a88,"SlateBrush",1);
      _Init_thread_footer(&DAT_146ae7a90);
    }
  }
  *param_1 = DAT_146ae7a88;
  return param_1;
}



// FUNCTION 1420ff4f0 FUN_1420ff4f0 body=123 status=ok
// SIG undefined FUN_1420ff4f0(void)

undefined8 * FUN_1420ff4f0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7aa0) {
    _Init_thread_header(&DAT_146ae7aa0);
    if (DAT_146ae7aa0 == -1) {
      FName::FName(&DAT_146ae7a98,"SlateFontInfo",1);
      _Init_thread_footer(&DAT_146ae7aa0);
    }
  }
  *param_1 = DAT_146ae7a98;
  return param_1;
}



// FUNCTION 1420ff570 FUN_1420ff570 body=134 status=ok
// SIG undefined FUN_1420ff570(void)

void FUN_1420ff570(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x800);
  if (lVar2 != 0) {
    plVar3 = (longlong *)*param_2;
    iVar1 = (int)param_2[1];
    for (plVar4 = plVar3; plVar4 != plVar3 + iVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar2) {
        if ((int)((longlong)plVar4 - (longlong)plVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar2;
  }
  return;
}



// FUNCTION 1420ff610 BPF_GetTargetDB body=8 status=ok
// SIG undefined BPF_GetTargetDB(void)

undefined8 UAttackComponent::BPF_GetTargetDB(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x798);
}



// FUNCTION 1420ff620 GetValue body=73 status=ok
// SIG undefined GetValue(void)

ulonglong UBoolBinding::GetValue(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  byte local_res8 [8];
  undefined1 local_res10 [24];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x28);
  uVar2 = 0;
  if (lVar1 != 0) {
    local_res8[0] = 0;
    uVar2 = FUN_1420ca650(param_1 + 0x30,lVar1,local_res8,local_res10);
    if ((char)uVar2 != '\0') {
      return (ulonglong)local_res8[0];
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1420ff670 FUN_1420ff670 body=796 status=ok
// SIG undefined FUN_1420ff670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420ff670(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_res18;
  undefined1 local_res20;
  char local_228 [8];
  longlong local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined **local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  byte local_188;
  undefined **local_178;
  undefined ***local_170;
  undefined1 *local_168;
  undefined **local_160;
  longlong *local_158;
  undefined1 *local_150;
  undefined **local_148 [8];
  longlong *local_108;
  longlong *local_d0;
  undefined1 local_c0 [136];
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar6 != 0) {
    cVar5 = *(char *)(param_1 + 0x61);
    pcVar1 = (char *)(param_1 + 0x60);
    if ((cVar5 == '\0') || (*pcVar1 == '\0')) {
      local_188 = local_188 & 0xfc;
      local_1e8 = _DAT_1464aa6c0;
      uStack_1e0 = _DAT_1464aa6c8;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1b0 = (undefined4)DAT_1468b5d88;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_res18 = DAT_1468b5d88;
      uVar8 = local_res18;
      local_res18._4_4_ = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
      local_1a4 = local_res18._4_4_;
      local_1ac = local_res18._4_4_;
      local_198 = 0;
      uStack_190 = 0;
      local_208 = &PTR__scalar_deleting_destructor__143f489a8;
      local_200 = 0x42000000;
      local_1fc = 0x42000000;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1b8 = 0;
      local_1a0 = 0;
      local_19c = 3;
      local_res18 = uVar8;
      local_1a8 = local_1b0;
      cVar5 = FCachedPropertyPath::IsFullyResolved(param_1 + 0x30);
      if (cVar5 == '\0') {
        local_178 = &PTR_FUN_144fb2660;
        local_170 = &local_208;
        local_168 = local_218;
        cVar5 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar6,param_1 + 0x30,&local_178);
      }
      else {
        cVar5 = FUN_1420c6750(lVar6,param_1 + 0x30,&local_208,local_218);
      }
      if (cVar5 != '\0') {
        if ((char *)&local_res18 != pcVar1) {
          pcVar1[0] = '\0';
          pcVar1[1] = '\x01';
        }
        FUN_14080bc50(param_2,&local_208);
        FSlateBrush::~FSlateBrush(&local_208);
        return param_2;
      }
      FSlateBrush::~FSlateBrush(&local_208);
      cVar5 = *(char *)(param_1 + 0x61);
    }
    local_res20 = 1;
    if ((cVar5 == '\0') || (*pcVar1 == '\x01')) {
      param_1 = param_1 + 0x30;
      cVar5 = FCachedPropertyPath::IsFullyResolved(param_1);
      if (cVar5 == '\0') {
        local_160 = &PTR_FUN_144fb2678;
        local_158 = &local_220;
        local_150 = local_210;
        cVar5 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar6,param_1,&local_160);
      }
      else {
        cVar5 = FUN_1420c64f0(lVar6,param_1,&local_220,local_210);
      }
      if ((cVar5 != '\0') && (local_220 != 0)) {
        lVar6 = UTexture2D::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(local_220 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_220 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (local_228 != pcVar1) {
            pcVar1[0] = '\x01';
            pcVar1[1] = '\x01';
          }
          plVar7 = (longlong *)UWidgetBlueprintLibrary::GetPrivateStaticClass();
          if (plVar7[0x1f] == 0) {
            (**(code **)(*plVar7 + 0x368))(plVar7);
          }
          uVar8 = FUN_142107340(local_c0,local_220,0,0);
          FUN_14080bc50(param_2,uVar8);
          FSlateBrush::~FSlateBrush(local_c0);
          return param_2;
        }
      }
    }
  }
  uVar8 = FSlateNoResource::FSlateNoResource(local_148,&DAT_1468b5d88);
  FUN_14080bc50(param_2,uVar8);
  local_148[0] = &PTR__scalar_deleting_destructor__143f489a8;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_d0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_108 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1420ff990 GetValue body=266 status=ok
// SIG undefined GetValue(void)

ulonglong UCheckedStateBinding::GetValue(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte local_res8 [8];
  char local_res10 [8];
  undefined **local_38;
  byte *local_30;
  char *local_28;
  
  uVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
  uVar4 = uVar3;
  if (uVar3 != 0) {
    pcVar1 = (char *)(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 == '\0')) {
      local_res8[0] = 0;
      cVar2 = FCachedPropertyPath::IsFullyResolved(param_1 + 0x30);
      if (cVar2 == '\0') {
        local_38 = &PTR_FUN_144fb2690;
        local_30 = local_res8;
        local_28 = local_res10;
        uVar4 = PropertyPathHelpersInternal::ResolvePropertyPath(uVar3,param_1 + 0x30,&local_38);
      }
      else {
        uVar4 = FUN_1420c6160(uVar3,param_1 + 0x30,local_res8,local_res10);
      }
      if ((char)uVar4 != '\0') {
        if (local_res10 != pcVar1) {
          pcVar1[0] = '\0';
          pcVar1[1] = '\x01';
        }
        return (ulonglong)local_res8[0];
      }
    }
    if ((*(char *)(param_1 + 0x61) == '\0') || (*pcVar1 == '\x01')) {
      local_res8[0] = 0;
      uVar4 = FUN_1420ca650(param_1 + 0x30,uVar3,local_res8,local_res10);
      if ((char)uVar4 != '\0') {
        if (local_res10 != pcVar1) {
          pcVar1[0] = '\x01';
          pcVar1[1] = '\x01';
        }
        return CONCAT71((int7)((ulonglong)local_res10 >> 8),local_res8[0] != 0);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1420ffaa0 GetValue body=154 status=ok
// SIG undefined GetValue(void)

undefined4 UFloatBinding::GetValue(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined **local_28;
  undefined4 *local_20;
  undefined1 *local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x30;
    local_res8[0] = 0;
    cVar1 = FCachedPropertyPath::IsFullyResolved(param_1);
    if (cVar1 == '\0') {
      local_28 = &PTR_FUN_144fb26d8;
      local_20 = local_res8;
      local_18 = local_res10;
      cVar1 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar2,param_1,&local_28);
    }
    else {
      cVar1 = FUN_1420c63c0(lVar2,param_1,local_res8,local_res10);
    }
    if (cVar1 != '\0') {
      return local_res8[0];
    }
  }
  return 0;
}



// FUNCTION 1420ffb40 GetValue body=151 status=ok
// SIG undefined GetValue(void)

undefined4 UInt32Binding::GetValue(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined **local_28;
  undefined4 *local_20;
  undefined1 *local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x30;
    local_res8[0] = 0;
    cVar1 = FCachedPropertyPath::IsFullyResolved(param_1);
    if (cVar1 == '\0') {
      local_28 = &PTR_FUN_144fb26f0;
      local_20 = local_res8;
      local_18 = local_res10;
      cVar1 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar2,param_1,&local_28);
    }
    else {
      cVar1 = FUN_1420c6290(lVar2,param_1,local_res8,local_res10);
    }
    if (cVar1 != '\0') {
      return local_res8[0];
    }
  }
  return 0;
}



// FUNCTION 1420ffbe0 GetValue body=141 status=ok
// SIG undefined GetValue(void)

undefined1 UMouseCursorBinding::GetValue(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined **local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x30;
    local_res8[0] = 0;
    cVar1 = FCachedPropertyPath::IsFullyResolved(param_1);
    if (cVar1 == '\0') {
      local_28 = &PTR_FUN_144fb2690;
      local_20 = local_res8;
      local_18 = local_res10;
      cVar1 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar2,param_1,&local_28);
    }
    else {
      cVar1 = FUN_1420c6160(lVar2,param_1,local_res8,local_res10);
    }
    if (cVar1 != '\0') {
      return local_res8[0];
    }
  }
  return 1;
}



// FUNCTION 1420ffc70 GetValue body=29 status=ok
// SIG undefined GetValue(void)

ulonglong USlider::GetValue(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    uVar1 = FUN_141943670(*(longlong *)(param_1 + 0x3c8));
    return uVar1;
  }
  return (ulonglong)*(uint *)(param_1 + 0x100);
}



// FUNCTION 1420ffc90 FUN_1420ffc90 body=111 status=ok
// SIG undefined FUN_1420ffc90(void)

undefined4 FUN_1420ffc90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x300) != 0) && (*(longlong **)(lVar1 + 0x2f8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x2f8) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x300) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(lVar1 + 0x2f8);
        }
        uVar4 = (**(code **)(*plVar3 + 0x38))();
        *(undefined4 *)(lVar1 + 0x2f0) = uVar4;
      }
    }
    return *(undefined4 *)(lVar1 + 0x2f0);
  }
  return *(undefined4 *)(param_1 + 0x100);
}



// FUNCTION 1420ffd00 GetValue body=149 status=ok
// SIG undefined GetValue(void)

ulonglong UVisibilityBinding::GetValue(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  undefined **local_28;
  byte *local_20;
  undefined1 *local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x28);
  uVar3 = 0;
  if (lVar2 != 0) {
    param_1 = param_1 + 0x30;
    local_res8[0] = 0;
    cVar1 = FCachedPropertyPath::IsFullyResolved(param_1);
    if (cVar1 == '\0') {
      local_28 = &PTR_FUN_144fb2690;
      local_20 = local_res8;
      local_18 = local_res10;
      uVar3 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar2,param_1,&local_28);
    }
    else {
      uVar3 = FUN_1420c6160(lVar2,param_1,local_res8,local_res10);
    }
    if ((char)uVar3 != '\0') {
      return (ulonglong)local_res8[0];
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1420ffda0 GetValue body=219 status=ok
// SIG undefined GetValue(void)

longlong UWidgetBinding::GetValue(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined **local_28;
  longlong *local_20;
  undefined1 *local_18;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (lVar4 != 0) {
    param_1 = param_1 + 0x30;
    local_res8 = 0;
    cVar3 = FCachedPropertyPath::IsFullyResolved(param_1);
    if (cVar3 == '\0') {
      local_28 = &PTR_FUN_144fb2678;
      local_20 = &local_res8;
      local_18 = local_res10;
      cVar3 = PropertyPathHelpersInternal::ResolvePropertyPath(lVar4,param_1,&local_28);
    }
    else {
      cVar3 = FUN_1420c64f0(lVar4,param_1,&local_res8,local_res10);
    }
    lVar4 = local_res8;
    if ((cVar3 != '\0') && (local_res8 != 0)) {
      lVar5 = UWidget::GetPrivateStaticClass();
      lVar1 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1420ffe80 FUN_1420ffe80 body=44 status=ok
// SIG undefined FUN_1420ffe80(void)

undefined8 * FUN_1420ffe80(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x360);
    uVar1 = *(undefined4 *)(lVar2 + 0x6a0);
    *param_2 = *(undefined8 *)(lVar2 + 0x698);
    *(undefined4 *)(param_2 + 1) = uVar1;
  }
  return param_2;
}



// FUNCTION 1420ffeb0 FUN_1420ffeb0 body=20 status=ok
// SIG undefined FUN_1420ffeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1420ffeb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  longlong *plStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [56];
  ulonglong uStack_28;
  
  lVar5 = *(longlong *)(param_1 + 0x850);
  if (lVar5 == 0) {
    return 0.0;
  }
  uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uStack_78 = *(undefined8 *)(lVar5 + 0x2f8);
  plVar4 = *(longlong **)(lVar5 + 0x300);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plStack_70 = plVar4;
  FUN_14182e310(lVar5,auStack_60,lVar5 + 0x394,&uStack_78);
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
  pfVar7 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(lVar5 + 0x2f8),auStack_68);
  fVar9 = pfVar7[1];
  if (*(int *)(lVar5 + 0x378) != 1) {
    fVar9 = *pfVar7;
  }
  fVar8 = (float)FUN_141985b10(lVar5);
  fVar9 = *(float *)(lVar5 + 0x2f0) / fVar9;
  if (fVar9 < 0.0) {
    return 0.0;
  }
  if (1.0 - fVar8 <= fVar9) {
    fVar9 = 1.0 - fVar8;
  }
  return fVar9;
}



// FUNCTION 1420ffed0 FUN_1420ffed0 body=227 status=ok
// SIG undefined FUN_1420ffed0(void)

undefined8 * FUN_1420ffed0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  FUN_1425a2630(param_1 + 0x3d0);
  cVar1 = FUN_142730ad0(param_1,param_3);
  if ((cVar1 == '\0') || (uVar3 = 0x400, (*(byte *)(*(longlong *)(param_3 + 0x10) + 0x30) & 1) == 0)
     ) {
    uVar3 = 0;
  }
  uVar4 = *(uint *)((longlong)param_2 + 4) & 0xfffffbff | uVar3 | 0x200;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar4 = ((*(uint *)(param_1 + 0x20) >> 1 & 0xff) << 0xc ^ uVar4) & 0x1000 ^ uVar4;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar4 = ((*(uint *)(param_1 + 0x18) >> 0x15 & 0xff) << 0xd ^ uVar4) & 0x2000 ^ uVar4;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar3 = 0;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    uVar3 = 0x100000;
  }
  *(uint *)((longlong)param_2 + 4) = uVar3 | uVar4 & 0xffefffff;
  bVar2 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar2 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 1420fffc0 FUN_1420fffc0 body=44 status=ok
// SIG undefined FUN_1420fffc0(void)

undefined8 * FUN_1420fffc0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x360);
    uVar1 = *(undefined4 *)(lVar2 + 0x6ac);
    *param_2 = *(undefined8 *)(lVar2 + 0x6a4);
    *(undefined4 *)(param_2 + 1) = uVar1;
  }
  return param_2;
}



// FUNCTION 1420ffff0 FUN_1420ffff0 body=319 status=ok
// SIG undefined FUN_1420ffff0(void)

ulonglong FUN_1420ffff0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float local_res10;
  float local_res14;
  int local_res18;
  int iStackX_1c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae8750) {
    _Init_thread_header(&DAT_146ae8750);
    if (DAT_146ae8750 == -1) {
      DAT_146ae8740 = DAT_1468c21b0;
      atexit((_func_5014 *)&LAB_143ea6800);
      _Init_thread_footer(&DAT_146ae8750);
    }
  }
  if ((DAT_146ae874c != '\0') && (DAT_146ae8740 == DAT_1468c21b0)) {
    return (ulonglong)DAT_146ae8748;
  }
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  uVar4 = 0x3f800000;
  if (lVar2 != 0) {
    cVar1 = UWorld::IsGameWorld(lVar2);
    uVar4 = 0x3f800000;
    if (cVar1 != '\0') {
      lVar2 = UWorld::GetGameViewport(lVar2);
      uVar4 = 0x3f800000;
      if (lVar2 != 0) {
        FUN_142481d50(lVar2,&local_res10);
        local_res18 = (int)local_res10;
        iStackX_1c = (int)local_res14;
        uVar3 = GetDefault<UUserInterfaceSettings>();
        uVar4 = UUserInterfaceSettings::GetDPIScaleBasedOnSize
                          (uVar3,CONCAT44(iStackX_1c,local_res18));
      }
    }
  }
  DAT_146ae8748 = (int)uVar4;
  DAT_146ae8740 = DAT_1468c21b0;
  DAT_146ae874c = 1;
  return uVar4;
}



// FUNCTION 142100130 FUN_142100130 body=312 status=ok
// SIG undefined FUN_142100130(void)

undefined8 * FUN_142100130(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae8770) {
    _Init_thread_header(&DAT_146ae8770);
    if (DAT_146ae8770 == -1) {
      DAT_146ae8758 = DAT_1468c21b0;
      atexit((_func_5014 *)&LAB_143ea6810);
      _Init_thread_footer(&DAT_146ae8770);
    }
  }
  if ((DAT_146ae8768 != '\0') && (DAT_146ae8758 == DAT_1468c21b0)) {
    *param_1 = DAT_146ae8760;
    return param_1;
  }
  local_res8 = 0x3f800000;
  uStackX_c = 0x3f800000;
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar2 != 0) {
    cVar1 = UWorld::IsGameWorld(lVar2);
    if (cVar1 != '\0') {
      lVar2 = UWorld::GetGameViewport(lVar2);
      if (lVar2 != 0) {
        FUN_142481d50(lVar2,&local_res8);
      }
    }
  }
  DAT_146ae8758 = DAT_1468c21b0;
  *param_1 = CONCAT44(uStackX_c,local_res8);
  DAT_146ae8760 = CONCAT44(uStackX_c,local_res8);
  DAT_146ae8768 = 1;
  return param_1;
}



// FUNCTION 142100270 FUN_142100270 body=338 status=ok
// SIG undefined FUN_142100270(void)

undefined8 * FUN_142100270(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  
  lVar10 = UEngine::GetWorldFromContextObject(DAT_146b17150);
  if ((((lVar10 != 0) && (cVar8 = UWorld::IsGameWorld(lVar10), cVar8 != '\0')) &&
      (lVar10 = UWorld::GetGameViewport(lVar10), lVar10 != 0)) &&
     (plVar3 = *(longlong **)(lVar10 + 0xe8), plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar9 = (int)plVar3[1];
    bVar12 = iVar9 == 0;
    if (bVar12) {
      *(int *)(plVar3 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar9 == (int)plVar3[1];
      if (bVar12) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar3 != (longlong *)0x0) {
          if (*(undefined8 **)(lVar10 + 0xe0) != (undefined8 *)0x0) {
            puVar11 = (undefined8 *)(**(code **)**(undefined8 **)(lVar10 + 0xe0))();
            uVar7 = puVar11[1];
            *param_1 = *puVar11;
            param_1[1] = uVar7;
            uVar7 = puVar11[3];
            param_1[2] = puVar11[2];
            param_1[3] = uVar7;
            uVar4 = *(undefined4 *)((longlong)puVar11 + 0x24);
            uVar5 = *(undefined4 *)(puVar11 + 5);
            uVar6 = *(undefined4 *)((longlong)puVar11 + 0x2c);
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar11 + 4);
            *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
            *(undefined4 *)(param_1 + 5) = uVar5;
            *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
            param_1[6] = puVar11[6];
            LOCK();
            plVar1 = plVar3 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 != 1) {
              return param_1;
            }
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 != 1) {
              return param_1;
            }
            (**(code **)(*plVar3 + 8))(plVar3,1);
            return param_1;
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar9 = (int)plVar3[1];
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(plVar3 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  FGeometry::FGeometry(param_1);
  return param_1;
}



// FUNCTION 1421003d0 FUN_1421003d0 body=21 status=ok
// SIG undefined FUN_1421003d0(void)

undefined8 FUN_1421003d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x128) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x3b0);
  }
  return 0;
}



// FUNCTION 1421003f0 FUN_1421003f0 body=294 status=ok
// SIG undefined FUN_1421003f0(void)

longlong * FUN_1421003f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  char local_res10 [8];
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == 0) {
    plVar7 = (longlong *)(ulonglong)*(byte *)(param_1 + 0xb7);
  }
  else {
    plVar7 = (longlong *)0x0;
    if (((*(int *)(local_18 + 0xc0) == 0) || (*(longlong **)(local_18 + 0xb8) == (longlong *)0x0))
       || (cVar5 = (**(code **)(**(longlong **)(local_18 + 0xb8) + 0x18))(), cVar5 == '\0')) {
      local_res10[0] = *(char *)(local_18 + 0xb0);
    }
    else {
      plVar6 = plVar7;
      if (*(int *)(local_18 + 0xc0) != 0) {
        plVar6 = *(longlong **)(local_18 + 0xb8);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,local_res10);
      *(char *)(local_18 + 0xb0) = local_res10[0];
    }
    if (local_res10[0] != DAT_1464b9ee8) {
      if (local_res10[0] == DAT_1464b9ee9) {
        plVar7 = (longlong *)0x1;
      }
      else if (local_res10[0] == DAT_1464b9eea) {
        plVar7 = (longlong *)0x2;
      }
      else if (local_res10[0] == DAT_1464b9eeb) {
        plVar7 = (longlong *)0x3;
      }
      else if (local_res10[0] == DAT_1464b9eec) {
        plVar7 = (longlong *)&DAT_00000004;
      }
    }
  }
  plVar6 = local_10;
  if (local_10 == (longlong *)0x0) {
    return plVar7;
  }
  LOCK();
  plVar1 = local_10 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*local_10)(local_10);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_10 + 8))(local_10,1);
    }
  }
  return plVar7;
}



// FUNCTION 142100520 GetWidgetAtIndex body=34 status=ok
// SIG undefined GetWidgetAtIndex(void)

undefined8 UWidgetSwitcher::GetWidgetAtIndex(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x108))) {
    return *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)param_2 * 8) + 0x30);
  }
  return 0;
}



// FUNCTION 142100550 FUN_142100550 body=331 status=ok
// SIG undefined FUN_142100550(void)

undefined8 * FUN_142100550(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  puVar11 = (undefined8 *)0x0;
  local_res8[0] = 0;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 8),local_res8,*param_3);
  puVar10 = puVar11;
  if (local_res8[0] != -1) {
    puVar10 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 8));
  }
  puVar9 = puVar10 + 1;
  if (puVar10 == (undefined8 *)0x0) {
    puVar9 = puVar11;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = &local_18;
    local_18 = 0;
    plStack_10 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_20 = (longlong *)puVar9[1];
    puVar11 = (undefined8 *)*puVar9;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    puVar10 = &local_28;
    bVar6 = true;
    bVar5 = false;
    local_28 = puVar11;
  }
  uVar4 = puVar10[1];
  puVar10[1] = 0;
  *puVar10 = 0;
  plVar8 = plStack_10;
  *param_2 = puVar11;
  param_2[1] = uVar4;
  if ((bVar5) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar8 = local_20;
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1421006a0 FUN_1421006a0 body=19 status=ok
// SIG undefined FUN_1421006a0(void)

undefined8 FUN_1421006a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uStackX_8;
  longlong alStackX_10 [3];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  code *pcStack_18;
  undefined8 *puStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (lVar1 == 0) {
    return 0;
  }
  puStack_20 = &uStackX_8;
  uStackX_8 = 0;
  puStack_10 = &uStack_28;
  pcStack_18 = FUN_1420e67b0;
  alStackX_10[0] = *(longlong *)(lVar1 + 0x28);
  if (alStackX_10[0] != 0) {
    uStack_28 = param_2;
    FUN_1420e67b0(&uStack_28,alStackX_10);
    FUN_1420f6990(*(undefined8 *)(lVar1 + 0x28),&pcStack_18,0);
    return uStackX_8;
  }
  return 0;
}



// FUNCTION 1421006c0 GetWidgetTreeOwningClass body=214 status=ok
// SIG undefined GetWidgetTreeOwningClass(void)

longlong UUserWidget::GetWidgetTreeOwningClass(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar2 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14210070b;
  }
  lVar4 = 0;
LAB_14210070b:
  lVar2 = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  do {
    FUN_1417510e0(lVar2);
    if ((*(longlong *)(lVar2 + 0x2e0) != 0) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x2e0) + 0x28) != 0)) {
      return lVar2;
    }
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if (lVar2 == 0) {
      return lVar4;
    }
    lVar3 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  } while (bVar1);
  return lVar4;
}



// FUNCTION 1421007a0 FUN_1421007a0 body=88 status=ok
// SIG undefined FUN_1421007a0(void)

undefined8 * FUN_1421007a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 200);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_1421007df;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_1421007df:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0xc0);
    }
  }
  return param_2;
}



// FUNCTION 142100800 FUN_142100800 body=292 status=ok
// SIG undefined FUN_142100800(void)

void * FUN_142100800(longlong param_1,void *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  longlong *plVar7;
  void *_Dst;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar7 = plVar2;
  plVar8 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x28);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  pvVar6 = (void *)(**(code **)(*plVar8 + 0x70))(plVar8,*(undefined4 *)(param_1 + 0x38));
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  if (param_2 != pvVar6) {
    iVar4 = *(int *)((longlong)pvVar6 + 0x18) + 0x1f;
    uVar5 = iVar4 + (iVar4 >> 0x1f & 0x1fU) & 0xffffffe0;
    if (uVar5 != 0) {
      *(uint *)((longlong)param_2 + 0x1c) = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_2,0);
    }
    iVar4 = *(int *)((longlong)pvVar6 + 0x18);
    *(int *)((longlong)param_2 + 0x18) = iVar4;
    if (iVar4 != 0) {
      iVar4 = *(int *)((longlong)param_2 + 0x1c) + 0x1f;
      _Dst = *(void **)((longlong)param_2 + 0x10);
      if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
        _Dst = param_2;
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((ulonglong)(*(longlong *)((longlong)pvVar6 + 0x10) != 0) - 1 &
                               (ulonglong)pvVar6 | *(ulonglong *)((longlong)pvVar6 + 0x10)),
                 (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_2;
}



// FUNCTION 142100950 GetWorld body=173 status=ok
// SIG undefined GetWorld(void)

longlong UUserWidget::GetWorld(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x200);
  if (lVar3 == 0) {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      cVar2 = FUN_14254a410(param_1 + 0x1f0);
      if ((cVar2 != '\0') && (lVar3 = FLocalPlayerContext::GetWorld(param_1 + 0x1f0), lVar3 != 0)) {
LAB_1421009df:
        FWeakObjectPtr::operator=(param_1 + 0x200,lVar3);
        return lVar3;
      }
      for (plVar1 = *(longlong **)(param_1 + 0x20); plVar1 != (longlong *)0x0;
          plVar1 = (longlong *)plVar1[4]) {
        lVar3 = (**(code **)(*plVar1 + 0x148))(plVar1);
        if (lVar3 != 0) goto LAB_1421009df;
      }
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 142100a00 FUN_142100a00 body=95 status=ok
// SIG undefined FUN_142100a00(void)

undefined8 FUN_142100a00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UWidgetTree::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142100a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142100a60 FUN_142100a60 body=95 status=ok
// SIG undefined FUN_142100a60(void)

undefined8 FUN_142100a60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142100ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142100ac0 GetZOrder body=103 status=ok
// SIG undefined GetZOrder(void)

int UCanvasPanelSlot::GetZOrder(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0xb8) != 0) && (*(longlong **)(lVar1 + 0xb0) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb0) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0xb8) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(lVar1 + 0xb0);
        }
        uVar4 = (**(code **)(*plVar3 + 0x38))();
        *(undefined4 *)(lVar1 + 0xa8) = uVar4;
      }
    }
    return (int)*(float *)(lVar1 + 0xa8);
  }
  return *(int *)(param_1 + 100);
}



// FUNCTION 142100b30 HandleAnnounceGeneratedEntries body=363 status=ok
// SIG undefined HandleAnnounceGeneratedEntries(void)

void UListViewBase::HandleAnnounceGeneratedEntries(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined8 *local_res18;
  
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  local_res18 = (undefined8 *)(param_1 + 0x1b8);
  puVar11 = (undefined4 *)*local_res18;
  puVar1 = puVar11 + (longlong)*(int *)(param_1 + 0x1c0) * 2;
  for (; puVar11 != puVar1; puVar11 = puVar11 + 2) {
    local_res8 = *puVar11;
    local_resc = puVar11[1];
    cVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar5 != '\0') {
      uVar7 = FWeakObjectPtr::Get(&local_res8);
      bVar4 = false;
      *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
      iVar6 = *(int *)(param_1 + 0x1dc);
      iVar8 = *(int *)(param_1 + 0x1d0) + -1;
      lVar10 = (longlong)iVar8;
      if (-1 < iVar8) {
        lVar9 = lVar10 << 4;
        do {
          lVar2 = *(longlong *)(param_1 + 0x1c8);
          if (((*(int *)(lVar9 + 8 + lVar2) == 0) ||
              (plVar3 = *(longlong **)(lVar9 + lVar2), plVar3 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar7), cVar5 == '\0')) {
            bVar4 = true;
          }
          lVar9 = lVar9 + -0x10;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
        iVar6 = *(int *)(param_1 + 0x1dc);
      }
      *(int *)(param_1 + 0x1dc) = iVar6 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0x1c8),0);
      }
      local_res10 = FWeakObjectPtr::Get(&local_res8);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x108);
    }
  }
  *(undefined4 *)(local_res18 + 1) = 0;
  if (*(int *)((longlong)local_res18 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_res18,0);
    return;
  }
  return;
}



// FUNCTION 142100ca0 FUN_142100ca0 body=309 status=ok
// SIG undefined FUN_142100ca0(void)

void FUN_142100ca0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res10;
  longlong *local_28;
  longlong *local_20;
  
  local_res10 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x30))();
  if (lVar4 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    FUN_142100550(lVar4 + 0x438,&local_28,&local_res10);
    plVar6 = local_20;
    plVar7 = local_28;
    if (local_28 != (longlong *)0x0) {
      plVar7 = local_28 + -0x61;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      param_2 = local_res10;
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)();
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        param_2 = local_res10;
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
          param_2 = local_res10;
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x208))(plVar7,param_3);
    }
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(uVar5,param_2,param_3);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  return;
}



// FUNCTION 142100de0 FUN_142100de0 body=595 status=ok
// SIG undefined FUN_142100de0(void)

longlong * FUN_142100de0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar7 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_4);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1,local_78,param_3);
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  *(undefined4 *)(lVar7 + 0x160) = *puVar8;
  *(undefined4 *)(lVar7 + 0x164) = uVar3;
  *(undefined4 *)(lVar7 + 0x168) = uVar4;
  *(undefined4 *)(lVar7 + 0x16c) = uVar5;
  plVar2 = *(longlong **)(lVar7 + 0xe8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar11 = iVar6 == 0;
    if (bVar11) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar6 == (int)plVar2[1];
      if (bVar11) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar2 != (longlong *)0x0) {
          lVar10 = *(longlong *)(lVar7 + 0xe0);
          if (lVar10 != 0) {
            local_68 = *(undefined4 *)(lVar7 + 0x160);
            uStack_64 = *(undefined4 *)(lVar7 + 0x164);
            uStack_60 = *(undefined4 *)(lVar7 + 0x168);
            uStack_5c = *(undefined4 *)(lVar7 + 0x16c);
            local_30 = 1;
            local_28 = 0;
            local_20 = 0;
            local_58 = 1;
            local_50 = 0;
            local_48 = 0;
            local_40 = local_68;
            uStack_3c = uStack_64;
            uStack_38 = uStack_60;
            uStack_34 = uStack_5c;
            TBaseDelegate<FSlateBrush_const_*>::operator=(&local_50,&local_28);
            *(undefined1 *)(lVar10 + 0x250) = local_58;
            *(undefined4 *)(lVar10 + 0x240) = local_68;
            *(undefined4 *)(lVar10 + 0x244) = uStack_64;
            *(undefined4 *)(lVar10 + 0x248) = uStack_60;
            *(undefined4 *)(lVar10 + 0x24c) = uStack_5c;
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 600,&local_50);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
          }
          LOCK();
          plVar9 = plVar2 + 1;
          lVar10 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
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
        break;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  plVar9 = (longlong *)FUN_1420f9830(lVar7,local_88);
  plVar2 = (longlong *)plVar9[1];
  lVar7 = *plVar9;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  lVar10 = lVar7 + 0x308;
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  *param_2 = lVar10;
  param_2[1] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar2 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return param_2;
}



// FUNCTION 142101040 FUN_142101040 body=1070 status=ok
// SIG undefined FUN_142101040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142101040(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_518 [32];
  longlong local_4f8;
  longlong local_4f0;
  undefined4 local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  undefined1 local_4c8;
  undefined1 local_4c0;
  longlong local_4b8;
  undefined1 local_4a8 [8];
  undefined8 local_4a0;
  longlong local_498;
  longlong local_490;
  code *local_488;
  undefined1 *puStack_480;
  longlong local_478 [2];
  undefined1 local_468 [8];
  longlong *local_460;
  undefined1 local_450;
  undefined8 local_448;
  undefined4 local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined1 *puStack_430;
  longlong *local_428;
  longlong *local_420;
  undefined1 local_410 [8];
  longlong *local_408;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_518;
  local_4a0 = 0;
  if (((*(longlong *)(param_1 + 0x118) != 0) &&
      (lVar6 = FWeakObjectPtr::Get(param_1 + 0x110), lVar6 != 0)) &&
     (lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x118)), lVar6 != 0)) {
    local_490 = 0;
    local_498 = param_3;
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x110);
    uVar8 = FUN_14178ac60(plVar7,*(undefined8 *)(param_1 + 0x118));
    (**(code **)(*plVar7 + 0x208))(plVar7,uVar8,&local_498);
    if (local_490 != 0) {
      puStack_480 = local_4a8;
      local_4a8[0] = 0;
      local_488 = UE4Function_Private::
                  TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                  ::Call;
      local_438 = 0x420e6680;
      uStack_434 = 1;
      puStack_430 = puStack_480;
      FUN_14213eb80(local_490,param_2,&local_438);
      return param_2;
    }
  }
  bVar9 = param_3 == 0;
  if (bVar9) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_410,L"null",&DAT_144f9d278,L"null");
  }
  else {
    local_4a0 = *(undefined8 *)(param_3 + 0x18);
    FName::ToString(&local_4a0,local_478);
    uVar8 = FText::FromString(local_3f8,local_478);
  }
  FText::FText(local_468,uVar8);
  local_450 = 1;
  local_448 = 0;
  local_440 = 0;
  lVar6 = STextBlock::FArguments::FArguments(local_3d8);
  FText::operator=(lVar6 + 0x108,local_468);
  *(undefined1 *)(lVar6 + 0x120) = local_450;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x128,&local_448);
  plVar7 = (longlong *)operator_new(0x660);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_144043520;
    if (plVar7 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar1 = plVar7 + 2;
  local_428 = plVar1;
  local_420 = plVar7;
  FUN_14044f790(&local_428,plVar1);
  local_4f8 = 0x650;
  SWidget::SetDebugInfo
            (plVar1,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBox.cpp",0x32);
  local_4e8 = *(undefined4 *)(lVar6 + 0x90);
  local_4b8 = lVar6 + 0xf8;
  local_4d0 = lVar6 + 0xe8;
  local_4c0 = *(undefined1 *)(lVar6 + 0xf1);
  local_4d8 = lVar6 + 200;
  local_4e0 = lVar6 + 0x98;
  local_4c8 = *(undefined1 *)(lVar6 + 0xf0);
  local_4f0 = lVar6 + 0x78;
  local_4f8 = lVar6 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar6,lVar6 + 0x30,lVar6 + 0x40);
  FUN_1419b0120(plVar1,lVar6);
  if (((char)plVar7[5] < '\0') || (cVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar4 != '\0')) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    LOCK();
    plVar1 = plVar7 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  FUN_140691150(local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_448);
  if (local_460 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_460 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_460)(local_460);
      LOCK();
      piVar2 = (int *)((longlong)local_460 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_460 + 8))(local_460,1);
      }
    }
  }
  if ((bVar9) && (local_408 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_408 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_408)(local_408);
      LOCK();
      piVar2 = (int *)((longlong)local_408 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_408 + 8))(local_408,1);
      }
    }
  }
  if ((!bVar9) && (local_3f0 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_3f0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar2 = (int *)((longlong)local_3f0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  if ((!bVar9) && (local_478[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142101470 FUN_142101470 body=1519 status=ok
// SIG undefined FUN_142101470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142101470(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  void *_Src;
  bool bVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  void **ppvVar12;
  void *pvVar13;
  void *_Src_00;
  undefined1 auStack_568 [32];
  longlong local_548;
  longlong local_540;
  undefined4 local_538;
  longlong local_530;
  longlong local_528;
  longlong local_520;
  undefined1 local_518;
  undefined1 local_510;
  longlong local_508;
  void *local_4f8;
  int local_4f0;
  void *local_4e8;
  int local_4e0;
  undefined4 local_4dc;
  void *local_4d8;
  int local_4d0;
  undefined4 uStack_4cc;
  void *local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  longlong local_4b8;
  void *local_4b0;
  undefined8 local_4a8;
  undefined1 local_4a0 [8];
  longlong *local_498;
  undefined1 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined1 local_424;
  undefined1 local_420;
  undefined8 local_418;
  undefined4 local_410;
  longlong *local_408;
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_568;
  _Src_00 = (void *)0x0;
  local_4f8 = (void *)((ulonglong)local_4f8 & 0xffffffff00000000);
  puVar4 = (undefined8 *)*param_3;
  pvVar13 = (void *)0x0;
  if (puVar4 == (undefined8 *)0x0) {
    local_4a8 = 0;
    ppvVar12 = &local_4b0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    iVar3 = *(int *)(puVar4 + 1);
    _Src = (void *)*puVar4;
    local_4d8 = (void *)0x0;
    local_4d0 = iVar3;
    if (iVar3 == 0) {
      uStack_4cc = 0;
      ppvVar12 = &local_4d8;
      bVar6 = true;
      bVar5 = false;
      pvVar13 = _Src_00;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4d8,iVar3,0);
      pvVar13 = local_4d8;
      _guard_xfg_dispatch_icall_nop(local_4d8,_Src,(longlong)iVar3 * 2);
      ppvVar12 = &local_4d8;
      bVar6 = true;
      bVar5 = false;
    }
  }
  *ppvVar12 = (void *)0x0;
  local_4e0 = *(int *)(ppvVar12 + 1);
  local_4dc = *(undefined4 *)((longlong)ppvVar12 + 0xc);
  ppvVar12[1] = (void *)0x0;
  local_4e8 = pvVar13;
  if ((bVar5) && (local_4b0 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar6) && (local_4d8 != (void *)0x0)) {
    FMemory::Free();
  }
  local_4f8 = (void *)0x0;
  if (((*(longlong *)(param_1 + 0xc50) != 0) &&
      (lVar9 = FWeakObjectPtr::Get(param_1 + 0xc48), lVar9 != 0)) &&
     (lVar9 = UObject::FindFunction(lVar9,*(undefined8 *)(param_1 + 0xc50)), pvVar13 = local_4e8,
     lVar9 != 0)) {
    lVar9 = (longlong)local_4e0;
    local_4f8 = (void *)0x0;
    local_4f0 = local_4e0;
    if (local_4e0 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4f8,local_4e0,0);
      _Src_00 = local_4f8;
      _guard_xfg_dispatch_icall_nop(local_4f8,pvVar13,lVar9 * 2);
    }
    iVar3 = local_4f0;
    local_4c8 = (void *)0x0;
    local_4bc = 0;
    local_4b8 = 0;
    local_4c0 = local_4f0;
    if (local_4f0 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4c8,local_4f0,0);
      _guard_xfg_dispatch_icall_nop(local_4c8,_Src_00,(longlong)iVar3 * 2);
    }
    plVar10 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xc48);
    uVar11 = FUN_14178ac60(plVar10,*(undefined8 *)(param_1 + 0xc50));
    (**(code **)(*plVar10 + 0x208))(plVar10,uVar11,&local_4c8);
    lVar9 = local_4b8;
    if (local_4c8 != (void *)0x0) {
      FMemory::Free();
    }
    if (_Src_00 != (void *)0x0) {
      FMemory::Free(_Src_00);
    }
    if (lVar9 != 0) {
      UWidget::TakeWidget(lVar9,param_2);
      if (local_4e8 != (void *)0x0) {
        FMemory::Free();
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
      return param_2;
    }
  }
  local_470 = *(undefined8 *)(param_1 + 0xbc8);
  local_460 = *(undefined4 *)(param_1 + 0xbd8);
  uStack_45c = *(undefined4 *)(param_1 + 0xbdc);
  uStack_458 = *(undefined4 *)(param_1 + 0xbe0);
  uStack_454 = *(undefined4 *)(param_1 + 0xbe4);
  local_468 = *(undefined8 *)(param_1 + 0xbd0);
  local_450 = *(undefined4 *)(param_1 + 0xbe8);
  uStack_44c = *(undefined4 *)(param_1 + 0xbec);
  uStack_448 = *(undefined4 *)(param_1 + 0xbf0);
  uStack_444 = *(undefined4 *)(param_1 + 0xbf4);
  local_440 = *(undefined8 *)(param_1 + 0xbf8);
  local_438 = *(longlong **)(param_1 + 0xc00);
  if (local_438 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_438 + 1) = (int)local_438[1] + 1;
    UNLOCK();
  }
  local_430 = *(undefined8 *)(param_1 + 0xc08);
  local_428 = *(undefined4 *)(param_1 + 0xc10);
  local_424 = *(undefined1 *)(param_1 + 0xc14);
  local_420 = 1;
  local_418 = 0;
  local_410 = 0;
  uVar11 = FText::FromString(local_3f0,&local_4e8);
  FText::FText(local_4a0,uVar11);
  local_488 = 1;
  local_480 = 0;
  local_478 = 0;
  lVar9 = STextBlock::FArguments::FArguments(local_3d8);
  FText::operator=(lVar9 + 0x108,local_4a0);
  *(undefined1 *)(lVar9 + 0x120) = local_488;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_480);
  FUN_1417f9360(lVar9 + 0x140,&local_470);
  *(undefined1 *)(lVar9 + 400) = local_420;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x198,&local_418);
  plVar10 = (longlong *)operator_new(0x660);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144043520;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar1 = plVar10 + 2;
  local_408 = plVar1;
  local_400 = plVar10;
  FUN_14044f790(&local_408,plVar1);
  local_548 = 0x650;
  SWidget::SetDebugInfo
            (plVar1,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxString.cpp",
             0x119);
  local_538 = *(undefined4 *)(lVar9 + 0x90);
  local_508 = lVar9 + 0xf8;
  local_520 = lVar9 + 0xe8;
  local_510 = *(undefined1 *)(lVar9 + 0xf1);
  local_528 = lVar9 + 200;
  local_530 = lVar9 + 0x98;
  local_518 = *(undefined1 *)(lVar9 + 0xf0);
  local_540 = lVar9 + 0x78;
  local_548 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1419b0120(plVar1,lVar9);
  if (((char)plVar10[5] < '\0') || (cVar7 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar8;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  FUN_140691150(local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_480);
  if (local_498 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_498 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_498)(local_498);
      LOCK();
      piVar2 = (int *)((longlong)local_498 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_498 + 8))(local_498,1);
      }
    }
  }
  if (local_3e8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_3e8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_3e8)(local_3e8);
      LOCK();
      piVar2 = (int *)((longlong)local_3e8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3e8 + 8))(local_3e8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
  plVar10 = local_438;
  if (local_438 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_438 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_438)(local_438);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_438 + 8))(local_438,1);
      }
    }
  }
  if (local_4e8 != (void *)0x0) {
    FMemory::Free();
  }
  plVar10 = (longlong *)param_3[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_2;
}



// FUNCTION 142101a60 FUN_142101a60 body=1097 status=ok
// SIG undefined FUN_142101a60(void)

longlong * FUN_142101a60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong local_res8;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  code *local_78;
  ulonglong *puStack_70;
  code *local_68;
  undefined1 *puStack_60;
  code *local_58;
  ulonglong *puStack_50;
  code *local_48;
  undefined1 *puStack_40;
  
  plStack_e0 = (longlong *)0x0;
  local_res8 = 0;
  if (((param_1[0x25] == 0) || (lVar6 = FWeakObjectPtr::Get(param_1 + 0x24), lVar6 == 0)) ||
     (lVar6 = UObject::FindFunction(lVar6,param_1[0x25]), lVar6 == 0)) {
    if (param_1[0x23] != 0) {
      lVar9 = UUserWidget::GetPrivateStaticClass();
      lVar6 = param_1[0x23];
joined_r0x000142101bff:
      if (lVar6 != 0) {
        if (lVar6 != lVar9) goto code_r0x000142101c0a;
        if (param_1[0x23] != 0) {
          lVar9 = UUserWidget::GetPrivateStaticClass();
          for (lVar6 = param_1[0x23];
              (lVar10 = 0, lVar6 != 0 && (lVar10 = param_1[0x23], lVar6 != lVar9));
              lVar6 = *(longlong *)(lVar6 + 0x30)) {
          }
          if (((*(byte *)(lVar10 + 0xb4) & 1) == 0) &&
             (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) {
            local_res18[1] = 0;
            lVar6 = FUN_1420c4b00(lVar6,param_1[0x23],0);
            if (lVar6 == 0) goto LAB_142101c13;
            puStack_60 = local_res10;
            local_res10[0] = 0;
            local_68 = UE4Function_Private::
                       TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                       ::Call;
            local_48 = UE4Function_Private::
                       TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                       ::Call;
            puStack_40 = puStack_60;
            FUN_14213eb80(lVar6,&local_c8,&local_48);
            plVar7 = local_c0;
            local_a0 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            local_e8 = local_c8;
            local_a8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_e0,&local_a0);
            plVar2 = local_a0;
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_a0 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              plVar7 = local_c0;
              if ((int)lVar6 == 1) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar7 = local_c0;
                if (iVar3 == 1) {
                  (**(code **)(*local_a0 + 8))(local_a0,1);
                  plVar7 = local_c0;
                }
              }
            }
            plVar2 = local_c0;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar7 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar6 != 1) goto LAB_142101e6d;
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 != 1) goto LAB_142101e6d;
              goto LAB_142101e62;
            }
            goto LAB_142101e6d;
          }
        }
      }
    }
  }
  else {
    local_res18[0] = 0;
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x24);
    uVar8 = FUN_14178ac60(plVar7,param_1[0x25]);
    (**(code **)(*plVar7 + 0x208))(plVar7,uVar8,local_res18);
    if (local_res18[0] != 0) {
      puStack_70 = &local_res8;
      local_res8 = local_res8 & 0xffffffffffffff00;
      local_78 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_58 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      puStack_50 = puStack_70;
      FUN_14213eb80(local_res18[0],&local_d8,&local_58);
      plVar7 = local_d0;
      local_b0 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      local_e8 = local_d8;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_e0,&local_b0);
      plVar2 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_b0 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar7 = local_d0;
        if ((int)lVar6 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = local_d0;
          if (iVar3 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
            plVar7 = local_d0;
          }
        }
      }
      plVar2 = local_d0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar7 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_c0 = local_d0;
          if (iVar3 == 1) {
LAB_142101e62:
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
LAB_142101e6d:
      if (local_e8 != 0) {
        local_88 = local_e8;
        plStack_80 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
          UNLOCK();
        }
        plVar7 = &local_88;
        bVar5 = true;
        bVar4 = false;
        goto LAB_142101c3b;
      }
    }
  }
LAB_142101c13:
  local_98 = DAT_1469eb218;
  local_90 = DAT_1469eb220;
  if (DAT_1469eb220 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
    UNLOCK();
  }
  plVar7 = &local_98;
  bVar5 = false;
  bVar4 = true;
LAB_142101c3b:
  plVar2 = local_90;
  *param_2 = *plVar7;
  lVar6 = plVar7[1];
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_90 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar7 = plStack_80;
  if ((bVar5) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar7 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_e0 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
      }
    }
  }
  return param_2;
code_r0x000142101c0a:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x000142101bff;
}



// FUNCTION 142101eb0 FUN_142101eb0 body=1614 status=ok
// SIG undefined FUN_142101eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142101eb0(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  size_t _Size;
  undefined1 *puVar19;
  longlong lVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  ulonglong *local_108;
  longlong *local_100;
  undefined8 *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  longlong local_48 [2];
  
  puVar19 = &stack0xffffffffffffffc8;
  local_48[1] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  iVar5 = *(int *)(param_1 + 0xc);
  lVar20 = 0;
  if (iVar5 < (int)DAT_1469e91c4) {
    uVar17 = iVar5 >> 0x1f & 0xffff;
    uVar4 = iVar5 + uVar17;
    lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
             (longlong)(int)((uVar4 & 0xffff) - uVar17) * 0x18;
  }
  *(uint *)(lVar20 + 8) = *(uint *)(lVar20 + 8) & 0xbfffffff;
  local_100 = param_3;
  local_e0 = param_1;
  local_d8 = param_2;
  if (((param_4 != '\0') && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (iVar5 = (**(code **)(*(longlong *)*param_3 + 0x28))(), 0 < iVar5)) {
    puVar9 = (undefined8 *)FName::FName(local_90,"ImageWrapper",1);
    uVar2 = *puVar9;
    uVar10 = FUN_14168dc80();
    plVar11 = (longlong *)FUN_141690010(uVar10,uVar2);
    local_118 = 0;
    (**(code **)(*plVar11 + 0x40))(plVar11,local_70,0,2);
    local_118 = 0;
    (**(code **)(*plVar11 + 0x40))(plVar11,local_60,1,2);
    local_118 = 0;
    (**(code **)(*plVar11 + 0x40))(plVar11,local_50,3,2);
    local_108 = local_70;
    lVar20 = 3;
    do {
      plVar11 = (longlong *)local_108[1];
      plVar13 = (longlong *)*local_108;
      local_e8 = plVar11 + 1;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)local_e8 = (int)*local_e8 + 1;
        UNLOCK();
      }
      if (plVar13 != (longlong *)0x0) {
        param_3 = (longlong *)*param_3;
        puVar12 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3);
        puVar9 = (undefined8 *)*plVar13;
        uVar2 = *puVar12;
        uVar6 = (**(code **)(*param_3 + 0x28))(param_3);
        cVar3 = (*(code *)*puVar9)(plVar13,uVar2,uVar6);
        plVar16 = (longlong *)0x0;
        param_3 = local_100;
        if (cVar3 != '\0') {
          local_f8 = (undefined8 *)0x0;
          cVar3 = (**(code **)(*plVar13 + 0x18))(plVar13,2,8,&local_f8);
          param_3 = local_100;
          if (cVar3 != '\0') {
            local_d0 = 2;
            local_cc = 0x100;
            local_c8 = 3;
            uVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
            uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13);
            plVar13 = (longlong *)FUN_142850880(uVar7,uVar6,&local_d0);
            param_3 = local_100;
            if (plVar13 != (longlong *)0x0) {
              *(byte *)((longlong)plVar13 + 0x4b) = *(byte *)((longlong)plVar13 + 0x4b) | 1;
              (**(code **)(*plVar13 + 0x278))(plVar13);
              if ((DAT_146ac3ac5 == '\0') &&
                 (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0'))
                  || (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
                local_c0 = plVar13[0xc];
                local_b8 = (longlong *)0x0;
                local_b0 = *(int *)(local_f8 + 1);
                _Size = (size_t)local_b0;
                _Src = (void *)*local_f8;
                if (local_b0 == 0) {
                  local_ac = 0;
                }
                else {
                  TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
                  plVar16 = local_b8;
                  _guard_xfg_dispatch_icall_nop(local_b8,_Src,_Size);
                }
                FUN_1420f2490(&local_c0,2,local_88);
                if (plVar16 != (longlong *)0x0) {
                  FMemory::Free(plVar16);
                }
              }
              else {
                local_a8 = plVar13[0xc];
                puVar14 = (ulonglong *)FBaseGraphTask::GetSmallTaskAllocator();
                local_108 = puVar14;
                plVar15 = TlsGetValue((DWORD)*puVar14);
                if (plVar15 == (longlong *)0x0) {
                  plVar15 = (longlong *)operator_new(0x18);
                  if (plVar15 != (longlong *)0x0) {
                    *plVar15 = 0;
                    plVar15[1] = 0;
                    *(undefined4 *)(plVar15 + 2) = 0;
                    plVar16 = plVar15;
                  }
                  TlsSetValue((DWORD)*puVar14,plVar16);
                  plVar15 = plVar16;
                }
                plVar16 = (longlong *)plVar15[1];
                if (plVar16 == (longlong *)0x0) {
                  plVar16 = (longlong *)*plVar15;
                  if (plVar16 == (longlong *)0x0) {
                    plVar16 = (longlong *)
                              TLockFreePointerListLIFOPad<void_*,128>::Pop(local_108 + 1);
                    plVar15[1] = (longlong)plVar16;
                    if (plVar16 == (longlong *)0x0) {
                      puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
                      plVar15[1] = (longlong)puVar9;
                      lVar18 = 0x1f;
                      do {
                        puVar12 = puVar9 + 0x20;
                        *puVar9 = puVar12;
                        lVar18 = lVar18 + -1;
                        puVar9 = puVar12;
                      } while (lVar18 != 0);
                      *puVar12 = 0;
                      plVar16 = (longlong *)plVar15[1];
                    }
                    iVar5 = 0x20;
                    *(undefined4 *)(plVar15 + 2) = 0x20;
                  }
                  else {
                    iVar5 = 0x20;
                    plVar15[1] = (longlong)plVar16;
                    *(undefined4 *)(plVar15 + 2) = 0x20;
                    *plVar15 = 0;
                  }
                }
                else {
                  iVar5 = (int)plVar15[2];
                }
                plVar15[1] = *plVar16;
                *(int *)(plVar15 + 2) = iVar5 + -1;
                *(undefined4 *)(plVar16 + 1) = 0xff;
                *plVar16 = (longlong)&PTR_FUN_143f3edd8;
                local_80 = 0;
                local_78 = 0;
                *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
                *plVar16 = (longlong)&PTR_FUN_144fa29e0;
                *(undefined1 *)(plVar16 + 5) = 0;
                plVar16[6] = 0;
                `UAsyncTaskDownloadImage::HandleImageRequest'::`18'::
                EURCMacro_FWriteRawDataToTexture::EURCMacro_FWriteRawDataToTexture
                          (plVar16 + 2,local_a8,local_f8);
                lVar18 = plVar16[6];
                piVar1 = (int *)(lVar18 + 0x48);
                if (lVar18 != 0) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                local_f0 = lVar18;
                FUN_14048a160(plVar16,0,0xff,1);
                if (lVar18 != 0) {
                  LOCK();
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    FGraphEvent::Recycle(local_f0);
                  }
                }
              }
              local_a0 = plVar13;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (local_e0 + 0x30,&local_a0);
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                lVar18 = *local_e8;
                *(int *)local_e8 = (int)*local_e8 + -1;
                UNLOCK();
                if ((int)lVar18 == 1) {
                  (**(code **)*plVar11)(plVar11);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              do {
                plVar11 = *(longlong **)(puVar19 + -0x10);
                puVar19 = puVar19 + -0x10;
                lVar20 = lVar20 + -1;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plVar11 + 1;
                  lVar18 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar18 == 1) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    iVar5 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar11 + 8))(plVar11,1);
                    }
                  }
                }
              } while (lVar20 != 0);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_d8);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_100);
              return;
            }
          }
        }
      }
      puVar14 = local_108;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar11 + 1;
        lVar18 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (plVar11 != (longlong *)0x0)) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      local_108 = puVar14 + 2;
    } while (local_108 != (ulonglong *)(local_48 + 1));
    do {
      plVar11 = *(longlong **)(puVar19 + -0x10);
      puVar19 = puVar19 + -0x10;
      lVar20 = lVar20 + -1;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar11 + 1;
        lVar18 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    } while (lVar20 != 0);
  }
  local_98 = 0;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (local_e0 + 0x40,&local_98);
  plVar11 = *(longlong **)(local_d8 + 8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    lVar20 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = (longlong *)param_3[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    lVar20 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 142102510 HandleItemClicked body=51 status=ok
// SIG undefined HandleItemClicked(void)

void ITypedUMGListView<UObject_*>::HandleItemClicked(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x50))();
  uVar1 = (**(code **)*param_1)(param_1);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(uVar1,param_2);
  return;
}



// FUNCTION 142102550 HandleItemDoubleClicked body=52 status=ok
// SIG undefined HandleItemDoubleClicked(void)

void ITypedUMGListView<UObject_*>::HandleItemDoubleClicked(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x58))();
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(uVar1,param_2);
  return;
}



// FUNCTION 142102590 FUN_142102590 body=555 status=ok
// SIG undefined FUN_142102590(void)

void FUN_142102590(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 local_res10;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  
  local_res10 = param_2;
  lVar6 = (**(code **)(*param_1 + 0x30))();
  if (lVar6 == 0) {
    return;
  }
  FUN_142100550(lVar6 + 0x438,&local_38,&local_res10);
  plVar8 = local_30;
  if (local_38 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = local_38 + -0x308;
  }
  lVar6 = local_28;
  plVar10 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      plVar10 = local_30;
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  plVar8 = local_30;
  if (lVar6 == 0) {
    if (plVar10 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar10 = plVar10 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 != 1) {
      return;
    }
    (**(code **)(*local_30 + 8))(local_30,1);
    return;
  }
  lVar6 = *(longlong *)(local_28 + 0x300);
  if (lVar6 != 0) {
    lVar7 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1421026a5;
  }
  lVar6 = 0;
LAB_1421026a5:
  plVar8 = local_30;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar10 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar6 != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,local_res10,lVar6);
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
    bVar3 = false;
    *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
    iVar5 = *(int *)((longlong)plVar8 + 0x14);
    iVar9 = (int)plVar8[1] + -1;
    lVar7 = (longlong)iVar9;
    if (-1 < iVar9) {
      lVar11 = lVar7 << 4;
      bVar3 = false;
      do {
        if (((*(int *)(lVar11 + 8 + *plVar8) == 0) ||
            (plVar10 = *(longlong **)(lVar11 + *plVar8), plVar10 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar10 + 0x40))(plVar10,local_res10,lVar6), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar11 = lVar11 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      iVar5 = *(int *)((longlong)plVar8 + 0x14);
    }
    *(int *)((longlong)plVar8 + 0x14) = iVar5 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,0);
    }
  }
  return;
}



// FUNCTION 1421027c0 FUN_1421027c0 body=463 status=ok
// SIG undefined FUN_1421027c0(void)

void FUN_1421027c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint local_res8;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  uint local_20;
  
  FKey::operator=((undefined8 *)(param_1 + 0x558));
  *(uint *)(param_1 + 0x570) =
       *(uint *)(param_1 + 0x570) ^ (*(uint *)(param_1 + 0x570) ^ *(uint *)(param_2 + 0x18)) & 1;
  uVar7 = (*(uint *)(param_1 + 0x570) ^ *(uint *)(param_2 + 0x18)) & 2 ^ *(uint *)(param_1 + 0x570);
  *(uint *)(param_1 + 0x570) = uVar7;
  uVar7 = (*(uint *)(param_2 + 0x18) ^ uVar7) & 4 ^ uVar7;
  *(uint *)(param_1 + 0x570) = uVar7;
  uVar7 = (*(uint *)(param_2 + 0x18) ^ uVar7) & 8 ^ uVar7;
  *(uint *)(param_1 + 0x570) = uVar7;
  plVar5 = *(longlong **)(param_1 + 0x568);
  local_38 = *(undefined8 *)(param_1 + 0x558);
  local_30 = *(undefined8 *)(param_1 + 0x560);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar7 = *(uint *)(param_1 + 0x570);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_20 = local_20 ^ ((local_res8 ^ uVar7) & 0xf ^ local_res8 ^ local_20) & 0xf;
  local_58 = DAT_1469eae28;
  local_50 = DAT_1469eae30;
  local_48 = DAT_1469eae38;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
    UNLOCK();
  }
  local_40 = local_40 & 0xfffffff0;
  local_28 = plVar5;
  FKey::operator=(&local_58,&local_38);
  local_40 = local_40 ^ (local_20 ^ local_40) & 0xf;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x630,&local_58);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 142102990 HandleListEntryHovered body=136 status=ok
// SIG undefined HandleListEntryHovered(void)

void UListView::HandleListEntryHovered(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong local_18;
  undefined1 local_10;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 != 0) {
    uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
    cVar3 = UClass::ImplementsInterface(lVar1,uVar2);
    if (cVar3 != '\0') {
      local_18 = FUN_142150eb0(param_2);
      if (local_18 != 0) {
        uVar2 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x10))();
        TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(uVar2,local_18,1);
        local_10 = 1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2e8,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 142102a20 HandleListEntryUnhovered body=136 status=ok
// SIG undefined HandleListEntryUnhovered(void)

void UListView::HandleListEntryUnhovered(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong local_18;
  undefined1 local_10;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 != 0) {
    uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
    cVar3 = UClass::ImplementsInterface(lVar1,uVar2);
    if (cVar3 != '\0') {
      local_18 = FUN_142150eb0(param_2);
      if (local_18 != 0) {
        uVar2 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x10))();
        TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(uVar2,local_18,0);
        local_10 = 0;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2e8,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 142102ab0 HandleMenuOpenChanged body=30 status=ok
// SIG undefined HandleMenuOpenChanged(void)

void UMenuAnchor::HandleMenuOpenChanged(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x138,local_res10);
  return;
}



// FUNCTION 142102ad0 FUN_142102ad0 body=330 status=ok
// SIG undefined FUN_142102ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_142102ad0(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_148 = 0;
  if (((*(longlong *)(param_1 + 0x218) != 0) &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x210), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x218)), lVar1 != 0)) {
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_128 = param_3[2];
    uStack_120 = param_3[3];
    local_118 = *(undefined4 *)(param_3 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_110 = *(undefined4 *)(param_3 + 5);
    uStack_10c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_108 = param_3[6];
    uVar2 = FUN_1420f5cd0(param_1 + 0x210,local_f8,&local_138,param_4);
    FReply::FReply(param_2,uVar2);
    FUN_140438c20(local_f8);
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



// FUNCTION 142102c20 FUN_142102c20 body=330 status=ok
// SIG undefined FUN_142102c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_142102c20(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_148 = 0;
  if (((*(longlong *)(param_1 + 0x1c0) != 0) &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x1b8), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x1c0)), lVar1 != 0)) {
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_128 = param_3[2];
    uStack_120 = param_3[3];
    local_118 = *(undefined4 *)(param_3 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_110 = *(undefined4 *)(param_3 + 5);
    uStack_10c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_108 = param_3[6];
    uVar2 = FUN_1420f5cd0(param_1 + 0x1b8,local_f8,&local_138,param_4);
    FReply::FReply(param_2,uVar2);
    FUN_140438c20(local_f8);
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



// FUNCTION 142102d70 HandleMouseButtonDown body=330 status=ok
// SIG undefined HandleMouseButtonDown(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
UBorder::HandleMouseButtonDown
          (longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_148 = 0;
  if (((*(longlong *)(param_1 + 0x228) != 0) &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x220), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x228)), lVar1 != 0)) {
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_128 = param_3[2];
    uStack_120 = param_3[3];
    local_118 = *(undefined4 *)(param_3 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_110 = *(undefined4 *)(param_3 + 5);
    uStack_10c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_108 = param_3[6];
    uVar2 = FUN_1420f5cd0(param_1 + 0x220,local_f8,&local_138,param_4);
    FReply::FReply(param_2,uVar2);
    FUN_140438c20(local_f8);
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



// FUNCTION 142102ec0 HandleMouseMove body=330 status=ok
// SIG undefined HandleMouseMove(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
UBorder::HandleMouseMove
          (longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_148 = 0;
  if (((*(longlong *)(param_1 + 0x248) != 0) &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x240), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x248)), lVar1 != 0)) {
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_128 = param_3[2];
    uStack_120 = param_3[3];
    local_118 = *(undefined4 *)(param_3 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_110 = *(undefined4 *)(param_3 + 5);
    uStack_10c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_108 = param_3[6];
    uVar2 = FUN_1420f5cd0(param_1 + 0x240,local_f8,&local_138,param_4);
    FReply::FReply(param_2,uVar2);
    FUN_140438c20(local_f8);
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



// FUNCTION 142103010 HandleMouseButtonUp body=330 status=ok
// SIG undefined HandleMouseButtonUp(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
UBorder::HandleMouseButtonUp
          (longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_148 = 0;
  if (((*(longlong *)(param_1 + 0x238) != 0) &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x230), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x238)), lVar1 != 0)) {
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_128 = param_3[2];
    uStack_120 = param_3[3];
    local_118 = *(undefined4 *)(param_3 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_110 = *(undefined4 *)(param_3 + 5);
    uStack_10c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_108 = param_3[6];
    uVar2 = FUN_1420f5cd0(param_1 + 0x230,local_f8,&local_138,param_4);
    FReply::FReply(param_2,uVar2);
    FUN_140438c20(local_f8);
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



// FUNCTION 142103180 HandleOnEndSliderMovement body=32 status=ok
// SIG undefined HandleOnEndSliderMovement(void)

void USpinBox::HandleOnEndSliderMovement(longlong param_1,undefined4 param_2)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x4c8,local_res18);
  return;
}



// FUNCTION 1421031a0 AnimNotify_Attack_End body=14 status=ok
// SIG undefined AnimNotify_Attack_End(void)

void UTTLAnimalAnimInstance::AnimNotify_Attack_End(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x378,0);
  return;
}



// FUNCTION 1421031c0 HandleOnTextChanged body=123 status=ok
// SIG undefined HandleOnTextChanged(void)

void UEditableText::HandleOnTextChanged(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x418,local_28);
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



// FUNCTION 142103240 HandleOnTextChanged body=135 status=ok
// SIG undefined HandleOnTextChanged(void)

void UEditableTextBox::HandleOnTextChanged(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::operator=(param_1 + 0x100);
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x9f0,local_28);
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



// FUNCTION 1421032d0 HandleOnTextChanged body=123 status=ok
// SIG undefined HandleOnTextChanged(void)

void UMultiLineEditableText::HandleOnTextChanged(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x3a0,local_28);
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



// FUNCTION 142103350 HandleOnTextChanged body=123 status=ok
// SIG undefined HandleOnTextChanged(void)

void UMultiLineEditableTextBox::HandleOnTextChanged(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xbc0,local_28);
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



// FUNCTION 1421033d0 HandleOnTextCommitted body=141 status=ok
// SIG undefined HandleOnTextCommitted(void)

void UEditableText::HandleOnTextCommitted(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_10;
  
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x428,local_28);
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



// FUNCTION 142103460 HandleOnTextCommitted body=153 status=ok
// SIG undefined HandleOnTextCommitted(void)

void UEditableTextBox::HandleOnTextCommitted(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_10;
  
  FText::operator=(param_1 + 0x100);
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xa00,local_28);
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



// FUNCTION 142103500 HandleOnTextCommitted body=141 status=ok
// SIG undefined HandleOnTextCommitted(void)

void UMultiLineEditableText::HandleOnTextCommitted
               (longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_10;
  
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x3b0,local_28);
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



// FUNCTION 142103590 HandleOnTextCommitted body=141 status=ok
// SIG undefined HandleOnTextCommitted(void)

void UMultiLineEditableTextBox::HandleOnTextCommitted
               (longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_10;
  
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xbd0,local_28);
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



// FUNCTION 142103620 HandleOnValueChanged body=32 status=ok
// SIG undefined HandleOnValueChanged(void)

void USlider::HandleOnValueChanged(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x3b8,local_res10);
  return;
}



// FUNCTION 142103640 HandleOnValueChanged body=32 status=ok
// SIG undefined HandleOnValueChanged(void)

void USpinBox::HandleOnValueChanged(longlong param_1,undefined4 param_2)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x498,local_res18);
  return;
}



// FUNCTION 142103660 HandleOnValueCommitted body=37 status=ok
// SIG undefined HandleOnValueCommitted(void)

void USpinBox::HandleOnValueCommitted(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 local_res20;
  undefined1 local_res24;
  
  local_res20 = param_2;
  local_res24 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x4a8,&local_res20);
  return;
}



// FUNCTION 1421036a0 FUN_1421036a0 body=379 status=ok
// SIG undefined FUN_1421036a0(void)

void FUN_1421036a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  
  plVar3 = (longlong *)param_2[1];
  plVar4 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar8 = (**(code **)(*plVar4 + 0x78))();
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (lVar8 != 0) {
    FUserWidgetPool::Release(param_1 + 0x128,lVar8,0);
    FWeakObjectPtr::operator=(local_res10,lVar8);
    iVar2 = *(int *)(param_1 + 0x1c0);
    if (iVar2 != 0) {
      iVar10 = 0;
      cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (*(undefined8 *)(param_1 + 0x1b8),local_res10);
      bVar11 = cVar7 == '\0';
      iVar9 = 0;
      do {
        iVar5 = iVar9;
        do {
          iVar5 = iVar5 + 1;
          if (iVar2 <= iVar5) break;
          cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (*(longlong *)(param_1 + 0x1b8) + (longlong)iVar5 * 8,local_res10);
        } while (bVar11 == (cVar7 == '\0'));
        if (bVar11 != false) {
          if (iVar10 != iVar9) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar10 * 8),
                       (void *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar9 * 8),
                       (longlong)(iVar5 - iVar9) << 3);
          }
          iVar10 = iVar10 + (iVar5 - iVar9);
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar9 = iVar5;
      } while (iVar5 < iVar2);
      *(int *)(param_1 + 0x1c0) = iVar10;
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x1e0,lVar8);
    local_res18[0] = lVar8;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x118,local_res18);
  }
  return;
}



// FUNCTION 142103820 HandleSelectionChanged body=52 status=ok
// SIG undefined HandleSelectionChanged(void)

void ITypedUMGListView<UObject_*>::HandleSelectionChanged(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x60))();
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(uVar1,param_2);
  return;
}



// FUNCTION 142103860 FUN_142103860 body=1027 status=ok
// SIG undefined FUN_142103860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142103860(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  void **ppvVar12;
  longlong *plVar13;
  longlong lVar14;
  void *pvVar15;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  void *local_d8;
  int local_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_88;
  longlong local_80;
  longlong local_78;
  void *local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_b8 = param_2;
  plVar7 = param_1 + 0x195;
  local_88 = 0;
  uStack_e8 = (longlong *)param_2[1];
  local_f0 = *param_2;
  if (uStack_e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_e8 + 1) = (int)uStack_e8[1] + 1;
    UNLOCK();
  }
  if (&local_f0 != plVar7) {
    local_f0._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
    uStack_e8._4_4_ = (undefined4)((ulonglong)uStack_e8 >> 0x20);
    lVar14 = *plVar7;
    plVar13 = (longlong *)param_1[0x196];
    local_50 = (undefined4)local_f0;
    uStack_4c = local_f0._4_4_;
    uStack_48 = (undefined4)uStack_e8;
    uStack_44 = uStack_e8._4_4_;
    *(undefined4 *)plVar7 = (undefined4)local_f0;
    *(undefined4 *)((longlong)param_1 + 0xcac) = local_f0._4_4_;
    *(undefined4 *)(param_1 + 0x196) = (undefined4)uStack_e8;
    *(undefined4 *)((longlong)param_1 + 0xcb4) = uStack_e8._4_4_;
    local_f0 = lVar14;
    uStack_e8 = plVar13;
  }
  plVar13 = uStack_e8;
  local_f8 = param_1;
  local_e0 = param_3;
  if (uStack_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_e8 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*uStack_e8)(uStack_e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_e8 + 8))(uStack_e8,1);
      }
    }
  }
  puVar5 = (undefined8 *)*plVar7;
  if (puVar5 == (undefined8 *)0x0) {
    ppvVar12 = &local_b0;
    local_b0 = (void *)0x0;
    bVar10 = false;
    bVar9 = false;
    bVar8 = true;
    local_a8 = 0;
    plVar13 = local_b8;
    pvVar15 = local_d8;
  }
  else {
    plVar13 = (longlong *)local_f8[0x196];
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(puVar5 + 1);
    pvVar6 = (void *)*puVar5;
    local_d8 = (void *)0x0;
    local_d0 = iVar4;
    if (iVar4 == 0) {
      ppvVar12 = &local_d8;
      uStack_cc = 0;
      bVar10 = true;
      bVar9 = true;
      bVar8 = false;
      pvVar15 = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar4,0);
      pvVar15 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar6,(longlong)iVar4 * 2);
      ppvVar12 = &local_d8;
      bVar10 = true;
      bVar9 = true;
      bVar8 = false;
    }
  }
  plVar1 = local_f8;
  ppvVar3 = (void **)(local_f8 + 0x22);
  if (ppvVar3 != ppvVar12) {
    if (*ppvVar3 != (void *)0x0) {
      FMemory::Free();
    }
    pvVar15 = *ppvVar12;
    *ppvVar12 = (void *)0x0;
    *ppvVar3 = pvVar15;
    *(undefined4 *)(plVar1 + 0x23) = *(undefined4 *)(ppvVar12 + 1);
    ppvVar12[1] = (void *)0x0;
    *(undefined4 *)((longlong)plVar1 + 0x11c) = *(undefined4 *)((longlong)ppvVar12 + 0xc);
    pvVar15 = local_d8;
  }
  if ((bVar8) && (local_b0 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar9) && (pvVar15 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar10) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar13)();
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = local_f8;
  lVar14 = local_f8[0x193];
  if (lVar14 != 0) {
    local_80 = *plVar7;
    local_78 = param_1[0x196];
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
      lVar14 = local_f8[0x193];
    }
    uVar11 = (**(code **)(*local_f8 + 0x2d0))(local_f8,local_60,&local_80);
    SBox::SetContent(lVar14,uVar11);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_58 + 1;
      lVar14 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_58)();
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  plVar7 = local_b8;
  pvVar15 = (void *)0x0;
  puVar5 = (undefined8 *)*local_b8;
  if (puVar5 == (undefined8 *)0x0) {
    local_68 = 0;
    ppvVar12 = &local_70;
    bVar9 = false;
    bVar8 = true;
  }
  else {
    iVar4 = *(int *)(puVar5 + 1);
    pvVar6 = (void *)*puVar5;
    local_c8 = (void *)0x0;
    local_c0 = iVar4;
    if (iVar4 == 0) {
      uStack_bc = 0;
      ppvVar12 = &local_c8;
      bVar9 = true;
      bVar8 = false;
      pvVar15 = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar4,0);
      pvVar15 = local_c8;
      _guard_xfg_dispatch_icall_nop(local_c8,pvVar6,(longlong)iVar4 * 2);
      ppvVar12 = &local_c8;
      bVar9 = true;
      bVar8 = false;
    }
  }
  *ppvVar12 = (void *)0x0;
  iVar4 = *(int *)(ppvVar12 + 1);
  ppvVar12[1] = (void *)0x0;
  local_a0 = (void *)0x0;
  local_94 = 0;
  local_98 = iVar4;
  if (iVar4 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,iVar4,0);
    _guard_xfg_dispatch_icall_nop(local_a0,pvVar15,(longlong)iVar4 * 2);
  }
  local_90 = (undefined1)local_e0;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (plVar13 + 0x18b,&local_a0);
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  if (pvVar15 != (void *)0x0) {
    FMemory::Free(pvVar15);
  }
  if ((bVar8) && (local_70 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar9) && (local_c8 != (void *)0x0)) {
    FMemory::Free();
  }
  plVar7 = (longlong *)plVar7[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar7 + 1;
    lVar14 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 142103c70 FUN_142103c70 body=205 status=ok
// SIG undefined FUN_142103c70(void)

ulonglong FUN_142103c70(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((DAT_146b17150 != 0) && (in_RAX = (ulonglong)(param_3 - 2U), param_3 - 2U < 2)) {
    local_18 = 0;
    local_10 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    uVar3 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"TOGGLE_FULLSCREEN",0x24);
    lVar2 = DAT_146b17150;
    iVar1 = *(int *)(DAT_146b17150 + 0x7c0);
    *(int *)(DAT_146b17150 + 0x7c0) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x7c4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x7b8,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x7b8));
    *puVar4 = uVar3;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_10._4_4_;
    return CONCAT71((uint7)(uint3)((ulonglong)local_10 >> 0x28),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142103d40 Handled body=178 status=ok
// SIG undefined Handled(void)

undefined8 UWidgetBlueprintLibrary::Handled(undefined8 param_1)

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
  
  FEventReply::FEventReply(param_1,0);
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
  FUN_140439160(param_1,local_c8);
  FUN_140438c20(local_c8);
  return param_1;
}



// FUNCTION 142103e00 HasAnyChildren body=11 status=ok
// SIG undefined HasAnyChildren(void)

bool UPanelWidget::HasAnyChildren(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x108);
}



// FUNCTION 142103e10 FUN_142103e10 body=150 status=ok
// SIG undefined FUN_142103e10(void)

undefined1 FUN_142103e10(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined1 local_res10;
  undefined1 local_res11;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_141845d20(local_18,&local_res10);
    uVar6 = local_res11;
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 142103eb0 HasChild body=35 status=ok
// SIG undefined HasChild(void)

ulonglong UPanelWidget::HasChild(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x28);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == param_1);
  }
  return (ulonglong)(param_1 == 0);
}



// FUNCTION 142103ee0 FUN_142103ee0 body=19 status=ok
// SIG undefined FUN_142103ee0(void)

undefined8 FUN_142103ee0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0xa10) == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0x510);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x10))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142103f00 FUN_142103f00 body=142 status=ok
// SIG undefined FUN_142103f00(void)

undefined1 FUN_142103f00(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_141845e40();
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 142103f90 FUN_142103f90 body=146 status=ok
// SIG undefined FUN_142103f90(void)

undefined1 FUN_142103f90(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*local_18 + 0x180))();
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 142104030 FUN_142104030 body=142 status=ok
// SIG undefined FUN_142104030(void)

undefined1 FUN_142104030(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_141846080();
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1421040c0 FUN_1421040c0 body=235 status=ok
// SIG undefined FUN_1421040c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1421040c0(undefined8 param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined1 auStack_58 [32];
  int local_38;
  undefined1 local_34;
  longlong local_30;
  longlong *local_28;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  FUN_1420f9830(param_1,&local_30);
  if (local_30 == 0) {
    uVar5 = 0;
  }
  else {
    if (param_3 < 0) {
      local_14 = 0;
    }
    else {
      local_20 = param_3;
      local_1c = 1;
    }
    piVar6 = &local_18;
    if (-1 < param_3) {
      piVar6 = &local_20;
    }
    local_34 = (char)piVar6[1] != '\0';
    if ((bool)local_34) {
      local_38 = *piVar6;
    }
    uVar5 = FUN_141846180(local_30,param_2,&local_38);
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar6 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1421041b0 FUN_1421041b0 body=19 status=ok
// SIG undefined FUN_1421041b0(void)

ulonglong FUN_1421041b0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong in_RAX;
  bool bVar6;
  undefined8 uStack_18;
  longlong lStack_10;
  
  lVar3 = *(longlong *)(param_1 + 0x148);
  if (lVar3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(longlong *)(lVar3 + 0x220) != 0) && (*(longlong *)(lVar3 + 0x228) != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(lVar3 + 0x228) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      lStack_10 = *(longlong *)(lVar3 + 0x228);
      uStack_18 = 0;
      if (lStack_10 != 0) {
        LOCK();
        iVar4 = *(int *)(lStack_10 + 8);
        bVar6 = iVar4 == 0;
        if (bVar6) {
          *(int *)(lStack_10 + 8) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar6) {
          LOCK();
          bVar6 = iVar4 == *(int *)(lStack_10 + 8);
          if (bVar6) {
            *(int *)(lStack_10 + 8) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar6) {
            if (lStack_10 != 0) {
              uStack_18 = *(undefined8 *)(lVar3 + 0x220);
            }
            goto LAB_141944281;
          }
          LOCK();
          iVar4 = *(int *)(lStack_10 + 8);
          bVar6 = iVar4 == 0;
          if (bVar6) {
            *(int *)(lStack_10 + 8) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        lStack_10 = 0;
      }
LAB_141944281:
      uVar5 = FUN_1418a07d0(DAT_1469f4590,&uStack_18);
      return uVar5;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1421041d0 FUN_1421041d0 body=244 status=ok
// SIG undefined FUN_1421041d0(void)

ulonglong FUN_1421041d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong in_RAX;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res10;
  byte local_res11;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [16];
  
  if ((param_2 == (longlong *)0x0) ||
     (uVar5 = *(uint *)((longlong)param_2 + 0x4cc) >> 1, in_RAX = (ulonglong)uVar5, (uVar5 & 1) == 0
     )) {
LAB_1421042b7:
    return in_RAX & 0xffffffffffffff00;
  }
  in_RAX = (**(code **)(*param_2 + 0x768))(param_2);
  if ((char)in_RAX == '\0') goto LAB_1421042b7;
  FUN_1420f9830(param_1,&local_28);
  if (local_28 != 0) {
    FUN_14253e150(local_18,param_2);
    lVar6 = FUN_1423111a0(local_18);
    if (lVar6 != 0) {
      FUN_1418462c0(local_28,&local_res10,*(undefined4 *)(lVar6 + 0x108));
      bVar7 = local_res11;
      goto LAB_142104263;
    }
  }
  bVar7 = 0;
LAB_142104263:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return (ulonglong)bVar7;
}



// FUNCTION 1421042d0 FUN_1421042d0 body=235 status=ok
// SIG undefined FUN_1421042d0(void)

ulonglong FUN_1421042d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  ulonglong in_RAX;
  longlong lVar7;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [16];
  
  if ((param_2 == (longlong *)0x0) ||
     (uVar6 = *(uint *)((longlong)param_2 + 0x4cc) >> 1, in_RAX = (ulonglong)uVar6, (uVar6 & 1) == 0
     )) {
LAB_1421043ae:
    return in_RAX & 0xffffffffffffff00;
  }
  in_RAX = (**(code **)(*param_2 + 0x768))(param_2);
  if ((char)in_RAX == '\0') goto LAB_1421043ae;
  FUN_1420f9830(param_1,&local_28);
  if (local_28 != 0) {
    FUN_14253e150(local_18,param_2);
    lVar7 = FUN_1423111a0(local_18);
    if (lVar7 != 0) {
      bVar5 = FUN_1418463e0(local_28,*(undefined4 *)(lVar7 + 0x108));
      goto LAB_14210435b;
    }
  }
  bVar5 = 0;
LAB_14210435b:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return (ulonglong)bVar5;
}



// FUNCTION 1421043c0 FUN_1421043c0 body=184 status=ok
// SIG undefined FUN_1421043c0(void)

void FUN_1421043c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((DAT_1469f4590 != 0) && (*(longlong *)(param_1 + 0x730) != 0)) {
    lVar1 = UUserWidget::GetPrivateStaticClass();
    lVar2 = *(longlong *)(param_1 + 0x730);
    lVar4 = lVar2;
    if (lVar2 != 0) {
      while (lVar4 != lVar1) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x798) == 0)) {
        if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
          return;
        }
        lVar2 = *(longlong *)(param_1 + 0x120);
        if (lVar2 == 0) {
          lVar2 = FUN_1423407b0(param_1);
        }
        uVar3 = FUN_1420c4b00(lVar2,*(undefined8 *)(param_1 + 0x730),0);
        *(undefined8 *)(param_1 + 0x798) = uVar3;
      }
    }
  }
  return;
}



// FUNCTION 142104480 FUN_142104480 body=521 status=ok
// SIG undefined FUN_142104480(void)

undefined8 FUN_142104480(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_res8;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffffb8;
  ulonglong in_stack_ffffffffffffffc8;
  code *local_18;
  longlong **pplStack_10;
  
  if ((*(byte *)((longlong)param_1 + 0x1ac) & 0x20) != 0) {
    return 0;
  }
  lVar4 = param_1[2];
  *(byte *)((longlong)param_1 + 0x1ac) = *(byte *)((longlong)param_1 + 0x1ac) | 0x20;
  if (lVar4 != 0) {
    lVar3 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)(lVar4 + 0x2e8) & 6) != 6) {
        lVar4 = UUserWidget::GetWidgetTreeOwningClass(param_1);
      }
      if (lVar4 != 0) {
        in_stack_ffffffffffffffc8 = lVar4 + 0x2f0;
        in_stack_ffffffffffffffb8 = *(ulonglong *)(lVar4 + 0x2e0);
        FUN_1421050f0(param_1,lVar4,(*(byte *)(lVar4 + 0x2e8) & 6) == 6,
                      *(byte *)(lVar4 + 0x2e8) >> 1 & 1,in_stack_ffffffffffffffb8,lVar4 + 0x300,
                      in_stack_ffffffffffffffc8);
        goto LAB_142104561;
      }
    }
  }
  (**(code **)(*param_1 + 0x2e0))(param_1);
LAB_142104561:
  if (param_1[0x34] == 0) {
    plVar5 = (longlong *)FName::FName(&local_res10,L"WidgetTree",1);
    local_res8 = (longlong *)0x0;
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      FUN_1417846f0(param_1,&DAT_144f99f70);
    }
    uVar6 = UWidgetTree::GetPrivateStaticClass();
    lVar4 = FUN_1417985e0(uVar6,param_1,lVar4,0x40,in_stack_ffffffffffffffb8 & 0xffffffff00000000,0,
                          in_stack_ffffffffffffffc8 & 0xffffffffffffff00,0,0);
    param_1[0x34] = lVar4;
  }
  if (-1 < *(char *)((longlong)param_1 + 0x1ac)) {
    *(uint *)(param_1[0x34] + 8) = *(uint *)(param_1[0x34] + 8) | 0x40;
    FUN_142104e20(param_1,0);
  }
  cVar2 = FUN_14254a410(param_1 + 0x3e);
  if (cVar2 != '\0') {
    lVar4 = param_1[0x34];
    pplStack_10 = &local_res8;
    local_18 = UE4Function_Private::
               TFunctionRefCaller<<lambda_109500daa63055641f2213496924cbf3>,void___cdecl(UWidget_*)>
               ::Call;
    local_res10 = *(longlong *)(lVar4 + 0x28);
    if (local_res10 != 0) {
      local_res8 = param_1;
      UE4Function_Private::
      TFunctionRefCaller<<lambda_109500daa63055641f2213496924cbf3>,void___cdecl(UWidget_*)>::Call
                (&local_res8,&local_res10);
      FUN_1420f6990(*(undefined8 *)(lVar4 + 0x28),&local_18,0);
    }
  }
  return 1;
}



// FUNCTION 142104690 FUN_142104690 body=981 status=ok
// SIG undefined FUN_142104690(void)

void FUN_142104690(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  puVar14 = (undefined8 *)*param_2;
  local_res18 = puVar14 + (longlong)(int)param_2[1] * 10;
  if (puVar14 == local_res18) {
    return;
  }
  puVar14 = puVar14 + 2;
LAB_1421046e0:
  if (*(int *)(puVar14 + -1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)puVar14[-2];
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  FName::FName(&local_res8,puVar10,0);
  lVar8 = local_res8;
  if (((int)local_res8 == 0) && ((int)((ulonglong)local_res8 >> 0x20) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    if (lVar6 == 0) {
      local_60 = (longlong *)0x0;
    }
    else {
      local_60 = *(longlong **)(lVar6 + 0x38);
    }
    local_58 = 0xffffffff;
    local_54 = 0x101;
    local_52 = 0;
    local_68 = lVar6;
    FUN_140cbbe70(&local_68);
    while (local_60 != (longlong *)0x0) {
      if (local_60[3] == lVar8) {
        if ((local_60 != (longlong *)0x0) &&
           (plVar5 = (longlong *)
                     (**(code **)(*local_60 + 0x378))
                               (local_60,*(int *)((longlong)local_60 + 0x44) + param_1),
           plVar5 != (longlong *)0x0)) {
          lVar6 = UWidget::GetPrivateStaticClass();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            puVar7 = (undefined8 *)FName::ToString(puVar14);
            iVar15 = *(int *)(puVar7 + 1);
            local_88 = (undefined2 *)*puVar7;
            *puVar7 = 0;
            local_80._0_4_ = *(int *)(puVar7 + 1);
            local_80._4_4_ = *(int *)((longlong)puVar7 + 0xc);
            puVar7[1] = 0;
            iVar13 = (int)local_80;
            if (local_80._4_4_ < (int)((9 - (uint)(iVar15 != 0)) + (int)local_80)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
              iVar13 = (int)local_80;
            }
            iVar15 = (9 - (uint)(iVar13 != 0)) + iVar13;
            local_80 = CONCAT44(local_80._4_4_,iVar15);
            puVar10 = local_88;
            if (local_80._4_4_ < iVar15) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar13);
              puVar10 = local_88;
              iVar15 = (int)local_80;
            }
            local_88 = (undefined2 *)0x0;
            local_80 = 0;
            puVar11 = &DAT_143f3eda8;
            if (iVar15 != 0) {
              puVar11 = puVar10;
            }
            builtin_wcsncpy(puVar10 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)),L"Delegate",9);
            lVar6 = plVar5[2];
            puVar7 = (undefined8 *)FName::FName(local_res20,puVar11,1);
            lVar6 = FUN_1420c5c10(lVar6,*puVar7);
            if (puVar10 != (undefined2 *)0x0) {
              FMemory::Free(puVar10);
            }
            if (local_78 != 0) {
              FMemory::Free();
            }
            if ((lVar6 != 0) || (lVar6 = FUN_1420c5c10(plVar5[2],*puVar14), lVar6 != 0)) {
              if ((0 < *(int *)(puVar14 + 3)) &&
                 (lVar8 = FUN_1420f6df0(lVar6,plVar5,param_1,puVar14 + 2), lVar8 != 0)) {
                iVar15 = 0;
                lVar12 = 0;
                if ((int)plVar5[0x1f] < 1) goto LAB_142104999;
                plVar2 = plVar5 + 0x1e;
                plVar9 = (longlong *)*plVar2;
                goto LAB_142104940;
              }
              lVar6 = (longlong)*(int *)(lVar6 + 0x44) + (longlong)plVar5;
              if (lVar6 != 0) {
                FWeakObjectPtr::operator=(lVar6,param_1);
                *(undefined8 *)(lVar6 + 8) = puVar14[1];
              }
            }
          }
        }
        break;
      }
      local_60 = (longlong *)local_60[5];
      FUN_140cbbe70(&local_68);
    }
  }
  goto LAB_142104a28;
  while( true ) {
    iVar15 = iVar15 + 1;
    lVar12 = lVar12 + 1;
    plVar9 = plVar9 + 1;
    if ((int)plVar5[0x1f] <= lVar12) break;
LAB_142104940:
    if (*(longlong *)(*plVar9 + 0x58) == *(longlong *)(lVar6 + 0x18)) {
      iVar13 = (int)plVar5[0x1f];
      iVar4 = (iVar13 - iVar15) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar2 + (longlong)iVar15 * 8),
                   (void *)(*plVar2 + (longlong)(iVar15 + 1) * 8),(longlong)iVar4 << 3);
        iVar13 = (int)plVar5[0x1f];
      }
      *(int *)(plVar5 + 0x1f) = iVar13 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar2);
      break;
    }
  }
LAB_142104999:
  lVar12 = plVar5[0x1f];
  iVar15 = (int)lVar12 + 1;
  *(int *)(plVar5 + 0x1f) = iVar15;
  if (*(int *)((longlong)plVar5 + 0xfc) < iVar15) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5 + 0x1e);
  }
  *(longlong *)(plVar5[0x1e] + (longlong)(int)lVar12 * 8) = lVar8;
  if ((plVar5[0x1a] != 0) && (plVar5[0x1b] != 0)) {
    piVar1 = (int *)(plVar5[0x1b] + 8);
    LOCK();
    iVar15 = *piVar1;
    if (iVar15 == 0) {
      *piVar1 = 0;
      iVar15 = 0;
    }
    UNLOCK();
    if (0 < iVar15) {
      local_res10 = *(undefined8 *)(lVar6 + 0x18);
      (**(code **)(*plVar5 + 0x2b8))(plVar5,&local_res10);
    }
  }
LAB_142104a28:
  puVar7 = puVar14 + 8;
  puVar14 = puVar14 + 10;
  if (puVar7 == local_res18) {
    return;
  }
  goto LAB_1421046e0;
}



// FUNCTION 142104a70 FUN_142104a70 body=935 status=ok
// SIG undefined FUN_142104a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142104a70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_158 [2];
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  longlong local_128;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [40];
  undefined1 local_68 [24];
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar5 = (**(code **)(*param_1 + 0x2a0))();
  if (lVar5 == 0) {
    FName::FName(local_138,&DAT_144f9737c,1);
    local_158[0] = *(undefined8 *)(param_1[2] + 0x18);
    lVar5 = FText::FromName(local_68,local_158);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,
                       L"Unable to listen to input actions without a player controller in {0}.",
                       &DAT_144f976d8,L"NoInputListeningWithoutPlayerController");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar6);
    local_50[0] = 4;
    FText::FText(local_40,lVar5);
    local_130 = *puVar8;
    local_148 = local_50;
    puStack_140 = &local_20;
    local_128 = puVar8[1];
    local_28 = '\x01';
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    local_118 = local_148;
    puStack_110 = puStack_140;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_118);
    uVar6 = FText::Format(local_d0,&local_130,uVar6);
    FText::FText(local_e8,uVar6);
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c8 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_108);
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    plVar4 = (longlong *)puVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    plVar4 = *(longlong **)(lVar5 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    uVar6 = FUN_14161fb50(local_90,local_138);
    FMessageLog::Info(uVar6,local_f8,local_e8);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_90);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  else {
    local_148 = (undefined4 *)0x0;
    local_158[0] = 0;
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar6 = FUN_142956f50();
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    lVar7 = FUN_1417985e0(uVar6,param_1,0,0x40);
    param_1[0x36] = lVar7;
    *(byte *)(lVar7 + 0x1fc) =
         *(byte *)(lVar7 + 0x1fc) ^
         (*(byte *)((longlong)param_1 + 0x1ac) >> 2 ^ *(byte *)(lVar7 + 0x1fc)) & 1;
    *(int *)(param_1[0x36] + 0x1f8) = (int)param_1[0x35];
    FUN_142713b70(lVar5,param_1[0x36]);
  }
  return;
}



// FUNCTION 142104e20 FUN_142104e20 body=227 status=ok
// SIG undefined FUN_142104e20(void)

void FUN_142104e20(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 400);
  puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x198) * 2;
  for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
    lVar1 = puVar6[1];
    if (((lVar1 != 0) &&
        (plVar3 = (longlong *)FUN_140c2d5e0(*(undefined8 *)(param_1 + 0x10),*puVar6),
        plVar3 != (longlong *)0x0)) &&
       (lVar4 = (**(code **)(*plVar3 + 0x378))(plVar3,*(int *)((longlong)plVar3 + 0x44) + param_1),
       lVar4 != 0)) {
      lVar5 = UNamedSlot::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1420e74a0(lVar4);
        FUN_1420def40(lVar4,lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142104f10 FUN_142104f10 body=438 status=ok
// SIG undefined FUN_142104f10(void)

void FUN_142104f10(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
  plVar8 = *(longlong **)(param_1 + 0x338);
  plVar11 = (longlong *)0x0;
  plVar10 = plVar8;
  plVar12 = plVar11;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar8[1];
    bVar13 = iVar5 == 0;
    if (bVar13) {
      *(int *)(plVar8 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar10 = plVar11, plVar12 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar5 == (int)plVar8[1];
      if (bVar13) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar10 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          plVar12 = *(longlong **)(param_1 + 0x330);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(plVar8 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar8 = (longlong *)(param_1 + 0x308);
  if (param_1 == 0) {
    plVar8 = plVar11;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar12 + 0x38))(plVar12,plVar8);
  uVar9 = *puVar6;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x10);
  if (lVar2 != 0) {
    uVar7 = UUserObjectListEntry::GetPrivateStaticClass();
    cVar4 = UClass::ImplementsInterface(lVar2,uVar7);
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x300);
      if (lVar2 != 0) {
        uVar7 = UUserObjectListEntry::GetPrivateStaticClass();
        plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar7);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x48))(plVar8,uVar9);
          FUN_142150f20(lVar2,uVar9);
          goto LAB_142105027;
        }
      }
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (lVar3 != 0) {
        uVar7 = UUserObjectListEntry::GetPrivateStaticClass();
        cVar4 = UClass::ImplementsInterface(lVar3,uVar7);
        if (cVar4 != '\0') {
          FUN_142150f20(lVar2,uVar9);
        }
      }
    }
  }
LAB_142105027:
  cVar4 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar6);
  if ((cVar4 != '\0') && (lVar2 = *(longlong *)(param_1 + 0x300), lVar2 != 0)) {
    uVar9 = UUserListEntry::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar9);
    if ((plVar8 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*plVar8 + 0x20))(plVar8), cVar4 == '\0')) {
      (**(code **)(*plVar12 + 0x18))(plVar12,*puVar6,0,0);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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



// FUNCTION 1421050f0 FUN_1421050f0 body=915 status=ok
// SIG undefined FUN_1421050f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421050f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,ulonglong *param_6,undefined8 param_7)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  longlong local_190;
  undefined8 local_188;
  undefined1 *puStack_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168 [2];
  code *local_158;
  undefined8 **ppuStack_150;
  undefined8 *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined1 local_128 [24];
  uint local_110;
  undefined4 local_f8;
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if ((*(uint *)(param_1 + 8) >> 5 & 1) != 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  local_190 = param_1;
  local_178 = lVar3;
  local_170 = param_2;
  if (*(char *)(param_1 + 0x1ac) < '\0') {
    puStack_180 = local_198;
    local_198[0] = 0;
    local_188 = FUN_1420e6750;
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      local_168[0] = *(longlong *)(lVar3 + 0x28);
      FUN_1420e6750(local_198,local_168);
      local_158 = local_188;
      ppuStack_150 = (undefined8 **)puStack_180;
      FUN_1420f6990(*(undefined8 *)(lVar3 + 0x28),&local_158,0);
    }
    FUN_142104690(local_190,param_7);
    FUN_1422e5a50(local_170,local_190);
    return;
  }
  uVar6 = 0;
  if (lVar3 != 0) goto LAB_1421052cf;
  DAT_146ae77b8 = DAT_146ae77b8 + 1;
  if (param_5 != 0) {
    FUN_1417812e0(local_128,param_5,param_1);
    local_110 = local_110 & 0xfffbfffe;
    local_f8 = 0;
    uVar2 = FUN_141798990(local_128);
    if (uVar2 == 0) {
LAB_142105266:
      uVar2 = uVar6;
    }
    else {
      lVar3 = UWidgetTree::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(uVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142105266;
    }
    *(ulonglong *)(param_1 + 0x1a0) = uVar2;
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 0x800040;
    local_48 = 0;
    if (local_50 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_90);
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_e8);
  }
  DAT_146ae77b8 = DAT_146ae77b8 + -1;
  local_178 = *(longlong *)(local_190 + 0x1a0);
LAB_1421052cf:
  FWeakObjectPtr::operator=(&local_188,local_170);
  *(undefined4 *)(local_190 + 200) = (undefined4)local_188;
  *(undefined4 *)(local_190 + 0xcc) = local_188._4_4_;
  if (local_178 != 0) {
    puVar7 = (undefined8 *)*param_6;
    local_168[0] = *(longlong *)(local_190 + 0x10);
    uVar2 = (longlong)(int)param_6[1] & 0x1fffffffffffffff;
    if (puVar7 + (int)param_6[1] < puVar7) {
      uVar2 = uVar6;
    }
    if (uVar2 != 0) {
      local_188 = (code *)0x0;
      do {
        plVar4 = (longlong *)FUN_1420c4be0(*puVar7,local_190,0);
        lVar3 = (**(code **)(*plVar4 + 0x298))(plVar4);
        if (lVar3 != 0) {
          lVar3 = (**(code **)(*plVar4 + 0x298))(plVar4);
          plVar5 = (longlong *)FUN_140c2d5e0(local_168[0],*(undefined8 *)(lVar3 + 0x18));
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x380))
                      (plVar5,*(int *)((longlong)plVar5 + 0x44) + local_190,plVar4);
          }
        }
        puVar7 = puVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
    }
    lVar3 = local_178;
    local_148 = &local_170;
    local_140 = local_168;
    local_138 = &local_190;
    local_130 = &local_178;
    ppuStack_150 = &local_148;
    local_158 = FUN_1420e68a0;
    if (*(longlong *)(local_178 + 0x28) != 0) {
      local_188 = (code *)*(longlong *)(local_178 + 0x28);
      FUN_1420e68a0(&local_148,&local_188);
      FUN_1420f6990(*(undefined8 *)(lVar3 + 0x28),&local_158,0);
    }
    FUN_142104690(local_190,param_7);
    FUN_1422e5a50(local_170,local_190);
  }
  return;
}



// FUNCTION 142105490 FUN_142105490 body=87 status=ok
// SIG undefined FUN_142105490(void)

ulonglong FUN_142105490(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  longlong in_R9;
  
  plVar4 = *(longlong **)(in_R9 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1421054f0 Interrogate body=345 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<FMargin>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_64;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)FUN_1420c59d0(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_84 = 0;
    local_7c = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_b0 = 0;
    local_88 = 0;
    local_64 = 0;
    local_4c = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_c8 = plVar2;
    local_c0 = param_1;
    local_b8 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_d8 = &local_c8;
        puVar3 = puVar4;
        if ((puVar1[2] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_98,*(undefined4 *)((longlong)puVar1 + 0x2c),
                   (char)puVar1[6]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    MovieScene::TMaskedBlendable<float,4>::Resolve<FMargin>(local_98,local_a8,&local_c8);
    local_d8 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_a8,param_1);
  }
  return;
}



// FUNCTION 142105650 Interrogate body=361 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<FWidgetTransform>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_138 [32];
  longlong **local_118;
  longlong *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [28];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_70;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar2 = (longlong *)FUN_1420c5af0(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_f0 = 0;
    local_ac = 0;
    local_70 = 0;
    local_4c = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_108 = plVar2;
    local_100 = param_1;
    local_f8 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_118 = &local_108;
        puVar3 = puVar4;
        if ((puVar1[4] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_c8,*(undefined4 *)((longlong)puVar1 + 0x3c),
                   (char)puVar1[8]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    MovieScene::TMaskedBlendable<float,7>::Resolve<FWidgetTransform>(local_c8,local_e8,&local_108);
    local_118 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_e8,param_1);
  }
  return;
}



// FUNCTION 1421057c0 InvalidateLayoutAndVolatility body=119 status=ok
// SIG undefined InvalidateLayoutAndVolatility(void)

void UWidget::InvalidateLayoutAndVolatility(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 != 0) {
    FUN_1418475e0(local_18,5);
  }
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
  return;
}



// FUNCTION 142105880 FUN_142105880 body=87 status=ok
// SIG undefined FUN_142105880(void)

bool FUN_142105880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar4 + *(int *)(param_1 + 0x178);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if (*(longlong *)(lVar2 + 0x378) == param_2) {
        if (plVar4 == (longlong *)0x0) {
          return false;
        }
        iVar3 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x30))(lVar2 + 0x28);
        return iVar3 == 1;
      }
    }
  }
  return false;
}



// FUNCTION 1421058e0 FUN_1421058e0 body=64 status=ok
// SIG undefined FUN_1421058e0(void)

undefined1 FUN_1421058e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar2 + *(int *)(param_1 + 0x178);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*(longlong *)(*plVar2 + 0x378) == param_2) {
        return *(undefined1 *)(*plVar2 + 0x6f0);
      }
    }
  }
  return 1;
}



// FUNCTION 142105920 IsAnyAnimationPlaying body=11 status=ok
// SIG undefined IsAnyAnimationPlaying(void)

bool UUserWidget::IsAnyAnimationPlaying(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x178);
}



// FUNCTION 142105930 FUN_142105930 body=113 status=ok
// SIG undefined FUN_142105930(void)

bool FUN_142105930(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x758);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x310) != 0) && (*(longlong **)(lVar1 + 0x308) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x308) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x310) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x308);
        }
        uVar3 = (**(code **)(*plVar4 + 0x38))();
        *(undefined1 *)(lVar1 + 0x300) = uVar3;
      }
    }
    return *(char *)(lVar1 + 0x300) == '\x01';
  }
  return *(char *)(param_1 + 0x118) == '\x01';
}



// FUNCTION 1421059b0 FUN_1421059b0 body=216 status=ok
// SIG undefined FUN_1421059b0(void)

undefined8 FUN_1421059b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  cVar5 = FSlateApplication::IsDragDropping(DAT_1469f4590);
  if (cVar5 != '\0') {
    FUN_14189c990(DAT_1469f4590,&local_18);
    if (local_18 != (longlong *)0x0) {
      lVar4 = *local_18;
      uVar6 = FUN_1420ff340();
      cVar5 = (**(code **)(lVar4 + 0x50))(local_18,uVar6);
      if (cVar5 != '\0') {
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
        return 1;
      }
    }
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
  }
  return 0;
}



// FUNCTION 142105a90 IsEmpty body=68 status=ok
// SIG undefined IsEmpty(void)

bool FDelegateToolTip::IsEmpty(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x10));
      return lVar1 == 0;
    }
  }
  return true;
}



// FUNCTION 142105ae0 FUN_142105ae0 body=146 status=ok
// SIG undefined FUN_142105ae0(void)

undefined1 FUN_142105ae0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*local_18 + 0x1a8))();
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 142105b80 FUN_142105b80 body=181 status=ok
// SIG undefined FUN_142105b80(void)

ulonglong FUN_142105b80(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *puStack_10;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    uVar4 = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      uVar4 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(uVar4 + 0x58) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142105c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x338))();
        return uVar4;
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142105c40 FUN_142105c40 body=193 status=ok
// SIG undefined FUN_142105c40(void)

undefined1 FUN_142105c40(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar2 = (longlong *)param_1[6];
  plVar9 = (longlong *)0x0;
  plVar7 = plVar2;
  plVar8 = plVar9;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar9, plVar8 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = (longlong *)param_1[5];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (param_1 == (longlong *)0x308) {
    param_1 = plVar9;
  }
  uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,param_1);
  uVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar6);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return uVar4;
}



// FUNCTION 142105d20 IsItemSelectable body=62 status=ok
// SIG undefined IsItemSelectable(void)

undefined1 SObjectTableRow<UObject_*>::IsItemSelectable(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    uVar2 = UUserListEntry::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142105d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 142105d60 FUN_142105d60 body=193 status=ok
// SIG undefined FUN_142105d60(void)

undefined1 FUN_142105d60(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar2 = (longlong *)param_1[6];
  plVar9 = (longlong *)0x0;
  plVar7 = plVar2;
  plVar8 = plVar9;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar9, plVar8 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = (longlong *)param_1[5];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (param_1 == (longlong *)0x308) {
    param_1 = plVar9;
  }
  uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,param_1);
  uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar6);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return uVar4;
}



// FUNCTION 142105e30 FUN_142105e30 body=175 status=ok
// SIG undefined FUN_142105e30(void)

undefined1 FUN_142105e30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x28);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined4 *)(param_1 + 0x38));
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 142105ee0 FUN_142105ee0 body=73 status=ok
// SIG undefined FUN_142105ee0(void)

ulonglong FUN_142105ee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    uVar2 = *(int *)(lVar1 + 0x1e0) - 1;
    in_RAX = (ulonglong)uVar2;
    if (-1 < (int)uVar2) {
      lVar4 = (longlong)(int)uVar2;
      plVar3 = (longlong *)(lVar4 * 0x10 + *(longlong *)(lVar1 + 0x1d8));
      do {
        if (*(longlong *)(*plVar3 + 8) == param_2) {
          return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
        }
        plVar3 = plVar3 + -2;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142105f30 FUN_142105f30 body=29 status=ok
// SIG undefined FUN_142105f30(void)

bool FUN_142105f30(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14183f0f0();
  return *plVar1 == *param_2;
}



// FUNCTION 142105f50 FUN_142105f50 body=273 status=ok
// SIG undefined FUN_142105f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142105f50(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar2 = (undefined8 *)FUN_1420ff340();
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1469eb2d0) {
      _Init_thread_header(&DAT_1469eb2d0);
      if (DAT_1469eb2d0 == -1) {
        _DAT_1469eb2c8 = 0x17;
        DAT_1469eb2c0 = (undefined2 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469eb2c0,0);
        FGenericPlatformString::Memcpy(DAT_1469eb2c0,L"FGameDragDropOperation",0x2e);
        atexit((_func_5014 *)&LAB_143e82fd0);
        _Init_thread_footer(&DAT_1469eb2d0);
      }
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    puVar3 = &DAT_143f3eda8;
    if (DAT_1469eb2c8 != 0) {
      puVar3 = DAT_1469eb2c0;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142106070 FUN_142106070 body=19 status=ok
// SIG undefined FUN_142106070(void)

ulonglong FUN_142106070(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong in_RAX;
  
  lVar3 = *(longlong *)(param_1 + 0x148);
  if (lVar3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (((*(char *)(lVar3 + 0x2a0) != '\0') && (*(longlong *)(lVar3 + 0x220) != 0)) &&
     (*(longlong *)(lVar3 + 0x228) != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(lVar3 + 0x228) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142106090 IsClosedLoop body=8 status=ok
// SIG undefined IsClosedLoop(void)

undefined1 USplineComponent::IsClosedLoop(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x4c9);
}



// FUNCTION 1421060a0 IsSearchingForJoin body=8 status=ok
// SIG undefined IsSearchingForJoin(void)

undefined1 ALOTF2WorldGameSession::IsSearchingForJoin(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x4ca);
}



// FUNCTION 1421060b0 ShouldAutosize body=8 status=ok
// SIG undefined ShouldAutosize(void)

undefined1 SDockTab::ShouldAutosize(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x4c8);
}



// FUNCTION 1421060c0 IsPressed body=25 status=ok
// SIG undefined IsPressed(void)

ulonglong UButton::IsPressed(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x410) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001421060cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x410) + 0x218))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1421060e0 FUN_1421060e0 body=21 status=ok
// SIG undefined FUN_1421060e0(void)

undefined1 FUN_1421060e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x758) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x758) + 0x2f8);
  }
  return 0;
}



// FUNCTION 142106100 FUN_142106100 body=19 status=ok
// SIG undefined FUN_142106100(void)

undefined8 FUN_142106100(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(char *)(lVar1 + 0x41a) == '\0') &&
     (*(char *)(*(longlong *)(lVar1 + 0x300) + 0x29c) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142106120 IsSupportedDestination body=27 status=ok
// SIG undefined IsSupportedDestination(void)

bool UBoolBinding::IsSupportedDestination(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = UBoolProperty::GetPrivateStaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 142106140 IsSupportedDestination body=94 status=ok
// SIG undefined IsSupportedDestination(void)

bool UBrushBinding::IsSupportedDestination(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FSlateBrush::StaticStruct();
      return *(longlong *)(param_2 + 0x70) == lVar2;
    }
  }
  return false;
}



// FUNCTION 1421061a0 FUN_1421061a0 body=305 status=ok
// SIG undefined FUN_1421061a0(void)

bool FUN_1421061a0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7ac0) {
    _Init_thread_header(&DAT_146ae7ac0);
    if (DAT_146ae7ac0 == -1) {
      FName::FName(&DAT_146ae7ab8,L"ECheckBoxState",1);
      _Init_thread_footer(&DAT_146ae7ac0);
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(longlong *)(param_2[0xf] + 0x18) == DAT_146ae7ab8;
    }
    lVar2 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*param_2 + 0x380))(param_2);
      if (lVar2 != 0) {
        return *(longlong *)(param_2[0xe] + 0x18) == DAT_146ae7ab8;
      }
    }
  }
  return false;
}



// FUNCTION 1421062e0 FUN_1421062e0 body=305 status=ok
// SIG undefined FUN_1421062e0(void)

bool FUN_1421062e0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7af0) {
    _Init_thread_header(&DAT_146ae7af0);
    if (DAT_146ae7af0 == -1) {
      FName::FName(&DAT_146ae7ae8,L"EMouseCursor",1);
      _Init_thread_footer(&DAT_146ae7af0);
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(longlong *)(param_2[0xf] + 0x18) == DAT_146ae7ae8;
    }
    lVar2 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*param_2 + 0x380))(param_2);
      if (lVar2 != 0) {
        return *(longlong *)(param_2[0xe] + 0x18) == DAT_146ae7ae8;
      }
    }
  }
  return false;
}



// FUNCTION 142106420 IsSupportedDestination body=27 status=ok
// SIG undefined IsSupportedDestination(void)

bool UTextBinding::IsSupportedDestination(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = UTextProperty::GetPrivateStaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 142106440 FUN_142106440 body=305 status=ok
// SIG undefined FUN_142106440(void)

bool FUN_142106440(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7b30) {
    _Init_thread_header(&DAT_146ae7b30);
    if (DAT_146ae7b30 == -1) {
      FName::FName(&DAT_146ae7b28,L"ESlateVisibility",1);
      _Init_thread_footer(&DAT_146ae7b30);
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(longlong *)(param_2[0xf] + 0x18) == DAT_146ae7b28;
    }
    lVar2 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*param_2 + 0x380))(param_2);
      if (lVar2 != 0) {
        return *(longlong *)(param_2[0xe] + 0x18) == DAT_146ae7b28;
      }
    }
  }
  return false;
}



// FUNCTION 142106580 IsSupportedSource body=187 status=ok
// SIG undefined IsSupportedSource(void)

undefined8 UBrushBinding::IsSupportedSource(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar2 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = UObjectProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = UTexture2D::GetPrivateStaticClass();
        lVar2 = *(longlong *)(param_2 + 0x70);
        while( true ) {
          if (lVar2 == 0) {
            return 0;
          }
          if (lVar2 == lVar3) break;
          lVar2 = *(longlong *)(lVar2 + 0x30);
        }
        return 1;
      }
    }
  }
  uVar4 = IsConcreteTypeCompatibleWithReflectedType<FSlateBrush>(param_2);
  return uVar4;
}



// FUNCTION 142106640 FUN_142106640 body=52 status=ok
// SIG undefined FUN_142106640(void)

undefined8 FUN_142106640(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x280))();
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar3 = UBoolProperty::GetPrivateStaticClass();
    if (lVar1 != lVar3) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142106680 IsSupportedSource body=110 status=ok
// SIG undefined IsSupportedSource(void)

undefined1 UColorBinding::IsSupportedSource(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = FSlateColor::StaticStruct(), *(longlong *)(param_2 + 0x70) == lVar3)) {
      return 1;
    }
  }
  cVar2 = FUN_1420caf70(param_2);
  if (cVar2 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 1421066f0 IsSupportedSource body=27 status=ok
// SIG undefined IsSupportedSource(void)

bool UFloatBinding::IsSupportedSource(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = UFloatProperty::GetPrivateStaticClass();
  return lVar1 == lVar2;
}



// FUNCTION 142106710 IsSupportedSource body=93 status=ok
// SIG undefined IsSupportedSource(void)

bool UInt32Binding::IsSupportedSource(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_2 = *(longlong *)(param_2 + 0x70);
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar3 = UIntProperty::GetPrivateStaticClass();
  return lVar2 == lVar3;
}



// FUNCTION 142106770 IsSupportedSource body=67 status=ok
// SIG undefined IsSupportedSource(void)

undefined1 UTextBinding::IsSupportedSource(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = UTextProperty::GetPrivateStaticClass();
  if (lVar1 != lVar2) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar2 = UStrProperty::GetPrivateStaticClass();
    if (lVar1 != lVar2) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1421067c0 IsSupportedSource body=174 status=ok
// SIG undefined IsSupportedSource(void)

undefined8 UWidgetBinding::IsSupportedSource(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = UObjectProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = UWidget::GetPrivateStaticClass();
        for (lVar2 = *(longlong *)(param_2 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30))
        {
          if (lVar2 == lVar3) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142106870 IsUnderLocation body=96 status=ok
// SIG undefined IsUnderLocation(void)

void USlateBlueprintLibrary::IsUnderLocation(float *param_1)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *param_1 * param_1[7];
  local_18 = param_1[1] * param_1[9];
  local_14 = param_1[1] * param_1[10];
  local_1c = *param_1 * param_1[8];
  local_28 = param_1[0xb];
  local_24 = param_1[0xc];
  FSlateRotatedRect::IsUnderLocation(&local_28);
  return;
}



// FUNCTION 1421068d0 FUN_1421068d0 body=233 status=ok
// SIG undefined FUN_1421068d0(void)

bool FUN_1421068d0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  bool bVar7;
  byte local_res10 [8];
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == 0) {
    bVar7 = false;
  }
  else {
    if ((*(int *)(local_18 + 0xc0) != 0) && (*(longlong **)(local_18 + 0xb8) != (longlong *)0x0)) {
      cVar5 = (**(code **)(**(longlong **)(local_18 + 0xb8) + 0x18))();
      if (cVar5 != '\0') {
        if (*(int *)(local_18 + 0xc0) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(local_18 + 0xb8);
        }
        (**(code **)(*plVar6 + 0x38))(plVar6,local_res10);
        bVar7 = (local_res10[0] & 0x19) != 0;
        *(byte *)(local_18 + 0xb0) = local_res10[0];
        goto LAB_142106951;
      }
    }
    bVar7 = (*(byte *)(local_18 + 0xb0) & 0x19) != 0;
  }
LAB_142106951:
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return bVar7;
  }
  return bVar7;
}



// FUNCTION 1421069c0 FUN_1421069c0 body=219 status=ok
// SIG undefined FUN_1421069c0(void)

void FUN_1421069c0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_142106a89:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x0001421069e3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x17 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_142106a89;
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
      goto joined_r0x0001421069e3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_142106a89;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x0001421069e3;
}



// FUNCTION 142106aa0 FUN_142106aa0 body=456 status=ok
// SIG undefined FUN_142106aa0(void)

void FUN_142106aa0(longlong *param_1,undefined8 param_2,undefined1 *param_3,byte param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uStack_6c;
  byte local_68;
  byte local_67;
  undefined1 local_66;
  undefined8 local_60;
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 local_28;
  
  if ((param_1[0x36] == 0) && ((**(code **)(*param_1 + 0x458))(), param_1[0x36] == 0)) {
    return;
  }
  local_67 = local_67 & 0xfe;
  local_68 = local_68 & 0xfd | 1;
  local_66 = *param_3;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_60 = param_2;
  FWeakObjectPtr::operator=(local_38,0);
  local_30 = 0;
  local_68 = local_68 & 0xfe | param_4;
  local_28 = 1;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  lVar4 = *(longlong *)(param_5 + 2);
  plVar3 = (longlong *)FMemory::Realloc(0,0x40,0);
  if (plVar3 == (longlong *)0x0) {
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x28))(local_58,0);
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
      }
      local_50 = 0;
    }
  }
  else {
    *plVar3 = (longlong)&PTR_FUN_144fb2348;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = 0x4210c3c0;
    *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
    *(undefined4 *)(plVar3 + 3) = 0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_6c;
    *(undefined4 *)(plVar3 + 4) = uVar1;
    *(undefined4 *)((longlong)plVar3 + 0x24) = uVar2;
    plVar3[5] = lVar4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[6] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_144fb2390;
    TBaseUObjectMethodDelegateInstance<0,UUserWidget,TTypeWrapper<void>___cdecl(void),FOnInputAction>
    ::CreateCopy(plVar3,&local_58);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  FUN_142360eb0(param_1[0x36],&local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  return;
}



// FUNCTION 142106c70 LocalToAbsolute body=74 status=ok
// SIG undefined LocalToAbsolute(void)

float * USlateBlueprintLibrary::LocalToAbsolute(float *param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_res8;
  float fStackX_c;
  
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  local_res8 = (float)param_3;
  fVar1 = *(float *)(param_2 + 0x20);
  fVar2 = *(float *)(param_2 + 0x28);
  fVar3 = *(float *)(param_2 + 0x30);
  *param_1 = fStackX_c * *(float *)(param_2 + 0x24) + local_res8 * *(float *)(param_2 + 0x1c) +
             *(float *)(param_2 + 0x2c);
  param_1[1] = local_res8 * fVar1 + fStackX_c * fVar2 + fVar3;
  return param_1;
}



// FUNCTION 142106cc0 LocalToViewport body=88 status=ok
// SIG undefined LocalToViewport(void)

void USlateBlueprintLibrary::LocalToViewport
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  float fVar1;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  uStackX_14 = (float)((ulonglong)param_3 >> 0x20);
  local_res10 = (float)param_3;
  fVar1 = uStackX_14 * *(float *)(param_2 + 0x24) + local_res10 * *(float *)(param_2 + 0x1c) +
          *(float *)(param_2 + 0x2c);
  FUN_1420de980(fVar1,CONCAT44(uStackX_14 * *(float *)(param_2 + 0x28) +
                               local_res10 * *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x30)
                               ,fVar1),param_4,param_5);
  return;
}



// FUNCTION 142106d20 LocateBoundObjects body=404 status=ok
// SIG undefined LocateBoundObjects(void)

void UWidgetAnimation::LocateBoundObjects
               (longlong param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (param_3 != 0) {
    local_28 = *param_2;
    iStack_24 = param_2[1];
    iStack_20 = param_2[2];
    iStack_1c = param_2[3];
    lVar10 = *(longlong *)(param_1 + 0x370);
    lVar8 = 0;
    lVar7 = lVar10 + (longlong)*(int *)(param_1 + 0x378) * 0x28;
    lVar6 = lVar8;
    if (lVar10 != lVar7) {
      piVar9 = (int *)(lVar10 + 0x18);
      do {
        if (((piVar9[-2] == local_28 && piVar9[-1] == iStack_24) && piVar9[1] == iStack_1c) &&
            *piVar9 == iStack_20) {
          if ((lVar10 != 0) &&
             (uVar2 = *(undefined8 *)(param_3 + 0x1a0), lVar6 = param_3,
             *(char *)(lVar10 + 0x20) == '\0')) {
            puVar4 = (undefined8 *)FName::ToString(lVar10,&local_28);
            if (*(int *)(puVar4 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*puVar4;
            }
            uVar5 = UObject::GetPrivateStaticClass();
            lVar6 = FUN_141799410(uVar5,uVar2,puVar11,0);
            if (CONCAT44(iStack_24,local_28) != 0) {
              FMemory::Free();
            }
            if ((lVar6 != 0) && (*(longlong *)(lVar10 + 8) != 0)) {
              lVar7 = UWidget::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                lVar8 = lVar6;
              }
              if (*(longlong *)(lVar8 + 0x28) != 0) {
                lVar6 = *(longlong *)(lVar8 + 0x28);
              }
            }
          }
          break;
        }
        lVar10 = lVar10 + 0x28;
        piVar9 = piVar9 + 10;
      } while (lVar10 != lVar7);
    }
    if (lVar6 != 0) {
      iVar1 = *(int *)(param_4 + 0x10);
      *(int *)(param_4 + 0x10) = iVar1 + 1;
      if (*(int *)(param_4 + 0x14) < iVar1 + 1) {
        FUN_1407eebb0(param_4,iVar1);
      }
      lVar7 = *(longlong *)(param_4 + 8);
      if (*(longlong *)(param_4 + 8) == 0) {
        lVar7 = param_4;
      }
      *(longlong *)(lVar7 + (longlong)iVar1 * 8) = lVar6;
    }
  }
  return;
}



// FUNCTION 142106ec0 FUN_142106ec0 body=396 status=ok
// SIG undefined FUN_142106ec0(void)

undefined8 FUN_142106ec0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 == 0) goto LAB_142107033;
  FUN_1420f9830(param_3,&local_28);
  plVar5 = (longlong *)CONCAT44(uStack_1c,uStack_20);
  if (CONCAT44(uStack_24,local_28) != 0) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_18 = CONCAT44(uStack_24,local_28);
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    if (CONCAT44(uStack_1c,uStack_20) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_1c,uStack_20) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    lVar4 = CONCAT44(uStack_1c,uStack_20);
    if ((undefined8 *)(param_2 + 0x58) != &local_18) {
      *(undefined8 *)(param_2 + 0x58) = CONCAT44(uStack_24,local_28);
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x60,&uStack_10);
    }
    if (CONCAT44(uStack_c,uStack_10) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_c,uStack_10) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        puVar3 = (undefined8 *)CONCAT44(uStack_c,uStack_10);
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar1 = (int *)((longlong)puVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)CONCAT44(uStack_c,uStack_10) + 8))
                    ((longlong *)CONCAT44(uStack_c,uStack_10),1);
        }
      }
      lVar4 = CONCAT44(uStack_1c,uStack_20);
    }
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffffef;
    plVar5 = (longlong *)0x0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        puVar3 = (undefined8 *)CONCAT44(uStack_1c,uStack_20);
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar1 = (int *)((longlong)puVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          plVar5 = (longlong *)CONCAT44(uStack_1c,uStack_20);
          (**(code **)(*plVar5 + 8))(plVar5,1);
          goto LAB_142106fe9;
        }
      }
      plVar5 = (longlong *)CONCAT44(uStack_1c,uStack_20);
    }
LAB_142106fe9:
    FUN_140459130(param_2,param_2);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      puVar3 = (undefined8 *)CONCAT44(uStack_1c,uStack_20);
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_1c,uStack_20) + 8))
                  ((longlong *)CONCAT44(uStack_1c,uStack_20),1);
      }
    }
  }
LAB_142107033:
  FUN_140438260(param_1,param_2);
  return param_1;
}



// FUNCTION 142107050 FUN_142107050 body=235 status=ok
// SIG undefined FUN_142107050(void)

undefined8 FUN_142107050(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **local_98 [8];
  longlong *local_58;
  longlong *local_20;
  
  if (param_2 != 0) {
    FUN_14080bc50(param_1,param_2 + 0x28);
    return param_1;
  }
  uVar5 = FSlateNoResource::FSlateNoResource(local_98,&DAT_1468b5d88);
  FUN_14080bc50(param_1,uVar5);
  local_98[0] = &PTR__scalar_deleting_destructor__143f489a8;
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
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142107140 FUN_142107140 body=506 status=ok
// SIG undefined FUN_142107140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142107140(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uStackX_14;
  longlong *local_140;
  undefined **local_138;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  byte local_b8;
  undefined **local_a8 [8];
  longlong *local_68;
  longlong *local_30;
  
  if (param_2 == 0) {
    uVar6 = FSlateNoResource::FSlateNoResource(local_a8,&DAT_1468b5d88);
    FUN_14080bc50(param_1,uVar6);
    local_a8[0] = &PTR__scalar_deleting_destructor__143f489a8;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  else {
    local_b8 = local_b8 & 0xfc;
    local_138 = &PTR__scalar_deleting_destructor__143f489a8;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = _DAT_1464aa6c0;
    uStack_110 = _DAT_1464aa6c8;
    uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
    local_d4 = uStackX_14;
    local_dc = uStackX_14;
    local_e0 = (undefined4)DAT_1468b5d88;
    local_130 = 32.0;
    local_12c = 32.0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_d0 = 0;
    local_cc = 3;
    local_c0 = 0;
    local_140 = (longlong *)0x0;
    local_c8 = 0;
    local_f0 = param_2;
    local_d8 = local_e0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_c0,&local_140,param_3,param_4,0);
    plVar3 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    local_130 = (float)param_3;
    local_12c = (float)param_4;
    FUN_14080bc50(param_1,&local_138);
    FSlateBrush::~FSlateBrush(&local_138);
  }
  return param_1;
}



// FUNCTION 142107340 FUN_142107340 body=574 status=ok
// SIG undefined FUN_142107340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142107340(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uStackX_14;
  longlong *local_150;
  undefined **local_148;
  float local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  byte local_c8;
  undefined **local_b8 [8];
  longlong *local_78;
  longlong *local_40;
  
  if (param_2 == 0) {
    uVar6 = FSlateNoResource::FSlateNoResource(local_b8,&DAT_1468b5d88);
    FUN_14080bc50(param_1,uVar6);
    local_b8[0] = &PTR__scalar_deleting_destructor__143f489a8;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_78 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  else {
    local_c8 = local_c8 & 0xfc;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = _DAT_1464aa6c0;
    uStack_120 = _DAT_1464aa6c8;
    uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
    local_e4 = uStackX_14;
    local_ec = uStackX_14;
    local_f0 = (undefined4)DAT_1468b5d88;
    local_148 = &PTR__scalar_deleting_destructor__143f489a8;
    local_140 = 32.0;
    local_13c = 32.0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_e0 = 0;
    local_dc = 3;
    local_d0 = 0;
    local_150 = (longlong *)0x0;
    local_d8 = 0;
    local_100 = param_2;
    local_e8 = local_f0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_150,param_3,param_4,0);
    plVar3 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    if ((param_3 < 1) && (param_3 = 0, *(int **)(param_2 + 0xd8) != (int *)0x0)) {
      param_3 = **(int **)(param_2 + 0xd8);
    }
    if ((param_4 < 1) && (param_4 = 0, *(longlong *)(param_2 + 0xd8) != 0)) {
      param_4 = *(int *)(*(longlong *)(param_2 + 0xd8) + 4);
    }
    local_140 = (float)param_3;
    local_13c = (float)param_4;
    FUN_14080bc50(param_1,&local_148);
    FSlateBrush::~FSlateBrush(&local_148);
  }
  return param_1;
}



// FUNCTION 142107580 Modify body=88 status=ok
// SIG undefined Modify(void)

byte UWidget::Modify(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = FUN_14175d020();
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    bVar3 = (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
    return bVar3 & bVar2;
  }
  return bVar2;
}



// FUNCTION 1421075e0 NativeConstruct body=27 status=ok
// SIG undefined NativeConstruct(void)

void UUserWidget::NativeConstruct(undefined8 param_1)

{
  FUN_14215a8d0();
  FUN_142142860(param_1);
  return;
}



// FUNCTION 142107600 FUN_142107600 body=221 status=ok
// SIG undefined FUN_142107600(void)

void FUN_142107600(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  lVar2 = param_1[0x36];
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x1e0) + -1;
    if (-1 < iVar4) {
      do {
        FUN_1423747d0(param_1[0x36],iVar4);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      lVar2 = param_1[0x36];
    }
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x2a0))(param_1);
      if (lVar2 != 0) {
        FUN_142712050(lVar2,param_1[0x36]);
      }
    }
    FUN_142362b90(param_1[0x36]);
    iVar4 = *(int *)(param_1[0x36] + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar3 = iVar4 >> 0x1f & 0xffff;
      uVar1 = iVar4 + uVar3;
      lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar3) * 0x18;
    }
    else {
      lVar2 = 0;
    }
    *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x20000000;
    param_1[0x36] = 0;
  }
  FUN_14215aa80(param_1);
  return;
}



// FUNCTION 142107700 NativeOnAnalogValueChanged body=264 status=ok
// SIG undefined NativeOnAnalogValueChanged(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UUserWidget::NativeOnAnalogValueChanged
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_150 = *(undefined2 *)(param_4 + 8);
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_14e = *(undefined1 *)(param_4 + 10);
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_14c = *(undefined4 *)(param_4 + 0xc);
  local_148 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined8 *)(param_4 + 0x18);
  local_138 = *(undefined8 *)(param_4 + 0x20);
  local_f8 = param_3[4];
  uStack_f0 = param_3[5];
  local_130 = *(longlong *)(param_4 + 0x28);
  local_e8 = param_3[6];
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  local_128 = *(undefined4 *)(param_4 + 0x30);
  local_120 = *(undefined4 *)(param_4 + 0x38);
  local_124 = *(undefined4 *)(param_4 + 0x34);
  local_158 = &PTR__scalar_deleting_destructor__144d56590;
  uVar1 = FUN_14215b020(local_120,local_d8,&local_118,&local_158);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142107820 FUN_142107820 body=56 status=ok
// SIG undefined FUN_142107820(void)

void FUN_142107820(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = param_2[6];
  FUN_14215b340(local_28,&local_48);
  return;
}



// FUNCTION 142107860 FUN_142107860 body=105 status=ok
// SIG undefined FUN_142107860(void)

void FUN_142107860(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_78 [112];
  
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  local_a8 = param_2[2];
  uStack_a0 = param_2[3];
  local_98 = *(undefined4 *)(param_2 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_90 = *(undefined4 *)(param_2 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_88 = param_2[6];
  uVar1 = FUN_1418890d0(local_78,param_3);
  FUN_14215b4d0(param_1,&local_b8,uVar1,param_4);
  return;
}



// FUNCTION 1421078d0 NativeOnDragLeave body=60 status=ok
// SIG undefined NativeOnDragLeave(void)

void UUserWidget::NativeOnDragLeave(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_78 [112];
  
  uVar1 = FUN_1418890d0(local_78);
  FUN_14215b670(param_1,uVar1,param_3);
  return;
}



// FUNCTION 142107910 FUN_142107910 body=105 status=ok
// SIG undefined FUN_142107910(void)

void FUN_142107910(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_78 [112];
  
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  local_a8 = param_2[2];
  uStack_a0 = param_2[3];
  local_98 = *(undefined4 *)(param_2 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_90 = *(undefined4 *)(param_2 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_88 = param_2[6];
  uVar1 = FUN_1418890d0(local_78,param_3);
  FUN_14215b7c0(param_1,&local_b8,uVar1,param_4);
  return;
}



// FUNCTION 142107980 FUN_142107980 body=105 status=ok
// SIG undefined FUN_142107980(void)

void FUN_142107980(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_78 [112];
  
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  local_a8 = param_2[2];
  uStack_a0 = param_2[3];
  local_98 = *(undefined4 *)(param_2 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_90 = *(undefined4 *)(param_2 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_88 = param_2[6];
  uVar1 = FUN_1418890d0(local_78,param_3);
  FUN_14215b970(param_1,&local_b8,uVar1,param_4);
  return;
}



// FUNCTION 1421079f0 FUN_1421079f0 body=461 status=ok
// SIG undefined FUN_1421079f0(void)

void FUN_1421079f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  plVar4 = (longlong *)param_1[0x1d];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar4[1];
    bVar9 = iVar8 == 0;
    if (bVar9) {
      *(int *)(plVar4 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (!bVar9) {
      while( true ) {
        LOCK();
        bVar9 = iVar8 == (int)plVar4[1];
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar9) break;
        LOCK();
        iVar8 = (int)plVar4[1];
        bVar9 = iVar8 == 0;
        if (bVar9) {
          *(int *)(plVar4 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        lVar5 = param_1[0x1c];
        if (lVar5 != 0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_38 = lVar5;
          local_30 = plVar4;
          cVar7 = FUN_1418091e0(param_3,&local_38);
          LOCK();
          plVar1 = plVar4 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          if (cVar7 == '\0') {
            (**(code **)(*param_1 + 0x370))(param_1,param_4);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            local_48 = lVar5;
            local_40 = plVar4;
            cVar7 = FUN_1418090f0(param_2,&local_48);
            plVar1 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_40 + 1;
              lVar5 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                iVar8 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                }
              }
            }
            LOCK();
            plVar1 = plVar4 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
            if (cVar7 == '\0') {
              (**(code **)(*param_1 + 0x368))(param_1,param_4);
            }
          }
        }
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142107bd0 NativeOnFocusReceived body=138 status=ok
// SIG undefined NativeOnFocusReceived(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UUserWidget::NativeOnFocusReceived
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215bb60(local_f8,local_d8,&local_118,*param_4);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142107c60 NativeOnKeyChar body=204 status=ok
// SIG undefined NativeOnKeyChar(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UUserWidget::NativeOnKeyChar
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined4 local_12c;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_130 = *(undefined2 *)(param_4 + 8);
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_120 = *(undefined2 *)(param_4 + 0x18);
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_12e = *(undefined1 *)(param_4 + 10);
  local_12c = *(undefined4 *)(param_4 + 0xc);
  local_128 = *(undefined8 *)(param_4 + 0x10);
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  local_138 = &PTR_FUN_144d565a8;
  uVar1 = FUN_14215bc30(local_f8,local_d8,&local_118,&local_138);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142107d30 FUN_142107d30 body=252 status=ok
// SIG undefined FUN_142107d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142107d30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_150 = *(undefined2 *)(param_4 + 8);
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_14e = *(undefined1 *)(param_4 + 10);
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_14c = *(undefined4 *)(param_4 + 0xc);
  local_148 = *(undefined8 *)(param_4 + 0x10);
  local_158 = &PTR__scalar_deleting_destructor__144d56578;
  local_140 = *(undefined8 *)(param_4 + 0x18);
  local_138 = *(undefined8 *)(param_4 + 0x20);
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_130 = *(longlong *)(param_4 + 0x28);
  local_e8 = param_3[6];
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  local_128 = *(undefined4 *)(param_4 + 0x30);
  local_124 = *(undefined4 *)(param_4 + 0x34);
  uVar1 = FUN_14215bd60(local_f8,local_d8,&local_118,&local_158);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142107e30 FUN_142107e30 body=252 status=ok
// SIG undefined FUN_142107e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142107e30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_150 = *(undefined2 *)(param_4 + 8);
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_14e = *(undefined1 *)(param_4 + 10);
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_14c = *(undefined4 *)(param_4 + 0xc);
  local_148 = *(undefined8 *)(param_4 + 0x10);
  local_158 = &PTR__scalar_deleting_destructor__144d56578;
  local_140 = *(undefined8 *)(param_4 + 0x18);
  local_138 = *(undefined8 *)(param_4 + 0x20);
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_130 = *(longlong *)(param_4 + 0x28);
  local_e8 = param_3[6];
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  local_128 = *(undefined4 *)(param_4 + 0x30);
  local_124 = *(undefined4 *)(param_4 + 0x34);
  uVar1 = FUN_14215bea0(local_f8,local_d8,&local_118,&local_158);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142107f30 NativeOnMotionDetected body=283 status=ok
// SIG undefined NativeOnMotionDetected(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UUserWidget::NativeOnMotionDetected
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_188 [32];
  undefined **local_168;
  undefined2 local_160;
  undefined1 local_15e;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_160 = *(undefined2 *)(param_4 + 8);
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_124 = *(undefined4 *)(param_4 + 0x44);
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_15e = *(undefined1 *)(param_4 + 10);
  local_15c = *(undefined4 *)(param_4 + 0xc);
  local_f8 = param_3[4];
  uStack_f0 = param_3[5];
  local_158 = *(undefined8 *)(param_4 + 0x10);
  local_150 = *(undefined8 *)(param_4 + 0x18);
  local_144 = *(undefined8 *)(param_4 + 0x24);
  local_168 = &PTR_FUN_144d565d8;
  local_148 = *(undefined4 *)(param_4 + 0x20);
  local_138 = *(undefined8 *)(param_4 + 0x30);
  local_13c = *(undefined4 *)(param_4 + 0x2c);
  local_12c = *(undefined8 *)(param_4 + 0x3c);
  local_e8 = param_3[6];
  local_130 = *(undefined4 *)(param_4 + 0x38);
  uVar1 = FUN_14215bfe0((int)local_12c,local_d8,&local_118,&local_168);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142108050 FUN_142108050 body=135 status=ok
// SIG undefined FUN_142108050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142108050(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215c140(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 1421080e0 FUN_1421080e0 body=135 status=ok
// SIG undefined FUN_1421080e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1421080e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215c300(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142108170 FUN_142108170 body=135 status=ok
// SIG undefined FUN_142108170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142108170(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215c4c0(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142108210 FUN_142108210 body=56 status=ok
// SIG undefined FUN_142108210(void)

void FUN_142108210(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = param_2[6];
  FUN_14215c6c0(local_28,&local_48);
  return;
}



// FUNCTION 142108260 FUN_142108260 body=135 status=ok
// SIG undefined FUN_142108260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142108260(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215c990(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 1421082f0 FUN_1421082f0 body=135 status=ok
// SIG undefined FUN_1421082f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1421082f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215cb50(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 1421083a0 FUN_1421083a0 body=108 status=ok
// SIG undefined FUN_1421083a0(void)

undefined8 *
FUN_1421083a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  
  *param_2 = *param_5;
  lVar1 = param_5[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_2[2] = param_5[2];
  lVar1 = param_5[3];
  param_2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_2 + 4,param_5 + 4);
  *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_5 + 6);
  return param_2;
}



// FUNCTION 142108410 FUN_142108410 body=252 status=ok
// SIG undefined FUN_142108410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142108410(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_150 = *(undefined2 *)(param_4 + 8);
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_14e = *(undefined1 *)(param_4 + 10);
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_14c = *(undefined4 *)(param_4 + 0xc);
  local_148 = *(undefined8 *)(param_4 + 0x10);
  local_158 = &PTR__scalar_deleting_destructor__144d56578;
  local_140 = *(undefined8 *)(param_4 + 0x18);
  local_138 = *(undefined8 *)(param_4 + 0x20);
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_130 = *(longlong *)(param_4 + 0x28);
  local_e8 = param_3[6];
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  local_128 = *(undefined4 *)(param_4 + 0x30);
  local_124 = *(undefined4 *)(param_4 + 0x34);
  uVar1 = FUN_14215cde0(local_f8,local_d8,&local_118,&local_158);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142108510 FUN_142108510 body=135 status=ok
// SIG undefined FUN_142108510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142108510(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215cf20(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 1421085b0 FUN_1421085b0 body=135 status=ok
// SIG undefined FUN_1421085b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1421085b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215d120(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142108640 FUN_142108640 body=135 status=ok
// SIG undefined FUN_142108640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142108640(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215d2e0(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 1421086d0 FUN_1421086d0 body=135 status=ok
// SIG undefined FUN_1421086d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1421086d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215d4a0(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}



// FUNCTION 142108760 FUN_142108760 body=135 status=ok
// SIG undefined FUN_142108760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142108760(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = *param_3;
  uStack_110 = param_3[1];
  local_108 = param_3[2];
  uStack_100 = param_3[3];
  local_f8 = *(undefined4 *)(param_3 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_f0 = *(undefined4 *)(param_3 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_e8 = param_3[6];
  uVar1 = FUN_14215d660(local_f8,local_d8,&local_118);
  FReply::FReply(param_2,uVar1);
  FUN_140438c20(local_d8);
  return param_2;
}


