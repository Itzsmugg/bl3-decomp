// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141c416f0 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessMotionBlur::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1c);
  *param_1 = &PTR__scalar_deleting_destructor__144dca360;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 141c41780 `scalar_deleting_destructor' body=129 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessCombineLUTs::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15);
  *param_1 = &PTR_FUN_144dca250;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 141c41810 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessSunMergeES2::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e14408;
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141c41890 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessVisualizeBuffer::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FUN_140590de0(param_1 + 0x17);
  *param_1 = &PTR__scalar_deleting_destructor__144dca030;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141c41920 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e1cf98;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c41970 FUN_141c41970 body=2327 status=ok
// SIG undefined FUN_141c41970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141c41970(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  float *pfVar17;
  byte bVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  float local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  longlong *local_188;
  undefined4 local_180;
  byte local_178;
  char local_177 [15];
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158;
  longlong local_148;
  longlong lStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108 [2];
  longlong local_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar13 = 0;
  local_118 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_177[0] = param_3;
  if ((*(int *)(local_118 + 0x38) < DAT_146a54d58) &&
     (_Init_thread_header(&DAT_146a54d58), DAT_146a54d58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar12 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
    if (plVar12 != (longlong *)0x0) {
      lVar13 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    DAT_146a54d50 = lVar13;
    _Init_thread_footer(&DAT_146a54d58);
  }
  uVar19 = 5;
  iVar1 = *(int *)(DAT_146a54d50 + 4);
  iVar15 = 0;
  if ((-1 < iVar1) && (iVar15 = 5, iVar1 < 5)) {
    iVar15 = iVar1;
  }
  lVar13 = *(longlong *)(param_2 + 8);
  uVar8 = FUN_14274f980(*(undefined8 *)(lVar13 + 0x10));
  if ((uVar8 < 0x1c) && ((0x8c51800U >> (uVar8 & 0x1f) & 1) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((*(char *)(*(longlong *)(lVar13 + 0x10) + 0x1464) == '\x01') &&
     (2 < *(int *)(*(longlong *)(lVar13 + 0x10) + 0x1a38))) {
    bVar18 = 1;
  }
  else {
    bVar18 = 0;
  }
  if (((bVar6) && (bVar18 != 0)) && (DAT_146a54d5c == '\0')) {
    DAT_146a54d5c = '\x01';
  }
  plVar12 = (longlong *)(param_2 + 0x10);
  plVar16 = (longlong *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  local_178 = bVar18;
  local_158 = plVar12;
  if (iVar15 == 0) {
LAB_141c41ece:
    lVar11 = local_158[1];
    *param_1 = *local_158;
    param_1[1] = lVar11;
    plVar12 = local_158;
    bVar18 = local_178;
LAB_141c41edb:
    if (*param_1 != 0) {
      uVar21 = (undefined4)*param_1;
      uVar20 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_130 = (undefined4)param_1[1];
      uStack_12c = *(uint *)((longlong)param_1 + 0xc);
      goto LAB_141c41eeb;
    }
  }
  else {
    if ((bVar18 == 0) || (bVar6)) {
      lVar11 = *(longlong *)(lVar13 + 0x10);
      local_100 = lVar11 + 0x14dc;
      local_f0 = lVar11 + 0x14cc;
      local_108[0] = *(float *)(lVar11 + 0x1488);
      local_e0 = lVar11 + 0x14bc;
      local_f8 = *(undefined4 *)(lVar11 + 0x1484);
      local_d0 = lVar11 + 0x14ac;
      local_e8 = *(undefined4 *)(lVar11 + 0x1480);
      local_c0 = lVar11 + 0x149c;
      local_d8 = *(undefined4 *)(lVar11 + 0x147c);
      local_b0 = lVar11 + 0x148c;
      local_c8 = *(undefined4 *)(lVar11 + 0x1478);
      local_b8 = *(undefined4 *)(lVar11 + 0x1474);
      if (*(uint *)(&DAT_144e1cea4 + (longlong)iVar15 * 4) != 0) {
        pfVar17 = local_108;
        uVar14 = (ulonglong)*(uint *)(&DAT_144e1cea4 + (longlong)iVar15 * 4);
        do {
          pfVar2 = *(float **)(pfVar17 + 2);
          fVar24 = pfVar2[2] * 0.16666667;
          fVar23 = pfVar2[1] * 0.16666667;
          fVar22 = *pfVar2 * 0.16666667;
          if (local_177[0] != '\0') {
            fVar22 = 0.0;
            fVar24 = 0.0;
            fVar23 = pfVar2[1] * 0.09833333 + *pfVar2 * 0.050000004 + pfVar2[2] * 0.018333334;
          }
          if (1e-08 < *pfVar17) {
            local_188 = &local_148;
            local_1a0 = *pfVar17 * *(float *)(lVar11 + 0x1470);
            local_148 = *param_1;
            lStack_140 = param_1[1];
            local_180 = *(undefined4 *)(DAT_146a51e18 + 4);
            local_190 = &local_168;
            local_198 = 0;
            local_1a8 = plVar12 + uVar19 * 2;
            local_168 = (longlong *)CONCAT44(fVar23,fVar22);
            uStack_160 = (byte *)CONCAT44(pfVar2[3] * 0.16666667,fVar24);
            FUN_141c587d0(&local_128,lVar13,L"BloomBlurX",L"BloomBlurY");
            *param_1 = CONCAT44(uStack_124,local_128);
            param_1[1] = CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
          }
          pfVar17 = pfVar17 + 4;
          uVar19 = (ulonglong)((int)uVar19 - 1);
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        plVar12 = local_158;
        bVar18 = local_178;
        if (*param_1 != 0) goto LAB_141c41edb;
      }
      goto LAB_141c41ece;
    }
    lVar11 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x14f0);
    if (((lVar11 != 0) || (lVar11 = *(longlong *)(DAT_146b17150 + 0x388), lVar11 != 0)) &&
       (*(longlong *)(lVar11 + 0x60) != 0)) {
      UTexture2D::IsFullyStreamedIn(lVar11);
      cVar7 = UTexture2D::IsFullyStreamedIn(lVar11);
      if ((cVar7 == '\x01') && ((*(byte *)(lVar11 + 0xc4) & 4) == 0)) {
        lVar11 = *plVar12;
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        uStack_160 = &local_178;
        local_178 = 0;
        lVar4 = *(longlong *)(lVar13 + 0x28);
        lVar5 = *(longlong *)(lVar13 + 0x30);
        local_168 = (longlong *)&DAT_14060d670;
        lVar9 = FUN_1415d8310(&local_168,&DAT_146216a38);
        plVar10 = (longlong *)operator_new(0xf0,lVar9 + 0x18,1,0);
        if (plVar10 != (longlong *)0x0) {
          *(undefined4 *)(plVar10 + 1) = 0;
          plVar10[2] = 0;
          *(undefined4 *)(plVar10 + 3) = 0;
          plVar10[4] = 0;
          *(undefined4 *)(plVar10 + 5) = 0;
          plVar10[6] = 1;
          plVar10[7] = 0;
          plVar10[8] = 0;
          plVar10[9] = 0;
          plVar10[10] = 1;
          *(undefined2 *)(plVar10 + 0xb) = 1;
          *(undefined8 *)((longlong)plVar10 + 0x5c) = 0;
          *(undefined4 *)((longlong)plVar10 + 100) = 0;
          *(undefined1 *)(plVar10 + 0xd) = 0;
          plVar10[0xe] = (longlong)L"UnknownTexture";
          *(undefined2 *)(plVar10 + 0xf) = 1;
          plVar10[0x10] = 0;
          *(undefined4 *)(plVar10 + 0x11) = 0;
          plVar10[0x12] = 0;
          plVar10[0x13] = 0;
          plVar10[0x15] = 0;
          plVar10[0x16] = 0;
          plVar10[0x14] = 0;
          *plVar10 = (longlong)&PTR__scalar_deleting_destructor__144e1bcc8;
          plVar10[0x17] = 0;
          plVar10[0x18] = 0;
          plVar10[0x1a] = 0;
          plVar10[0x1b] = 0;
          *(undefined2 *)(plVar10 + 0x1d) = 0;
          plVar16 = plVar10;
        }
        plVar10 = *(longlong **)(lVar13 + 8);
        iVar1 = (int)plVar10[1];
        *(int *)(plVar10 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar1);
        }
        *(longlong **)(*plVar10 + (longlong)iVar1 * 8) = plVar16;
        if (*(int *)(DAT_146a51ed8 + 4) == 1) {
          local_148 = lVar11;
          lStack_140 = uVar3;
          (**(code **)(*plVar16 + 0x18))(plVar16,0,&local_148);
          local_148 = lVar4;
          lStack_140 = lVar5;
          (**(code **)(*plVar16 + 0x18))(plVar16,1,&local_148);
        }
        else {
          local_148 = lVar4;
          lStack_140 = lVar5;
          (**(code **)(*plVar16 + 0x18))();
        }
        uStack_160 = (byte *)((ulonglong)uStack_160 & 0xffffffff00000000);
        *(longlong **)(lVar13 + 0x28) = plVar16;
        *(byte **)(lVar13 + 0x30) = uStack_160;
        local_168 = plVar16;
      }
      goto LAB_141c41edb;
    }
  }
  uVar21 = (undefined4)*plVar12;
  uVar20 = *(undefined4 *)((longlong)plVar12 + 4);
  uStack_130 = (undefined4)plVar12[1];
  uStack_12c = *(uint *)((longlong)plVar12 + 0xc);
LAB_141c41eeb:
  uVar19 = 0;
  _local_138 = CONCAT44(uVar20,uVar21);
  lVar11 = *(longlong *)(lVar13 + 0x10);
  fVar22 = *(float *)(lVar11 + 0x15ac);
  fVar23 = fVar22 * *(float *)(lVar11 + 0x15b8);
  fVar24 = fVar22 * *(float *)(lVar11 + 0x15b4);
  fVar22 = fVar22 * *(float *)(lVar11 + 0x15b0);
  if ((*(int *)(local_118 + 0x38) < DAT_146a54d68) &&
     (_Init_thread_header(&DAT_146a54d68), DAT_146a54d68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar12 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.LensFlareQuality");
    uVar14 = uVar19;
    if (plVar12 != (longlong *)0x0) {
      uVar14 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    DAT_146a54d60 = uVar14;
    _Init_thread_footer(&DAT_146a54d68);
  }
  uVar8 = *(uint *)(DAT_146a54d60 + 4);
  if ((-1 < (int)uVar8) && (uVar19 = 3, (int)uVar8 < 3)) {
    uVar19 = (ulonglong)uVar8;
  }
  if (((((1e-05 <= fVar22 * fVar22) || (1e-05 <= fVar24 * fVar24)) || (1e-05 <= fVar23 * fVar23)) &&
      ((0 < (int)uVar19 && (local_177[0] == '\0')))) && (*(int *)(DAT_146a520f0 + 4) != 0)) {
    local_177[0] = '\0';
    fVar22 = *(float *)(*(longlong *)(lVar13 + 0x10) + 0x15c0);
    uStack_160 = (byte *)local_177;
    local_168 = (longlong *)&DAT_14060d670;
    local_128 = 0x4060d670;
    uStack_124 = 1;
    local_178 = 0.3 < fVar22;
    uStack_120 = (char *)uStack_160;
    lVar11 = FUN_1415d8310(&local_128,&DAT_146216a38);
    lVar11 = operator_new(0xc0,lVar11 + 0x18,1);
    if (lVar11 == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      if (0.3 < fVar22) {
        uVar21 = 0x40000000;
      }
      else {
        uVar21 = 0x3f800000;
      }
      plVar12 = (longlong *)
                FRCPassPostProcessLensFlares::FRCPassPostProcessLensFlares(lVar11,uVar21,bVar18 ^ 1)
      ;
    }
    plVar16 = *(longlong **)(lVar13 + 8);
    iVar1 = (int)plVar16[1];
    *(int *)(plVar16 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar16 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar1);
    }
    *(longlong **)(*plVar16 + (longlong)iVar1 * 8) = plVar12;
    (**(code **)(*plVar12 + 0x18))(plVar12,0,&local_138);
    plVar16 = local_158 + (longlong)(3 - (int)uVar19) * 2;
    local_118 = *plVar16;
    uStack_110 = (undefined4)plVar16[1];
    uStack_10c = *(undefined4 *)((longlong)plVar16 + 0xc);
    if (local_178 == 0) {
      plVar16 = &local_118;
    }
    else {
      local_177[0] = '\0';
      uVar21 = *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 0x15c4);
      uStack_160 = (byte *)local_177;
      local_168 = (longlong *)&DAT_14060d670;
      local_128 = 0x4060d670;
      uStack_124 = 1;
      uStack_120 = (char *)uStack_160;
      lVar11 = FUN_1415d8310(&local_128,&DAT_146216a38);
      lVar11 = operator_new(0xb0,lVar11 + 0x18,1);
      if (lVar11 == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)
                  FRCPassPostProcessLensBlur::FRCPassPostProcessLensBlur(lVar11,fVar22,uVar21);
      }
      plVar16 = *(longlong **)(lVar13 + 8);
      iVar1 = (int)plVar16[1];
      *(int *)(plVar16 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar16 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar1);
      }
      *(longlong **)(*plVar16 + (longlong)iVar1 * 8) = plVar10;
      (**(code **)(*plVar10 + 0x18))(plVar10,0,&local_118);
      plVar16 = &local_168;
      uStack_160 = (byte *)((ulonglong)uStack_160 & 0xffffffff00000000);
      local_168 = plVar10;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,1,plVar16);
    *param_1 = (longlong)plVar12;
    param_1[1] = (ulonglong)uStack_12c << 0x20;
  }
  return param_1;
}



// FUNCTION 141c42290 FUN_141c42290 body=2568 status=ok
// SIG undefined FUN_141c42290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c42290(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  undefined2 *puVar2;
  void *_Src;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  byte bVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined2 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_207 [15];
  undefined8 local_1f8;
  undefined1 *puStack_1f0;
  uint local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  int local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  uint local_190;
  longlong *local_188;
  undefined8 *local_180;
  undefined2 *local_178;
  longlong *local_168;
  undefined1 *puStack_160;
  longlong local_158;
  longlong local_148 [2];
  longlong *local_138;
  undefined1 *puStack_130;
  longlong *local_128;
  undefined1 local_120 [8];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined *local_f8;
  undefined1 *puStack_f0;
  longlong *local_e8;
  longlong **local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [24];
  longlong local_b8 [4];
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar14 = (longlong *)0x0;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_180 = param_1;
  local_118 = param_2;
  local_110 = param_3;
  local_108 = param_4;
  if ((*(int *)(lVar10 + 0x38) < DAT_146a54d88) && (_Init_thread_header(), DAT_146a54d88 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar16 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BufferVisualizationDumpFrames")
    ;
    plVar17 = plVar14;
    if (plVar16 != (longlong *)0x0) {
      plVar17 = (longlong *)(**(code **)(*plVar16 + 0x38))(plVar16);
    }
    DAT_146a54d80 = plVar17;
    _Init_thread_footer();
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_146a54d98) && (_Init_thread_header(), DAT_146a54d98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar16 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))
                        (DAT_1468b1f88,L"r.BufferVisualizationDumpFramesAsHDR");
    plVar17 = plVar14;
    if (plVar16 != (longlong *)0x0) {
      plVar17 = (longlong *)(**(code **)(*plVar16 + 0x38))(plVar16);
    }
    DAT_146a54d90 = plVar17;
    _Init_thread_footer();
  }
  if ((DAT_1468c2184 == '\0') || (lVar10 = FUN_1424f49c0(), *(char *)(lVar10 + 0x29) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((*(char *)(param_1[2] + 0x19c0) == '\0') ||
     ((*(int *)((longlong)DAT_146a54d80 + 4) == 0 && (!bVar5)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((*(int *)((longlong)DAT_146a54d90 + 4) == 0) &&
     (lVar10 = FUN_1424f49c0(), *(char *)(lVar10 + 0x41) == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (bVar5) {
    local_1e8 = *(int *)(param_1[2] + 0x19d0);
    lVar10 = (longlong)(int)local_1e8;
    _Src = *(void **)(param_1[2] + 0x19c8);
    local_1f8 = (longlong *)0x0;
    puStack_1f0 = (undefined1 *)CONCAT44(puStack_1f0._4_4_,local_1e8);
    if (local_1e8 == 0) {
      local_178 = (undefined2 *)0x0;
      local_1e8 = 0;
      uVar25 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,local_1e8,0);
      local_178 = (undefined2 *)local_1f8;
      _guard_xfg_dispatch_icall_nop(local_1f8,_Src,lVar10 * 2);
      uVar25 = (ulonglong)puStack_1f0 & 0xffffffff;
      local_1e8 = (uint)puStack_1f0;
    }
    plVar17 = (longlong *)param_1[5];
    uVar4 = param_1[6];
    puStack_1f0 = &local_208;
    local_208 = 0;
    local_1f8 = (longlong *)&DAT_14060d670;
    local_138 = (longlong *)&DAT_14060d670;
    puStack_130 = puStack_1f0;
    lVar10 = FUN_1415d8310(&local_138,&DAT_146216a38);
    plVar11 = (longlong *)operator_new(200,lVar10 + 0x18,1,0);
    plVar16 = plVar14;
    if (plVar11 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar11,0,200);
      *(undefined4 *)(plVar11 + 3) = 0;
      plVar11[4] = 0;
      *(undefined4 *)(plVar11 + 5) = 0;
      plVar11[6] = 1;
      plVar11[7] = 0;
      plVar11[8] = 0;
      plVar11[9] = 0;
      plVar11[0xe] = (longlong)L"UnknownTexture";
      plVar11[10] = 1;
      *(undefined2 *)(plVar11 + 0xb) = 1;
      *(undefined8 *)((longlong)plVar11 + 0x5c) = 0;
      *(undefined4 *)((longlong)plVar11 + 100) = 0;
      *(undefined1 *)(plVar11 + 0xd) = 0;
      *(undefined2 *)(plVar11 + 0xf) = 1;
      plVar11[0x10] = 0;
      *(undefined4 *)(plVar11 + 0x11) = 0;
      plVar11[0x12] = 0;
      plVar11[0x13] = 0;
      plVar11[0x15] = 0;
      plVar11[0x16] = 0;
      plVar11[0x14] = 0;
      *plVar11 = (longlong)&PTR__scalar_deleting_destructor__144e1c6e0;
      plVar11[0x17] = 0;
      plVar11[0x18] = 0;
      plVar16 = plVar11;
    }
    plVar11 = (longlong *)param_1[1];
    iVar9 = (int)plVar11[1];
    *(int *)(plVar11 + 1) = iVar9 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar9 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar9);
    }
    *(longlong **)(*plVar11 + (longlong)iVar9 * 8) = plVar16;
    local_138 = plVar17;
    puStack_130 = (undefined1 *)uVar4;
    (**(code **)(*plVar16 + 0x18))(plVar16,0,&local_138);
    uVar13 = (ulonglong)puStack_1f0 >> 0x20;
    puStack_1f0 = (undefined1 *)((ulonglong)puStack_1f0 & 0xffffffff00000000);
    local_1f8._0_4_ = SUB84(plVar16,0);
    local_1f8._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
    local_190 = -(uint)bVar6 & 10;
    plVar11 = (longlong *)(param_1[2] + 0x1998);
    *(undefined4 *)(param_1 + 5) = (undefined4)local_1f8;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_1f8._4_4_;
    *(undefined4 *)(param_1 + 6) = 0;
    *(int *)((longlong)param_1 + 0x34) = (int)uVar13;
    local_1f8 = plVar16;
    local_128 = plVar11;
    while ((local_1a8 = (int)plVar14, -1 < local_1a8 && (local_1a8 < (int)plVar11[1]))) {
      lVar10 = (longlong)local_1a8;
      plVar14 = *(longlong **)(*plVar11 + lVar10 * 8);
      if (plVar14 != (longlong *)0x0) {
        puStack_160 = local_207;
        local_207[0] = 0;
        local_f8 = &DAT_14060d670;
        local_168 = (longlong *)&DAT_14060d670;
        puStack_f0 = puStack_160;
        lVar12 = FUN_1415d8310(&local_168,&DAT_146216a38);
        uVar18 = *(longlong *)(lVar12 + 0x18) + 0xfU & 0xfffffffffffffff0;
        puVar1 = (ulonglong *)(lVar12 + 0x18);
        uVar13 = uVar18 + 0x118;
        if (*(ulonglong *)(lVar12 + 0x20) < uVar13) {
          FMemStackBase::AllocateNewChunk(puVar1,0x128);
          uVar18 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar13 = uVar18 + 0x118;
        }
        *puVar1 = uVar13;
        if (uVar18 == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)
                    FUN_141c75ec0(uVar18,*(undefined8 *)(*plVar11 + lVar10 * 8),
                                  *(undefined4 *)(param_1[2] + 0x1a38),local_190);
        }
        plVar19 = (longlong *)local_180[1];
        iVar9 = (int)plVar19[1];
        *(int *)(plVar19 + 1) = iVar9 + 1;
        local_188 = plVar11;
        if (*(int *)((longlong)plVar19 + 0xc) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar19,iVar9);
        }
        *(longlong **)(*plVar19 + (longlong)iVar9 * 8) = plVar11;
        local_168 = plVar17;
        puStack_160 = (undefined1 *)uVar4;
        (**(code **)(*plVar11 + 0x18))(plVar11,0,&local_168);
        local_168 = (longlong *)*local_118;
        puStack_160 = (undefined1 *)local_118[1];
        (**(code **)(*plVar11 + 0x18))(plVar11,1,&local_168);
        local_168 = (longlong *)*local_110;
        puStack_160 = (undefined1 *)local_110[1];
        (**(code **)(*plVar11 + 0x18))(plVar11,2,&local_168);
        local_168 = (longlong *)*local_108;
        puStack_160 = (undefined1 *)local_108[1];
        (**(code **)(*plVar11 + 0x18))(plVar11,3,&local_168);
        plVar14 = (longlong *)(**(code **)(*plVar14 + 0x2a8))(plVar14,0,0);
        puVar7 = local_180;
        local_1c0 = 0;
        (**(code **)(*plVar14 + 0x40))
                  (plVar14,*(undefined4 *)(local_180[2] + 0x1a38),local_d8,&local_1c0);
        cVar8 = FUN_14259cc30(local_1c0);
        if (cVar8 != '\0') {
          uVar3 = *puVar7;
          uVar15 = FSceneRenderTargets::Get(uVar3);
          FUN_141cd9760(uVar15,uVar3,1);
        }
        plVar14 = local_128;
        iVar23 = (int)uVar25;
        iVar24 = 0;
        iVar9 = iVar23 + -1;
        if (iVar23 == 0) {
          iVar9 = iVar24;
        }
        if (iVar9 != 0) {
          local_b8[0] = 0;
          local_b8[1] = 0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0xffffffff;
          local_84 = 0;
          local_78 = 0;
          local_70 = 0;
          local_1c0 = *(undefined8 *)(*(longlong *)(*local_128 + lVar10 * 8) + 0x18);
          FName::ToString(&local_1c0,local_d0);
          FStringFormatArg::FStringFormatArg(&local_168,local_d0);
          local_148[0] = 0;
          local_148[1] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148,0);
          FGenericPlatformString::Memcpy(local_148[0],L"material",0x12);
          local_e8 = local_148;
          local_e0 = &local_168;
          FUN_141c36050(local_b8,local_120,&local_e8,0);
          if (local_148[0] != 0) {
            FMemory::Free();
          }
          if (local_158 != 0) {
            FMemory::Free();
          }
          puVar2 = local_178;
          puVar20 = &DAT_143f3eda8;
          if (iVar23 != 0) {
            puVar20 = local_178;
          }
          FString::Format(&local_1d0,puVar20,local_b8);
          puVar20 = &DAT_143f3eda8;
          if (iVar23 != 0) {
            puVar20 = puVar2;
          }
          plVar19 = (longlong *)&DAT_143f3eda8;
          if (local_1c8 != 0) {
            plVar19 = local_1d0;
          }
          iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar19,puVar20);
          if (iVar9 == 0) {
            local_1c0 = *(undefined8 *)(*(longlong *)(*plVar14 + lVar10 * 8) + 0x18);
            FName::ToString(&local_1c0,&local_1a0);
            local_1b8 = (longlong *)0x0;
            local_1b0._0_4_ = iVar23;
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&local_1b8,(2 - (uint)(iVar23 != 0)) + iVar23,0);
            plVar14 = local_1b8;
            _guard_xfg_dispatch_icall_nop(local_1b8,puVar2,(longlong)iVar23 * 2);
            iVar9 = (int)local_1b0;
            lVar10 = (longlong)(int)local_1b0;
            local_1b0._0_4_ = (2 - (uint)((int)local_1b0 != 0)) + (int)local_1b0;
            iVar23 = local_1b0._4_4_;
            iVar22 = (int)local_1b0;
            if (local_1b0._4_4_ < (int)local_1b0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar9);
              plVar14 = local_1b8;
              iVar23 = local_1b0._4_4_;
              iVar22 = (int)local_1b0;
            }
            plVar11 = local_1a0;
            local_1b8 = (longlong *)0x0;
            local_1b0 = 0;
            lVar10 = lVar10 - (ulonglong)(iVar9 != 0);
            *(undefined2 *)((longlong)plVar14 + lVar10 * 2) = 0x5f;
            *(undefined2 *)((longlong)plVar14 + lVar10 * 2 + 2) = 0;
            iVar9 = (int)local_198;
            if (iVar22 < 2) {
              iVar24 = local_198._4_4_;
              local_1a0 = (longlong *)0x0;
              local_198 = 0;
              plVar19 = plVar14;
            }
            else {
              iVar21 = iVar24;
              if ((int)local_198 != 0) {
                iVar21 = (int)local_198 + -1;
              }
              if ((iVar22 != 0) || (iVar9 = 1, iVar21 == 0)) {
                iVar9 = iVar24;
              }
              plVar19 = (longlong *)0x0;
              local_1e0 = plVar14;
              local_1d8._4_4_ = iVar23;
              if (iVar23 < iVar21 + iVar9 + iVar22) {
                local_1d8._0_4_ = iVar22;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo();
                iVar22 = (int)local_1d8;
              }
              local_168 = local_1a0;
              plVar11 = local_1e0;
              iVar24 = local_1d8._4_4_;
              iVar9 = iVar22;
              if (iVar21 != 0) {
                local_1d8._0_4_ = (uint)(iVar22 == 0) + iVar21 + iVar22;
                if (local_1d8._4_4_ < (int)local_1d8) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e0,iVar22);
                }
                iVar24 = local_1d8._4_4_;
                iVar9 = (int)local_1d8;
                plVar11 = local_1e0;
                puVar2 = (undefined2 *)
                         ((longlong)local_1e0 + ((longlong)iVar22 - (ulonglong)(iVar22 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(puVar2,local_168,(longlong)iVar21 * 2);
                puVar2[iVar21] = 0;
              }
              local_1e0 = (longlong *)0x0;
              local_1d8 = 0;
            }
            if (local_1d0 != (longlong *)0x0) {
              FMemory::Free();
            }
            local_1d0 = plVar11;
            local_1c8 = iVar9;
            local_1c4 = iVar24;
            if (plVar19 != (longlong *)0x0) {
              FMemory::Free(plVar19);
            }
            plVar11 = local_188;
            if (local_1a0 != (longlong *)0x0) {
              FMemory::Free();
              plVar11 = local_188;
            }
          }
          local_1f8 = (longlong *)0x0;
          puStack_1f0 = (undefined1 *)0x5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
          plVar14 = local_1f8;
          FGenericPlatformString::Memcpy(local_1f8,L".png",10);
          iVar9 = local_1c8;
          if (((uint)puStack_1f0 != 0) && (iVar24 = (uint)puStack_1f0 + -1, iVar24 != 0)) {
            lVar10 = (longlong)local_1c8;
            local_1c8 = (uint)(local_1c8 == 0) + iVar24 + local_1c8;
            if (local_1c4 < local_1c8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar9);
            }
            puVar2 = (undefined2 *)((longlong)local_1d0 + (lVar10 - (ulonglong)(iVar9 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(puVar2,plVar14,(longlong)iVar24 * 2);
            puVar2[iVar24] = 0;
          }
          if (plVar14 != (longlong *)0x0) {
            FMemory::Free(plVar14);
          }
          plVar14 = (longlong *)&DAT_143f3eda8;
          if (local_1c8 != 0) {
            plVar14 = local_1d0;
          }
          (**(code **)(*plVar11 + 0x58))(plVar11,0,plVar14);
          if (local_1d0 != (longlong *)0x0) {
            FMemory::Free();
          }
          local_70 = 0;
          if (local_78 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Empty(local_b8,0);
          if (local_98 != 0) {
            FMemory::Free();
          }
          if (local_b8[0] != 0) {
            FMemory::Free();
          }
          uVar25 = (ulonglong)local_1e8;
        }
        puStack_130 = (undefined1 *)((ulonglong)puStack_130 & 0xffffffff00000000);
        local_138 = plVar11;
        (**(code **)(*plVar16 + 0x20))(plVar16,&local_138);
        plVar11 = local_128;
        param_1 = local_180;
      }
      plVar14 = (longlong *)(ulonglong)(local_1a8 + 1);
    }
    if (local_178 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141c42ca0 FUN_141c42ca0 body=357 status=ok
// SIG undefined FUN_141c42ca0(void)

void FUN_141c42ca0(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong local_res8;
  undefined1 local_res18 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  plVar8 = *(longlong **)(param_1[2] + 0x19b8);
  if (plVar8 != (longlong *)0x0) {
    uStack_20 = &local_res8;
    local_28 = (longlong *)&DAT_14060d670;
    local_res8 = local_res8 & 0xffffffffffffff00;
    lVar6 = FUN_1415d8310(&local_28,&DAT_146216a38);
    lVar6 = operator_new(0x118,lVar6 + 0x18,1);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)FUN_141c75ec0(lVar6,plVar8,*(undefined4 *)(param_1[2] + 0x1a38),0);
    }
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(longlong **)(*plVar2 + (longlong)iVar1 * 8) = plVar7;
    local_28 = (longlong *)param_1[5];
    uStack_20._0_4_ = *(undefined4 *)(param_1 + 6);
    uStack_20._4_4_ = *(uint *)((longlong)param_1 + 0x34);
    (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_28);
    uVar4 = uStack_20._4_4_;
    uStack_20 = (ulonglong *)((ulonglong)uStack_20._4_4_ << 0x20);
    local_28._0_4_ = SUB84(plVar7,0);
    local_28._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
    *(undefined4 *)(param_1 + 5) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_28._4_4_;
    *(undefined4 *)(param_1 + 6) = 0;
    *(uint *)((longlong)param_1 + 0x34) = uVar4;
    local_28 = plVar7;
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2a8))(plVar8,0,0);
    local_res8 = 0;
    (**(code **)(*plVar8 + 0x40))
              (plVar8,*(undefined4 *)(param_1[2] + 0x1a38),local_res18,&local_res8);
    cVar5 = FUN_14259cc30(local_res8);
    if (cVar5 != '\0') {
      uVar3 = *param_1;
      uVar9 = FSceneRenderTargets::Get(uVar3);
      FUN_141cd9760(uVar9,uVar3,1);
    }
  }
  return;
}



// FUNCTION 141c42e10 FUN_141c42e10 body=516 status=ok
// SIG undefined FUN_141c42e10(void)

void FUN_141c42e10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined *local_28;
  undefined8 uStack_20;
  
  plVar5 = (longlong *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a54d48) && (_Init_thread_header(&DAT_146a54d48), DAT_146a54d48 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PostProcessAAQuality");
    plVar3 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146a54d40 = plVar3;
    _Init_thread_footer(&DAT_146a54d48);
  }
  iVar1 = *(int *)((longlong)DAT_146a54d40 + 4);
  iVar6 = 1;
  if ((0 < iVar1) && (iVar6 = 6, iVar1 < 6)) {
    iVar6 = iVar1;
  }
  uStack_20 = local_res8;
  local_res8[0] = 0;
  local_28 = &DAT_14060d670;
  lVar2 = FUN_1415d8310(&local_28,&DAT_146216a38);
  plVar3 = (longlong *)operator_new(0xb0,lVar2 + 0x18,1,0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 0;
    plVar3[2] = 0;
    *(undefined4 *)(plVar3 + 3) = 0;
    plVar3[4] = 1;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 1;
    *(undefined2 *)(plVar3 + 9) = 1;
    *(undefined8 *)((longlong)plVar3 + 0x4c) = 0;
    *(undefined4 *)((longlong)plVar3 + 0x54) = 0;
    *(undefined1 *)(plVar3 + 0xb) = 0;
    plVar3[0xc] = (longlong)L"UnknownTexture";
    *(undefined2 *)(plVar3 + 0xd) = 1;
    plVar3[0xe] = 0;
    *(undefined4 *)(plVar3 + 0xf) = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    plVar3[0x13] = 0;
    plVar3[0x14] = 0;
    plVar3[0x12] = 0;
    *plVar3 = (longlong)&PTR__scalar_deleting_destructor__144e1bee8;
    *(int *)(plVar3 + 0x15) = iVar6;
    plVar5 = plVar3;
  }
  plVar3 = *(longlong **)(param_1 + 8);
  iVar1 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
  }
  *(longlong **)(*plVar3 + (longlong)iVar1 * 8) = plVar5;
  local_28 = *(undefined **)(param_1 + 0x28);
  uStack_20._0_4_ = *(undefined4 *)(param_1 + 0x30);
  uStack_20._4_4_ = *(uint *)(param_1 + 0x34);
  (**(code **)(*plVar5 + 0x18))(plVar5,0,&local_28);
  uStack_20 = (undefined1 *)((ulonglong)uStack_20._4_4_ << 0x20);
  *(longlong **)(param_1 + 0x28) = plVar5;
  *(undefined1 **)(param_1 + 0x30) = uStack_20;
  return;
}



// FUNCTION 141c43020 FUN_141c43020 body=358 status=ok
// SIG undefined FUN_141c43020(void)

undefined8 * FUN_141c43020(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar3 = *(longlong *)(param_3 + 8);
  lVar4 = *(longlong *)(param_3 + 0x70);
  local_res8[0] = 0;
  puVar1 = (undefined8 *)(param_3 + ((longlong)DAT_1464c2498 + 1) * 0x10);
  local_28 = *puVar1;
  uStack_20 = puVar1[1];
  puStack_30 = local_res8;
  local_38 = &DAT_14060d670;
  lVar5 = FUN_1415d8310(&local_38,&DAT_146216a38);
  plVar6 = (longlong *)operator_new(0xb0,lVar5 + 0x18,1,0);
  plVar7 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 0;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    plVar6[4] = 1;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 1;
    *(undefined2 *)(plVar6 + 9) = 1;
    *(undefined8 *)((longlong)plVar6 + 0x4c) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x54) = 0;
    *(undefined1 *)(plVar6 + 0xb) = 0;
    plVar6[0xc] = (longlong)L"UnknownTexture";
    *(undefined2 *)(plVar6 + 0xd) = 1;
    plVar6[0xe] = 0;
    *(undefined4 *)(plVar6 + 0xf) = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = 0;
    plVar6[0x13] = 0;
    plVar6[0x14] = 0;
    plVar6[0x12] = 0;
    *plVar6 = (longlong)&PTR__scalar_deleting_destructor__144e1bc40;
    plVar6[0x15] = lVar4;
    plVar7 = plVar6;
  }
  plVar6 = *(longlong **)(lVar3 + 8);
  iVar2 = (int)plVar6[1];
  *(int *)(plVar6 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
  }
  *(longlong **)(*plVar6 + (longlong)iVar2 * 8) = plVar7;
  (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_28);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = plVar7;
  return param_1;
}



// FUNCTION 141c43190 FUN_141c43190 body=1344 status=ok
// SIG undefined FUN_141c43190(void)

void FUN_141c43190(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 uVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(*(longlong *)(param_1 + 0x10) + 0x1a38) < 3))
  {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  uStack_80 = local_res8;
  local_res8[0] = 0;
  local_88 = (longlong *)&DAT_14060d670;
  local_res10 = param_2;
  local_res18 = param_3;
  lVar4 = FUN_1415d8310(&local_88,&DAT_146216a38);
  plVar5 = (longlong *)operator_new(0xb8,lVar4 + 0x18,1,0);
  plVar7 = (longlong *)0x0;
  plVar8 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined2 *)(plVar5 + 1) = 0;
    *(undefined1 *)((longlong)plVar5 + 0xb) = 0;
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    plVar5[4] = 0;
    *(undefined4 *)(plVar5 + 5) = 0;
    plVar5[6] = 1;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[0xe] = (longlong)L"UnknownTexture";
    plVar5[10] = 1;
    *(undefined2 *)(plVar5 + 0xb) = 1;
    *(undefined8 *)((longlong)plVar5 + 0x5c) = 0;
    *(undefined4 *)((longlong)plVar5 + 100) = 0;
    *(undefined1 *)(plVar5 + 0xd) = 0;
    *(undefined2 *)(plVar5 + 0xf) = 1;
    plVar5[0x10] = 0;
    *(undefined4 *)(plVar5 + 0x11) = 0;
    plVar5[0x12] = 0;
    plVar5[0x13] = 0;
    plVar5[0x15] = 0;
    plVar5[0x16] = 0;
    plVar5[0x14] = 0;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144e1b998;
    *(undefined1 *)((longlong)plVar5 + 10) = uVar9;
    plVar8 = plVar5;
  }
  plVar5 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar5[1];
  *(int *)(plVar5 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
  }
  *(longlong **)(*plVar5 + (longlong)iVar2 * 8) = plVar8;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  local_88 = (longlong *)*puVar1;
  uStack_80._0_4_ = *(undefined4 *)(param_1 + 0x30);
  uStack_80._4_4_ = *(uint *)(param_1 + 0x34);
  (**(code **)(*plVar8 + 0x18))(plVar8,0,&local_88);
  local_88 = *(longlong **)(param_1 + 0x20);
  uStack_80 = (undefined1 *)((ulonglong)uStack_80._4_4_ << 0x20);
  (**(code **)(*plVar8 + 0x18))(plVar8,1,&local_88);
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar4 + 0x18);
  plVar5 = plVar8;
  local_res20 = lVar3;
  if ((*(int *)(lVar4 + 0x1a10) == 2) && (lVar3 != 0)) {
    local_74 = 0;
    local_72 = 0;
    local_70 = 0;
    local_78 = 0;
    local_4c = 2;
    local_6c = *(undefined4 *)(lVar4 + 0x1aa0);
    local_68 = *(undefined4 *)(lVar4 + 0x1aa4);
    local_64 = *(undefined4 *)(lVar4 + 0x1aa8);
    local_60 = *(undefined4 *)(lVar4 + 0x1aac);
    uStack_80 = local_res8;
    local_88 = (longlong *)&DAT_14060d670;
    local_res8[0] = 0;
    local_73 = uVar9;
    local_5c = local_6c;
    local_58 = local_68;
    local_54 = local_64;
    local_50 = local_60;
    lVar4 = FUN_1415d8310(&local_88,&DAT_146216a38);
    lVar4 = operator_new(0x210,lVar4 + 0x18,1,0);
    plVar5 = plVar7;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_141c76350(lVar4,param_1,&local_78,lVar3 + 0x1178,lVar3 + 0x1178);
    }
    plVar6 = *(longlong **)(param_1 + 8);
    iVar2 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
    }
    uStack_80 = (undefined1 *)((ulonglong)uStack_80 & 0xffffffff00000000);
    *(longlong **)(*plVar6 + (longlong)iVar2 * 8) = plVar5;
    local_88 = plVar8;
    (**(code **)(*plVar5 + 0x18))(plVar5,0,&local_88);
    (**(code **)(*plVar5 + 0x18))(plVar5,2,local_res18);
    *(undefined1 *)(local_res20 + 0x1775) = 1;
  }
  uStack_80 = local_res8;
  local_res8[0] = 0;
  local_88 = (longlong *)&DAT_14060d670;
  lVar4 = FUN_1415d8310(&local_88,&DAT_146216a38);
  plVar6 = (longlong *)operator_new(200,lVar4 + 0x18,1,0);
  plVar8 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(plVar6,0,200);
    *(undefined4 *)(plVar6 + 3) = 0;
    plVar6[4] = 0;
    *(undefined4 *)(plVar6 + 5) = 0;
    plVar6[6] = 0;
    *(undefined4 *)(plVar6 + 7) = 0;
    plVar6[8] = 1;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[0x10] = (longlong)L"UnknownTexture";
    plVar6[0xc] = 1;
    *(undefined2 *)(plVar6 + 0xd) = 1;
    *(undefined8 *)((longlong)plVar6 + 0x6c) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x74) = 0;
    *(undefined1 *)(plVar6 + 0xf) = 0;
    *(undefined2 *)(plVar6 + 0x11) = 1;
    plVar6[0x12] = 0;
    *(undefined4 *)(plVar6 + 0x13) = 0;
    plVar6[0x14] = 0;
    plVar6[0x15] = 0;
    plVar6[0x17] = 0;
    plVar6[0x18] = 0;
    plVar6[0x16] = 0;
    *plVar6 = (longlong)&PTR__scalar_deleting_destructor__144e1ba20;
    plVar8 = plVar6;
  }
  plVar6 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar6[1];
  *(int *)(plVar6 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
  }
  uStack_80 = (undefined1 *)((ulonglong)uStack_80 & 0xffffffff00000000);
  *(longlong **)(*plVar6 + (longlong)iVar2 * 8) = plVar8;
  local_88 = plVar5;
  (**(code **)(*plVar8 + 0x18))(plVar8,0,&local_88);
  local_88 = *(longlong **)(param_1 + 0x18);
  uStack_80 = (undefined1 *)((ulonglong)uStack_80 & 0xffffffff00000000);
  (**(code **)(*plVar8 + 0x18))(plVar8,1,&local_88);
  local_88 = *(longlong **)(param_1 + 0x20);
  uStack_80 = (undefined1 *)((ulonglong)uStack_80 & 0xffffffff00000000);
  (**(code **)(*plVar8 + 0x18))(plVar8,2,&local_88);
  uStack_80 = local_res8;
  local_res8[0] = 0;
  local_88 = (longlong *)&DAT_14060d670;
  lVar4 = FUN_1415d8310(&local_88,&DAT_146216a38);
  lVar4 = operator_new(0xd0,lVar4 + 0x18,1);
  if (lVar4 != 0) {
    plVar7 = (longlong *)
             FRCPassPostProcessBokehDOFRecombine::FRCPassPostProcessBokehDOFRecombine(lVar4,uVar9);
  }
  plVar5 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar5[1];
  *(int *)(plVar5 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
  }
  *(longlong **)(*plVar5 + (longlong)iVar2 * 8) = plVar7;
  (**(code **)(*plVar7 + 0x18))(plVar7,0,puVar1);
  uStack_80 = (undefined1 *)((ulonglong)uStack_80 & 0xffffffff00000000);
  local_88 = plVar8;
  (**(code **)(*plVar7 + 0x18))(plVar7,1,&local_88);
  (**(code **)(*plVar7 + 0x18))(plVar7,2,local_res10);
  uStack_80 = (undefined1 *)((ulonglong)uStack_80 & 0xffffffff00000000);
  *puVar1 = plVar7;
  *(undefined1 **)(param_1 + 0x30) = uStack_80;
  return;
}



// FUNCTION 141c436d0 FUN_141c436d0 body=1640 status=ok
// SIG undefined FUN_141c436d0(void)

void FUN_141c436d0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined1 *puStack_a0;
  longlong *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
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
  longlong *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint local_40;
  longlong *local_38;
  ulonglong uStack_30;
  
  uStack_b0 = local_res8;
  local_res8[0] = 0;
  local_a8 = (longlong *)&DAT_14060d670;
  local_b8 = (longlong *)&DAT_14060d670;
  puStack_a0 = uStack_b0;
  lVar4 = FUN_1415d8310(&local_b8,&DAT_146216a38);
  plVar5 = (longlong *)operator_new(0x130,lVar4 + 0x18,1);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    TRenderingCompositePassBase<2,2>::TRenderingCompositePassBase<2,2>(plVar5);
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144e1ca10;
    plVar7 = plVar5;
  }
  plVar5 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar5[1];
  *(int *)(plVar5 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
  }
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *(longlong **)(*plVar5 + (longlong)iVar2 * 8) = plVar7;
  local_b8 = (longlong *)*puVar1;
  uStack_b0._0_4_ = *(undefined4 *)(param_1 + 0x30);
  uStack_b0._4_4_ = *(uint *)(param_1 + 0x34);
  (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_b8);
  local_b8 = *(longlong **)(param_1 + 0x20);
  uStack_b0 = (undefined1 *)((ulonglong)uStack_b0._4_4_ << 0x20);
  (**(code **)(*plVar7 + 0x18))(plVar7,1,&local_b8);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  local_58 = plVar7;
  cVar3 = FUN_141c49c20();
  lVar6 = *(longlong *)(param_1 + 0x10);
  local_40 = (uint)(cVar3 != '\0');
  local_48 = plVar7;
  if ((*(int *)(lVar6 + 0x1a10) == 2) && (lVar4 != 0)) {
    local_84 = 0;
    local_82 = 0;
    local_80 = 0;
    local_88 = 0;
    if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (local_83 = 1, *(int *)(lVar6 + 0x1a38) < 3)) {
      local_83 = 0;
    }
    local_5c = 2;
    local_7c = *(undefined4 *)(lVar6 + 0x1aa0);
    local_78 = *(undefined4 *)(lVar6 + 0x1aa4);
    local_74 = *(undefined4 *)(lVar6 + 0x1aa8);
    local_70 = *(undefined4 *)(lVar6 + 0x1aac);
    uStack_b0 = local_res8;
    local_b8 = (longlong *)&DAT_14060d670;
    local_res8[0] = 0;
    local_6c = local_7c;
    local_68 = local_78;
    local_64 = local_74;
    local_60 = local_70;
    lVar6 = FUN_1415d8310(&local_b8,&DAT_146216a38);
    lVar6 = operator_new(0x210,lVar6 + 0x18,1);
    plVar5 = plVar8;
    if (lVar6 != 0) {
      plVar5 = (longlong *)FUN_141c76350(lVar6,param_1,&local_88,lVar4 + 0x1178,lVar4 + 0x1178);
    }
    plVar5 = (longlong *)
             FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                       (*(undefined8 *)(param_1 + 8),plVar5);
    uStack_b0 = (undefined1 *)((ulonglong)uStack_b0 & 0xffffffff00000000);
    local_b8 = plVar7;
    (**(code **)(*plVar5 + 0x18))(plVar5,0,&local_b8);
    (**(code **)(*plVar5 + 0x18))(plVar5,2,param_2);
    uStack_b0 = (undefined1 *)((ulonglong)uStack_b0 & 0xffffffff00000000);
    uStack_50 = (ulonglong)uStack_b0;
    *(undefined1 *)(lVar4 + 0x1775) = 0;
    local_58 = plVar5;
  }
  uStack_b0 = local_res8;
  local_res8[0] = 0;
  local_b8 = (longlong *)&DAT_14060d670;
  lVar4 = FUN_1415d8310(&local_b8,&DAT_146216a38);
  plVar5 = (longlong *)operator_new(0xa8,lVar4 + 0x18,1,0);
  plVar7 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 0;
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    plVar5[4] = 1;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[0xc] = (longlong)L"UnknownTexture";
    plVar5[8] = 1;
    *(undefined2 *)(plVar5 + 9) = 1;
    *(undefined8 *)((longlong)plVar5 + 0x4c) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x54) = 0;
    *(undefined1 *)(plVar5 + 0xb) = 0;
    *(undefined2 *)(plVar5 + 0xd) = 1;
    plVar5[0xe] = 0;
    *(undefined4 *)(plVar5 + 0xf) = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0x13] = 0;
    plVar5[0x14] = 0;
    plVar5[0x12] = 0;
    *plVar5 = (longlong)&PTR_FUN_144e1ca98;
    plVar7 = plVar5;
  }
  plVar5 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar5[1];
  *(int *)(plVar5 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
  }
  *(longlong **)(*plVar5 + (longlong)iVar2 * 8) = plVar7;
  (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_48);
  uStack_b0 = local_res8;
  uStack_90 = 0;
  local_b8 = (longlong *)&DAT_14060d670;
  local_res8[0] = 0;
  local_98 = plVar7;
  lVar4 = FUN_1415d8310(&local_b8,&DAT_146216a38);
  plVar5 = (longlong *)operator_new(0x140,lVar4 + 0x18,1,0);
  plVar7 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 0;
    lVar4 = 2;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144e13e30;
    plVar7 = plVar5 + 8;
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    plVar5[4] = 0;
    *(undefined4 *)(plVar5 + 5) = 0;
    plVar5[6] = 0;
    *(undefined4 *)(plVar5 + 7) = 0;
    do {
      *plVar7 = 1;
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 1;
      *(undefined2 *)(plVar7 + 5) = 1;
      *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
      *(undefined4 *)((longlong)plVar7 + 0x34) = 0;
      *(undefined1 *)(plVar7 + 7) = 0;
      plVar7[8] = (longlong)L"UnknownTexture";
      *(undefined2 *)(plVar7 + 9) = 1;
      plVar7[10] = 0;
      *(undefined4 *)(plVar7 + 0xb) = 0;
      plVar7 = plVar7 + 0xc;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    plVar5[0x20] = 0;
    plVar5[0x21] = 0;
    plVar5[0x22] = 0;
    plVar5[0x23] = 0;
    plVar5[0x26] = 0;
    plVar5[0x27] = 0;
    plVar5[0x24] = 0;
    plVar5[0x25] = 0;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144e1cb20;
    plVar7 = plVar5;
  }
  plVar5 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar5[1];
  *(int *)(plVar5 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
  }
  *(longlong **)(*plVar5 + (longlong)iVar2 * 8) = plVar7;
  (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_58);
  (**(code **)(*plVar7 + 0x18))(plVar7,1,&local_98);
  (**(code **)(*plVar7 + 0x18))(plVar7,2,&local_48);
  puStack_a0 = (undefined1 *)((ulonglong)puStack_a0 & 0xffffffff00000000);
  local_a8 = plVar7;
  cVar3 = FUN_141c49c20();
  if (cVar3 == '\0') {
    local_b8 = local_a8;
    uStack_b0 = puStack_a0;
  }
  else {
    uStack_b0 = (undefined1 *)CONCAT44(uStack_b0._4_4_,1);
    local_b8 = plVar7;
  }
  local_res8[0] = 0;
  local_38 = local_b8;
  uStack_30 = (ulonglong)uStack_b0;
  local_b8 = (longlong *)&DAT_14060d670;
  uStack_b0 = local_res8;
  lVar4 = FUN_1415d8310(&local_b8,&DAT_146216a38);
  plVar7 = (longlong *)operator_new(200,lVar4 + 0x18,1,0);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    plVar7[4] = 0;
    *(undefined4 *)(plVar7 + 5) = 0;
    plVar7[6] = 0;
    *(undefined4 *)(plVar7 + 7) = 0;
    plVar7[8] = 1;
    plVar7[9] = 0;
    plVar7[10] = 0;
    plVar7[0xb] = 0;
    plVar7[0xc] = 1;
    *(undefined2 *)(plVar7 + 0xd) = 1;
    *(undefined8 *)((longlong)plVar7 + 0x6c) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x74) = 0;
    *(undefined1 *)(plVar7 + 0xf) = 0;
    plVar7[0x10] = (longlong)L"UnknownTexture";
    *(undefined2 *)(plVar7 + 0x11) = 1;
    plVar7[0x12] = 0;
    *(undefined4 *)(plVar7 + 0x13) = 0;
    plVar7[0x14] = 0;
    plVar7[0x15] = 0;
    plVar7[0x17] = 0;
    plVar7[0x18] = 0;
    plVar7[0x16] = 0;
    *plVar7 = (longlong)&PTR__scalar_deleting_destructor__144e1cba8;
    plVar8 = plVar7;
  }
  plVar7 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar7[1];
  *(int *)(plVar7 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar7 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
  }
  *(longlong **)(*plVar7 + (longlong)iVar2 * 8) = plVar8;
  (**(code **)(*plVar8 + 0x18))(plVar8,0,puVar1);
  (**(code **)(*plVar8 + 0x18))(plVar8,1,&local_a8);
  (**(code **)(*plVar8 + 0x18))(plVar8,2,&local_38);
  *puVar1 = plVar8;
  *(ulonglong *)(param_1 + 0x30) = (ulonglong)uStack_8c << 0x20;
  return;
}



// FUNCTION 141c43d40 FUN_141c43d40 body=1319 status=ok
// SIG undefined FUN_141c43d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141c43d40(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ulonglong local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined *local_198;
  undefined1 *puStack_190;
  undefined *local_188;
  undefined1 *puStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 uStack_140;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_124;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1b8 = param_7;
  lVar9 = *(longlong *)(param_2[2] + 0x10);
  if (((((*(byte *)(lVar9 + 0x28) & 1) == 0) && (param_3 != 4)) ||
      ((*(uint *)(lVar9 + 0x2c) & 0x100000) == 0)) ||
     ((*(int *)(DAT_146a51ef0 + 4) != 0 || (*(char *)(param_2[2] + 0x1a98) == '\0')))) {
    lVar9 = param_2[6];
    *param_1 = param_2[5];
    param_1[1] = lVar9;
  }
  else {
    uVar18 = 0;
    puVar16 = &local_148;
    local_1c8 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_130 = 0;
    local_128 = 0;
    local_118 = 0;
    local_110 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_88 = 0;
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_13c = 6;
    local_124 = 6;
    local_10c = 6;
    local_f4 = 6;
    local_dc = 6;
    local_c4 = 6;
    local_ac = 6;
    local_94 = 6;
    local_7c = 6;
    local_64 = 6;
    local_1b0 = param_4;
    local_1a8 = param_1;
    do {
      puVar6 = (undefined4 *)FUN_141c4a650(param_2[2] + 0x1240,param_3,&local_1c8);
      if (puVar6 == (undefined4 *)0x0) break;
      uVar22 = puVar6[1];
      uVar19 = puVar6[2];
      uVar20 = puVar6[3];
      uVar18 = uVar18 + 1;
      *(undefined4 *)puVar16 = *puVar6;
      *(undefined4 *)((longlong)puVar16 + 4) = uVar22;
      *(undefined4 *)(puVar16 + 1) = uVar19;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uVar20;
      puVar16[2] = *(undefined8 *)(puVar6 + 4);
      puVar16 = puVar16 + 3;
    } while (uVar18 < 10);
    AlgoImpl::
    IntroSortInternal<FPostProcessMaterialNode,FIdentityFunctor,TDereferenceWrapper<FPostProcessMaterialNode,FPostProcessMaterialNode::FCompare>_>
              (&local_148,(longlong)(int)uVar18,local_1e8[0],local_1e8);
    uVar22 = (undefined4)param_2[6];
    local_1c0 = *(undefined4 *)(param_2[2] + 0x1a38);
    uVar19 = (int)param_2[5];
    uVar20 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar23 = *(undefined4 *)((longlong)param_2 + 0x34);
    if (uVar18 != 0) {
      local_1c8 = (ulonglong)uVar18;
      puVar16 = &local_148;
      uVar21 = uVar22;
      do {
        uVar22 = local_1c0;
        plVar11 = (longlong *)0x0;
        plVar3 = (longlong *)*puVar16;
        plVar7 = (longlong *)(**(code **)(*plVar3 + 0x2a8))(plVar3,0,0);
        local_1d8 = (undefined *)0x0;
        (**(code **)(*plVar7 + 0x40))
                  (plVar7,*(undefined4 *)(param_2[2] + 0x1a38),local_158,&local_1d8);
        cVar5 = FUN_14259cc30(local_1d8);
        if (cVar5 != '\0') {
          lVar9 = *param_2;
          uVar8 = FSceneRenderTargets::Get(lVar9);
          FUN_141cd9760(uVar8,lVar9,1);
        }
        puStack_190 = local_1e8;
        local_1e8[0] = 0;
        local_198 = &DAT_14060d670;
        local_1d8 = &DAT_14060d670;
        uStack_1d0 = puStack_190;
        lVar9 = FUN_1415d8310(&local_1d8,&DAT_146216a38);
        uVar14 = *(longlong *)(lVar9 + 0x18) + 0xfU & 0xfffffffffffffff0;
        puVar1 = (ulonglong *)(lVar9 + 0x18);
        uVar10 = uVar14 + 0x118;
        if (*(ulonglong *)(lVar9 + 0x20) < uVar10) {
          FMemStackBase::AllocateNewChunk(puVar1,0x128);
          uVar14 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar10 = uVar14 + 0x118;
        }
        *puVar1 = uVar10;
        if (uVar14 != 0) {
          plVar11 = (longlong *)FUN_141c75ec0(uVar14,plVar3,uVar22,0);
        }
        plVar3 = (longlong *)param_2[1];
        iVar2 = (int)plVar3[1];
        *(int *)(plVar3 + 1) = iVar2 + 1;
        if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
        }
        local_1d8 = (undefined *)CONCAT44(uVar20,uVar19);
        *(longlong **)(*plVar3 + (longlong)iVar2 * 8) = plVar11;
        uStack_1d0._0_4_ = uVar21;
        uStack_1d0._4_4_ = uVar23;
        (**(code **)(*plVar11 + 0x18))(plVar11,0,&local_1d8);
        (**(code **)(*plVar11 + 0x18))(plVar11,1,param_4);
        lVar12 = FSceneRenderTargets::Get(*param_2);
        lVar9 = *(longlong *)(lVar12 + 0x2f8);
        if (lVar9 != 0) {
          lVar4 = *param_2;
          local_1d8 = *(undefined **)(lVar9 + 0x18);
          puVar17 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar17 + 1;
          if (*(undefined8 **)(lVar4 + 0x38) < puVar13) {
            FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x10);
            puVar17 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar17 + 1;
          }
          *(undefined8 **)(lVar4 + 0x30) = puVar13;
          *puVar17 = local_1d8;
          puVar15 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar15 + 6;
          if (*(undefined8 **)(lVar4 + 0x38) < puVar13) {
            FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x38);
            puVar15 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar15 + 6;
          }
          *(undefined8 **)(lVar4 + 0x30) = puVar13;
          uVar8 = 0;
          *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
          local_1e8[0] = 0;
          **(undefined8 **)(lVar4 + 8) = puVar15;
          *(undefined8 **)(lVar4 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          *puVar15 = &PTR_LAB_144d91e60;
          puStack_180 = local_1e8;
          *(undefined4 *)(puVar15 + 2) = 1;
          puVar15[3] = puVar17;
          *(undefined4 *)(puVar15 + 4) = 0;
          *(undefined4 *)((longlong)puVar15 + 0x24) = 1;
          puVar15[5] = 0;
          local_188 = &DAT_14060d670;
          local_1d8 = &DAT_14060d670;
          uStack_1d0 = puStack_180;
          lVar9 = FUN_1415d8310(&local_1d8,&DAT_146216a38);
          lVar9 = operator_new(0xb0,lVar9 + 0x18,1,0);
          if (lVar9 != 0) {
            uVar8 = FRCPassPostProcessInput::FRCPassPostProcessInput
                              (lVar9,(longlong *)(lVar12 + 0x2f8));
          }
          plVar3 = (longlong *)param_2[1];
          iVar2 = (int)plVar3[1];
          *(int *)(plVar3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
          }
          *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = uVar8;
          local_170 = 0;
          local_178 = uVar8;
          (**(code **)(*plVar11 + 0x18))(plVar11,4,&local_178);
        }
        (**(code **)(*plVar11 + 0x18))(plVar11);
        puVar16 = puVar16 + 3;
        local_1c8 = local_1c8 - 1;
        uStack_160 = 0;
        local_168._0_4_ = SUB84(plVar11,0);
        local_168._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
        uVar22 = 0;
        param_4 = local_1b0;
        param_1 = local_1a8;
        uVar19 = (undefined4)local_168;
        uVar20 = local_168._4_4_;
        uVar21 = uStack_160;
        uVar23 = uStack_15c;
        local_168 = plVar11;
      } while (local_1c8 != 0);
    }
    *(undefined4 *)param_1 = uVar19;
    *(undefined4 *)((longlong)param_1 + 4) = uVar20;
    *(undefined4 *)(param_1 + 1) = uVar22;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar23;
  }
  return param_1;
}



// FUNCTION 141c44270 FUN_141c44270 body=789 status=ok
// SIG undefined FUN_141c44270(void)

longlong * FUN_141c44270(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong *puVar12;
  ulonglong local_res8;
  undefined1 local_res18 [16];
  longlong *local_58;
  ulonglong *puStack_50;
  ulonglong local_48;
  
  lVar5 = param_1[2];
  if ((((*(byte *)(*(longlong *)(lVar5 + 0x10) + 0x28) & 1) != 0) &&
      ((*(uint *)(*(longlong *)(lVar5 + 0x10) + 0x2c) & 0x100000) != 0)) &&
     (*(char *)(lVar5 + 0x1a98) != '\0')) {
    plVar8 = (longlong *)0x0;
    local_res8 = 0;
    iVar11 = 6;
    puVar2 = (undefined8 *)FUN_141c4a650(lVar5 + 0x1240,param_2,&local_res8);
    plVar6 = plVar8;
    plVar3 = plVar8;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (((plVar6 == (longlong *)0x0) || (iVar11 < *(int *)((longlong)puVar2 + 0xc))) ||
           ((iVar11 <= *(int *)((longlong)puVar2 + 0xc) && ((int)plVar3 < *(int *)(puVar2 + 2))))) {
          plVar6 = (longlong *)*puVar2;
          iVar11 = *(int *)((longlong)puVar2 + 0xc);
          puStack_50 = (ulonglong *)puVar2[1];
          local_48 = puVar2[2];
          plVar3 = (longlong *)(local_48 & 0xffffffff);
          local_58 = plVar6;
        }
        puVar2 = (undefined8 *)FUN_141c4a650(param_1[2] + 0x1240,param_2 & 0xffffffff,&local_res8);
      } while (puVar2 != (undefined8 *)0x0);
      if (plVar6 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar6 + 0x2a8))(plVar6,0,0);
        local_res8 = 0;
        (**(code **)(*plVar3 + 0x40))
                  (plVar3,*(undefined4 *)(param_1[2] + 0x1a38),local_res18,&local_res8);
        cVar1 = FUN_14259cc30(local_res8);
        if (cVar1 != '\0') {
          lVar5 = *param_1;
          uVar4 = FSceneRenderTargets::Get(lVar5);
          FUN_141cd9760(uVar4,lVar5,1);
        }
        puStack_50 = &local_res8;
        local_res8 = local_res8 & 0xffffffffffffff00;
        local_58 = (longlong *)&DAT_14060d670;
        lVar5 = FUN_1415d8310(&local_58,&DAT_146216a38);
        lVar5 = operator_new(0x118,lVar5 + 0x18,1);
        plVar3 = plVar8;
        if (lVar5 != 0) {
          plVar3 = (longlong *)FUN_141c75ec0(lVar5,plVar6,*(undefined4 *)(param_1[2] + 0x1a38),0);
        }
        plVar6 = (longlong *)
                 FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                           (param_1[1],plVar3);
        lVar7 = FSceneRenderTargets::Get(*param_1);
        lVar5 = *param_1;
        puVar12 = (ulonglong *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        local_res8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x2f8) + 0x18);
        puVar9 = puVar12 + 1;
        if (*(ulonglong **)(lVar5 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x10);
          puVar12 = (ulonglong *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar12 + 1;
        }
        *(ulonglong **)(lVar5 + 0x30) = puVar9;
        *puVar12 = local_res8;
        puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar2 = puVar10 + 6;
        if (*(undefined8 **)(lVar5 + 0x38) < puVar2) {
          FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x38);
          puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar2 = puVar10 + 6;
        }
        *(undefined8 **)(lVar5 + 0x30) = puVar2;
        *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
        **(undefined8 **)(lVar5 + 8) = puVar10;
        *(undefined8 **)(lVar5 + 8) = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_144d91e60;
        puStack_50 = &local_res8;
        *(undefined4 *)(puVar10 + 2) = 1;
        puVar10[3] = puVar12;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)((longlong)puVar10 + 0x24) = 1;
        puVar10[5] = 0;
        local_58 = (longlong *)&DAT_14060d670;
        local_res8 = local_res8 & 0xffffffffffffff00;
        lVar5 = FUN_1415d8310(&local_58,&DAT_146216a38);
        lVar5 = operator_new(0xb0,lVar5 + 0x18,1);
        if (lVar5 != 0) {
          plVar8 = (longlong *)
                   FRCPassPostProcessInput::FRCPassPostProcessInput
                             (lVar5,(longlong *)(lVar7 + 0x2f8));
        }
        local_58 = (longlong *)
                   FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                             (param_1[1],plVar8);
        puStack_50 = (ulonglong *)((ulonglong)puStack_50 & 0xffffffff00000000);
        (**(code **)(*plVar6 + 0x18))(plVar6,3,&local_58);
        return plVar6;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 141c44590 FUN_141c44590 body=319 status=ok
// SIG undefined FUN_141c44590(void)

void FUN_141c44590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined *local_28;
  undefined8 uStack_20;
  
  local_res8[0] = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1ab0);
  uStack_20 = local_res8;
  local_28 = &DAT_14060d670;
  lVar5 = FUN_1415d8310(&local_28,&DAT_146216a38);
  lVar5 = operator_new(0x210,lVar5 + 0x18,1);
  if (lVar5 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)
             FUN_141c76350(lVar5,param_1,param_3,*(longlong *)(param_1 + 0x10) + 0x2e50,
                           lVar2 + 0x10a0);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  iVar1 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
  }
  *(longlong **)(*plVar3 + (longlong)iVar1 * 8) = plVar6;
  (**(code **)(*plVar6 + 0x18))(plVar6,0,param_1 + 0x28);
  (**(code **)(*plVar6 + 0x18))(plVar6,2,param_2);
  uVar4 = (ulonglong)uStack_20 >> 0x20;
  uStack_20 = (undefined1 *)((ulonglong)uStack_20 & 0xffffffff00000000);
  *(longlong **)(param_1 + 0x28) = plVar6;
  *(undefined1 **)(param_1 + 0x30) = uStack_20;
  if ((param_4 != (undefined8 *)0x0) && ((char)plVar6[0x41] != '\0')) {
    uStack_20 = (undefined1 *)CONCAT44((int)uVar4,2);
    *param_4 = plVar6;
    param_4[1] = uStack_20;
  }
  return;
}



// FUNCTION 141c446d0 FUN_141c446d0 body=742 status=ok
// SIG undefined FUN_141c446d0(void)

longlong *
FUN_141c446d0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined1 param_5
             ,undefined1 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined *local_48;
  undefined1 *puStack_40;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(lVar2 + 0x1a38) < 3)) &&
     ((*(int *)(DAT_146a51f20 + 4) == 0 || (*(int *)(lVar2 + 0x1a38) < 3)))) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  puVar10 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(int *)(lVar2 + 0xf60) != 2) {
    puStack_40 = local_res8;
    local_48 = &DAT_14060d670;
    local_res8[0] = 0;
    lVar7 = FUN_1415d8310(&local_48,&DAT_146216a38);
    puVar8 = (undefined8 *)operator_new(0xb8,lVar7 + 0x18,1,0);
    if (puVar8 != (undefined8 *)0x0) {
      lVar7 = *(longlong *)(lVar2 + 0x18);
      uVar6 = FUN_14274f980(lVar2);
      *(undefined2 *)(puVar8 + 1) = 0;
      puVar8[2] = 0;
      *(undefined4 *)(puVar8 + 3) = 0;
      puVar8[4] = 1;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 1;
      *(undefined2 *)(puVar8 + 9) = 1;
      puVar8[0xc] = L"UnknownTexture";
      *(undefined8 *)((longlong)puVar8 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x54) = 0;
      *(undefined1 *)(puVar8 + 0xb) = 0;
      *(undefined2 *)(puVar8 + 0xd) = 1;
      puVar8[0xe] = 0;
      *(undefined4 *)(puVar8 + 0xf) = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x13] = 0;
      puVar8[0x14] = 0;
      puVar8[0x12] = 0;
      *puVar8 = &PTR__scalar_deleting_destructor__144e1c7f0;
      puVar8[0x15] = 0;
      *(undefined4 *)(puVar8 + 0x16) = uVar6;
      *(bool *)((longlong)puVar8 + 0xb4) = lVar7 == 0;
      *(undefined1 *)((longlong)puVar8 + 10) = uVar11;
      *(undefined1 *)((longlong)puVar8 + 0xb) = 0;
      puVar10 = puVar8;
    }
    plVar9 = *(longlong **)(param_1 + 8);
    iVar1 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar1);
    }
    puStack_40 = (undefined1 *)((ulonglong)puStack_40 & 0xffffffff00000000);
    *(undefined8 **)(*plVar9 + (longlong)iVar1 * 8) = puVar10;
    uStack_50 = (ulonglong)puStack_40;
    local_58 = puVar10;
  }
  uVar5 = local_res18;
  bVar12 = false;
  iVar1 = *(int *)(lVar2 + 0x1a38);
  if (*param_4 == 0) {
    bVar12 = SBORROW4(iVar1,3);
    iVar4 = -3;
  }
  else {
    if (1 < *param_4 - 1U) goto LAB_141c448bb;
    bVar12 = SBORROW4(iVar1,1);
    iVar4 = -1;
  }
  bVar12 = bVar12 == iVar1 + iVar4 < 0;
LAB_141c448bb:
  puStack_40 = local_res8;
  local_48 = &DAT_14060d670;
  local_res8[0] = 0;
  lVar7 = FUN_1415d8310(&local_48,&DAT_146216a38);
  lVar7 = operator_new(0xf0,lVar7 + 0x18,1,0);
  if (lVar7 == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)
             FRCPassPostProcessTonemap::FRCPassPostProcessTonemap
                       (lVar7,lVar2,param_5,bVar12,param_6,uVar11);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  iVar1 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
  }
  *(longlong **)(*plVar3 + (longlong)iVar1 * 8) = plVar9;
  (**(code **)(*plVar9 + 0x18))(plVar9,0,param_1 + 0x28);
  (**(code **)(*plVar9 + 0x18))(plVar9,1,local_res10);
  (**(code **)(*plVar9 + 0x18))(plVar9,2,uVar5);
  (**(code **)(*plVar9 + 0x18))(plVar9,3,&local_58);
  puStack_40 = (undefined1 *)((ulonglong)puStack_40 & 0xffffffff00000000);
  *(longlong **)(param_1 + 0x28) = plVar9;
  *(undefined1 **)(param_1 + 0x30) = puStack_40;
  return plVar9;
}



// FUNCTION 141c449c0 FUN_141c449c0 body=34 status=ok
// SIG undefined FUN_141c449c0(void)

ulonglong FUN_141c449c0(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4)

{
  ulonglong in_RAX;
  
  if ((*(char *)(param_2 + 0x1a98) != '\0') &&
     ((in_RAX = *(ulonglong *)(param_2 + 0x10), (*(uint *)(in_RAX + 0x28) & 1) != 0 ||
      (param_4 != '\0')))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141c449f0 FUN_141c449f0 body=1096 status=ok
// SIG undefined FUN_141c449f0(void)

void FUN_141c449f0(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar4 = *(longlong *)(param_1 + 0x40);
  local_68 = &DAT_146a512b0;
  local_60 = 0;
  local_res10 = param_2;
  local_res20 = param_4;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res8,&local_68);
  plVar11 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  local_res18 = 0;
  local_res8 = 0;
  plVar9 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar3 = *plVar9;
  FUN_141a19150(lVar4,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  lVar5 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  FRHIComputeShader::UpdateStats(uVar6);
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 3;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 3;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar12;
  *(undefined8 **)(lVar4 + 8) = puVar12 + 1;
  puVar12[2] = uVar6;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e50;
  uVar6 = *param_8;
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 1;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x10);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 1;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *puVar12 = uVar6;
  puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 6;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 6;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar13;
  *(undefined8 **)(lVar4 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar12;
  *(undefined4 *)(puVar13 + 4) = 2;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 3;
  puVar13[5] = 0;
  lVar5 = *(longlong *)(lVar3 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_68,uVar6,*(undefined8 *)(lVar5 + 0x60),*(undefined2 *)(lVar3 + 0xd0),param_8);
  FBlendLowResCS::SetCSParamters
            (lVar3,lVar4,param_1,param_3,param_5,param_6,param_7,local_res10,local_res20);
  iVar1 = param_3[3];
  uVar14 = param_3[2] - *param_3 >> 0x1f & 0x1f;
  uVar8 = (param_3[2] - *param_3) + uVar14;
  iVar15 = (int)uVar8 >> 5;
  if ((uVar8 & 0x1f) != uVar14) {
    iVar15 = iVar15 + 1;
  }
  iVar2 = param_3[1];
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 4;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 4;
  }
  puVar7 = local_68;
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar12;
  *(undefined8 **)(lVar4 + 8) = puVar12 + 1;
  *(int *)((longlong)puVar12 + 0x14) = iVar1 - iVar2;
  lVar3 = CONCAT44(uStack_5c,local_60);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d8df50;
  *(int *)(puVar12 + 2) = iVar15;
  *(undefined4 *)(puVar12 + 3) = 1;
  puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar12;
  *(undefined8 **)(lVar3 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = puVar7;
  *(undefined4 *)(puVar12 + 3) = local_58;
  puVar12[4] = 0;
  uVar6 = *param_8;
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 1;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x10);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 1;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *puVar12 = uVar6;
  puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 6;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 6;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar13;
  *(undefined8 **)(lVar4 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar12;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  return;
}



// FUNCTION 141c44e40 FUN_141c44e40 body=1186 status=ok
// SIG undefined FUN_141c44e40(void)

void FUN_141c44e40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar4 = *param_6;
  local_68 = &DAT_146a51160;
  local_60 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&param_6,&local_68);
  plVar11 = (longlong *)0x0;
  if ((int)param_6 != -1) {
    plVar11 = (longlong *)((longlong)(int)param_6 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_res8 = 0;
  param_6 = (longlong *)0x0;
  plVar9 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar2 = *plVar9;
  FUN_141a19150(lVar3,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&param_6);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  lVar5 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  FRHIComputeShader::UpdateStats(uVar6);
  puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 3;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 3;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  puVar14 = (undefined8 *)(lVar4 + 0x18);
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar12;
  *(undefined8 **)(lVar3 + 8) = puVar12 + 1;
  puVar12[2] = uVar6;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e50;
  param_6 = (longlong *)*puVar14;
  puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 1;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
    puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 1;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  *puVar12 = param_6;
  puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 6;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 6;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar13;
  *(undefined8 **)(lVar3 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar12;
  puVar13[4] = 2;
  puVar13[5] = 0;
  lVar5 = *(longlong *)(lVar2 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_68,uVar6,*(undefined8 *)(lVar5 + 0x60),*(undefined2 *)(lVar2 + 0xcc),puVar14);
  lVar5 = *(longlong *)(lVar2 + 0x48);
  uVar6 = *puVar14;
  uVar1 = *(ushort *)(lVar2 + 0xcc);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x60);
  puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar12;
  *(undefined8 **)(lVar3 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = uVar7;
  *(uint *)(puVar12 + 3) = (uint)uVar1;
  puVar12[4] = uVar6;
  FUN_141c596e0(lVar2,lVar3,param_1,local_res10,local_res18,local_res20,param_5);
  puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 4;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 4;
  }
  puVar8 = local_68;
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  lVar2 = CONCAT44(uStack_5c,local_60);
  **(undefined8 **)(lVar3 + 8) = puVar12;
  *(undefined8 **)(lVar3 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x14) = 1;
  *(undefined4 *)(puVar12 + 3) = 1;
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar10;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar12;
  *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = puVar8;
  *(undefined4 *)(puVar12 + 3) = local_58;
  puVar12[4] = 0;
  param_6 = *(longlong **)(lVar4 + 0x18);
  puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 1;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
    puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 1;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  *puVar12 = param_6;
  puVar14 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar14 + 6;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
    puVar14 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar14 + 6;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar14;
  *(undefined8 **)(lVar3 + 8) = puVar14 + 1;
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar14 + 2) = 1;
  puVar14[3] = puVar12;
  *(undefined4 *)(puVar14 + 4) = 0;
  *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
  puVar14[5] = 0;
  return;
}



// FUNCTION 141c452f0 FUN_141c452f0 body=1189 status=ok
// SIG undefined FUN_141c452f0(void)

void FUN_141c452f0(int param_1,longlong param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float _Y;
  
  lVar3 = *(longlong *)(param_2 + 0x10);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x38) < DAT_146a543c8) &&
     (_Init_thread_header(&DAT_146a543c8), DAT_146a543c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a543c0 = lVar8;
    _Init_thread_footer(&DAT_146a543c8);
  }
  if ((*(int *)(DAT_146a543c0 + 4) < 3) || (*(longlong *)(param_2 + 0x1a40) != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  fVar13 = *(float *)(param_2 + 0x1580);
  if (1.0 <= fVar13) {
    if (99.0 <= fVar13) {
      fVar13 = 99.0;
    }
  }
  else {
    fVar13 = 1.0;
  }
  fVar14 = *(float *)(param_2 + 0x1584);
  if (1.0 <= fVar14) {
    if (99.0 <= fVar14) {
      fVar14 = 99.0;
    }
  }
  else {
    fVar14 = 1.0;
  }
  lVar8 = *(longlong *)(param_2 + 0x10);
  fVar15 = 1.0;
  fVar11 = 1.0;
  fVar14 = fVar14 * 0.01;
  cVar2 = *(char *)(lVar8 + 0x78);
  if (cVar2 == '\0') {
    fVar12 = _guard_xfg_dispatch_icall_nop(2.0,*(float *)(param_2 + 0x1574));
  }
  else {
    fVar12 = 1.0;
  }
  if ((bVar5) && ((*(uint *)(param_2 + 0x1248) & 0x2000000) != 0)) {
    if (cVar2 == '\0') {
      fVar12 = _guard_xfg_dispatch_icall_nop(2.0,*(float *)(param_2 + 0x1578));
    }
    else {
      fVar12 = 1.0;
    }
  }
  uVar6 = *(uint *)(lVar3 + 0x2c) & 0x1000;
  if ((uVar6 == 0) && (cVar2 == '\0')) {
    fVar12 = 1.0;
  }
  fVar9 = *(float *)(param_2 + 0x15a8);
  if (1.0 <= fVar9) {
    if (100.0 <= fVar9) {
      fVar9 = 100.0;
    }
  }
  else {
    fVar9 = 1.0;
  }
  if (*(char *)(param_2 + 0x157c) == '\x01') {
    fVar9 = 100.0 / fVar9;
  }
  else {
    fVar9 = 1.0;
  }
  fVar1 = *(float *)(param_2 + 0x15a4);
  fVar10 = fVar1 - 1.0;
  _Y = *(float *)(param_2 + 0x15a0);
  if (fVar10 <= *(float *)(param_2 + 0x15a0)) {
    _Y = fVar10;
  }
  if (((uVar6 != 0) && ((*(byte *)(lVar3 + 0x28) & 0x80) != 0)) &&
     (param_1 <= *(int *)(param_2 + 0x1a38))) {
    if (cVar2 == '\0') {
      if (*(char *)(param_2 + 0x157c) != '\x02') {
        fVar15 = *(float *)(param_2 + 0x1588);
        fVar11 = *(float *)(param_2 + 0x158c);
        if (bVar5) {
          if ((*(uint *)(param_2 + 0x1248) >> 0x13 & 1) != 0) {
            fVar15 = *(float *)(param_2 + 0x1590);
          }
          if ((*(uint *)(param_2 + 0x1248) >> 0x14 & 1) != 0) {
            fVar11 = *(float *)(param_2 + 0x1594);
          }
        }
        goto LAB_141c455a1;
      }
      fVar15 = *(float *)(param_2 + 0x1568);
      fVar11 = *(float *)(param_2 + 0x1564);
      if (fVar11 <= 1.0) {
        fVar11 = 1.0;
      }
      fVar10 = *(float *)(param_2 + 0x1560);
      if ((*(int *)(lVar4 + 0x38) < DAT_1468509dc) &&
         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 1.442695;
        _Init_thread_footer(&DAT_1468509dc);
      }
      fVar15 = _guard_xfg_dispatch_icall_nop((fVar15 * fVar15 * fVar10 * 100.0) / fVar11);
      fVar15 = fVar15 * DAT_1468509d8;
    }
    else {
      fVar15 = *(float *)(lVar8 + 0x74);
    }
    fVar11 = _guard_xfg_dispatch_icall_nop(2.0,fVar15);
    fVar11 = fVar11 * 1.2;
    fVar15 = fVar11;
  }
LAB_141c455a1:
  fVar10 = fVar11;
  if (fVar15 <= fVar11) {
    fVar10 = fVar15;
  }
  fVar15 = fVar14;
  if (fVar13 * 0.01 <= fVar14) {
    fVar15 = fVar13 * 0.01;
  }
  *param_3 = fVar15;
  param_3[1] = fVar14;
  param_3[2] = fVar10;
  param_3[3] = fVar11;
  fVar13 = *(float *)(param_2 + 0x1598);
  fVar14 = *(float *)(param_2 + 0x159c);
  fVar11 = 1.0 / (fVar1 - _Y);
  fVar15 = *(float *)(*(longlong *)(param_2 + 0x10) + 0x54);
  param_3[4] = fVar12;
  param_3[5] = fVar15;
  param_3[6] = fVar13;
  param_3[7] = fVar14;
  fVar13 = _guard_xfg_dispatch_icall_nop(2.0,_Y);
  param_3[8] = fVar11;
  param_3[9] = -(fVar11 * _Y);
  param_3[10] = fVar13;
  param_3[0xb] = 0.0;
  param_3[0xc] = 0.0;
  param_3[0xd] = fVar9;
  param_3[0xe] = 0.0;
  param_3[0xf] = 0.0;
  return;
}



// FUNCTION 141c457a0 FUN_141c457a0 body=237 status=ok
// SIG undefined FUN_141c457a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141c457a0(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uStackX_c;
  
  uVar3 = (**(code **)(*param_1 + 8))(param_1,1);
  lVar4 = FHardwareCursor::GetHandle(uVar3);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,lVar4 != 0);
  lVar4 = FRenderingCompositeOutputRef::GetOutput(uVar3);
  uVar1 = *(undefined4 *)(lVar4 + 0x2c);
  uVar3 = *(undefined8 *)(lVar4 + 0x14);
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  param_2[8] = L"UnknownTexture";
  uVar2 = uRam0000000146ab6930;
  *param_2 = _DAT_146ab6928;
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 2) = DAT_146ab6938;
  *(int *)((longlong)param_2 + 0x14) = (int)uVar3;
  uStackX_c = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(param_2 + 3) = uStackX_c;
  param_2[8] = L"FFTBuffer";
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x10001;
  return param_2;
}



// FUNCTION 141c458e0 ComputeOutputDesc body=128 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessBasicEyeAdaptationSetUp::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"EyeAdaptationBasicSetup";
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da38;
  return param_2;
}



// FUNCTION 141c45960 FUN_141c45960 body=316 status=ok
// SIG undefined FUN_141c45960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141c45960(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  lVar5 = FSceneRenderTargets::Get();
  iVar1 = 0x1f;
  uVar3 = (uint)*(undefined8 *)(lVar5 + 0x378);
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar8 = 0x20;
  iVar7 = iVar8;
  if (uVar3 != 0) {
    iVar7 = 0x1f - iVar1;
  }
  uVar3 = uVar3 - 1;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = iVar8;
  if (uVar3 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar9 = (0x20U - iVar4 & ~((iVar7 << 0x1a) >> 0x1f)) - 1;
  iVar1 = 0x1f;
  uVar3 = (uint)((ulonglong)*(undefined8 *)(lVar5 + 0x378) >> 0x20);
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar7 = iVar8;
  if (uVar3 != 0) {
    iVar7 = 0x1f - iVar1;
  }
  uVar3 = uVar3 - 1;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar3 != 0) {
    iVar8 = 0x1f - iVar1;
  }
  *param_2 = 1;
  uVar3 = (0x20U - iVar8 & ~((iVar7 << 0x1a) >> 0x1f)) - 1;
  bVar6 = (byte)uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (uVar3 <= uVar9) {
    uVar3 = uVar9 & 0xffff;
  }
  param_2[4] = 1;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  uVar2 = uRam0000000146ab6930;
  *param_2 = _DAT_146ab6928;
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 2) = DAT_146ab6938;
  *(int *)((longlong)param_2 + 0x14) = 1 << ((byte)uVar9 & 0x1f);
  *(int *)(param_2 + 3) = 1 << (bVar6 & 0x1f);
  param_2[8] = &DAT_144e14fb8;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0;
  *(short *)((longlong)param_2 + 0x26) = (short)uVar3;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 10;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x2000009;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  return param_2;
}



// FUNCTION 141c45ae0 FUN_141c45ae0 body=83 status=ok
// SIG undefined FUN_141c45ae0(void)

undefined8 * FUN_141c45ae0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  param_2[8] = L"SceneColorWithAO";
  return param_2;
}



// FUNCTION 141c45b40 ComputeOutputDesc body=143 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassPostProcessDOFRecombine::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  uVar1 = _DAT_1464aa6e8;
  uVar4 = _DAT_1464aa6e0;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  uStack_24 = (undefined4)uVar4;
  uStack_20 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_1c = (undefined4)uVar1;
  uStack_18 = (undefined4)((ulonglong)uVar1 >> 0x20);
  param_2[8] = L"DOFRecombine";
  *(undefined1 *)(param_2 + 9) = 0;
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c45bd0 ComputeOutputDesc body=208 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessDOFSetup::ComputeOutputDesc(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar4 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar3);
  uVar3 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar3;
  uVar3 = puVar4[3];
  param_2[2] = puVar4[2];
  param_2[3] = uVar3;
  uVar3 = puVar4[5];
  param_2[4] = puVar4[4];
  param_2[5] = uVar3;
  uVar3 = puVar4[7];
  param_2[6] = puVar4[6];
  param_2[7] = uVar3;
  uVar3 = puVar4[9];
  param_2[8] = puVar4[8];
  param_2[9] = uVar3;
  iVar2 = *(int *)((longlong)param_2 + 0x14) / 2;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar1 = *(int *)(param_2 + 3) / 2;
  if (*(int *)(param_2 + 3) / 2 < 2) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  *(int *)(param_2 + 3) = iVar1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  pwVar5 = L"DOFSetup1";
  if (param_3 == 0) {
    pwVar5 = L"DOFSetup0";
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  param_2[8] = pwVar5;
  *param_2 = 1;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 141c45ca0 ComputeOutputDesc body=264 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessDownsample::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[3];
  param_2[2] = puVar5[2];
  param_2[3] = uVar4;
  uVar4 = puVar5[5];
  param_2[4] = puVar5[4];
  param_2[5] = uVar4;
  uVar4 = puVar5[7];
  param_2[6] = puVar5[6];
  param_2[7] = uVar4;
  uVar4 = puVar5[9];
  param_2[8] = puVar5[8];
  param_2[9] = uVar4;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  *(undefined1 *)(param_2 + 9) = 1;
  iVar1 = ((int)*(undefined8 *)((longlong)param_2 + 0x14) + 1) / 2;
  iVar2 = ((int)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x14) >> 0x20) + 1) / 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar1;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  if ((int)param_1[0x18] != 0) {
    *(int *)((longlong)param_2 + 0x2c) = (int)param_1[0x18];
  }
  uVar6 = *(uint *)((longlong)param_2 + 0x34) & 0xfffefffe;
  *(uint *)((longlong)param_2 + 0x34) = uVar6;
  uVar3 = 1;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    uVar3 = 0x10000;
  }
  *(uint *)((longlong)param_2 + 0x34) = uVar3 | uVar6;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da34;
  *(undefined1 *)(param_2 + 9) = 0;
  param_2[8] = param_1[0x19];
  *param_2 = 1;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 141c45df0 ComputeOutputDesc body=243 status=ok
// SIG undefined ComputeOutputDesc(void)

longlong * FRCPassPostProcessHMD::ComputeOutputDesc(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = param_1[5];
  *param_2 = param_1[4];
  param_2[1] = lVar4;
  lVar4 = param_1[7];
  param_2[2] = param_1[6];
  param_2[3] = lVar4;
  lVar4 = param_1[9];
  param_2[4] = param_1[8];
  param_2[5] = lVar4;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x54);
  lVar4 = param_1[0xb];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x5c);
  *(int *)(param_2 + 6) = (int)param_1[10];
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar1;
  *(int *)(param_2 + 7) = (int)lVar4;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar2;
  lVar4 = param_1[0xc];
  uVar1 = *(undefined4 *)((longlong)param_1 + 100);
  lVar3 = param_1[0xd];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x6c);
  *(int *)(param_2 + 8) = (int)lVar4;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar1;
  *(int *)(param_2 + 9) = (int)lVar3;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar2;
  lVar4 = (**(code **)(*param_1 + 8))((int)lVar4,0);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FRenderingCompositeOutputRef::GetOutput(lVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar4 = plVar5[1];
      *param_2 = *plVar5;
      param_2[1] = lVar4;
      *(int *)(param_2 + 2) = (int)plVar5[2];
      *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0x14);
      *(int *)(param_2 + 3) = (int)plVar5[3];
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)plVar5 + 0x1c);
      *(int *)(param_2 + 4) = (int)plVar5[4];
      *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)((longlong)plVar5 + 0x24);
      *(undefined1 *)((longlong)param_2 + 0x25) = *(undefined1 *)((longlong)plVar5 + 0x25);
      *(undefined2 *)((longlong)param_2 + 0x26) = *(undefined2 *)((longlong)plVar5 + 0x26);
      *(short *)(param_2 + 5) = (short)plVar5[5];
      *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)plVar5 + 0x2c);
      *(int *)(param_2 + 6) = (int)plVar5[6];
      *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)((longlong)plVar5 + 0x34);
      *(char *)(param_2 + 7) = (char)plVar5[7];
      param_2[8] = plVar5[8];
      *(char *)(param_2 + 9) = (char)plVar5[9];
      *(undefined1 *)((longlong)param_2 + 0x49) = *(undefined1 *)((longlong)plVar5 + 0x49);
    }
  }
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = (longlong)&DAT_144e19768;
  return param_2;
}



// FUNCTION 141c45ef0 ComputeOutputDesc body=230 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessHistogram::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iStack_44;
  int iStack_40;
  
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0);
  lVar3 = FRenderingCompositeOutputRef::GetOutput(uVar2);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  *param_2 = 1;
  iStack_44 = (int)((ulonglong)uVar2 >> 0x20);
  iStack_40 = (int)uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[8] = L"UnknownTexture";
  param_2[4] = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  uVar2 = uRam0000000146ab6930;
  *param_2 = _DAT_146ab6928;
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 2) = DAT_146ab6938;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x10;
  *(uint *)(param_2 + 3) = (iStack_40 + 0x1fU >> 5) * (iStack_44 + 0x3fU >> 6);
  param_2[8] = L"UnknownTexture2D";
  *(undefined8 *)((longlong)param_2 + 0x2c) = 10;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x10001;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 6) = DAT_146a9da3c;
  param_2[8] = L"Histogram";
  return param_2;
}



// FUNCTION 141c45fe0 ComputeOutputDesc body=182 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassPostProcessHistogramReduce::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 8))(param_1,0);
  FRenderingCompositeOutputRef::GetOutput();
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[8] = L"UnknownTexture";
  param_2[4] = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  uVar1 = uRam0000000146ab6930;
  *param_2 = _DAT_146ab6928;
  param_2[1] = uVar1;
  *(undefined4 *)(param_2 + 2) = DAT_146ab6938;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x10;
  param_2[3] = 2;
  param_2[8] = L"UnknownTexture2D";
  *(undefined8 *)((longlong)param_2 + 0x2c) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 6) = DAT_146a9da40;
  param_2[8] = L"HistogramReduce";
  return param_2;
}



// FUNCTION 141c460a0 FUN_141c460a0 body=87 status=ok
// SIG undefined FUN_141c460a0(void)

undefined8 * FUN_141c460a0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 1;
  param_2[8] = L"PostProcessRenderForegroundTranslucency";
  return param_2;
}



// FUNCTION 141c46100 FUN_141c46100 body=1107 status=ok
// SIG undefined FUN_141c46100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c46100(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(*param_2 + 0x1d82) != '\0') {
    if (*param_3 == 0) {
      lVar1 = param_2[3];
      local_84 = (undefined4)lVar1;
      local_a8._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
      local_80 = local_a8._4_4_;
      local_58 = L"UnknownTexture2D";
      local_88 = DAT_1464c9cb0;
      local_b8 = 1;
      local_c0 = 1;
      local_c8 = L"SceneColorCopy";
      local_98 = _DAT_1464c9ca0;
      uStack_94 = uRam00000001464c9ca4;
      uStack_90 = uRam00000001464c9ca8;
      uStack_8c = uRam00000001464c9cac;
      local_7c = 0;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_6c = 0x25;
      local_64 = 0x10000;
      local_60 = 0;
      local_50 = 1;
      local_a8 = lVar1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2[8],&local_98,param_3);
    }
    lVar1 = param_2[8];
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if (((lVar3 != 0) && (lVar3 = FRenderingCompositeOutputRef::GetOutput(lVar3), lVar3 != 0)) &&
       (plVar2 = *(longlong **)(lVar3 + 0x50), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
      local_a8 = plVar2[2];
      plVar8 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar5 = plVar8 + 1;
      if (*(longlong **)(lVar1 + 0x38) < plVar5) {
        FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
        plVar8 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar5 = plVar8 + 1;
      }
      *(longlong **)(lVar1 + 0x30) = plVar5;
      *plVar8 = local_a8;
      puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 5;
      if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
        puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar6 + 5;
      }
      *(undefined8 **)(lVar1 + 0x30) = puVar4;
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
      **(undefined8 **)(lVar1 + 8) = puVar6;
      *(undefined8 **)(lVar1 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar6 + 2) = 1;
      puVar6[3] = plVar8;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a54a88) &&
       (_Init_thread_header(&DAT_146a54a88), DAT_146a54a88 == -1)) {
      FName::FName(&DAT_146a54a80,L"AsyncEncodeSceneColorEndFence",1);
      _Init_thread_footer(&DAT_146a54a88);
    }
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_a8,&DAT_146a54a80);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x15,&local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
    lVar1 = *param_3;
    FUN_141c3fd40(param_1,param_2[8]);
    lVar3 = param_2[8];
    local_a8 = *(undefined8 *)(lVar1 + 0x18);
    puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
      puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 1;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar4;
    *puVar6 = local_a8;
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar4;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar7;
    *(undefined8 **)(lVar3 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar7 + 2) = 1;
    puVar7[3] = puVar6;
    puVar7[4] = 2;
    puVar7[5] = 0;
    FUN_141c35bf0(param_2[8],param_2,*(undefined8 *)(lVar1 + 0x18));
    lVar3 = param_2[8];
    local_a8 = *(undefined8 *)(lVar1 + 0x18);
    lVar1 = param_1[0x15];
    puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
      puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 1;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar4;
    *puVar6 = local_a8;
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar4;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar7;
    *(undefined8 **)(lVar3 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[3] = puVar6;
    *puVar7 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar7 + 2) = 1;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 1;
    puVar7[5] = lVar1;
  }
  return;
}



// FUNCTION 141c46560 ConstructCompiledInstance body=322 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessMotionBlurPS<1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a450;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldUVLimit",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldParams",0);
    FShaderParameter::Bind(puVar1 + 0x3b,*(undefined8 *)(param_1 + 0x18),L"MiscParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c466b0 ConstructCompiledInstance body=268 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessCircleDOFPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldParams",0);
    FShaderParameter::Bind((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"MiscParams",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c467c0 ConstructCompiledInstance body=268 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessDownsampleCS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DownsampleComputeParams",0
              );
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c468d0 ConstructCompiledInstance body=268 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessDownsamplePS<1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DownsampleParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"BufferBilinearUVMinMax",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c469e0 FUN_141c469e0 body=243 status=ok
// SIG undefined FUN_141c469e0(void)

undefined8 * FUN_141c469e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b200;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ComputeAOParameters",0);
    FShaderResourceParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"DepthTex",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"Occlusion",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"LinearSampler",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c46ae0 FUN_141c46ae0 body=406 status=ok
// SIG undefined FUN_141c46ae0(void)

undefined8 * FUN_141c46ae0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b470;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ComputeAOBlurParameters",0);
    FShaderResourceParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"LoResDB",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"HiResDB",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"LoResAO1",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"LoResAO2",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"HiResAO",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"AoResult",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"LinearSampler",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c46c80 ConstructCompiledInstance body=341 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TPostProcessBuildHCBPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b838;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xd2);
    *(undefined8 *)((longlong)puVar1 + 0x1ce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InvSize",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"InputUvFactorAndOffset",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"InputUvBundaries",0);
    FPostProcessPassParameters::Bind((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18));
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1ce,*(undefined8 *)(param_1 + 0x18),L"ColorMip",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"ColorMipSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c46de0 FUN_141c46de0 body=341 status=ok
// SIG undefined FUN_141c46de0(void)

undefined8 * FUN_141c46de0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b590;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationTexture",0);
    FShaderParameter::Bind(puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c6,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptionSrcRect",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationSrcSizeRcp",0
              );
    FRWShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationExposureUav")
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c46f40 ConstructCompiledInstance body=409 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FBlendLowResCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144e1a870;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined4 *)(puVar2 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined4 *)(puVar2 + 0x1a) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xd4) = 0;
    *(undefined2 *)(puVar2 + 0x1b) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xda) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xde) = 0;
    *(undefined4 *)(puVar2 + 0x1c) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xe4) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcTexture",0);
    FShaderResourceParameter::Bind
              ((undefined4 *)((longlong)puVar2 + 0xc4),uVar1,L"HalfResSrcTexture",0);
    FShaderResourceParameter::Bind(puVar2 + 0x19,uVar1,L"HalfResSrcSampler",0);
    FShaderResourceParameter::Bind
              ((undefined4 *)((longlong)puVar2 + 0xcc),uVar1,L"CenterWeightTexture",0);
    FShaderResourceParameter::Bind(puVar2 + 0x1a,uVar1,L"DstTexture",0);
    FShaderParameter::Bind((undefined4 *)((longlong)puVar2 + 0xd4),uVar1,L"DstRect",0);
    FShaderParameter::Bind((undefined4 *)((longlong)puVar2 + 0xda),uVar1,L"HalfRect",0);
    FShaderParameter::Bind(puVar2 + 0x1c,uVar1,L"HalfBufferSize",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c470e0 ConstructCompiledInstance body=312 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCaptureKernelWeightsCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe0);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144e1a718;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"HalfResSrcTexture",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"PhysicalSrcTexture",0);
    FShaderResourceParameter::Bind(puVar2 + 0x19,uVar1,L"PhysicalSrcSampler",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xcc,uVar1,L"DstTexture",0);
    FShaderParameter::Bind(puVar2 + 0x1a,uVar1,L"HalfResSumLocation",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xd6,uVar1,L"UVCenter",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47220 ConstructCompiledInstance body=261 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FParticleSortKeyGenCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b348;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DS4x",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"DS8x",0);
    FShaderResourceParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"DS8xAtlas",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"DS16x",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"DS16xAtlas",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47330 FUN_141c47330 body=304 status=ok
// SIG undefined FUN_141c47330(void)

undefined8 * FUN_141c47330(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b230;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"Depth",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"LinearZ",0);
    FShaderResourceParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"DS2x",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"DS2xAtlas",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"DS4x",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"DS4xAtlas",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47460 FUN_141c47460 body=157 status=ok
// SIG undefined FUN_141c47460(void)

undefined8 * FUN_141c47460(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1aaa0;
    puVar1[0x18] = 0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x19);
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutputTexture");
    FPostProcessPassParameters::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47500 ConstructCompiledInstance body=236 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPassThroughCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xd8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144e1a9f8;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcTexture",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"DstTexture",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xce,uVar1,L"DstRect",0);
    FShaderParameter::Bind(puVar2 + 0x19,uVar1,L"SrcRect",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c475f0 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBasicEyeAdaptationSetupPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11800;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c476a0 FUN_141c476a0 body=336 status=ok
// SIG undefined FUN_141c476a0(void)

undefined8 * FUN_141c476a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b4a0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c4,*(undefined8 *)(param_1 + 0x18),L"AOApplyCurve",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"AOBuffer",0);
    FShaderResourceParameter::Bind(puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"AOSmapler",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1ca,*(undefined8 *)(param_1 + 0x18),L"AOSceneColor",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1ce,*(undefined8 *)(param_1 + 0x18),L"AOSceneColorSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c477f0 ConstructCompiledInstance body=215 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessEyeAdaptationCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1ab90;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FRWShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex");
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c4,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c478d0 ConstructCompiledInstance body=211 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessEyeAdaptationPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11800;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1c4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationParams",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationTexture",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c479b0 ConstructCompiledInstance body=223 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessGBufferHintsPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b440;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"MiniFontTexture",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47a90 ConstructCompiledInstance body=185 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessHMDPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b038;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47b50 ConstructCompiledInstance body=168 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessHMDVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1af70;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"EyeToSrcUVScale",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"EyeToSrcUVOffset",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47c00 ConstructCompiledInstance body=335 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessHistogramCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a480;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"HistogramRWTexture",0);
    FShaderParameter::Bind(puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"HistogramParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c6,*(undefined8 *)(param_1 + 0x18),L"ThreadGroupCount",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"LeftTopOffset",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47d50 ConstructCompiledInstance body=235 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessHistogramReducePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a978;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"LoopSize",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationTexture",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c6,*(undefined8 *)(param_1 + 0x18),
               L"EyeAdapationTemporalParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47e40 ConstructCompiledInstance body=235 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessLogLuminance2ExposureScalePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12c00;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationTexture",0);
    FShaderParameter::Bind(puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptationParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c6,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptionSrcRect",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c47f30 ConstructCompiledInstance body=345 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FResizeAndCenterTextureCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144e1a4b0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xdc) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcTexture",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"SrcSampler",0);
    FShaderResourceParameter::Bind(puVar2 + 0x19,uVar1,L"DstTexture",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xcc,uVar1,L"DstExtent",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xd2,uVar1,L"ImageExtent",0);
    FShaderParameter::Bind(puVar2 + 0x1b,uVar1,L"KernelCenterAndScale",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xde,uVar1,L"DstBufferExtent",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48090 FUN_141c48090 body=130 status=ok
// SIG undefined FUN_141c48090(void)

undefined8 * FUN_141c48090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a450;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48120 FUN_141c48120 body=91 status=ok
// SIG undefined FUN_141c48120(void)

undefined8 * FUN_141c48120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b200;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48180 FUN_141c48180 body=106 status=ok
// SIG undefined FUN_141c48180(void)

undefined8 * FUN_141c48180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b470;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c481f0 ConstructSerializedInstance body=117 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TPostProcessBuildHCBPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b838;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xd2);
    *(undefined8 *)((longlong)puVar1 + 0x1ce) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48270 FUN_141c48270 body=105 status=ok
// SIG undefined FUN_141c48270(void)

undefined8 * FUN_141c48270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b590;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c482e0 FUN_141c482e0 body=100 status=ok
// SIG undefined FUN_141c482e0(void)

undefined8 * FUN_141c482e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a870;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xe4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48350 FUN_141c48350 body=86 status=ok
// SIG undefined FUN_141c48350(void)

undefined8 * FUN_141c48350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a718;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c483b0 FUN_141c483b0 body=79 status=ok
// SIG undefined FUN_141c483b0(void)

undefined8 * FUN_141c483b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b348;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48400 FUN_141c48400 body=80 status=ok
// SIG undefined FUN_141c48400(void)

undefined8 * FUN_141c48400(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b230;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48450 FUN_141c48450 body=78 status=ok
// SIG undefined FUN_141c48450(void)

undefined8 * FUN_141c48450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1aaa0;
    puVar1[0x18] = 0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x19);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c484a0 FUN_141c484a0 body=79 status=ok
// SIG undefined FUN_141c484a0(void)

undefined8 * FUN_141c484a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a9f8;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c484f0 FUN_141c484f0 body=98 status=ok
// SIG undefined FUN_141c484f0(void)

undefined8 * FUN_141c484f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b4a0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48560 ConstructSerializedInstance body=91 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessEyeAdaptationCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1ab90;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c485c0 ConstructSerializedInstance body=85 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessEyeAdaptationPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11800;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1c4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48620 ConstructSerializedInstance body=115 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessGBufferHintsPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b440;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c486a0 ConstructSerializedInstance body=109 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessHMDPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b038;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48710 FUN_141c48710 body=80 status=ok
// SIG undefined FUN_141c48710(void)

undefined8 * FUN_141c48710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1af70;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48760 ConstructSerializedInstance body=98 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessHistogramCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a480;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c487d0 FUN_141c487d0 body=85 status=ok
// SIG undefined FUN_141c487d0(void)

undefined8 * FUN_141c487d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a978;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48830 FUN_141c48830 body=93 status=ok
// SIG undefined FUN_141c48830(void)

undefined8 * FUN_141c48830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a4b0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c48890 FUN_141c48890 body=641 status=ok
// SIG undefined FUN_141c48890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141c48890(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  longlong *local_e0;
  undefined4 *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar4 = FUN_141c49c80();
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1);
    lVar6 = FHardwareCursor::GetHandle(uVar5);
    lVar1 = *param_2;
    local_b8 = *(undefined4 *)(lVar1 + 0x1518);
    local_bc = *(undefined4 *)(lVar1 + 0x1514);
    local_c0 = *(undefined4 *)(lVar1 + 0x1510);
    if (lVar6 == 0) {
      local_d8 = &local_c0;
      local_e0 = (longlong *)(param_1[0x18] + 0x10);
      local_e8 = (wchar_t *)(param_1[0x17] + 8);
      FRCPassFFTBloom::ConvolveWithKernel(param_1,param_2,lVar4 + 8,&local_b0);
    }
    else {
      local_88 = DAT_146ab6938;
      local_c8 = (longlong *)0x0;
      local_7c = 0;
      local_60 = 0;
      local_d8 = (undefined4 *)CONCAT71(local_d8._1_7_,1);
      lVar6 = param_1[0x19];
      local_84 = (undefined4)lVar6;
      local_b0._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      local_80 = local_b0._4_4_;
      local_58 = L"UnknownTexture2D";
      local_e0 = (longlong *)CONCAT71(local_e0._1_7_,1);
      local_e8 = L"HalfRes FFT Result";
      local_98 = _DAT_146ab6928;
      uStack_94 = uRam0000000146ab692c;
      uStack_90 = uRam0000000146ab6930;
      uStack_8c = uRam0000000146ab6934;
      local_78 = 1;
      local_74 = 0x10000;
      local_70 = 1;
      local_6c = 1;
      local_64 = 0x10001;
      local_50 = 1;
      local_b0 = lVar6;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2[8],&local_98,&local_c8);
      plVar3 = local_c8;
      local_d8 = &local_c0;
      local_e8 = (wchar_t *)(param_1[0x17] + 8);
      local_e0 = local_c8 + 3;
      FRCPassFFTBloom::ConvolveWithKernel(param_1,param_2,lVar4 + 8,&local_b0);
      lVar4 = param_1[0x18];
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x12d0);
      uVar5 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],1);
      lVar6 = FRenderingCompositeOutputRef::GetOutput(uVar5);
      plVar2 = *(longlong **)(lVar6 + 0x50);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      local_d0 = lVar4 + 0x10;
      local_e8 = (wchar_t *)(param_1 + 0x1a);
      local_e0 = param_1 + 0x19;
      local_d8 = (undefined4 *)(lVar1 + 0x10);
      FUN_141c449f0(param_2,plVar2 + 2,param_2 + 1,plVar3 + 2);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2);
      }
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x30))();
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141c48b20 ConvolveWithKernel body=732 status=ok
// SIG undefined ConvolveWithKernel(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FRCPassFFTBloom::ConvolveWithKernel
                    (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 *param_6,ulonglong param_7)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong alStack_b8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_d8 = param_5;
  alStack_b8[1] = param_7;
  if (*(char *)(param_1 + 0xe9) == '\0') {
    param_7 = param_7 & 0xffffffffffffff00;
  }
  else {
    alStack_b8[3] = *(undefined8 *)(param_2 + 0x60);
    lVar6 = *(longlong *)(param_2 + 0x40);
    local_d0 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd0);
    local_cc = *(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd4);
    local_c0 = 0;
    alStack_b8[0] = 0;
    alStack_b8[2] = lVar6;
    GPUFFT::Convolution2DBufferSize
              (&local_c8,param_1 + 0xe0,*(undefined1 *)(param_1 + 0xe8),&local_d0);
    local_88 = DAT_146ab6938;
    local_84 = local_c8;
    local_80 = local_c4;
    local_78 = 1;
    local_70 = 1;
    local_6c = 1;
    local_58 = L"UnknownTexture2D";
    local_7c = 0;
    local_60 = 0;
    local_f8._0_1_ = 1;
    local_100._0_1_ = 1;
    local_108 = L"Tmp FFT Buffer A";
    local_98 = _DAT_146ab6928;
    uStack_94 = uRam0000000146ab692c;
    uStack_90 = uRam0000000146ab6930;
    uStack_8c = uRam0000000146ab6934;
    local_74 = 0x10000;
    local_64 = 0x10001;
    local_50 = 1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,*(undefined8 *)(param_2 + 0x40),&local_98,&local_c0);
    local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,1);
    local_100 = CONCAT71(local_100._1_7_,1);
    local_108 = L"Tmp FFT Buffer B";
    FUN_141ce20b0(&PTR_PTR_1464c2560,*(undefined8 *)(param_2 + 0x40),&local_98,alStack_b8);
    local_e8 = alStack_b8[0] + 8;
    local_f0 = local_c0 + 8;
    local_e0 = alStack_b8[1];
    local_f8 = param_6;
    local_100 = local_d8;
    local_108 = (wchar_t *)(param_1 + 0xd0);
    bVar2 = GPUFFT::ConvolutionWithTextureImage2D
                      (alStack_b8 + 2,param_1 + 0xe0,*(undefined1 *)(param_1 + 0xe8),param_3);
    local_d8 = *param_6;
    puVar5 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 1;
    if (*(undefined8 **)(lVar6 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x10);
      puVar5 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 1;
    }
    *(undefined8 **)(lVar6 + 0x30) = puVar3;
    *puVar5 = local_d8;
    puVar4 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 6;
    if (*(undefined8 **)(lVar6 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(lVar6 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 6;
    }
    *(undefined8 **)(lVar6 + 0x30) = puVar3;
    plVar7 = alStack_b8 + 1;
    *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
    **(undefined8 **)(lVar6 + 8) = puVar4;
    *(undefined8 **)(lVar6 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    puVar4[3] = puVar5;
    lVar6 = 2;
    *puVar4 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar4 + 4) = 2;
    *(undefined4 *)(puVar4 + 2) = 1;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 1;
    puVar4[5] = 0;
    do {
      plVar1 = plVar7 + 0xffffffffffffffff;
      plVar7 = plVar7 + 0xffffffffffffffff;
      lVar6 = lVar6 + -1;
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x30))();
      }
    } while (lVar6 != 0);
    param_7 = (ulonglong)bVar2;
  }
  return param_7;
}



// FUNCTION 141c48e00 FUN_141c48e00 body=1042 status=ok
// SIG undefined FUN_141c48e00(void)

void FUN_141c48e00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  int *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  
  lVar4 = *(longlong *)(param_1 + 0x60);
  puVar5 = *(undefined **)(param_1 + 0x40);
  local_68 = &DAT_146a51400;
  local_60 = (undefined8 *)((ulonglong)local_60 & 0xffffffff00000000);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8,&local_68);
  plVar12 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  local_res10 = 0;
  local_res8 = 0;
  plVar9 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar4 = *plVar9;
  FUN_141a19150(puVar5,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar6 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar10 = *(undefined8 *)(lVar6 + 0x60);
  lVar6 = *(longlong *)(param_1 + 0x40);
  FRHIComputeShader::UpdateStats(uVar10);
  puVar13 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 3;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 3;
  }
  *(undefined8 **)(lVar6 + 0x30) = puVar11;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  **(undefined8 **)(lVar6 + 8) = puVar13;
  *(undefined8 **)(lVar6 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e50;
  puVar13[2] = uVar10;
  local_res8 = *param_4;
  puVar13 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 1;
  if (*(undefined8 **)(puVar5 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(puVar5 + 0x30);
    puVar13 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 1;
  }
  *(undefined8 **)(puVar5 + 0x30) = puVar11;
  *puVar13 = local_res8;
  puVar14 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar14 + 6;
  if (*(undefined8 **)(puVar5 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(puVar5 + 0x30);
    puVar14 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar14 + 6;
  }
  *(undefined8 **)(puVar5 + 0x30) = puVar11;
  *(int *)(puVar5 + 0x14) = *(int *)(puVar5 + 0x14) + 1;
  **(undefined8 **)(puVar5 + 8) = puVar14;
  *(undefined8 **)(puVar5 + 8) = puVar14 + 1;
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar14 + 2) = 1;
  puVar14[3] = puVar13;
  puVar14[4] = 2;
  puVar14[5] = 0;
  lVar6 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_58,puVar5,*(undefined8 *)(lVar6 + 0x60),*(undefined2 *)(lVar4 + 0xc4),param_4);
  lVar6 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  local_60 = &local_res10;
  uVar10 = *(undefined8 *)(lVar6 + 0x60);
  local_res10 = uVar10;
  local_68 = puVar5;
  if (*(short *)(lVar4 + 0xc2) != 0) {
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(ushort *)(lVar4 + 0xc0);
    puVar13 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 5;
    if (*(undefined8 **)(puVar5 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar5 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
    }
    *(undefined8 **)(puVar5 + 0x30) = puVar11;
    *(int *)(puVar5 + 0x14) = *(int *)(puVar5 + 0x14) + 1;
    **(undefined8 **)(puVar5 + 8) = puVar13;
    *(undefined8 **)(puVar5 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_144d92090;
    puVar13[2] = uVar10;
    *(uint *)(puVar13 + 3) = (uint)uVar1;
    puVar13[4] = uVar7;
  }
  uVar10 = GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                     (&local_68,lVar4 + 0xce,param_5);
  GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
            (uVar10,lVar4 + 200,param_3);
  iVar2 = param_5[3];
  uVar15 = param_5[2] - *param_5 >> 0x1f & 0x1f;
  uVar8 = (param_5[2] - *param_5) + uVar15;
  iVar16 = (int)uVar8 >> 5;
  if ((uVar8 & 0x1f) != uVar15) {
    iVar16 = iVar16 + 1;
  }
  iVar3 = param_5[1];
  puVar13 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 4;
  if (*(undefined8 **)(puVar5 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(puVar5 + 0x30,0x28);
    puVar13 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 4;
  }
  *(undefined8 **)(puVar5 + 0x30) = puVar11;
  *(int *)(puVar5 + 0x14) = *(int *)(puVar5 + 0x14) + 1;
  **(undefined8 **)(puVar5 + 8) = puVar13;
  *(undefined8 **)(puVar5 + 8) = puVar13 + 1;
  *(int *)(puVar13 + 2) = iVar16;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d8df50;
  *(int *)((longlong)puVar13 + 0x14) = iVar2 - iVar3;
  *(undefined4 *)(puVar13 + 3) = 1;
  puVar13 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 5;
  if (*(undefined8 **)(local_50 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(local_50 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 5;
  }
  *(undefined8 **)(local_50 + 0x30) = puVar11;
  *(int *)(local_50 + 0x14) = *(int *)(local_50 + 0x14) + 1;
  **(undefined8 **)(local_50 + 8) = puVar13;
  *(undefined8 **)(local_50 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e40;
  puVar13[2] = local_58;
  *(undefined4 *)(puVar13 + 3) = local_48;
  puVar13[4] = 0;
  return;
}



// FUNCTION 141c49220 CreateDownSampleArray body=171 status=ok
// SIG undefined CreateDownSampleArray(void)

undefined8 *
CreateDownSampleArray(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = operator_new(0x78);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    uVar2 = FUN_141c3fe50(lVar1,param_2,&local_18,param_4);
  }
  *param_1 = uVar2;
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_LAB_144e1cf88;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,uVar2,uVar2);
  return param_1;
}



// FUNCTION 141c492e0 FUN_141c492e0 body=1154 status=ok
// SIG undefined FUN_141c492e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c492e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_c0 = param_6;
  local_a8 = param_3;
  local_a0 = param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_c8 = *(undefined8 *)(lVar2 + 0x60);
  local_b0 = 0;
  local_b8 = 0;
  FUN_141a19150(param_2[8],0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_b8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_b0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  lVar2 = param_2[8];
  FRHIComputeShader::UpdateStats(uVar3);
  puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 3;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x20);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar6;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar7;
  *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e50;
  puVar7[2] = uVar3;
  FUN_141aa9420(param_1,param_2[8],local_c8,*(undefined8 *)(*param_2 + 0x20));
  local_e8 = FUN_141a156e0();
  local_d8 = 0;
  local_e0 = 0;
  FUN_141caac70(param_1 + 0xc0,&local_c8,param_2,param_2[8]);
  cVar5 = FUN_141d6a650(*param_2);
  uVar3 = local_c8;
  lVar2 = param_2[8];
  if (cVar5 == '\0') {
    uVar9 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  }
  else {
    uVar9 = *(undefined8 *)(param_5 + 8);
  }
  if (*(short *)(param_1 + 0x1be) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar6;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar7;
    *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[4] = uVar9;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[2] = uVar3;
    *puVar7 = &PTR_LAB_144d92090;
  }
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3f800000;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  fStack_6c = 1.0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  FUN_141c452f0(DAT_1464c2390,0,&local_98);
  fStack_6c = *(float *)(DAT_146a50ab0 + 4);
  if (DAT_1464c2494 <= *(float *)(DAT_146a50ab0 + 4)) {
    fStack_6c = DAT_1464c2494;
  }
  local_e0 = 0;
  local_e8._0_4_ = 4;
  if (fStack_6c <= 0.0) {
    fStack_6c = 0.0;
  }
  FUN_141aace20(param_2[8],local_c8,param_1 + 0x1c0,&local_98);
  local_e8._0_4_ = 0;
  FUN_141a120e0(param_2[8],local_c8,param_1 + 0x1c6,local_a8);
  local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2[8],local_c8,param_1 + 0x1cc,local_a0);
  lVar4 = local_c0;
  lVar2 = param_2[8];
  local_c0 = *(undefined8 *)(local_c0 + 0x18);
  puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 1;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar6;
  *puVar7 = local_c0;
  puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 6;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar6;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar8;
  *(undefined8 **)(lVar2 + 8) = puVar8 + 1;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar7;
  puVar8[4] = 1;
  puVar8[5] = 0;
  puVar8[1] = 0;
  local_e8 = *(undefined8 *)(lVar4 + 0x18);
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x1d2,param_2[8],local_c8,0);
  local_e8 = CONCAT44(local_e8._4_4_,1);
  DispatchComputeShader(param_2[8],param_1,1);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x1d2,param_2[8],local_c8);
  lVar2 = param_2[8];
  local_c0 = *(undefined8 *)(lVar4 + 0x18);
  puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 1;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar6;
  *puVar7 = local_c0;
  puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 6;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar6;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar8;
  *(undefined8 **)(lVar2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar7;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 1;
  puVar8[5] = 0;
  return;
}



// FUNCTION 141c49770 Empty body=447 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_141c49841;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141c49841:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x38 + *param_1);
      if (plVar6[4] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141c49960 GetFixedExposure body=123 status=ok
// SIG undefined GetFixedExposure(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FRCPassPostProcessEyeAdaptation::GetFixedExposure(undefined8 param_1)

{
  float fVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  float local_50;
  float local_4c;
  float local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_4c = 1.0;
  local_50 = 0.0;
  local_48 = 0.0;
  FUN_141c452f0(3,param_1,local_58);
  fVar1 = (local_50 + local_4c) * 0.5;
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  return local_48 / fVar1;
}



// FUNCTION 141c499e0 FUN_141c499e0 body=320 status=ok
// SIG undefined FUN_141c499e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141c499e0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a54e20 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141c49b20;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a54e20 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a54e20 = 0;
        return _DAT_00000030;
      }
      DAT_146a54e20 =
           TStaticStateRHI<TStaticSamplerState<1,3,3,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a54e20 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<1,3,3,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a54e20 != 0) {
      lVar7 = DAT_146a54e20;
    }
    DAT_146a54e20 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a54e20 + 0x30);
}



// FUNCTION 141c49b30 GetRTRef body=229 status=ok
// SIG undefined GetRTRef(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FSceneViewState::FEyeAdaptationRTManager::GetRTRef
                   (longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + ((longlong)param_3 + 2) * 8;
  if ((*(longlong *)(param_1 + ((longlong)param_3 + 2) * 8) == 0) && (param_2 != 0)) {
    local_58 = DAT_146ab6938;
    local_54 = 1;
    local_68 = _DAT_146ab6928;
    uStack_64 = uRam0000000146ab692c;
    uStack_60 = uRam0000000146ab6930;
    uStack_5c = uRam0000000146ab6934;
    local_50 = 1;
    local_48 = 1;
    local_40 = 1;
    local_44 = 0x10000;
    local_3c = 0x11;
    local_30 = 0;
    local_28 = L"UnknownTexture2D";
    local_20 = 1;
    local_34 = 1;
    if (2 < DAT_1464c9c14) {
      local_34 = 0x10001;
    }
    local_78 = 0;
    local_80 = 1;
    local_88 = L"EyeAdaptation";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_68,lVar1);
  }
  return lVar1;
}



// FUNCTION 141c49c20 FUN_141c49c20 body=88 status=ok
// SIG undefined FUN_141c49c20(void)

bool FUN_141c49c20(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146a51ea8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 141c49c80 FUN_141c49c80 body=1730 status=ok
// SIG undefined FUN_141c49c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141c49c80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int *piVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1c8 [32];
  float *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  int *local_190;
  undefined1 local_188;
  char local_178;
  float local_170;
  float local_16c;
  int local_168;
  int iStack_164;
  int local_160;
  int local_15c;
  longlong *local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128 [2];
  int local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  undefined4 local_f4;
  short local_f0;
  undefined8 local_ec;
  int local_e4;
  char local_e0;
  wchar_t *local_d8;
  undefined2 local_d0;
  int local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  wchar_t *local_88;
  undefined2 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar13 = *param_2;
  lVar18 = *(longlong *)(lVar13 + 0x14f0);
  lVar5 = *(longlong *)(lVar13 + 0x18);
  if (lVar18 == 0) {
    lVar18 = *(longlong *)(DAT_146b17150 + 0x388);
  }
  local_170 = *(float *)(lVar13 + 0x14fc);
  fVar2 = *(float *)(lVar13 + 0x14f8);
  local_16c = *(float *)(lVar13 + 0x1500);
  fVar20 = *(float *)(lVar13 + 0x151c);
  if (0.0 <= fVar20) {
    if (1.0 <= fVar20) {
      fVar20 = 1.0;
    }
  }
  else {
    fVar20 = 0.0;
  }
  fVar21 = 0.0;
  if ((0.0 <= fVar2) && (fVar21 = fVar2, 1.0 <= fVar2)) {
    fVar21 = 1.0;
  }
  local_158 = param_2;
  FUN_141c4a3c0(param_1,param_2,fVar21,fVar20);
  if ((((*(char *)((longlong)param_1 + 0xe9) == '\0') || (lVar5 == 0)) || (lVar18 == 0)) ||
     (*(longlong *)(lVar18 + 0x60) == 0)) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  uVar10 = FUN_141b66eb0();
  if (uVar3 <= uVar10) {
    FUN_141b66eb0();
  }
  if ((char)param_1[0x1d] == '\0') {
    local_148 = 0;
    uStack_144 = 2;
    local_104 = 0;
    local_100 = 2;
  }
  else {
    local_150 = 2;
    local_104 = 2;
    local_100 = 0;
  }
  plVar1 = (longlong *)(lVar5 + 0x12c8);
  bVar9 = true;
  iStack_164 = (int)((ulonglong)param_1[0x1c] >> 0x20);
  local_104 = (int)param_1[0x1c] + local_104;
  local_118 = _DAT_146ab6928;
  fStack_114 = fRam0000000146ab692c;
  fStack_110 = fRam0000000146ab6930;
  fStack_10c = fRam0000000146ab6934;
  local_fc = 0;
  local_f4 = 0x10000;
  local_e4 = 0x10001;
  local_e0 = '\0';
  local_d0 = 1;
  local_100 = iStack_164 + local_100;
  _local_168 = CONCAT44(local_100,local_104);
  local_108 = DAT_146ab6938;
  local_f8 = 1;
  local_f0 = 1;
  local_ec = 1;
  local_d8 = L"UnknownTexture2D";
  local_160 = (int)param_1[0x1b] - (int)param_1[0x1a];
  lVar13 = *(longlong *)(lVar5 + 0x12d8);
  fVar20 = *(float *)(lVar5 + 0x12e0);
  local_15c = *(int *)((longlong)param_1 + 0xdc) - *(int *)((longlong)param_1 + 0xd4);
  if ((longlong *)*plVar1 == (longlong *)0x0) goto LAB_141c4a032;
  piVar11 = (int *)(**(code **)(*(longlong *)*plVar1 + 0x10))();
  if ((((piVar11[5] == local_104) && (piVar11[6] == local_100)) &&
      ((piVar11[7] == local_fc &&
       (((char)piVar11[9] == (char)local_f4 &&
        (*(char *)((longlong)piVar11 + 0x25) == local_f4._1_1_)))))) &&
     ((piVar11[8] == local_f8 &&
      (((((*(short *)((longlong)piVar11 + 0x26) == local_f4._2_2_ &&
          ((short)piVar11[10] == local_f0)) && (piVar11[0xb] == (int)local_ec)) &&
        (((piVar11[0xc] & 0xffefffffU) == (local_ec._4_4_ & 0xffefffff) &&
         (piVar11[0xd] == local_e4)))) &&
       (((char)piVar11[0xe] == local_e0 && (iVar4 = *piVar11, iVar4 == local_118)))))))) {
    if (iVar4 == 1) {
      if (((fStack_114 == (float)piVar11[1]) && (fStack_110 == (float)piVar11[2])) &&
         (fStack_10c == (float)piVar11[3])) {
        bVar19 = local_108 == (float)piVar11[4];
LAB_141c49f7d:
        if (bVar19) goto LAB_141c49f7f;
      }
      goto LAB_141c49f8d;
    }
    if (iVar4 == 2) {
      if (fStack_114 == (float)piVar11[1]) {
        bVar19 = (float)piVar11[2] == fStack_110;
        goto LAB_141c49f7d;
      }
      goto LAB_141c49f8d;
    }
LAB_141c49f7f:
    if ((char)piVar11[0x12] != (char)local_d0) goto LAB_141c49f8d;
    bVar19 = true;
  }
  else {
LAB_141c49f8d:
    bVar19 = false;
  }
  if ((local_160 == *(int *)(lVar5 + 0x12e4)) && (local_15c == *(int *)(lVar5 + 0x12e8))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((1e-06 < ABS(*(float *)(lVar5 + 0x12ec) - local_170)) ||
     (1e-06 < ABS(*(float *)(lVar5 + 0x12f0) - local_16c))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((lVar13 == lVar18) &&
     (*(int *)(lVar5 + 0x12f4) == *(int *)(*(longlong *)(lVar18 + 0x60) + 0x78))) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((((lVar13 == lVar18) && (bVar19)) && (ABS(fVar20 - fVar2) <= 1e-06)) &&
     (((bVar6 && (bVar7)) && (bVar9 = true, bVar8)))) {
    bVar9 = false;
  }
LAB_141c4a032:
  uVar12 = (**(code **)(*param_1 + 8))(param_1,1);
  lVar13 = FHardwareCursor::GetHandle(uVar12);
  local_188 = lVar13 != 0;
  if (bVar9) {
    local_198 = (longlong *)CONCAT71(local_198._1_7_,1);
    local_1a0 = (longlong *)CONCAT71(local_1a0._1_7_,1);
    local_1a8 = (float *)0x144e15758;
    local_178 = local_188;
    FUN_141ce20b0(&PTR_PTR_1464c2560,local_158[8],&local_118,plVar1);
    plVar17 = local_158;
    local_130 = *plVar1;
    plVar15 = (longlong *)(local_130 + 0x18);
    local_138 = local_130 + 8;
    local_128[0] = *plVar15;
    if (local_128[0] != 0) {
      LOCK();
      *(int *)(local_128[0] + 8) = *(int *)(local_128[0] + 8) + 1;
      UNLOCK();
    }
    local_190 = &local_168;
    local_150 = *(longlong *)(lVar18 + 0x60) + 0x30;
    local_1a0 = param_1 + 0x1c;
    local_1a8 = (float *)CONCAT44(local_1a8._4_4_,fVar21);
    local_198 = plVar15;
    FUN_141c58c30(local_158,local_150,&local_160,&local_170);
    local_140 = *plVar15;
    lVar13 = plVar17[8];
    plVar17 = (longlong *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar15 = plVar17 + 1;
    if (*(longlong **)(lVar13 + 0x38) < plVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x10);
      plVar17 = (longlong *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar15 = plVar17 + 1;
    }
    *(longlong **)(lVar13 + 0x30) = plVar15;
    *plVar17 = local_140;
    puVar16 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar16 + 6;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar14) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x38);
      puVar16 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar16 + 6;
    }
    plVar15 = local_158;
    *(undefined8 **)(lVar13 + 0x30) = puVar14;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar16;
    *(undefined8 **)(lVar13 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *(undefined4 *)(puVar16 + 2) = 1;
    *puVar16 = &PTR_LAB_144d91e60;
    puVar16[3] = plVar17;
    *(undefined4 *)(puVar16 + 4) = 2;
    *(undefined4 *)((longlong)puVar16 + 0x24) = 3;
    puVar16[5] = 0;
    FRCPassFFTBloom::TransformKernelFFT(param_1,local_158,local_138);
    if (local_178 != '\0') {
      local_b8 = DAT_146ab6938;
      local_198 = (longlong *)CONCAT71(local_198._1_7_,1);
      local_b0 = 1;
      local_a8 = 1;
      local_a0 = 1;
      local_9c = 1;
      local_88 = L"UnknownTexture2D";
      local_1a0 = (longlong *)CONCAT71(local_1a0._1_7_,1);
      local_1a8 = (float *)0x144e15800;
      local_c8 = _DAT_146ab6928;
      fStack_c4 = fRam0000000146ab692c;
      fStack_c0 = fRam0000000146ab6930;
      fStack_bc = fRam0000000146ab6934;
      local_b4 = 2;
      local_a4 = 0x10000;
      local_94 = 0x10001;
      local_90 = 0;
      local_80 = 1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,plVar15[8],&local_c8,(longlong *)(lVar5 + 0x12d0));
      local_1a8 = &local_170;
      local_1a0 = (longlong *)(lVar5 + 0x12d0);
      FUN_141c44e40(plVar15,local_130 + 0x10,&local_168,local_150);
    }
    *(float *)(lVar5 + 0x12e0) = fVar2;
    *(int *)(lVar5 + 0x12e4) = local_160;
    *(int *)(lVar5 + 0x12e8) = local_15c;
    *(longlong *)(lVar5 + 0x12d8) = lVar18;
    *(float *)(lVar5 + 0x12ec) = local_170;
    *(float *)(lVar5 + 0x12f0) = local_16c;
    *(undefined4 *)(lVar5 + 0x12f4) = *(undefined4 *)(*(longlong *)(lVar18 + 0x60) + 0x78);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
  }
  return *plVar1 + 8;
}



// FUNCTION 141c4a350 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<1,3,3,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x1030301;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141c4a3c0 FUN_141c4a3c0 body=647 status=ok
// SIG undefined FUN_141c4a3c0(void)

void FUN_141c4a3c0(longlong param_1,longlong param_2,float param_3,float param_4)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  int iStack_44;
  int iStack_3c;
  
  lVar9 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar9 != 0) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(lVar9 + 0x14);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(lVar9 + 0x18);
    uVar10 = (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))(*(longlong **)(param_2 + 0x28),0)
    ;
    lVar9 = FRenderingCompositeOutputRef::GetOutput(uVar10);
    plVar2 = *(longlong **)(lVar9 + 0x50);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    *(longlong **)(param_1 + 0xb8) = plVar2 + 1;
    uVar10 = FUN_141cf3cd0(param_1 + 0x30,param_2);
    *(undefined8 *)(param_1 + 0xc0) = uVar10;
    lVar9 = FSceneRenderTargets::Get(*(undefined8 *)(param_2 + 0x40));
    iVar16 = *(int *)(param_1 + 0xcc);
    iVar6 = iVar16 + -1 + (int)((ulonglong)*(undefined8 *)(lVar9 + 0x378) >> 0x20);
    iVar12 = iVar6 / iVar16;
    FSceneRenderTargets::Get
              (*(undefined8 *)(param_2 + 0x40),(longlong)iVar6 % (longlong)iVar16 & 0xffffffff);
    uVar3 = *(ulonglong *)(param_2 + 0x10);
    iVar16 = (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                  (longlong)iVar12);
    iStack_3c = (int)(uVar3 >> 0x20);
    uVar3 = *(ulonglong *)(param_2 + 8);
    uVar4 = (longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
            (longlong)iVar12;
    iStack_44 = (int)(uVar3 >> 0x20);
    *(int *)(param_1 + 0xd0) = (int)uVar4;
    *(int *)(param_1 + 0xd4) = iStack_44 / iVar12;
    *(int *)(param_1 + 0xd8) = iVar16;
    *(int *)(param_1 + 0xdc) = iStack_3c / iVar12;
    iVar6 = iStack_3c / iVar12 - *(int *)(param_1 + 0xd4);
    iVar16 = iVar16 - *(int *)(param_1 + 0xd0);
    if ((0.0 < param_4) && (param_4 <= param_3)) {
      param_3 = param_4;
    }
    fVar5 = param_3 * 0.5 * (float)iVar16;
    iVar13 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
    iVar7 = FUN_141b66eb0(uVar4 & 0xffffffff,(longlong)iStack_44 % (longlong)iVar12 & 0xffffffff);
    iVar12 = iVar6;
    if (iVar6 <= iVar16) {
      iVar12 = iVar16;
    }
    if ((iVar7 < iVar12 + iVar13) && (iVar12 < iVar7)) {
      iVar13 = iVar7 - iVar12;
    }
    uVar1 = iVar16 + iVar13;
    uVar14 = iVar13 + iVar6;
    iVar16 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar11 = '\0';
    iVar6 = iVar12;
    if (uVar14 != 0) {
      iVar6 = 0x1f - iVar16;
    }
    uVar8 = uVar14 - 1;
    iVar16 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    cVar15 = cVar11;
    if (uVar8 != 0) {
      cVar15 = '\x1f' - (char)iVar16;
    }
    iVar16 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar1 != 0) {
      iVar12 = 0x1f - iVar16;
    }
    uVar8 = uVar1 - 1;
    iVar16 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar11 = '\x1f' - (char)iVar16;
    }
    iVar12 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
    *(int *)(param_1 + 0xe0) = iVar12;
    iVar16 = 1 << (0x20U - cVar15 & ~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x1f);
    *(int *)(param_1 + 0xe4) = iVar16;
    *(undefined1 *)(param_1 + 0xe9) = 1;
    *(bool *)(param_1 + 0xe8) = (int)(iVar12 * uVar14) < (int)(iVar16 * uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
  }
  return;
}



// FUNCTION 141c4a650 FUN_141c4a650 body=285 status=ok
// SIG undefined FUN_141c4a650(void)

longlong FUN_141c4a650(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  while( true ) {
    if ((*(int *)(lVar1 + 0x38) < DAT_146a29948) &&
       (_Init_thread_header(&DAT_146a29948), DAT_146a29948 == -1)) {
      FName::FName(&DAT_146a29940,L"FPostProcessMaterialNode",1);
      _Init_thread_footer(&DAT_146a29948);
    }
    lVar2 = DAT_146a29940;
    lVar3 = *param_3;
    do {
      if (lVar3 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x798);
        lVar5 = lVar4;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x798);
        lVar5 = (ulonglong)*(uint *)(lVar3 + 0x14) + 0x18 +
                (ulonglong)*(uint *)(lVar3 + 0x10) + lVar3;
      }
      lVar3 = 0;
      if (lVar5 != *(int *)(param_1 + 0x7a0) + lVar4) {
        lVar3 = lVar5;
      }
      *param_3 = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    } while (*(longlong *)(lVar3 + 8) != lVar2);
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = (ulonglong)*(uint *)(lVar3 + 0x14) + 0x18 + lVar3;
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0xc) == param_2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 141c4a770 FUN_141c4a770 body=423 status=ok
// SIG undefined FUN_141c4a770(void)

int * FUN_141c4a770(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 1;
  lVar8 = 0;
  param_1[2] = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x1aa8);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 0x1aa0);
  *(undefined8 *)(param_1 + 5) = uVar3;
  iVar5 = *(int *)(param_2 + 0x1aa0);
  iVar9 = *(int *)(param_2 + 0x1aa4);
  iVar1 = *(int *)(param_2 + 0x1aa8);
  iVar2 = *(int *)(param_2 + 0x1aac);
  param_1[0xb] = 1;
  param_1[7] = iVar5;
  param_1[8] = iVar9;
  param_1[9] = iVar1;
  param_1[10] = iVar2;
  bVar10 = *(int *)(param_2 + 0x1a14) != 1;
  iVar5 = 1;
  if (!bVar10) {
    iVar5 = 4;
  }
  *param_1 = iVar5;
  if (bVar10) {
    if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(param_2 + 0x1a38) < 3)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 5) = uVar4;
  param_1[3] = *(int *)(param_2 + 0x1aa0);
  param_1[4] = *(int *)(param_2 + 0x1aa4);
  param_1[5] = *(int *)(param_2 + 0x1aa8);
  param_1[6] = *(int *)(param_2 + 0x1aac);
  if ((*param_1 - 4U & 0xfffffffd) == 0) {
    param_1[7] = 0;
    param_1[8] = 0;
    piVar6 = (int *)FUN_141d6a140(param_2,local_res8);
    param_1[9] = *piVar6;
    param_1[10] = piVar6[1];
  }
  else {
    param_1[7] = param_1[3];
    param_1[8] = param_1[4];
    param_1[9] = param_1[5];
    param_1[10] = param_1[6];
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a54d78) {
    _Init_thread_header(&DAT_146a54d78);
    if (DAT_146a54d78 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PostProcessAAQuality");
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_146a54d70 = lVar8;
      _Init_thread_footer(&DAT_146a54d78);
    }
  }
  iVar5 = *(int *)(DAT_146a54d70 + 4);
  iVar9 = 1;
  if ((0 < iVar5) && (iVar9 = 6, iVar5 < 6)) {
    iVar9 = iVar5;
  }
  *(bool *)(param_1 + 1) = iVar9 == 3;
  return param_1;
}



// FUNCTION 141c4a920 ModifyCompilationEnvironment body=125 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFRecombinePS<1,1,1>::ModifyCompilationEnvironment
               (undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"FAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SEPARATE_TRANSLUCENCY",1);
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  return;
}



// FUNCTION 141c4a9a0 ModifyCompilationEnvironment body=122 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFRecombinePS<1,1,0>::ModifyCompilationEnvironment
               (undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"FAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SEPARATE_TRANSLUCENCY",0);
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  return;
}



// FUNCTION 141c4aa20 ModifyCompilationEnvironment body=122 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFRecombinePS<1,0,1>::ModifyCompilationEnvironment
               (undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"FAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SEPARATE_TRANSLUCENCY",1);
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  return;
}



// FUNCTION 141c4aaa0 ModifyCompilationEnvironment body=119 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFRecombinePS<1,0,0>::ModifyCompilationEnvironment
               (undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"FAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SEPARATE_TRANSLUCENCY",0);
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  return;
}



// FUNCTION 141c4ab20 ModifyCompilationEnvironment body=122 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFRecombinePS<0,1,1>::ModifyCompilationEnvironment
               (undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"FAR_BLUR",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SEPARATE_TRANSLUCENCY",1);
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  return;
}



// FUNCTION 141c4aba0 ModifyCompilationEnvironment body=119 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFRecombinePS<0,1,0>::ModifyCompilationEnvironment
               (undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"FAR_BLUR",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SEPARATE_TRANSLUCENCY",0);
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  return;
}



// FUNCTION 141c4ac20 ModifyCompilationEnvironment body=110 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFSetupPS<1,1>::ModifyCompilationEnvironment(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DOF_VIGNETTE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MRT_COUNT",2);
  return;
}



// FUNCTION 141c4ac90 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFSetupPS<1,2>::ModifyCompilationEnvironment(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DOF_VIGNETTE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MRT_COUNT",2);
  return;
}



// FUNCTION 141c4ad10 ModifyCompilationEnvironment body=107 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFSetupPS<1,0>::ModifyCompilationEnvironment(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DOF_VIGNETTE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MRT_COUNT",1);
  return;
}



// FUNCTION 141c4ad80 ModifyCompilationEnvironment body=110 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFSetupPS<0,1>::ModifyCompilationEnvironment(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DOF_VIGNETTE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MRT_COUNT",1);
  return;
}



// FUNCTION 141c4adf0 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDOFSetupPS<0,2>::ModifyCompilationEnvironment(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0x200;
  iVar1 = FUN_1419ef5f0(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MOBILE_SHADING",iVar1 < 2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"NEAR_BLUR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DOF_VIGNETTE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MRT_COUNT",1);
  return;
}



// FUNCTION 141c4ae70 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDownsampleCS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  return;
}



// FUNCTION 141c4aed0 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDownsampleCS<2>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",2);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  return;
}



// FUNCTION 141c4af30 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessDownsampleCS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  return;
}



// FUNCTION 141c4af80 FUN_141c4af80 body=60 status=ok
// SIG undefined FUN_141c4af80(void)

void FUN_141c4af80(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c4afc0 FUN_141c4afc0 body=57 status=ok
// SIG undefined FUN_141c4afc0(void)

void FUN_141c4afc0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c4b000 FUN_141c4b000 body=60 status=ok
// SIG undefined FUN_141c4b000(void)

void FUN_141c4b000(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c4b040 FUN_141c4b040 body=57 status=ok
// SIG undefined FUN_141c4b040(void)

void FUN_141c4b040(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c4b080 FUN_141c4b080 body=57 status=ok
// SIG undefined FUN_141c4b080(void)

void FUN_141c4b080(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c4b0c0 FUN_141c4b0c0 body=54 status=ok
// SIG undefined FUN_141c4b0c0(void)

void FUN_141c4b0c0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"METHOD",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c4b100 FUN_141c4b100 body=102 status=ok
// SIG undefined FUN_141c4b100(void)

void FUN_141c4b100(undefined8 param_1,undefined8 param_2)

{
  FUN_1404a3a40(param_2,L"INTERLEAVE_RESULT",&DAT_143f591f0);
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c2448);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c244c);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c2450);
  return;
}



// FUNCTION 141c4b170 FUN_141c4b170 body=80 status=ok
// SIG undefined FUN_141c4b170(void)

void FUN_141c4b170(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c2438);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c243c);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c2440);
  return;
}



// FUNCTION 141c4b1c0 FUN_141c4b1c0 body=124 status=ok
// SIG undefined FUN_141c4b1c0(void)

void FUN_141c4b1c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1404a3a40(param_2,L"COMBINE_LOWER_RESOLUTIONS",&DAT_143f591f0);
  FUN_1404a3a40(param_2,L"BLEND_WITH_HIGHER_RESOLUTION",&DAT_143f591f0);
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c2488);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c248c);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c2490);
  return;
}



// FUNCTION 141c4b240 FUN_141c4b240 body=102 status=ok
// SIG undefined FUN_141c4b240(void)

void FUN_141c4b240(undefined8 param_1,undefined8 param_2)

{
  FUN_1404a3a40(param_2,L"BLEND_WITH_HIGHER_RESOLUTION",&DAT_143f591f0);
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c2478);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c247c);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c2480);
  return;
}



// FUNCTION 141c4b2b0 FUN_141c4b2b0 body=102 status=ok
// SIG undefined FUN_141c4b2b0(void)

void FUN_141c4b2b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1404a3a40(param_2,L"COMBINE_LOWER_RESOLUTIONS",&DAT_143f591f0);
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c2468);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c246c);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c2470);
  return;
}



// FUNCTION 141c4b320 FUN_141c4b320 body=80 status=ok
// SIG undefined FUN_141c4b320(void)

void FUN_141c4b320(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c2458);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c245c);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c2460);
  return;
}



// FUNCTION 141c4b370 ModifyCompilationEnvironment body=98 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessBuildHCBPS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"STAGE",1);
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 10;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141c4b3e0 ModifyCompilationEnvironment body=95 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessBuildHCBPS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"STAGE",0);
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 10;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141c4b440 FUN_141c4b440 body=60 status=ok
// SIG undefined FUN_141c4b440(void)

void FUN_141c4b440(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"EYE_ADAPTATION_PARAMS_SIZE",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREAD_COUNT",0x100);
  return;
}



// FUNCTION 141c4b480 FUN_141c4b480 body=60 status=ok
// SIG undefined FUN_141c4b480(void)

void FUN_141c4b480(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"EYE_ADAPTATION_PARAMS_SIZE",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREAD_COUNT",0x200);
  return;
}



// FUNCTION 141c4b4c0 FUN_141c4b4c0 body=60 status=ok
// SIG undefined FUN_141c4b4c0(void)

void FUN_141c4b4c0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"EYE_ADAPTATION_PARAMS_SIZE",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREAD_COUNT",0x40);
  return;
}



// FUNCTION 141c4b500 FUN_141c4b500 body=60 status=ok
// SIG undefined FUN_141c4b500(void)

void FUN_141c4b500(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"EYE_ADAPTATION_PARAMS_SIZE",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREAD_COUNT",0x400);
  return;
}



// FUNCTION 141c4b540 FUN_141c4b540 body=60 status=ok
// SIG undefined FUN_141c4b540(void)

void FUN_141c4b540(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"EYE_ADAPTATION_PARAMS_SIZE",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREAD_COUNT",0x80);
  return;
}



// FUNCTION 141c4b580 ModifyCompilationEnvironment body=56 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FBlendLowResCS::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_BLEND_LOW_RES",1);
  FUN_141a172f0(param_2,L"THREADS_PER_GROUP",0x20);
  return;
}



// FUNCTION 141c4b5e0 FUN_141c4b5e0 body=80 status=ok
// SIG undefined FUN_141c4b5e0(void)

void FUN_141c4b5e0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c23e8);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c23ec);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c23f0);
  return;
}



// FUNCTION 141c4b630 FUN_141c4b630 body=80 status=ok
// SIG undefined FUN_141c4b630(void)

void FUN_141c4b630(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c23d8);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c23dc);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c23e0);
  return;
}



// FUNCTION 141c4b680 FUN_141c4b680 body=58 status=ok
// SIG undefined FUN_141c4b680(void)

void FUN_141c4b680(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",(undefined4)DAT_1464c23f8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c23f8._4_4_);
  return;
}



// FUNCTION 141c4b6c0 ModifyCompilationEnvironment body=56 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPassThroughCS::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_PASSTHROUGH",1);
  FUN_141a172f0(param_2,L"THREADS_PER_GROUP",0x20);
  return;
}



// FUNCTION 141c4b720 ModifyCompilationEnvironment body=97 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessEyeAdaptationCS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 1;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"EYE_ADAPTATION_PARAMS_SIZE",4);
  return;
}



// FUNCTION 141c4b790 ModifyCompilationEnvironment body=209 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessHistogramCS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUP_SIZEX",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUP_SIZEY",4);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"LOOP_SIZEX",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"LOOP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"HISTOGRAM_SIZE",0x40);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"EYE_ADAPTATION_PARAMS_SIZE",4);
  iVar2 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar2 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar2 * 4) = 4;
  return;
}



// FUNCTION 141c4b870 ModifyCompilationEnvironment body=56 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FResizeAndCenterTextureCS::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_RESIZE_AND_CENTER",1);
  FUN_141a172f0(param_2,L"THREADS_PER_GROUP",0x20);
  return;
}



// FUNCTION 141c4b8b0 OverrideRenderTarget body=274 status=ok
// SIG undefined OverrideRenderTarget(void)

void OverrideRenderTarget(undefined4 *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  
  while( true ) {
    lVar6 = FRenderingCompositeOutputRef::GetOutput(param_1);
    plVar8 = (longlong *)*param_2;
    plVar1 = *(longlong **)(lVar6 + 0x50);
    *(longlong **)(lVar6 + 0x50) = plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
    puVar7 = (undefined4 *)FRenderingCompositeOutputRef::GetOutput(param_1);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *puVar7 = *param_3;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    puVar7[4] = param_3[4];
    puVar7[5] = param_3[5];
    puVar7[6] = param_3[6];
    puVar7[7] = param_3[7];
    puVar7[8] = param_3[8];
    *(undefined1 *)(puVar7 + 9) = *(undefined1 *)(param_3 + 9);
    *(undefined1 *)((longlong)puVar7 + 0x25) = *(undefined1 *)((longlong)param_3 + 0x25);
    *(undefined2 *)((longlong)puVar7 + 0x26) = *(undefined2 *)((longlong)param_3 + 0x26);
    *(undefined2 *)(puVar7 + 10) = *(undefined2 *)(param_3 + 10);
    puVar7[0xb] = param_3[0xb];
    puVar7[0xc] = param_3[0xc];
    puVar7[0xd] = param_3[0xd];
    *(undefined1 *)(puVar7 + 0xe) = *(undefined1 *)(param_3 + 0xe);
    *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined1 *)(puVar7 + 0x12) = *(undefined1 *)(param_3 + 0x12);
    *(undefined1 *)((longlong)puVar7 + 0x49) = *(undefined1 *)((longlong)param_3 + 0x49);
    plVar8 = (longlong *)FHardwareCursor::GetHandle(param_1);
    cVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
    if (cVar5 == '\0') break;
    plVar8 = (longlong *)FHardwareCursor::GetHandle(param_1);
    puVar7 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8,0);
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    *param_1 = *puVar7;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  return;
}



// FUNCTION 141c4b9d0 FUN_141c4b9d0 body=14572 status=ok
// SIG undefined FUN_141c4b9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141c4b9d0(longlong *******param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  longlong ******param_5)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  DWORD DVar13;
  longlong lVar14;
  longlong lVar15;
  longlong ******pppppplVar16;
  longlong *******ppppppplVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *******ppppppplVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  int *piVar23;
  undefined8 uVar24;
  longlong *plVar25;
  undefined8 **ppuVar26;
  longlong *plVar27;
  undefined4 *puVar28;
  longlong *****ppppplVar29;
  longlong lVar30;
  int iVar31;
  undefined8 *puVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined1 uVar35;
  int iVar36;
  int iVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_cc8 [32];
  longlong *******local_ca8;
  longlong *******local_ca0;
  longlong *******local_c98;
  char local_c88 [8];
  undefined8 local_c80;
  undefined8 local_c78;
  float fStack_c70;
  uint uStack_c6c;
  char local_c68;
  undefined2 local_c64;
  longlong local_c60;
  longlong *local_c58;
  longlong local_c50;
  undefined8 local_c40;
  longlong *******local_c38;
  undefined1 *puStack_c30;
  undefined1 local_c28;
  undefined1 local_c27;
  undefined1 local_c26;
  undefined1 local_c25;
  undefined1 local_c24;
  undefined1 local_c23;
  undefined1 local_c22;
  undefined1 local_c21;
  char local_c20 [5];
  undefined1 local_c1b;
  undefined1 local_c1a;
  undefined1 local_c19;
  undefined1 local_c18;
  undefined1 local_c17;
  undefined1 local_c16;
  undefined1 local_c15;
  undefined1 local_c14;
  undefined1 local_c13;
  undefined1 local_c12;
  undefined1 local_c11;
  undefined1 local_c10;
  undefined1 local_c0f;
  undefined1 local_c0e;
  char local_c0d [21];
  longlong *******local_bf8;
  undefined8 uStack_bf0;
  longlong local_be8;
  undefined8 uStack_be0;
  longlong local_bd8;
  undefined8 uStack_bd0;
  uint local_bc8;
  uint local_bc0 [2];
  longlong *local_bb8;
  longlong *******local_bb0;
  undefined4 uStack_ba8;
  uint uStack_ba4;
  longlong local_ba0;
  longlong *aplStack_b98 [2];
  longlong *******local_b88;
  undefined8 uStack_b80;
  longlong local_b78;
  ulonglong uStack_b70;
  longlong local_b68;
  longlong *******local_b58;
  undefined8 uStack_b50;
  longlong local_b48;
  longlong local_b40;
  uint local_b38 [2];
  longlong *local_b30;
  undefined8 uStack_b28;
  longlong *******local_b18;
  undefined8 uStack_b10;
  longlong *******local_b08;
  undefined8 uStack_b00;
  longlong *local_af8;
  undefined1 *puStack_af0;
  longlong local_ae8;
  undefined8 uStack_ae0;
  longlong *local_ad8;
  undefined8 uStack_ad0;
  float local_ac8 [4];
  undefined8 *local_ab8;
  undefined8 local_ab0;
  longlong local_aa8;
  char local_aa0;
  undefined8 local_a98;
  int local_a90;
  int local_a8c;
  longlong *local_a88;
  undefined8 uStack_a80;
  longlong *local_a78;
  undefined4 uStack_a70;
  uint uStack_a6c;
  longlong local_a68;
  undefined4 uStack_a60;
  uint uStack_a5c;
  longlong *local_a58;
  undefined8 uStack_a50;
  float local_a48;
  float local_a44;
  float local_a40;
  undefined4 local_a3c;
  float local_a38;
  float local_a34;
  float local_a30;
  undefined4 local_a2c;
  float local_a28;
  float local_a24;
  float local_a20;
  undefined4 local_a1c;
  undefined8 local_a18;
  undefined *local_a08;
  char *pcStack_a00;
  undefined *local_9f8;
  char *pcStack_9f0;
  undefined *local_9e8;
  undefined1 *puStack_9e0;
  undefined *local_9d8;
  undefined1 *puStack_9d0;
  longlong local_9c8;
  undefined4 local_9c0;
  undefined *local_9b8;
  undefined1 *puStack_9b0;
  undefined *local_9a8;
  undefined1 *puStack_9a0;
  undefined8 local_998;
  undefined4 local_990;
  undefined *local_988;
  undefined1 *puStack_980;
  undefined *local_978;
  undefined1 *puStack_970;
  undefined8 local_968;
  undefined4 local_960;
  undefined *local_958;
  undefined1 *puStack_950;
  undefined8 local_948;
  undefined4 local_940;
  longlong *local_938;
  longlong lStack_930;
  undefined *local_928;
  char *pcStack_920;
  undefined *local_918;
  char *pcStack_910;
  longlong local_908;
  undefined4 local_900;
  undefined *local_8f8;
  char *pcStack_8f0;
  undefined *local_8e8;
  char *pcStack_8e0;
  undefined *local_8d8;
  char *pcStack_8d0;
  longlong *******local_8c8;
  undefined8 uStack_8c0;
  undefined *local_8b8;
  undefined1 *puStack_8b0;
  longlong *******local_8a8;
  undefined4 local_8a0;
  undefined *local_898;
  undefined1 *puStack_890;
  undefined *local_888;
  undefined1 *puStack_880;
  undefined *local_878;
  undefined1 *puStack_870;
  undefined *local_868;
  undefined1 *puStack_860;
  undefined *local_858;
  undefined1 *puStack_850;
  undefined *local_848;
  undefined1 *puStack_840;
  longlong *local_838;
  longlong lStack_830;
  undefined *local_828;
  undefined1 *puStack_820;
  longlong *local_818;
  longlong lStack_810;
  undefined *local_808;
  undefined1 *puStack_800;
  longlong *local_7f8;
  longlong lStack_7f0;
  undefined *local_7e8;
  undefined1 *puStack_7e0;
  undefined *local_7d8;
  char *pcStack_7d0;
  undefined *local_7c8;
  undefined1 *puStack_7c0;
  undefined *local_7b8;
  undefined1 *puStack_7b0;
  undefined *local_7a8;
  undefined1 *puStack_7a0;
  undefined *local_798;
  char *pcStack_790;
  undefined *local_788;
  char *pcStack_780;
  undefined *local_778;
  char *pcStack_770;
  undefined *local_768;
  char *pcStack_760;
  undefined *local_758;
  char *pcStack_750;
  longlong *local_748;
  undefined2 *local_740;
  longlong *local_738;
  longlong *local_730;
  undefined2 *local_728;
  longlong *local_720;
  undefined8 local_718;
  longlong lStack_710;
  undefined8 local_708;
  longlong lStack_700;
  undefined8 local_6f8;
  ulonglong uStack_6f0;
  longlong local_6e8;
  ulonglong uStack_6e0;
  undefined *local_6d8;
  char *pcStack_6d0;
  undefined *local_6c8;
  undefined1 *puStack_6c0;
  undefined *local_6b8;
  undefined1 *puStack_6b0;
  undefined *local_6a8;
  undefined1 *puStack_6a0;
  longlong ******local_698;
  longlong lStack_690;
  longlong ******local_688;
  longlong lStack_680;
  longlong ******local_678;
  longlong lStack_670;
  longlong local_668;
  ulonglong uStack_660;
  undefined *local_658;
  undefined1 *puStack_650;
  undefined *local_648;
  undefined1 *puStack_640;
  undefined *local_638;
  undefined1 *puStack_630;
  undefined *local_628;
  undefined1 *puStack_620;
  undefined *local_618;
  undefined1 *puStack_610;
  undefined *local_608;
  char *pcStack_600;
  undefined *local_5f8;
  char *pcStack_5f0;
  longlong ******local_5e8;
  longlong lStack_5e0;
  longlong ******local_5d8;
  longlong lStack_5d0;
  longlong ******local_5c8;
  longlong lStack_5c0;
  undefined8 local_5b8;
  longlong lStack_5b0;
  undefined *local_5a8;
  char *pcStack_5a0;
  undefined *local_598;
  char *pcStack_590;
  longlong *******local_588;
  undefined1 *puStack_580;
  undefined *local_578;
  char *pcStack_570;
  undefined *local_568;
  undefined1 *puStack_560;
  longlong *******local_558;
  longlong lStack_550;
  undefined1 local_548 [16];
  longlong *******local_538;
  longlong lStack_530;
  undefined *local_528;
  undefined1 *puStack_520;
  longlong *local_518;
  longlong lStack_510;
  longlong *******local_508;
  longlong lStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4d8 [16];
  undefined *local_4c8;
  undefined1 *puStack_4c0;
  undefined *local_4b8;
  undefined1 *puStack_4b0;
  undefined *local_4a8;
  undefined1 *puStack_4a0;
  undefined *local_498;
  undefined1 *puStack_490;
  undefined *local_488;
  undefined1 *puStack_480;
  longlong *local_478;
  longlong lStack_470;
  undefined *local_468;
  undefined1 *puStack_460;
  longlong ******local_458;
  undefined8 uStack_450;
  longlong *local_448;
  longlong lStack_440;
  undefined *local_438;
  undefined1 *puStack_430;
  longlong ******local_428;
  undefined8 uStack_420;
  longlong *local_418;
  longlong lStack_410;
  undefined *local_408;
  undefined1 *puStack_400;
  longlong *******local_3f8;
  undefined1 *puStack_3f0;
  undefined *local_3e8;
  char *pcStack_3e0;
  longlong *******local_3d8;
  undefined1 *puStack_3d0;
  undefined *local_3c8;
  undefined1 *puStack_3c0;
  longlong *******local_3b8;
  undefined1 *puStack_3b0;
  undefined *local_3a8;
  undefined1 *puStack_3a0;
  undefined *local_398;
  undefined1 *puStack_390;
  longlong *******local_388;
  longlong lStack_380;
  longlong *******local_378;
  undefined1 *puStack_370;
  longlong *******local_368;
  undefined1 *puStack_360;
  longlong local_358;
  ulonglong uStack_350;
  undefined *local_348;
  undefined1 *puStack_340;
  longlong *******local_338;
  undefined1 *puStack_330;
  longlong *******local_328;
  undefined1 *puStack_320;
  undefined *local_318;
  char *pcStack_310;
  longlong *******local_308;
  undefined1 *puStack_300;
  longlong *******local_2f8;
  undefined1 *puStack_2f0;
  undefined *local_2e8;
  char *pcStack_2e0;
  longlong *******local_2d8;
  undefined1 *puStack_2d0;
  undefined *local_2c8;
  char *pcStack_2c0;
  longlong *******local_2b8;
  undefined1 *puStack_2b0;
  longlong *******local_2a8;
  undefined1 *puStack_2a0;
  undefined1 local_298 [16];
  undefined *local_288;
  char *pcStack_280;
  undefined *local_278;
  char *pcStack_270;
  undefined1 local_268 [8];
  undefined1 local_260 [5];
  char local_25b;
  char local_25a;
  undefined4 local_258;
  undefined *local_228;
  char *pcStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  longlong local_1a8 [6];
  undefined1 local_178 [64];
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 local_100;
  wchar_t *local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_cc8;
  iVar31 = *(int *)(param_3 + 0x1a38);
  lVar15 = 0;
  local_bc8 = 0;
  local_c80 = CONCAT44(local_c80._4_4_,iVar31);
  local_bb0 = param_1;
  local_a18 = param_2;
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
  pcStack_760 = local_c0d + 3;
  local_c0d[3] = 0;
  local_768 = &DAT_14060d670;
  local_228 = &DAT_14060d670;
  pcStack_220 = pcStack_760;
  lVar14 = FUN_1415d8310(&local_228,&DAT_146216a38);
  local_ab8 = (undefined8 *)(lVar14 + 0x18);
  local_ab0 = *local_ab8;
  local_aa8 = *(longlong *)(lVar14 + 0x28);
  local_aa0 = '\0';
  local_a98 = *(undefined8 *)(lVar14 + 0x30);
  *(undefined8 ***)(lVar14 + 0x30) = &local_ab8;
  *(int *)(lVar14 + 0x38) = *(int *)(lVar14 + 0x38) + 1;
  FUN_141cd7760(local_1a8,param_2,param_3);
  FUN_141c40530(&local_c60,param_2,local_178,param_3);
  bVar2 = *(byte *)(param_3 + 0x157c);
  local_8c8 = (longlong *******)0x0;
  uStack_8c0 = (ulonglong)uStack_8c0._4_4_ << 0x20;
  local_ad8 = (longlong *)0x0;
  uStack_ad0 = (ulonglong)uStack_ad0._4_4_ << 0x20;
  local_b18 = (longlong *******)0x0;
  uStack_b10 = (undefined1 *)((ulonglong)uStack_b10._4_4_ << 0x20);
  iVar36 = *(int *)(DAT_146a50a98 + 4);
  local_b08 = (longlong *******)0x0;
  uStack_b00 = (undefined1 *)((ulonglong)uStack_b00._4_4_ << 0x20);
  local_b38[0] = (uint)bVar2;
  if (-1 < iVar36) {
    if (iVar36 == 1) {
      local_b38[0] = 0;
    }
    else {
      local_b38[0] = 1;
      if ((iVar36 != 2) && (local_b38[0] = 2, iVar36 != 3)) {
        if (iVar36 == 4) {
          local_b38[0] = (uint)bVar2;
          if (bVar2 == 0) {
            local_b38[0] = 1;
          }
        }
        else {
          local_b38[0] = 3;
        }
      }
    }
  }
  local_b30 = (longlong *)0x0;
  uStack_b28 = (ulonglong)uStack_b28._4_4_ << 0x20;
  local_be8 = 0;
  uStack_be0 = (ulonglong)uStack_be0._4_4_ << 0x20;
  local_a88 = (longlong *)0x0;
  uStack_a80 = (ulonglong)uStack_a80._4_4_ << 0x20;
  FUN_141cd8970(local_ac8,param_3);
  local_bc0[0] = *(uint *)(param_3 + 0xf60);
  local_b40 = *(longlong *)(local_c50 + 0x18);
  lVar14 = FSceneRenderTargets::Get(param_2);
  if (*(longlong *)(lVar14 + 0x210) != 0) {
    pcStack_750 = local_c0d + 4;
    local_c0d[4] = 0;
    local_758 = &DAT_14060d670;
    local_288 = &DAT_14060d670;
    pcStack_280 = pcStack_750;
    lVar14 = FUN_1415d8310(&local_288,&DAT_146216a38);
    lVar14 = operator_new(0xb0,lVar14 + 0x18,1);
    if (lVar14 != 0) {
      lVar15 = FSceneRenderTargets::Get(param_2);
      lVar15 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar14,lVar15 + 0x210);
    }
    plVar25 = local_c58;
    iVar31 = (int)local_c58[1];
    *(int *)(local_c58 + 1) = iVar31 + 1;
    if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
    }
    *(longlong *)(*plVar25 + (longlong)iVar31 * 8) = lVar15;
    uStack_bd0 = (ulonglong)uStack_bd0._4_4_ << 0x20;
    uStack_be0 = uStack_bd0;
    local_be8 = lVar15;
    local_bd8 = lVar15;
    if (*(longlong *)
         (**(longlong **)(param_3 + 0x10) + -8 +
         (longlong)(int)(*(longlong **)(param_3 + 0x10))[1] * 8) == param_3) {
      lVar14 = FSceneRenderTargets::Get(param_2);
      plVar25 = *(longlong **)(lVar14 + 0x210);
      *(undefined8 *)(lVar14 + 0x210) = 0;
      if (plVar25 != (longlong *)0x0) {
        (**(code **)(*plVar25 + 0x30))();
      }
    }
    iVar31 = (int)local_c80;
  }
  if ((DAT_146ab632a == '\0') || (cVar10 = FUN_141ee41d0(), cVar10 == '\0')) {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x01';
  }
  local_b48 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_c68 = cVar10;
  if ((*(int *)(local_b48 + 0x38) < DAT_146a54db8) &&
     (_Init_thread_header(&DAT_146a54db8), DAT_146a54db8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar25 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))
                        (DAT_1468b1f88,L"r.BufferVisualizationDumpFramesAsHDR");
    lVar14 = 0;
    if (plVar25 != (longlong *)0x0) {
      lVar14 = (**(code **)(*plVar25 + 0x38))(plVar25);
    }
    DAT_146a54db0 = lVar14;
    _Init_thread_footer(&DAT_146a54db8);
  }
  if ((iVar31 < 2) ||
     (((lVar14 = FUN_1424f49c0(), *(char *)(lVar14 + 0x41) == '\0' &&
       (*(int *)(DAT_146a54db0 + 4) == 0)) && (cVar10 == '\0')))) {
    local_c88[0] = '\0';
  }
  else {
    local_c88[0] = '\x01';
  }
  lVar14 = 0;
  local_b68 = 0;
  local_ae8 = 0;
  uStack_ae0 = (ulonglong)uStack_ae0._4_4_ << 0x20;
  local_b88 = (longlong *******)0x0;
  uStack_b80 = (ulonglong)uStack_b80._4_4_ << 0x20;
  if ((*(char *)(param_3 + 0x1a98) == '\0') ||
     ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x28) & 1) == 0)) {
    if (local_be8 != 0) {
      if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(local_c50 + 0x1a38) < 3)) {
        uVar22 = 0;
      }
      else {
        uVar22 = 1;
      }
      puStack_7c0 = &local_c10;
      local_c10 = 0;
      local_7c8 = &DAT_14060d670;
      local_3a8 = &DAT_14060d670;
      puStack_3a0 = puStack_7c0;
      lVar15 = FUN_1415d8310(&local_3a8,&DAT_146216a38);
      lVar19 = operator_new(0xd0,lVar15 + 0x18,1,0);
      lVar15 = lVar14;
      if (lVar19 != 0) {
        lVar15 = FRCPassPostProcessBokehDOFRecombine::FRCPassPostProcessBokehDOFRecombine
                           (lVar19,uVar22);
      }
      ppppppplVar20 =
           (longlong *******)
           FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                     (local_c58,lVar15);
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_c38);
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,2,&local_be8);
      uStack_b50 = (undefined1 *)((ulonglong)uStack_b50._4_4_ << 0x20);
      puStack_c30 = uStack_b50;
      local_c38 = ppppppplVar20;
      local_b58 = ppppppplVar20;
    }
    if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(local_c50 + 0x1a38) < 3)) {
      uVar35 = 0;
    }
    else {
      uVar35 = 1;
    }
    puStack_7b0 = &local_c0f;
    local_7b8 = &DAT_14060d670;
    local_398 = &DAT_14060d670;
    local_c0f = 0;
    puStack_390 = puStack_7b0;
    lVar15 = FUN_1415d8310(&local_398,&DAT_146216a38);
    lVar19 = operator_new(0xf0,lVar15 + 0x18,1,0);
    lVar15 = lVar14;
    if (lVar19 != 0) {
      local_ca0 = (longlong *******)CONCAT71(local_ca0._1_7_,uVar35);
      local_ca8 = (longlong *******)((ulonglong)local_ca8 & 0xffffffffffffff00);
      lVar15 = FRCPassPostProcessTonemap::FRCPassPostProcessTonemap(lVar19,local_c50,1,0);
    }
    ppppppplVar20 =
         (longlong *******)
         FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                   (local_c58,lVar15);
    (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_c38);
    uStack_b50 = (undefined1 *)((ulonglong)uStack_b50 & 0xffffffff00000000);
    puStack_c30 = uStack_b50;
    local_c38 = ppppppplVar20;
    local_b58 = ppppppplVar20;
    if (*(int *)(local_c50 + 0x1a10) == 1) {
      FUN_141c42e10(&local_c60);
      lVar14 = 0;
    }
  }
  else {
    local_b78 = 0;
    uStack_b70 = uStack_b70 & 0xffffffff00000000;
    if (*param_4 != 0) {
      pcStack_a00 = local_c0d + 5;
      local_c0d[5] = 0;
      local_a08 = &DAT_14060d670;
      local_278 = &DAT_14060d670;
      pcStack_270 = pcStack_a00;
      lVar15 = FUN_1415d8310(&local_278,&DAT_146216a38);
      lVar15 = operator_new(0xb0,lVar15 + 0x18,1,0);
      if (lVar15 != 0) {
        lVar14 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar15,param_4);
      }
      plVar25 = local_c58;
      iVar31 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar31 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
      }
      *(longlong *)(*plVar25 + (longlong)iVar31 * 8) = lVar14;
      uStack_bd0 = uStack_bd0 & 0xffffffff00000000;
      uStack_b70 = uStack_bd0;
      local_b78 = lVar14;
    }
    local_c98 = (longlong *******)&local_718;
    uVar34 = uStack_bd0 >> 0x20;
    uStack_bd0 = uVar34 << 0x20;
    lStack_710 = uStack_bd0;
    local_ca0 = (longlong *******)&local_708;
    uStack_bd0 = uVar34 << 0x20;
    lStack_700 = uStack_bd0;
    local_718 = 0;
    local_ca8 = (longlong *******)&local_6f8;
    local_bd8 = 0;
    uStack_bd0 = uVar34 << 0x20;
    local_708 = 0;
    local_6f8 = 0;
    uStack_6f0 = uStack_bd0;
    local_6e8 = local_be8;
    uStack_6e0 = uStack_be0;
    puVar21 = (undefined8 *)FUN_141c43d40(local_208,&local_c60,2,&local_6e8);
    local_c38 = (longlong *******)*puVar21;
    puStack_c30 = (undefined1 *)puVar21[1];
    if ((*(int *)(local_b48 + 0x38) < DAT_146a54dc8) &&
       (_Init_thread_header(&DAT_146a54dc8), DAT_146a54dc8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar25 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DepthOfFieldQuality");
      lVar14 = 0;
      if (plVar25 != (longlong *)0x0) {
        lVar14 = (**(code **)(*plVar25 + 0x38))(plVar25);
      }
      DAT_146a54dc0 = lVar14;
      _Init_thread_footer(&DAT_146a54dc8);
    }
    if (((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x28) & 0x80000) == 0) ||
       (*(int *)(DAT_146a54dc0 + 4) < 1)) {
      bVar38 = false;
    }
    else {
      bVar38 = true;
    }
    cVar10 = '\0';
    local_c64 = 0x101;
    if (bVar38) {
      cVar10 = '\0';
      if (*(char *)(param_3 + 0x1714) != '\0') {
        if (*(char *)(param_3 + 0x1714) == '\x01') {
          FUN_141c49c20();
          if (local_b78 == 0) {
            pcStack_9f0 = local_c0d + 6;
            local_c0d[6] = 0;
            local_9f8 = &DAT_14060d670;
            local_6d8 = &DAT_14060d670;
            pcStack_6d0 = pcStack_9f0;
            lVar14 = FUN_1415d8310(&local_6d8,&DAT_146216a38);
            lVar14 = operator_new(0xb0,lVar14 + 0x18,1,0);
            if (lVar14 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar14,&DAT_1464c3318);
            }
            local_a68 = FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                                  (local_c58,uVar22);
            local_730 = &local_c60;
            local_728 = &local_c64;
            local_720 = &local_a68;
            uStack_a60 = 0;
            fVar39 = *(float *)(DAT_146a51d70 + 4);
            fVar40 = *(float *)(local_c50 + 0x1744);
            if (fVar39 <= *(float *)(local_c50 + 0x1744)) {
              fVar40 = fVar39;
            }
            fVar41 = *(float *)(local_c50 + 0x1740);
            if (fVar39 <= *(float *)(local_c50 + 0x1740)) {
              fVar41 = fVar39;
            }
            bVar38 = 0.01 <= fVar40;
            bVar9 = *(float *)(DAT_146a51d58 + 4) <= fVar41;
            local_c64 = CONCAT11(bVar38,bVar9);
            if (bVar38) {
              if (!bVar9) {
                fVar41 = 0.0;
              }
LAB_141c4c18f:
              if (!bVar38) {
                fVar40 = 0.0;
              }
              FUN_141c40b10(&local_730,&local_be8,fVar40,fVar41);
              if ((local_be8 != 0) && (1 < *(int *)(local_c50 + 0x1a38))) {
                cVar10 = '\x01';
                goto LAB_141c4c01a;
              }
            }
            else if (bVar9) goto LAB_141c4c18f;
            cVar10 = '\0';
          }
          else {
            local_748 = &local_c60;
            local_740 = &local_c64;
            local_738 = &local_b78;
            fVar39 = *(float *)(DAT_146a51d70 + 4);
            fVar40 = *(float *)(local_c50 + 0x1744);
            if (fVar39 <= *(float *)(local_c50 + 0x1744)) {
              fVar40 = fVar39;
            }
            fVar41 = *(float *)(local_c50 + 0x1740);
            if (fVar39 <= *(float *)(local_c50 + 0x1740)) {
              fVar41 = fVar39;
            }
            bVar38 = 0.01 <= fVar40;
            bVar9 = *(float *)(DAT_146a51d58 + 4) <= fVar41;
            local_c64 = CONCAT11(bVar38,bVar9);
            if (bVar38) {
              if (!bVar9) {
                fVar41 = 0.0;
              }
LAB_141c4c054:
              if (!bVar38) {
                fVar40 = 0.0;
              }
              FUN_141c40b10(&local_748,&local_be8,fVar40,fVar41);
              if ((local_be8 != 0) && (1 < *(int *)(local_c50 + 0x1a38))) {
                cVar10 = '\x01';
                goto LAB_141c4c01a;
              }
            }
            else if (bVar9) goto LAB_141c4c054;
            cVar10 = '\0';
          }
        }
        else {
          local_bd8 = local_b78;
          uStack_bd0 = uStack_b70;
          if (local_b78 == 0) {
            local_c28 = 0;
            puStack_9e0 = &local_c28;
            local_9e8 = &DAT_14060d670;
            local_6c8 = &DAT_14060d670;
            puStack_6c0 = puStack_9e0;
            lVar14 = FUN_1415d8310(&local_6c8,&DAT_146216a38);
            lVar14 = operator_new(0xb0,lVar14 + 0x18,1,0);
            if (lVar14 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar14,&DAT_1464c3318);
            }
            local_bd8 = FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                                  (local_c58,uVar22);
            uStack_a60 = 0;
            uStack_bd0 = (ulonglong)uStack_a5c << 0x20;
            local_a68 = local_bd8;
          }
          if (((*(int *)(DAT_146a51f38 + 4) == 1) &&
              (uVar11 = FUN_14274f980(param_3), uVar11 < 0x20)) &&
             ((0xd8151015U >> (uVar11 & 0x1f) & 1) != 0)) {
            cVar10 = FUN_141c2f6f0(&local_c60,&local_bd8,&local_be8);
          }
          else {
            FUN_141c436d0(&local_c60,&local_bd8);
            cVar10 = '\0';
          }
        }
      }
LAB_141c4c01a:
      uVar22 = 0;
      if ((0.0 < *(float *)(param_3 + 0x1738)) && (*(char *)(param_3 + 0x1714) == '\0')) {
        FUN_141c49c20();
        if (local_b78 == 0) {
          puStack_9d0 = &local_c27;
          local_9d8 = &DAT_14060d670;
          local_6b8 = &DAT_14060d670;
          local_c27 = 0;
          puStack_6b0 = puStack_9d0;
          lVar14 = FUN_1415d8310(&local_6b8,&DAT_146216a38);
          lVar14 = operator_new(0xb0,lVar14 + 0x18,1,0);
          if (lVar14 != 0) {
            uVar22 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar14,&DAT_1464c3318);
          }
          local_9c8 = FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                                (local_c58,uVar22);
          plVar25 = &local_9c8;
          local_9c0 = 0;
        }
        else {
          plVar25 = &local_b78;
        }
        FUN_141c43190(&local_c60,&local_be8,plVar25);
        cVar10 = '\x01';
      }
    }
    if ((local_be8 != 0) && (cVar10 == '\0')) {
      if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(local_c50 + 0x1a38) < 3)) {
        uVar22 = 0;
      }
      else {
        uVar22 = 1;
      }
      puStack_9b0 = &local_c26;
      local_c26 = 0;
      local_9b8 = &DAT_14060d670;
      local_6a8 = &DAT_14060d670;
      puStack_6a0 = puStack_9b0;
      lVar14 = FUN_1415d8310(&local_6a8,&DAT_146216a38);
      lVar14 = operator_new(0xd0,lVar14 + 0x18,1,0);
      uVar24 = 0;
      if (lVar14 != 0) {
        uVar24 = FRCPassPostProcessBokehDOFRecombine::FRCPassPostProcessBokehDOFRecombine
                           (lVar14,uVar22);
      }
      pppppplVar16 = (longlong ******)
                     FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                               (local_c58,uVar24);
      (*(code *)(*pppppplVar16)[3])(pppppplVar16,0,&local_c38);
      (*(code *)(*pppppplVar16)[3])(pppppplVar16,2,&local_be8);
      puStack_c30 = (undefined1 *)((ulonglong)uStack_c6c << 0x20);
      local_c38 = (longlong *******)pppppplVar16;
    }
    plVar25 = (longlong *)0x0;
    local_c98 = &local_698;
    local_ca0 = &local_688;
    iVar37 = 0;
    lStack_690 = (ulonglong)uStack_c6c << 0x20;
    local_698 = (longlong ******)0x0;
    lStack_680 = (ulonglong)uStack_c6c << 0x20;
    local_ca8 = &local_678;
    local_688 = (longlong ******)0x0;
    local_c78 = (longlong *******)0x0;
    fStack_c70 = 0.0;
    lStack_670 = (ulonglong)uStack_c6c << 0x20;
    local_678 = (longlong ******)0x0;
    local_668 = local_be8;
    uStack_660 = uStack_be0;
    puVar21 = (undefined8 *)FUN_141c43d40(local_1f8,&local_c60,1,&local_668);
    local_c38 = (longlong *******)*puVar21;
    puStack_c30 = (undefined1 *)puVar21[1];
    iVar31 = *(int *)(local_c50 + 0x1a10);
    local_bb8 = (longlong *)CONCAT44(local_bb8._4_4_,iVar31);
    iVar36 = *(int *)(DAT_146a51de8 + 4);
    if ((-1 < iVar36) && (iVar37 = 1, iVar36 < 1)) {
      iVar37 = iVar36;
    }
    cVar10 = FUN_141e01830(param_3);
    if ((cVar10 != '\0') && (local_b78 != 0)) {
      puStack_9a0 = &local_c25;
      local_9a8 = &DAT_14060d670;
      local_658 = &DAT_14060d670;
      local_c25 = 0;
      puStack_650 = puStack_9a0;
      lVar14 = FUN_1415d8310(&local_658,&DAT_146216a38);
      lVar14 = operator_new(0x130,lVar14 + 0x18,1);
      if (lVar14 != 0) {
        plVar25 = (longlong *)
                  FRCPassPostProcessVelocityFlatten::FRCPassPostProcessVelocityFlatten(lVar14);
      }
      plVar27 = local_c58;
      iVar31 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar31 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
      }
      *(longlong **)(*plVar27 + (longlong)iVar31 * 8) = plVar25;
      (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_b78);
      local_998 = local_c40;
      plVar27 = (longlong *)0x0;
      local_990 = 0;
      (**(code **)(*plVar25 + 0x18))(plVar25,1,&local_998);
      lStack_930 = (ulonglong)uStack_c6c << 0x20;
      fStack_c70 = 1.4013e-45;
      puStack_af0 = (undefined1 *)CONCAT44(uStack_c6c,1);
      local_c78 = (longlong *******)plVar25;
      local_af8 = plVar25;
      local_938 = plVar25;
      if (((3.0 < *(float *)(param_3 + 0x1780) * 0.0003125 *
                  (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0))) ||
          (*(int *)(DAT_146a51e60 + 4) != 0)) ||
         ((local_b40 != 0 && (*(char *)(local_b40 + 0x1777) != '\0')))) {
        puStack_980 = &local_c23;
        local_c23 = 0;
        local_988 = &DAT_14060d670;
        local_638 = &DAT_14060d670;
        puStack_630 = puStack_980;
        lVar14 = FUN_1415d8310(&local_638,&DAT_146216a38);
        plVar25 = (longlong *)operator_new(0xa8,lVar14 + 0x18,1,0);
        if (plVar25 != (longlong *)0x0) {
          *(undefined4 *)((longlong)plVar25 + 0xc) = 0;
          plVar25[3] = 0;
          _guard_xfg_dispatch_icall_nop((undefined *)((longlong)plVar25 + 0x24),0,0x5c);
          *(undefined4 *)(plVar25 + 1) = 0;
          plVar25[2] = 0;
          *(undefined4 *)(plVar25 + 3) = 0;
          plVar25[4] = 1;
          plVar25[5] = 0;
          plVar25[6] = 0;
          plVar25[7] = 0;
          *(undefined1 *)(plVar25 + 0xb) = 0;
          plVar25[0xc] = (longlong)L"UnknownTexture";
          plVar25[8] = 1;
          *(undefined2 *)(plVar25 + 9) = 1;
          *(undefined8 *)((longlong)plVar25 + 0x4c) = 0;
          *(undefined4 *)((longlong)plVar25 + 0x54) = 0;
          *(undefined2 *)(plVar25 + 0xd) = 1;
          plVar25[0xe] = 0;
          *(undefined4 *)(plVar25 + 0xf) = 0;
          plVar25[0x10] = 0;
          plVar25[0x11] = 0;
          plVar25[0x13] = 0;
          plVar25[0x14] = 0;
          plVar25[0x12] = 0;
          *plVar25 = (longlong)&PTR_FUN_144e1c878;
          plVar27 = plVar25;
        }
        plVar25 = local_c58;
        iVar31 = (int)local_c58[1];
        *(int *)(local_c58 + 1) = iVar31 + 1;
        if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
        }
        *(longlong **)(*plVar25 + (longlong)iVar31 * 8) = plVar27;
        (**(code **)(*plVar27 + 0x18))(plVar27,0,&local_af8);
        uStack_a50 = (undefined1 *)((ulonglong)uStack_a50._4_4_ << 0x20);
        puStack_af0 = uStack_a50;
        local_a58 = plVar27;
      }
      else {
        uStack_a50 = &local_c24;
        local_c24 = 0;
        local_a58 = (longlong *)&DAT_14060d670;
        local_648 = &DAT_14060d670;
        puStack_640 = uStack_a50;
        lVar14 = FUN_1415d8310(&local_648,&DAT_146216a38);
        plVar25 = (longlong *)operator_new(0xa8,lVar14 + 0x18,1,0);
        if (plVar25 != (longlong *)0x0) {
          *(undefined4 *)((longlong)plVar25 + 0xc) = 0;
          plVar25[3] = 0;
          _guard_xfg_dispatch_icall_nop((undefined *)((longlong)plVar25 + 0x24),0,0x5c);
          *(undefined4 *)(plVar25 + 1) = 0;
          plVar25[2] = 0;
          *(undefined4 *)(plVar25 + 3) = 0;
          plVar25[4] = 1;
          plVar25[5] = 0;
          plVar25[6] = 0;
          plVar25[7] = 0;
          *(undefined1 *)(plVar25 + 0xb) = 0;
          plVar25[0xc] = (longlong)L"UnknownTexture";
          plVar25[8] = 1;
          *(undefined2 *)(plVar25 + 9) = 1;
          *(undefined8 *)((longlong)plVar25 + 0x4c) = 0;
          *(undefined4 *)((longlong)plVar25 + 0x54) = 0;
          *(undefined2 *)(plVar25 + 0xd) = 1;
          plVar25[0xe] = 0;
          *(undefined4 *)(plVar25 + 0xf) = 0;
          plVar25[0x10] = 0;
          plVar25[0x11] = 0;
          plVar25[0x13] = 0;
          plVar25[0x14] = 0;
          plVar25[0x12] = 0;
          *plVar25 = (longlong)&PTR_FUN_144e1c900;
          plVar27 = plVar25;
        }
        plVar25 = local_c58;
        iVar31 = (int)local_c58[1];
        *(int *)(local_c58 + 1) = iVar31 + 1;
        if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
        }
        *(longlong **)(*plVar25 + (longlong)iVar31 * 8) = plVar27;
        (**(code **)(*plVar27 + 0x18))(plVar27,0,&local_af8);
        fStack_c70 = 0.0;
        puStack_af0 = (undefined1 *)((ulonglong)uStack_c6c << 0x20);
        local_c78 = (longlong *******)plVar27;
      }
      iVar31 = *(int *)(DAT_146a51e78 + 4);
      if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(local_c50 + 0x1a38) < 3)) {
        uVar35 = 0;
      }
      else {
        uVar35 = 1;
      }
      puStack_970 = &local_c22;
      local_c22 = 0;
      local_978 = &DAT_14060d670;
      local_628 = &DAT_14060d670;
      local_af8 = plVar27;
      puStack_620 = puStack_970;
      lVar14 = FUN_1415d8310(&local_628,&DAT_146216a38);
      lVar14 = operator_new(0xe8,lVar14 + 0x18,1);
      if (lVar14 == 0) {
        uVar22 = 0;
      }
      else {
        uVar12 = FUN_141e007b0(-iVar31);
        uVar22 = FRCPassPostProcessMotionBlur::FRCPassPostProcessMotionBlur
                           (lVar14,uVar12,(iVar31 != 0) - 1,uVar35);
      }
      ppppppplVar20 =
           (longlong *******)
           FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                     (local_c58,uVar22);
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_c38);
      local_968 = local_c40;
      local_960 = 0;
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,1,&local_968);
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,2,&local_938);
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,3,&local_af8);
      fStack_c70 = 0.0;
      puStack_c30 = (undefined1 *)((ulonglong)uStack_c6c << 0x20);
      local_c78 = ppppppplVar20;
      local_c38 = ppppppplVar20;
      if (iVar31 == 0) {
        iVar31 = (int)local_bb8;
      }
      else {
        if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(local_c50 + 0x1a38) < 3)) {
          uVar35 = 0;
        }
        else {
          uVar35 = 1;
        }
        puStack_950 = &local_c21;
        local_c21 = 0;
        local_958 = &DAT_14060d670;
        local_618 = &DAT_14060d670;
        puStack_610 = puStack_950;
        lVar14 = FUN_1415d8310(&local_618,&DAT_146216a38);
        lVar14 = operator_new(0xe8,lVar14 + 0x18,1,0);
        uVar22 = 0;
        if (lVar14 != 0) {
          uVar12 = FUN_141e007b0();
          uVar22 = FRCPassPostProcessMotionBlur::FRCPassPostProcessMotionBlur
                             (lVar14,uVar12,1,uVar35);
        }
        ppppppplVar20 =
             (longlong *******)
             FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                       (local_c58,uVar22);
        (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_c38);
        local_948 = local_c40;
        local_940 = 0;
        (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,1,&local_948);
        (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,2,&local_938);
        (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,3,&local_af8);
        fStack_c70 = 0.0;
        puStack_c30 = (undefined1 *)((ulonglong)uStack_c6c << 0x20);
        iVar31 = (int)local_bb8;
        local_c78 = ppppppplVar20;
        local_c38 = ppppppplVar20;
      }
    }
    ppppppplVar20 = (longlong *******)0x0;
    cVar10 = (*(code *)(*param_5[1])[0x1e])();
    if (cVar10 == '\0') {
      pcStack_920 = local_c20;
      local_928 = &DAT_14060d670;
      local_608 = &DAT_14060d670;
      local_c20[0] = cVar10;
      pcStack_600 = pcStack_920;
      lVar14 = FUN_1415d8310(&local_608,&DAT_146216a38);
      ppppppplVar17 = (longlong *******)operator_new(0xb8,lVar14 + 0x18,1,0);
      plVar25 = local_c58;
      if (ppppppplVar17 != (longlong *******)0x0) {
        *(undefined4 *)(ppppppplVar17 + 1) = 0;
        ppppppplVar17[2] = (longlong ******)0x0;
        *(undefined4 *)(ppppppplVar17 + 3) = 0;
        ppppppplVar17[4] = (longlong ******)0x1;
        ppppppplVar17[5] = (longlong ******)0x0;
        ppppppplVar17[6] = (longlong ******)0x0;
        ppppppplVar17[7] = (longlong ******)0x0;
        ppppppplVar17[8] = (longlong ******)0x1;
        *(undefined2 *)(ppppppplVar17 + 9) = 1;
        *(undefined8 *)((longlong)ppppppplVar17 + 0x4c) = 0;
        *(undefined4 *)((longlong)ppppppplVar17 + 0x54) = 0;
        *(undefined1 *)(ppppppplVar17 + 0xb) = 0;
        ppppppplVar17[0xc] = (longlong ******)L"UnknownTexture";
        *(undefined2 *)(ppppppplVar17 + 0xd) = 1;
        ppppppplVar17[0xe] = (longlong ******)0x0;
        *(undefined4 *)(ppppppplVar17 + 0xf) = 0;
        ppppppplVar17[0x10] = (longlong ******)0x0;
        ppppppplVar17[0x11] = (longlong ******)0x0;
        ppppppplVar17[0x13] = (longlong ******)0x0;
        ppppppplVar17[0x14] = (longlong ******)0x0;
        ppppppplVar17[0x12] = (longlong ******)0x0;
        *ppppppplVar17 = (longlong ******)&PTR__scalar_deleting_destructor__144e1bd50;
        ppppppplVar17[0x15] = (longlong ******)0x0;
        ppppppplVar17[0x16] = param_5;
        ppppppplVar20 = ppppppplVar17;
      }
      iVar36 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar36 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar36 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar36);
      }
      *(longlong ********)(*plVar25 + (longlong)iVar36 * 8) = ppppppplVar20;
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_c38);
      fStack_c70 = 0.0;
      puStack_c30 = (undefined1 *)((ulonglong)uStack_c6c << 0x20);
      local_c78 = ppppppplVar20;
      local_c38 = ppppppplVar20;
    }
    lVar14 = DAT_146a51f50;
    ppppppplVar20 = (longlong *******)0x0;
    if (iVar31 == 2) {
      if (local_b40 != 0) {
        FUN_141c4a770(local_260,local_c50);
        if ((((*(int *)(DAT_146a51f08 + 4) == 0) ||
             (cVar10 = FUN_141e01830(param_3), cVar10 != '\0')) || (local_25b == '\0')) ||
           (iVar37 != 0)) {
          cVar10 = '\0';
        }
        else {
          cVar10 = '\x01';
        }
        local_258 = 9;
        local_25a = cVar10;
        if (local_b78 == 0) {
          pcStack_910 = local_c20 + 1;
          local_c20[1] = 0;
          local_918 = &DAT_14060d670;
          local_5f8 = &DAT_14060d670;
          pcStack_5f0 = pcStack_910;
          lVar14 = FUN_1415d8310(&local_5f8,&DAT_146216a38);
          lVar14 = operator_new(0xb0,lVar14 + 0x18,1);
          ppppppplVar17 = ppppppplVar20;
          if (lVar14 != 0) {
            ppppppplVar17 =
                 (longlong *******)
                 FRCPassPostProcessInput::FRCPassPostProcessInput(lVar14,&DAT_1464c3318);
          }
          local_908 = FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                                (local_c58,ppppppplVar17);
          plVar25 = &local_908;
          local_900 = 0;
        }
        else {
          plVar25 = &local_b78;
        }
        ppppppplVar17 = (longlong *******)&local_b88;
        if (cVar10 == '\0') {
          ppppppplVar17 = ppppppplVar20;
        }
        FUN_141c44590(&local_c60,plVar25,local_260,ppppppplVar17);
        local_c98 = &local_5e8;
        lStack_5e0 = (ulonglong)uStack_c6c << 0x20;
        local_5e8 = (longlong ******)0x0;
        local_ca0 = &local_5d8;
        lStack_5d0 = (ulonglong)uStack_c6c << 0x20;
        local_5d8 = (longlong ******)0x0;
        lStack_5c0 = (ulonglong)uStack_c6c << 0x20;
        local_ca8 = &local_5c8;
        local_5c8 = (longlong ******)0x0;
        local_c78 = (longlong *******)0x0;
        fStack_c70 = 0.0;
        lStack_5b0 = (ulonglong)uStack_c6c << 0x20;
        local_5b8 = 0;
        plVar25 = (longlong *)FUN_141c43d40(local_1e8,&local_c60,5,&local_5b8);
        local_ae8 = *plVar25;
        uStack_ae0 = plVar25[1];
      }
    }
    else if (iVar31 == 1) {
      cVar10 = FUN_1415ad720();
      if ((cVar10 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar13 = GetCurrentThreadId();
        ppppppplVar17 = (longlong *******)&DAT_00000004;
        if (DVar13 == DAT_1468c21c0) goto LAB_141c4cee1;
      }
      else {
LAB_141c4cee1:
        ppppppplVar17 = ppppppplVar20;
      }
      if (*(int *)((longlong)ppppppplVar17 + lVar14) == 1) {
        FUN_141c42e10();
      }
    }
    if ((2 < *(int *)(param_3 + 0x1a38)) && (*(float *)(param_3 + 0x19f4) != 0.0)) {
      pcStack_8f0 = local_c20 + 2;
      local_c20[2] = 0;
      local_8f8 = &DAT_14060d670;
      local_5a8 = &DAT_14060d670;
      pcStack_5a0 = pcStack_8f0;
      lVar14 = FUN_1415d8310(&local_5a8,&DAT_146216a38);
      lVar14 = operator_new(0xd0,lVar14 + 0x18,1,0);
      if (lVar14 != 0) {
        ppppppplVar20 = (longlong *******)FUN_141c76090(lVar14,1,param_3 + 0x19e8);
      }
      plVar25 = local_c58;
      iVar31 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar31 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
      }
      *(longlong ********)(*plVar25 + (longlong)iVar31 * 8) = ppppppplVar20;
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_c38);
      fStack_c70 = 0.0;
      puStack_c30 = (undefined1 *)((ulonglong)uStack_c6c << 0x20);
      local_c78 = ppppppplVar20;
      local_c38 = ppppppplVar20;
    }
    ppppppplVar20 = (longlong *******)0x0;
    if (local_b88 == (longlong *******)0x0) {
      if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(local_c50 + 0x1a38) < 3)) {
        uVar35 = 0;
      }
      else {
        uVar35 = 1;
      }
      pcStack_8e0 = local_c20 + 3;
      local_c20[3] = 0;
      local_8e8 = &DAT_14060d670;
      local_598 = &DAT_14060d670;
      pcStack_590 = pcStack_8e0;
      lVar14 = FUN_1415d8310(&local_598,&DAT_146216a38);
      ppppppplVar17 = (longlong *******)operator_new(0xd0,lVar14 + 0x18,1,0);
      plVar25 = local_c58;
      if (ppppppplVar17 != (longlong *******)0x0) {
        *(undefined2 *)(ppppppplVar17 + 1) = 0;
        ppppppplVar17[2] = (longlong ******)0x0;
        *(undefined4 *)(ppppppplVar17 + 3) = 0;
        ppppppplVar17[4] = (longlong ******)0x0;
        *(undefined4 *)(ppppppplVar17 + 5) = 0;
        ppppppplVar17[6] = (longlong ******)0x1;
        ppppppplVar17[7] = (longlong ******)0x0;
        ppppppplVar17[8] = (longlong ******)0x0;
        ppppppplVar17[9] = (longlong ******)0x0;
        ppppppplVar17[10] = (longlong ******)0x1;
        *(undefined2 *)(ppppppplVar17 + 0xb) = 1;
        *(undefined8 *)((longlong)ppppppplVar17 + 0x5c) = 0;
        *(undefined4 *)((longlong)ppppppplVar17 + 100) = 0;
        *(undefined1 *)(ppppppplVar17 + 0xd) = 0;
        ppppppplVar17[0xe] = (longlong ******)L"UnknownTexture";
        *(undefined2 *)(ppppppplVar17 + 0xf) = 1;
        ppppppplVar17[0x10] = (longlong ******)0x0;
        *(undefined4 *)(ppppppplVar17 + 0x11) = 0;
        ppppppplVar17[0x12] = (longlong ******)0x0;
        ppppppplVar17[0x13] = (longlong ******)0x0;
        ppppppplVar17[0x15] = (longlong ******)0x0;
        ppppppplVar17[0x16] = (longlong ******)0x0;
        ppppppplVar17[0x14] = (longlong ******)0x0;
        *ppppppplVar17 = (longlong ******)&PTR__scalar_deleting_destructor__144e1baa8;
        ppppppplVar17[0x17] = (longlong ******)0x0;
        ppppppplVar17[0x19] = (longlong ******)L"SceneColorHalfRes";
        *(undefined4 *)(ppppppplVar17 + 0x18) = 9;
        *(int *)((longlong)ppppppplVar17 + 0xc4) = iVar37;
        *(undefined1 *)((longlong)ppppppplVar17 + 10) = uVar35;
        *(undefined1 *)((longlong)ppppppplVar17 + 0xb) = 0;
        ppppppplVar20 = ppppppplVar17;
      }
      iVar31 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar31 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
      }
      *(longlong ********)(*plVar25 + (longlong)iVar31 * 8) = ppppppplVar20;
      local_588 = local_c38;
      puStack_580 = puStack_c30;
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_588);
      fStack_c70 = 0.0;
      uStack_b80 = (ulonglong)uStack_c6c << 0x20;
      local_c78 = ppppppplVar20;
      local_b88 = ppppppplVar20;
    }
    ppppppplVar20 = (longlong *******)0x0;
    uVar11 = 0;
    if (((((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x28) & 0x80) != 0) && (local_b38[0] == 0)) &&
        (*(float *)(param_3 + 0x1588) <= *(float *)(param_3 + 0x158c) &&
         *(float *)(param_3 + 0x158c) != *(float *)(param_3 + 0x1588))) &&
       (*(char *)(param_3 + 0x1202) == '\0')) {
      uVar11 = 1;
    }
    iVar31 = (int)local_c80;
    ppppppplVar17 = ppppppplVar20;
    if (1 < (int)local_c80) {
      ppppppplVar17 = (longlong *******)(ulonglong)uVar11;
    }
    if (((DAT_1468c2184 == '\0') && ((char)ppppppplVar17 != '\0')) &&
       ((2 < (int)local_c80 && (((local_bc0[0] & 0xfffffffc) == 0 && (local_bc0[0] != 2)))))) {
      pcStack_8d0 = local_c20 + 4;
      local_c20[4] = DAT_1468c2184;
      local_8d8 = &DAT_14060d670;
      local_578 = &DAT_14060d670;
      pcStack_570 = pcStack_8d0;
      lVar14 = FUN_1415d8310(&local_578,&DAT_146216a38);
      ppppppplVar17 = (longlong *******)operator_new(0xa8,lVar14 + 0x18,1,0);
      if (ppppppplVar17 != (longlong *******)0x0) {
        _guard_xfg_dispatch_icall_nop(ppppppplVar17 + 1,0,0xa0);
        TRenderingCompositePassBase<1,1>::TRenderingCompositePassBase<1,1>(ppppppplVar17);
        *ppppppplVar17 = (longlong ******)&PTR_FUN_144e1bdd8;
        ppppppplVar20 = ppppppplVar17;
      }
      plVar25 = local_c58;
      iVar36 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar36 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar36 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar36);
      }
      *(longlong ********)(*plVar25 + (longlong)iVar36 * 8) = ppppppplVar20;
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_b88);
      puStack_8b0 = &local_c1b;
      plVar25 = (longlong *)0x0;
      local_8b8 = &DAT_14060d670;
      fStack_c70 = 0.0;
      uStack_8c0 = (ulonglong)uStack_c6c << 0x20;
      local_568 = &DAT_14060d670;
      local_c1b = 0;
      local_c78 = ppppppplVar20;
      local_8c8 = ppppppplVar20;
      puStack_560 = puStack_8b0;
      lVar14 = FUN_1415d8310(&local_568,&DAT_146216a38);
      plVar27 = (longlong *)operator_new(0xa8,lVar14 + 0x18,1,0);
      if (plVar27 != (longlong *)0x0) {
        _guard_xfg_dispatch_icall_nop(plVar27 + 1,0,0xa0);
        TRenderingCompositePassBase<1,1>::TRenderingCompositePassBase<1,1>(plVar27);
        *plVar27 = (longlong)&PTR_FUN_144e1be60;
        plVar25 = plVar27;
      }
      plVar27 = local_c58;
      iVar36 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar36 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar36 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar36);
      }
      local_8a0 = 0;
      *(longlong **)(*plVar27 + (longlong)iVar36 * 8) = plVar25;
      local_8a8 = ppppppplVar20;
      (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_8a8);
      uStack_ad0 = uStack_ad0 & 0xffffffff00000000;
      local_ad8 = plVar25;
    }
    uVar11 = local_bc0[0];
    plVar25 = (longlong *)0x0;
    local_ba0 = 0;
    aplStack_b98[0] = (longlong *)0x0;
    if (((*(float *)(param_3 + 0x1468) <= 0.0) || (-1.0 < *(float *)(local_c50 + 0x146c))) ||
       (*(int *)(*(longlong *)(local_c50 + 0x10) + 8) != 1)) {
LAB_141c4d4bb:
      lVar14 = local_ba0;
      if (DAT_1468c2184 == '\0') {
LAB_141c4d4c3:
        lVar14 = local_ba0;
        if (((*(longlong *)(param_3 + 0x18) != 0) && ((uVar11 & 0xfffffffc) == 0)) && (uVar11 != 2))
        {
          if (local_b38[0] == 1) {
            if (local_ba0 == 0) {
              local_538 = local_b88;
              lStack_530 = uStack_b80;
              CreateDownSampleArray(&local_a78,&local_c60,&local_538,1);
              puVar21 = (undefined8 *)FUN_141c43020(local_1d8,param_3,local_a78);
              local_b30 = (longlong *)*puVar21;
              uStack_b28 = puVar21[1];
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_a78);
            }
            else {
              puVar21 = (undefined8 *)FUN_141c43020(local_1c8,param_3,local_ba0);
              local_b30 = (longlong *)*puVar21;
              uStack_b28 = puVar21[1];
            }
          }
          else {
            if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(local_c50 + 0x1a38) < 3)) {
              uVar35 = 0;
            }
            else {
              uVar35 = 1;
            }
            puStack_890 = &local_c1a;
            local_c1a = 0;
            local_898 = &DAT_14060d670;
            local_528 = &DAT_14060d670;
            puStack_520 = puStack_890;
            lVar14 = FUN_1415d8310(&local_528,&DAT_146216a38);
            plVar27 = (longlong *)operator_new(0xb0,lVar14 + 0x18,1,0);
            if (plVar27 != (longlong *)0x0) {
              TRenderingCompositePassBase<1,1>::TRenderingCompositePassBase<1,1>(plVar27);
              *plVar27 = (longlong)&PTR__scalar_deleting_destructor__144e1bb30;
              plVar27[0x15] = 0;
              *(undefined1 *)((longlong)plVar27 + 10) = uVar35;
              *(undefined1 *)((longlong)plVar27 + 0xb) = 0;
              plVar25 = plVar27;
            }
            plVar27 = local_c58;
            iVar36 = (int)local_c58[1];
            *(int *)(local_c58 + 1) = iVar36 + 1;
            if (*(int *)((longlong)local_c58 + 0xc) < iVar36 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar36);
            }
            *(longlong **)(*plVar27 + (longlong)iVar36 * 8) = plVar25;
            (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_ad8);
            uStack_a70 = 0;
            uStack_b28 = (ulonglong)uStack_a6c << 0x20;
            lVar14 = local_ba0;
            local_b30 = plVar25;
            local_a78 = plVar25;
          }
        }
      }
    }
    else {
      lVar14 = local_ba0;
      if ((DAT_1468c2184 == '\0') && (*(longlong *)(param_3 + 0x18) != 0)) {
        if (((local_bc0[0] & 0xfffffffc) == 0) && ((local_bc0[0] != 2 && (local_b38[0] == 1)))) {
          local_558 = local_b88;
          lStack_550 = uStack_b80;
          plVar27 = (longlong *)CreateDownSampleArray(local_548,&local_c60,&local_558,1);
          if (&local_ba0 != plVar27) {
            local_ba0 = *plVar27;
            *plVar27 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(aplStack_b98,plVar27 + 1);
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_548);
          goto LAB_141c4d4bb;
        }
        goto LAB_141c4d4c3;
      }
    }
    if (0.0 < *(float *)(param_3 + 0x1468)) {
      if (*(int *)(DAT_146a51d40 + 4) == 0) {
        if (lVar14 == 0) {
          local_518 = local_b30;
          lStack_510 = uStack_b28;
          local_508 = local_b88;
          lStack_500 = uStack_b80;
          FUN_141c58a50(&local_4f8,&local_c60,&local_508,&local_518);
          local_4e8 = local_4f8;
          uStack_4e0 = uStack_4f0;
          plVar25 = (longlong *)CreateDownSampleArray(local_4d8,&local_c60,&local_4e8,0);
          if (&local_ba0 != plVar25) {
            local_ba0 = *plVar25;
            *plVar25 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(aplStack_b98,plVar25 + 1);
            lVar14 = local_ba0;
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_4d8);
        }
        puVar21 = (undefined8 *)FUN_141c41970(local_1b8,lVar14,0);
        local_a88 = (longlong *)*puVar21;
        uStack_a80 = puVar21[1];
      }
      else {
        iVar37 = *(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
        puStack_880 = &local_c19;
        local_888 = &DAT_14060d670;
        local_4c8 = &DAT_14060d670;
        local_c80 = CONCAT44(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4),iVar37);
        local_c19 = 0;
        puStack_4c0 = puStack_880;
        lVar14 = FUN_1415d8310(&local_4c8,&DAT_146216a38);
        lVar14 = operator_new(0xb8,lVar14 + 0x18,1,0);
        uVar22 = local_c80;
        uVar33 = iVar37 >> 0x1f;
        iVar36 = local_c80._4_4_;
        uVar11 = local_c80._4_4_ >> 0x1f;
        if (lVar14 == 0) {
          uVar24 = 0;
        }
        else {
          local_c80 = CONCAT44((int)(local_c80._4_4_ + (uVar11 & 3)) >> 2,
                               (int)(iVar37 + (uVar33 & 3)) >> 2);
          uVar24 = FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                             (lVar14,local_c80,0x4028f5c3);
        }
        uVar18 = 0;
        plVar25 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_c58,uVar24);
        (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_b88);
        puStack_870 = &local_c18;
        fStack_c70 = 0.0;
        lStack_7f0 = (ulonglong)uStack_c6c << 0x20;
        local_878 = &DAT_14060d670;
        local_4b8 = &DAT_14060d670;
        local_c18 = 0;
        local_c78 = (longlong *******)plVar25;
        local_7f8 = plVar25;
        puStack_4b0 = puStack_870;
        lVar14 = FUN_1415d8310(&local_4b8,&DAT_146216a38);
        lVar14 = operator_new(0xb8,lVar14 + 0x18,1);
        uVar24 = uVar18;
        if (lVar14 != 0) {
          local_c80 = CONCAT44((int)(iVar36 + (uVar11 & 7)) >> 3,(int)(iVar37 + (uVar33 & 7)) >> 3);
          uVar24 = FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                             (lVar14,local_c80,0x4028f5c3);
        }
        plVar25 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_c58,uVar24);
        (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_7f8);
        puStack_860 = &local_c17;
        fStack_c70 = 0.0;
        lStack_810 = (ulonglong)uStack_c6c << 0x20;
        local_868 = &DAT_14060d670;
        local_4a8 = &DAT_14060d670;
        local_c17 = 0;
        local_c78 = (longlong *******)plVar25;
        local_818 = plVar25;
        puStack_4a0 = puStack_860;
        lVar14 = FUN_1415d8310(&local_4a8,&DAT_146216a38);
        lVar14 = operator_new(0xb8,lVar14 + 0x18,1);
        uVar24 = uVar18;
        if (lVar14 != 0) {
          local_c80 = CONCAT44((int)(iVar36 + (uVar11 & 0xf)) >> 4,
                               (int)(iVar37 + (uVar33 & 0xf)) >> 4);
          uVar24 = FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                             (lVar14,local_c80,0x4028f5c3);
        }
        plVar25 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_c58,uVar24);
        (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_818);
        puStack_850 = &local_c16;
        fStack_c70 = 0.0;
        lStack_830 = (ulonglong)uStack_c6c << 0x20;
        local_858 = &DAT_14060d670;
        local_498 = &DAT_14060d670;
        local_c16 = 0;
        local_c78 = (longlong *******)plVar25;
        local_838 = plVar25;
        puStack_490 = puStack_850;
        lVar14 = FUN_1415d8310(&local_498,&DAT_146216a38);
        lVar14 = operator_new(0xb8,lVar14 + 0x18,1);
        if (lVar14 != 0) {
          local_c80 = CONCAT44((int)(iVar36 + (uVar11 & 0x1f)) >> 5,
                               (int)(iVar37 + (uVar33 & 0x1f)) >> 5);
          uVar18 = FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                             (lVar14,local_c80,0x4028f5c3);
        }
        plVar25 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_c58,uVar18);
        (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_838);
        lVar14 = local_c50;
        local_a40 = *(float *)(param_3 + 0x1468);
        puStack_840 = &local_c15;
        fStack_c70 = 0.0;
        local_848 = &DAT_14060d670;
        lStack_470 = (ulonglong)uStack_c6c << 0x20;
        local_a38 = local_a40 * *(float *)(local_c50 + 0x14bc);
        local_a2c = 0;
        local_a34 = local_a40 * *(float *)(local_c50 + 0x14c0);
        local_a3c = 0;
        local_a30 = local_a40 * *(float *)(local_c50 + 0x14c4);
        local_c15 = 0;
        local_a48 = local_a40 * *(float *)(local_c50 + 0x14cc);
        local_a44 = local_a40 * *(float *)(local_c50 + 0x14d0);
        local_a40 = local_a40 * *(float *)(local_c50 + 0x14d4);
        local_488 = &DAT_14060d670;
        local_c78 = (longlong *******)plVar25;
        puStack_480 = puStack_840;
        local_478 = plVar25;
        lVar15 = FUN_1415d8310(&local_488,&DAT_146216a38);
        lVar15 = operator_new(0xf0,lVar15 + 0x18,1);
        uVar24 = 0;
        if (lVar15 != 0) {
          local_c80 = CONCAT44((int)(iVar36 + (uVar11 & 0x1f)) >> 5,
                               (int)(iVar37 + (uVar33 & 0x1f)) >> 5);
          local_ca8 = (longlong *******)&local_a48;
          uVar24 = FRCPassPostProcessBloomUpES2::FRCPassPostProcessBloomUpES2
                             (lVar15,local_c80,0x3fa8f5c33fa8f5c3,&local_a38);
        }
        plVar25 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_c58,uVar24);
        (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_838);
        (**(code **)(*plVar25 + 0x18))(plVar25,1,&local_478);
        local_a20 = *(float *)(param_3 + 0x1468);
        puStack_820 = &local_c14;
        uVar24 = 0;
        local_828 = &DAT_14060d670;
        fStack_c70 = 0.0;
        lStack_440 = (ulonglong)uStack_c6c << 0x20;
        local_a28 = local_a20 * *(float *)(lVar14 + 0x14ac);
        local_a1c = 0;
        local_a24 = local_a20 * *(float *)(lVar14 + 0x14b0);
        local_c14 = 0;
        local_a20 = local_a20 * *(float *)(lVar14 + 0x14b4);
        local_458 = (longlong ******)0x3f8000003f800000;
        uStack_450 = 0x3f800000;
        local_468 = &DAT_14060d670;
        local_c78 = (longlong *******)plVar25;
        puStack_460 = puStack_820;
        local_448 = plVar25;
        lVar15 = FUN_1415d8310(&local_468,&DAT_146216a38);
        lVar15 = operator_new(0xf0,lVar15 + 0x18,1,0);
        if (lVar15 != 0) {
          local_c80 = CONCAT44((int)(iVar36 + (uVar11 & 0xf)) >> 4,
                               (int)(iVar37 + (uVar33 & 0xf)) >> 4);
          local_ca8 = &local_458;
          uVar24 = FRCPassPostProcessBloomUpES2::FRCPassPostProcessBloomUpES2
                             (lVar15,local_c80,0x3fa8f5c33fa8f5c3,&local_a28);
        }
        plVar25 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_c58,uVar24);
        (**(code **)(*plVar25 + 0x18))(plVar25,0,&local_818);
        (**(code **)(*plVar25 + 0x18))(plVar25,1,&local_448);
        fVar39 = *(float *)(param_3 + 0x1468);
        lStack_410 = (ulonglong)uStack_c6c << 0x20;
        uStack_c6c = 0;
        local_c13 = 0;
        puStack_800 = &local_c13;
        local_808 = &DAT_14060d670;
        fStack_c70 = fVar39 * *(float *)(lVar14 + 0x14a4) * 0.5;
        local_c78 = (longlong *******)
                    CONCAT44(fVar39 * *(float *)(lVar14 + 0x14a0) * 0.5,
                             fVar39 * *(float *)(lVar14 + 0x149c) * 0.5);
        local_428 = (longlong ******)0x3f8000003f800000;
        uStack_420 = 0x3f800000;
        local_438 = &DAT_14060d670;
        puStack_430 = puStack_800;
        local_418 = plVar25;
        lVar14 = FUN_1415d8310(&local_438,&DAT_146216a38);
        lVar14 = operator_new(0xf0,lVar14 + 0x18,1,0);
        if (lVar14 == 0) {
          uVar24 = 0;
        }
        else {
          local_c80 = CONCAT44((int)(iVar36 + (uVar11 & 7)) >> 3,(int)(iVar37 + (uVar33 & 7)) >> 3);
          local_ca8 = &local_428;
          uVar24 = FRCPassPostProcessBloomUpES2::FRCPassPostProcessBloomUpES2
                             (lVar14,local_c80,0x3fa8f5c33fa8f5c3,&local_c78);
        }
        uVar18 = 0;
        ppppppplVar20 =
             (longlong *******)
             FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                       (local_c58,uVar24);
        (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_7f8);
        (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,1,&local_418);
        puStack_7e0 = &local_c12;
        uStack_bf0 = (undefined1 *)((ulonglong)uStack_bf0._4_4_ << 0x20);
        puStack_3f0 = uStack_bf0;
        local_7e8 = &DAT_14060d670;
        local_408 = &DAT_14060d670;
        local_c12 = 0;
        local_bf8 = ppppppplVar20;
        puStack_400 = puStack_7e0;
        local_3f8 = ppppppplVar20;
        lVar14 = FUN_1415d8310(&local_408,&DAT_146216a38);
        lVar14 = operator_new(0xd0,lVar14 + 0x18,1,0);
        if (lVar14 != 0) {
          uVar18 = FRCPassPostProcessSunMergeES2::FRCPassPostProcessSunMergeES2(lVar14,uVar22);
        }
        plVar25 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_c58,uVar18);
        (**(code **)(*plVar25 + 0x18))(plVar25,1,&local_b88);
        (**(code **)(*plVar25 + 0x18))(plVar25,2,&local_3f8);
        uStack_b10 = (undefined1 *)((ulonglong)uStack_b10 & 0xffffffff00000000);
        uStack_a80 = (ulonglong)uStack_b10;
        local_a88 = plVar25;
      }
    }
    ppppppplVar20 = (longlong *******)0x0;
    local_b18 = local_c38;
    uStack_b10 = puStack_c30;
    if (1 < iVar31) {
      ppppppplVar17 = (longlong *******)FUN_141c44270(&local_c60,3);
      cVar10 = local_c88[0];
      if (ppppppplVar17 == (longlong *******)0x0) {
        local_ca0 = (longlong *******)CONCAT71(local_ca0._1_7_,local_c88[0]);
        local_ca8 = (longlong *******)((ulonglong)local_ca8 & 0xffffffffffffff00);
        local_b68 = FUN_141c446d0(&local_c60,&local_a88,&local_b30,local_b38);
      }
      else {
        (*(code *)(*ppppppplVar17)[3])(ppppppplVar17,0,&local_c38);
        (*(code *)(*ppppppplVar17)[3])(ppppppplVar17,1,&local_be8);
        (*(code *)(*ppppppplVar17)[3])(ppppppplVar17,2,&local_a88);
        uStack_b00 = (undefined1 *)((ulonglong)uStack_b00 & 0xffffffff00000000);
        puStack_c30 = uStack_b00;
        cVar10 = local_c88[0];
        local_c38 = ppppppplVar17;
      }
      local_b08 = local_c38;
      uStack_b00 = puStack_c30;
      if ((cVar10 != '\0') && (local_c68 == '\0')) {
        pcStack_7d0 = local_c88;
        local_7d8 = &DAT_14060d670;
        local_3e8 = &DAT_14060d670;
        local_c88[0] = '\0';
        pcStack_3e0 = pcStack_7d0;
        lVar14 = FUN_1415d8310(&local_3e8,&DAT_146216a38);
        lVar14 = operator_new(0x108,lVar14 + 0x18,1,0);
        ppppppplVar17 = ppppppplVar20;
        if (lVar14 != 0) {
          ppppppplVar17 =
               (longlong *******)
               FRCPassPostProcessPassThrough::FRCPassPostProcessPassThrough(lVar14,0,0);
        }
        ppppppplVar17 =
             (longlong *******)
             FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                       (local_c58,ppppppplVar17);
        local_3d8 = local_c38;
        puStack_3d0 = puStack_c30;
        (*(code *)(*ppppppplVar17)[3])(ppppppplVar17,0,&local_3d8);
        uStack_bf0 = (undefined1 *)((ulonglong)uStack_bf0 & 0xffffffff00000000);
        puStack_c30 = uStack_bf0;
        local_c38 = ppppppplVar17;
        local_bf8 = ppppppplVar17;
      }
    }
    if ((*(int *)(local_b48 + 0x38) < DAT_146a54dd8) &&
       (_Init_thread_header(&DAT_146a54dd8), DAT_146a54dd8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar25 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))
                          (DAT_1468b1f88,L"r.BrightnessCalibration.Enable");
      ppppppplVar17 = ppppppplVar20;
      if (plVar25 != (longlong *)0x0) {
        ppppppplVar17 = (longlong *******)(**(code **)(*plVar25 + 0x38))(plVar25);
      }
      DAT_146a54dd0 = ppppppplVar17;
      _Init_thread_footer(&DAT_146a54dd8);
    }
    if (0 < *(int *)((longlong)DAT_146a54dd0 + 4)) {
      uStack_b50 = &local_c11;
      local_b58 = (longlong *******)&DAT_14060d670;
      local_3c8 = &DAT_14060d670;
      local_c11 = 0;
      puStack_3c0 = uStack_b50;
      lVar14 = FUN_1415d8310(&local_3c8,&DAT_146216a38);
      ppppppplVar17 = (longlong *******)operator_new(0xa8,lVar14 + 0x18,1,0);
      if (ppppppplVar17 != (longlong *******)0x0) {
        TRenderingCompositePassBase<1,1>::TRenderingCompositePassBase<1,1>(ppppppplVar17);
        *ppppppplVar17 = (longlong ******)&PTR_FUN_144e1cd88;
        ppppppplVar20 = ppppppplVar17;
      }
      plVar25 = local_c58;
      iVar31 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar31 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
      }
      *(longlong ********)(*plVar25 + (longlong)iVar31 * 8) = ppppppplVar20;
      local_3b8 = local_c38;
      puStack_3b0 = puStack_c30;
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_3b8);
      uStack_bf0 = (undefined1 *)((ulonglong)uStack_bf0 & 0xffffffff00000000);
      puStack_c30 = uStack_bf0;
      local_c38 = ppppppplVar20;
      local_bf8 = ppppppplVar20;
    }
    lVar14 = DAT_146a51f50;
    if ((int)local_bb8 == 1) {
      cVar10 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar10 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar13 = GetCurrentThreadId(), lVar15 = 4, DVar13 == DAT_1468c21c0)) {
        lVar15 = 0;
      }
      if (*(int *)(lVar14 + lVar15) == 0) {
        FUN_141c42e10(&local_c60);
      }
    }
    plVar25 = aplStack_b98[0];
    lVar14 = local_b68;
    if (aplStack_b98[0] != (longlong *)0x0) {
      LOCK();
      plVar27 = aplStack_b98[0] + 1;
      lVar15 = *plVar27;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*aplStack_b98[0])(aplStack_b98[0]);
        LOCK();
        piVar23 = (int *)((longlong)plVar25 + 0xc);
        iVar31 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        lVar14 = local_b68;
        if (iVar31 == 1) {
          (**(code **)(*aplStack_b98[0] + 8))(aplStack_b98[0],1);
          lVar14 = local_b68;
        }
      }
    }
  }
  lVar15 = local_b48;
  lVar19 = 0;
  iVar31 = *(int *)(local_c50 + 0x1a14);
  if ((*(int *)(local_b48 + 0x38) < DAT_146a54de8) &&
     (_Init_thread_header(&DAT_146a54de8), DAT_146a54de8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar25 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BrightnessCalibration.Enable");
    lVar30 = lVar19;
    if (plVar25 != (longlong *)0x0) {
      lVar30 = (**(code **)(*plVar25 + 0x38))(plVar25);
    }
    DAT_146a54de0 = lVar30;
    _Init_thread_footer(&DAT_146a54de8);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146a54df8) &&
     (_Init_thread_header(&DAT_146a54df8), DAT_146a54df8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar25 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    if (plVar25 != (longlong *)0x0) {
      lVar19 = (**(code **)(*plVar25 + 0x38))(plVar25);
    }
    DAT_146a54df0 = lVar19;
    _Init_thread_footer(&DAT_146a54df8);
  }
  if ((*(int *)(DAT_146a54de0 + 4) == 0) && (*(int *)(DAT_146a54df0 + 4) == 0)) {
    local_c98 = (longlong *******)&local_388;
    local_ca0 = (longlong *******)&local_378;
    local_388 = local_b88;
    lStack_380 = uStack_b80;
    local_378 = local_b08;
    puStack_370 = uStack_b00;
    local_ca8 = (longlong *******)&local_368;
    local_368 = local_b18;
    puStack_360 = uStack_b10;
    local_358 = local_be8;
    uStack_350 = uStack_be0;
    puVar21 = (undefined8 *)FUN_141c43d40(local_218,&local_c60,0,&local_358);
    local_c38 = (longlong *******)*puVar21;
    puStack_c30 = (undefined1 *)puVar21[1];
  }
  FUN_141c42290(&local_c60,&local_be8,&local_b18,&local_b08);
  FUN_141c58510(local_bb0,&local_c60,*(longlong *)(param_3 + 0x10) + 0x28);
  FUN_141c42ca0(&local_c60,&local_be8);
  FUN_141d6a140(local_c50,&local_a90);
  iVar36 = *(int *)(local_1a8[0] + 0x1aac);
  iVar37 = *(int *)(local_1a8[0] + 0x1aa4);
  iVar3 = *(int *)(local_1a8[0] + 0x1aa8);
  iVar4 = *(int *)(local_1a8[0] + 0x1aa0);
  iVar5 = *(int *)(local_1a8[0] + 900);
  iVar6 = *(int *)(local_1a8[0] + 0x37c);
  iVar7 = *(int *)(local_1a8[0] + 0x380);
  iVar8 = *(int *)(local_1a8[0] + 0x378);
  if (((((*(int *)(DAT_146a51f68 + 4) == 0) || (*(int *)(local_1a8[0] + 0x1a38) < 3)) ||
       (cVar10 = FUN_141ce5b10(local_1a8), cVar10 == '\0')) ||
      ((*(char *)(local_1a8[0] + 0x1202) != '\0' || (*(char *)(local_1a8[0] + 0x1203) != '\0')))) ||
     (0.1 <= ABS((float)(iVar7 - iVar8) / (float)(iVar5 - iVar6) -
                 (float)(iVar3 - iVar4) / (float)(iVar36 - iVar37)))) {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x01';
  }
  if (((((iVar31 != 1) && (*(int *)(param_3 + 0x1a14) == 0)) &&
       ((*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0) != local_a90 ||
        (*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4) != local_a8c)))) ||
      (0.01 < local_ac8[0])) && (cVar10 == '\0')) {
    bVar38 = true;
    if (lVar14 == 0) {
LAB_141c4e777:
      if ((local_ac8[0] <= 0.01) && (!bVar38)) goto LAB_141c4e880;
    }
    else if (local_ac8[0] <= 0.01) {
      if (((*(char *)(lVar14 + 0xd8) == '\0') &&
          (lVar15 = FHardwareCursor::GetHandle(&local_c38), lVar15 == lVar14)) &&
         ((*(int *)(DAT_146a51e30 + 4) == 1 ||
          ((*(int *)(DAT_146a51e30 + 4) == 2 &&
           (fVar39 = (float)((*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)) *
                            (*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0))) /
                     (float)((*(int *)(param_3 + 0x374) - *(int *)(param_3 + 0x36c)) *
                            (*(int *)(param_3 + 0x370) - *(int *)(param_3 + 0x368))),
           *(float *)(DAT_146a51e48 + 4) <= fVar39 && fVar39 != *(float *)(DAT_146a51e48 + 4)))))))
      {
        *(undefined1 *)(lVar14 + 0xd9) = 1;
        bVar38 = false;
      }
      goto LAB_141c4e777;
    }
    iVar31 = *(int *)(DAT_146a51dd0 + 4);
    if (iVar31 < 0) {
      iVar36 = 0;
    }
    else {
      iVar36 = 5;
      if (iVar31 < 5) {
        iVar36 = iVar31;
      }
    }
    uVar22 = 0;
    puStack_7a0 = &local_c0e;
    local_7a8 = &DAT_14060d670;
    local_348 = &DAT_14060d670;
    local_c0e = 0;
    puStack_340 = puStack_7a0;
    lVar14 = FUN_1415d8310(&local_348,&DAT_146216a38);
    lVar14 = operator_new(0xd8,lVar14 + 0x18,1,0);
    if (lVar14 != 0) {
      local_ca0 = (longlong *******)((ulonglong)local_ca0 & 0xffffffffffffff00);
      local_ca8 = (longlong *******)((ulonglong)local_ca8 & 0xffffffffffffff00);
      uVar22 = FUN_141cd7400(lVar14,param_3,iVar36,local_ac8);
    }
    ppppppplVar20 =
         (longlong *******)
         FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                   (local_c58,uVar22);
    local_338 = local_c38;
    puStack_330 = puStack_c30;
    (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_338);
    local_328 = local_c38;
    puStack_320 = puStack_c30;
    (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,1,&local_328);
    uStack_ba8 = 0;
    puStack_c30 = (undefined1 *)((ulonglong)uStack_ba4 << 0x20);
    local_c38 = ppppppplVar20;
    local_bb0 = ppppppplVar20;
  }
LAB_141c4e880:
  uVar22 = 0;
  iVar31 = *(int *)(local_c50 + 0x374);
  iVar36 = *(int *)(local_c50 + 0x36c);
  iVar37 = *(int *)(local_c50 + 0x370);
  iVar3 = *(int *)(local_c50 + 0x368);
  piVar23 = (int *)FUN_141d6a140(local_c50,local_298);
  if ((iVar37 - iVar3 == *piVar23) && (iVar31 - iVar36 == piVar23[1])) {
    if (cVar10 != '\0') {
LAB_141c4e8c8:
      local_c0d[1] = 0;
      iVar31 = *(int *)(DAT_146a51f80 + 4);
      pcStack_780 = local_c0d + 1;
      local_788 = &DAT_14060d670;
      local_2e8 = &DAT_14060d670;
      pcStack_2e0 = pcStack_780;
      lVar14 = FUN_1415d8310(&local_2e8,&DAT_146216a38);
      lVar14 = operator_new(0xb8,lVar14 + 0x18,1,0);
      if (lVar14 == 0) {
        ppppppplVar20 = (longlong *******)0x0;
      }
      else {
        ppppppplVar20 = (longlong *******)FUN_141cd72f0(lVar14,param_3,1,iVar31 == 1);
      }
      plVar25 = local_c58;
      iVar31 = (int)local_c58[1];
      *(int *)(local_c58 + 1) = iVar31 + 1;
      if (*(int *)((longlong)local_c58 + 0xc) < iVar31 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c58,iVar31);
      }
      *(longlong ********)(*plVar25 + (longlong)iVar31 * 8) = ppppppplVar20;
      local_2d8 = local_c38;
      puStack_2d0 = puStack_c30;
      (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_2d8);
      uStack_ba8 = 0;
      puStack_c30 = (undefined1 *)((ulonglong)uStack_ba4 << 0x20);
      local_c38 = ppppppplVar20;
      local_bb0 = ppppppplVar20;
    }
  }
  else {
    if (cVar10 != '\0') goto LAB_141c4e8c8;
    local_798 = &DAT_14060d670;
    uVar12 = 0;
    pcStack_790 = local_c0d;
    if (*(int *)(*(longlong *)(param_3 + 0x10) + 0xa0) == 1) {
      uVar12 = 6;
    }
    local_318 = &DAT_14060d670;
    local_c0d[0] = cVar10;
    pcStack_310 = pcStack_790;
    lVar14 = FUN_1415d8310(&local_318,&DAT_146216a38);
    lVar14 = operator_new(0xd8,lVar14 + 0x18,1,0);
    uVar24 = uVar22;
    if (lVar14 != 0) {
      local_ca0 = (longlong *******)((ulonglong)local_ca0 & 0xffffffffffffff00);
      local_ca8 = (longlong *******)CONCAT71(local_ca8._1_7_,1);
      uVar24 = FUN_141cd7400(lVar14,param_3,uVar12,&DAT_1464c26e0);
    }
    ppppppplVar20 =
         (longlong *******)
         FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                   (local_c58,uVar24);
    local_308 = local_c38;
    puStack_300 = puStack_c30;
    (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_308);
    local_2f8 = local_c38;
    puStack_2f0 = puStack_c30;
    (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,1,&local_2f8);
    uStack_ba8 = 0;
    puStack_c30 = (undefined1 *)((ulonglong)uStack_ba4 << 0x20);
    local_c38 = ppppppplVar20;
    local_bb0 = ppppppplVar20;
  }
  uVar11 = local_bc8;
  if ((local_c38 != (longlong *******)0x0) && (*(char *)((longlong)local_c38 + 10) != '\0')) {
    plVar25 = *(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18);
    plVar25 = (longlong *)(**(code **)(*plVar25 + 0x10))(plVar25,&local_c80);
    uVar11 = 1;
    if (*plVar25 == 0) {
      bVar38 = true;
      goto LAB_141c4ead7;
    }
  }
  bVar38 = false;
LAB_141c4ead7:
  if ((uVar11 & 1) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c80);
  }
  if (bVar38) {
    pcStack_770 = local_c0d + 2;
    local_778 = &DAT_14060d670;
    local_2c8 = &DAT_14060d670;
    local_c0d[2] = 0;
    pcStack_2c0 = pcStack_770;
    lVar14 = FUN_1415d8310(&local_2c8,&DAT_146216a38);
    lVar14 = operator_new(0x108,lVar14 + 0x18,1,0);
    if (lVar14 != 0) {
      uVar22 = FRCPassPostProcessPassThrough::FRCPassPostProcessPassThrough(lVar14,0,0);
    }
    ppppppplVar20 =
         (longlong *******)
         FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                   (local_c58,uVar22);
    local_2b8 = local_c38;
    puStack_2b0 = puStack_c30;
    (*(code *)(*ppppppplVar20)[3])(ppppppplVar20,0,&local_2b8);
    uStack_ba8 = 0;
    puStack_c30 = (undefined1 *)((ulonglong)uStack_ba4 << 0x20);
    local_c38 = ppppppplVar20;
    local_bb0 = ppppppplVar20;
  }
  local_bb8 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (undefined8 *)0x0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  puVar21 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))()
  ;
  TRefCountPtr<FRHITexture>::operator=(&local_e8,*puVar21);
  puVar21 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))()
  ;
  TRefCountPtr<FRHITexture>::operator=(&uStack_e0,*puVar21);
  plVar25 = *(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18);
  ppuVar26 = (undefined8 **)(**(code **)(*plVar25 + 0x10))(plVar25,local_bc0);
  puVar32 = local_d8;
  puVar21 = local_d8;
  if (&local_d8 != ppuVar26) {
    puVar21 = *ppuVar26;
    *ppuVar26 = (undefined8 *)0x0;
    if (local_d8 != (undefined8 *)0x0) {
      LOCK();
      piVar23 = (int *)(local_d8 + 1);
      iVar31 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar31 == 1) {
        pcVar1 = (char *)(local_d8 + 2);
        local_d8 = puVar21;
        if ((*pcVar1 == '\0') &&
           ((DAT_146ab62f5 != '\0' ||
            (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
          LOCK();
          bVar38 = *(int *)((longlong)puVar32 + 0xc) == 0;
          if (bVar38) {
            *(int *)((longlong)puVar32 + 0xc) = 1;
          }
          UNLOCK();
          puVar21 = local_d8;
          if (bVar38) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar32);
            puVar21 = local_d8;
          }
        }
        else {
          (**(code **)*puVar32)(puVar32,1);
          puVar21 = local_d8;
        }
      }
    }
  }
  local_d8 = puVar21;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_bc0);
  local_138 = 1;
  local_130 = 0;
  local_128 = 0;
  local_11c = 0;
  local_118 = 1;
  local_114 = 0;
  local_110 = 1;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 1;
  plVar27 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))();
  plVar25 = *(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18);
  lVar14 = *plVar25;
  if (*plVar27 == 0) {
    puVar28 = (undefined4 *)(**(code **)(lVar14 + 0x20))(plVar25,local_268);
    local_124 = *puVar28;
    local_120 = puVar28[1];
  }
  else {
    plVar25 = (longlong *)(**(code **)(lVar14 + 8))();
    local_124 = *(undefined4 *)(*plVar25 + 0x60);
    plVar25 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))()
    ;
    local_120 = *(undefined4 *)(*plVar25 + 100);
  }
  if ((local_c38 == (longlong *******)0x0) || (*(char *)((longlong)local_c38 + 10) == '\0')) {
    bVar38 = false;
  }
  else {
    bVar38 = true;
  }
  local_112 = 1;
  uVar11 = 1;
  if (bVar38) {
    uVar11 = 0x10000;
  }
  local_108 = CONCAT44(local_108._4_4_ | uVar11,(undefined4)local_108);
  local_10c = 2;
  if (bVar38) {
    local_10c = 0x25;
  }
  if (local_c68 != '\0') {
    local_10c = DAT_1464c9c38;
  }
  local_f8 = L"FinalPostProcessColor";
  FUN_141ce1040(&PTR_PTR_1464c2560,&local_138,&local_bb8,&local_e8);
  local_2a8 = local_c38;
  puStack_2a0 = puStack_c30;
  OverrideRenderTarget(&local_2a8,&local_bb8,&local_138);
  local_bf8 = (longlong *******)0x0;
  uStack_bf0 = (undefined1 *)0x0;
  ppppplVar29 = (longlong *****)FHardwareCursor::GetHandle(&local_c38);
  lVar14 = (longlong)(int)uStack_bf0;
  iVar31 = (int)uStack_bf0 + 1;
  if ((int)uStack_bf0._4_4_ < iVar31) {
    uVar34 = (ulonglong)uStack_bf0 & 0xffffffff;
    uStack_bf0._0_4_ = iVar31;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_bf8,uVar34);
    iVar31 = (int)uStack_bf0;
  }
  uStack_bf0._0_4_ = iVar31;
  local_bf8[lVar14] = (longlong ******)ppppplVar29;
  if (local_ae8 != 0) {
    ppppplVar29 = (longlong *****)FHardwareCursor::GetHandle(&local_ae8);
    iVar31 = (int)uStack_bf0;
    lVar14 = (longlong)(int)uStack_bf0;
    uStack_bf0._0_4_ = (int)uStack_bf0 + 1;
    if ((int)uStack_bf0._4_4_ < (int)uStack_bf0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_bf8,iVar31);
    }
    local_bf8[lVar14] = (longlong ******)ppppplVar29;
  }
  FUN_141cf2100(local_1a8,&local_bf8,L"PostProcessing");
  if ((((local_c38 != (longlong *******)0x0) && (*(char *)((longlong)local_c38 + 10) != '\0')) &&
      (*(char *)((longlong)local_c38 + 0xb) != '\0')) &&
     ((DAT_146ab62f0 != '\0' && (lVar14 = (*(code *)(*local_c38)[0x10])(), lVar14 != 0)))) {
    puVar32 = (undefined8 *)(*(longlong *)(local_c60 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar32 + 3;
    if (*(undefined8 **)(local_c60 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(local_c60 + 0x30,0x20);
      puVar32 = (undefined8 *)(*(longlong *)(local_c60 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar32 + 3;
    }
    *(undefined8 **)(local_c60 + 0x30) = puVar21;
    *(int *)(local_c60 + 0x14) = *(int *)(local_c60 + 0x14) + 1;
    **(undefined8 **)(local_c60 + 8) = puVar32;
    *(undefined8 **)(local_c60 + 8) = puVar32 + 1;
    puVar32[1] = 0;
    *puVar32 = &PTR_LAB_144dc9cc0;
    puVar32[2] = lVar14;
  }
  if (local_ae8 != 0) {
    lVar14 = FRenderingCompositeOutputRef::GetOutput(&local_ae8);
    TRefCountPtr<IPooledRenderTarget>::operator=(local_b40 + 0x1160,*(undefined8 *)(lVar14 + 0x50));
  }
  if (local_bf8 != (longlong *******)0x0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_a0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  FUN_141a82840(&local_b8);
  FUN_141a82770(local_d0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&uStack_e0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_e8);
  if (local_bb8 != (longlong *)0x0) {
    (**(code **)(*local_bb8 + 0x30))();
  }
  if (*(longlong *)
       (**(longlong **)(param_3 + 0x10) + -8 +
       (longlong)(int)(*(longlong **)(param_3 + 0x10))[1] * 8) == param_3) {
    uVar22 = FSceneRenderTargets::Get(local_a18);
    FUN_141cd9760(uVar22,local_a18,0xffffffff);
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_1a8);
  if (local_aa0 == '\0') {
    local_aa0 = '\x01';
    *(int *)(local_ab8 + 4) = *(int *)(local_ab8 + 4) + -1;
    if (local_aa8 != local_ab8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_ab8 = local_ab0;
    local_ab8[3] = local_a98;
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
  return;
}



// FUNCTION 141c4f2c0 Process body=286 status=ok
// SIG undefined Process(void)

void FRCPassFFTBloom::Process(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  cVar3 = FUN_141c48890();
  if (cVar3 == '\0') {
    FUN_141c48e00(param_2,*(undefined8 *)(param_1 + 0xb8),param_1 + 0xd0,
                  *(longlong *)(param_1 + 0xc0) + 0x10,param_1 + 0xd0);
    lVar1 = *(longlong *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x10);
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 1;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *puVar6 = uVar2;
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
      puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar5;
    *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar5 + 2) = 1;
    puVar5[3] = puVar6;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 1;
    puVar5[5] = 0;
  }
  return;
}



// FUNCTION 141c4f3e0 FUN_141c4f3e0 body=2225 status=ok
// SIG undefined FUN_141c4f3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c4f3e0(undefined8 param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  char cVar18;
  int iVar19;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  float local_1f0;
  float local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  int iStack_190;
  uint uStack_18c;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1b8 = local_1b8 & 0xffffffff00000000;
  bVar5 = false;
  local_188 = *param_2;
  FViewInfo::SwapEyeAdaptationRTs(local_188,param_2[8]);
  plVar8 = (longlong *)FViewInfo::GetEyeAdaptation(*param_2,param_2[8]);
  uVar9 = FViewInfo::GetLastEyeAdaptationRT(*param_2,param_2[8]);
  local_130 = uVar9;
  lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar2 = *(undefined8 *)(lVar10 + 0x14);
  local_170 = uVar2;
  lVar10 = FRenderingCompositePass::GetInputDesc(param_1,0);
  uVar12 = *(undefined8 *)(lVar10 + 0x14);
  iVar14 = (int)((ulonglong)uVar12 >> 0x20);
  uVar6 = (*(int *)((longlong)param_2 + 0x1c) + -1 + iVar14) / iVar14;
  iVar14 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
    }
  }
  if (uVar6 == 0) {
    iVar14 = 0x20;
  }
  else {
    iVar14 = 0x1f - iVar14;
  }
  uVar6 = uVar6 - 1;
  iVar7 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (uVar6 == 0) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x1f' - (char)iVar7;
  }
  local_1a8 = (undefined *)param_2[1];
  uStack_1a0 = param_2[2];
  iVar14 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar18 & 0x1f);
  local_1b8 = CONCAT44(((int)((ulonglong)uStack_1a0 >> 0x20) + -1 + iVar14) / iVar14,
                       ((int)uStack_1a0 + -1 + iVar14) / iVar14);
  local_198._4_4_ = (int)((ulonglong)local_1a8 >> 0x20);
  lVar10 = param_2[8];
  local_198 = CONCAT44(local_198._4_4_ / iVar14,
                       (int)((longlong)
                             ((ulonglong)(uint)((int)local_1a8 >> 0x1f) << 0x20 |
                             (ulonglong)local_1a8 & 0xffffffff) / (longlong)iVar14));
  puVar1 = (ulonglong *)(lVar10 + 0x30);
  local_180 = local_198;
  local_178 = local_1b8;
  local_1b8 = plVar8[2];
  puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar15 + 3;
  local_138 = uVar12;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar13) {
    local_198 = lVar10;
    FMemStackBase::AllocateNewChunk(puVar1,0x20);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar15 + 3;
    lVar10 = local_198;
  }
  *puVar1 = (ulonglong)puVar13;
  plVar11 = (longlong *)0x0;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  local_198 = 0;
  **(undefined8 **)(lVar10 + 8) = puVar15;
  *(undefined8 **)(lVar10 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_144e1b868;
  puVar15[2] = local_1b8;
  FUN_141a19150(param_2[8],plVar8[1],0,1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_198);
  uStack_18c = local_170._4_4_;
  local_198 = 0;
  iVar19 = (int)uVar2;
  uStack_1a0._4_4_ = local_170._4_4_;
  local_1a8 = (undefined *)0x0;
  iStack_190 = iVar19;
  uStack_1a0._0_4_ = iVar19;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_1a8);
  iVar14 = (local_178._4_4_ - local_180._4_4_) + 0xf;
  iVar7 = ((int)local_178 - (int)local_180) + 0xf;
  uVar6 = ((int)((iVar14 >> 0x1f & 0xfU) + iVar14) >> 4) *
          ((int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4) * 0x40;
  if ((uVar6 < 0x400) && (*(int *)(DAT_146a50ac8 + 4) != 0)) {
    uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
    lVar10 = *(longlong *)(local_188 + 0x3090);
    local_198 = CONCAT44(1.0 / (float)local_138._4_4_,1.0 / (float)(int)uVar12);
    local_208 = uVar9;
    local_200 = plVar8;
    if (uVar6 < 0x201) {
      if (uVar6 < 0x101) {
        if (uVar6 < 0x81) {
          if (uVar6 < 0x41) {
            local_1a8 = &DAT_146a54930;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar10 + 0x38,&local_1b8,&local_1a8);
            plVar17 = plVar11;
            if ((int)local_1b8 != -1) {
              plVar17 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar10 + 0x38))
              ;
            }
            plVar16 = plVar17 + 2;
            if (plVar17 == (longlong *)0x0) {
              plVar16 = plVar11;
            }
            FUN_141c492e0(*plVar16,param_2,&local_180,&local_198);
          }
          else {
            local_1a8 = &DAT_146a547e0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar10 + 0x38,&local_1b8,&local_1a8);
            plVar17 = plVar11;
            if ((int)local_1b8 != -1) {
              plVar17 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar10 + 0x38))
              ;
            }
            plVar16 = plVar17 + 2;
            if (plVar17 == (longlong *)0x0) {
              plVar16 = plVar11;
            }
            FUN_141c492e0(*plVar16,param_2,&local_180,&local_198);
          }
        }
        else {
          local_1a8 = &DAT_146a54690;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar10 + 0x38,&local_1b8,&local_1a8);
          plVar17 = plVar11;
          if ((int)local_1b8 != -1) {
            plVar17 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar10 + 0x38));
          }
          plVar16 = plVar17 + 2;
          if (plVar17 == (longlong *)0x0) {
            plVar16 = plVar11;
          }
          FUN_141c492e0(*plVar16,param_2,&local_180,&local_198);
        }
      }
      else {
        local_1a8 = &DAT_146a54540;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar10 + 0x38,&local_1b8,&local_1a8);
        plVar17 = plVar11;
        if ((int)local_1b8 != -1) {
          plVar17 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar10 + 0x38));
        }
        plVar16 = plVar17 + 2;
        if (plVar17 == (longlong *)0x0) {
          plVar16 = plVar11;
        }
        FUN_141c492e0(*plVar16,param_2,&local_180,&local_198);
      }
    }
    else {
      local_1a8 = &DAT_146a543f0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x38,&local_1b8,&local_1a8);
      plVar17 = plVar11;
      if ((int)local_1b8 != -1) {
        plVar17 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar10 + 0x38));
      }
      plVar16 = plVar17 + 2;
      if (plVar17 == (longlong *)0x0) {
        plVar16 = plVar11;
      }
      FUN_141c492e0(*plVar16,param_2,&local_180,&local_198);
    }
  }
  else {
    local_e8 = 0;
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_e0 = 0;
    local_dc = 0x26;
    local_d4 = 0;
    local_cc = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    FUN_14049afe0(param_2[8],&local_128);
    local_f8 = FUN_1404a0ce0();
    uStack_f0 = FUN_140985530();
    local_e8 = FUN_1409853f0();
    lVar10 = param_2[0xc];
    uStack_1a0._0_4_ = 0;
    local_1a8 = &DAT_146a51f90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&local_1b8,&local_1a8);
    plVar17 = plVar11;
    if ((int)local_1b8 != -1) {
      plVar17 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
    plVar16 = plVar17 + 2;
    if (plVar17 == (longlong *)0x0) {
      plVar16 = plVar11;
    }
    local_1a8 = &DAT_146a50ec0;
    lVar4 = *plVar16;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&local_1b8,&local_1a8);
    plVar17 = plVar11;
    if ((int)local_1b8 != -1) {
      plVar17 = (longlong *)((longlong)(int)local_1b8 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar16 = plVar17 + 2;
    if (plVar17 == (longlong *)0x0) {
      plVar16 = plVar11;
    }
    lVar10 = *plVar16;
    local_128 = DAT_1464c2720;
    if (lVar4 == 0) {
      local_188 = 0;
      bVar5 = true;
    }
    else {
      lVar3 = *(longlong *)(lVar4 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar11 = *(longlong **)(lVar3 + 0x38);
    }
    uVar12 = 0;
    plStack_120 = plVar11;
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_188);
    }
    bVar5 = false;
    if (lVar10 == 0) {
      bVar5 = true;
      local_188 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      uVar12 = *(undefined8 *)(lVar3 + 0x40);
    }
    local_108 = uVar12;
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_188);
    }
    local_dc = local_dc & 0xffffffff00000000;
    FUN_141ed6ac0(param_2[8],&local_128,2,1);
    FUN_141c59b80(lVar10,param_2,&local_180,local_130);
    local_1c0 = 1;
    local_1c8 = 1;
    local_1e8 = (float)(int)local_170._4_4_;
    local_1f0 = (float)iVar19;
    local_1f8 = 0;
    local_200 = (longlong *)((ulonglong)local_200._4_4_ << 0x20);
    local_208 = CONCAT44(local_208._4_4_,local_1e8);
    local_1e0 = uVar2;
    local_1d8 = uVar2;
    local_1d0 = lVar4;
    DrawRectangle(param_2[8]);
  }
  lVar10 = param_2[8];
  lVar4 = plVar8[2];
  plVar11 = (longlong *)plVar8[1];
  local_168 = 0xffffffff00000000;
  uStack_160 = 0xffffffffffffffff;
  local_148 = 0xffffffff;
  uStack_140 = 0;
  local_158 = 0xffffffffffffffff;
  uStack_150 = 0xffffffffffffffff;
  puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 10;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x58);
    puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 10;
  }
  *(undefined8 **)(lVar10 + 0x30) = puVar13;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar15;
  *(undefined8 **)(lVar10 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar15 + 2) = (undefined4)local_168;
  *(undefined4 *)((longlong)puVar15 + 0x14) = local_168._4_4_;
  *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_160;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_160._4_4_;
  *(undefined4 *)(puVar15 + 4) = (undefined4)local_158;
  *(undefined4 *)((longlong)puVar15 + 0x24) = local_158._4_4_;
  *(undefined4 *)(puVar15 + 5) = (undefined4)uStack_150;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uStack_150._4_4_;
  *(undefined4 *)(puVar15 + 6) = (undefined4)local_148;
  *(undefined4 *)((longlong)puVar15 + 0x34) = local_148._4_4_;
  *(undefined4 *)(puVar15 + 7) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uStack_140._4_4_;
  puVar15[8] = plVar11;
  puVar15[9] = lVar4;
  lVar10 = (**(code **)(*plVar11 + 8))(plVar11);
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar15[8] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar15[8] + 0x20))();
  }
  lVar10 = (**(code **)(*(longlong *)puVar15[9] + 8))();
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar15[9] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar15[9] + 0x20))();
  }
  lVar10 = param_2[8];
  lVar4 = plVar8[2];
  puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 3;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x20);
    puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 3;
  }
  *(undefined8 **)(lVar10 + 0x30) = puVar13;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar15;
  *(undefined8 **)(lVar10 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_144e1b878;
  puVar15[2] = lVar4;
  FUN_141d739b0(*param_2);
  return;
}



// FUNCTION 141c4fca0 FUN_141c4fca0 body=1852 status=ok
// SIG undefined FUN_141c4fca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c4fca0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_518 [32];
  undefined8 local_4f8;
  float local_4f0;
  undefined8 local_4e8;
  float local_4e0;
  float local_4d8;
  undefined *local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined4 local_4b8;
  undefined1 local_4b0;
  undefined4 local_4a8;
  undefined8 local_498;
  undefined8 local_488;
  ulonglong uStack_480;
  undefined *local_478;
  ulonglong uStack_470;
  longlong *local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  longlong local_408;
  undefined8 *local_400;
  undefined8 local_3f8;
  longlong *plStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  ulonglong local_3ac;
  undefined8 local_3a4;
  undefined4 local_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_354;
  undefined8 local_34c;
  undefined4 local_344;
  undefined1 local_338 [192];
  undefined4 local_278;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_518;
  local_498 = local_498 & 0xffffffff00000000;
  plVar15 = (longlong *)0x0;
  local_468 = param_2;
  lVar8 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar8 != 0) {
    local_408 = *param_2;
    puVar2 = *(undefined **)(param_1 + 0x34);
    uVar3 = *(undefined8 *)(lVar8 + 0x14);
    iVar7 = (int)((ulonglong)uVar3 >> 0x20);
    uVar6 = (*(int *)((longlong)param_2 + 0x1c) + -1 + iVar7) / iVar7;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar13 = 0x20;
    cVar12 = '\0';
    if (uVar6 != 0) {
      iVar13 = 0x1f - iVar7;
    }
    uVar6 = uVar6 - 1;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar12 = '\x1f' - (char)iVar7;
    }
    uVar4 = param_2[1];
    iVar14 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
    iVar7 = ((int)param_2[2] + -1 + iVar14) / iVar14;
    local_488 = CONCAT44(((int)((ulonglong)param_2[2] >> 0x20) + -1 + iVar14) / iVar14,iVar7);
    uStack_410 = local_488;
    iVar13 = (int)((longlong)((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
                  (longlong)iVar14);
    local_498._4_4_ = (int)(uVar4 >> 0x20);
    local_498 = CONCAT44(local_498._4_4_ / iVar14,iVar13);
    local_418 = local_498;
    local_458 = local_498;
    uStack_450 = local_488;
    local_478 = puVar2;
    local_400 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x20,param_2);
    local_438 = CONCAT62(local_438._2_6_,0x102);
    local_448 = *local_400;
    uStack_440 = 0xffffffff00000000;
    local_488 = 0;
    uStack_480 = 0;
    FUN_140c63b80(local_338,1,&local_448,&local_488);
    local_488 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(local_488,local_278,local_338,local_1a8);
    puVar1 = (ulonglong *)(local_488 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(local_488 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 0x54;
    if (*(undefined8 **)(local_488 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(puVar1,0x2a8);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar10 + 0x54;
    }
    *puVar1 = (ulonglong)puVar9;
    lVar11 = 0;
    *(int *)(local_488 + 0x14) = *(int *)(local_488 + 0x14) + 1;
    **(undefined8 **)(local_488 + 8) = puVar10;
    *(undefined8 **)(local_488 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar10 + 2,local_338);
    local_488 = 0;
    uStack_480 = CONCAT44((int)((ulonglong)local_478 >> 0x20),(int)puVar2);
    local_478 = (undefined *)0x0;
    uStack_470 = uStack_480;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_478);
    local_3b8 = 0;
    local_3f8 = 0;
    plStack_3f0 = (longlong *)0x0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_398 = 0;
    uStack_390 = 0;
    local_3b0 = 0;
    local_3ac = 0x26;
    local_3a4 = 0;
    local_39c = 0;
    local_388 = 0;
    local_380 = 0;
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_354 = 0;
    local_34c = 0;
    local_344 = 0;
    FUN_14049afe0(param_2[8],&local_3f8);
    local_3c8 = FUN_1404a0ce0();
    uStack_3c0 = FUN_140985530();
    local_3b8 = FUN_1409853f0();
    lVar8 = param_2[0xc];
    uStack_470 = uStack_470 & 0xffffffff00000000;
    local_478 = &DAT_146a51f90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_498,&local_478);
    if ((int)local_498 != -1) {
      lVar11 = (longlong)(int)local_498 * 0x20 + *(longlong *)(lVar8 + 0x38);
    }
    uStack_470 = uStack_470 & 0xffffffff00000000;
    plVar16 = (longlong *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      plVar16 = plVar15;
    }
    local_478 = &DAT_146a50d70;
    lVar11 = *plVar16;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_498,&local_478);
    if ((int)local_498 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)(int)local_498 * 0x20 + *(longlong *)(lVar8 + 0x38);
    }
    plVar16 = (longlong *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      plVar16 = plVar15;
    }
    lVar8 = *plVar16;
    local_3f8 = DAT_1464c2720;
    if (lVar11 == 0) {
      local_478 = (undefined *)0x0;
      plVar16 = (longlong *)0x1;
      plStack_3f0 = plVar15;
    }
    else {
      local_478 = *(undefined **)(lVar11 + 0x48);
      if (local_478[0x28] == '\0') {
        FUN_1419f3850(local_478);
      }
      plStack_3f0 = *(longlong **)(local_478 + 0x38);
      plVar16 = plVar15;
    }
    if (plVar16 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_478);
    }
    bVar5 = false;
    if (lVar8 == 0) {
      bVar5 = true;
      local_3d8 = 0;
      local_478 = (undefined *)0x0;
    }
    else {
      local_478 = *(undefined **)(lVar8 + 0x48);
      if (local_478[0x28] == '\0') {
        FUN_1419f3850(local_478);
      }
      local_3d8 = *(undefined8 *)(local_478 + 0x40);
    }
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
    }
    plVar15 = local_468;
    local_3ac = local_3ac & 0xffffffff00000000;
    FUN_141ed6ac0(local_468[8],&local_3f8,2,1);
    local_468 = *(longlong **)(lVar8 + 0x48);
    if (*(char *)((longlong)local_468 + 0x28) == '\0') {
      FUN_1419f3850(local_468);
    }
    local_488 = *(undefined8 *)((longlong)local_468 + 0x40);
    FUN_141aa9690(lVar8,plVar15[8],local_488,*(undefined8 *)(*plVar15 + 0x20));
    local_4f8 = FUN_1404a0e20();
    local_4e8 = 0;
    local_4f0 = 0.0;
    thunk_FUN_141ca99a0(lVar8 + 0xc0,plVar15[8],&local_488,plVar15);
    local_a8 = 0;
    uStack_a0 = 0x3f80000000000000;
    local_98 = 0;
    uStack_90 = 0x3f80000000000000;
    local_88 = 0;
    uStack_80 = 0x3f80000000000000;
    local_78 = 0;
    uStack_70 = 0x3f80000000000000;
    FUN_141c452f0(DAT_1464c2390,*plVar15,&local_a8);
    local_4f0 = 0.0;
    local_4f8._0_4_ = 4;
    SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
              (plVar15[8],local_488,lVar8 + 0x1bc,&local_a8);
    local_4a8 = 1;
    local_4e0 = (float)(iVar7 - iVar13);
    local_4b0 = *(undefined1 *)((longlong)plVar15 + 0x69);
    local_4b8 = *(undefined4 *)(local_408 + 0xf60);
    local_4d8 = (float)(uStack_410._4_4_ - local_418._4_4_);
    local_4e8 = CONCAT44(local_4e8._4_4_,(float)local_418._4_4_);
    local_4f0 = (float)iVar13;
    local_4f8 = CONCAT44(local_4f8._4_4_,(float)(uStack_450._4_4_ - local_458._4_4_));
    local_4d0 = puVar2;
    local_4c8 = uVar3;
    local_4c0 = lVar11;
    FUN_141ce13a0();
    local_448 = 0xffffffff00000000;
    uStack_440 = 0xffffffffffffffff;
    local_438 = 0xffffffffffffffff;
    uStack_430 = 0xffffffffffffffff;
    lVar8 = plVar15[8];
    uVar3 = local_400[1];
    plVar15 = (longlong *)*local_400;
    local_428 = 0xffffffff;
    uStack_420 = 0;
    puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 10;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
      puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 10;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar9;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar10;
    *(undefined8 **)(lVar8 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar10 + 2) = (undefined4)local_448;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_448._4_4_;
    *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_440;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_440._4_4_;
    *(undefined4 *)(puVar10 + 4) = (undefined4)local_438;
    *(undefined4 *)((longlong)puVar10 + 0x24) = local_438._4_4_;
    *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_430;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_430._4_4_;
    *(undefined4 *)(puVar10 + 6) = (undefined4)local_428;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_428._4_4_;
    *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_420;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_420._4_4_;
    puVar10[8] = plVar15;
    puVar10[9] = uVar3;
    lVar8 = (**(code **)(*plVar15 + 8))(plVar15);
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar10[8] + 0x20))();
    }
    lVar8 = (**(code **)(*(longlong *)puVar10[9] + 8))();
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar10[9] + 0x20))();
    }
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_338);
  }
  return;
}



// FUNCTION 141c503e0 FUN_141c503e0 body=3410 status=ok
// SIG undefined FUN_141c503e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c503e0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  longlong *plVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_308 [32];
  ulonglong local_2e8;
  float local_2e0;
  float local_2d8;
  float local_2d0;
  float local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a0;
  undefined4 local_298;
  byte local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong local_270;
  longlong *local_268;
  int local_260;
  int local_25c;
  uint local_258;
  uint local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244 [3];
  longlong local_238;
  longlong *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  uint local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [24];
  longlong local_78 [2];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar12 = (longlong *)0x0;
  local_250 = 0;
  local_268 = param_2;
  lVar10 = FSceneRenderTargets::Get();
  iVar19 = 0x20;
  local_1c8 = 0x1f;
  uVar8 = (uint)*(undefined8 *)(lVar10 + 0x378);
  if (uVar8 != 0) {
    for (; uVar8 >> local_1c8 == 0; local_1c8 = local_1c8 + -1) {
    }
  }
  iVar23 = iVar19;
  if (uVar8 != 0) {
    iVar23 = 0x1f - local_1c8;
  }
  uVar8 = uVar8 - 1;
  local_1c4 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> local_1c4 == 0; local_1c4 = local_1c4 + -1) {
    }
  }
  iVar9 = iVar19;
  if (uVar8 != 0) {
    iVar9 = 0x1f - local_1c4;
  }
  uVar21 = (0x20U - iVar9 & ~((iVar23 << 0x1a) >> 0x1f)) - 1;
  local_1c0 = 0x1f;
  uVar8 = (uint)((ulonglong)*(undefined8 *)(lVar10 + 0x378) >> 0x20);
  if (uVar8 != 0) {
    for (; uVar8 >> local_1c0 == 0; local_1c0 = local_1c0 + -1) {
    }
  }
  iVar23 = iVar19;
  if (uVar8 != 0) {
    iVar23 = 0x1f - local_1c0;
  }
  uVar8 = uVar8 - 1;
  local_1bc = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> local_1bc == 0; local_1bc = local_1bc + -1) {
    }
  }
  if (uVar8 != 0) {
    iVar19 = 0x1f - local_1bc;
  }
  lVar10 = param_2[8];
  uVar8 = (0x20U - iVar19 & ~((iVar23 << 0x1a) >> 0x1f)) - 1;
  local_254 = uVar8;
  if (uVar8 <= uVar21) {
    local_254 = uVar21;
  }
  iVar19 = 1 << ((byte)uVar21 & 0x1f);
  iVar23 = 1 << ((byte)uVar8 & 0x1f);
  local_280 = CONCAT44(iVar23,iVar19);
  local_270 = lVar10;
  local_278 = FSceneRenderTargets::Get(lVar10);
  local_238 = *param_2;
  uVar11 = FUN_141cf3cd0(param_1 + 0x20,param_2);
  FSceneRenderTargetItem::FSceneRenderTargetItem(&local_a8,uVar11);
  local_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_138 = FUN_1404a0ce0();
  local_130 = FUN_140985530();
  local_128 = FUN_1409853f0();
  lVar13 = param_2[0xc];
  local_1a8 = 0;
  local_1b0 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_24c,&local_1b0);
  plVar22 = plVar12;
  if (local_24c != -1) {
    plVar22 = (longlong *)((longlong)local_24c * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  local_198 = 0;
  plVar14 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar14 = plVar12;
  }
  local_1a0 = &DAT_146a54aa0;
  lVar2 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_248,&local_1a0);
  plVar22 = plVar12;
  if (local_248 != -1) {
    plVar22 = (longlong *)((longlong)local_248 * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  plVar14 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar14 = plVar12;
  }
  lVar13 = *plVar14;
  local_168 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_1b8 = 0;
    plVar22 = (longlong *)0x1;
    local_160 = plVar12;
  }
  else {
    lVar16 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar16 + 0x28) == '\0') {
      FUN_1419f3850(lVar16);
    }
    local_160 = *(longlong **)(lVar16 + 0x38);
    plVar22 = plVar12;
  }
  plVar12 = (longlong *)0x0;
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b8);
  }
  bVar3 = false;
  if (lVar13 == 0) {
    bVar3 = true;
    local_230 = (longlong *)0x0;
  }
  else {
    lVar16 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar16 + 0x28) == '\0') {
      FUN_1419f3850(lVar16);
    }
    plVar12 = *(longlong **)(lVar16 + 0x40);
  }
  local_148 = plVar12;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_230);
  }
  bVar4 = false;
  bVar3 = false;
  local_11c = 0;
  local_2e8 = local_2e8 & 0xffffffffffffff00;
  SetRenderTarget(lVar10,local_a8,0,0);
  plVar12 = local_268;
  FUN_14049afe0(local_268[8],&local_168);
  FUN_141ed6ac0(plVar12[8],&local_168,2,1);
  lVar10 = *(longlong *)(lVar2 + 0x48);
  uVar11 = *(undefined8 *)(*plVar12 + 0x20);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  plVar12 = local_268;
  FUN_141c07aa0(lVar2,local_268[8],*(undefined8 *)(lVar10 + 0x38),uVar11);
  FUN_141c3d910(lVar13,plVar12[8],plVar12);
  lVar10 = local_270;
  puVar18 = (undefined8 *)(*(longlong *)(local_270 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar18 + 5;
  if (*(undefined8 **)(local_270 + 0x38) < puVar17) {
    FMemStackBase::AllocateNewChunk(local_270 + 0x30);
    puVar18 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar18 + 5;
  }
  uVar11 = local_280;
  *(undefined8 **)(lVar10 + 0x30) = puVar17;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar18;
  *(undefined8 **)(lVar10 + 8) = puVar18 + 1;
  puVar18[2] = 0;
  *(undefined4 *)(puVar18 + 3) = 0;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59420;
  *(int *)((longlong)puVar18 + 0x1c) = iVar19;
  *(int *)(puVar18 + 4) = iVar23;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
  local_2b8 = *(undefined8 *)(local_278 + 0x378);
  local_298 = 1;
  local_2d8 = (float)*(int *)(local_238 + 0x1aa4);
  local_2a0 = *(undefined1 *)((longlong)plVar12 + 0x69);
  local_2a8 = *(undefined4 *)(local_238 + 0xf60);
  local_2c0 = local_280;
  local_2e0 = (float)*(int *)(local_238 + 0x1aa0);
  local_2c8 = (float)(*(int *)(local_238 + 0x1aac) - *(int *)(local_238 + 0x1aa4));
  local_2d0 = (float)(*(int *)(local_238 + 0x1aa8) - *(int *)(local_238 + 0x1aa0));
  local_2e8 = CONCAT44(local_2e8._4_4_,(float)iVar23);
  local_2b0 = lVar2;
  FUN_141ce13a0(lVar10);
  uVar6 = local_a0;
  plVar12 = local_a8;
  puVar1 = (ulonglong *)(lVar10 + 0x30);
  puVar18 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  local_1f8 = 0xffffffff00000000;
  uStack_1f0 = 0xffffffffffffffff;
  puVar17 = puVar18 + 10;
  local_1e8 = 0xffffffffffffffff;
  uStack_1e0 = 0xffffffffffffffff;
  local_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar17) {
    FMemStackBase::AllocateNewChunk(puVar1,0x58);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar18 + 10;
  }
  *puVar1 = (ulonglong)puVar17;
  *(int *)(local_270 + 0x14) = *(int *)(local_270 + 0x14) + 1;
  **(undefined8 **)(local_270 + 8) = puVar18;
  *(undefined8 **)(local_270 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar18 + 2) = (undefined4)local_1f8;
  *(undefined4 *)((longlong)puVar18 + 0x14) = local_1f8._4_4_;
  *(undefined4 *)(puVar18 + 3) = (undefined4)uStack_1f0;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = uStack_1f0._4_4_;
  *(undefined4 *)(puVar18 + 4) = (undefined4)local_1e8;
  *(undefined4 *)((longlong)puVar18 + 0x24) = local_1e8._4_4_;
  *(undefined4 *)(puVar18 + 5) = (undefined4)uStack_1e0;
  *(undefined4 *)((longlong)puVar18 + 0x2c) = uStack_1e0._4_4_;
  *(undefined4 *)(puVar18 + 6) = (undefined4)local_1d8;
  *(undefined4 *)((longlong)puVar18 + 0x34) = local_1d8._4_4_;
  *(undefined4 *)(puVar18 + 7) = (undefined4)uStack_1d0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = uStack_1d0._4_4_;
  puVar18[8] = plVar12;
  puVar18[9] = uVar6;
  lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
  if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[8] + 0x18))(), lVar13 == 0)) {
    (**(code **)(*(longlong *)puVar18[8] + 0x20))();
  }
  lVar13 = (**(code **)(*(longlong *)puVar18[9] + 8))();
  if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[9] + 0x18))(), lVar13 == 0)) {
    (**(code **)(*(longlong *)puVar18[9] + 0x20))();
  }
  local_278 = uVar11;
  local_288 = 1;
  iVar19 = iVar19 / 2;
  local_280._4_4_ = SUB84(uVar11,4);
  iVar23 = local_280._4_4_ / 2;
  local_280 = CONCAT44(iVar23,iVar19);
  if (1 < local_254) {
    local_258 = 1;
    plVar12 = local_230;
    plVar22 = local_230;
    do {
      local_2e8 = local_2e8 & 0xffffffffffffff00;
      local_260 = 1;
      if (0 < iVar19) {
        local_260 = iVar19;
      }
      local_25c = 1;
      if (0 < iVar23) {
        local_25c = iVar23;
      }
      local_280 = CONCAT44(local_25c,local_260);
      SetRenderTarget(local_270,local_a8,local_288,0);
      plVar14 = (longlong *)0x0;
      iVar19 = 0;
      lVar13 = local_268[8];
      uVar8 = *(uint *)(lVar13 + 0x98);
      local_118 = CONCAT44(local_118._4_4_,uVar8);
      plVar15 = plVar14;
      if (uVar8 != 0) {
        do {
          lVar2 = *(longlong *)(lVar13 + 0xa0 + (longlong)plVar15 * 0x18);
          if (lVar2 == 0) {
            *(undefined4 *)((longlong)&local_118 + (longlong)plVar15 * 4 + 4) = 0;
          }
          else {
            *(undefined4 *)((longlong)&local_118 + (longlong)plVar15 * 4 + 4) =
                 *(undefined4 *)(lVar2 + 0x3c);
            *(undefined4 *)((longlong)&local_f8 + (longlong)plVar15 * 4 + 4) =
                 *(undefined4 *)(*(longlong *)(lVar13 + 0xa0 + (longlong)plVar15 * 0x18) + 0x40);
          }
          *(undefined1 *)((longlong)&local_d8 + 4 + (longlong)plVar15) =
               *(undefined1 *)(lVar13 + 0xb0 + (longlong)plVar15 * 0x18);
          *(undefined1 *)((longlong)&local_d0 + 4 + (longlong)plVar15) =
               *(undefined1 *)(lVar13 + 0xb1 + (longlong)plVar15 * 0x18);
          if (*(int *)((longlong)&local_118 + (longlong)plVar15 * 4 + 4) != 0) {
            local_b4 = CONCAT22(local_b4._2_2_,
                                *(undefined2 *)
                                 (*(longlong *)(lVar13 + 0xa0 + (longlong)plVar15 * 0x18) + 0x38));
          }
          uVar21 = (int)plVar15 + 1;
          plVar15 = (longlong *)(ulonglong)uVar21;
        } while (uVar21 < uVar8);
      }
      if (*(longlong *)(lVar13 + 0x160) == 0) {
        local_c4 = local_c4 & 0xffffffff00000000;
      }
      else {
        iVar19 = *(int *)(*(longlong *)(lVar13 + 0x160) + 0x3c);
        local_c4 = CONCAT44(*(undefined4 *)(*(longlong *)(lVar13 + 0x160) + 0x40),iVar19);
      }
      local_bc = *(undefined8 *)(lVar13 + 0x168);
      if (iVar19 != 0) {
        local_b4 = CONCAT22(local_b4._2_2_,*(undefined2 *)(*(longlong *)(lVar13 + 0x160) + 0x38));
      }
      lVar13 = local_268[0xc];
      local_190 = &DAT_146a51f90;
      local_188 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar13 + 0x38,local_244,&local_190);
      plVar15 = plVar14;
      if (local_244[0] != -1) {
        plVar15 = (longlong *)((longlong)local_244[0] * 0x20 + *(longlong *)(lVar13 + 0x38));
      }
      local_178 = 0;
      plVar20 = plVar15 + 2;
      if (plVar15 == (longlong *)0x0) {
        plVar20 = plVar14;
      }
      local_180 = &DAT_146a54bf0;
      lVar2 = *plVar20;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar13 + 0x38,&local_250,&local_180);
      plVar15 = plVar14;
      if (local_250 != -1) {
        plVar15 = (longlong *)((longlong)local_250 * 0x20 + *(longlong *)(lVar13 + 0x38));
      }
      plVar20 = plVar15 + 2;
      if (plVar15 == (longlong *)0x0) {
        plVar20 = plVar14;
      }
      lVar13 = *plVar20;
      local_168 = DAT_1464c2720;
      if (lVar2 == 0) {
        bVar3 = true;
        plVar22 = plVar14;
      }
      else {
        lVar16 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        plVar14 = *(longlong **)(lVar16 + 0x38);
      }
      plVar15 = (longlong *)0x0;
      local_160 = plVar14;
      if ((bVar3) && (bVar3 = false, plVar22 != (longlong *)0x0)) {
        LOCK();
        plVar14 = plVar22 + 1;
        lVar16 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          if (((char)plVar22[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
            LOCK();
            bVar24 = *(int *)((longlong)plVar22 + 0xc) == 0;
            if (bVar24) {
              *(int *)((longlong)plVar22 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar24) {
              uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
              plVar14 = plVar15;
              if (uVar8 != 0) {
                plVar14 = (longlong *)
                          ((&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18);
              }
              plVar14[1] = (longlong)plVar22;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*plVar22)(plVar22,1);
          }
        }
      }
      if (lVar13 == 0) {
        bVar4 = true;
        plVar12 = plVar15;
      }
      else {
        lVar16 = *(longlong *)(lVar13 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        plVar15 = *(longlong **)(lVar16 + 0x40);
      }
      lVar16 = 0;
      local_148 = plVar15;
      if ((bVar4) && (bVar4 = false, plVar12 != (longlong *)0x0)) {
        LOCK();
        plVar14 = plVar12 + 1;
        lVar5 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          if (((char)plVar12[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
            LOCK();
            bVar24 = *(int *)((longlong)plVar12 + 0xc) == 0;
            if (bVar24) {
              *(int *)((longlong)plVar12 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar24) {
              uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar8 != 0) {
                lVar16 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
              }
              *(longlong **)(lVar16 + 8) = plVar12;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*plVar12)(plVar12,1);
          }
        }
      }
      local_11c = 0;
      FUN_141ed6ac0(local_268[8],&local_168,2,1);
      uVar8 = local_258;
      local_2e8 = *(undefined8 *)(local_78[0] + -8 + (ulonglong)local_258 * 8);
      FUN_141c5a0b0(lVar13,local_270,local_238,&local_278);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar18 + 5;
      if (*(undefined8 **)(lVar10 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(puVar1,0x30);
        puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar18 + 5;
      }
      *puVar1 = (ulonglong)puVar17;
      *(int *)(local_270 + 0x14) = *(int *)(local_270 + 0x14) + 1;
      local_2d0 = (float)(int)local_278;
      **(undefined8 **)(local_270 + 8) = puVar18;
      *(undefined8 **)(local_270 + 8) = puVar18 + 1;
      puVar18[1] = 0;
      *puVar18 = &PTR_LAB_143f59420;
      *(int *)(puVar18 + 4) = local_25c;
      puVar18[2] = 0;
      *(undefined4 *)(puVar18 + 3) = 0;
      local_298 = 1;
      *(int *)((longlong)puVar18 + 0x1c) = local_260;
      *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
      local_2a0 = *(undefined1 *)((longlong)local_268 + 0x69);
      local_2c8 = (float)local_278._4_4_;
      local_2a8 = *(undefined4 *)(local_238 + 0xf60);
      local_2b8 = local_278;
      local_2c0 = local_280;
      local_2d8 = 0.0;
      local_2e0 = 0.0;
      local_2e8 = CONCAT44(local_2e8._4_4_,(float)local_25c);
      local_2b0 = lVar2;
      FUN_141ce13a0(local_270);
      uVar11 = local_a0;
      plVar14 = local_a8;
      local_200 = 0;
      local_204 = uVar8;
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      local_228 = 0xffffffff00000000;
      uStack_220 = 0xffffffffffffffff;
      local_208 = 0xffffffff;
      local_218 = 0xffffffffffffffff;
      uStack_210 = 0xffffffffffffffff;
      puVar17 = puVar18 + 10;
      if (*(undefined8 **)(lVar10 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(puVar1,0x58);
        puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar18 + 10;
      }
      *puVar1 = (ulonglong)puVar17;
      *(int *)(local_270 + 0x14) = *(int *)(local_270 + 0x14) + 1;
      **(undefined8 **)(local_270 + 8) = puVar18;
      *(undefined8 **)(local_270 + 8) = puVar18 + 1;
      puVar18[1] = 0;
      *puVar18 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar18 + 2) = (undefined4)local_228;
      *(undefined4 *)((longlong)puVar18 + 0x14) = local_228._4_4_;
      *(undefined4 *)(puVar18 + 3) = (undefined4)uStack_220;
      *(undefined4 *)((longlong)puVar18 + 0x1c) = uStack_220._4_4_;
      *(undefined4 *)(puVar18 + 4) = (undefined4)local_218;
      *(undefined4 *)((longlong)puVar18 + 0x24) = local_218._4_4_;
      *(undefined4 *)(puVar18 + 5) = (undefined4)uStack_210;
      *(undefined4 *)((longlong)puVar18 + 0x2c) = uStack_210._4_4_;
      *(undefined4 *)(puVar18 + 6) = local_208;
      *(uint *)((longlong)puVar18 + 0x34) = local_204;
      *(undefined4 *)(puVar18 + 7) = (undefined4)local_200;
      *(undefined4 *)((longlong)puVar18 + 0x3c) = local_200._4_4_;
      puVar18[8] = plVar14;
      puVar18[9] = uVar11;
      lVar13 = (**(code **)(*plVar14 + 8))(plVar14);
      if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[8] + 0x18))(), lVar13 == 0))
      {
        (**(code **)(*(longlong *)puVar18[8] + 0x20))();
      }
      lVar13 = (**(code **)(*(longlong *)puVar18[9] + 8))();
      if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[9] + 0x18))(), lVar13 == 0))
      {
        (**(code **)(*(longlong *)puVar18[9] + 0x20))();
      }
      local_288 = local_288 + 1;
      local_278 = CONCAT44(local_278._4_4_ / 2,(int)local_278 / 2);
      iVar19 = local_260 / 2;
      iVar23 = local_25c / 2;
      local_258 = (uint)local_288;
    } while (local_258 < local_254);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_60);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  FUN_141a82840(local_78);
  FUN_141a82770(local_90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a8);
  return;
}



// FUNCTION 141c51140 FUN_141c51140 body=555 status=ok
// SIG undefined FUN_141c51140(void)

void FUN_141c51140(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  
  lVar3 = FSceneRenderTargets::Get(param_2[8]);
  lVar1 = *param_2;
  if (*(char *)(param_1 + 0xa8) == '\0') {
    local_res8 = CONCAT44(*(int *)(lVar1 + 0x1aac) - *(int *)(lVar1 + 0x1aa4),
                          *(int *)(lVar1 + 0x1aa8) - *(int *)(lVar1 + 0x1aa0));
    FUN_141d04d60(lVar3,param_2[8],local_res8);
    lVar1 = param_2[8];
    uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x60) + 8);
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
      puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 1;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *puVar6 = uVar2;
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar5;
    *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar5 + 2) = 1;
    puVar5[3] = puVar6;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined1 *)((longlong)puVar5 + 0x24) = 0;
    FUN_141c374e0(param_2[8],*param_2,lVar3);
    lVar1 = param_2[8];
    uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x2d0) + 0x18);
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
      puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 1;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *puVar6 = uVar2;
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar5;
    *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    puVar5[5] = 0;
    *puVar5 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar5 + 2) = 1;
    puVar5[3] = puVar6;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 1;
    return;
  }
  FUN_141c36960(&DAT_146ab7030,lVar1,lVar3);
  FUN_141ec93f0(&DAT_146ab7030);
  return;
}



// FUNCTION 141c51370 FUN_141c51370 body=1383 status=ok
// SIG undefined FUN_141c51370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c51370(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_1e8 [32];
  float local_1c8;
  float local_1c0;
  float local_1b8;
  float local_1b0;
  float local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined4 local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  longlong local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_168 = local_168 & 0xffffffff00000000;
  lVar10 = *param_2;
  bVar5 = false;
  local_110 = param_1;
  lVar6 = FSceneRenderTargets::Get(param_2[8]);
  local_118 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  local_1c0 = (float)((uint)local_1c0 & 0xffffff00);
  local_1c8 = 4.76441e-44;
  FUN_141ad74f0(param_2[8],*local_118,0,-(*(char *)(*param_2 + 0x3011) != '\0') & 4);
  lVar2 = param_2[8];
  uVar1 = *(undefined4 *)(lVar10 + 0x1aac);
  local_168 = CONCAT44(local_168._4_4_,*(undefined4 *)(lVar10 + 0x1aa8));
  local_15c = *(undefined4 *)(lVar10 + 0x1aa4);
  local_160 = *(undefined4 *)(lVar10 + 0x1aa0);
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar9;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar12;
  *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar12 + 2) = local_160;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_15c;
  *(int *)((longlong)puVar12 + 0x1c) = (int)local_168;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)(puVar12 + 4) = uVar1;
  plVar7 = (longlong *)0x0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  lVar2 = *(longlong *)(lVar10 + 0x3090);
  local_158 = &DAT_146a51f90;
  local_150 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_168,&local_158);
  plVar13 = plVar7;
  if ((int)local_168 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_168 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_150 = 0;
  plVar15 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar15 = plVar7;
  }
  local_158 = &DAT_146a507d0;
  lVar3 = *plVar15;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_168,&local_158);
  plVar13 = plVar7;
  if ((int)local_168 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_168 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar15 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar15 = plVar7;
  }
  lVar2 = *plVar15;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_d0 = FUN_140985530();
  local_d8 = FUN_1404a0ce0();
  local_c8 = FUN_1409853f0();
  local_108 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_168 = 0;
    bVar5 = true;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plVar7 = *(longlong **)(lVar4 + 0x38);
  }
  uVar8 = 0;
  local_100 = plVar7;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  bVar5 = false;
  if (lVar2 == 0) {
    bVar5 = true;
    local_168 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar8 = *(undefined8 *)(lVar4 + 0x40);
  }
  local_e8 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  local_bc = 0;
  FUN_14049afe0(param_2[8],&local_108);
  FUN_141ed6ac0(param_2[8],&local_108,2,1);
  FUN_141ce54b0(lVar6);
  lVar4 = *(longlong *)(lVar3 + 0x48);
  local_168 = *(undefined8 *)(*param_2 + 0x20);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FUN_141c07aa0(lVar3,param_2[8],*(undefined8 *)(lVar4 + 0x38),local_168);
  FUN_141c5a490(lVar2,param_2);
  iVar11 = *(int *)(lVar10 + 0x1aac) - *(int *)(lVar10 + 0x1aa4);
  local_198 = *(undefined8 *)(lVar6 + 0x378);
  iVar14 = *(int *)(lVar10 + 0x1aa8) - *(int *)(lVar10 + 0x1aa0);
  local_178 = 1;
  local_180 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_188 = *(undefined4 *)(lVar10 + 0xf60);
  local_1c8 = (float)iVar11;
  local_168 = CONCAT44(iVar11,iVar14);
  local_1a0 = local_168;
  local_1b0 = (float)iVar14;
  local_1c0 = (float)*(int *)(lVar10 + 0x1aa0);
  local_1b8 = (float)*(int *)(lVar10 + 0x1aa4);
  local_1a8 = local_1c8;
  local_190 = lVar3;
  FUN_141ce13a0(param_2[8]);
  lVar10 = param_2[8];
  local_148 = 0xffffffff00000000;
  uStack_140 = 0xffffffffffffffff;
  uVar8 = local_118[1];
  plVar7 = (longlong *)*local_118;
  local_128 = 0xffffffff;
  uStack_120 = 0;
  local_138 = 0xffffffffffffffff;
  uStack_130 = 0xffffffffffffffff;
  puVar12 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 10;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 10;
  }
  *(undefined8 **)(lVar10 + 0x30) = puVar9;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar12;
  *(undefined8 **)(lVar10 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)local_148;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_148._4_4_;
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_140._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_138._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_130._4_4_;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_128;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_128._4_4_;
  *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_120;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_120._4_4_;
  puVar12[8] = plVar7;
  puVar12[9] = uVar8;
  lVar10 = (**(code **)(*plVar7 + 8))(plVar7);
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar12[8] + 0x20))();
  }
  lVar10 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar12[9] + 0x20))();
  }
  plVar7 = *(longlong **)(*param_2 + 0x10);
  if (*(longlong *)(*plVar7 + -8 + (longlong)(int)plVar7[1] * 8) == *param_2) {
    FUN_141d04b60(lVar6,*(undefined8 *)(local_110 + 0x70));
  }
  return;
}



// FUNCTION 141c518e0 FUN_141c518e0 body=1046 status=ok
// SIG undefined FUN_141c518e0(void)

void FUN_141c518e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  bool bVar17;
  int iStackX_c;
  int iStackX_14;
  uint in_stack_fffffffffffffef8;
  uint in_stack_ffffffffffffff00;
  uint in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar18;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  lVar9 = FRenderingCompositePass::GetInputDesc(param_1,1);
  if (lVar9 == 0) {
    lVar9 = FRenderingCompositePass::GetInputDesc(param_1,2);
  }
  lVar1 = *param_2;
  uVar2 = *(undefined8 *)(lVar9 + 0x14);
  lVar9 = FSceneRenderTargets::Get(param_2[8]);
  iVar14 = (int)uVar2;
  iVar14 = (*(int *)(lVar9 + 0x378) + -1 + iVar14) / iVar14;
  uVar3 = *(ulonglong *)(lVar1 + 0x1aa8);
  iStackX_c = (int)(uVar3 >> 0x20);
  uVar4 = *(ulonglong *)(lVar1 + 0x1aa0);
  uVar6 = (longlong)((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
          (longlong)iVar14;
  iVar7 = (int)uVar6;
  iStackX_14 = (int)(uVar4 >> 0x20);
  local_98 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x50,param_2);
  if ((((&DAT_1464c9c48)[(int)param_2[0xb]] - 0x11 & 0xfffffff3) == 0) &&
     ((&DAT_1464c9c48)[(int)param_2[0xb]] != 0x19)) {
    bVar17 = true;
  }
  else {
    bVar17 = false;
  }
  local_a8 = 0;
  if (bVar17) {
    FUN_141ad74f0(param_2[8],*local_98,0,5,0x22,in_stack_ffffffffffffff00 & 0xffffff00);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a8);
  }
  else {
    FUN_141a19150(param_2[8],*local_98,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a8);
    uVar12 = *(undefined8 *)(param_1 + 100);
    local_a8 = *(undefined8 *)(lVar1 + 0x1aa0);
    uStack_a0 = *(undefined8 *)(lVar1 + 0x1aa8);
    FUN_141a149c0(param_2[8],1,1,&DAT_1464aa6e0,in_stack_fffffffffffffef8 & 0xffffff00,0,
                  in_stack_ffffffffffffff08 & 0xffffff00,0,uVar12,&local_a8);
    uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  }
  local_a8 = *(undefined8 *)(lVar1 + 0x1aa0);
  uStack_a0 = *(undefined8 *)(lVar1 + 0x1aa8);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_a8);
  lVar9 = FRenderingCompositePass::GetInputDesc(param_1,1);
  lVar10 = FRenderingCompositePass::GetInputDesc(param_1,2);
  lVar11 = FRenderingCompositePass::GetInputDesc(param_1,3);
  bVar17 = lVar11 == 0;
  if (lVar9 == 0) {
    if (bVar17) {
      uVar12 = FUN_141c3bdc0(param_2);
    }
    else {
      uVar12 = FUN_141c3bb50();
    }
  }
  else if (lVar10 == 0) {
    if (bVar17) {
      uVar12 = FUN_141c3b8e0();
    }
    else {
      uVar12 = FUN_141c3b670();
    }
  }
  else if (bVar17) {
    uVar12 = FUN_141c3b400();
  }
  else {
    uVar12 = FUN_141c3b190();
  }
  iVar8 = *(int *)(lVar1 + 0x1aac) - *(int *)(lVar1 + 0x1aa4);
  local_a8 = CONCAT44(iVar8,*(int *)(lVar1 + 0x1aa8) - *(int *)(lVar1 + 0x1aa0));
  iVar16 = (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                (longlong)iVar14) - iVar7;
  FUN_141ce13a0(param_2[8],uVar12,iVar16,uVar6 & 0xffffffff,(float)iVar8,(float)iVar7,
                (float)(iStackX_14 / iVar14),(float)iVar16,
                CONCAT44(uVar18,(float)(iStackX_c / iVar14 - iStackX_14 / iVar14)),local_a8,uVar2,
                uVar12,*(undefined4 *)(lVar1 + 0xf60),*(undefined1 *)((longlong)param_2 + 0x69),1);
  lVar9 = param_2[8];
  local_90 = 0xffffffff00000000;
  uStack_88 = 0xffffffffffffffff;
  uVar2 = local_98[1];
  plVar5 = (longlong *)*local_98;
  local_70 = 0xffffffff;
  uStack_68 = 0;
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0xffffffffffffffff;
  puVar15 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 10;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x58);
    puVar15 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 10;
  }
  *(undefined8 **)(lVar9 + 0x30) = puVar13;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar15;
  *(undefined8 **)(lVar9 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar15 + 2) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar15 + 0x14) = local_90._4_4_;
  *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_88;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_88._4_4_;
  *(undefined4 *)(puVar15 + 4) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar15 + 0x24) = local_80._4_4_;
  *(undefined4 *)(puVar15 + 5) = (undefined4)uStack_78;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uStack_78._4_4_;
  *(undefined4 *)(puVar15 + 6) = (undefined4)local_70;
  *(undefined4 *)((longlong)puVar15 + 0x34) = local_70._4_4_;
  *(undefined4 *)(puVar15 + 7) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uStack_68._4_4_;
  puVar15[8] = plVar5;
  puVar15[9] = uVar2;
  lVar9 = (**(code **)(*plVar5 + 8))(plVar5);
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*(longlong *)puVar15[8] + 0x18))();
    if (lVar9 == 0) {
      (**(code **)(*(longlong *)puVar15[8] + 0x20))();
    }
  }
  lVar9 = (**(code **)(*(longlong *)puVar15[9] + 8))();
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*(longlong *)puVar15[9] + 0x18))();
    if (lVar9 == 0) {
      (**(code **)(*(longlong *)puVar15[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141c51d00 FUN_141c51d00 body=1989 status=ok
// SIG undefined FUN_141c51d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c51d00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_248 [32];
  float local_228;
  undefined8 local_220;
  float local_218;
  float local_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  int iStack_1a4;
  undefined8 local_1a0;
  int local_198;
  uint local_194;
  int local_190;
  int local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [24];
  undefined1 local_80 [16];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar6 != 0) {
    if ((*(char *)(param_1 + 0x131) == '\0') || (iVar12 = 2, *(char *)(param_1 + 0x130) == '\0')) {
      iVar12 = 1;
    }
    lVar1 = *param_2;
    uVar2 = *(undefined8 *)(lVar6 + 0x14);
    uVar3 = *(undefined8 *)(param_1 + 0x44);
    local_1a0 = lVar1;
    lVar6 = FSceneRenderTargets::Get(param_2[8]);
    iVar10 = *(int *)(lVar6 + 0x378) / (int)uVar2;
    uVar9 = *(ulonglong *)(lVar1 + 0x1aa8);
    local_18c = (int)((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff)
                     / (longlong)iVar10);
    local_190 = (int)(uVar9 >> 0x20) / iVar10;
    uVar9 = *(ulonglong *)(lVar1 + 0x1aa0);
    iVar13 = (int)((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) /
                  (longlong)iVar10);
    iStack_1a4 = (int)(uVar9 >> 0x20);
    iStack_1a4 = iStack_1a4 / iVar10;
    _local_1a8 = CONCAT44(iStack_1a4,iVar13);
    local_198 = local_18c / 2;
    local_194 = local_190 / 2;
    local_1c8 = CONCAT44(iStack_1a4 / 2,iVar13 / 2);
    local_188 = local_1c8;
    local_1b8._0_4_ = local_198;
    local_1b8._4_4_ = local_194;
    uStack_180._0_4_ = local_198;
    uStack_180._4_4_ = local_194;
    local_178 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x30,param_2);
    if (iVar12 != 2) {
      puVar8 = &local_150;
      local_140 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
    }
    else {
      uVar7 = FUN_141cf3cd0(param_1 + 0x90,param_2);
      puVar8 = (undefined8 *)FSceneRenderTargetItem::FSceneRenderTargetItem(&local_100,uVar7);
      local_1b8 = CONCAT44(local_1b8._4_4_,1);
    }
    FSceneRenderTargetItem::FSceneRenderTargetItem(&local_b0,puVar8);
    if (iVar12 != 2) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_108);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_110);
      FUN_141a82840(&local_120);
      FUN_141a82770(&uStack_138);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&uStack_148);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_150);
    }
    if ((int)local_1b8 != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_c0);
      FUN_141a82840(local_d0);
      FUN_141a82770(&uStack_e8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f0);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&uStack_f8);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_100);
    }
    local_1b8 = *local_178;
    uStack_1b0 = local_b0;
    if ((((&DAT_1464c9c48)[(int)param_2[0xb]] - 0x11 & 0xfffffff3) == 0) &&
       ((&DAT_1464c9c48)[(int)param_2[0xb]] != 0x19)) {
      local_218 = (float)((uint)local_218._1_3_ << 8);
      local_220 = (ulonglong)local_220._4_4_ << 0x20;
      local_228 = 7.00649e-45;
      FUN_141ad8260(param_2[8],iVar12,&local_1b8,0);
    }
    else {
      local_210 = (float)((uint)local_210 & 0xffffff00);
      local_218 = (float)((uint)local_218._1_3_ << 8);
      local_220 = 0;
      local_228 = 0.0;
      FUN_141ad7ef0(param_2[8],iVar12,&local_1b8,0);
    }
    local_200 = &local_188;
    local_210 = 0.0;
    local_170 = 0;
    uStack_168 = 0;
    local_218 = (float)((uint)local_218 & 0xffffff00);
    local_220 = local_220 & 0xffffffff00000000;
    local_228 = (float)((uint)local_228 & 0xffffff00);
    local_160 = 0;
    uStack_158 = 0;
    local_208 = uVar3;
    FUN_141a149c0(param_2[8],1,iVar12,&local_170);
    uVar5 = local_194;
    iVar12 = local_198;
    local_1b8 = local_1c8;
    uStack_1b0 = (longlong *)CONCAT44(local_194 + 1,local_198 + 1);
    uStack_180 = uStack_1b0;
    local_188 = local_1b8;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_188);
    lVar6 = local_1a0;
    uVar9 = 0;
    if (*(char *)(param_1 + 0x131) != '\0') {
      fVar14 = *(float *)(local_1a0 + 6000);
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      uVar9 = (ulonglong)((fVar14 < 200.0) + 1);
    }
    local_1f0 = 0;
    iVar13 = (int)uVar9;
    if (*(char *)(param_1 + 0x130) == '\0') {
      if (iVar13 == 1) {
        local_1f0 = FUN_141c3ca80(param_2);
      }
      else if (iVar13 == 2) {
        local_1f0 = FUN_141c3cdf0(param_2);
      }
    }
    else if (iVar13 == 0) {
      local_1f0 = FUN_141c3c710(param_2);
    }
    else if (iVar13 == 1) {
      local_1f0 = FUN_141c3c030(param_2);
    }
    else {
      local_1f0 = 0;
      if (iVar13 == 2) {
        local_1f0 = FUN_141c3c3a0(param_2);
      }
    }
    iVar13 = uVar5 - local_1c8._4_4_;
    local_1d8 = 1;
    local_1a0 = CONCAT44(iVar13,iVar12 - (int)local_1c8);
    local_1c8 = CONCAT44(iVar13 + 1,(iVar12 - (int)local_1c8) + 1);
    local_218 = (float)iStack_1a4;
    local_1e0 = *(undefined1 *)((longlong)param_2 + 0x69);
    local_1e8 = *(undefined4 *)(lVar6 + 0xf60);
    local_200 = (undefined8 *)local_1c8;
    local_210 = (float)((local_18c - local_1a8) + 1);
    local_228 = (float)(iVar13 + 1);
    local_208 = CONCAT44(local_208._4_4_,(float)((local_190 - iStack_1a4) + 1));
    local_220 = CONCAT44(local_220._4_4_,(float)local_1a8);
    local_1f8 = uVar2;
    FUN_141ce13a0(param_2[8]);
    FUN_141a19150(param_2[8],0,0,0);
    lVar6 = param_2[8];
    uVar2 = local_178[1];
    plVar4 = (longlong *)*local_178;
    local_100 = 0xffffffff00000000;
    uStack_f8 = 0xffffffffffffffff;
    local_e0 = 0xffffffff;
    uStack_d8 = 0;
    local_f0 = 0xffffffffffffffff;
    uStack_e8 = 0xffffffffffffffff;
    puVar11 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 10;
    if (*(undefined8 **)(lVar6 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x58);
      puVar11 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar11 + 10;
    }
    *(undefined8 **)(lVar6 + 0x30) = puVar8;
    *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
    **(undefined8 **)(lVar6 + 8) = puVar11;
    *(undefined8 **)(lVar6 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar11 + 2) = (undefined4)local_100;
    *(undefined4 *)((longlong)puVar11 + 0x14) = local_100._4_4_;
    *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_f8;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_f8._4_4_;
    *(undefined4 *)(puVar11 + 4) = (undefined4)local_f0;
    *(undefined4 *)((longlong)puVar11 + 0x24) = local_f0._4_4_;
    *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_e8;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_e8._4_4_;
    *(undefined4 *)(puVar11 + 6) = (undefined4)local_e0;
    *(undefined4 *)((longlong)puVar11 + 0x34) = local_e0._4_4_;
    *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_d8;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_d8._4_4_;
    puVar11[8] = plVar4;
    puVar11[9] = uVar2;
    lVar6 = (**(code **)(*plVar4 + 8))(plVar4);
    if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar11[8] + 0x18))(), lVar6 == 0)) {
      (**(code **)(*(longlong *)puVar11[8] + 0x20))();
    }
    lVar6 = (**(code **)(*(longlong *)puVar11[9] + 8))();
    if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar11[9] + 0x18))(), lVar6 == 0)) {
      (**(code **)(*(longlong *)puVar11[9] + 0x20))();
    }
    if (local_b0 != (longlong *)0x0) {
      lVar6 = param_2[8];
      local_150 = 0xffffffff00000000;
      uStack_148 = 0xffffffffffffffff;
      local_130 = 0xffffffff;
      uStack_128 = 0;
      local_140 = 0xffffffffffffffff;
      uStack_138 = 0xffffffffffffffff;
      puVar11 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar11 + 10;
      if (*(undefined8 **)(lVar6 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x58);
        puVar11 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar11 + 10;
      }
      *(undefined8 **)(lVar6 + 0x30) = puVar8;
      *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
      **(undefined8 **)(lVar6 + 8) = puVar11;
      *(undefined8 **)(lVar6 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar11 + 2) = (undefined4)local_150;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_150._4_4_;
      *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_148;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_148._4_4_;
      *(undefined4 *)(puVar11 + 4) = (undefined4)local_140;
      *(undefined4 *)((longlong)puVar11 + 0x24) = local_140._4_4_;
      *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_138;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_138._4_4_;
      *(undefined4 *)(puVar11 + 6) = (undefined4)local_130;
      *(undefined4 *)((longlong)puVar11 + 0x34) = local_130._4_4_;
      *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_128;
      *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_128._4_4_;
      puVar11[8] = local_b0;
      puVar11[9] = local_a8;
      lVar6 = (**(code **)(*local_b0 + 8))(local_b0);
      if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar11[8] + 0x18))(), lVar6 == 0)) {
        (**(code **)(*(longlong *)puVar11[8] + 0x20))();
      }
      lVar6 = (**(code **)(*(longlong *)puVar11[9] + 8))();
      if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar11[9] + 0x18))(), lVar6 == 0)) {
        (**(code **)(*(longlong *)puVar11[9] + 0x20))();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
    FUN_141a82840(local_80);
    FUN_141a82770(local_98);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a8);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_b0);
  }
  return;
}



// FUNCTION 141c524d0 FUN_141c524d0 body=3504 status=ok
// SIG undefined FUN_141c524d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c524d0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  char cVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong *plVar22;
  undefined1 auStack_418 [32];
  undefined **local_3f8;
  ulonglong local_3f0;
  float local_3e8;
  float local_3e0;
  float local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b0;
  char local_3a8;
  char local_3a7;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  ulonglong *local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined *local_358;
  undefined8 uStack_350;
  longlong local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_2f8 [192];
  undefined4 local_238;
  undefined1 local_168 [256];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  local_338 = param_2;
  lVar13 = FRenderingCompositePass::GetInputDesc(param_1,0);
  local_340 = 0;
  local_388 = (ulonglong *)(param_1 + 0xb8);
  local_348 = lVar13;
  TRefCountPtr<FRHIIndexBuffer>::operator=(local_388,&local_340);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_340);
  if (lVar13 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(lVar13 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + 0x44);
  iVar16 = (int)((ulonglong)uVar1 >> 0x20);
  uVar9 = (*(int *)((longlong)param_2 + 0x1c) + -1 + iVar16) / iVar16;
  iVar16 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> iVar16 == 0; iVar16 = iVar16 + -1) {
    }
  }
  if (uVar9 == 0) {
    iVar16 = 0x20;
  }
  else {
    iVar16 = 0x1f - iVar16;
  }
  uVar9 = uVar9 - 1;
  iVar11 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> iVar11 == 0; iVar11 = iVar11 + -1) {
    }
  }
  if (uVar9 == 0) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x1f' - (char)iVar11;
  }
  uVar5 = param_2[1];
  iVar21 = 1 << (~(byte)((iVar16 << 0x1a) >> 0x1f) & 0x20U - cVar19 & 0x1f);
  iVar16 = (int)param_2[2];
  local_398._0_4_ = (iVar16 + -1 + iVar21) / iVar21;
  iVar11 = (int)((ulonglong)param_2[2] >> 0x20);
  local_398._4_4_ = (iVar11 + -1 + iVar21) / iVar21;
  uVar9 = (int)uVar5 >> 0x1f;
  iVar7 = iVar21 * 2;
  iVar10 = (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar5 & 0xffffffff) / (longlong)iVar21);
  local_3a0._4_4_ = (int)(uVar5 >> 0x20);
  iVar12 = local_3a0._4_4_;
  iVar21 = local_3a0._4_4_ / iVar21;
  local_3a0 = (undefined8 *)CONCAT44(iVar21,iVar10);
  local_358 = (undefined *)local_3a0;
  iVar11 = (iVar11 + -1 + iVar7) / iVar7;
  local_378 = CONCAT44(iVar11,(iVar16 + -1 + iVar7) / iVar7);
  uStack_360 = local_378;
  iVar12 = iVar12 / iVar7;
  local_3a0 = (undefined8 *)
              CONCAT44(iVar12,(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar5 & 0xffffffff) /
                                   (longlong)iVar7));
  local_368 = (undefined *)local_3a0;
  local_390 = uVar1;
  local_340 = uVar2;
  uStack_350._0_4_ = (int)local_398;
  uStack_350._4_4_ = local_398._4_4_;
  local_3a0 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x30,local_338);
  lVar13 = FRenderingCompositePass::GetInputDesc(param_1,1);
  plVar6 = local_338;
  puVar14 = local_3a0;
  local_3a8 = lVar13 != 0;
  if (((iVar10 == DAT_1468b5ca0) && (iVar21 == DAT_1468b5ca4)) && ((int)local_398 == (int)uVar1)) {
    local_3a7 = '\0';
    if (local_398._4_4_ == local_390._4_4_) goto LAB_141c526fb;
  }
  local_3a7 = '\x01';
LAB_141c526fb:
  iVar16 = (int)uVar2;
  if (*(char *)(param_1 + 10) == '\0') {
    if (*(uint *)(*local_338 + 0x1a38) < 2) {
      local_3f0 = local_3f0 & 0xffffffffffffff00;
      local_3f8 = (undefined **)CONCAT44(local_3f8._4_4_,0x22);
      local_388 = (ulonglong *)0x0;
      FUN_141ad74f0(local_338[8],*local_3a0,0,5);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_388);
      uStack_380 = CONCAT44(local_340._4_4_,iVar16);
      local_388 = (ulonglong *)0x0;
      FRenderingCompositePassContext::SetViewportAndCallRHI(plVar6,&local_388);
    }
    else {
      local_330 = *local_3a0;
      uStack_328 = 0xffffffff00000000;
      local_320 = CONCAT62(local_320._2_6_,0x100);
      local_388 = (ulonglong *)0x0;
      uStack_380 = 0;
      FUN_140c63b80(local_2f8,1,&local_330,&local_388);
      local_378 = plVar6[8];
      FRHICommandListBase::CacheActiveRenderTargets(local_378,local_238,local_2f8,local_168);
      local_388 = (ulonglong *)(local_378 + 0x30);
      puVar20 = (undefined8 *)(*(longlong *)(local_378 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar20 + 0x54;
      if (*(undefined8 **)(local_378 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(local_388,0x2a8);
        puVar20 = (undefined8 *)(*local_388 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar20 + 0x54;
      }
      *local_388 = (ulonglong)puVar17;
      *(int *)(local_378 + 0x14) = *(int *)(local_378 + 0x14) + 1;
      **(undefined8 **)(local_378 + 8) = puVar20;
      *(undefined8 **)(local_378 + 8) = puVar20 + 1;
      puVar20[1] = 0;
      *puVar20 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar20 + 2,local_2f8);
      uStack_380 = CONCAT44(local_340._4_4_,iVar16);
      local_388 = (ulonglong *)0x0;
      FRenderingCompositePassContext::SetViewportAndCallRHI(plVar6,&local_388);
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2f8);
    }
    local_3f8 = &local_358;
    if (local_3a7 == '\0') {
      if (local_3a8 == '\0') {
        if (*(int *)(param_1 + 0xc4) == 0) {
          FUN_141c3ef20();
        }
        else {
          FUN_141c3e060(param_1,plVar6,local_348,&local_390);
        }
      }
      else {
        FUN_141c3e7c0();
      }
    }
    else if (local_3a8 == '\0') {
      if (*(int *)(param_1 + 0xc4) == 0) {
        FUN_141c3eb10();
      }
      else {
        FUN_141c3dc50();
      }
    }
    else {
      FUN_141c3e3b0();
    }
    uStack_350 = (ulonglong)uStack_350._4_4_ << 0x20;
    local_358 = &DAT_146a50920;
    local_388 = (ulonglong *)(plVar6[0xc] + 0x38);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(local_388,&local_390,&local_358);
    if ((int)local_390 == -1) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)(int)local_390 * 0x20 + *local_388;
    }
    puVar17 = (undefined8 *)(lVar13 + 0x10);
    local_3b0 = 1;
    local_3b8 = 1;
    iVar11 = iVar11 * 2;
    local_3a0 = (undefined8 *)CONCAT44(iVar11,(int)uStack_360 * 2);
    local_398 = CONCAT44(iVar12 * 2,(int)local_368 * 2);
    if (lVar13 == 0) {
      puVar17 = (undefined8 *)0x0;
    }
    local_3e8 = (float)(iVar12 * 2);
    local_3e0 = (float)((int)uStack_360 * 2 + (int)local_368 * -2);
    local_3c0 = *puVar17;
    local_3d8 = (float)(iVar11 + iVar12 * -2);
    local_3f0 = CONCAT44(local_3f0._4_4_,(float)((int)local_368 * 2));
    local_3f8 = (undefined **)CONCAT44(local_3f8._4_4_,(float)(uStack_360._4_4_ - local_368._4_4_));
    local_3d0 = uVar2;
    local_3c8 = uVar1;
    DrawRectangle(plVar6[8]);
    lVar13 = plVar6[8];
    uVar1 = puVar14[1];
    plVar6 = (longlong *)*puVar14;
    local_330 = 0xffffffff00000000;
    uStack_328 = 0xffffffffffffffff;
    local_310 = 0xffffffff;
    uStack_308 = 0;
    local_320 = 0xffffffffffffffff;
    uStack_318 = 0xffffffffffffffff;
    puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar17 + 10;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar14) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x58);
      puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar17 + 10;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar14;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar17;
    *(undefined8 **)(lVar13 + 8) = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar17 + 2) = (undefined4)local_330;
    *(undefined4 *)((longlong)puVar17 + 0x14) = local_330._4_4_;
    *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_328;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_328._4_4_;
    *(undefined4 *)(puVar17 + 4) = (undefined4)local_320;
    *(undefined4 *)((longlong)puVar17 + 0x24) = local_320._4_4_;
    *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_318;
    *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_318._4_4_;
    *(undefined4 *)(puVar17 + 6) = (undefined4)local_310;
    *(undefined4 *)((longlong)puVar17 + 0x34) = local_310._4_4_;
    *(undefined4 *)(puVar17 + 7) = (undefined4)uStack_308;
    *(undefined4 *)((longlong)puVar17 + 0x3c) = uStack_308._4_4_;
    puVar17[8] = plVar6;
    puVar17[9] = uVar1;
    lVar13 = (**(code **)(*plVar6 + 8))(plVar6);
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar17[8] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar17[8] + 0x20))();
    }
    lVar13 = (**(code **)(*(longlong *)puVar17[9] + 8))();
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar17[9] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar17[9] + 0x20))();
    }
  }
  else {
    local_368 = (undefined *)local_338[1];
    local_398._4_4_ = (uint)((ulonglong)local_368 >> 0x20);
    iVar11 = local_398._4_4_ + local_340._4_4_;
    iVar16 = (int)local_368 + iVar16;
    local_398 = CONCAT44(iVar11,iVar16);
    uStack_360 = CONCAT44(iVar11,iVar16);
    FUN_141a19150(local_338[8],0,0,0);
    local_358 = local_368;
    uStack_350 = uStack_360;
    FRenderingCompositePassContext::SetViewportAndCallRHI(plVar6,&local_358);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a543b8) &&
       (_Init_thread_header(&DAT_146a543b8), DAT_146a543b8 == -1)) {
      FName::FName(&DAT_146a543b0,L"AsyncDownsampleEndFence",1);
      _Init_thread_footer(&DAT_146a543b8);
    }
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_378,&DAT_146a543b0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xb8,&local_378);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_378);
    if (((*(char *)(param_1 + 10) == '\0') || (*(char *)(param_1 + 0xb) == '\0')) ||
       (DAT_146ab62f0 == '\0')) {
      lVar13 = plVar6[8];
      plVar22 = (longlong *)(param_1 + 0x10);
      if (plVar22 != (longlong *)(param_1 + 0x30)) {
        do {
          plVar3 = (longlong *)*plVar22;
          if (((plVar3 == (longlong *)0x0) || (*(char *)((longlong)plVar3 + 10) == '\0')) ||
             ((*(char *)((longlong)plVar3 + 0xb) == '\0' || (DAT_146ab62f0 == '\0')))) {
            cVar19 = '\0';
          }
          else {
            cVar19 = '\x01';
          }
          cVar8 = FRenderingCompositePass::IsAsyncComputePass(param_1);
          if (((cVar8 != cVar19) && (plVar3 != (longlong *)0x0)) &&
             (lVar15 = (**(code **)(*plVar3 + 0x80))(plVar3), lVar15 != 0)) {
            puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar17 + 3;
            if (*(undefined8 **)(lVar13 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x20);
              puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar17 + 3;
            }
            *(undefined8 **)(lVar13 + 0x30) = puVar14;
            *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
            **(undefined8 **)(lVar13 + 8) = puVar17;
            *(undefined8 **)(lVar13 + 8) = puVar17 + 1;
            puVar17[1] = 0;
            *puVar17 = &PTR_LAB_144dc9cc0;
            puVar17[2] = lVar15;
          }
          plVar22 = plVar22 + 2;
        } while (plVar22 != (longlong *)(param_1 + 0x30));
        lVar13 = plVar6[8];
      }
      puVar17 = local_3a0;
      puVar20 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      local_378 = local_3a0[2];
      puVar14 = puVar20 + 1;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x10);
        puVar20 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar20 + 1;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar14;
      *puVar20 = local_378;
      puVar18 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar18 + 6;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x38);
        puVar18 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar18 + 6;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar14;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar18;
      *(undefined8 **)(lVar13 + 8) = puVar18 + 1;
      puVar18[1] = 0;
      *puVar18 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar18 + 2) = 1;
      puVar18[3] = puVar20;
      puVar18[4] = 2;
      puVar18[5] = 0;
      local_3f0 = puVar17[2];
      local_3f8 = (undefined **)&local_368;
      if (local_3a8 == '\0') {
        if (*(int *)(param_1 + 0xc4) == 0) {
          FUN_141c356e0();
        }
        else {
          FUN_141c349e0(param_1,plVar6[8],plVar6,&local_390);
        }
      }
      else {
        FUN_141c35060();
      }
      lVar13 = plVar6[8];
      puVar4 = (ulonglong *)puVar17[2];
      uVar5 = *local_388;
      puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar17 + 1;
      local_388 = puVar4;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x10);
        puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar17 + 1;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar14;
      *puVar17 = local_388;
      puVar20 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar20 + 6;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x38);
        puVar20 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar20 + 6;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar14;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar20;
      *(undefined8 **)(lVar13 + 8) = puVar20 + 1;
      puVar20[1] = 0;
      *puVar20 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar20 + 2) = 1;
      puVar20[3] = puVar17;
      *(undefined4 *)(puVar20 + 4) = 0;
      *(undefined4 *)((longlong)puVar20 + 0x24) = 1;
      puVar20[5] = uVar5;
    }
    else {
      puVar14 = local_3a0;
      for (plVar22 = (longlong *)(param_1 + 0x10); local_3a0 = puVar14,
          plVar22 != (longlong *)(param_1 + 0x30); plVar22 = plVar22 + 2) {
        plVar3 = (longlong *)*plVar22;
        if ((((plVar3 == (longlong *)0x0) || (*(char *)((longlong)plVar3 + 10) == '\0')) ||
            (*(char *)((longlong)plVar3 + 0xb) == '\0')) || (DAT_146ab62f0 == '\0')) {
          cVar19 = '\0';
        }
        else {
          cVar19 = '\x01';
        }
        cVar8 = FRenderingCompositePass::IsAsyncComputePass(param_1);
        if (((cVar8 != cVar19) && (plVar3 != (longlong *)0x0)) &&
           (lVar13 = (**(code **)(*plVar3 + 0x80))(plVar3), lVar13 != 0)) {
          puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar14 = puVar17 + 3;
          if (DAT_146ab7068 < puVar17 + 3) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
            puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            puVar14 = puVar17 + 3;
          }
          DAT_146ab7060 = puVar14;
          _DAT_146ab7044 = _DAT_146ab7044 + 1;
          *DAT_146ab7038 = puVar17;
          DAT_146ab7038 = puVar17 + 1;
          *DAT_146ab7038 = 0;
          *puVar17 = &PTR_LAB_144dc9d10;
          puVar17[2] = lVar13;
        }
        puVar14 = local_3a0;
      }
      puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      local_378 = puVar14[2];
      puVar17 = puVar20 + 1;
      if (DAT_146ab7068 < puVar17) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
        puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar17 = puVar20 + 1;
      }
      DAT_146ab7060 = puVar17;
      *puVar20 = local_378;
      puVar18 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar17 = puVar18 + 6;
      if (DAT_146ab7068 < puVar17) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar18 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar17 = puVar18 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar17;
      *DAT_146ab7038 = puVar18;
      DAT_146ab7038 = puVar18 + 1;
      *DAT_146ab7038 = 0;
      *puVar18 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar18 + 2) = 1;
      puVar18[3] = puVar20;
      puVar18[4] = 2;
      puVar18[5] = 0;
      local_3f0 = puVar14[2];
      local_3f8 = (undefined **)&local_368;
      if (local_3a8 == '\0') {
        if (*(int *)(param_1 + 0xc4) == 0) {
          FUN_141c353b0();
        }
        else {
          FUN_141c346b0(param_1,&DAT_146ab7030,plVar6,&local_390);
        }
      }
      else {
        FUN_141c34d10();
      }
      local_378 = puVar14[2];
      uVar1 = *(undefined8 *)(param_1 + 0xb8);
      puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar17 + 1;
      if (DAT_146ab7068 < puVar14) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
        puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar14 = puVar17 + 1;
      }
      DAT_146ab7060 = puVar14;
      *puVar17 = local_378;
      puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar20 + 6;
      if (DAT_146ab7068 < puVar14) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar14 = puVar20 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar14;
      *DAT_146ab7038 = puVar20;
      DAT_146ab7038 = puVar20 + 1;
      *puVar20 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar20 + 2) = 1;
      puVar20[3] = puVar17;
      *(undefined4 *)(puVar20 + 4) = 0;
      *(undefined4 *)((longlong)puVar20 + 0x24) = 1;
      puVar20[5] = uVar1;
      puVar20[1] = 0;
      FUN_141ec93f0(&DAT_146ab7030);
    }
  }
  return;
}



// FUNCTION 141c53280 FUN_141c53280 body=3118 status=ok
// SIG undefined FUN_141c53280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c53280(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  char cVar14;
  int iVar15;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  float local_1c0;
  float local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  bVar4 = false;
  local_178 = (undefined *)((ulonglong)local_178 & 0xffffffff00000000);
  local_188 = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x15,&local_188);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_188);
  FViewInfo::SwapEyeAdaptationRTs(*param_2,param_2[8]);
  local_158 = FViewInfo::GetLastEyeAdaptationRT(*param_2,param_2[8]);
  plVar6 = (longlong *)FViewInfo::GetEyeAdaptation(*param_2,param_2[8]);
  lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar7 = *(longlong *)(lVar7 + 0x14);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_188 = lVar7;
  if ((*(int *)(lVar1 + 0x38) < DAT_146a543d8) &&
     (_Init_thread_header(&DAT_146a543d8), DAT_146a543d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar12 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHIRenderPasses");
    uVar8 = 0;
    if (plVar12 != (longlong *)0x0) {
      uVar8 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    _DAT_146a543d0 = uVar8;
    _Init_thread_footer(&DAT_146a543d8);
  }
  iVar15 = (int)lVar7;
  iStack_170 = iVar15;
  if (*(char *)((longlong)param_1 + 10) == '\0') {
    lVar1 = param_2[8];
    lVar2 = plVar6[2];
    puVar10 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 3;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x20);
      puVar10 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 3;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar9;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar10;
    *(undefined8 **)(lVar1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    puVar10[2] = lVar2;
    plVar12 = (longlong *)0x0;
    *puVar10 = &PTR_LAB_144e1b868;
    local_178 = (undefined *)0x0;
    FUN_141a19150(param_2[8],plVar6[1],0,1);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_178);
    uStack_16c = local_188._4_4_;
    local_178 = (undefined *)0x0;
    uStack_160._4_4_ = local_188._4_4_;
    local_168 = (undefined *)0x0;
    uStack_160._0_4_ = iVar15;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_168,0);
    local_d8 = 0;
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d0 = 0;
    local_cc = 0x26;
    local_c4 = 0;
    local_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    FUN_14049afe0(param_2[8],&local_118);
    local_e8 = FUN_1404a0ce0();
    uStack_e0 = FUN_140985530();
    local_d8 = FUN_1409853f0();
    lVar1 = param_2[0xc];
    uStack_160._0_4_ = 0;
    local_168 = &DAT_146a51f90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_178,&local_168);
    plVar11 = plVar12;
    if ((int)local_178 != -1) {
      plVar11 = (longlong *)((longlong)(int)local_178 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
    plVar13 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar13 = plVar12;
    }
    local_168 = &DAT_146a50ad0;
    lVar2 = *plVar13;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_178,&local_168);
    plVar11 = plVar12;
    if ((int)local_178 != -1) {
      plVar11 = (longlong *)((longlong)(int)local_178 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar13 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar13 = plVar12;
    }
    lVar1 = *plVar13;
    local_118 = DAT_1464c2720;
    if (lVar2 == 0) {
      local_178 = (undefined *)0x0;
      bVar4 = true;
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar12 = *(longlong **)(lVar3 + 0x38);
    }
    uVar8 = 0;
    plStack_110 = plVar12;
    if (bVar4) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_178);
    }
    bVar4 = false;
    if (lVar1 == 0) {
      bVar4 = true;
      local_178 = (undefined *)0x0;
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      uVar8 = *(undefined8 *)(lVar3 + 0x40);
    }
    local_f8 = uVar8;
    if (bVar4) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_178);
    }
    local_cc = local_cc & 0xffffffff00000000;
    FUN_141ed6ac0(param_2[8],&local_118,2,1);
    FUN_141c3d160(lVar1,param_2,param_2[8],local_158);
    local_190 = 1;
    local_198 = 1;
    local_1b8 = (float)(int)local_188._4_4_;
    local_1c0 = (float)iVar15;
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = CONCAT44(local_1d8._4_4_,local_1b8);
    local_1b0 = lVar7;
    local_1a8 = lVar7;
    local_1a0 = lVar2;
    DrawRectangle();
    lVar7 = param_2[8];
    lVar1 = plVar6[2];
    plVar12 = (longlong *)plVar6[1];
    local_150 = 0xffffffff00000000;
    uStack_148 = 0xffffffffffffffff;
    local_130 = 0xffffffff;
    uStack_128 = 0;
    local_140 = 0xffffffffffffffff;
    uStack_138 = 0xffffffffffffffff;
    puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 10;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk();
      puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 10;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar9;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar10;
    *(undefined8 **)(lVar7 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar10 + 2) = (undefined4)local_150;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_150._4_4_;
    *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_148;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_148._4_4_;
    *(undefined4 *)(puVar10 + 4) = (undefined4)local_140;
    *(undefined4 *)((longlong)puVar10 + 0x24) = local_140._4_4_;
    *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_138;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_138._4_4_;
    *(undefined4 *)(puVar10 + 6) = (undefined4)local_130;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_130._4_4_;
    *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_128._4_4_;
    puVar10[8] = plVar12;
    puVar10[9] = lVar1;
    lVar7 = (**(code **)(*plVar12 + 8))(plVar12);
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar10[8] + 0x20))();
    }
    lVar7 = (**(code **)(*(longlong *)puVar10[9] + 8))();
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar10[9] + 0x20))();
    }
    lVar1 = param_2[8];
    lVar7 = plVar6[2];
    puVar10 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 3;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 3;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar9;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar10;
    *(undefined8 **)(lVar1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
  }
  else {
    uStack_16c = local_188._4_4_;
    local_178 = (undefined *)0x0;
    FUN_141a19150(param_2[8],0,0,0);
    uStack_160 = CONCAT44(uStack_16c,iStack_170);
    local_168 = local_178;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_168,0);
    if ((*(int *)(lVar1 + 0x38) < DAT_146a543e8) &&
       (_Init_thread_header(&DAT_146a543e8), DAT_146a543e8 == -1)) {
      FName::FName(&DAT_146a543e0,L"AsyncEyeAdaptationEndFence",1);
      _Init_thread_footer(&DAT_146a543e8);
    }
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_188,&DAT_146a543e0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x15,&local_188);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_188);
    if (((*(char *)((longlong)param_1 + 10) != '\0') && (*(char *)((longlong)param_1 + 0xb) != '\0')
        ) && (DAT_146ab62f0 != '\0')) {
      plVar12 = param_1;
      while (plVar12 = plVar12 + 2, plVar12 != param_1 + 4) {
        plVar11 = (longlong *)*plVar12;
        if (((plVar11 == (longlong *)0x0) || (*(char *)((longlong)plVar11 + 10) == '\0')) ||
           ((*(char *)((longlong)plVar11 + 0xb) == '\0' || (DAT_146ab62f0 == '\0')))) {
          cVar14 = '\0';
        }
        else {
          cVar14 = '\x01';
        }
        cVar5 = FRenderingCompositePass::IsAsyncComputePass(param_1);
        if (((cVar5 != cVar14) && (plVar11 != (longlong *)0x0)) &&
           (lVar7 = (**(code **)(*plVar11 + 0x80))(plVar11), lVar7 != 0)) {
          puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          plVar11 = puVar9 + 3;
          if (DAT_146ab7068 < puVar9 + 3) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
            puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            plVar11 = puVar9 + 3;
          }
          DAT_146ab7060 = plVar11;
          _DAT_146ab7044 = _DAT_146ab7044 + 1;
          *DAT_146ab7038 = puVar9;
          DAT_146ab7038 = puVar9 + 1;
          *DAT_146ab7038 = 0;
          *puVar9 = &PTR_LAB_144dc9d10;
          puVar9[2] = lVar7;
        }
      }
      local_188 = plVar6[3];
      plVar11 = (longlong *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      plVar12 = plVar11 + 1;
      if (DAT_146ab7068 < plVar12) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
        plVar11 = (longlong *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        plVar12 = plVar11 + 1;
      }
      DAT_146ab7060 = plVar12;
      *plVar11 = local_188;
      puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      plVar12 = puVar9 + 6;
      if (DAT_146ab7068 < plVar12) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        plVar12 = puVar9 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      local_1d8 = local_158;
      DAT_146ab7060 = plVar12;
      *DAT_146ab7038 = puVar9;
      DAT_146ab7038 = puVar9 + 1;
      *puVar9 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar9 + 2) = 1;
      puVar9[3] = plVar11;
      puVar9[4] = 2;
      puVar9[5] = 0;
      puVar9[1] = 0;
      FUN_141c35a10(param_1,&DAT_146ab7030,param_2,plVar6[3]);
      local_188 = plVar6[3];
      lVar7 = param_1[0x15];
      plVar12 = (longlong *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      plVar6 = plVar12 + 1;
      if (DAT_146ab7068 < plVar6) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
        plVar12 = (longlong *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        plVar6 = plVar12 + 1;
      }
      DAT_146ab7060 = plVar6;
      *plVar12 = local_188;
      puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      plVar6 = puVar9 + 6;
      if (DAT_146ab7068 < plVar6) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        plVar6 = puVar9 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = plVar6;
      *DAT_146ab7038 = puVar9;
      DAT_146ab7038 = puVar9 + 1;
      *puVar9 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar9 + 2) = 1;
      puVar9[3] = plVar12;
      *(undefined4 *)(puVar9 + 4) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x24) = 1;
      puVar9[5] = lVar7;
      puVar9[1] = 0;
      FUN_141ec93f0(&DAT_146ab7030);
      goto LAB_141c53dd2;
    }
    FUN_141c3fd40(param_1,param_2[8]);
    lVar7 = param_2[8];
    lVar1 = plVar6[2];
    puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 3;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x20);
      puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 3;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar9;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar10;
    *(undefined8 **)(lVar7 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144e1b868;
    puVar10[2] = lVar1;
    lVar7 = param_2[8];
    local_188 = plVar6[3];
    plVar11 = (longlong *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar12 = plVar11 + 1;
    if (*(longlong **)(lVar7 + 0x38) < plVar12) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x10);
      plVar11 = (longlong *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar12 = plVar11 + 1;
    }
    *(longlong **)(lVar7 + 0x30) = plVar12;
    *plVar11 = local_188;
    puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 6;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar9;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    local_1d8 = local_158;
    **(undefined8 **)(lVar7 + 8) = puVar10;
    *(undefined8 **)(lVar7 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar10 + 2) = 1;
    puVar10[3] = plVar11;
    puVar10[4] = 2;
    puVar10[5] = 0;
    FUN_141c35e10(param_1,param_2[8],param_2,plVar6[3]);
    lVar7 = param_2[8];
    local_188 = plVar6[3];
    lVar1 = param_1[0x15];
    plVar11 = (longlong *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar12 = plVar11 + 1;
    if (*(longlong **)(lVar7 + 0x38) < plVar12) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x10);
      plVar11 = (longlong *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar12 = plVar11 + 1;
    }
    *(longlong **)(lVar7 + 0x30) = plVar12;
    *plVar11 = local_188;
    puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 6;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar9;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar10;
    *(undefined8 **)(lVar7 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar10 + 2) = 1;
    puVar10[3] = plVar11;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 1;
    puVar10[5] = lVar1;
    lVar1 = param_2[8];
    lVar7 = plVar6[2];
    puVar10 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 3;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x20);
      puVar10 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 3;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar9;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar10;
    *(undefined8 **)(lVar1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
  }
  puVar10[2] = lVar7;
  *puVar10 = &PTR_LAB_144e1b878;
LAB_141c53dd2:
  FUN_141d739b0(*param_2);
  return;
}



// FUNCTION 141c53eb0 FUN_141c53eb0 body=1710 status=ok
// SIG undefined FUN_141c53eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c53eb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_448 [32];
  ulonglong local_428;
  undefined4 local_420;
  ulonglong local_418;
  undefined4 local_410;
  ulonglong local_408 [2];
  undefined *local_3f8;
  ulonglong uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8 [2];
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  plVar9 = (longlong *)0x0;
  local_408[0] = local_408[0] & 0xffffffff00000000;
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar6 == 0) {
    return;
  }
  local_3b8[0] = *(undefined8 *)(lVar6 + 0x14);
  puVar3 = *(undefined **)(*param_2 + 0x368);
  uVar4 = *(ulonglong *)(*param_2 + 0x370);
  plVar7 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  lVar6 = *plVar7;
  if (lVar6 != 0) {
    if ((((DAT_1464aa6e0 != *(float *)(lVar6 + 0x24)) || (*(float *)(lVar6 + 0x28) != DAT_1464aa6e4)
         ) || (*(float *)(lVar6 + 0x2c) != DAT_1464aa6e8)) ||
       (*(float *)(lVar6 + 0x30) != DAT_1464aa6ec)) {
      local_408[0] = 0;
      FUN_141a19150(param_2[8],lVar6,0,0);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_408);
      local_3f8 = puVar3;
      uStack_3f0 = uVar4;
      FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_3f8,0,0x3f800000);
      local_410 = 0;
      local_418 = local_418 & 0xffffffffffffff00;
      local_420 = 0;
      local_428 = local_428 & 0xffffffffffffff00;
      DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
      goto LAB_141c540dd;
    }
  }
  uStack_3e0 = 0xffffffff00000000;
  local_3d8 = CONCAT62(local_3d8._2_6_,0x102);
  local_3f8 = (undefined *)0x0;
  uStack_3f0 = 0;
  local_3e8 = lVar6;
  FUN_140c63b80(local_2e8,1,&local_3e8,&local_3f8);
  lVar6 = param_2[8];
  FRHICommandListBase::CacheActiveRenderTargets(lVar6,local_228,local_2e8,local_158);
  puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 0x54;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x2a8);
    puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 0x54;
  }
  *(undefined8 **)(lVar6 + 0x30) = puVar10;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  **(undefined8 **)(lVar6 + 8) = puVar12;
  *(undefined8 **)(lVar6 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar12 + 2,local_2e8);
  local_3f8 = puVar3;
  uStack_3f0 = uVar4;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_3f8,0,0x3f800000);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
LAB_141c540dd:
  local_368 = 0;
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_360 = 0;
  local_35c = 0x26;
  local_354 = 0;
  local_34c = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  FUN_14049afe0(param_2[8],&local_3a8);
  local_378 = FUN_1404a0ce0();
  uStack_370 = FUN_140985530();
  local_368 = FUN_1409853f0();
  lVar6 = param_2[0xc];
  uStack_3f0 = uStack_3f0 & 0xffffffff00000000;
  local_3f8 = &DAT_146a51a90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,local_408,&local_3f8);
  plVar13 = plVar9;
  if ((int)local_408[0] != -1) {
    plVar13 = (longlong *)((longlong)(int)local_408[0] * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  uStack_3f0 = uStack_3f0 & 0xffffffff00000000;
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar9;
  }
  local_3f8 = &DAT_146a51be0;
  lVar1 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,local_408,&local_3f8);
  plVar13 = plVar9;
  if ((int)local_408[0] != -1) {
    plVar13 = (longlong *)((longlong)(int)local_408[0] * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = plVar9;
  }
  lVar6 = *plVar11;
  local_3a8 = DAT_1464c2430;
  if (lVar1 == 0) {
    local_408[0] = 0;
    plVar13 = (longlong *)0x1;
    plStack_3a0 = plVar9;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_3a0 = *(longlong **)(lVar2 + 0x38);
    plVar13 = plVar9;
  }
  uVar8 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_408);
  }
  bVar5 = false;
  if (lVar6 == 0) {
    bVar5 = true;
    local_408[0] = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_388 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_408);
  }
  local_35c = local_35c & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_3a8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar8 = *(undefined8 *)(lVar2 + 0x38);
  FUN_141c07aa0(lVar1,param_2[8],uVar8,*(undefined8 *)(*param_2 + 0x20));
  plVar9 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
  (**(code **)(*plVar9 + 0x78))(plVar9,param_2,local_408,&local_3f8);
  local_428 = local_428 & 0xffffffff00000000;
  FUN_140498810(param_2[8],uVar8,lVar1 + 0xc0,local_408);
  local_428 = local_428 & 0xffffffff00000000;
  FUN_140498810(param_2[8],uVar8,lVar1 + 0xc6,&local_3f8);
  lVar1 = *(longlong *)(lVar6 + 0x48);
  lVar2 = param_2[8];
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_408[0] = *(ulonglong *)(lVar1 + 0x40);
  FUN_141aa9690(lVar6,lVar2,local_408[0],*(undefined8 *)(*param_2 + 0x20));
  local_428 = FUN_141a156e0();
  local_418 = 0;
  local_420 = 0;
  thunk_FUN_141ca99a0(lVar6 + 0xc0,lVar2,local_408,param_2);
  local_428 = CONCAT44(local_428._4_4_,0xf);
  FUN_141aa6fa0(lVar6 + 0x1bc,lVar2,local_408,*(undefined4 *)(*param_2 + 0x1a38));
  plVar9 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
  (**(code **)(*plVar9 + 0x118))(plVar9,param_2,local_3b8);
  lVar6 = param_2[8];
  lVar1 = plVar7[1];
  plVar7 = (longlong *)*plVar7;
  local_3e8 = 0xffffffff00000000;
  uStack_3e0 = 0xffffffffffffffff;
  local_3c8 = 0xffffffff;
  uStack_3c0 = 0;
  local_3d8 = 0xffffffffffffffff;
  uStack_3d0 = 0xffffffffffffffff;
  puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 10;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x58);
    puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 10;
  }
  *(undefined8 **)(lVar6 + 0x30) = puVar10;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  **(undefined8 **)(lVar6 + 8) = puVar12;
  *(undefined8 **)(lVar6 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)local_3e8;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_3e8._4_4_;
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_3e0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_3e0._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_3d8;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_3d8._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_3d0;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_3d0._4_4_;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_3c8;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_3c8._4_4_;
  *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_3c0;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_3c0._4_4_;
  puVar12[8] = plVar7;
  puVar12[9] = lVar1;
  lVar6 = (**(code **)(*plVar7 + 8))(plVar7);
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar12[8] + 0x20))();
  }
  lVar6 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar12[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c54560 FUN_141c54560 body=1210 status=ok
// SIG undefined FUN_141c54560(void)

void FUN_141c54560(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined *local_58;
  undefined4 local_50;
  int local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar8 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar8 != 0) {
    local_48 = *(int *)(param_2 + 8);
    iStack_44 = *(int *)(param_2 + 0xc);
    uStack_40 = *(undefined4 *)(param_2 + 0x10);
    uStack_3c = *(undefined4 *)(param_2 + 0x14);
    lVar9 = FUN_141cf3cd0(param_1 + 0x20,param_2);
    lVar8 = *(longlong *)(param_2 + 0x60);
    local_58 = &DAT_146a517f0;
    local_50 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_res18,&local_58);
    plVar10 = (longlong *)0x0;
    if ((int)local_res18 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_res18 * 0x20 + *(longlong *)(lVar8 + 0x38));
    }
    local_res20 = 0;
    local_res18 = 0;
    plVar14 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    lVar8 = *plVar14;
    FUN_141a19150(*(undefined8 *)(param_2 + 0x40),0,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
    lVar2 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    lVar2 = *(longlong *)(param_2 + 0x40);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 3;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x20);
      puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar12 + 3;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar11;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar12;
    *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_144d91e50;
    puVar12[2] = uVar3;
    lVar2 = *(longlong *)(param_2 + 0x40);
    local_res18 = *(undefined8 *)(lVar9 + 0x10);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 1;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
      puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar12 + 1;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar11;
    *puVar12 = local_res18;
    puVar13 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 6;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
      puVar13 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 6;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar11;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar13;
    *(undefined8 **)(lVar2 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar13 + 2) = 1;
    puVar13[3] = puVar12;
    puVar13[4] = 2;
    puVar13[5] = 0;
    lVar2 = *(longlong *)(lVar8 + 0x48);
    uVar3 = *(undefined8 *)(lVar9 + 0x10);
    local_res18 = CONCAT44(local_res18._4_4_,(uint)*(ushort *)(lVar8 + 0x1bc));
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    lVar4 = *(longlong *)(param_2 + 0x40);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 5;
    if (*(undefined8 **)(lVar4 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar12 + 5;
    }
    *(undefined8 **)(lVar4 + 0x30) = puVar11;
    *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
    **(undefined8 **)(lVar4 + 8) = puVar12;
    *(undefined8 **)(lVar4 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_144d91e40;
    *(int *)(puVar12 + 3) = (int)local_res18;
    puVar12[2] = uVar5;
    puVar12[4] = uVar3;
    iVar6 = ((*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8)) + -1) / 2;
    iVar7 = ((*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0xc)) + -1) / 2;
    local_res18 = CONCAT44(iVar7,iVar6);
    uVar3 = local_res18;
    uVar16 = iVar7 + 0x1fU >> 5;
    uVar15 = iVar6 + 0x3fU >> 6;
    local_res20 = CONCAT44(uVar16,uVar15);
    local_res18 = CONCAT44((iStack_44 + 1) / 2,(local_48 + 1) / 2);
    FUN_141c59070(lVar8,*(undefined8 *)(param_2 + 0x40),param_2,local_res20,local_res18,uVar3);
    DispatchComputeShader(*(undefined8 *)(param_2 + 0x40),lVar8,uVar15,uVar16,1);
    uVar1 = *(ushort *)(lVar8 + 0x1bc);
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    lVar2 = *(longlong *)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(lVar8 + 0x60);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar12 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar11;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar12;
    *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_144d91e40;
    puVar12[2] = uVar3;
    puVar12[4] = 0;
    lVar8 = *(longlong *)(param_2 + 0x40);
    local_res18 = *(undefined8 *)(lVar9 + 0x10);
    puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 1;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x10);
      puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar12 + 1;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar11;
    *puVar12 = local_res18;
    puVar13 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 6;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x38);
      puVar13 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 6;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar11;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar13;
    *(undefined8 **)(lVar8 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *(undefined4 *)(puVar13 + 4) = 0;
    puVar13[5] = 0;
    *puVar13 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar13 + 2) = 1;
    puVar13[3] = puVar12;
    *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  }
  return;
}



// FUNCTION 141c54a20 FUN_141c54a20 body=1194 status=ok
// SIG undefined FUN_141c54a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c54a20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_1d8 [32];
  float local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar13 = (longlong *)0x0;
  local_168 = local_168 & 0xffffffff00000000;
  lVar8 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x34);
    uVar2 = *(undefined8 *)(lVar8 + 0x14);
    local_120 = uVar1;
    local_118 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x20,param_2);
    local_168 = 0;
    FUN_141a19150(*(undefined8 *)(param_2 + 0x40),*local_118,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_168);
    local_c8 = 0;
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_c0 = 0;
    local_bc = 0x26;
    local_b4 = 0;
    local_ac = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    FUN_14049afe0(*(undefined8 *)(param_2 + 0x40),&local_108);
    local_d8 = FUN_1404a0ce0();
    uStack_d0 = FUN_140985530();
    local_c8 = FUN_1409853f0();
    lVar8 = *(longlong *)(param_2 + 0x60);
    local_158 = 0;
    local_160 = &DAT_146a51f90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_168,&local_160);
    plVar14 = plVar13;
    if ((int)local_168 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_168 * 0x20 + *(longlong *)(lVar8 + 0x38));
    }
    local_158 = 0;
    plVar11 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar11 = plVar13;
    }
    local_160 = &DAT_146a51940;
    lVar3 = *plVar11;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_168,&local_160);
    plVar14 = plVar13;
    if ((int)local_168 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_168 * 0x20 + *(longlong *)(lVar8 + 0x38));
    }
    plVar11 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar11 = plVar13;
    }
    lVar8 = *plVar11;
    local_108 = DAT_1464c2720;
    if (lVar3 == 0) {
      local_168 = 0;
      plVar14 = (longlong *)0x1;
      plStack_100 = plVar13;
    }
    else {
      lVar4 = *(longlong *)(lVar3 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      plStack_100 = *(longlong **)(lVar4 + 0x38);
      plVar14 = plVar13;
    }
    uVar9 = 0;
    if (plVar14 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
    }
    bVar5 = false;
    if (lVar8 == 0) {
      bVar5 = true;
      local_168 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar8 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      uVar9 = *(undefined8 *)(lVar4 + 0x40);
    }
    local_e8 = uVar9;
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
    }
    local_bc = local_bc & 0xffffffff00000000;
    FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),&local_108,2,1);
    iVar6 = ((*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8)) + -1) / 2;
    iVar7 = ((*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0xc)) + -1) / 2;
    local_168 = CONCAT44(iVar7,iVar6);
    FUN_141c3d340(lVar8,*(undefined8 *)(param_2 + 0x40),param_2,
                  (iVar7 + 0x1fU >> 5) * (iVar6 + 0x3fU >> 6));
    local_170 = 1;
    local_178 = 1;
    local_198 = 0;
    local_1b8 = (float)local_120._4_4_;
    local_1a0 = (float)(int)uVar2;
    local_1a8 = 0;
    local_1b0 = 0;
    local_190 = uVar1;
    local_188 = uVar2;
    local_180 = lVar3;
    DrawRectangle(*(undefined8 *)(param_2 + 0x40));
    lVar8 = *(longlong *)(param_2 + 0x40);
    local_150 = 0xffffffff00000000;
    uStack_148 = 0xffffffffffffffff;
    uVar1 = local_118[1];
    plVar13 = (longlong *)*local_118;
    local_130 = 0xffffffff;
    uStack_128 = 0;
    local_140 = 0xffffffffffffffff;
    uStack_138 = 0xffffffffffffffff;
    puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 10;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
      puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 10;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar10;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar12;
    *(undefined8 **)(lVar8 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar12 + 2) = (undefined4)local_150;
    *(undefined4 *)((longlong)puVar12 + 0x14) = local_150._4_4_;
    *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_148;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_148._4_4_;
    *(undefined4 *)(puVar12 + 4) = (undefined4)local_140;
    *(undefined4 *)((longlong)puVar12 + 0x24) = local_140._4_4_;
    *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_138;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_138._4_4_;
    *(undefined4 *)(puVar12 + 6) = (undefined4)local_130;
    *(undefined4 *)((longlong)puVar12 + 0x34) = local_130._4_4_;
    *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_128._4_4_;
    puVar12[8] = plVar13;
    puVar12[9] = uVar1;
    lVar8 = (**(code **)(*plVar13 + 8))(plVar13);
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar12[8] + 0x20))();
    }
    lVar8 = (**(code **)(*(longlong *)puVar12[9] + 8))();
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar12[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141c54ed0 FUN_141c54ed0 body=1394 status=ok
// SIG undefined FUN_141c54ed0(void)

void FUN_141c54ed0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_res18;
  longlong *local_res20;
  undefined4 uVar15;
  uint uVar16;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar8 = FSceneRenderTargets::Get(param_2[8]);
  FUN_141a19150(param_2[8],0,0,0);
  local_78 = *(undefined8 *)(*param_2 + 0x1aa0);
  uStack_70 = *(undefined8 *)(*param_2 + 0x1aa8);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_78,0,0x3f800000);
  local_res20 = (longlong *)0x0;
  FUN_141c46100(param_1,param_2,&local_res20);
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,0);
  uVar9 = FRenderingCompositeOutputRef::GetOutput(uVar9);
  FUN_141cf3cd0(uVar9,param_2);
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,0);
  lVar10 = FRenderingCompositeOutputRef::GetOutput(uVar9);
  plVar4 = *(longlong **)(lVar10 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  lVar10 = *param_2;
  lVar5 = param_2[8];
  uVar15 = *(undefined4 *)(lVar10 + 0x1aac);
  uVar1 = *(undefined4 *)(lVar10 + 0x1aa8);
  uVar2 = *(undefined4 *)(lVar10 + 0x1aa4);
  uVar3 = *(undefined4 *)(lVar10 + 0x1aa0);
  puVar12 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar12 + 5;
  if (*(undefined8 **)(lVar5 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 5;
  }
  *(undefined8 **)(lVar5 + 0x30) = puVar11;
  bVar6 = false;
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  **(undefined8 **)(lVar5 + 8) = puVar12;
  *(undefined8 **)(lVar5 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar12 + 2) = uVar3;
  *(undefined4 *)(puVar12 + 3) = 0x3f600000;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)puVar12 + 0x14) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar1;
  *(undefined4 *)(puVar12 + 4) = uVar15;
  local_res18 = 0;
  uVar16 = *(uint *)(*param_2 + 0x1a58);
  puVar11 = &local_res18;
  FUN_141dfe0f0(param_2[8],*param_2,local_res20,0xf,puVar11,uVar16);
  uVar15 = (undefined4)((ulonglong)puVar11 >> 0x20);
  lVar10 = *param_2;
  local_b0 = 0;
  local_a0 = 0x11;
  local_98 = *(longlong *)(lVar10 + 0x20);
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  local_90 = local_res18;
  local_80 = 0;
  local_7c = 0;
  local_84 = -(uint)(*(char *)(lVar10 + 0x11b4) != '\0') & 8 |
             (uint)(*(char *)(lVar10 + 0x1205) != '\0');
  local_a8 = FUN_141abfb70();
  local_88 = 0;
  uVar9 = CONCAT44(uVar15,0x11);
  FUN_141ad74f0(param_2[8],plVar4[1],*(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 0x10),0,uVar9,
                uVar16 & 0xffffff00);
  uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a54a98) {
    _Init_thread_header(&DAT_146a54a98);
    if (DAT_146a54a98 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a54a90 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.SeparateTranslucencyAutoDownsample");
      _Init_thread_footer(&DAT_146a54a98);
    }
  }
  if (DAT_146a54a90 != (longlong *)0x0) {
    iVar7 = (**(code **)(*DAT_146a54a90 + 0x68))();
    bVar6 = 0 < iVar7;
    if (bVar6) {
      lVar8 = *(longlong *)(*param_2 + 0x1ab0);
      if ((lVar8 != 0) && (*(char *)(*param_2 + 0x1202) == '\0')) {
        FUN_141d1f100(lVar8 + 0x1658,param_2[8]);
      }
    }
  }
  FUN_141e07210(param_1[0x16],param_2[8],*param_2,&local_b0,CONCAT44(uVar15,2),1);
  if (bVar6) {
    lVar8 = *(longlong *)(*param_2 + 0x1ab0);
    if ((lVar8 != 0) && (*(char *)(*param_2 + 0x1202) == '\0')) {
      FUN_141d2dde0(lVar8 + 0x1658,param_2[8]);
    }
  }
  lVar8 = param_2[8];
  lVar10 = plVar4[2];
  plVar13 = (longlong *)plVar4[1];
  puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar12 + 10;
  if (*(undefined8 **)(lVar8 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
    puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 10;
  }
  *(undefined8 **)(lVar8 + 0x30) = puVar11;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  **(undefined8 **)(lVar8 + 8) = puVar12;
  *(undefined8 **)(lVar8 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar12 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar12 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar12 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar12 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
  *(undefined4 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
  puVar12[8] = plVar13;
  puVar12[9] = lVar10;
  lVar8 = (**(code **)(*plVar13 + 8))(plVar13);
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*(longlong *)puVar12[8] + 0x18))();
    if (lVar8 == 0) {
      (**(code **)(*(longlong *)puVar12[8] + 0x20))();
    }
  }
  lVar8 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*(longlong *)puVar12[9] + 0x18))();
    if (lVar8 == 0) {
      (**(code **)(*(longlong *)puVar12[9] + 0x20))();
    }
  }
  lVar8 = param_2[8];
  lVar10 = plVar4[1];
  plVar14 = (longlong *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar13 = plVar14 + 1;
  if (*(longlong **)(lVar8 + 0x38) < plVar13) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x10);
    plVar14 = (longlong *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar13 = plVar14 + 1;
  }
  *(longlong **)(lVar8 + 0x30) = plVar13;
  *plVar14 = lVar10;
  puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar12 + 5;
  if (*(undefined8 **)(lVar8 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 5;
  }
  *(undefined8 **)(lVar8 + 0x30) = puVar11;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  **(undefined8 **)(lVar8 + 8) = puVar12;
  *(undefined8 **)(lVar8 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar12 + 2) = 1;
  puVar12[3] = plVar14;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined1 *)((longlong)puVar12 + 0x24) = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  (**(code **)(*plVar4 + 0x30))(plVar4);
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x30))();
  }
  return;
}



// FUNCTION 141c55450 FUN_141c55450 body=9748 status=ok
// SIG undefined FUN_141c55450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c55450(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  byte bVar26;
  int iVar27;
  byte bVar28;
  byte bVar29;
  int iVar30;
  bool bVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_398 [32];
  longlong **local_378;
  longlong **local_370;
  longlong **local_368;
  char local_358;
  undefined1 local_357;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined1 local_330;
  char local_32f;
  undefined1 local_32e [6];
  undefined8 local_328;
  undefined8 uStack_320;
  char local_318;
  byte local_317;
  byte local_316;
  longlong *local_308;
  char *pcStack_300;
  char local_2f8;
  int local_2f4 [3];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  int local_2d8;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  longlong local_2c0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  longlong *local_288;
  undefined8 uStack_280;
  longlong *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong *local_268;
  ulonglong uStack_260;
  longlong *local_258;
  undefined1 *puStack_250;
  longlong *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 *local_238;
  undefined8 local_230;
  longlong local_228;
  char local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 *local_208;
  char *local_200;
  undefined8 *local_1f8;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [48];
  undefined1 local_148 [64];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined1 local_d0;
  wchar_t *local_c8;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  uStack_340 = local_32e;
  local_32e[0] = 0;
  local_258 = (longlong *)&DAT_14060d670;
  local_348 = (longlong *)&DAT_14060d670;
  puStack_250 = uStack_340;
  local_210 = param_1;
  lVar11 = FUN_1415d8310(&local_348,&DAT_146216a38);
  local_238 = (undefined8 *)(lVar11 + 0x18);
  local_230 = *local_238;
  local_228 = *(longlong *)(lVar11 + 0x28);
  local_220 = '\0';
  local_218 = *(undefined8 *)(lVar11 + 0x30);
  *(undefined8 ***)(lVar11 + 0x30) = &local_238;
  *(int *)(lVar11 + 0x38) = *(int *)(lVar11 + 0x38) + 1;
  FUN_141cd7760(local_178,param_2,param_3);
  FUN_141c40530(local_2d0,param_2,local_148,param_3);
  local_2d8 = *(int *)(param_3 + 0x1a10);
  bVar5 = false;
  local_248 = (longlong *)0x0;
  uStack_240 = 0;
  local_258 = (longlong *)0x0;
  puStack_250 = (undefined1 *)((ulonglong)puStack_250 & 0xffffffff00000000);
  if ((local_2d8 == 2) && (lVar11 = *(longlong *)(param_3 + 0x18), lVar11 != 0)) {
    plVar18 = *(longlong **)(lVar11 + 0x12a8);
    plVar15 = *(longlong **)(lVar11 + 0x12b0);
    *(longlong **)(lVar11 + 0x12b0) = plVar18;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x28))();
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x30))(plVar15);
    }
    plVar18 = *(longlong **)(lVar11 + 0x12b8);
    plVar15 = *(longlong **)(lVar11 + 0x12c0);
    *(longlong **)(lVar11 + 0x12c0) = plVar18;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x28))();
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x30))(plVar15);
    }
  }
  plVar18 = *(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18);
  (**(code **)(*plVar18 + 0x20))(plVar18,local_188);
  lVar16 = *(longlong *)(param_3 + 0x1aa0);
  uVar2 = *(ulonglong *)(param_3 + 0x1aa8);
  iVar30 = *(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
  iVar27 = *(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4);
  local_338 = (longlong *)CONCAT44(iVar27,iVar30);
  local_2f4[0] = iVar30;
  local_298 = lVar16;
  uStack_290 = uVar2;
  lVar11 = FSceneRenderTargets::Get(param_2);
  lVar11 = *(longlong *)(lVar11 + 0x378);
  if (((param_4 != '\0') || ((int)lVar11 != iVar30)) ||
     (local_330 = 0, (int)((ulonglong)lVar11 >> 0x20) != iVar27)) {
    local_330 = 1;
  }
  cVar8 = FUN_142753910();
  local_2f8 = cVar8;
  fVar32 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 0x28))();
  if ((fVar32 == 1.0) && (*(char *)(param_3 + 0x1202) != '\0')) {
    iVar27 = FUN_14274f980(param_3);
    local_32e[0] = 1;
    if (iVar27 != 0xb) goto LAB_141c55664;
  }
  else {
LAB_141c55664:
    local_32e[0] = 0;
  }
  bVar29 = 1;
  iVar27 = local_2d8;
  if ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x28) & 1) == 0) goto LAB_141c57170;
  iVar27 = FUN_14274f1e0();
  bVar31 = iVar27 == 4;
  if ((bVar31) || (iVar27 == 2)) {
    bVar26 = 1;
  }
  else {
    bVar26 = 0;
  }
  if ((bVar31) || (*(char *)(param_3 + 0x3010) == '\0')) {
    bVar28 = 0;
    local_317 = 0;
    if (!bVar31) goto LAB_141c556bd;
LAB_141c556ca:
    bVar29 = 0;
  }
  else {
    bVar28 = 1;
    local_317 = 1;
LAB_141c556bd:
    fVar32 = (float)FUN_141c7d060(param_3);
    if (fVar32 <= 0.0) goto LAB_141c556ca;
  }
  local_32f = 0.0 < *(float *)(param_3 + 0x1468);
  if ((bVar29 != 0) &&
     (((*(byte *)(param_3 + 0x1718) & 1) == 0 || (*(int *)(local_2c0 + 0x1a38) < 1)))) {
    bVar5 = true;
  }
  if ((((!(bool)local_32f) || (bVar28 != 0)) || (bVar29 != 0)) ||
     (local_318 = '\x01', *(int *)(DAT_146a51db8 + 4) == 0)) {
    local_318 = '\0';
  }
  local_316 = 0.0 < *(float *)(param_3 + 0x1650) || (bool)local_32f;
  bVar9 = FUN_142753a10();
  uVar6 = uStack_2e0;
  iVar27 = local_2d8;
  puVar7 = uStack_340;
  if ((bVar9 & (local_316 | bVar29 | bVar28) & bVar26) != 0) {
    local_368 = (longlong **)&local_348;
    uVar3 = uStack_2e0 >> 0x20;
    uStack_2e0 = uVar3 << 0x20;
    uStack_340 = (char *)uStack_2e0;
    uStack_2e0 = uVar3 << 0x20;
    uStack_320 = (char *)uStack_2e0;
    local_370 = (longlong **)&local_328;
    local_348 = (longlong *)0x0;
    uStack_2e0 = uVar3 << 0x20;
    local_328 = (longlong *)0x0;
    local_378 = &local_268;
    local_268 = (longlong *)0x0;
    uStack_260 = uStack_2e0;
    local_2e8 = (longlong *)0x0;
    uStack_2e0 = uVar3 << 0x20;
    local_308 = (longlong *)0x0;
    pcStack_300 = (char *)(uVar6 & 0xffffffff00000000);
    puVar12 = (undefined8 *)FUN_141c43d40(&local_208,local_2d0,2,&local_308);
    uVar3 = (ulonglong)uStack_320;
    uVar6 = (ulonglong)uStack_320 >> 0x20;
    uStack_320 = (char *)(uVar6 << 0x20);
    pcStack_300 = uStack_320;
    local_2a8 = (longlong *)*puVar12;
    uStack_2a0 = (char *)puVar12[1];
    local_368 = &local_308;
    local_370 = &local_268;
    local_378 = (longlong **)&local_348;
    uStack_320 = (char *)(uVar6 << 0x20);
    uStack_260 = (ulonglong)uStack_320;
    local_308 = (longlong *)0x0;
    uStack_320 = (char *)(uVar6 << 0x20);
    local_268 = (longlong *)0x0;
    local_348 = (longlong *)0x0;
    uStack_340 = uStack_320;
    local_328 = (longlong *)0x0;
    uStack_320 = (char *)(uVar3 & 0xffffffff00000000);
    puVar12 = (undefined8 *)FUN_141c43d40(&local_208,local_2d0,1);
    local_2a8 = (longlong *)*puVar12;
    uStack_2a0 = (char *)puVar12[1];
    if ((param_4 == '\0') && ((bVar28 != 0 || (bVar29 != 0)))) {
      uStack_320 = &local_358;
      local_358 = '\0';
      local_328 = (longlong *)&DAT_14060d670;
      local_308 = (longlong *)&DAT_14060d670;
      pcStack_300 = uStack_320;
      lVar13 = FUN_1415d8310(&local_308,&DAT_146216a38);
      plVar14 = (longlong *)operator_new(0xb8,lVar13 + 0x18,1);
      plVar18 = local_2c8;
      plVar15 = (longlong *)0x0;
      if (plVar14 != (longlong *)0x0) {
        *(undefined4 *)(plVar14 + 1) = 0;
        plVar14[2] = 0;
        *(undefined4 *)(plVar14 + 3) = 0;
        plVar14[4] = 1;
        plVar14[5] = 0;
        plVar14[6] = 0;
        plVar14[7] = 0;
        plVar14[8] = 1;
        *(undefined2 *)(plVar14 + 9) = 1;
        plVar14[0xc] = (longlong)L"UnknownTexture";
        *(undefined8 *)((longlong)plVar14 + 0x4c) = 0;
        *(undefined4 *)((longlong)plVar14 + 0x54) = 0;
        *(undefined1 *)(plVar14 + 0xb) = 0;
        *(undefined2 *)(plVar14 + 0xd) = 1;
        plVar14[0xe] = 0;
        *(undefined4 *)(plVar14 + 0xf) = 0;
        plVar14[0x10] = 0;
        plVar14[0x11] = 0;
        plVar14[0x13] = 0;
        plVar14[0x14] = 0;
        plVar14[0x12] = 0;
        *plVar14 = (longlong)&PTR__scalar_deleting_destructor__144e0aad8;
        plVar14[0x15] = lVar11;
        *(undefined1 *)(plVar14 + 0x16) = 0;
        plVar15 = plVar14;
      }
      iVar27 = (int)local_2c8[1];
      *(int *)(local_2c8 + 1) = iVar27 + 1;
      if (*(int *)((longlong)local_2c8 + 0xc) < iVar27 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar27);
      }
      *(longlong **)(*plVar18 + (longlong)iVar27 * 8) = plVar15;
      (**(code **)(*plVar15 + 0x18))(plVar15,0,&local_2a8);
      uStack_2a0 = uStack_320;
      uStack_320 = (char *)((ulonglong)uStack_320 & 0xffffffff00000000);
      uStack_2a0 = (char *)((ulonglong)uStack_2a0 & 0xffffffff00000000);
      local_328 = plVar15;
      local_2a8 = plVar15;
      bVar28 = local_317;
    }
    lVar11 = (longlong)local_338;
    plVar18 = (longlong *)0x0;
    local_278 = (longlong *)0x0;
    uStack_270 = 0;
    if (((bVar28 != 0) || (bVar5)) || (local_32f != '\0')) {
      uStack_320 = &local_358;
      local_358 = '\0';
      local_328 = (longlong *)&DAT_14060d670;
      local_308 = (longlong *)&DAT_14060d670;
      pcStack_300 = uStack_320;
      lVar13 = FUN_1415d8310(&local_308,&DAT_146216a38);
      if (local_318 == '\0') {
        plVar15 = (longlong *)operator_new(0xc0,lVar13 + 0x18,1);
        if (plVar15 != (longlong *)0x0) {
          *(undefined4 *)(plVar15 + 1) = 0;
          plVar15[2] = 0;
          *(undefined4 *)(plVar15 + 3) = 0;
          plVar15[4] = 1;
          plVar15[5] = 0;
          plVar15[6] = 0;
          plVar15[7] = 0;
          plVar15[8] = 1;
          *(undefined2 *)(plVar15 + 9) = 1;
          plVar15[0xc] = (longlong)L"UnknownTexture";
          *(undefined8 *)((longlong)plVar15 + 0x4c) = 0;
          *(undefined4 *)((longlong)plVar15 + 0x54) = 0;
          *(undefined1 *)(plVar15 + 0xb) = 0;
          *(undefined2 *)(plVar15 + 0xd) = 1;
          plVar15[0xe] = 0;
          *(undefined4 *)(plVar15 + 0xf) = 0;
          plVar15[0x10] = 0;
          plVar15[0x11] = 0;
          plVar15[0x13] = 0;
          plVar15[0x14] = 0;
          plVar15[0x12] = 0;
          *plVar15 = (longlong)&PTR__scalar_deleting_destructor__144e1bff8;
          *(undefined1 *)(plVar15 + 0x17) = local_330;
          plVar15[0x15] = lVar16;
          plVar15[0x16] = uVar2;
          plVar18 = plVar15;
        }
      }
      else {
        plVar15 = (longlong *)operator_new(0xb8,lVar13 + 0x18,1);
        if (plVar15 != (longlong *)0x0) {
          *(undefined4 *)(plVar15 + 1) = 0;
          plVar15[2] = 0;
          *(undefined4 *)(plVar15 + 3) = 0;
          plVar15[4] = 1;
          plVar15[5] = 0;
          plVar15[6] = 0;
          plVar15[7] = 0;
          plVar15[8] = 1;
          *(undefined2 *)(plVar15 + 9) = 1;
          plVar15[0xc] = (longlong)L"UnknownTexture";
          *(undefined8 *)((longlong)plVar15 + 0x4c) = 0;
          *(undefined4 *)((longlong)plVar15 + 0x54) = 0;
          *(undefined1 *)(plVar15 + 0xb) = 0;
          *(undefined2 *)(plVar15 + 0xd) = 1;
          plVar15[0xe] = 0;
          *(undefined4 *)(plVar15 + 0xf) = 0;
          plVar15[0x10] = 0;
          plVar15[0x11] = 0;
          plVar15[0x13] = 0;
          plVar15[0x14] = 0;
          plVar15[0x12] = 0;
          *plVar15 = (longlong)&PTR__scalar_deleting_destructor__144e1c080;
          *(undefined1 *)(plVar15 + 0x16) = local_330;
          plVar15[0x15] = lVar11;
          plVar18 = plVar15;
        }
      }
      plVar15 = local_2c8;
      iVar27 = (int)local_2c8[1];
      *(int *)(local_2c8 + 1) = iVar27 + 1;
      if (*(int *)((longlong)local_2c8 + 0xc) < iVar27 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar27);
      }
      *(longlong **)(*plVar15 + (longlong)iVar27 * 8) = plVar18;
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_2a8);
      uStack_26c = (undefined4)((ulonglong)uStack_320 >> 0x20);
      uStack_320 = (char *)((ulonglong)uStack_320 & 0xffffffff00000000);
      local_328 = plVar18;
      local_278 = plVar18;
    }
    uStack_270 = 0;
    plVar18 = (longlong *)0x0;
    if (bVar29 != 0) {
      local_358 = '\0';
      pcStack_300 = &local_358;
      if (bVar5) {
        local_328 = (longlong *)&DAT_14060d670;
        local_308 = (longlong *)&DAT_14060d670;
        uStack_320 = pcStack_300;
        lVar13 = FUN_1415d8310(&local_308,&DAT_146216a38);
        plVar14 = (longlong *)operator_new(0xb0,lVar13 + 0x18,1,0);
        plVar15 = local_2c8;
        iVar30 = uStack_290._4_4_;
        iVar27 = (int)uStack_290;
        if (plVar14 != (longlong *)0x0) {
          *(undefined4 *)(plVar14 + 1) = 0;
          plVar14[2] = 0;
          *(undefined4 *)(plVar14 + 3) = 0;
          plVar14[4] = 1;
          plVar14[5] = 0;
          plVar14[6] = 0;
          plVar14[7] = 0;
          plVar14[8] = 1;
          *(undefined2 *)(plVar14 + 9) = 1;
          *(undefined8 *)((longlong)plVar14 + 0x4c) = 0;
          *(undefined4 *)((longlong)plVar14 + 0x54) = 0;
          *(undefined1 *)(plVar14 + 0xb) = 0;
          plVar14[0xc] = (longlong)L"UnknownTexture";
          *(undefined2 *)(plVar14 + 0xd) = 1;
          plVar14[0xe] = 0;
          *(undefined4 *)(plVar14 + 0xf) = 0;
          plVar14[0x10] = 0;
          plVar14[0x11] = 0;
          plVar14[0x13] = 0;
          plVar14[0x14] = 0;
          plVar14[0x12] = 0;
          *plVar14 = (longlong)&PTR__scalar_deleting_destructor__144e1c108;
          local_338 = (longlong *)
                      CONCAT44(uStack_290._4_4_ - local_298._4_4_,(int)uStack_290 - (int)local_298);
          plVar14[0x15] = (longlong)local_338;
          plVar18 = plVar14;
        }
        iVar1 = (int)local_2c8[1];
        *(int *)(local_2c8 + 1) = iVar1 + 1;
        if (*(int *)((longlong)local_2c8 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar1);
        }
        *(longlong **)(*plVar15 + (longlong)iVar1 * 8) = plVar18;
        (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_278);
        pcStack_300 = &local_358;
        plVar15 = (longlong *)0x0;
        uStack_320 = (char *)((ulonglong)uStack_320 & 0xffffffff00000000);
        local_328 = (longlong *)&DAT_14060d670;
        uStack_340 = uStack_320;
        local_308 = (longlong *)&DAT_14060d670;
        local_358 = '\0';
        local_348 = plVar18;
        uStack_320 = pcStack_300;
        lVar13 = FUN_1415d8310(&local_308,&DAT_146216a38);
        plVar14 = (longlong *)operator_new(0xd0,lVar13 + 0x18,1,0);
        plVar18 = local_2c8;
        if (plVar14 != (longlong *)0x0) {
          *(undefined4 *)(plVar14 + 1) = 0;
          plVar14[2] = 0;
          *(undefined4 *)(plVar14 + 3) = 0;
          plVar14[4] = 0;
          *(undefined4 *)(plVar14 + 5) = 0;
          plVar14[6] = 1;
          plVar14[7] = 0;
          plVar14[8] = 0;
          plVar14[9] = 0;
          plVar14[10] = 1;
          *(undefined2 *)(plVar14 + 0xb) = 1;
          *(undefined8 *)((longlong)plVar14 + 0x5c) = 0;
          *(undefined4 *)((longlong)plVar14 + 100) = 0;
          *(undefined1 *)(plVar14 + 0xd) = 0;
          plVar14[0xe] = (longlong)L"UnknownTexture";
          *(undefined2 *)(plVar14 + 0xf) = 1;
          plVar14[0x10] = 0;
          *(undefined4 *)(plVar14 + 0x11) = 0;
          plVar14[0x12] = 0;
          plVar14[0x13] = 0;
          plVar14[0x15] = 0;
          plVar14[0x16] = 0;
          plVar14[0x14] = 0;
          *plVar14 = (longlong)&PTR__scalar_deleting_destructor__144e1c190;
          *(undefined1 *)(plVar14 + 0x19) = local_330;
          plVar14[0x17] = lVar16;
          plVar14[0x18] = uVar2;
          plVar15 = plVar14;
        }
        iVar1 = (int)local_2c8[1];
        *(int *)(local_2c8 + 1) = iVar1 + 1;
        if (*(int *)((longlong)local_2c8 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar1);
        }
        *(longlong **)(*plVar18 + (longlong)iVar1 * 8) = plVar15;
        (**(code **)(*plVar15 + 0x18))(plVar15,0,&local_2a8);
        (**(code **)(*plVar15 + 0x18))(plVar15,1,&local_348);
        pcStack_300 = &local_358;
        uStack_320 = (char *)((ulonglong)uStack_320 & 0xffffffff00000000);
        local_328 = (longlong *)&DAT_14060d670;
        uStack_260 = (ulonglong)uStack_320;
        local_308 = (longlong *)&DAT_14060d670;
        local_358 = '\0';
        uStack_320 = pcStack_300;
        local_268 = plVar15;
        lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
        plVar15 = (longlong *)operator_new(0xc0,lVar16 + 0x18,1,0);
        plVar18 = local_2c8;
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar15 + 1) = 0;
          plVar15[2] = 0;
          *(undefined4 *)(plVar15 + 3) = 0;
          plVar15[4] = 0;
          *(undefined4 *)(plVar15 + 5) = 0;
          plVar15[6] = 1;
          plVar15[7] = 0;
          plVar15[8] = 0;
          plVar15[9] = 0;
          plVar15[10] = 1;
          *(undefined2 *)(plVar15 + 0xb) = 1;
          *(undefined8 *)((longlong)plVar15 + 0x5c) = 0;
          *(undefined4 *)((longlong)plVar15 + 100) = 0;
          *(undefined1 *)(plVar15 + 0xd) = 0;
          plVar15[0xe] = (longlong)L"UnknownTexture";
          *(undefined2 *)(plVar15 + 0xf) = 1;
          plVar15[0x10] = 0;
          *(undefined4 *)(plVar15 + 0x11) = 0;
          plVar15[0x12] = 0;
          plVar15[0x13] = 0;
          plVar15[0x15] = 0;
          plVar15[0x16] = 0;
          plVar15[0x14] = 0;
          *plVar15 = (longlong)&PTR__scalar_deleting_destructor__144e1c218;
          local_338 = (longlong *)CONCAT44(iVar30 - local_298._4_4_,iVar27 - (int)local_298);
          plVar15[0x17] = (longlong)local_338;
        }
        iVar27 = (int)local_2c8[1];
        *(int *)(local_2c8 + 1) = iVar27 + 1;
        if (*(int *)((longlong)local_2c8 + 0xc) < iVar27 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar27);
        }
        *(longlong **)(*plVar18 + (longlong)iVar27 * 8) = plVar15;
        (**(code **)(*plVar15 + 0x18))(plVar15,0,&local_268);
        (**(code **)(*plVar15 + 0x18))(plVar15,1,&local_348);
        uVar2 = (ulonglong)uStack_340;
        uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
        puStack_250 = (undefined1 *)(uVar2 & 0xffffffff00000000);
        local_348 = plVar15;
        local_258 = plVar15;
      }
      else {
        local_348 = (longlong *)&DAT_14060d670;
        local_308 = (longlong *)&DAT_14060d670;
        uStack_340 = pcStack_300;
        lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
        lVar16 = operator_new(0xb0,lVar16 + 0x18,1,0);
        if (lVar16 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar16,&DAT_1464c3318);
        }
        local_348 = (longlong *)
                    FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                              (local_2c8,uVar20);
        uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
        if (*(char *)(param_3 + 0x1714) == '\x01') {
          fVar32 = *(float *)(DAT_146a51d70 + 4);
          fVar37 = *(float *)(local_2c0 + 0x1744);
          if (fVar32 <= *(float *)(local_2c0 + 0x1744)) {
            fVar37 = fVar32;
          }
          fVar38 = *(float *)(local_2c0 + 0x1740);
          if (fVar32 <= *(float *)(local_2c0 + 0x1740)) {
            fVar38 = fVar32;
          }
          if ((0.01 <= fVar37) || (*(float *)(DAT_146a51d58 + 4) <= fVar38)) {
            local_357 = 0.01 <= fVar37;
            local_208 = local_2d0;
            local_328 = (longlong *)0x0;
            local_200 = &local_358;
            local_1f8 = &local_348;
            uStack_320 = (char *)((ulonglong)uStack_320 & 0xffffffff00000000);
            local_358 = *(float *)(DAT_146a51d58 + 4) <= fVar38;
            if ((bool)local_357) {
              if (!(bool)local_358) {
                fVar38 = 0.0;
              }
            }
            else if (!(bool)local_358) goto LAB_141c5616a;
            if (!(bool)local_357) {
              fVar37 = 0.0;
            }
            FUN_141c40b10(&local_208,&local_328,fVar37,fVar38);
          }
        }
      }
    }
LAB_141c5616a:
    cVar8 = local_318;
    lVar16 = (longlong)local_338;
    puVar12 = (undefined8 *)0x0;
    local_288 = (longlong *)0x0;
    uStack_280 = (ulonglong)uStack_280._4_4_ << 0x20;
    local_1d8 = (longlong *)0x0;
    uStack_1d0 = (ulonglong)uStack_1d0._4_4_ << 0x20;
    local_1e8 = (longlong *)0x0;
    uStack_1e0 = (ulonglong)uStack_1e0._4_4_ << 0x20;
    local_1c8 = (longlong *)0x0;
    uStack_1c0 = (ulonglong)uStack_1c0._4_4_ << 0x20;
    local_1b8 = (longlong *)0x0;
    uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
    local_1a8 = (longlong *)0x0;
    uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
    local_2e8 = (longlong *)0x0;
    uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
    local_338._4_4_ = SUB84(lVar11,4);
    iVar27 = local_338._4_4_;
    uVar24 = local_338._4_4_ >> 0x1f;
    local_338 = (longlong *)lVar16;
    if (local_318 != '\0') {
      uStack_340 = &local_358;
      local_348 = (longlong *)&DAT_14060d670;
      local_308 = (longlong *)&DAT_14060d670;
      local_358 = '\0';
      pcStack_300 = uStack_340;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      lVar16 = operator_new(0xb8,lVar16 + 0x18,1,0);
      puVar17 = puVar12;
      if (lVar16 != 0) {
        local_338 = (longlong *)
                    CONCAT44((int)(iVar27 + (uVar24 & 3)) >> 2,
                             (int)(local_2f4[0] + (local_2f4[0] >> 0x1f & 3U)) >> 2);
        puVar17 = (undefined8 *)
                  FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                            (lVar16,local_338,0x40a8f5c3);
      }
      plVar18 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_2c8,puVar17);
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_278);
      pcVar4 = uStack_340;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      uStack_280 = (ulonglong)pcVar4 & 0xffffffff00000000;
      local_348 = plVar18;
      local_288 = plVar18;
    }
    if ((local_32f != '\0') && (cVar8 == '\0')) {
      uStack_340 = &local_358;
      local_348 = (longlong *)&DAT_14060d670;
      local_308 = (longlong *)&DAT_14060d670;
      local_358 = cVar8;
      pcStack_300 = uStack_340;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      lVar16 = operator_new(0xb8,lVar16 + 0x18,1,0);
      iVar30 = local_2f4[0];
      uVar25 = local_2f4[0] >> 0x1f;
      puVar17 = puVar12;
      if (lVar16 != 0) {
        local_338 = (longlong *)
                    CONCAT44((int)(iVar27 + (uVar24 & 3)) >> 2,
                             (int)(local_2f4[0] + (uVar25 & 3)) >> 2);
        puVar17 = (undefined8 *)
                  FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                            (lVar16,local_338,0x4028f5c3);
      }
      plVar18 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_2c8,puVar17);
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_278);
      pcStack_300 = &local_358;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      local_348 = (longlong *)&DAT_14060d670;
      uStack_280 = (ulonglong)uStack_340;
      local_308 = (longlong *)&DAT_14060d670;
      local_358 = '\0';
      uStack_340 = pcStack_300;
      local_288 = plVar18;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      lVar16 = operator_new(0xb8,lVar16 + 0x18,1,0);
      puVar17 = puVar12;
      if (lVar16 != 0) {
        local_338 = (longlong *)
                    CONCAT44((int)(iVar27 + (uVar24 & 7)) >> 3,(int)(iVar30 + (uVar25 & 7)) >> 3);
        puVar17 = (undefined8 *)
                  FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                            (lVar16,local_338,0x4028f5c3);
      }
      plVar18 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_2c8,puVar17);
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_288);
      pcStack_300 = &local_358;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      local_348 = (longlong *)&DAT_14060d670;
      uStack_1d0 = (ulonglong)uStack_340;
      local_308 = (longlong *)&DAT_14060d670;
      local_358 = '\0';
      uStack_340 = pcStack_300;
      local_1d8 = plVar18;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      lVar16 = operator_new(0xb8,lVar16 + 0x18,1,0);
      puVar17 = puVar12;
      if (lVar16 != 0) {
        local_338 = (longlong *)
                    CONCAT44((int)(iVar27 + (uVar24 & 0xf)) >> 4,(int)(iVar30 + (uVar25 & 0xf)) >> 4
                            );
        puVar17 = (undefined8 *)
                  FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                            (lVar16,local_338,0x4028f5c3);
      }
      plVar18 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_2c8,puVar17);
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_1d8);
      pcStack_300 = &local_358;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      local_348 = (longlong *)&DAT_14060d670;
      uStack_1e0 = (ulonglong)uStack_340;
      local_308 = (longlong *)&DAT_14060d670;
      local_358 = '\0';
      uStack_340 = pcStack_300;
      local_1e8 = plVar18;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      lVar16 = operator_new(0xb8,lVar16 + 0x18,1,0);
      puVar17 = puVar12;
      if (lVar16 != 0) {
        local_338 = (longlong *)
                    CONCAT44((int)(iVar27 + (uVar24 & 0x1f)) >> 5,
                             (int)(iVar30 + (uVar25 & 0x1f)) >> 5);
        puVar17 = (undefined8 *)
                  FRCPassPostProcessBloomDownES2::FRCPassPostProcessBloomDownES2
                            (lVar16,local_338,0x4028f5c3);
      }
      plVar18 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_2c8,puVar17);
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_1e8);
      lVar16 = local_2c0;
      pcStack_300 = &local_358;
      fVar32 = *(float *)(param_3 + 0x1468);
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      uStack_1c0 = (ulonglong)uStack_340;
      local_348 = (longlong *)&DAT_14060d670;
      local_358 = '\0';
      local_308 = (longlong *)&DAT_14060d670;
      local_298 = CONCAT44(*(float *)(local_2c0 + 0x14c0) * fVar32,
                           fVar32 * *(float *)(local_2c0 + 0x14bc));
      uStack_290 = (ulonglong)(uint)(*(float *)(local_2c0 + 0x14c4) * fVar32);
      local_328 = (longlong *)
                  CONCAT44(*(float *)(local_2c0 + 0x14d0) * fVar32,
                           fVar32 * *(float *)(local_2c0 + 0x14cc));
      uStack_320 = (char *)(ulonglong)(uint)(*(float *)(local_2c0 + 0x14d4) * fVar32);
      uStack_340 = pcStack_300;
      local_1c8 = plVar18;
      lVar13 = FUN_1415d8310(&local_308,&DAT_146216a38);
      puVar19 = (undefined8 *)operator_new(0xf0,lVar13 + 0x18,1,0);
      puVar17 = puVar12;
      if (puVar19 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar19 + 1) = 0;
        puVar19[2] = 0;
        *(undefined4 *)(puVar19 + 3) = 0;
        puVar19[4] = 0;
        *(undefined4 *)(puVar19 + 5) = 0;
        puVar19[6] = 1;
        puVar19[7] = 0;
        puVar19[8] = 0;
        puVar19[9] = 0;
        puVar19[10] = 1;
        *(undefined2 *)(puVar19 + 0xb) = 1;
        *(undefined8 *)((longlong)puVar19 + 0x5c) = 0;
        *(undefined4 *)((longlong)puVar19 + 100) = 0;
        *(undefined1 *)(puVar19 + 0xd) = 0;
        *(undefined2 *)(puVar19 + 0xf) = 1;
        local_338 = (longlong *)
                    CONCAT44((int)(iVar27 + (uVar24 & 0x1f)) >> 5,
                             (int)(iVar30 + (uVar25 & 0x1f)) >> 5);
        puVar19[0xe] = L"UnknownTexture";
        puVar19[0x10] = 0;
        *(undefined4 *)(puVar19 + 0x11) = 0;
        puVar19[0x12] = 0;
        puVar19[0x13] = 0;
        puVar19[0x15] = 0;
        puVar19[0x16] = 0;
        puVar19[0x14] = 0;
        *puVar19 = &PTR__scalar_deleting_destructor__144e1c328;
        puVar19[0x17] = local_338;
        *(undefined4 *)(puVar19 + 0x18) = 0x3fa8f5c3;
        *(undefined4 *)((longlong)puVar19 + 0xc4) = 0x3fa8f5c3;
        *(int *)(puVar19 + 0x1a) = (int)local_298;
        *(int *)((longlong)puVar19 + 0xd4) = local_298._4_4_;
        *(int *)(puVar19 + 0x1b) = (int)uStack_290;
        *(int *)((longlong)puVar19 + 0xdc) = uStack_290._4_4_;
        puVar19[0x1c] = local_328;
        puVar19[0x1d] = uStack_320;
        puVar17 = puVar19;
      }
      plVar18 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_2c8,puVar17);
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_1e8);
      (**(code **)(*plVar18 + 0x18))(plVar18,1,&local_1c8);
      uStack_320._0_4_ = *(float *)(param_3 + 0x1468);
      pcStack_300 = &local_358;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      uStack_1b0 = (ulonglong)uStack_340;
      local_328._0_4_ = (float)uStack_320 * *(float *)(lVar16 + 0x14ac);
      local_328._4_4_ = *(float *)(lVar16 + 0x14b0) * (float)uStack_320;
      local_348 = (longlong *)&DAT_14060d670;
      uStack_320._0_4_ = *(float *)(lVar16 + 0x14b4) * (float)uStack_320;
      local_308 = (longlong *)&DAT_14060d670;
      uStack_320._4_4_ = 0;
      local_358 = '\0';
      uStack_340 = pcStack_300;
      local_1b8 = plVar18;
      lVar13 = FUN_1415d8310(&local_308,&DAT_146216a38);
      puVar19 = (undefined8 *)operator_new(0xf0,lVar13 + 0x18,1,0);
      puVar17 = puVar12;
      if (puVar19 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar19 + 1) = 0;
        puVar19[2] = 0;
        *(undefined4 *)(puVar19 + 3) = 0;
        puVar19[4] = 0;
        *(undefined4 *)(puVar19 + 5) = 0;
        puVar19[6] = 1;
        puVar19[7] = 0;
        puVar19[8] = 0;
        puVar19[9] = 0;
        puVar19[10] = 1;
        *(undefined2 *)(puVar19 + 0xb) = 1;
        *(undefined8 *)((longlong)puVar19 + 0x5c) = 0;
        *(undefined4 *)((longlong)puVar19 + 100) = 0;
        *(undefined1 *)(puVar19 + 0xd) = 0;
        *(undefined2 *)(puVar19 + 0xf) = 1;
        local_338 = (longlong *)
                    CONCAT44((int)(iVar27 + (uVar24 & 0xf)) >> 4,(int)(iVar30 + (uVar25 & 0xf)) >> 4
                            );
        puVar19[0xe] = L"UnknownTexture";
        puVar19[0x10] = 0;
        *(undefined4 *)(puVar19 + 0x11) = 0;
        puVar19[0x12] = 0;
        puVar19[0x13] = 0;
        puVar19[0x15] = 0;
        puVar19[0x16] = 0;
        puVar19[0x14] = 0;
        *puVar19 = &PTR__scalar_deleting_destructor__144e1c328;
        puVar19[0x17] = local_338;
        *(undefined4 *)(puVar19 + 0x18) = 0x3fa8f5c3;
        *(undefined4 *)((longlong)puVar19 + 0xc4) = 0x3fa8f5c3;
        *(float *)(puVar19 + 0x1a) = (float)local_328;
        *(float *)((longlong)puVar19 + 0xd4) = local_328._4_4_;
        *(float *)(puVar19 + 0x1b) = (float)uStack_320;
        *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_320._4_4_;
        puVar19[0x1c] = 0x3f8000003f800000;
        puVar19[0x1d] = 0x3f800000;
        puVar17 = puVar19;
      }
      plVar18 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_2c8,puVar17);
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_1d8);
      (**(code **)(*plVar18 + 0x18))(plVar18,1,&local_1b8);
      fVar32 = *(float *)(param_3 + 0x1468);
      pcStack_300 = &local_358;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      uStack_1a0 = (ulonglong)uStack_340;
      local_348 = (longlong *)&DAT_14060d670;
      local_358 = '\0';
      local_308 = (longlong *)&DAT_14060d670;
      local_328 = (longlong *)
                  CONCAT44(*(float *)(lVar16 + 0x14a0) * fVar32 * 0.5,
                           fVar32 * *(float *)(lVar16 + 0x149c) * 0.5);
      uStack_320 = (char *)(ulonglong)(uint)(*(float *)(lVar16 + 0x14a4) * fVar32 * 0.5);
      uStack_340 = pcStack_300;
      local_1a8 = plVar18;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      puVar17 = (undefined8 *)operator_new(0xf0,lVar16 + 0x18,1,0);
      if (puVar17 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar17 + 1) = 0;
        puVar17[2] = 0;
        *(undefined4 *)(puVar17 + 3) = 0;
        puVar17[4] = 0;
        *(undefined4 *)(puVar17 + 5) = 0;
        puVar17[6] = 1;
        puVar17[7] = 0;
        puVar17[8] = 0;
        puVar17[9] = 0;
        puVar17[10] = 1;
        *(undefined2 *)(puVar17 + 0xb) = 1;
        *(undefined8 *)((longlong)puVar17 + 0x5c) = 0;
        *(undefined4 *)((longlong)puVar17 + 100) = 0;
        *(undefined1 *)(puVar17 + 0xd) = 0;
        *(undefined2 *)(puVar17 + 0xf) = 1;
        local_338 = (longlong *)
                    CONCAT44((int)(iVar27 + (uVar24 & 7)) >> 3,(int)(iVar30 + (uVar25 & 7)) >> 3);
        puVar17[0xe] = L"UnknownTexture";
        puVar17[0x10] = 0;
        *(undefined4 *)(puVar17 + 0x11) = 0;
        puVar17[0x12] = 0;
        puVar17[0x13] = 0;
        puVar17[0x15] = 0;
        puVar17[0x16] = 0;
        puVar17[0x14] = 0;
        *puVar17 = &PTR__scalar_deleting_destructor__144e1c328;
        puVar17[0x17] = local_338;
        *(undefined4 *)(puVar17 + 0x18) = 0x3fa8f5c3;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = 0x3fa8f5c3;
        *(float *)(puVar17 + 0x1a) = (float)local_328;
        *(float *)((longlong)puVar17 + 0xd4) = local_328._4_4_;
        *(float *)(puVar17 + 0x1b) = (float)uStack_320;
        *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_320._4_4_;
        puVar17[0x1c] = 0x3f8000003f800000;
        puVar17[0x1d] = 0x3f800000;
        puVar12 = puVar17;
      }
      plVar18 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_2c8,puVar12);
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_288);
      (**(code **)(*plVar18 + 0x18))(plVar18,1,&local_1a8);
      pcVar4 = uStack_340;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      uStack_2e0 = (ulonglong)pcVar4 & 0xffffffff00000000;
      local_348 = plVar18;
      local_2e8 = plVar18;
    }
    bVar29 = local_317;
    local_198 = (longlong *)0x0;
    uStack_190 = 0;
    if (local_317 != 0) {
      uStack_340 = &local_358;
      local_358 = '\0';
      local_348 = (longlong *)&DAT_14060d670;
      local_308 = (longlong *)&DAT_14060d670;
      pcStack_300 = uStack_340;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      plVar18 = (longlong *)operator_new(0xb0,lVar16 + 0x18,1,0);
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)0x0;
      }
      else {
        TRenderingCompositePassBase<1,1>::TRenderingCompositePassBase<1,1>(plVar18);
        plVar18[0x15] = lVar11;
        *plVar18 = (longlong)&PTR__scalar_deleting_destructor__144e1c3b0;
      }
      plVar15 = local_2c8;
      iVar27 = (int)local_2c8[1];
      *(int *)(local_2c8 + 1) = iVar27 + 1;
      if (*(int *)((longlong)local_2c8 + 0xc) < iVar27 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar27);
      }
      *(longlong **)(*plVar15 + (longlong)iVar27 * 8) = plVar18;
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_278);
      pcStack_300 = &local_358;
      plVar15 = (longlong *)0x0;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      local_348 = (longlong *)&DAT_14060d670;
      uStack_260 = (ulonglong)uStack_340;
      local_308 = (longlong *)&DAT_14060d670;
      local_358 = '\0';
      uStack_340 = pcStack_300;
      local_268 = plVar18;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      plVar18 = (longlong *)operator_new(0xb0,lVar16 + 0x18,1,0);
      if (plVar18 != (longlong *)0x0) {
        TRenderingCompositePassBase<1,1>::TRenderingCompositePassBase<1,1>(plVar18);
        plVar18[0x15] = lVar11;
        *plVar18 = (longlong)&PTR__scalar_deleting_destructor__144e1c438;
        plVar15 = plVar18;
      }
      plVar18 = local_2c8;
      iVar27 = (int)local_2c8[1];
      *(int *)(local_2c8 + 1) = iVar27 + 1;
      if (*(int *)((longlong)local_2c8 + 0xc) < iVar27 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar27);
      }
      *(longlong **)(*plVar18 + (longlong)iVar27 * 8) = plVar15;
      (**(code **)(*plVar15 + 0x18))(plVar15,0,&local_268);
      uStack_18c = (undefined4)((ulonglong)uStack_340 >> 0x20);
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      local_348 = plVar15;
      local_198 = plVar15;
    }
    uStack_190 = 0;
    plVar18 = (longlong *)0x0;
    local_316 = local_316 | bVar29;
    iVar27 = local_2d8;
    puVar7 = uStack_340;
    if (local_316 != 0) {
      uStack_340 = &local_358;
      local_328 = (longlong *)0x0;
      uStack_320 = (char *)((ulonglong)uStack_320 & 0xffffffff00000000);
      local_348 = (longlong *)&DAT_14060d670;
      local_308 = (longlong *)&DAT_14060d670;
      local_358 = '\0';
      pcStack_300 = uStack_340;
      lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
      if (cVar8 == '\0') {
        lVar16 = operator_new(0xd0,lVar16 + 0x18,1,0);
        if (lVar16 != 0) {
          plVar18 = (longlong *)
                    FRCPassPostProcessSunMergeES2::FRCPassPostProcessSunMergeES2(lVar16,lVar11);
        }
        plVar18 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_2c8,plVar18);
        if (bVar29 != 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_198);
        }
        cVar8 = local_32f;
        pcVar4 = uStack_340;
        if (local_32f != '\0') {
          (**(code **)(*plVar18 + 0x18))(plVar18,1,&local_278);
          (**(code **)(*plVar18 + 0x18))(plVar18,2,&local_2e8);
          pcVar4 = uStack_340;
        }
      }
      else {
        plVar15 = (longlong *)operator_new(0xc0,lVar16 + 0x18,1,0);
        if (plVar15 != (longlong *)0x0) {
          TRenderingCompositePassBase<2,1>::TRenderingCompositePassBase<2,1>(plVar15);
          plVar15[0x17] = lVar11;
          *plVar15 = (longlong)&PTR__scalar_deleting_destructor__144e1c548;
          plVar18 = plVar15;
        }
        plVar15 = local_2c8;
        iVar27 = (int)local_2c8[1];
        *(int *)(local_2c8 + 1) = iVar27 + 1;
        if (*(int *)((longlong)local_2c8 + 0xc) < iVar27 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar27);
        }
        *(longlong **)(*plVar15 + (longlong)iVar27 * 8) = plVar18;
        (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_278);
        (**(code **)(*plVar18 + 0x18))(plVar18,1,&local_288);
        cVar8 = local_32f;
        pcVar4 = uStack_340;
      }
      local_348 = plVar18;
      iVar27 = local_2d8;
      uStack_340 = (char *)((ulonglong)pcVar4 & 0xffffffff00000000);
      puVar7 = uStack_340;
      uStack_340._4_4_ = (uint)((ulonglong)pcVar4 >> 0x20);
      local_248 = local_348;
      uStack_240 = 0;
      uStack_23c = uStack_340._4_4_;
      local_328 = local_348;
      uStack_320 = (char *)((ulonglong)uStack_340._4_4_ << 0x20);
      if ((local_2d8 == 2) && ((cVar8 != '\0' || (bVar29 != 0)))) {
        if ((*(longlong *)(param_3 + 0x18) != 0) &&
           (plVar18 = (longlong *)(*(longlong *)(param_3 + 0x18) + 0x12b0), *plVar18 != 0)) {
          uStack_340 = &local_358;
          local_358 = '\0';
          local_348 = (longlong *)&DAT_14060d670;
          local_308 = (longlong *)&DAT_14060d670;
          pcStack_300 = uStack_340;
          lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
          lVar16 = operator_new(0xb0,lVar16 + 0x18,1,0);
          if (lVar16 == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar16,plVar18);
          }
          uVar20 = FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                             (local_2c8,uVar20);
          uStack_340._4_4_ = (uint)((ulonglong)uStack_340 >> 0x20);
          local_348._0_4_ = (undefined4)uVar20;
          local_348._4_4_ = (undefined4)((ulonglong)uVar20 >> 0x20);
        }
        pcStack_300 = &local_358;
        local_298 = CONCAT44(local_348._4_4_,(undefined4)local_348);
        uStack_290 = (ulonglong)uStack_340._4_4_ << 0x20;
        local_358 = '\0';
        local_348 = (longlong *)&DAT_14060d670;
        local_308 = (longlong *)&DAT_14060d670;
        uStack_340 = pcStack_300;
        lVar16 = FUN_1415d8310(&local_308,&DAT_146216a38);
        plVar18 = (longlong *)operator_new(0xc0,lVar16 + 0x18,1,0);
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          TRenderingCompositePassBase<2,1>::TRenderingCompositePassBase<2,1>(plVar18);
          plVar18[0x17] = lVar11;
          *plVar18 = (longlong)&PTR__scalar_deleting_destructor__144e1c5d0;
        }
        plVar15 = local_2c8;
        iVar30 = (int)local_2c8[1];
        *(int *)(local_2c8 + 1) = iVar30 + 1;
        if (*(int *)((longlong)local_2c8 + 0xc) < iVar30 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar30);
        }
        *(longlong **)(*plVar15 + (longlong)iVar30 * 8) = plVar18;
        (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_328);
        (**(code **)(*plVar18 + 0x18))(plVar18,1,&local_298);
        uStack_23c = (uint)((ulonglong)uStack_340 >> 0x20);
        uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
        uStack_240 = 0;
        local_348 = plVar18;
        puVar7 = uStack_340;
        local_248 = plVar18;
      }
    }
  }
  uStack_340 = puVar7;
  plVar18 = (longlong *)0x0;
  cVar10 = FUN_141ba1790(local_2c0);
  cVar8 = local_2f8;
  if (cVar10 != '\0') {
    uStack_340 = &local_358;
    local_358 = '\0';
    local_348 = (longlong *)&DAT_14060d670;
    local_308 = (longlong *)&DAT_14060d670;
    pcStack_300 = uStack_340;
    lVar11 = FUN_1415d8310(&local_308,&DAT_146216a38);
    plVar15 = (longlong *)operator_new(0xa8,lVar11 + 0x18,1,0);
    if (plVar15 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar15 + 1,0,0xa0);
      TRenderingCompositePassBase<1,1>::TRenderingCompositePassBase<1,1>(plVar15);
      *plVar15 = (longlong)&PTR_FUN_144e1ccb8;
      plVar18 = plVar15;
    }
    plVar15 = local_2c8;
    iVar30 = (int)local_2c8[1];
    *(int *)(local_2c8 + 1) = iVar30 + 1;
    if (*(int *)((longlong)local_2c8 + 0xc) < iVar30 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar30);
    }
    *(longlong **)(*plVar15 + (longlong)iVar30 * 8) = plVar18;
    (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_2a8);
    uStack_2a0 = uStack_340;
    uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
    uStack_2a0 = (char *)((ulonglong)uStack_2a0 & 0xffffffff00000000);
    cVar8 = local_2f8;
    local_348 = plVar18;
    local_2a8 = plVar18;
  }
LAB_141c57170:
  lVar16 = 0;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar11 + 0x38) < DAT_146a54e08) &&
     (_Init_thread_header(&DAT_146a54e08), DAT_146a54e08 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar18 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Mobile.TonemapperFilm");
    lVar13 = lVar16;
    if (plVar18 != (longlong *)0x0) {
      lVar13 = (**(code **)(*plVar18 + 0x38))(plVar18);
    }
    DAT_146a54e00 = lVar13;
    _Init_thread_footer(&DAT_146a54e08);
  }
  cVar10 = FUN_142753a10();
  if ((((cVar10 == '\0') || (cVar8 != '\0')) || (DAT_1464c9c5a == '\0')) ||
     ((DAT_146a54e00 == 0 || (*(int *)(DAT_146a54e00 + 4) == 0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146a54e18) &&
     (_Init_thread_header(&DAT_146a54e18), DAT_146a54e18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar18 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileTonemapperUpscale");
    if (plVar18 != (longlong *)0x0) {
      lVar16 = (**(code **)(*plVar18 + 0x38))(plVar18);
    }
    DAT_146a54e10 = lVar16;
    _Init_thread_footer(&DAT_146a54e18);
  }
  cVar8 = FUN_142753b00();
  if (((cVar8 == '\0') && (DAT_146a54e10 != 0)) && (*(int *)(DAT_146a54e10 + 4) != 0)) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  if (bVar5) {
    local_370 = (longlong **)((ulonglong)local_370 & 0xffffffffffffff00);
    local_378 = (longlong **)((ulonglong)local_378 & 0xffffffffffffff00);
    local_2f4[0] = 0;
    local_348 = (longlong *)0x0;
    uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
    plVar18 = (longlong *)FUN_141c446d0(local_2d0,&local_248,&local_348,local_2f4);
    plVar15 = (longlong *)((longlong)plVar18 + 0xd9);
  }
  else {
    uStack_340 = &local_358;
    local_358 = '\0';
    local_348 = (longlong *)&DAT_14060d670;
    local_308 = (longlong *)&DAT_14060d670;
    pcStack_300 = uStack_340;
    lVar11 = FUN_1415d8310(&local_308,&DAT_146216a38);
    lVar11 = operator_new(0xe0,lVar11 + 0x18,1,0);
    if (lVar11 == 0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = (longlong *)
                FRCPassPostProcessTonemapES2::FRCPassPostProcessTonemapES2
                          (lVar11,local_2c0,local_330,local_32e[0]);
    }
    plVar15 = local_2c8;
    iVar30 = (int)local_2c8[1];
    *(int *)(local_2c8 + 1) = iVar30 + 1;
    if (*(int *)((longlong)local_2c8 + 0xc) < iVar30 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar30);
    }
    *(longlong **)(*plVar15 + (longlong)iVar30 * 8) = plVar18;
    (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_2a8);
    (**(code **)(*plVar18 + 0x18))(plVar18,1,&local_248);
    (**(code **)(*plVar18 + 0x18))(plVar18,2,&local_258);
    uStack_2a0 = uStack_340;
    uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
    plVar15 = plVar18 + 0x19;
    uStack_2a0 = (char *)((ulonglong)uStack_2a0 & 0xffffffff00000000);
    local_348 = plVar18;
    local_2a8 = plVar18;
  }
  plVar14 = (longlong *)0x0;
  *(undefined1 *)plVar15 = 0;
  if ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x28) & 1) != 0) {
    cVar8 = FUN_142753a10();
    if ((cVar8 == '\0') || (cVar8 = FUN_142753b00(), uVar2 = (ulonglong)uStack_340, cVar8 != '\0'))
    {
      uVar33 = (undefined4)local_2a8;
      uVar34 = local_2a8._4_4_;
      uVar35 = (undefined4)uStack_2a0;
      uVar36 = uStack_2a0._4_4_;
    }
    else {
      local_368 = &local_308;
      uVar6 = (ulonglong)uStack_340 >> 0x20;
      uStack_340 = (char *)(uVar6 << 0x20);
      pcStack_300 = uStack_340;
      uStack_340 = (char *)(uVar6 << 0x20);
      uStack_260 = (ulonglong)uStack_340;
      local_370 = &local_268;
      local_308 = (longlong *)0x0;
      uStack_340 = (char *)(uVar6 << 0x20);
      local_268 = (longlong *)0x0;
      local_378 = (longlong **)&local_2e8;
      local_2e8 = (longlong *)0x0;
      uStack_2e0 = (ulonglong)uStack_340;
      local_348 = (longlong *)0x0;
      uStack_340 = (char *)(uVar2 & 0xffffffff00000000);
      puVar12 = (undefined8 *)FUN_141c43d40(&local_208,local_2d0,0,&local_348);
      local_2a8 = (longlong *)*puVar12;
      uStack_2a0 = (char *)puVar12[1];
      uVar33 = *(undefined4 *)puVar12;
      uVar34 = *(undefined4 *)((longlong)puVar12 + 4);
      uVar35 = (int)puVar12[1];
      uVar36 = *(undefined4 *)((longlong)puVar12 + 0xc);
    }
    if (iVar27 == 2) {
      local_2e8 = (longlong *)CONCAT44(uVar34,uVar33);
      uStack_2e0 = CONCAT44(uVar36,uVar35);
      if ((*(longlong *)(param_3 + 0x18) != 0) &&
         (plVar22 = (longlong *)(*(longlong *)(param_3 + 0x18) + 0x12c0), *plVar22 != 0)) {
        uStack_340 = &local_358;
        local_358 = '\0';
        local_348 = (longlong *)&DAT_14060d670;
        local_308 = (longlong *)&DAT_14060d670;
        pcStack_300 = uStack_340;
        lVar11 = FUN_1415d8310(&local_308,&DAT_146216a38);
        lVar11 = operator_new(0xb0,lVar11 + 0x18,1,0);
        plVar21 = plVar14;
        if (lVar11 != 0) {
          plVar21 = (longlong *)FRCPassPostProcessInput::FRCPassPostProcessInput(lVar11,plVar22);
        }
        local_2e8 = (longlong *)
                    FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                              (local_2c8,plVar21);
        uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
        uStack_2e0 = (ulonglong)uStack_340;
      }
      uStack_340 = &local_358;
      local_358 = '\0';
      local_348 = (longlong *)&DAT_14060d670;
      local_308 = (longlong *)&DAT_14060d670;
      pcStack_300 = uStack_340;
      lVar11 = FUN_1415d8310(&local_308,&DAT_146216a38);
      plVar22 = (longlong *)operator_new(0xb8,lVar11 + 0x18,1);
      if (plVar22 != (longlong *)0x0) {
        _guard_xfg_dispatch_icall_nop(plVar22 + 1,0,0xb0);
        TRenderingCompositePassBase<2,1>::TRenderingCompositePassBase<2,1>(plVar22);
        *plVar22 = (longlong)&PTR__scalar_deleting_destructor__144e1c658;
        plVar14 = plVar22;
      }
      plVar22 = local_2c8;
      iVar27 = (int)local_2c8[1];
      *(int *)(local_2c8 + 1) = iVar27 + 1;
      if (*(int *)((longlong)local_2c8 + 0xc) < iVar27 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar27);
      }
      *(longlong **)(*plVar22 + (longlong)iVar27 * 8) = plVar14;
      (**(code **)(*plVar14 + 0x18))(plVar14,0,&local_2a8);
      (**(code **)(*plVar14 + 0x18))(plVar14,1,&local_2e8);
      uStack_2a0 = uStack_340;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      uStack_2a0 = (char *)((ulonglong)uStack_2a0 & 0xffffffff00000000);
      local_348 = plVar14;
      local_2a8 = plVar14;
    }
  }
  FUN_141c42ca0(local_2d0,&local_208);
  if ((((*(int *)(param_3 + 0x368) != *(int *)(param_3 + 0x1aa0)) ||
       (*(int *)(param_3 + 0x36c) != *(int *)(param_3 + 0x1aa4))) ||
      (*(int *)(param_3 + 0x370) != *(int *)(param_3 + 0x1aa8))) ||
     (*(int *)(param_3 + 0x374) != *(int *)(param_3 + 0x1aac))) {
    if ((bVar31) ||
       (plVar14 = (longlong *)FHardwareCursor::GetHandle(&local_2a8), plVar14 != plVar18)) {
      uStack_340 = &local_358;
      local_358 = '\0';
      local_348 = (longlong *)&DAT_14060d670;
      local_308 = (longlong *)&DAT_14060d670;
      pcStack_300 = uStack_340;
      lVar11 = FUN_1415d8310(&local_308,&DAT_146216a38);
      lVar11 = operator_new(0xd8,lVar11 + 0x18,1,0);
      if (lVar11 == 0) {
        plVar18 = (longlong *)0x0;
      }
      else {
        plVar18 = (longlong *)FUN_141cd75a0(lVar11,param_3);
      }
      iVar27 = (int)local_2c8[1];
      *(int *)(local_2c8 + 1) = iVar27 + 1;
      if (*(int *)((longlong)local_2c8 + 0xc) < iVar27 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_2c8,iVar27);
      }
      *(longlong **)(*local_2c8 + (longlong)iVar27 * 8) = plVar18;
      local_308 = local_2a8;
      pcStack_300 = uStack_2a0;
      (**(code **)(*plVar18 + 0x18))(plVar18,0,&local_308);
      local_308 = local_2a8;
      pcStack_300 = uStack_2a0;
      (**(code **)(*plVar18 + 0x18))(plVar18,1,&local_308);
      uStack_2a0 = uStack_340;
      uStack_340 = (char *)((ulonglong)uStack_340 & 0xffffffff00000000);
      uStack_2a0 = (char *)((ulonglong)uStack_2a0 & 0xffffffff00000000);
      local_348 = plVar18;
      local_2a8 = plVar18;
    }
    else if (plVar15 != (longlong *)0x0) {
      *(undefined1 *)plVar15 = 1;
    }
  }
  FUN_141c58510(local_210,local_2d0,*(longlong *)(param_3 + 0x10) + 0x28);
  local_338 = (longlong *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  puVar12 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))()
  ;
  TRefCountPtr<FRHITexture>::operator=(&local_b8,*puVar12);
  puVar12 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))()
  ;
  TRefCountPtr<FRHITexture>::operator=(&uStack_b0,*puVar12);
  local_108 = 1;
  local_100 = 0;
  local_f8 = 0;
  local_ec = 0;
  local_e8 = 1;
  local_e4 = 0;
  local_e0 = 1;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 1;
  plVar15 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))();
  plVar18 = *(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18);
  lVar11 = *plVar18;
  if (*plVar15 == 0) {
    puVar23 = (undefined4 *)(**(code **)(lVar11 + 0x20))(plVar18,&local_210);
    local_f4 = *puVar23;
    local_f0 = puVar23[1];
  }
  else {
    plVar18 = (longlong *)(**(code **)(lVar11 + 8))();
    local_f4 = *(undefined4 *)(*plVar18 + 0x60);
    plVar18 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))()
    ;
    local_f0 = *(undefined4 *)(*plVar18 + 100);
  }
  local_dc = 2;
  local_c8 = L"OverriddenRenderTarget";
  local_e2 = 1;
  FUN_141ce1040(&PTR_PTR_1464c2560,&local_108,&local_338,&local_b8);
  local_308 = local_2a8;
  pcStack_300 = uStack_2a0;
  OverrideRenderTarget(&local_308,&local_338,&local_108);
  lVar11 = FHardwareCursor::GetHandle(&local_2a8);
  local_288 = (longlong *)0x0;
  uStack_280 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_288,0);
  *local_288 = lVar11;
  FUN_141cf2100(local_178,&local_288,L"PostProcessingES2");
  if (local_288 != (longlong *)0x0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
  FUN_141a82840(&local_88);
  FUN_141a82770(local_a0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&uStack_b0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_b8);
  if (local_338 != (longlong *)0x0) {
    (**(code **)(*local_338 + 0x30))();
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_178);
  if (local_220 == '\0') {
    local_220 = 1;
    *(int *)(local_238 + 4) = *(int *)(local_238 + 4) + -1;
    if (local_228 != local_238[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_238 = local_230;
    local_238[3] = local_218;
  }
  return;
}



// FUNCTION 141c57a70 FUN_141c57a70 body=1214 status=ok
// SIG undefined FUN_141c57a70(void)

void FUN_141c57a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_res20 [8];
  undefined8 local_148;
  undefined1 *puStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined1 *puStack_120;
  undefined8 *local_118;
  undefined8 local_110;
  longlong local_108;
  char local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  longlong local_e0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 local_b8 [48];
  undefined1 local_88 [48];
  undefined1 local_58 [64];
  
  puStack_120 = local_res20;
  local_res20[0] = 0;
  local_128 = (longlong *)&DAT_14060d670;
  local_138 = (longlong *)&DAT_14060d670;
  uStack_130 = puStack_120;
  lVar4 = FUN_1415d8310(&local_138,&DAT_146216a38);
  local_118 = (undefined8 *)(lVar4 + 0x18);
  local_110 = *local_118;
  local_108 = *(longlong *)(lVar4 + 0x28);
  local_100 = '\0';
  local_f8 = *(undefined8 *)(lVar4 + 0x30);
  *(undefined8 ***)(lVar4 + 0x30) = &local_118;
  *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
  FUN_141cd7760(local_88,param_2,param_3);
  FUN_141c40530(local_f0,param_2,local_58,param_3);
  FSceneRenderTargets::Get(param_2);
  plVar7 = (longlong *)0x0;
  local_128 = (longlong *)0x0;
  puStack_120 = (undefined1 *)((ulonglong)puStack_120 & 0xffffffff00000000);
  if (*param_4 != 0) {
    puStack_140 = local_res20;
    local_148 = (longlong *)&DAT_14060d670;
    local_138 = (longlong *)&DAT_14060d670;
    local_res20[0] = 0;
    uStack_130 = puStack_140;
    lVar4 = FUN_1415d8310(&local_138,&DAT_146216a38);
    lVar4 = operator_new(0xb0,lVar4 + 0x18,1,0);
    plVar5 = plVar7;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FRCPassPostProcessInput::FRCPassPostProcessInput(lVar4,param_4);
    }
    plVar3 = local_e8;
    iVar1 = (int)local_e8[1];
    *(int *)(local_e8 + 1) = iVar1 + 1;
    if (*(int *)((longlong)local_e8 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_e8,iVar1);
    }
    *(longlong **)(*plVar3 + (longlong)iVar1 * 8) = plVar5;
    puStack_120 = (undefined1 *)((ulonglong)puStack_120 & 0xffffffff00000000);
    local_128 = plVar5;
  }
  if ((*(int *)(local_e0 + 0x1a10) == 2) && (*(longlong *)(local_e0 + 0x1ab0) != 0)) {
    FUN_141c4a770(local_b8);
    local_res20[0] = 0;
    local_148 = (longlong *)&DAT_14060d670;
    if (local_128 == (longlong *)0x0) {
      puStack_140 = local_res20;
      local_148 = (longlong *)&DAT_14060d670;
      lVar4 = FUN_1415d8310(&local_148,&DAT_146216a38);
      lVar4 = operator_new(0xb0,lVar4 + 0x18,1);
      plVar5 = plVar7;
      if (lVar4 != 0) {
        plVar5 = (longlong *)FRCPassPostProcessInput::FRCPassPostProcessInput(lVar4,&DAT_1464c3318);
      }
      local_138 = (longlong *)
                  FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                            (local_e8,plVar5);
      uStack_130._0_4_ = 0;
      local_res20[0] = 0;
      lVar4 = *(longlong *)(local_e0 + 0x1ab0);
      puStack_140 = local_res20;
      local_148 = (longlong *)&DAT_14060d670;
      lVar6 = FUN_1415d8310(&local_148,&DAT_146216a38);
      lVar6 = operator_new(0x210,lVar6 + 0x18,1);
      if (lVar6 != 0) {
        plVar7 = (longlong *)FUN_141c76350(lVar6,local_f0,local_b8,local_e0 + 0x2e50,lVar4 + 0x10a0)
        ;
      }
      iVar1 = (int)local_e8[1];
      *(int *)(local_e8 + 1) = iVar1 + 1;
      if (*(int *)((longlong)local_e8 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_e8,iVar1);
      }
      *(longlong **)(*local_e8 + (longlong)iVar1 * 8) = plVar7;
      (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_c8);
      (**(code **)(*plVar7 + 0x18))(plVar7,2,&local_138);
      local_138._0_4_ = SUB84(plVar7,0);
      local_138._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
      local_c8 = (undefined4)local_138;
      uStack_c4 = local_138._4_4_;
      uStack_bc = uStack_130._4_4_;
      local_138 = plVar7;
      uStack_130 = (undefined1 *)((ulonglong)uStack_130._4_4_ << 0x20);
    }
    else {
      lVar4 = *(longlong *)(local_e0 + 0x1ab0);
      puStack_140 = local_res20;
      local_138 = (longlong *)&DAT_14060d670;
      uStack_130 = puStack_140;
      lVar6 = FUN_1415d8310(&local_138,&DAT_146216a38);
      lVar6 = operator_new(0x210,lVar6 + 0x18,1);
      if (lVar6 != 0) {
        plVar7 = (longlong *)FUN_141c76350(lVar6,local_f0,local_b8,local_e0 + 0x2e50,lVar4 + 0x10a0)
        ;
      }
      iVar1 = (int)local_e8[1];
      *(int *)(local_e8 + 1) = iVar1 + 1;
      if (*(int *)((longlong)local_e8 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_e8,iVar1);
      }
      *(longlong **)(*local_e8 + (longlong)iVar1 * 8) = plVar7;
      (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_c8);
      (**(code **)(*plVar7 + 0x18))(plVar7,2,&local_128);
      uVar2 = (ulonglong)puStack_140 >> 0x20;
      puStack_140 = (undefined1 *)((ulonglong)puStack_140 & 0xffffffff00000000);
      local_148._0_4_ = SUB84(plVar7,0);
      local_148._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
      local_c8 = (undefined4)local_148;
      uStack_c4 = local_148._4_4_;
      uStack_bc = (uint)uVar2;
      local_148 = plVar7;
    }
    uStack_c0 = 0;
  }
  uVar8 = FHardwareCursor::GetHandle(&local_c8);
  local_148 = (undefined8 *)0x0;
  puStack_140 = (undefined1 *)0x1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_148,0);
  *local_148 = uVar8;
  FUN_141cf2100(local_88,&local_148,L"ProcessPlanarReflection");
  if (local_148 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  lVar4 = FRenderingCompositeOutputRef::GetOutput(&local_c8);
  plVar7 = *(longlong **)(lVar4 + 0x50);
  plVar5 = (longlong *)*param_5;
  *param_5 = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5);
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_88);
  if (local_100 == '\0') {
    local_100 = 1;
    *(int *)(local_118 + 4) = *(int *)(local_118 + 4) + -1;
    if (local_108 != local_118[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_118 = local_110;
    local_118[3] = local_f8;
  }
  return;
}



// FUNCTION 141c57f30 FUN_141c57f30 body=1493 status=ok
// SIG undefined FUN_141c57f30(void)

void FUN_141c57f30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *local_1d8;
  longlong lStack_1d0;
  longlong *local_1c8;
  uint local_1c0;
  int local_1bc;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  char local_190;
  undefined8 local_188;
  undefined *local_178;
  undefined8 *puStack_170;
  undefined *local_168;
  undefined8 *puStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  longlong local_108;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  
  plVar15 = (longlong *)0x0;
  local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0xffffffff);
  local_1f8 = 0;
  local_1c8 = (longlong *)0x0;
  local_1bc = 0;
  local_1e8 = FSceneRenderTargets::Get(param_2);
  local_res20 = (longlong *)((ulonglong)local_res20._4_4_ << 0x20);
  plVar5 = plVar15;
  plVar16 = plVar15;
  plVar10 = plVar15;
  if (*(int *)(param_3 + 200) < 1) goto LAB_141c5849c;
  local_1f0 = (longlong *)0x0;
  local_res18 = 0;
  plVar13 = plVar15;
  do {
    plVar5 = (longlong *)FUN_141ce54b0(local_1e8);
    iVar17 = (int)plVar10;
    local_1c0 = iVar17 + 1;
    if (local_1bc < (int)local_1c0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1c8,plVar10);
      plVar16 = local_1c8;
    }
    uVar18 = local_1c0;
    plVar10 = (longlong *)(ulonglong)local_1c0;
    plVar5 = (longlong *)*plVar5;
    plVar16[iVar17] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
    uVar4 = local_res18;
    lVar14 = *(longlong *)(param_3 + 0xc0) + local_res18;
    plVar5 = plVar13;
    if ((*(char *)(lVar14 + 0x1a98) != '\0') &&
       ((*(uint *)(*(longlong *)(lVar14 + 0x10) + 0x2c) & 0x100000) != 0)) {
      AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
      puStack_170 = &local_res18;
      local_res18 = local_res18 & 0xffffffffffffff00;
      local_168 = &DAT_14060d670;
      local_178 = &DAT_14060d670;
      puStack_160 = puStack_170;
      lVar6 = FUN_1415d8310(&local_178,&DAT_146216a38);
      local_1a8 = (undefined8 *)(lVar6 + 0x18);
      local_1a0 = *local_1a8;
      local_198 = *(longlong *)(lVar6 + 0x28);
      local_190 = '\0';
      local_188 = *(undefined8 *)(lVar6 + 0x30);
      *(undefined8 ***)(lVar6 + 0x30) = &local_1a8;
      *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + 1;
      FUN_141cd7760(local_a8,param_2,lVar14);
      FUN_141c40530(local_118,param_2,local_78,lVar14);
      if (((*(uint *)(*(longlong *)(local_108 + 0x10) + 0x2c) & 0x100000) != 0) &&
         (*(char *)(local_108 + 0x1a98) != '\0')) {
        local_res18 = 0;
        lVar14 = FUN_141c4a650(local_108 + 0x1240,4,&local_res18);
        if (lVar14 != 0) {
          local_158 = 0;
          uStack_150 = 0;
          puStack_170 = (undefined8 *)((ulonglong)uStack_14c << 0x20);
          local_178 = (undefined *)0x0;
          local_148 = 0;
          uStack_140 = 0;
          lStack_1d0 = (ulonglong)uStack_13c << 0x20;
          local_1d8 = (longlong *)0x0;
          local_138 = 0;
          uStack_130 = 0;
          lStack_d0 = (ulonglong)uStack_12c << 0x20;
          local_d8 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_c8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_bc = uStack_11c;
          puVar7 = (undefined4 *)
                   FUN_141c43d40(local_b8,local_118,4,&local_c8,&local_d8,&local_1d8,&local_178);
          local_f0 = *puVar7;
          uStack_ec = puVar7[1];
          uStack_e8 = puVar7[2];
          uStack_e4 = puVar7[3];
          if (plVar13 == (longlong *)0x0) {
            uVar8 = FRenderingCompositeOutputRef::GetOutput(&local_f0);
            FUN_141cf3cd0(uVar8,local_a8);
          }
          else {
            puVar7 = (undefined4 *)(**(code **)(*plVar13 + 0x10))(plVar13);
            puVar9 = (undefined4 *)FRenderingCompositeOutputRef::GetOutput(&local_f0);
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            uVar3 = puVar7[3];
            *puVar9 = *puVar7;
            puVar9[1] = uVar1;
            puVar9[2] = uVar2;
            puVar9[3] = uVar3;
            puVar9[4] = puVar7[4];
            puVar9[5] = puVar7[5];
            puVar9[6] = puVar7[6];
            puVar9[7] = puVar7[7];
            puVar9[8] = puVar7[8];
            *(undefined1 *)(puVar9 + 9) = *(undefined1 *)(puVar7 + 9);
            *(undefined1 *)((longlong)puVar9 + 0x25) = *(undefined1 *)((longlong)puVar7 + 0x25);
            *(undefined2 *)((longlong)puVar9 + 0x26) = *(undefined2 *)((longlong)puVar7 + 0x26);
            *(undefined2 *)(puVar9 + 10) = *(undefined2 *)(puVar7 + 10);
            puVar9[0xb] = puVar7[0xb];
            puVar9[0xc] = puVar7[0xc];
            puVar9[0xd] = puVar7[0xd];
            *(undefined1 *)(puVar9 + 0xe) = *(undefined1 *)(puVar7 + 0xe);
            *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
            *(undefined1 *)(puVar9 + 0x12) = *(undefined1 *)(puVar7 + 0x12);
            *(undefined1 *)((longlong)puVar9 + 0x49) = *(undefined1 *)((longlong)puVar7 + 0x49);
            lVar14 = FRenderingCompositeOutputRef::GetOutput(&local_f0);
            plVar5 = *(longlong **)(lVar14 + 0x50);
            *(longlong **)(lVar14 + 0x50) = plVar13;
            (**(code **)(*plVar13 + 0x28))(plVar13);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x30))(plVar5);
            }
          }
          uVar8 = FHardwareCursor::GetHandle(&local_f0);
          local_1b8 = (undefined8 *)0x0;
          local_1b0 = 1;
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
          *local_1b8 = uVar8;
          FUN_141cf2100(local_a8,&local_1b8,L"PostProcessing_PreFog");
          if (local_1b8 != (undefined8 *)0x0) {
            FMemory::Free();
          }
          local_1f8 = local_1f8 + 1;
          local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,(int)local_res20);
          lVar14 = FRenderingCompositeOutputRef::GetOutput(&local_f0);
          plVar5 = *(longlong **)(lVar14 + 0x50);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5);
          }
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x30))(plVar13);
          }
          plVar13 = *(longlong **)((longlong)local_1f0 + (longlong)plVar16);
          *(longlong **)((longlong)local_1f0 + (longlong)plVar16) = plVar5;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5);
          }
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x30))(plVar13);
          }
        }
      }
      FRenderingCompositePassContext::~FRenderingCompositePassContext(local_a8);
      if (local_190 == '\0') {
        local_190 = '\x01';
        *(int *)(local_1a8 + 4) = *(int *)(local_1a8 + 4) + -1;
        if (local_198 != local_1a8[2]) {
          FMemStackBase::FreeChunks();
        }
        *local_1a8 = local_1a0;
        local_1a8[3] = local_188;
        local_1a0 = 0;
      }
      AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
    }
    local_res18 = uVar4 + 0x30d0;
    local_1f0 = local_1f0 + 1;
    iVar11 = (int)local_res20 + 1;
    iVar17 = *(int *)(param_3 + 200);
    local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar11);
    plVar13 = plVar5;
  } while (iVar11 < iVar17);
  uVar4 = local_res18 >> 0x20;
  local_res18 = CONCAT44((int)uVar4,uVar18);
  if (local_1f8 == 1) {
    if (iVar17 != 1) goto LAB_141c583da;
  }
  else {
    if (local_1f8 < 1) goto LAB_141c5849c;
LAB_141c583da:
    if (iVar17 < 2) goto LAB_141c5849c;
    if (0 < iVar17) {
      plVar10 = (longlong *)(longlong)(int)local_1d8;
      plVar13 = plVar15;
      local_res20 = plVar10;
      do {
        if (plVar15 != plVar10) {
          plVar12 = (longlong *)plVar16[(longlong)plVar15];
          lVar14 = *(longlong *)(param_3 + 0xc0);
          plVar10 = local_res20;
          if (plVar12 != plVar5) {
            local_1f0 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x28))(plVar5);
              plVar12 = (longlong *)plVar16[(longlong)plVar15];
            }
            local_1d8 = plVar12;
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x28))();
            }
            FUN_141b0be70(param_3,param_2,(longlong)(int)plVar13 * 0x30d0 + lVar14,&local_1d8,
                          &local_1f0);
            plVar10 = local_res20;
          }
        }
        uVar18 = (int)plVar13 + 1;
        plVar13 = (longlong *)(ulonglong)uVar18;
        plVar15 = (longlong *)((longlong)plVar15 + 1);
      } while ((int)uVar18 < *(int *)(param_3 + 200));
      plVar10 = (longlong *)(local_res18 & 0xffffffff);
    }
  }
  FUN_141d04b60(local_1e8,plVar5);
LAB_141c5849c:
  uVar18 = (uint)plVar10;
  plVar15 = plVar16;
  while (uVar18 != 0) {
    if ((longlong *)*plVar15 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar15 + 0x30))();
    }
    plVar15 = plVar15 + 1;
    uVar18 = (int)plVar10 - 1;
    plVar10 = (longlong *)(ulonglong)uVar18;
  }
  if (plVar16 != (longlong *)0x0) {
    FMemory::Free(plVar16);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5);
  }
  return;
}



// FUNCTION 141c58510 FUN_141c58510 body=693 status=ok
// SIG undefined FUN_141c58510(void)

void FUN_141c58510(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined4 uStack_20;
  uint uStack_1c;
  
  if ((*(uint *)(param_3 + 4) & 0x3000000) == 0x3000000) {
    (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a54da8) &&
       (_Init_thread_header(&DAT_146a54da8), DAT_146a54da8 == -1)) {
      FName::FName(&DAT_146a54da0,L"PSVR",1);
      _Init_thread_footer(&DAT_146a54da8);
    }
    plVar3 = (longlong *)(**(code **)**(undefined8 **)(DAT_146b17150 + 0xac8))();
    if (*plVar3 == DAT_146a54da0) {
      plVar3 = (longlong *)operator_new(0xa8);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
        plVar3[3] = 0;
        _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar3 + 0x24),0,0x5c);
        *(undefined4 *)(plVar3 + 1) = 0;
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 3) = 0;
        plVar3[4] = 1;
        plVar3[5] = 0;
        plVar3[6] = 0;
        plVar3[7] = 0;
        *(undefined1 *)(plVar3 + 0xb) = 0;
        plVar3[0xc] = (longlong)L"UnknownTexture";
        plVar3[8] = 1;
        *(undefined2 *)(plVar3 + 9) = 1;
        *(undefined8 *)((longlong)plVar3 + 0x4c) = 0;
        *(undefined4 *)((longlong)plVar3 + 0x54) = 0;
        *(undefined2 *)(plVar3 + 0xd) = 1;
        plVar3[0xe] = 0;
        *(undefined4 *)(plVar3 + 0xf) = 0;
        plVar3[0x10] = 0;
        plVar3[0x11] = 0;
        plVar3[0x13] = 0;
        plVar3[0x14] = 0;
        plVar3[0x12] = 0;
        *plVar3 = (longlong)&PTR_FUN_144e1cc30;
      }
      local_28 = *(undefined8 *)(param_2 + 0x28);
      uStack_20 = *(undefined4 *)(param_2 + 0x30);
      uStack_1c = *(undefined4 *)(param_2 + 0x34);
      (**(code **)(*plVar3 + 0x18))(plVar3,0,&local_28);
    }
    else {
      plVar3 = (longlong *)operator_new(0xa8);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
        plVar3[3] = 0;
        _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar3 + 0x24),0,0x5c);
        *(undefined4 *)(plVar3 + 1) = 0;
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 3) = 0;
        plVar3[4] = 1;
        plVar3[5] = 0;
        plVar3[6] = 0;
        plVar3[7] = 0;
        *(undefined1 *)(plVar3 + 0xb) = 0;
        plVar3[0xc] = (longlong)L"UnknownTexture";
        plVar3[8] = 1;
        *(undefined2 *)(plVar3 + 9) = 1;
        *(undefined8 *)((longlong)plVar3 + 0x4c) = 0;
        *(undefined4 *)((longlong)plVar3 + 0x54) = 0;
        *(undefined2 *)(plVar3 + 0xd) = 1;
        plVar3[0xe] = 0;
        *(undefined4 *)(plVar3 + 0xf) = 0;
        plVar3[0x10] = 0;
        plVar3[0x11] = 0;
        plVar3[0x13] = 0;
        plVar3[0x14] = 0;
        plVar3[0x12] = 0;
        *plVar3 = (longlong)&PTR_FUN_144e0ab60;
      }
    }
    plVar2 = *(longlong **)(param_2 + 8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(longlong **)(*plVar2 + (longlong)iVar1 * 8) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      local_28 = *(undefined8 *)(param_2 + 0x28);
      uStack_20 = *(undefined4 *)(param_2 + 0x30);
      uStack_1c = *(uint *)(param_2 + 0x34);
      (**(code **)(*plVar3 + 0x18))(plVar3,0,&local_28);
      *(longlong **)(param_2 + 0x28) = plVar3;
      *(ulonglong *)(param_2 + 0x30) = (ulonglong)uStack_1c << 0x20;
    }
  }
  return;
}



// FUNCTION 141c587d0 FUN_141c587d0 body=633 status=ok
// SIG undefined FUN_141c587d0(void)

undefined8 *
FUN_141c587d0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
             undefined8 param_9,float param_10)

{
  int iVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(*(longlong *)(param_2 + 0x10) + 0x1a38) < 3))
  {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  uStack_40 = (undefined4 *)local_res8;
  local_res8[0] = 0;
  local_48 = (longlong *)&DAT_14060d670;
  lVar4 = FUN_1415d8310(&local_48,&DAT_146216a38);
  lVar4 = operator_new(0xf0,lVar4 + 0x18,1);
  if (lVar4 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    local_48 = (longlong *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_40 = (undefined4 *)CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    plVar5 = (longlong *)FUN_141cd7670(lVar4,0,0,param_6,uVar7,param_3,param_7,&local_48);
  }
  plVar6 = *(longlong **)(param_2 + 8);
  iVar1 = (int)plVar6[1];
  *(int *)(plVar6 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
  }
  *(longlong **)(*plVar6 + (longlong)iVar1 * 8) = plVar5;
  (**(code **)(*plVar5 + 0x18))(plVar5,0,param_5);
  fVar3 = param_10;
  if (0.0 < param_10) {
    *(float *)(plVar5 + 0x1c) = param_10;
  }
  uStack_40 = &param_10;
  param_10 = (float)((uint)param_10 & 0xffffff00);
  local_48 = (longlong *)&DAT_14060d670;
  lVar4 = FUN_1415d8310(&local_48,&DAT_146216a38);
  lVar4 = operator_new(0xf0,lVar4 + 0x18,1);
  if (lVar4 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    local_48 = (longlong *)*param_8;
    uStack_40 = (undefined4 *)param_8[1];
    plVar6 = (longlong *)FUN_141cd7670(lVar4,1,0,param_6,uVar7,param_4,param_7,&local_48);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  uStack_40 = (undefined4 *)((ulonglong)uStack_40 & 0xffffffff00000000);
  *(longlong **)(*plVar2 + (longlong)iVar1 * 8) = plVar6;
  local_48 = plVar5;
  (**(code **)(*plVar6 + 0x18))(plVar6,0,&local_48);
  (**(code **)(*plVar6 + 0x18))(plVar6,1,param_9);
  *(float *)(plVar6 + 0x1c) = ABS(fVar3);
  *param_1 = plVar6;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 141c58a50 FUN_141c58a50 body=479 status=ok
// SIG undefined FUN_141c58a50(void)

undefined8 *
FUN_141c58a50(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined1 local_res10 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  lVar3 = *(longlong *)(param_2 + 0x10);
  if ((*(float *)(lVar3 + 0x146c) <= -1.0) && (*(int *)(*(longlong *)(lVar3 + 0x10) + 8) == 1)) {
    uVar2 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar2;
    return param_1;
  }
  if ((*(int *)(DAT_146a51ec0 + 4) == 0) || (*(int *)(lVar3 + 0x1a38) < 3)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  puStack_30 = local_res10;
  local_res10[0] = 0;
  local_38 = &DAT_14060d670;
  lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
  plVar4 = (longlong *)operator_new(0xc0,lVar3 + 0x18,1,0);
  plVar5 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    *(undefined2 *)(plVar4 + 1) = 0;
    plVar4[2] = 0;
    *(undefined4 *)(plVar4 + 3) = 0;
    plVar4[4] = 0;
    *(undefined4 *)(plVar4 + 5) = 0;
    plVar4[6] = 1;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 1;
    *(undefined2 *)(plVar4 + 0xb) = 1;
    *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    *(undefined1 *)(plVar4 + 0xd) = 0;
    plVar4[0xe] = (longlong)L"UnknownTexture";
    *(undefined2 *)(plVar4 + 0xf) = 1;
    plVar4[0x10] = 0;
    *(undefined4 *)(plVar4 + 0x11) = 0;
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    plVar4[0x15] = 0;
    plVar4[0x16] = 0;
    plVar4[0x14] = 0;
    *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144e1bf70;
    plVar4[0x17] = 0;
    *(undefined1 *)((longlong)plVar4 + 10) = uVar6;
    *(undefined1 *)((longlong)plVar4 + 0xb) = 0;
    plVar5 = plVar4;
  }
  plVar4 = *(longlong **)(param_2 + 8);
  iVar1 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar1);
  }
  *(longlong **)(*plVar4 + (longlong)iVar1 * 8) = plVar5;
  (**(code **)(*plVar5 + 0x18))(plVar5,0,param_3);
  (**(code **)(*plVar5 + 0x18))(plVar5,1,param_4);
  *param_1 = plVar5;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 141c58c30 FUN_141c58c30 body=974 status=ok
// SIG undefined FUN_141c58c30(void)

void FUN_141c58c30(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 *param_7,int *param_8,
                  undefined1 param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  undefined8 local_res8;
  float local_res20;
  float local_res24;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  local_res20 = *param_4;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (0.0 <= local_res20) {
    if (1.0 <= local_res20) {
      local_res20 = 1.0;
    }
  }
  else {
    local_res20 = 0.0;
  }
  local_res24 = param_4[1];
  if (0.0 <= local_res24) {
    if (1.0 <= local_res24) {
      local_res24 = 1.0;
    }
  }
  else {
    local_res24 = 0.0;
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  local_58 = &DAT_146a51010;
  local_50 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res8,&local_58);
  plVar10 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar10 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  local_58 = (undefined *)0x0;
  local_res8 = 0;
  plVar8 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  lVar3 = *plVar8;
  FUN_141a19150(lVar2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_58);
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x60);
  FRHIComputeShader::UpdateStats(uVar5);
  puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar9;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar11;
  *(undefined8 **)(lVar2 + 8) = puVar11 + 1;
  puVar11[2] = uVar5;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  uVar5 = *param_7;
  puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 1;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 1;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar9;
  *puVar11 = uVar5;
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 6;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 6;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar9;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar12;
  *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar12 + 2) = 1;
  puVar12[3] = puVar11;
  puVar12[4] = 2;
  puVar12[5] = 0;
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_58,lVar2,*(undefined8 *)(lVar4 + 0x60),*(undefined2 *)(lVar3 + 200),param_7);
  FUN_141c59910(lVar3,lVar2,param_1,param_6,param_3,param_5,&local_res20,param_2,param_8,param_9);
  iVar1 = param_8[1];
  uVar13 = *param_8 >> 0x1f & 0x1f;
  uVar7 = *param_8 + uVar13;
  iVar14 = (int)uVar7 >> 5;
  if ((uVar7 & 0x1f) != uVar13) {
    iVar14 = iVar14 + 1;
  }
  puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 4;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x28);
    puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 4;
  }
  puVar6 = local_58;
  *(undefined8 **)(lVar2 + 0x30) = puVar9;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar11;
  *(undefined8 **)(lVar2 + 8) = puVar11 + 1;
  *(int *)((longlong)puVar11 + 0x14) = iVar1;
  lVar2 = CONCAT44(uStack_4c,local_50);
  *(int *)(puVar11 + 2) = iVar14;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar11 + 3) = 1;
  puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar9;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar11;
  *(undefined8 **)(lVar2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = puVar6;
  *(undefined4 *)(puVar11 + 3) = local_48;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c59000 SafeRelease body=110 status=ok
// SIG undefined SafeRelease(void)

void FSceneViewState::FEyeAdaptationRTManager::SafeRelease(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  plVar2 = (longlong *)(param_1 + 0x20);
  lVar3 = 3;
  do {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 141c59070 FUN_141c59070 body=1127 status=ok
// SIG undefined FUN_141c59070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c59070(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  uint local_c0;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res20 = param_4;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar7 = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar5 = *(undefined8 *)(*param_3 + 0x20);
  local_c8 = uVar4;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar7;
    do {
      iVar10 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146b096e0) {
        if (iVar10 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar10 * 8);
          *puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141c59125;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar10 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar12 = (undefined4 *)&DAT_146a0e8b0;
LAB_141c59125:
  if (*(char *)((longlong)puVar12 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar12 + 1);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144dcb3c8;
    puVar11[2] = uVar4;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = uVar5;
  }
  local_e8 = FUN_1404a0e20();
  local_d8 = 0;
  local_e0 = 0;
  FUN_141caac70(param_1 + 0xc0,&local_c8,param_3,param_3[8]);
  local_e8 = local_e8 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,local_c8,param_1 + 0x1c6,&local_res20);
  local_e8 = local_e8 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,local_c8,param_1 + 0x1cc,&param_5);
  local_a8 = local_c8;
  local_b0 = 0;
  local_b8 = (float)(int)param_6;
  uVar6 = (uint)*(ushort *)(param_1 + 0x1c4);
  if (0xf < *(ushort *)(param_1 + 0x1c4)) {
    uVar6 = 0x10;
  }
  local_b4 = (float)param_6._4_4_;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c2);
    pvVar13 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_c0 = (uint)*(ushort *)(param_1 + 0x1c0);
    uVar7 = (longlong)pvVar13 + (ulonglong)uVar6;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      pvVar13 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)pvVar13 + (ulonglong)uVar6;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(pvVar13,&local_b8,(ulonglong)uVar6);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144d92080;
    puVar11[2] = local_a8;
    *(uint *)(puVar11 + 4) = local_c0;
    puVar11[3] = pvVar13;
    *(uint *)((longlong)puVar11 + 0x24) = (uint)uVar1;
    *(uint *)(puVar11 + 5) = uVar6;
  }
  local_98 = 0;
  uStack_90 = 0x3f80000000000000;
  local_88 = 0;
  uStack_80 = 0x3f80000000000000;
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  FUN_141c452f0(3,*param_3,&local_98);
  uVar4 = local_c8;
  uVar6 = (uint)*(ushort *)(param_1 + 0x1d6);
  if (0x3f < *(ushort *)(param_1 + 0x1d6)) {
    uVar6 = 0x40;
  }
  uVar7 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1d4);
    uVar2 = *(ushort *)(param_1 + 0x1d2);
    pvVar13 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar8 = (longlong)pvVar13 + uVar7;
    if (*(ulonglong *)(param_2 + 0x38) < uVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      pvVar13 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar8 = (longlong)pvVar13 + uVar7;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar8;
    _guard_xfg_dispatch_icall_nop(pvVar13,&local_98,uVar7);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144d92080;
    puVar11[2] = uVar4;
    puVar11[3] = pvVar13;
    *(uint *)(puVar11 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar11 + 0x24) = (uint)uVar1;
    *(uint *)(puVar11 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141c594e0 SetCSParamters body=510 status=ok
// SIG undefined SetCSParamters(void)

void FBlendLowResCS::SetCSParamters
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
               undefined8 *param_9)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  longlong local_38;
  undefined8 *local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  uVar3 = *param_7;
  local_res8 = uVar4;
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d92090;
    puVar6[2] = uVar4;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar3;
  }
  local_30 = &local_res8;
  param_7 = (undefined8 *)*param_9;
  local_38 = param_2;
  GPUFFTComputeShaderUtils::FComputeParamterValueSetter::Set<1,0>
            (&local_38,param_1 + 0xc4,param_1 + 200,&param_7);
  lVar2 = local_38;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    uVar4 = *param_8;
    puVar6 = (undefined8 *)(*(longlong *)(local_38 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *local_30;
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(local_38 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(local_38 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar5;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar6;
    *(undefined8 **)(lVar2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d92090;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                    (&local_38,param_1 + 0xd4,param_4);
  puVar5 = (undefined8 *)
           GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                     (uVar4,param_1 + 0xda,param_5);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (*puVar5,*(undefined8 *)puVar5[1],param_1 + 0xe0,param_6,0);
  return;
}



// FUNCTION 141c596e0 FUN_141c596e0 body=547 status=ok
// SIG undefined FUN_141c596e0(void)

void FUN_141c596e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,void *param_7)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong _Size;
  void *_Dst;
  undefined8 local_res8;
  longlong local_38;
  undefined8 *local_30;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res8 = *(undefined8 *)(lVar3 + 0x60);
  local_30 = &local_res8;
  param_6 = (undefined8 *)*param_6;
  local_38 = param_2;
  GPUFFTComputeShaderUtils::FComputeParamterValueSetter::Set<1,0>
            (&local_38,param_1 + 0xc4,param_1 + 200,&param_6);
  uVar6 = local_res8;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar4 = *param_4;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d92090;
    puVar9[2] = uVar6;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
  }
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,local_res8,param_1 + 0xd0,param_5,0);
  uVar6 = local_res8;
  uVar5 = (uint)*(ushort *)(param_1 + 0xda);
  if (7 < *(ushort *)(param_1 + 0xda)) {
    uVar5 = 8;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    uVar2 = *(ushort *)(param_1 + 0xd6);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,param_7,_Size);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d92080;
    puVar9[2] = uVar6;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    *(uint *)(puVar9 + 5) = uVar5;
  }
  return;
}



// FUNCTION 141c59910 FUN_141c59910 body=609 status=ok
// SIG undefined FUN_141c59910(void)

void FUN_141c59910(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 *param_7,undefined8 *param_8,
                  undefined8 param_9,char param_10)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *_Dst;
  ulonglong _Size;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 *local_30;
  
  if (param_10 == '\0') {
    local_3c = 0x3f800000;
  }
  else {
    local_3c = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_48 = *param_7;
  local_44 = param_7[1];
  local_40 = param_6;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  param_7 = *(undefined4 **)(lVar3 + 0x60);
  local_30 = &param_7;
  param_8 = (undefined8 *)*param_8;
  local_38 = param_2;
  GPUFFTComputeShaderUtils::FComputeParamterValueSetter::Set<1,0>
            (&local_38,param_1 + 0xc0,param_1 + 0xc4,&param_8);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,param_7,param_1 + 0xcc,param_4,0);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,param_7,param_1 + 0xd2,param_5,0);
  param_8 = (undefined8 *)param_7;
  uVar4 = (uint)*(ushort *)(param_1 + 0xdc);
  if (0xf < *(ushort *)(param_1 + 0xdc)) {
    uVar4 = 0x10;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xda);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar2 = *(ushort *)(param_1 + 0xd8);
    uVar5 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar5 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar5;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_48,_Size);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d92080;
    puVar7[3] = _Dst;
    *(uint *)(puVar7 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar7 + 0x24) = (uint)uVar1;
    puVar7[2] = param_8;
    *(uint *)(puVar7 + 5) = uVar4;
  }
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,param_7,param_1 + 0xde,param_9,0);
  return;
}



// FUNCTION 141c59b80 FUN_141c59b80 body=722 status=ok
// SIG undefined FUN_141c59b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c59b80(longlong param_1,longlong *param_2,void *param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  undefined8 uVar10;
  ulonglong _Size;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  void *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_a0 = param_3;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_a8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9690(param_1,param_2[8],local_a8,*(undefined8 *)(*param_2 + 0x20));
  local_c8 = FUN_141a156e0();
  local_b8 = 0;
  local_c0 = 0;
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2[8],&local_a8,param_2);
  cVar6 = FUN_141d6a650(*param_2);
  uVar5 = local_a8;
  if (cVar6 == '\0') {
    uVar10 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  }
  else {
    uVar10 = *(undefined8 *)(param_4 + 8);
  }
  lVar3 = param_2[8];
  if (*(short *)(param_1 + 0x1be) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar9;
    *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    puVar9[4] = uVar10;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[2] = uVar5;
    *puVar9 = &PTR_LAB_143f59c80;
  }
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3f800000;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  fStack_6c = 1.0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  FUN_141c452f0(DAT_1464c2390,0,&local_98);
  local_c0 = 0;
  fStack_6c = *(float *)(DAT_146a50ab0 + 4);
  if (DAT_1464c2494 <= *(float *)(DAT_146a50ab0 + 4)) {
    fStack_6c = DAT_1464c2494;
  }
  local_c8 = CONCAT44(local_c8._4_4_,4);
  if (fStack_6c <= 0.0) {
    fStack_6c = 0.0;
  }
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2[8],local_a8,param_1 + 0x1c0,&local_98);
  uVar5 = local_a8;
  lVar3 = param_2[8];
  uVar4 = (uint)*(ushort *)(param_1 + 0x1ca);
  if (0xf < *(ushort *)(param_1 + 0x1ca)) {
    uVar4 = 0x10;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c8);
    uVar2 = *(ushort *)(param_1 + 0x1c6);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,local_a0,_Size);
    puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar9;
    *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f594b0;
    puVar9[2] = uVar5;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    *(uint *)(puVar9 + 5) = uVar4;
  }
  return;
}



// FUNCTION 141c59e60 FUN_141c59e60 body=590 status=ok
// SIG undefined FUN_141c59e60(void)

void FUN_141c59e60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar4;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar2 = FSceneRenderTargets::Get(param_2[8]);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res8 = *(undefined8 *)(lVar1 + 0x40);
  FUN_141aa9690(param_1,param_2[8],local_res8,*(undefined8 *)(*param_2 + 0x20));
  FUN_141aa6fa0(param_1 + 0x1bc,param_2[8],&local_res8,*(undefined4 *)(*param_2 + 0x1a38),
                CONCAT44(uVar4,0xf));
  uVar3 = FUN_141a156e0();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2[8],&local_res8,param_2,uVar3,2,0);
  lVar1 = *param_2;
  uVar3 = uVar3 & 0xffffffff00000000;
  _local_48 = CONCAT44(((float)(int)(*(int *)(lVar1 + 0x1aa4) + 1U & 0xfffffffe) + 3.0) /
                       (float)(int)((ulonglong)*(undefined8 *)(lVar2 + 0x378) >> 0x20),
                       ((float)(int)(*(int *)(lVar1 + 0x1aa0) + 1U & 0xfffffffe) + 3.0) /
                       (float)*(int *)(lVar2 + 0x378));
  _fStack_40 = CONCAT44(((float)(int)(*(uint *)(lVar1 + 0x1aac) & 0xfffffffe) - 3.0) /
                        (float)(int)((ulonglong)*(undefined8 *)(lVar2 + 0x378) >> 0x20),
                        ((float)(int)(*(uint *)(lVar1 + 0x1aa8) & 0xfffffffe) - 3.0) /
                        (float)*(int *)(lVar2 + 0x378));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_res8,param_1 + 0x1cc,&local_48,uVar3);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  local_28 = 0;
  uStack_20 = 0x3f80000000000000;
  local_18 = 0;
  uStack_10 = 0x3f80000000000000;
  FUN_141c16270(param_2,&local_28);
  uVar3 = CONCAT44(uVar4,2);
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res8,param_1 + 0x1d2,&local_28,uVar3,0);
  local_34 = *(undefined4 *)(*param_2 + 0x1810);
  local_38 = *(undefined4 *)(*param_2 + 0x180c);
  local_30 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_res8,param_1 + 0x1d8,&local_38,uVar3 & 0xffffffff00000000);
  return;
}



// FUNCTION 141c5a0b0 FUN_141c5a0b0 body=977 status=ok
// SIG undefined FUN_141c5a0b0(void)

void FUN_141c5a0b0(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  void *pvVar11;
  float local_res18;
  float local_res1c;
  undefined8 local_48;
  float local_40;
  float local_3c;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9590(param_1,param_2,uVar4,*(undefined8 *)(param_3 + 0x20));
  local_48 = 0;
  local_res18 = 1.0 / (float)*param_4;
  local_res1c = 1.0 / (float)param_4[1];
  local_40 = (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)) /
             (float)(*(int *)(param_3 + 0x2fd0) * 2) - 0.5 / (float)*param_4;
  uVar5 = (uint)*(ushort *)(param_1 + 0xc4);
  if (7 < *(ushort *)(param_1 + 0xc4)) {
    uVar5 = 8;
  }
  local_3c = (float)(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)) /
             (float)(*(int *)(param_3 + 0x2fd4) * 2) - 0.5 / (float)param_4[1];
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    uVar2 = *(ushort *)(param_1 + 0xc2);
    pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar10 = (longlong)pvVar11 + (ulonglong)uVar5;
    if (*(ulonglong *)(param_2 + 0x38) < uVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar10 = (longlong)pvVar11 + (ulonglong)uVar5;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar10;
    _guard_xfg_dispatch_icall_nop(pvVar11,&local_res18,(ulonglong)uVar5);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f594b0;
    *(uint *)(puVar9 + 4) = (uint)uVar1;
    puVar9[2] = uVar4;
    puVar9[3] = pvVar11;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar2;
    *(uint *)(puVar9 + 5) = uVar5;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0xd0);
  if (0xf < *(ushort *)(param_1 + 0xd0)) {
    uVar5 = 0x10;
  }
  uVar10 = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    uVar2 = *(ushort *)(param_1 + 0xce);
    pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)pvVar11 + uVar10;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)pvVar11 + uVar10;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(pvVar11,&local_48,uVar10);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f594b0;
    *(uint *)(puVar9 + 4) = (uint)uVar1;
    puVar9[2] = uVar4;
    puVar9[3] = pvVar11;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar2;
    *(uint *)(puVar9 + 5) = uVar5;
  }
  if (*(short *)(param_1 + 0x1d0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1ce);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d8e600;
    puVar9[4] = param_5;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  uVar8 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x1d4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1d2);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar8;
  }
  return;
}



// FUNCTION 141c5a490 FUN_141c5a490 body=1000 status=ok
// SIG undefined FUN_141c5a490(void)

void FUN_141c5a490(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong _Size;
  void *_Dst;
  undefined8 local_res10;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res10 = *(undefined8 *)(lVar3 + 0x40);
  lVar5 = FSceneRenderTargets::Get(param_2[8]);
  FUN_141aa9690(param_1,param_2[8],local_res10,*(undefined8 *)(*param_2 + 0x20));
  uVar6 = FUN_1404a0e20();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2[8],&local_res10,param_2,uVar6,0,0);
  uVar6 = local_res10;
  lVar3 = param_2[8];
  uVar4 = (uint)*(ushort *)(param_1 + 0x1c8);
  if (3 < *(ushort *)(param_1 + 0x1c8)) {
    uVar4 = 4;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c4);
    uVar2 = *(ushort *)(param_1 + 0x1c6);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,local_res18,_Size);
    puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar10;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar11;
    *(undefined8 **)(lVar3 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f594b0;
    puVar11[2] = uVar6;
    *(uint *)(puVar11 + 4) = (uint)uVar1;
    puVar11[3] = _Dst;
    *(uint *)((longlong)puVar11 + 0x24) = (uint)uVar2;
    *(uint *)(puVar11 + 5) = uVar4;
  }
  uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x2d0) + 0x10);
  uVar8 = FUN_1404a0e20();
  uVar9 = local_res10;
  lVar3 = param_2[8];
  if (*(short *)(param_1 + 0x1be) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar10;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar11;
    *(undefined8 **)(lVar3 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[2] = uVar9;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = uVar6;
  }
  if (*(short *)(param_1 + 0x1c2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c0);
    puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar10;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar11;
    *(undefined8 **)(lVar3 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c70;
    puVar11[2] = uVar9;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = uVar8;
  }
  uVar9 = FUN_1404a0e20();
  uVar6 = local_res10;
  lVar3 = param_2[8];
  if (*(short *)(param_1 + 0x1cc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1ca);
    puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar10;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar11;
    *(undefined8 **)(lVar3 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[4] = local_res20;
    puVar11[2] = uVar6;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0x1d0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1ce);
    puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar10;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar11;
    *(undefined8 **)(lVar3 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c70;
    puVar11[2] = uVar6;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = uVar9;
  }
  return;
}



// FUNCTION 141c5a880 SetRenderTarget body=600 status=ok
// SIG undefined SetRenderTarget(void)

void SetRenderTarget(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                    char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18 [8];
  
  local_28 = param_2;
  local_20 = param_3;
  local_1c = 0xffffffff;
  local_18[0] = 0x101;
  if (param_5 != '\0') {
    FUN_141ae34d0(param_1,param_2,param_4,0x22);
  }
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x98) = 1;
  iVar7 = 0;
  uVar6 = uVar8;
  do {
    uVar5 = (int)uVar6 + 1;
    uVar2 = *(undefined8 *)(&local_20 + uVar6 * 6);
    uVar1 = *(undefined8 *)(local_18 + uVar6 * 0xc);
    puVar4 = (undefined8 *)(param_1 + 0xa0 + uVar6 * 0x18);
    *puVar4 = (&local_28)[uVar6 * 3];
    puVar4[1] = uVar2;
    *(undefined8 *)(param_1 + 0xb0 + uVar6 * 0x18) = uVar1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < *(uint *)(param_1 + 0x98));
  local_38 = (undefined4)param_4;
  uStack_34 = (undefined4)((ulonglong)param_4 >> 0x20);
  *(undefined4 *)(param_1 + 0x160) = local_38;
  *(undefined4 *)(param_1 + 0x164) = uStack_34;
  *(undefined4 *)(param_1 + 0x168) = 0x1010101;
  *(undefined4 *)(param_1 + 0x16c) = 0x22;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar3;
  *(undefined8 **)(param_1 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar3 + 2) = 1;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 8) = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x11) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x14) = 0;
  puVar3[0x15] = 0;
  *(undefined4 *)(puVar3 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x17) = 0;
  puVar3[0x18] = 0;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x1a) = 0;
  puVar3[0x1b] = 0;
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xe4) = 0;
  uVar6 = uVar8;
  if (*(int *)(puVar3 + 2) != 0) {
    do {
      uVar5 = (int)uVar6 + 1;
      uVar1 = *(undefined8 *)(&local_20 + uVar6 * 6);
      puVar3[uVar6 * 3 + 3] = (&local_28)[uVar6 * 3];
      (puVar3 + uVar6 * 3 + 3)[1] = uVar1;
      puVar3[uVar6 * 3 + 5] = *(undefined8 *)(local_18 + uVar6 * 0xc);
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(puVar3 + 2));
    iVar7 = *(int *)(puVar3 + 0x1d);
  }
  if (iVar7 != 0) {
    do {
      uVar5 = (int)uVar8 + 1;
      puVar3[uVar8 + 0x1e] = *(undefined8 *)(uVar8 * 8);
      uVar8 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(puVar3 + 0x1d));
  }
  puVar3[0x1b] = param_4;
  puVar3[0x1c] = 0x2201010101;
  return;
}



// FUNCTION 141c5aae0 ShouldCompilePermutation body=25 status=ok
// SIG undefined ShouldCompilePermutation(void)

bool FPostProcessBasicEyeAdaptationSetupPS::ShouldCompilePermutation(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*param_1);
  return DAT_1464c2394 <= iVar1;
}



// FUNCTION 141c5ab00 ShouldCompilePermutation body=25 status=ok
// SIG undefined ShouldCompilePermutation(void)

bool FPostProcessBasicEyeAdaptationSetupPS::ShouldCompilePermutation(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*param_1);
  return DAT_1464c2390 <= iVar1;
}



// FUNCTION 141c5ab20 FUN_141c5ab20 body=763 status=ok
// SIG undefined FUN_141c5ab20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c5ab20(int *param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 *local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  int *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  wchar_t *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((param_2 != '\0') && (iVar6 = *param_1, *(longlong *)(param_1 + (longlong)iVar6 * 2 + 4) != 0)
     ) {
    iVar5 = param_1[2];
    if (*(longlong *)(param_1 + ((longlong)iVar5 + 4) * 2) == 0) {
      local_a8 = 0;
      local_48 = L"UnknownTexture2D";
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,1);
      local_b8 = L"EyeAdaptationCPUReadBack";
      local_88 = _DAT_146ab6928;
      uStack_80 = uRam0000000146ab6930;
      local_78 = CONCAT44(1,DAT_146ab6938);
      uStack_70 = 1;
      local_68 = 0x1000000000001;
      uStack_60 = CONCAT62(uStack_60._2_6_,1);
      uStack_60 = CONCAT44(0x11,(undefined4)uStack_60);
      local_58 = 0x240000;
      local_50 = 0;
      local_40 = 1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_88,param_1 + ((longlong)iVar5 + 4) * 2)
      ;
      iVar5 = param_1[2];
      iVar6 = *param_1;
    }
    local_88 = 0xffffffff00000000;
    uStack_80 = 0xffffffffffffffff;
    puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    local_68 = 0xffffffff;
    uStack_60 = 0;
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + (longlong)iVar5 * 2 + 8) + 0x10);
    puVar3 = puVar7 + 10;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + (longlong)iVar6 * 2 + 4) + 8);
    if (DAT_146ab6eb0 < puVar3) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x58);
      puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar3 = puVar7 + 10;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar3;
    *DAT_146ab6e80 = puVar7;
    DAT_146ab6e80 = puVar7 + 1;
    *DAT_146ab6e80 = 0;
    *puVar7 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar7 + 2) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_88._4_4_;
    *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_80._4_4_;
    *(undefined4 *)(puVar7 + 4) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar7 + 0x24) = local_78._4_4_;
    *(undefined4 *)(puVar7 + 5) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_70._4_4_;
    *(undefined4 *)(puVar7 + 6) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar7 + 0x34) = local_68._4_4_;
    *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_60._4_4_;
    puVar7[8] = plVar2;
    puVar7[9] = uVar1;
    lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)puVar7[8] + 0x18))();
      if (lVar4 == 0) {
        (**(code **)(*(longlong *)puVar7[8] + 0x20))();
      }
    }
    lVar4 = (**(code **)(*(longlong *)puVar7[9] + 8))();
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)puVar7[9] + 0x18))();
      if (lVar4 == 0) {
        (**(code **)(*(longlong *)puVar7[9] + 0x20))();
      }
    }
    iVar6 = param_1[2] + 1;
    iVar6 = iVar6 + (iVar6 / 3 + (iVar6 >> 0x1f) +
                    (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    if (*(longlong *)(param_1 + (longlong)iVar6 * 2 + 8) != 0) {
      local_b0 = &local_98;
      local_90 = (int *)0x0;
      local_b8 = (wchar_t *)&local_94;
      local_94 = 0;
      local_98 = 0;
      (**(code **)(*DAT_146ab6358 + 0x6b8))
                (DAT_146ab6358,&DAT_146ab6e78,
                 *(undefined8 *)(*(longlong *)(param_1 + (longlong)iVar6 * 2 + 8) + 0x10),&local_90)
      ;
      if (local_90 != (int *)0x0) {
        param_1[1] = *local_90;
      }
      (**(code **)(*DAT_146ab6358 + 0x6c0))
                (DAT_146ab6358,&DAT_146ab6e78,
                 *(undefined8 *)(*(longlong *)(param_1 + (longlong)iVar6 * 2 + 8) + 0x10));
    }
    param_1[2] = iVar6;
  }
  *param_1 = 1 - *param_1;
  return;
}



// FUNCTION 141c5ae20 TransformKernelFFT body=580 status=ok
// SIG undefined TransformKernelFFT(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FRCPassFFTBloom::TransformKernelFFT(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_2 + 0x40);
  local_a0 = *(undefined8 *)(param_2 + 0x60);
  if (*(char *)(param_1 + 0xe8) == '\0') {
    local_c8._0_4_ = 0;
    local_c8._4_4_ = 2;
  }
  else {
    local_c8._0_4_ = 2;
    local_c8._4_4_ = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  local_c0._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_84 = (int)uVar2 + (int)local_c8;
  local_d8 = (longlong *)CONCAT71(local_d8._1_7_,1);
  local_88 = DAT_146ab6938;
  local_80 = local_c0._4_4_ + local_c8._4_4_;
  local_58 = L"UnknownTexture2D";
  local_e0 = CONCAT71(local_e0._1_7_,1);
  local_e8 = L"FFT Tmp Kernel Buffer";
  local_98 = _DAT_146ab6928;
  uStack_94 = uRam0000000146ab692c;
  uStack_90 = uRam0000000146ab6930;
  uStack_8c = uRam0000000146ab6934;
  local_7c = 0;
  local_78 = 1;
  local_74 = 0x10000;
  local_70 = 1;
  local_6c = 1;
  local_64 = 0x10001;
  local_60 = 0;
  local_50 = 1;
  local_c8 = (longlong *)0x0;
  local_c0 = uVar2;
  local_a8 = lVar1;
  FUN_141ce20b0(&PTR_PTR_1464c2560,lVar1,&local_98,&local_c8);
  local_e8 = (wchar_t *)(param_3 + 8);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = *(undefined8 *)(param_1 + 0xe0);
  local_d8 = local_c8 + 1;
  local_e0 = param_3;
  uVar3 = GPUFFT::FFTImage2D(&local_a8,param_1 + 0xe0,*(undefined1 *)(param_1 + 0xe8),&local_b8);
  local_c0 = *(undefined8 *)(param_3 + 0x10);
  puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 1;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar4;
  *puVar6 = local_c0;
  puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 6;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x38);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar4;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar5;
  *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar5 + 2) = 1;
  puVar5[3] = puVar6;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 3;
  puVar5[5] = 0;
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x30))();
  }
  return uVar3;
}



// FUNCTION 141c5b070 FUN_141c5b070 body=224 status=ok
// SIG undefined FUN_141c5b070(void)

void FUN_141c5b070(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar3 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar3 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *puVar3 = param_3;
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  puVar2[3] = puVar3;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *puVar2 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar2 + 2) = 1;
  *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 141c5b150 FUN_141c5b150 body=242 status=ok
// SIG undefined FUN_141c5b150(void)

void FUN_141c5b150(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar4 + 1;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar4 + 1;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *puVar4 = uVar1;
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    puVar3[3] = puVar4;
    *(undefined4 *)(puVar3 + 4) = param_2;
    *puVar3 = &PTR_LAB_144dc9d00;
    *(undefined4 *)(puVar3 + 2) = 1;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 3;
    puVar3[5] = 0;
  }
  return;
}



// FUNCTION 141c5b250 FUN_141c5b250 body=237 status=ok
// SIG undefined FUN_141c5b250(void)

void FUN_141c5b250(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar4 + 1;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar4 + 1;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *puVar4 = uVar1;
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    puVar3[3] = puVar4;
    *(undefined4 *)(puVar3 + 4) = param_2;
    *puVar3 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar3 + 2) = 1;
    *(undefined1 *)((longlong)puVar3 + 0x24) = 0;
  }
  return;
}



// FUNCTION 141c5b340 FUN_141c5b340 body=376 status=ok
// SIG undefined FUN_141c5b340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5b340(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  float local_80;
  undefined8 local_7c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x468) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x46c) = 0;
  uVar2 = FUN_14274f980(param_2);
  if ((uVar2 < 0x1e) && ((0x25e2cf88U >> (uVar2 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      local_80 = 0.0;
      local_7c = 0x3f800000;
      FUN_141c452f0(3,param_2,local_88);
      fVar5 = (local_80 + (float)local_7c) * 0.5;
      if (fVar5 <= 0.0001) {
        fVar5 = 0.0001;
      }
      *(float *)(param_1 + 0x468) = local_7c._4_4_ / fVar5;
    }
  }
  else {
    uVar3 = FUN_14274f980(param_2);
    cVar1 = FUN_141a10f60(uVar3);
    if ((cVar1 != '\0') &&
       (((*(byte *)(*(longlong *)(param_2 + 0x10) + 0x28) & 1) != 0 &&
        (*(char *)(*(longlong *)(param_2 + 0x10) + 0x62) != '\0')))) {
      fVar5 = *(float *)(DAT_146a50a80 + 4);
      fVar4 = (float)FViewInfo::GetLastEyeAdaptationExposure(param_2);
      if (fVar5 <= 0.0) {
        if (0.0 < fVar4) {
          *(float *)(param_1 + 0x468) = fVar4;
        }
      }
      else {
        *(float *)(param_1 + 0x468) = fVar5;
      }
      *(undefined1 *)(param_1 + 0x46c) = 1;
    }
  }
  if (*(float *)(param_1 + 0x468) <= 0.0) {
    *(undefined4 *)(param_2 + 0x2f28) = 0x3f800000;
  }
  else {
    *(float *)(param_2 + 0x2f28) = *(float *)(param_1 + 0x468);
  }
  return;
}



// FUNCTION 141c5b4c0 FUN_141c5b4c0 body=598 status=ok
// SIG undefined FUN_141c5b4c0(void)

longlong * FUN_141c5b4c0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"InvLowResolution";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 2;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"InvHighResolution";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 8;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"NoiseFilterStrength";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"StepSize";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x14;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"kBlurTolerance";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000018;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141c5b720 FUN_141c5b720 body=610 status=ok
// SIG undefined FUN_141c5b720(void)

longlong * FUN_141c5b720(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"InvThicknessTable";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 3;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SampleWeightTable";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"InvSliceDimension";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x60;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"RejectFadeoff";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x68;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"StartFadeDistance";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x40000006c;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141c5b990 FUN_141c5b990 body=162 status=ok
// SIG undefined FUN_141c5b990(void)

undefined1 FUN_141c5b990(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c6);
  FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0x1d8);
  FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  return 0;
}



// FUNCTION 141c5ba40 FUN_141c5ba40 body=74 status=ok
// SIG undefined FUN_141c5ba40(void)

undefined1 FUN_141c5ba40(longlong param_1,undefined8 param_2)

{
  operator<<(param_2,param_1 + 0xc0);
  FUN_141c76e00(param_2,param_1 + 0x1bc);
  FUN_1419e0a40(param_2,param_1 + 0x21a);
  return 0;
}



// FUNCTION 141c5baa0 FUN_141c5baa0 body=196 status=ok
// SIG undefined FUN_141c5baa0(void)

undefined1 FUN_141c5baa0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1c0);
  FUN_1419e0a40(uVar1,param_1 + 0x1c4);
  FUN_1419e0a40(param_2,param_1 + 0x1ca);
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0x1d4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1d0);
  FUN_1419e0a40(uVar1,param_1 + 0x1da);
  FUN_141c76e00(param_2,param_1 + 0x1e0);
  return 0;
}



// FUNCTION 141c5bb70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessTemporalAACS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 141c5bbb0 Serialize body=77 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessBloomUpPS_ES2::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1c2);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5bc00 FUN_141c5bc00 body=99 status=ok
// SIG undefined FUN_141c5bc00(void)

undefined1 FUN_141c5bc00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  operator<<(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 141c5bc70 FUN_141c5bc70 body=117 status=ok
// SIG undefined FUN_141c5bc70(void)

ulonglong FUN_141c5bc70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xc6);
  FUN_141ad3f10(param_1 + 0xd4,uVar1);
  FUN_141ad3f10(param_1 + 0xdc,uVar1);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xcc);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5bcf0 FUN_141c5bcf0 body=63 status=ok
// SIG undefined FUN_141c5bcf0(void)

undefined1 FUN_141c5bcf0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c120();
  operator<<(param_2,param_1 + 0x110);
  return uVar1;
}



// FUNCTION 141c5bd30 FUN_141c5bd30 body=73 status=ok
// SIG undefined FUN_141c5bd30(void)

longlong FUN_141c5bd30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 141c5bd80 FUN_141c5bd80 body=168 status=ok
// SIG undefined FUN_141c5bd80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5bd80(longlong param_1)

{
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_128,0);
  local_128 = 0;
  local_126 = 0x200004;
  local_122 = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,&local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_138);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 141c5be30 FUN_141c5be30 body=74 status=ok
// SIG undefined FUN_141c5be30(void)

undefined8 * FUN_141c5be30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e25818;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c5be80 FUN_141c5be80 body=89 status=ok
// SIG undefined FUN_141c5be80(void)

undefined8 * FUN_141c5be80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e25858;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144e25818;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c5bee0 Serialize body=92 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessSunMaskPS_ES2<1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar2 = FUN_141ad3f10(param_1 + 0x1cc,uVar1);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5bf50 Serialize body=142 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessSubsurfaceVisualizePS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1cc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d0);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1d6);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5bfe0 FUN_141c5bfe0 body=501 status=ok
// SIG undefined FUN_141c5bfe0(void)

ulonglong FUN_141c5bfe0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1ce);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1da);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1e0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1e6);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1ec);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1f2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1f8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1fe);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x204);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x20a);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x210);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x216);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x21c);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x222);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x228);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5c1e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TConeTraceScreenGridObjectOcclusionCS<1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 141c5c220 FUN_141c5c220 body=151 status=ok
// SIG undefined FUN_141c5c220(void)

undefined1 FUN_141c5c220(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c6);
  FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0x1d8);
  FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  return 0;
}



// FUNCTION 141c5c2c0 Serialize body=142 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessTestImagePS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  uVar2 = ::operator<<(uVar1,param_1 + 0x1d8);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5c350 Serialize body=117 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessSubsurfaceSetupPS<1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1d6);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5c3d0 FUN_141c5c3d0 body=134 status=ok
// SIG undefined FUN_141c5c3d0(void)

undefined1 FUN_141c5c3d0(longlong param_1,undefined8 param_2)

{
  operator<<(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0x1c8);
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0x1ce);
  FUN_1419e0a40(param_2,param_1 + 0x1d4);
  FUN_1419e0a40(param_2,param_1 + 0x1da);
  return 0;
}



// FUNCTION 141c5c460 FUN_141c5c460 body=503 status=ok
// SIG undefined FUN_141c5c460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c5c460(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  short sVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70 [3];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar9 = 0;
  local_80 = local_70;
  local_70[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = &local_58;
  local_48 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_90 = 1;
  local_98 = 0x60;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,&local_78,&DAT_146ab6e78,2);
  plVar7 = (longlong *)(param_1 + 0x30);
  if (plVar7 != &local_78) {
    puVar3 = (undefined8 *)*plVar7;
    *plVar7 = local_78;
    local_78 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar11 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar11) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar11) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            uVar6 = uVar9;
            if (uVar5 != 0) {
              uVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(uVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
  do {
    sVar10 = (short)uVar9 * 4;
    uVar5 = (int)uVar9 * 6;
    *(short *)(local_70[0] + (ulonglong)uVar5 * 2) = sVar10;
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    *(short *)(local_70[0] + (ulonglong)(uVar5 + 1) * 2) = sVar10 + 3;
    *(short *)(local_70[0] + (ulonglong)(uVar5 + 2) * 2) = sVar10 + 2;
    *(short *)(local_70[0] + (ulonglong)(uVar5 + 3) * 2) = sVar10;
    *(short *)(local_70[0] + (ulonglong)(uVar5 + 4) * 2) = sVar10 + 1;
    *(short *)(local_70[0] + (ulonglong)(uVar5 + 5) * 2) = sVar10 + 3;
  } while (uVar8 < 8);
  (**(code **)(*DAT_146ab6358 + 0x500))(DAT_146ab6358,&DAT_146ab6e78,*plVar7);
  return;
}



// FUNCTION 141c5c660 Serialize body=117 status=ok
// SIG undefined Serialize(void)

ulonglong TPostProcessSubsurfacePS<1,1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1d2);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5c6e0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e25d98;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141c5c750 Serialize body=74 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessVelocityGatherCS::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0x1c2);
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  return 0;
}



// FUNCTION 141c5c7a0 Serialize body=77 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessSunMergePS_ES2<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1c8);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5c7f0 Serialize body=105 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessLensBlurVS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c2);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1c8);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5c860 Serialize body=105 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessSunMergeSmallPS_ES2::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c8);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1ce);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5c8d0 Serialize body=187 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessMotionBlurCS<1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(uVar1,param_1 + 200);
  uVar1 = ::operator<<(param_2,param_1 + 0xce);
  FUN_141ad3f10(param_1 + 0x1cc,uVar1);
  FUN_141ad3f10(param_1 + 0x1d4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1dc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1e2);
  FUN_1419e0a40(uVar1,param_1 + 0x1e8);
  return 0;
}



// FUNCTION 141c5c990 FUN_141c5c990 body=218 status=ok
// SIG undefined FUN_141c5c990(void)

ulonglong FUN_141c5c990(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1de);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1e4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1ea);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1f0);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c5ca70 Serialize body=23 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessTemporalAAPS::Serialize(longlong param_1)

{
  FTemporalAAParameters::Serialize(param_1 + 0xc0);
  return 0;
}



// FUNCTION 141c5caa0 Serialize body=197 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessTemporalAACS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FTemporalAAParameters::Serialize(param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x224);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x22e);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x234);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x23a);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x240);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x246);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x24c);
  FUN_1419e0a40(uVar1,param_1 + 0x252);
  return 0;
}



// FUNCTION 141c5cb70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessTemporalAACS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 141c5cbb0 FUN_141c5cbb0 body=700 status=ok
// SIG undefined FUN_141c5cbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5cbb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a553b0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a594d0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  lVar2 = *param_1;
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(lVar2 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1[8],local_118,lVar1 + 0x1bc,lVar2 + 0x146c);
  return;
}



// FUNCTION 141c5ce70 FUN_141c5ce70 body=700 status=ok
// SIG undefined FUN_141c5ce70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5ce70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a553b0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a59620;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  lVar2 = *param_1;
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(lVar2 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1[8],local_118,lVar1 + 0x1bc,lVar2 + 0x146c);
  return;
}



// FUNCTION 141c5d130 FUN_141c5d130 body=700 status=ok
// SIG undefined FUN_141c5d130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5d130(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a553b0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a59770;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  lVar2 = *param_1;
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(lVar2 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1[8],local_118,lVar1 + 0x1bc,lVar2 + 0x146c);
  return;
}



// FUNCTION 141c5d3f0 FUN_141c5d3f0 body=700 status=ok
// SIG undefined FUN_141c5d3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5d3f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a553b0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a598c0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  lVar2 = *param_1;
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(lVar2 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1[8],local_118,lVar1 + 0x1bc,lVar2 + 0x146c);
  return;
}



// FUNCTION 141c5d6b0 FUN_141c5d6b0 body=700 status=ok
// SIG undefined FUN_141c5d6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5d6b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a553b0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a59380;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  lVar2 = *param_1;
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(lVar2 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_1[8],local_118,lVar1 + 0x1bc,lVar2 + 0x146c);
  return;
}



// FUNCTION 141c5d970 FUN_141c5d970 body=654 status=ok
// SIG undefined FUN_141c5d970(void)

void FUN_141c5d970(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res10;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  
  iVar1 = *param_3;
  lVar3 = param_2[0xc];
  iVar2 = param_3[1];
  local_58 = &DAT_146a579f0;
  local_50 = 0.0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res10,&local_58);
  plVar5 = (longlong *)0x0;
  if ((int)local_res10 != -1) {
    plVar5 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar9 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar3 = *plVar9;
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x60);
  FRHIComputeShader::UpdateStats(uVar7);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar8;
  *(undefined8 **)(param_1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144dc9ce0;
  puVar8[2] = uVar7;
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_res10 = *(undefined8 *)(lVar4 + 0x60);
  FUN_141aa92b0(lVar3,param_1,local_res10,*(undefined8 *)(*param_2 + 0x20));
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
            (lVar3 + 0xc0,param_1,local_res10,0,param_4);
  fVar11 = 0.5;
  fVar10 = 0.5;
  if (*(char *)(param_5 + 0x10) != '\0') {
    FUN_142759760(*param_2,&local_48,param_5 + 0x14,0);
    fVar11 = local_44 * -0.5 + 0.5;
    fVar10 = (local_48 + 1.0) * 0.5;
  }
  local_58 = (undefined *)CONCAT44(fVar10,*(undefined4 *)(param_5 + 0xc));
  local_4c = 0;
  local_50 = fVar11;
  FUN_141aac7b0(param_1,local_res10,lVar3 + 200,&local_58,param_4 & 0xffffffff00000000);
  uVar7 = FUN_1404a0e20();
  FUN_141caac50(lVar3 + 0xce,&local_res10,param_2,param_1,uVar7,0,0);
  DispatchComputeShader
            (param_1,lVar3,(int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3,
             (int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3,1);
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar3 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  return;
}



// FUNCTION 141c5dc00 FUN_141c5dc00 body=2744 status=ok
// SIG undefined FUN_141c5dc00(void)

void FUN_141c5dc00(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int local_res18;
  undefined4 uStackX_1c;
  undefined4 uVar11;
  undefined *local_48;
  undefined4 local_40;
  
  lVar9 = *(longlong *)(param_3 + 0x60);
  iVar1 = param_4[1];
  iVar10 = (int)((*param_4 + 7 >> 0x1f & 7U) + *param_4 + 7) >> 3;
  if (*(int *)(param_1 + 0xdc) < 1) {
    iVar5 = *(int *)(param_1 + 0xd8);
  }
  else {
    iVar5 = 3;
  }
  local_res18 = iVar10;
  if (param_8 == 0) {
    if (iVar5 == 1) {
      local_40 = 0;
      local_48 = &DAT_146a5cea0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar9 + 0x38),&param_8,&local_48);
      plVar6 = (longlong *)0x0;
      if (param_8 != -1) {
        plVar6 = (longlong *)((longlong)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      plVar8 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      lVar9 = *plVar8;
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
      iVar10 = local_res18;
    }
    else if (iVar5 == 2) {
      local_40 = 0;
      local_48 = &DAT_146a5d290;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar9 + 0x38),&param_8,&local_48);
      plVar6 = (longlong *)0x0;
      if (param_8 != -1) {
        plVar6 = (longlong *)((longlong)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      plVar8 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      lVar9 = *plVar8;
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
      iVar10 = local_res18;
    }
    else if (iVar5 == 3) {
      local_40 = 0;
      local_48 = &DAT_146a5d680;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar9 + 0x38),&param_8,&local_48);
      plVar6 = (longlong *)0x0;
      if (param_8 != -1) {
        plVar6 = (longlong *)((longlong)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      plVar8 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      lVar9 = *plVar8;
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
      iVar10 = local_res18;
    }
    else {
      if (iVar5 != 4) {
        return;
      }
      local_40 = 0;
      local_48 = &DAT_146a5da70;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar9 + 0x38),&param_8,&local_48);
      plVar6 = (longlong *)0x0;
      if (param_8 != -1) {
        plVar6 = (longlong *)((longlong)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      plVar8 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      lVar9 = *plVar8;
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
      iVar10 = local_res18;
    }
  }
  else if (param_8 == 1) {
    if (iVar5 == 1) {
      FUN_141c74690(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else if (iVar5 == 2) {
      FUN_141c74790(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else if (iVar5 == 3) {
      FUN_141c74890(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else {
      if (iVar5 != 4) {
        return;
      }
      FUN_141c74990(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
  }
  else {
    if (param_8 != 2) {
      return;
    }
    if (iVar5 == 1) {
      FUN_141c74710(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else if (iVar5 == 2) {
      FUN_141c74810(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else if (iVar5 == 3) {
      FUN_141c74910(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else {
      if (iVar5 != 4) {
        return;
      }
      FUN_141c74a10(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9ce0;
      puVar7[2] = uVar3;
      FUN_141c65910(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
  }
  DispatchComputeShader
            (param_2,lVar9,iVar10,(int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3,
             CONCAT44(uVar11,1));
  lVar2 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar9 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x60));
  return;
}



// FUNCTION 141c5e6c0 FUN_141c5e6c0 body=654 status=ok
// SIG undefined FUN_141c5e6c0(void)

void FUN_141c5e6c0(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res10;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  
  iVar1 = *param_3;
  lVar3 = param_2[0xc];
  iVar2 = param_3[1];
  local_58 = &DAT_146a579f0;
  local_50 = 0.0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res10,&local_58);
  plVar5 = (longlong *)0x0;
  if ((int)local_res10 != -1) {
    plVar5 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar9 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar3 = *plVar9;
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x60);
  FRHIComputeShader::UpdateStats(uVar7);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar8;
  *(undefined8 **)(param_1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e50;
  puVar8[2] = uVar7;
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_res10 = *(undefined8 *)(lVar4 + 0x60);
  FUN_141aa9420(lVar3,param_1,local_res10,*(undefined8 *)(*param_2 + 0x20));
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (lVar3 + 0xc0,param_1,local_res10,0,param_4);
  fVar11 = 0.5;
  fVar10 = 0.5;
  if (*(char *)(param_5 + 0x10) != '\0') {
    FUN_142759760(*param_2,&local_48,param_5 + 0x14,0);
    fVar11 = local_44 * -0.5 + 0.5;
    fVar10 = (local_48 + 1.0) * 0.5;
  }
  local_58 = (undefined *)CONCAT44(fVar10,*(undefined4 *)(param_5 + 0xc));
  local_4c = 0;
  local_50 = fVar11;
  FUN_141a120e0(param_1,local_res10,lVar3 + 200,&local_58,param_4 & 0xffffffff00000000);
  uVar7 = FUN_1404a0e20();
  FUN_141caac70(lVar3 + 0xce,&local_res10,param_2,param_1,uVar7,0,0);
  DispatchComputeShader
            (param_1,lVar3,(int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3,
             (int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3,1);
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar3 + 0xc0,param_1,*(undefined8 *)(lVar4 + 0x60));
  return;
}



// FUNCTION 141c5e950 FUN_141c5e950 body=2744 status=ok
// SIG undefined FUN_141c5e950(void)

void FUN_141c5e950(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int local_res18;
  undefined4 uStackX_1c;
  undefined4 uVar11;
  undefined *local_48;
  undefined4 local_40;
  
  lVar9 = *(longlong *)(param_3 + 0x60);
  iVar1 = param_4[1];
  iVar10 = (int)((*param_4 + 7 >> 0x1f & 7U) + *param_4 + 7) >> 3;
  if (*(int *)(param_1 + 0xdc) < 1) {
    iVar5 = *(int *)(param_1 + 0xd8);
  }
  else {
    iVar5 = 3;
  }
  local_res18 = iVar10;
  if (param_8 == 0) {
    if (iVar5 == 1) {
      local_40 = 0;
      local_48 = &DAT_146a5cea0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar9 + 0x38),&param_8,&local_48);
      plVar6 = (longlong *)0x0;
      if (param_8 != -1) {
        plVar6 = (longlong *)((longlong)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      plVar8 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      lVar9 = *plVar8;
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
      iVar10 = local_res18;
    }
    else if (iVar5 == 2) {
      local_40 = 0;
      local_48 = &DAT_146a5d290;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar9 + 0x38),&param_8,&local_48);
      plVar6 = (longlong *)0x0;
      if (param_8 != -1) {
        plVar6 = (longlong *)((longlong)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      plVar8 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      lVar9 = *plVar8;
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
      iVar10 = local_res18;
    }
    else if (iVar5 == 3) {
      local_40 = 0;
      local_48 = &DAT_146a5d680;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar9 + 0x38),&param_8,&local_48);
      plVar6 = (longlong *)0x0;
      if (param_8 != -1) {
        plVar6 = (longlong *)((longlong)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      plVar8 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      lVar9 = *plVar8;
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
      iVar10 = local_res18;
    }
    else {
      if (iVar5 != 4) {
        return;
      }
      local_40 = 0;
      local_48 = &DAT_146a5da70;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar9 + 0x38),&param_8,&local_48);
      plVar6 = (longlong *)0x0;
      if (param_8 != -1) {
        plVar6 = (longlong *)((longlong)param_8 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      plVar8 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      lVar9 = *plVar8;
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
      iVar10 = local_res18;
    }
  }
  else if (param_8 == 1) {
    if (iVar5 == 1) {
      FUN_141c74690(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else if (iVar5 == 2) {
      FUN_141c74790(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else if (iVar5 == 3) {
      FUN_141c74890(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else {
      if (iVar5 != 4) {
        return;
      }
      FUN_141c74990(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
  }
  else {
    if (param_8 != 2) {
      return;
    }
    if (iVar5 == 1) {
      FUN_141c74710(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else if (iVar5 == 2) {
      FUN_141c74810(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else if (iVar5 == 3) {
      FUN_141c74910(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
    else {
      if (iVar5 != 4) {
        return;
      }
      FUN_141c74a10(&local_res18,lVar9);
      lVar9 = CONCAT44(uStackX_1c,local_res18);
      lVar2 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e50;
      puVar7[2] = uVar3;
      FUN_141c673c0(lVar9,param_2,param_3,param_4,param_6,param_7);
      uVar11 = (undefined4)((ulonglong)param_6 >> 0x20);
    }
  }
  DispatchComputeShader
            (param_2,lVar9,iVar10,(int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3,
             CONCAT44(uVar11,1));
  lVar2 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar9 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x60));
  return;
}



// FUNCTION 141c5f410 FUN_141c5f410 body=667 status=ok
// SIG undefined FUN_141c5f410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5f410(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a56610;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a5baf0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c94180(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_1404a0e20();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  return;
}



// FUNCTION 141c5f6b0 FUN_141c5f6b0 body=667 status=ok
// SIG undefined FUN_141c5f6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5f6b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a56610;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a5b9a0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c94180(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_1404a0e20();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  return;
}



// FUNCTION 141c5f950 FUN_141c5f950 body=667 status=ok
// SIG undefined FUN_141c5f950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5f950(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a56760;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a5bd90;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c94180(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_1404a0e20();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  return;
}



// FUNCTION 141c5fbf0 FUN_141c5fbf0 body=667 status=ok
// SIG undefined FUN_141c5fbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c5fbf0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a56760;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a5bc40;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c94180(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_1404a0e20();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  return;
}



// FUNCTION 141c5fe90 FUN_141c5fe90 body=91 status=ok
// SIG undefined FUN_141c5fe90(void)

undefined8 FUN_141c5fe90(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a60f20;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141c5fef0 FUN_141c5fef0 body=91 status=ok
// SIG undefined FUN_141c5fef0(void)

undefined8 FUN_141c5fef0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a610a0;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141c5ff50 FUN_141c5ff50 body=1699 status=ok
// SIG undefined FUN_141c5ff50(void)

void FUN_141c5ff50(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  undefined *local_48;
  ulonglong uStack_40;
  
  lVar6 = FSceneRenderTargets::Get(param_2[8]);
  if (*(char *)(param_1 + 0x244) != '\0') {
    lVar3 = param_2[8];
    local_48 = (undefined *)0x0;
    uStack_40 = 0;
    iVar14 = 0;
    *(undefined4 *)(lVar3 + 0x98) = 0;
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 0x26;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x138);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 0x26;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar7;
    *(undefined8 **)(lVar3 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar7 + 5) = 0;
    puVar7[6] = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar7 + 8) = 0;
    puVar7[9] = 0;
    *(undefined4 *)(puVar7 + 10) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0xb) = 0;
    puVar7[0xc] = 0;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0xe) = 0;
    puVar7[0xf] = 0;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0x11) = 0;
    puVar7[0x12] = 0;
    *(undefined4 *)(puVar7 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0x14) = 0;
    puVar7[0x15] = 0;
    *(undefined4 *)(puVar7 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0x17) = 0;
    puVar7[0x18] = 0;
    *(undefined4 *)(puVar7 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0x1a) = 0;
    puVar7[0x1b] = 0;
    *(undefined4 *)(puVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0xe4) = 0;
    uVar13 = 0;
    if (*(int *)(puVar7 + 2) != 0) {
      do {
        uVar12 = (int)uVar13 + 1;
        uVar4 = ((undefined8 *)(uVar13 * 0x18))[1];
        puVar7[uVar13 * 3 + 3] = *(undefined8 *)(uVar13 * 0x18);
        (puVar7 + uVar13 * 3 + 3)[1] = uVar4;
        puVar7[uVar13 * 3 + 5] = *(undefined8 *)(uVar13 * 0x18 + 0x10);
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(puVar7 + 2));
      iVar14 = *(int *)(puVar7 + 0x1d);
    }
    uVar13 = 0;
    if (iVar14 != 0) {
      do {
        uVar12 = (int)uVar13 + 1;
        puVar7[uVar13 + 0x1e] = *(undefined8 *)(uVar13 * 8);
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(puVar7 + 0x1d));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a61240) &&
       (_Init_thread_header(&DAT_146a61240), DAT_146a61240 == -1)) {
      FName::FName(&DAT_146a61238,L"AsyncStartFence",1);
      _Init_thread_footer(&DAT_146a61240);
    }
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_res8,&DAT_146a61238);
    lVar3 = param_2[8];
    local_res10 = *(undefined8 *)(*(longlong *)(lVar6 + 0x2f8) + 0x18);
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 1;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 1;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *puVar7 = local_res10;
    puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar9;
    *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    puVar9[3] = puVar7;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[4] = 3;
    puVar9[5] = 0;
    lVar3 = param_2[8];
    uVar4 = CONCAT44(uStackX_c,local_res8);
    local_res10 = *(undefined8 *)(*(longlong *)(lVar6 + 0x60) + 0x18);
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 1;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 1;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *puVar7 = local_res10;
    puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar9;
    *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar7;
    puVar9[4] = 0;
    puVar9[5] = uVar4;
    if (DAT_1464c24d0 != 0) {
      uVar4 = CONCAT44(uStackX_c,local_res8);
      puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
      if (*(undefined8 **)(param_3 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar7 + 3;
      }
      *(undefined8 **)(param_3 + 0x30) = puVar8;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      **(undefined8 **)(param_3 + 8) = puVar7;
      *(undefined8 **)(param_3 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9d10;
      puVar7[2] = uVar4;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  }
  lVar10 = 0;
  lVar3 = param_2[0xc];
  local_48 = &DAT_146a55250;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res8,&local_48);
  if (local_res8 != -1) {
    lVar10 = (longlong)local_res8 * 0x20 + *(longlong *)(lVar3 + 0x38);
  }
  plVar11 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar11 = (longlong *)0x0;
  }
  lVar3 = *plVar11;
  lVar10 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar7 + 3;
  if (*(undefined8 **)(param_3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x20);
    puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 3;
  }
  *(undefined8 **)(param_3 + 0x30) = puVar8;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  **(undefined8 **)(param_3 + 8) = puVar7;
  *(undefined8 **)(param_3 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dc9ce0;
  puVar7[2] = uVar4;
  FUN_141c69a90(lVar3,param_3,*param_2,*(undefined8 *)(*(longlong *)(lVar6 + 0x2f8) + 0x18),
                *(undefined4 *)(param_1 + 0x240),param_1 + 0xb0);
  auVar1 = *(undefined1 (*) [16])(*param_2 + 0x1aa0);
  iVar5 = (auVar1._12_4_ - auVar1._4_4_) + 0xf;
  iVar14 = (auVar1._8_4_ - auVar1._0_4_) + 0xf;
  DispatchComputeShader
            (param_3,lVar3,(int)((iVar14 >> 0x1f & 0xfU) + iVar14) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar6 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar4 = *(undefined8 *)(lVar6 + 0x60);
  uVar2 = *(ushort *)(lVar3 + 0xc2);
  puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar7 + 5;
  if (*(undefined8 **)(param_3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 5;
  }
  *(undefined8 **)(param_3 + 0x30) = puVar8;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  **(undefined8 **)(param_3 + 8) = puVar7;
  *(undefined8 **)(param_3 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *(uint *)(puVar7 + 3) = (uint)uVar2;
  *puVar7 = &PTR_LAB_144dc9cd0;
  puVar7[2] = uVar4;
  puVar7[4] = 0;
  return;
}



// FUNCTION 141c60600 FUN_141c60600 body=1699 status=ok
// SIG undefined FUN_141c60600(void)

void FUN_141c60600(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  undefined *local_48;
  ulonglong uStack_40;
  
  lVar6 = FSceneRenderTargets::Get(param_2[8]);
  if (*(char *)(param_1 + 0x244) != '\0') {
    lVar3 = param_2[8];
    local_48 = (undefined *)0x0;
    uStack_40 = 0;
    iVar14 = 0;
    *(undefined4 *)(lVar3 + 0x98) = 0;
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 0x26;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x138);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 0x26;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar7;
    *(undefined8 **)(lVar3 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar7 + 5) = 0;
    puVar7[6] = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar7 + 8) = 0;
    puVar7[9] = 0;
    *(undefined4 *)(puVar7 + 10) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0xb) = 0;
    puVar7[0xc] = 0;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0xe) = 0;
    puVar7[0xf] = 0;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0x11) = 0;
    puVar7[0x12] = 0;
    *(undefined4 *)(puVar7 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0x14) = 0;
    puVar7[0x15] = 0;
    *(undefined4 *)(puVar7 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0x17) = 0;
    puVar7[0x18] = 0;
    *(undefined4 *)(puVar7 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar7 + 0x1a) = 0;
    puVar7[0x1b] = 0;
    *(undefined4 *)(puVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0xe4) = 0;
    uVar13 = 0;
    if (*(int *)(puVar7 + 2) != 0) {
      do {
        uVar12 = (int)uVar13 + 1;
        uVar4 = ((undefined8 *)(uVar13 * 0x18))[1];
        puVar7[uVar13 * 3 + 3] = *(undefined8 *)(uVar13 * 0x18);
        (puVar7 + uVar13 * 3 + 3)[1] = uVar4;
        puVar7[uVar13 * 3 + 5] = *(undefined8 *)(uVar13 * 0x18 + 0x10);
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(puVar7 + 2));
      iVar14 = *(int *)(puVar7 + 0x1d);
    }
    uVar13 = 0;
    if (iVar14 != 0) {
      do {
        uVar12 = (int)uVar13 + 1;
        puVar7[uVar13 + 0x1e] = *(undefined8 *)(uVar13 * 8);
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(puVar7 + 0x1d));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a61250) &&
       (_Init_thread_header(&DAT_146a61250), DAT_146a61250 == -1)) {
      FName::FName(&DAT_146a61248,L"AsyncStartFence",1);
      _Init_thread_footer(&DAT_146a61250);
    }
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_res8,&DAT_146a61248);
    lVar3 = param_2[8];
    local_res10 = *(undefined8 *)(*(longlong *)(lVar6 + 0x2f8) + 0x18);
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 1;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 1;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *puVar7 = local_res10;
    puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar9;
    *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    puVar9[3] = puVar7;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[4] = 3;
    puVar9[5] = 0;
    lVar3 = param_2[8];
    uVar4 = CONCAT44(uStackX_c,local_res8);
    local_res10 = *(undefined8 *)(*(longlong *)(lVar6 + 0x60) + 0x18);
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 1;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 1;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *puVar7 = local_res10;
    puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar8;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar9;
    *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar7;
    puVar9[4] = 0;
    puVar9[5] = uVar4;
    if (DAT_1464c24d0 != 0) {
      uVar4 = CONCAT44(uStackX_c,local_res8);
      puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
      if (*(undefined8 **)(param_3 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar7 + 3;
      }
      *(undefined8 **)(param_3 + 0x30) = puVar8;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      **(undefined8 **)(param_3 + 8) = puVar7;
      *(undefined8 **)(param_3 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dc9cc0;
      puVar7[2] = uVar4;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  }
  lVar10 = 0;
  lVar3 = param_2[0xc];
  local_48 = &DAT_146a55250;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res8,&local_48);
  if (local_res8 != -1) {
    lVar10 = (longlong)local_res8 * 0x20 + *(longlong *)(lVar3 + 0x38);
  }
  plVar11 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar11 = (longlong *)0x0;
  }
  lVar3 = *plVar11;
  lVar10 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar7 + 3;
  if (*(undefined8 **)(param_3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x20);
    puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 3;
  }
  *(undefined8 **)(param_3 + 0x30) = puVar8;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  **(undefined8 **)(param_3 + 8) = puVar7;
  *(undefined8 **)(param_3 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e50;
  puVar7[2] = uVar4;
  FUN_141c69c90(lVar3,param_3,*param_2,*(undefined8 *)(*(longlong *)(lVar6 + 0x2f8) + 0x18),
                *(undefined4 *)(param_1 + 0x240),param_1 + 0xb0);
  auVar1 = *(undefined1 (*) [16])(*param_2 + 0x1aa0);
  iVar5 = (auVar1._12_4_ - auVar1._4_4_) + 0xf;
  iVar14 = (auVar1._8_4_ - auVar1._0_4_) + 0xf;
  DispatchComputeShader
            (param_3,lVar3,(int)((iVar14 >> 0x1f & 0xfU) + iVar14) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar6 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar4 = *(undefined8 *)(lVar6 + 0x60);
  uVar2 = *(ushort *)(lVar3 + 0xc2);
  puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar7 + 5;
  if (*(undefined8 **)(param_3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 5;
  }
  *(undefined8 **)(param_3 + 0x30) = puVar8;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  **(undefined8 **)(param_3 + 8) = puVar7;
  *(undefined8 **)(param_3 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *(uint *)(puVar7 + 3) = (uint)uVar2;
  *puVar7 = &PTR_LAB_144d91e40;
  puVar7[2] = uVar4;
  puVar7[4] = 0;
  return;
}



// FUNCTION 141c60cb0 FUN_141c60cb0 body=3143 status=ok
// SIG undefined FUN_141c60cb0(void)

void FUN_141c60cb0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  float fVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  byte bVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined4 local_158 [2];
  longlong local_150;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar11 = *param_4;
  local_118 = *(undefined4 *)(lVar11 + 0x144c);
  local_114 = *(undefined4 *)(lVar11 + 0x1450);
  local_110 = *(undefined4 *)(lVar11 + 0x1454);
  local_98 = *(longlong *)(lVar11 + 0x10);
  fVar18 = 0.0;
  local_10c = 0;
  FUN_141aac7b0(param_2,param_3,param_1,&local_118,0);
  local_108 = *(float *)(lVar11 + 0x1468);
  local_100 = DAT_1464aa6c8 * local_108;
  local_fc = 0;
  local_104 = DAT_1464aa6c4 * local_108;
  local_108 = DAT_1464aa6c0 * local_108;
  FUN_141aac7b0(param_2,param_3,param_1 + 6,&local_108,0);
  local_res8 = *(undefined8 *)(*(longlong *)(*(longlong *)(DAT_146b17150 + 0x348) + 0x60) + 0x30);
  local_res20 = FUN_141ac0bb0();
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar2 = *(ushort *)(param_1 + 0xc);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144dc9ca0;
    puVar15[4] = local_res8;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
  }
  if (*(short *)(param_1 + 0x12) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x10);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144dc9cb0;
    puVar15[4] = local_res20;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
  }
  local_f4 = *(float *)(DAT_146a582b0 + 4);
  if (0.0 <= local_f4) {
    if (10.0 <= local_f4) {
      local_f4 = 10.0;
    }
  }
  else {
    local_f4 = 0.0;
  }
  local_f4 = local_f4 * 0.16666667;
  lVar9 = 0;
  local_f0 = *(undefined4 *)(lVar11 + 0x1654);
  local_f8 = *(undefined4 *)(lVar11 + 0x1650);
  local_ec = 0;
  bVar13 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x14,&local_f8,0);
  lVar3 = *(longlong *)(*param_4 + 0x1a40);
  if (lVar3 != 0) {
    bVar13 = *(byte *)(lVar3 + 0xcd);
  }
  local_144 = *(undefined4 *)(lVar11 + 0x1810);
  local_148 = *(undefined4 *)(lVar11 + 0x180c);
  local_140 = (float)bVar13;
  local_13c = 0.0;
  cVar5 = FUN_141c94e70(*param_4);
  local_13c = (float)(cVar5 != '\0');
  FUN_141aac7b0(param_2,param_3,param_1 + 0x1a,&local_148,0);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a612f8) &&
     (_Init_thread_header(&DAT_146a612f8), DAT_146a612f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar9;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a612f0 = lVar8;
    _Init_thread_footer(&DAT_146a612f8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a61308) &&
     (_Init_thread_header(&DAT_146a61308), DAT_146a61308 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar9;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146a61300 = lVar8;
    _Init_thread_footer(&DAT_146a61308);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a61318) &&
     (_Init_thread_header(&DAT_146a61318), DAT_146a61318 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar7 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146a61310 = lVar9;
    _Init_thread_footer(&DAT_146a61318);
  }
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(DAT_146a612f0 + 4));
  FUN_141c0b130(param_2,param_3,param_1 + 0x40,&local_res8,0);
  local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(DAT_146a61300 + 4));
  FUN_141c0b130(param_2,param_3,param_1 + 0x46,&local_res20,0);
  local_158[0] = *(undefined4 *)(DAT_146a61310 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x4c,local_158,0);
  local_138 = *(float *)(lVar11 + 0x165c);
  local_130 = *(undefined4 *)(lVar11 + 0x1658);
  local_134 = 1.0 - local_138 * 0.5;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x20,&local_138,0);
  lVar3 = param_5;
  if (*(char *)(param_5 + 6) != '\0') {
    local_88 = *(float *)(lVar11 + 0x1528);
    local_80 = local_88 * *(float *)(lVar11 + 0x1534);
    local_7c = 0;
    local_84 = local_88 * *(float *)(lVar11 + 0x1530);
    local_88 = local_88 * *(float *)(lVar11 + 0x152c);
    local_78 = *(undefined8 *)(DAT_1464c3318 + 8);
    if ((*(longlong *)(lVar11 + 0x1520) != 0) &&
       (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x1520) + 0x60), lVar11 != 0)) {
      local_78 = *(undefined8 *)(lVar11 + 0x30);
    }
    local_70 = FUN_141a156e0();
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_150,&local_88,&DAT_146a58418,0);
    param_5 = local_150;
    if (local_150 != 0) {
      LOCK();
      *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
    local_a8 = local_150;
    param_5 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,lVar3,local_150);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)param_4[5] + 0x10))((longlong *)param_4[5],3);
  plVar7 = (longlong *)FViewInfo::GetTonemappingLUTTexture(*param_4);
  if (plVar7 == (longlong *)0x0) {
    if ((((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) &&
        (lVar11 = FRenderingCompositeOutputRef::GetOutput(plVar10), lVar11 != 0)) &&
       (plVar10 = *(longlong **)(lVar11 + 0x50), plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x28))(plVar10);
      plVar7 = plVar10 + 2;
      (**(code **)(*plVar10 + 0x30))(plVar10);
      if (plVar7 != (longlong *)0x0) goto LAB_141c61345;
    }
  }
  else {
LAB_141c61345:
    lVar11 = *plVar7;
    if (lVar11 != 0) {
      param_5 = FUN_141a156e0();
      if (*(short *)(param_1 + 0x28) != 0) {
        uVar2 = *(ushort *)(param_1 + 0x26);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar15;
        *(undefined8 **)(param_2 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *(uint *)(puVar15 + 3) = (uint)uVar2;
        *puVar15 = &PTR_LAB_144dc9ca0;
        puVar15[2] = param_3;
        puVar15[4] = lVar11;
      }
      uVar4 = param_5;
      if (*(short *)(param_1 + 0x2c) != 0) {
        uVar2 = *(ushort *)(param_1 + 0x2a);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar15;
        *(undefined8 **)(param_2 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_144dc9cb0;
        puVar15[2] = param_3;
        *(uint *)(puVar15 + 3) = (uint)uVar2;
        puVar15[4] = uVar4;
      }
      goto LAB_141c61591;
    }
  }
  uVar6 = FUN_14274f980(*param_4);
  cVar5 = UseVolumeTextureLUT(uVar6);
  lVar11 = DAT_146ac3e28;
  if (cVar5 == '\0') {
    lVar11 = DAT_146ac3d68;
  }
  lVar11 = *(longlong *)(lVar11 + 0x30);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_a0 = lVar11;
  param_5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x26);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
    *puVar15 = &PTR_LAB_144dc9ca0;
    puVar15[2] = param_3;
    puVar15[4] = lVar11;
  }
  uVar4 = param_5;
  if (*(short *)(param_1 + 0x2c) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x2a);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144dc9cb0;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
    puVar15[4] = uVar4;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a0);
LAB_141c61591:
  lVar11 = local_98;
  local_128 = (float)(**(code **)(**(longlong **)(local_98 + 0x18) + 0x28))();
  local_128 = 1.0 / local_128;
  local_124 = (float)(**(code **)(**(longlong **)(lVar11 + 0x18) + 0x28))();
  local_124 = 2.2 / local_124;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a61328) && (_Init_thread_header(&DAT_146a61328), DAT_146a61328 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar11 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146a61320 = lVar11;
    _Init_thread_footer(&DAT_146a61328);
  }
  local_120 = *(float *)(DAT_146a61320 + 4);
  if (local_120 <= 1.0) {
    local_120 = 1.0;
  }
  local_120 = 1.0 / local_120;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x2e,&local_128,0);
  local_e4 = 1.0;
  fVar1 = *(float *)(*param_4 + 0x1460);
  local_e0 = 0.0;
  if (fVar1 < 0.9999) {
    fVar18 = *(float *)(*param_4 + 0x145c) * 0.01;
    local_e4 = 1.0 / (1.0 - fVar1);
    local_e0 = fVar1;
  }
  local_dc = 0;
  local_e8 = fVar18 * 1.029 * local_e4;
  local_e4 = fVar18 * 0.5935999 * local_e4;
  FUN_141a120e0(param_4[8],param_3,param_1 + 0x34,&local_e8,0);
  local_d0 = 1.0 / (float)(int)param_4[3];
  local_cc = 1.0 / (float)*(int *)((longlong)param_4 + 0x1c);
  local_d4 = ((float)*(int *)((longlong)param_4 + 0xc) + 0.5) * local_cc;
  local_d8 = ((float)(int)param_4[1] + 0.5) * local_d0;
  local_cc = ((float)*(int *)((longlong)param_4 + 0x14) - 0.5) * local_cc;
  local_d0 = ((float)(int)param_4[2] - 0.5) * local_d0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x52,&local_d8,0);
  local_bc = 1.0 / (float)*(int *)((longlong)param_4 + 0x1c);
  local_c0 = 1.0 / (float)(int)param_4[3];
  local_c8 = ((float)(int)param_4[1] + 1.5) * local_c0;
  local_c4 = ((float)*(int *)((longlong)param_4 + 0xc) + 1.5) * local_bc;
  local_c0 = ((float)(int)param_4[2] - 1.5) * local_c0;
  local_bc = ((float)*(int *)((longlong)param_4 + 0x14) - 1.5) * local_bc;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x58,&local_c8,0);
  iVar14 = (int)param_4[1];
  iVar17 = (int)((ulonglong)param_4[1] >> 0x20);
  iVar16 = *(int *)((longlong)param_4 + 0x14) - iVar17;
  local_b8 = (float)((int)param_4[2] - iVar14) * 0.5;
  local_b4 = (float)-iVar16 * 0.5;
  local_b0 = ((float)iVar14 + local_b8) - 0.5;
  local_ac = ((float)iVar16 * 0.5 + (float)iVar17) - 0.5;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x3a,&local_b8,0);
  return;
}



// FUNCTION 141c61900 FUN_141c61900 body=3143 status=ok
// SIG undefined FUN_141c61900(void)

void FUN_141c61900(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  float fVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  byte bVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined4 local_158 [2];
  longlong local_150;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar11 = *param_4;
  local_118 = *(undefined4 *)(lVar11 + 0x144c);
  local_114 = *(undefined4 *)(lVar11 + 0x1450);
  local_110 = *(undefined4 *)(lVar11 + 0x1454);
  local_98 = *(longlong *)(lVar11 + 0x10);
  fVar18 = 0.0;
  local_10c = 0;
  FUN_141a120e0(param_2,param_3,param_1,&local_118,0);
  local_108 = *(float *)(lVar11 + 0x1468);
  local_100 = DAT_1464aa6c8 * local_108;
  local_fc = 0;
  local_104 = DAT_1464aa6c4 * local_108;
  local_108 = DAT_1464aa6c0 * local_108;
  FUN_141a120e0(param_2,param_3,param_1 + 6,&local_108,0);
  local_res8 = *(undefined8 *)(*(longlong *)(*(longlong *)(DAT_146b17150 + 0x348) + 0x60) + 0x30);
  local_res20 = FUN_141ac0bb0();
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar2 = *(ushort *)(param_1 + 0xc);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d92090;
    puVar15[4] = local_res8;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
  }
  if (*(short *)(param_1 + 0x12) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x10);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144dcb3b8;
    puVar15[4] = local_res20;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
  }
  local_f4 = *(float *)(DAT_146a582b0 + 4);
  if (0.0 <= local_f4) {
    if (10.0 <= local_f4) {
      local_f4 = 10.0;
    }
  }
  else {
    local_f4 = 0.0;
  }
  local_f4 = local_f4 * 0.16666667;
  lVar9 = 0;
  local_f0 = *(undefined4 *)(lVar11 + 0x1654);
  local_f8 = *(undefined4 *)(lVar11 + 0x1650);
  local_ec = 0;
  bVar13 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x14,&local_f8,0);
  lVar3 = *(longlong *)(*param_4 + 0x1a40);
  if (lVar3 != 0) {
    bVar13 = *(byte *)(lVar3 + 0xcd);
  }
  local_144 = *(undefined4 *)(lVar11 + 0x1810);
  local_148 = *(undefined4 *)(lVar11 + 0x180c);
  local_140 = (float)bVar13;
  local_13c = 0.0;
  cVar5 = FUN_141c94e70(*param_4);
  local_13c = (float)(cVar5 != '\0');
  FUN_141a120e0(param_2,param_3,param_1 + 0x1a,&local_148,0);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a61338) &&
     (_Init_thread_header(&DAT_146a61338), DAT_146a61338 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar9;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a61330 = lVar8;
    _Init_thread_footer(&DAT_146a61338);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a61348) &&
     (_Init_thread_header(&DAT_146a61348), DAT_146a61348 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar9;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146a61340 = lVar8;
    _Init_thread_footer(&DAT_146a61348);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a61358) &&
     (_Init_thread_header(&DAT_146a61358), DAT_146a61358 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar7 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146a61350 = lVar9;
    _Init_thread_footer(&DAT_146a61358);
  }
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(DAT_146a61330 + 4));
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x40,&local_res8,0);
  local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(DAT_146a61340 + 4));
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,&local_res20,0);
  local_158[0] = *(undefined4 *)(DAT_146a61350 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,local_158,0);
  local_138 = *(float *)(lVar11 + 0x165c);
  local_130 = *(undefined4 *)(lVar11 + 0x1658);
  local_134 = 1.0 - local_138 * 0.5;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x20,&local_138,0);
  lVar3 = param_5;
  if (*(char *)(param_5 + 6) != '\0') {
    local_88 = *(float *)(lVar11 + 0x1528);
    local_80 = local_88 * *(float *)(lVar11 + 0x1534);
    local_7c = 0;
    local_84 = local_88 * *(float *)(lVar11 + 0x1530);
    local_88 = local_88 * *(float *)(lVar11 + 0x152c);
    local_78 = *(undefined8 *)(DAT_1464c3318 + 8);
    if ((*(longlong *)(lVar11 + 0x1520) != 0) &&
       (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x1520) + 0x60), lVar11 != 0)) {
      local_78 = *(undefined8 *)(lVar11 + 0x30);
    }
    local_70 = FUN_141a156e0();
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_150,&local_88,&DAT_146a58418,0);
    param_5 = local_150;
    if (local_150 != 0) {
      LOCK();
      *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
    local_a8 = local_150;
    param_5 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,lVar3,local_150);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)param_4[5] + 0x10))((longlong *)param_4[5],3);
  plVar7 = (longlong *)FViewInfo::GetTonemappingLUTTexture(*param_4);
  if (plVar7 == (longlong *)0x0) {
    if ((((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) &&
        (lVar11 = FRenderingCompositeOutputRef::GetOutput(plVar10), lVar11 != 0)) &&
       (plVar10 = *(longlong **)(lVar11 + 0x50), plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x28))(plVar10);
      plVar7 = plVar10 + 2;
      (**(code **)(*plVar10 + 0x30))(plVar10);
      if (plVar7 != (longlong *)0x0) goto LAB_141c61f95;
    }
  }
  else {
LAB_141c61f95:
    lVar11 = *plVar7;
    if (lVar11 != 0) {
      param_5 = FUN_141a156e0();
      if (*(short *)(param_1 + 0x28) != 0) {
        uVar2 = *(ushort *)(param_1 + 0x26);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar15;
        *(undefined8 **)(param_2 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *(uint *)(puVar15 + 3) = (uint)uVar2;
        *puVar15 = &PTR_LAB_144d92090;
        puVar15[2] = param_3;
        puVar15[4] = lVar11;
      }
      uVar4 = param_5;
      if (*(short *)(param_1 + 0x2c) != 0) {
        uVar2 = *(ushort *)(param_1 + 0x2a);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar15;
        *(undefined8 **)(param_2 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_144dcb3b8;
        puVar15[2] = param_3;
        *(uint *)(puVar15 + 3) = (uint)uVar2;
        puVar15[4] = uVar4;
      }
      goto LAB_141c621e1;
    }
  }
  uVar6 = FUN_14274f980(*param_4);
  cVar5 = UseVolumeTextureLUT(uVar6);
  lVar11 = DAT_146ac3e28;
  if (cVar5 == '\0') {
    lVar11 = DAT_146ac3d68;
  }
  lVar11 = *(longlong *)(lVar11 + 0x30);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_a0 = lVar11;
  param_5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x26);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
    *puVar15 = &PTR_LAB_144d92090;
    puVar15[2] = param_3;
    puVar15[4] = lVar11;
  }
  uVar4 = param_5;
  if (*(short *)(param_1 + 0x2c) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x2a);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144dcb3b8;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
    puVar15[4] = uVar4;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a0);
LAB_141c621e1:
  lVar11 = local_98;
  local_128 = (float)(**(code **)(**(longlong **)(local_98 + 0x18) + 0x28))();
  local_128 = 1.0 / local_128;
  local_124 = (float)(**(code **)(**(longlong **)(lVar11 + 0x18) + 0x28))();
  local_124 = 2.2 / local_124;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a61368) && (_Init_thread_header(&DAT_146a61368), DAT_146a61368 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar11 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146a61360 = lVar11;
    _Init_thread_footer(&DAT_146a61368);
  }
  local_120 = *(float *)(DAT_146a61360 + 4);
  if (local_120 <= 1.0) {
    local_120 = 1.0;
  }
  local_120 = 1.0 / local_120;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x2e,&local_128,0);
  local_e4 = 1.0;
  fVar1 = *(float *)(*param_4 + 0x1460);
  local_e0 = 0.0;
  if (fVar1 < 0.9999) {
    fVar18 = *(float *)(*param_4 + 0x145c) * 0.01;
    local_e4 = 1.0 / (1.0 - fVar1);
    local_e0 = fVar1;
  }
  local_dc = 0;
  local_e8 = fVar18 * 1.029 * local_e4;
  local_e4 = fVar18 * 0.5935999 * local_e4;
  FUN_141a120e0(param_4[8],param_3,param_1 + 0x34,&local_e8,0);
  local_d0 = 1.0 / (float)(int)param_4[3];
  local_cc = 1.0 / (float)*(int *)((longlong)param_4 + 0x1c);
  local_d4 = ((float)*(int *)((longlong)param_4 + 0xc) + 0.5) * local_cc;
  local_d8 = ((float)(int)param_4[1] + 0.5) * local_d0;
  local_cc = ((float)*(int *)((longlong)param_4 + 0x14) - 0.5) * local_cc;
  local_d0 = ((float)(int)param_4[2] - 0.5) * local_d0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x52,&local_d8,0);
  local_bc = 1.0 / (float)*(int *)((longlong)param_4 + 0x1c);
  local_c0 = 1.0 / (float)(int)param_4[3];
  local_c8 = ((float)(int)param_4[1] + 1.5) * local_c0;
  local_c4 = ((float)*(int *)((longlong)param_4 + 0xc) + 1.5) * local_bc;
  local_c0 = ((float)(int)param_4[2] - 1.5) * local_c0;
  local_bc = ((float)*(int *)((longlong)param_4 + 0x14) - 1.5) * local_bc;
  FUN_141a120e0(param_2,param_3,param_1 + 0x58,&local_c8,0);
  iVar14 = (int)param_4[1];
  iVar17 = (int)((ulonglong)param_4[1] >> 0x20);
  iVar16 = *(int *)((longlong)param_4 + 0x14) - iVar17;
  local_b8 = (float)((int)param_4[2] - iVar14) * 0.5;
  local_b4 = (float)-iVar16 * 0.5;
  local_b0 = ((float)iVar14 + local_b8) - 0.5;
  local_ac = ((float)iVar16 * 0.5 + (float)iVar17) - 0.5;
  FUN_141a120e0(param_2,param_3,param_1 + 0x3a,&local_b8,0);
  return;
}



// FUNCTION 141c62550 FUN_141c62550 body=3343 status=ok
// SIG undefined FUN_141c62550(void)

void FUN_141c62550(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  byte bVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  void *_Dst;
  int iVar17;
  float fVar18;
  undefined8 local_res8;
  longlong *local_res20;
  undefined8 local_158;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar11 = *param_4;
  local_118 = *(undefined4 *)(lVar11 + 0x144c);
  local_114 = *(undefined4 *)(lVar11 + 0x1450);
  local_110 = *(undefined4 *)(lVar11 + 0x1454);
  local_98 = *(longlong *)(lVar11 + 0x10);
  fVar18 = 0.0;
  local_10c = 0;
  local_res20 = param_4;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,param_3,param_1,&local_118,0);
  local_108 = *(float *)(lVar11 + 0x1468);
  local_100 = DAT_1464aa6c8 * local_108;
  local_fc = 0;
  local_104 = DAT_1464aa6c4 * local_108;
  local_108 = DAT_1464aa6c0 * local_108;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 6,&local_108,0);
  local_res8 = *(undefined8 *)(*(longlong *)(*(longlong *)(DAT_146b17150 + 0x348) + 0x60) + 0x30);
  local_158 = FUN_141ac0bb0();
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar2 = *(ushort *)(param_1 + 0xc);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f59c80;
    puVar15[4] = local_res8;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
  }
  if (*(short *)(param_1 + 0x12) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x10);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f59c70;
    puVar15[4] = local_158;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
  }
  local_f4 = *(float *)(DAT_146a582b0 + 4);
  if (0.0 <= local_f4) {
    if (10.0 <= local_f4) {
      local_f4 = 10.0;
    }
  }
  else {
    local_f4 = 0.0;
  }
  local_f4 = local_f4 * 0.16666667;
  local_f0 = *(undefined4 *)(lVar11 + 0x1654);
  local_f8 = *(undefined4 *)(lVar11 + 0x1650);
  local_ec = 0;
  bVar13 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x14,&local_f8,0);
  lVar8 = *(longlong *)(*param_4 + 0x1a40);
  if (lVar8 != 0) {
    bVar13 = *(byte *)(lVar8 + 0xcd);
  }
  local_144 = *(undefined4 *)(lVar11 + 0x1810);
  local_148 = *(undefined4 *)(lVar11 + 0x180c);
  local_140 = (float)bVar13;
  local_13c = 0.0;
  cVar4 = FUN_141c94e70(*param_4);
  local_13c = (float)(cVar4 != '\0');
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x1a,&local_148,0);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar8 + 0x38) < DAT_146a612a0) &&
     (_Init_thread_header(&DAT_146a612a0), DAT_146a612a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_146a61298 = lVar7;
    _Init_thread_footer(&DAT_146a612a0);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146a612b0) &&
     (_Init_thread_header(&DAT_146a612b0), DAT_146a612b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
    }
    DAT_146a612a8 = lVar7;
    _Init_thread_footer(&DAT_146a612b0);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146a612c0) &&
     (_Init_thread_header(&DAT_146a612c0), DAT_146a612c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    lVar8 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar6 + 0x40))(plVar6);
    }
    DAT_146a612b8 = lVar8;
    _Init_thread_footer(&DAT_146a612c0);
  }
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(DAT_146a61298 + 4));
  uVar3 = (uint)*(ushort *)(param_1 + 0x44);
  if (3 < *(ushort *)(param_1 + 0x44)) {
    uVar3 = 4;
  }
  if (uVar3 != 0) {
    local_158 = CONCAT44(local_158._4_4_,(uint)*(ushort *)(param_1 + 0x42));
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_150 = (uint)*(ushort *)(param_1 + 0x40);
    uVar9 = (ulonglong)uVar3 + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar9 = (ulonglong)uVar3 + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar9;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_res8,(ulonglong)uVar3);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f594b0;
    *(uint *)(puVar15 + 4) = local_150;
    *(undefined4 *)((longlong)puVar15 + 0x24) = (undefined4)local_158;
    puVar15[2] = param_3;
    puVar15[3] = _Dst;
    *(uint *)(puVar15 + 5) = uVar3;
    param_4 = local_res20;
  }
  local_res20 = (longlong *)CONCAT44(local_res20._4_4_,*(undefined4 *)(DAT_146a612a8 + 4));
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,&local_res20,0);
  local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(DAT_146a612b8 + 4));
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,&local_158,0);
  local_138 = *(float *)(lVar11 + 0x165c);
  local_130 = *(undefined4 *)(lVar11 + 0x1658);
  local_134 = 1.0 - local_138 * 0.5;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x20,&local_138,0);
  lVar8 = param_5;
  if (*(char *)(param_5 + 6) != '\0') {
    local_88 = *(float *)(lVar11 + 0x1528);
    local_80 = local_88 * *(float *)(lVar11 + 0x1534);
    local_7c = 0;
    local_84 = local_88 * *(float *)(lVar11 + 0x1530);
    local_88 = local_88 * *(float *)(lVar11 + 0x152c);
    local_78 = *(undefined8 *)(DAT_1464c3318 + 8);
    if ((*(longlong *)(lVar11 + 0x1520) != 0) &&
       (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x1520) + 0x60), lVar11 != 0)) {
      local_78 = *(undefined8 *)(lVar11 + 0x30);
    }
    local_70 = FUN_141a156e0();
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_150,&local_88,&DAT_146a58418,0);
    lVar11 = CONCAT44(uStack_14c,local_150);
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    param_5 = lVar11;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
    param_5 = 0;
    local_a8 = lVar11;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,lVar8,lVar11);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)param_4[5] + 0x10))((longlong *)param_4[5],3);
  plVar6 = (longlong *)FViewInfo::GetTonemappingLUTTexture(*param_4);
  if (plVar6 == (longlong *)0x0) {
    if ((((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) &&
        (lVar11 = FRenderingCompositeOutputRef::GetOutput(plVar10), lVar11 != 0)) &&
       (plVar10 = *(longlong **)(lVar11 + 0x50), plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x28))(plVar10);
      plVar6 = plVar10 + 2;
      (**(code **)(*plVar10 + 0x30))(plVar10);
      if (plVar6 != (longlong *)0x0) goto LAB_141c62cad;
    }
  }
  else {
LAB_141c62cad:
    lVar11 = *plVar6;
    if (lVar11 != 0) {
      local_res20 = (longlong *)FUN_141a156e0();
      if (*(short *)(param_1 + 0x28) != 0) {
        uVar2 = *(ushort *)(param_1 + 0x26);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar15;
        *(undefined8 **)(param_2 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *(uint *)(puVar15 + 3) = (uint)uVar2;
        *puVar15 = &PTR_LAB_143f59c80;
        puVar15[2] = param_3;
        puVar15[4] = lVar11;
      }
      plVar6 = local_res20;
      if (*(short *)(param_1 + 0x2c) != 0) {
        uVar2 = *(ushort *)(param_1 + 0x2a);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar15;
        *(undefined8 **)(param_2 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_143f59c70;
        puVar15[2] = param_3;
        *(uint *)(puVar15 + 3) = (uint)uVar2;
        puVar15[4] = plVar6;
      }
      goto LAB_141c62ef9;
    }
  }
  uVar5 = FUN_14274f980(*param_4);
  cVar4 = UseVolumeTextureLUT(uVar5);
  lVar11 = DAT_146ac3e28;
  if (cVar4 == '\0') {
    lVar11 = DAT_146ac3d68;
  }
  lVar11 = *(longlong *)(lVar11 + 0x30);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_a0 = lVar11;
  local_res20 = (longlong *)FUN_141a156e0();
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x26);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
    *puVar15 = &PTR_LAB_143f59c80;
    puVar15[2] = param_3;
    puVar15[4] = lVar11;
  }
  plVar6 = local_res20;
  if (*(short *)(param_1 + 0x2c) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x2a);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f59c70;
    puVar15[2] = param_3;
    *(uint *)(puVar15 + 3) = (uint)uVar2;
    puVar15[4] = plVar6;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a0);
LAB_141c62ef9:
  lVar11 = local_98;
  local_128 = (float)(**(code **)(**(longlong **)(local_98 + 0x18) + 0x28))();
  local_128 = 1.0 / local_128;
  local_124 = (float)(**(code **)(**(longlong **)(lVar11 + 0x18) + 0x28))();
  local_124 = 2.2 / local_124;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a612d0) && (_Init_thread_header(&DAT_146a612d0), DAT_146a612d0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar11 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar6 + 0x40))(plVar6);
    }
    DAT_146a612c8 = lVar11;
    _Init_thread_footer(&DAT_146a612d0);
  }
  local_120 = *(float *)(DAT_146a612c8 + 4);
  if (local_120 <= 1.0) {
    local_120 = 1.0;
  }
  local_120 = 1.0 / local_120;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x2e,&local_128,0);
  local_e4 = 1.0;
  fVar1 = *(float *)(*param_4 + 0x1460);
  local_e0 = 0.0;
  if (fVar1 < 0.9999) {
    fVar18 = *(float *)(*param_4 + 0x145c) * 0.01;
    local_e4 = 1.0 / (1.0 - fVar1);
    local_e0 = fVar1;
  }
  local_dc = 0;
  local_e8 = fVar18 * 1.029 * local_e4;
  local_e4 = fVar18 * 0.5935999 * local_e4;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_4[8],param_3,param_1 + 0x34,&local_e8,0);
  local_d0 = 1.0 / (float)(int)param_4[3];
  local_cc = 1.0 / (float)*(int *)((longlong)param_4 + 0x1c);
  local_d4 = ((float)*(int *)((longlong)param_4 + 0xc) + 0.5) * local_cc;
  local_d8 = ((float)(int)param_4[1] + 0.5) * local_d0;
  local_cc = ((float)*(int *)((longlong)param_4 + 0x14) - 0.5) * local_cc;
  local_d0 = ((float)(int)param_4[2] - 0.5) * local_d0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x52,&local_d8,0);
  local_bc = 1.0 / (float)*(int *)((longlong)param_4 + 0x1c);
  local_c0 = 1.0 / (float)(int)param_4[3];
  local_c8 = ((float)(int)param_4[1] + 1.5) * local_c0;
  local_c4 = ((float)*(int *)((longlong)param_4 + 0xc) + 1.5) * local_bc;
  local_c0 = ((float)(int)param_4[2] - 1.5) * local_c0;
  local_bc = ((float)*(int *)((longlong)param_4 + 0x14) - 1.5) * local_bc;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x58,&local_c8,0);
  iVar14 = (int)param_4[1];
  iVar17 = (int)((ulonglong)param_4[1] >> 0x20);
  iVar16 = *(int *)((longlong)param_4 + 0x14) - iVar17;
  local_b8 = (float)((int)param_4[2] - iVar14) * 0.5;
  local_b4 = (float)-iVar16 * 0.5;
  local_b0 = ((float)iVar14 + local_b8) - 0.5;
  local_ac = ((float)iVar16 * 0.5 + (float)iVar17) - 0.5;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_b8,0);
  return;
}



// FUNCTION 141c63260 FUN_141c63260 body=632 status=ok
// SIG undefined FUN_141c63260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c63260(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5c030;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c634e0 FUN_141c634e0 body=632 status=ok
// SIG undefined FUN_141c634e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c634e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5c180;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c63760 FUN_141c63760 body=632 status=ok
// SIG undefined FUN_141c63760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c63760(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5bee0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c639e0 FUN_141c639e0 body=632 status=ok
// SIG undefined FUN_141c639e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c639e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5c420;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c63c60 FUN_141c63c60 body=632 status=ok
// SIG undefined FUN_141c63c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c63c60(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5c570;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c63ee0 FUN_141c63ee0 body=632 status=ok
// SIG undefined FUN_141c63ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c63ee0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5c2d0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c64160 FUN_141c64160 body=632 status=ok
// SIG undefined FUN_141c64160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c64160(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5c810;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c643e0 FUN_141c643e0 body=632 status=ok
// SIG undefined FUN_141c643e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c643e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5c960;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c64660 FUN_141c64660 body=632 status=ok
// SIG undefined FUN_141c64660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c64660(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5c6c0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c648e0 FUN_141c648e0 body=632 status=ok
// SIG undefined FUN_141c648e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c648e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5cc00;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c64b60 FUN_141c64b60 body=632 status=ok
// SIG undefined FUN_141c64b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c64b60(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5cd50;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c64de0 FUN_141c64de0 body=632 status=ok
// SIG undefined FUN_141c64de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c64de0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_118 = 0;
  local_120 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5cab0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_100 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  FUN_141c928b0(lVar1,param_1,param_2);
  return;
}



// FUNCTION 141c65060 FUN_141c65060 body=797 status=ok
// SIG undefined FUN_141c65060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c65060(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  ulonglong uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9690(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  uVar1 = FUN_141b09910();
  uVar6 = 0;
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,&local_res8,param_3,uVar1,0,0);
  uVar7 = CONCAT44((int)((ulonglong)uVar1 >> 0x20),0xf);
  FUN_141aa6fa0(param_1 + 0x1bc,param_2,&local_res8,*(undefined4 *)(*param_3 + 0x1a38),uVar7);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a61280) {
    _Init_thread_header(&DAT_146a61280);
    if (DAT_146a61280 == -1) {
      FName::FName(&DAT_146a61278,L"PSVR",1);
      _Init_thread_footer(&DAT_146a61280);
    }
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
  lVar3 = (**(code **)(*plVar2 + 0x160))(plVar2);
  lVar4 = (**(code **)(*plVar2 + 0x168))(plVar2);
  lVar5 = (**(code **)(*plVar2 + 0x170))(plVar2);
  lVar3 = lVar3 - lVar4;
  lVar5 = lVar5 - lVar4;
  do {
    uVar1 = CONCAT44((int)(uVar7 >> 0x20),uVar6);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res8,param_1 + 0x1de,lVar3 + lVar4,uVar1);
    uVar1 = CONCAT44((int)((ulonglong)uVar1 >> 0x20),uVar6);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res8,param_1 + 0x1e4,lVar4,uVar1);
    uVar7 = CONCAT44((int)((ulonglong)uVar1 >> 0x20),uVar6);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res8,param_1 + 0x1ea,lVar5 + lVar4,uVar7);
    uVar6 = uVar6 + 1;
    lVar4 = lVar4 + 4;
  } while (uVar6 < 5);
  if (param_6 == 1) {
    uVar1 = (**(code **)(*plVar2 + 0x150))();
    uVar7 = uVar7 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (param_2,local_res8,param_1 + 0x1cc,uVar1,uVar7);
    uVar1 = (**(code **)(*plVar2 + 0x140))(plVar2,local_res18);
    uVar7 = uVar7 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (param_2,local_res8,param_1 + 0x1d2,uVar1,uVar7);
    param_6 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x158))(plVar2,local_res18);
    uVar7 = uVar7 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (param_2,local_res8,param_1 + 0x1cc,uVar1,uVar7);
    uVar1 = (**(code **)(*plVar2 + 0x148))(plVar2,local_res18);
    uVar7 = uVar7 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (param_2,local_res8,param_1 + 0x1d2,uVar1,uVar7);
    param_6 = 0xbf000000;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,local_res8,param_1 + 0x1d8,&param_6,uVar7 & 0xffffffff00000000);
  uVar1 = _DAT_1464aa7d8;
  *param_7 = _DAT_1464aa7d0;
  param_7[1] = uVar1;
  uVar1 = _DAT_1464aa7e8;
  param_7[2] = _DAT_1464aa7e0;
  param_7[3] = uVar1;
  uVar1 = _DAT_1464aa7f8;
  param_7[4] = _DAT_1464aa7f0;
  param_7[5] = uVar1;
  uVar1 = uRam00000001464aa808;
  param_7[6] = _DAT_1464aa800;
  param_7[7] = uVar1;
  return;
}



// FUNCTION 141c65380 FUN_141c65380 body=1420 status=ok
// SIG undefined FUN_141c65380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c65380(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_138 [2];
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118 [2];
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
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
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar1 = *param_3;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar3 = *(longlong *)(lVar1 + 0x10);
  lVar6 = lVar1;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
    lVar6 = *param_3;
  }
  local_138[0] = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(param_1,param_2,local_138[0],*(undefined8 *)(lVar6 + 0x20));
  if ((*(char *)(param_4 + 0xb) == '\0') || (cVar4 = FUN_142753b00(), cVar4 == '\0')) {
    local_158 = FUN_141a156e0();
  }
  else {
    local_158 = FUN_1404a0e20();
  }
  local_148 = 0;
  bVar5 = 0;
  local_150 = 0;
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,local_138,param_3);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x216,*param_3 + 0xf40);
  local_128 = ABS(*(float *)(lVar1 + 0x145c)) * 0.01;
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x21c,&local_128);
  local_128 = *(float *)(lVar1 + 0x144c);
  local_124 = *(float *)(lVar1 + 0x1450);
  local_120 = *(float *)(lVar1 + 0x1454);
  local_11c = 0;
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1bc,&local_128);
  local_120 = *(float *)(lVar1 + 0x1468);
  local_11c = 0;
  local_128 = local_120 * DAT_1464aa6c0;
  local_158 = local_158 & 0xffffffff00000000;
  local_124 = local_120 * DAT_1464aa6c4;
  local_120 = local_120 * DAT_1464aa6c8;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1c2,&local_128);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_3[5],0);
  lVar2 = *param_3;
  local_158 = local_158 & 0xffffffff00000000;
  local_128 = (float)(int)*(undefined8 *)(lVar6 + 0x14) /
              (float)(*(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0));
  local_124 = (float)(int)((ulonglong)*(undefined8 *)(lVar6 + 0x14) >> 0x20) /
              (float)(*(int *)(lVar2 + 0x1aac) - *(int *)(lVar2 + 0x1aa4));
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1c8,&local_128);
  local_124 = *(float *)(DAT_146a582b0 + 4);
  if (0.0 <= local_124) {
    if (10.0 <= local_124) {
      local_124 = 10.0;
    }
  }
  else {
    local_124 = 0.0;
  }
  local_128 = *(float *)(lVar1 + 0x1650);
  local_120 = *(float *)(lVar1 + 0x1654);
  local_11c = 0;
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_3[8],local_138[0],param_1 + 0x1da,&local_128);
  if (*(longlong *)(*param_3 + 0x1a40) != 0) {
    bVar5 = *(byte *)(*(longlong *)(*param_3 + 0x1a40) + 0xcd);
  }
  local_f8 = *(undefined4 *)(lVar1 + 0x180c);
  local_f4 = *(undefined4 *)(lVar1 + 0x1810);
  local_f0 = (float)bVar5;
  local_ec = 0;
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_3[8],local_138[0],param_1 + 0x1e0,&local_f8);
  local_110 = *(float *)(lVar1 + 0x165c);
  local_108 = *(undefined4 *)(lVar1 + 0x1658);
  fVar7 = 1.0;
  local_158 = local_158 & 0xffffffff00000000;
  local_10c = 1.0 - local_110 * 0.5;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1ce,&local_110);
  local_128 = (float)(**(code **)(**(longlong **)(lVar3 + 0x18) + 0x28))();
  local_128 = 1.0 / local_128;
  local_124 = (float)(**(code **)(**(longlong **)(lVar3 + 0x18) + 0x28))();
  local_124 = 2.2 / local_124;
  local_120 = 1.0;
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1d4,&local_128);
  local_150 = CONCAT31(local_150._1_3_,*(undefined1 *)(param_4 + 0xe));
  local_158 = CONCAT71(local_158._1_7_,*(undefined1 *)(param_4 + 0xd));
  local_e8 = 0;
  uStack_e0 = 0x3f80000000000000;
  local_d8 = 0;
  uStack_d0 = 0x3f80000000000000;
  local_c8 = 0;
  uStack_c0 = 0x3f80000000000000;
  local_b8 = 0;
  uStack_b0 = 0x3f80000000000000;
  local_a8 = 0;
  uStack_a0 = 0x3f80000000000000;
  local_98 = 0;
  uStack_90 = 0x3f80000000000000;
  local_88 = 0;
  uStack_80 = 0x3f80000000000000;
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  FUN_141c7c590(&local_e8,*param_3 + 0x1240,1,*(undefined1 *)(param_4 + 0xc));
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1e6,&local_e8);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1ec,&local_d8);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1f2,&local_c8);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1f8,&local_b8);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x1fe,&local_a8);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x204,&local_98);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x20a,&local_88);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x210,&local_78);
  if (param_5 == '\0') {
    fVar7 = 0.0;
  }
  local_158 = local_158 & 0xffffffff00000000;
  local_128 = fVar7;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x222,&local_128);
  local_118[0] = FRCPassPostProcessEyeAdaptation::GetFixedExposure(*param_3);
  local_158 = local_158 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,local_138[0],param_1 + 0x228,local_118);
  return;
}



// FUNCTION 141c65910 FUN_141c65910 body=732 status=ok
// SIG undefined FUN_141c65910(void)

void FUN_141c65910(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,float param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78 [2];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_78[0] = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa92b0(param_1,param_2,local_78[0],*(undefined8 *)(*param_3 + 0x20));
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
            (param_1 + 0xc0,param_2,local_78[0],0,param_5);
  fVar9 = 1.0;
  local_58 = 0;
  local_50 = 1.0 / (float)*param_4;
  local_4c = 1.0 / (float)param_4[1];
  FUN_141aac7b0(param_2,local_78[0],param_1 + 200,&local_58,param_5 & 0xffffffff00000000);
  FUN_141aa56e0(param_1 + 0x1cc,param_2,local_78,*(undefined4 *)(*param_3 + 0x1a38),0xf);
  uVar5 = FUN_1404a0e20();
  FUN_141caac50(param_1 + 0xce,local_78,param_3,param_2,uVar5,0,0);
  fVar8 = (float)((int)param_3[2] - (int)param_3[1]);
  local_68 = (float)(*(int *)((longlong)param_3 + 0x14) - *(int *)((longlong)param_3 + 0xc)) / fVar8
  ;
  if (param_3[4] != 0) {
    fVar9 = *(float *)(param_3[4] + 0x204);
  }
  local_64 = fVar8 * param_6 * 0.5;
  uVar5 = uVar5 & 0xffffffff00000000;
  local_5c = ABS(local_64) * *(float *)(*param_3 + 0x1780) * 0.01;
  local_64 = local_64 * fVar9 * *(float *)(*param_3 + 0x177c) * 0.5;
  local_60 = local_64 * 0.0625;
  FUN_141aac7b0(param_2,local_78[0],param_1 + 0x1dc,&local_68,uVar5);
  uVar6 = FUN_141c7d8d0(&local_68,param_3);
  uVar5 = uVar5 & 0xffffffff00000000;
  FUN_141a120e0(param_3[8],local_78[0],param_1 + 0x1e2,uVar6,uVar5);
  if (*(short *)(param_1 + 0x1ec) != 0) {
    lVar7 = FSceneRenderTargets::Get(param_3[8]);
    lVar2 = *param_3;
    iVar3 = (*(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0)) + 0xf;
    iVar4 = (int)*(undefined8 *)(lVar7 + 0x378) + 0xf;
    iVar1 = (*(int *)(lVar2 + 0x1aac) - *(int *)(lVar2 + 0x1aa4)) + 0xf;
    local_68 = ((float)((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) - 0.5) /
               (float)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4);
    iVar3 = (int)((ulonglong)*(undefined8 *)(lVar7 + 0x378) >> 0x20) + 0xf;
    local_64 = ((float)((int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4) - 0.5) /
               (float)((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4);
    SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
              (param_3[8],local_78[0],param_1 + 0x1e8,&local_68,uVar5 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141c65bf0 FUN_141c65bf0 body=1074 status=ok
// SIG undefined FUN_141c65bf0(void)

void FUN_141c65bf0(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  longlong param_5,undefined8 param_6,longlong *param_7,longlong param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff80;
  uint uVar12;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa92b0(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  uVar5 = FUN_1404a0e20();
  FUN_141caac50(param_1 + 0xc0,&local_res8,param_3,param_2,uVar5,(ulonglong)uVar12 << 0x20,0);
  plVar4 = param_7;
  uVar1 = *(ushort *)(param_1 + 0x230);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = *(undefined8 *)(*param_7 + 0x10);
  param_7 = (longlong *)local_res8;
  puVar6 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
  }
  uVar3 = local_res8;
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dc9cd0;
  puVar7[2] = param_7;
  *(uint *)(puVar7 + 3) = (uint)uVar1;
  puVar7[4] = uVar5;
  if (plVar4[1] != 0) {
    uVar5 = *(undefined8 *)(plVar4[1] + 0x10);
    uVar1 = *(ushort *)(param_1 + 0x236);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dc9cd0;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  lVar2 = param_8;
  uVar5 = local_res8;
  if (param_8 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x23c);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dc9cd0;
    puVar7[2] = uVar5;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = lVar2;
  }
  uVar5 = local_res8;
  if (*(short *)(param_1 + 0x226) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x224);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dc9ca0;
    puVar7[4] = param_11;
    puVar7[2] = uVar5;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  FUN_141c66430(param_1 + 0xc0,param_2,local_res8,param_3,param_4,param_5,param_10,param_9);
  fVar11 = (float)*(int *)(param_5 + 0x2c);
  param_4 = param_4 & 0xffffffff00000000;
  fVar10 = 1.0 / fVar11;
  param_7 = (longlong *)
            CONCAT44(fVar10 * *(float *)(*param_3 + 0x28c8),fVar10 * *(float *)(*param_3 + 0x28c4));
  FUN_141c6a2f0(param_2,local_res8,param_1 + 0x24c,&param_7,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  fVar9 = (float)(*(int *)(param_5 + 0x14) - *(int *)(param_5 + 0xc));
  fVar8 = (float)(*(int *)(param_5 + 0x24) - *(int *)(param_5 + 0x1c));
  param_7 = (longlong *)CONCAT44(fVar8 / fVar9,fVar9 / fVar8);
  FUN_141c6a2f0(param_2,local_res8,param_1 + 0x252,&param_7,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  param_7 = (longlong *)
            CONCAT44((float)*(int *)(param_5 + 0x10) * fVar10,
                     (float)*(int *)(param_5 + 0xc) * fVar10);
  FUN_141c6a2f0(param_2,local_res8,param_1 + 0x240,&param_7,param_4);
  local_60 = (float)(*(int *)(param_5 + 0x14) - *(int *)(param_5 + 0xc));
  local_68 = local_60 * fVar10;
  local_60 = fVar11 / local_60;
  local_5c = (float)(*(int *)(param_5 + 0x18) - *(int *)(param_5 + 0x10));
  local_64 = local_5c * fVar10;
  local_5c = fVar11 / local_5c;
  FUN_141aac7b0(param_2,local_res8,param_1 + 0x246,&local_68,param_4 & 0xffffffff00000000);
  return;
}



// FUNCTION 141c66030 FUN_141c66030 body=1024 status=ok
// SIG undefined FUN_141c66030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c66030(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *_Dst;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  void *local_a8;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  float local_90;
  float local_8c;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_78 = param_6;
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  local_a8 = *(void **)(lVar6 + 0x60);
  FUN_141aa92b0(param_1,param_2,local_a8,*(undefined8 *)(*param_3 + 0x20));
  local_c8 = (undefined4 *)param_5;
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
            (param_1 + 0x1bc,param_2,local_a8,0);
  local_98 = 0;
  local_c8 = (undefined4 *)((ulonglong)local_c8 & 0xffffffff00000000);
  local_8c = 1.0 / (float)param_4[1];
  local_90 = 1.0 / (float)*param_4;
  pvVar9 = local_a8;
  FUN_141aac7b0(param_2,local_a8,param_1 + 0x1c4,&local_98);
  local_88 = (void *)(*param_3 + 0xf40);
  local_80 = local_a8;
  uVar3 = (uint)*(ushort *)(param_1 + 0x1ce);
  if (0xf < *(ushort *)(param_1 + 0x1ce)) {
    uVar3 = 0x10;
  }
  uVar10 = (ulonglong)uVar3;
  if (uVar3 != 0) {
    local_a0 = (uint)*(ushort *)(param_1 + 0x1cc);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_9c = (uint)*(ushort *)(param_1 + 0x1ca);
    uVar4 = (longlong)_Dst + uVar10;
    if (*(ulonglong *)(param_2 + 0x38) < uVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar4 = (longlong)_Dst + uVar10;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar4;
    pvVar9 = local_88;
    _guard_xfg_dispatch_icall_nop(_Dst,local_88,uVar10);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      pvVar9 = (void *)0x0;
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9c80;
    puVar8[2] = local_80;
    *(uint *)(puVar8 + 4) = local_9c;
    puVar8[3] = _Dst;
    *(uint *)((longlong)puVar8 + 0x24) = local_a0;
    *(uint *)(puVar8 + 5) = uVar3;
  }
  uVar10 = (ulonglong)pvVar9 & 0xffffffffffffff00;
  plVar2 = *(longlong **)(*param_3 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,uVar10);
    uVar10 = (ulonglong)uVar3;
  }
  GrainRandomFromFrame(local_70,uVar10 & 0xff);
  local_c8 = (undefined4 *)((ulonglong)local_c8 & 0xffffffff00000000);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,local_a8,param_1 + 0x1d4,local_70);
  pvVar9 = local_a8;
  if (*(short *)(param_1 + 0x1d2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1d0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9ca0;
    puVar8[4] = local_78;
    puVar8[2] = pvVar9;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  lVar6 = 0;
  local_a0 = FRCPassPostProcessEyeAdaptation::GetFixedExposure(*param_3);
  local_c8 = (undefined4 *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_141c0b130(param_2,local_a8,param_1 + 0x1da,&local_a0);
  local_60 = FUN_141a156e0();
  local_58 = FUN_141a156e0();
  local_50 = FUN_1404a0e20();
  local_48 = FUN_141a156e0();
  local_b8 = &local_60;
  local_c0 = 0;
  local_c8 = (undefined4 *)0x0;
  FUN_141caac50(param_1 + 0xc0,&local_a8,param_3,param_2);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar6 * 8) == &DAT_146a583f0) {
        if (iVar7 != -1) {
          local_c8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *local_c8 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141c6639a;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a61290) {
    _Init_thread_header(&DAT_146a61290);
    if (DAT_146a61290 == -1) {
      _DAT_146a61288 = 0;
      _DAT_146a6128c = 0;
      DAT_146a6128e = 0;
      _Init_thread_footer(&DAT_146a61290);
    }
  }
  local_c8 = (undefined4 *)&DAT_146a61288;
LAB_141c6639a:
  FUN_141c60cb0(param_1 + 0x1e0,param_2,local_a8,param_3);
  return;
}



// FUNCTION 141c66430 FUN_141c66430 body=3290 status=ok
// SIG undefined FUN_141c66430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c66430(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,char param_7,int *param_8)

{
  int *piVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  short *psVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auStack_248 [32];
  int local_228;
  float local_218;
  float local_214;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  longlong *local_1d8;
  float local_1d0;
  float local_1cc;
  longlong local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 local_158;
  undefined1 local_150 [24];
  float local_138 [4];
  float local_128;
  float local_120 [4];
  float local_110;
  float local_10c;
  float local_104;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1d8 = param_5;
  local_228 = 0xf;
  local_210 = param_3;
  local_208 = param_1;
  local_1e0 = param_3;
  local_1b8 = param_4;
  FUN_141aa56e0(param_1 + 0xfc,param_2,&local_210,*(undefined4 *)(*param_4 + 0x1a38));
  pfVar17 = (float *)&DAT_144e2746c;
  pfVar15 = local_120 + 2;
  fVar29 = 0.0;
  lVar23 = 3;
  iVar14 = *(int *)(DAT_146a57d00 + 4);
  fVar31 = 1.0 / *(float *)(DAT_146a57b98 + 4);
  local_1ec = (float)*(int *)(param_6 + 0x2c);
  local_1e4 = 1.0 / local_1ec;
  local_218 = local_1e4 * *(float *)(*param_4 + 0x28c4);
  local_214 = local_1e4 * *(float *)(*param_4 + 0x28c8);
  do {
    fVar26 = local_218;
    fVar25 = (pfVar17[-3] - local_218) * fVar31;
    fVar27 = (pfVar17[-2] - local_214) * fVar31;
    if (iVar14 == 0) {
      fVar25 = _guard_xfg_dispatch_icall_nop(fVar25 * fVar25 * -2.29 - fVar27 * fVar27 * 2.29);
      pfVar15[-2] = fVar25;
    }
    else {
      fVar25 = ABS(fVar25);
      if (fVar25 <= 1.0) {
        fVar25 = (fVar25 * 1.5 - 2.5) * fVar25 * fVar25 + 1.0;
      }
      else {
        fVar25 = ((2.5 - fVar25 * 0.5) * fVar25 - 4.0) * fVar25 + 2.0;
      }
      fVar27 = ABS(fVar27);
      if (fVar27 <= 1.0) {
        fVar25 = ((fVar27 * 1.5 - 2.5) * fVar27 * fVar27 + 1.0) * fVar25;
        pfVar15[-2] = fVar25;
      }
      else {
        fVar25 = (((2.5 - fVar27 * 0.5) * fVar27 - 4.0) * fVar27 + 2.0) * fVar25;
        pfVar15[-2] = fVar25;
      }
    }
    fVar27 = local_214;
    fVar26 = (pfVar17[-1] - fVar26) * fVar31;
    fVar28 = (*pfVar17 - local_214) * fVar31;
    if (iVar14 == 0) {
      fVar26 = _guard_xfg_dispatch_icall_nop(fVar26 * fVar26 * -2.29 - fVar28 * fVar28 * 2.29);
      pfVar15[-1] = fVar26;
    }
    else {
      fVar26 = ABS(fVar26);
      if (fVar26 <= 1.0) {
        fVar26 = (fVar26 * 1.5 - 2.5) * fVar26 * fVar26 + 1.0;
      }
      else {
        fVar26 = ((2.5 - fVar26 * 0.5) * fVar26 - 4.0) * fVar26 + 2.0;
      }
      fVar28 = ABS(fVar28);
      if (fVar28 <= 1.0) {
        fVar26 = ((fVar28 * 1.5 - 2.5) * fVar28 * fVar28 + 1.0) * fVar26;
        pfVar15[-1] = fVar26;
      }
      else {
        fVar26 = (((2.5 - fVar28 * 0.5) * fVar28 - 4.0) * fVar28 + 2.0) * fVar26;
        pfVar15[-1] = fVar26;
      }
    }
    fVar28 = (pfVar17[2] - fVar27) * fVar31;
    fVar27 = (pfVar17[1] - local_218) * fVar31;
    if (iVar14 == 0) {
      fVar27 = _guard_xfg_dispatch_icall_nop(fVar27 * fVar27 * -2.29 - fVar28 * fVar28 * 2.29);
      *pfVar15 = fVar27;
    }
    else {
      fVar27 = ABS(fVar27);
      if (fVar27 <= 1.0) {
        fVar27 = (fVar27 * 1.5 - 2.5) * fVar27 * fVar27 + 1.0;
      }
      else {
        fVar27 = ((2.5 - fVar27 * 0.5) * fVar27 - 4.0) * fVar27 + 2.0;
      }
      fVar28 = ABS(fVar28);
      if (fVar28 <= 1.0) {
        fVar27 = ((fVar28 * 1.5 - 2.5) * fVar28 * fVar28 + 1.0) * fVar27;
        *pfVar15 = fVar27;
      }
      else {
        fVar27 = (((2.5 - fVar28 * 0.5) * fVar28 - 4.0) * fVar28 + 2.0) * fVar27;
        *pfVar15 = fVar27;
      }
    }
    lVar5 = local_208;
    fVar29 = fVar27 + fVar26 + fVar25 + fVar29;
    pfVar17 = pfVar17 + 6;
    pfVar15 = pfVar15 + 3;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  pfVar15 = local_120;
  iVar14 = 0;
  local_138[1] = local_120[3];
  local_138[0] = local_120[1];
  local_138[2] = local_110;
  local_138[3] = local_10c;
  local_128 = local_104;
  do {
    local_214 = (1.0 / fVar29) * *pfVar15;
    local_228 = iVar14;
    FUN_141c0b130(param_2,param_3,lVar5 + 0x10c,&local_214);
    iVar14 = iVar14 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar14 < 9);
  pfVar15 = local_138;
  iVar14 = 0;
  do {
    local_218 = (1.0 / (local_120[3] + local_120[1] + local_110 + local_10c + local_104)) * *pfVar15
    ;
    local_228 = iVar14;
    FUN_141c0b130(param_2,param_3,lVar5 + 0x112,&local_218);
    iVar14 = iVar14 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar14 < 5);
  uVar30 = 0;
  if (param_7 == '\0') {
    local_1f8 = 0;
  }
  else {
    local_1f8 = 0x3f800000;
  }
  local_228 = 0;
  FUN_141c0b130(param_2,param_3,lVar5 + 0x118,&local_1f8);
  if ((*(longlong *)(*local_1b8 + 0x1ab0) == 0) ||
     (*(char *)(*(longlong *)(*local_1b8 + 0x1ab0) + 0x1777) == '\0')) {
    uVar30 = 0x3f800000;
  }
  local_228 = 0;
  local_1f4 = uVar30;
  FUN_141c0b130(param_2,param_3,lVar5 + 0x11e,&local_1f4);
  local_228 = 0;
  local_1f0 = *(undefined4 *)(DAT_146a57d30 + 4);
  FUN_141c0b130(param_2,param_3,lVar5 + 0x124,&local_1f0);
  local_228 = 0;
  uVar3 = local_1d8[3];
  uVar4 = local_1d8[2];
  iVar22 = (int)uVar3;
  iVar16 = (int)local_1d8[4] - iVar22;
  iVar10 = (int)(uVar3 >> 0x20);
  iVar19 = *(int *)((longlong)local_1d8 + 0x24) - iVar10;
  local_1a0 = 1.0 / (float)(int)uVar4;
  fVar29 = (float)iVar16 * 0.5;
  local_19c = 1.0 / (float)(int)(uVar4 >> 0x20);
  local_1a8 = fVar29 * local_1a0;
  local_1a4 = (float)-iVar19 * 0.5 * local_19c;
  local_1a0 = ((float)iVar22 + fVar29) * local_1a0;
  local_19c = ((float)iVar19 * 0.5 + (float)iVar10) * local_19c;
  FUN_141aac7b0(param_2,param_3,local_208 + 0x130,&local_1a8);
  iVar14 = *(int *)(param_6 + 0x2c);
  iVar16 = (iVar14 + -1 + iVar16) / iVar14;
  local_228 = 0;
  iVar20 = (iVar14 + -1 + iVar19) / iVar14;
  local_1d0 = 1.0 - 1.0 / (float)iVar16;
  local_1cc = 1.0 - 1.0 / (float)iVar20;
  local_200 = uVar4;
  FUN_141c6a2f0(param_2,local_1e0,local_208 + 0x12a,&local_1d0);
  uVar18 = local_1e0;
  lVar23 = local_208;
  iVar22 = (int)((longlong)((ulonglong)(uint)(iVar22 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                (longlong)iVar14);
  iVar19 = (int)((longlong)((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 | uVar3 >> 0x20) /
                (longlong)iVar14);
  local_228 = 0;
  iVar10 = local_200._4_4_ / iVar14;
  fVar31 = (float)(int)((longlong)
                        ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
                       (longlong)iVar14);
  fVar26 = 1.0 / fVar31;
  fVar29 = 1.0 / (float)iVar10;
  local_198 = ((float)iVar22 + 0.5) * fVar26;
  local_194 = ((float)iVar19 + 0.5) * fVar29;
  local_190 = ((float)(iVar16 + iVar22) - 0.5) * fVar26;
  local_18c = ((float)(iVar20 + iVar19) - 0.5) * fVar29;
  FUN_141aac7b0(param_2,local_1e0,local_208 + 0x14c,&local_198);
  local_228 = 0;
  local_188 = fVar31;
  local_184 = (float)iVar10;
  local_180 = fVar26;
  local_17c = fVar29;
  FUN_141aac7b0(param_2,uVar18,lVar23 + 0x146,&local_188);
  psVar21 = (short *)(lVar23 + 0x140);
  local_200 = 2;
  plVar24 = local_1d8;
  do {
    if (*plVar24 != 0) {
      local_158 = *(undefined8 *)(*plVar24 + 0x10);
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar9 = IsInRenderingThread();
          if (cVar9 == '\0') {
            FScopedEvent::FScopedEvent(local_1c0);
            plVar11 = (longlong *)FUN_14049e3d0(local_150,0,0xff);
            lVar23 = *plVar11;
            *(undefined1 **)(lVar23 + 0x10) = &LAB_141a15860;
            *(undefined1 **)(lVar23 + 0x18) = local_1c0;
            lVar23 = *plVar11;
            lVar8 = plVar11[2];
            lVar5 = plVar11[1];
            lVar6 = *(longlong *)(lVar23 + 0x28);
            piVar1 = (int *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              uVar18 = local_210;
            }
            local_1c8 = lVar6;
            FUN_1404a4fe0(lVar23,lVar5,(int)lVar8,1);
            if (lVar6 != 0) {
              LOCK();
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              uVar18 = local_210;
              if (iVar14 == 1) {
                FGraphEvent::Recycle(local_1c8);
                uVar18 = local_210;
              }
            }
            FScopedEvent::~FScopedEvent(local_1c0);
          }
          else {
            lVar23 = operator_new(0x38);
            if (lVar23 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar23);
            }
          }
        }
        else {
          lVar23 = operator_new();
          if (lVar23 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
            uVar18 = local_210;
          }
          else {
            lVar23 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar23);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar23 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar23;
            UNLOCK();
            uVar18 = local_210;
          }
        }
      }
      uVar7 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      if (psVar21[-4] != 0) {
        uVar2 = psVar21[-5];
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144dc9ca0;
        puVar13[4] = local_158;
        puVar13[2] = uVar18;
        *(uint *)(puVar13 + 3) = (uint)uVar2;
      }
      if (*psVar21 != 0) {
        uVar2 = psVar21[-1];
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144dc9cb0;
        puVar13[2] = uVar18;
        *(uint *)(puVar13 + 3) = (uint)uVar2;
        puVar13[4] = uVar7;
      }
    }
    lVar23 = local_208;
    plVar24 = plVar24 + 1;
    psVar21 = psVar21 + 2;
    local_200 = local_200 + -1;
  } while (local_200 != 0);
  local_228 = 0;
  fVar29 = (float)(*(int *)(param_6 + 0x24) - *(int *)(param_6 + 0x1c));
  local_170 = 1.0 / fVar29;
  local_178 = (fVar29 - local_1ec * 0.5) * local_170;
  local_170 = local_170 * local_1ec;
  fVar29 = (float)(*(int *)(param_6 + 0x28) - *(int *)(param_6 + 0x20));
  local_16c = 1.0 / fVar29;
  local_174 = (fVar29 - local_1ec * 0.5) * local_16c;
  local_16c = local_16c * local_1ec;
  FUN_141aac7b0(param_2,uVar18,local_208 + 0x152,&local_178);
  if (*local_1d8 == 0) {
    local_1e8 = *(float *)(*local_1b8 + 0x2f28);
  }
  else {
    local_1e8 = *(float *)(local_1d8 + 5);
  }
  if (local_1e8 <= 1e-08) {
    local_1e8 = 1e-08;
  }
  local_228 = 0;
  local_1e8 = 1.0 / local_1e8;
  FUN_141c0b130(param_2,uVar18,lVar23 + 0x158,&local_1e8);
  local_228 = 0;
  local_168 = (float)(*(int *)(param_6 + 0x14) - *(int *)(param_6 + 0xc)) * local_1e4 *
              (1.0 / (float)*param_8);
  local_160 = (float)*(int *)(param_6 + 0xc) * local_1e4 * (1.0 / (float)*param_8);
  local_164 = (float)(*(int *)(param_6 + 0x18) - *(int *)(param_6 + 0x10)) * local_1e4 *
              (1.0 / (float)param_8[1]);
  local_15c = (float)*(int *)(param_6 + 0x10) * local_1e4 * (1.0 / (float)param_8[1]);
  FUN_141aac7b0(param_2,uVar18,lVar23 + 0x15e,&local_168);
  return;
}



// FUNCTION 141c67110 FUN_141c67110 body=687 status=ok
// SIG undefined FUN_141c67110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c67110(longlong param_1,undefined8 param_2,ulonglong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 local_res8 [2];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res8[0] = *(undefined8 *)(lVar1 + 0x40);
  uVar4 = 0;
  puVar8 = (undefined4 *)&DAT_146a612d8;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar2 = uVar4;
    uVar6 = uVar4;
    do {
      iVar5 = (int)uVar6;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar2 * 8) == &DAT_146a81840) {
        if (iVar5 != -1) {
          puVar7 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8);
          *puVar7 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141c671ba;
        }
        break;
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a612e0) {
    _Init_thread_header(&DAT_146a612e0);
    if (DAT_146a612e0 == -1) {
      _DAT_146a612d8 = 0;
      DAT_146a612dc = 0;
      DAT_146a612de = 0;
      _Init_thread_footer(&DAT_146a612e0);
    }
  }
  puVar7 = (undefined4 *)&DAT_146a612d8;
LAB_141c671ba:
  if (*(char *)((longlong)puVar7 + 6) != '\0') {
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0x3f800000;
    uVar3 = FSceneRenderTargets::Get(param_2);
    FUN_141d4f100(uVar3,param_5,&local_a8);
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar2 = uVar4;
      do {
        iVar5 = (int)uVar2;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a81840) {
          if (iVar5 != -1) {
            puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8);
            *puVar8 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141c6723d;
          }
          break;
        }
        uVar2 = (ulonglong)(iVar5 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146a612e0) {
      _Init_thread_header(&DAT_146a612e0);
      if (DAT_146a612e0 == -1) {
        _DAT_146a612d8 = 0;
        DAT_146a612dc = 0;
        DAT_146a612de = 0;
        _Init_thread_footer(&DAT_146a612e0);
      }
    }
LAB_141c6723d:
    FUN_141c6f230(param_2,local_res8[0],puVar8,&local_a8);
  }
  local_res18 = 0;
  (**(code **)(*param_4 + 0x40))
            (param_4,*(undefined4 *)(*param_3 + 0x1a38),local_res20,&local_res18);
  uVar4 = *param_3;
  FUN_141d857a0(param_1,param_2,local_res8[0],param_4,local_res18,uVar4,uVar4 + 0x20,0xf);
  uVar3 = FUN_1404a0e20();
  thunk_FUN_141ca99a0(param_1 + 0x110,param_2,local_res8,param_3,uVar3,uVar4 & 0xffffffff00000000,0)
  ;
  return;
}



// FUNCTION 141c673c0 FUN_141c673c0 body=732 status=ok
// SIG undefined FUN_141c673c0(void)

void FUN_141c673c0(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,float param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78 [2];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_78[0] = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa9420(param_1,param_2,local_78[0],*(undefined8 *)(*param_3 + 0x20));
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,local_78[0],0,param_5);
  fVar9 = 1.0;
  local_58 = 0;
  local_50 = 1.0 / (float)*param_4;
  local_4c = 1.0 / (float)param_4[1];
  FUN_141a120e0(param_2,local_78[0],param_1 + 200,&local_58,param_5 & 0xffffffff00000000);
  FUN_141aa6060(param_1 + 0x1cc,param_2,local_78,*(undefined4 *)(*param_3 + 0x1a38),0xf);
  uVar5 = FUN_1404a0e20();
  FUN_141caac70(param_1 + 0xce,local_78,param_3,param_2,uVar5,0,0);
  fVar8 = (float)((int)param_3[2] - (int)param_3[1]);
  local_68 = (float)(*(int *)((longlong)param_3 + 0x14) - *(int *)((longlong)param_3 + 0xc)) / fVar8
  ;
  if (param_3[4] != 0) {
    fVar9 = *(float *)(param_3[4] + 0x204);
  }
  local_64 = fVar8 * param_6 * 0.5;
  uVar5 = uVar5 & 0xffffffff00000000;
  local_5c = ABS(local_64) * *(float *)(*param_3 + 0x1780) * 0.01;
  local_64 = local_64 * fVar9 * *(float *)(*param_3 + 0x177c) * 0.5;
  local_60 = local_64 * 0.0625;
  FUN_141a120e0(param_2,local_78[0],param_1 + 0x1dc,&local_68,uVar5);
  uVar6 = FUN_141c7d8d0(&local_68,param_3);
  uVar5 = uVar5 & 0xffffffff00000000;
  FUN_141a120e0(param_3[8],local_78[0],param_1 + 0x1e2,uVar6,uVar5);
  if (*(short *)(param_1 + 0x1ec) != 0) {
    lVar7 = FSceneRenderTargets::Get(param_3[8]);
    lVar2 = *param_3;
    iVar3 = (*(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0)) + 0xf;
    iVar4 = (int)*(undefined8 *)(lVar7 + 0x378) + 0xf;
    iVar1 = (*(int *)(lVar2 + 0x1aac) - *(int *)(lVar2 + 0x1aa4)) + 0xf;
    local_68 = ((float)((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) - 0.5) /
               (float)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4);
    iVar3 = (int)((ulonglong)*(undefined8 *)(lVar7 + 0x378) >> 0x20) + 0xf;
    local_64 = ((float)((int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4) - 0.5) /
               (float)((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4);
    SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
              (param_3[8],local_78[0],param_1 + 0x1e8,&local_68,uVar5 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141c676a0 FUN_141c676a0 body=492 status=ok
// SIG undefined FUN_141c676a0(void)

void FUN_141c676a0(longlong param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  local_res8 = *(undefined8 *)(lVar7 + 0x40);
  FUN_141aa9690(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  uVar3 = FUN_141a156e0();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,&local_res8,param_3,uVar3,0,0);
  lVar7 = *(longlong *)(DAT_146ac3d68 + 0x30);
  if (((*(longlong *)(DAT_146b17150 + 0x368) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(DAT_146b17150 + 0x368) + 0x60), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
    lVar7 = lVar2;
  }
  if (((*(longlong *)(*param_3 + 0x15c8) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(*param_3 + 0x15c8) + 0x60), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
    lVar7 = lVar2;
  }
  uVar4 = FUN_141c499e0();
  uVar3 = local_res8;
  if (*(short *)(param_1 + 0x1be) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar3;
    puVar6[4] = lVar7;
  }
  if (*(short *)(param_1 + 0x1c2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c70;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  return;
}



// FUNCTION 141c67890 FUN_141c67890 body=1074 status=ok
// SIG undefined FUN_141c67890(void)

void FUN_141c67890(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  longlong param_5,undefined8 param_6,longlong *param_7,longlong param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff80;
  uint uVar12;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa9420(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  uVar5 = FUN_1404a0e20();
  FUN_141caac70(param_1 + 0xc0,&local_res8,param_3,param_2,uVar5,(ulonglong)uVar12 << 0x20,0);
  plVar4 = param_7;
  uVar1 = *(ushort *)(param_1 + 0x230);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = *(undefined8 *)(*param_7 + 0x10);
  param_7 = (longlong *)local_res8;
  puVar6 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
  }
  uVar3 = local_res8;
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e40;
  puVar7[2] = param_7;
  *(uint *)(puVar7 + 3) = (uint)uVar1;
  puVar7[4] = uVar5;
  if (plVar4[1] != 0) {
    uVar5 = *(undefined8 *)(plVar4[1] + 0x10);
    uVar1 = *(ushort *)(param_1 + 0x236);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  lVar2 = param_8;
  uVar5 = local_res8;
  if (param_8 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x23c);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar5;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = lVar2;
  }
  uVar5 = local_res8;
  if (*(short *)(param_1 + 0x226) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x224);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[4] = param_11;
    puVar7[2] = uVar5;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  FUN_141c680d0(param_1 + 0xc0,param_2,local_res8,param_3,param_4,param_5,param_10,param_9);
  fVar11 = (float)*(int *)(param_5 + 0x2c);
  param_4 = param_4 & 0xffffffff00000000;
  fVar10 = 1.0 / fVar11;
  param_7 = (longlong *)
            CONCAT44(fVar10 * *(float *)(*param_3 + 0x28c8),fVar10 * *(float *)(*param_3 + 0x28c4));
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,local_res8,param_1 + 0x24c,&param_7,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  fVar9 = (float)(*(int *)(param_5 + 0x14) - *(int *)(param_5 + 0xc));
  fVar8 = (float)(*(int *)(param_5 + 0x24) - *(int *)(param_5 + 0x1c));
  param_7 = (longlong *)CONCAT44(fVar8 / fVar9,fVar9 / fVar8);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,local_res8,param_1 + 0x252,&param_7,param_4);
  param_4 = param_4 & 0xffffffff00000000;
  param_7 = (longlong *)
            CONCAT44((float)*(int *)(param_5 + 0x10) * fVar10,
                     (float)*(int *)(param_5 + 0xc) * fVar10);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,local_res8,param_1 + 0x240,&param_7,param_4);
  local_60 = (float)(*(int *)(param_5 + 0x14) - *(int *)(param_5 + 0xc));
  local_68 = local_60 * fVar10;
  local_60 = fVar11 / local_60;
  local_5c = (float)(*(int *)(param_5 + 0x18) - *(int *)(param_5 + 0x10));
  local_64 = local_5c * fVar10;
  local_5c = fVar11 / local_5c;
  FUN_141a120e0(param_2,local_res8,param_1 + 0x246,&local_68,param_4 & 0xffffffff00000000);
  return;
}


