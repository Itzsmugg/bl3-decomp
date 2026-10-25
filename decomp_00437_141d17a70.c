// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141d17a70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TStaticMeshDrawList<FHitProxyDrawingPolicy>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TStaticMeshDrawList<FHitProxyDrawingPolicy>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141d17ab0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141d17af0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TStaticMeshDrawList<FVelocityDrawingPolicy>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TStaticMeshDrawList<FVelocityDrawingPolicy>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141d17b30 FUN_141d17b30 body=89 status=ok
// SIG undefined FUN_141d17b30(void)

undefined8 * FUN_141d17b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e48660;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d17b90 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FBatchingSPDI::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141d17bf0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FHZBOcclusionTester::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e47e88;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x30))();
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141d17c50 FUN_141d17c50 body=43 status=ok
// SIG undefined FUN_141d17c50(void)

undefined8 * FUN_141d17c50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144e47ad0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141d17c80 FUN_141d17c80 body=112 status=ok
// SIG undefined FUN_141d17c80(void)

undefined8 * FUN_141d17c80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e47e78;
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 0x15);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb);
  FUN_141d12c80(param_1 + 6);
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141d17cf0 FUN_141d17cf0 body=71 status=ok
// SIG undefined FUN_141d17cf0(void)

longlong FUN_141d17cf0(longlong param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d17d40 FUN_141d17d40 body=52 status=ok
// SIG undefined FUN_141d17d40(void)

undefined8 FUN_141d17d40(undefined8 param_1,ulonglong param_2)

{
  FUN_141d13cc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60f0);
  }
  return param_1;
}



// FUNCTION 141d17d80 FUN_141d17d80 body=43 status=ok
// SIG undefined FUN_141d17d80(void)

undefined8 * FUN_141d17d80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144e47ad0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141d17db0 FUN_141d17db0 body=52 status=ok
// SIG undefined FUN_141d17db0(void)

undefined8 FUN_141d17db0(undefined8 param_1,ulonglong param_2)

{
  FUN_142745bf0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1aa0);
  }
  return param_1;
}



// FUNCTION 141d17df0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FNvVideoEncoder::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141d14460();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1860);
  }
  return param_1;
}



// FUNCTION 141d17e30 FUN_141d17e30 body=43 status=ok
// SIG undefined FUN_141d17e30(void)

undefined8 * FUN_141d17e30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144e47df0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141d17e60 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e48b58;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d17eb0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e48b98;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d17f00 FUN_141d17f00 body=234 status=ok
// SIG undefined FUN_141d17f00(void)

ulonglong FUN_141d17f00(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    iVar4 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    uVar6 = (ulonglong)(int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + uVar6 * 0x30);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  iVar4 = (int)uVar6;
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  uVar3 = param_2[1];
  puVar5 = (undefined8 *)((longlong)iVar4 * 0x30 + *param_1);
  *puVar5 = *param_2;
  puVar5[1] = uVar3;
  uVar3 = param_2[3];
  puVar5[2] = param_2[2];
  puVar5[3] = uVar3;
  uVar3 = param_2[5];
  puVar5[4] = param_2[4];
  puVar5[5] = uVar3;
  return uVar6 & 0xffffffff;
}



// FUNCTION 141d17ff0 FUN_141d17ff0 body=1843 status=ok
// SIG undefined FUN_141d17ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d17ff0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_4238 [32];
  double local_4218;
  double local_4210;
  double local_4208;
  double local_4200;
  double local_41f8;
  double local_41f0;
  undefined8 local_41e8;
  int iStack_41e0;
  undefined4 uStack_41dc;
  undefined8 local_41d8;
  float fStack_41d0;
  undefined4 uStack_41cc;
  float local_41c8;
  float fStack_41c4;
  float fStack_41c0;
  undefined4 uStack_41bc;
  undefined4 local_41a8;
  undefined4 uStack_41a4;
  undefined4 uStack_41a0;
  undefined4 uStack_419c;
  longlong *local_4198;
  undefined8 uStack_4190;
  undefined8 local_4188;
  undefined8 uStack_4180;
  undefined8 local_4178;
  undefined8 uStack_4170;
  undefined8 local_4168;
  undefined8 uStack_4160;
  undefined1 local_4158 [64];
  undefined1 *local_4118;
  undefined8 local_4108;
  undefined1 local_40f8 [16384];
  undefined1 *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_4238;
  local_4188 = *param_4;
  uStack_4180 = param_4[1];
  plVar20 = (longlong *)0x0;
  fVar1 = *(float *)(param_2 + 2);
  fVar2 = *(float *)((longlong)param_2 + 0x14);
  local_41d8 = param_2[2];
  fVar3 = *(float *)(param_2 + 3);
  fVar4 = *(float *)((longlong)param_2 + 0x1c);
  fVar5 = *(float *)(param_2 + 4);
  fVar6 = *(float *)((longlong)param_2 + 0x24);
  local_4178 = param_4[2];
  uStack_4170 = param_4[3];
  local_4168 = param_4[4];
  uStack_4160 = param_4[5];
  uStack_41bc = 0;
  uStack_41cc = 0;
  local_4118 = (undefined1 *)0x0;
  local_4108 = 0;
  local_41e8 = param_2;
  fStack_41d0 = fVar3;
  local_41c8 = fVar4;
  fStack_41c4 = fVar5;
  fStack_41c0 = fVar6;
  local_4198 = param_3;
  if (param_3 != (longlong *)0x0) {
    do {
      plVar18 = local_4198;
      uVar21 = *(uint *)(local_4198 + 0x80b);
      uVar12 = (uVar21 + 1 ^ uVar21) & 0x7fffffff ^ uVar21;
      *(uint *)(local_4198 + 0x80b) = uVar12;
      if ((int)uVar21 < 0) {
        iVar13 = (int)local_4198[0x801];
        if ((iVar13 + 1 < 0x101) ||
           ((float)local_4178 < *(float *)(param_1 + 0x4090) ||
            (float)local_4178 == *(float *)(param_1 + 0x4090))) {
LAB_141d185a4:
          *(int *)(local_4198 + 0x801) = iVar13 + 1;
          if (*(int *)((longlong)local_4198 + 0x400c) < iVar13 + 1) {
            TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeGrow
                      (local_4198,iVar13);
          }
          plVar20 = (longlong *)plVar18[0x800];
          if ((longlong *)plVar18[0x800] == (longlong *)0x0) {
            plVar20 = plVar18;
          }
          plVar20 = plVar20 + (longlong)iVar13 * 8;
          if (plVar20 != (longlong *)0x0) {
            lVar22 = local_41e8[1];
            *plVar20 = *local_41e8;
            plVar20[1] = lVar22;
            lVar22 = local_41e8[3];
            plVar20[2] = local_41e8[2];
            plVar20[3] = lVar22;
            lVar22 = local_41e8[5];
            plVar20[4] = local_41e8[4];
            plVar20[5] = lVar22;
            lVar22 = local_41e8[7];
            plVar20[6] = local_41e8[6];
            plVar20[7] = lVar22;
          }
          *(longlong *)(param_1 + 0x4098) = (longlong)(*(int *)(param_1 + 0x4098) + 0x40);
          iStack_41e0 = (int)plVar18[0x801] + -1;
          lVar22 = *local_41e8;
          local_41e8._0_4_ = SUB84(plVar18,0);
          local_41e8._4_4_ = (undefined4)((ulonglong)plVar18 >> 0x20);
          *(undefined4 *)(lVar22 + 0x40) = (undefined4)local_41e8;
          *(undefined4 *)(lVar22 + 0x44) = local_41e8._4_4_;
          *(int *)(lVar22 + 0x48) = iStack_41e0;
          *(undefined4 *)(lVar22 + 0x4c) = uStack_41dc;
          local_41e8 = plVar18;
        }
        else {
          local_f8 = (undefined1 *)0x0;
          local_f0 = 0;
          Swap<TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>_>
                    (local_40f8,local_4198);
          *(longlong *)(param_1 + 0x4098) =
               (longlong)(*(int *)(param_1 + 0x4098) + (int)local_f0 * -0x40);
          *(undefined4 *)(plVar18 + 0x80b) = 0;
          while ((iVar13 = (int)plVar20, -1 < iVar13 && (iVar13 < (int)local_f0))) {
            puVar19 = local_40f8;
            if (local_f8 != (undefined1 *)0x0) {
              puVar19 = local_f8;
            }
            FUN_141d17ff0(param_1,puVar19 + (longlong)iVar13 * 0x40,plVar18,&local_4188);
            plVar20 = (longlong *)(ulonglong)(iVar13 + 1);
          }
          FUN_141d17ff0(param_1,local_41e8,plVar18,&local_4188);
          if (local_f8 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        if (local_4118 == (undefined1 *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
      auVar25._0_4_ = (local_4168._4_4_ + (float)local_4188) - fVar1;
      auVar25._4_4_ = (local_4168._4_4_ + local_4188._4_4_) - fVar2;
      auVar25._8_4_ = (local_4168._4_4_ + (float)uStack_4180) - fVar3;
      auVar25._12_4_ = (local_4168._4_4_ + uStack_4180._4_4_) - 0.0;
      auVar26._4_4_ = fVar2 - (local_4188._4_4_ - local_4168._4_4_);
      auVar26._0_4_ = fVar1 - ((float)local_4188 - local_4168._4_4_);
      auVar26._8_4_ = fVar3 - ((float)uStack_4180 - local_4168._4_4_);
      auVar26._12_4_ = 0.0 - (uStack_4180._4_4_ - local_4168._4_4_);
      auVar26 = minps(auVar25,auVar26);
      auVar7._4_4_ = -(uint)((float)local_4168 < auVar26._4_4_ + fVar5);
      auVar7._0_4_ = -(uint)((float)local_4168 < auVar26._0_4_ + fVar4);
      auVar7._8_4_ = -(uint)((float)local_4168 < auVar26._8_4_ + fVar6);
      auVar7._12_4_ = -(uint)((float)local_4168 < auVar26._12_4_ + 0.0);
      iVar13 = movmskps(uVar12,auVar7);
      if (iVar13 == 0) {
        auVar8._4_4_ = -(uint)((float)uStack_4180 < fVar3);
        auVar8._0_4_ = -(uint)((float)uStack_4180 < fVar3);
        auVar8._8_4_ = -(uint)((float)uStack_4180 < fVar3);
        auVar8._12_4_ = -(uint)((float)uStack_4180 < fVar3);
        iVar13 = movmskps(0,auVar8);
        auVar9._4_4_ = -(uint)(local_4188._4_4_ < fVar2);
        auVar9._0_4_ = -(uint)(local_4188._4_4_ < fVar2);
        auVar9._8_4_ = -(uint)(local_4188._4_4_ < fVar2);
        auVar9._12_4_ = -(uint)(local_4188._4_4_ < fVar2);
        iVar15 = movmskps(iVar13,auVar9);
        auVar10._4_4_ = -(uint)((float)local_4188 < fVar1);
        auVar10._0_4_ = -(uint)((float)local_4188 < fVar1);
        auVar10._8_4_ = -(uint)((float)local_4188 < fVar1);
        auVar10._12_4_ = -(uint)((float)local_4188 < fVar1);
        iVar14 = movmskps(iVar15,auVar10);
        uVar21 = ((uint)(iVar13 != 0) * 2 | (uint)(iVar15 != 0)) * 2 | (uint)(iVar14 != 0);
      }
      else {
        uVar21 = 8;
      }
      if ((uVar21 & 8) != 0) {
        iVar13 = (int)local_4198[0x801];
        goto LAB_141d185a4;
      }
      uVar23 = (ulonglong)(uVar21 & 7);
      if (local_4198[uVar23 + 0x803] == 0) {
        plVar16 = (longlong *)operator_new(0x4060);
        plVar17 = plVar20;
        if (plVar16 != (longlong *)0x0) {
          plVar16[0x800] = 0;
          uVar12 = 0;
          plVar16[0x801] = 0;
          plVar16[0x802] = (longlong)plVar18;
          *(undefined4 *)(plVar16 + 0x80b) = 0x80000000;
          do {
            plVar16[(ulonglong)(uVar12 & 7) + 0x803] = 0;
            if (((byte)uVar12 & 7) < 7) {
              uVar12 = uVar12 ^ (uVar12 + 1 ^ uVar12) & 7;
            }
            else {
              uVar12 = uVar12 | 8;
            }
            plVar17 = plVar16;
          } while (uVar12 >> 3 == 0);
        }
        plVar18[uVar23 + 0x803] = (longlong)plVar17;
        *(longlong *)(param_1 + 0x4098) = (longlong)(*(int *)(param_1 + 0x4098) + 0x4060);
      }
      uVar11 = local_4108;
      lVar22 = (longlong)(int)local_4108;
      iVar13 = (int)local_4108 + 1;
      local_4108 = CONCAT44(local_4108._4_4_,iVar13);
      if (local_4108._4_4_ < iVar13) {
        FUN_1405a82e0(local_4158,uVar11 & 0xffffffff);
      }
      puVar19 = local_4158;
      if (local_4118 != (undefined1 *)0x0) {
        puVar19 = local_4118;
      }
      plVar17 = (longlong *)(puVar19 + lVar22 * 0x40);
      plVar18 = plVar20;
      if (plVar17 != (longlong *)0x0) {
        plVar17[2] = 0;
        *(undefined4 *)(plVar17 + 3) = 0;
        *(undefined8 *)((longlong)plVar17 + 0x1c) = 0x3f800000;
        *(undefined8 *)((longlong)plVar17 + 0x24) = 0;
        *(undefined4 *)((longlong)plVar17 + 0x2c) = 0x3f800000;
        *plVar17 = 0;
        plVar18 = plVar17;
      }
      *plVar18 = local_4198[uVar23 + 0x803];
      *(float *)(plVar18 + 2) =
           local_4168._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar21 & 1) * 4) +
           (float)local_4188;
      *(float *)((longlong)plVar18 + 0x14) =
           local_4168._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)((uVar21 & 2) >> 1) * 4) +
           local_4188._4_4_;
      fVar24 = *(float *)(&DAT_146534f00 + (ulonglong)((uVar21 & 4) >> 2) * 4);
      *(undefined4 *)((longlong)plVar18 + 0x1c) = 0;
      *(float *)(plVar18 + 3) = local_4168._4_4_ * fVar24 + (float)uStack_4180;
      *(float *)(plVar18 + 4) = (float)local_4168;
      *(float *)((longlong)plVar18 + 0x24) = (float)local_4168;
      *(float *)(plVar18 + 5) = (float)local_4168;
      *(undefined4 *)((longlong)plVar18 + 0x2c) = 0;
      fVar24 = (float)local_4168 * 0.5 * 1.0625;
      *(float *)(plVar18 + 6) = fVar24;
      *(float *)((longlong)plVar18 + 0x34) = (float)local_4168 - fVar24;
      if ((int)local_4108 == 0) {
        local_41d8 = 0;
        uStack_4190 = CONCAT44(uStack_41cc,fStack_41d0);
        local_4198 = (longlong *)0x0;
        local_4168 = CONCAT44(uStack_41a4,local_41a8);
        uStack_4160 = CONCAT44(uStack_419c,uStack_41a0);
        local_4188 = 0;
        uStack_4180 = 0x3f80000000000000;
        local_4178 = 0;
        uStack_4170 = 0x3f80000000000000;
      }
      else {
        iVar13 = (int)local_4108 + -1;
        puVar19 = local_4158;
        if (local_4118 != (undefined1 *)0x0) {
          puVar19 = local_4118;
        }
        lVar22 = (longlong)iVar13 * 0x40;
        local_4198 = *(longlong **)(puVar19 + lVar22);
        uStack_4190 = *(undefined8 *)((longlong)(puVar19 + lVar22) + 8);
        local_4188 = *(undefined8 *)(puVar19 + lVar22 + 0x10);
        uStack_4180 = *(undefined8 *)((longlong)(puVar19 + lVar22 + 0x10) + 8);
        local_4178 = *(undefined8 *)(puVar19 + lVar22 + 0x20);
        uStack_4170 = *(undefined8 *)((longlong)(puVar19 + lVar22 + 0x20) + 8);
        local_4168 = *(undefined8 *)(puVar19 + lVar22 + 0x30);
        uStack_4160 = *(undefined8 *)((longlong)(puVar19 + lVar22 + 0x30) + 8);
        iVar15 = ((int)local_4108 - iVar13) + -1;
        if (iVar15 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar19 + (longlong)iVar13 * 0x40,puVar19 + (longlong)(int)local_4108 * 0x40,
                     (longlong)iVar15 << 6);
        }
        local_4108 = CONCAT44(local_4108._4_4_,(int)local_4108 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<1,FDefaultAllocator>_>
        ::ResizeShrink(local_4158);
      }
    } while (local_4198 != (longlong *)0x0);
    if (local_4118 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  local_4218 = (double)fVar2;
  local_4210 = (double)fVar3;
  local_4208 = (double)fVar4;
  local_4200 = (double)fVar5;
  local_41f8 = (double)fVar6;
  LowLevelFatalErrorHandler
            ("Unknown",0xc1,
             L"Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!",
             (double)fVar1);
  local_4218 = (double)fVar1;
  local_4210 = (double)fVar2;
  local_4208 = (double)fVar3;
  local_4200 = (double)fVar4;
  local_41f8 = (double)fVar5;
  local_41f0 = (double)fVar6;
  FDebug::AssertFailed
            (&DAT_144e34bc2,"Unknown",0xc1,
             L"Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!")
  ;
  return;
}



// FUNCTION 141d18730 FUN_141d18730 body=769 status=ok
// SIG undefined FUN_141d18730(void)

void FUN_141d18730(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 local_168 [160];
  undefined1 local_c8 [160];
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    puVar7 = (undefined8 *)FUN_141d59380(local_168,param_2);
    local_210 = *puVar7;
    uStack_208 = puVar7[1];
    local_200 = puVar7[2];
    uStack_1f8 = puVar7[3];
    local_1f0 = puVar7[4];
    uStack_1e8 = puVar7[5];
    local_1e0 = puVar7[6];
    uStack_1d8 = puVar7[7];
    local_1d0 = puVar7[8];
    uStack_1c8 = puVar7[9];
    local_1c0 = puVar7[10];
    uStack_1b8 = puVar7[0xb];
    local_1b0 = puVar7[0xc];
    uStack_1a8 = puVar7[0xd];
    local_190 = *(undefined4 *)(puVar7 + 0x10);
    uStack_18c = *(undefined4 *)((longlong)puVar7 + 0x84);
    uStack_188 = *(undefined4 *)(puVar7 + 0x11);
    uStack_184 = *(undefined4 *)((longlong)puVar7 + 0x8c);
    local_1a0 = puVar7[0xe];
    uStack_198 = puVar7[0xf];
    local_180 = *(undefined4 *)(puVar7 + 0x12);
    uStack_17c = *(undefined4 *)((longlong)puVar7 + 0x94);
    uStack_178 = *(undefined4 *)(puVar7 + 0x13);
    uStack_174 = *(undefined4 *)((longlong)puVar7 + 0x9c);
    local_218 = param_1;
    FUN_141d29d40(&local_218,2,local_res18);
    return;
  }
  pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar9 = TlsGetValue(*pDVar8);
  plVar10 = (longlong *)0x0;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      *(undefined4 *)(plVar9 + 2) = 0;
      plVar10 = plVar9;
    }
    TlsSetValue(*pDVar8,plVar10);
    plVar9 = plVar10;
  }
  plVar10 = (longlong *)plVar9[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar9;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
      plVar9[1] = (longlong)plVar10;
      if (plVar10 == (longlong *)0x0) {
        puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar9[1] = (longlong)puVar7;
        lVar12 = 0x1f;
        do {
          puVar2 = puVar7 + 0x20;
          *puVar7 = puVar2;
          lVar12 = lVar12 + -1;
          puVar7 = puVar2;
        } while (lVar12 != 0);
        *puVar2 = 0;
        plVar10 = (longlong *)plVar9[1];
      }
      iVar11 = 0x20;
      *(undefined4 *)(plVar9 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar9[1] = (longlong)plVar10;
      *(undefined4 *)(plVar9 + 2) = 0x20;
      *plVar9 = 0;
    }
  }
  else {
    iVar11 = (int)plVar9[2];
  }
  plVar9[1] = *plVar10;
  *(int *)(plVar9 + 2) = iVar11 + -1;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  uVar13 = 0;
  uVar14 = 0;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *plVar10 = (longlong)&PTR__scalar_deleting_destructor__144e48770;
  *(undefined1 *)(plVar10 + 0x17) = 0;
  plVar10[0x18] = 0;
  plVar9 = (longlong *)FUN_141d59380(local_c8,param_2);
  plVar10[2] = param_1;
  lVar12 = plVar9[1];
  plVar10[3] = *plVar9;
  plVar10[4] = lVar12;
  lVar12 = plVar9[3];
  plVar10[5] = plVar9[2];
  plVar10[6] = lVar12;
  lVar12 = plVar9[5];
  plVar10[7] = plVar9[4];
  plVar10[8] = lVar12;
  lVar12 = plVar9[7];
  plVar10[9] = plVar9[6];
  plVar10[10] = lVar12;
  lVar12 = plVar9[9];
  plVar10[0xb] = plVar9[8];
  plVar10[0xc] = lVar12;
  lVar12 = plVar9[0xb];
  plVar10[0xd] = plVar9[10];
  plVar10[0xe] = lVar12;
  lVar12 = plVar9[0xd];
  plVar10[0xf] = plVar9[0xc];
  plVar10[0x10] = lVar12;
  lVar12 = plVar9[0xf];
  plVar10[0x11] = plVar9[0xe];
  plVar10[0x12] = lVar12;
  uVar3 = *(undefined4 *)((longlong)plVar9 + 0x84);
  lVar12 = plVar9[0x11];
  uVar4 = *(undefined4 *)((longlong)plVar9 + 0x8c);
  *(int *)(plVar10 + 0x13) = (int)plVar9[0x10];
  *(undefined4 *)((longlong)plVar10 + 0x9c) = uVar3;
  *(int *)(plVar10 + 0x14) = (int)lVar12;
  *(undefined4 *)((longlong)plVar10 + 0xa4) = uVar4;
  uVar3 = *(undefined4 *)((longlong)plVar9 + 0x94);
  lVar12 = plVar9[0x13];
  uVar4 = *(undefined4 *)((longlong)plVar9 + 0x9c);
  *(int *)(plVar10 + 0x15) = (int)plVar9[0x12];
  *(undefined4 *)((longlong)plVar10 + 0xac) = uVar3;
  *(int *)(plVar10 + 0x16) = (int)lVar12;
  *(undefined4 *)((longlong)plVar10 + 0xb4) = uVar4;
  lVar12 = plVar10[0x18];
  piVar1 = (int *)(lVar12 + 0x48);
  if (lVar12 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar12;
  FUN_141d4e7b0(plVar10,0,0xff,1,uVar13,uVar14);
  if (lVar12 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 141d18a40 FUN_141d18a40 body=870 status=ok
// SIG undefined FUN_141d18a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d18a40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  DWORD DVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  DWORD *pDVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_108 [32];
  LARGE_INTEGER local_e8;
  longlong local_e0;
  LARGE_INTEGER local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  float local_a8;
  uint uStack_a4;
  float fStack_a0;
  uint uStack_9c;
  float local_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar10 = (**(code **)(*param_2 + 0x5b0))(param_2);
  if (lVar10 != 0) {
    param_2[0x75] = lVar10;
    fVar3 = *(float *)(param_2 + 0x42);
    fVar4 = *(float *)((longlong)param_2 + 0x214);
    fVar5 = *(float *)(param_2 + 0x43);
    fVar6 = *(float *)((longlong)param_2 + 0x21c);
    fVar18 = fVar4 + fVar4;
    fVar19 = fVar5 + fVar5;
    fVar20 = fVar3 * (fVar3 + fVar3);
    fStack_94 = fVar6 * (fVar3 + fVar3);
    fStack_b4 = fVar6 * fVar19 + fVar3 * fVar18;
    fStack_a0 = fStack_94 + fVar4 * fVar19;
    local_98 = fVar6 * fVar18 + fVar3 * fVar19;
    local_a8 = fVar3 * fVar18 - fVar6 * fVar19;
    fStack_94 = fVar4 * fVar19 - fStack_94;
    fStack_b0 = fVar3 * fVar19 - fVar6 * fVar18;
    local_b8 = (uint)(_DAT_146a82650 - (fVar5 * fVar19 + fVar4 * fVar18)) & _DAT_146a82660;
    uStack_a4 = (uint)(fRam0000000146a82654 - (fVar5 * fVar19 + fVar20)) & uRam0000000146a82664;
    uStack_90 = (uint)(fRam0000000146a82658 - (fVar4 * fVar18 + fVar20)) & uRam0000000146a82668;
    uStack_ac = (uint)(fRam0000000146a8265c - (fVar20 + fVar20)) & uRam0000000146a8266c;
    local_88 = (undefined4)param_2[0x44];
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x224);
    uStack_80 = (undefined4)param_2[0x45];
    fStack_7c = fRam0000000146a8265c;
    uStack_9c = uStack_ac;
    uStack_8c = uStack_ac;
    uVar11 = (**(code **)(*param_2 + 0x568))(param_2,local_78);
    FUN_142378960(lVar10,&local_b8,uVar11);
    lVar12 = operator_new(0xb8);
    plVar16 = (longlong *)0x0;
    plVar13 = plVar16;
    if (lVar12 != 0) {
      plVar13 = (longlong *)FUN_141b8afe0(lVar12,lVar10,0);
    }
    *(longlong **)(lVar10 + 0x20) = plVar13;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      lVar10 = *(longlong *)(lVar10 + 0x20);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_d8);
      FUN_141b9ed00(local_68,lVar10);
      uVar9 = FUN_141d17f00(param_1 + 0x10f8,local_68);
      *(undefined4 *)(lVar10 + 0x58) = uVar9;
      QueryPerformanceCounter(&local_e8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_e8.s.LowPart - local_d8._0_4_);
    }
    else {
      pDVar14 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar13 = TlsGetValue(*pDVar14);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)operator_new(0x18);
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = 0;
          plVar13[1] = 0;
          *(undefined4 *)(plVar13 + 2) = 0;
          plVar16 = plVar13;
        }
        TlsSetValue(*pDVar14,plVar16);
        plVar13 = plVar16;
      }
      plVar16 = (longlong *)plVar13[1];
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)*plVar13;
        if (plVar16 == (longlong *)0x0) {
          lVar12 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar14 + 2);
          plVar13[1] = lVar12;
          if (lVar12 == 0) {
            puVar15 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar13[1] = (longlong)puVar15;
            lVar12 = 0x1f;
            do {
              puVar2 = puVar15 + 0x20;
              *puVar15 = puVar2;
              lVar12 = lVar12 + -1;
              puVar15 = puVar2;
            } while (lVar12 != 0);
            *puVar2 = 0;
          }
          plVar16 = (longlong *)plVar13[1];
          iVar17 = 0x20;
          *(undefined4 *)(plVar13 + 2) = 0x20;
        }
        else {
          iVar17 = 0x20;
          plVar13[1] = (longlong)plVar16;
          *(undefined4 *)(plVar13 + 2) = 0x20;
          *plVar13 = 0;
        }
      }
      else {
        iVar17 = (int)plVar13[2];
      }
      plVar13[1] = *plVar16;
      *(int *)(plVar13 + 2) = iVar17 + -1;
      *plVar16 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar16 + 1) = 0xff;
      local_d0 = 0;
      local_c8 = 0;
      *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
      *plVar16 = (longlong)&PTR_FUN_144e48700;
      *(undefined1 *)(plVar16 + 4) = 0;
      plVar16[5] = 0;
      plVar16[3] = *(longlong *)(lVar10 + 0x20);
      plVar16[2] = param_1;
      lVar10 = plVar16[5];
      piVar1 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_e0 = lVar10;
      FUN_1409421c0(plVar16,0,0xff,1);
      if (lVar10 != 0) {
        LOCK();
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          FGraphEvent::Recycle(local_e0);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d18db0 FUN_141d18db0 body=831 status=ok
// SIG undefined FUN_141d18db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d18db0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  DWORD *pDVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  undefined1 local_88 [16];
  uint local_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float local_68;
  uint uStack_64;
  float fStack_60;
  uint uStack_5c;
  float local_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  
  lVar9 = (**(code **)(*param_2 + 0x5b0))(param_2);
  if (lVar9 != 0) {
    param_2[0x75] = lVar9;
    fVar3 = *(float *)(param_2 + 0x42);
    fVar4 = *(float *)((longlong)param_2 + 0x214);
    fVar5 = *(float *)(param_2 + 0x43);
    fVar6 = *(float *)((longlong)param_2 + 0x21c);
    fVar17 = fVar4 + fVar4;
    fVar18 = fVar5 + fVar5;
    fVar19 = fVar3 * (fVar3 + fVar3);
    fStack_54 = fVar6 * (fVar3 + fVar3);
    fStack_74 = fVar6 * fVar18 + fVar3 * fVar17;
    fStack_60 = fStack_54 + fVar4 * fVar18;
    local_58 = fVar6 * fVar17 + fVar3 * fVar18;
    local_68 = fVar3 * fVar17 - fVar6 * fVar18;
    fStack_54 = fVar4 * fVar18 - fStack_54;
    fStack_70 = fVar3 * fVar18 - fVar6 * fVar17;
    local_78 = (uint)(_DAT_146a82650 - (fVar5 * fVar18 + fVar4 * fVar17)) & _DAT_146a82660;
    uStack_64 = (uint)(fRam0000000146a82654 - (fVar5 * fVar18 + fVar19)) & uRam0000000146a82664;
    uStack_50 = (uint)(fRam0000000146a82658 - (fVar4 * fVar17 + fVar19)) & uRam0000000146a82668;
    uStack_6c = (uint)(fRam0000000146a8265c - (fVar19 + fVar19)) & uRam0000000146a8266c;
    local_48 = (undefined4)param_2[0x44];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x224);
    uStack_40 = (undefined4)param_2[0x45];
    fStack_3c = fRam0000000146a8265c;
    uStack_5c = uStack_6c;
    uStack_4c = uStack_6c;
    uVar10 = (**(code **)(*param_2 + 0x568))(param_2,local_88);
    FUN_142378960(lVar9,&local_78,uVar10);
    lVar11 = operator_new(0xb8);
    plVar15 = (longlong *)0x0;
    plVar12 = plVar15;
    if (lVar11 != 0) {
      plVar12 = (longlong *)FUN_141b8afe0(lVar11,lVar9,1);
    }
    *(longlong **)(lVar9 + 0x20) = plVar12;
    *(int *)(param_1 + 0x6000) = *(int *)(param_1 + 0x6000) + 1;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      uVar10 = *(undefined8 *)(lVar9 + 0x20);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      FUN_141d190f0(param_1,uVar10);
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    }
    else {
      pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar12 = TlsGetValue(*pDVar13);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)operator_new(0x18);
        if (plVar12 != (longlong *)0x0) {
          *plVar12 = 0;
          plVar12[1] = 0;
          *(undefined4 *)(plVar12 + 2) = 0;
          plVar15 = plVar12;
        }
        TlsSetValue(*pDVar13,plVar15);
        plVar12 = plVar15;
      }
      plVar15 = (longlong *)plVar12[1];
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)*plVar12;
        if (plVar15 == (longlong *)0x0) {
          lVar11 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
          plVar12[1] = lVar11;
          if (lVar11 == 0) {
            puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar12[1] = (longlong)puVar14;
            lVar11 = 0x1f;
            do {
              puVar2 = puVar14 + 0x20;
              *puVar14 = puVar2;
              lVar11 = lVar11 + -1;
              puVar14 = puVar2;
            } while (lVar11 != 0);
            *puVar2 = 0;
          }
          plVar15 = (longlong *)plVar12[1];
          iVar16 = 0x20;
          *(undefined4 *)(plVar12 + 2) = 0x20;
        }
        else {
          iVar16 = 0x20;
          plVar12[1] = (longlong)plVar15;
          *(undefined4 *)(plVar12 + 2) = 0x20;
          *plVar12 = 0;
        }
      }
      else {
        iVar16 = (int)plVar12[2];
      }
      plVar12[1] = *plVar15;
      *(int *)(plVar12 + 2) = iVar16 + -1;
      *plVar15 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar15 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
      *plVar15 = (longlong)&PTR_FUN_144e486f0;
      *(undefined1 *)(plVar15 + 4) = 0;
      plVar15[5] = 0;
      plVar15[3] = *(longlong *)(lVar9 + 0x20);
      plVar15[2] = param_1;
      lVar9 = plVar15[5];
      piVar1 = (int *)(lVar9 + 0x48);
      if (lVar9 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar9;
      FUN_1409421c0(plVar15,0,0xff,1,0,0);
      if (lVar9 != 0) {
        LOCK();
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d190f0 FUN_141d190f0 body=1195 status=ok
// SIG undefined FUN_141d190f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d190f0(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [12];
  longlong *local_78;
  undefined1 local_70 [4];
  uint local_6c;
  longlong local_68;
  uint local_60;
  int local_5c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_141b9ed00(&local_78);
  uVar6 = FUN_141d17f00(param_1 + 0x1070,&local_78);
  *(undefined4 *)(param_2 + 0x58) = uVar6;
  cVar5 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x78))
                    (*(longlong **)(param_2 + 0x30),local_84,local_88);
  if ((cVar5 != '\0') && (*(char *)(*(longlong *)(param_2 + 0x30) + 0x188) == '\0')) {
    iVar8 = *(int *)(param_1 + 0x10b0);
    *(int *)(param_1 + 0x10b0) = iVar8 + 1;
    if (*(int *)(param_1 + 0x10b4) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10a8,iVar8);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x10a8) + (longlong)iVar8 * 8) = param_2;
  }
  if ((*(byte *)(param_2 + 0x90) & 8) != 0) {
    iVar8 = *(int *)(param_1 + 0x10c0);
    *(int *)(param_1 + 0x10c0) = iVar8 + 1;
    if (*(int *)(param_1 + 0x10c4) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10b8,iVar8);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x10b8) + (longlong)iVar8 * 8) = param_2;
  }
  plVar7 = *(longlong **)(param_2 + 0x30);
  if ((*(uint *)(plVar7 + 0x30) & 0x10000) != 0) {
    iVar8 = *(int *)(param_1 + 0x10d0);
    *(int *)(param_1 + 0x10d0) = iVar8 + 1;
    if (*(int *)(param_1 + 0x10d4) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10c8,iVar8);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x10c8) + (longlong)iVar8 * 8) = param_2;
    plVar7 = *(longlong **)(param_2 + 0x30);
  }
  if ((char)plVar7[0x31] == '\0') {
    iVar8 = *(int *)(param_1 + 0x10e0);
    *(int *)(param_1 + 0x10e0) = iVar8 + 1;
    if (*(int *)(param_1 + 0x10e4) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10d8,iVar8);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x10d8) + (longlong)iVar8 * 8) = param_2;
    plVar7 = *(longlong **)(param_2 + 0x30);
  }
  if (((((char)plVar7[0x31] == '\x01') || ((char)plVar7[0x31] == '\x02')) &&
      ((*(uint *)(plVar7 + 0x30) >> 2 & 1) == 0)) && ((*(uint *)(plVar7 + 0x30) & 0x210) == 0x210))
  {
    iVar8 = *(int *)(param_1 + 0x10f0);
    *(int *)(param_1 + 0x10f0) = iVar8 + 1;
    if (*(int *)(param_1 + 0x10f4) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10e8,iVar8);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x10e8) + (longlong)iVar8 * 8) = param_2;
    plVar7 = *(longlong **)(param_2 + 0x30);
  }
  if (((char)plVar7[0x31] == '\0') && ((*(uint *)(plVar7 + 0x30) >> 2 & 1) == 0)) {
    if (*(longlong *)(param_1 + 0x1168) == 0) {
      *(longlong *)(param_1 + 0x1168) = param_2;
      plVar7 = *(longlong **)(param_2 + 0x30);
    }
    if (*(int *)(param_1 + 8) < 2) {
      cVar5 = (**(code **)(*plVar7 + 0xa0))();
      plVar7 = *(longlong **)(param_2 + 0x30);
      bVar1 = *(byte *)((longlong)plVar7 + 0x189);
      if (bVar1 == 0) {
        iVar8 = -1;
      }
      else if (bVar1 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0;
        if (bVar1 != 0) {
          for (; (bVar1 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
          }
        }
      }
      if ((-1 < iVar8) && (*(longlong *)(param_1 + 0x1170 + (longlong)iVar8 * 8) == 0)) {
        *(longlong *)(param_1 + 0x1170 + (longlong)iVar8 * 8) = param_2;
        plVar7 = *(longlong **)(param_2 + 0x30);
        if (((*(uint *)(plVar7 + 0x30) >> 3 & 1) == 0) || (cVar5 != '\0')) {
          *(undefined1 *)(param_1 + 0x114c) = 1;
          plVar7 = *(longlong **)(param_2 + 0x30);
        }
      }
    }
  }
  if (((DAT_146ac3ac0 != 0) && (2 < *(int *)(param_1 + 8))) &&
     ((*(uint *)(plVar7 + 0x30) >> 4 & 1) != 0)) {
    if ((*(uint *)(plVar7 + 0x30) >> 3 & 1) == 0) {
      FUN_141d1eef0(param_1,param_2);
    }
    else {
      TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
                (&local_78,param_1 + 0x1070);
      if (local_5c < *(int *)(local_68 + 0x18)) {
        do {
          lVar3 = *(longlong *)(*local_78 + 0x20 + (longlong)local_5c * 0x30);
          if (((lVar3 != param_2) &&
              (uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x30) + 0x180), (uVar2 >> 3 & 1) == 0)) &&
             ((uVar2 >> 4 & 1) != 0)) {
            *(undefined4 *)(lVar3 + 0x88) = 0xffffffff;
          }
          local_60 = local_60 & ~local_6c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_70);
        } while (local_5c < *(int *)(local_68 + 0x18));
      }
      TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
                (&local_78,param_1 + 0x1070);
      if (local_5c < *(int *)(local_68 + 0x18)) {
        do {
          lVar3 = *(longlong *)(*local_78 + 0x20 + (longlong)local_5c * 0x30);
          if (((lVar3 != param_2) &&
              (uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x30) + 0x180), (uVar2 >> 3 & 1) == 0)) &&
             ((uVar2 >> 4 & 1) != 0)) {
            FUN_141d1eef0(param_1);
          }
          local_60 = local_60 & ~local_6c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_70);
        } while (local_5c < *(int *)(local_68 + 0x18));
      }
    }
  }
  lVar3 = *(longlong *)(param_2 + 0x30);
  if (((*(char *)(lVar3 + 0x188) == '\0') && ((*(uint *)(lVar3 + 0x180) >> 0xd & 1) != 0)) &&
     ((*(longlong *)(param_1 + 0x1188) == 0 ||
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1188) + 0x30),
      *(float *)(lVar4 + 0x104) * 0.59 + *(float *)(lVar4 + 0x100) * 0.3 +
      *(float *)(lVar4 + 0x108) * 0.11 <
      *(float *)(lVar3 + 0x104) * 0.59 + *(float *)(lVar3 + 0x100) * 0.3 +
      *(float *)(lVar3 + 0x108) * 0.11)))) {
    *(longlong *)(param_1 + 0x1188) = param_2;
  }
  FUN_141b8e5f0(param_2);
  return;
}



// FUNCTION 141d195a0 FUN_141d195a0 body=620 status=ok
// SIG undefined FUN_141d195a0(void)

void FUN_141d195a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_40 [24];
  
  plVar3 = (longlong *)param_2[1];
  uVar11 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (DAT_146ac3ac6 != '\0') {
    cVar8 = IsInRenderingThread();
    if (cVar8 != '\0') {
      FBaseGraphTask::GetSmallTaskAllocator();
      iVar2 = *(int *)(param_1 + 0x13e0);
      *(int *)(param_1 + 0x13e0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x13e4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x13d8,iVar2);
      }
      puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x13d8));
      *puVar10 = uVar11;
      puVar10[1] = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      FUN_141b6e2d0(param_1 + 0x13e8,param_1,uVar11);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar3 + 1;
        lVar6 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
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
      goto LAB_141d197b8;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar8 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar9 = GetCurrentThreadId();
      if (DVar9 != DAT_1468c21c0) goto LAB_141d19747;
    }
    local_58 = param_1;
    local_50 = uVar11;
    local_48 = plVar3;
    uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_141d15df0(&local_58,uVar11);
    plVar3 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_48 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  else {
LAB_141d19747:
    plVar12 = (longlong *)FUN_141d27840(local_40,0,0xff);
    lVar6 = *plVar12;
    *(longlong *)(lVar6 + 0x10) = param_1;
    *(undefined8 *)(lVar6 + 0x18) = uVar11;
    *(longlong **)(lVar6 + 0x20) = plVar3;
    lVar6 = *plVar12;
    lVar7 = plVar12[2];
    lVar4 = plVar12[1];
    lVar5 = *(longlong *)(lVar6 + 0x30);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_14048a160(lVar6,lVar4,(int)lVar7,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
LAB_141d197b8:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar3 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
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
  return;
}



// FUNCTION 141d19810 FUN_141d19810 body=291 status=ok
// SIG undefined FUN_141d19810(void)

void FUN_141d19810(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_141d19875;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_141d198bb;
    }
LAB_141d19875:
    FBaseGraphTask::GetSmallTaskAllocator();
    iVar2 = *(int *)(param_1 + 0x15e8);
    *(int *)(param_1 + 0x15e8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x15ec) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x15e0,iVar2);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x15e0) + (longlong)iVar2 * 8) = param_2;
    return;
  }
LAB_141d198bb:
  plVar9 = (longlong *)FUN_141d27990(local_28,0,0xff);
  local_38 = (undefined4)param_1;
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_30 = (undefined4)param_2;
  uStack_2c = (undefined4)((ulonglong)param_2 >> 0x20);
  lVar3 = *plVar9;
  *(undefined4 *)(lVar3 + 0x10) = local_38;
  *(undefined4 *)(lVar3 + 0x14) = uStack_34;
  *(undefined4 *)(lVar3 + 0x18) = uStack_30;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_2c;
  lVar3 = *plVar9;
  lVar6 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 141d19940 FUN_141d19940 body=2090 status=ok
// SIG undefined FUN_141d19940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d19940(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 local_350;
  longlong *local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong *local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [96];
  
  lVar9 = (**(code **)(*param_1 + 0x208))();
  fVar14 = *(float *)(lVar9 + 0x790) - *(float *)(param_2 + 0x6d);
  if (((fVar14 < -0.0001) || (*(float *)(param_2 + 0x6d) < 0.0001)) || (0.0001 < fVar14)) {
    *(float *)(param_2 + 0x6d) = *(float *)(lVar9 + 0x790);
  }
  plVar10 = (longlong *)(**(code **)(*param_2 + 0x6e0))(param_2);
  param_2[200] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    lVar9 = operator_new(0x108);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_141d0f9f0(lVar9,param_2,param_1);
    }
    plVar10[0x28] = lVar9;
    (**(code **)(*param_2 + 0x6c0))(param_2,&local_f8);
    uVar16 = 0x3f800000;
    uVar15 = 0;
    local_378 = 0;
    local_370 = 0;
    uVar17 = 0;
    uVar18 = 0;
    lVar11 = FUN_14238b320(param_2);
    if (lVar11 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x168);
      if (lVar11 == 0) {
        local_270 = DAT_1468b5d98;
        puVar12 = &local_278;
        local_278 = _DAT_1468b5d90;
      }
      else {
        local_b8 = *(undefined4 *)(lVar11 + 0x220);
        uStack_b4 = *(undefined4 *)(lVar11 + 0x224);
        uStack_b0 = *(undefined4 *)(lVar11 + 0x228);
        uStack_ac = *(undefined4 *)(lVar11 + 0x22c);
        puVar12 = (undefined8 *)&local_358;
        local_358 = local_b8;
        local_350 = uStack_b0;
        uStack_354 = uStack_b4;
      }
      local_378 = *puVar12;
      local_370 = *(undefined4 *)(puVar12 + 1);
      local_368 = local_378;
      local_360 = local_370;
      if (lVar11 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined4 *)(lVar11 + 0x210);
        uVar17 = *(undefined4 *)(lVar11 + 0x214);
        uVar18 = *(undefined4 *)(lVar11 + 0x218);
        uVar16 = *(undefined4 *)(lVar11 + 0x21c);
        local_a8 = uVar15;
        uStack_a4 = uVar17;
        uStack_a0 = uVar18;
        uStack_9c = uVar16;
      }
    }
    local_1f0 = (undefined4)param_2[0x3d];
    local_248 = local_f8;
    uStack_240 = uStack_f0;
    local_228 = local_d8;
    uStack_220 = uStack_d0;
    local_208 = param_2[0x3a];
    lStack_200 = param_2[0x3b];
    local_238 = local_e8;
    uStack_230 = uStack_e0;
    local_1e4 = local_370;
    local_218 = local_c8;
    uStack_210 = uStack_c0;
    local_1f8 = param_2[0x3c];
    local_1ec = local_378;
    local_258 = plVar10;
    (**(code **)(*param_2 + 0x4a8))(param_2,&local_1e0,&DAT_1468b5b70);
    local_1b8 = uVar15;
    uStack_1b4 = uVar17;
    uStack_1b0 = uVar18;
    uStack_1ac = uVar16;
    iVar7 = _finite((double)*(float *)((longlong)param_2 + 0x1dc));
    if (((((iVar7 != 0) && (iVar7 = _finite((double)*(float *)(param_2 + 0x3c)), iVar7 != 0)) &&
         ((iVar7 = _finite((double)*(float *)((longlong)param_2 + 0x1e4)), iVar7 != 0 &&
          ((iVar7 = _finite((double)*(float *)(param_2 + 0x3a)), iVar7 != 0 &&
           (iVar7 = _finite((double)*(float *)((longlong)param_2 + 0x1d4)), iVar7 != 0)))))) &&
        (iVar7 = _finite((double)*(float *)(param_2 + 0x3b)), iVar7 != 0)) &&
       (iVar7 = _isnan((double)*(float *)(param_2 + 0x3d)), iVar7 == 0)) {
      _finite((double)*(float *)(param_2 + 0x3d));
    }
    uStack_290 = DAT_1468b5d98;
    local_298 = _DAT_1468b5d90;
    uStack_28c = 0x4a000000;
    uStack_288 = 0x4a000000;
    local_360 = 0x4a000000;
    uStack_284 = 0x4a000000;
    auVar3._8_4_ = DAT_1468b5d98;
    auVar3._0_8_ = _DAT_1468b5d90;
    auVar3._12_4_ = 0x4a000000;
    *(undefined1 (*) [16])(param_2 + 0xd8) = auVar3;
    local_280 = 0;
    param_2[0xda] = 0x4a0000004a000000;
    *(undefined4 *)(param_2 + 0xdb) = 0;
    uVar13 = (**(code **)(*param_1 + 0xe0))(param_1);
    FUN_142391930(uVar13);
    local_338 = local_248;
    uStack_330 = uStack_240;
    local_318 = local_228;
    uStack_310 = uStack_220;
    local_2f8 = local_208;
    lStack_2f0 = lStack_200;
    local_328 = local_238;
    uStack_320 = uStack_230;
    local_348 = local_258;
    local_2dc = local_1ec;
    local_2e0 = local_1f0;
    local_308 = local_218;
    uStack_300 = uStack_210;
    local_2d0 = local_1e0;
    uStack_2c8 = uStack_1d8;
    local_2d4 = local_1e4;
    local_2e8 = local_1f8;
    local_2a8 = local_1b8;
    uStack_2a4 = uStack_1b4;
    uStack_2a0 = uStack_1b0;
    uStack_29c = uStack_1ac;
    local_2c0 = local_1d0;
    local_2b8 = local_1c8;
    if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        local_198 = local_338;
        uStack_190 = uStack_330;
        local_178 = local_318;
        uStack_170 = uStack_310;
        local_158 = local_2f8;
        lStack_150 = lStack_2f0;
        local_188 = local_328;
        uStack_180 = uStack_320;
        local_1a8 = local_348;
        local_13c = local_2dc;
        local_140 = local_2e0;
        local_168 = local_308;
        uStack_160 = uStack_300;
        local_130 = local_2d0;
        uStack_128 = uStack_2c8;
        local_134 = local_2d4;
        local_148 = local_2e8;
        local_108 = local_2a8;
        uStack_104 = uStack_2a4;
        uStack_100 = uStack_2a0;
        uStack_fc = uStack_29c;
        local_120 = local_2c0;
        local_118 = local_2b8;
        FBaseGraphTask::GetSmallTaskAllocator();
        plVar10 = local_1a8;
        local_370 = local_134;
        local_378 = local_13c;
        FUN_14273d150(local_1a8,&local_198,&local_158,&local_130,&local_378,&local_108);
        (**(code **)(*plVar10 + 0xb0))(plVar10);
      }
      else {
        plVar10 = (longlong *)
                  TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddExponentialHeightFog'::`2'::FAddFogCommandName,<lambda_23dd2bba3cad69a0d8fd09c4f72e10da>_>_>
                  ::CreateTask(local_98,0,0xff);
        lVar11 = *plVar10;
        *(longlong **)(lVar11 + 0x10) = local_348;
        *(undefined8 *)(lVar11 + 0x20) = local_338;
        *(undefined8 *)(lVar11 + 0x28) = uStack_330;
        *(undefined8 *)(lVar11 + 0x30) = local_328;
        *(undefined8 *)(lVar11 + 0x38) = uStack_320;
        *(undefined8 *)(lVar11 + 0x40) = local_318;
        *(undefined8 *)(lVar11 + 0x48) = uStack_310;
        *(undefined8 *)(lVar11 + 0x50) = local_308;
        *(undefined8 *)(lVar11 + 0x58) = uStack_300;
        *(longlong *)(lVar11 + 0x60) = local_2f8;
        *(longlong *)(lVar11 + 0x68) = lStack_2f0;
        *(longlong *)(lVar11 + 0x70) = local_2e8;
        *(undefined4 *)(lVar11 + 0x78) = local_2e0;
        *(undefined8 *)(lVar11 + 0x7c) = local_2dc;
        *(undefined4 *)(lVar11 + 0x84) = local_2d4;
        *(undefined8 *)(lVar11 + 0x88) = local_2d0;
        *(undefined8 *)(lVar11 + 0x90) = uStack_2c8;
        *(undefined8 *)(lVar11 + 0x98) = local_2c0;
        *(undefined4 *)(lVar11 + 0xa0) = local_2b8;
        *(undefined4 *)(lVar11 + 0xb0) = local_2a8;
        *(undefined4 *)(lVar11 + 0xb4) = uStack_2a4;
        *(undefined4 *)(lVar11 + 0xb8) = uStack_2a0;
        *(undefined4 *)(lVar11 + 0xbc) = uStack_29c;
        lVar11 = *plVar10;
        lVar4 = plVar10[2];
        lVar2 = plVar10[1];
        lVar5 = *(longlong *)(lVar11 + 200);
        piVar1 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_141d4e2d0(lVar11,lVar2,(int)lVar4,1);
        if (lVar5 != 0) {
          LOCK();
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FGraphEvent::Recycle(lVar5);
          }
        }
      }
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      plVar10 = local_348;
      local_360 = local_2d4;
      local_368 = local_2dc;
      FUN_14273d150(local_348,&local_338,&local_2f8,&local_2d0,&local_368,&local_2a8);
      (**(code **)(*plVar10 + 0xb0))(plVar10);
    }
    LOCK();
    *(int *)((longlong)param_2 + 0x35c) = *(int *)((longlong)param_2 + 0x35c) + 1;
    UNLOCK();
    local_268 = param_1;
    uStack_260 = lVar9;
    if (((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) &&
       ((DAT_146ac3ac5 != '\0' ||
        (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))))) {
      plVar10 = (longlong *)FUN_141d276f0(&local_298,0,0xff);
      lVar9 = *plVar10;
      *(undefined4 *)(lVar9 + 0x10) = (undefined4)local_268;
      *(undefined4 *)(lVar9 + 0x14) = local_268._4_4_;
      *(undefined4 *)(lVar9 + 0x18) = (undefined4)uStack_260;
      *(undefined4 *)(lVar9 + 0x1c) = uStack_260._4_4_;
      lVar9 = *plVar10;
      lVar5 = plVar10[2];
      lVar11 = plVar10[1];
      lVar2 = *(longlong *)(lVar9 + 0x28);
      piVar1 = (int *)(lVar2 + 0x48);
      if (lVar2 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(lVar9,lVar11,(int)lVar5,1);
      if (lVar2 != 0) {
        LOCK();
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FGraphEvent::Recycle(lVar2);
        }
      }
    }
    else {
      uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141d1a170(param_1,uVar13,lVar9);
    }
  }
  return;
}



// FUNCTION 141d1a170 FUN_141d1a170 body=1403 status=ok
// SIG undefined FUN_141d1a170(void)

void FUN_141d1a170(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  
  plVar1 = (longlong *)(param_1 + 0xfe0);
  iVar16 = *(int *)(param_1 + 0xfe8);
  *(int *)(param_1 + 0xfe8) = iVar16 + 1;
  if (*(int *)(param_1 + 0xfec) < iVar16 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar16);
  }
  plVar2 = (longlong *)(param_1 + 0xff0);
  *(longlong *)(*plVar1 + (longlong)iVar16 * 8) = param_3;
  iVar16 = *(int *)(param_1 + 0xff8);
  *(int *)(param_1 + 0xff8) = iVar16 + 1;
  if (*(int *)(param_1 + 0xffc) < iVar16 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar16);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar16 * 8) = *(undefined8 *)(param_3 + 8);
  iVar16 = *(int *)(param_1 + 0x1008) + 1;
  *(int *)(param_1 + 0x1008) = iVar16;
  if (*(int *)(param_1 + 0x100c) < iVar16) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow();
  }
  plVar3 = (longlong *)(param_1 + 0x1010);
  iVar16 = *(int *)(param_1 + 0x1018) + 1;
  *(int *)(param_1 + 0x1018) = iVar16;
  if (*(int *)(param_1 + 0x101c) < iVar16) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3);
  }
  iVar16 = *(int *)(param_1 + 0x1028) + 1;
  *(int *)(param_1 + 0x1028) = iVar16;
  if (*(int *)(param_1 + 0x102c) < iVar16) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
  }
  iVar16 = *(int *)(param_1 + 0x1038) + 1;
  *(int *)(param_1 + 0x1038) = iVar16;
  if (*(int *)(param_1 + 0x103c) < iVar16) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
  }
  iVar16 = *(int *)(param_1 + 0x1058) + 1;
  *(int *)(param_1 + 0x1058) = iVar16;
  if (*(int *)(param_1 + 0x105c) < iVar16) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
  }
  iVar16 = *(int *)(param_1 + 0x1048) + 1;
  *(int *)(param_1 + 0x1048) = iVar16;
  if (*(int *)(param_1 + 0x104c) < iVar16) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow();
  }
  iVar7 = *(int *)(param_1 + 0xff8);
  iVar16 = iVar7 + -1;
  *(int *)(param_3 + 0xe8) = iVar16;
  lVar17 = (**(code **)(**(longlong **)(param_3 + 8) + 8))();
  iVar8 = *(int *)(param_1 + 0x1068);
  iVar24 = iVar8 + -1;
  if (-1 < iVar24) {
    lVar22 = (longlong)iVar24;
    plVar19 = (longlong *)(lVar22 * 0x10 + *(longlong *)(param_1 + 0x1060));
    do {
      if (*plVar19 == lVar17) goto LAB_141d1a355;
      iVar24 = iVar24 + -1;
      plVar19 = plVar19 + -2;
      lVar22 = lVar22 + -1;
    } while (-1 < lVar22);
  }
  plVar19 = (longlong *)(param_1 + 0x1060);
  if (iVar8 == 0) {
    uStack_60 = 0;
  }
  else {
    uStack_60 = (undefined4)*(undefined8 *)(*plVar19 + (longlong)iVar8 * 0x10 + -8);
  }
  iVar24 = *(int *)(param_1 + 0x1068);
  *(int *)(param_1 + 0x1068) = iVar24 + 1;
  if (*(int *)(param_1 + 0x106c) < iVar24 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar24);
  }
  plVar19 = (longlong *)(*plVar19 + (longlong)iVar24 * 0x10);
  *plVar19 = lVar17;
  plVar19[1] = CONCAT44(uStack_5c,uStack_60);
  iVar24 = iVar8;
LAB_141d1a355:
  if (iVar24 < *(int *)(param_1 + 0x1068)) {
    lVar22 = (longlong)iVar7 + -1;
    lVar17 = (longlong)iVar24 << 4;
    do {
      iVar24 = iVar24 + 1;
      lVar20 = *(longlong *)(param_1 + 0x1060) + lVar17;
      lVar17 = lVar17 + 0x10;
      iVar7 = *(int *)(lVar20 + 8);
      lVar23 = (longlong)iVar7;
      *(int *)(lVar20 + 8) = iVar7 + 1;
      if (iVar7 != iVar16) {
        *(int *)(*(longlong *)(*plVar1 + lVar23 * 8) + 0xe8) = iVar16;
        *(int *)(*(longlong *)(*plVar1 + lVar22 * 8) + 0xe8) = iVar7;
        lVar20 = *plVar1;
        uVar10 = *(undefined8 *)(lVar20 + lVar23 * 8);
        *(undefined8 *)(lVar20 + lVar23 * 8) = *(undefined8 *)(lVar20 + lVar22 * 8);
        *(undefined8 *)(*plVar1 + lVar22 * 8) = uVar10;
        lVar20 = *plVar2;
        uVar10 = *(undefined8 *)(lVar20 + lVar23 * 8);
        *(undefined8 *)(lVar20 + lVar23 * 8) = *(undefined8 *)(lVar20 + lVar22 * 8);
        *(undefined8 *)(*plVar2 + lVar22 * 8) = uVar10;
        lVar20 = *(longlong *)(param_1 + 0x1000);
        puVar4 = (undefined8 *)(lVar20 + lVar22 * 0x28);
        uVar11 = puVar4[1];
        puVar5 = (undefined8 *)(lVar20 + lVar23 * 0x28);
        uVar12 = *puVar5;
        uVar13 = puVar5[1];
        uVar10 = *(undefined8 *)(lVar20 + 0x20 + lVar23 * 0x28);
        puVar5 = (undefined8 *)(lVar20 + 0x10 + lVar23 * 0x28);
        uVar14 = *puVar5;
        uVar15 = puVar5[1];
        puVar5 = (undefined8 *)(lVar20 + lVar23 * 0x28);
        *puVar5 = *puVar4;
        puVar5[1] = uVar11;
        puVar4 = (undefined8 *)(lVar20 + 0x10 + lVar22 * 0x28);
        uVar11 = puVar4[1];
        puVar5 = (undefined8 *)(lVar20 + 0x10 + lVar23 * 0x28);
        *puVar5 = *puVar4;
        puVar5[1] = uVar11;
        *(undefined8 *)(lVar20 + 0x20 + lVar23 * 0x28) =
             *(undefined8 *)(lVar20 + 0x20 + lVar22 * 0x28);
        lVar20 = *(longlong *)(param_1 + 0x1000);
        puVar4 = (undefined8 *)(lVar20 + lVar22 * 0x28);
        *puVar4 = uVar12;
        puVar4[1] = uVar13;
        puVar4 = (undefined8 *)(lVar20 + 0x10 + lVar22 * 0x28);
        *puVar4 = uVar14;
        puVar4[1] = uVar15;
        *(undefined8 *)(lVar20 + 0x20 + lVar22 * 0x28) = uVar10;
        lVar20 = *plVar3;
        uVar9 = *(undefined4 *)(lVar20 + lVar23 * 4);
        *(undefined4 *)(lVar20 + lVar23 * 4) = *(undefined4 *)(lVar20 + lVar22 * 4);
        *(undefined4 *)(*plVar3 + lVar22 * 4) = uVar9;
        lVar20 = *(longlong *)(param_1 + 0x1020);
        uVar10 = *(undefined8 *)(lVar20 + lVar23 * 8);
        *(undefined8 *)(lVar20 + lVar23 * 8) = *(undefined8 *)(lVar20 + lVar22 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x1020) + lVar22 * 8) = uVar10;
        lVar20 = *(longlong *)(param_1 + 0x1030);
        uVar6 = *(undefined1 *)(lVar20 + lVar23);
        *(undefined1 *)(lVar20 + lVar23) = *(undefined1 *)(lVar20 + lVar22);
        *(undefined1 *)(lVar22 + *(longlong *)(param_1 + 0x1030)) = uVar6;
        lVar20 = *(longlong *)(param_1 + 0x1050);
        uVar9 = *(undefined4 *)(lVar20 + lVar23 * 4);
        *(undefined4 *)(lVar20 + lVar23 * 4) = *(undefined4 *)(lVar20 + lVar22 * 4);
        lVar23 = lVar23 * 0x1c;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1050) + lVar22 * 4) = uVar9;
        lVar20 = *(longlong *)(param_1 + 0x1040);
        lVar21 = lVar22 * 0x1c;
        uVar12 = *(undefined8 *)(lVar23 + lVar20);
        uVar13 = ((undefined8 *)(lVar23 + lVar20))[1];
        uVar10 = *(undefined8 *)(lVar23 + 0x10 + lVar20);
        uVar9 = *(undefined4 *)(lVar23 + 0x18 + lVar20);
        uVar11 = ((undefined8 *)(lVar21 + lVar20))[1];
        *(undefined8 *)(lVar23 + lVar20) = *(undefined8 *)(lVar21 + lVar20);
        ((undefined8 *)(lVar23 + lVar20))[1] = uVar11;
        *(undefined8 *)(lVar23 + 0x10 + lVar20) = *(undefined8 *)(lVar21 + 0x10 + lVar20);
        *(undefined4 *)(lVar23 + 0x18 + lVar20) = *(undefined4 *)(lVar21 + 0x18 + lVar20);
        lVar20 = *(longlong *)(param_1 + 0x1040);
        *(undefined8 *)(lVar21 + lVar20) = uVar12;
        ((undefined8 *)(lVar21 + lVar20))[1] = uVar13;
        *(undefined8 *)(lVar21 + 0x10 + lVar20) = uVar10;
        *(undefined4 *)(lVar21 + 0x18 + lVar20) = uVar9;
      }
    } while (iVar24 < *(int *)(param_1 + 0x1068));
  }
  FUN_141d38290(param_3);
  if (*(int *)(param_3 + 0x2c) != 0) {
    FUN_141d8f110(*(longlong *)(param_3 + 0xd8) + 0x5f90,*(undefined4 *)(param_3 + 0x2c),param_3);
  }
  if (*(int *)(DAT_146a82620 + 4) == 0) {
    FUN_141d1ad40(param_3,param_2,1);
  }
  else {
    FUN_141d1ad40(param_3,param_2,1,0);
    *(undefined1 *)(param_3 + 0xf8) = 1;
  }
  lVar17 = *(longlong *)(param_3 + 8);
  if (((*(char *)(param_1 + 0x1794) != '\0') || ((*(uint *)(lVar17 + 0x1c) >> 8 & 1) != 0)) &&
     (uVar18 = *(uint *)(lVar17 + 0x1c), ((byte)uVar18 & 0x14) == 0x14)) {
    if ((uVar18 >> 0x16 & 1) != 0) {
      iVar16 = *(int *)(param_1 + 0x1618);
      *(int *)(param_1 + 0x1618) = iVar16 + 1;
      if (*(int *)(param_1 + 0x161c) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1610,iVar16);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x1610) + (longlong)iVar16 * 8) = param_3;
      uVar10 = *(undefined8 *)(lVar17 + 0xc0);
      uVar9 = *(undefined4 *)(lVar17 + 0xd8);
      if ((*(int *)(lVar17 + 0x10) != 2) ||
         (lVar22 = 400, (*(uint *)(lVar17 + 0x18) & 0x40000000) != 0)) {
        lVar22 = 0x180;
      }
      lVar22 = lVar22 + param_1;
      iVar16 = *(int *)(lVar22 + 0x15f8);
      uStack_50 = (undefined4)*(undefined8 *)(lVar17 + 200);
      *(int *)(lVar22 + 0x15f8) = iVar16 + 1;
      if (*(int *)(lVar22 + 0x15fc) < iVar16 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar22 + 0x15f0,iVar16);
      }
      puVar4 = (undefined8 *)(*(longlong *)(lVar22 + 0x15f0) + (longlong)iVar16 * 0x10);
      *puVar4 = uVar10;
      puVar4[1] = CONCAT44(uVar9,uStack_50);
      uVar18 = *(uint *)(lVar17 + 0x1c);
    }
    if ((uVar18 >> 0x15 & 1) != 0) {
      iVar16 = *(int *)(param_1 + 0x1708);
      *(int *)(param_1 + 0x1708) = iVar16 + 1;
      if (*(int *)(param_1 + 0x170c) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1700,iVar16);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x1700) + (longlong)iVar16 * 8) = param_3;
    }
  }
  FLODSceneTree::UpdateNodeSceneInfo(param_1 + 0x5f90,*(undefined4 *)(param_3 + 0x10),param_3);
  return;
}



// FUNCTION 141d1a6f0 FUN_141d1a6f0 body=90 status=ok
// SIG undefined FUN_141d1a6f0(void)

void FUN_141d1a6f0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4c8),0,0);
  if (*(longlong *)(param_1 + 0x12d8) != 0) {
    (**(code **)(*param_2 + 0x38))(param_2,(longlong *)(param_1 + 0x12d8),0,0);
  }
  return;
}



// FUNCTION 141d1a750 FUN_141d1a750 body=318 status=ok
// SIG undefined FUN_141d1a750(void)

void FUN_141d1a750(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_2 + 0x310) == 0) {
    uStack_40 = FUN_142388260(param_2);
    *(undefined8 *)(param_2 + 0x310) = uStack_40;
    local_48 = param_1;
    if (DAT_146ac3ac6 != '\0') {
      cVar7 = IsInRenderingThread();
      if (cVar7 != '\0') {
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_141d15be0(&local_48,uVar9);
        return;
      }
    }
    if (DAT_146ac3ac5 == '\0') {
      cVar7 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar7 != '\0') || (DAT_1468c21ae == '\0')) {
LAB_141d1a7ea:
        local_38 = (undefined4)local_48;
        uStack_34 = local_48._4_4_;
        uStack_30 = (undefined4)uStack_40;
        uStack_2c = uStack_40._4_4_;
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_141d15be0(&local_38,uVar9);
        return;
      }
      DVar8 = GetCurrentThreadId();
      if (DVar8 == DAT_1468c21c0) goto LAB_141d1a7ea;
    }
    plVar10 = (longlong *)FUN_141d27d90(local_28,0,0xff);
    lVar3 = *plVar10;
    *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_48;
    *(undefined4 *)(lVar3 + 0x14) = local_48._4_4_;
    *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_40;
    *(undefined4 *)(lVar3 + 0x1c) = uStack_40._4_4_;
    lVar3 = *plVar10;
    lVar6 = plVar10[2];
    lVar4 = plVar10[1];
    lVar5 = *(longlong *)(lVar3 + 0x28);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 141d1a890 FUN_141d1a890 body=543 status=ok
// SIG undefined FUN_141d1a890(void)

void FUN_141d1a890(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (((param_3 != 0) && (*(longlong *)(param_3 + 0xf8) != 0)) &&
     (*(longlong *)(param_3 + 0x38) != 0)) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      local_48 = param_1;
      local_40 = param_3;
      local_38 = param_2;
      FUN_141d29e20(&local_48,2,local_res18);
      return;
    }
    pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar6 = TlsGetValue(*pDVar5);
    plVar9 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined4 *)(plVar6 + 2) = 0;
        plVar9 = plVar6;
      }
      TlsSetValue(*pDVar5,plVar9);
      plVar6 = plVar9;
    }
    plVar9 = (longlong *)plVar6[1];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar6;
      if (plVar9 == (longlong *)0x0) {
        lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
        plVar6[1] = lVar7;
        if (lVar7 == 0) {
          puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar6[1] = (longlong)puVar8;
          lVar7 = 0x1f;
          do {
            puVar2 = puVar8 + 0x20;
            *puVar8 = puVar2;
            lVar7 = lVar7 + -1;
            puVar8 = puVar2;
          } while (lVar7 != 0);
          *puVar2 = 0;
        }
        plVar9 = (longlong *)plVar6[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar6 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar6[1] = (longlong)plVar9;
        *(undefined4 *)(plVar6 + 2) = 0x20;
        *plVar6 = 0;
      }
    }
    else {
      iVar10 = (int)plVar6[2];
    }
    plVar6[1] = *plVar9;
    *(int *)(plVar6 + 2) = iVar10 + -1;
    *plVar9 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar9 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *(undefined1 *)(plVar9 + 5) = 0;
    *plVar9 = (longlong)&PTR_FUN_144e487b0;
    plVar9[6] = 0;
    plVar9[3] = param_3;
    plVar9[2] = param_1;
    plVar9[4] = param_2;
    lVar7 = plVar9[6];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res20 = lVar7;
    FUN_14048a160(plVar9,0,0xff,1,0,0);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res20);
      }
    }
  }
  return;
}



// FUNCTION 141d1aab0 FUN_141d1aab0 body=641 status=ok
// SIG undefined FUN_141d1aab0(void)

void FUN_141d1aab0(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined **local_48;
  longlong local_40;
  undefined8 *local_38;
  
  local_48 = &PTR__scalar_deleting_destructor__144e48588;
  local_38 = *(undefined8 **)(param_1 + 0xb8);
  if (local_38 != (undefined8 *)0x0) {
    *(int *)(local_38 + 1) = *(int *)(local_38 + 1) + 1;
  }
  local_40 = param_1;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),&local_48);
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x30);
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0xd8);
      lVar4 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x30));
      if (*(int *)(lVar3 + 0x18bc) == 0) {
        iVar9 = *(int *)(lVar3 + 0x1890);
        *(int *)(lVar3 + 0x1890) = iVar9 + 1;
        if (*(int *)(lVar3 + 0x1894) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(lVar3 + 0x1888));
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(lVar3 + 0x1898,0,1);
      }
      else {
        iVar9 = *(int *)(lVar3 + 0x18b8);
        iVar5 = *(int *)(lVar3 + 0x18bc) + -1;
        lVar7 = *(longlong *)(lVar3 + 0x1888);
        iVar6 = *(int *)(lVar7 + 4 + (longlong)iVar9 * 8);
        *(int *)(lVar3 + 0x18b8) = iVar6;
        *(int *)(lVar3 + 0x18bc) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(lVar7 + (longlong)iVar6 * 8) = 0xffffffff;
        }
      }
      lVar7 = *(longlong *)(lVar3 + 0x18a8);
      if (*(longlong *)(lVar3 + 0x18a8) == 0) {
        lVar7 = lVar3 + 0x1898;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      puVar2 = (uint *)(lVar7 + (longlong)(iVar5 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x1888) + (longlong)iVar9 * 8) =
           lVar4;
      *(int *)(lVar4 + 200) = iVar9;
      if ((*(uint *)(lVar4 + 0x8c) & 0x2000000) != 0) {
        lVar3 = *(longlong *)(param_1 + 0xd8);
        if (*(int *)(lVar3 + 0x18f4) == 0) {
          iVar9 = *(int *)(lVar3 + 0x18c8);
          *(int *)(lVar3 + 0x18c8) = iVar9 + 1;
          if (*(int *)(lVar3 + 0x18cc) < iVar9 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      ((longlong *)(lVar3 + 0x18c0),iVar9);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(lVar3 + 0x18d0,0,1);
        }
        else {
          iVar9 = *(int *)(lVar3 + 0x18f0);
          iVar6 = *(int *)(lVar3 + 0x18f4) + -1;
          lVar7 = *(longlong *)(lVar3 + 0x18c0);
          iVar5 = *(int *)(lVar7 + 4 + (longlong)iVar9 * 8);
          *(int *)(lVar3 + 0x18f0) = iVar5;
          *(int *)(lVar3 + 0x18f4) = iVar6;
          if (iVar6 != 0) {
            *(undefined4 *)(lVar7 + (longlong)iVar5 * 8) = 0xffffffff;
          }
        }
        lVar7 = *(longlong *)(lVar3 + 0x18e0);
        if (*(longlong *)(lVar3 + 0x18e0) == 0) {
          lVar7 = lVar3 + 0x18d0;
        }
        iVar5 = iVar9;
        if (iVar9 < 0) {
          iVar5 = iVar9 + 0x1f;
        }
        puVar2 = (uint *)(lVar7 + (longlong)(iVar5 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
        *(int *)(lVar4 + 0xcc) = iVar9;
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x18c0) + (longlong)iVar9 * 8)
             = 1;
      }
      if (param_3 != '\0') {
        FUN_141d5d650(lVar4,param_2,*(undefined8 *)(param_1 + 0xd8));
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x38));
  }
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  return;
}



// FUNCTION 141d1ad40 FUN_141d1ad40 body=1957 status=ok
// SIG undefined FUN_141d1ad40(void)

void FUN_141d1ad40(longlong param_1,undefined8 param_2,char param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong local_res8;
  uint local_res18 [4];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  float fStack_160;
  undefined4 uStack_15c;
  undefined8 *local_158;
  undefined8 local_150;
  longlong local_148;
  char local_140;
  undefined8 local_138;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  
  if (((*(uint *)(*(longlong *)(param_1 + 8) + 0x18) & 0x80080000) == 0x80080000) &&
     (cVar4 = FUN_141b66cf0(*(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 8)), cVar4 != '\0')) {
    lVar5 = FUN_141b648a0(*(longlong *)(param_1 + 0xd8) + 0x13e8,*(undefined4 *)(param_1 + 0x10));
    if (lVar5 == 0) {
      lVar5 = FUN_141b57050(*(longlong *)(param_1 + 0xd8) + 0x13e8,param_1,1);
      *(undefined1 *)(lVar5 + 0x262) = 1;
      *(longlong *)(param_1 + 0x50) = lVar5;
    }
    else {
      *(longlong *)(param_1 + 0x50) = lVar5;
      *(undefined1 *)(lVar5 + 0x262) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0xfb) = 1;
  if (param_3 != '\0') {
    FUN_141d1aab0(param_1,param_2,param_4);
  }
  local_120 = *(longlong *)(param_1 + 8);
  uVar8 = local_f0 ^ (*(uint *)(local_120 + 0x1c) >> 2 ^ local_f0) & 1;
  uVar8 = ((*(uint *)(local_120 + 0x18) >> 0x13 & 0xff) * 2 ^ uVar8) & 2 ^ uVar8;
  local_f0 = ((*(uint *)(local_120 + 0x1c) >> 5 & 0xff) << 2 ^ uVar8) & 4 ^ uVar8;
  local_118 = *(undefined8 *)(local_120 + 0xc0);
  uStack_110 = *(undefined8 *)(local_120 + 200);
  lVar5 = *(longlong *)(param_1 + 0xd8) + 0x1e20;
  local_108 = *(undefined8 *)(local_120 + 0xd0);
  local_100 = *(undefined4 *)(local_120 + 0xd8);
  local_fc = *(undefined4 *)(local_120 + 0x180);
  local_f8 = *(undefined4 *)(local_120 + 0x17c);
  local_f4 = *(undefined4 *)(local_120 + 0x174);
  local_128 = param_1;
  FUN_141d17ff0(lVar5,&local_128,lVar5,*(longlong *)(param_1 + 0xd8) + 0x5e80);
  lVar5 = *(longlong *)(param_1 + 8);
  if ((*(uint *)(lVar5 + 0x1c) >> 8 & 1) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
    iVar2 = *(int *)(lVar5 + 0x11d0);
    *(int *)(lVar5 + 0x11d0) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x11d4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x11c8,iVar2);
    }
    *(longlong *)(*(longlong *)(lVar5 + 0x11c8) + (longlong)iVar2 * 8) = param_1;
    lVar5 = *(longlong *)(param_1 + 8);
  }
  if ((*(uint *)(lVar5 + 0x1c) & 0x4004) == 0x4004) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
    iVar2 = *(int *)(lVar5 + 0x11e0);
    *(int *)(lVar5 + 0x11e0) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x11e4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x11d8,iVar2);
    }
    *(longlong *)(*(longlong *)(lVar5 + 0x11d8) + (longlong)iVar2 * 8) = param_1;
    lVar5 = *(longlong *)(param_1 + 8);
  }
  *(longlong *)
   (*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0xff0) + (longlong)*(int *)(param_1 + 0xe8) * 8) =
       lVar5;
  lVar6 = (longlong)*(int *)(param_1 + 0xe8);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x1000);
  lVar10 = *(longlong *)(param_1 + 8);
  fStack_160 = *(float *)(lVar10 + 0xd8);
  local_168 = *(undefined8 *)(lVar10 + 0xd0);
  local_178 = *(undefined4 *)(lVar10 + 0xc0);
  uStack_174 = *(undefined4 *)(lVar10 + 0xc4);
  fStack_170 = *(float *)(lVar10 + 200);
  fStack_16c = *(float *)(lVar10 + 0xcc);
  puVar7 = (undefined4 *)(lVar5 + lVar6 * 0x28);
  *puVar7 = local_178;
  puVar7[1] = uStack_174;
  puVar7[2] = fStack_170;
  puVar7[3] = fStack_16c;
  *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x28) = local_168;
  *(float *)(lVar5 + 0x18 + lVar6 * 0x28) = fStack_160;
  fVar13 = *(float *)(*(longlong *)(param_1 + 8) + 0x180);
  *(float *)(lVar5 + 0x1c + lVar6 * 0x28) = fVar13 * fVar13;
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x17c);
  *(undefined4 *)(lVar5 + 0x20 + lVar6 * 0x28) = uVar1;
  *(undefined4 *)(lVar5 + 0x24 + lVar6 * 0x28) = uVar1;
  uVar8 = *(uint *)(*(longlong *)(param_1 + 8) + 0x1c);
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x1010) +
           (longlong)*(int *)(param_1 + 0xe8) * 4) =
       ((uVar8 >> 5 & 1) * 2 | *(uint *)(*(longlong *)(param_1 + 8) + 0x18) >> 0x13 & 1) * 2 |
       uVar8 >> 2 & 1 | local_res18[0] & 0xfffffff8;
  iVar2 = *(int *)(param_1 + 0xe8);
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x174);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x1020);
  *(int *)(lVar5 + (longlong)iVar2 * 8) = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
  *(char *)(lVar5 + 4 + (longlong)iVar2 * 8) = '\x01' << ((byte)iVar3 & 7);
  cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))();
  bVar11 = cVar4 != '\0';
  cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))();
  if (cVar4 != '\0') {
    bVar11 = bVar11 | 0x10;
  }
  if ((((byte)((uint)*(undefined4 *)((longlong)*(longlong **)(param_1 + 8) + 0x1c) >> 0x1c) & 1) !=
       0) || (*(int *)(param_1 + 0x28) != 0)) {
    bVar11 = bVar11 | 4;
  }
  bVar9 = bVar11 | 8;
  if (iVar3 < 0) {
    bVar9 = bVar11;
  }
  cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  local_180 = fStack_160;
  fVar13 = fStack_16c;
  fVar14 = (float)local_168;
  fVar12 = local_168._4_4_;
  if (cVar4 != '\0') {
    bVar9 = 0;
  }
  *(byte *)((longlong)*(int *)(param_1 + 0xe8) +
           *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x1030)) = bVar9;
  local_198._0_4_ = local_178;
  local_198._4_4_ = uStack_174;
  uStack_190 = CONCAT44(uStack_190._4_4_,fStack_170);
  cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))();
  if (cVar4 != '\0') {
    puVar7 = (undefined4 *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
                       (*(longlong **)(param_1 + 8),&local_178);
    local_188 = *(undefined8 *)(puVar7 + 4);
    fVar12 = (float)((ulonglong)local_188 >> 0x20);
    local_198._0_4_ = *puVar7;
    local_198._4_4_ = puVar7[1];
    fVar13 = (float)puVar7[3];
    local_180 = (float)puVar7[6];
    uStack_190 = (ulonglong)(uint)puVar7[2];
    fVar14 = (float)local_188;
  }
  lVar10 = (longlong)*(int *)(param_1 + 0xe8) * 0x1c;
  local_180 = local_180 + 1.0;
  local_res18[0] = local_res18[0] & 0xffffff00;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x1040);
  puVar7 = (undefined4 *)(lVar10 + lVar5);
  *puVar7 = (undefined4)local_198;
  puVar7[1] = local_198._4_4_;
  puVar7[2] = (undefined4)uStack_190;
  puVar7[3] = fVar13 + 1.0;
  *(ulonglong *)(lVar10 + 0x10 + lVar5) = CONCAT44(fVar12 + 1.0,fVar14 + 1.0);
  *(float *)(lVar10 + 0x18 + lVar5) = local_180;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x1050) + (longlong)*(int *)(param_1 + 0xe8) * 4)
       = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  uStack_190._4_4_ = (undefined4)((ulonglong)local_res18 >> 0x20);
  local_198 = &DAT_14060d670;
  uStack_190._0_4_ = SUB84(local_res18,0);
  lVar5 = FUN_1415d8310(&local_198,&DAT_146216a38);
  local_158 = (undefined8 *)(lVar5 + 0x18);
  local_150 = *local_158;
  local_148 = *(longlong *)(lVar5 + 0x28);
  local_140 = '\0';
  local_138 = *(undefined8 *)(lVar5 + 0x30);
  *(undefined8 ***)(lVar5 + 0x30) = &local_158;
  *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + 1;
  lVar5 = *(longlong *)(param_1 + 8);
  fStack_170 = *(float *)(lVar5 + 200) - *(float *)(lVar5 + 0xd4);
  local_e8 = *(float *)(lVar5 + 0xc0) - *(float *)(lVar5 + 0xcc);
  fStack_e4 = *(float *)(lVar5 + 0xc4) - *(float *)(lVar5 + 0xd0);
  fStack_160 = ((*(float *)(lVar5 + 200) + *(float *)(lVar5 + 0xd4)) - fStack_170) * 0.5;
  local_d8 = ((*(float *)(lVar5 + 0xc0) + *(float *)(lVar5 + 0xcc)) - local_e8) * 0.5;
  fStack_170 = fStack_160 + fStack_170;
  fStack_d4 = ((*(float *)(lVar5 + 0xc4) + *(float *)(lVar5 + 0xd0)) - fStack_e4) * 0.5;
  local_e8 = local_d8 + local_e8;
  uStack_190 = CONCAT44(uStack_190._4_4_,fStack_170);
  fStack_e4 = fStack_d4 + fStack_e4;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  local_c8 = lVar5 + 0x1a70;
  fStack_16c = 0.0;
  uStack_15c = 0;
  uStack_dc = 0;
  local_b8 = *(undefined8 *)(lVar5 + 0x1de0);
  uStack_b0 = *(undefined8 *)(lVar5 + 0x1de8);
  local_98 = *(undefined4 *)(lVar5 + 0x1e00);
  uStack_94 = *(undefined4 *)(lVar5 + 0x1e04);
  uStack_90 = *(undefined4 *)(lVar5 + 0x1e08);
  uStack_8c = *(undefined4 *)(lVar5 + 0x1e0c);
  uStack_cc = 0;
  local_a8 = *(undefined4 *)(lVar5 + 0x1df0);
  uStack_a4 = *(undefined4 *)(lVar5 + 0x1df4);
  uStack_a0 = *(undefined4 *)(lVar5 + 0x1df8);
  uStack_9c = *(undefined4 *)(lVar5 + 0x1dfc);
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  fStack_e0 = fStack_170;
  fStack_d0 = fStack_160;
  local_78 = local_c8;
  TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::
  TConstElementBoxIterator<TMemStackAllocator<0>_>::ProcessChildren(&local_e8);
  FUN_141d1b7c0(&local_e8);
  iVar2 = local_70;
  while (local_70 = iVar2, local_c8 != 0) {
    lVar5 = *(longlong *)(local_78 + 0x300);
    if (*(longlong *)(local_78 + 0x300) == 0) {
      lVar5 = local_78;
    }
    lVar5 = lVar5 + (longlong)iVar2 * 0x30;
    cVar4 = FUN_141b8ed80(lVar5,&local_118,local_120);
    if (cVar4 != '\0') {
      FUN_141d64720(*(undefined8 *)(lVar5 + 0x20),param_1);
    }
    local_70 = iVar2 + 1;
    FUN_141d1b7c0(&local_e8);
    iVar2 = local_70;
  }
  if (local_140 == '\0') {
    local_140 = '\x01';
    *(int *)(local_158 + 4) = *(int *)(local_158 + 4) + -1;
    if (local_148 != local_158[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_158 = local_150;
    local_158[3] = local_138;
  }
  if ((*(char *)(param_1 + 0xfd) != '\0') &&
     (local_res8 = param_1,
     FUN_14058c5a0(*(longlong *)(param_1 + 0xd8) + 0x20,local_res18,&local_res8,0),
     *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) == 0)) {
    *(undefined2 *)(param_1 + 0xf9) = 0x100;
    FUN_14273d8d0();
  }
  return;
}



// FUNCTION 141d1b4f0 FUN_141d1b4f0 body=710 status=ok
// SIG undefined FUN_141d1b4f0(void)

void FUN_141d1b4f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  BOOL BVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  cVar3 = (**(code **)(*param_2 + 0x2a0))(param_2);
  if (cVar3 != '\0') {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1950));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1950));
    }
    iVar13 = *(int *)(param_1 + 0x1948);
    *(int *)(param_1 + 0x1948) = iVar13 + 1;
    if (*(int *)(param_1 + 0x194c) < iVar13 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1940,iVar13);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x1940) + (longlong)iVar13 * 8) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1950));
    lVar6 = (**(code **)(*param_2 + 0x548))(param_2);
    param_2[0x5d] = lVar6;
    lVar7 = FUN_1428c8920(param_2);
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      iVar13 = *(int *)(param_1 + 0x1918);
      *(int *)(param_1 + 0x1918) = iVar13 + 1;
      if (*(int *)(param_1 + 0x191c) < iVar13 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1910,iVar13);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x1910) + (longlong)iVar13 * 8) = lVar6;
      if (lVar7 != 0) {
        *(longlong *)(param_1 + 0x1938) = lVar7;
      }
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    }
    else {
      pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar9 = TlsGetValue(*pDVar8);
      plVar12 = (longlong *)0x0;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)operator_new(0x18);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          plVar9[1] = 0;
          *(undefined4 *)(plVar9 + 2) = 0;
          plVar12 = plVar9;
        }
        TlsSetValue(*pDVar8,plVar12);
        plVar9 = plVar12;
      }
      plVar12 = (longlong *)plVar9[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar9;
        if (plVar12 == (longlong *)0x0) {
          lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
          plVar9[1] = lVar10;
          if (lVar10 == 0) {
            puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar9[1] = (longlong)puVar11;
            lVar10 = 0x1f;
            do {
              puVar2 = puVar11 + 0x20;
              *puVar11 = puVar2;
              lVar10 = lVar10 + -1;
              puVar11 = puVar2;
            } while (lVar10 != 0);
            *puVar2 = 0;
          }
          plVar12 = (longlong *)plVar9[1];
          iVar13 = 0x20;
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
        else {
          iVar13 = 0x20;
          plVar9[1] = (longlong)plVar12;
          *(undefined4 *)(plVar9 + 2) = 0x20;
          *plVar9 = 0;
        }
      }
      else {
        iVar13 = (int)plVar9[2];
      }
      plVar9[1] = *plVar12;
      *(int *)(plVar9 + 2) = iVar13 + -1;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *(undefined1 *)(plVar12 + 5) = 0;
      *plVar12 = (longlong)&PTR_FUN_144e48790;
      plVar12[6] = 0;
      plVar12[2] = param_1;
      plVar12[3] = lVar6;
      plVar12[4] = lVar7;
      lVar6 = plVar12[6];
      piVar1 = (int *)(lVar6 + 0x48);
      if (lVar6 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar6;
      FUN_14048a160(plVar12,0,0xff,1,0,0);
      if (lVar6 != 0) {
        LOCK();
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d1b7c0 FUN_141d1b7c0 body=782 status=ok
// SIG undefined FUN_141d1b7c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d1b7c0(float *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  do {
    _local_78 = *(undefined1 (*) [16])(param_1 + 0x1c);
    fVar14 = local_78._0_4_;
    fVar15 = local_78._4_4_;
    fVar12 = local_78._8_4_;
    fVar16 = local_78._12_4_;
    if ((-1 < (int)fVar12) && (lVar5 = local_78, (int)fVar12 < *(int *)(lVar5 + 0x310))) {
      lVar11 = *(longlong *)(lVar5 + 0x300);
      if (*(longlong *)(lVar5 + 0x300) == 0) {
        lVar11 = lVar5;
      }
      plVar4 = *(longlong **)(*(longlong *)(lVar11 + 0x20 + (longlong)(int)fVar12 * 0x30) + 0x30);
      uVar9 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_98);
      local_58 = CONCAT44(local_94,local_98);
      fStack_50 = local_90;
      fStack_40 = local_8c;
      auVar6._4_4_ = -(uint)(param_1[5] + local_8c <
                            (float)((uint)(local_94 - param_1[1]) & uRam0000000146a826a4));
      auVar6._0_4_ = -(uint)(param_1[4] + local_8c <
                            (float)((uint)(local_98 - *param_1) & _DAT_146a826a0));
      auVar6._8_4_ = -(uint)(param_1[6] + local_8c <
                            (float)((uint)(local_90 - param_1[2]) & uRam0000000146a826a8));
      auVar6._12_4_ =
           -(uint)(param_1[7] + 0.0 < (float)((uint)(0.0 - param_1[3]) & uRam0000000146a826ac));
      iVar10 = movmskps(uVar9,auVar6);
      if (iVar10 == 0) {
LAB_141d1baa8:
        param_1[0x1c] = fVar14;
        param_1[0x1d] = fVar15;
        param_1[0x1e] = fVar12;
        param_1[0x1f] = fVar16;
        return;
      }
      while( true ) {
        auVar6 = _local_78;
        uStack_3c = 0;
        uStack_4c = 0;
        fVar12 = (float)((int)fVar12 + 1);
        uStack_70._0_4_ = fVar12;
        auVar7 = _local_78;
        local_48 = fStack_40;
        fStack_44 = fStack_40;
        if (((int)fVar12 < 0) || (*(int *)(lVar5 + 0x310) <= (int)fVar12)) break;
        lVar11 = *(longlong *)(lVar5 + 0x300);
        if (*(longlong *)(lVar5 + 0x300) == 0) {
          lVar11 = lVar5;
        }
        plVar4 = *(longlong **)(*(longlong *)(lVar11 + 0x20 + (longlong)(int)fVar12 * 0x30) + 0x30);
        uVar9 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_88);
        fStack_40 = local_7c;
        fStack_50 = local_80;
        local_58 = CONCAT44(local_84,local_88);
        auVar7._4_4_ = -(uint)(param_1[5] + local_7c <
                              (float)((uint)(local_84 - param_1[1]) & uRam0000000146a826a4));
        auVar7._0_4_ = -(uint)(param_1[4] + local_7c <
                              (float)((uint)(local_88 - *param_1) & _DAT_146a826a0));
        auVar7._8_4_ = -(uint)(param_1[6] + local_7c <
                              (float)((uint)(local_80 - param_1[2]) & uRam0000000146a826a8));
        auVar7._12_4_ =
             -(uint)(param_1[7] + 0.0 < (float)((uint)(0.0 - param_1[3]) & uRam0000000146a826ac));
        iVar10 = movmskps(uVar9,auVar7);
        if (iVar10 == 0) {
          *(undefined1 (*) [8])(param_1 + 0x1c) = local_78;
          *(undefined8 *)(param_1 + 0x1e) = uStack_70;
          return;
        }
      }
      local_78._0_4_ = auVar6._0_4_;
      local_78._4_4_ = auVar6._4_4_;
      fVar14 = (float)local_78._0_4_;
      fVar15 = (float)local_78._4_4_;
      fVar16 = uStack_70._4_4_;
      _local_78 = auVar7;
    }
    fVar2 = param_1[0x1a];
    if (fVar2 == 0.0) {
      local_58 = 0;
      param_1[8] = 0.0;
      param_1[9] = 0.0;
      *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_4c,fStack_50);
      param_1[0xc] = 0.0;
      param_1[0xd] = 0.0;
      param_1[0xe] = 0.0;
      param_1[0xf] = 1.0;
      param_1[0x10] = 0.0;
      param_1[0x11] = 0.0;
      param_1[0x12] = 0.0;
      param_1[0x13] = 1.0;
      *(undefined8 *)(param_1 + 0x14) = local_28;
      *(undefined8 *)(param_1 + 0x16) = uStack_20;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x18);
      iVar13 = (int)fVar2 + -1;
      lVar11 = (longlong)iVar13 * 0x40;
      uVar8 = ((undefined8 *)(lVar11 + lVar5))[1];
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar11 + lVar5);
      *(undefined8 *)(param_1 + 10) = uVar8;
      puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar5);
      uVar8 = puVar1[1];
      *(undefined8 *)(param_1 + 0xc) = *puVar1;
      *(undefined8 *)(param_1 + 0xe) = uVar8;
      puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar5);
      uVar8 = puVar1[1];
      *(undefined8 *)(param_1 + 0x10) = *puVar1;
      *(undefined8 *)(param_1 + 0x12) = uVar8;
      puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar5);
      uVar8 = puVar1[1];
      *(undefined8 *)(param_1 + 0x14) = *puVar1;
      *(undefined8 *)(param_1 + 0x16) = uVar8;
      fVar3 = param_1[0x1a];
      iVar10 = ((int)fVar3 - iVar13) + -1;
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x40 + lVar5),
                   (void *)((longlong)(int)fVar2 * 0x40 + lVar5),(longlong)iVar10 << 6);
        fVar3 = param_1[0x1a];
      }
      param_1[0x1a] = (float)((int)fVar3 + -1);
      TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
      ::ResizeShrink(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 8) == 0) goto LAB_141d1baa8;
    TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::
    TConstElementBoxIterator<TMemStackAllocator<0>_>::ProcessChildren(param_1);
    local_68 = *(undefined8 *)(param_1 + 8);
    uStack_60 = 0;
    *(undefined8 *)(param_1 + 0x1c) = local_68;
    *(ulonglong *)(param_1 + 0x1e) = (ulonglong)uStack_5c << 0x20;
  } while( true );
}



// FUNCTION 141d1bad0 FUN_141d1bad0 body=124 status=ok
// SIG undefined FUN_141d1bad0(void)

undefined8 * FUN_141d1bad0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x6078);
  *(int *)(param_1 + 0x6078) = iVar1 + 1;
  if (*(int *)(param_1 + 0x607c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x6070),iVar1);
  }
  *(int *)(param_2 + 1) = iVar1;
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x6070));
  *param_2 = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3f800000;
  return param_2;
}



// FUNCTION 141d1bb70 FUN_141d1bb70 body=138 status=ok
// SIG undefined FUN_141d1bb70(void)

longlong * FUN_141d1bb70(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x6058);
  *(int *)(param_1 + 0x6058) = iVar1 + 1;
  if (*(int *)(param_1 + 0x605c) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x6050),iVar1);
  }
  *(int *)(param_2 + 1) = iVar1;
  lVar2 = (longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x6050);
  *param_2 = lVar2;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x1c) = 0x3f800000;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x3c) = 0x3f800000;
  *(undefined8 *)(lVar2 + 0x44) = 0;
  *(undefined4 *)(lVar2 + 0x4c) = 0x3f800000;
  return param_2;
}



// FUNCTION 141d1bc00 FUN_141d1bc00 body=101 status=ok
// SIG undefined FUN_141d1bc00(void)

undefined8 * FUN_141d1bc00(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x6098);
  *(int *)(param_1 + 0x6098) = iVar1 + 1;
  if (*(int *)(param_1 + 0x609c) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x6090),iVar1);
  }
  *(int *)(param_2 + 1) = iVar1;
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x6090));
  *param_2 = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f800000;
  return param_2;
}



// FUNCTION 141d1bc70 FUN_141d1bc70 body=175 status=ok
// SIG undefined FUN_141d1bc70(void)

undefined8 * FUN_141d1bc70(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x60b8);
  *(int *)(param_1 + 0x60b8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x60bc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x60b0),iVar1);
  }
  *(int *)(param_2 + 1) = iVar1;
  puVar2 = (undefined8 *)((longlong)iVar1 * 0xa0 + *(longlong *)(param_1 + 0x60b0));
  *param_2 = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x3f800000;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = 0x3f800000;
  return param_2;
}



// FUNCTION 141d1bd20 FUN_141d1bd20 body=2134 status=ok
// SIG undefined FUN_141d1bd20(void)

void FUN_141d1bd20(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  DWORD DVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar21;
  undefined **ppuVar22;
  uint *puVar23;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float fVar27;
  longlong local_158;
  int iStack_150;
  int iStack_14c;
  int local_148;
  uint local_140;
  uint uStack_13c;
  uint *puStack_138;
  undefined4 local_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  uint local_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 local_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  longlong *local_100;
  undefined8 local_f8;
  uint *puStack_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined8 local_d0;
  uint *puStack_c8;
  uint local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  ulonglong uVar20;
  
  if ((int)param_2[1] < 1) {
    return;
  }
  uVar16 = 0;
  uVar17 = 0;
  if (*(int *)(param_1 + 8) < 3) goto LAB_141d1c51a;
  iVar15 = 0;
  if (0 < (int)param_2[1]) {
    plVar12 = (longlong *)(param_1 + 0x1378);
    uVar26 = uVar16;
    do {
      iVar10 = *(int *)(param_1 + 0x13a0);
      puVar24 = (uint *)(param_1 + 5000);
      bVar5 = false;
      uStack_13c = 1;
      local_140 = 0;
      uStack_12c = 0;
      if (iVar10 != 0) {
        puVar23 = *(uint **)(param_1 + 0x1398);
        if (*(uint **)(param_1 + 0x1398) == (uint *)0x0) {
          puVar23 = puVar24;
        }
        uVar19 = *puVar23;
        uVar25 = uVar16;
        uVar14 = uVar16;
        uVar18 = uVar17;
        while (uVar19 == 0) {
          iVar9 = (int)uVar25;
          uVar18 = (int)uVar14 + 0x20;
          uVar14 = (ulonglong)uVar18;
          local_140 = iVar9 + 1;
          uVar25 = (ulonglong)local_140;
          uStack_12c = (ulonglong)uVar18 << 0x20;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141d1be59;
          uVar19 = puVar23[(longlong)iVar9 + 1];
        }
        uStack_13c = uVar19 - 1 & uVar19 ^ uVar19;
        local_148 = 0x1f;
        if (uStack_13c != 0) {
          for (; uStack_13c >> local_148 == 0; local_148 = local_148 + -1) {
          }
        }
        if (uStack_13c == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_148;
        }
        iVar9 = (uVar18 - iVar9) + 0x1f;
        uStack_12c._4_4_ = (undefined4)((ulonglong)uStack_12c >> 0x20);
        uStack_12c = CONCAT44(uStack_12c._4_4_,iVar9);
        if (iVar10 < iVar9) {
LAB_141d1be59:
          uStack_12c = CONCAT44(uStack_12c._4_4_,iVar10);
        }
      }
      local_130 = 0xffffffff;
      local_f8 = CONCAT44(uStack_13c,local_140);
      local_e8 = 0xffffffff;
      iStack_e4 = (int)uStack_12c;
      uStack_e0 = uStack_12c._4_4_;
      uStack_dc = uStack_124;
      puStack_138 = puVar24;
      local_100 = plVar12;
      puStack_f0 = puVar24;
      if ((int)uStack_12c < iVar10) {
        do {
          if (*(longlong *)(*local_100 + (longlong)iStack_e4 * 8) ==
              *(longlong *)(uVar26 + *param_2)) {
            bVar5 = true;
          }
          local_e8 = local_e8 & ~local_f8._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
        } while (iStack_e4 < (int)puStack_f0[6]);
        if (!bVar5) goto LAB_141d1bedb;
      }
      else {
LAB_141d1bedb:
        iVar9 = *(int *)(param_1 + 0x1380);
        iVar10 = *(int *)(param_1 + 0x13ac);
        if (iVar9 - iVar10 < 0x155) {
          uVar13 = *(undefined8 *)(uVar26 + *param_2);
          if (iVar10 == 0) {
            *(int *)(param_1 + 0x1380) = iVar9 + 1;
            if (*(int *)(param_1 + 0x1384) < iVar9 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar9);
            }
            TBitArray<FDefaultBitArrayAllocator>::Add(puVar24,0,1);
          }
          else {
            iVar9 = *(int *)(param_1 + 0x13a8);
            iVar2 = *(int *)(*plVar12 + 4 + (longlong)iVar9 * 8);
            *(int *)(param_1 + 0x13a8) = iVar2;
            *(int *)(param_1 + 0x13ac) = iVar10 + -1;
            if (iVar10 + -1 != 0) {
              *(undefined4 *)(*plVar12 + (longlong)iVar2 * 8) = 0xffffffff;
            }
          }
          lVar21 = *(longlong *)(param_1 + 0x1398);
          if (*(longlong *)(param_1 + 0x1398) == 0) {
            lVar21 = param_1 + 5000;
          }
          iVar10 = iVar9;
          if (iVar9 < 0) {
            iVar10 = iVar9 + 0x1f;
          }
          puVar24 = (uint *)(lVar21 + (longlong)(iVar10 >> 5) * 4);
          *puVar24 = *puVar24 | 1 << ((byte)iVar9 & 0x1f);
          *(undefined8 *)(*plVar12 + (longlong)iVar9 * 8) = uVar13;
        }
      }
      uVar26 = uVar26 + 8;
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)param_2[1]);
  }
  local_b0 = (longlong *)(param_1 + 0x1378);
  iVar15 = *(int *)(param_1 + 0x1380) - *(int *)(param_1 + 0x13ac);
  if (0 < *(int *)(param_1 + 0x13b0)) {
    fVar27 = _guard_xfg_dispatch_icall_nop((float)iVar15);
    fVar27 = _guard_xfg_dispatch_icall_nop(1.5,(float)((int)(fVar27 * 2.4663033) + 1));
    iVar15 = (int)fVar27;
  }
  iVar10 = 0x155;
  if (iVar15 < 0x156) {
    iVar10 = iVar15;
  }
  iVar15 = FUN_14238ce60();
  lVar21 = DAT_146a81838;
  if ((iVar10 == *(int *)(param_1 + 0x13b0)) && (iVar15 == *(int *)(param_1 + 0x1264))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (DAT_146ab62ff == '\0') {
LAB_141d1c07e:
    bVar6 = false;
  }
  else {
    cVar8 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      uVar26 = 1;
      if (DVar11 == DAT_1468c21c0) goto LAB_141d1c071;
    }
    else {
LAB_141d1c071:
      uVar26 = uVar16;
    }
    if (*(int *)(lVar21 + uVar26 * 4) == 0) goto LAB_141d1c07e;
    bVar6 = true;
  }
  if (bVar6) {
    if (!bVar5) goto LAB_141d1c0f9;
    if (iVar15 != *(int *)(param_1 + 0x1264)) goto LAB_141d1c1ee;
    *(int *)(param_1 + 0x13b0) = iVar10;
    local_158 = param_1;
    iStack_150 = iVar10;
    iStack_14c = iVar15;
    if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
      if (DAT_146ac3ac5 == '\0') {
        cVar8 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar11 = GetCurrentThreadId();
          bVar5 = false;
          if (DVar11 == DAT_1468c21c0) goto LAB_141d1c145;
        }
        else {
LAB_141d1c145:
          bVar5 = true;
        }
        if (bVar5) {
          FBaseGraphTask::GetSmallTaskAllocator();
          local_98 = &DAT_144e383e8;
          local_90 = &DAT_144e383f4;
          ppuVar22 = &local_98;
          goto LAB_141d1c0ee;
        }
      }
      plVar12 = (longlong *)FUN_141d28420(local_78,0,0xff);
      lVar21 = *plVar12;
      *(longlong *)(lVar21 + 0x10) = local_158;
      *(ulonglong *)(lVar21 + 0x18) = CONCAT44(iStack_14c,iStack_150);
      lVar21 = *plVar12;
      lVar7 = plVar12[2];
      lVar3 = plVar12[1];
      lVar4 = *(longlong *)(lVar21 + 0x28);
      piVar1 = (int *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(lVar21,lVar3,(int)lVar7,1);
      if (lVar4 != 0) {
        LOCK();
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          FGraphEvent::Recycle(lVar4);
        }
      }
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      local_a8 = &DAT_144e383e8;
      local_a0 = &DAT_144e383f4;
      ppuVar22 = &local_a8;
LAB_141d1c0ee:
      FUN_141d4b990(param_1 + 0x1208,iVar10,iVar15,ppuVar22);
    }
  }
  else {
LAB_141d1c1ee:
    if (bVar5) {
      *(int *)(param_1 + 0x13b0) = iVar10;
      local_158 = param_1;
      iStack_150 = iVar10;
      iStack_14c = iVar15;
      if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
        if (DAT_146ac3ac5 == '\0') {
          cVar8 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
            DVar11 = GetCurrentThreadId();
            bVar5 = false;
            if (DVar11 == DAT_1468c21c0) goto LAB_141d1c26a;
          }
          else {
LAB_141d1c26a:
            bVar5 = true;
          }
          if (bVar5) {
            uStack_80 = CONCAT44(iStack_14c,iStack_150);
            local_88 = local_158;
            uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
            FUN_141d15150(&local_88,uVar13);
            goto LAB_141d1c2f1;
          }
        }
        plVar12 = (longlong *)FUN_141d28960(local_60,0,0xff);
        lVar21 = *plVar12;
        *(longlong *)(lVar21 + 0x10) = local_158;
        *(ulonglong *)(lVar21 + 0x18) = CONCAT44(iStack_14c,iStack_150);
        lVar21 = *plVar12;
        lVar7 = plVar12[2];
        lVar3 = plVar12[1];
        lVar4 = *(longlong *)(lVar21 + 0x28);
        piVar1 = (int *)(lVar4 + 0x48);
        if (lVar4 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_1409421c0(lVar21,lVar3,(int)lVar7,1);
        if (lVar4 != 0) {
          LOCK();
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
      }
      else {
        uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_141d15150(&local_158,uVar13);
      }
LAB_141d1c2f1:
      FUN_141d4fe40(param_1,param_3,param_4);
      goto LAB_141d1c51a;
    }
  }
LAB_141d1c0f9:
  if (param_4 != '\0') {
    uVar17 = *(uint *)(param_2 + 1);
  }
  BeginReflectionCaptureSlowTask(uVar17,param_3);
  if (0 < (int)param_2[1]) {
    puVar24 = (uint *)(param_1 + 5000);
    uVar26 = uVar16;
    uVar25 = uVar16;
    do {
      lVar21 = *(longlong *)(*param_2 + uVar25);
      if (0x14 < (int)uVar17) {
        iVar15 = 1;
        if (0 < (int)uVar17 / 5) {
          iVar15 = (int)uVar17 / 5;
        }
        if ((int)uVar26 % iVar15 == 0) {
          FUN_141685240(DAT_1468b6160,uVar26,uVar17);
        }
      }
      iVar15 = *(int *)(param_1 + 0x13a0);
      bVar5 = false;
      uVar19 = 0;
      local_120 = 0;
      uStack_11c = 1;
      uStack_10c = 0;
      if (iVar15 != 0) {
        puVar23 = *(uint **)(param_1 + 0x1398);
        if (*(uint **)(param_1 + 0x1398) == (uint *)0x0) {
          puVar23 = puVar24;
        }
        uVar18 = *puVar23;
        uVar14 = uVar16;
        uVar20 = uVar16;
        while (uVar18 == 0) {
          iVar10 = (int)uVar14;
          uVar19 = (int)uVar20 + 0x20;
          uVar20 = (ulonglong)uVar19;
          local_120 = iVar10 + 1;
          uVar14 = (ulonglong)local_120;
          uStack_10c = (ulonglong)uVar19 << 0x20;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_141d1c443;
          uVar18 = puVar23[(longlong)iVar10 + 1];
        }
        uStack_11c = -uVar18 & uVar18;
        iVar10 = 0x1f;
        if (uStack_11c != 0) {
          for (; uStack_11c >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_11c == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        iVar10 = (uVar19 - iVar10) + 0x1f;
        uStack_10c._4_4_ = (undefined4)((ulonglong)uStack_10c >> 0x20);
        uStack_10c = CONCAT44(uStack_10c._4_4_,iVar10);
        if (iVar15 < iVar10) {
LAB_141d1c443:
          uStack_10c = CONCAT44(uStack_10c._4_4_,iVar15);
        }
      }
      local_110 = 0xffffffff;
      local_d0 = CONCAT44(uStack_11c,local_120);
      local_d8 = local_b0;
      local_c0 = 0xffffffff;
      iStack_bc = (int)uStack_10c;
      uStack_b8 = uStack_10c._4_4_;
      uStack_b4 = uStack_104;
      puStack_118 = puVar24;
      puStack_c8 = puVar24;
      if ((int)uStack_10c < iVar15) {
        do {
          if (*(longlong *)(*local_d8 + (longlong)iStack_bc * 8) == lVar21) {
            bVar5 = true;
          }
          local_c0 = local_c0 & ~local_d0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
        } while (iStack_bc < (int)puStack_c8[6]);
        if (bVar5) {
          FUN_141d1fa00(param_1,lVar21,param_4);
        }
      }
      uVar19 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar19;
      uVar25 = uVar25 + 8;
    } while ((int)uVar19 < (int)param_2[1]);
  }
  if (0x14 < (int)uVar17) {
    FUN_14166aae0(DAT_1468b6160);
  }
LAB_141d1c51a:
  uVar26 = uVar16;
  if (0 < (int)param_2[1]) {
    do {
      plVar12 = *(longlong **)(uVar16 + *param_2);
      *(undefined1 *)(plVar12 + 99) = 0;
      if (plVar12[0x62] != 0) {
        (**(code **)(*plVar12 + 0x2f0))();
      }
      uVar17 = (int)uVar26 + 1;
      uVar16 = uVar16 + 8;
      uVar26 = (ulonglong)uVar17;
    } while ((int)uVar17 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 141d1c580 FUN_141d1c580 body=390 status=ok
// SIG undefined FUN_141d1c580(void)

undefined8 *
FUN_141d1c580(longlong param_1,longlong param_2,undefined1 param_3,char param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  undefined8 *local_10;
  
  if (DAT_1468c2172 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) &&
       (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar3 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar3,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
       (DAT_146ab62f7 == '\0')) {
      lVar1 = operator_new(0x60f0);
      if (lVar1 == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)FUN_141d10030(lVar1,param_2,param_3,0,param_4,param_5);
      }
      local_10 = puVar2;
      FUN_14058c5a0(param_1 + 8,local_18,&local_10,0);
      return puVar2;
    }
  }
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = DAT_1464c9c14;
    *puVar2 = &PTR_StartProfileThreadUsage_144e48830;
    puVar2[2] = param_2;
    puVar2[3] = 0;
    *(undefined8 **)(param_2 + 0x1b8) = puVar2;
    if (param_4 == '\0') {
      *(undefined8 *)(puVar2[2] + 0x5d0) = 0;
      puVar2[3] = 0;
    }
    else {
      FUN_1428c81f0(puVar2[2]);
    }
  }
  return puVar2;
}



// FUNCTION 141d1c710 FUN_141d1c710 body=36 status=ok
// SIG undefined FUN_141d1c710(void)

void FUN_141d1c710(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1860);
  if (lVar1 != 0) {
    FUN_141d11e70(lVar1);
    return;
  }
  return;
}



// FUNCTION 141d1c740 ApplyOffset body=1949 status=ok
// SIG undefined ApplyOffset(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d1c910) */

void TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::ApplyOffset
               (undefined1 **param_1,float *param_2,char param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_1d68 [48];
  undefined8 local_1d38;
  undefined8 uStack_1d30;
  undefined4 local_1d08;
  undefined4 uStack_1d04;
  undefined4 uStack_1d00;
  undefined4 uStack_1cfc;
  undefined1 local_1cf8 [768];
  undefined1 *local_19f8;
  int local_19e8;
  undefined4 local_19e4;
  undefined1 *local_19d8;
  undefined1 *local_19d0 [4];
  undefined4 local_19b0;
  undefined4 uStack_19ac;
  undefined4 uStack_19a8;
  undefined4 uStack_19a4;
  undefined4 local_19a0;
  undefined4 uStack_199c;
  undefined4 uStack_1998;
  undefined4 uStack_1994;
  undefined4 local_1990;
  undefined1 *local_1988;
  undefined8 uStack_1980;
  undefined8 local_1978;
  undefined1 *puStack_1970;
  undefined1 *local_1968;
  undefined1 *puStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined1 local_1948 [704];
  longlong local_1688;
  undefined8 local_1678;
  undefined1 *local_1668;
  undefined1 *local_1660 [4];
  undefined1 *local_1640;
  undefined1 *local_1638;
  undefined1 *local_1630;
  undefined1 *local_1628;
  undefined4 local_1620;
  undefined1 *local_88;
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d68;
  FNode::ApplyOffset();
  local_19e8 = *(int *)(param_1 + 0x62);
  lVar9 = (longlong)local_19e8;
  ppuVar5 = (undefined1 **)param_1[0x60];
  local_19f8 = (undefined1 *)0x0;
  if (local_19e8 == 0) {
    local_19e4 = 0;
  }
  else {
    TArray<FLightSceneInfoCompact,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
              (local_1cf8,local_19e8,0);
    if (ppuVar5 == (undefined1 **)0x0) {
      ppuVar5 = param_1;
    }
    puVar4 = local_1cf8;
    if (local_19f8 != (undefined1 *)0x0) {
      puVar4 = local_19f8;
    }
    ::_guard_xfg_dispatch_icall_nop(puVar4,ppuVar5,lVar9 * 0x30);
  }
  local_19d8 = param_1[100];
  local_1990 = *(undefined4 *)(param_1 + 0x6d);
  local_19d0[0] = param_1[0x65];
  local_19d0[1] = param_1[0x66];
  local_1688 = 0;
  uVar2 = 0;
  local_1678 = 0;
  local_19d0[2] = param_1[0x67];
  local_19d0[3] = param_1[0x68];
  local_1668 = (undefined1 *)0x0;
  local_1620 = 0x80000000;
  local_19b0 = *(undefined4 *)(param_1 + 0x69);
  uStack_19ac = *(undefined4 *)((longlong)param_1 + 0x34c);
  uStack_19a8 = *(undefined4 *)(param_1 + 0x6a);
  uStack_19a4 = *(undefined4 *)((longlong)param_1 + 0x354);
  local_19a0 = *(undefined4 *)(param_1 + 0x6b);
  uStack_199c = *(undefined4 *)((longlong)param_1 + 0x35c);
  uStack_1998 = *(undefined4 *)(param_1 + 0x6c);
  uStack_1994 = *(undefined4 *)((longlong)param_1 + 0x364);
  do {
    local_1660[uVar2 & 7] = (undefined1 *)0x0;
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (param_1 != &local_1988) {
    *(undefined4 *)(param_1 + 0x62) = 0;
    if (*(int *)((longlong)param_1 + 0x314) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x314) = 0;
    }
    else {
      TArray<FLightSceneInfoCompact,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
      ResizeForCopy(param_1,0);
      ppuVar5 = (undefined1 **)param_1[0x60];
      if ((undefined1 **)param_1[0x60] == (undefined1 **)0x0) {
        ppuVar5 = param_1;
      }
      ::_guard_xfg_dispatch_icall_nop(ppuVar5,&local_1988,0);
    }
  }
  param_1[100] = local_1668;
  uVar2 = 0;
  param_1[0x65] = local_1660[0];
  param_1[0x66] = local_1660[1];
  param_1[0x67] = local_1660[2];
  param_1[0x68] = local_1660[3];
  param_1[0x69] = local_1640;
  param_1[0x6a] = local_1638;
  param_1[0x6b] = local_1630;
  param_1[0x6c] = local_1628;
  *(undefined4 *)(param_1 + 0x6d) = local_1620;
  do {
    puVar4 = local_1660[uVar2 & 7];
    if (puVar4 != (undefined1 *)0x0) {
      FNode::~FNode(puVar4);
      FMemory::operator_delete(puVar4,0x370);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (local_1688 != 0) {
    FMemory::Free();
  }
  FNode::~FNode(param_1);
  iVar3 = 0;
  param_1[0x60] = (undefined1 *)0x0;
  uVar2 = 0;
  param_1[0x62] = (undefined1 *)0x0;
  param_1[100] = (undefined1 *)0x0;
  *(undefined4 *)(param_1 + 0x6d) = 0x80000000;
  do {
    param_1[(ulonglong)(uVar2 & 7) + 0x65] = (undefined1 *)0x0;
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  param_1[0x75] = (undefined1 *)0x0;
  if (param_3 == '\0') {
    fVar11 = param_2[1];
    fVar1 = param_2[2];
    *(float *)(param_1 + 0x6e) = *(float *)(param_1 + 0x6e) + *param_2;
    *(float *)((longlong)param_1 + 0x374) = fVar11 + *(float *)((longlong)param_1 + 0x374);
    *(float *)(param_1 + 0x6f) = fVar1 + *(float *)(param_1 + 0x6f);
  }
  local_1978 = param_1[0x6e];
  puStack_1970 = param_1[0x6f];
  local_1958 = param_1[0x72];
  uStack_1950 = param_1[0x73];
  local_1988 = local_1cf8;
  local_1968 = param_1[0x70];
  puStack_1960 = param_1[0x71];
  local_88 = (undefined1 *)0x0;
  local_78 = 0;
  do {
    puVar4 = local_1988;
    uVar2 = 0;
    do {
      if ((*(longlong *)(puVar4 + (ulonglong)(uVar2 & 7) * 8 + 0x328) != 0) &&
         ((*(uint *)(*(longlong *)(puVar4 + (ulonglong)(uVar2 & 7) * 8 + 0x328) + 0x368) &
          0x7fffffff) != 0)) {
        local_78 = CONCAT44(local_78._4_4_,iVar3 + 1);
        if (local_78._4_4_ < iVar3 + 1) {
          TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
          ::ResizeGrow(local_1948,iVar3);
        }
        puVar7 = (undefined8 *)0x0;
        puVar8 = local_1948;
        if (local_88 != (undefined1 *)0x0) {
          puVar8 = local_88;
        }
        puVar6 = (undefined8 *)(puVar8 + (longlong)iVar3 * 0x40);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[2] = 0;
          *(undefined4 *)(puVar6 + 3) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
          *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
          *puVar6 = 0;
          puVar7 = puVar6;
        }
        *puVar7 = *(undefined8 *)(local_1988 + (ulonglong)(uVar2 & 7) * 8 + 0x328);
        *(float *)(puVar7 + 2) =
             local_1958._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar2 & 1) * 4) +
             (float)local_1978;
        *(float *)((longlong)puVar7 + 0x14) =
             local_1958._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar2 >> 1 & 1) * 4) +
             local_1978._4_4_;
        fVar11 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar2 >> 2 & 1) * 4);
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        *(float *)(puVar7 + 3) = local_1958._4_4_ * fVar11 + puStack_1970._0_4_;
        *(float *)(puVar7 + 4) = (float)local_1958;
        *(float *)((longlong)puVar7 + 0x24) = (float)local_1958;
        *(float *)(puVar7 + 5) = (float)local_1958;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
        fVar11 = (float)local_1958 * 0.5 * 1.0625;
        *(float *)(puVar7 + 6) = fVar11;
        *(float *)((longlong)puVar7 + 0x34) = (float)local_1958 - fVar11;
        iVar3 = (int)local_78;
      }
      iVar10 = 0;
      if (((byte)uVar2 & 7) < 7) {
        uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
      }
      else {
        uVar2 = uVar2 | 8;
      }
    } while (uVar2 >> 3 == 0);
    for (; (-1 < iVar10 && (iVar10 < *(int *)(puVar4 + 0x310))); iVar10 = iVar10 + 1) {
      puVar8 = *(undefined1 **)(puVar4 + 0x300);
      if (*(undefined1 **)(puVar4 + 0x300) == (undefined1 *)0x0) {
        puVar8 = puVar4;
      }
      FUN_141b8d720(param_1,puVar8 + (longlong)iVar10 * 0x30,param_1,param_1 + 0x6e);
    }
    if ((int)local_78 == 0) {
      local_1d38 = 0;
      local_1988 = (undefined1 *)0x0;
      uStack_1980 = uStack_1d30;
      local_1958 = (undefined1 *)CONCAT44(uStack_1d04,local_1d08);
      uStack_1950 = (undefined1 *)CONCAT44(uStack_1cfc,uStack_1d00);
      local_1978 = (undefined1 *)0x0;
      puStack_1970 = (undefined1 *)0x3f80000000000000;
      local_1968 = (undefined1 *)0x0;
      puStack_1960 = (undefined1 *)0x3f80000000000000;
      iVar3 = 0;
    }
    else {
      iVar3 = (int)local_78 + -1;
      puVar4 = local_1948;
      if (local_88 != (undefined1 *)0x0) {
        puVar4 = local_88;
      }
      lVar9 = (longlong)iVar3 * 0x40;
      local_1988 = *(undefined1 **)(puVar4 + lVar9);
      uStack_1980 = *(undefined8 *)((longlong)(puVar4 + lVar9) + 8);
      local_1978 = *(undefined1 **)(puVar4 + lVar9 + 0x10);
      puStack_1970 = *(undefined1 **)((longlong)(puVar4 + lVar9 + 0x10) + 8);
      local_1968 = *(undefined1 **)(puVar4 + lVar9 + 0x20);
      puStack_1960 = *(undefined1 **)((longlong)(puVar4 + lVar9 + 0x20) + 8);
      local_1958 = *(undefined1 **)(puVar4 + lVar9 + 0x30);
      uStack_1950 = *(undefined1 **)((longlong)(puVar4 + lVar9 + 0x30) + 8);
      iVar10 = ((int)local_78 - iVar3) + -1;
      if (iVar10 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (puVar4 + (longlong)iVar3 * 0x40,puVar4 + (longlong)(int)local_78 * 0x40,
                   (longlong)iVar10 << 6);
      }
      local_78 = CONCAT44(local_78._4_4_,(int)local_78 + -1);
      TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
      ::ResizeShrink(local_1948);
      iVar3 = (int)local_78;
    }
  } while (local_1988 != (undefined1 *)0x0);
  if (local_88 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  uVar2 = 0;
  do {
    puVar4 = local_19d0[uVar2 & 7];
    if (puVar4 != (undefined1 *)0x0) {
      FNode::~FNode(puVar4);
      FMemory::operator_delete(puVar4,0x370);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (local_19f8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d1cee0 ApplyOffset body=1869 status=ok
// SIG undefined ApplyOffset(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d1d0ab) */

void TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::ApplyOffset
               (undefined1 **param_1,float *param_2,char param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_8198 [48];
  undefined8 local_8168;
  undefined8 uStack_8160;
  undefined4 local_8138;
  undefined4 uStack_8134;
  undefined4 uStack_8130;
  undefined4 uStack_812c;
  undefined1 *local_8128;
  undefined8 uStack_8120;
  undefined8 local_8118;
  undefined1 *puStack_8110;
  undefined1 *local_8108;
  undefined1 *puStack_8100;
  undefined8 local_80f8;
  undefined8 uStack_80f0;
  undefined1 local_80e8 [6336];
  undefined1 *local_6828;
  undefined8 local_6818;
  longlong local_4128;
  undefined8 local_4120;
  undefined1 *local_4118;
  undefined1 *local_4110 [4];
  undefined1 *local_40f0;
  undefined1 *local_40e8;
  undefined1 *local_40e0;
  undefined1 *local_40d8;
  undefined4 local_40d0;
  undefined1 local_40c8 [16384];
  undefined1 *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_8198;
  FNode::ApplyOffset();
  local_c0 = *(int *)(param_1 + 0x801);
  lVar9 = (longlong)local_c0;
  ppuVar5 = (undefined1 **)param_1[0x800];
  local_c8 = (undefined1 *)0x0;
  if (local_c0 == 0) {
    local_bc = 0;
  }
  else {
    TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeForCopy
              (local_40c8,local_c0,0);
    if (ppuVar5 == (undefined1 **)0x0) {
      ppuVar5 = param_1;
    }
    puVar4 = local_40c8;
    if (local_c8 != (undefined1 *)0x0) {
      puVar4 = local_c8;
    }
    ::_guard_xfg_dispatch_icall_nop(puVar4,ppuVar5,lVar9 << 6);
  }
  local_b8 = param_1[0x802];
  local_70 = *(undefined4 *)(param_1 + 0x80b);
  local_b0[0] = param_1[0x803];
  local_b0[1] = param_1[0x804];
  local_4128 = 0;
  uVar2 = 0;
  local_4120 = 0;
  local_b0[2] = param_1[0x805];
  local_b0[3] = param_1[0x806];
  local_4118 = (undefined1 *)0x0;
  local_40d0 = 0x80000000;
  local_90 = *(undefined4 *)(param_1 + 0x807);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x403c);
  uStack_88 = *(undefined4 *)(param_1 + 0x808);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x4044);
  local_80 = *(undefined4 *)(param_1 + 0x809);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x404c);
  uStack_78 = *(undefined4 *)(param_1 + 0x80a);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x4054);
  do {
    local_4110[uVar2 & 7] = (undefined1 *)0x0;
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (param_1 != &local_8128) {
    *(undefined4 *)(param_1 + 0x801) = 0;
    if (*(int *)((longlong)param_1 + 0x400c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x400c) = 0;
    }
    else {
      TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeForCopy
                (param_1,0);
      ppuVar5 = (undefined1 **)param_1[0x800];
      if ((undefined1 **)param_1[0x800] == (undefined1 **)0x0) {
        ppuVar5 = param_1;
      }
      ::_guard_xfg_dispatch_icall_nop(ppuVar5,&local_8128,0);
    }
  }
  param_1[0x802] = local_4118;
  uVar2 = 0;
  param_1[0x803] = local_4110[0];
  param_1[0x804] = local_4110[1];
  param_1[0x805] = local_4110[2];
  param_1[0x806] = local_4110[3];
  param_1[0x807] = local_40f0;
  param_1[0x808] = local_40e8;
  param_1[0x809] = local_40e0;
  param_1[0x80a] = local_40d8;
  *(undefined4 *)(param_1 + 0x80b) = local_40d0;
  do {
    puVar4 = local_4110[uVar2 & 7];
    if (puVar4 != (undefined1 *)0x0) {
      FNode::~FNode(puVar4);
      FMemory::operator_delete(puVar4,0x4060);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (local_4128 != 0) {
    FMemory::Free();
  }
  FNode::~FNode(param_1);
  iVar3 = 0;
  param_1[0x800] = (undefined1 *)0x0;
  uVar2 = 0;
  param_1[0x801] = (undefined1 *)0x0;
  param_1[0x802] = (undefined1 *)0x0;
  *(undefined4 *)(param_1 + 0x80b) = 0x80000000;
  do {
    param_1[(ulonglong)(uVar2 & 7) + 0x803] = (undefined1 *)0x0;
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  param_1[0x813] = (undefined1 *)0x0;
  if (param_3 == '\0') {
    fVar11 = param_2[1];
    fVar1 = param_2[2];
    *(float *)(param_1 + 0x80c) = *(float *)(param_1 + 0x80c) + *param_2;
    *(float *)((longlong)param_1 + 0x4064) = fVar11 + *(float *)((longlong)param_1 + 0x4064);
    *(float *)(param_1 + 0x80d) = fVar1 + *(float *)(param_1 + 0x80d);
  }
  local_8118 = param_1[0x80c];
  puStack_8110 = param_1[0x80d];
  local_8128 = local_40c8;
  local_8108 = param_1[0x80e];
  puStack_8100 = param_1[0x80f];
  local_80f8 = param_1[0x810];
  uStack_80f0 = param_1[0x811];
  local_6828 = (undefined1 *)0x0;
  local_6818 = 0;
  do {
    puVar4 = local_8128;
    uVar2 = 0;
    do {
      if ((*(longlong *)(puVar4 + (ulonglong)(uVar2 & 7) * 8 + 0x4018) != 0) &&
         ((*(uint *)(*(longlong *)(puVar4 + (ulonglong)(uVar2 & 7) * 8 + 0x4018) + 0x4058) &
          0x7fffffff) != 0)) {
        local_6818 = CONCAT44(local_6818._4_4_,iVar3 + 1);
        if (local_6818._4_4_ < iVar3 + 1) {
          TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
          ::ResizeGrow(local_80e8,iVar3);
        }
        puVar7 = (undefined8 *)0x0;
        puVar8 = local_80e8;
        if (local_6828 != (undefined1 *)0x0) {
          puVar8 = local_6828;
        }
        puVar6 = (undefined8 *)(puVar8 + (longlong)iVar3 * 0x40);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[2] = 0;
          *(undefined4 *)(puVar6 + 3) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
          *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
          *puVar6 = 0;
          puVar7 = puVar6;
        }
        *puVar7 = *(undefined8 *)(local_8128 + (ulonglong)(uVar2 & 7) * 8 + 0x4018);
        *(float *)(puVar7 + 2) =
             local_80f8._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar2 & 1) * 4) +
             (float)local_8118;
        *(float *)((longlong)puVar7 + 0x14) =
             local_80f8._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar2 >> 1 & 1) * 4) +
             local_8118._4_4_;
        fVar11 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar2 >> 2 & 1) * 4);
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        *(float *)(puVar7 + 3) = local_80f8._4_4_ * fVar11 + puStack_8110._0_4_;
        *(float *)(puVar7 + 4) = (float)local_80f8;
        *(float *)((longlong)puVar7 + 0x24) = (float)local_80f8;
        *(float *)(puVar7 + 5) = (float)local_80f8;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
        fVar11 = (float)local_80f8 * 0.5 * 1.0625;
        *(float *)(puVar7 + 6) = fVar11;
        *(float *)((longlong)puVar7 + 0x34) = (float)local_80f8 - fVar11;
        iVar3 = (int)local_6818;
      }
      iVar10 = 0;
      if (((byte)uVar2 & 7) < 7) {
        uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
      }
      else {
        uVar2 = uVar2 | 8;
      }
    } while (uVar2 >> 3 == 0);
    for (; (-1 < iVar10 && (iVar10 < *(int *)(puVar4 + 0x4008))); iVar10 = iVar10 + 1) {
      puVar8 = *(undefined1 **)(puVar4 + 0x4000);
      if (*(undefined1 **)(puVar4 + 0x4000) == (undefined1 *)0x0) {
        puVar8 = puVar4;
      }
      FUN_141d17ff0(param_1,puVar8 + (longlong)iVar10 * 0x40,param_1,param_1 + 0x80c);
    }
    if ((int)local_6818 == 0) {
      local_8168 = 0;
      local_8128 = (undefined1 *)0x0;
      uStack_8120 = uStack_8160;
      local_80f8 = (undefined1 *)CONCAT44(uStack_8134,local_8138);
      uStack_80f0 = (undefined1 *)CONCAT44(uStack_812c,uStack_8130);
      local_8118 = (undefined1 *)0x0;
      puStack_8110 = (undefined1 *)0x3f80000000000000;
      local_8108 = (undefined1 *)0x0;
      puStack_8100 = (undefined1 *)0x3f80000000000000;
      iVar3 = 0;
    }
    else {
      iVar3 = (int)local_6818 + -1;
      puVar4 = local_80e8;
      if (local_6828 != (undefined1 *)0x0) {
        puVar4 = local_6828;
      }
      lVar9 = (longlong)iVar3 * 0x40;
      local_8128 = *(undefined1 **)(puVar4 + lVar9);
      uStack_8120 = *(undefined8 *)((longlong)(puVar4 + lVar9) + 8);
      local_8118 = *(undefined1 **)(puVar4 + lVar9 + 0x10);
      puStack_8110 = *(undefined1 **)((longlong)(puVar4 + lVar9 + 0x10) + 8);
      local_8108 = *(undefined1 **)(puVar4 + lVar9 + 0x20);
      puStack_8100 = *(undefined1 **)((longlong)(puVar4 + lVar9 + 0x20) + 8);
      local_80f8 = *(undefined1 **)(puVar4 + lVar9 + 0x30);
      uStack_80f0 = *(undefined1 **)((longlong)(puVar4 + lVar9 + 0x30) + 8);
      iVar10 = ((int)local_6818 - iVar3) + -1;
      if (iVar10 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (puVar4 + (longlong)iVar3 * 0x40,puVar4 + (longlong)(int)local_6818 * 0x40,
                   (longlong)iVar10 << 6);
      }
      local_6818 = CONCAT44(local_6818._4_4_,(int)local_6818 + -1);
      TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
      ::ResizeShrink(local_80e8);
      iVar3 = (int)local_6818;
    }
  } while (local_8128 != (undefined1 *)0x0);
  if (local_6828 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  uVar2 = 0;
  do {
    puVar4 = local_b0[uVar2 & 7];
    if (puVar4 != (undefined1 *)0x0) {
      FNode::~FNode(puVar4);
      FMemory::operator_delete(puVar4,0x4060);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (local_c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d1d630 ApplyOffset body=589 status=ok
// SIG undefined ApplyOffset(void)

void FMotionBlurInfoData::ApplyOffset(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  undefined8 local_78;
  float local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  iVar2 = (int)param_1[5];
  puStack_58 = (uint *)(param_1 + 2);
  local_b8 = 0;
  uStack_b4 = 1;
  local_a8._4_4_ = 0;
  uStack_a0 = 0;
  if (iVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puStack_58;
    }
    uVar9 = *puVar10;
    local_b8 = 0;
    uStack_a0 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)(int)local_b8;
      uStack_a0 = uStack_a0 + 0x20;
      uVar9 = local_b8 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
      local_b8 = uVar9;
      if (bVar4) goto LAB_141d1d6f3;
      uVar9 = puVar10[lVar8 + 1];
    }
    uStack_b4 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_a8._4_4_ = (uStack_a0 - iVar7) + 0x1f;
    if (iVar2 < local_a8._4_4_) {
LAB_141d1d6f3:
      local_a8._4_4_ = iVar2;
    }
  }
  auStack_50._4_4_ = local_a8._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_a0;
  auStack_50._12_4_ = iStack_9c;
  uStack_60 = local_b8;
  uStack_5c = uStack_b4;
  local_80 = 0;
  local_40._0_4_ = SUB84(param_1,0);
  local_40._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_b0 = local_b8;
  uStack_ac = uStack_b4;
  uStack_a0 = 0xffffffff;
  iStack_9c = local_a8._4_4_;
  local_98._8_4_ = (undefined4)local_40;
  local_98._0_8_ = auStack_50._8_8_;
  local_98._12_4_ = local_40._4_4_;
  if (local_a8._4_4_ < (int)param_1[5]) {
    uVar1 = *param_2;
    fVar3 = *(float *)(param_2 + 1);
    local_78._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar6 = local_78._4_4_;
    local_78._0_4_ = (float)uVar1;
    fVar5 = (float)local_78;
    local_88 = param_1;
    local_78 = uVar1;
    local_70 = fVar3;
    local_68 = param_1;
    local_40 = param_1;
    local_a8 = puStack_58;
    do {
      lVar8 = (longlong)iStack_9c * 0xc0 + *param_1;
      uStack_a0 = uStack_a0 & ~uStack_ac;
      *(float *)(lVar8 + 0x50) = fVar5 + *(float *)(lVar8 + 0x50);
      *(float *)(lVar8 + 0x54) = fVar6 + *(float *)(lVar8 + 0x54);
      *(float *)(lVar8 + 0x58) = fVar3 + *(float *)(lVar8 + 0x58);
      *(float *)(lVar8 + 0x90) = fVar5 + *(float *)(lVar8 + 0x90);
      *(float *)(lVar8 + 0x94) = fVar6 + *(float *)(lVar8 + 0x94);
      *(float *)(lVar8 + 0x98) = fVar3 + *(float *)(lVar8 + 0x98);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (iStack_9c < (int)local_a8[6]);
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141d1d880 ApplyOffset body=203 status=ok
// SIG undefined ApplyOffset(void)

void TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode::ApplyOffset
               (float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  
  pfVar5 = *(float **)(param_1 + 0xc0);
  if (*(float **)(param_1 + 0xc0) == (float *)0x0) {
    pfVar5 = param_1;
  }
  pfVar3 = pfVar5 + (longlong)(int)param_1[0xc4] * 0xc;
  for (; pfVar5 != pfVar3; pfVar5 = pfVar5 + 0xc) {
    fVar1 = *(float *)((longlong)param_2 + 4);
    fVar2 = *(float *)(param_2 + 1);
    *pfVar5 = (float)*param_2 + *pfVar5;
    pfVar5[1] = fVar1 + pfVar5[1];
    pfVar5[2] = fVar2 + pfVar5[2];
    pfVar5[3] = pfVar5[3] + 0.0;
  }
  uVar4 = 0;
  do {
    if (*(longlong *)(param_1 + (ulonglong)(uVar4 & 7) * 2 + 0xca) != 0) {
      ApplyOffset(*(longlong *)(param_1 + (ulonglong)(uVar4 & 7) * 2 + 0xca),param_2);
    }
    if (((byte)uVar4 & 7) < 7) {
      uVar4 = uVar4 ^ (uVar4 + 1 ^ uVar4) & 7;
    }
    else {
      uVar4 = uVar4 | 8;
    }
  } while (uVar4 >> 3 == 0);
  return;
}



// FUNCTION 141d1d950 ApplyOffset body=219 status=ok
// SIG undefined ApplyOffset(void)

void TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNode::ApplyOffset
               (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x4000);
  if (*(longlong *)(param_1 + 0x4000) == 0) {
    lVar6 = param_1;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x4008) * 0x40 + lVar6;
  if (lVar6 != lVar4) {
    pfVar3 = (float *)(lVar6 + 0x18);
    do {
      uVar1 = *param_2;
      lVar6 = lVar6 + 0x40;
      fVar2 = *(float *)(param_2 + 1);
      pfVar3[-2] = (float)uVar1 + pfVar3[-2];
      pfVar3[-1] = (float)((ulonglong)uVar1 >> 0x20) + pfVar3[-1];
      *pfVar3 = fVar2 + *pfVar3;
      pfVar3 = pfVar3 + 0x10;
    } while (lVar6 != lVar4);
  }
  uVar5 = 0;
  do {
    lVar6 = *(longlong *)(param_1 + 0x4018 + (ulonglong)(uVar5 & 7) * 8);
    if (lVar6 != 0) {
      ApplyOffset(lVar6,param_2);
    }
    if (((byte)uVar5 & 7) < 7) {
      uVar5 = uVar5 ^ (uVar5 + 1 ^ uVar5) & 7;
    }
    else {
      uVar5 = uVar5 | 8;
    }
  } while (uVar5 >> 3 == 0);
  return;
}



// FUNCTION 141d1da30 FUN_141d1da30 body=564 status=ok
// SIG undefined FUN_141d1da30(void)

void FUN_141d1da30(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar11 = *(int *)(param_1 + 0x68);
  puStack_58 = (uint *)(param_1 + 0x50);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar11 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_58;
    }
    uVar5 = *puVar12;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar7 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar7) goto LAB_141d1daff;
      uVar5 = puVar12[lVar10 + 1];
    }
    uStack_94 = -uVar5 & uVar5;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
    if (iVar11 < local_88._4_4_) {
LAB_141d1daff:
      local_88._4_4_ = iVar11;
    }
  }
  iStack_60 = local_98;
  uStack_5c = uStack_94;
  uStack_50 = 0xffffffff;
  iStack_4c = local_88._4_4_;
  iStack_48 = uStack_80;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78 = uStack_80;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  if (local_88._4_4_ < iVar11) {
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    local_70 = plVar1;
    local_68 = plVar1;
    local_88 = puStack_58;
    do {
      iVar11 = 0;
      lVar10 = (longlong)iStack_7c * 0xe8 + *plVar1;
      if (0 < *(int *)(lVar10 + 0x18)) {
        lVar9 = 0;
        do {
          lVar6 = *(longlong *)(lVar10 + 0x10);
          iVar11 = iVar11 + 1;
          *(float *)(lVar9 + 0x10 + lVar6) = fVar2 + *(float *)(lVar9 + 0x10 + lVar6);
          *(float *)(lVar9 + 0x14 + lVar6) = fVar3 + *(float *)(lVar9 + 0x14 + lVar6);
          *(float *)(lVar9 + 0x18 + lVar6) = fVar4 + *(float *)(lVar9 + 0x18 + lVar6);
          lVar9 = lVar9 + 0x38;
        } while (iVar11 < *(int *)(lVar10 + 0x18));
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      *(float *)(lVar10 + 0xbc) = fVar2 + *(float *)(lVar10 + 0xbc);
      *(float *)(lVar10 + 0xc0) = fVar3 + *(float *)(lVar10 + 0xc0);
      *(float *)(lVar10 + 0xc4) = fVar4 + *(float *)(lVar10 + 0xc4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  return;
}



// FUNCTION 141d1dc70 FUN_141d1dc70 body=564 status=ok
// SIG undefined FUN_141d1dc70(void)

void FUN_141d1dc70(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar11 = *(int *)(param_1 + 0x68);
  puStack_58 = (uint *)(param_1 + 0x50);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar11 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_58;
    }
    uVar5 = *puVar12;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar7 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar7) goto LAB_141d1dd3f;
      uVar5 = puVar12[lVar10 + 1];
    }
    uStack_94 = -uVar5 & uVar5;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
    if (iVar11 < local_88._4_4_) {
LAB_141d1dd3f:
      local_88._4_4_ = iVar11;
    }
  }
  iStack_60 = local_98;
  uStack_5c = uStack_94;
  uStack_50 = 0xffffffff;
  iStack_4c = local_88._4_4_;
  iStack_48 = uStack_80;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78 = uStack_80;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  if (local_88._4_4_ < iVar11) {
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    local_70 = plVar1;
    local_68 = plVar1;
    local_88 = puStack_58;
    do {
      iVar11 = 0;
      lVar10 = (longlong)iStack_7c * 0xf0 + *plVar1;
      if (0 < *(int *)(lVar10 + 0x18)) {
        lVar9 = 0;
        do {
          lVar6 = *(longlong *)(lVar10 + 0x10);
          iVar11 = iVar11 + 1;
          *(float *)(lVar9 + 0x10 + lVar6) = fVar2 + *(float *)(lVar9 + 0x10 + lVar6);
          *(float *)(lVar9 + 0x14 + lVar6) = fVar3 + *(float *)(lVar9 + 0x14 + lVar6);
          *(float *)(lVar9 + 0x18 + lVar6) = fVar4 + *(float *)(lVar9 + 0x18 + lVar6);
          lVar9 = lVar9 + 0x38;
        } while (iVar11 < *(int *)(lVar10 + 0x18));
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      *(float *)(lVar10 + 0xc4) = fVar2 + *(float *)(lVar10 + 0xc4);
      *(float *)(lVar10 + 200) = fVar3 + *(float *)(lVar10 + 200);
      *(float *)(lVar10 + 0xcc) = fVar4 + *(float *)(lVar10 + 0xcc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  return;
}



// FUNCTION 141d1deb0 FUN_141d1deb0 body=564 status=ok
// SIG undefined FUN_141d1deb0(void)

void FUN_141d1deb0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar11 = *(int *)(param_1 + 0x68);
  puStack_58 = (uint *)(param_1 + 0x50);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar11 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_58;
    }
    uVar5 = *puVar12;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar7 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar7) goto LAB_141d1df7f;
      uVar5 = puVar12[lVar10 + 1];
    }
    uStack_94 = -uVar5 & uVar5;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
    if (iVar11 < local_88._4_4_) {
LAB_141d1df7f:
      local_88._4_4_ = iVar11;
    }
  }
  iStack_60 = local_98;
  uStack_5c = uStack_94;
  uStack_50 = 0xffffffff;
  iStack_4c = local_88._4_4_;
  iStack_48 = uStack_80;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78 = uStack_80;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  if (local_88._4_4_ < iVar11) {
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    local_70 = plVar1;
    local_68 = plVar1;
    local_88 = puStack_58;
    do {
      iVar11 = 0;
      lVar10 = (longlong)iStack_7c * 0xd8 + *plVar1;
      if (0 < *(int *)(lVar10 + 0x18)) {
        lVar9 = 0;
        do {
          lVar6 = *(longlong *)(lVar10 + 0x10);
          iVar11 = iVar11 + 1;
          *(float *)(lVar9 + 0x10 + lVar6) = fVar2 + *(float *)(lVar9 + 0x10 + lVar6);
          *(float *)(lVar9 + 0x14 + lVar6) = fVar3 + *(float *)(lVar9 + 0x14 + lVar6);
          *(float *)(lVar9 + 0x18 + lVar6) = fVar4 + *(float *)(lVar9 + 0x18 + lVar6);
          lVar9 = lVar9 + 0x38;
        } while (iVar11 < *(int *)(lVar10 + 0x18));
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      *(float *)(lVar10 + 0xac) = fVar2 + *(float *)(lVar10 + 0xac);
      *(float *)(lVar10 + 0xb0) = fVar3 + *(float *)(lVar10 + 0xb0);
      *(float *)(lVar10 + 0xb4) = fVar4 + *(float *)(lVar10 + 0xb4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  return;
}



// FUNCTION 141d1e0f0 FUN_141d1e0f0 body=564 status=ok
// SIG undefined FUN_141d1e0f0(void)

void FUN_141d1e0f0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar11 = *(int *)(param_1 + 0x68);
  puStack_58 = (uint *)(param_1 + 0x50);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar11 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_58;
    }
    uVar5 = *puVar12;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar7 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar7) goto LAB_141d1e1bf;
      uVar5 = puVar12[lVar10 + 1];
    }
    uStack_94 = -uVar5 & uVar5;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
    if (iVar11 < local_88._4_4_) {
LAB_141d1e1bf:
      local_88._4_4_ = iVar11;
    }
  }
  iStack_60 = local_98;
  uStack_5c = uStack_94;
  uStack_50 = 0xffffffff;
  iStack_4c = local_88._4_4_;
  iStack_48 = uStack_80;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78 = uStack_80;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  if (local_88._4_4_ < iVar11) {
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    local_70 = plVar1;
    local_68 = plVar1;
    local_88 = puStack_58;
    do {
      iVar11 = 0;
      lVar10 = (longlong)iStack_7c * 200 + *plVar1;
      if (0 < *(int *)(lVar10 + 0x18)) {
        lVar9 = 0;
        do {
          lVar6 = *(longlong *)(lVar10 + 0x10);
          iVar11 = iVar11 + 1;
          *(float *)(lVar9 + 0x10 + lVar6) = fVar2 + *(float *)(lVar9 + 0x10 + lVar6);
          *(float *)(lVar9 + 0x14 + lVar6) = fVar3 + *(float *)(lVar9 + 0x14 + lVar6);
          *(float *)(lVar9 + 0x18 + lVar6) = fVar4 + *(float *)(lVar9 + 0x18 + lVar6);
          lVar9 = lVar9 + 0x38;
        } while (iVar11 < *(int *)(lVar10 + 0x18));
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      *(float *)(lVar10 + 0x9c) = fVar2 + *(float *)(lVar10 + 0x9c);
      *(float *)(lVar10 + 0xa0) = fVar3 + *(float *)(lVar10 + 0xa0);
      *(float *)(lVar10 + 0xa4) = fVar4 + *(float *)(lVar10 + 0xa4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  return;
}



// FUNCTION 141d1e330 FUN_141d1e330 body=564 status=ok
// SIG undefined FUN_141d1e330(void)

void FUN_141d1e330(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar11 = *(int *)(param_1 + 0x68);
  puStack_58 = (uint *)(param_1 + 0x50);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar11 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_58;
    }
    uVar5 = *puVar12;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar7 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar7) goto LAB_141d1e3ff;
      uVar5 = puVar12[lVar10 + 1];
    }
    uStack_94 = -uVar5 & uVar5;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
    if (iVar11 < local_88._4_4_) {
LAB_141d1e3ff:
      local_88._4_4_ = iVar11;
    }
  }
  iStack_60 = local_98;
  uStack_5c = uStack_94;
  uStack_50 = 0xffffffff;
  iStack_4c = local_88._4_4_;
  iStack_48 = uStack_80;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78 = uStack_80;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  if (local_88._4_4_ < iVar11) {
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    local_70 = plVar1;
    local_68 = plVar1;
    local_88 = puStack_58;
    do {
      iVar11 = 0;
      lVar10 = (longlong)iStack_7c * 0xe0 + *plVar1;
      if (0 < *(int *)(lVar10 + 0x18)) {
        lVar9 = 0;
        do {
          lVar6 = *(longlong *)(lVar10 + 0x10);
          iVar11 = iVar11 + 1;
          *(float *)(lVar9 + 0x10 + lVar6) = fVar2 + *(float *)(lVar9 + 0x10 + lVar6);
          *(float *)(lVar9 + 0x14 + lVar6) = fVar3 + *(float *)(lVar9 + 0x14 + lVar6);
          *(float *)(lVar9 + 0x18 + lVar6) = fVar4 + *(float *)(lVar9 + 0x18 + lVar6);
          lVar9 = lVar9 + 0x38;
        } while (iVar11 < *(int *)(lVar10 + 0x18));
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      *(float *)(lVar10 + 0xb4) = fVar2 + *(float *)(lVar10 + 0xb4);
      *(float *)(lVar10 + 0xb8) = fVar3 + *(float *)(lVar10 + 0xb8);
      *(float *)(lVar10 + 0xbc) = fVar4 + *(float *)(lVar10 + 0xbc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  return;
}



// FUNCTION 141d1e570 FUN_141d1e570 body=545 status=ok
// SIG undefined FUN_141d1e570(void)

void FUN_141d1e570(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_28;
  undefined4 local_20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_48);
    local_28 = *param_2;
    local_20 = (undefined4)param_2[1];
    FUN_141d1e7a0(param_1,&local_28);
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_48._0_4_);
    return;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar8 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar8 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar8);
    plVar7 = plVar8;
  }
  plVar8 = (longlong *)plVar7[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar7;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
      plVar7[1] = (longlong)plVar8;
      if (plVar8 == (longlong *)0x0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar7[1] = (longlong)puVar9;
        lVar11 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar11 = lVar11 + -1;
          puVar9 = puVar2;
        } while (lVar11 != 0);
        *puVar2 = 0;
        plVar8 = (longlong *)plVar7[1];
      }
      iVar10 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar7[1] = (longlong)plVar8;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar10 = (int)plVar7[2];
  }
  lVar11 = *param_2;
  plVar7[1] = *plVar8;
  *(int *)(plVar7 + 2) = iVar10 + -1;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  local_40 = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
  *plVar8 = (longlong)&PTR_FUN_144e48810;
  lVar3 = param_2[1];
  *(undefined1 *)(plVar8 + 5) = 0;
  plVar8[6] = 0;
  plVar8[3] = lVar11;
  *(int *)(plVar8 + 4) = (int)lVar3;
  plVar8[2] = param_1;
  lVar3 = plVar8[6];
  piVar1 = (int *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar3;
  FUN_14048a160(lVar11,0,0xff,1);
  if (lVar3 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 141d1e7a0 FUN_141d1e7a0 body=1858 status=ok
// SIG undefined FUN_141d1e7a0(void)

void FUN_141d1e7a0(longlong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_80;
  float local_74;
  undefined1 local_68 [80];
  
  iVar16 = 0;
  for (iVar13 = 0; (-1 < iVar13 && (iVar13 < *(int *)(param_1 + 0xfe8))); iVar13 = iVar13 + 1) {
    local_e0 = param_2[2];
    local_e8 = *(undefined8 *)param_2;
    plVar5 = *(longlong **)
              (*(longlong *)(*(longlong *)(param_1 + 0xfe0) + (longlong)iVar13 * 8) + 8);
    (**(code **)(*plVar5 + 0x120))(plVar5,&local_e8);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x13d8);
  puVar15 = puVar14 + (longlong)*(int *)(param_1 + 0x13e0) * 2;
  for (; puVar14 != puVar15; puVar14 = puVar14 + 2) {
    FUN_1426fae60(*puVar14,param_2);
  }
  if (*(longlong *)(param_1 + 0x1a68) != 0) {
    FPrecomputedVisibilityHandler::ApplyWorldOffset(*(longlong *)(param_1 + 0x1a68),param_2);
  }
  FUN_141b6e2d0(param_1 + 0x13e8,param_1,0);
  TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::ApplyOffset
            (param_1 + 0x1e20,param_2,1);
  for (iVar13 = 0; (-1 < iVar13 && (iVar13 < *(int *)(param_1 + 0x1008))); iVar13 = iVar13 + 1) {
    lVar10 = (longlong)iVar13;
    lVar12 = *(longlong *)(param_1 + 0x1000);
    *(float *)(lVar12 + lVar10 * 0x28) = *(float *)(lVar12 + lVar10 * 0x28) + *param_2;
    *(float *)(lVar12 + 4 + lVar10 * 0x28) = param_2[1] + *(float *)(lVar12 + 4 + lVar10 * 0x28);
    *(float *)(lVar12 + 8 + lVar10 * 0x28) = param_2[2] + *(float *)(lVar12 + 8 + lVar10 * 0x28);
  }
  for (iVar13 = 0; (-1 < iVar13 && (iVar13 < *(int *)(param_1 + 0x1048))); iVar13 = iVar13 + 1) {
    pfVar11 = (float *)((longlong)iVar13 * 0x1c + *(longlong *)(param_1 + 0x1040));
    *pfVar11 = *pfVar11 + *param_2;
    pfVar11[1] = param_2[1] + pfVar11[1];
    pfVar11[2] = pfVar11[2] + param_2[2];
  }
  fVar2 = param_2[2];
  fVar3 = param_2[1];
  fVar4 = *param_2;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            (&local_d8,param_1 + 0x1070);
  if ((int)local_bc < *(int *)(CONCAT44(fStack_c4,fStack_c8) + 0x18)) {
    do {
      lVar10 = (longlong)(int)local_bc;
      lVar12 = *(longlong *)CONCAT44(fStack_d4,local_d8);
      pfVar11 = (float *)(lVar12 + lVar10 * 0x30);
      fVar6 = pfVar11[1];
      fVar7 = pfVar11[2];
      fVar8 = pfVar11[3];
      pfVar1 = (float *)(lVar12 + lVar10 * 0x30);
      *pfVar1 = *pfVar11 + fVar4;
      pfVar1[1] = fVar6 + fVar3;
      pfVar1[2] = fVar7 + fVar2;
      pfVar1[3] = fVar8 + 0.0;
      local_e8 = *(undefined8 *)param_2;
      local_e0 = param_2[2];
      plVar5 = *(longlong **)
                (*(longlong *)(*(longlong *)CONCAT44(fStack_d4,local_d8) + 0x20 + lVar10 * 0x30) +
                0x30);
      (**(code **)(*plVar5 + 0xf0))(plVar5,&local_e8);
      local_c0 = (float)((uint)local_c0 & ~(uint)fStack_cc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_d0);
    } while ((int)local_bc < *(int *)(CONCAT44(fStack_c4,fStack_c8) + 0x18));
  }
  TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::ApplyOffset(param_1 + 0x1a70,param_2,1);
  for (iVar13 = 0; (-1 < iVar13 && (iVar13 < *(int *)(param_1 + 0x17f8))); iVar13 = iVar13 + 1) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x17f0) + (longlong)iVar13 * 8);
    *(float *)(lVar12 + 0x44) = *(float *)(lVar12 + 0x44) - *param_2;
    *(float *)(lVar12 + 0x48) = *(float *)(lVar12 + 0x48) - param_2[1];
    *(float *)(lVar12 + 0x4c) = *(float *)(lVar12 + 0x4c) - param_2[2];
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x17f0) + (longlong)iVar13 * 8);
    *(float *)(lVar12 + 0x3a4) = *(float *)(lVar12 + 0x3a4) + *param_2;
    *(float *)(lVar12 + 0x3a8) = param_2[1] + *(float *)(lVar12 + 0x3a8);
    *(float *)(lVar12 + 0x3ac) = param_2[2] + *(float *)(lVar12 + 0x3ac);
  }
  for (iVar13 = 0; (-1 < iVar13 && (iVar13 < *(int *)(param_1 + 0x1918))); iVar13 = iVar13 + 1) {
    local_e0 = param_2[2];
    local_e8 = *(undefined8 *)param_2;
    FWindSourceSceneProxy::ApplyWorldOffset
              (*(undefined8 *)(*(longlong *)(param_1 + 0x1910) + (longlong)iVar13 * 8),&local_e8);
  }
  iVar13 = 0;
  while( true ) {
    if ((iVar13 < 0) || (*(int *)(param_1 + 0x1218) <= iVar13)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) break;
    lVar12 = *(longlong *)(param_1 + 0x1210);
    pfVar11 = (float *)FMatrix::Inverse(*(longlong *)(lVar12 + (longlong)iVar13 * 8) + 0x50,local_68
                                       );
    local_d8 = *pfVar11;
    fStack_d4 = pfVar11[1];
    fStack_d0 = pfVar11[2];
    fStack_cc = pfVar11[3];
    fStack_c8 = pfVar11[4];
    fStack_c4 = pfVar11[5];
    local_c0 = pfVar11[6];
    local_bc = pfVar11[7];
    local_b8 = pfVar11[8];
    local_b4 = pfVar11[9];
    local_b0 = pfVar11[10];
    local_ac = pfVar11[0xb];
    local_a8 = pfVar11[0xc] + *param_2;
    local_a4 = pfVar11[0xd] + param_2[1];
    local_a0 = pfVar11[0xe] + param_2[2];
    local_9c = pfVar11[0xf];
    FReflectionCaptureProxy::SetTransform(*(undefined8 *)(lVar12 + (longlong)iVar13 * 8),&local_d8);
    iVar13 = iVar13 + 1;
  }
  for (; (-1 < iVar16 && (iVar16 < *(int *)(param_1 + 0x11f0))); iVar16 = iVar16 + 1) {
    local_c0 = (float)CONCAT31(local_c0._1_3_,1);
    pfVar11 = *(float **)(*(longlong *)(param_1 + 0x11e8) + (longlong)iVar16 * 8);
    fStack_c4 = param_2[2] + pfVar11[5];
    fStack_d0 = param_2[2] + pfVar11[2];
    local_d8 = *param_2 + *pfVar11;
    fStack_d4 = param_2[1] + pfVar11[1];
    fStack_cc = *param_2 + pfVar11[3];
    fStack_c8 = param_2[1] + pfVar11[4];
    *pfVar11 = local_d8;
    pfVar11[1] = fStack_d4;
    pfVar11[2] = fStack_d0;
    pfVar11[3] = fStack_cc;
    *(ulonglong *)(pfVar11 + 4) = CONCAT44(fStack_c4,fStack_c8);
    pfVar11[6] = local_c0;
    pfVar11[0xc] = *param_2 + pfVar11[0xc];
    pfVar11[0xd] = pfVar11[0xd] + param_2[1];
    pfVar11[0xe] = pfVar11[0xe] + param_2[2];
    local_98 = pfVar11[8];
    fStack_94 = pfVar11[9];
    fStack_90 = pfVar11[10];
    fStack_8c = (float)((ulonglong)*(undefined8 *)(pfVar11 + 0xc) >> 0x20) * pfVar11[9] +
                (float)*(undefined8 *)(pfVar11 + 0xc) * pfVar11[8] + pfVar11[0xe] * pfVar11[10];
    pfVar11[8] = local_98;
    pfVar11[9] = fStack_94;
    pfVar11[10] = fStack_90;
    pfVar11[0xb] = fStack_8c;
    local_80 = fStack_d0;
    local_74 = fStack_c4;
  }
  lVar12 = *(longlong *)(param_1 + 0x18f8);
  lVar10 = (longlong)*(int *)(param_1 + 0x1900) * 0xa0 + lVar12;
  for (; lVar12 != lVar10; lVar12 = lVar12 + 0xa0) {
    *(float *)(lVar12 + 8) = param_2[2] + *(float *)(lVar12 + 8);
  }
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d1e0f0(param_1 + 0x70,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d1dc70(param_1 + 0x108,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d1dc70(param_1 + 0x1a0,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d0e500(param_1 + 0x400,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d0e500(param_1 + 0x5c8,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d0e500(param_1 + 0x238,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d1deb0(param_1 + 0x958,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d1deb0(param_1 + 0x9f0,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d1e330(param_1 + 0xa88,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d1da30(param_1 + 0xb20,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d0e740(param_1 + 0xc50,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FUN_141d0e740(param_1 + 0xe18,&local_e8);
  local_e8 = *(undefined8 *)param_2;
  local_e0 = param_2[2];
  FMotionBlurInfoData::ApplyOffset(param_1 + 0x5ee0,&local_e8);
  return;
}



// FUNCTION 141d1eef0 FUN_141d1eef0 body=526 status=ok
// SIG undefined FUN_141d1eef0(void)

void FUN_141d1eef0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  char *pcVar9;
  uint uVar10;
  longlong lVar11;
  char local_res8 [8];
  undefined1 local_5c [16];
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_30;
  undefined1 local_28 [4];
  uint local_24;
  longlong local_20;
  uint local_18;
  int local_14;
  
  builtin_strncpy(local_res8,"\x01\x01\x01\x01",4);
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            (&local_30,param_1 + 0x1070);
  if (local_14 < *(int *)(local_20 + 0x18)) {
    do {
      lVar11 = (longlong)local_14 * 0x30 + *local_30;
      lVar1 = *(longlong *)(lVar11 + 0x20);
      if (lVar1 != param_2) {
        uVar6 = *(uint *)(*(longlong *)(lVar1 + 0x30) + 0x180);
        if ((uVar6 >> 4 & 1) != 0) {
          if ((uVar6 >> 3 & 1) == 0) {
            iVar5 = *(int *)(lVar1 + 0x88);
          }
          else {
            iVar5 = *(int *)(*(longlong *)(lVar1 + 0x30) + 0x14c);
          }
          if (-1 < iVar5) {
            puVar7 = (undefined8 *)
                     (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))
                               (*(longlong **)(param_2 + 0x30),local_5c);
            local_4c = *puVar7;
            local_44 = *(undefined4 *)(puVar7 + 1);
            local_38 = *(undefined4 *)((longlong)puVar7 + 0xc);
            local_40 = CONCAT44(local_38,local_38);
            local_34 = *(undefined4 *)((longlong)puVar7 + 0xc);
            plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x20) + 0x30);
            cVar4 = (**(code **)(*plVar2 + 8))(plVar2,&local_4c);
            if (cVar4 != '\0') {
              lVar1 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0x30);
              if ((*(uint *)(lVar1 + 0x180) >> 3 & 1) == 0) {
                uVar6 = *(uint *)(*(longlong *)(lVar11 + 0x20) + 0x88);
              }
              else {
                uVar6 = *(uint *)(lVar1 + 0x14c);
              }
              if (uVar6 < 4) {
                if (3 < (ulonglong)(longlong)(int)uVar6) {
                    /* WARNING: Subroutine does not return */
                  __report_rangecheckfailure();
                }
                local_res8[(int)uVar6] = '\0';
              }
            }
          }
        }
      }
      local_18 = local_18 & ~local_24;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_28);
    } while (local_14 < *(int *)(local_20 + 0x18));
  }
  pcVar9 = local_res8;
  uVar6 = 0;
  do {
    uVar10 = uVar6;
    if (*pcVar9 != '\0') break;
    uVar6 = uVar6 + 1;
    pcVar9 = pcVar9 + 1;
    uVar10 = 0xffffffff;
  } while (uVar6 < 4);
  *(uint *)(param_2 + 0x88) = uVar10;
  if (uVar10 == 0xffffffff) {
    plVar2 = (longlong *)(param_1 + 0x1130);
    plVar3 = (longlong *)*plVar2;
    iVar5 = *(int *)(param_1 + 0x1138);
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 400);
    for (plVar8 = plVar3; plVar8 != plVar3 + iVar5; plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar1) {
        if ((int)((longlong)plVar8 - (longlong)plVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(param_1 + 0x1138) = iVar5 + 1;
    if (*(int *)(param_1 + 0x113c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar5);
    }
    *(longlong *)(*plVar2 + (longlong)iVar5 * 8) = lVar1;
  }
  return;
}



// FUNCTION 141d1f100 FUN_141d1f100 body=264 status=ok
// SIG undefined FUN_141d1f100(void)

void FUN_141d1f100(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res18 [16];
  
  if (DAT_146ab62df != '\0') {
    iVar4 = *(int *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x28 + (longlong)iVar4 * 8) == 0) {
      lVar6 = 0;
      if (DAT_146ab6383 != '\0') {
        cVar2 = FUN_141ed7f80(param_2);
        if (cVar2 != '\0') {
          lVar6 = param_2;
        }
      }
      (**(code **)(*DAT_146ab6358 + 0x338))(DAT_146ab6358,local_res18,2);
      if (lVar6 != 0) {
        FRHICommandListImmediate::UnStallRHIThread(lVar6);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=
                (param_1 + ((longlong)*(int *)(param_1 + 0x20) + 5) * 8,local_res18);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
      iVar4 = *(int *)(param_1 + 0x20);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *(undefined8 *)(param_1 + 0x28 + (longlong)iVar4 * 8);
    puVar3 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59490;
    puVar5[2] = uVar1;
  }
  return;
}



// FUNCTION 141d1f210 FUN_141d1f210 body=8 status=ok
// SIG undefined FUN_141d1f210(void)

void FUN_141d1f210(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}



// FUNCTION 141d1f220 BeginReflectionCaptureSlowTask body=971 status=ok
// SIG undefined BeginReflectionCaptureSlowTask(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void BeginReflectionCaptureSlowTask(int param_1,short *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  longlong local_148;
  ulonglong local_140;
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  if (0x14 < param_1) {
    local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_168;
    FText::FText();
    if (param_2 == (short *)0x0) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a8,L"Building reflection captures...",L"Engine",
                         L"UpdateReflectionCaptures");
      FText::operator=(local_128,uVar6);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
    else {
      local_148 = 0;
      local_140 = 0;
      if (*param_2 != 0) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (param_2[lVar9] != 0);
        uVar8 = (int)lVar9 + 1;
        local_140 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        }
        FGenericPlatformString::Memcpy(local_148,param_2,(longlong)(int)uVar8 * 2);
      }
      lVar9 = FText::FromString(local_80,&local_148);
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c0,L"Building reflection captures for {0}",L"Engine",
                         L"UpdateReflectionCapturesForX");
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar6);
      local_68[0] = 4;
      FText::FText(local_58,lVar9);
      local_110 = *puVar7;
      puStack_130 = local_38;
      local_108 = puVar7[1];
      local_40 = '\x01';
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      local_138 = local_68;
      uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_100,&local_138);
      uVar6 = FText::Format(local_d8,&local_110,uVar6);
      FText::FText(local_f0,uVar6);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_d0 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_100);
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      plVar4 = (longlong *)puVar7[1];
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
      plVar4 = *(longlong **)(lVar9 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      FText::operator=(local_128,local_f0);
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_e8 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b8 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      if (local_148 != 0) {
        FMemory::Free();
      }
    }
    FUN_141664530(DAT_1468b6160,local_128,1,0);
    FUN_141682490(DAT_1468b6160,0,param_1,local_128);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_120 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d1f5f0 FUN_141d1f5f0 body=925 status=ok
// SIG undefined FUN_141d1f5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141d1f5f0(float *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res10;
  float local_f8;
  float local_f4;
  float local_f0;
  
  fVar18 = DAT_1464c2f5c;
  fVar17 = DAT_1464c2f58;
  uVar3 = _DAT_1464aa7e8;
  uVar2 = _DAT_1464aa7e0;
  uVar1 = _DAT_1464aa7d8;
  *(undefined8 *)param_1 = _DAT_1464aa7d0;
  *(undefined8 *)(param_1 + 2) = uVar1;
  fVar5 = DAT_1464c2f60;
  uVar4 = _DAT_1464aa7f8;
  uVar1 = _DAT_1464aa7f0;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar3;
  uVar3 = uRam00000001464aa808;
  uVar2 = _DAT_1464aa800;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  local_res10 = fVar5;
  switch(param_2) {
  case 0:
    local_f8 = DAT_1464c2f48;
    local_f4 = DAT_1464c2f4c;
    local_f0 = DAT_1464c2f50;
    break;
  case 1:
    local_f8 = -DAT_1464c2f48;
    local_f4 = -DAT_1464c2f4c;
    local_f0 = -DAT_1464c2f50;
    break;
  case 2:
    local_res10 = -DAT_1464c2f70;
    local_f8 = fVar17;
    local_f4 = fVar18;
    local_f0 = fVar5;
    fVar17 = -DAT_1464c2f68;
    fVar18 = -DAT_1464c2f6c;
    break;
  case 3:
    local_res10 = DAT_1464c2f70;
    local_f8 = -fVar17;
    local_f4 = -fVar18;
    local_f0 = -fVar5;
    fVar17 = DAT_1464c2f68;
    fVar18 = DAT_1464c2f6c;
    break;
  case 4:
    local_f8 = DAT_1464c2f68;
    local_f4 = DAT_1464c2f6c;
    local_f0 = DAT_1464c2f70;
    break;
  case 5:
    local_f8 = -DAT_1464c2f68;
    local_f4 = -DAT_1464c2f6c;
    local_f0 = -DAT_1464c2f70;
  }
  fVar11 = local_f0 * fVar18 - local_res10 * local_f4;
  fVar14 = fVar17 * DAT_1468b5d90;
  fVar13 = local_res10 * local_f8 - local_f0 * fVar17;
  fVar15 = fVar17 * local_f4 - fVar18 * local_f8;
  fVar16 = fVar13 * DAT_1468b5d94;
  fVar5 = fVar11 * DAT_1468b5d90;
  fVar8 = fVar15 * DAT_1468b5d98;
  fVar6 = fVar18 * DAT_1468b5d94;
  fVar9 = local_res10 * DAT_1468b5d98;
  fVar7 = local_f4 * DAT_1468b5d94;
  fVar12 = local_f8 * DAT_1468b5d90;
  fVar10 = local_f0 * DAT_1468b5d98;
  *param_1 = fVar11;
  param_1[1] = fVar17;
  param_1[2] = local_f8;
  param_1[3] = 0.0;
  param_1[4] = fVar13;
  param_1[5] = fVar18;
  param_1[6] = local_f4;
  param_1[7] = 0.0;
  param_1[8] = fVar15;
  param_1[9] = local_res10;
  param_1[10] = local_f0;
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar16 + fVar5 + fVar8;
  param_1[0xd] = fVar14 + fVar6 + fVar9;
  param_1[0xe] = fVar12 + fVar7 + fVar10;
  param_1[0xf] = 1.0;
  return param_1;
}



// FUNCTION 141d1f9b0 FUN_141d1f9b0 body=73 status=ok
// SIG undefined FUN_141d1f9b0(void)

void FUN_141d1f9b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar1 = lVar3 + (longlong)(int)param_1[1] * 8;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 8) {
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 != 0) {
      FUN_1423b8c40(lVar2);
    }
  }
  return;
}



// FUNCTION 141d1fa00 FUN_141d1fa00 body=366 status=ok
// SIG undefined FUN_141d1fa00(void)

void FUN_141d1fa00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  cVar7 = FUN_141d381a0(*(undefined4 *)(param_1 + 8));
  if (cVar7 != '\0') {
    uStack_50 = FUN_14238c0b0(param_2);
    if (uStack_50 != 0) {
      local_58 = param_1;
      local_48 = param_2;
      if (DAT_146ac3ac6 != '\0') {
        cVar7 = IsInRenderingThread();
        if (cVar7 != '\0') {
          uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_141d14eb0(&local_58,uVar9);
          return;
        }
      }
      if (DAT_146ac3ac5 == '\0') {
        cVar7 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar7 != '\0') || (DAT_1468c21ae == '\0')) {
LAB_141d1faa6:
          local_40 = (undefined4)local_58;
          uStack_3c = local_58._4_4_;
          uStack_38 = (undefined4)uStack_50;
          uStack_34 = uStack_50._4_4_;
          local_30 = local_48;
          uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_141d14eb0(&local_40,uVar9);
          return;
        }
        DVar8 = GetCurrentThreadId();
        if (DVar8 == DAT_1468c21c0) goto LAB_141d1faa6;
      }
      plVar10 = (longlong *)FUN_141d28eb0(local_28,0,0xff);
      lVar3 = *plVar10;
      *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_58;
      *(undefined4 *)(lVar3 + 0x14) = local_58._4_4_;
      *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_50;
      *(undefined4 *)(lVar3 + 0x1c) = uStack_50._4_4_;
      *(undefined8 *)(lVar3 + 0x20) = local_48;
      lVar3 = *plVar10;
      lVar6 = plVar10[2];
      lVar4 = plVar10[1];
      lVar5 = *(longlong *)(lVar3 + 0x30);
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a160(lVar3,lVar4,(int)lVar6,1);
      if (lVar5 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d1fb70 FUN_141d1fb70 body=3367 status=ok
// SIG undefined FUN_141d1fb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d1fdc4) */
/* WARNING: Removing unreachable block (ram,0x000141d1fdd4) */
/* WARNING: Removing unreachable block (ram,0x000141d1fde3) */
/* WARNING: Removing unreachable block (ram,0x000141d20707) */
/* WARNING: Removing unreachable block (ram,0x000141d20717) */
/* WARNING: Removing unreachable block (ram,0x000141d20726) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d1fb70(longlong *param_1,undefined8 *param_2,int param_3,uint param_4,char param_5,
                  undefined4 param_6,undefined1 param_7,byte param_8,undefined8 *param_9)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  DWORD *pDVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  undefined1 auStack_698 [32];
  undefined4 local_678;
  undefined1 local_670;
  undefined8 *local_668;
  int local_658;
  uint local_650;
  undefined8 local_64c;
  undefined4 local_644;
  longlong local_640;
  undefined8 local_638;
  uint local_630;
  longlong local_628;
  int iStack_620;
  int iStack_61c;
  undefined4 local_618;
  undefined8 uStack_614;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  longlong local_600;
  longlong local_5f8;
  longlong local_5f0;
  undefined **local_5e8;
  longlong *plStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  uint uStack_5ac;
  LARGE_INTEGER local_5a8;
  LARGE_INTEGER local_5a0;
  undefined8 local_598;
  longlong local_590;
  undefined8 *local_588;
  LARGE_INTEGER local_580;
  LARGE_INTEGER local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined4 local_560;
  longlong local_558;
  ulonglong uStack_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined8 local_538;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  float fStack_514;
  undefined8 uStack_510;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined **local_4e8;
  longlong *plStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  uint uStack_4ac;
  longlong *local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_488;
  undefined8 local_478;
  longlong *local_470;
  undefined8 local_468;
  undefined4 local_460;
  longlong local_458;
  int local_450;
  int local_44c;
  uint local_430;
  uint local_42c;
  undefined8 *local_3b0;
  undefined1 local_3a8 [32];
  undefined1 local_388 [64];
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  float fStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_278;
  undefined8 local_228;
  int local_220;
  int local_21c;
  undefined8 local_218;
  int local_210;
  int local_20c;
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_160;
  undefined4 local_158;
  undefined1 local_150 [64];
  longlong local_110;
  undefined4 local_108;
  char local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_698;
  iVar17 = 0;
  local_630 = (param_4 & 0xff ^ 1) << 0x1b;
  local_650 = (param_8 ^ 1) << 0xc;
  fVar18 = (float)param_3;
  local_590 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_658 = param_3;
  local_588 = param_2;
  do {
    plVar13 = (longlong *)0x0;
    cVar5 = (char)param_4;
    if (cVar5 == '\0') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
        uVar7 = FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_5a0);
        DAT_1464aaa90 = DAT_1464aaa90 + 1;
        FRHICommandList::BeginFrame(uVar7);
        QueryPerformanceCounter(&local_5a8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_5a8.s.LowPart - local_5a0._0_4_);
      }
      else {
        pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar8 = TlsGetValue(*pDVar12);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = 0;
            plVar8[1] = 0;
            *(undefined4 *)(plVar8 + 2) = 0;
            plVar13 = plVar8;
          }
          TlsSetValue(*pDVar12,plVar13);
          plVar8 = plVar13;
        }
        plVar13 = (longlong *)plVar8[1];
        if (plVar13 == (longlong *)0x0) {
          if (*plVar8 == 0) {
            lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
            plVar8[1] = lVar9;
            if (lVar9 == 0) {
              puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar8[1] = (longlong)puVar11;
              lVar9 = 0x1f;
              do {
                puVar10 = puVar11 + 0x20;
                *puVar11 = puVar10;
                lVar9 = lVar9 + -1;
                puVar11 = puVar10;
              } while (lVar9 != 0);
              *puVar10 = 0;
            }
          }
          else {
            plVar8[1] = *plVar8;
            *plVar8 = 0;
          }
          plVar13 = (longlong *)plVar8[1];
          iVar14 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar14 = (int)plVar8[2];
        }
        plVar8[1] = *plVar13;
        *(int *)(plVar8 + 2) = iVar14 + -1;
        *plVar13 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar13 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
        *plVar13 = (longlong)&PTR_FUN_144e485c0;
        *(undefined1 *)((longlong)plVar13 + 0x11) = 0;
        plVar13[3] = 0;
        local_460 = 0xff;
        local_468 = 0;
        local_488 = 0;
        local_598 = 0;
        lVar9 = plVar13[3];
        piVar1 = (int *)(lVar9 + 0x48);
        if (lVar9 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_600 = lVar9;
        local_470 = plVar13;
        FUN_140445370(plVar13,0,0xff,1);
        param_3 = local_658;
        if (lVar9 != 0) {
          LOCK();
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle(local_600);
            param_3 = local_658;
          }
        }
      }
    }
    uVar15 = uStack_5ac & 0xfffffff4;
    local_64c = 0xf9ffffffffffffff;
    local_5d8 = 0xf9ffffffffffffff;
    local_644 = 0xffffffff;
    local_5e8 = &PTR_PTR_1464c2ee0;
    uStack_5d0 = 0xffffffffffffffff;
    local_5c8 = 0;
    uStack_5b0 = 0;
    uStack_5c0 = 0;
    uStack_5b8 = 0x3f80000000000000;
    _DAT_1464c2ef0 = param_3;
    plStack_5e0 = param_1;
    if (((param_1 != (longlong *)0x0) &&
        (lVar9 = (**(code **)(*param_1 + 0x208))(param_1), lVar9 != 0)) &&
       ((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' ||
        ((DAT_1468c21ae == '\0' || (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))))) {
      uVar15 = uVar15 | 8;
      uStack_5b8 = CONCAT44(uStack_5b8._4_4_,*(undefined4 *)(lVar9 + 0x798));
      uStack_5c0 = CONCAT44(*(undefined4 *)(lVar9 + 0x7b0),*(undefined4 *)(lVar9 + 0x790));
      uStack_5b0 = FUN_1428ccc70(lVar9);
    }
    lVar9 = 0;
    uStack_5ac = uVar15 & 0xfffffffb;
    local_4e8 = local_5e8;
    plStack_4e0 = plStack_5e0;
    local_4d8 = local_5d8;
    uStack_4d0 = uStack_5d0;
    local_4c8 = local_5c8;
    uStack_4c0 = uStack_5c0;
    local_4b8 = (undefined4)uStack_5b8;
    uStack_4b4 = uStack_5b8._4_4_;
    uStack_4b0 = uStack_5b0;
    uStack_4ac = uStack_5ac;
    if (param_5 != '\0') {
      uStack_4ac = uStack_5ac | 8;
      uStack_4c0 = 0;
      local_4b8 = 0;
    }
    FUN_142743490(&local_458,&local_4e8);
    local_430 = local_430 & 0xfeefbfde;
    local_42c = (local_42c & 0xf6f7ff7b | local_630) & 0xffffefff | local_650;
    if ((*(int *)(local_590 + 0x38) < DAT_146a83c88) &&
       (_Init_thread_header(&DAT_146a83c88), DAT_146a83c88 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar13 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))
                          (DAT_1468b1f88,L"r.CaptureAmbientCubemapInReflectionEnvironment");
      if (plVar13 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar13 + 0x38))(plVar13);
      }
      DAT_146a83c80 = lVar9;
      _Init_thread_footer(&DAT_146a83c88);
    }
    if (((DAT_146a83c80 != 0) && (cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 == '\0')) &&
       (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
    puVar11 = local_588;
    local_208 = &local_458;
    local_1c0 = _DAT_1464aa6c0;
    uStack_1b8 = _DAT_1464aa6c8;
    local_278 = 0;
    local_220 = DAT_1464c2e34 * param_3;
    local_c8 = 0;
    uStack_c0 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0xffffffff;
    local_1e8 = 0;
    local_1b0 = 0;
    local_1a8 = 0x42c80000;
    local_1a0 = 0;
    local_198 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0xffffffff;
    local_16c = 0;
    local_160 = 0;
    local_158 = 0;
    local_100 = '\0';
    local_f8 = 0xffffffffffffffff;
    local_f0 = 0x3f800000;
    local_ec = 0xbf800000;
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 0x100;
    local_d8 = 0x42b40000;
    local_d4 = 0x42b40000;
    local_d0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_9c = 0;
    local_98 = 1;
    local_96 = 0;
    local_228 = 0;
    local_218 = 0;
    local_1e0 = _DAT_1464aa6e0;
    uStack_1d8 = _DAT_1464aa6e8;
    local_1d0 = _DAT_1464aa6e0;
    uStack_1c8 = _DAT_1464aa6e8;
    uStack_4f0 = DAT_1464c2e30;
    if (cVar5 != '\0') {
      uStack_4f0 = param_6;
    }
    local_340 = *(undefined4 *)(local_588 + 1);
    local_528 = 0x3f7fffff;
    uStack_524 = 0;
    uStack_520 = 0;
    uStack_51c = 0;
    local_508 = 0;
    uStack_504 = 0;
    uStack_500 = 0;
    uStack_4fc = 0x3f800000;
    local_2f8 = 0x3f7fffff;
    uStack_2f4 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    local_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2d0 = 0;
    uStack_2cc = 0x3f800000;
    fStack_514 = ((float)DAT_1464c2e34 * fVar18 * 0.99999994) / ((float)DAT_1464c2e34 * fVar18);
    local_518 = 0;
    uStack_510 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    local_4f8 = 0;
    uStack_4ec = 0;
    local_2c8 = 0;
    uStack_2c4 = 0;
    uStack_2bc = 0;
    local_348 = *local_588;
    fStack_2e4 = fStack_514;
    uStack_2c0 = uStack_4f0;
    local_21c = local_220;
    local_210 = local_220;
    local_20c = local_220;
    puVar10 = (undefined8 *)FUN_141d1f5f0(local_388,iVar17);
    local_338 = *puVar10;
    uStack_330 = puVar10[1];
    local_328 = puVar10[2];
    uStack_320 = puVar10[3];
    local_318 = puVar10[4];
    uStack_310 = puVar10[5];
    local_308 = *(undefined4 *)(puVar10 + 6);
    uStack_304 = *(undefined4 *)((longlong)puVar10 + 0x34);
    uStack_300 = *(undefined4 *)(puVar10 + 7);
    uStack_2fc = *(undefined4 *)((longlong)puVar10 + 0x3c);
    lVar9 = operator_new(0x1aa0);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_142742170(lVar9,&local_348);
    }
    *(undefined8 *)(lVar9 + 0xfb0) = 0x3f800000;
    if (param_8 != 0) {
      *(undefined8 *)(lVar9 + 0xf80) = 0;
      *(undefined8 *)(lVar9 + 0xf88) = 0;
      *(undefined8 *)(lVar9 + 0xf90) = 0;
      *(undefined8 *)(lVar9 + 0xf98) = 0;
    }
    local_568 = *puVar11;
    *(char *)(lVar9 + 0x1208) = param_5;
    local_560 = *(undefined4 *)(puVar11 + 1);
    *(undefined1 *)(lVar9 + 0x1203) = 1;
    FUN_14275edd0(lVar9,&local_568);
    FUN_14274b020(lVar9,&local_348);
    iVar14 = local_450;
    lVar16 = (longlong)local_450;
    local_450 = local_450 + 1;
    if (local_44c < local_450) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_458,iVar14);
    }
    *(longlong *)(local_458 + lVar16 * 8) = lVar9;
    puVar11 = (undefined8 *)operator_new(0x20);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      local_678 = 0x3f800000;
      FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver(puVar11,&local_458,0x3f800000,0);
      *puVar11 = &PTR_FUN_1450e89a0;
    }
    local_3b0 = puVar11;
    lVar9 = FUN_141d64a80(&local_458,0);
    FString::PrintfImpl(&local_640,L"ReflectionEnvCaptureF%d",iVar17);
    plVar13 = (longlong *)(lVar9 + 0x280);
    if (plVar13 == &local_640) {
      if (local_640 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      *plVar13 = local_640;
      *(undefined4 *)(lVar9 + 0x288) = (undefined4)local_638;
      *(undefined4 *)(lVar9 + 0x28c) = local_638._4_4_;
      local_638 = 0;
      local_640 = 0;
    }
    uStack_614 = *param_9;
    local_618 = CONCAT31(CONCAT21(local_618._2_2_,param_7),cVar5);
    uStack_60c = (undefined4)param_9[1];
    uStack_608 = (undefined4)((ulonglong)param_9[1] >> 0x20);
    local_628 = lVar9;
    iStack_620 = iVar17;
    iStack_61c = param_3;
    if ((DAT_146ac3ac6 == '\0') || (cVar4 = IsInRenderingThread(), cVar4 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
        uStack_550 = CONCAT44(iStack_61c,iStack_620);
        local_558 = local_628;
        local_538 = CONCAT44(uStack_604,uStack_608);
        local_548 = local_618;
        uStack_544 = (undefined4)uStack_614;
        uStack_540 = uStack_614._4_4_;
        uStack_53c = uStack_60c;
        uVar7 = FBaseGraphTask::GetSmallTaskAllocator();
        local_668 = (undefined8 *)&uStack_544;
        local_670 = local_548._1_1_;
        local_678 = CONCAT31(local_678._1_3_,(undefined1)local_548);
        FUN_141d208a0(uVar7,local_558,uStack_550 & 0xffffffff);
      }
      else {
        plVar13 = (longlong *)FUN_141d27ae0(local_3a8,0,0xff);
        lVar9 = *plVar13;
        *(longlong *)(lVar9 + 0x10) = local_628;
        *(ulonglong *)(lVar9 + 0x18) = CONCAT44(iStack_61c,iStack_620);
        *(undefined4 *)(lVar9 + 0x20) = local_618;
        *(undefined4 *)(lVar9 + 0x24) = (undefined4)uStack_614;
        *(undefined4 *)(lVar9 + 0x28) = uStack_614._4_4_;
        *(undefined4 *)(lVar9 + 0x2c) = uStack_60c;
        *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack_604,uStack_608);
        lVar9 = *plVar13;
        lVar3 = plVar13[2];
        lVar16 = plVar13[1];
        lVar2 = *(longlong *)(lVar9 + 0x40);
        piVar1 = (int *)(lVar2 + 0x48);
        if (lVar2 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_5f8 = lVar2;
        FUN_14048a8b0(lVar9,lVar16,(int)lVar3);
        if (lVar2 != 0) {
          LOCK();
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle(local_5f8);
          }
        }
      }
    }
    else {
      uVar7 = FBaseGraphTask::GetSmallTaskAllocator();
      local_668 = &uStack_614;
      local_670 = local_618._1_1_;
      local_678 = CONCAT31(local_678._1_3_,(undefined1)local_618);
      FUN_141d208a0(uVar7,local_628,iStack_620);
    }
    if (cVar5 == '\0') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
        uVar7 = FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_578);
        FRHICommandList::EndFrame(uVar7);
        QueryPerformanceCounter(&local_580);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_580.s.LowPart - local_578._0_4_);
      }
      else {
        pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar13 = TlsGetValue(*pDVar12);
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)operator_new(0x18);
          if (plVar13 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            *plVar13 = 0;
            plVar13[1] = 0;
            *(undefined4 *)(plVar13 + 2) = 0;
          }
          TlsSetValue(*pDVar12,plVar13);
        }
        plVar8 = (longlong *)plVar13[1];
        if (plVar8 == (longlong *)0x0) {
          if (*plVar13 == 0) {
            lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
            plVar13[1] = lVar9;
            if (lVar9 == 0) {
              puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar13[1] = (longlong)puVar11;
              lVar9 = 0x1f;
              do {
                puVar10 = puVar11 + 0x20;
                *puVar11 = puVar10;
                lVar9 = lVar9 + -1;
                puVar11 = puVar10;
              } while (lVar9 != 0);
              *puVar10 = 0;
            }
          }
          else {
            plVar13[1] = *plVar13;
            *plVar13 = 0;
          }
          plVar8 = (longlong *)plVar13[1];
          iVar14 = 0x20;
          *(undefined4 *)(plVar13 + 2) = 0x20;
        }
        else {
          iVar14 = (int)plVar13[2];
        }
        plVar13[1] = *plVar8;
        *(int *)(plVar13 + 2) = iVar14 + -1;
        *plVar8 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar8 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_144e485d0;
        *(undefined1 *)((longlong)plVar8 + 0x11) = 0;
        plVar8[3] = 0;
        local_478 = 0;
        local_498 = 0xff;
        local_4a0 = 0;
        local_570 = 0;
        lVar9 = plVar8[3];
        piVar1 = (int *)(lVar9 + 0x48);
        if (lVar9 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_5f0 = lVar9;
        local_4a8 = plVar8;
        FUN_140445370(plVar8,0,0xff);
        param_3 = local_658;
        if (lVar9 != 0) {
          LOCK();
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle(local_5f0);
            param_3 = local_658;
          }
        }
      }
    }
    if (local_100 != '\0') {
      local_100 = '\0';
      local_108 = 0;
      if (local_110 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_150);
    }
    local_158 = 0;
    if (local_160 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_1a0);
    FUN_142745e10(&local_458);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 6);
  return;
}



// FUNCTION 141d208a0 FUN_141d208a0 body=1988 status=ok
// SIG undefined FUN_141d208a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d208a0(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4,
                  undefined1 param_5,undefined1 param_6,ulonglong param_7)

{
  wchar_t wVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_348 [32];
  float local_328;
  ulonglong local_320;
  undefined4 local_318;
  float local_310;
  float local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined1 local_2d8 [4];
  uint local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined *local_2b8;
  undefined1 *puStack_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  char local_290;
  undefined8 local_288;
  ulonglong local_280;
  longlong *local_278;
  undefined8 local_268;
  longlong *plStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  ulonglong local_21c;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined4 local_1b4;
  longlong local_1a8 [2];
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_190 [168];
  undefined8 local_e8;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_280 = param_7;
  local_2d0 = (undefined *)((ulonglong)local_2d0 & 0xffffffff00000000);
  local_2d8[0] = 0;
  bVar4 = false;
  puStack_2b0 = local_2d8;
  local_2b8 = &DAT_14060d670;
  local_2d4 = param_4;
  local_278 = param_2;
  lVar6 = FUN_1415d8310(&local_2b8,&DAT_146216a38);
  local_2a8 = (undefined8 *)(lVar6 + 0x18);
  local_2a0 = *local_2a8;
  local_298 = *(longlong *)(lVar6 + 0x28);
  local_290 = '\0';
  local_288 = *(undefined8 *)(lVar6 + 0x30);
  *(undefined8 ***)(lVar6 + 0x30) = &local_2a8;
  *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + 1;
  FDeferredUpdateResource::UpdateResources(param_1);
  iVar2 = (int)param_2[0x54];
  (**(code **)(*param_2 + 8))(param_2,param_1);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  if (*(int *)(param_1 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_1);
  }
  FUN_141ed93a0(param_1);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_1);
  }
  FRHICommandListBase::WaitForTasks(param_1,1);
  (**(code **)(*DAT_146ab6358 + 0x3d8))();
  puVar7 = (undefined *)FSceneRenderTargets::Get(param_1);
  local_2b8 = puVar7;
  FUN_141cdd150(puVar7,param_1,param_4);
  FUN_1419ef210((&DAT_1464c9c48)[iVar2]);
  lVar6 = *(longlong *)(puVar7 + 0x170);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_2d0 = *(undefined **)(lVar6 + 8);
  puVar9 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *puVar18 = local_2d0;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar13 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar13 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 1;
  *(undefined1 *)((longlong)puVar13 + 0x24) = 0;
  local_1a8[0] = *(longlong *)(lVar6 + 8);
  plVar11 = (longlong *)0x0;
  local_c8 = 0xffffffffffffffff;
  uStack_c0 = 0xffffffffffffffff;
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffff;
  local_d0 = 0;
  local_cc = 0xffffffff;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_1a8[1] = 0;
  local_194 = 0x100;
  local_e8 = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_50 = 1 < *(uint *)(local_1a8[0] + 0x38);
  local_198 = param_3;
  _guard_xfg_dispatch_icall_nop(local_190,0,0xa8);
  uVar19 = *(longlong *)(param_1 + 0x30) + 1U & 0xfffffffffffffffe;
  uVar8 = uVar19 + 0x26;
  if (*(ulonglong *)(param_1 + 0x38) < uVar8) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    uVar19 = *(longlong *)(param_1 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar8 = uVar19 + 0x26;
  }
  pwVar14 = L"CubeMapCopySceneRP";
  *(ulonglong *)(param_1 + 0x30) = uVar8;
  do {
    wVar1 = *pwVar14;
    *(wchar_t *)((longlong)pwVar14 + (uVar19 - 0x144e37068)) = wVar1;
    pwVar14 = pwVar14 + 1;
  } while (wVar1 != L'\0');
  uVar15 = *(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8;
  uVar8 = uVar15 + 0x178;
  if (*(ulonglong *)(param_1 + 0x38) < uVar8) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x180);
    uVar15 = *(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8;
    uVar8 = uVar15 + 0x178;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(ulonglong **)(param_1 + 8) = uVar15;
  *(ulonglong *)(param_1 + 8) = uVar15 + 8;
  FUN_140499730(uVar15,local_1a8,uVar19);
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_14049c2a0(param_1,local_1a8);
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar18 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar18 + 5;
  }
  uVar5 = local_2d4;
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59420;
  puVar18[2] = 0;
  *(undefined4 *)(puVar18 + 3) = 0;
  *(uint *)((longlong)puVar18 + 0x1c) = local_2d4;
  *(uint *)(puVar18 + 4) = local_2d4;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
  local_268 = 0;
  plStack_260 = (longlong *)0x0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0x26;
  local_214 = 0;
  local_20c = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  FUN_14049afe0(param_1,&local_268);
  uStack_230 = FUN_140985530();
  local_228 = FUN_1409853f0();
  local_238 = FUN_1404a0ce0();
  local_2d0 = &DAT_146a81d60;
  local_2c8 = 0;
  lVar6 = FUN_1419ef210((&DAT_1464c9c48)[iVar2]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_2d4,&local_2d0);
  plVar16 = plVar11;
  if (local_2d4 != 0xffffffff) {
    plVar16 = (longlong *)((longlong)(int)local_2d4 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  local_2c8 = 0;
  plVar17 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar17 = plVar11;
  }
  local_2d0 = &DAT_146a81eb0;
  lVar6 = *plVar17;
  lVar10 = FUN_1419ef210((&DAT_1464c9c48)[iVar2]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar10 + 0x38,&local_2d4,&local_2d0);
  plVar16 = plVar11;
  if (local_2d4 != 0xffffffff) {
    plVar16 = (longlong *)((longlong)(int)local_2d4 * 0x20 + *(longlong *)(lVar10 + 0x38));
  }
  plVar17 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar17 = plVar11;
  }
  lVar10 = *plVar17;
  local_268 = DAT_1464c2720;
  if (lVar6 == 0) {
    local_2d0 = (undefined *)0x0;
    bVar4 = true;
  }
  else {
    lVar3 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar11 = *(longlong **)(lVar3 + 0x38);
  }
  uVar12 = 0;
  plStack_260 = plVar11;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d0);
  }
  bVar4 = false;
  if (lVar10 == 0) {
    bVar4 = true;
    local_2d0 = (undefined *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar12 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_248 = uVar12;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d0);
  }
  local_21c = local_21c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_268,2,1);
  plVar11 = local_278;
  local_320 = local_280;
  local_328 = (float)CONCAT31(local_328._1_3_,param_6);
  FUN_141d4d310(lVar10,param_1,local_278[0x18],param_5);
  lVar10 = *(longlong *)(lVar6 + 0x48);
  uVar12 = *(undefined8 *)(plVar11[0x18] + 0x20);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  FUN_141aa9800(lVar6,param_1,*(undefined8 *)(lVar10 + 0x38),uVar12);
  local_2e0 = 1;
  local_2e8 = 0;
  local_2f8 = *(undefined8 *)(local_2b8 + 0x378);
  local_328 = (float)(int)uVar5;
  local_2d0 = (undefined *)CONCAT44(uVar5,uVar5);
  local_300 = local_2d0;
  local_310 = (float)(int)(uVar5 * DAT_1464c2e34);
  local_318 = 0;
  local_320 = local_320 & 0xffffffff00000000;
  local_308 = local_310;
  local_2f0 = lVar6;
  DrawRectangle(param_1,0,0);
  FRHICommandList::EndRenderPass(param_1);
  FRHIRenderPassInfo::~FRHIRenderPassInfo(local_1a8);
  FUN_141d7b5e0(param_1,plVar11,1);
  if (local_290 == '\0') {
    local_290 = 1;
    *(int *)(local_2a8 + 4) = *(int *)(local_2a8 + 4) + -1;
    if (local_298 != local_2a8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_2a8 = local_2a0;
    local_2a8[3] = local_288;
  }
  return;
}



// FUNCTION 141d21070 FUN_141d21070 body=124 status=ok
// SIG undefined FUN_141d21070(void)

void FUN_141d21070(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60b8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x60bc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x60b0,0);
  }
  *(undefined4 *)(param_1 + 0x6098) = 0;
  if ((*(int *)(param_1 + 0x609c) < 0) && (*(int *)(param_1 + 0x609c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x6090,0);
  }
  *(undefined4 *)(param_1 + 0x6078) = 0;
  if ((*(int *)(param_1 + 0x607c) < 0) && (*(int *)(param_1 + 0x607c) != 0)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x6070,0);
  }
  *(undefined4 *)(param_1 + 0x6058) = 0;
  if ((*(int *)(param_1 + 0x605c) < 0) && (*(int *)(param_1 + 0x605c) != 0)) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x6050,0);
  }
  return;
}



// FUNCTION 141d210f0 FUN_141d210f0 body=299 status=ok
// SIG undefined FUN_141d210f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d210f0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [64];
  undefined1 *local_20;
  ulonglong local_18;
  ulonglong local_10;
  ulonglong uVar5;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if ((param_2 == '\0') ||
     ((*(int *)(*(longlong *)(param_1 + 8) + 0x10) == 2 &&
      ((*(uint *)(*(longlong *)(param_1 + 8) + 0x18) & 0x40000000) == 0)))) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,0);
    if (*(char *)(param_1 + 0xfc) != '\0') {
      uVar5 = 0;
      local_20 = (undefined1 *)0x0;
      local_18 = 0;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),local_60);
      uVar3 = local_18 & 0xffffffff;
      puVar2 = local_20;
      uVar6 = uVar5;
      if (0 < (int)local_18) {
        do {
          puVar1 = local_60;
          if (puVar2 != (undefined1 *)0x0) {
            puVar1 = puVar2;
          }
          if (*(longlong *)(puVar1 + uVar6) != 0) {
            local_68 = 0;
            TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(puVar1 + uVar6) + 0x20,0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_68);
            uVar3 = local_18 & 0xffffffff;
            puVar2 = local_20;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar6 = uVar6 + 8;
        } while ((int)uVar4 < (int)uVar3);
      }
      *(undefined1 *)(param_1 + 0xfc) = 0;
      if (puVar2 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    *(undefined1 *)(param_1 + 0xfb) = 1;
  }
  return;
}



// FUNCTION 141d21220 FUN_141d21220 body=2275 status=ok
// SIG undefined FUN_141d21220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141d21220(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  ulonglong *puVar16;
  bool bVar17;
  undefined1 auStack_608 [32];
  int local_5e8;
  longlong local_5e0;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  int iStack_5a8;
  int iStack_5a4;
  undefined2 local_5a0;
  undefined6 uStack_59e;
  undefined8 local_598;
  int iStack_590;
  int iStack_58c;
  undefined2 local_588;
  undefined6 uStack_586;
  undefined4 local_580;
  undefined4 local_57c;
  longlong local_578;
  undefined4 local_568;
  undefined4 uStack_564;
  int iStack_560;
  int iStack_55c;
  undefined8 local_558;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined2 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined2 local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined4 local_514;
  undefined2 local_510;
  undefined8 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined2 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined2 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined2 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined2 local_4b0;
  undefined4 local_4a8;
  undefined1 local_4a4;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined4 local_494;
  undefined2 local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined2 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 local_464;
  undefined2 local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined2 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined4 local_434;
  undefined2 local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined2 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined2 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined2 local_3e8;
  undefined1 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined2 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined4 local_380 [3];
  undefined8 local_374 [19];
  undefined1 local_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined2 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined2 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined2 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined2 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined2 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined2 local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined2 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined2 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined2 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined2 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined4 local_f0 [3];
  undefined8 local_e4 [19];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_608;
  local_5e0 = param_1;
  lVar8 = FSceneRenderTargets::Get();
  local_578 = lVar8;
  FUN_141cdd150(lVar8,param_1,param_2);
  lVar4 = *(longlong *)(lVar8 + 0x170);
  local_580 = 0x22;
  lVar11 = *(longlong *)(lVar4 + 8);
  iVar15 = *(int *)(lVar11 + 0x34);
  local_5e8 = iVar15;
  FUN_141ae34d0(param_1,lVar11,0,0x22);
  iVar14 = 0;
  if (0 < iVar15) {
    puVar16 = (ulonglong *)(param_1 + 0x30);
    do {
      iVar15 = 0;
      do {
        local_5d0 = 0;
        uVar5 = *(undefined8 *)(lVar4 + 8);
        uStack_5c8 = 0;
        uStack_3d0 = 0;
        local_3b8 = 0;
        uStack_3b0 = 0;
        local_398 = 0;
        uStack_390 = 0;
        local_5a0 = 0x102;
        local_548 = 0;
        local_544 = 0xffffffff;
        local_540 = 0;
        local_52c = 0xffffffff;
        local_528 = 0;
        local_514 = 0xffffffff;
        local_510 = 0;
        local_4fc = 0xffffffff;
        local_4f8 = 0;
        local_4e4 = 0xffffffff;
        local_4e0 = 0;
        local_4cc = 0xffffffff;
        local_4c8 = 0;
        local_4b4 = 0xffffffff;
        local_4b0 = 0;
        local_4a8 = 1;
        local_4a4 = 1;
        local_494 = 0xffffffff;
        local_490 = 0;
        local_47c = 0xffffffff;
        local_478 = 0;
        local_464 = 0xffffffff;
        local_460 = 0;
        local_44c = 0xffffffff;
        local_448 = 0;
        local_434 = 0xffffffff;
        local_430 = 0;
        local_41c = 0xffffffff;
        local_418 = 0;
        local_404 = 0xffffffff;
        local_400 = 0;
        local_3ec = 0xffffffff;
        local_3e8 = 0;
        local_3e0 = 0;
        local_3c8 = 0;
        local_3a8 = 0;
        uStack_3a0 = 0;
        lVar11 = 8;
        puVar10 = local_374;
        do {
          puVar10[-1] = 1;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 1) = 0;
          puVar10 = (undefined8 *)((longlong)puVar10 + 0x14);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        local_5b0._0_4_ = (undefined4)uVar5;
        local_5b0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_558 = CONCAT62(uStack_59e,0x102);
        local_2dc = 0;
        local_568 = (undefined4)local_5b0;
        uStack_564 = local_5b0._4_4_;
        local_5b0 = uVar5;
        iStack_5a8 = iVar14;
        iStack_5a4 = iVar15;
        iStack_560 = iVar14;
        iStack_55c = iVar15;
        local_550 = local_5d0;
        local_538 = local_5d0;
        local_530 = local_548;
        local_520 = local_5d0;
        local_518 = local_548;
        local_508 = local_5d0;
        local_500 = local_548;
        local_4f0 = local_5d0;
        local_4e8 = local_548;
        local_4d8 = local_5d0;
        local_4d0 = local_548;
        local_4c0 = local_5d0;
        local_4b8 = local_548;
        local_4a0 = local_5d0;
        local_498 = local_548;
        local_488 = local_5d0;
        local_480 = local_548;
        local_470 = local_5d0;
        local_468 = local_548;
        local_458 = local_5d0;
        local_450 = local_548;
        local_440 = local_5d0;
        local_438 = local_548;
        local_428 = local_5d0;
        local_420 = local_548;
        local_410 = local_5d0;
        local_408 = local_548;
        local_3f8 = local_5d0;
        local_3f0 = local_548;
        local_3d8 = local_5d0;
        local_3c0 = local_5d0;
        local_388 = local_5d0;
        local_380[0] = local_548;
        FRHICommandListBase::CacheActiveRenderTargets(param_1,1,&local_568,&local_3d8);
        puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar12 + 0x54;
        if ((undefined8 *)puVar16[1] < puVar10) {
          FMemStackBase::AllocateNewChunk(puVar16,0x2a8);
          puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar12 + 0x54;
        }
        *puVar16 = (ulonglong)puVar10;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar12;
        *(undefined8 **)(param_1 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_FUN_1444d5488;
        FUN_140c63680(puVar12 + 2,&local_568);
        lVar11 = 8;
        puVar13 = local_380;
        do {
          puVar10 = *(undefined8 **)(puVar13 + -2);
          puVar13 = puVar13 + -2;
          lVar11 = lVar11 + -1;
          if (puVar10 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar10 + 1);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              if ((*(char *)(puVar10 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
                LOCK();
                bVar17 = *(int *)((longlong)puVar10 + 0xc) == 0;
                if (bVar17) {
                  *(int *)((longlong)puVar10 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar17) {
                  uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar7 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar8 + 8) = puVar10;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar10)(puVar10,1);
              }
            }
          }
        } while (lVar11 != 0);
        iVar15 = iVar15 + 1;
        puVar16 = (ulonglong *)(local_5e0 + 0x30);
        param_1 = local_5e0;
      } while (iVar15 < 6);
      iVar14 = iVar14 + 1;
      lVar8 = local_578;
    } while (iVar14 < local_5e8);
  }
  lVar4 = *(longlong *)(lVar8 + 0x178);
  local_57c = 0x22;
  lVar11 = *(longlong *)(lVar4 + 8);
  iVar15 = *(int *)(lVar11 + 0x34);
  local_5e8 = iVar15;
  uVar9 = FUN_141ae34d0(param_1,lVar11,0,0x22);
  iVar14 = 0;
  if (0 < iVar15) {
    puVar16 = (ulonglong *)(param_1 + 0x30);
    do {
      iVar15 = 0;
      do {
        local_5c0 = 0;
        uVar5 = *(undefined8 *)(lVar4 + 8);
        uStack_5b8 = 0;
        uStack_140 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_588 = 0x102;
        local_2b8 = 0;
        local_2b4 = 0xffffffff;
        local_2b0 = 0;
        local_29c = 0xffffffff;
        local_298 = 0;
        local_284 = 0xffffffff;
        local_280 = 0;
        local_26c = 0xffffffff;
        local_268 = 0;
        local_254 = 0xffffffff;
        local_250 = 0;
        local_23c = 0xffffffff;
        local_238 = 0;
        local_224 = 0xffffffff;
        local_220 = 0;
        local_218 = 1;
        local_214 = 1;
        local_204 = 0xffffffff;
        local_200 = 0;
        local_1ec = 0xffffffff;
        local_1e8 = 0;
        local_1d4 = 0xffffffff;
        local_1d0 = 0;
        local_1bc = 0xffffffff;
        local_1b8 = 0;
        local_1a4 = 0xffffffff;
        local_1a0 = 0;
        local_18c = 0xffffffff;
        local_188 = 0;
        local_174 = 0xffffffff;
        local_170 = 0;
        local_15c = 0xffffffff;
        local_158 = 0;
        local_150 = 0;
        local_138 = 0;
        local_118 = 0;
        uStack_110 = 0;
        lVar11 = 8;
        puVar10 = local_e4;
        do {
          puVar10[-1] = 1;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 1) = 0;
          puVar10 = (undefined8 *)((longlong)puVar10 + 0x14);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        local_598._0_4_ = (undefined4)uVar5;
        local_598._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_2c8 = CONCAT62(uStack_586,0x102);
        local_4c = 0;
        local_2d8 = (undefined4)local_598;
        uStack_2d4 = local_598._4_4_;
        local_598 = uVar5;
        iStack_590 = iVar14;
        iStack_58c = iVar15;
        iStack_2d0 = iVar14;
        iStack_2cc = iVar15;
        local_2c0 = local_5c0;
        local_2a8 = local_5c0;
        local_2a0 = local_2b8;
        local_290 = local_5c0;
        local_288 = local_2b8;
        local_278 = local_5c0;
        local_270 = local_2b8;
        local_260 = local_5c0;
        local_258 = local_2b8;
        local_248 = local_5c0;
        local_240 = local_2b8;
        local_230 = local_5c0;
        local_228 = local_2b8;
        local_210 = local_5c0;
        local_208 = local_2b8;
        local_1f8 = local_5c0;
        local_1f0 = local_2b8;
        local_1e0 = local_5c0;
        local_1d8 = local_2b8;
        local_1c8 = local_5c0;
        local_1c0 = local_2b8;
        local_1b0 = local_5c0;
        local_1a8 = local_2b8;
        local_198 = local_5c0;
        local_190 = local_2b8;
        local_180 = local_5c0;
        local_178 = local_2b8;
        local_168 = local_5c0;
        local_160 = local_2b8;
        local_148 = local_5c0;
        local_130 = local_5c0;
        local_f8 = local_5c0;
        local_f0[0] = local_2b8;
        FRHICommandListBase::CacheActiveRenderTargets(param_1,1,&local_2d8,&local_148);
        puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar12 + 0x54;
        if ((undefined8 *)puVar16[1] < puVar10) {
          FMemStackBase::AllocateNewChunk(puVar16,0x2a8);
          puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar12 + 0x54;
        }
        *puVar16 = (ulonglong)puVar10;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar12;
        *(undefined8 **)(param_1 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_FUN_1444d5488;
        uVar9 = FUN_140c63680(puVar12 + 2,&local_2d8);
        lVar11 = 8;
        puVar13 = local_f0;
        do {
          puVar10 = *(undefined8 **)(puVar13 + -2);
          puVar13 = puVar13 + -2;
          lVar11 = lVar11 + -1;
          if (puVar10 != (undefined8 *)0x0) {
            LOCK();
            puVar2 = (uint *)(puVar10 + 1);
            uVar7 = *puVar2;
            uVar9 = (ulonglong)uVar7;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if (uVar7 == 1) {
              if ((*(char *)(puVar10 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
                uVar9 = 0;
                LOCK();
                uVar7 = *(uint *)((longlong)puVar10 + 0xc);
                if (uVar7 == 0) {
                  *(uint *)((longlong)puVar10 + 0xc) = 1;
                }
                else {
                  uVar9 = (ulonglong)uVar7;
                }
                UNLOCK();
                if (uVar7 == 0) {
                  uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar7 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar8 + 8) = puVar10;
                  uVar9 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                uVar9 = (**(code **)*puVar10)(puVar10,1);
              }
            }
          }
        } while (lVar11 != 0);
        iVar15 = iVar15 + 1;
        puVar16 = (ulonglong *)(local_5e0 + 0x30);
        param_1 = local_5e0;
      } while (iVar15 < 6);
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_5e8);
  }
  return uVar9;
}



// FUNCTION 141d21b10 FUN_141d21b10 body=275 status=ok
// SIG undefined FUN_141d21b10(void)

void FUN_141d21b10(undefined8 param_1,undefined4 param_2,uint param_3,float *param_4,float *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  iVar1 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = 0x20;
  iVar5 = iVar4;
  if (param_3 != 0) {
    iVar5 = 0x1f - iVar1;
  }
  uVar2 = param_3 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  FUN_141d33e20(param_1);
  lVar3 = FSceneRenderTargets::Get(param_1);
  lVar3 = *(longlong *)(lVar3 + 0x170) + 8;
  FUN_141d26a60(param_1,param_2,(0x20U - iVar4 & ~((iVar5 << 0x1a) >> 0x1f)) + 1,lVar3);
  FUN_141d240e0(&local_38,param_1,param_2,param_3,lVar3);
  if (param_4 != (float *)0x0) {
    *param_4 = (local_34 + local_38 + local_30) * 0.33333334;
  }
  if (param_5 != (float *)0x0) {
    local_2c = 1.0 - local_2c;
    fVar6 = 0.0;
    if ((0.0 <= local_2c) && (fVar6 = local_2c, 1.0 <= local_2c)) {
      fVar6 = 1.0;
    }
    *param_5 = fVar6;
  }
  return;
}



// FUNCTION 141d21c30 FUN_141d21c30 body=8952 status=ok
// SIG undefined FUN_141d21c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d21c30(longlong param_1,int param_2,undefined8 *param_3,undefined4 param_4,
                  longlong *param_5)

{
  int *piVar1;
  wchar_t wVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong *puVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  float fVar37;
  undefined1 auStack_858 [32];
  longlong *local_838;
  int local_830;
  ulonglong local_828;
  float local_820;
  float local_818;
  undefined8 local_810;
  undefined8 local_808;
  longlong local_800;
  undefined4 local_7f8;
  undefined4 local_7f0;
  uint local_7e8;
  longlong *local_7e0;
  longlong local_7d8;
  undefined1 *local_7d0;
  uint local_7c8;
  int local_7c4;
  undefined1 *local_7c0;
  int local_7b8;
  uint local_7b4;
  ulonglong *local_7b0;
  longlong *local_7a8;
  longlong *local_7a0;
  longlong *local_798;
  int local_790 [2];
  ulonglong local_788;
  longlong *local_780;
  longlong *local_778;
  int local_770;
  int local_76c;
  undefined4 local_768;
  int local_760 [2];
  undefined4 local_758 [2];
  float local_750;
  int local_74c;
  int local_748;
  int local_744;
  int local_740 [2];
  longlong *local_738;
  longlong *local_730;
  longlong *local_728;
  longlong *local_720;
  longlong local_718;
  uint local_710;
  uint uStack_70c;
  longlong local_708;
  int local_700;
  int iStack_6fc;
  int local_6f8;
  int iStack_6f4;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  longlong local_6e0;
  undefined8 *local_6d8;
  uint local_6d0;
  uint uStack_6cc;
  longlong local_6c8;
  longlong local_6c0;
  float local_6b8;
  float local_6b4;
  float local_6b0;
  float local_6ac;
  float local_6a8;
  float local_6a4;
  float local_6a0;
  float local_69c;
  longlong local_698;
  longlong local_690;
  int local_688;
  longlong local_680;
  longlong local_678;
  longlong local_670;
  int local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined *local_648;
  undefined4 local_640;
  undefined *local_638;
  undefined4 local_630;
  undefined *local_628;
  undefined4 local_620;
  undefined *local_618;
  undefined4 local_610;
  undefined *local_608;
  undefined4 local_600;
  undefined *local_5f8;
  undefined4 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  longlong *plStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  longlong *local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined4 local_590;
  undefined8 local_58c;
  int local_584 [16];
  undefined1 auStack_544 [4];
  undefined8 local_540;
  undefined4 local_538;
  ulonglong local_534;
  undefined8 local_52c;
  undefined4 local_524;
  longlong local_518 [2];
  int local_508;
  undefined2 local_504;
  undefined1 local_500 [168];
  undefined8 local_458;
  undefined1 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0 [8];
  longlong local_3b8 [2];
  int local_3a8;
  undefined1 local_3a4;
  undefined1 local_3a3;
  undefined1 local_3a0 [168];
  undefined8 local_2f8;
  undefined1 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined1 local_260 [8];
  longlong local_258 [2];
  undefined4 local_248;
  undefined2 local_244;
  undefined1 local_240 [168];
  undefined8 local_198;
  undefined1 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_858;
  local_7a8 = param_5;
  local_790[0] = 0;
  local_7e8 = 0;
  local_708 = (longlong)param_2;
  local_7d8 = param_1;
  local_768 = param_4;
  local_6d8 = param_3;
  lVar6 = FUN_1419ef210((&DAT_1464c9c48)[local_708]);
  local_718 = FSceneRenderTargets::Get(param_1);
  local_5d8 = 0;
  plStack_5d0 = (longlong *)0x0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5b8 = (longlong *)0x0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_584[3] = 0;
  local_584[4] = 0;
  local_584[5] = 0;
  local_584[6] = 0;
  local_598 = 0;
  local_590 = 0;
  local_58c = 0x26;
  local_584[0] = 0;
  local_584[1] = 0;
  local_584[2] = 0;
  local_584[7] = 0;
  local_584[8] = 0;
  local_584[9] = 0;
  local_584[10] = 0;
  local_584[0xb] = 0;
  local_584[0xc] = 0;
  local_584[0xd] = 0;
  local_584[0xe] = 0;
  stack0xfffffffffffffab8 = 0;
  local_540 = 0;
  local_538 = 0;
  local_534 = 0;
  local_52c = 0;
  local_524 = 0;
  uStack_5a0 = FUN_140985530();
  local_598 = FUN_1409853f0();
  local_5a8 = FUN_1404a0ce0();
  local_780 = (longlong *)(lVar6 + 0x38);
  local_7b0 = (ulonglong *)(param_1 + 0x30);
  local_7b8 = 0;
  local_778 = local_7a8;
  local_6e0 = 9;
  local_730 = local_7a8;
  local_728 = local_7a8;
  local_798 = local_7a8;
  local_738 = local_7a8;
  local_720 = local_7a8;
  plVar19 = local_7a8;
  plVar10 = local_7a8;
  do {
    uVar12 = DAT_1464c2e40;
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    local_660 = *(undefined8 *)(*(longlong *)(local_718 + 0x188) + 8);
    plVar21 = (longlong *)(*(longlong *)(local_718 + 0x188) + 8);
    puVar11 = puVar16 + 1;
    local_7a0 = plVar21;
    if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 1;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar11;
    *puVar16 = local_660;
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar11;
    iVar25 = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    fVar37 = (float)(int)uVar12;
    **(undefined8 **)(param_1 + 8) = puVar13;
    *(undefined8 **)(param_1 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar13 + 2) = 1;
    *(undefined4 *)(puVar13 + 4) = 1;
    puVar13[3] = puVar16;
    *(undefined1 *)((longlong)puVar13 + 0x24) = 0;
    bVar27 = local_7b8 == 0;
    bVar28 = local_7b8 == 1;
    bVar29 = local_7b8 == 2;
    bVar30 = local_7b8 == 3;
    bVar31 = local_7b8 == 4;
    bVar32 = local_7b8 == 5;
    bVar33 = local_7b8 == 6;
    bVar34 = local_7b8 == 7;
    bVar35 = local_7b8 == 8;
    local_7b4 = uVar12 * uVar12 * 6;
    do {
      local_518[0] = *plVar21;
      local_438 = 0xffffffffffffffff;
      uStack_430 = 0xffffffffffffffff;
      local_428 = 0xffffffffffffffff;
      uStack_420 = 0xffffffff;
      local_440 = 0;
      local_404 = 0;
      local_400 = 0;
      local_3c8 = 0;
      local_518[1] = 0;
      local_458 = 0;
      local_444 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_43c = 0xffffffff;
      local_418 = 0;
      local_410 = 0;
      local_408 = 0xffffffff;
      local_504 = 0x100;
      local_448 = 0;
      local_3c0[0] = 1 < *(uint *)(local_518[0] + 0x38);
      local_508 = iVar25;
      _guard_xfg_dispatch_icall_nop(local_500,0,0xa8);
      uVar17 = *(longlong *)(param_1 + 0x30) + 1U & 0xfffffffffffffffe;
      uVar9 = uVar17 + 0x30;
      if (*(ulonglong *)(param_1 + 0x38) < uVar9) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x32);
        uVar17 = *(longlong *)(param_1 + 0x30) + 1U & 0xfffffffffffffffe;
        uVar9 = uVar17 + 0x30;
      }
      puVar23 = (ulonglong *)(param_1 + 0x30);
      *puVar23 = uVar9;
      pwVar14 = L"CopyDiffuseIrradianceRP";
      do {
        wVar2 = *pwVar14;
        *(wchar_t *)((uVar17 - 0x144e37a18) + (longlong)pwVar14) = wVar2;
        pwVar14 = pwVar14 + 1;
      } while (wVar2 != L'\0');
      uVar15 = *puVar23 + 7 & 0xfffffffffffffff8;
      uVar9 = uVar15 + 0x178;
      if (*(ulonglong *)(param_1 + 0x38) < uVar9) {
        FMemStackBase::AllocateNewChunk(puVar23,0x180);
        uVar15 = *(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8;
        uVar9 = uVar15 + 0x178;
      }
      *(ulonglong *)(param_1 + 0x30) = uVar9;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(ulonglong **)(param_1 + 8) = uVar15;
      *(ulonglong *)(param_1 + 8) = uVar15 + 8;
      FUN_140499730(uVar15,local_518,uVar17);
      *(undefined1 *)(param_1 + 0x1ac) = 1;
      FUN_14049c2a0(param_1,local_518);
      uVar4 = *(uint *)(param_1 + 0x98);
      uVar17 = 0;
      *(undefined1 *)(param_1 + 0x1ac) = 1;
      iVar5 = 0;
      uVar9 = uVar17;
      if (uVar4 != 0) {
        do {
          lVar6 = *(longlong *)(param_1 + 0xa0 + uVar9 * 0x18);
          if (lVar6 == 0) {
            local_584[uVar9] = 0;
          }
          else {
            local_584[uVar9] = *(int *)(lVar6 + 0x3c);
            local_584[uVar9 + 8] = *(int *)(lVar6 + 0x40);
          }
          auStack_544[uVar9] = *(undefined1 *)(param_1 + 0xb0 + uVar9 * 0x18);
          *(undefined1 *)((longlong)&local_540 + uVar9 + 4) =
               *(undefined1 *)(param_1 + 0xb1 + uVar9 * 0x18);
          if (local_584[uVar9] != 0) {
            local_524 = CONCAT22(local_524._2_2_,*(undefined2 *)(lVar6 + 0x38));
          }
          uVar24 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar24;
        } while (uVar24 < uVar4);
      }
      lVar6 = *(longlong *)(param_1 + 0x160);
      if (lVar6 == 0) {
        local_534 = local_534 & 0xffffffff00000000;
      }
      else {
        iVar5 = *(int *)(lVar6 + 0x3c);
        local_534 = *(ulonglong *)(lVar6 + 0x3c);
      }
      local_52c = *(undefined8 *)(param_1 + 0x168);
      if (iVar5 != 0) {
        local_524 = CONCAT22(local_524._2_2_,*(undefined2 *)(lVar6 + 0x38));
      }
      puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 5;
      local_58c._4_4_ = uVar4;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
        puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar16 + 5;
      }
      plVar21 = local_780;
      *(undefined8 **)(param_1 + 0x30) = puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      local_640 = 0;
      **(undefined8 **)(param_1 + 8) = puVar16;
      *(undefined8 **)(param_1 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_143f59420;
      puVar16[2] = 0;
      *(undefined4 *)(puVar16 + 3) = 0;
      *(uint *)((longlong)puVar16 + 0x1c) = uVar12;
      *(uint *)(puVar16 + 4) = uVar12;
      *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
      local_648 = &DAT_146a82150;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(local_780,&local_770,&local_648);
      if (local_770 != -1) {
        uVar17 = (longlong)local_770 * 0x20 + *plVar21;
      }
      plVar21 = (longlong *)(uVar17 + 0x10);
      if (uVar17 == 0) {
        plVar21 = (longlong *)0x0;
      }
      local_638 = &DAT_146b09c50;
      local_630 = 0;
      lVar6 = *plVar21;
      lVar7 = FUN_1419ef210((&DAT_1464c9c48)[local_708]);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar7 + 0x38,&local_76c,&local_638);
      if (local_76c == -1) {
        lVar7 = 0;
      }
      else {
        lVar7 = (longlong)local_76c * 0x20 + *(longlong *)(lVar7 + 0x38);
      }
      plVar21 = (longlong *)0x0;
      plVar18 = (longlong *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        plVar18 = plVar21;
      }
      lVar7 = *plVar18;
      local_5d8 = DAT_1464c2720;
      if (lVar7 == 0) {
        local_7e8 = local_7e8 | 1;
        local_730 = (longlong *)0x0;
        plVar10 = plVar21;
      }
      else {
        local_7e0 = *(longlong **)(lVar7 + 0x48);
        if ((char)local_7e0[5] == '\0') {
          FUN_1419f3850(local_7e0);
        }
        plVar21 = (longlong *)local_7e0[7];
      }
      plStack_5d0 = plVar21;
      if (((local_7e8 & 1) != 0) && (local_7e8 = local_7e8 & 0xfffffffe, plVar10 != (longlong *)0x0)
         ) {
        LOCK();
        plVar21 = plVar10 + 1;
        lVar8 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          if (((char)plVar10[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)plVar10 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)plVar10 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar4 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
              }
              *(longlong **)(lVar8 + 8) = plVar10;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*plVar10)(plVar10,1);
          }
        }
      }
      if (lVar6 == 0) {
        local_7e8 = local_7e8 | 2;
        plVar19 = (longlong *)0x0;
        local_728 = (longlong *)0x0;
        local_5b8 = (longlong *)0x0;
      }
      else {
        local_7e0 = *(longlong **)(lVar6 + 0x48);
        if ((char)local_7e0[5] == '\0') {
          FUN_1419f3850(local_7e0);
        }
        local_5b8 = (longlong *)local_7e0[8];
      }
      if (((local_7e8 & 2) != 0) && (local_7e8 = local_7e8 & 0xfffffffd, plVar19 != (longlong *)0x0)
         ) {
        LOCK();
        plVar10 = plVar19 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          if (((char)plVar19[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)plVar19 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)plVar19 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar4 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
              }
              *(longlong **)(lVar8 + 8) = plVar19;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*plVar19)(plVar19,1);
          }
        }
      }
      local_58c = (ulonglong)local_58c._4_4_ << 0x20;
      FUN_141ed6ac0(local_7d8,&local_5d8,2,1);
      local_758[0] = local_768;
      local_7e0 = *(longlong **)(lVar6 + 0x48);
      local_760[0] = iVar25;
      if (*(char *)((longlong)local_7e0 + 0x28) == '\0') {
        FUN_1419f3850(local_7e0);
      }
      local_838 = (longlong *)((ulonglong)local_838 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (local_7d8,*(undefined8 *)((longlong)local_7e0 + 0x40),lVar6 + 0xc0,local_760);
      local_7e0 = *(longlong **)(lVar6 + 0x48);
      if (*(char *)((longlong)local_7e0 + 0x28) == '\0') {
        FUN_1419f3850(local_7e0);
      }
      local_838 = (longlong *)((ulonglong)local_838 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (local_7d8,*(undefined8 *)((longlong)local_7e0 + 0x40),lVar6 + 0xc6,local_758);
      local_7c0 = (undefined1 *)*local_6d8;
      local_7e0 = *(longlong **)(lVar6 + 0x48);
      if (*(char *)((longlong)local_7e0 + 0x28) == '\0') {
        FUN_1419f3850(local_7e0);
      }
      local_7d0 = *(undefined1 **)((longlong)local_7e0 + 0x40);
      local_7e0 = (longlong *)FUN_141a156e0();
      if (*(short *)(lVar6 + 0xce) != 0) {
        puVar16 = (undefined8 *)(*local_7b0 + 7 & 0xfffffffffffffff8);
        local_7c8 = (uint)*(ushort *)(lVar6 + 0xcc);
        puVar11 = puVar16 + 5;
        if ((undefined8 *)local_7b0[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(local_7b0,0x30);
          puVar16 = (undefined8 *)(*local_7b0 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
        }
        *local_7b0 = (ulonglong)puVar11;
        *(int *)(local_7d8 + 0x14) = *(int *)(local_7d8 + 0x14) + 1;
        **(undefined8 **)(local_7d8 + 8) = puVar16;
        *(undefined8 **)(local_7d8 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f59c80;
        puVar16[2] = local_7d0;
        *(uint *)(puVar16 + 3) = local_7c8;
        puVar16[4] = local_7c0;
      }
      if (*(short *)(lVar6 + 0xd2) != 0) {
        local_7c8 = (uint)*(ushort *)(lVar6 + 0xd0);
        puVar16 = (undefined8 *)(*local_7b0 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 5;
        if ((undefined8 *)local_7b0[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(local_7b0,0x30);
          puVar16 = (undefined8 *)(*local_7b0 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
        }
        *local_7b0 = (ulonglong)puVar11;
        *(int *)(local_7d8 + 0x14) = *(int *)(local_7d8 + 0x14) + 1;
        **(undefined8 **)(local_7d8 + 8) = puVar16;
        *(undefined8 **)(local_7d8 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f59c70;
        puVar16[2] = local_7d0;
        *(uint *)(puVar16 + 3) = local_7c8;
        puVar16[4] = local_7e0;
      }
      local_7e0 = *(longlong **)(lVar6 + 0x48);
      local_750 = (float)bVar35;
      local_6b8 = (float)bVar27;
      local_6b4 = (float)bVar28;
      local_6b0 = (float)bVar29;
      local_6ac = (float)bVar30;
      local_6a8 = (float)bVar31;
      local_6a4 = (float)bVar32;
      local_6a0 = (float)bVar33;
      local_69c = (float)bVar34;
      if (*(char *)((longlong)local_7e0 + 0x28) == '\0') {
        FUN_1419f3850(local_7e0);
      }
      local_838 = (longlong *)((ulonglong)local_838 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (local_7d8,*(undefined8 *)((longlong)local_7e0 + 0x40),lVar6 + 0xd4,&local_6b8);
      local_7e0 = *(longlong **)(lVar6 + 0x48);
      if (*(char *)((longlong)local_7e0 + 0x28) == '\0') {
        FUN_1419f3850(local_7e0);
      }
      local_838 = (longlong *)((ulonglong)local_838 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (local_7d8,*(undefined8 *)((longlong)local_7e0 + 0x40),lVar6 + 0xda,&local_6a8);
      local_7e0 = *(longlong **)(lVar6 + 0x48);
      if (*(char *)((longlong)local_7e0 + 0x28) == '\0') {
        FUN_1419f3850(local_7e0);
      }
      local_838 = (longlong *)((ulonglong)local_838 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (local_7d8,*(undefined8 *)((longlong)local_7e0 + 0x40),lVar6 + 0xe0,&local_750);
      local_74c = local_7b4;
      local_7e0 = *(longlong **)(lVar6 + 0x48);
      if ((char)local_7e0[5] == '\0') {
        FUN_1419f3850(local_7e0);
      }
      lVar8 = local_7d8;
      local_838 = (longlong *)((ulonglong)local_838 & 0xffffffff00000000);
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (local_7d8,local_7e0[8],lVar6 + 0xe6,&local_74c);
      local_6d0 = uVar12;
      uStack_6cc = uVar12;
      local_7f0 = 1;
      local_808 = CONCAT44(uVar12,uVar12);
      local_7f8 = 0;
      local_710 = uVar12;
      uStack_70c = uVar12;
      local_810 = CONCAT44(uVar12,uVar12);
      local_828 = local_828 & 0xffffffff00000000;
      local_830 = 0;
      local_838 = (longlong *)CONCAT44(local_838._4_4_,fVar37);
      local_820 = fVar37;
      local_818 = fVar37;
      local_800 = lVar7;
      DrawRectangle(lVar8);
      puVar16 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 2;
      if (*(undefined8 **)(lVar8 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(lVar8 + 0x30);
        puVar16 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar16 + 2;
      }
      *(undefined8 **)(lVar8 + 0x30) = puVar11;
      lVar6 = 8;
      *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
      **(undefined8 **)(lVar8 + 8) = puVar16;
      *(undefined8 **)(lVar8 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_143f59460;
      local_7c0 = local_3c0;
      *(undefined1 *)(lVar8 + 0x1ac) = 0;
      do {
        puVar11 = *(undefined8 **)(local_7c0 + -8);
        local_7c0 = local_7c0 + -8;
        lVar6 = lVar6 + -1;
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar11 + 1);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            if ((*(char *)(puVar11 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar11 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar11 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar7 = 0;
                if (uVar4 != 0) {
                  lVar7 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar7 + 8) = puVar11;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar11)(puVar11);
            }
          }
        }
        plVar19 = local_728;
        plVar10 = local_730;
        puVar23 = local_7b0;
      } while (lVar6 != 0);
      iVar25 = iVar25 + 1;
      plVar21 = local_7a0;
      param_1 = local_7d8;
    } while (iVar25 < 6);
    local_698 = *local_7a0;
    plVar18 = (longlong *)(*local_7b0 + 7 & 0xfffffffffffffff8);
    plVar21 = plVar18 + 1;
    if ((longlong *)local_7b0[1] < plVar21) {
      FMemStackBase::AllocateNewChunk(local_7b0,0x10);
      plVar18 = (longlong *)(*puVar23 + 7 & 0xfffffffffffffff8);
      plVar21 = plVar18 + 1;
    }
    *puVar23 = (ulonglong)plVar21;
    *plVar18 = local_698;
    puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 5;
    if ((undefined8 *)puVar23[1] < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar23,0x30);
      puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 5;
    }
    *puVar23 = (ulonglong)puVar11;
    *(int *)(local_7d8 + 0x14) = *(int *)(local_7d8 + 0x14) + 1;
    **(undefined8 **)(local_7d8 + 8) = puVar16;
    *(undefined8 **)(local_7d8 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar16 + 2) = 1;
    puVar16[3] = plVar18;
    *(undefined4 *)(puVar16 + 4) = 0;
    *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
    local_688 = 0x1f;
    if (DAT_1464c2e40 != 0) {
      for (; DAT_1464c2e40 >> local_688 == 0; local_688 = local_688 + -1) {
      }
    }
    if (DAT_1464c2e40 == 0) {
      iVar25 = 0x20;
    }
    else {
      iVar25 = 0x1f - local_688;
    }
    uVar12 = DAT_1464c2e40 - 1;
    local_668 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> local_668 == 0; local_668 = local_668 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_668;
    }
    local_7c8 = (0x20U - iVar5 & ~((iVar25 << 0x1a) >> 0x1f)) + 1;
    local_7b4 = 1;
    plVar18 = local_798;
    lVar6 = local_7d8;
    plVar21 = local_738;
    if (1 < (int)local_7c8) {
      do {
        local_7c4 = 0;
        if (-1 < (int)(local_7b4 - 1)) {
          local_7c4 = local_7b4 - 1;
        }
        iVar25 = 1 << (((char)local_7c8 - (char)local_7b4) - 1U & 0x1f);
        local_798 = (longlong *)CONCAT44(local_798._4_4_,iVar25);
        uVar12 = local_7b4 & 0x80000001;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffffe) + 1;
        }
        plVar19 = (longlong *)(*puVar23 + 7 & 0xfffffffffffffff8);
        local_7e0 = (longlong *)(*(longlong *)(local_718 + 0x188 + (longlong)(int)uVar12 * 8) + 8);
        plVar10 = plVar19 + 1;
        lVar7 = *(longlong *)(local_718 + 0x188 + (longlong)(int)(1 - uVar12) * 8);
        local_690 = *local_7e0;
        if ((longlong *)puVar23[1] < plVar10) {
          FMemStackBase::AllocateNewChunk(puVar23);
          plVar19 = (longlong *)(*puVar23 + 7 & 0xfffffffffffffff8);
          plVar10 = plVar19 + 1;
        }
        *puVar23 = (ulonglong)plVar10;
        *plVar19 = local_690;
        puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 5;
        if ((undefined8 *)puVar23[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar23);
          puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
        }
        *puVar23 = (ulonglong)puVar11;
        *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
        fVar37 = (float)iVar25;
        **(undefined8 **)(lVar6 + 8) = puVar16;
        *(undefined8 **)(lVar6 + 8) = puVar16 + 1;
        iVar5 = 0;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar16 + 2) = 1;
        *(undefined4 *)(puVar16 + 4) = 1;
        local_788 = lVar7 + 0x10;
        puVar16[3] = plVar19;
        *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
        local_7a0 = (longlong *)((ulonglong)local_7a0 & 0xffffffff00000000);
        while( true ) {
          plVar10 = (longlong *)0x0;
          local_2d8 = 0xffffffffffffffff;
          uStack_2d0 = 0xffffffffffffffff;
          local_3b8[0] = *local_7e0;
          local_2c8 = 0xffffffffffffffff;
          uStack_2c0 = 0xffffffff;
          local_3a4 = (undefined1)local_7b4;
          iVar26 = 0;
          local_2e0 = 0;
          local_2dc = 0xffffffff;
          local_2b8 = 0;
          local_2b0 = 0;
          local_2a8 = 0xffffffff;
          local_2a4 = 0;
          local_2a0 = 0;
          local_298 = 0;
          uStack_290 = 0;
          local_288 = 0;
          uStack_280 = 0;
          local_278 = 0;
          uStack_270 = 0;
          local_268 = 0;
          local_3b8[1] = 0;
          local_3a3 = 5;
          local_2f8 = 0;
          local_2e8 = 0;
          local_2e4 = 0;
          local_260[0] = 1 < *(uint *)(local_3b8[0] + 0x38);
          local_3a8 = iVar5;
          _guard_xfg_dispatch_icall_nop(local_3a0,0,0xa8);
          uVar17 = *puVar23 + 1 & 0xfffffffffffffffe;
          uVar9 = uVar17 + 0x3c;
          if (puVar23[1] < uVar9) {
            FMemStackBase::AllocateNewChunk(puVar23,0x3e);
            uVar17 = *puVar23 + 1 & 0xfffffffffffffffe;
            uVar9 = uVar17 + 0x3c;
          }
          *puVar23 = uVar9;
          pwVar14 = L"AccumulateDiffuseIrradianceRP";
          do {
            wVar2 = *pwVar14;
            *(wchar_t *)((uVar17 - 0x144e37b18) + (longlong)pwVar14) = wVar2;
            pwVar14 = pwVar14 + 1;
          } while (wVar2 != L'\0');
          uVar15 = *puVar23 + 7 & 0xfffffffffffffff8;
          uVar9 = uVar15 + 0x178;
          if (puVar23[1] < uVar9) {
            FMemStackBase::AllocateNewChunk(puVar23,0x180);
            uVar15 = *puVar23 + 7 & 0xfffffffffffffff8;
            uVar9 = uVar15 + 0x178;
          }
          lVar6 = local_7d8;
          *puVar23 = uVar9;
          *(int *)(local_7d8 + 0x14) = *(int *)(local_7d8 + 0x14) + 1;
          **(ulonglong **)(local_7d8 + 8) = uVar15;
          *(ulonglong *)(local_7d8 + 8) = uVar15 + 8;
          FUN_140499730(uVar15,local_3b8,uVar17);
          *(undefined1 *)(lVar6 + 0x1ac) = 1;
          FUN_14049c2a0(lVar6,local_3b8);
          uVar12 = *(uint *)(lVar6 + 0x98);
          *(undefined1 *)(lVar6 + 0x1ac) = 1;
          plVar19 = plVar10;
          if (uVar12 != 0) {
            do {
              lVar7 = *(longlong *)(lVar6 + 0xa0 + (longlong)plVar19 * 0x18);
              if (lVar7 == 0) {
                local_584[(longlong)plVar19] = 0;
              }
              else {
                local_584[(longlong)plVar19] = *(int *)(lVar7 + 0x3c);
                local_584[(longlong)(plVar19 + 1)] = *(int *)(lVar7 + 0x40);
              }
              auStack_544[(longlong)plVar19] =
                   *(undefined1 *)(lVar6 + 0xb0 + (longlong)plVar19 * 0x18);
              *(undefined1 *)((longlong)&local_540 + 4 + (longlong)plVar19) =
                   *(undefined1 *)(lVar6 + 0xb1 + (longlong)plVar19 * 0x18);
              if (local_584[(longlong)plVar19] != 0) {
                local_524 = CONCAT22(local_524._2_2_,*(undefined2 *)(lVar7 + 0x38));
              }
              uVar4 = (int)plVar19 + 1;
              plVar19 = (longlong *)(ulonglong)uVar4;
            } while (uVar4 < uVar12);
          }
          lVar7 = *(longlong *)(lVar6 + 0x160);
          if (lVar7 == 0) {
            local_534 = local_534 & 0xffffffff00000000;
          }
          else {
            iVar26 = *(int *)(lVar7 + 0x3c);
            local_534 = *(ulonglong *)(lVar7 + 0x3c);
          }
          local_52c = *(undefined8 *)(lVar6 + 0x168);
          if (iVar26 != 0) {
            local_524 = CONCAT22(local_524._2_2_,*(undefined2 *)(lVar7 + 0x38));
          }
          puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
          local_58c._4_4_ = uVar12;
          if ((undefined8 *)puVar23[1] < puVar11) {
            FMemStackBase::AllocateNewChunk(puVar23,0x30);
            puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar16 + 5;
          }
          plVar19 = local_780;
          *puVar23 = (ulonglong)puVar11;
          *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
          local_620 = 0;
          **(undefined8 **)(lVar6 + 8) = puVar16;
          *(undefined8 **)(lVar6 + 8) = puVar16 + 1;
          puVar16[1] = 0;
          *puVar16 = &PTR_LAB_143f59420;
          puVar16[2] = 0;
          *(undefined4 *)(puVar16 + 3) = 0;
          *(int *)((longlong)puVar16 + 0x1c) = iVar25;
          *(int *)(puVar16 + 4) = iVar25;
          *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
          local_628 = &DAT_146a822a0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(local_780,&local_748,&local_628);
          plVar20 = plVar10;
          if (local_748 != -1) {
            plVar20 = (longlong *)((longlong)local_748 * 0x20 + *plVar19);
          }
          local_610 = 0;
          plVar19 = plVar20 + 2;
          if (plVar20 == (longlong *)0x0) {
            plVar19 = plVar10;
          }
          local_618 = &DAT_146b09c50;
          lVar7 = *plVar19;
          lVar6 = FUN_1419ef210((&DAT_1464c9c48)[local_708]);
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar6 + 0x38,&local_744,&local_618);
          plVar19 = plVar10;
          if (local_744 != -1) {
            plVar19 = (longlong *)((longlong)local_744 * 0x20 + *(longlong *)(lVar6 + 0x38));
          }
          plVar20 = plVar19 + 2;
          if (plVar19 == (longlong *)0x0) {
            plVar20 = plVar10;
          }
          lVar8 = *plVar20;
          local_5d8 = DAT_1464c2720;
          if (lVar8 == 0) {
            local_7e8 = local_7e8 | 4;
            plStack_5d0 = plVar10;
            plVar18 = plVar10;
          }
          else {
            local_7d0 = *(undefined1 **)(lVar8 + 0x48);
            if (local_7d0[0x28] == '\0') {
              FUN_1419f3850(local_7d0);
            }
            plStack_5d0 = *(longlong **)(local_7d0 + 0x38);
          }
          if (((local_7e8 & 4) != 0) &&
             (local_7e8 = local_7e8 & 0xfffffffb, plVar18 != (longlong *)0x0)) {
            LOCK();
            plVar19 = plVar18 + 1;
            lVar6 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              if (((char)plVar18[2] == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
                LOCK();
                bVar27 = *(int *)((longlong)plVar18 + 0xc) == 0;
                if (bVar27) {
                  *(int *)((longlong)plVar18 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar27) {
                  uVar12 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  plVar19 = plVar10;
                  if (uVar12 != 0) {
                    plVar19 = (longlong *)
                              ((&DAT_1468a81f8)[uVar12 >> 0xe] + (ulonglong)(uVar12 & 0x3fff) * 0x18
                              );
                  }
                  plVar19[1] = (longlong)plVar18;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*plVar18)(plVar18,1);
              }
            }
          }
          if (lVar7 == 0) {
            local_7e8 = local_7e8 | 8;
            local_738 = (longlong *)0x0;
            local_5b8 = plVar10;
            plVar21 = plVar10;
          }
          else {
            local_7d0 = *(undefined1 **)(lVar7 + 0x48);
            if (local_7d0[0x28] == '\0') {
              FUN_1419f3850(local_7d0);
            }
            local_5b8 = *(longlong **)(local_7d0 + 0x40);
          }
          if (((local_7e8 & 8) != 0) &&
             (local_7e8 = local_7e8 & 0xfffffff7, plVar21 != (longlong *)0x0)) {
            LOCK();
            plVar19 = plVar21 + 1;
            lVar6 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              if (((char)plVar21[2] == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
                LOCK();
                bVar27 = *(int *)((longlong)plVar21 + 0xc) == 0;
                if (bVar27) {
                  *(int *)((longlong)plVar21 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar27) {
                  uVar12 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar12 != 0) {
                    plVar10 = (longlong *)
                              ((&DAT_1468a81f8)[uVar12 >> 0xe] + (ulonglong)(uVar12 & 0x3fff) * 0x18
                              );
                  }
                  plVar10[1] = (longlong)plVar21;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*plVar21)(plVar21,1);
              }
            }
          }
          lVar6 = local_7d8;
          local_58c = (ulonglong)local_58c._4_4_ << 0x20;
          FUN_141ed6ac0(local_7d8,&local_5d8,2,1);
          local_828 = local_788;
          local_830 = local_7b8;
          local_838._0_4_ = local_7c4;
          FUN_141d4cc20(lVar7,lVar6,(ulonglong)local_7a0 & 0xffffffff,local_7c8);
          local_7f0 = 1;
          local_808 = CONCAT44(iVar25,iVar25);
          local_7f8 = 0;
          local_810 = CONCAT44(iVar25,iVar25);
          local_828 = local_828 & 0xffffffff00000000;
          local_830 = 0;
          local_838 = (longlong *)CONCAT44(local_838._4_4_,fVar37);
          local_820 = fVar37;
          local_818 = fVar37;
          local_800 = lVar8;
          local_700 = iVar25;
          iStack_6fc = iVar25;
          local_6f8 = iVar25;
          iStack_6f4 = iVar25;
          DrawRectangle(lVar6);
          puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 2;
          if ((undefined8 *)puVar23[1] < puVar11) {
            FMemStackBase::AllocateNewChunk(puVar23);
            puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar16 + 2;
          }
          *puVar23 = (ulonglong)puVar11;
          lVar7 = 8;
          *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
          **(undefined8 **)(lVar6 + 8) = puVar16;
          *(undefined8 **)(lVar6 + 8) = puVar16 + 1;
          puVar16[1] = 0;
          *puVar16 = &PTR_LAB_143f59460;
          local_7d0 = local_260;
          *(undefined1 *)(lVar6 + 0x1ac) = 0;
          do {
            puVar11 = *(undefined8 **)(local_7d0 + -8);
            local_7d0 = local_7d0 + -8;
            lVar7 = lVar7 + -1;
            if (puVar11 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar11 + 1);
              iVar25 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar25 == 1) {
                if ((*(char *)(puVar11 + 2) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
                  LOCK();
                  bVar27 = *(int *)((longlong)puVar11 + 0xc) == 0;
                  if (bVar27) {
                    *(int *)((longlong)puVar11 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar27) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
                  }
                }
                else {
                  (**(code **)*puVar11)(puVar11);
                }
              }
            }
            plVar21 = local_738;
          } while (lVar7 != 0);
          iVar5 = (int)local_7a0 + 1;
          local_7a0 = (longlong *)CONCAT44(local_7a0._4_4_,iVar5);
          if (5 < iVar5) break;
          iVar25 = (int)local_798;
        }
        plVar19 = (longlong *)(*puVar23 + 7 & 0xfffffffffffffff8);
        local_680 = *local_7e0;
        plVar10 = plVar19 + 1;
        local_798 = plVar18;
        if ((longlong *)puVar23[1] < plVar10) {
          FMemStackBase::AllocateNewChunk(puVar23,0x10);
          plVar19 = (longlong *)(*puVar23 + 7 & 0xfffffffffffffff8);
          plVar10 = plVar19 + 1;
        }
        *puVar23 = (ulonglong)plVar10;
        *plVar19 = local_680;
        puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 5;
        if ((undefined8 *)puVar23[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar23,0x30);
          puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
        }
        local_7b4 = local_7b4 + 1;
        *puVar23 = (ulonglong)puVar11;
        *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
        **(undefined8 **)(lVar6 + 8) = puVar16;
        *(undefined8 **)(lVar6 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar16 + 2) = 1;
        puVar16[3] = plVar19;
        *(undefined4 *)(puVar16 + 4) = 0;
        *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
        plVar19 = local_728;
        plVar10 = local_730;
      } while ((int)local_7b4 < (int)local_7c8);
    }
    plVar18 = local_720;
    lVar6 = FSceneRenderTargets::Get(local_7d8);
    plVar22 = (longlong *)(*(longlong *)(lVar6 + 0x198) + 8);
    plVar20 = (longlong *)(*local_7b0 + 7 & 0xfffffffffffffff8);
    local_678 = *plVar22;
    plVar21 = plVar20 + 1;
    local_7e0 = plVar22;
    if ((longlong *)local_7b0[1] < plVar21) {
      FMemStackBase::AllocateNewChunk(local_7b0,0x10);
      plVar20 = (longlong *)(*local_7b0 + 7 & 0xfffffffffffffff8);
      plVar21 = plVar20 + 1;
    }
    *local_7b0 = (ulonglong)plVar21;
    *plVar20 = local_678;
    puVar16 = (undefined8 *)(*local_7b0 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 5;
    if ((undefined8 *)local_7b0[1] < puVar11) {
      FMemStackBase::AllocateNewChunk(local_7b0,0x30);
      puVar16 = (undefined8 *)(*local_7b0 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 5;
    }
    *local_7b0 = (ulonglong)puVar11;
    *(int *)(local_7d8 + 0x14) = *(int *)(local_7d8 + 0x14) + 1;
    **(undefined8 **)(local_7d8 + 8) = puVar16;
    *(undefined8 **)(local_7d8 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar16 + 2) = 1;
    *(undefined4 *)(puVar16 + 4) = 1;
    puVar16[3] = plVar20;
    *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
    local_258[0] = *plVar22;
    local_178 = 0xffffffffffffffff;
    uStack_170 = 0xffffffffffffffff;
    local_168 = 0xffffffffffffffff;
    uStack_160 = 0xffffffff;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_180 = 0;
    local_17c = 0xffffffff;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0xffffffff;
    local_144 = 0;
    local_140 = 0;
    local_108 = 0;
    local_258[1] = 0;
    local_248 = 0xffffffff;
    local_244 = 0x500;
    local_198 = 0;
    local_188 = 0;
    local_184 = 0;
    local_100[0] = 1 < *(uint *)(local_258[0] + 0x38);
    _guard_xfg_dispatch_icall_nop(local_240,0,0xa8);
    puVar23 = local_7b0;
    uVar17 = *local_7b0 + 1 & 0xfffffffffffffffe;
    uVar9 = uVar17 + 0x1c;
    if (local_7b0[1] < uVar9) {
      FMemStackBase::AllocateNewChunk(local_7b0,0x1e);
      uVar17 = *puVar23 + 1 & 0xfffffffffffffffe;
      uVar9 = uVar17 + 0x1c;
    }
    *puVar23 = uVar9;
    pwVar14 = L"GatherCoeffRP";
    do {
      wVar2 = *pwVar14;
      *(wchar_t *)((uVar17 - 0x144e37c28) + (longlong)pwVar14) = wVar2;
      pwVar14 = pwVar14 + 1;
    } while (wVar2 != L'\0');
    uVar15 = *puVar23 + 7 & 0xfffffffffffffff8;
    uVar9 = uVar15 + 0x178;
    if (puVar23[1] < uVar9) {
      FMemStackBase::AllocateNewChunk(puVar23,0x180);
      uVar15 = *puVar23 + 7 & 0xfffffffffffffff8;
      uVar9 = uVar15 + 0x178;
    }
    lVar6 = local_7d8;
    *puVar23 = uVar9;
    *(int *)(local_7d8 + 0x14) = *(int *)(local_7d8 + 0x14) + 1;
    **(ulonglong **)(local_7d8 + 8) = uVar15;
    *(ulonglong *)(local_7d8 + 8) = uVar15 + 8;
    FUN_140499730(uVar15,local_258,uVar17);
    *(undefined1 *)(lVar6 + 0x1ac) = 1;
    FUN_14049c2a0(lVar6,local_258);
    uVar12 = *(uint *)(lVar6 + 0x98);
    plVar20 = (longlong *)0x0;
    *(undefined1 *)(lVar6 + 0x1ac) = 1;
    iVar25 = 0;
    plVar21 = plVar20;
    if (uVar12 != 0) {
      do {
        lVar7 = *(longlong *)(lVar6 + 0xa0 + (longlong)plVar21 * 0x18);
        if (lVar7 == 0) {
          local_584[(longlong)plVar21] = 0;
        }
        else {
          local_584[(longlong)plVar21] = *(int *)(lVar7 + 0x3c);
          local_584[(longlong)(plVar21 + 1)] = *(int *)(lVar7 + 0x40);
        }
        auStack_544[(longlong)plVar21] = *(undefined1 *)(lVar6 + 0xb0 + (longlong)plVar21 * 0x18);
        *(undefined1 *)((longlong)&local_540 + 4 + (longlong)plVar21) =
             *(undefined1 *)(lVar6 + 0xb1 + (longlong)plVar21 * 0x18);
        if (local_584[(longlong)plVar21] != 0) {
          local_524 = CONCAT22(local_524._2_2_,*(undefined2 *)(lVar7 + 0x38));
        }
        uVar4 = (int)plVar21 + 1;
        plVar21 = (longlong *)(ulonglong)uVar4;
      } while (uVar4 < uVar12);
    }
    lVar7 = *(longlong *)(lVar6 + 0x160);
    if (lVar7 == 0) {
      local_534 = local_534 & 0xffffffff00000000;
    }
    else {
      iVar25 = *(int *)(lVar7 + 0x3c);
      local_534 = *(ulonglong *)(lVar7 + 0x3c);
    }
    local_52c = *(undefined8 *)(lVar6 + 0x168);
    if (iVar25 != 0) {
      local_524 = CONCAT22(local_524._2_2_,*(undefined2 *)(lVar7 + 0x38));
    }
    local_7c4 = local_7b8 + 1;
    puVar16 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar16 + 5;
    local_58c._4_4_ = uVar12;
    if (*(undefined8 **)(lVar6 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk((longlong *)(lVar6 + 0x30),0x30);
      puVar16 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 5;
    }
    plVar21 = local_780;
    *(undefined8 **)(lVar6 + 0x30) = puVar11;
    *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
    local_600 = 0;
    **(undefined8 **)(lVar6 + 8) = puVar16;
    *(undefined8 **)(lVar6 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f59420;
    *(undefined4 *)(puVar16 + 4) = 1;
    puVar16[2] = 0;
    *(undefined4 *)(puVar16 + 3) = 0;
    *(undefined4 *)((longlong)puVar16 + 0x1c) = 9;
    *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
    local_608 = &DAT_146b09c50;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(local_780,local_740,&local_608);
    plVar22 = plVar20;
    if (local_740[0] != -1) {
      plVar22 = (longlong *)((longlong)local_740[0] * 0x20 + *plVar21);
    }
    local_5f0 = 0;
    plVar21 = plVar22 + 2;
    if (plVar22 == (longlong *)0x0) {
      plVar21 = plVar20;
    }
    local_5f8 = &DAT_146a823f0;
    lVar6 = *plVar21;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(local_780,local_790,&local_5f8);
    if (local_790[0] != -1) {
      plVar20 = (longlong *)((longlong)local_790[0] * 0x20 + *local_780);
    }
    plVar21 = plVar20 + 2;
    plVar22 = (longlong *)0x0;
    if (plVar20 == (longlong *)0x0) {
      plVar21 = (longlong *)0x0;
    }
    lVar7 = *plVar21;
    local_5d8 = DAT_1464c2720;
    if (lVar6 == 0) {
      plVar18 = (longlong *)0x0;
      local_7e8 = local_7e8 | 0x10;
      local_720 = (longlong *)0x0;
    }
    else {
      local_788 = *(ulonglong *)(lVar6 + 0x48);
      if (*(char *)(local_788 + 0x28) == '\0') {
        FUN_1419f3850(local_788);
      }
      plVar22 = *(longlong **)(local_788 + 0x38);
    }
    plStack_5d0 = plVar22;
    if (((local_7e8 & 0x10) != 0) &&
       (local_7e8 = local_7e8 & 0xffffffef, plVar18 != (longlong *)0x0)) {
      LOCK();
      plVar21 = plVar18 + 1;
      lVar8 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        if (((char)plVar18[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')
            ))) {
          LOCK();
          bVar27 = *(int *)((longlong)plVar18 + 0xc) == 0;
          if (bVar27) {
            *(int *)((longlong)plVar18 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar27) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,plVar18);
          }
        }
        else {
          (**(code **)*plVar18)(plVar18,1);
        }
      }
    }
    if (lVar7 == 0) {
      local_7e8 = local_7e8 | 0x20;
      local_778 = (longlong *)0x0;
      local_5b8 = (longlong *)0x0;
    }
    else {
      local_788 = *(ulonglong *)(lVar7 + 0x48);
      if (*(char *)(local_788 + 0x28) == '\0') {
        FUN_1419f3850(local_788);
      }
      local_5b8 = *(longlong **)(local_788 + 0x40);
    }
    if (((local_7e8 & 0x20) != 0) &&
       (local_7e8 = local_7e8 & 0xffffffdf, local_778 != (longlong *)0x0)) {
      LOCK();
      plVar21 = local_778 + 1;
      lVar8 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        if (((char)local_778[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')
            ))) {
          LOCK();
          bVar27 = *(int *)((longlong)local_778 + 0xc) == 0;
          if (bVar27) {
            *(int *)((longlong)local_778 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar27) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_778);
          }
        }
        else {
          (**(code **)*local_778)(local_778,1);
        }
      }
    }
    local_58c = (ulonglong)local_58c._4_4_ << 0x20;
    FUN_141ed6ac0(local_7d8,&local_5d8,2,1);
    uVar12 = local_7c8 - 1 & 0x80000001;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffffe) + 1;
    }
    FUN_141d4caa0(lVar7,local_7d8,local_7c8 - 1,
                  *(longlong *)(local_718 + 0x188 + (longlong)(int)uVar12 * 8) + 0x10);
    lVar7 = local_7d8;
    local_7f0 = 1;
    local_7f8 = 0;
    local_6f0 = 1;
    uStack_6ec = 1;
    uStack_6e4 = 1;
    local_808 = 0x100000001;
    local_6e8 = 9;
    local_810 = 0x100000009;
    local_818 = 1.0;
    local_820 = 1.0;
    local_828 = local_828 & 0xffffffff00000000;
    local_830 = 0;
    local_838 = (longlong *)CONCAT44(local_838._4_4_,0x3f800000);
    local_800 = lVar6;
    DrawRectangle(local_7d8);
    puVar16 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar16 + 2;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30);
      puVar16 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 2;
    }
    puVar23 = (ulonglong *)(lVar7 + 0x30);
    *puVar23 = (ulonglong)puVar11;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar16;
    *(undefined8 **)(lVar7 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f59460;
    *(undefined1 *)(lVar7 + 0x1ac) = 0;
    local_670 = *local_7e0;
    plVar18 = (longlong *)(*puVar23 + 7 & 0xfffffffffffffff8);
    plVar21 = plVar18 + 1;
    if (*(longlong **)(lVar7 + 0x38) < plVar21) {
      FMemStackBase::AllocateNewChunk(puVar23);
      plVar18 = (longlong *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar21 = plVar18 + 1;
    }
    puVar23 = (ulonglong *)(lVar7 + 0x30);
    *puVar23 = (ulonglong)plVar21;
    *plVar18 = local_670;
    puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 5;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar23);
      puVar16 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 5;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar11;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar16;
    *(undefined8 **)(lVar7 + 8) = puVar16 + 1;
    lVar6 = 8;
    puVar16[1] = 0;
    puVar16[3] = plVar18;
    *puVar16 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar16 + 2) = 1;
    local_7d0 = local_100;
    *(undefined4 *)(puVar16 + 4) = 0;
    *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
    do {
      puVar11 = *(undefined8 **)(local_7d0 + -8);
      local_7d0 = local_7d0 + -8;
      lVar6 = lVar6 + -1;
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar11 + 1);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if ((*(char *)(puVar11 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar27 = *(int *)((longlong)puVar11 + 0xc) == 0;
            if (bVar27) {
              *(int *)((longlong)puVar11 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar27) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar11)(puVar11);
          }
        }
      }
    } while (lVar6 != 0);
    local_7b8 = local_7c4;
    param_1 = local_7d8;
  } while (local_7c4 < 9);
  lVar7 = FSceneRenderTargets::Get(local_7d8);
  local_838 = &local_6c8;
  local_820 = 0.0;
  local_828 = local_828 & 0xffffffff00000000;
  local_830 = 0;
  local_5e8 = 0;
  uStack_5e0 = 0x100000009;
  local_6c8 = lVar6;
  local_6c0 = lVar6;
  (**(code **)(*DAT_146ab6358 + 0x6c8))
            (DAT_146ab6358,local_7d8,*(undefined8 *)(*(longlong *)(lVar7 + 0x198) + 0x10),&local_5e8
            );
  plVar10 = local_7a8 + 0xc;
  lVar6 = 0;
  do {
    FUN_14161f710(&local_658,local_6c8 + lVar6);
    lVar6 = lVar6 + 8;
    local_6e0 = local_6e0 + -1;
    *(undefined4 *)(plVar10 + -0xc) = local_658;
    *(undefined4 *)plVar10 = local_650;
    *(undefined4 *)(plVar10 + -6) = local_654;
    plVar10 = (longlong *)((longlong)plVar10 + 4);
  } while (local_6e0 != 0);
  if (local_6c8 != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_6d8);
  return;
}



// FUNCTION 141d23f40 FUN_141d23f40 body=165 status=ok
// SIG undefined FUN_141d23f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141d23f40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined4 uStack_34;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar2 = FSceneRenderTargets::Get();
  uVar1 = *(undefined8 *)(lVar2 + 0x378);
  *(int *)((longlong)param_2 + 0x14) = (int)uVar1;
  uStack_34 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(param_2 + 3) = uStack_34;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *param_2 = 1;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 10;
  param_2[8] = L"ScreenSpaceReflections";
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 0;
  *(undefined4 *)(param_2 + 6) = DAT_146a9da90;
  return param_2;
}



// FUNCTION 141d23ff0 FUN_141d23ff0 body=238 status=ok
// SIG undefined FUN_141d23ff0(void)

float * FUN_141d23ff0(float *param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(*param_2 + 0x17cc);
  if (0.01 <= fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.01;
  }
  fVar5 = -2.0 / fVar5;
  if (param_3 < 3) {
    fVar5 = fVar5 + fVar5;
  }
  fVar4 = 0.0;
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    lVar1 = *(longlong *)param_2[4];
    if (*(int *)(*param_2 + 0x1a10) == 2) {
      iVar2 = (**(code **)(lVar1 + 0x58))();
    }
    else {
      iVar2 = (**(code **)(lVar1 + 0x70))();
    }
    fVar4 = (float)(uint)(iVar2 * 0x60f);
  }
  fVar3 = *(float *)(*param_2 + 0x17c4) * 0.01;
  fVar6 = 0.0;
  if ((0.0 <= fVar3) && (fVar6 = fVar3, 1.0 <= fVar3)) {
    fVar6 = 1.0;
  }
  *param_1 = fVar6;
  param_1[1] = fVar5;
  param_1[3] = fVar4;
  param_1[2] = (float)param_4;
  return param_1;
}



// FUNCTION 141d240e0 FUN_141d240e0 body=1324 status=ok
// SIG undefined FUN_141d240e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141d240e0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_248 [32];
  wchar_t *local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8 [2];
  undefined *local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8 [2];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  plVar12 = (longlong *)0x0;
  local_1d8 = local_1d8 & 0xffffffff00000000;
  local_98 = DAT_146ab6938;
  local_94 = 1;
  local_90 = 1;
  local_88 = 1;
  local_80 = 1;
  local_74 = 1;
  local_68 = L"UnknownTexture2D";
  local_218 = CONCAT31(local_218._1_3_,1);
  local_220 = CONCAT31(local_220._1_3_,1);
  local_228 = L"ReflectionBrightness";
  local_1c8[0] = (longlong *)0x0;
  local_a8 = _DAT_146ab6928;
  uStack_a0 = uRam0000000146ab6930;
  local_84 = 0x10000;
  local_7c = 10;
  local_70 = 0;
  local_60 = 1;
  local_1d0 = param_4;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_a8,local_1c8);
  plVar4 = local_1c8[0];
  FUN_141a19150(param_2,local_1c8[0][1],0,1);
  local_128 = 0;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
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
  FUN_14049afe0(param_2,&local_168);
  uStack_130 = FUN_140985530();
  local_128 = FUN_1409853f0();
  local_138 = FUN_1404a0ce0();
  lVar5 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  uStack_1b0._0_4_ = 0;
  local_1b8 = &DAT_146a51f90;
  plVar10 = (longlong *)(lVar5 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,&local_1d8,&local_1b8);
  plVar8 = plVar12;
  if ((int)local_1d8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_1d8 * 0x20 + *plVar10);
  }
  uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
  plVar11 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar11 = plVar12;
  }
  local_1b8 = &DAT_146a81c10;
  lVar5 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,&local_1d8,&local_1b8);
  plVar8 = plVar12;
  if ((int)local_1d8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_1d8 * 0x20 + *plVar10);
  }
  plVar10 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar10 = plVar12;
  }
  lVar1 = *plVar10;
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1d8 = 0;
    plVar10 = (longlong *)0x1;
    plStack_160 = plVar12;
  }
  else {
    lVar2 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_160 = *(longlong **)(lVar2 + 0x38);
    plVar10 = plVar12;
  }
  uVar6 = 0;
  if (plVar10 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d8);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_1d8 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_148 = uVar6;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d8);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_2,&local_168,2,1);
  FUN_141d4ceb0(lVar1,param_2,local_1d0,param_5);
  local_1e0 = 1;
  local_1e8 = 0;
  local_1d0 = 1;
  uStack_1cc = 1;
  local_1f8 = 0x100000001;
  local_1d8 = 0x100000001;
  local_200 = 0x100000001;
  local_208 = 0x3f800000;
  local_210 = 0x3f800000;
  local_218 = 0;
  local_220 = 0;
  local_228 = (wchar_t *)CONCAT44(local_228._4_4_,0x3f800000);
  local_1f0 = lVar5;
  DrawRectangle(param_2);
  plVar10 = (longlong *)plVar4[1];
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_198 = 0xffffffff00000000;
  uStack_190 = 0xffffffffffffffff;
  puVar7 = puVar9 + 10;
  local_188 = 0xffffffffffffffff;
  uStack_180 = 0xffffffffffffffff;
  local_178 = 0xffffffff;
  uStack_170 = 0;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar9 + 2) = (undefined4)local_198;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_198._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_190;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_190._4_4_;
  *(undefined4 *)(puVar9 + 4) = (undefined4)local_188;
  *(undefined4 *)((longlong)puVar9 + 0x24) = local_188._4_4_;
  *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_180;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_180._4_4_;
  *(undefined4 *)(puVar9 + 6) = (undefined4)local_178;
  *(undefined4 *)((longlong)puVar9 + 0x34) = local_178._4_4_;
  *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_170;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_170._4_4_;
  puVar9[8] = plVar10;
  puVar9[9] = plVar10;
  lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
  if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar9[8] + 0x18))(), lVar5 == 0)) {
    (**(code **)(*(longlong *)puVar9[8] + 0x20))();
  }
  lVar5 = (**(code **)(*(longlong *)puVar9[9] + 8))();
  if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar9[9] + 0x18))(), lVar5 == 0)) {
    (**(code **)(*(longlong *)puVar9[9] + 0x20))();
  }
  local_228 = (wchar_t *)local_1a8;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_1b8 = (undefined *)0x0;
  uStack_1b0 = 0x100000001;
  (**(code **)(*DAT_146ab6358 + 0x6c8))(DAT_146ab6358,param_2,local_1c8[0][2],&local_1b8);
  FUN_14161f710(param_1,local_1a8[0]);
  if (local_1a8[0] != 0) {
    FMemory::Free();
  }
  if (local_1c8[0] != (longlong *)0x0) {
    (**(code **)(*local_1c8[0] + 0x30))();
  }
  return param_1;
}



// FUNCTION 141d24610 FUN_141d24610 body=476 status=ok
// SIG undefined FUN_141d24610(void)

void FUN_141d24610(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  
  uVar7 = 0;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_146a83cf0) && (_Init_thread_header(&DAT_146a83cf0), DAT_146a83cf0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EarlyZPass");
    uVar6 = uVar7;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a83ce8 = uVar6;
    _Init_thread_footer(&DAT_146a83cf0);
  }
  if ((*piVar8 < DAT_146a83d00) && (_Init_thread_header(&DAT_146a83d00), DAT_146a83d00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelines");
    uVar6 = uVar7;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a83cf8 = uVar6;
    _Init_thread_footer(&DAT_146a83d00);
  }
  cVar3 = FUN_142753a10();
  cVar4 = FUN_142753910();
  iVar1 = *(int *)(DAT_146a83ce8 + 4);
  iVar2 = *(int *)(DAT_146a83cf8 + 4);
  if ((((*(char *)(param_1 + 0x114c) != '\0') || (*(char *)(param_1 + 0x1140) != cVar3)) ||
      (*(char *)(param_1 + 0x1141) != cVar4)) ||
     ((*(int *)(param_1 + 0x1148) != iVar2 || (*(int *)(param_1 + 0x1144) != iVar1)))) {
    uVar6 = uVar7;
    if (0 < *(int *)(param_1 + 0xfe8)) {
      do {
        uVar7 = uVar7 + 8;
        uVar9 = (int)uVar6 + 1;
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0xfe0) + -8 + uVar7) + 0xf8) = 1;
        uVar6 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0xfe8));
    }
    *(undefined1 *)(param_1 + 0x114c) = 0;
    *(char *)(param_1 + 0x1140) = cVar3;
    *(char *)(param_1 + 0x1141) = cVar4;
    *(int *)(param_1 + 0x1144) = iVar1;
    *(int *)(param_1 + 0x1148) = iVar2;
  }
  return;
}



// FUNCTION 141d247f0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
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



// FUNCTION 141d248a0 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TCubeFilterPS<1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FCubeFilterPS::FCubeFilterPS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc9898;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d248f0 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 *
FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance
          (undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d0fc60(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e34a80;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d24940 FUN_141d24940 body=46 status=ok
// SIG undefined FUN_141d24940(void)

void FUN_141d24940(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf8);
  if (lVar1 != 0) {
    VisualizeTexturePS<2>::VisualizeTexturePS<2>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141d24970 ConstructCompiledInstance body=194 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FAccumulateCubeFacesPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46e80;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SourceMipIndex",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"SourceTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),L"SourceTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d24a40 ConstructCompiledInstance body=316 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FAccumulateDiffuseIrradiancePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46e20;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xde) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"CubeFace",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"SourceMipIndex",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SourceTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"SourceTextureSampler",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"Sample01",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xda,*(undefined8 *)(param_1 + 0x18),L"Sample23",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d24b80 ConstructCompiledInstance body=197 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FComputeBrightnessPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91300;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ReflectionEnvironmentColorTexture",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),
               L"ReflectionEnvironmentColorSampler",0);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"NumCaptureArrayMips",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d24c50 ConstructCompiledInstance body=316 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopyCubemapToCubeFacePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46a70;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xde) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"CubeFace",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"SourceTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),L"SourceTextureSampler",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"SkyLightCaptureParameters",
               0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"LowerHemisphereColor",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xda,*(undefined8 *)(param_1 + 0x18),
               L"SinCosSourceCubemapRotation",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d24d90 FUN_141d24d90 body=46 status=ok
// SIG undefined FUN_141d24d90(void)

void FUN_141d24d90(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf0);
  if (lVar1 != 0) {
    FCopyDiffuseIrradiancePS::FCopyDiffuseIrradiancePS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141d24dc0 ConstructCompiledInstance body=280 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TCapsuleShadowingUpsamplePS<1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8c68;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    FUN_141cdf500(param_1);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"InTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"InTextureSampler",0);
    FShaderParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"SkyLightCaptureParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xde,*(undefined8 *)(param_1 + 0x18),L"LowerHemisphereColor",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d24ee0 FUN_141d24ee0 body=316 status=ok
// SIG undefined FUN_141d24ee0(void)

undefined8 * FUN_141d24ee0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e47310;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xde) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"CubeFace",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"MipIndex",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"NumMips",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"ColorTransform",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"SourceTexture",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"SourceTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25020 FUN_141d25020 body=46 status=ok
// SIG undefined FUN_141d25020(void)

void FUN_141d25020(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xe0);
  if (lVar1 != 0) {
    FCubeFilterPS::FCubeFilterPS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141d25050 FUN_141d25050 body=357 status=ok
// SIG undefined FUN_141d25050(void)

undefined8 * FUN_141d25050(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e47968;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"SSRParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"HZBUvFactorAndInvFactor",0
              );
    FShaderParameter::Bind
              (puVar1 + 0x3b,*(undefined8 *)(param_1 + 0x18),L"PrevScreenPositionScaleBias",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1de,*(undefined8 *)(param_1 + 0x18),
               L"PrevSceneColorPreExposureCorrection",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d251c0 FUN_141d251c0 body=231 status=ok
// SIG undefined FUN_141d251c0(void)

undefined8 * FUN_141d251c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc93f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"SSRParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d252b0 FUN_141d252b0 body=231 status=ok
// SIG undefined FUN_141d252b0(void)

undefined8 * FUN_141d252b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc93f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"ShadingModelMaskInView",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d253a0 ConstructCompiledInstance body=214 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPrimitiveDistanceAccuracyPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46c78;
    puVar1[0x18] = &PTR_LAB_144e46ce0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd6) = 0;
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"AccuracyColors",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"CPULogDistance",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"PrimitiveAlpha",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25480 ConstructCompiledInstance body=149 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FVisualizeTexturePresentPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf7d0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"VisualizeTexture2D",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"VisualizeTexture2DSampler",
               0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25520 FUN_141d25520 body=87 status=ok
// SIG undefined FUN_141d25520(void)

undefined8 * FUN_141d25520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144dc9898;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25580 FUN_141d25580 body=57 status=ok
// SIG undefined FUN_141d25580(void)

undefined8 * FUN_141d25580(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d0ff90(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e34a80;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d255c0 FUN_141d255c0 body=108 status=ok
// SIG undefined FUN_141d255c0(void)

undefined8 * FUN_141d255c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e34ab0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25630 FUN_141d25630 body=79 status=ok
// SIG undefined FUN_141d25630(void)

undefined8 * FUN_141d25630(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46e80;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25680 FUN_141d25680 body=87 status=ok
// SIG undefined FUN_141d25680(void)

undefined8 * FUN_141d25680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46e20;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d256e0 FUN_141d256e0 body=87 status=ok
// SIG undefined FUN_141d256e0(void)

undefined8 * FUN_141d256e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46a70;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25740 FUN_141d25740 body=100 status=ok
// SIG undefined FUN_141d25740(void)

undefined8 * FUN_141d25740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46d60;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d257b0 FUN_141d257b0 body=87 status=ok
// SIG undefined FUN_141d257b0(void)

undefined8 * FUN_141d257b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e47310;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25810 FUN_141d25810 body=130 status=ok
// SIG undefined FUN_141d25810(void)

undefined8 * FUN_141d25810(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e47968;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d258a0 ConstructSerializedInstance body=94 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPrimitiveDistanceAccuracyPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e46c78;
    puVar1[0x18] = &PTR_LAB_144e46ce0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d25900 FUN_141d25900 body=3515 status=ok
// SIG undefined FUN_141d25900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined **
FUN_141d25900(longlong *param_1,int param_2,longlong param_3,int param_4,undefined1 param_5,
             undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  uint *puVar2;
  wchar_t wVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  bool bVar25;
  undefined1 auStack_428 [32];
  float local_408;
  undefined4 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  float local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c0;
  uint local_3b8;
  uint local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  longlong *local_398;
  longlong local_390;
  undefined1 local_388 [8];
  longlong local_380;
  undefined1 local_378 [8];
  longlong local_370;
  undefined1 local_368 [8];
  longlong local_360;
  int local_358;
  int iStack_354;
  int local_350;
  int iStack_34c;
  longlong *local_348;
  longlong local_340;
  longlong *local_338;
  longlong local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined *local_318;
  undefined4 local_310;
  undefined *local_308;
  undefined4 local_300;
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [24];
  undefined1 local_2c8 [32];
  undefined8 local_2a8;
  longlong *plStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  longlong *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  uint local_258;
  int local_254 [16];
  undefined1 auStack_214 [4];
  undefined8 local_210;
  undefined4 local_208;
  ulonglong local_204;
  longlong local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined8 local_1e0;
  uint local_1d8;
  undefined2 local_1d4;
  undefined1 local_1d0 [168];
  undefined8 local_128;
  undefined1 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined1 local_90 [8];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  local_328 = param_8;
  local_3b8 = 0;
  local_3a8 = 0;
  local_3ac = param_4;
  local_398 = param_1;
  local_330 = param_3;
  lVar7 = FSceneRenderTargets::Get();
  puVar22 = (ulonglong *)(param_1 + 6);
  plVar18 = (longlong *)(param_1[6] + 7U & 0xfffffffffffffff8);
  local_338 = (longlong *)(*(longlong *)(lVar7 + 0x170) + 8);
  plVar14 = plVar18 + 1;
  local_340 = *local_338;
  if ((longlong *)param_1[7] < plVar14) {
    FMemStackBase::AllocateNewChunk(puVar22);
    plVar18 = (longlong *)(*puVar22 + 7 & 0xfffffffffffffff8);
    plVar14 = plVar18 + 1;
  }
  *puVar22 = (ulonglong)plVar14;
  *plVar18 = local_340;
  puVar15 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar15 + 5;
  if ((undefined8 *)param_1[7] < puVar12) {
    FMemStackBase::AllocateNewChunk(puVar22);
    puVar15 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
  }
  *puVar22 = (ulonglong)puVar12;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  *(undefined8 **)param_1[1] = puVar15;
  param_1[1] = (longlong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar15 + 2) = 1;
  *(undefined4 *)(puVar15 + 4) = 1;
  puVar15[3] = plVar18;
  *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
  local_3b0 = 0;
  local_348 = local_398;
  plVar14 = local_398;
  uVar23 = 0;
  local_360 = (longlong)param_2;
  do {
    plVar18 = local_348;
    local_1e0 = 0;
    local_108 = 0xffffffffffffffff;
    uStack_100 = 0xffffffffffffffff;
    local_f8 = 0xffffffffffffffff;
    uStack_f0 = 0xffffffff;
    local_114 = 0;
    local_1e8 = *local_338;
    local_10c = 0xffffffff;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0xffffffff;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_1d4 = 0x100;
    local_118 = 0;
    local_90[0] = 1 < *(uint *)(local_1e8 + 0x38);
    local_1d8 = local_3b0;
    local_128 = local_1e0;
    local_110 = local_114;
    local_d4 = local_114;
    local_d0 = local_1e0;
    local_98 = local_1e0;
    _guard_xfg_dispatch_icall_nop(local_1d0,0,0xa8);
    uVar19 = *puVar22 + 1 & 0xfffffffffffffffe;
    uVar8 = uVar19 + 0x3c;
    if (puVar22[1] < uVar8) {
      FMemStackBase::AllocateNewChunk(puVar22,0x3e);
      uVar19 = *puVar22 + 1 & 0xfffffffffffffffe;
      uVar8 = uVar19 + 0x3c;
    }
    *puVar22 = uVar8;
    pwVar16 = L"CopyCubemapToScratchCubemapRP";
    do {
      wVar3 = *pwVar16;
      *(wchar_t *)((uVar19 - 0x144e38058) + (longlong)pwVar16) = wVar3;
      pwVar16 = pwVar16 + 1;
    } while (wVar3 != L'\0');
    uVar17 = *puVar22 + 7 & 0xfffffffffffffff8;
    uVar8 = uVar17 + 0x178;
    if (puVar22[1] < uVar8) {
      FMemStackBase::AllocateNewChunk(puVar22,0x180);
      uVar17 = *puVar22 + 7 & 0xfffffffffffffff8;
      uVar8 = uVar17 + 0x178;
    }
    *puVar22 = uVar8;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    *(ulonglong *)param_1[1] = uVar17;
    param_1[1] = uVar17 + 8;
    FUN_140499730(uVar17,&local_1e8,uVar19);
    *(undefined1 *)((longlong)param_1 + 0x1ac) = 1;
    FUN_14049c2a0(param_1,&local_1e8);
    *(undefined1 *)((longlong)param_1 + 0x1ac) = 1;
    plVar9 = *(longlong **)(local_330 + 0x60);
    local_320 = plVar9;
    iVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
    local_39c = iVar6;
    local_3a8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    puVar15 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
    local_358 = local_3a8;
    iStack_354 = iVar6;
    if ((undefined8 *)puVar22[1] < puVar12) {
      FMemStackBase::AllocateNewChunk(puVar22,0x30);
      puVar15 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
    }
    *puVar22 = (ulonglong)puVar12;
    uVar19 = 0;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    *(undefined8 **)param_1[1] = puVar15;
    param_1[1] = (longlong)(puVar15 + 1);
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f59420;
    *(int *)((longlong)puVar15 + 0x1c) = local_3ac;
    *(int *)(puVar15 + 4) = local_3ac;
    puVar15[2] = 0;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
    local_258 = *(uint *)(param_1 + 0x13);
    local_2a8 = 0;
    plStack_2a0 = (longlong *)0x0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = (longlong *)0x0;
    uStack_280 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_25c = 0x26;
    local_254[0] = 0;
    local_254[1] = 0;
    local_254[2] = 0;
    local_254[3] = 0;
    local_254[4] = 0;
    local_254[5] = 0;
    local_254[6] = 0;
    local_254[7] = 0;
    local_254[8] = 0;
    local_254[9] = 0;
    local_254[10] = 0;
    local_254[0xb] = 0;
    local_254[0xc] = 0;
    local_254[0xd] = 0;
    local_254[0xe] = 0;
    stack0xfffffffffffffde8 = 0;
    local_210 = 0;
    local_208 = 0;
    local_204 = 0;
    local_1fc = 0;
    local_1f4 = 0;
    uVar8 = uVar19;
    if (local_258 != 0) {
      do {
        lVar7 = param_1[uVar8 * 3 + 0x14];
        if (lVar7 == 0) {
          local_254[uVar8] = 0;
        }
        else {
          local_254[uVar8] = *(int *)(lVar7 + 0x3c);
          local_254[uVar8 + 8] = *(int *)(lVar7 + 0x40);
        }
        auStack_214[uVar8] = (char)param_1[uVar8 * 3 + 0x16];
        *(undefined1 *)((longlong)&local_210 + uVar8 + 4) =
             *(undefined1 *)((longlong)param_1 + uVar8 * 0x18 + 0xb1);
        if (local_254[uVar8] != 0) {
          local_1f4 = CONCAT22(local_1f4._2_2_,*(undefined2 *)(lVar7 + 0x38));
        }
        uVar21 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar21;
      } while (uVar21 < local_258);
    }
    lVar7 = param_1[0x2c];
    if (lVar7 == 0) {
      local_204 = local_204 & 0xffffffff00000000;
    }
    else {
      uVar19 = (ulonglong)*(uint *)(lVar7 + 0x3c);
      local_204 = *(ulonglong *)(lVar7 + 0x3c);
    }
    local_1fc = param_1[0x2d];
    if ((int)uVar19 != 0) {
      local_1f4 = CONCAT22(local_1f4._2_2_,*(undefined2 *)(lVar7 + 0x38));
    }
    if (DAT_146864320 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar5 = IsInRenderingThread();
        if (cVar5 == '\0') {
          FScopedEvent::FScopedEvent(local_388);
          plVar9 = (longlong *)FUN_14049e3d0(local_2f8,0,0xff);
          lVar7 = *plVar9;
          *(undefined1 **)(lVar7 + 0x10) = &LAB_140985690;
          *(undefined1 **)(lVar7 + 0x18) = local_388;
          lVar7 = *plVar9;
          lVar4 = plVar9[2];
          lVar10 = plVar9[1];
          lVar11 = *(longlong *)(lVar7 + 0x28);
          piVar1 = (int *)(lVar11 + 0x48);
          if (lVar11 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_390 = lVar11;
          FUN_1404a4fe0(lVar7,lVar10,(int)lVar4,1);
          if (lVar11 != 0) {
            LOCK();
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              FGraphEvent::Recycle(local_390);
            }
          }
          FScopedEvent::~FScopedEvent(local_388);
        }
        else {
          lVar7 = operator_new(0x38);
          if (lVar7 == 0) {
            DAT_146864320 = 0;
          }
          else {
            DAT_146864320 =
                 TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar7);
          }
        }
      }
      else {
        lVar7 = operator_new(0x38);
        if (lVar7 == 0) {
          LOCK();
          if (DAT_146864320 == 0) {
            DAT_146864320 = 0;
          }
          UNLOCK();
        }
        else {
          lVar7 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                  ::FStaticStateResource::FStaticStateResource(lVar7);
          LOCK();
          if (DAT_146864320 != 0) {
            lVar7 = DAT_146864320;
          }
          DAT_146864320 = lVar7;
          UNLOCK();
        }
      }
    }
    uStack_270 = *(undefined8 *)(DAT_146864320 + 0x30);
    if (DAT_146864318 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar5 = IsInRenderingThread();
        if (cVar5 == '\0') {
          FScopedEvent::FScopedEvent(local_378);
          plVar9 = (longlong *)FUN_14049e3d0(local_2e0,0,0xff);
          lVar7 = *plVar9;
          *(undefined1 **)(lVar7 + 0x10) = &LAB_140985680;
          *(undefined1 **)(lVar7 + 0x18) = local_378;
          lVar7 = *plVar9;
          lVar4 = plVar9[2];
          lVar10 = plVar9[1];
          lVar11 = *(longlong *)(lVar7 + 0x28);
          piVar1 = (int *)(lVar11 + 0x48);
          if (lVar11 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_380 = lVar11;
          FUN_1404a4fe0(lVar7,lVar10,(int)lVar4,1);
          if (lVar11 != 0) {
            LOCK();
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              FGraphEvent::Recycle(local_380);
            }
          }
          FScopedEvent::~FScopedEvent(local_378);
        }
        else {
          lVar7 = operator_new(0x38);
          if (lVar7 == 0) {
            DAT_146864318 = 0;
          }
          else {
            DAT_146864318 =
                 TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar7);
          }
        }
      }
      else {
        lVar7 = operator_new(0x38);
        if (lVar7 == 0) {
          LOCK();
          if (DAT_146864318 == 0) {
            DAT_146864318 = 0;
          }
          UNLOCK();
        }
        else {
          lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                  ::FStaticStateResource::FStaticStateResource(lVar7);
          LOCK();
          if (DAT_146864318 != 0) {
            lVar7 = DAT_146864318;
          }
          DAT_146864318 = lVar7;
          UNLOCK();
        }
      }
    }
    local_268 = *(undefined8 *)(DAT_146864318 + 0x30);
    if (DAT_146852b40 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar5 = IsInRenderingThread();
        if (cVar5 == '\0') {
          FScopedEvent::FScopedEvent(local_368);
          plVar9 = (longlong *)FUN_14049e3d0(local_2c8,0,0xff);
          lVar7 = *plVar9;
          *(undefined1 **)(lVar7 + 0x10) = &LAB_1404a0f60;
          *(undefined1 **)(lVar7 + 0x18) = local_368;
          lVar7 = *plVar9;
          lVar4 = plVar9[2];
          lVar10 = plVar9[1];
          lVar11 = *(longlong *)(lVar7 + 0x28);
          piVar1 = (int *)(lVar11 + 0x48);
          if (lVar11 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_370 = lVar11;
          FUN_1404a4fe0(lVar7,lVar10,(int)lVar4,1);
          if (lVar11 != 0) {
            LOCK();
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              FGraphEvent::Recycle(local_370);
            }
          }
          FScopedEvent::~FScopedEvent(local_368);
        }
        else {
          lVar7 = operator_new(0x38);
          if (lVar7 == 0) {
            DAT_146852b40 = 0;
          }
          else {
            DAT_146852b40 =
                 TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar7);
          }
        }
      }
      else {
        lVar7 = operator_new(0x38);
        if (lVar7 == 0) {
          LOCK();
          if (DAT_146852b40 == 0) {
            DAT_146852b40 = 0;
          }
          UNLOCK();
        }
        else {
          lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                  ::FStaticStateResource::FStaticStateResource(lVar7);
          LOCK();
          if (DAT_146852b40 != 0) {
            lVar7 = DAT_146852b40;
          }
          DAT_146852b40 = lVar7;
          UNLOCK();
        }
      }
    }
    local_310 = 0;
    local_278 = *(undefined8 *)(DAT_146852b40 + 0x30);
    local_318 = &DAT_146b09c50;
    lVar7 = FUN_1419ef210((&DAT_1464c9c48)[local_360]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar7 + 0x38,&local_3a4,&local_318);
    if (local_3a4 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)local_3a4 * 0x20 + *(longlong *)(lVar7 + 0x38);
    }
    local_300 = 0;
    plVar9 = (longlong *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      plVar9 = (longlong *)0x0;
    }
    local_308 = &DAT_146a82000;
    lVar7 = *plVar9;
    lVar10 = FUN_1419ef210((&DAT_1464c9c48)[local_360]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&local_3a0);
    if (local_3a0 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)local_3a0 * 0x20 + *(longlong *)(lVar10 + 0x38);
    }
    plVar9 = (longlong *)0x0;
    plVar20 = (longlong *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      plVar20 = plVar9;
    }
    lVar10 = *plVar20;
    local_2a8 = DAT_1464c2720;
    if (lVar7 == 0) {
      local_3b8 = uVar23 | 1;
      local_348 = (longlong *)0x0;
      plVar18 = plVar9;
    }
    else {
      lVar11 = *(longlong *)(lVar7 + 0x48);
      if (*(char *)(lVar11 + 0x28) == '\0') {
        FUN_1419f3850(lVar11);
      }
      plVar9 = *(longlong **)(lVar11 + 0x38);
    }
    uVar23 = local_3b8;
    plStack_2a0 = plVar9;
    if (((local_3b8 & 1) != 0) &&
       (uVar23 = local_3b8 & 0xfffffffe, local_3b8 = uVar23, plVar18 != (longlong *)0x0)) {
      LOCK();
      plVar9 = plVar18 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        if (((char)plVar18[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar25 = *(int *)((longlong)plVar18 + 0xc) == 0;
          if (bVar25) {
            *(int *)((longlong)plVar18 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar25) {
            uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar21 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar11 + 8) = plVar18;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar18)(plVar18,1);
        }
      }
    }
    if (lVar10 == 0) {
      local_3b8 = uVar23 | 2;
      local_288 = (longlong *)0x0;
      plVar14 = local_288;
    }
    else {
      lVar11 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar11 + 0x28) == '\0') {
        FUN_1419f3850(lVar11);
      }
      local_288 = *(longlong **)(lVar11 + 0x40);
    }
    if (((local_3b8 & 2) != 0) && (local_3b8 = local_3b8 & 0xfffffffd, plVar14 != (longlong *)0x0))
    {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar11 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        if (((char)plVar14[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar25 = *(int *)((longlong)plVar14 + 0xc) == 0;
          if (bVar25) {
            *(int *)((longlong)plVar14 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar25) {
            uVar23 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar23 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = (&DAT_1468a81f8)[uVar23 >> 0xe] + (ulonglong)(uVar23 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar11 + 8) = plVar14;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar14)(plVar14,1);
        }
      }
    }
    local_25c = 0;
    FUN_141ed6ac0(param_1,&local_2a8,2,1);
    local_3f0 = local_328;
    local_3f8 = param_7;
    local_400 = CONCAT31(local_400._1_3_,param_6);
    local_408 = (float)CONCAT31(local_408._1_3_,param_5);
    FCopyCubemapToCubeFacePS::SetParameters(lVar10,param_1,local_320,local_3b0);
    local_350 = local_3ac;
    iStack_34c = local_3ac;
    local_3c0 = 1;
    local_3d8 = CONCAT44(iStack_354,local_358);
    local_3c8 = 0;
    local_3e0 = CONCAT44(local_3ac,local_3ac);
    local_3e8 = (float)local_39c;
    local_3f0 = CONCAT44(local_3f0._4_4_,(float)local_3a8);
    local_3f8 = 0;
    local_400 = 0;
    local_408 = (float)param_4;
    local_3d0 = lVar7;
    DrawRectangle(param_1);
    puVar15 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 2;
    if ((undefined8 *)puVar22[1] < puVar12) {
      FMemStackBase::AllocateNewChunk(puVar22,0x18);
      puVar15 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar15 + 2;
    }
    *puVar22 = (ulonglong)puVar12;
    lVar7 = 8;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    *(undefined8 **)param_1[1] = puVar15;
    param_1[1] = (longlong)(puVar15 + 1);
    puVar15[1] = 0;
    ppuVar13 = &PTR_LAB_143f59460;
    *puVar15 = &PTR_LAB_143f59460;
    *(undefined1 *)((longlong)param_1 + 0x1ac) = 0;
    puVar24 = local_90;
    do {
      puVar12 = *(undefined8 **)(puVar24 + -8);
      puVar24 = puVar24 + -8;
      lVar7 = lVar7 + -1;
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        puVar2 = (uint *)(puVar12 + 1);
        uVar23 = *puVar2;
        ppuVar13 = (undefined **)(ulonglong)uVar23;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if (uVar23 == 1) {
          if ((*(char *)(puVar12 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            ppuVar13 = (undefined **)0x0;
            LOCK();
            uVar23 = *(uint *)((longlong)puVar12 + 0xc);
            if (uVar23 == 0) {
              *(uint *)((longlong)puVar12 + 0xc) = 1;
            }
            else {
              ppuVar13 = (undefined **)(ulonglong)uVar23;
            }
            UNLOCK();
            if (uVar23 == 0) {
              uVar23 = FLockFreeLinkPolicy::AllocLockFreeLink();
              lVar10 = 0;
              if (uVar23 != 0) {
                lVar10 = (&DAT_1468a81f8)[uVar23 >> 0xe] + (ulonglong)(uVar23 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar10 + 8) = puVar12;
              ppuVar13 = (undefined **)FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            ppuVar13 = (undefined **)(**(code **)*puVar12)(puVar12,1);
          }
        }
      }
    } while (lVar7 != 0);
    local_3b0 = local_3b0 + 1;
    puVar22 = (ulonglong *)(local_398 + 6);
    param_1 = local_398;
    uVar23 = local_3b8;
  } while (local_3b0 < 6);
  return ppuVar13;
}



// FUNCTION 141d266c0 FUN_141d266c0 body=169 status=ok
// SIG undefined FUN_141d266c0(void)

undefined8 * FUN_141d266c0(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_FUN_144e48cf8;
  puVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar2 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    return puVar2;
  }
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2 + 1,iVar1,0);
  _guard_xfg_dispatch_icall_nop((void *)puVar2[1],_Src,(longlong)iVar1 << 3);
  return puVar2;
}



// FUNCTION 141d26770 FUN_141d26770 body=745 status=ok
// SIG undefined FUN_141d26770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d26770(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_3[6] != 0) {
    uVar1 = (**(code **)(*param_3 + 0x40))(param_3);
    iVar7 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar1 != 0) {
      iVar5 = 0x1f - iVar7;
    }
    uVar1 = uVar1 - 1;
    iVar7 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uVar1 = (0x20U - iVar7 & ~((iVar5 << 0x1a) >> 0x1f)) + 1;
    FSceneRenderTargets::Get(param_1);
    lVar2 = FSceneRenderTargets::Get(param_1);
    lVar2 = *(longlong *)(lVar2 + 0x178);
    plVar6 = *(longlong **)(lVar2 + 0x10);
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,local_78);
    local_68 = *puVar3;
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_40 = DAT_1468b5cb0;
    uStack_34 = DAT_1468b5cb0;
    iStack_5c = 0;
    local_58 = 1;
    uStack_50 = 0;
    local_48 = _DAT_1468b5ca8;
    uStack_3c = (undefined4)_DAT_1468b5ca8;
    uStack_38 = (undefined4)((ulonglong)_DAT_1468b5ca8 >> 0x20);
    uStack_4c = 6;
    if (0 < (int)uVar1) {
      uVar10 = (ulonglong)uVar1;
      do {
        lVar4 = param_3[6];
        plVar6 = *(longlong **)(lVar2 + 0x10);
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar8 + 0xb;
        if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x60);
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar3 = puVar8 + 0xb;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar3;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar8;
        *(undefined8 **)(param_1 + 8) = puVar8 + 1;
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_144e0a8e8;
        puVar8[2] = local_68;
        puVar8[3] = CONCAT44(iStack_5c,uStack_60);
        puVar8[4] = local_58;
        puVar8[5] = CONCAT44(uStack_4c,uStack_50);
        *(undefined4 *)(puVar8 + 6) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar8 + 0x34) = local_48._4_4_;
        *(undefined4 *)(puVar8 + 7) = uStack_40;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_3c;
        puVar8[8] = CONCAT44(uStack_34,uStack_38);
        puVar8[9] = plVar6;
        puVar8[10] = lVar4;
        lVar4 = (**(code **)(*plVar6 + 8))(plVar6);
        if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar4 == 0)) {
          (**(code **)(*(longlong *)puVar8[9] + 0x20))();
        }
        lVar4 = (**(code **)(*(longlong *)puVar8[10] + 8))();
        if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar8[10] + 0x18))(), lVar4 == 0)) {
          (**(code **)(*(longlong *)puVar8[10] + 0x20))();
        }
        iStack_5c = iStack_5c + 1;
        iVar7 = 1;
        if (0 < (int)local_68 / 2) {
          iVar7 = (int)local_68 / 2;
        }
        iVar5 = 1;
        if (0 < local_68._4_4_ / 2) {
          iVar5 = local_68._4_4_ / 2;
        }
        local_68 = CONCAT44(iVar5,iVar7);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar2 = param_3[6];
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar6 = plVar9 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar6) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar6 = plVar9 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar6;
    *plVar9 = lVar2;
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar8 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar8 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar8;
    *(undefined8 **)(param_1 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    puVar8[3] = plVar9;
    *(undefined4 *)(puVar8 + 4) = 0;
    *puVar8 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar8 + 2) = 1;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
  }
  return;
}



// FUNCTION 141d26a60 FUN_141d26a60 body=3208 status=ok
// SIG undefined FUN_141d26a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d26a60(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  wchar_t wVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  int iVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  ulonglong *puVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_3b8 [32];
  float local_398;
  undefined4 local_390;
  undefined4 local_388;
  float local_380;
  float local_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong local_360;
  undefined4 local_358;
  undefined4 local_350;
  uint local_348;
  int local_344;
  int local_340 [2];
  int local_338 [3];
  int local_32c;
  int local_328 [2];
  longlong local_320;
  int local_318 [2];
  ulonglong *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong local_2f8;
  undefined1 local_2f0 [8];
  int local_2e8;
  int iStack_2e4;
  int local_2e0;
  int iStack_2dc;
  longlong *local_2d8;
  undefined *local_2d0;
  undefined4 local_2c8;
  undefined *local_2c0;
  undefined4 local_2b8;
  undefined1 local_2b0 [24];
  undefined8 local_298;
  longlong *plStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  int local_244 [16];
  undefined1 auStack_204 [4];
  undefined8 local_200;
  undefined4 local_1f8;
  ulonglong local_1f4;
  undefined8 local_1ec;
  undefined4 local_1e4;
  longlong local_1d8 [2];
  int local_1c8;
  undefined1 local_1c4;
  undefined1 local_1c3;
  undefined1 local_1c0 [168];
  undefined8 local_118;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined1 local_80 [8];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  local_328[0] = 0;
  local_348 = 0;
  local_300 = (longlong *)*param_4;
  local_338[0] = param_3;
  local_320 = param_1;
  local_308 = param_4;
  lVar11 = FUN_1419ef210((&DAT_1464c9c48)[param_2]);
  local_250 = 0;
  local_298 = 0;
  plStack_290 = (longlong *)0x0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_244[3] = 0;
  local_244[4] = 0;
  local_244[5] = 0;
  local_244[6] = 0;
  local_24c = 0x26;
  local_244[0] = 0;
  local_244[1] = 0;
  local_244[2] = 0;
  local_244[7] = 0;
  local_244[8] = 0;
  local_244[9] = 0;
  local_244[10] = 0;
  local_244[0xb] = 0;
  local_244[0xc] = 0;
  local_244[0xd] = 0;
  local_244[0xe] = 0;
  stack0xfffffffffffffdf8 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_260 = FUN_140985530();
  local_258 = FUN_1409853f0();
  local_268 = FUN_1404a0ce0();
  local_344 = 1;
  if (1 < local_338[0]) {
    local_2d8 = (longlong *)(lVar11 + 0x38);
    puVar29 = (ulonglong *)(param_1 + 0x30);
    plVar16 = local_300;
    plVar23 = local_300;
    local_310 = puVar29;
    do {
      local_32c = 1 << (((char)local_338[0] - (char)local_344) - 1U & 0x1f);
      local_340[0] = 0;
      fVar31 = (float)local_32c;
      plVar14 = plVar23;
      do {
        iVar2 = local_32c;
        local_1d8[0] = *param_4;
        uVar20 = 0;
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0xffffffffffffffff;
        local_e8 = 0xffffffffffffffff;
        uStack_e0 = 0xffffffff;
        local_1c4 = (undefined1)local_344;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_100 = 0;
        local_fc = 0xffffffff;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_c0 = 0;
        local_88 = 0;
        local_1d8[1] = 0;
        local_1c3 = 1;
        local_118 = 0;
        local_108 = 0;
        local_104 = 0;
        local_80[0] = 1 < *(uint *)(local_1d8[0] + 0x38);
        local_1c8 = local_340[0];
        _guard_xfg_dispatch_icall_nop(local_1c0,0,0xa8);
        local_d0._0_6_ = CONCAT15(1,(undefined5)local_d0);
        uVar22 = *puVar29 + 1 & 0xfffffffffffffffe;
        uVar12 = uVar22 + 0x1e;
        if (puVar29[1] < uVar12) {
          FMemStackBase::AllocateNewChunk(puVar29,0x20);
          uVar22 = *puVar29 + 1 & 0xfffffffffffffffe;
          uVar12 = uVar22 + 0x1e;
        }
        *puVar29 = uVar12;
        pwVar17 = L"CreateCubeMips";
        do {
          wVar3 = *pwVar17;
          *(wchar_t *)((longlong)pwVar17 + (uVar22 - 0x144e373a8)) = wVar3;
          pwVar17 = pwVar17 + 1;
        } while (wVar3 != L'\0');
        uVar18 = *puVar29 + 7 & 0xfffffffffffffff8;
        uVar12 = uVar18 + 0x178;
        if (puVar29[1] < uVar12) {
          FMemStackBase::AllocateNewChunk(puVar29,0x180);
          uVar18 = *puVar29 + 7 & 0xfffffffffffffff8;
          uVar12 = uVar18 + 0x178;
        }
        *puVar29 = uVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(ulonglong **)(param_1 + 8) = uVar18;
        *(ulonglong *)(param_1 + 8) = uVar18 + 8;
        FUN_140499730(uVar18,local_1d8,uVar22);
        *(undefined1 *)(param_1 + 0x1ac) = 1;
        FUN_14049c2a0(param_1,local_1d8);
        uVar28 = *(uint *)(param_1 + 0x98);
        *(undefined1 *)(param_1 + 0x1ac) = 1;
        iVar24 = 0;
        uVar12 = uVar20;
        if (uVar28 != 0) {
          do {
            lVar11 = *(longlong *)(param_1 + 0xa0 + uVar12 * 0x18);
            if (lVar11 == 0) {
              local_244[uVar12] = 0;
            }
            else {
              local_244[uVar12] = *(int *)(lVar11 + 0x3c);
              local_244[uVar12 + 8] = *(int *)(lVar11 + 0x40);
            }
            auStack_204[uVar12] = *(undefined1 *)(param_1 + 0xb0 + uVar12 * 0x18);
            *(undefined1 *)((longlong)&local_200 + uVar12 + 4) =
                 *(undefined1 *)(param_1 + 0xb1 + uVar12 * 0x18);
            if (local_244[uVar12] != 0) {
              local_1e4 = CONCAT22(local_1e4._2_2_,*(undefined2 *)(lVar11 + 0x38));
            }
            uVar27 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar27;
          } while (uVar27 < uVar28);
        }
        lVar11 = *(longlong *)(param_1 + 0x160);
        if (lVar11 == 0) {
          local_1f4 = local_1f4 & 0xffffffff00000000;
        }
        else {
          iVar24 = *(int *)(lVar11 + 0x3c);
          local_1f4 = *(ulonglong *)(lVar11 + 0x3c);
        }
        local_1ec = *(undefined8 *)(param_1 + 0x168);
        if (iVar24 != 0) {
          local_1e4 = CONCAT22(local_1e4._2_2_,*(undefined2 *)(lVar11 + 0x38));
        }
        puVar19 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar19 + 5;
        local_24c._4_4_ = uVar28;
        if ((undefined8 *)puVar29[1] < puVar15) {
          FMemStackBase::AllocateNewChunk(puVar29,0x30);
          puVar19 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar19 + 5;
        }
        plVar23 = local_2d8;
        *puVar29 = (ulonglong)puVar15;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        local_2c8 = 0;
        **(undefined8 **)(param_1 + 8) = puVar19;
        *(undefined8 **)(param_1 + 8) = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_143f59420;
        puVar19[2] = 0;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(int *)((longlong)puVar19 + 0x1c) = iVar2;
        *(int *)(puVar19 + 4) = iVar2;
        *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
        local_2d0 = &DAT_146b09c50;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(local_2d8,local_318,&local_2d0);
        if (local_318[0] != -1) {
          uVar20 = (longlong)local_318[0] * 0x20 + *plVar23;
        }
        plVar25 = (longlong *)(uVar20 + 0x10);
        if (uVar20 == 0) {
          plVar25 = (longlong *)0x0;
        }
        local_2c0 = &DAT_146a81970;
        local_2b8 = 0;
        lVar11 = *plVar25;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar23,local_328,&local_2c0);
        if (local_328[0] == -1) {
          lVar21 = 0;
        }
        else {
          lVar21 = (longlong)local_328[0] * 0x20 + *plVar23;
        }
        plVar25 = (longlong *)0x0;
        plVar23 = (longlong *)(lVar21 + 0x10);
        if (lVar21 == 0) {
          plVar23 = plVar25;
        }
        lVar21 = *plVar23;
        local_298 = DAT_1464c2720;
        if (lVar11 == 0) {
          local_348 = local_348 | 1;
          plVar16 = plVar25;
        }
        else {
          lVar13 = *(longlong *)(lVar11 + 0x48);
          if (*(char *)(lVar13 + 0x28) == '\0') {
            FUN_1419f3850(lVar13);
          }
          plVar25 = *(longlong **)(lVar13 + 0x38);
        }
        plVar23 = (longlong *)0x0;
        uVar28 = local_348;
        plStack_290 = plVar25;
        if (((local_348 & 1) != 0) &&
           (uVar28 = local_348 & 0xfffffffe, local_348 = uVar28, plVar16 != (longlong *)0x0)) {
          LOCK();
          plVar25 = plVar16 + 1;
          lVar13 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            if (((char)plVar16[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar30 = *(int *)((longlong)plVar16 + 0xc) == 0;
              if (bVar30) {
                *(int *)((longlong)plVar16 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar30) {
                uVar27 = FLockFreeLinkPolicy::AllocLockFreeLink();
                plVar25 = plVar23;
                if (uVar27 != 0) {
                  plVar25 = (longlong *)
                            ((&DAT_1468a81f8)[uVar27 >> 0xe] + (ulonglong)(uVar27 & 0x3fff) * 0x18);
                }
                plVar25[1] = (longlong)plVar16;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar16)(plVar16,1);
            }
          }
        }
        if (lVar21 == 0) {
          uVar28 = uVar28 | 2;
          local_278 = 0;
          local_348 = uVar28;
        }
        else {
          lVar13 = *(longlong *)(lVar21 + 0x48);
          if (*(char *)(lVar13 + 0x28) == '\0') {
            FUN_1419f3850(lVar13);
          }
          local_278 = *(undefined8 *)(lVar13 + 0x40);
          plVar23 = plVar14;
        }
        lVar13 = 0;
        if (((uVar28 & 2) != 0) && (local_348 = uVar28 & 0xfffffffd, plVar23 != (longlong *)0x0)) {
          LOCK();
          plVar14 = plVar23 + 1;
          lVar8 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            if (((char)plVar23[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar30 = *(int *)((longlong)plVar23 + 0xc) == 0;
              if (bVar30) {
                *(int *)((longlong)plVar23 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar30) {
                uVar28 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar28 != 0) {
                  lVar13 = (&DAT_1468a81f8)[uVar28 >> 0xe] + (ulonglong)(uVar28 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar13 + 8) = plVar23;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar23)(plVar23,1);
            }
          }
        }
        local_24c = (ulonglong)local_24c._4_4_ << 0x20;
        FUN_141ed6ac0(param_1,&local_298,2,1);
        lVar13 = *(longlong *)(lVar21 + 0x48);
        if (*(char *)(lVar13 + 0x28) == '\0') {
          FUN_1419f3850(lVar13);
        }
        uVar5 = *(undefined8 *)(lVar13 + 0x40);
        local_398 = 0.0;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,uVar5,lVar21 + 0xc0,local_340);
        local_398 = 0.0;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,uVar5,lVar21 + 0xc6,&local_344);
        local_398 = 0.0;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,uVar5,lVar21 + 0xcc,local_338);
        uVar6 = *(undefined8 *)(local_308[6] + (longlong)(local_344 + -1) * 8);
        if (*(short *)(lVar21 + 0xd4) != 0) {
          uVar4 = *(ushort *)(lVar21 + 0xd2);
          puVar19 = (undefined8 *)(*local_310 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar19 + 5;
          if ((undefined8 *)local_310[1] < puVar15) {
            FMemStackBase::AllocateNewChunk(local_310,0x30);
            puVar19 = (undefined8 *)(*local_310 + 7 & 0xfffffffffffffff8);
            puVar15 = puVar19 + 5;
          }
          *local_310 = (ulonglong)puVar15;
          *(int *)(local_320 + 0x14) = *(int *)(local_320 + 0x14) + 1;
          **(undefined8 **)(local_320 + 8) = puVar19;
          *(undefined8 **)(local_320 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          *(uint *)(puVar19 + 3) = (uint)uVar4;
          *puVar19 = &PTR_LAB_144d8e600;
          puVar19[2] = uVar5;
          puVar19[4] = uVar6;
        }
        if (DAT_1469fc430 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar10 = IsInRenderingThread();
            if (cVar10 == '\0') {
              FScopedEvent::FScopedEvent(local_2f0);
              plVar14 = (longlong *)FUN_14049e3d0(local_2b0,0,0xff);
              lVar13 = *plVar14;
              *(undefined1 **)(lVar13 + 0x10) = &LAB_141a15860;
              *(undefined1 **)(lVar13 + 0x18) = local_2f0;
              lVar13 = *plVar14;
              lVar9 = plVar14[2];
              lVar8 = plVar14[1];
              lVar7 = *(longlong *)(lVar13 + 0x28);
              piVar1 = (int *)(lVar7 + 0x48);
              if (lVar7 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_2f8 = lVar7;
              FUN_1404a4fe0(lVar13,lVar8,(int)lVar9,1);
              if (lVar7 != 0) {
                LOCK();
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  FGraphEvent::Recycle(local_2f8);
                }
              }
              FScopedEvent::~FScopedEvent(local_2f0);
            }
            else {
              lVar13 = operator_new(0x38);
              if (lVar13 == 0) {
                DAT_1469fc430 = 0;
              }
              else {
                DAT_1469fc430 =
                     TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar13);
              }
            }
          }
          else {
            lVar13 = operator_new(0x38);
            if (lVar13 == 0) {
              LOCK();
              if (DAT_1469fc430 == 0) {
                DAT_1469fc430 = 0;
              }
              UNLOCK();
            }
            else {
              lVar13 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar13);
              LOCK();
              if (DAT_1469fc430 != 0) {
                lVar13 = DAT_1469fc430;
              }
              DAT_1469fc430 = lVar13;
              UNLOCK();
            }
          }
        }
        puVar29 = local_310;
        uVar6 = *(undefined8 *)(DAT_1469fc430 + 0x30);
        if (*(short *)(lVar21 + 0xd8) != 0) {
          uVar4 = *(ushort *)(lVar21 + 0xd6);
          puVar19 = (undefined8 *)(*local_310 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar19 + 5;
          if ((undefined8 *)local_310[1] < puVar15) {
            FMemStackBase::AllocateNewChunk(local_310,0x30);
            puVar19 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
            puVar15 = puVar19 + 5;
          }
          *puVar29 = (ulonglong)puVar15;
          *(int *)(local_320 + 0x14) = *(int *)(local_320 + 0x14) + 1;
          **(undefined8 **)(local_320 + 8) = puVar19;
          *(undefined8 **)(local_320 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_143f59c70;
          puVar19[2] = uVar5;
          *(uint *)(puVar19 + 3) = (uint)uVar4;
          puVar19[4] = uVar6;
        }
        lVar21 = local_320;
        local_2e8 = local_32c;
        iStack_2e4 = local_32c;
        local_2e0 = local_32c;
        iStack_2dc = local_32c;
        local_350 = 1;
        local_368 = CONCAT44(local_32c,local_32c);
        local_358 = 0;
        local_370 = CONCAT44(local_32c,local_32c);
        local_388 = 0;
        local_390 = 0;
        local_398 = fVar31;
        local_380 = fVar31;
        local_378 = fVar31;
        local_360 = lVar11;
        DrawRectangle(local_320);
        puVar19 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 2;
        if (*(undefined8 **)(lVar21 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(lVar21 + 0x30,0x18);
          puVar19 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar19 + 2;
        }
        *(undefined8 **)(lVar21 + 0x30) = puVar15;
        puVar26 = local_80;
        lVar11 = 8;
        *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
        **(undefined8 **)(lVar21 + 8) = puVar19;
        *(undefined8 **)(lVar21 + 8) = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_143f59460;
        *(undefined1 *)(lVar21 + 0x1ac) = 0;
        do {
          puVar15 = *(undefined8 **)(puVar26 + -8);
          puVar26 = puVar26 + -8;
          lVar11 = lVar11 + -1;
          if (puVar15 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar15 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(puVar15 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar30 = *(int *)((longlong)puVar15 + 0xc) == 0;
                if (bVar30) {
                  *(int *)((longlong)puVar15 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar30) {
                  uVar28 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar28 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = (&DAT_1468a81f8)[uVar28 >> 0xe] + (ulonglong)(uVar28 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar21 + 8) = puVar15;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar15)(puVar15,1);
              }
            }
          }
        } while (lVar11 != 0);
        local_340[0] = local_340[0] + 1;
        puVar29 = (ulonglong *)(local_320 + 0x30);
        param_4 = local_308;
        param_1 = local_320;
        plVar14 = plVar23;
      } while (local_340[0] < 6);
      local_344 = local_344 + 1;
    } while (local_344 < local_338[0]);
  }
  plVar23 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar16 = plVar23 + 1;
  if (*(longlong **)(param_1 + 0x38) < plVar16) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    plVar23 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar16 = plVar23 + 1;
  }
  *(longlong **)(param_1 + 0x30) = plVar16;
  *plVar23 = (longlong)local_300;
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar15;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar19 + 2) = 1;
  puVar19[3] = plVar23;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined1 *)((longlong)puVar19 + 0x24) = 0;
  return;
}



// FUNCTION 141d276f0 FUN_141d276f0 body=332 status=ok
// SIG undefined FUN_141d276f0(void)

undefined8 * FUN_141d276f0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48c38;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d27840 FUN_141d27840 body=332 status=ok
// SIG undefined FUN_141d27840(void)

undefined8 * FUN_141d27840(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48c98;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d27990 FUN_141d27990 body=332 status=ok
// SIG undefined FUN_141d27990(void)

undefined8 * FUN_141d27990(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48cb8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d27ae0 FUN_141d27ae0 body=332 status=ok
// SIG undefined FUN_141d27ae0(void)

undefined8 * FUN_141d27ae0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48bf8;
  *(undefined1 *)(plVar6 + 7) = 0;
  plVar6[8] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d27c30 CreateTask body=338 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddExponentialHeightFog'::`2'::FAddFogCommandName,<lambda_23dd2bba3cad69a0d8fd09c4f72e10da>_>_>
::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR__scalar_deleting_destructor__144e48c28;
  *(undefined1 *)(plVar6 + 0x18) = 0;
  plVar6[0x19] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d27d90 FUN_141d27d90 body=332 status=ok
// SIG undefined FUN_141d27d90(void)

undefined8 * FUN_141d27d90(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48c68;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d27ee0 FUN_141d27ee0 body=332 status=ok
// SIG undefined FUN_141d27ee0(void)

undefined8 * FUN_141d27ee0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48c78;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28030 FUN_141d28030 body=332 status=ok
// SIG undefined FUN_141d28030(void)

undefined8 * FUN_141d28030(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48d10;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28180 FUN_141d28180 body=332 status=ok
// SIG undefined FUN_141d28180(void)

undefined8 * FUN_141d28180(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48cd8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d282d0 CreateTask body=332 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::UpdateReflectionCaptureTransform'::`5'::FUpdateTransformCommandName,<lambda_8e4f80dd14d8a9d29fe1eb4b3ac22066>_>_>
::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48c88;
  *(undefined1 *)(plVar6 + 0xe) = 0;
  plVar6[0xf] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28420 FUN_141d28420 body=332 status=ok
// SIG undefined FUN_141d28420(void)

undefined8 * FUN_141d28420(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48bd8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28570 FUN_141d28570 body=332 status=ok
// SIG undefined FUN_141d28570(void)

undefined8 * FUN_141d28570(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48ce8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d286c0 FUN_141d286c0 body=332 status=ok
// SIG undefined FUN_141d286c0(void)

undefined8 * FUN_141d286c0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48ca8;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28810 FUN_141d28810 body=332 status=ok
// SIG undefined FUN_141d28810(void)

undefined8 * FUN_141d28810(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48cc8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28960 FUN_141d28960 body=332 status=ok
// SIG undefined FUN_141d28960(void)

undefined8 * FUN_141d28960(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48be8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28ab0 FUN_141d28ab0 body=332 status=ok
// SIG undefined FUN_141d28ab0(void)

undefined8 * FUN_141d28ab0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48c18;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28c00 FUN_141d28c00 body=332 status=ok
// SIG undefined FUN_141d28c00(void)

undefined8 * FUN_141d28c00(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48c58;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28d50 CreateTask body=338 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddExponentialHeightFog'::`2'::FAddFogCommandName,<lambda_23dd2bba3cad69a0d8fd09c4f72e10da>_>_>
::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR__scalar_deleting_destructor__144e48c48;
  *(undefined1 *)(plVar6 + 0x18) = 0;
  plVar6[0x19] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d28eb0 FUN_141d28eb0 body=332 status=ok
// SIG undefined FUN_141d28eb0(void)

undefined8 * FUN_141d28eb0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144e48c08;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d29000 FUN_141d29000 body=372 status=ok
// SIG undefined FUN_141d29000(void)

undefined8 * FUN_141d29000(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144e47ac0;
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



// FUNCTION 141d29180 CreateResolveInfoCached body=19 status=ok
// SIG undefined CreateResolveInfoCached(void)

undefined8 FSocketSubsystemEOS::CreateResolveInfoCached(undefined8 param_1,undefined8 param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return 0;
}



// FUNCTION 141d291a0 FUN_141d291a0 body=357 status=ok
// SIG undefined FUN_141d291a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d291a0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined1 local_res10 [16];
  longlong local_res20;
  longlong *local_48 [2];
  undefined1 local_38 [32];
  
  _DAT_1464c25b8 = 1;
  DAT_1464c25b6 = 1;
  lVar8 = *(longlong *)(DAT_146b17150 + 0x28);
  uVar6 = FUN_141672640();
  (**(code **)(lVar8 + 8))(DAT_146b17150 + 0x28,0,L"rhi.DumpMemory",uVar6);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_48[0] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_1446fea78;
    plVar7[1] = (longlong)local_res10;
    plVar7[2] = (longlong)`FRendererModule::DebugLogOnCrash'::`3'::FTest::Thread;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_1446feac0;
  }
  plVar9 = (longlong *)FUN_141d29000(local_38,0,0xff);
  lVar8 = *plVar9;
  pplVar10 = (longlong **)(lVar8 + 0x10);
  *pplVar10 = (longlong *)0x0;
  *(undefined4 *)(lVar8 + 0x18) = 0;
  if ((local_48 != pplVar10) && (plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x30))(plVar7,pplVar10);
  }
  *(undefined4 *)(lVar8 + 0x20) = 2;
  lVar8 = *plVar9;
  lVar5 = plVar9[2];
  lVar3 = plVar9[1];
  lVar4 = *(longlong *)(lVar8 + 0x30);
  piVar1 = (int *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar7 = local_48[0];
  }
  local_res20 = lVar4;
  FUN_1409691d0(lVar8,lVar3,(int)lVar5,1);
  if (lVar4 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar7 = local_48[0];
    if (iVar2 == 1) {
      FGraphEvent::Recycle(local_res20);
      plVar7 = local_48[0];
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar8 = FMemory::Realloc(plVar7,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return;
}



// FUNCTION 141d29310 Destroy body=51 status=ok
// SIG undefined Destroy(void)

void FVisualizeTexture::Destroy(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa0,0);
  return;
}



// FUNCTION 141d29350 FUN_141d29350 body=504 status=ok
// SIG undefined FUN_141d29350(void)

void FUN_141d29350(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if (param_1 != (longlong *)0x0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)*param_1)(param_1,1);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
      return;
    }
    pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar6 = TlsGetValue(*pDVar5);
    plVar9 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined4 *)(plVar6 + 2) = 0;
        plVar9 = plVar6;
      }
      TlsSetValue(*pDVar5,plVar9);
      plVar6 = plVar9;
    }
    plVar9 = (longlong *)plVar6[1];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar6;
      if (plVar9 == (longlong *)0x0) {
        lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
        plVar6[1] = lVar7;
        if (lVar7 == 0) {
          puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar6[1] = (longlong)puVar8;
          lVar7 = 0x1f;
          do {
            puVar2 = puVar8 + 0x20;
            *puVar8 = puVar2;
            lVar7 = lVar7 + -1;
            puVar8 = puVar2;
          } while (lVar7 != 0);
          *puVar2 = 0;
        }
        plVar9 = (longlong *)plVar6[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar6 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar6[1] = (longlong)plVar9;
        *(undefined4 *)(plVar6 + 2) = 0x20;
        *plVar6 = 0;
      }
    }
    else {
      iVar10 = (int)plVar6[2];
    }
    plVar6[1] = *plVar9;
    *(int *)(plVar6 + 2) = iVar10 + -1;
    *plVar9 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar9 + 1) = 0xff;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *(undefined1 *)(plVar9 + 3) = 0;
    *plVar9 = (longlong)&PTR_FUN_144510a60;
    plVar9[4] = 0;
    plVar9[2] = (longlong)param_1;
    lVar7 = plVar9[4];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res10 = lVar7;
    FUN_140445100(plVar9,0,0xff,1,0);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
  }
  return;
}



// FUNCTION 141d29550 FUN_141d29550 body=489 status=ok
// SIG undefined FUN_141d29550(void)

void FUN_141d29550(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 local_res8 [16];
  longlong local_res18;
  undefined8 local_res20;
  longlong local_40;
  longlong local_38;
  
  *(int *)(param_1 + 0x6004) = *(int *)(param_1 + 0x6004) + -1;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_40 = param_1;
    local_38 = param_2;
    FUN_141d2a0c0(&local_40,2,local_res8);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144e48720;
  plVar9[5] = 0;
  plVar9[2] = param_1;
  plVar9[3] = param_2;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_1409421c0(plVar9,0,0xff,1,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
    }
  }
  return;
}



// FUNCTION 141d29740 FUN_141d29740 body=102 status=ok
// SIG undefined FUN_141d29740(void)

ulonglong FUN_141d29740(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong in_RAX;
  
  lVar1 = DAT_146a81838;
  if (DAT_146ab62ff == '\0') goto LAB_141d2979f;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_141d2978b;
    in_RAX = 4;
  }
  else {
LAB_141d2978b:
    in_RAX = 0;
  }
  if (*(int *)(in_RAX + lVar1) != 0) {
    return 1;
  }
LAB_141d2979f:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141d297b0 FUN_141d297b0 body=1026 status=ok
// SIG undefined FUN_141d297b0(void)

/* WARNING: Removing unreachable block (ram,0x000141d29a8d) */
/* WARNING: Removing unreachable block (ram,0x000141d29a9a) */
/* WARNING: Removing unreachable block (ram,0x000141d29aa9) */

void FUN_141d297b0(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 uVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong local_60;
  ulonglong local_58;
  int local_50;
  
  plVar15 = (longlong *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a81038) && (_Init_thread_header(&DAT_146a81038), DAT_146a81038 == -1))
  {
    DAT_146a81034 = *DAT_146a82620 != 0;
    _Init_thread_footer(&DAT_146a81038);
  }
  if ((*DAT_146a82620 != 0) == (bool)DAT_146a81034) {
    return;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = -1;
  DAT_146a81034 = *DAT_146a82620 != 0;
  uVar6 = FUN_142a2f930();
  FUN_1417a5560(uVar6,&local_60,1,0x10,0);
  uVar13 = local_58 & 0xffffffff;
  do {
    local_50 = local_50 + 1;
    lVar10 = local_60;
    if ((int)local_58 <= local_50) break;
  } while (*(longlong *)(local_60 + (longlong)local_50 * 8) == 0);
  do {
    if ((local_50 < 0) || ((int)uVar13 <= local_50)) {
      if (lVar10 == 0) {
        return;
      }
      FMemory::Free(lVar10);
      return;
    }
    lVar3 = *(longlong *)(lVar10 + (longlong)local_50 * 8);
    if ((lVar3 != 0) && (lVar16 = *(longlong *)(lVar3 + 0x1b8), lVar16 != 0)) {
      if (DAT_146ac3ac5 == '\0') {
        cVar4 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
           (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
          lVar16 = *(longlong *)(lVar3 + 0x1b8);
          goto LAB_141d298fc;
        }
        lVar10 = *(longlong *)(lVar3 + 0x1b8);
        uVar6 = FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res20);
        if (0 < *(int *)(lVar10 + 0xfe8)) {
          iVar12 = DAT_146a82620[1];
          plVar9 = plVar15;
          plVar8 = plVar15;
          do {
            FPrimitiveSceneInfo::UpdateStaticMeshes
                      (*(undefined8 *)(*(longlong *)(lVar10 + 0xfe0) + (longlong)plVar8),uVar6,
                       iVar12 == 0);
            uVar14 = (int)plVar9 + 1;
            plVar9 = (longlong *)(ulonglong)uVar14;
            plVar8 = plVar8 + 1;
          } while ((int)uVar14 < *(int *)(lVar10 + 0xfe8));
        }
        QueryPerformanceCounter(&local_res18);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
      }
      else {
LAB_141d298fc:
        pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar8 = TlsGetValue(*pDVar7);
        if (plVar8 == (longlong *)0x0) {
          plVar9 = (longlong *)operator_new(0x18);
          plVar8 = plVar15;
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = 0;
            plVar9[1] = 0;
            *(undefined4 *)(plVar9 + 2) = 0;
            plVar8 = plVar9;
          }
          TlsSetValue(*pDVar7,plVar8);
        }
        plVar9 = (longlong *)plVar8[1];
        if (plVar9 == (longlong *)0x0) {
          if (*plVar8 == 0) {
            lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
            plVar8[1] = lVar10;
            if (lVar10 == 0) {
              puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar8[1] = (longlong)puVar11;
              lVar10 = 0x1f;
              do {
                puVar2 = puVar11 + 0x20;
                *puVar11 = puVar2;
                lVar10 = lVar10 + -1;
                puVar11 = puVar2;
              } while (lVar10 != 0);
              *puVar2 = 0;
            }
          }
          else {
            plVar8[1] = *plVar8;
            *plVar8 = 0;
          }
          plVar9 = (longlong *)plVar8[1];
          iVar12 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar12 = (int)plVar8[2];
        }
        plVar8[1] = *plVar9;
        *(int *)(plVar8 + 2) = iVar12 + -1;
        *plVar9 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar9 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *plVar9 = (longlong)&PTR_FUN_144e46f30;
        *(undefined1 *)(plVar9 + 3) = 0;
        plVar9[4] = 0;
        plVar9[2] = lVar16;
        lVar10 = plVar9[4];
        piVar1 = (int *)(lVar10 + 0x48);
        if (lVar10 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_140445100(plVar9,0,0xff,1);
        if (lVar10 != 0) {
          LOCK();
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            FGraphEvent::Recycle(lVar10);
          }
        }
      }
      uVar13 = local_58 & 0xffffffff;
      lVar10 = local_60;
    }
    do {
      local_50 = local_50 + 1;
      if ((int)uVar13 <= local_50) break;
    } while (*(longlong *)(lVar10 + (longlong)local_50 * 8) == 0);
  } while( true );
}



// FUNCTION 141d29bc0 FUN_141d29bc0 body=104 status=ok
// SIG undefined FUN_141d29bc0(void)

void FUN_141d29bc0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  local_10 = *(undefined4 *)((longlong)param_1 + 0x74);
  plVar1 = (longlong *)*param_1;
  local_18 = *(undefined8 *)((longlong)param_1 + 0x6c);
  FUN_14273d150(plVar1,param_1 + 2,param_1 + 10,param_1 + 0xf,&local_18,param_1 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000141d29c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1);
  return;
}



// FUNCTION 141d29c30 FUN_141d29c30 body=144 status=ok
// SIG undefined FUN_141d29c30(void)

void FUN_141d29c30(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d2c0a0(*param_1 + 0x1308,0);
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 0x1370) + 0x1f;
  _Dst = *(void **)(lVar1 + 0x1368);
  if (*(void **)(lVar1 + 0x1368) == (void *)0x0) {
    _Dst = (void *)(lVar1 + 0x1358);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(lVar1 + 0x1370) = 0;
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d29cc0 FUN_141d29cc0 body=119 status=ok
// SIG undefined FUN_141d29cc0(void)

void FUN_141d29cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d25900(uVar1,*(undefined4 *)((longlong)param_1 + 0x14),*param_1,
                *(undefined4 *)(param_1 + 1),1,*(undefined1 *)((longlong)param_1 + 0xc),
                *(undefined4 *)(param_1 + 2),param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d29d40 FUN_141d29d40 body=224 status=ok
// SIG undefined FUN_141d29d40(void)

void FUN_141d29d40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x1900);
  *(int *)(lVar2 + 0x1900) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x1904) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (lVar2 + 0x18f8,iVar1);
  }
  plVar5 = (longlong *)((longlong)iVar1 * 0xa0 + *(longlong *)(lVar2 + 0x18f8));
  if (plVar5 != (longlong *)0x0) {
    lVar2 = param_1[2];
    *plVar5 = param_1[1];
    plVar5[1] = lVar2;
    lVar2 = param_1[4];
    plVar5[2] = param_1[3];
    plVar5[3] = lVar2;
    lVar2 = param_1[6];
    plVar5[4] = param_1[5];
    plVar5[5] = lVar2;
    lVar2 = param_1[8];
    plVar5[6] = param_1[7];
    plVar5[7] = lVar2;
    lVar2 = param_1[10];
    plVar5[8] = param_1[9];
    plVar5[9] = lVar2;
    lVar2 = param_1[0xc];
    plVar5[10] = param_1[0xb];
    plVar5[0xb] = lVar2;
    lVar2 = param_1[0xe];
    plVar5[0xc] = param_1[0xd];
    plVar5[0xd] = lVar2;
    lVar2 = param_1[0x10];
    plVar5[0xe] = param_1[0xf];
    plVar5[0xf] = lVar2;
    lVar2 = param_1[0x12];
    plVar5[0x10] = param_1[0x11];
    plVar5[0x11] = lVar2;
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x9c);
    lVar2 = param_1[0x14];
    uVar4 = *(undefined4 *)((longlong)param_1 + 0xa4);
    *(int *)(plVar5 + 0x12) = (int)param_1[0x13];
    *(undefined4 *)((longlong)plVar5 + 0x94) = uVar3;
    *(int *)(plVar5 + 0x13) = (int)lVar2;
    *(undefined4 *)((longlong)plVar5 + 0x9c) = uVar4;
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d29e20 FUN_141d29e20 body=497 status=ok
// SIG undefined FUN_141d29e20(void)

void FUN_141d29e20(longlong *param_1)

{
  void **ppvVar1;
  longlong lVar2;
  void *pvVar3;
  int *piVar4;
  longlong *plVar5;
  void *_Dst;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  void *local_res20;
  LARGE_INTEGER local_38;
  void **local_30;
  void **local_28;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_38);
  local_30 = (void **)(param_1 + 2);
  ppvVar1 = (void **)(param_1 + 1);
  local_28 = ppvVar1;
  FUN_140a9d130(*param_1 + 0x19c8,&local_res8,&local_30,0);
  lVar2 = *param_1;
  piVar4 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(lVar2 + 0x1978,&local_res8);
  if (*piVar4 == -1) {
    local_res20 = (void *)operator_new(0x8e0);
    if (local_res20 == (void *)0x0) {
      local_res20 = (void *)0x0;
    }
    else {
      FSpeedTreeWind::FSpeedTreeWind(local_res20);
      *(undefined4 *)((longlong)local_res20 + 0x898) = 4;
      *(undefined8 *)((longlong)local_res20 + 0x8a0) = 0;
      *(undefined8 *)((longlong)local_res20 + 0x8a8) = 0;
      *(undefined1 *)((longlong)local_res20 + 0x8b8) = 0;
      *(undefined ***)((longlong)local_res20 + 0x890) = &PTR_FUN_144e48660;
      *(undefined4 *)((longlong)local_res20 + 0x8c0) = 2;
      *(undefined8 *)((longlong)local_res20 + 0x8c8) = 0;
      *(undefined8 *)((longlong)local_res20 + 0x8d0) = 0;
      *(undefined4 *)((longlong)local_res20 + 0x8d8) = 1;
    }
    _guard_xfg_dispatch_icall_nop(local_res20,*(void **)((longlong)*ppvVar1 + 0xf8),0x890);
    pvVar3 = local_res20;
    _Dst = *(void **)((longlong)local_res20 + 0x8d0);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)FMemory::Malloc(0x260);
      *(void **)((longlong)pvVar3 + 0x8d0) = _Dst;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x260);
    FRenderResource::UpdateRHI((longlong)pvVar3 + 0x890);
    (**(code **)(*(longlong *)((longlong)local_res20 + 0x890) + 0x28))();
    local_28 = &local_res20;
    local_30 = ppvVar1;
    FUN_140a9d130(*param_1 + 0x1978,&local_res8,&local_30,0);
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 0x1978,&local_res8);
    plVar6 = (longlong *)0x0;
    if (local_res8.s.LowPart != 0xffffffff) {
      plVar6 = (longlong *)
               (*(longlong *)(lVar2 + 0x1978) + (longlong)(int)local_res8.s.LowPart * 0x18);
    }
    plVar5 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    *(int *)(*plVar5 + 0x8d8) = *(int *)(*plVar5 + 0x8d8) + 1;
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_38._0_4_);
  return;
}



// FUNCTION 141d2a020 FUN_141d2a020 body=150 status=ok
// SIG undefined FUN_141d2a020(void)

void FUN_141d2a020(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x1918);
  *(int *)(lVar2 + 0x1918) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x191c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x1910,iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x1910) + (longlong)iVar1 * 8) = param_1[1];
  if (param_1[2] != 0) {
    *(longlong *)(*param_1 + 0x1938) = param_1[2];
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a0c0 FUN_141d2a0c0 body=428 status=ok
// SIG undefined FUN_141d2a0c0(void)

void FUN_141d2a0c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x1150);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x29) != '\0')) ||
     (((*(char *)(*(longlong *)(lVar1 + 0x5ff8) + 1) == '\0' || (*(char *)(lVar2 + 0x28) == '\0'))
      && ((*(char *)(lVar2 + 0x28) != '\0' ||
          ((cVar4 = IsAnyForwardShadingEnabled((&DAT_1464c9c48)[*(int *)(lVar1 + 8)]), cVar4 == '\0'
           && ((0x1d < (uint)(&DAT_1464c9c48)[*(int *)(lVar1 + 8)] ||
               ((0x25e2cf88U >> ((&DAT_1464c9c48)[*(int *)(lVar1 + 8)] & 0x1f) & 1) == 0)))))))))) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  lVar1 = *param_1;
  plVar3 = *(longlong **)(lVar1 + 0x1158);
  if (plVar3 != plVar3 + *(int *)(lVar1 + 0x1160)) {
    plVar7 = plVar3;
    do {
      if (*plVar7 == param_1[1]) {
        iVar6 = (int)((longlong)plVar7 - (longlong)plVar3 >> 3);
        if (iVar6 != -1) {
          _guard_xfg_dispatch_icall_nop
                    (plVar3 + iVar6,plVar3 + iVar6 + 1,
                     (longlong)((*(int *)(lVar1 + 0x1160) - iVar6) + -1) << 3);
          *(int *)(lVar1 + 0x1160) = *(int *)(lVar1 + 0x1160) + -1;
        }
        break;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar3 + *(int *)(lVar1 + 0x1160));
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x1160) < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)
             (*(longlong *)(lVar1 + 0x1158) + -8 + (longlong)*(int *)(lVar1 + 0x1160) * 8);
  }
  *(undefined8 *)(lVar1 + 0x1150) = uVar8;
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x1150);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x29) != '\0')) ||
     (((*(char *)(*(longlong *)(lVar1 + 0x5ff8) + 1) == '\0' || (*(char *)(lVar2 + 0x28) == '\0'))
      && ((*(char *)(lVar2 + 0x28) != '\0' ||
          ((cVar5 = IsAnyForwardShadingEnabled((&DAT_1464c9c48)[*(int *)(lVar1 + 8)]), cVar5 == '\0'
           && ((0x1d < (uint)(&DAT_1464c9c48)[*(int *)(lVar1 + 8)] ||
               ((0x25e2cf88U >> ((&DAT_1464c9c48)[*(int *)(lVar1 + 8)] & 0x1f) & 1) == 0)))))))))) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  if (cVar4 != cVar5) {
    *(undefined1 *)(*param_1 + 0x114c) = 1;
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a270 FUN_141d2a270 body=174 status=ok
// SIG undefined FUN_141d2a270(void)

void FUN_141d2a270(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  plVar2 = *(longlong **)(param_1 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x640);
  if (lVar3 != 0) {
    for (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x140) + 200); plVar4 != (longlong *)0x0;
        plVar4 = (longlong *)plVar4[7]) {
      iVar1 = (int)plVar2[1];
      uVar5 = *(undefined8 *)(*(longlong *)(*plVar4 + 0x30) + 0x10);
      *(int *)(plVar2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = uVar5;
    }
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a320 FUN_141d2a320 body=158 status=ok
// SIG undefined FUN_141d2a320(void)

void FUN_141d2a320(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = param_1[1];
  lVar2 = *param_1;
  for (iVar4 = 0; (-1 < iVar4 && (iVar4 < *(int *)(lVar2 + 0xfe8))); iVar4 = iVar4 + 1) {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0xfe0) + (longlong)iVar4 * 8) + 8);
    if ((plVar3[0x2d] == lVar1) &&
       (*(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) | 0x800000,
       (*(uint *)((longlong)plVar3 + 0x1c) >> 0x17 & 1) != 0)) {
      (**(code **)(*plVar3 + 200))();
    }
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a3c0 FUN_141d2a3c0 body=203 status=ok
// SIG undefined FUN_141d2a3c0(void)

void FUN_141d2a3c0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *param_1;
  uVar5 = 0;
  if (0 < *(int *)(lVar1 + 0x1900)) {
    plVar6 = (longlong *)(lVar1 + 0x18f8);
    plVar3 = (longlong *)*plVar6;
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if (*plVar3 == param_1[1]) {
        iVar4 = *(int *)(lVar1 + 0x1900);
        iVar2 = (iVar4 - iVar7) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0xa0 + *plVar6),
                     (void *)((longlong)(iVar7 + 1) * 0xa0 + *plVar6),(longlong)iVar2 * 0xa0);
          iVar4 = *(int *)(lVar1 + 0x1900);
        }
        *(int *)(lVar1 + 0x1900) = iVar4 + -1;
        TArray<FRemnantQuestEntityInfo,FDefaultAllocator>::ResizeShrink(plVar6);
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 0x14;
    } while ((longlong)uVar5 < (longlong)*(int *)(lVar1 + 0x1900));
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a490 FUN_141d2a490 body=379 status=ok
// SIG undefined FUN_141d2a490(void)

void FUN_141d2a490(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar4 = *param_1;
  lVar2 = (longlong)*(int *)(lVar4 + 0x1918);
  if (*(int *)(lVar4 + 0x1918) != 0) {
    iVar7 = 0;
    bVar8 = **(longlong **)(lVar4 + 0x1910) != param_1[1];
    lVar3 = 0;
    iVar5 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar6 = iVar5 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x1910) + lVar3 * 8);
        do {
          if (bVar8 != (*plVar1 != param_1[1])) break;
          iVar6 = iVar6 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar4 + 0x1910) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar4 + 0x1910) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar3 < lVar2);
    *(int *)(lVar4 + 0x1918) = iVar7;
  }
  FMemory::operator_delete(param_1[1],0x30);
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    if (*(longlong *)(*param_1 + 0x1938) == lVar4) {
      *(undefined8 *)(*param_1 + 0x1938) = 0;
      lVar4 = param_1[2];
    }
    if (lVar4 != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar4 + 0x28);
      FMemory::operator_delete(lVar4,0x30);
    }
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a610 FUN_141d2a610 body=354 status=ok
// SIG undefined FUN_141d2a610(void)

void FUN_141d2a610(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x1160);
  *(int *)(lVar2 + 0x1160) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x1164) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x1158,iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x1158) + (longlong)iVar1 * 8) = param_1[1];
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x1150);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x29) != '\0')) {
LAB_141d2a6cf:
    cVar4 = '\0';
  }
  else {
    if ((*(char *)(*(longlong *)(lVar2 + 0x5ff8) + 1) == '\0') || (*(char *)(lVar3 + 0x28) == '\0'))
    {
      if (*(char *)(lVar3 + 0x28) == '\0') {
        cVar4 = IsAnyForwardShadingEnabled((&DAT_1464c9c48)[*(int *)(lVar2 + 8)]);
        if ((cVar4 != '\0') ||
           (((uint)(&DAT_1464c9c48)[*(int *)(lVar2 + 8)] < 0x1e &&
            ((0x25e2cf88U >> ((&DAT_1464c9c48)[*(int *)(lVar2 + 8)] & 0x1f) & 1) != 0))))
        goto LAB_141d2a6ca;
      }
      goto LAB_141d2a6cf;
    }
LAB_141d2a6ca:
    cVar4 = '\x01';
  }
  *(longlong *)(*param_1 + 0x1150) = param_1[1];
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x1150);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x29) == '\0')) {
    if ((*(char *)(*(longlong *)(lVar2 + 0x5ff8) + 1) != '\0') && (*(char *)(lVar3 + 0x28) != '\0'))
    {
LAB_141d2a731:
      cVar5 = '\x01';
      goto LAB_141d2a737;
    }
    if (*(char *)(lVar3 + 0x28) == '\0') {
      cVar5 = IsAnyForwardShadingEnabled((&DAT_1464c9c48)[*(int *)(lVar2 + 8)]);
      if ((cVar5 != '\0') ||
         (((uint)(&DAT_1464c9c48)[*(int *)(lVar2 + 8)] < 0x1e &&
          ((0x25e2cf88U >> ((&DAT_1464c9c48)[*(int *)(lVar2 + 8)] & 0x1f) & 1) != 0))))
      goto LAB_141d2a731;
    }
  }
  cVar5 = '\0';
LAB_141d2a737:
  if (cVar4 != cVar5) {
    *(undefined1 *)(*param_1 + 0x114c) = 1;
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a780 FUN_141d2a780 body=143 status=ok
// SIG undefined FUN_141d2a780(void)

void FUN_141d2a780(undefined4 *param_1)

{
  undefined8 uVar1;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  if ((int)param_1[6] < 2) {
    FUN_141b91a20();
    FUN_141b98cd0(uVar1,param_1[6],*param_1,*(undefined8 *)(param_1 + 4));
  }
  else {
    FUN_141d21b10(uVar1,param_1[6],*param_1,*(undefined8 *)(param_1 + 2),0);
    FUN_141d31ae0(uVar1,param_1[6],*param_1,*(undefined8 *)(param_1 + 4));
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a810 FUN_141d2a810 body=390 status=ok
// SIG undefined FUN_141d2a810(void)

void FUN_141d2a810(int *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar5 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  iVar1 = *param_1;
  iVar10 = 0;
  plVar2 = *(longlong **)(param_1 + 2);
  iVar12 = iVar1 * iVar1;
  iVar7 = *(int *)((longlong)plVar2 + 0xc);
  *(undefined4 *)(plVar2 + 1) = 0;
  iVar3 = iVar12 * 6;
  if (iVar7 != iVar3) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
    iVar7 = *(int *)((longlong)plVar2 + 0xc);
    iVar10 = (int)plVar2[1];
  }
  *(int *)(plVar2 + 1) = iVar10 + iVar3;
  if (iVar7 < iVar10 + iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + (longlong)iVar10 * 8),0,(longlong)iVar3 << 3);
  lVar6 = FSceneRenderTargets::Get(uVar5);
  uVar8 = 0;
  uStack_60 = CONCAT44(iVar1,iVar1);
  uVar4 = uStack_60;
  lVar6 = *(longlong *)(lVar6 + 0x170);
  uVar11 = uVar8;
  do {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = uVar4;
    (**(code **)(*DAT_146ab6358 + 0x6c8))
              (DAT_146ab6358,uVar5,*(undefined8 *)(lVar6 + 0x10),&local_58,&local_68,(int)uVar8,0,0)
    ;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + uVar11),local_68,(longlong)(iVar12 * 8));
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    uVar9 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar9;
    uVar11 = uVar11 + (longlong)iVar12 * 8;
  } while ((int)uVar9 < 6);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2a9a0 FUN_141d2a9a0 body=222 status=ok
// SIG undefined FUN_141d2a9a0(void)

void FUN_141d2a9a0(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar5 = param_1[1];
  uVar6 = *param_1;
  TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x1308,&local_res8);
  piVar4 = (int *)0x0;
  if (local_res8.s.LowPart != 0xffffffff) {
    piVar4 = (int *)(*(longlong *)(lVar5 + 0x1308) + (longlong)(int)local_res8.s.LowPart * 0x28);
  }
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    lVar7 = *(longlong *)(lVar5 + 0x1368);
    if (*(longlong *)(lVar5 + 0x1368) == 0) {
      lVar7 = lVar5 + 0x1358;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
    uVar6 = *param_1;
    lVar5 = param_1[1];
  }
  TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
  ::Remove(lVar5 + 0x1308,uVar6);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2aa80 FUN_141d2aa80 body=161 status=ok
// SIG undefined FUN_141d2aa80(void)

void FUN_141d2aa80(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar2 = *param_1;
  iVar4 = 0;
  if (0 < *(int *)(lVar2 + 0xfe8)) {
    iVar1 = *(int *)(DAT_146a82620 + 4);
    lVar5 = 0;
    do {
      FPrimitiveSceneInfo::UpdateStaticMeshes
                (*(undefined8 *)(lVar5 + *(longlong *)(lVar2 + 0xfe0)),uVar3,iVar1 == 0);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0xfe8));
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2ab30 FUN_141d2ab30 body=516 status=ok
// SIG undefined FUN_141d2ab30(void)

void FUN_141d2ab30(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar9 = *param_1;
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x90) & 4) == 0)) goto LAB_141d2ad15;
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x114c) == '\0') {
    if (*(int *)(lVar2 + 8) < 2) {
      cVar6 = FLinearColor::IsAlmostBlack(*(longlong *)(lVar9 + 0x30) + 0x100);
      cVar7 = FLinearColor::IsAlmostBlack(param_1 + 2);
      if (cVar7 != cVar6) goto LAB_141d2aba3;
    }
    uVar8 = 0;
  }
  else {
LAB_141d2aba3:
    uVar8 = 1;
  }
  *(undefined1 *)(lVar2 + 0x114c) = uVar8;
  physx::PxVehicleDriveSimData::setClutchData(*(undefined8 *)(*param_1 + 0x30),param_1 + 2);
  *(int *)(*(longlong *)(*param_1 + 0x30) + 0x110) = (int)param_1[4];
  *(undefined4 *)(*(longlong *)(*param_1 + 0x30) + 0x114) =
       *(undefined4 *)((longlong)param_1 + 0x24);
  *(int *)(*param_1 + 0x94) = (int)param_1[5];
  *(undefined4 *)(*param_1 + 0x98) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(*param_1 + 0x9c) = (int)param_1[6];
  (**(code **)(**(longlong **)(*param_1 + 0x30) + 0x80))
            (*(longlong **)(*param_1 + 0x30),*(undefined4 *)((longlong)param_1 + 0x34),
             (int)param_1[7]);
  lVar9 = *param_1;
  lVar2 = *(longlong *)(lVar9 + 0x30);
  if ((*(char *)(lVar2 + 0x188) == '\0') && ((*(uint *)(lVar2 + 0x180) >> 0xd & 1) != 0)) {
    lVar3 = *(longlong *)(param_1[1] + 0x1188);
    if ((lVar3 == 0) ||
       (lVar3 = *(longlong *)(lVar3 + 0x30),
       *(float *)(lVar3 + 0x104) * 0.59 + *(float *)(lVar3 + 0x100) * 0.3 +
       *(float *)(lVar3 + 0x108) * 0.11 <
       *(float *)(lVar2 + 0x104) * 0.59 + *(float *)(lVar2 + 0x100) * 0.3 +
       *(float *)(lVar2 + 0x108) * 0.11)) {
      *(longlong *)(param_1[1] + 0x1188) = lVar9;
      lVar9 = *param_1;
    }
  }
  if (*(int *)(lVar9 + 0x58) != -1) {
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
    lVar2 = param_1[3];
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
    puVar1 = (undefined4 *)
             (*(longlong *)(param_1[1] + 0x1070) + 0x10 + (longlong)*(int *)(lVar9 + 0x58) * 0x30);
    *puVar1 = (int)param_1[2];
    puVar1[1] = uVar4;
    puVar1[2] = (int)lVar2;
    puVar1[3] = uVar5;
  }
LAB_141d2ad15:
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2ad40 FUN_141d2ad40 body=184 status=ok
// SIG undefined FUN_141d2ad40(void)

void FUN_141d2ad40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x90) & 4) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x30);
    if (*(char *)(lVar2 + 0x188) != '\0') {
      FUN_141bb4300(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x30);
    }
    FUN_142378960(lVar2,param_1 + 0x10,param_1 + 0x50);
    if (*(int *)(lVar1 + 0x58) != -1) {
      FUN_141b9ed00((longlong)*(int *)(lVar1 + 0x58) * 0x30 +
                    *(longlong *)(*(longlong *)(lVar1 + 0xa8) + 0x1070),lVar1);
      if (*(char *)(*(longlong *)(lVar1 + 0x30) + 0x188) != '\0') {
        FUN_141b8e5f0(lVar1);
      }
    }
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d2ae00 FUN_141d2ae00 body=495 status=ok
// SIG undefined FUN_141d2ae00(void)

void FUN_141d2ae00(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  
  lVar11 = (longlong)*(int *)(param_2 + 0x80);
  iVar7 = 0;
  if (0 < lVar11) {
    lVar9 = *(longlong *)(param_2 + 0x78);
    if (*(longlong *)(param_2 + 0x78) == 0) {
      lVar9 = param_2;
    }
    piVar10 = (int *)(lVar9 + 0x38);
    do {
      if ((*(char *)((longlong)piVar10 + 0x31) == '\0') ||
         (lVar9 = *(longlong *)(piVar10 + -8), lVar9 == 0)) {
        iVar8 = 0;
        piVar4 = *(int **)(piVar10 + -2);
        if (*(int **)(piVar10 + -2) == (int *)0x0) {
          piVar4 = piVar10 + -4;
        }
        piVar2 = piVar4 + (longlong)*piVar10 * 2;
        for (; piVar4 != piVar2; piVar4 = piVar4 + 2) {
          iVar8 = iVar8 + piVar4[1];
        }
        iVar7 = iVar7 + piVar10[2] * iVar8;
      }
      else {
        uVar5 = 0;
        if (piVar10[2] != 0) {
          piVar4 = *(int **)(piVar10 + -2);
          if (*(int **)(piVar10 + -2) == (int *)0x0) {
            piVar4 = piVar10 + -4;
          }
          do {
            iVar8 = 0;
            for (piVar2 = piVar4; piVar2 != piVar4 + (longlong)*piVar10 * 2; piVar2 = piVar2 + 2) {
              iVar8 = iVar8 + piVar2[1];
            }
            uVar1 = uVar5 * 2;
            uVar5 = uVar5 + 1;
            iVar7 = iVar7 + ((*(int *)(lVar9 + (ulonglong)(uVar1 + 1) * 4) -
                             *(int *)(lVar9 + (ulonglong)uVar1 * 4)) + 1) * iVar8;
          } while (uVar5 < (uint)piVar10[2]);
        }
      }
      piVar10 = piVar10 + 0x1e;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if (0 < iVar7) {
      AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
      lVar11 = *(longlong *)(param_1 + 8);
      uVar3 = FMemory::Malloc(0xe0,0);
      iVar7 = *(int *)(lVar11 + 0x38);
      *(int *)(lVar11 + 0x38) = iVar7 + 1;
      if (*(int *)(lVar11 + 0x3c) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar11 + 0x30,iVar7);
      }
      *(undefined8 *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8) = uVar3;
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8);
      if (lVar11 != 0) {
        if (*(longlong *)(param_1 + 0x10) == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x18);
        }
        uVar3 = *(undefined8 *)(param_1 + 8);
        FUN_141b54c90(lVar11,param_2);
        *(undefined4 *)(lVar11 + 0xb8) = param_3;
        *(undefined8 *)(lVar11 + 0xc0) = uVar3;
        *(undefined8 *)(lVar11 + 200) = 0xffffffffffffffff;
        *(undefined8 *)(lVar11 + 0xd0) = 0;
        *(undefined8 *)(lVar11 + 0xd8) = 0;
        *(undefined4 *)(lVar11 + 0xb0) = uVar6;
      }
    }
  }
  return;
}



// FUNCTION 141d2aff0 FUN_141d2aff0 body=1151 status=ok
// SIG undefined FUN_141d2aff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d2b1dd) */
/* WARNING: Removing unreachable block (ram,0x000141d2b1ec) */
/* WARNING: Removing unreachable block (ram,0x000141d2b1f2) */
/* WARNING: Removing unreachable block (ram,0x000141d2b1fb) */
/* WARNING: Removing unreachable block (ram,0x000141d2b257) */
/* WARNING: Removing unreachable block (ram,0x000141d2b204) */
/* WARNING: Removing unreachable block (ram,0x000141d2b20b) */
/* WARNING: Removing unreachable block (ram,0x000141d2b212) */
/* WARNING: Removing unreachable block (ram,0x000141d2b222) */
/* WARNING: Removing unreachable block (ram,0x000141d2b21d) */
/* WARNING: Removing unreachable block (ram,0x000141d2b245) */

void FUN_141d2aff0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,char param_6,undefined4 *param_7)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_3348 [32];
  undefined8 *local_3328;
  undefined8 local_3320;
  undefined8 local_3318;
  undefined4 local_3310;
  undefined4 local_3308;
  undefined1 local_3300;
  undefined1 local_32f8;
  undefined8 local_32f0;
  undefined8 local_32e8;
  undefined8 local_32e0;
  undefined8 local_32d8;
  undefined8 local_32d0;
  longlong local_32c8;
  longlong local_32c0;
  longlong *local_32b8 [2];
  undefined8 local_32a8;
  undefined4 uStack_32a0;
  undefined4 uStack_329c;
  undefined4 local_3288;
  undefined4 uStack_3284;
  undefined4 uStack_3280;
  undefined4 uStack_327c;
  undefined1 local_3278 [32];
  undefined8 local_3258;
  undefined1 local_3240 [816];
  undefined4 local_2f10;
  undefined4 local_2f0c;
  undefined4 local_2f08;
  undefined4 local_2f04;
  undefined8 local_1848;
  int local_1840;
  undefined4 local_17d8;
  undefined4 local_17d4;
  undefined4 local_17d0;
  undefined4 local_17cc;
  longlong local_2c8;
  undefined1 local_1a8 [352];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3348;
  if (DAT_146ab62f7 != '\0') {
    return;
  }
  FUN_141d5aa50(local_3278,param_4);
  local_17d8 = local_2f10;
  local_17d4 = local_2f0c;
  local_17d0 = local_2f08;
  local_17cc = local_2f04;
  FUN_1425a3670();
  local_1848 = FUN_141b65200();
  FUN_141d6ab00(local_3278);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 3,local_3258);
  if (local_1840 < 2) {
    uVar3 = FUN_142741330(local_1a8);
    local_3328 = (undefined8 *)CONCAT44(local_3328._4_4_,1);
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_32c8,uVar3,&DAT_146b09848);
    local_32c0 = local_32c8;
    if (local_32c8 != 0) {
      LOCK();
      *(int *)(local_32c8 + 8) = *(int *)(local_32c8 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_32c8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_3240,&local_32c0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_32c0);
  }
  local_32b8[0] = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_5 + 0xa8) + 0x40))
            (*(longlong **)(param_5 + 0xa8),local_1840,&local_32a8,local_32b8);
  uVar2 = (**(code **)(*local_32b8[0] + 0x1e8))();
  if ((DAT_1464c338c == '\0') || (DAT_1464c3388 < local_1840)) {
    FUN_141dd3910(&PTR_PTR_1464c32e0,param_2,local_1840);
  }
  lVar1 = DAT_1464c2f38;
  local_3320 = param_3;
  if (uVar2 < 2) {
    uVar3 = FUN_1404a0ce0();
    *param_3 = uVar3;
    if (param_6 != '\0') {
      local_3310 = *param_7;
      local_3308 = 0;
      local_3318 = 0;
      local_3328 = (undefined8 *)((ulonglong)local_3328 & 0xffffffffffffff00);
      FUN_141d668c0(param_2,local_3278,local_32f8,param_5);
      goto LAB_141d2b438;
    }
    if (local_1840 < 2) {
      local_32d0 = 0;
      FUN_141b95fb0(param_2,local_3278,0,&local_32d0);
      param_3[4] = local_32d0;
      local_3310 = *param_7;
      local_3318 = 0;
      local_3328 = (undefined8 *)((ulonglong)local_3328 & 0xffffffffffffff00);
      FUN_141b970f0(param_2,local_3278,0,param_5);
      puVar4 = &local_32d0;
    }
    else {
      local_32d8 = 0;
      FUN_141ab7f60(param_2,local_3278,0,&local_32d8);
      local_3300 = 0;
      local_3308 = 0;
      param_3[4] = local_32d8;
      local_3310 = *param_7;
      local_3318 = 0;
      local_3328 = (undefined8 *)((ulonglong)local_3328 & 0xffffffffffffff00);
      FUN_141abacf0(param_2,local_3278,0,param_5);
      puVar4 = &local_32d8;
    }
  }
  else if (local_1840 < 2) {
    local_32e0 = 0;
    FUN_141b95fb0(param_2,local_3278,0,&local_32e0);
    param_3[4] = local_32e0;
    local_3310 = *param_7;
    local_3318 = 0;
    local_3328 = (undefined8 *)((ulonglong)local_3328 & 0xffffffffffffff00);
    FUN_141c1b0f0(param_2,local_3278,3,param_5);
    puVar4 = &local_32e0;
  }
  else {
    if (local_2c8 == 0) {
      if (DAT_1464c2f38 != 0) {
        LOCK();
        *(int *)(DAT_1464c2f38 + 8) = *(int *)(DAT_1464c2f38 + 8) + 1;
        UNLOCK();
      }
      local_2c8 = lVar1;
      local_32f0 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_32f0);
    }
    local_3320 = (undefined8 *)((ulonglong)local_3320._4_4_ << 0x20);
    local_3328 = &local_32e8;
    local_32e8 = 0;
    FUN_141dfe0f0(param_2,local_3278,0,*(char *)((longlong)param_3 + 0x34) != '\0');
    param_3[4] = local_32e8;
    local_3310 = *param_7;
    local_3318 = 0;
    local_32a8 = 0;
    uStack_32a0 = 3;
    uStack_329c = CONCAT31(uStack_329c._1_3_,1);
    local_3328 = (undefined8 *)((ulonglong)local_3328 & 0xffffffffffffff00);
    local_3288 = 0;
    uStack_3284 = 0;
    uStack_3280 = 3;
    uStack_327c = uStack_329c;
    local_3320 = param_3;
    FUN_141dfe900(param_2,local_3278,&local_3288,param_5);
    puVar4 = &local_32e8;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar4);
LAB_141d2b438:
  FUN_141d5be00(local_3278);
  return;
}



// FUNCTION 141d2b470 FUN_141d2b470 body=219 status=ok
// SIG undefined FUN_141d2b470(void)

void FUN_141d2b470(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar3 = FUN_142a2f930();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  uVar4 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar5 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar4 <= local_18)) {
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
        return;
      }
      lVar1 = *(longlong *)(lVar5 + (longlong)local_18 * 8);
      if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x1b8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x240))(plVar2);
        uVar4 = local_20 & 0xffffffff;
        lVar5 = local_28;
      }
      local_18 = local_18 + 1;
    } while ((int)uVar4 <= local_18);
    do {
      if (*(longlong *)(lVar5 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)uVar4);
  } while( true );
}



// FUNCTION 141d2b550 FUN_141d2b550 body=594 status=ok
// SIG undefined FUN_141d2b550(void)

void FUN_141d2b550(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_c8 [192];
  
  uVar1 = FUN_141d36d40(param_1 + 0x70,local_c8);
  FUN_141d384b0(uVar1,L"PositionOnlyDepthDrawList");
  uVar1 = FUN_141d366e0(param_1 + 0x108,local_c8);
  FUN_141d384b0(uVar1,L"DepthDrawList");
  uVar1 = FUN_141d366e0(param_1 + 0x1a0,local_c8);
  FUN_141d384b0(uVar1,L"MaskedDepthDrawList");
  uVar1 = FUN_141d366e0(param_1 + 0x400,local_c8);
  FUN_141d384b0(uVar1,L"BasePassSelfShadowedTranslucencyDrawList[EBasePass_Default]");
  uVar1 = FUN_141d366e0(param_1 + 0x498,local_c8);
  FUN_141d384b0(uVar1,L"BasePassSelfShadowedTranslucencyDrawList[EBasePass_Masked]");
  uVar1 = FUN_141d366e0(param_1 + 0x5c8,local_c8);
  FUN_141d384b0(uVar1,
                L"BasePassSelfShadowedCachedPointIndirectTranslucencyDrawList[EBasePass_Default]");
  uVar1 = FUN_141d366e0(param_1 + 0x660,local_c8);
  FUN_141d384b0(uVar1,
                L"BasePassSelfShadowedCachedPointIndirectTranslucencyDrawList[EBasePass_Masked]");
  uVar1 = FUN_141d366e0(param_1 + 0x238,local_c8);
  FUN_141d384b0(uVar1,L"BasePassUniformLightMapPolicyDrawList[EBasePass_Default]");
  uVar1 = FUN_141d366e0(param_1 + 0x2d0,local_c8);
  FUN_141d384b0(uVar1,L"BasePassUniformLightMapPolicyDrawList[EBasePass_Masked]");
  uVar1 = FUN_141d366e0(param_1 + 0x368,local_c8);
  FUN_141d384b0(uVar1,L"BasePassUniformLightMapPolicyDrawList[EBasePass_Background]");
  uVar1 = FUN_141d36900(param_1 + 0xc50,local_c8);
  FUN_141d384b0(uVar1,L"MobileBasePassUniformLightMapPolicyDrawList[EBasePass_Default]");
  uVar1 = FUN_141d36900(param_1 + 0xce8,local_c8);
  FUN_141d384b0(uVar1,L"MobileBasePassUniformLightMapPolicyDrawList[EBasePass_Masked]");
  uVar1 = FUN_141d36900(param_1 + 0xe18,local_c8);
  FUN_141d384b0(uVar1,L"MobileBasePassUniformLightMapPolicyDrawListWithCSM[EBasePass_Default]");
  uVar1 = FUN_141d36900(param_1 + 0xeb0,local_c8);
  FUN_141d384b0(uVar1,L"MobileBasePassUniformLightMapPolicyDrawListWithCSM[EBasePass_Masked]");
  uVar1 = FUN_141d36b20(param_1 + 0x958,local_c8);
  FUN_141d384b0(uVar1,L"HitProxyDrawList");
  uVar1 = FUN_141d36b20(param_1 + 0x9f0,local_c8);
  FUN_141d384b0(uVar1,L"HitProxyDrawList_OpaqueOnly");
  uVar1 = FUN_141d36900(param_1 + 0xa88,local_c8);
  FUN_141d384b0(uVar1,L"VelocityDrawList");
  uVar1 = FUN_141d364c0(param_1 + 0xb20,local_c8);
  FUN_141d384b0(uVar1,L"WholeSceneShadowDepthDrawList");
  return;
}



// FUNCTION 141d2b7b0 FUN_141d2b7b0 body=2284 status=ok
// SIG undefined FUN_141d2b7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d2b7b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint *puVar9;
  int iVar10;
  undefined1 auStack_208 [32];
  double local_1e8;
  double local_1e0;
  longlong *local_1d8;
  int iStack_1d0;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int local_1a8;
  uint uStack_1a4;
  uint *puStack_1a0;
  int local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined8 local_180;
  int iStack_178;
  uint uStack_174;
  uint *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  longlong local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  undefined1 local_148 [8];
  longlong *local_140;
  longlong **local_138;
  longlong *local_130;
  longlong **local_128;
  longlong *local_120;
  longlong **local_118;
  undefined4 local_108;
  longlong local_100 [2];
  longlong local_f0 [3];
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8 [4];
  uint *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  FUN_141ee24f0(0);
  iVar10 = 0;
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0xffffffff;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            (&local_180,param_1 + 0x1070);
  if (uStack_168._4_4_ < *(int *)((longlong)local_170 + 0x18)) {
    do {
      bVar3 = false;
      local_158 = *(longlong *)
                   (*(longlong *)CONCAT44(local_180._4_4_,(undefined4)local_180) + 0x20 +
                   (longlong)uStack_168._4_4_ * 0x30);
      for (lVar7 = *(longlong *)(local_158 + 0x38); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18))
      {
        if ((*(uint *)(lVar7 + 0x44) >> 4 & 1) != 0) {
          local_188 = *(longlong *)(lVar7 + 8);
          bVar3 = true;
          uStack_1c0 = 0;
          uStack_1cc = 0;
          iStack_1bc = 0;
          iStack_1b8 = 0;
          local_1d8 = (longlong *)0x0;
          iStack_1d0 = 0;
          uStack_1c8._0_4_ = 0;
          uStack_1c8._4_4_ = 0;
          uStack_1b4 = 0;
          uStack_1b0 = 0;
          puVar6 = (undefined8 *)
                   UObjectBaseUtility::GetFullName(*(undefined8 *)(local_188 + 0xf0),local_100,0);
          if (&uStack_1c8 != puVar6) {
            if (CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8) != 0) {
              FMemory::Free();
            }
            uStack_1c8._0_4_ = (undefined4)*puVar6;
            uStack_1c8._4_4_ = (undefined4)((ulonglong)*puVar6 >> 0x20);
            *puVar6 = 0;
            uStack_1c0 = *(undefined4 *)(puVar6 + 1);
            iStack_1bc = *(undefined4 *)((longlong)puVar6 + 0xc);
            puVar6[1] = 0;
          }
          if (local_100[0] != 0) {
            FMemory::Free();
          }
          uVar1 = *(undefined8 *)(*(longlong *)(local_188 + 8) + 0xf8);
          iStack_1b8 = (int)uVar1;
          uStack_1b4 = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_1b0 = *(undefined4 *)(*(longlong *)(local_188 + 8) + 0x100);
          local_140 = &local_188;
          local_138 = &local_1d8;
          FUN_141d096b0(&local_d8,local_150,&local_140,0);
          if (CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8) != 0) {
            FMemory::Free();
          }
          if (local_1d8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
      for (lVar7 = *(longlong *)(local_158 + 0x40); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18))
      {
        if ((*(uint *)(lVar7 + 0x44) >> 4 & 1) != 0) {
          local_188 = *(longlong *)(lVar7 + 8);
          bVar3 = true;
          uStack_1c0 = 0;
          uStack_1cc = 0;
          iStack_1bc = 0;
          iStack_1b8 = 0;
          local_1d8 = (longlong *)0x0;
          iStack_1d0 = 0;
          uStack_1c8._0_4_ = 0;
          uStack_1c8._4_4_ = 0;
          uStack_1b4 = 0;
          uStack_1b0 = 0;
          puVar6 = (undefined8 *)
                   UObjectBaseUtility::GetFullName(*(undefined8 *)(local_188 + 0xf0),local_f0,0);
          if (&uStack_1c8 != puVar6) {
            if (CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8) != 0) {
              FMemory::Free();
            }
            uStack_1c8._0_4_ = (undefined4)*puVar6;
            uStack_1c8._4_4_ = (undefined4)((ulonglong)*puVar6 >> 0x20);
            *puVar6 = 0;
            uStack_1c0 = *(undefined4 *)(puVar6 + 1);
            iStack_1bc = *(undefined4 *)((longlong)puVar6 + 0xc);
            puVar6[1] = 0;
          }
          if (local_f0[0] != 0) {
            FMemory::Free();
          }
          uVar1 = *(undefined8 *)(*(longlong *)(local_188 + 8) + 0xf8);
          iStack_1b8 = (int)uVar1;
          uStack_1b4 = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_1b0 = *(undefined4 *)(*(longlong *)(local_188 + 8) + 0x100);
          local_130 = &local_188;
          local_128 = &local_1d8;
          FUN_141d096b0(&local_d8,local_14c,&local_130,0);
          if (CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8) != 0) {
            FMemory::Free();
          }
          if (local_1d8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
      if (bVar3) {
        uStack_1c0 = 0;
        uStack_1cc = 0;
        iStack_1bc = 0;
        iStack_1b8 = 0;
        local_1d8 = (longlong *)0x0;
        iStack_1d0 = 0;
        uStack_1c8._0_4_ = 0;
        uStack_1c8._4_4_ = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        puVar6 = (undefined8 *)
                 UObjectBaseUtility::GetFullName
                           (*(undefined8 *)(*(longlong *)(local_158 + 0x30) + 0x10),&local_1a8,0);
        if (&uStack_1c8 != puVar6) {
          if (CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8) != 0) {
            FMemory::Free();
          }
          uStack_1c8._0_4_ = (undefined4)*puVar6;
          uStack_1c8._4_4_ = (undefined4)((ulonglong)*puVar6 >> 0x20);
          *puVar6 = 0;
          uStack_1c0 = *(undefined4 *)(puVar6 + 1);
          iStack_1bc = *(undefined4 *)((longlong)puVar6 + 0xc);
          puVar6[1] = 0;
        }
        if (CONCAT44(uStack_1a4,local_1a8) != 0) {
          FMemory::Free();
        }
        lVar7 = *(longlong *)(local_158 + 0x30);
        iStack_1b8 = *(undefined4 *)(lVar7 + 0xf0);
        uStack_1b4 = *(undefined4 *)(lVar7 + 0xf4);
        uStack_1b0 = *(undefined4 *)(lVar7 + 0xf8);
        local_120 = &local_158;
        local_118 = &local_1d8;
        local_108 = uStack_1b0;
        FUN_141d09360(&local_88,local_148);
        if (CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8) != 0) {
          FMemory::Free();
        }
        if (local_1d8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      uStack_168 = CONCAT44(uStack_168._4_4_,(uint)uStack_168 & ~uStack_174);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_178);
    } while (uStack_168._4_4_ < *(int *)((longlong)local_170 + 0x18));
  }
  FOutputDevice::LogfImpl(param_2,L"DumpUnbuiltLightIteractions");
  FOutputDevice::LogfImpl(param_2,L"Lights with unbuilt interactions: %d",(int)local_80 - local_54);
  iVar4 = (int)local_60;
  puStack_1a0 = local_78;
  local_1a8 = 0;
  uStack_1a4 = 1;
  iStack_194 = 0;
  iStack_190 = 0;
  if ((int)local_60 != 0) {
    puVar9 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar2 = *puVar9;
    iStack_190 = iVar10;
    local_1a8 = iVar10;
    while (uVar2 == 0) {
      iStack_190 = iStack_190 + 0x20;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1a8) {
        iStack_194 = (int)local_60;
        local_1a8 = local_1a8 + 1;
        goto LAB_141d2bcf7;
      }
      uVar2 = puVar9[(longlong)local_1a8 + 1];
      local_1a8 = local_1a8 + 1;
    }
    uStack_1a4 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_1a4 != 0) {
      for (; uStack_1a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_1a4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_194 = (iStack_190 - iVar5) + 0x1f;
    if ((int)local_60 < iStack_194) {
      iStack_194 = (int)local_60;
    }
  }
LAB_141d2bcf7:
  uStack_168._4_4_ = iStack_194;
  local_160 = CONCAT44(uStack_18c,iStack_190);
  local_1d8 = &local_88;
  uStack_1c0 = 0xffffffff;
  iStack_1bc = iStack_194;
  iStack_1b8 = iStack_190;
  iStack_194 = (int)local_60;
  iStack_1d0 = local_1a8;
  uStack_1cc = uStack_1a4;
  local_198 = -1 << ((byte)local_60 & 0x1f);
  uStack_168._0_4_ = 0xffffffff;
  iStack_178 = local_1a8;
  uStack_174 = uStack_1a4;
  local_170 = puStack_1a0;
  uStack_1c8 = puStack_1a0;
  local_180 = local_1d8;
  while (((uStack_168._4_4_ != iVar4 || (local_170 != local_78)) || (local_180 != &local_88))) {
    lVar7 = (longlong)uStack_168._4_4_ * 0x40 + *local_180;
    if (*(int *)(lVar7 + 0x10) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar7 + 8);
    }
    local_1e0 = (double)*(float *)(lVar7 + 0x30);
    local_1e8 = (double)*(float *)(lVar7 + 0x2c);
    FOutputDevice::LogfImpl
              (param_2,L"   Actor %s @ (%f, %f, %f)",puVar8,(double)*(float *)(lVar7 + 0x28));
    if (*(int *)(lVar7 + 0x20) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar7 + 0x18);
    }
    FOutputDevice::LogfImpl(param_2,L"    LightComponent - %s",puVar8);
    uStack_168._0_4_ = (uint)uStack_168 & ~uStack_174;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_178);
  }
  FOutputDevice::LogfImpl(param_2,&DAT_144e35c64);
  FOutputDevice::LogfImpl
            (param_2,L"Primitives with unbuilt interactions: %d",(int)local_d0 - local_a4);
  iVar4 = (int)local_b0;
  puStack_1a0 = local_c8;
  local_1a8 = 0;
  uStack_1a4 = 1;
  iStack_194 = 0;
  iStack_190 = 0;
  if ((int)local_b0 != 0) {
    puVar9 = local_c8;
    if (local_b8 != (uint *)0x0) {
      puVar9 = local_b8;
    }
    uVar2 = *puVar9;
    iStack_190 = iVar10;
    local_1a8 = iVar10;
    while (uVar2 == 0) {
      iStack_190 = iStack_190 + 0x20;
      if ((int)((int)local_b0 + -1 + ((int)local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1a8) {
        iStack_194 = (int)local_b0;
        local_1a8 = local_1a8 + 1;
        goto LAB_141d2bee6;
      }
      uVar2 = puVar9[(longlong)local_1a8 + 1];
      local_1a8 = local_1a8 + 1;
    }
    uStack_1a4 = -uVar2 & uVar2;
    iVar10 = 0x1f;
    if (uStack_1a4 != 0) {
      for (; uStack_1a4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_1a4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_194 = (iStack_190 - iVar10) + 0x1f;
    if ((int)local_b0 < iStack_194) {
      iStack_194 = (int)local_b0;
    }
  }
LAB_141d2bee6:
  iStack_1bc = iStack_194;
  local_160 = CONCAT44(uStack_18c,iStack_190);
  local_1d8 = &local_d8;
  local_198 = -1 << ((byte)local_b0 & 0x1f);
  iStack_1d0 = local_1a8;
  uStack_1cc = uStack_1a4;
  iStack_194 = (int)local_b0;
  uStack_1c0 = 0xffffffff;
  iStack_1b8 = iStack_190;
  uStack_168._0_4_ = 0xffffffff;
  uStack_168._4_4_ = iStack_1bc;
  iStack_178 = local_1a8;
  uStack_174 = uStack_1a4;
  local_170 = puStack_1a0;
  uStack_1c8 = puStack_1a0;
  local_180 = local_1d8;
  while (((uStack_168._4_4_ != iVar4 || (local_170 != local_c8)) || (local_180 != &local_d8))) {
    lVar7 = (longlong)uStack_168._4_4_ * 0x40 + *local_180;
    if (*(int *)(lVar7 + 0x10) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar7 + 8);
    }
    local_1e0 = (double)*(float *)(lVar7 + 0x30);
    local_1e8 = (double)*(float *)(lVar7 + 0x2c);
    FOutputDevice::LogfImpl
              (param_2,L"   Actor %s @ (%f, %f, %f)",puVar8,(double)*(float *)(lVar7 + 0x28));
    if (*(int *)(lVar7 + 0x20) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar7 + 0x18);
    }
    FOutputDevice::LogfImpl(param_2,L"    PrimitiveComponent - %s",puVar8);
    uStack_168._0_4_ = (uint)uStack_168 & ~uStack_174;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_178);
  }
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  FUN_141d2c750(&local_d8,0);
  if (local_b8 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  FUN_141d2c750(&local_88,0);
  if (local_68 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d2c0a0 FUN_141d2c0a0 body=181 status=ok
// SIG undefined FUN_141d2c0a0(void)

void FUN_141d2c0a0(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141d2c160 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
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



// FUNCTION 141d2c1e0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141d2c2a0 Empty body=554 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<int,FCachedShadowMapData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar6 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar6 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar2) goto LAB_141d2c371;
      uVar3 = puVar8[lVar4 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_64 = (iStack_60 - iVar7) + 0x1f;
    if (iVar6 < iStack_64) {
LAB_141d2c371:
      iStack_64 = iVar6;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar6) {
    do {
      lVar4 = (longlong)iStack_3c * 0x270 + *param_1;
      if (*(longlong **)(lVar4 + 0x250) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar4 + 0x250) + 0x30))();
      }
      plVar5 = *(longlong **)(lVar4 + 0x240);
      for (iVar6 = *(int *)(lVar4 + 0x248); iVar6 != 0; iVar6 = iVar6 + -1) {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x30))();
        }
        plVar5 = plVar5 + 1;
      }
      if (*(longlong *)(lVar4 + 0x1e0) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar4 + 0x140) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar3 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2c4d0 Empty body=633 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  int local_60;
  uint uStack_5c;
  uint *puStack_58;
  uint local_50;
  int iStack_4c;
  int iStack_48;
  
  iVar2 = (int)param_1[5];
  puStack_58 = (uint *)(param_1 + 2);
  uStack_84 = 1;
  local_88 = 0;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puStack_58;
    }
    uVar5 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar5 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar11 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar11) goto LAB_141d2c5a5;
      uVar5 = puVar10[lVar7 + 1];
    }
    uStack_84 = -uVar5 & uVar5;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_74 = (iStack_70 - iVar9) + 0x1f;
    if (iVar2 < iStack_74) {
LAB_141d2c5a5:
      iStack_74 = iVar2;
    }
  }
  local_60 = local_88;
  uStack_5c = uStack_84;
  local_50 = 0xffffffff;
  iStack_4c = iStack_74;
  iStack_48 = iStack_70;
  if (iStack_74 < iVar2) {
    do {
      lVar8 = 3;
      lVar7 = (longlong)iStack_4c * 0x38 + 0x20 + *param_1;
      do {
        puVar3 = *(undefined8 **)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        lVar8 = lVar8 + -1;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if (*(char *)(puVar3 + 2) == '\0') {
              if (DAT_146ab62f5 == '\0') {
                cVar4 = FOutputDevice::CanBeUsedOnAnyThread();
                if (cVar4 != '\0') goto LAB_141d2c68e;
              }
              LOCK();
              bVar11 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar11) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar11) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar3;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
LAB_141d2c68e:
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      } while (lVar8 != 0);
      local_50 = local_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
    } while (iStack_4c < (int)puStack_58[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  return;
}



// FUNCTION 141d2c750 FUN_141d2c750 body=448 status=ok
// SIG undefined FUN_141d2c750(void)

void FUN_141d2c750(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_141d2c821;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
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
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141d2c821:
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
      lVar5 = (longlong)iStack_2c * 0x40 + *param_1;
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 141d2c910 Empty body=496 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<ULightComponent_const_*,FTemporalAAHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar4) goto LAB_141d2c9e1;
      uVar5 = puVar9[lVar6 + 1];
    }
    uStack_64 = -uVar5 & uVar5;
    iVar8 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_54 = (iStack_50 - iVar8) + 0x1f;
    if (iVar3 < iStack_54) {
LAB_141d2c9e1:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      lVar7 = 2;
      lVar6 = (longlong)iStack_2c * 0x40 + 0x18 + *param_1;
      do {
        plVar2 = (longlong *)(lVar6 + -8);
        lVar6 = lVar6 + -8;
        lVar7 = lVar7 + -1;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar2 + 0x30))();
        }
      } while (lVar7 != 0);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2cb00 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_141d2cbd1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_141d2cbd1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0x20 + 0x10 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2cc90 Empty body=404 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_141d2cd61;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_141d2cd61:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0x30 + 0x10 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2ce30 Empty body=558 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar9 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar9 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar4 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar4) goto LAB_141d2cf01;
      uVar5 = puVar11[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar9 < iStack_64) {
LAB_141d2cf01:
      iStack_64 = iVar9;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar9) {
    do {
      plVar8 = (longlong *)((longlong)iStack_3c * 0xe8 + *param_1);
      iVar9 = (int)plVar8[3];
      lVar6 = plVar8[2];
      if (iVar9 != 0) {
        plVar7 = (longlong *)(lVar6 + 0x30);
        do {
          if (plVar7[-5] != 0) {
            FUN_141d78430(plVar7[-5],*plVar7);
          }
          puVar3 = (undefined8 *)*plVar7;
          if (puVar3 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar3 + 1);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          plVar7 = plVar7 + 7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar6 = plVar8[2];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<232,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2d060 Empty body=558 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar9 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar9 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar4 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar4) goto LAB_141d2d131;
      uVar5 = puVar11[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar9 < iStack_64) {
LAB_141d2d131:
      iStack_64 = iVar9;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar9) {
    do {
      plVar8 = (longlong *)((longlong)iStack_3c * 0xf0 + *param_1);
      iVar9 = (int)plVar8[3];
      lVar6 = plVar8[2];
      if (iVar9 != 0) {
        plVar7 = (longlong *)(lVar6 + 0x30);
        do {
          if (plVar7[-5] != 0) {
            FUN_141d78430(plVar7[-5],*plVar7);
          }
          puVar3 = (undefined8 *)*plVar7;
          if (puVar3 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar3 + 1);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          plVar7 = plVar7 + 7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar6 = plVar8[2];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2d290 FUN_141d2d290 body=563 status=ok
// SIG undefined FUN_141d2d290(void)

void FUN_141d2d290(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar9 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar9 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar4 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar4) goto LAB_141d2d361;
      uVar5 = puVar11[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar9 < iStack_64) {
LAB_141d2d361:
      iStack_64 = iVar9;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar9) {
    do {
      plVar8 = (longlong *)((longlong)iStack_3c * 0xe0 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar8 + 0xd);
      iVar9 = (int)plVar8[3];
      lVar6 = plVar8[2];
      if (iVar9 != 0) {
        plVar7 = (longlong *)(lVar6 + 0x30);
        do {
          if (plVar7[-5] != 0) {
            FUN_141d78430(plVar7[-5],*plVar7);
          }
          puVar3 = (undefined8 *)*plVar7;
          if (puVar3 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar3 + 1);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          plVar7 = plVar7 + 7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar6 = plVar8[2];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<224,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2d4d0 Empty body=558 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<FHitProxyDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar9 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar9 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar4 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar4) goto LAB_141d2d5a1;
      uVar5 = puVar11[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar9 < iStack_64) {
LAB_141d2d5a1:
      iStack_64 = iVar9;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar9) {
    do {
      plVar8 = (longlong *)((longlong)iStack_3c * 0xd8 + *param_1);
      iVar9 = (int)plVar8[3];
      lVar6 = plVar8[2];
      if (iVar9 != 0) {
        plVar7 = (longlong *)(lVar6 + 0x30);
        do {
          if (plVar7[-5] != 0) {
            FUN_141d78430(plVar7[-5],*plVar7);
          }
          puVar3 = (undefined8 *)*plVar7;
          if (puVar3 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar3 + 1);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          plVar7 = plVar7 + 7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar6 = plVar8[2];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2d700 Empty body=558 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar9 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar9 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar4 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar4) goto LAB_141d2d7d1;
      uVar5 = puVar11[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar9 < iStack_64) {
LAB_141d2d7d1:
      iStack_64 = iVar9;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar9) {
    do {
      plVar8 = (longlong *)((longlong)iStack_3c * 200 + *param_1);
      iVar9 = (int)plVar8[3];
      lVar6 = plVar8[2];
      if (iVar9 != 0) {
        plVar7 = (longlong *)(lVar6 + 0x30);
        do {
          if (plVar7[-5] != 0) {
            FUN_141d78430(plVar7[-5],*plVar7);
          }
          puVar3 = (undefined8 *)*plVar7;
          if (puVar3 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar3 + 1);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          plVar7 = plVar7 + 7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar6 = plVar8[2];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<200,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2d930 Empty body=558 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar9 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar9 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar4 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar4) goto LAB_141d2da01;
      uVar5 = puVar11[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar9 < iStack_64) {
LAB_141d2da01:
      iStack_64 = iVar9;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar9) {
    do {
      plVar8 = (longlong *)((longlong)iStack_3c * 0xe0 + *param_1);
      iVar9 = (int)plVar8[3];
      lVar6 = plVar8[2];
      if (iVar9 != 0) {
        plVar7 = (longlong *)(lVar6 + 0x30);
        do {
          if (plVar7[-5] != 0) {
            FUN_141d78430(plVar7[-5],*plVar7);
          }
          puVar3 = (undefined8 *)*plVar7;
          if (puVar3 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar3 + 1);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          plVar7 = plVar7 + 7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar6 = plVar8[2];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<224,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d2db60 Empty body=633 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  int local_60;
  uint uStack_5c;
  uint *puStack_58;
  uint local_50;
  int iStack_4c;
  int iStack_48;
  
  iVar2 = (int)param_1[5];
  puStack_58 = (uint *)(param_1 + 2);
  uStack_84 = 1;
  local_88 = 0;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puStack_58;
    }
    uVar5 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar5 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar11 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar11) goto LAB_141d2dc35;
      uVar5 = puVar10[lVar7 + 1];
    }
    uStack_84 = -uVar5 & uVar5;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_74 = (iStack_70 - iVar9) + 0x1f;
    if (iVar2 < iStack_74) {
LAB_141d2dc35:
      iStack_74 = iVar2;
    }
  }
  local_60 = local_88;
  uStack_5c = uStack_84;
  local_50 = 0xffffffff;
  iStack_4c = iStack_74;
  iStack_48 = iStack_70;
  if (iStack_74 < iVar2) {
    do {
      lVar8 = 3;
      lVar7 = (longlong)iStack_4c * 0x58 + 0x20 + *param_1;
      do {
        puVar3 = *(undefined8 **)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        lVar8 = lVar8 + -1;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if (*(char *)(puVar3 + 2) == '\0') {
              if (DAT_146ab62f5 == '\0') {
                cVar4 = FOutputDevice::CanBeUsedOnAnyThread();
                if (cVar4 != '\0') goto LAB_141d2dd1e;
              }
              LOCK();
              bVar11 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar11) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar11) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar6 + 8) = puVar3;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
LAB_141d2dd1e:
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      } while (lVar8 != 0);
      local_50 = local_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
    } while (iStack_4c < (int)puStack_58[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  return;
}



// FUNCTION 141d2dde0 FUN_141d2dde0 body=567 status=ok
// SIG undefined FUN_141d2dde0(void)

void FUN_141d2dde0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res20 [8];
  longlong local_28 [2];
  
  if (DAT_146ab62df != '\0') {
    iVar8 = *(int *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x48 + (longlong)iVar8 * 8) == 0) {
      lVar10 = 0;
      if ((DAT_146ab6383 != '\0') && (cVar5 = FUN_141ed7f80(param_2), cVar5 != '\0')) {
        lVar10 = param_2;
      }
      (**(code **)(*DAT_146ab6358 + 0x338))(DAT_146ab6358,local_res20,2);
      if (lVar10 != 0) {
        FRHICommandListImmediate::UnStallRHIThread(lVar10);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=
                (param_1 + ((longlong)*(int *)(param_1 + 0x20) + 9) * 8,local_res20);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res20);
      iVar8 = *(int *)(param_1 + 0x20);
    }
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *(undefined8 *)(param_1 + 0x48 + (longlong)iVar8 * 8);
    puVar6 = puVar9 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59490;
    puVar9[2] = uVar2;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f594a0;
    if (DAT_146ab6383 != '\0') {
      plVar7 = (longlong *)(param_1 + 0x70);
      lVar10 = 3;
      do {
        lVar3 = plVar7[-1];
        lVar4 = *plVar7;
        *plVar7 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar7 = plVar7 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      plVar7 = (longlong *)FRHICommandListImmediate::RHIThreadFence(param_2,local_28,0);
      plVar11 = (longlong *)(param_1 + 0x68);
      if (plVar11 != plVar7) {
        lVar10 = *plVar11;
        *plVar11 = *plVar7;
        *plVar7 = 0;
        if (lVar10 != 0) {
          LOCK();
          piVar1 = (int *)(lVar10 + 0x48);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
      if (local_28[0] != 0) {
        LOCK();
        piVar1 = (int *)(local_28[0] + 0x48);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if (*(int *)(param_2 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      }
    }
  }
  return;
}



// FUNCTION 141d2e020 FUN_141d2e020 body=326 status=ok
// SIG undefined FUN_141d2e020(void)

void FUN_141d2e020(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x600c) == '\0') {
    uStack_40 = CONCAT31(uStack_40._1_3_,param_2);
    local_48 = param_1;
    if (DAT_146ac3ac6 != '\0') {
      cVar7 = IsInRenderingThread();
      if (cVar7 != '\0') {
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_141d15a00(&local_48,uVar9);
        *(undefined1 *)(param_1 + 0x600c) = 1;
        return;
      }
    }
    if (DAT_146ac3ac5 == '\0') {
      cVar7 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar7 != '\0') || (DAT_1468c21ae == '\0')) {
LAB_141d2e0a4:
        local_38 = (undefined4)local_48;
        uStack_34 = local_48._4_4_;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_141d15a00(&local_38,uVar9);
        *(undefined1 *)(param_1 + 0x600c) = 1;
        return;
      }
      DVar8 = GetCurrentThreadId();
      if (DVar8 == DAT_1468c21c0) goto LAB_141d2e0a4;
    }
    plVar10 = (longlong *)FUN_141d28570(local_28,0,0xff);
    lVar3 = *plVar10;
    *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_48;
    *(undefined4 *)(lVar3 + 0x14) = local_48._4_4_;
    *(undefined4 *)(lVar3 + 0x18) = uStack_40;
    *(undefined4 *)(lVar3 + 0x1c) = uStack_3c;
    lVar3 = *plVar10;
    lVar6 = plVar10[2];
    lVar4 = plVar10[1];
    lVar5 = *(longlong *)(lVar3 + 0x28);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
    *(undefined1 *)(param_1 + 0x600c) = 1;
  }
  return;
}



// FUNCTION 141d2e170 FUN_141d2e170 body=242 status=ok
// SIG undefined FUN_141d2e170(void)

void FUN_141d2e170(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d1a170(param_1[2],uVar3,param_1[3]);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48c38;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2e270 ExecuteTask body=291 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::`5'::FDIMeshRendererInfoPushToRTName,<lambda_75a97b3ed89d0aef32f0cb75ab298821>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  uVar4 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d15df0(param_1 + 2,uVar4);
  plVar8 = (longlong *)param_1[4];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e48c98;
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
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar8 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    plVar6 = plVar8;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar6 = plVar7;
    }
    TlsSetValue(*pDVar5,plVar6);
  }
  if ((int)plVar6[2] < 0x20) {
    plVar8 = (longlong *)plVar6[1];
  }
  else {
    if (*plVar6 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *plVar6 = plVar6[1];
    plVar6[1] = 0;
    *(undefined4 *)(plVar6 + 2) = 0;
  }
  *param_1 = plVar8;
  *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
  plVar6[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2e3a0 FUN_141d2e3a0 body=277 status=ok
// SIG undefined FUN_141d2e3a0(void)

void FUN_141d2e3a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  lVar3 = param_1[2];
  uVar4 = param_1[3];
  iVar2 = *(int *)(lVar3 + 0x15e8);
  *(int *)(lVar3 + 0x15e8) = iVar2 + 1;
  if (*(int *)(lVar3 + 0x15ec) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x15e0,iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x15e0) + (longlong)iVar2 * 8) = uVar4;
  *param_1 = &PTR_FUN_144e48cb8;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  plVar7 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      lpTlsValue = plVar6;
    }
    TlsSetValue(*pDVar5,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2e4c0 FUN_141d2e4c0 body=271 status=ok
// SIG undefined FUN_141d2e4c0(void)

void FUN_141d2e4c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d208a0(uVar3,param_1[2],*(undefined4 *)(param_1 + 3),
                *(undefined4 *)((longlong)param_1 + 0x1c),*(undefined1 *)(param_1 + 4),
                *(undefined1 *)((longlong)param_1 + 0x21),(longlong)param_1 + 0x24);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_144e48bf8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2e5d0 FUN_141d2e5d0 body=246 status=ok
// SIG undefined FUN_141d2e5d0(void)

void FUN_141d2e5d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d29bc0(param_1 + 2,param_3,param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e48c28;
  if (param_1[0x19] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x19] + 0x48);
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



// FUNCTION 141d2e6d0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d15be0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48c68;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2e7c0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d15cb0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48c78;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2e8b0 FUN_141d2e8b0 body=274 status=ok
// SIG undefined FUN_141d2e8b0(void)

void FUN_141d2e8b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  lVar4 = param_1[2];
  lVar3 = *(longlong *)(lVar4 + 0x60d0);
  if (lVar3 != 0) {
    FUN_14246f7e0(lVar3);
    FMemory::operator_delete(lVar3,0x58);
    lVar4 = param_1[2];
  }
  plVar7 = (longlong *)0x0;
  *(undefined8 *)(lVar4 + 0x60d0) = 0;
  *param_1 = &PTR_FUN_144e48d10;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  if (lpTlsValue == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      lpTlsValue = plVar6;
    }
    TlsSetValue(*pDVar5,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2e9d0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d154c0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48cd8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2eac0 FUN_141d2eac0 body=286 status=ok
// SIG undefined FUN_141d2eac0(void)

void FUN_141d2eac0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  LOCK();
  *(int *)(param_1[2] + 0x5ed4) = *(int *)(param_1[2] + 0x5ed4) + -1;
  UNLOCK();
  *(undefined1 *)(param_1[3] + 0xc0) = *(undefined1 *)(param_1 + 0xc);
  LOCK();
  *(int *)(param_1[2] + 0x5ed4) = *(int *)(param_1[2] + 0x5ed4) + 1;
  UNLOCK();
  *(undefined1 *)(param_1[2] + 0x1208) = 1;
  FReflectionCaptureProxy::SetTransform(param_1[3],param_1 + 4);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_144e48c88;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
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



// FUNCTION 141d2ebe0 FUN_141d2ebe0 body=278 status=ok
// SIG undefined FUN_141d2ebe0(void)

void FUN_141d2ebe0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  undefined *local_18;
  undefined *local_10;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  local_10 = &DAT_144e383f4;
  local_18 = &DAT_144e383e8;
  FUN_141d4b990(param_1[2] + 0x1208,*(undefined4 *)(param_1 + 3),
                *(undefined4 *)((longlong)param_1 + 0x1c),&local_18);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48bd8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d2ed00 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d15a00(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48ce8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2edf0 ExecuteTask body=291 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::`5'::FDIMeshRendererInfoPushToRTName,<lambda_75a97b3ed89d0aef32f0cb75ab298821>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  uVar4 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d14fa0(param_1 + 2,uVar4);
  plVar8 = (longlong *)param_1[4];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e48ca8;
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
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar8 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    plVar6 = plVar8;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar6 = plVar7;
    }
    TlsSetValue(*pDVar5,plVar6);
  }
  if ((int)plVar6[2] < 0x20) {
    plVar8 = (longlong *)plVar6[1];
  }
  else {
    if (*plVar6 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *plVar6 = plVar6[1];
    plVar6[1] = 0;
    *(undefined4 *)(plVar6 + 2) = 0;
  }
  *param_1 = plVar8;
  *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
  plVar6[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2ef20 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d153b0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48cc8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2f010 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d15150(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48be8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2f100 FUN_141d2f100 body=252 status=ok
// SIG undefined FUN_141d2f100(void)

void FUN_141d2f100(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d15e80(param_1 + 2,uVar3);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e48c18;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2f200 FUN_141d2f200 body=263 status=ok
// SIG undefined FUN_141d2f200(void)

void FUN_141d2f200(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  if ((param_1[3] != 0) && (*(longlong *)(param_1[3] + 0x140) != 0)) {
    FUN_141d511a0(param_1[2] + 0x15f0);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48c58;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d2f310 FUN_141d2f310 body=294 status=ok
// SIG undefined FUN_141d2f310(void)

void FUN_141d2f310(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d520b0(param_1[2],uVar3,param_1[3],param_1 + 4,(longlong)param_1 + 0x3c,param_1 + 0xc,
                param_1 + 0x14,param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e48c48;
  if (param_1[0x19] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x19] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2f440 FUN_141d2f440 body=238 status=ok
// SIG undefined FUN_141d2f440(void)

void FUN_141d2f440(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d14eb0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e48c08;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2f530 FUN_141d2f530 body=263 status=ok
// SIG undefined FUN_141d2f530(void)

void FUN_141d2f530(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  DAT_1464aaa90 = DAT_1464aaa90 + 1;
  FRHICommandList::BeginFrame(uVar3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e485c0;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2f640 FUN_141d2f640 body=237 status=ok
// SIG undefined FUN_141d2f640(void)

void FUN_141d2f640(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d29c30(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144e485a0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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



// FUNCTION 141d2f730 FUN_141d2f730 body=260 status=ok
// SIG undefined FUN_141d2f730(void)

void FUN_141d2f730(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d21220(uVar3,*(undefined4 *)(param_1 + 2));
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e485e0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2f840 FUN_141d2f840 body=278 status=ok
// SIG undefined FUN_141d2f840(void)

void FUN_141d2f840(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  if (*(int *)(param_1 + 4) < 2) {
    FUN_141b95700();
  }
  else {
    FUN_141d26770(uVar3,param_1[2],param_1[3]);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e48620;
  *(undefined1 *)(param_1 + 5) = 0;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2f960 FUN_141d2f960 body=237 status=ok
// SIG undefined FUN_141d2f960(void)

void FUN_141d2f960(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d29cc0(param_1 + 2,param_3,param_1 + 8);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_144e485f0;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
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



// FUNCTION 141d2fa50 FUN_141d2fa50 body=257 status=ok
// SIG undefined FUN_141d2fa50(void)

void FUN_141d2fa50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FRHICommandList::EndFrame(uVar3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e485d0;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2fb60 ExecuteTask body=246 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FScene::AddExponentialHeightFog'::`2'::EURCMacro_FAddFogCommand>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d29d40(param_1 + 2,param_3,param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x17) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e48770;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
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



// FUNCTION 141d2fc60 FUN_141d2fc60 body=333 status=ok
// SIG undefined FUN_141d2fc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d2fc60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_50);
  FUN_141b9ed00(local_48,param_1[3]);
  uVar3 = FUN_141d17f00(param_1[2] + 0x10f8,local_48);
  *(undefined4 *)(param_1[3] + 0x58) = uVar3;
  QueryPerformanceCounter(&local_58);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_58.s.LowPart - local_50._0_4_);
  *param_1 = &PTR_FUN_144e48700;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d2fdb0 FUN_141d2fdb0 body=259 status=ok
// SIG undefined FUN_141d2fdb0(void)

void FUN_141d2fdb0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d190f0(param_1[2],param_1[3]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e486f0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d2fec0 FUN_141d2fec0 body=237 status=ok
// SIG undefined FUN_141d2fec0(void)

void FUN_141d2fec0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d29e20(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e487b0;
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



// FUNCTION 141d2ffb0 FUN_141d2ffb0 body=237 status=ok
// SIG undefined FUN_141d2ffb0(void)

void FUN_141d2ffb0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a020(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e48790;
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



// FUNCTION 141d300a0 FUN_141d300a0 body=278 status=ok
// SIG undefined FUN_141d300a0(void)

void FUN_141d300a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  undefined8 local_28;
  undefined4 local_20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  local_28 = param_1[3];
  local_20 = *(undefined4 *)(param_1 + 4);
  FUN_141d1e7a0(param_1[2],&local_28);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e48810;
  *(undefined1 *)(param_1 + 5) = 0;
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



// FUNCTION 141d301c0 FUN_141d301c0 body=237 status=ok
// SIG undefined FUN_141d301c0(void)

void FUN_141d301c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a0c0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48720;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d302b0 FUN_141d302b0 body=237 status=ok
// SIG undefined FUN_141d302b0(void)

void FUN_141d302b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a270(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e487c0;
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



// FUNCTION 141d303a0 FUN_141d303a0 body=237 status=ok
// SIG undefined FUN_141d303a0(void)

void FUN_141d303a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a320(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48820;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d30490 FUN_141d30490 body=269 status=ok
// SIG undefined FUN_141d30490(void)

void FUN_141d30490(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2a0))(plVar5,1);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e48800;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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



// FUNCTION 141d305a0 FUN_141d305a0 body=265 status=ok
// SIG undefined FUN_141d305a0(void)

void FUN_141d305a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141b69ae0(param_1[2] + 0x13e8,*(undefined4 *)(param_1 + 3));
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e486e0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d306b0 FUN_141d306b0 body=237 status=ok
// SIG undefined FUN_141d306b0(void)

void FUN_141d306b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a3c0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48780;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d307a0 FUN_141d307a0 body=259 status=ok
// SIG undefined FUN_141d307a0(void)

void FUN_141d307a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d48760(param_1[2],param_1[3]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e48760;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d308b0 FUN_141d308b0 body=266 status=ok
// SIG undefined FUN_141d308b0(void)

void FUN_141d308b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d49750(param_1[2],param_1[3]);
  LOCK();
  *(int *)param_1[4] = *(int *)param_1[4] + -1;
  UNLOCK();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e486d0;
  *(undefined1 *)(param_1 + 5) = 0;
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



// FUNCTION 141d309c0 FUN_141d309c0 body=237 status=ok
// SIG undefined FUN_141d309c0(void)

void FUN_141d309c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a490(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e487a0;
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



// FUNCTION 141d30ab0 FUN_141d30ab0 body=301 status=ok
// SIG undefined FUN_141d30ab0(void)

void FUN_141d30ab0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d4dbe0(param_1[2],uVar3,param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  plVar6 = (longlong *)0x0;
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_144e487e0;
  if (param_1[0xe] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xe] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d30be0 FUN_141d30be0 body=237 status=ok
// SIG undefined FUN_141d30be0(void)

void FUN_141d30be0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a610(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48710;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d30cd0 FUN_141d30cd0 body=259 status=ok
// SIG undefined FUN_141d30cd0(void)

void FUN_141d30cd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  *(undefined4 *)(param_1[2] + 0x6048) = *(undefined4 *)(param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e48b48;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d30de0 FUN_141d30de0 body=279 status=ok
// SIG undefined FUN_141d30de0(void)

void FUN_141d30de0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d53910(param_1[2],uVar3,param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e487f0;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d30f00 FUN_141d30f00 body=237 status=ok
// SIG undefined FUN_141d30f00(void)

void FUN_141d30f00(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a780(param_1 + 2,param_3,param_1 + 7);
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_144e48610;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
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



// FUNCTION 141d30ff0 FUN_141d30ff0 body=269 status=ok
// SIG undefined FUN_141d30ff0(void)

void FUN_141d30ff0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d35a70(uVar3,param_1[2],param_1[3],param_1[4]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e485b0;
  *(undefined1 *)(param_1 + 5) = 0;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d31100 FUN_141d31100 body=237 status=ok
// SIG undefined FUN_141d31100(void)

void FUN_141d31100(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a810(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48600;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d311f0 FUN_141d311f0 body=237 status=ok
// SIG undefined FUN_141d311f0(void)

void FUN_141d311f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2a9a0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144e48730;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d312e0 FUN_141d312e0 body=139 status=ok
// SIG undefined FUN_141d312e0(void)

void FUN_141d312e0(undefined8 *param_1)

{
  undefined8 uVar1;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141b6af70(uVar1,param_1[0x357],param_1 + 2,*(undefined4 *)(param_1 + 0x356),0);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  FUN_142745bf0(param_1 + 2);
  *(undefined1 *)(param_1 + 0x358) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141d31368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 141d31370 FUN_141d31370 body=257 status=ok
// SIG undefined FUN_141d31370(void)

void FUN_141d31370(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  *(undefined1 *)(param_1[2] + 0x5f30) = 1;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e486b0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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



// FUNCTION 141d31480 FUN_141d31480 body=237 status=ok
// SIG undefined FUN_141d31480(void)

void FUN_141d31480(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2ab30(param_1 + 2,param_3,param_1 + 0xb);
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_144e48750;
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 0x48);
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



// FUNCTION 141d31570 ExecuteTask body=237 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`UMaterialInterface::UpdateMaterialRenderProxy'::`6'::EURCMacro_UpdateMaterialRenderProxySubsurface>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d2ad40(param_1 + 2,param_3,param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_144e48740;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
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



// FUNCTION 141d31660 FUN_141d31660 body=261 status=ok
// SIG undefined FUN_141d31660(void)

void FUN_141d31660(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  *(undefined8 *)(param_1[2] + 0x1a68) = param_1[3];
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e487d0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141d31770 FUN_141d31770 body=279 status=ok
// SIG undefined FUN_141d31770(void)

void FUN_141d31770(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = *(longlong *)(param_1[2] + 0x140);
  FUN_141d4fc40(lVar3);
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_1 + 3);
  FUN_141d38290(lVar3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e486c0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d31890 FUN_141d31890 body=285 status=ok
// SIG undefined FUN_141d31890(void)

void FUN_141d31890(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  *(undefined4 *)(param_1[2] + 0x5fe8) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(param_1[2] + 0x5fec) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_1[2] + 0x5ff0) = *(undefined4 *)(param_1 + 4);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e486a0;
  *(undefined1 *)(param_1 + 5) = 0;
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



// FUNCTION 141d319b0 FUN_141d319b0 body=292 status=ok
// SIG undefined FUN_141d319b0(void)

void FUN_141d319b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  if (((*(int *)(param_1 + 3) != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[2] + 0x18))(), cVar3 != '\0')) {
    plVar5 = plVar7;
    if (*(int *)(param_1 + 3) != 0) {
      plVar5 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar5 + 0x40))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_141591a60(param_1[6],param_2,param_3);
  *param_1 = &PTR_FUN_144e47ac0;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d31ae0 FUN_141d31ae0 body=6049 status=ok
// SIG undefined FUN_141d31ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d31ae0(longlong param_1,int param_2,uint param_3,ulonglong param_4)

{
  int *piVar1;
  wchar_t wVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined1 *puVar30;
  uint uVar31;
  ulonglong *puVar32;
  longlong lVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_588 [32];
  ulonglong local_568;
  undefined4 local_560;
  undefined4 local_558;
  float local_550;
  float local_548;
  undefined8 local_540;
  longlong *local_538;
  longlong local_530;
  undefined4 local_528;
  undefined4 local_520;
  uint local_518;
  int local_510;
  uint local_50c;
  int local_508;
  int local_504;
  undefined8 local_500;
  uint local_4f8;
  uint uStack_4f4;
  undefined8 local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  int local_4d8 [2];
  longlong *local_4d0;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  int local_4bc;
  longlong local_4b8;
  longlong local_4b0;
  ulonglong local_4a8;
  undefined1 local_4a0 [8];
  longlong local_498;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  undefined *local_460;
  undefined4 local_458;
  undefined *local_450;
  undefined4 local_448;
  undefined *local_440;
  undefined4 local_438;
  undefined *local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined1 local_410 [24];
  undefined8 local_3f8;
  longlong *plStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  longlong *local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3ac;
  int local_3a4 [16];
  undefined1 auStack_364 [4];
  undefined8 local_360;
  undefined4 local_358;
  ulonglong local_354;
  undefined8 local_34c;
  undefined4 local_344;
  longlong local_338 [2];
  uint local_328;
  undefined2 local_324;
  undefined1 local_320 [168];
  undefined8 local_278;
  undefined1 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined1 local_1e0 [8];
  longlong local_1d8 [2];
  int local_1c8;
  undefined1 local_1c4;
  undefined1 local_1c3;
  undefined1 local_1c0 [168];
  undefined8 local_118;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined1 local_80 [8];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_588;
  local_4d8[0] = 0;
  local_518 = 0;
  local_490 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> local_490 == 0; local_490 = local_490 + -1) {
    }
  }
  local_4d0 = (longlong *)CONCAT44(local_4d0._4_4_,param_3);
  iVar29 = 0x20;
  iVar20 = 0x20;
  if (param_3 != 0) {
    iVar29 = 0x1f - local_490;
  }
  uVar31 = param_3 - 1;
  local_48c = 0x1f;
  if (uVar31 != 0) {
    for (; uVar31 >> local_48c == 0; local_48c = local_48c + -1) {
    }
  }
  if (uVar31 != 0) {
    iVar20 = 0x1f - local_48c;
  }
  local_510 = (0x20U - iVar20 & ~((iVar29 << 0x1a) >> 0x1f)) + 1;
  local_4c0 = param_2;
  local_4b0 = param_1;
  local_4a8 = param_4;
  lVar8 = FSceneRenderTargets::Get(param_1);
  plVar25 = (longlong *)(*(longlong *)(lVar8 + 0x170) + 8);
  local_3f8 = 0;
  plStack_3f0 = (longlong *)0x0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = (longlong *)0x0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3ac = 0x26;
  local_3a4[0] = 0;
  local_3a4[1] = 0;
  local_3a4[2] = 0;
  local_3a4[3] = 0;
  local_3a4[4] = 0;
  local_3a4[5] = 0;
  local_3a4[6] = 0;
  local_3a4[7] = 0;
  local_3a4[8] = 0;
  local_3a4[9] = 0;
  local_3a4[10] = 0;
  local_3a4[0xb] = 0;
  local_3a4[0xc] = 0;
  local_3a4[0xd] = 0;
  local_3a4[0xe] = 0;
  stack0xfffffffffffffc98 = 0;
  local_360 = 0;
  local_358 = 0;
  local_354 = 0;
  local_34c = 0;
  local_344 = 0;
  local_4e8 = plVar25;
  uStack_3c0 = FUN_140985530();
  local_3b8 = FUN_1409853f0();
  local_3c8 = FUN_141b9e240();
  puVar32 = (ulonglong *)(param_1 + 0x30);
  local_480 = *plVar25;
  plVar22 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar24 = plVar22 + 1;
  if (*(longlong **)(param_1 + 0x38) < plVar24) {
    FMemStackBase::AllocateNewChunk(puVar32);
    plVar22 = (longlong *)(*puVar32 + 7 & 0xfffffffffffffff8);
    plVar24 = plVar22 + 1;
  }
  *puVar32 = (ulonglong)plVar24;
  *plVar22 = local_480;
  puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar32);
    puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 5;
  }
  *puVar32 = (ulonglong)puVar15;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  *(undefined4 *)(puVar16 + 2) = 1;
  *(undefined4 *)(puVar16 + 4) = 1;
  puVar16[3] = plVar22;
  local_50c = 0;
  fVar35 = (float)(int)param_3;
  local_4f0 = local_4e0;
  plVar24 = local_4e0;
  local_4b8 = (longlong)param_2;
  do {
    plVar22 = local_4f0;
    local_338[0] = *plVar25;
    uVar21 = 0;
    local_258 = 0xffffffffffffffff;
    uStack_250 = 0xffffffffffffffff;
    local_248 = 0xffffffffffffffff;
    uStack_240 = 0xffffffff;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_260 = 0;
    local_25c = 0xffffffff;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0xffffffff;
    local_224 = 0;
    local_220 = 0;
    local_1e8 = 0;
    local_338[1] = 0;
    local_324 = 0x500;
    local_278 = 0;
    local_268 = 0;
    local_264 = 0;
    local_1e0[0] = 1 < *(uint *)(local_338[0] + 0x38);
    local_328 = local_50c;
    _guard_xfg_dispatch_icall_nop(local_320,0,0xa8);
    uVar23 = *puVar32 + 1 & 0xfffffffffffffffe;
    uVar12 = uVar23 + 0x3c;
    if (puVar32[1] < uVar12) {
      FMemStackBase::AllocateNewChunk(puVar32,0x3e);
      uVar23 = *puVar32 + 1 & 0xfffffffffffffffe;
      uVar12 = uVar23 + 0x3c;
    }
    *puVar32 = uVar12;
    pwVar17 = L"FilterReflectionEnvironmentRP";
    do {
      wVar2 = *pwVar17;
      *(wchar_t *)((uVar23 - 0x144e35c28) + (longlong)pwVar17) = wVar2;
      pwVar17 = pwVar17 + 1;
    } while (wVar2 != L'\0');
    uVar18 = *puVar32 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar18 + 0x178;
    if (puVar32[1] < uVar12) {
      FMemStackBase::AllocateNewChunk(puVar32,0x180);
      uVar18 = *puVar32 + 7 & 0xfffffffffffffff8;
      uVar12 = uVar18 + 0x178;
    }
    *puVar32 = uVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(ulonglong **)(param_1 + 8) = uVar18;
    *(ulonglong *)(param_1 + 8) = uVar18 + 8;
    FUN_140499730(uVar18,local_338,uVar23);
    *(undefined1 *)(param_1 + 0x1ac) = 1;
    FUN_14049c2a0(param_1,local_338);
    uVar31 = *(uint *)(param_1 + 0x98);
    *(undefined1 *)(param_1 + 0x1ac) = 1;
    iVar29 = 0;
    uVar12 = uVar21;
    if (uVar31 != 0) {
      do {
        lVar8 = *(longlong *)(param_1 + 0xa0 + uVar12 * 0x18);
        if (lVar8 == 0) {
          local_3a4[uVar12] = 0;
        }
        else {
          local_3a4[uVar12] = *(int *)(lVar8 + 0x3c);
          local_3a4[uVar12 + 8] = *(int *)(lVar8 + 0x40);
        }
        auStack_364[uVar12] = *(undefined1 *)(param_1 + 0xb0 + uVar12 * 0x18);
        *(undefined1 *)((longlong)&local_360 + uVar12 + 4) =
             *(undefined1 *)(param_1 + 0xb1 + uVar12 * 0x18);
        if (local_3a4[uVar12] != 0) {
          local_344 = CONCAT22(local_344._2_2_,*(undefined2 *)(lVar8 + 0x38));
        }
        uVar26 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar26;
      } while (uVar26 < uVar31);
    }
    lVar8 = *(longlong *)(param_1 + 0x160);
    if (lVar8 == 0) {
      local_354 = local_354 & 0xffffffff00000000;
    }
    else {
      iVar29 = *(int *)(lVar8 + 0x3c);
      local_354 = *(ulonglong *)(lVar8 + 0x3c);
    }
    local_34c = *(undefined8 *)(param_1 + 0x168);
    if (iVar29 != 0) {
      local_344 = CONCAT22(local_344._2_2_,*(undefined2 *)(lVar8 + 0x38));
    }
    puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
    local_500 = (longlong *)CONCAT44(param_3,param_3);
    puVar15 = puVar16 + 5;
    local_3ac._4_4_ = uVar31;
    if ((undefined8 *)puVar32[1] < puVar15) {
      FMemStackBase::AllocateNewChunk(puVar32,0x30);
      puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 5;
    }
    lVar8 = local_4b8;
    *puVar32 = (ulonglong)puVar15;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    local_458 = 0;
    **(undefined8 **)(param_1 + 8) = puVar16;
    *(undefined8 **)(param_1 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f59420;
    local_460 = &DAT_146b09c50;
    puVar16[2] = 0;
    *(undefined4 *)(puVar16 + 3) = 0;
    *(uint *)((longlong)puVar16 + 0x1c) = param_3;
    *(uint *)(puVar16 + 4) = param_3;
    *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
    lVar9 = FUN_1419ef210((&DAT_1464c9c48)[local_4b8]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x38,&local_4c8,&local_460);
    if (local_4c8 != -1) {
      uVar21 = (longlong)local_4c8 * 0x20 + *(longlong *)(lVar9 + 0x38);
    }
    local_448 = 0;
    plVar25 = (longlong *)(uVar21 + 0x10);
    local_450 = &DAT_1469f8530;
    if (uVar21 == 0) {
      plVar25 = (longlong *)0x0;
    }
    lVar9 = *plVar25;
    lVar8 = FUN_1419ef210((&DAT_1464c9c48)[lVar8]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_4c4);
    if (local_4c4 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)local_4c4 * 0x20 + *(longlong *)(lVar8 + 0x38);
    }
    plVar14 = (longlong *)0x0;
    plVar25 = (longlong *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      plVar25 = plVar14;
    }
    plVar25 = (longlong *)*plVar25;
    local_3f8 = DAT_1464c2720;
    if (lVar9 == 0) {
      local_518 = local_518 | 1;
      local_4f0 = (longlong *)0x0;
      plVar22 = plVar14;
    }
    else {
      lVar8 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1419f3850(lVar8);
      }
      plVar14 = *(longlong **)(lVar8 + 0x38);
    }
    uVar31 = local_518;
    plStack_3f0 = plVar14;
    if (((local_518 & 1) != 0) &&
       (uVar31 = local_518 & 0xfffffffe, local_518 = uVar31, plVar22 != (longlong *)0x0)) {
      LOCK();
      plVar14 = plVar22 + 1;
      lVar8 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        if (((char)plVar22[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')
            ))) {
          LOCK();
          bVar34 = *(int *)((longlong)plVar22 + 0xc) == 0;
          if (bVar34) {
            *(int *)((longlong)plVar22 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar34) {
            uVar26 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar26 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = (&DAT_1468a81f8)[uVar26 >> 0xe] + (ulonglong)(uVar26 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar8 + 8) = plVar22;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar22)(plVar22,1);
        }
      }
    }
    if (plVar25 == (longlong *)0x0) {
      local_518 = uVar31 | 2;
      local_3d8 = (longlong *)0x0;
      plVar24 = local_3d8;
    }
    else {
      lVar8 = plVar25[9];
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1419f3850(lVar8);
      }
      local_3d8 = *(longlong **)(lVar8 + 0x40);
    }
    if (((local_518 & 2) != 0) && (local_518 = local_518 & 0xfffffffd, plVar24 != (longlong *)0x0))
    {
      LOCK();
      plVar22 = plVar24 + 1;
      lVar8 = *plVar22;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        if (((char)plVar24[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')
            ))) {
          LOCK();
          bVar34 = *(int *)((longlong)plVar24 + 0xc) == 0;
          if (bVar34) {
            *(int *)((longlong)plVar24 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar34) {
            uVar31 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar31 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = (&DAT_1468a81f8)[uVar31 >> 0xe] + (ulonglong)(uVar31 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar8 + 8) = plVar24;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar24)(plVar24,1);
        }
      }
    }
    local_3ac = (ulonglong)local_3ac._4_4_ << 0x20;
    FUN_141ed6ac0(param_1,&local_3f8,2,1);
    local_420 = _DAT_1464aa6e0;
    uStack_418 = _DAT_1464aa6e8;
    (**(code **)(*plVar25 + 0x30))(plVar25,param_1,&local_420,1);
    local_520 = 1;
    local_528 = 0;
    local_538 = local_500;
    local_550 = (float)(int)param_3;
    local_540 = CONCAT44(param_3,param_3);
    local_548 = (float)(int)param_3;
    local_558 = 0;
    local_560 = 0;
    local_568 = CONCAT44(local_568._4_4_,fVar35);
    local_530 = lVar9;
    local_4f8 = param_3;
    uStack_4f4 = param_3;
    DrawRectangle(param_1);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 2;
    if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar16 + 2;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar15;
    puVar30 = local_1e0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    lVar8 = 8;
    **(undefined8 **)(param_1 + 8) = puVar16;
    *(undefined8 **)(param_1 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f59460;
    *(undefined1 *)(param_1 + 0x1ac) = 0;
    do {
      puVar15 = *(undefined8 **)(puVar30 + -8);
      puVar30 = puVar30 + -8;
      lVar8 = lVar8 + -1;
      if (puVar15 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar15 + 1);
        iVar29 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar29 == 1) {
          if ((*(char *)(puVar15 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
            LOCK();
            bVar34 = *(int *)((longlong)puVar15 + 0xc) == 0;
            if (bVar34) {
              *(int *)((longlong)puVar15 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar34) {
              uVar31 = FLockFreeLinkPolicy::AllocLockFreeLink();
              lVar9 = 0;
              if (uVar31 != 0) {
                lVar9 = (&DAT_1468a81f8)[uVar31 >> 0xe] + (ulonglong)(uVar31 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar9 + 8) = puVar15;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar15)(puVar15);
          }
        }
      }
      lVar9 = local_4b0;
    } while (lVar8 != 0);
    local_50c = local_50c + 1;
    puVar32 = (ulonglong *)(local_4b0 + 0x30);
    plVar25 = local_4e8;
    param_1 = local_4b0;
    param_3 = (uint)local_4d0;
  } while (local_50c < 6);
  local_478 = *local_4e8;
  plVar25 = (longlong *)(*puVar32 + 7 & 0xfffffffffffffff8);
  plVar24 = plVar25 + 1;
  if (*(longlong **)(local_4b0 + 0x38) < plVar24) {
    FMemStackBase::AllocateNewChunk(puVar32);
    plVar25 = (longlong *)(*puVar32 + 7 & 0xfffffffffffffff8);
    plVar24 = plVar25 + 1;
  }
  *puVar32 = (ulonglong)plVar24;
  *plVar25 = local_478;
  puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar16 + 5;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar32);
    puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 5;
  }
  *puVar32 = (ulonglong)puVar15;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar16;
  *(undefined8 **)(lVar9 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *(undefined4 *)(puVar16 + 2) = 1;
  *puVar16 = &PTR_LAB_143f59470;
  puVar16[3] = plVar25;
  *(undefined4 *)(puVar16 + 4) = 0;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  lVar10 = FUN_1419ef210((&DAT_1464c9c48)[local_4b8]);
  FSceneRenderTargets::Get(lVar9);
  lVar8 = FSceneRenderTargets::Get(lVar9);
  lVar8 = *(longlong *)(lVar8 + 0x170);
  lVar33 = lVar8 + 8;
  local_4b0 = lVar33;
  lVar11 = FSceneRenderTargets::Get(lVar9);
  iVar29 = local_4c0;
  plVar24 = (longlong *)(*(longlong *)(lVar11 + 0x178) + 8);
  local_4d0 = plVar24;
  FUN_141d26a60(lVar9,local_4c0,local_510,lVar33);
  if (local_4a8 != 0) {
    local_488 = 0x1f;
    if (DAT_1464c2e40 != 0) {
      for (; DAT_1464c2e40 >> local_488 == 0; local_488 = local_488 + -1) {
      }
    }
    iVar27 = 0x20;
    iVar20 = iVar27;
    if (DAT_1464c2e40 != 0) {
      iVar20 = 0x1f - local_488;
    }
    uVar31 = DAT_1464c2e40 - 1;
    local_484 = 0x1f;
    if (uVar31 != 0) {
      for (; uVar31 >> local_484 == 0; local_484 = local_484 + -1) {
      }
    }
    if (uVar31 != 0) {
      iVar27 = 0x1f - local_484;
    }
    local_470 = *(longlong *)(lVar8 + 0x10);
    if (local_470 != 0) {
      LOCK();
      *(int *)(local_470 + 8) = *(int *)(local_470 + 8) + 1;
      UNLOCK();
    }
    local_568 = local_4a8;
    FUN_141d21c30(lVar9,iVar29,&local_470,
                  (local_510 - (0x20U - iVar27 & ~((iVar20 << 0x1a) >> 0x1f))) + -1);
  }
  uStack_3c0 = FUN_140985530();
  local_3b8 = FUN_1409853f0();
  local_3c8 = FUN_1404a0ce0();
  local_468 = *plVar24;
  plVar22 = (longlong *)(*puVar32 + 7 & 0xfffffffffffffff8);
  plVar25 = plVar22 + 1;
  if (*(longlong **)(lVar9 + 0x38) < plVar25) {
    FMemStackBase::AllocateNewChunk(puVar32,0x10);
    plVar22 = (longlong *)(*puVar32 + 7 & 0xfffffffffffffff8);
    plVar25 = plVar22 + 1;
  }
  *puVar32 = (ulonglong)plVar25;
  *plVar22 = local_468;
  puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar16 + 5;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar32,0x30);
    puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 5;
  }
  *puVar32 = (ulonglong)puVar15;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  local_508 = 0;
  **(undefined8 **)(lVar9 + 8) = puVar16;
  *(undefined8 **)(lVar9 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = plVar22;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  if (0 < local_510) {
    local_500 = (longlong *)(lVar10 + 0x38);
    plVar25 = local_4e0;
    plVar22 = local_4e0;
    do {
      local_504 = 0;
      local_50c = 1 << (((char)local_510 - (char)local_508) - 1U & 0x1f);
      fVar35 = (float)(int)local_50c;
      plVar24 = plVar22;
      do {
        plVar22 = local_500;
        uVar31 = local_50c;
        puVar32 = (ulonglong *)(lVar9 + 0x30);
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0xffffffffffffffff;
        local_e8 = 0xffffffffffffffff;
        uStack_e0 = 0xffffffff;
        local_100 = 0;
        local_1d8[0] = *local_4d0;
        local_c4 = 0;
        local_c0 = 0;
        local_88 = 0;
        local_1d8[1] = 0;
        local_1c4 = (undefined1)local_508;
        local_118 = 0;
        local_104 = 0;
        local_fc = 0xffffffff;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_1c3 = 1;
        local_108 = 0;
        local_80[0] = 1 < *(uint *)(local_1d8[0] + 0x38);
        local_1c8 = local_504;
        _guard_xfg_dispatch_icall_nop(local_1c0,0,0xa8);
        uVar21 = *puVar32 + 1 & 0xfffffffffffffffe;
        uVar12 = uVar21 + 0x20;
        if (*(ulonglong *)(lVar9 + 0x38) < uVar12) {
          FMemStackBase::AllocateNewChunk(puVar32,0x22);
          uVar21 = *puVar32 + 1 & 0xfffffffffffffffe;
          uVar12 = uVar21 + 0x20;
        }
        *puVar32 = uVar12;
        pwVar17 = L"FilterCubeMapRP";
        do {
          wVar2 = *pwVar17;
          *(wchar_t *)((uVar21 - 0x144e35a08) + (longlong)pwVar17) = wVar2;
          pwVar17 = pwVar17 + 1;
        } while (wVar2 != L'\0');
        uVar23 = *puVar32 + 7 & 0xfffffffffffffff8;
        uVar12 = uVar23 + 0x178;
        if (*(ulonglong *)(lVar9 + 0x38) < uVar12) {
          FMemStackBase::AllocateNewChunk(puVar32,0x180);
          uVar23 = *puVar32 + 7 & 0xfffffffffffffff8;
          uVar12 = uVar23 + 0x178;
        }
        *puVar32 = uVar12;
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        **(ulonglong **)(lVar9 + 8) = uVar23;
        *(ulonglong *)(lVar9 + 8) = uVar23 + 8;
        FUN_140499730(uVar23,local_1d8,uVar21);
        *(undefined1 *)(lVar9 + 0x1ac) = 1;
        FUN_14049c2a0(lVar9,local_1d8);
        uVar26 = *(uint *)(lVar9 + 0x98);
        uVar12 = 0;
        *(undefined1 *)(lVar9 + 0x1ac) = 1;
        iVar29 = 0;
        if (uVar26 != 0) {
          do {
            lVar8 = *(longlong *)(lVar9 + 0xa0 + uVar12 * 0x18);
            if (lVar8 == 0) {
              local_3a4[uVar12] = 0;
            }
            else {
              local_3a4[uVar12] = *(int *)(lVar8 + 0x3c);
              local_3a4[uVar12 + 8] = *(int *)(lVar8 + 0x40);
            }
            auStack_364[uVar12] = *(undefined1 *)(lVar9 + 0xb0 + uVar12 * 0x18);
            *(undefined1 *)((longlong)&local_360 + uVar12 + 4) =
                 *(undefined1 *)(lVar9 + 0xb1 + uVar12 * 0x18);
            if (local_3a4[uVar12] != 0) {
              local_344 = CONCAT22(local_344._2_2_,*(undefined2 *)(lVar8 + 0x38));
            }
            uVar28 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar28;
          } while (uVar28 < uVar26);
        }
        lVar8 = *(longlong *)(lVar9 + 0x160);
        if (lVar8 == 0) {
          local_354 = local_354 & 0xffffffff00000000;
        }
        else {
          iVar29 = *(int *)(lVar8 + 0x3c);
          local_354 = *(ulonglong *)(lVar8 + 0x3c);
        }
        local_34c = *(undefined8 *)(lVar9 + 0x168);
        if (iVar29 != 0) {
          local_344 = CONCAT22(local_344._2_2_,*(undefined2 *)(lVar8 + 0x38));
        }
        puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar16 + 5;
        local_3ac._4_4_ = uVar26;
        if (*(undefined8 **)(lVar9 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(puVar32,0x30);
          puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar16 + 5;
        }
        lVar8 = local_4b8;
        *puVar32 = (ulonglong)puVar15;
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        local_438 = 0;
        **(undefined8 **)(lVar9 + 8) = puVar16;
        *(undefined8 **)(lVar9 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f59420;
        local_440 = &DAT_146b09c50;
        puVar16[2] = 0;
        *(undefined4 *)(puVar16 + 3) = 0;
        *(uint *)((longlong)puVar16 + 0x1c) = uVar31;
        *(uint *)(puVar16 + 4) = uVar31;
        *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
        lVar10 = FUN_1419ef210((&DAT_1464c9c48)[local_4b8]);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar10 + 0x38,&local_4bc,&local_440);
        if (local_4bc == -1) {
          lVar10 = 0;
        }
        else {
          lVar10 = (longlong)local_4bc * 0x20 + *(longlong *)(lVar10 + 0x38);
        }
        plVar14 = (longlong *)0x0;
        plVar19 = (longlong *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          plVar19 = plVar14;
        }
        lVar10 = *plVar19;
        FUN_1419ef210((&DAT_1464c9c48)[lVar8]);
        local_428 = 0;
        local_430 = &DAT_146a83980;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar22,local_4d8,&local_430);
        plVar19 = plVar14;
        if (local_4d8[0] != -1) {
          plVar19 = (longlong *)((longlong)local_4d8[0] * 0x20 + *plVar22);
        }
        plVar13 = plVar19 + 2;
        if (plVar19 == (longlong *)0x0) {
          plVar13 = plVar14;
        }
        plVar13 = (longlong *)*plVar13;
        local_3f8 = DAT_1464c2720;
        local_4e8 = plVar13;
        if (lVar10 == 0) {
          local_518 = local_518 | 4;
          plVar25 = plVar14;
        }
        else {
          lVar8 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar8 + 0x28) == '\0') {
            FUN_1419f3850(lVar8);
          }
          plVar14 = *(longlong **)(lVar8 + 0x38);
        }
        plVar22 = (longlong *)0x0;
        uVar31 = local_518;
        plStack_3f0 = plVar14;
        if (((local_518 & 4) != 0) &&
           (uVar31 = local_518 & 0xfffffffb, local_518 = uVar31, plVar25 != (longlong *)0x0)) {
          LOCK();
          plVar14 = plVar25 + 1;
          lVar8 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            if (((char)plVar25[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar34 = *(int *)((longlong)plVar25 + 0xc) == 0;
              if (bVar34) {
                *(int *)((longlong)plVar25 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar34) {
                uVar26 = FLockFreeLinkPolicy::AllocLockFreeLink();
                plVar14 = plVar22;
                if (uVar26 != 0) {
                  plVar14 = (longlong *)
                            ((&DAT_1468a81f8)[uVar26 >> 0xe] + (ulonglong)(uVar26 & 0x3fff) * 0x18);
                }
                plVar14[1] = (longlong)plVar25;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar25)(plVar25,1);
            }
          }
        }
        if (plVar13 == (longlong *)0x0) {
          uVar31 = uVar31 | 8;
          local_3d8 = (longlong *)0x0;
          local_518 = uVar31;
        }
        else {
          lVar8 = plVar13[9];
          if (*(char *)(lVar8 + 0x28) == '\0') {
            FUN_1419f3850(lVar8);
          }
          local_3d8 = *(longlong **)(lVar8 + 0x40);
          plVar22 = plVar24;
        }
        lVar8 = 0;
        if (((uVar31 & 8) != 0) && (local_518 = uVar31 & 0xfffffff7, plVar22 != (longlong *)0x0)) {
          LOCK();
          plVar24 = plVar22 + 1;
          lVar11 = *plVar24;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            if (((char)plVar22[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar34 = *(int *)((longlong)plVar22 + 0xc) == 0;
              if (bVar34) {
                *(int *)((longlong)plVar22 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar34) {
                uVar31 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar31 != 0) {
                  lVar8 = (&DAT_1468a81f8)[uVar31 >> 0xe] + (ulonglong)(uVar31 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar8 + 8) = plVar22;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar22)(plVar22,1);
            }
          }
        }
        local_3ac = (ulonglong)local_3ac._4_4_ << 0x20;
        FUN_141ed6ac0(lVar9,&local_3f8,2,1);
        lVar8 = plVar13[9];
        if (*(char *)(lVar8 + 0x28) == '\0') {
          FUN_1419f3850(lVar8);
        }
        uVar4 = *(undefined8 *)(lVar8 + 0x40);
        local_568 = local_568 & 0xffffffff00000000;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (lVar9,uVar4,plVar13 + 0x18,&local_504);
        local_568 = local_568 & 0xffffffff00000000;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (lVar9,uVar4,(longlong)plVar13 + 0xc6,&local_508);
        local_568 = local_568 & 0xffffffff00000000;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (lVar9,uVar4,(longlong)plVar13 + 0xcc);
        local_4a8 = *(ulonglong *)(local_4b0 + 8);
        if (DAT_146a1c3a0 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar7 = IsInRenderingThread();
            if (cVar7 == '\0') {
              FScopedEvent::FScopedEvent(local_4a0);
              plVar24 = (longlong *)FUN_14049e3d0(local_410,0,0xff);
              lVar8 = *plVar24;
              *(undefined1 **)(lVar8 + 0x10) = &LAB_141b33e90;
              *(undefined1 **)(lVar8 + 0x18) = local_4a0;
              lVar8 = *plVar24;
              lVar6 = plVar24[2];
              lVar11 = plVar24[1];
              lVar33 = *(longlong *)(lVar8 + 0x28);
              piVar1 = (int *)(lVar33 + 0x48);
              if (lVar33 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_498 = lVar33;
              FUN_1404a4fe0(lVar8,lVar11,(int)lVar6);
              if (lVar33 != 0) {
                LOCK();
                iVar29 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar29 == 1) {
                  FGraphEvent::Recycle(local_498);
                }
              }
              FScopedEvent::~FScopedEvent(local_4a0);
            }
            else {
              lVar8 = operator_new(0x38);
              if (lVar8 == 0) {
                DAT_146a1c3a0 = 0;
              }
              else {
                DAT_146a1c3a0 =
                     TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar8);
              }
            }
          }
          else {
            lVar8 = operator_new(0x38);
            if (lVar8 == 0) {
              LOCK();
              if (DAT_146a1c3a0 == 0) {
                DAT_146a1c3a0 = 0;
              }
              UNLOCK();
            }
            else {
              lVar8 = TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                      ::FStaticStateResource::FStaticStateResource(lVar8);
              LOCK();
              if (DAT_146a1c3a0 != 0) {
                lVar8 = DAT_146a1c3a0;
              }
              DAT_146a1c3a0 = lVar8;
              UNLOCK();
            }
          }
        }
        uVar5 = *(undefined8 *)(DAT_146a1c3a0 + 0x30);
        if (*(short *)((longlong)local_4e8 + 0xd4) != 0) {
          uVar3 = *(ushort *)((longlong)local_4e8 + 0xd2);
          puVar16 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar16 + 5;
          if (*(undefined8 **)(lVar9 + 0x38) < puVar15) {
            FMemStackBase::AllocateNewChunk((longlong *)(lVar9 + 0x30),0x30);
            puVar16 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar15 = puVar16 + 5;
          }
          *(undefined8 **)(lVar9 + 0x30) = puVar15;
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
          **(undefined8 **)(lVar9 + 8) = puVar16;
          *(undefined8 **)(lVar9 + 8) = puVar16 + 1;
          puVar16[1] = 0;
          *puVar16 = &PTR_LAB_143f59c80;
          puVar16[4] = local_4a8;
          puVar16[2] = uVar4;
          *(uint *)(puVar16 + 3) = (uint)uVar3;
        }
        if ((short)local_4e8[0x1b] != 0) {
          uVar3 = *(ushort *)((longlong)local_4e8 + 0xd6);
          puVar16 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar16 + 5;
          if (*(undefined8 **)(lVar9 + 0x38) < puVar15) {
            FMemStackBase::AllocateNewChunk((longlong *)(lVar9 + 0x30),0x30);
            puVar16 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar15 = puVar16 + 5;
          }
          *(undefined8 **)(lVar9 + 0x30) = puVar15;
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
          **(undefined8 **)(lVar9 + 8) = puVar16;
          *(undefined8 **)(lVar9 + 8) = puVar16 + 1;
          puVar16[1] = 0;
          *puVar16 = &PTR_LAB_143f59c70;
          puVar16[2] = uVar4;
          *(uint *)(puVar16 + 3) = (uint)uVar3;
          puVar16[4] = uVar5;
        }
        local_4f0 = (longlong *)CONCAT44(local_50c,local_50c);
        local_4f8 = local_50c;
        uStack_4f4 = local_50c;
        local_520 = 1;
        local_528 = 0;
        local_538 = local_4f0;
        local_540 = CONCAT44(local_50c,local_50c);
        local_558 = 0;
        local_560 = 0;
        local_568 = CONCAT44(local_568._4_4_,fVar35);
        local_550 = fVar35;
        local_548 = fVar35;
        local_530 = lVar10;
        DrawRectangle(lVar9);
        puVar16 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar16 + 2;
        if (*(undefined8 **)(lVar9 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x18);
          puVar16 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar16 + 2;
        }
        *(undefined8 **)(lVar9 + 0x30) = puVar15;
        puVar30 = local_80;
        lVar8 = 8;
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        **(undefined8 **)(lVar9 + 8) = puVar16;
        *(undefined8 **)(lVar9 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f59460;
        *(undefined1 *)(lVar9 + 0x1ac) = 0;
        do {
          puVar15 = *(undefined8 **)(puVar30 + -8);
          puVar30 = puVar30 + -8;
          lVar8 = lVar8 + -1;
          if (puVar15 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar15 + 1);
            iVar29 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar29 == 1) {
              if ((*(char *)(puVar15 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                LOCK();
                bVar34 = *(int *)((longlong)puVar15 + 0xc) == 0;
                if (bVar34) {
                  *(int *)((longlong)puVar15 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar34) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar15);
                }
              }
              else {
                (**(code **)*puVar15)(puVar15,1);
              }
            }
          }
        } while (lVar8 != 0);
        local_504 = local_504 + 1;
        plVar24 = plVar22;
      } while (local_504 < 6);
      local_508 = local_508 + 1;
      plVar24 = local_4d0;
    } while (local_508 < local_510);
  }
  puVar32 = (ulonglong *)(lVar9 + 0x30);
  local_4e0 = (longlong *)*plVar24;
  plVar25 = (longlong *)(*puVar32 + 7 & 0xfffffffffffffff8);
  plVar24 = plVar25 + 1;
  if (*(longlong **)(lVar9 + 0x38) < plVar24) {
    FMemStackBase::AllocateNewChunk(puVar32);
    plVar25 = (longlong *)(*puVar32 + 7 & 0xfffffffffffffff8);
    plVar24 = plVar25 + 1;
  }
  *puVar32 = (ulonglong)plVar24;
  *plVar25 = (longlong)local_4e0;
  puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar16 + 5;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar32);
    puVar16 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 5;
  }
  *puVar32 = (ulonglong)puVar15;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar16;
  *(undefined8 **)(lVar9 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *(undefined4 *)(puVar16 + 2) = 1;
  *puVar16 = &PTR_LAB_143f59470;
  puVar16[3] = plVar25;
  *(undefined4 *)(puVar16 + 4) = 0;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  return;
}



// FUNCTION 141d33290 FUN_141d33290 body=962 status=ok
// SIG undefined FUN_141d33290(void)

float * FUN_141d33290(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_98;
  float fStack_94;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x11f0);
  pfVar6 = (float *)0x0;
  fVar11 = 3.4028235e+38;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar16 = fVar3 + param_2[5];
  fVar13 = fVar3 - param_2[5];
  fVar14 = fVar1 + param_2[3];
  fVar15 = fVar2 + param_2[4];
  fVar17 = fVar1 - param_2[3];
  fVar12 = fVar2 - param_2[4];
  pfVar9 = pfVar6;
  if (3 < lVar8) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x11e8) + 0x10);
    lVar7 = (lVar8 - 4U >> 2) + 1;
    pfVar9 = (float *)(lVar7 * 4);
    do {
      pfVar4 = (float *)plVar5[-2];
      if ((((fVar17 <= pfVar4[3]) && (*pfVar4 <= fVar14)) &&
          (local_98 = (float)*(undefined8 *)(pfVar4 + 4), fVar12 <= local_98)) &&
         (((pfVar4[1] <= fVar15 &&
           (fStack_94 = (float)((ulonglong)*(undefined8 *)(pfVar4 + 4) >> 0x20), fVar13 <= fStack_94
           )) && ((pfVar4[2] <= fVar16 &&
                  (fVar10 = ABS((fVar2 * pfVar4[9] + fVar1 * pfVar4[8] + fVar3 * pfVar4[10]) -
                                pfVar4[0xb]), fVar10 < fVar11)))))) {
        pfVar6 = pfVar4;
        fVar11 = fVar10;
      }
      pfVar4 = (float *)plVar5[-1];
      if (((fVar17 <= pfVar4[3]) && (*pfVar4 <= fVar14)) &&
         (((local_98 = (float)*(undefined8 *)(pfVar4 + 4), fVar12 <= local_98 &&
           (((pfVar4[1] <= fVar15 &&
             (fStack_94 = (float)((ulonglong)*(undefined8 *)(pfVar4 + 4) >> 0x20),
             fVar13 <= fStack_94)) && (pfVar4[2] <= fVar16)))) &&
          (fVar10 = ABS((fVar2 * pfVar4[9] + fVar1 * pfVar4[8] + fVar3 * pfVar4[10]) - pfVar4[0xb]),
          fVar10 < fVar11)))) {
        pfVar6 = pfVar4;
        fVar11 = fVar10;
      }
      pfVar4 = (float *)*plVar5;
      if (((((fVar17 <= pfVar4[3]) && (*pfVar4 <= fVar14)) &&
           ((local_98 = (float)*(undefined8 *)(pfVar4 + 4), fVar12 <= local_98 &&
            ((pfVar4[1] <= fVar15 &&
             (fStack_94 = (float)((ulonglong)*(undefined8 *)(pfVar4 + 4) >> 0x20),
             fVar13 <= fStack_94)))))) && (pfVar4[2] <= fVar16)) &&
         (fVar10 = ABS((fVar2 * pfVar4[9] + fVar1 * pfVar4[8] + fVar3 * pfVar4[10]) - pfVar4[0xb]),
         fVar10 < fVar11)) {
        pfVar6 = pfVar4;
        fVar11 = fVar10;
      }
      pfVar4 = (float *)plVar5[1];
      if (((((fVar17 <= pfVar4[3]) && (*pfVar4 <= fVar14)) &&
           (local_98 = (float)*(undefined8 *)(pfVar4 + 4), fVar12 <= local_98)) &&
          ((pfVar4[1] <= fVar15 &&
           (fStack_94 = (float)((ulonglong)*(undefined8 *)(pfVar4 + 4) >> 0x20), fVar13 <= fStack_94
           )))) && ((pfVar4[2] <= fVar16 &&
                    (fVar10 = ABS((fVar2 * pfVar4[9] + fVar1 * pfVar4[8] + fVar3 * pfVar4[10]) -
                                  pfVar4[0xb]), fVar10 < fVar11)))) {
        pfVar6 = pfVar4;
        fVar11 = fVar10;
      }
      plVar5 = plVar5 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((longlong)pfVar9 < lVar8) {
    lVar8 = lVar8 - (longlong)pfVar9;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x11e8) + (longlong)pfVar9 * 8);
    do {
      pfVar9 = (float *)*plVar5;
      if ((((fVar17 <= pfVar9[3]) && (*pfVar9 <= fVar14)) &&
          ((local_98 = (float)*(undefined8 *)(pfVar9 + 4), fVar12 <= local_98 &&
           (((pfVar9[1] <= fVar15 &&
             (fStack_94 = (float)((ulonglong)*(undefined8 *)(pfVar9 + 4) >> 0x20),
             fVar13 <= fStack_94)) && (pfVar9[2] <= fVar16)))))) &&
         (fVar10 = ABS((fVar2 * pfVar9[9] + fVar1 * pfVar9[8] + fVar3 * pfVar9[10]) - pfVar9[0xb]),
         fVar10 < fVar11)) {
        pfVar6 = pfVar9;
        fVar11 = fVar10;
      }
      plVar5 = plVar5 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return pfVar6;
}



// FUNCTION 141d33660 FUN_141d33660 body=622 status=ok
// SIG undefined FUN_141d33660(void)

undefined8 FUN_141d33660(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar3 = *(int *)(param_1 + 0x1228);
  iVar7 = 0;
  fVar13 = 3.4028235e+38;
  iVar8 = -1;
  if (3 < iVar3) {
    fVar10 = *param_2;
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    pfVar5 = (float *)(*(longlong *)(param_1 + 0x1220) + 8);
    pfVar6 = (float *)(*(longlong *)(param_1 + 0x1220) + 0x14);
    do {
      fVar12 = (pfVar5[-1] - fVar1) * (pfVar5[-1] - fVar1) +
               (pfVar5[-2] - fVar10) * (pfVar5[-2] - fVar10) + (*pfVar5 - fVar2) * (*pfVar5 - fVar2)
      ;
      iVar4 = iVar7;
      if (fVar13 <= fVar12) {
        fVar12 = fVar13;
        iVar4 = iVar8;
      }
      fVar11 = (pfVar6[-1] - fVar1) * (pfVar6[-1] - fVar1) +
               (pfVar5[1] - fVar10) * (pfVar5[1] - fVar10) + (*pfVar6 - fVar2) * (*pfVar6 - fVar2);
      fVar13 = fVar11;
      if (fVar12 <= fVar11) {
        fVar13 = fVar12;
      }
      fVar9 = (pfVar6[2] - fVar1) * (pfVar6[2] - fVar1) +
              (pfVar5[4] - fVar10) * (pfVar5[4] - fVar10) +
              (pfVar6[3] - fVar2) * (pfVar6[3] - fVar2);
      iVar8 = iVar7 + 1;
      if (fVar12 <= fVar11) {
        iVar8 = iVar4;
      }
      fVar12 = fVar13;
      if (fVar9 <= fVar13) {
        fVar12 = fVar9;
      }
      iVar4 = iVar7 + 2;
      if (fVar13 <= fVar9) {
        iVar4 = iVar8;
      }
      fVar13 = (pfVar6[5] - fVar1) * (pfVar6[5] - fVar1) +
               (pfVar5[7] - fVar10) * (pfVar5[7] - fVar10) +
               (pfVar6[6] - fVar2) * (pfVar6[6] - fVar2);
      iVar8 = iVar7 + 3;
      if (fVar12 <= fVar13) {
        iVar8 = iVar4;
        fVar13 = fVar12;
      }
      pfVar5 = pfVar5 + 0xc;
      pfVar6 = pfVar6 + 0xc;
      iVar7 = iVar7 + 4;
    } while (iVar7 < iVar3 + -3);
  }
  if (iVar7 < iVar3) {
    pfVar5 = (float *)(*(longlong *)(param_1 + 0x1220) + (longlong)iVar7 * 0xc);
    do {
      fVar10 = (pfVar5[1] - param_2[1]) * (pfVar5[1] - param_2[1]) +
               (*pfVar5 - *param_2) * (*pfVar5 - *param_2) +
               (pfVar5[2] - param_2[2]) * (pfVar5[2] - param_2[2]);
      iVar4 = iVar7;
      if (fVar13 <= fVar10) {
        fVar10 = fVar13;
        iVar4 = iVar8;
      }
      iVar8 = iVar4;
      fVar13 = fVar10;
      pfVar5 = pfVar5 + 3;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  if (iVar8 != -1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x1210) + (longlong)iVar8 * 8);
  }
  return 0;
}



// FUNCTION 141d338d0 FUN_141d338d0 body=907 status=ok
// SIG undefined FUN_141d338d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d338d0(longlong param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  int local_70;
  float local_6c;
  undefined8 local_68 [5];
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_40 = *(uint *)(param_1 + 0x1228);
  if (2 < (int)*(uint *)(param_1 + 0x1228)) {
    local_40 = 3;
  }
  uVar21 = (ulonglong)local_40;
  uVar18 = 0;
  local_3c = 0;
  if (0 < (int)local_40) {
    TArray<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,TFixedAllocator<3>_>
    ::ResizeGrow(&local_70,0);
  }
  lVar19 = (longlong)(int)uVar21;
  uVar22 = uVar18;
  uVar12 = uVar18;
  if (3 < lVar19) {
    fVar5 = *param_2;
    pfVar16 = &local_6c;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    pfVar17 = (float *)(*(longlong *)(param_1 + 0x1220) + 8);
    pfVar14 = (float *)(*(longlong *)(param_1 + 0x1220) + 0x14);
    lVar13 = (lVar19 - 4U >> 2) + 1;
    fVar23 = 2.8026e-45;
    uVar12 = lVar13 * 4;
    do {
      pfVar16[-1] = (float)uVar22;
      fVar8 = pfVar17[-2];
      uVar22 = (ulonglong)((int)(float)uVar22 + 4);
      fVar9 = pfVar17[-1];
      fVar10 = *pfVar17;
      pfVar16[3] = (float)((int)fVar23 + -1);
      fVar1 = (float)((int)fVar23 + 1);
      *pfVar16 = (fVar9 - fVar6) * (fVar9 - fVar6) + (fVar8 - fVar5) * (fVar8 - fVar5) +
                 (fVar10 - fVar7) * (fVar10 - fVar7);
      fVar8 = pfVar17[1];
      fVar9 = pfVar14[-1];
      fVar10 = *pfVar14;
      pfVar16[7] = fVar23;
      fVar23 = (float)((int)fVar23 + 4);
      pfVar16[4] = (fVar9 - fVar6) * (fVar9 - fVar6) + (fVar8 - fVar5) * (fVar8 - fVar5) +
                   (fVar10 - fVar7) * (fVar10 - fVar7);
      fVar8 = pfVar17[4];
      fVar9 = pfVar14[2];
      fVar10 = pfVar14[3];
      pfVar16[0xb] = fVar1;
      pfVar16[8] = (fVar9 - fVar6) * (fVar9 - fVar6) + (fVar8 - fVar5) * (fVar8 - fVar5) +
                   (fVar10 - fVar7) * (fVar10 - fVar7);
      pfVar2 = pfVar17 + 7;
      pfVar17 = pfVar17 + 0xc;
      pfVar3 = pfVar14 + 5;
      pfVar4 = pfVar14 + 6;
      pfVar14 = pfVar14 + 0xc;
      pfVar16[0xc] = (*pfVar3 - fVar6) * (*pfVar3 - fVar6) + (*pfVar2 - fVar5) * (*pfVar2 - fVar5) +
                     (*pfVar4 - fVar7) * (*pfVar4 - fVar7);
      pfVar16 = pfVar16 + 0x10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if ((longlong)uVar12 < lVar19) {
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    pfVar14 = (float *)((longlong)local_68 + uVar12 * 0x10 + -4);
    pfVar17 = (float *)(*(longlong *)(param_1 + 0x1220) + uVar12 * 0xc);
    lVar13 = lVar19 - uVar12;
    do {
      pfVar14[-1] = (float)uVar22;
      uVar22 = (ulonglong)((int)(float)uVar22 + 1);
      fVar23 = *pfVar17;
      pfVar16 = pfVar17 + 1;
      pfVar2 = pfVar17 + 2;
      pfVar17 = pfVar17 + 3;
      *pfVar14 = (fVar23 - fVar5) * (fVar23 - fVar5) + (*pfVar16 - fVar6) * (*pfVar16 - fVar6) +
                 (*pfVar2 - fVar7) * (*pfVar2 - fVar7);
      pfVar14 = pfVar14 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (lVar19 < *(int *)(param_1 + 0x1228)) {
    fVar5 = *param_2;
    lVar13 = *(int *)(param_1 + 0x1228) - lVar19;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    pfVar17 = (float *)(*(longlong *)(param_1 + 0x1220) + lVar19 * 0xc);
    do {
      pfVar14 = &local_6c;
      fVar23 = (pfVar17[1] - fVar6) * (pfVar17[1] - fVar6) + (*pfVar17 - fVar5) * (*pfVar17 - fVar5)
               + (pfVar17[2] - fVar7) * (pfVar17[2] - fVar7);
      uVar12 = uVar18;
      do {
        if (fVar23 < *pfVar14) {
          *(float *)((longlong)local_68 + uVar12 * 0x10 + -4) = fVar23;
          (&local_70)[uVar12 * 4] = (int)uVar21;
          break;
        }
        uVar12 = uVar12 + 1;
        pfVar14 = pfVar14 + 4;
      } while ((longlong)uVar12 < 3);
      uVar21 = (ulonglong)((int)uVar21 + 1);
      pfVar17 = pfVar17 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (0 < lVar19) {
    lVar13 = *(longlong *)(param_1 + 0x1210);
    puVar15 = local_68;
    lVar20 = lVar19;
    do {
      *puVar15 = *(undefined8 *)(lVar13 + (longlong)*(int *)(puVar15 + -1) * 8);
      lVar20 = lVar20 + -1;
      puVar15 = puVar15 + 2;
    } while (lVar20 != 0);
  }
  local_78[0] = 0;
  AlgoImpl::
  IntroSortInternal<_FScene::FindClosestReflectionCaptures_::_2_::FReflectionCaptureDistIndex,FIdentityFunctor,TDereferenceWrapper<_FScene::FindClosestReflectionCaptures_::_2_::FReflectionCaptureDistIndex,<lambda_6ddd521d10b67a2a98310523add206df>_>_>
            (&local_70,(longlong)(int)local_40,0,local_78);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (0 < lVar19) {
    puVar15 = local_68;
    do {
      uVar11 = *puVar15;
      puVar15 = puVar15 + 2;
      param_3[uVar18] = uVar11;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < lVar19);
  }
  return;
}



// FUNCTION 141d33c60 FindMBInfoIndex body=128 status=ok
// SIG undefined FindMBInfoIndex(void)

int * FMotionBlurInfoData::FindMBInfoIndex(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      while (piVar4 = (int *)((longlong)iVar1 * 0xc0 + *param_1), *piVar4 != param_2) {
        iVar1 = piVar4[0x2c];
        if (iVar1 == -1) {
          return (int *)0x0;
        }
      }
      if (iVar1 != -1) goto LAB_141d33cd4;
    }
  }
  piVar4 = (int *)0x0;
LAB_141d33cd4:
  piVar3 = piVar4 + 4;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}



// FUNCTION 141d33ce0 FUN_141d33ce0 body=316 status=ok
// SIG undefined FUN_141d33ce0(void)

int FUN_141d33ce0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 *local_48;
  int *local_40;
  int local_38 [8];
  
  local_res10 = param_2;
  TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1308,local_res8,param_2);
  if (((local_res8[0] != -1) &&
      (lVar7 = *(longlong *)(param_1 + 0x1308) + (longlong)local_res8[0] * 0x28, lVar7 != 0)) &&
     (piVar4 = (int *)(lVar7 + 8), piVar4 != (int *)0x0)) {
    return *piVar4;
  }
  iVar6 = 0;
  lVar7 = *(longlong *)(param_1 + 0x1368);
  if (*(longlong *)(param_1 + 0x1368) == 0) {
    lVar7 = param_1 + 0x1358;
  }
  lVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x1370) + 0x1f;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  if (0 < iVar2) {
    do {
      if (*(int *)(lVar7 + lVar5 * 4) != -1) break;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if (iVar6 < iVar2) {
    uVar1 = *(uint *)(lVar7 + (longlong)iVar6 * 4);
    uVar3 = ~uVar1;
    iVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    iVar2 = iVar6 * 0x20 + iVar2;
    if ((iVar2 < *(int *)(param_1 + 0x1370)) &&
       (*(uint *)(lVar7 + (longlong)iVar6 * 4) = uVar1 | -uVar3 & uVar3, iVar2 != -1))
    goto LAB_141d33dc9;
  }
  iVar2 = *(int *)(param_1 + 0x1370);
  TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 0x1358,1);
LAB_141d33dc9:
  local_48 = &local_res10;
  local_40 = local_38;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0x3f800000;
  local_38[0] = iVar2;
  FUN_140a9d5d0(param_1 + 0x1308,local_res8,&local_48,0);
  return iVar2;
}



// FUNCTION 141d33e20 FUN_141d33e20 body=620 status=ok
// SIG undefined FUN_141d33e20(void)

void FUN_141d33e20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar2 = FSceneRenderTargets::Get();
  uVar6 = 0xffffffffffffffff;
  lVar4 = *(longlong *)(lVar2 + 0x178);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 10;
  plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x170) + 8);
  if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
    uVar6 = FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 10;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 **)(param_1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar5 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0xffffffff;
  *(undefined4 *)(puVar5 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0xffffffff;
  puVar5[8] = plVar1;
  puVar5[9] = plVar1;
  lVar2 = (**(code **)(*plVar1 + 8))(uVar6);
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*(longlong *)puVar5[8] + 0x18))();
    if (lVar2 == 0) {
      (**(code **)(*(longlong *)puVar5[8] + 0x20))();
    }
  }
  lVar2 = (**(code **)(*(longlong *)puVar5[9] + 8))();
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*(longlong *)puVar5[9] + 0x18))();
    if (lVar2 == 0) {
      (**(code **)(*(longlong *)puVar5[9] + 0x20))();
    }
  }
  plVar1 = *(longlong **)(lVar4 + 8);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 10;
  if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 10;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 **)(param_1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar5 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar5 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0xffffffff;
  *(undefined4 *)(puVar5 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0xffffffff;
  puVar5[8] = plVar1;
  puVar5[9] = plVar1;
  lVar4 = (**(code **)(*plVar1 + 8))(plVar1);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[8] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[8] + 0x20))();
    }
  }
  lVar4 = (**(code **)(*(longlong *)puVar5[9] + 8))();
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(longlong *)puVar5[9] + 0x18))();
    if (lVar4 == 0) {
      (**(code **)(*(longlong *)puVar5[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141d34090 FUN_141d34090 body=1025 status=ok
// SIG undefined FUN_141d34090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d34332) */
/* WARNING: Removing unreachable block (ram,0x000141d3433f) */
/* WARNING: Removing unreachable block (ram,0x000141d3434b) */

void FUN_141d34090(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_3968 [32];
  undefined1 local_3948;
  undefined4 local_3938;
  undefined4 local_3928;
  longlong local_3920;
  longlong local_3918;
  LARGE_INTEGER local_3910;
  LARGE_INTEGER local_3908;
  undefined8 local_3900;
  undefined4 local_38f8;
  undefined8 local_38f0;
  undefined4 local_38e8;
  undefined8 local_38e4;
  undefined4 local_38dc;
  undefined1 local_38d8;
  undefined8 local_38c8;
  undefined8 uStack_38c0;
  undefined8 local_38b8;
  undefined8 uStack_38b0;
  undefined8 local_38a8;
  undefined8 uStack_38a0;
  undefined8 local_3898;
  undefined8 uStack_3890;
  undefined4 local_3888;
  undefined4 uStack_3884;
  undefined4 uStack_3880;
  undefined4 uStack_387c;
  undefined4 local_3878;
  undefined4 uStack_3874;
  undefined4 uStack_3870;
  undefined4 uStack_386c;
  undefined8 local_3868;
  undefined8 uStack_3860;
  undefined8 local_3858;
  undefined8 uStack_3850;
  undefined8 local_3848;
  undefined4 local_3840;
  undefined8 local_3838;
  undefined8 uStack_3830;
  undefined8 local_3828;
  undefined8 uStack_3820;
  undefined8 local_3818;
  undefined8 uStack_3810;
  undefined8 local_3808;
  undefined8 uStack_3800;
  undefined4 local_37f8;
  undefined4 uStack_37f4;
  undefined4 uStack_37f0;
  undefined4 uStack_37ec;
  undefined4 local_37e8;
  undefined4 uStack_37e4;
  undefined4 uStack_37e0;
  undefined4 uStack_37dc;
  undefined8 local_37d8;
  undefined8 uStack_37d0;
  undefined8 local_37c8;
  undefined8 uStack_37c0;
  undefined8 local_3728;
  undefined8 uStack_3720;
  undefined8 local_3718;
  undefined8 uStack_3710;
  undefined1 local_36a0 [64];
  longlong local_3660;
  undefined4 local_3658;
  undefined1 local_3650 [64];
  longlong local_3610;
  undefined4 local_3608;
  char local_3600;
  undefined1 local_3588 [6816];
  undefined4 local_1ae8;
  undefined8 local_1ae0;
  undefined1 local_1ad8 [6816];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3968;
  puVar8 = (undefined8 *)0x0;
  local_3938 = 0;
  FUN_141d11d10(&local_3848);
  local_38f0 = 0xca000000ca000000;
  local_38e4 = 0x4a0000004a000000;
  local_3728 = 0;
  uStack_3720 = 0x100000001;
  local_3718 = 0;
  uStack_3710 = 0x100000001;
  local_3848 = 0;
  local_38e8 = 0xca000000;
  local_3898 = 0;
  uStack_3890 = 0x3f80000000000000;
  local_3808 = 0;
  uStack_3800 = 0x3f80000000000000;
  local_38c8 = 0x3f800000;
  uStack_38c0 = 0;
  local_38b8 = 0xbf80000000000000;
  uStack_38b0 = 0;
  local_38a8 = 0;
  uStack_38a0 = 0xbf800000;
  local_3838 = 0x3f800000;
  uStack_3830 = 0;
  local_3828 = 0xbf80000000000000;
  uStack_3820 = 0;
  local_3818 = 0;
  uStack_3810 = 0xbf800000;
  local_38f8 = 0x4a000000;
  local_38dc = 0x4a000000;
  local_3858 = 0;
  uStack_3850 = 0x3f8000003f000000;
  local_37c8 = 0;
  uStack_37c0 = 0x3f8000003f000000;
  local_38d8 = 1;
  local_3928 = 0;
  local_3840 = 0;
  local_3888 = 0x35000000;
  uStack_3884 = 0;
  uStack_3880 = 0;
  uStack_387c = 0;
  local_3878 = 0;
  uStack_3874 = 0x35000000;
  uStack_3870 = 0;
  uStack_386c = 0;
  local_3868 = 0;
  uStack_3860 = 0xb4800000;
  local_37f8 = 0x35000000;
  uStack_37f4 = 0;
  uStack_37f0 = 0;
  uStack_37ec = 0;
  local_37e8 = 0;
  uStack_37e4 = 0x35000000;
  uStack_37e0 = 0;
  uStack_37dc = 0;
  local_37d8 = 0;
  uStack_37d0 = 0xb4800000;
  FUN_142742170(local_1ad8,&local_3848);
  FUN_141ee24f0(0);
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    FUN_141d112b0(local_3588,local_1ad8);
    local_1ae8 = param_3;
    local_1ae0 = param_2;
    uVar6 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_3908);
    local_3948 = 0;
    FUN_141b6af70(uVar6,local_1ae0,local_3588,local_1ae8);
    QueryPerformanceCounter(&local_3910);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_3910.s.LowPart - local_3908._0_4_);
    FUN_142745bf0(local_3588);
  }
  else {
    puVar7 = (undefined8 *)operator_new(0x1ad0);
    puVar9 = puVar8;
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar7 + 1) = 0xff;
      *puVar7 = &PTR_FUN_143f3edd8;
      local_3900 = 0;
      local_3920 = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
      *(undefined1 *)(puVar7 + 0x358) = 0;
      puVar8 = (undefined8 *)&DAT_00000004;
      *puVar7 = &PTR_FUN_144e48650;
      puVar7[0x359] = 0;
      puVar9 = puVar7;
    }
    if ((puVar8 != (undefined8 *)0x0) && (local_3920 != 0)) {
      LOCK();
      piVar1 = (int *)(local_3920 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_3920);
      }
    }
    FUN_141d112b0(puVar9 + 2,local_1ad8);
    puVar9[0x357] = param_2;
    *(undefined4 *)(puVar9 + 0x356) = param_3;
    lVar3 = puVar9[0x359];
    piVar1 = (int *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_3918 = lVar3;
    FUN_141d4ec90(puVar9,0,0xff,1);
    if (lVar3 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_3918);
      }
    }
  }
  FUN_141ee24f0(0);
  FUN_142745bf0(local_1ad8);
  if (local_3600 != '\0') {
    local_3600 = '\0';
    local_3608 = 0;
    if (local_3610 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_3650);
  }
  local_3658 = 0;
  if (local_3660 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_36a0);
  return;
}



// FUNCTION 141d344a0 FUN_141d344a0 body=1230 status=ok
// SIG undefined FUN_141d344a0(void)

void FUN_141d344a0(ulonglong param_1,longlong param_2,longlong *param_3,int *param_4,int *param_5,
                  float *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  ulonglong local_res8;
  int local_res10 [2];
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int iStack_bc;
  undefined8 local_b8;
  int iStack_b0;
  int iStack_ac;
  
  piVar11 = param_5;
  iVar5 = *(int *)(param_2 + 0x1218);
  *(undefined4 *)(param_3 + 1) = 0;
  local_res8 = param_1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_3);
  }
  uVar16 = 0;
  *param_4 = 0;
  *param_5 = 0;
  lVar8 = *(longlong *)(local_res8 + 0x10);
  *param_6 = 1000.0;
  if (((*(uint *)(lVar8 + 0x28) & 0x2000000) != 0) &&
     (param_5._0_4_ = 0, uVar15 = local_res8, uVar18 = uVar16, 0 < *(int *)(param_2 + 0x1218))) {
    do {
      if (0x154 < (int)param_3[1]) break;
      local_d8 = 0;
      uStack_d0 = 0x3f80000000000000;
      iStack_144 = -1;
      iStack_bc = 0x3f800000;
      puVar14 = *(undefined8 **)(uVar16 + *(longlong *)(param_2 + 0x1210));
      uVar1 = *(undefined4 *)(puVar14 + 7);
      uVar2 = *(undefined4 *)((longlong)puVar14 + 0x3c);
      uVar3 = *(undefined4 *)(puVar14 + 8);
      uVar17 = (uint)uVar18;
      if (2 < *(int *)(param_2 + 8)) {
        TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
        ::FindId(param_2 + 0x1308,local_res10,*puVar14);
        piVar13 = (int *)0x0;
        if (local_res10[0] != -1) {
          piVar13 = (int *)(*(longlong *)(param_2 + 0x1308) + (longlong)local_res10[0] * 0x28);
        }
        piVar12 = piVar13 + 2;
        if (piVar13 == (int *)0x0) {
          piVar12 = (int *)0x0;
        }
        uVar15 = local_res8;
        uVar17 = (uint)param_5;
        if (piVar12 == (int *)0x0) {
          iStack_144 = 0;
          local_b8 = 0x3f800000;
          iStack_b0 = 0;
          iStack_ac = 0x3f800000;
        }
        else {
          iStack_bc = piVar12[1];
          iStack_b0 = piVar12[3];
          iStack_144 = *piVar12;
          local_b8 = *(undefined8 *)(piVar12 + 1);
          iStack_ac = piVar12[4];
        }
      }
      uVar6 = *(undefined4 *)((longlong)puVar14 + 0x34);
      uVar9 = puVar14[4];
      uVar10 = puVar14[5];
      uVar4 = *(undefined4 *)(puVar14 + 6);
      iVar5 = *(int *)((longlong)puVar14 + 0x1c);
      if (iVar5 == 2) {
        *param_4 = *param_4 + 1;
        local_108 = puVar14[0x16];
        uStack_100 = puVar14[0x17];
        local_118 = puVar14[0x14];
        uStack_110 = puVar14[0x15];
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0x3f80000000000000;
      }
      else if (iVar5 == 0) {
        *piVar11 = *piVar11 + 1;
      }
      else {
        *param_4 = *param_4 + 1;
        local_118 = puVar14[10];
        uStack_110 = puVar14[0xb];
        local_108 = puVar14[0xc];
        uStack_100 = puVar14[0xd];
        local_f8 = puVar14[0xe];
        uStack_f0 = puVar14[0xf];
        local_e8 = puVar14[0x10];
        uStack_e0 = puVar14[0x11];
        local_d8 = puVar14[0x12];
        uStack_d0 = puVar14[0x13];
      }
      fVar19 = *(float *)(uVar15 + 0x548) * 1.0 +
               *(float *)(puVar14 + 5) * *(float *)(uVar15 + 0x538) +
               *(float *)((longlong)puVar14 + 0x24) * *(float *)(uVar15 + 0x528) +
               *(float *)(puVar14 + 4) * *(float *)(uVar15 + 0x518) +
               *(float *)((longlong)puVar14 + 0x2c);
      if (fVar19 <= *param_6) {
        fVar19 = *param_6;
      }
      *param_6 = fVar19;
      iVar7 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar7);
        uVar15 = local_res8;
      }
      param_5._0_4_ = uVar17 + 1;
      uVar16 = uVar16 + 8;
      puVar14 = (undefined8 *)((longlong)iVar7 * 0xa0 + *param_3);
      *puVar14 = CONCAT44(iStack_144,uVar6);
      puVar14[1] = uStack_140;
      puVar14[2] = uVar9;
      puVar14[3] = uVar10;
      puVar14[4] = CONCAT44((float)iStack_144,uVar4);
      puVar14[5] = (ulonglong)(uint)(float)iVar5;
      puVar14[6] = local_118;
      puVar14[7] = uStack_110;
      puVar14[8] = local_108;
      puVar14[9] = uStack_100;
      puVar14[10] = local_f8;
      puVar14[0xb] = uStack_f0;
      puVar14[0xc] = local_e8;
      puVar14[0xd] = uStack_e0;
      puVar14[0xe] = local_d8;
      puVar14[0xf] = uStack_d0;
      *(undefined4 *)(puVar14 + 0x10) = uVar1;
      *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
      *(undefined4 *)(puVar14 + 0x11) = uVar3;
      *(int *)((longlong)puVar14 + 0x8c) = iStack_bc;
      puVar14[0x12] = local_b8;
      puVar14[0x13] = CONCAT44(iStack_ac,iStack_b0);
      uVar18 = (ulonglong)(uint)param_5;
    } while ((int)(uint)param_5 < *(int *)(param_2 + 0x1218));
  }
  AlgoImpl::
  IntroSortInternal<FReflectionCaptureSortData,FIdentityFunctor,TDereferenceWrapper<FReflectionCaptureSortData,TLess<FReflectionCaptureSortData>_>_>
            (*param_3,(longlong)(int)param_3[1],local_res8 & 0xff,&local_res8);
  return;
}



// FUNCTION 141d34970 FUN_141d34970 body=311 status=ok
// SIG undefined FUN_141d34970(void)

void FUN_141d34970(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    FUN_140822430(param_2,iVar3);
  }
  *(longlong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
  if ((*(int *)(param_1 + 0x28) == 0) && ((*(byte *)(*(longlong *)(param_1 + 8) + 0x1e) & 1) != 0))
  {
    lVar5 = *(longlong *)(param_1 + 0xd8);
    lVar6 = 0;
    if (*(int *)(lVar5 + 0x1a20) != *(int *)(lVar5 + 0x1a4c)) {
      lVar4 = *(longlong *)(lVar5 + 0x1a58);
      if (*(longlong *)(lVar5 + 0x1a58) == 0) {
        lVar4 = lVar5 + 0x1a50;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(lVar5 + 0x1a60) - 1U &
                               (longlong)*(int *)(param_1 + 0x10)) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)(lVar5 + 0x1a18) + (longlong)iVar3 * 0x28;
          if (*(int *)(*(longlong *)(lVar5 + 0x1a18) + (longlong)iVar3 * 0x28) ==
              *(int *)(param_1 + 0x10)) {
            if (iVar3 != -1) goto LAB_141d34a33;
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x20);
        } while (iVar3 != -1);
      }
    }
    lVar4 = lVar6;
LAB_141d34a33:
    lVar5 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar5 = lVar6;
    }
    if ((lVar5 != 0) && (iVar3 = *(int *)(lVar5 + 0x10), 0 < (longlong)iVar3)) {
      do {
        iVar1 = (int)param_2[1];
        uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 8) + lVar6 * 8);
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          FUN_140822430(param_2,iVar1);
        }
        lVar6 = lVar6 + 1;
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      } while (lVar6 < iVar3);
    }
  }
  return;
}



// FUNCTION 141d34ac0 FUN_141d34ac0 body=1101 status=ok
// SIG undefined FUN_141d34ac0(void)

float * FUN_141d34ac0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  float local_b4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar4 = *(undefined8 *)(lVar3 + 200);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar3 + 0xc0);
  *(undefined8 *)(param_2 + 2) = uVar4;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar3 + 0xd0);
  param_2[6] = *(float *)(lVar3 + 0xd8);
  if ((*(int *)(param_1 + 0x28) == 0) && ((*(byte *)(*(longlong *)(param_1 + 8) + 0x1e) & 1) != 0))
  {
    lVar3 = *(longlong *)(param_1 + 0xd8);
    uVar10 = 0;
    if (*(int *)(lVar3 + 0x1a20) != *(int *)(lVar3 + 0x1a4c)) {
      lVar6 = *(longlong *)(lVar3 + 0x1a58);
      if (*(longlong *)(lVar3 + 0x1a58) == 0) {
        lVar6 = lVar3 + 0x1a50;
      }
      iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(lVar3 + 0x1a60) - 1U &
                               (longlong)*(int *)(param_1 + 0x10)) * 4);
      if (iVar5 != -1) {
        do {
          uVar7 = *(longlong *)(lVar3 + 0x1a18) + (longlong)iVar5 * 0x28;
          if (*(int *)(*(longlong *)(lVar3 + 0x1a18) + (longlong)iVar5 * 0x28) ==
              *(int *)(param_1 + 0x10)) {
            if (iVar5 != -1) goto LAB_141d34b83;
            break;
          }
          iVar5 = *(int *)(uVar7 + 0x20);
        } while (iVar5 != -1);
      }
    }
    uVar7 = uVar10;
LAB_141d34b83:
    uVar8 = uVar7 + 8;
    if (uVar7 == 0) {
      uVar8 = uVar10;
    }
    if ((uVar8 != 0) && (uVar7 = uVar10, 0 < *(int *)(uVar8 + 0x10))) {
      do {
        fVar12 = *param_2;
        fVar1 = param_2[2];
        fVar2 = param_2[1];
        fVar19 = fVar12 - param_2[3];
        fVar18 = fVar2 - param_2[4];
        fVar17 = fVar1 - param_2[5];
        fVar20 = fVar12 + param_2[3];
        fVar16 = fVar2 + param_2[4];
        fVar13 = fVar1 + param_2[5];
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(uVar8 + 8) + uVar7) + 8);
        fVar23 = fVar19;
        if (fVar20 < fVar19) {
          fVar23 = fVar20;
        }
        fVar22 = fVar18;
        if (fVar16 < fVar18) {
          fVar22 = fVar16;
        }
        fVar21 = fVar17;
        if (fVar13 < fVar17) {
          fVar21 = fVar13;
        }
        if (fVar19 < fVar20) {
          fVar19 = fVar20;
        }
        if (fVar18 < fVar16) {
          fVar18 = fVar16;
        }
        if (fVar17 < fVar13) {
          fVar17 = fVar13;
        }
        fVar13 = *(float *)(lVar3 + 0xc0);
        fVar16 = *(float *)(lVar3 + 0xc4);
        fVar14 = fVar13 - *(float *)(lVar3 + 0xcc);
        fVar20 = *(float *)(lVar3 + 200);
        fVar11 = fVar16 - *(float *)(lVar3 + 0xd0);
        fVar15 = fVar20 - *(float *)(lVar3 + 0xd4);
        if (fVar14 < fVar23) {
          fVar23 = fVar14;
        }
        if (fVar11 < fVar22) {
          fVar22 = fVar11;
        }
        if (fVar15 < fVar21) {
          fVar21 = fVar15;
        }
        if (fVar19 < fVar14) {
          fVar19 = fVar14;
        }
        if (fVar18 < fVar11) {
          fVar18 = fVar11;
        }
        if (fVar17 < fVar15) {
          fVar17 = fVar15;
        }
        fVar14 = fVar13 + *(float *)(lVar3 + 0xcc);
        fVar11 = fVar16 + *(float *)(lVar3 + 0xd0);
        fVar15 = fVar20 + *(float *)(lVar3 + 0xd4);
        if (fVar14 < fVar23) {
          fVar23 = fVar14;
        }
        if (fVar11 < fVar22) {
          fVar22 = fVar11;
        }
        if (fVar15 < fVar21) {
          fVar21 = fVar15;
        }
        if (fVar19 < fVar14) {
          fVar19 = fVar14;
        }
        if (fVar18 < fVar11) {
          fVar18 = fVar11;
        }
        if (fVar17 < fVar15) {
          fVar17 = fVar15;
        }
        fVar19 = fVar19 - fVar23;
        fVar18 = fVar18 - fVar22;
        fVar17 = fVar17 - fVar21;
        fVar23 = fVar23 + fVar19 * 0.5;
        fVar22 = fVar22 + fVar18 * 0.5;
        fVar21 = fVar21 + fVar17 * 0.5;
        fVar11 = SQRT((fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) * 0.25);
        fVar12 = SQRT((fVar2 - fVar22) * (fVar2 - fVar22) + (fVar12 - fVar23) * (fVar12 - fVar23) +
                      (fVar1 - fVar21) * (fVar1 - fVar21)) + param_2[6];
        local_b4 = SQRT((fVar16 - fVar22) * (fVar16 - fVar22) +
                        (fVar13 - fVar23) * (fVar13 - fVar23) +
                        (fVar20 - fVar21) * (fVar20 - fVar21)) + *(float *)(lVar3 + 0xd8);
        if (local_b4 <= fVar12) {
          local_b4 = fVar12;
        }
        if (fVar11 <= local_b4) {
          local_b4 = fVar11;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        *(ulonglong *)param_2 = CONCAT44(fVar22,fVar23);
        *(ulonglong *)(param_2 + 2) = CONCAT44(fVar19 * 0.5,fVar21);
        *(ulonglong *)(param_2 + 4) = CONCAT44(fVar17 * 0.5,fVar18 * 0.5);
        param_2[6] = local_b4;
        uVar7 = uVar7 + 8;
      } while ((int)uVar9 < *(int *)(uVar8 + 0x10));
    }
  }
  return param_2;
}



// FUNCTION 141d34f10 FUN_141d34f10 body=512 status=ok
// SIG undefined FUN_141d34f10(void)

longlong FUN_141d34f10(longlong param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar1 = *(int *)(param_1 + 0x17c0);
  puStack_30 = (uint *)(param_1 + 0x17a8);
  lVar10 = 0;
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x17b8);
    if (*(uint **)(param_1 + 0x17b8) == (uint *)0x0) {
      puVar9 = puStack_30;
    }
    uVar3 = *puVar9;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar5 = local_68 + 1;
      bVar2 = (int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 <= local_68;
      local_68 = iVar5;
      if (bVar2) goto LAB_141d34fd0;
      uVar3 = puVar9[lVar4 + 1];
    }
    uStack_64 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_58._4_4_ = (uStack_50 - iVar5) + 0x1f;
    if (iVar1 < local_58._4_4_) {
LAB_141d34fd0:
      local_58._4_4_ = iVar1;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar2 = local_58._4_4_ < iVar1;
  local_40 = (longlong *)(param_1 + 0x1798);
  local_58 = puStack_30;
  if (bVar2) {
    do {
      lVar8 = (longlong)iStack_4c * 0x270;
      lVar4 = *(longlong *)(param_1 + 0x1798);
      plVar6 = *(longlong **)(lVar8 + 0x250 + lVar4);
      iVar1 = *(int *)(lVar8 + 0x248 + lVar4);
      if ((plVar6 != (longlong *)0x0) || (0 < iVar1)) {
        lVar7 = 0;
        iVar5 = 0;
        if (0 < iVar1) {
          lVar11 = 0;
          do {
            uVar3 = (**(code **)(**(longlong **)(lVar11 + *(longlong *)(lVar8 + 0x240 + lVar4)) +
                                0x20))();
            iVar5 = iVar5 + 1;
            lVar7 = lVar7 + (ulonglong)uVar3;
            lVar11 = lVar11 + 8;
          } while (iVar5 < *(int *)(lVar8 + 0x248 + lVar4));
          plVar6 = *(longlong **)(lVar8 + 0x250 + lVar4);
        }
        if (plVar6 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar6 + 0x20))();
          lVar7 = lVar7 + (ulonglong)uVar3;
        }
        lVar10 = lVar10 + lVar7;
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return lVar10;
}



// FUNCTION 141d35110 FUN_141d35110 body=150 status=ok
// SIG undefined FUN_141d35110(void)

void FUN_141d35110(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_res8 [2];
  
  if (2 < *(int *)(param_1 + 8)) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x1308),local_res8);
    puVar1 = (undefined4 *)0x0;
    if (local_res8[0] != -1) {
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x1308) + (longlong)local_res8[0] * 0x28);
    }
    puVar2 = puVar1 + 2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *param_6 = puVar2[2];
      *param_5 = puVar2[3];
      *param_7 = puVar2[4];
      *param_3 = *puVar2;
      *param_4 = puVar2[1];
    }
  }
  return;
}



// FUNCTION 141d351c0 GetDirectionalWindParameters body=57 status=ok
// SIG undefined GetDirectionalWindParameters(void)

void FNULLSceneInterface::GetDirectionalWindParameters
               (undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  return;
}



// FUNCTION 141d35200 FUN_141d35200 body=367 status=ok
// SIG undefined FUN_141d35200(void)

void FUN_141d35200(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float local_res8 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_1428d3550(&local_60);
  iVar3 = 0;
  fVar6 = 0.0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1918)) {
    lVar4 = 0;
    do {
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      local_68 = 0;
      cVar1 = FWindSourceSceneProxy::GetDirectionalWindParameters
                        (*(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x1910)),&local_78,
                         local_res8);
      if (cVar1 != '\0') {
        FWindData::AddWeighted(&local_60,&local_78,local_res8[0]);
        fVar6 = fVar6 + local_res8[0];
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x1918));
  }
  FWindData::NormalizeByTotalWeight(&local_60,fVar6);
  if (iVar3 == 0) {
    uStack_4c = 0;
    uVar5 = 0x3f800000;
  }
  else {
    uVar5 = CONCAT44(uStack_50,uStack_54);
  }
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = uStack_4c;
  *param_3 = local_60;
  *param_4 = uStack_5c;
  *param_5 = uStack_58;
  return;
}



// FUNCTION 141d353c0 FUN_141d353c0 body=51 status=ok
// SIG undefined FUN_141d353c0(void)

longlong FUN_141d353c0(longlong param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x6088);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  local_res8[0] = lVar1;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return lVar1;
}



// FUNCTION 141d35400 FUN_141d35400 body=51 status=ok
// SIG undefined FUN_141d35400(void)

longlong FUN_141d35400(longlong param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x6068);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  local_res8[0] = lVar1;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return lVar1;
}



// FUNCTION 141d35440 FUN_141d35440 body=51 status=ok
// SIG undefined FUN_141d35440(void)

longlong FUN_141d35440(longlong param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x60a8);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  local_res8[0] = lVar1;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return lVar1;
}



// FUNCTION 141d35480 FUN_141d35480 body=51 status=ok
// SIG undefined FUN_141d35480(void)

longlong FUN_141d35480(longlong param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x60c8);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  local_res8[0] = lVar1;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return lVar1;
}



// FUNCTION 141d354c0 FUN_141d354c0 body=136 status=ok
// SIG undefined FUN_141d354c0(void)

undefined8 * FUN_141d354c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_2 = 0;
  iVar4 = *(int *)(param_1 + 0x13e0);
  puVar3 = *(undefined8 **)(param_1 + 0x13d8);
  *(int *)(param_2 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar4,0);
  puVar2 = (undefined8 *)*param_2;
  do {
    *puVar2 = *puVar3;
    lVar1 = puVar3[1];
    puVar2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_2;
}



// FUNCTION 141d35550 GetPrimitiveMotionBlurInfo body=80 status=ok
// SIG undefined GetPrimitiveMotionBlurInfo(void)

undefined1
FMotionBlurInfoData::GetPrimitiveMotionBlurInfo
          (undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    lVar8 = FindMBInfoIndex(param_1,*(undefined4 *)(param_2 + 0x10));
    if (lVar8 != 0) {
      uVar1 = *(undefined8 *)(lVar8 + 0x18);
      uVar2 = *(undefined8 *)(lVar8 + 0x20);
      uVar3 = *(undefined8 *)(lVar8 + 0x28);
      uVar4 = *(undefined8 *)(lVar8 + 0x30);
      uVar5 = *(undefined8 *)(lVar8 + 0x38);
      uVar6 = *(undefined8 *)(lVar8 + 0x40);
      uVar7 = *(undefined8 *)(lVar8 + 0x48);
      *param_3 = *(undefined8 *)(lVar8 + 0x10);
      param_3[1] = uVar1;
      param_3[2] = uVar2;
      param_3[3] = uVar3;
      param_3[4] = uVar4;
      param_3[5] = uVar5;
      param_3[6] = uVar6;
      param_3[7] = uVar7;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141d355c0 FUN_141d355c0 body=320 status=ok
// SIG undefined FUN_141d355c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d355c0(void)

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
  
  if (DAT_146a83d20 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d35840;
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
        return *(undefined8 *)(DAT_146a83d20 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a83d20 = 0;
        return _DAT_00000030;
      }
      DAT_146a83d20 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a83d20 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a83d20 != 0) {
      lVar7 = DAT_146a83d20;
    }
    DAT_146a83d20 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a83d20 + 0x30);
}



// FUNCTION 141d35700 FUN_141d35700 body=320 status=ok
// SIG undefined FUN_141d35700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d35700(void)

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
  
  if (DAT_146a83d28 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d35850;
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
        return *(undefined8 *)(DAT_146a83d28 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a83d28 = 0;
        return _DAT_00000030;
      }
      DAT_146a83d28 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,2,2,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a83d28 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,2,2,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a83d28 != 0) {
      lVar7 = DAT_146a83d28;
    }
    DAT_146a83d28 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a83d28 + 0x30);
}



// FUNCTION 141d35860 FUN_141d35860 body=527 status=ok
// SIG undefined FUN_141d35860(void)

void FUN_141d35860(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    uVar5 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    FUN_141d35a70(uVar5,param_1,param_2,param_3);
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
  }
  else {
    pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar7 = TlsGetValue(*pDVar6);
    plVar10 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 2) = 0;
        plVar10 = plVar7;
      }
      TlsSetValue(*pDVar6,plVar10);
      plVar7 = plVar10;
    }
    plVar10 = (longlong *)plVar7[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar7;
      if (plVar10 == (longlong *)0x0) {
        lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
        plVar7[1] = lVar8;
        if (lVar8 == 0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar7[1] = (longlong)puVar9;
          lVar8 = 0x1f;
          do {
            puVar2 = puVar9 + 0x20;
            *puVar9 = puVar2;
            lVar8 = lVar8 + -1;
            puVar9 = puVar2;
          } while (lVar8 != 0);
          *puVar2 = 0;
        }
        plVar10 = (longlong *)plVar7[1];
        iVar11 = 0x20;
        *(undefined4 *)(plVar7 + 2) = 0x20;
      }
      else {
        iVar11 = 0x20;
        plVar7[1] = (longlong)plVar10;
        *(undefined4 *)(plVar7 + 2) = 0x20;
        *plVar7 = 0;
      }
    }
    else {
      iVar11 = (int)plVar7[2];
    }
    plVar7[1] = *plVar10;
    *(int *)(plVar7 + 2) = iVar11 + -1;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *(undefined1 *)(plVar10 + 5) = 0;
    *plVar10 = (longlong)&PTR_FUN_144e485b0;
    plVar10[6] = 0;
    plVar10[2] = param_1;
    plVar10[3] = param_2;
    plVar10[4] = param_3;
    lVar8 = plVar10[6];
    piVar1 = (int *)(lVar8 + 0x48);
    if (lVar8 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res18 = lVar8;
    FUN_14048a160(plVar10,0,0xff,1,0,0);
    if (lVar8 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(local_res18);
      }
    }
  }
  FUN_141ee24f0(0);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 0x2ec);
  return;
}



// FUNCTION 141d35a70 FUN_141d35a70 body=926 status=ok
// SIG undefined FUN_141d35a70(void)

void FUN_141d35a70(undefined8 param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  short sVar4;
  byte bVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  float fVar19;
  char local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  uint local_ac;
  int local_a8;
  char *local_a0;
  longlong local_98 [3];
  int iStack_80;
  int iStack_7c;
  undefined4 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong lVar18;
  
  TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
  ::FindId(param_2 + 0x1308);
  puVar6 = (undefined4 *)0x0;
  if (local_b4 != -1) {
    puVar6 = (undefined4 *)(*(longlong *)(param_2 + 0x1308) + (longlong)local_b4 * 0x28);
  }
  puVar16 = puVar6 + 2;
  if (puVar6 == (undefined4 *)0x0) {
    puVar16 = (undefined4 *)0x0;
  }
  local_78 = puVar16;
  if (puVar16 != (undefined4 *)0x0) {
    local_a0 = local_b8;
    local_b8[0] = '\0';
    local_b8[1] = '\x01';
    local_b8[2] = 2;
    do {
      plVar7 = (longlong *)0x0;
      cVar1 = *local_a0;
      if (cVar1 == '\0') {
        lVar18 = *(longlong *)(param_2 + 0x1270);
        plVar7 = (longlong *)(param_4 + 6);
LAB_141d35b6c:
        plVar17 = (longlong *)(lVar18 + 8);
      }
      else {
        if (cVar1 == '\x01') {
          lVar18 = *(longlong *)(param_2 + 0x12b8);
          plVar7 = (longlong *)(param_4 + 0x10);
          goto LAB_141d35b6c;
        }
        plVar17 = plVar7;
        if (cVar1 == '\x02') {
          lVar18 = *(longlong *)(param_2 + 0x1300);
          plVar7 = (longlong *)(param_4 + 0x14);
          goto LAB_141d35b6c;
        }
      }
      local_b0 = *puVar16;
      uVar12 = *(uint *)(plVar17[1] + 0x34);
      iVar10 = uVar12 - 1;
      local_ac = uVar12;
      fVar19 = _guard_xfg_dispatch_icall_nop(2.0,(float)iVar10);
      local_a8 = (int)fVar19;
      iVar13 = 0;
      if (0 < (int)uVar12) {
        uVar8 = (ulonglong)uVar12;
        do {
          bVar5 = (byte)iVar10;
          iVar10 = iVar10 + -1;
          iVar13 = iVar13 + ((1 << (bVar5 & 0x1f)) << (bVar5 & 0x1f)) * 0x30;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar10 = *(int *)((longlong)plVar7 + 0xc);
      iVar11 = 0;
      *(undefined4 *)(plVar7 + 1) = 0;
      if (iVar10 != iVar13) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar7);
        iVar10 = *(int *)((longlong)plVar7 + 0xc);
        iVar11 = (int)plVar7[1];
      }
      *(int *)(plVar7 + 1) = iVar11 + iVar13;
      if (iVar10 < iVar11 + iVar13) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar7);
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 + *plVar7),0,(longlong)iVar13);
      iVar10 = 0;
      local_b4 = 0;
      if (0 < (int)uVar12) {
        local_98[2] = 0;
        do {
          lVar18 = local_98[2];
          uVar3 = local_b0;
          iVar11 = 0;
          iStack_80 = 1 << (((char)uVar12 - (char)iVar10) - 1U & 0x1f);
          uVar2 = CONCAT44(iStack_80,iStack_80);
          iVar13 = 1;
          if (iStack_80 != 0) {
            iVar13 = iStack_80;
          }
          uVar12 = iStack_80 * iStack_80;
          iStack_7c = iStack_80;
          iVar14 = local_b4;
          do {
            local_98[0] = 0;
            local_98[1] = 0;
            local_68 = lVar18;
            uStack_60 = uVar2;
            (**(code **)(*DAT_146ab6358 + 0x6c8))
                      (DAT_146ab6358,param_1,plVar17[1],&local_68,local_98,iVar11,uVar3,iVar10);
            if (uVar12 != 0) {
              uVar8 = (ulonglong)uVar12;
              psVar9 = (short *)((longlong)iVar14 + *plVar7);
              psVar15 = (short *)(local_98[0] + 4);
              do {
                sVar4 = 0;
                if (-1 < psVar15[-2]) {
                  sVar4 = psVar15[-2];
                }
                *psVar9 = sVar4;
                sVar4 = 0;
                if (-1 < psVar15[-1]) {
                  sVar4 = psVar15[-1];
                }
                psVar9[1] = sVar4;
                sVar4 = 0;
                if (-1 < *psVar15) {
                  sVar4 = *psVar15;
                }
                psVar9[2] = sVar4;
                sVar4 = 0;
                if (-1 < psVar15[1]) {
                  sVar4 = psVar15[1];
                }
                psVar9[3] = sVar4;
                uVar8 = uVar8 - 1;
                psVar9 = psVar9 + 4;
                psVar15 = psVar15 + 4;
              } while (uVar8 != 0);
            }
            if (local_98[0] != 0) {
              FMemory::Free();
            }
            iVar11 = iVar11 + 1;
            iVar14 = iVar14 + iVar13 * iVar13 * 8;
          } while (iVar11 < 6);
          iVar10 = iVar10 + 1;
          local_b4 = local_b4 + iVar13 * iVar13 * 0x30;
          puVar16 = local_78;
          uVar12 = local_ac;
        } while (iVar10 < (int)local_ac);
      }
      *param_4 = local_a8;
      local_a0 = local_a0 + 1;
    } while (local_a0 != local_b8 + 3);
    param_4[1] = puVar16[1];
    param_4[2] = puVar16[2];
    param_4[3] = puVar16[3];
    param_4[4] = puVar16[4];
  }
  return;
}


