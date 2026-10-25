// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428cb660 FUN_1428cb660 body=71 status=ok
// SIG undefined FUN_1428cb660(void)

undefined8 * FUN_1428cb660(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x470);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2,plVar1 + 0x42);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 1428cb6b0 FUN_1428cb6b0 body=77 status=ok
// SIG undefined FUN_1428cb6b0(void)

void FUN_1428cb6b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    uVar1 = GetTransientPackage();
    uVar1 = NewObject<UCanvas>(uVar1,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  }
  return;
}



// FUNCTION 1428cb700 GetCanvasForRenderingToTarget body=77 status=ok
// SIG undefined GetCanvasForRenderingToTarget(void)

void UWorld::GetCanvasForRenderingToTarget(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    uVar1 = GetTransientPackage();
    uVar1 = NewObject<UCanvas>(uVar1,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  }
  return;
}



// FUNCTION 1428cb750 FUN_1428cb750 body=202 status=ok
// SIG undefined FUN_1428cb750(void)

undefined8 FUN_1428cb750(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  iVar1 = _guard_xfg_dispatch_icall_nop(local_28,*(undefined8 *)(param_1 + 8),0,0,&local_28);
  if (iVar1 < 0) {
    return 0;
  }
  if (param_3 != 0) {
    lVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8),0xffffffff);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar2 + 8);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar2 + 4);
    lVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8),0xffffffff);
    if (-1 < lVar2) {
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 4) * (int)lVar2 * 2;
      _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8),0xffffffff);
      *(float *)(param_3 + 0x10) = (float)(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      return 1;
    }
    if (lVar2 == -0x83) {
      *(undefined8 *)(param_3 + 0xc) = 0;
    }
  }
  return 1;
}



// FUNCTION 1428cb820 FUN_1428cb820 body=21 status=ok
// SIG undefined FUN_1428cb820(void)

longlong * FUN_1428cb820(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = param_1 + 0x1c8;
  return param_2;
}



// FUNCTION 1428cb880 GetDefaultGravityZ body=70 status=ok
// SIG undefined GetDefaultGravityZ(void)

undefined4 UWorld::GetDefaultGravityZ(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(lVar2 + 0x38);
}



// FUNCTION 1428cb8d0 FUN_1428cb8d0 body=233 status=ok
// SIG undefined FUN_1428cb8d0(void)

longlong FUN_1428cb8d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined1 local_10;
  ushort local_e;
  undefined4 local_c;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar1 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),0);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x488), lVar1 != 0)) {
        lVar2 = FUN_142923b20();
        lVar3 = lVar1;
        do {
          if (lVar3 == lVar2) goto LAB_1428cb930;
          lVar3 = *(longlong *)(lVar3 + 0x30);
        } while (lVar3 != 0);
      }
    }
    lVar1 = 0;
LAB_1428cb930:
    if (lVar1 == 0) {
      lVar1 = FUN_142923b20();
    }
    local_38 = 0;
    local_e = local_e & 0xfff8 | 8;
    local_10 = 0;
    local_c = 8;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    lVar1 = UWorld::SpawnActor(param_1,lVar1,0,0,&local_38);
    *(longlong *)(param_1 + 0x118) = lVar1;
    *(undefined4 *)(lVar1 + 0x494) = 0xfff0bdc0;
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  return lVar1;
}



// FUNCTION 1428cb9c0 FUN_1428cb9c0 body=108 status=ok
// SIG undefined FUN_1428cb9c0(void)

undefined8 FUN_1428cb9c0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0xb8);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = puVar1[3];
    uVar3 = puVar1[2] & 0x7fffffff;
    uVar4 = puVar1[1];
    uVar5 = *puVar1;
  }
  FString::PrintfImpl(param_2,L"Volume: %dx%dx%d [%s]",uVar5,uVar4,uVar3,
                      (&PTR_u_unknown_1464ca1b0)[(longlong)iVar2 * 5]);
  return param_2;
}



// FUNCTION 1428cba30 GetDestinationMapName body=205 status=ok
// SIG undefined GetDestinationMapName(void)

undefined8 FSeamlessTravelHandler::GetDestinationMapName(char *param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  void **ppvVar3;
  longlong lVar4;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  undefined8 local_10;
  
  if (*param_1 == '\0') {
    local_18 = (void *)0x0;
    ppvVar3 = &local_18;
    local_10 = 0;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_20 = *(int *)(param_1 + 0x38);
    lVar4 = (longlong)local_20;
    _Src = *(void **)(param_1 + 0x30);
    local_28 = (void *)0x0;
    if (local_20 == 0) {
      ppvVar3 = &local_28;
      local_1c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar4 * 2);
      ppvVar3 = &local_28;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_2,ppvVar3);
  if (bVar1) {
    if (local_18 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1428cbb00 GetDirectionalWindParameters body=82 status=ok
// SIG undefined GetDirectionalWindParameters(void)

ulonglong FWindSourceSceneProxy::GetDirectionalWindParameters
                    (longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    *param_3 = 0;
    *param_2 = 0;
    param_2[1] = 0x3f80000000000000;
    param_2[2] = 0;
    return in_RAX & 0xffffffffffffff00;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1428cbb60 FUN_1428cbb60 body=909 status=ok
// SIG undefined FUN_1428cbb60(void)

void FUN_1428cbb60(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4,
                  longlong *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  longlong local_a0;
  float fStack_94;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  
  lVar14 = *(longlong *)(param_1 + 0x20);
  if (lVar14 != 0) {
    lVar8 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1428cbbc4;
  }
  lVar14 = 0;
LAB_1428cbbc4:
  iVar2 = *(int *)(lVar14 + 0x7bc);
  iVar18 = 0;
  iVar3 = *(int *)(lVar14 + 0x7c0);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar14 = 0;
    local_a0 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x38);
      if (((iVar18 != -1) && (*(char *)(lVar14 + 0x70 + lVar8) != '\0')) &&
         (lVar4 = *(longlong *)(local_a0 + *(longlong *)(param_1 + 0x48)),
         (*(byte *)(lVar4 + 0xb7) & 1) == 0)) {
        bVar6 = false;
        iVar16 = -1;
        local_78 = -1;
        if (DAT_1468b616c == '\0') {
          lVar13 = -1;
          iVar15 = -1;
          iVar10 = *(int *)(lVar14 + 0x98 + lVar8);
          iVar9 = *(int *)(lVar14 + 0x10 + lVar8);
          fVar25 = (float)(*(int *)(lVar14 + 0x24 + lVar8) - iVar2);
          if (iVar10 <= iVar9) {
            iVar9 = iVar10;
          }
          fVar22 = (float)(*(int *)(lVar14 + 0x28 + lVar8) - iVar3);
          fVar23 = fVar25 + *(float *)(lVar14 + 0x3c + lVar8);
          fVar24 = fVar22 + *(float *)(lVar14 + 0x40 + lVar8);
          fVar25 = fVar25 + *(float *)(lVar14 + 0x30 + lVar8);
          fVar22 = fVar22 + *(float *)(lVar14 + 0x34 + lVar8);
          if (-1 < (longlong)iVar9) {
            lVar17 = -0x14;
            do {
              if ((bVar6) && (iVar16 < iVar15)) break;
              iVar10 = *(int *)(lVar14 + 0x6c + lVar8);
              if ((iVar15 < 0) || (*(int *)(lVar14 + 0x98 + lVar8) <= iVar15)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                iVar10 = iVar10 + *(int *)(*(longlong *)(lVar14 + 0x90 + lVar8) + lVar17);
              }
              lVar12 = 0;
              if (0 < (longlong)param_3) {
                puVar11 = param_2;
                do {
                  fVar19 = 0.0;
                  fVar20 = (float)*puVar11;
                  fVar21 = *(float *)(puVar11 + 1);
                  fVar5 = fVar25;
                  if ((fVar20 < fVar25) || (fVar5 = fVar23, fVar23 < fVar20)) {
                    fVar19 = (fVar20 - fVar5) * (fVar20 - fVar5);
                  }
                  fStack_94 = (float)((ulonglong)*puVar11 >> 0x20);
                  fVar5 = fVar22;
                  if ((fStack_94 < fVar22) || (fVar5 = fVar24, fVar24 < fStack_94)) {
                    fVar19 = fVar19 + (fStack_94 - fVar5) * (fStack_94 - fVar5);
                  }
                  if (-2097152.0 <= fVar21) {
                    if (2097152.0 < fVar21) {
                      fVar21 = fVar21 - 2097152.0;
                      goto LAB_1428cbdd1;
                    }
                  }
                  else {
                    fVar21 = fVar21 - -2097152.0;
LAB_1428cbdd1:
                    fVar19 = fVar19 + fVar21 * fVar21;
                  }
                  if (fVar19 <= (float)iVar10 * (float)iVar10) {
                    bVar6 = true;
                    iVar16 = iVar15;
                    break;
                  }
                  lVar12 = lVar12 + 1;
                  puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
                } while (lVar12 < param_3);
              }
              iVar15 = iVar15 + 1;
              lVar13 = lVar13 + 1;
              lVar17 = lVar17 + 0x14;
            } while (lVar13 < iVar9);
            local_78 = iVar16;
            if (bVar6) goto LAB_1428cbe4b;
          }
          iVar16 = (int)param_5[1];
          *(int *)(param_5 + 1) = iVar16 + 1;
          if (*(int *)((longlong)param_5 + 0xc) < iVar16 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_5,iVar16);
          }
          lVar8 = *param_5;
        }
        else {
LAB_1428cbe4b:
          iVar16 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar16 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar16 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_4,iVar16);
          }
          lVar8 = *param_4;
        }
        iStack_80 = (int)lVar4;
        iStack_7c = (int)((ulonglong)lVar4 >> 0x20);
        piVar1 = (int *)(lVar8 + (longlong)iVar16 * 0x18);
        *piVar1 = iVar18;
        piVar1[1] = iStack_84;
        piVar1[2] = iStack_80;
        piVar1[3] = iStack_7c;
        *(ulonglong *)(lVar8 + 0x10 + (longlong)iVar16 * 0x18) = CONCAT44(uStack_74,local_78);
      }
      local_a0 = local_a0 + 8;
      iVar18 = iVar18 + 1;
      lVar14 = lVar14 + 0xb0;
    } while (iVar18 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1428cbef0 FUN_1428cbef0 body=1251 status=ok
// SIG undefined FUN_1428cbef0(void)

void FUN_1428cbef0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_res8;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  longlong local_1a8;
  float local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_178;
  undefined4 local_170;
  float local_168;
  float fStack_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  local_178 = 0x3f800000;
  local_118 = 0x3f800000;
  uStack_110 = 0x3f8000003f800000;
  local_170 = 0;
  local_108 = 0x3f8000003f800000;
  uStack_100 = 0x3f80000000000000;
  local_188 = 0;
  local_1b8 = *(float *)(param_1 + 0xb0);
  local_1b0 = *(float *)(param_1 + 0xb8);
  local_f8 = 0x3f800000;
  uStack_f0 = 0x3f80000000000000;
  local_184 = 0x3f800000;
  local_1b4 = *(float *)(param_1 + 0xb4);
  local_198 = 0;
  local_190 = 0x3f800000;
  local_res8 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    uVar8 = 1;
    local_1a8 = 0;
    do {
      if ((param_4 & uVar8) != 0) {
        lVar5 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar5 = param_5 + 0x78;
        }
        uVar4 = *(uint *)(param_1 + 0x18);
        uVar1 = *(undefined8 *)(lVar5 + local_1a8);
        if (((uVar4 & 0x300) != 0) && (*(char *)(param_1 + 0x3a0) != '\0')) {
          local_140 = *(undefined4 *)(param_1 + 0x404);
          local_148 = *(undefined8 *)(param_1 + 0x3fc);
          FUN_142703f30(uVar1,&local_1b8,&local_178,&local_188,&local_198,&local_148,&local_108,0,0,
                        0,0);
          uVar4 = *(uint *)(param_1 + 0x18);
        }
        if (((uVar4 & 0x300) == 0) || (*(char *)(param_1 + 0x3a2) == '\0')) {
          if (*(char *)(param_1 + 0x3a1) != '\0') {
            local_128 = *(undefined8 *)(param_1 + 0x3f0);
            puVar3 = &local_118;
            if ((uVar4 & 0x300) == 0) {
              puVar3 = &local_f8;
            }
            local_e8 = *puVar3;
            uStack_e0 = puVar3[1];
            local_120 = *(undefined4 *)(param_1 + 0x3f8);
            FUN_142703f30(uVar1,&local_1b8,&local_178,&local_188,&local_198,&local_128,&local_e8,0,0
                          ,0,0);
          }
        }
        else {
          iVar9 = 0;
          fVar13 = local_1b8 - *(float *)(param_1 + 0x3f0);
          fVar14 = local_1b4 - *(float *)(param_1 + 0x3f4);
          fVar12 = (float)*(int *)(param_1 + 0x3bc) * *(float *)(param_1 + 0x3ec) * 0.5;
          fVar10 = local_1b0 - *(float *)(param_1 + 0x3f8);
          local_1a0 = fVar10;
          local_168 = fVar12;
          fStack_164 = fVar12;
          local_160 = fVar12;
          if (0 < *(int *)(param_1 + 0x3c4)) {
            do {
              iVar6 = 0;
              if (0 < *(int *)(param_1 + 0x3c8)) {
                iVar2 = *(int *)(param_1 + 0x3cc);
                do {
                  iVar7 = 0;
                  if (0 < iVar2) {
                    fVar11 = fVar10 + fVar12;
                    do {
                      fVar10 = (float)*(int *)(param_1 + 0x3bc) * *(float *)(param_1 + 0x3ec);
                      local_158 = (float)iVar9 * fVar10 + fVar13 + fVar12;
                      local_154 = (float)iVar6 * fVar10 + fVar14 + fVar12;
                      local_150 = (float)iVar7 * fVar10 + fVar11;
                      local_138 = CONCAT44(fVar12,fVar12);
                      local_130 = fVar12;
                      FUN_142703f30(uVar1,&local_158,&local_178,&local_188,&local_198,&local_138,
                                    &local_118,0,0,0,0);
                      iVar2 = *(int *)(param_1 + 0x3cc);
                      iVar7 = iVar7 + 1;
                      fVar10 = local_1a0;
                    } while (iVar7 < iVar2);
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(param_1 + 0x3c8));
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_1 + 0x3c4));
          }
        }
      }
      local_res8 = local_res8 + 1;
      local_1a8 = local_1a8 + 8;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    } while (local_res8 < *(int *)(param_2 + 8));
  }
  return;
}



// FUNCTION 1428cc3e0 FUN_1428cc3e0 body=173 status=ok
// SIG undefined FUN_1428cc3e0(void)

longlong FUN_1428cc3e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x1e0) <= iVar4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar4 * 8);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x508), lVar2 != 0)) {
      lVar3 = ULocalPlayer::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar2;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



// FUNCTION 1428cc490 GetFirstPlayerController body=24 status=ok
// SIG undefined GetFirstPlayerController(void)

undefined8 UWorld::GetFirstPlayerController(longlong param_1)

{
  undefined8 uVar1;
  
  if (0 < *(int *)(param_1 + 0x1e0)) {
    uVar1 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x1d8));
    return uVar1;
  }
  return 0;
}



// FUNCTION 1428cc4b0 GetGameViewport body=41 status=ok
// SIG undefined GetGameViewport(void)

undefined8 UWorld::GetGameViewport(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1428761d0(DAT_146b17150,param_1);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x238);
  }
  return 0;
}



// FUNCTION 1428cc4e0 FUN_1428cc4e0 body=203 status=ok
// SIG undefined FUN_1428cc4e0(void)

void FUN_1428cc4e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar2 = DAT_146b17150;
  if (*(longlong *)(param_1 + 0x980) == 0) {
    lVar5 = 0;
    if (*(longlong *)(DAT_146b17150 + 0x10e8) != 0) {
      lVar3 = FUN_14294b600();
      for (lVar1 = *(longlong *)(lVar2 + 0x10e8);
          (lVar5 = 0, lVar1 != 0 && (lVar5 = *(longlong *)(lVar2 + 0x10e8), lVar1 != lVar3));
          lVar1 = *(longlong *)(lVar1 + 0x30)) {
      }
    }
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = FUN_1417985e0(lVar5,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x980) = uVar4;
  }
  return;
}



// FUNCTION 1428cc5b0 FUN_1428cc5b0 body=50 status=ok
// SIG undefined FUN_1428cc5b0(void)

undefined8 FUN_1428cc5b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)FUN_14203ac20(*(longlong *)(param_1 + 0x30),1);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428cc5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x6f0))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1428cc5f0 GetLevel body=15 status=ok
// SIG undefined GetLevel(void)

undefined8 UWorld::GetLevel(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x160) + (longlong)param_2 * 8);
}



// FUNCTION 1428cc600 GetLevelIterator body=21 status=ok
// SIG undefined GetLevelIterator(void)

longlong * UWorld::GetLevelIterator(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = param_1 + 0x160;
  return param_2;
}



// FUNCTION 1428cc620 FUN_1428cc620 body=224 status=ok
// SIG undefined FUN_1428cc620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1428cc620(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_18;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1428cc677;
  }
  lVar4 = 0;
LAB_1428cc677:
  lVar3 = UObjectBaseUtility::GetOutermost(param_3);
  lVar3 = *(longlong *)(lVar3 + 0x88);
  if (lVar3 == 0) {
    local_18._0_4_ = (int)_DAT_1468b5ca8;
    lVar6 = _DAT_1468b5ca8;
    iVar5 = DAT_1468b5cb0;
  }
  else {
    local_18 = (ulonglong)*(uint *)(lVar3 + 0x10) << 0x20;
    lVar6 = local_18;
    iVar5 = *(int *)(lVar3 + 0x14);
    local_18._0_4_ = *(int *)(lVar3 + 0xc);
  }
  local_18._4_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar1 = *(int *)(lVar4 + 0x7c4);
  local_18 = CONCAT44(local_18._4_4_ - *(int *)(lVar4 + 0x7c0),
                      (int)local_18 - *(int *)(lVar4 + 0x7bc));
  *param_2 = local_18;
  *(int *)(param_2 + 1) = iVar5 - iVar1;
  return param_2;
}



// FUNCTION 1428cc700 GetLevelScriptActor body=20 status=ok
// SIG undefined GetLevelScriptActor(void)

void UWorld::GetLevelScriptActor(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x188);
  }
  ULevel::GetLevelScriptActor(param_2);
  return;
}



// FUNCTION 1428cc720 GetLocalURL body=33 status=ok
// SIG undefined GetLocalURL(void)

undefined8 UWorld::GetLocalURL(longlong param_1,undefined8 param_2)

{
  FUN_1428bd910(param_1 + 0x560,param_2,0);
  return param_2;
}



// FUNCTION 1428cc750 FUN_1428cc750 body=358 status=ok
// SIG undefined FUN_1428cc750(void)

longlong * FUN_1428cc750(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_res8;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(longlong **)(param_1 + 0x88);
  plVar3 = plVar5 + *(int *)(param_1 + 0x90);
  do {
    if (plVar5 == plVar3) {
LAB_1428cc82f:
      if ((int)param_2[1] < 2) {
        lVar4 = UObjectBaseUtility::GetOutermost(param_1);
        local_res8 = *(undefined8 *)(lVar4 + 0x18);
        FName::ToString(&local_res8,&local_28);
        if (param_2 != &local_28) {
          if (*param_2 != 0) {
            FMemory::Free();
          }
          *param_2 = local_28;
          *(undefined4 *)(param_2 + 1) = local_20;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
          return param_2;
        }
        if (local_28 != 0) {
          FMemory::Free();
        }
      }
      return param_2;
    }
    lVar4 = *plVar5;
    if (lVar4 != 0) {
      lVar2 = ULevelStreamingPersistent::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar3 = (longlong *)ULevelStreaming::GetWorldAssetPackageName(lVar4,&local_28);
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
        if (local_28 != 0) {
          FMemory::Free();
        }
        goto LAB_1428cc82f;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 1428cc8c0 FUN_1428cc8c0 body=435 status=ok
// SIG undefined FUN_1428cc8c0(void)

longlong * FUN_1428cc8c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_res8;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(longlong **)(param_1 + 0x88);
  plVar4 = plVar5 + *(int *)(param_1 + 0x90);
  do {
    if (plVar5 == plVar4) {
LAB_1428cc9a8:
      if ((int)param_2[1] < 2) {
        lVar3 = UObjectBaseUtility::GetOutermost(param_1);
        local_res8 = *(undefined8 *)(lVar3 + 0x18);
        FName::ToString(&local_res8,&local_38);
        if (param_2 == &local_38) {
          if (local_38 != 0) {
            FMemory::Free();
          }
        }
        else {
          if (*param_2 != 0) {
            FMemory::Free();
          }
          *param_2 = local_38;
          *(undefined4 *)(param_2 + 1) = local_30;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
        }
      }
      plVar4 = (longlong *)FPackageName::GetLongPackageAssetName(local_28,param_2);
      if (param_2 != plVar4) {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = *plVar4;
        *plVar4 = 0;
        *(int *)(param_2 + 1) = (int)plVar4[1];
        *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
        plVar4[1] = 0;
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      return param_2;
    }
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      lVar2 = ULevelStreamingPersistent::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar4 = (longlong *)ULevelStreaming::GetWorldAssetPackageName(lVar3,local_28);
        if (param_2 != plVar4) {
          if (*param_2 != 0) {
            FMemory::Free();
          }
          *param_2 = *plVar4;
          *plVar4 = 0;
          *(int *)(param_2 + 1) = (int)plVar4[1];
          *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
          plVar4[1] = 0;
        }
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        goto LAB_1428cc9a8;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 1428cca80 FUN_1428cca80 body=269 status=ok
// SIG undefined FUN_1428cca80(void)

longlong * FUN_1428cca80(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  longlong local_18 [2];
  
  pcVar6 = (char *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_146b17150 != 0) {
    puVar3 = *(undefined8 **)(DAT_146b17150 + 0xc18);
    puVar1 = puVar3 + *(int *)(DAT_146b17150 + 0xc20);
    if (puVar3 != puVar1) {
      do {
        pcVar7 = (char *)*puVar3;
        cVar2 = *pcVar7;
        if (cVar2 == '\x01') break;
        if (cVar2 == '\x03') {
          if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x03')) {
            pcVar6 = pcVar7;
          }
        }
        else if ((cVar2 == '\x02') && (pcVar6 == (char *)0x0)) {
          pcVar6 = pcVar7;
        }
        puVar3 = puVar3 + 1;
        pcVar7 = pcVar6;
      } while (puVar3 != puVar1);
      if (pcVar7 != (char *)0x0) {
        uVar4 = FUN_1428cc8c0(*(undefined8 *)(pcVar7 + 0x288),local_18);
        FString::operator=(param_1,uVar4);
        goto LAB_1428ccb70;
      }
    }
  }
  if (DAT_1469e7e13 == '\0') {
    return param_1;
  }
  uVar4 = FCommandLine::Get();
  plVar5 = (longlong *)FUN_142895480(local_18,uVar4);
  if (param_1 != plVar5) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar5;
    *plVar5 = 0;
    *(int *)(param_1 + 1) = (int)plVar5[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
  }
LAB_1428ccb70:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1428ccb90 GetMatineeActors body=205 status=ok
// SIG undefined GetMatineeActors(void)

void UWorld::GetMatineeActors(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x188);
  iVar6 = 0;
  if (0 < *(int *)(lVar2 + 0xa8)) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + *(longlong *)(lVar2 + 0xa0));
      if (lVar3 != 0) {
        lVar5 = FUN_1429ba1d0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(lVar2 + 0xa8));
  }
  return;
}



// FUNCTION 1428ccc70 FUN_1428ccc70 body=46 status=ok
// SIG undefined FUN_1428ccc70(void)

undefined4 FUN_1428ccc70(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),0);
    if (lVar1 != 0) {
      return *(undefined4 *)(lVar1 + 0x58c);
    }
  }
  return 0;
}



// FUNCTION 1428ccca0 FUN_1428ccca0 body=7 status=ok
// SIG undefined FUN_1428ccca0(void)

undefined4 FUN_1428ccca0(void)

{
  return DAT_146b19a78;
}



// FUNCTION 1428cccb0 FUN_1428cccb0 body=239 status=ok
// SIG undefined FUN_1428cccb0(void)

longlong FUN_1428cccb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x1a0)) {
    plVar1 = *(longlong **)(param_1 + 0x198);
    uVar7 = uVar6;
    do {
      if (*(longlong *)(*plVar1 + 0x30) == param_2) {
        return (*(longlong **)(param_1 + 0x198))[(int)uVar7];
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x1a0));
  }
  plVar1 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
  }
  FUN_140c124f0(lVar3 + 0x50,&local_28);
  puVar2 = (undefined8 *)FUN_1428cc8c0(param_1,local_18);
  puVar4 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar5 = local_28;
  }
  if (*(int *)(puVar2 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar2;
  }
  FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free(local_28);
  }
  return 0;
}



// FUNCTION 1428ccda0 GetPawnIterator body=21 status=ok
// SIG undefined GetPawnIterator(void)

longlong * UWorld::GetPawnIterator(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = param_1 + 0x1e8;
  return param_2;
}



// FUNCTION 1428ccdc0 GetPlayerControllerIterator body=21 status=ok
// SIG undefined GetPlayerControllerIterator(void)

longlong * UWorld::GetPlayerControllerIterator(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = param_1 + 0x1d8;
  return param_2;
}



// FUNCTION 1428ccde0 GetPrimaryAssetId body=70 status=ok
// SIG undefined GetPrimaryAssetId(void)

undefined8 * UWorld::GetPrimaryAssetId(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = UObjectBaseUtility::GetOutermost();
  if ((*(uint *)(lVar2 + 0x50) >> 0x14 & 1) == 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    *param_2 = DAT_146aef398;
    param_2[1] = uVar1;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1428cce50 FUN_1428cce50 body=109 status=ok
// SIG undefined FUN_1428cce50(void)

void FUN_1428cce50(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x978) == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar1 = UMobileInstalledContent::GetPrivateStaticClass();
    uVar1 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x978) = uVar1;
  }
  return;
}



// FUNCTION 1428cced0 FUN_1428cced0 body=414 status=ok
// SIG undefined FUN_1428cced0(void)

int FUN_1428cced0(void)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 local_res8 [8];
  undefined2 *local_18;
  undefined8 local_10;
  
  if (DAT_146b19b20 != '\0') {
    return DAT_146b19b24;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b19b38) && (_Init_thread_header(&DAT_146b19b38), DAT_146b19b38 == -1))
  {
    atexit((_func_5014 *)&LAB_143ebe110);
    _Init_thread_footer(&DAT_146b19b38);
  }
  DAT_146b19b20 = 1;
  cVar2 = FConfigCacheIni::GetString
                    (DAT_1468b6148,L"/Script/Engine.AudioSettings",L"VoiPSampleRate",&DAT_146b19b28,
                     &DAT_1468e2360);
  if (cVar2 != '\0') {
    local_18 = (undefined2 *)0x0;
    local_10 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar1 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"EVoiceSampleRate",0x22);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar7 = puVar1;
    }
    uVar4 = UEnum::GetPrivateStaticClass();
    lVar5 = FUN_141799410(uVar4,0xffffffffffffffff,puVar7,1);
    iVar3 = 0;
    if (lVar5 != 0) {
      puVar7 = &DAT_143f3eda8;
      if (DAT_146b19b30 != 0) {
        puVar7 = DAT_146b19b28;
      }
      puVar6 = (undefined8 *)FName::FName(local_res8,puVar7,1);
      iVar3 = UEnum::GetValueByName(lVar5,*puVar6,0);
    }
    DAT_146b19b24 = iVar3;
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    if (0 < DAT_146b19b24) {
      return DAT_146b19b24;
    }
  }
  DAT_146b19b24 = 16000;
  return 16000;
}



// FUNCTION 1428cd070 FUN_1428cd070 body=443 status=ok
// SIG undefined FUN_1428cd070(void)

ulonglong FUN_1428cd070(float *param_1,float *param_2,float *param_3,float *param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0xb) != '\0') {
    fVar3 = *param_1 - *param_2;
    fVar4 = param_1[1] - param_2[1];
    fVar2 = param_1[2] - param_2[2];
    fVar5 = param_1[10];
    fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if ((fVar5 < fVar2) || (fVar5 <= 0.0)) {
      uVar1 = in_RAX & 0xffffffffffffff00;
      *param_4 = 0.0;
      param_3[0] = 0.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_3[3] = 1.0;
      param_3[4] = 0.0;
      param_3[5] = 0.0;
    }
    else {
      fVar9 = param_2[2] - param_1[2];
      fVar7 = *param_2 - *param_1;
      fVar8 = param_2[1] - param_1[1];
      fVar5 = 1.0 / fVar5;
      fVar6 = 1.0 / fVar2;
      fVar4 = fVar5 * fVar8;
      fVar3 = fVar5 * fVar7;
      fVar5 = fVar5 * fVar9;
      fVar9 = fVar9 * fVar6;
      *(ulonglong *)(param_3 + 3) = CONCAT44(fVar8 * fVar6,fVar7 * fVar6);
      fVar5 = 1.0 - (fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
      param_3[5] = fVar9;
      uVar1 = CONCAT71((uint7)(uint3)((uint)fVar9 >> 8),1);
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      *param_3 = fVar5 * param_1[7];
      param_3[1] = fVar5 * param_1[8];
      param_3[2] = fVar5 * param_1[9];
      *param_4 = ((param_1[10] - fVar2) / param_1[10]) * param_1[6];
    }
    return uVar1;
  }
  *param_4 = param_1[6];
  *(undefined8 *)(param_3 + 3) = *(undefined8 *)(param_1 + 3);
  param_3[5] = param_1[5];
  *param_3 = param_1[7];
  param_3[1] = param_1[8];
  fVar5 = param_1[9];
  param_3[2] = fVar5;
  return CONCAT71((uint7)(uint3)((uint)fVar5 >> 8),1);
}



// FUNCTION 1428cd230 FUN_1428cd230 body=759 status=ok
// SIG undefined FUN_1428cd230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1428cd230(longlong param_1,undefined8 *param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_68;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  if ((*(byte *)(param_1 + 0x2e4) & 1) == 0) {
    local_40 = DAT_1468b5d98;
    if (*(longlong *)(param_1 + 0x2f0) == 0) {
      fVar2 = *(float *)(param_1 + 0x210);
      fVar3 = *(float *)(param_1 + 0x214);
      fVar4 = *(float *)(param_1 + 0x218);
      fVar5 = *(float *)(param_1 + 0x21c);
      local_1c = 0;
      fVar10 = fVar3 * 0.0 - fVar4 * 0.0;
      fVar11 = fVar4 * 1.0 - fVar2 * 0.0;
      fVar12 = fVar2 * 0.0 - fVar3 * 1.0;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      local_60 = (fVar11 * fVar2 - fVar10 * fVar3) + fVar5 * fVar12 + 0.0;
      local_48 = _DAT_1468b5d90;
      local_3c = CONCAT44((fVar10 * fVar4 - fVar12 * fVar2) + fVar5 * fVar11 + 0.0,
                          (fVar12 * fVar3 - fVar11 * fVar4) + fVar5 * fVar10 + 1.0);
      local_30 = *(undefined8 *)(param_1 + 0x2d0);
      uStack_28 = *(undefined8 *)(param_1 + 0x2d8);
      local_20 = 0;
      local_34 = local_60;
      uVar8 = FUN_1428cd070(&local_48);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x210);
      fVar3 = *(float *)(param_1 + 0x214);
      fVar4 = *(float *)(param_1 + 0x218);
      fVar5 = *(float *)(param_1 + 0x21c);
      local_20 = 0;
      local_1c = 0;
      fVar10 = fVar3 * 0.0 - fVar4 * 0.0;
      fVar11 = fVar4 * 1.0 - fVar2 * 0.0;
      fVar12 = fVar2 * 0.0 - fVar3 * 1.0;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      local_30 = *(undefined8 *)(param_1 + 0x2d0);
      uStack_28 = *(undefined8 *)(param_1 + 0x2d8);
      local_60 = (fVar11 * fVar2 - fVar10 * fVar3) + fVar12 * fVar5 + 0.0;
      local_48 = _DAT_1468b5d90;
      local_3c = CONCAT44((fVar10 * fVar4 - fVar12 * fVar2) + fVar11 * fVar5 + 0.0,
                          (fVar12 * fVar3 - fVar11 * fVar4) + fVar10 * fVar5 + 1.0);
      local_34 = local_60;
      bVar7 = FUN_1428cd070(&local_48);
      if ((bVar7 != 0) && (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
        lVar9 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          local_60 = *(float *)(param_2 + 1);
          local_68 = *param_2;
          (**(code **)(*plVar1 + 0x6f8))(plVar1,&local_58,&local_68);
          local_68 = CONCAT44(local_54,local_58);
          if (((local_58 == 0.0) && (local_54 == 0.0)) && (local_50 == 0.0)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if (!bVar6) {
            *(undefined8 *)(param_3 + 3) = local_68;
            param_3[5] = local_50;
            *param_3 = local_4c * *param_3;
          }
        }
      }
      uVar8 = (ulonglong)bVar7;
    }
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 0x220);
    local_60 = *(float *)(param_1 + 0x228);
    local_1c = 1;
    local_3c = _DAT_1468b5d90;
    local_30 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_28 = *(undefined8 *)(param_1 + 0x2d8);
    local_34 = (float)DAT_1468b5d98;
    local_20 = *(undefined4 *)(param_1 + 0x2e0);
    local_40 = local_60;
    uVar8 = FUN_1428cd070(&local_48);
  }
  return uVar8;
}



// FUNCTION 1428cd530 GetWorldSettings body=157 status=ok
// SIG undefined GetWorldSettings(void)

undefined8 UWorld::GetWorldSettings(longlong param_1,char param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0;
  }
  uVar3 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),param_3);
  if ((param_2 != '\0') && (0 < *(int *)(param_1 + 0x90))) {
    if ((**(longlong **)(param_1 + 0x88) != 0) &&
       ((cVar2 = UObjectBaseUtility::IsA<ULevelStreamingPersistent>(), cVar2 != '\0' &&
        (lVar1 = *(longlong *)(**(longlong **)(param_1 + 0x88) + 0x120), lVar1 != 0)))) {
      uVar3 = FUN_14203ac20(lVar1,1);
      return uVar3;
    }
    return uVar3;
  }
  return uVar3;
}



// FUNCTION 1428cd5d0 FUN_1428cd5d0 body=809 status=ok
// SIG undefined FUN_1428cd5d0(void)

undefined8 FUN_1428cd5d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  void *_Src;
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  void **ppvVar7;
  wchar_t *pwVar8;
  undefined8 local_res10;
  void **local_58;
  ulonglong local_50;
  void *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  local_res10 = param_2;
  cVar1 = FParse::Token(&local_res10,&local_48,0);
  if (cVar1 == '\0') {
    pwVar8 = L"You must specify a filename";
LAB_1428cd71f:
    FOutputDevice::Log(param_3,pwVar8);
    plVar6 = *(longlong **)(param_1 + 400);
    if (plVar6 == (longlong *)0x0) goto LAB_1428cd8bf;
    local_58 = (void **)0x0;
    local_50 = 0;
    if (*pwVar8 != L'\0') {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pwVar8[lVar5] != L'\0');
      uVar3 = (int)lVar5 + 1;
      local_50 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,pwVar8,(longlong)(int)uVar3 * 2);
    }
    (**(code **)(*plVar6 + 0x2c8))(plVar6,0,&local_58);
  }
  else {
    if (param_4 == 0) {
      pwVar8 = L"InWorld is null";
      goto LAB_1428cd71f;
    }
    if (*(int *)(param_4 + 0x708) == 2) {
      pwVar8 = L"Cannot play a demo without a PIE instance running";
      goto LAB_1428cd71f;
    }
    if (*(longlong *)(param_4 + 400) == 0) {
      pwVar8 = L"InWorld->GetGameInstance() is null";
      goto LAB_1428cd71f;
    }
    if (*(int *)(param_4 + 0x708) == 3) {
      plVar4 = *(longlong **)(DAT_146b17150 + 0xc18);
      plVar6 = plVar4 + *(int *)(DAT_146b17150 + 0xc20);
      for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
        if ((*(longlong *)(*(longlong *)(*plVar4 + 0x288) + 0x108) != 0) &&
           (cVar1 = FUN_142416ee0(), cVar1 != '\0')) {
          pwVar8 = L"A demo is already in progress, cannot play more than one demo at a time";
          goto LAB_1428cd71f;
        }
      }
    }
    local_58 = (void **)0x0;
    local_50 = 0;
    iVar2 = FUN_141594550(&local_48,&local_58,&DAT_1451e5c6c,1);
    if (iVar2 < 2) {
      local_38 = (longlong *)0x0;
      local_30 = 0;
      (**(code **)(**(longlong **)(param_4 + 400) + 0x2e8))
                (*(longlong **)(param_4 + 400),&local_48,0,&local_38);
      plVar6 = local_38;
      for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
    }
    else {
      if (&local_48 != local_58) {
        iVar2 = *(int *)(local_58 + 1);
        _Src = *local_58;
        local_40 = CONCAT44(local_40._4_4_,iVar2);
        if ((iVar2 == 0) && (local_40._4_4_ == 0)) {
          local_40 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar2);
          _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar2 * 2);
        }
      }
      if (*local_58 != (void *)0x0) {
        FMemory::Free(*local_58);
      }
      iVar2 = (int)local_50 + -1;
      if (0 < iVar2) {
        iVar2 = 1;
      }
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (local_58,local_58 + (longlong)((int)local_50 - iVar2) * 2,(longlong)iVar2 << 4);
      }
      local_50 = CONCAT44(local_50._4_4_,(int)local_50 + -1);
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_58);
      (**(code **)(**(longlong **)(param_4 + 400) + 0x2e8))
                (*(longlong **)(param_4 + 400),&local_48,0,&local_58);
    }
    ppvVar7 = local_58;
    for (iVar2 = (int)local_50; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*ppvVar7 != (void *)0x0) {
        FMemory::Free();
      }
      ppvVar7 = ppvVar7 + 2;
    }
  }
  if (local_58 != (void **)0x0) {
    FMemory::Free(local_58);
  }
LAB_1428cd8bf:
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1428cd900 FUN_1428cd900 body=592 status=ok
// SIG undefined FUN_1428cd900(void)

undefined8 FUN_1428cd900(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void **ppvVar5;
  longlong lVar6;
  undefined8 local_res10 [2];
  undefined4 local_res20;
  void **local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 uStack_4c;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  local_res20 = 0;
  if ((param_4 != 0) && (*(longlong *)(param_4 + 400) != 0)) {
    local_68 = (void *)0x0;
    local_60 = 0;
    local_res10[0] = param_2;
    FParse::Token(local_res10,&local_68,0);
    local_78 = (void **)0x0;
    local_70 = 0;
    iVar4 = FUN_141594550(&local_68,&local_78,&DAT_1451e5c34,1);
    bVar3 = true;
    bVar2 = false;
    if (1 < iVar4) {
      if (&local_68 != local_78) {
        iVar4 = *(int *)(local_78 + 1);
        pvVar1 = *local_78;
        local_60 = CONCAT44(local_60._4_4_,iVar4);
        if ((iVar4 == 0) && (local_60._4_4_ == 0)) {
          local_60 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar4);
          _guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar4 * 2);
        }
      }
      if (*local_78 != (void *)0x0) {
        FMemory::Free(*local_78);
      }
      iVar4 = (int)local_70 + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (local_78,local_78 + (longlong)((int)local_70 - iVar4) * 2,(longlong)iVar4 << 4);
      }
      local_70 = CONCAT44(local_70._4_4_,(int)local_70 + -1);
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_78);
    }
    pvVar1 = local_68;
    lVar6 = (longlong)(int)local_60;
    if ((int)local_60 < 2) {
      ppvVar5 = (void **)FUN_1428cc8c0(param_4,local_38);
    }
    else {
      local_58 = (void *)0x0;
      local_50 = (int)local_60;
      if ((int)local_60 == 0) {
        uStack_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_60 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar6 * 2);
      }
      ppvVar5 = &local_58;
      bVar3 = false;
      bVar2 = true;
    }
    local_48 = *ppvVar5;
    *ppvVar5 = (void *)0x0;
    local_40 = *(undefined4 *)(ppvVar5 + 1);
    local_3c = *(undefined4 *)((longlong)ppvVar5 + 0xc);
    ppvVar5[1] = (void *)0x0;
    if ((bVar2) && (local_58 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar3) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_4 + 400) + 0x2d8))
              (*(longlong **)(param_4 + 400),&local_68,&local_48,&local_78);
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
    ppvVar5 = local_78;
    for (iVar4 = (int)local_70; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*ppvVar5 != (void *)0x0) {
        FMemory::Free();
      }
      ppvVar5 = ppvVar5 + 2;
    }
    if (local_78 != (void **)0x0) {
      FMemory::Free(local_78);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 1428cdb50 FUN_1428cdb50 body=190 status=ok
// SIG undefined FUN_1428cdb50(void)

void FUN_1428cdb50(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *local_18;
  undefined8 local_10;
  
  FUN_1426a58d0(param_1 + 0x870);
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar2 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),1), lVar2 != 0)) {
    uVar3 = 0;
    local_18 = (undefined8 *)0x0;
    local_10 = 0;
    FUN_1410ae0a0(lVar2,&local_18,0);
    puVar1 = local_18;
    uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
    if (local_18 + (int)local_10 < local_18) {
      uVar4 = uVar3;
    }
    puVar5 = local_18;
    if (uVar4 != 0) {
      do {
        FUN_1425ff3e0(*puVar5);
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != uVar4);
    }
    if (puVar1 != (undefined8 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  return;
}



// FUNCTION 1428cdc10 FUN_1428cdc10 body=33 status=ok
// SIG undefined FUN_1428cdc10(void)

ulonglong FUN_1428cdc10(longlong param_1)

{
  ulonglong in_RAX;
  
  if ((((*(byte *)(param_1 + 0x830) & 0x20) != 0) &&
      (in_RAX = *(ulonglong *)(param_1 + 0x30), in_RAX != 0)) && (*(int *)(in_RAX + 0xa8) != 0)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1428cdc40 FUN_1428cdc40 body=1431 status=ok
// SIG undefined FUN_1428cdc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428cdc40(longlong param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  undefined8 *puVar8;
  ulonglong uVar9;
  byte bVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  undefined2 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  uint local_120;
  int local_118;
  longlong local_110;
  undefined4 local_108;
  longlong **local_100;
  int local_f8;
  ulonglong local_f0;
  void *local_e8;
  int local_e0;
  int local_dc;
  undefined1 local_d8;
  undefined2 local_d7;
  undefined1 local_d5;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  longlong local_90 [3];
  longlong *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar18 = 0;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x160);
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_68 = 1;
  local_54 = 0;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  plVar20 = local_78;
  if (DAT_146ab633a != '\0') {
    lVar17 = (longlong)*(int *)(param_1 + 0x160);
    plVar20 = (longlong *)(param_1 + 0xb0);
    lVar19 = (longlong)*(int *)(param_1 + 0x88);
    local_f0 = 0;
    if (lVar17 < lVar19) {
      puVar11 = (uint *)(param_1 + 0x128 + lVar17 * 4);
      lVar12 = lVar19 - lVar17;
      local_f0 = uVar18;
      do {
        uVar7 = *puVar11;
        puVar11 = puVar11 + 1;
        local_f0 = local_f0 + uVar7;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (*(uint *)(param_1 + 0x128 + lVar17 * 4) < local_f0) {
      _Dst = (void *)FMemory::Malloc(local_f0,0);
      lVar17 = (longlong)*(int *)(param_1 + 0x160);
      local_e8 = _Dst;
      if (lVar17 < lVar19) {
        lVar19 = lVar19 - lVar17;
        puVar11 = (uint *)(param_1 + 0x128 + lVar17 * 4);
        puVar8 = (undefined8 *)(param_1 + 0xb8 + lVar17 * 8);
        do {
          if ((void *)*puVar8 != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(_Dst,(void *)*puVar8,(ulonglong)*puVar11);
          }
          puVar8 = puVar8 + 1;
          _Dst = (void *)((longlong)_Dst + (ulonglong)*puVar11);
          puVar11 = puVar11 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      (**(code **)(*plVar20 + 0x18))(plVar20);
      *(void **)(param_1 + 0xb8 + (longlong)*(int *)(param_1 + 0x160) * 8) = local_e8;
      *(int *)(param_1 + 0x128 + (longlong)*(int *)(param_1 + 0x160) * 4) = (int)local_f0;
    }
  }
  local_78 = plVar20;
  local_120 = 1;
  bVar10 = (byte)*(int *)(param_1 + 0x84);
  uVar5 = *(uint *)(param_1 + 0x78) >> (bVar10 & 0x1f);
  uVar7 = local_120;
  if (uVar5 != 0) {
    uVar7 = uVar5;
  }
  uVar6 = *(uint *)(param_1 + 0x7c) >> (bVar10 & 0x1f);
  uVar5 = local_120;
  if (uVar6 != 0) {
    uVar5 = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0x80) >> (bVar10 & 0x1f);
  if (uVar6 != 0) {
    local_120 = uVar6;
  }
  local_100 = &local_78;
  local_108 = *(undefined4 *)(param_1 + 0x90);
  local_110 = CONCAT44(local_110._4_4_,*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84));
  local_118 = CONCAT31(local_118._1_3_,*(undefined1 *)(param_1 + 0x8c));
  local_128 = (undefined8 *)CONCAT44(local_128._4_4_,uVar5);
  (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,&local_e8,&DAT_146ab6e78,uVar7);
  ppvVar2 = (void **)(param_1 + 0xa0);
  if (ppvVar2 != &local_e8) {
    puVar8 = *ppvVar2;
    *ppvVar2 = local_e8;
    local_e8 = (void *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 1);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar8 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar21 = *(int *)((longlong)puVar8 + 0xc) == 0;
          if (bVar21) {
            *(int *)((longlong)puVar8 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar21) {
            uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
            uVar9 = uVar18;
            if (uVar7 != 0) {
              uVar9 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(uVar9 + 8) = puVar8;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e8);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,*ppvVar2);
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x58) = *(undefined8 *)(param_1 + 0x70);
  puVar8 = (undefined8 *)FName::ToString((undefined8 *)(param_1 + 0x70),local_90);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*puVar8;
  }
  (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x30),puVar16);
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x30),
                  *(undefined8 *)(param_1 + 0x30));
  }
  if (DAT_146ab633a == '\0') {
    uVar9 = (ulonglong)*(byte *)(param_1 + 0x8c);
    uVar14 = (ulonglong)*(int *)(param_1 + 0x84);
    iVar3 = (&DAT_1464ca1b8)[uVar9 * 10];
    local_dc = (&DAT_1464ca1bc)[uVar9 * 10];
    local_f8 = (&DAT_1464ca1c4)[uVar9 * 10];
    local_e0 = iVar3;
    if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x88)) {
      plVar20 = (longlong *)(param_1 + 0xb8 + uVar14 * 8);
      do {
        if (*plVar20 != 0) {
          bVar10 = (byte)uVar14;
          uVar7 = *(uint *)(param_1 + 0x78) >> (bVar10 & 0x1f);
          local_b8 = 0;
          local_a0 = 1;
          if (uVar7 != 0) {
            local_a0 = uVar7;
          }
          local_b0 = 0;
          uVar7 = *(uint *)(param_1 + 0x7c) >> (bVar10 & 0x1f);
          local_a8 = 0;
          local_9c = 1;
          if (uVar7 != 0) {
            local_9c = uVar7;
          }
          uVar7 = *(uint *)(param_1 + 0x80) >> (bVar10 & 0x1f);
          iVar13 = (int)(iVar3 + -1 + local_a0) / iVar3;
          local_98 = 1;
          if (uVar7 != 0) {
            local_98 = uVar7;
          }
          local_120 = iVar13 * local_f8;
          local_118 = ((int)(local_dc + -1 + local_9c) / local_dc) * iVar13 * local_f8;
          local_128 = &local_b8;
          local_110 = *plVar20;
          (**(code **)(*DAT_146ab6358 + 0x5b8))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0xa0),
                     (int)uVar14 - *(int *)(param_1 + 0x84));
        }
        uVar7 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar7;
        plVar20 = plVar20 + 1;
      } while ((int)uVar7 < *(int *)(param_1 + 0x88));
    }
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x18))();
  }
  local_d8 = *(undefined1 *)(param_1 + 0x98);
  local_cc = 0x7f7fffff;
  local_d7 = 0x101;
  local_d5 = 1;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_f0,&local_d8);
  puVar15 = (ulonglong *)(param_1 + 0x38);
  if (puVar15 != &local_f0) {
    puVar8 = (undefined8 *)*puVar15;
    *puVar15 = local_f0;
    local_f0 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 1);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar8 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar21 = *(int *)((longlong)puVar8 + 0xc) == 0;
          if (bVar21) {
            *(int *)((longlong)puVar8 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar21) {
            uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar7 != 0) {
              uVar18 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(uVar18 + 8) = puVar8;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar7);
          }
        }
        else {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f0);
  return;
}



// FUNCTION 1428ce1e0 FUN_1428ce1e0 body=1954 status=ok
// SIG undefined FUN_1428ce1e0(void)

void FUN_1428ce1e0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  void *_Src;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  void *pvVar17;
  longlong local_res8;
  ulonglong local_res18;
  undefined8 local_res20;
  ulonglong in_stack_ffffffffffffff28;
  undefined4 uVar19;
  void **ppvVar18;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  void *local_88;
  int local_80;
  void *local_70;
  ulonglong local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  ushort local_46;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x6f8) != '\0') {
    return;
  }
  TBaseMulticastDelegate<void,UWorld_*,UWorld::InitializationValues_const_>::Broadcast
            (&DAT_146535748,param_1,param_2);
  lVar15 = 0;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_res8 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),1);
  }
  uVar19 = (undefined4)(in_stack_ffffffffffffff28 >> 0x20);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 8) != 0) {
      lVar6 = operator_new(0x518);
      lVar7 = lVar15;
      if (lVar6 != 0) {
        lVar7 = FUN_1426d4000(lVar6,local_res8);
      }
      if (*(longlong *)(param_1 + 0x218) != 0) {
        FUN_1412cf370(*(longlong *)(param_1 + 0x218),0);
        lVar6 = *(longlong *)(param_1 + 0x218);
        if (lVar6 != 0) {
          FUN_1426d5850(lVar6);
          FMemory::operator_delete(lVar6,0x518);
        }
      }
      *(longlong *)(param_1 + 0x218) = lVar7;
      if (lVar7 != 0) {
        FUN_1412cf370(lVar7,param_1);
      }
    }
    *(byte *)(param_1 + 0x70e) = (byte)(param_2 >> 6) & 1;
    *(byte *)(param_1 + 0x3d8) = (byte)(param_2 >> 2) & 1;
    plVar8 = (longlong *)GetRendererModule();
    in_stack_ffffffffffffff28 = CONCAT44(uVar19,*(undefined4 *)(param_1 + 0x1c0));
    (**(code **)(*plVar8 + 0x50))
              (plVar8,param_1,*(undefined1 *)(param_1 + 0x3d8),
               CONCAT31((uint3)(param_2 >> 0x11),(char)(param_2 >> 9)) & 0xffffff01,
               in_stack_ffffffffffffff28);
  }
  if ((local_res8 != 0) && (((param_2 & 0x10) != 0 || ((param_2 & 0x20) != 0)))) {
    if ((param_2 & 0x10) != 0) {
      FUN_142246630(param_1,0,0);
    }
    if (((param_2 & 0x20) != 0) && ((*(byte *)(local_res8 + 0x460) & 4) != 0)) {
      FUN_1428c8130(param_1);
    }
  }
  lVar7 = DAT_146b17150;
  if (*(longlong *)(DAT_146b17150 + 0x1e8) != 0) {
    lVar9 = UAvoidanceManager::GetPrivateStaticClass();
    lVar11 = DAT_146b17150;
    for (lVar6 = *(longlong *)(lVar7 + 0x1e8); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar9) {
        if (*(longlong *)(lVar7 + 0x1e8) != 0) {
          local_res18 = 0;
          lVar7 = lVar15;
          if (*(longlong *)(DAT_146b17150 + 0x1e8) != 0) {
            lVar9 = UAvoidanceManager::GetPrivateStaticClass();
            for (lVar6 = *(longlong *)(lVar11 + 0x1e8);
                (lVar7 = lVar15, lVar6 != 0 &&
                (lVar7 = *(longlong *)(lVar11 + 0x1e8), lVar6 != lVar9));
                lVar6 = *(longlong *)(lVar6 + 0x30)) {
            }
          }
          uVar3 = local_res18;
          local_res20 = 0;
          if (local_res18 == 0) {
            FUN_1417846f0(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
          }
          in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffff00000000;
          uVar10 = FUN_1417985e0(lVar7,param_1,uVar3,0,in_stack_ffffffffffffff28,0,0,0,0);
          *(undefined8 *)(param_1 + 0x158) = uVar10;
        }
        break;
      }
    }
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  iStack_60 = -1;
  uVar10 = UMaterialParameterCollection::GetPrivateStaticClass();
  ppvVar18 = (void **)(in_stack_ffffffffffffff28 & 0xffffffff00000000);
  FUN_1417a5560(uVar10,&local_70,1,0x10,ppvVar18);
  _Src = local_70;
  lVar15 = (longlong)(int)local_68;
  do {
    iStack_60 = iStack_60 + 1;
    if ((int)local_68 <= iStack_60) break;
  } while (*(longlong *)((longlong)local_70 + (longlong)iStack_60 * 8) == 0);
  pvVar17 = (void *)0x0;
  local_80 = (int)local_68;
  local_88 = (void *)0x0;
  iVar2 = (int)local_68;
  iVar16 = iStack_60;
  iVar4 = local_80;
  iVar14 = 0;
  if ((int)local_68 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_88,local_68 & 0xffffffff,0);
    pvVar17 = local_88;
    _guard_xfg_dispatch_icall_nop(local_88,_Src,lVar15 << 3);
    iVar2 = local_80;
    iVar16 = iStack_60;
    iVar4 = local_80;
    iVar14 = (int)local_68;
  }
joined_r0x0001428ce4c4:
  local_80 = iVar4;
  iVar4 = local_80;
  local_80 = iVar2;
  if (iVar16 != iVar14) {
    FUN_1428c4f70(param_1,*(undefined8 *)((longlong)pvVar17 + (longlong)iVar16 * 8),0);
    do {
      iVar16 = iVar16 + 1;
      iVar2 = local_80;
      if (iVar4 <= iVar16) break;
    } while (*(longlong *)((longlong)pvVar17 + (longlong)iVar16 * 8) == 0);
    goto joined_r0x0001428ce4c4;
  }
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  FUN_1428dba00(param_1,0,0);
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x20) != param_1) {
    local_res18 = *(ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FName::ToString(&local_res18,&local_a8);
    puVar13 = &DAT_143f3eda8;
    if (local_a0 != 0) {
      puVar13 = local_a8;
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x138))
              (*(longlong **)(param_1 + 0x30),puVar13,param_1,1);
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  lVar15 = 0;
  plVar8 = (longlong *)(param_1 + 0x160);
  iVar16 = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,1);
    iVar16 = *(int *)(param_1 + 0x168);
  }
  *(int *)(param_1 + 0x168) = iVar16 + 1;
  if (*(int *)(param_1 + 0x16c) < iVar16 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar16);
  }
  *(undefined8 *)(*plVar8 + (longlong)iVar16 * 8) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xc0) = param_1;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x30) + 0x204);
  *pbVar1 = *pbVar1 | 0x10;
  FUN_1428d5680(param_1);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar7 = lVar15;
    if (((*(longlong *)(param_1 + 0x30) != 0) &&
        (lVar6 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),0), lVar6 != 0)) &&
       (lVar6 = *(longlong *)(lVar6 + 0x488), lVar6 != 0)) {
      lVar9 = FUN_142923b20();
      lVar11 = lVar6;
      do {
        lVar7 = lVar6;
        if (lVar11 == lVar9) break;
        lVar11 = *(longlong *)(lVar11 + 0x30);
        lVar7 = lVar15;
      } while (lVar11 != 0);
    }
    if (lVar7 == 0) {
      lVar7 = FUN_142923b20();
    }
    local_70 = (void *)0x0;
    local_46 = local_46 & 0xfff8 | 8;
    local_48 = 0;
    ppvVar18 = &local_70;
    local_44 = 8;
    local_68 = 0;
    iStack_60 = 0;
    uStack_5c = 0;
    local_58 = 0;
    uStack_50 = 0;
    lVar7 = UWorld::SpawnActor(param_1,lVar7,0,0,ppvVar18);
    *(longlong *)(param_1 + 0x118) = lVar7;
    *(undefined4 *)(lVar7 + 0x494) = 0xfff0bdc0;
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    if ((*(longlong *)(param_1 + 0x30) == 0) ||
       (plVar8 = (longlong *)FUN_14203ac20(*(longlong *)(param_1 + 0x30),1),
       plVar8 == (longlong *)0x0)) {
      local_a0 = 0;
    }
    else {
      local_a0 = (**(code **)(*plVar8 + 0x6f0))(plVar8);
    }
    local_a8 = (undefined2 *)0x0;
    FUN_1426eb900(*(undefined8 *)(param_1 + 0x218),&local_a8,0,0);
  }
  if ((param_2 & 8) != 0) {
    lVar7 = lVar15;
    if (local_res8 != 0) {
      lVar7 = *(longlong *)(local_res8 + 0x490);
    }
    if (lVar7 != 0) {
      lVar11 = UPhysicsCollisionHandler::GetPrivateStaticClass();
      lVar6 = lVar7;
      do {
        if (lVar6 == lVar11) goto LAB_1428ce74c;
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    lVar7 = *(longlong *)(DAT_146b17150 + 0x1f0);
LAB_1428ce74c:
    if (lVar7 != 0) {
      lVar11 = UPhysicsCollisionHandler::GetPrivateStaticClass();
      lVar6 = lVar7;
      do {
        if (lVar6 == lVar11) {
          lVar11 = UPhysicsCollisionHandler::GetPrivateStaticClass();
          lVar6 = lVar7;
          goto LAB_1428ce780;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
  }
  goto LAB_1428ce7e7;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar9 = lVar15, lVar6 != 0) {
LAB_1428ce780:
    lVar9 = lVar7;
    if (lVar6 == lVar11) break;
  }
  local_res18 = 0;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  plVar8 = (longlong *)
           FUN_1417985e0(lVar9,param_1,0,0,(ulonglong)ppvVar18 & 0xffffffff00000000,0,0,0,0);
  *(longlong **)(param_1 + 0x60) = plVar8;
  (**(code **)(*plVar8 + 0x280))(plVar8);
LAB_1428ce7e7:
  FURL::operator=(param_1 + 0x560,*(longlong *)(param_1 + 0x30) + 0x30);
  *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) & 0xffffbfff;
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x704) = 0;
  *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) | (param_2 & 2) << 0xd;
  uVar10 = FUN_141e0eac0(&local_70);
  uVar10 = FUN_141671940(&local_88,uVar10,1);
  uVar12 = FUN_1428cc8c0(param_1,local_98);
  uVar12 = FUN_141671940(&local_a8,uVar12,1);
  bVar5 = FString::EndsWith(uVar12,uVar10,1);
  *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) & 0xfffffffb;
  *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) | (uint)bVar5 * 4;
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_1428c7a00(param_1);
  *(undefined1 *)(param_1 + 0x6f8) = 1;
  TBaseMulticastDelegate<void,UWorld_*,UWorld::InitializationValues_const_>::Broadcast
            (&DAT_146535760,param_1,param_2);
  FPrecomputedVisibilityHandler::UpdateScene
            (*(longlong *)(param_1 + 0x30) + 0x160,*(undefined8 *)(param_1 + 0x1b8));
  FPrecomputedVolumeDistanceField::UpdateScene
            (*(longlong *)(param_1 + 0x30) + 400,*(undefined8 *)(param_1 + 0x1b8));
  FUN_14252bcf0(*(undefined8 *)(param_1 + 0x30));
  plVar8 = (longlong *)IStreamingManager::Get();
  (**(code **)(*plVar8 + 0x48))(plVar8,*(undefined8 *)(param_1 + 0x30));
  if (((*(longlong *)(param_1 + 0x1b8) != 0) && (local_res8 != 0)) &&
     (*(longlong *)(local_res8 + 0x678) != 0)) {
    FUN_14248a7c0(*(longlong *)(local_res8 + 0x678),param_1);
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x548);
  return;
}



// FUNCTION 1428ce990 Initialize body=916 status=ok
// SIG undefined Initialize(void)

void FWeightedRandomSampler::Initialize(longlong *param_1)

{
  float *pfVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  int *piVar16;
  undefined4 uVar17;
  float fVar18;
  int *local_88;
  uint local_80;
  int local_7c;
  int *local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  uVar6 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar17 = (**(code **)(*param_1 + 8))(param_1,&local_68);
  uVar3 = local_60;
  iVar7 = (int)local_60;
  *(undefined4 *)(param_1 + 5) = uVar17;
  local_80 = 0;
  local_88 = (int *)0x0;
  local_7c = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  uVar13 = uVar6;
  if (0 < (int)local_60) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_88,local_60 & 0xffffffff);
    TArray<float,FDefaultAllocator>::ResizeTo(&local_78,uVar3 & 0xffffffff);
    uVar6 = (ulonglong)local_80;
    uVar13 = local_70 & 0xffffffff;
  }
  piVar12 = local_78;
  piVar16 = local_88;
  iVar4 = (int)param_1[2];
  if (iVar4 < iVar7) {
    *(int *)(param_1 + 2) = iVar7;
    if (*(int *)((longlong)param_1 + 0x14) < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar4);
    }
  }
  else if ((iVar7 < iVar4) && (iVar7 != iVar4)) {
    *(int *)(param_1 + 2) = iVar7;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 1);
  }
  iVar4 = (int)param_1[4];
  if (iVar4 < iVar7) {
    *(int *)(param_1 + 4) = iVar7;
    if (*(int *)((longlong)param_1 + 0x24) < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 3,iVar4);
    }
  }
  else if ((iVar7 < iVar4) && (iVar7 != iVar4)) {
    *(int *)(param_1 + 4) = iVar7;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  }
  fVar18 = 0.0;
  if (*(float *)(param_1 + 5) != 0.0) {
    fVar18 = (float)iVar7 / *(float *)(param_1 + 5);
  }
  iVar7 = iVar7 + -1;
  if (-1 < iVar7) {
    lVar15 = (longlong)iVar7 * 4;
    do {
      *(float *)(lVar15 + local_68) = fVar18 * *(float *)(lVar15 + local_68);
      if (1.0 < *(float *)(lVar15 + local_68) || *(float *)(lVar15 + local_68) == 1.0) {
        iVar4 = (int)uVar13;
        uVar9 = iVar4 + 1;
        local_70 = CONCAT44(local_70._4_4_,uVar9);
        if (local_70._4_4_ < (int)uVar9) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,uVar13);
          piVar12 = local_78;
          uVar9 = (uint)local_70;
        }
        uVar13 = (ulonglong)uVar9;
        piVar12[iVar4] = iVar7;
      }
      else {
        iVar4 = (int)uVar6;
        local_80 = iVar4 + 1;
        if (local_7c < (int)local_80) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,uVar6);
          piVar16 = local_88;
        }
        uVar6 = (ulonglong)local_80;
        piVar16[iVar4] = iVar7;
      }
      lVar15 = lVar15 + -4;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  uVar9 = (uint)uVar13;
  uVar8 = (uint)uVar6;
  while (uVar5 = 0, uVar8 != 0) {
    uVar5 = (uint)uVar6;
    uVar9 = (uint)uVar13;
    if (uVar9 == 0) break;
    uVar8 = uVar5 - 1;
    iVar7 = piVar16[(int)uVar8];
    iVar4 = (uVar5 - uVar8) + -1;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (piVar16 + (int)uVar8,piVar16 + (int)uVar5,(longlong)iVar4 << 2);
    }
    uVar14 = uVar9 - 1;
    iVar4 = piVar12[(int)uVar14];
    iVar10 = (uVar9 - uVar14) + -1;
    if (iVar10 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (piVar12 + (int)uVar14,piVar12 + (int)uVar9,(longlong)iVar10 << 2);
    }
    lVar11 = (longlong)iVar7;
    *(undefined4 *)(param_1[1] + lVar11 * 4) = *(undefined4 *)(local_68 + lVar11 * 4);
    lVar15 = (longlong)iVar4;
    *(int *)(param_1[3] + lVar11 * 4) = iVar4;
    *(float *)(local_68 + lVar15 * 4) =
         (*(float *)(local_68 + lVar11 * 4) + *(float *)(local_68 + lVar15 * 4)) - 1.0;
    pfVar1 = (float *)(local_68 + lVar15 * 4);
    if (1.0 < *pfVar1 || *pfVar1 == 1.0) {
      local_70 = CONCAT44(local_70._4_4_,uVar9);
      if (local_70._4_4_ < (int)uVar9) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,uVar14);
        piVar12 = local_78;
        uVar9 = (uint)local_70;
      }
      piVar12[(int)uVar14] = iVar4;
    }
    else {
      local_80 = uVar5;
      if (local_7c < (int)uVar5) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,uVar8);
        piVar16 = local_88;
      }
      piVar16[(int)uVar8] = iVar4;
      uVar8 = local_80;
      uVar9 = uVar14;
    }
    uVar13 = (ulonglong)uVar9;
    uVar6 = (ulonglong)uVar8;
  }
  uVar13 = 0;
  uVar6 = (ulonglong)((longlong)(piVar12 + (int)uVar9) + (3 - (longlong)piVar12)) >> 2;
  if (piVar12 + (int)uVar9 < piVar12) {
    uVar6 = uVar13;
  }
  uVar3 = uVar13;
  piVar2 = piVar12;
  if (uVar6 != 0) {
    do {
      uVar3 = uVar3 + 1;
      *(undefined4 *)(param_1[1] + (longlong)*piVar2 * 4) = 0x3f800000;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar6);
  }
  uVar6 = (ulonglong)((longlong)(piVar16 + (int)uVar5) + (3 - (longlong)piVar16)) >> 2;
  if (piVar16 + (int)uVar5 < piVar16) {
    uVar6 = uVar13;
  }
  piVar2 = piVar16;
  if (uVar6 != 0) {
    do {
      iVar7 = *piVar2;
      piVar2 = piVar2 + 1;
      uVar13 = uVar13 + 1;
      *(undefined4 *)(param_1[1] + (longlong)iVar7 * 4) = 0x3f800000;
    } while (uVar13 != uVar6);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  if (piVar16 != (int *)0x0) {
    FMemory::Free(piVar16);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428ced30 FUN_1428ced30 body=1988 status=ok
// SIG undefined FUN_1428ced30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428ced30(longlong param_1,longlong param_2,char param_3)

{
  void *_Dst;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 local_res8 [8];
  longlong local_res10;
  char local_res18;
  LARGE_INTEGER local_res20;
  undefined8 *puVar17;
  longlong local_98;
  uint local_90;
  uint local_8c;
  longlong local_88;
  uint local_80;
  uint local_7c;
  longlong *local_78;
  int local_70;
  longlong local_68 [3];
  char local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  QueryPerformanceCounter(&local_res20);
  puVar12 = (undefined8 *)0x0;
  if (param_3 != '\0') {
    *(undefined8 *)(param_1 + 0x790) = 0;
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    *(undefined8 *)(param_1 + 0x798) = 0;
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  local_90 = 0;
  local_8c = 0;
  local_98 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  puVar17 = puVar12;
  puVar7 = puVar12;
  puVar13 = puVar12;
  puVar16 = puVar12;
  if (0 < *(int *)(param_2 + 0x50)) {
    while( true ) {
      iVar4 = (int)puVar7;
      local_90 = (2 - (uint)(iVar4 != 0)) + iVar4;
      if ((int)puVar17 < (int)local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,puVar7);
      }
      uVar15 = local_90;
      lVar11 = (longlong)iVar4 - (ulonglong)(iVar4 != 0);
      *(undefined2 *)(local_98 + lVar11 * 2) = 0x3f;
      *(undefined2 *)(local_98 + 2 + lVar11 * 2) = 0;
      iVar4 = *(int *)((longlong)puVar13 + *(longlong *)(param_2 + 0x48) + 8);
      local_res20 = *(LARGE_INTEGER *)((longlong)puVar13 + *(longlong *)(param_2 + 0x48));
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        lVar11 = (longlong)(int)local_90;
        local_90 = (local_90 == 0) + local_90 + iVar6;
        if ((int)local_8c < (int)local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar15);
        }
        _Dst = (void *)(local_98 + (lVar11 - (ulonglong)(uVar15 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,(void *)local_res20,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
        param_2 = local_res10;
      }
      uVar15 = (int)puVar16 + 1;
      param_3 = local_res18;
      if (*(int *)(param_2 + 0x50) <= (int)uVar15) break;
      puVar17 = (undefined8 *)(ulonglong)local_8c;
      puVar7 = (undefined8 *)(ulonglong)local_90;
      puVar13 = puVar13 + 2;
      puVar16 = (undefined8 *)(ulonglong)uVar15;
    }
  }
  lVar11 = FURL::GetOption(param_2,&DAT_1451ec300,0);
  if (lVar11 == 0) {
    FURL::operator=(param_1 + 0x560,param_2);
  }
  puVar17 = &DAT_1468e2360;
  local_res8[0] = 1;
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"Kismet",L"bRerunConstructionDuringEditorStreaming",local_res8,
             &DAT_1468e2360);
  FUN_1428dc350(param_1,0,1);
  if ((((*(byte *)(param_1 + 0x830) & 0x10) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x30) + 0xa8) == 0)) {
    plVar10 = *(longlong **)(param_1 + 0x138);
    if (plVar10 != (longlong *)0x0) {
      puVar7 = puVar12;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        puVar7 = (undefined8 *)FUN_14203ac20(*(longlong *)(param_1 + 0x30),1);
      }
      (**(code **)(*plVar10 + 0x298))(plVar10,puVar7);
    }
    puVar7 = puVar12;
    puVar13 = puVar12;
    if (0 < *(int *)(param_1 + 0x168)) {
      do {
        FUN_14252b9f0(*(undefined8 *)((longlong)puVar13 + *(longlong *)(param_1 + 0x160)));
        uVar15 = (int)puVar7 + 1;
        puVar7 = (undefined8 *)(ulonglong)uVar15;
        param_2 = local_res10;
        puVar13 = puVar13 + 1;
      } while ((int)uVar15 < *(int *)(param_1 + 0x168));
    }
    *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) | 0x210;
    if ((DAT_146b17150 != (longlong *)0x0) &&
       (iVar4 = UEngine::GetNetMode(DAT_146b17150,param_1), iVar4 - 1U < 2)) {
      if (*(longlong *)(param_1 + 0x970) == 0) {
        uVar8 = FCommandLine::Get();
        cVar3 = FParse::Param(uVar8,L"nolagcomp");
        if ((cVar3 == '\0') && (cVar3 = FUN_14249c860(), cVar3 != '\0')) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          local_res10 = 0;
          uVar8 = FUN_14294b490();
          uVar8 = FUN_1417985e0(uVar8,param_1,0,0,(ulonglong)puVar17 & 0xffffffff00000000,0,0,0,0);
          *(undefined8 *)(param_1 + 0x970) = uVar8;
          FUN_1424a3d80(uVar8);
        }
      }
      (**(code **)(*DAT_146b17150 + 0x3d8))(DAT_146b17150,param_1);
    }
    plVar10 = *(longlong **)(param_1 + 0x140);
    if ((plVar10 != (longlong *)0x0) && ((*(byte *)((longlong)plVar10 + 0x93) & 8) == 0)) {
      lVar11 = *plVar10;
      uVar8 = FUN_141671940(&local_78,param_2 + 0x28,1);
      (**(code **)(lVar11 + 0x748))(*(undefined8 *)(param_1 + 0x140),uVar8,&local_98,local_68);
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    puVar17 = puVar12;
    puVar7 = puVar12;
    if (0 < *(int *)(param_1 + 0x168)) {
      do {
        FUN_142535db0(*(undefined8 *)((longlong)puVar7 + *(longlong *)(param_1 + 0x160)));
        uVar15 = (int)puVar17 + 1;
        puVar17 = (undefined8 *)(ulonglong)uVar15;
        puVar7 = puVar7 + 1;
      } while ((int)uVar15 < *(int *)(param_1 + 0x168));
    }
    UEngine::GetLocalPlayerIterator(DAT_146b17150,&local_78,param_1);
    for (; -1 < local_70; local_70 = local_70 + 1) {
      if (((int)local_78[1] <= local_70) || (*(longlong *)(*local_78 + (longlong)local_70 * 8) != 0)
         ) goto LAB_1428cf0e1;
    }
    goto LAB_1428cf218;
  }
  goto LAB_1428cf228;
LAB_1428cf0e1:
  while ((-1 < local_70 && (local_70 < (int)local_78[1]))) {
    lVar11 = UPlayer::GetPlayerController
                       (*(undefined8 *)(*local_78 + (longlong)local_70 * 8),param_1);
    if (lVar11 != 0) {
      iVar4 = 1;
      local_88 = 0;
      local_80 = 0;
      local_7c = 0;
      if (1 < *(int *)(param_1 + 0x168)) {
        lVar14 = 8;
        puVar17 = puVar12;
        puVar7 = puVar12;
        while( true ) {
          lVar1 = *(longlong *)(lVar14 + *(longlong *)(param_1 + 0x160));
          local_80 = (int)puVar7 + 1;
          if ((int)puVar17 < (int)local_80) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_88,puVar7);
          }
          puVar7 = (undefined8 *)((longlong)(int)puVar7 * 0x10 + local_88);
          puVar17 = puVar12;
          if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar17 = puVar7;
          }
          lVar9 = UObjectBaseUtility::GetOutermost(lVar1);
          puVar7 = (undefined8 *)
                   APlayerController::NetworkRemapPath
                             (lVar11,&local_res10,*(undefined8 *)(lVar9 + 0x18),0);
          iVar4 = iVar4 + 1;
          lVar14 = lVar14 + 8;
          *puVar17 = *puVar7;
          *(uint *)(puVar17 + 1) =
               *(uint *)(puVar17 + 1) ^
               ((uint)(*(byte *)(lVar1 + 0x204) >> 4) ^ *(uint *)(puVar17 + 1)) & 1;
          if (*(int *)(param_1 + 0x168) <= iVar4) break;
          puVar17 = (undefined8 *)(ulonglong)local_7c;
          puVar7 = (undefined8 *)(ulonglong)local_80;
        }
        if (0 < (int)local_80) {
          FUN_1429e2110(lVar11,&local_88,*(undefined8 *)(param_1 + 0x18));
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
    }
    do {
      local_70 = local_70 + 1;
      if (local_70 < 0) goto LAB_1428cf218;
    } while ((local_70 < (int)local_78[1]) &&
            (*(longlong *)(*local_78 + (longlong)local_70 * 8) == 0));
  }
LAB_1428cf218:
  *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) & 0xfffffdff;
  param_3 = local_res18;
LAB_1428cf228:
  puVar17 = puVar12;
  puVar7 = puVar12;
  if (0 < *(int *)(param_1 + 0x168)) {
    do {
      FUN_1425399c0(*(undefined8 *)((longlong)puVar7 + *(longlong *)(param_1 + 0x160)));
      uVar15 = (int)puVar17 + 1;
      puVar17 = (undefined8 *)(ulonglong)uVar15;
      puVar7 = puVar7 + 1;
    } while ((int)uVar15 < *(int *)(param_1 + 0x168));
  }
  lVar11 = DAT_146b19a60;
  if ((DAT_146b17150[0xf6] == 0) ||
     (plVar10 = *(longlong **)(DAT_146b17150[0xf6] + 0x50), plVar10 == (longlong *)0x0))
  goto LAB_1428cf2c9;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    puVar17 = (undefined8 *)&DAT_00000004;
    if (DVar5 == DAT_1468c21c0) goto LAB_1428cf2b3;
  }
  else {
LAB_1428cf2b3:
    puVar17 = puVar12;
  }
  (**(code **)(*plVar10 + 0x2c0))(plVar10,*(int *)(lVar11 + (longlong)puVar17) == 1);
LAB_1428cf2c9:
  *(int *)(param_1 + 0x854) = *(int *)(param_1 + 0x854) + 1;
  bVar2 = false;
  iVar4 = *(int *)(param_1 + 0x854);
  iVar6 = *(int *)(param_1 + 0x848) + -1;
  lVar11 = (longlong)iVar6;
  local_68[2] = param_1;
  local_50 = param_3;
  if (-1 < iVar6) {
    lVar14 = lVar11 << 4;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x840);
      if (((*(int *)(lVar14 + 8 + lVar1) == 0) ||
          (plVar10 = *(longlong **)(lVar14 + lVar1), plVar10 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,local_68 + 2), cVar3 == '\0')) {
        bVar2 = true;
      }
      lVar14 = lVar14 + -0x10;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
    iVar4 = *(int *)(param_1 + 0x854);
  }
  *(int *)(param_1 + 0x854) = iVar4 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x840),0);
  }
  bVar2 = false;
  DAT_146535864 = DAT_146535864 + 1;
  lVar11 = (longlong)(DAT_146535858 + -1);
  if (-1 < DAT_146535858 + -1) {
    lVar14 = lVar11 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(DAT_146535850 + 8 + lVar14) == 0) ||
          (plVar10 = *(longlong **)(DAT_146535850 + lVar14), plVar10 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,local_68 + 2), cVar3 == '\0')) {
        bVar2 = true;
      }
      lVar14 = lVar14 + -0x10;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar4 = DAT_146535858;
  DAT_146535864 = DAT_146535864 + -1;
  if ((bVar2) && (DAT_146535864 < 1)) {
    puVar17 = puVar12;
    puVar7 = puVar12;
    if (0 < DAT_146535858) {
      do {
        if (((*(int *)(DAT_146535850 + 8 + (longlong)puVar17) == 0) ||
            (*(longlong **)(DAT_146535850 + (longlong)puVar17) == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(**(longlong **)(DAT_146535850 + (longlong)puVar17) + 0x10))(),
           cVar3 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535850,puVar7,1,1);
        }
        else {
          puVar7 = (undefined8 *)(ulonglong)((int)puVar7 + 1);
          puVar17 = puVar17 + 2;
        }
      } while ((int)puVar7 < DAT_146535858);
    }
    _DAT_146535860 = DAT_146535858 * 2;
    if (_DAT_146535860 < 3) {
      _DAT_146535860 = 2;
    }
    if ((_DAT_146535860 < iVar4) && (DAT_14653585c != DAT_146535858)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535850);
    }
  }
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x290))();
  }
  plVar10 = *(longlong **)(param_1 + 0x150);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x278))(plVar10,param_3);
  }
  puVar17 = puVar12;
  if (0 < *(int *)(param_1 + 0x168)) {
    do {
      uVar8 = *(undefined8 *)((longlong)puVar17 + *(longlong *)(param_1 + 0x160));
      plVar10 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar10 + 0x48))(plVar10,uVar8);
      uVar15 = (int)puVar12 + 1;
      puVar12 = (undefined8 *)(ulonglong)uVar15;
      puVar17 = puVar17 + 1;
    } while ((int)uVar15 < *(int *)(param_1 + 0x168));
  }
  FUN_1428502c0(param_1);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428cf500 FUN_1428cf500 body=755 status=ok
// SIG undefined FUN_1428cf500(void)

void FUN_1428cf500(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res18 [16];
  undefined8 in_stack_ffffffffffffff08;
  uint uVar12;
  ulonglong uVar11;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  ushort local_9e;
  undefined4 local_9c;
  longlong local_98 [2];
  longlong local_88;
  longlong local_70;
  longlong local_60;
  longlong *local_50;
  int local_48;
  longlong local_40;
  
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  if ((param_2 & 0x100) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
  }
  plVar5 = (longlong *)FName::FName(local_res18,L"PersistentLevel",1);
  lVar10 = 0;
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = FUN_1429a0270();
  uVar11 = (ulonglong)uVar12 << 0x20;
  uVar6 = FUN_1417985e0(uVar6,param_1,lVar2,0,uVar11,0,0,0,0);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  uVar6 = FURL::FURL(local_98,0);
  ULevel::Initialize(*(undefined8 *)(param_1 + 0x30),uVar6);
  plVar5 = local_50;
  iVar4 = local_48;
  if (local_40 != 0) {
    FMemory::Free();
    plVar5 = local_50;
    iVar4 = local_48;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = USkeletalMesh::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,uVar11 & 0xffffffff00000000,0,0,0,0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 200) = uVar6;
  FUN_1425c3dd0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 200),0,1);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xc0) = param_1;
  if ((param_2 & 0x100) == 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + 8);
    *puVar1 = *puVar1 & 0xfffffff7;
    puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 200) + 8);
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  else {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + 8);
    *puVar1 = *puVar1 | 8;
    puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 200) + 8);
    *puVar1 = *puVar1 | 8;
  }
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x30);
  lVar2 = DAT_146b17150;
  local_9e = local_9e & 0xfff0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_9c = 8;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 1;
  lVar9 = lVar10;
  if (*(longlong *)(DAT_146b17150 + 0x178) != 0) {
    lVar8 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    for (lVar3 = *(longlong *)(lVar2 + 0x178);
        (lVar9 = lVar10, lVar3 != 0 && (lVar9 = *(longlong *)(lVar2 + 0x178), lVar3 != lVar8));
        lVar3 = *(longlong *)(lVar3 + 0x30)) {
    }
  }
  lVar2 = DAT_146b17150;
  local_c8 = *(undefined8 *)(lVar9 + 0x18);
  lVar9 = lVar10;
  if (*(longlong *)(DAT_146b17150 + 0x178) != 0) {
    lVar8 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    for (lVar3 = *(longlong *)(lVar2 + 0x178);
        (lVar9 = lVar10, lVar3 != 0 && (lVar9 = *(longlong *)(lVar2 + 0x178), lVar3 != lVar8));
        lVar3 = *(longlong *)(lVar3 + 0x30)) {
    }
  }
  uVar6 = UWorld::SpawnActor(param_1,lVar9,0,0,&local_c8);
  FUN_142539720(*(undefined8 *)(param_1 + 0x30),uVar6);
  FUN_1428ce1e0(param_1,param_2);
  FUN_1428dc350(param_1,1,0);
  return;
}



// FUNCTION 1428cf800 FUN_1428cf800 body=367 status=ok
// SIG undefined FUN_1428cf800(void)

undefined8 FUN_1428cf800(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_78 [24];
  int local_60;
  int local_10;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) || (*(longlong *)(param_1 + 0x108) != 0)) {
    uVar4 = UNetDriver::GetNetMode();
    return uVar4;
  }
  if ((DAT_146b17150 != 0) && (lVar5 = FUN_1428761d0(DAT_146b17150,param_1), lVar5 != 0)) {
    if ((*(int *)(param_1 + 0x7f8) != 0) && (0 < *(int *)(param_1 + 0x7f8) + -1)) {
      FUN_14289aca0(local_78,lVar5 + 0xe8,*(undefined8 *)(param_1 + 0x7f0),
                    *(undefined4 *)(param_1 + 0x7ec));
      if (local_10 != 0) {
        cVar3 = FURL::HasOption(local_78,L"listen");
        if (cVar3 != '\0') {
          FURL::~FURL(local_78);
          return 2;
        }
        if ((local_60 != 0) && (0 < local_60 + -1)) {
          FURL::~FURL(local_78);
          return 3;
        }
      }
      FURL::~FURL(local_78);
      return 0;
    }
    lVar2 = *(longlong *)(lVar5 + 0x1c8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0xa8) != 0)) {
      cVar3 = FURL::HasOption(lVar2 + 0x40,L"listen");
      if (cVar3 != '\0') {
        return 2;
      }
      iVar1 = *(int *)(*(longlong *)(lVar5 + 0x1c8) + 0x58);
      if ((iVar1 != 0) && (0 < iVar1 + -1)) {
        return 3;
      }
    }
  }
  return 0;
}



// FUNCTION 1428cf970 IsDistanceDependentLevel body=178 status=ok
// SIG undefined IsDistanceDependentLevel(void)

ulonglong UWorldComposition::IsDistanceDependentLevel(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)(longlong)*(int *)(param_1 + 0x40);
  iVar5 = 0;
  plVar3 = plVar2;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar6 = 0;
    plVar4 = *(longlong **)(param_1 + 0x38);
    do {
      if (*plVar4 == param_2) {
LAB_1428cf9e8:
        if (iVar5 != -1) {
          plVar3 = (longlong *)((longlong)iVar5 * 0xb0);
          if ((*(char *)((longlong)(plVar3 + 0xe) + (longlong)*(longlong **)(param_1 + 0x38)) !=
               '\0') &&
             (plVar3 = *(longlong **)(param_1 + 0x48), (*(byte *)(plVar3[iVar5] + 0xb7) & 1) == 0))
          {
            return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
          }
        }
        break;
      }
      plVar3 = (longlong *)plVar4[1];
      plVar1 = plVar3 + (int)plVar4[2];
      for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
        if (*plVar3 == param_2) goto LAB_1428cf9e8;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
      plVar4 = plVar4 + 0x16;
    } while (lVar6 < (longlong)plVar2);
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 1428cfa30 IsGameWorld body=27 status=ok
// SIG undefined IsGameWorld(void)

longlong UWorld::IsGameWorld(longlong param_1)

{
  uint uVar1;
  uint7 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x708);
  uVar2 = (uint7)(uint3)(uVar1 >> 8);
  if ((uVar1 < 7) && ((0x6aU >> (uVar1 & 0x1f) & 1) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 1428cfa50 IsInSeamlessTravel body=27 status=ok
// SIG undefined IsInSeamlessTravel(void)

undefined1 UWorld::IsInSeamlessTravel(undefined8 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_14288cc20(DAT_146b17150,param_1);
  return *puVar1;
}



// FUNCTION 1428cfa70 FUN_1428cfa70 body=42 status=ok
// SIG undefined FUN_1428cfa70(void)

undefined1 FUN_1428cfa70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x970) != 0) {
    cVar1 = FUN_142498210(*(longlong *)(param_1 + 0x970),param_2,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428cfaa0 IsPlayInEditor body=11 status=ok
// SIG undefined IsPlayInEditor(void)

bool UWorld::IsPlayInEditor(longlong param_1)

{
  return *(int *)(param_1 + 0x708) == 3;
}



// FUNCTION 1428cfab0 IsPlayingReplay body=39 status=ok
// SIG undefined IsPlayingReplay(void)

undefined1 UWorld::IsPlayingReplay(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    cVar1 = FUN_142416ee0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428cfae0 FUN_1428cfae0 body=40 status=ok
// SIG undefined FUN_1428cfae0(void)

void FUN_1428cfae0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_146b17150;
  uVar2 = FUN_142876210(DAT_146b17150,param_1);
  UEngine::IsPreparingMapChange(uVar1,uVar2);
  return;
}



// FUNCTION 1428cfb10 FUN_1428cfb10 body=16 status=ok
// SIG undefined FUN_1428cfb10(void)

undefined4 FUN_1428cfb10(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x708) - 4;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
}



// FUNCTION 1428cfb20 FUN_1428cfb20 body=72 status=ok
// SIG undefined FUN_1428cfb20(void)

undefined8 FUN_1428cfb20(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x368))();
    if ((cVar1 == '\0') && (*(longlong **)(param_1 + 0x108) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x368))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1428cfb70 FUN_1428cfb70 body=37 status=ok
// SIG undefined FUN_1428cfb70(void)

undefined8 FUN_1428cfb70(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if ((plVar2 == (longlong *)0x0) &&
     (plVar2 = *(longlong **)(param_1 + 0x108), plVar2 == (longlong *)0x0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001428cfb7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0x368))();
  return uVar1;
}



// FUNCTION 1428cfba0 IsVisibilityRequestPending body=54 status=ok
// SIG undefined IsVisibilityRequestPending(void)

undefined1 UWorld::IsVisibilityRequestPending(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1415bac00();
  if ((cVar1 != '\0') &&
     ((*(longlong *)(param_1 + 0xf8) != 0 || (*(longlong *)(param_1 + 0x100) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1428cfbe0 FUN_1428cfbe0 body=700 status=ok
// SIG undefined FUN_1428cfbe0(void)

ulonglong FUN_1428cfbe0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong local_38 [4];
  
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 == 0) {
    cVar2 = FUN_14286abe0(DAT_146b17150,param_1,0x11a,0x11a);
    if (cVar2 != '\0') {
      plVar3 = (longlong *)FUN_142873bb0(DAT_146b17150,param_1,0x11a);
      *(longlong **)(param_1 + 0x38) = plVar3;
      (**(code **)(*plVar3 + 0x380))(plVar3,param_1);
      piVar6 = *(int **)(param_1 + 0x170);
      piVar4 = piVar6 + (longlong)*(int *)(param_1 + 0x178) * 0x20;
      for (; piVar6 != piVar4; piVar6 = piVar6 + 0x20) {
        if (*piVar6 == 0) {
          *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(param_1 + 0x38);
          break;
        }
      }
      piVar6 = *(int **)(param_1 + 0x170);
      piVar4 = piVar6 + (longlong)*(int *)(param_1 + 0x178) * 0x20;
      for (; piVar6 != piVar4; piVar6 = piVar6 + 0x20) {
        if (*piVar6 == 2) {
          *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(param_1 + 0x38);
          break;
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      local_38[0] = 0;
      local_38[1] = 0;
      cVar2 = (**(code **)(*plVar3 + 0x290))(plVar3,param_1 + 0x28,param_2,0,local_38);
      if (cVar2 == '\0') {
        FUN_1428c64f0(DAT_146b17150,param_1,*(undefined8 *)(param_1 + 0x38),2,local_38);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x380))(*(longlong **)(param_1 + 0x38),0);
        *(undefined8 *)(param_1 + 0x38) = 0;
        piVar6 = *(int **)(param_1 + 0x170);
        piVar4 = piVar6 + (longlong)*(int *)(param_1 + 0x178) * 0x20;
        for (; piVar6 != piVar4; piVar6 = piVar6 + 0x20) {
          if (*piVar6 == 0) {
            piVar6[4] = 0;
            piVar6[5] = 0;
            break;
          }
        }
        piVar6 = *(int **)(param_1 + 0x170);
        piVar4 = piVar6 + (longlong)*(int *)(param_1 + 0x178) * 0x20;
        if (piVar6 == piVar4) {
LAB_1428cfdd6:
          uVar5 = 0;
        }
        else {
          do {
            if (*piVar6 == 2) {
              piVar6[4] = 0;
              piVar6[5] = 0;
              goto LAB_1428cfdd6;
            }
            piVar6 = piVar6 + 0x20;
          } while (piVar6 != piVar4);
          uVar5 = 0;
        }
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b19b6c) &&
           (_Init_thread_header(&DAT_146b19b6c), DAT_146b19b6c == -1)) {
          uVar7 = FCommandLine::Get();
          DAT_146b19b6a = FParse::Param(uVar7,L"lanplay");
          _Init_thread_footer(&DAT_146b19b6c);
        }
        if ((DAT_146b19b6a == '\0') &&
           (cVar2 = FURL::HasOption(param_2,&DAT_1451e73e0), cVar2 == '\0')) {
          lVar8 = *(longlong *)(param_1 + 0x38);
          iVar1 = *(int *)(lVar8 + 0x60);
          if ((iVar1 < *(int *)(lVar8 + 100)) && (0x9c4 < iVar1)) {
            *(int *)(lVar8 + 100) = iVar1;
          }
        }
        *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x68);
        uVar5 = 1;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      return uVar5;
    }
    uVar9 = 1;
    lVar8 = 0;
  }
  else {
    uVar9 = 0;
  }
  local_38[2] = 0;
  local_38[3] = 0;
  uVar5 = FUN_1428c64f0(DAT_146b17150,param_1,lVar8,uVar9,local_38 + 2);
  if (local_38[2] != 0) {
    uVar5 = FMemory::Free();
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1428cfea0 LoadVorbisLibraries body=2746 status=ok
// SIG undefined LoadVorbisLibraries(void)

void LoadVorbisLibraries(void)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  undefined2 *puVar19;
  int iVar20;
  int iVar21;
  wchar_t *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  int local_130;
  int local_12c;
  undefined2 *local_128;
  int local_120;
  int local_11c;
  undefined2 *local_118;
  int local_110;
  int local_10c;
  undefined2 *local_108;
  int local_100;
  int local_fc;
  undefined2 *local_f8;
  int local_f0;
  int local_ec;
  undefined2 *local_e8;
  int local_e0;
  int local_dc;
  void *local_d8;
  int local_d0;
  int local_cc;
  void *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined2 *local_58;
  undefined2 *local_48;
  
  if (DAT_146b19b68 == '\0') {
    iVar12 = 0;
    local_b8 = 0;
    DAT_146b19b68 = '\x01';
    local_b0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"VS2015/",0x10);
    local_188 = (undefined8 *)0x0;
    local_180 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    puVar13 = local_188;
    FGenericPlatformString::Memcpy(local_188,L"Win32",0xc);
    local_198 = (wchar_t *)0x0;
    local_190 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    pwVar2 = local_198;
    FGenericPlatformString::Memcpy(local_198,L".dll",10);
    if (puVar13 == (undefined8 *)&DAT_1451ea208) {
      iVar11 = (int)local_180;
    }
    else {
      uVar4 = local_180._4_4_;
      local_180 = (ulonglong)local_180._4_4_ << 0x20;
      iVar11 = iVar12;
      if (uVar4 != 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_188,6);
        iVar11 = (int)local_180;
        puVar13 = local_188;
        uVar4 = local_180._4_4_;
      }
      iVar11 = iVar11 + 6;
      local_180 = CONCAT44(local_180._4_4_,iVar11);
      if ((int)uVar4 < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188);
        puVar13 = local_188;
        iVar11 = (int)local_180;
      }
      *puVar13 = 0x36006e00690057;
      *(undefined4 *)(puVar13 + 1) = 0x34;
    }
    if (pwVar2 == L"_64.dll") {
      iVar12 = (int)local_190;
    }
    else {
      uVar4 = local_190._4_4_;
      local_190 = (ulonglong)local_190._4_4_ << 0x20;
      if (uVar4 != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198,8);
        iVar12 = (int)local_190;
        uVar4 = local_190._4_4_;
      }
      iVar12 = iVar12 + 8;
      local_190 = CONCAT44(local_190._4_4_,iVar12);
      if ((int)uVar4 < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198);
        iVar12 = (int)local_190;
      }
      builtin_wcsncpy(local_198,L"_64.dll",8);
    }
    puVar6 = (undefined8 *)FPaths::EngineDir(local_78);
    iVar5 = *(int *)(puVar6 + 1);
    local_178 = (void *)*puVar6;
    *puVar6 = 0;
    local_170._0_4_ = *(int *)(puVar6 + 1);
    local_170._4_4_ = *(int *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    if (local_170._4_4_ < (int)((0x1a - (uint)(iVar5 != 0)) + (int)local_170)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178);
    }
    FString::PathAppend(&local_178,L"Binaries/ThirdParty/Ogg/",0x18);
    iVar5 = local_170._4_4_;
    iVar20 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar20 = 0;
    }
    iVar21 = 2;
    iVar18 = 1;
    if (((int)local_170 != 0) || (iVar9 = iVar21, iVar20 == -1)) {
      iVar9 = iVar18;
    }
    iVar9 = iVar9 + (int)local_170;
    local_158 = local_178;
    local_178 = (void *)0x0;
    local_150._0_4_ = (int)local_170;
    local_150._4_4_ = local_170._4_4_;
    local_170 = 0;
    if (iVar5 < iVar9 + iVar20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158);
    }
    FString::PathAppend(&local_158,puVar13);
    iVar9 = local_150._4_4_;
    iVar20 = (int)local_b0;
    iVar5 = (int)local_b0 + -1;
    if ((int)local_b0 == 0) {
      iVar5 = 0;
    }
    if (((int)local_150 != 0) || (iVar10 = iVar21, iVar5 == -1)) {
      iVar10 = iVar18;
    }
    iVar10 = iVar10 + (int)local_150;
    local_c8 = local_158;
    local_158 = (void *)0x0;
    local_c0 = (int)local_150;
    local_bc = local_150._4_4_;
    local_150 = 0;
    if (iVar9 < iVar10 + iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
    }
    lVar14 = local_b8;
    FString::PathAppend(&local_c8,local_b8);
    if (local_158 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_178 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    puVar6 = (undefined8 *)FPaths::EngineDir(local_68);
    iVar5 = *(int *)(puVar6 + 1);
    local_168 = (void *)*puVar6;
    *puVar6 = 0;
    local_160._0_4_ = *(int *)(puVar6 + 1);
    local_160._4_4_ = *(int *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    if (local_160._4_4_ < (int)((0x1d - (uint)(iVar5 != 0)) + (int)local_160)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_168);
    }
    FString::PathAppend(&local_168,L"Binaries/ThirdParty/Vorbis/");
    iVar5 = local_160._4_4_;
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = iVar11 + -1;
    }
    if (((int)local_160 != 0) || (iVar9 = iVar21, iVar11 == -1)) {
      iVar9 = iVar18;
    }
    iVar9 = iVar9 + (int)local_160;
    local_148 = local_168;
    local_168 = (void *)0x0;
    local_140._0_4_ = (int)local_160;
    local_140._4_4_ = local_160._4_4_;
    local_160 = 0;
    if (iVar5 < iVar9 + iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148);
    }
    FString::PathAppend(&local_148,puVar13,iVar11);
    iVar11 = local_140._4_4_;
    if (iVar20 == 0) {
      iVar20 = 0;
    }
    else {
      iVar20 = iVar20 + -1;
    }
    puVar8 = (undefined2 *)0x0;
    if (((int)local_140 != 0) || (iVar20 == -1)) {
      iVar21 = iVar18;
    }
    iVar21 = (int)local_140 + iVar21;
    local_d8 = local_148;
    local_148 = (void *)0x0;
    local_d0 = (int)local_140;
    local_cc = local_140._4_4_;
    local_140 = 0;
    if (iVar11 < iVar21 + iVar20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
    }
    FString::PathAppend(&local_d8,lVar14,iVar20);
    if (local_148 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_168 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    pvVar3 = local_c8;
    lVar14 = (longlong)local_c0;
    local_138 = (undefined2 *)0x0;
    local_130 = local_c0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_138,(7 - (uint)(local_c0 != 0)) + local_c0,0);
    puVar7 = local_138;
    _guard_xfg_dispatch_icall_nop(local_138,pvVar3,lVar14 * 2);
    iVar11 = local_130;
    lVar14 = (longlong)local_130;
    local_130 = (7 - (uint)(local_130 != 0)) + local_130;
    if (local_12c < local_130) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,iVar11);
      puVar7 = local_138;
    }
    lVar14 = lVar14 - (ulonglong)(iVar11 != 0);
    *(undefined8 *)(puVar7 + lVar14) = 0x6f00620069006c;
    *(undefined4 *)(puVar7 + lVar14 + 4) = 0x670067;
    puVar7[lVar14 + 6] = 0;
    if (local_130 < 2) {
      local_a8 = (undefined2 *)0x0;
      local_a0 = iVar12;
      if (iVar12 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar12,0);
        puVar8 = local_a8;
        _guard_xfg_dispatch_icall_nop(local_a8,local_198,(longlong)iVar12 * 2);
      }
      iVar20 = local_a0;
      if (puVar7 != (undefined2 *)0x0) {
        FMemory::Free(puVar7);
      }
    }
    else {
      iVar11 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar11 = 0;
      }
      if ((local_130 != 0) || (iVar5 = 1, iVar11 == 0)) {
        iVar5 = 0;
      }
      iVar5 = iVar5 + iVar11 + local_130;
      local_128 = puVar7;
      local_120 = local_130;
      local_11c = local_12c;
      if (local_12c < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128,iVar5);
      }
      iVar5 = local_120;
      puVar8 = local_128;
      iVar20 = local_120;
      local_a8 = local_128;
      local_a0 = local_120;
      if (iVar11 != 0) {
        lVar14 = (longlong)local_120;
        local_120 = iVar11 + (uint)(local_120 == 0) + local_120;
        if (local_11c < local_120) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,iVar5);
        }
        iVar20 = local_120;
        puVar8 = local_128;
        puVar7 = local_128 + (lVar14 - (ulonglong)(iVar5 != 0));
        _guard_xfg_dispatch_icall_nop(puVar7,local_198,(longlong)iVar11 * 2);
        puVar7[iVar11] = 0;
        local_a8 = puVar8;
        local_a0 = iVar20;
      }
    }
    puVar7 = &DAT_143f3eda8;
    if (iVar20 != 0) {
      puVar7 = puVar8;
    }
    lVar14 = FWindowsPlatformProcess::GetDllHandle(puVar7);
    pvVar3 = local_d8;
    lVar15 = (longlong)local_d0;
    local_118 = (undefined2 *)0x0;
    local_110 = local_d0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_118,(10 - (uint)(local_d0 != 0)) + local_d0,0);
    puVar7 = local_118;
    _guard_xfg_dispatch_icall_nop(local_118,pvVar3,lVar15 * 2);
    iVar11 = local_110;
    lVar15 = (longlong)local_110;
    local_110 = (10 - (uint)(local_110 != 0)) + local_110;
    local_fc = local_10c;
    if (local_10c < local_110) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,iVar11);
      puVar7 = local_118;
      local_fc = local_10c;
    }
    puVar17 = (undefined2 *)0x0;
    builtin_wcsncpy(puVar7 + (lVar15 - (ulonglong)(iVar11 != 0)),L"libvorbis",10);
    if (local_110 < 2) {
      local_98 = (undefined2 *)0x0;
      puVar19 = puVar17;
      local_90 = iVar12;
      local_58 = puVar7;
      if (iVar12 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar12,0);
        puVar19 = local_98;
        _guard_xfg_dispatch_icall_nop(local_98,local_198,(longlong)iVar12 * 2);
      }
    }
    else {
      iVar11 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar11 = 0;
      }
      if ((local_110 != 0) || (iVar5 = 1, iVar11 == 0)) {
        iVar5 = 0;
      }
      local_58 = (undefined2 *)0x0;
      local_108 = puVar7;
      local_100 = local_110;
      if (local_fc < iVar11 + iVar5 + local_110) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108);
      }
      iVar5 = local_100;
      puVar19 = local_108;
      puVar7 = puVar17;
      local_90 = local_100;
      if (iVar11 != 0) {
        lVar15 = (longlong)local_100;
        local_100 = iVar11 + (uint)(local_100 == 0) + local_100;
        if (local_fc < local_100) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,iVar5,local_fc,0);
        }
        iVar20 = local_100;
        puVar19 = local_108;
        puVar17 = local_108 + (lVar15 - (ulonglong)(iVar5 != 0));
        _guard_xfg_dispatch_icall_nop(puVar17,local_198,(longlong)iVar11 * 2);
        puVar17[iVar11] = 0;
        local_90 = iVar20;
      }
    }
    iVar11 = local_90;
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
    puVar8 = &DAT_143f3eda8;
    if (iVar11 != 0) {
      puVar8 = puVar19;
    }
    lVar15 = FWindowsPlatformProcess::GetDllHandle(puVar8);
    pvVar3 = local_d8;
    lVar16 = (longlong)local_d0;
    local_f0 = local_d0;
    local_f8 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_f8,(0xe - (uint)(local_d0 != 0)) + local_d0,0);
    puVar8 = local_f8;
    _guard_xfg_dispatch_icall_nop(local_f8,pvVar3,lVar16 * 2);
    iVar11 = local_f0;
    lVar16 = (longlong)local_f0;
    local_f0 = (0xe - (uint)(local_f0 != 0)) + local_f0;
    local_dc = local_ec;
    if (local_ec < local_f0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar11);
      puVar8 = local_f8;
      local_dc = local_ec;
    }
    puVar7 = (undefined2 *)0x0;
    iVar5 = 0;
    puVar1 = (undefined4 *)(puVar8 + (lVar16 - (ulonglong)(iVar11 != 0)));
    *puVar1 = 0x69006c;
    puVar1[1] = 0x760062;
    puVar1[2] = 0x72006f;
    puVar1[3] = 0x690062;
    *(undefined8 *)(puVar1 + 4) = 0x6c006900660073;
    *(undefined2 *)(puVar1 + 6) = 0x65;
    *(undefined2 *)((longlong)puVar1 + 0x1a) = 0;
    if (local_f0 < 2) {
      local_88 = (undefined2 *)0x0;
      puVar17 = puVar7;
      local_80 = iVar12;
      local_48 = puVar8;
      if (iVar12 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar12,0);
        puVar17 = local_88;
        _guard_xfg_dispatch_icall_nop(local_88,local_198,(longlong)iVar12 * 2);
      }
    }
    else {
      iVar11 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar11 = 0;
      }
      if ((local_f0 == 0) && (iVar11 != 0)) {
        iVar5 = 1;
      }
      local_48 = (undefined2 *)0x0;
      local_e8 = puVar8;
      local_e0 = local_f0;
      if (local_dc < local_f0 + iVar5 + iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
      }
      iVar12 = local_e0;
      puVar17 = local_e8;
      puVar8 = puVar7;
      local_80 = local_e0;
      if (iVar11 != 0) {
        lVar16 = (longlong)local_e0;
        local_e0 = local_e0 + (uint)(local_e0 == 0) + iVar11;
        if (local_dc < local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar12);
        }
        iVar5 = local_e0;
        puVar17 = local_e8;
        puVar7 = local_e8 + (lVar16 - (ulonglong)(iVar12 != 0));
        _guard_xfg_dispatch_icall_nop(puVar7,local_198,(longlong)iVar11 * 2);
        puVar7[iVar11] = 0;
        local_80 = iVar5;
      }
    }
    iVar12 = local_80;
    if (puVar19 != (undefined2 *)0x0) {
      FMemory::Free(puVar19);
    }
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
    puVar8 = &DAT_143f3eda8;
    if (iVar12 != 0) {
      puVar8 = puVar17;
    }
    lVar16 = FWindowsPlatformProcess::GetDllHandle(puVar8);
    if (((lVar14 == 0) || (lVar15 == 0)) || (DAT_146b196d4 = 1, lVar16 == 0)) {
      DAT_146b196d4 = 0;
    }
    LOCK();
    UNLOCK();
    LOCK();
    if (DAT_146b196d4 == 0) {
      DAT_146b196d4 = 0;
    }
    UNLOCK();
    if (puVar17 != (undefined2 *)0x0) {
      FMemory::Free(puVar17);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_198 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_188 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1428d0960 LogBox body=503 status=ok
// SIG undefined LogBox(void)

void UVisualLoggerKismetLibrary::LogBox
               (undefined8 param_1,float *param_2,longlong *param_3,undefined8 param_4,
               undefined8 param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [40];
  
  if (param_6 != '\0') {
    FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)param_2[3],(double)param_2[4],
                        (double)param_2[5]);
    puVar8 = &DAT_143f3eda8;
    puVar7 = &DAT_143f3eda8;
    if (local_70 != 0) {
      puVar7 = local_78;
    }
    FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*param_2,(double)param_2[1],
                        (double)param_2[2]);
    puVar9 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar9 = local_88;
    }
    if ((int)param_3[1] != 0) {
      puVar8 = (undefined2 *)*param_3;
    }
    FString::PrintfImpl(local_68,L"LogBox: \'%s\' - BoxMin: (%s) | BoxMax: (%s)",puVar8,puVar9,
                        puVar7);
    uVar5 = FText::FromString(local_48,local_68);
    uVar6 = FUN_14161fb50(local_30,&param_5);
    FMessageLog::Info(uVar6,local_58,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_30);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d0b60 LogLocation body=388 status=ok
// SIG undefined LogLocation(void)

void UVisualLoggerKismetLibrary::LogLocation(undefined8 param_1,float *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  double dVar9;
  char in_stack_00000038;
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [40];
  
  if (in_stack_00000038 != '\0') {
    dVar9 = (double)param_2[2];
    FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*param_2,(double)param_2[1],
                        dVar9);
    puVar7 = &DAT_143f3eda8;
    puVar8 = &DAT_143f3eda8;
    if (local_70 != 0) {
      puVar8 = local_78;
    }
    if ((int)param_3[1] != 0) {
      puVar7 = (undefined2 *)*param_3;
    }
    FString::PrintfImpl(local_68,L"LogLocation: \'%s\' - Location: (%s)",puVar7,puVar8,dVar9);
    uVar5 = FText::FromString(local_48,local_68);
    uVar6 = FUN_14161fb50(local_30,&stack0x00000030);
    FMessageLog::Info(uVar6,local_58,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_30);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d0cf0 FUN_1428d0cf0 body=519 status=ok
// SIG undefined FUN_1428d0cf0(void)

void FUN_1428d0cf0(undefined8 param_1,float *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  char in_stack_00000040;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [88];
  
  if (in_stack_00000040 != '\0') {
    fVar3 = param_2[2];
    fVar4 = param_2[1];
    fVar5 = *param_2;
    FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)fVar5,(double)fVar4,
                        (double)fVar3);
    puVar10 = &DAT_143f3eda8;
    puVar11 = &DAT_143f3eda8;
    if (local_a0 != 0) {
      puVar11 = local_a8;
    }
    FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)fVar5,(double)fVar4,
                        (double)fVar3);
    puVar12 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      puVar12 = local_b8;
    }
    if ((int)param_4[1] != 0) {
      puVar10 = (undefined2 *)*param_4;
    }
    FString::PrintfImpl(local_98,L"Log: \'%s\' - segment from (%s) to (%s)",puVar10,puVar12,puVar11)
    ;
    uVar8 = FText::FromString(local_78,local_98);
    uVar9 = FUN_14161fb50(local_60,&stack0x00000038);
    FMessageLog::Info(uVar9,local_88,uVar8);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_60);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d0f00 LogText body=305 status=ok
// SIG undefined LogText(void)

void UVisualLoggerKismetLibrary::LogText
               (undefined8 param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined8 local_res18 [2];
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [40];
  
  local_res18[0] = param_3;
  if (param_4 != '\0') {
    if ((int)param_2[1] == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    FString::PrintfImpl(local_68,L"LogText: \'%s\'",puVar7);
    uVar5 = FText::FromString(local_48,local_68);
    uVar6 = FUN_14161fb50(local_30,local_res18);
    FMessageLog::Info(uVar6,local_58,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_30);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d1040 MarkObjectsPendingKill body=66 status=ok
// SIG undefined MarkObjectsPendingKill(void)

void UWorld::MarkObjectsPendingKill(void)

{
  undefined1 local_res10 [24];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_18 = &LAB_1428c6fb0;
  FUN_1417a4830(0x428c6fb0,&local_18,1,0,0x20000000);
  return;
}



// FUNCTION 1428d1090 ModifyLevel body=55 status=ok
// SIG undefined ModifyLevel(void)

void UWorld::ModifyLevel(undefined8 param_1,longlong *param_2)

{
  if ((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 3 & 1) != 0)) {
    (**(code **)(*param_2 + 0x70))(param_2,0);
    (**(code **)(*(longlong *)param_2[0x19] + 0x70))((longlong *)param_2[0x19],0);
  }
  return;
}



// FUNCTION 1428d10d0 NormalizeByTotalWeight body=294 status=ok
// SIG undefined NormalizeByTotalWeight(void)

void FWindData::NormalizeByTotalWeight(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  
  if (0.0 < param_2) {
    param_2 = 1.0 / param_2;
    *param_1 = param_2 * *param_1;
    param_1[1] = param_2 * param_1[1];
    param_1[2] = param_2 * param_1[2];
    fVar4 = param_2 * param_1[3];
    fVar5 = param_2 * param_1[4];
    param_2 = param_2 * param_1[5];
    param_1[3] = fVar4;
    param_1[4] = fVar5;
    param_1[5] = param_2;
    fVar1 = fVar5 * fVar5 + fVar4 * fVar4 + param_2 * param_2;
    if (1e-08 < fVar1) {
      auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar2 = auVar3._0_4_;
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      param_1[3] = fVar4 * fVar2;
      param_1[4] = fVar5 * fVar2;
      param_1[5] = param_2 * fVar2;
    }
  }
  return;
}



// FUNCTION 1428d1240 FUN_1428d1240 body=196 status=ok
// SIG undefined FUN_1428d1240(void)

undefined8 FUN_1428d1240(longlong param_1)

{
  wint_t wVar1;
  wint_t wVar2;
  wint_t *pwVar3;
  undefined2 *puVar4;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90) == 0)) {
    if (*(int *)(param_1 + 2000) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(param_1 + 0x7c8);
    }
    for (pwVar3 = &DAT_1451e5e94;
        (wVar1 = *(wint_t *)((longlong)(puVar4 + -0xa28f2f4a) + (longlong)pwVar3), wVar1 != 0 ||
        (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
      if (wVar1 != *pwVar3) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar3);
        if (wVar1 != wVar2) {
          if (wVar1 == wVar2) {
            return 1;
          }
          return 2;
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1428d1310 FUN_1428d1310 body=4865 status=ok
// SIG undefined FUN_1428d1310(void)

void FUN_1428d1310(longlong param_1,longlong *param_2,byte param_3,longlong *param_4)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  void *_Src;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 **ppuVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  undefined2 *puVar17;
  wint_t *pwVar18;
  int iVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  short *psVar22;
  byte local_res8 [8];
  uint local_588;
  undefined4 local_584;
  undefined4 local_580;
  int local_57c;
  int local_578 [2];
  undefined2 *local_570;
  undefined8 local_568;
  short *local_560;
  undefined8 local_558;
  longlong local_548;
  undefined8 uStack_540;
  longlong *local_538;
  int local_530;
  longlong local_528;
  undefined8 local_520;
  longlong local_518;
  undefined8 local_510;
  longlong local_508;
  ulonglong local_500;
  undefined2 *local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  ulonglong local_4e0;
  undefined2 *local_4d8;
  undefined8 local_4d0;
  longlong local_4c8 [5];
  undefined8 local_4a0;
  short *local_498;
  undefined8 local_490;
  undefined8 local_488;
  int iStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 local_474;
  short *local_470;
  undefined8 local_468;
  longlong local_460 [5];
  LARGE_INTEGER local_438;
  undefined8 local_430;
  undefined2 *local_428;
  int local_420;
  void *local_418;
  ulonglong local_410;
  undefined **local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined **local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8 [2];
  longlong local_3a8 [2];
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  longlong local_388 [2];
  longlong local_378 [2];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  longlong local_358 [2];
  longlong local_348 [2];
  longlong local_338 [2];
  void *local_328 [2];
  undefined1 local_318 [8];
  longlong *local_310;
  undefined1 local_2f8 [104];
  int local_290;
  undefined1 local_288 [104];
  int local_220;
  longlong local_218;
  longlong *local_210;
  byte local_1ef;
  longlong local_188;
  longlong local_128;
  longlong local_118;
  undefined1 local_108 [104];
  int local_a0;
  undefined1 local_98 [112];
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90) != 0) {
    if (param_3 == 6) {
      local_4c8[1] = 8;
      local_4c8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4c8,0);
      lVar13 = local_4c8[0];
      FGenericPlatformString::Memcpy(local_4c8[0],L"?failed",0x10);
      local_518 = 0;
      local_510 = 0;
      FUN_14158ce90(param_4,&local_518);
      if (-1 < (char)param_4[5]) {
        if ((int)local_510 < 2) {
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_318,L"Connection Failed.",L"NetworkErrors",
                             L"GenericConnectionFailed");
          uVar7 = FText::ToString(uVar7);
          FString::operator=(&local_518,uVar7);
          if (local_310 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_310 + 1;
            lVar11 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            lVar13 = local_4c8[0];
            if ((int)lVar11 == 1) {
              (**(code **)*local_310)(local_310);
              LOCK();
              piVar1 = (int *)((longlong)local_310 + 0xc);
              iVar19 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              lVar13 = local_4c8[0];
              if (iVar19 == 1) {
                (**(code **)(*local_310 + 8))(local_310,1);
                lVar13 = local_4c8[0];
              }
            }
          }
        }
        FUN_1428c64f0(DAT_146b17150,param_1 + -0x28,*(undefined8 *)(param_1 + 0x10),5,&local_518);
        if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_2 + 0x2f8))(param_2);
        }
      }
      if (local_518 != 0) {
        FMemory::Free();
      }
      if (lVar13 != 0) {
        FMemory::Free(lVar13);
        return;
      }
      return;
    }
    if (param_3 == 0x11) {
      local_548 = 0;
      uStack_540 = 0;
      FUN_14158ce90(param_4,&local_548);
      if (local_548 != 0) {
        FMemory::Free();
        return;
      }
      return;
    }
    if (param_3 == 0x12) {
      local_588 = 0;
      local_460[0] = 0;
      local_460[1] = 0;
      (**(code **)(*param_4 + 0x68))(param_4,&local_588);
      FUN_14158ce90(param_4,local_460);
      if (-1 < (char)param_4[5]) {
        (**(code **)(*(longlong *)param_2[0xd] + 0x290))
                  ((longlong *)param_2[0xd],&local_588,local_460);
      }
      if (local_460[0] != 0) {
        FMemory::Free();
        return;
      }
      return;
    }
    return;
  }
  cVar4 = UNetConnection::IsClientMsgTypeValid(param_2,param_3);
  if (cVar4 == '\0') {
    *(byte *)(param_4 + 5) = *(byte *)(param_4 + 5) | 0x80;
    return;
  }
  if (0x22 < param_3) {
    return;
  }
  switch(param_3) {
  case 0:
    local_584 = 0;
    local_580 = FUN_1416727f0(CONCAT71((int7)((ulonglong)
                                              (IMAGE_DOS_HEADER_140000000.e_magic +
                                              (&switchD_1428d155f::switchdataD_1428d2614)
                                              [(&switchD_1428d155f::switchdataD_1428d2640)[param_3]]
                                              ) >> 8),1));
    plVar8 = (longlong *)param_4[1];
    local_470 = (short *)0x0;
    local_468 = 0;
    if ((undefined4 *)plVar8[1] < (undefined4 *)*plVar8 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,&local_584,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,&local_584,4);
      }
    }
    else {
      local_584 = *(undefined4 *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    FUN_14158ce90(param_4,param_2 + 0x328);
    FUN_14158ce90(param_4,param_2 + 0x32a);
    psVar22 = local_470;
    if (-1 < (char)param_4[5]) {
      cVar4 = FNetworkVersion::IsNetworkCompatible(local_580,local_584);
      if (cVar4 == '\0') {
        lVar13 = *(longlong *)param_2[0x2b0];
        if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_218,lVar13,0);
          local_res8[0] = 2;
          if ((byte *)local_210[1] < (byte *)*local_210 + 1) {
            (**(code **)(local_218 + 0x50))(&local_218,local_res8,1);
          }
          else {
            local_res8[0] = *(byte *)*local_210;
            *local_210 = *local_210 + 1;
          }
          if ((undefined4 *)local_210[1] < (undefined4 *)*local_210 + 1) {
            (**(code **)(local_218 + 0x50))(&local_218,&local_580,4);
            if ((local_1ef & 0x10) != 0) {
              FArchive::ByteSwap(&local_218,&local_580,4);
            }
          }
          else {
            local_580 = *(undefined4 *)*local_210;
            *local_210 = *local_210 + 4;
          }
          (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                    (*(longlong **)param_2[0x2b0],local_398,&local_218,1);
          if (local_118 != 0) {
            FMemory::Free();
          }
          if (local_128 != 0) {
            FMemory::Free();
          }
          if (local_188 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_218);
        }
        (**(code **)(*param_2 + 0x2c8))(param_2,1);
        (**(code **)(*param_2 + 0x2f8))(param_2);
        psVar22 = local_470;
      }
      else if ((int)local_468 < 2) {
        FUN_1428d71f0(param_1 + -0x28,param_2);
        psVar22 = local_470;
      }
      else if (((DAT_146aff4e8 == 0) || (DAT_146aff4e0 == (longlong *)0x0)) ||
              (cVar4 = (**(code **)(*DAT_146aff4e0 + 0x18))(), cVar4 == '\0')) {
        local_4c8[2] = 0;
        local_4c8[3] = 0x13;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4c8 + 2,0);
        FGenericPlatformString::Memcpy(local_4c8[2],L"Encryption failure",0x26);
        FUN_1404dfdc0(param_2,local_4c8 + 2);
        (**(code **)(*param_2 + 0x2c8))(param_2,1);
        psVar22 = local_470;
        if (local_4c8[2] != 0) {
          FMemory::Free();
          psVar22 = local_470;
        }
      }
      else {
        FWeakObjectPtr::operator=(&local_478,param_2);
        local_488 = FUN_1428d7060;
        iStack_480 = 0;
        local_538 = (longlong *)0x0;
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        local_530 = 3;
        local_538 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_1440e00b8;
          FWeakObjectPtr::operator=(plVar8 + 1,param_1 + -0x28);
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_488;
          *(undefined4 *)((longlong)plVar8 + 0x14) = local_488._4_4_;
          *(int *)(plVar8 + 3) = iStack_480;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_47c;
          *(undefined4 *)(plVar8 + 4) = local_478;
          *(undefined4 *)((longlong)plVar8 + 0x24) = local_474;
          lVar13 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar13;
          *plVar8 = (longlong)&PTR_FUN_1440e0100;
        }
        plVar8 = (longlong *)0x0;
        if (DAT_146aff4e8 != 0) {
          plVar8 = DAT_146aff4e0;
        }
        (**(code **)(*plVar8 + 0x38))(plVar8,&local_470,&local_538);
        if (local_530 != 0) {
          psVar22 = local_470;
          if (local_538 == (longlong *)0x0) goto LAB_1428d2440;
          (**(code **)(*local_538 + 0x28))(local_538,0);
          if (local_538 != (longlong *)0x0) {
            local_538 = (longlong *)FMemory::Realloc(local_538,0,0);
          }
          local_530 = 0;
        }
        psVar22 = local_470;
        if (local_538 != (longlong *)0x0) {
          FMemory::Free(local_538);
          psVar22 = local_470;
        }
      }
    }
    goto LAB_1428d2440;
  default:
    return;
  case 4:
    plVar8 = (longlong *)param_4[1];
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,&local_57c,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,&local_57c,4);
      }
    }
    else {
      local_57c = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    if ((char)param_4[5] < '\0') {
      return;
    }
    iVar19 = 0x708;
    if ((0x707 < local_57c) &&
       (iVar19 = *(int *)(*(longlong *)(param_1 + 0x10) + 100), local_57c < iVar19)) {
      iVar19 = local_57c;
    }
    *(int *)(param_2 + 7) = iVar19;
    return;
  case 5:
    param_4[7] = param_4[7] + 0x1000000;
    local_3e0 = &PTR_FUN_143f740c8;
    local_3c8 = 0;
    local_3c0 = 0;
    local_4f8 = (undefined2 *)0x0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    local_4f0 = 0;
    FUN_14158ce90(param_4,param_2 + 0x33);
    plVar8 = param_2 + 0x36;
    FUN_14158ce90(param_4,plVar8);
    FUN_1425da060(param_4,&local_3e0);
    FUN_14158ce90(param_4,&local_4f8);
    param_4[7] = param_4[7] + -0x1000000;
    if ((char)param_4[5] < '\0') {
      *(undefined4 *)(param_2 + 0x34) = 0;
      if (*(int *)((longlong)param_2 + 0x1a4) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0x33,0);
      }
      *(undefined4 *)(param_2 + 0x37) = 0;
      if (*(int *)((longlong)param_2 + 0x1bc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar8,0);
      }
      goto LAB_1428d1c86;
    }
    if ((int)param_2[0x37] == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*plVar8;
    }
    FUN_14289aca0(local_2f8,0,puVar17,0);
    if (local_290 == 0) {
      *(byte *)(param_4 + 5) = *(byte *)(param_4 + 5) | 0x80;
      FURL::~FURL();
      if (local_4f8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1404bf980(&local_3e0);
      return;
    }
    uVar15 = (int)param_2[10] + 1;
    FUN_1428ba050(local_2f8,L"SplitscreenCount",0,&DAT_1468e2410);
    uVar16 = 0xff;
    if ((int)uVar15 < 0x100) {
      uVar16 = uVar15 & 0xff;
    }
    FString::PrintfImpl(&local_428,L"SplitscreenCount=%i",uVar16);
    puVar17 = &DAT_143f3eda8;
    if (local_420 != 0) {
      puVar17 = local_428;
    }
    FURL::AddOption(local_2f8,puVar17);
    if (local_428 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar7 = FUN_1428bd910(local_2f8,local_388,0);
    FString::operator=(plVar8,uVar7);
    if (local_388[0] != 0) {
      FMemory::Free();
    }
    if ((int)param_2[0x37] == 0) {
      psVar22 = &DAT_143f3eda8;
    }
    else {
      psVar22 = (short *)*plVar8;
      sVar3 = *psVar22;
      while ((sVar3 != 0 && (sVar3 != 0x3f))) {
        psVar2 = psVar22 + 1;
        psVar22 = psVar22 + 1;
        sVar3 = *psVar2;
      }
    }
    FUN_1404c0940(param_2 + 0x2b,&local_3e0);
    puVar17 = &DAT_143f3eda8;
    if ((int)local_4f0 != 0) {
      puVar17 = local_4f8;
    }
    puVar9 = (undefined8 *)FName::FName(local_390,puVar17,1);
    FUN_1425d1620(param_2,*puVar9);
    plVar8 = *(longlong **)(param_1 + 0x118);
    local_4c8[4] = 0;
    local_4a0 = 0;
    if (plVar8 == (longlong *)0x0) {
LAB_1428d1c2d:
      FUN_1428dc630(param_1 + -0x28,param_2);
    }
    else {
      local_508 = 0;
      local_500 = 0;
      if (*psVar22 != 0) {
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (psVar22[lVar13] != 0);
        uVar16 = (int)lVar13 + 1;
        local_500 = (ulonglong)uVar16;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_508,0);
        }
        FGenericPlatformString::Memcpy(local_508,psVar22,(longlong)(int)uVar16 * 2);
      }
      lVar13 = *plVar8;
      uVar7 = (**(code **)(*param_2 + 0x288))(param_2,local_378,0);
      (**(code **)(lVar13 + 0x7f8))(plVar8,&local_508,uVar7,param_2 + 0x2b,local_4c8 + 4);
      if (local_378[0] != 0) {
        FMemory::Free();
      }
      if (local_508 != 0) {
        FMemory::Free();
      }
      if ((int)local_4a0 < 2) goto LAB_1428d1c2d;
      FUN_1404dfdc0(param_2,local_4c8 + 4);
      (**(code **)(*param_2 + 0x2c8))(param_2,1);
    }
    if (local_4c8[4] != 0) {
      FMemory::Free();
    }
    FURL::~FURL(local_2f8);
LAB_1428d1c86:
    if (local_4f8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_1404bf980(&local_3e0);
    return;
  case 9:
    if (param_2[6] != 0) {
      return;
    }
    local_498 = (short *)0x0;
    local_490 = 0;
    if ((int)param_2[0x37] == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)param_2[0x36];
    }
    FUN_14289aca0(local_108,0,puVar17,0);
    if (local_a0 == 0) {
      *(byte *)(param_4 + 5) = *(byte *)(param_4 + 5) | 0x80;
      FURL::~FURL(local_108);
      psVar22 = local_498;
      goto LAB_1428d2440;
    }
    param_1 = param_1 + -0x28;
    lVar13 = FUN_142552430(param_1,param_2,2,local_108,param_2 + 0x2b,&local_498,0);
    param_2[6] = lVar13;
    if (lVar13 == 0) {
      FUN_1404dfdc0(param_2,&local_498);
      (**(code **)(*param_2 + 0x2c8))(param_2,1);
      FURL::~FURL(local_108);
      psVar22 = local_498;
      goto LAB_1428d2440;
    }
    UNetConnection::SetClientLoginState(param_2,3);
    local_570 = (undefined2 *)0x0;
    local_568 = (undefined2 *)0x0;
    pcVar12 = (char *)FUN_14288cc20(DAT_146b17150,param_1);
    if (*pcVar12 == '\0') {
      cVar4 = FUN_14270dfe0(param_2[6]);
      if (cVar4 != '\0') goto LAB_1428d1e83;
      lVar13 = UObjectBaseUtility::GetOutermost(param_1);
      local_430 = *(undefined8 *)(lVar13 + 0x18);
      FName::ToString(&local_430,&local_418);
      _Src = local_418;
      iVar19 = (int)local_410;
      local_568 = (undefined2 *)CONCAT44(local_568._4_4_,iVar19);
      if ((iVar19 != 0) || (local_568._4_4_ != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_570,local_410 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_570,_Src,(longlong)iVar19 * 2);
      }
    }
    else {
      ppuVar10 = (undefined2 **)FSeamlessTravelHandler::GetDestinationMapName(pcVar12,local_328);
      local_418 = local_328[0];
      if (&local_570 != ppuVar10) {
        if (local_570 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_570 = *ppuVar10;
        *ppuVar10 = (undefined2 *)0x0;
        local_568 = ppuVar10[1];
        ppuVar10[1] = (undefined2 *)0x0;
        local_418 = local_328[0];
      }
    }
    if (local_418 != (void *)0x0) {
      FMemory::Free(local_418);
    }
LAB_1428d1e83:
    pwVar18 = &DAT_1451e5354;
    puVar17 = &DAT_143f3eda8;
    if ((int)local_568 != 0) {
      puVar17 = local_570;
    }
    do {
      wVar5 = *(wint_t *)((longlong)(puVar17 + -0xa28f29aa) + (longlong)pwVar18);
      if ((wVar5 == 0) && (*pwVar18 == 0)) goto LAB_1428d1f0a;
      if (wVar5 != *pwVar18) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar18);
        if (wVar5 != wVar6) goto LAB_1428d1ed3;
      }
      pwVar18 = pwVar18 + 1;
    } while( true );
  case 10:
    puVar17 = (undefined2 *)0x0;
    local_560 = (short *)0x0;
    local_558 = 0;
    local_408 = &PTR_FUN_143f740c8;
    local_400 = 0;
    uStack_3f8 = 0;
    local_3f0 = 0;
    local_3e8 = 0;
    FUN_14158ce90(param_4,&local_560);
    FUN_1425da060(param_4,&local_408);
    if (-1 < (char)param_4[5]) {
      puVar20 = &DAT_143f3eda8;
      psVar22 = &DAT_143f3eda8;
      if ((int)local_558 != 0) {
        psVar22 = local_560;
      }
      FUN_14289aca0(local_288,0,psVar22,0);
      if (local_220 != 0) {
        uVar15 = (int)param_2[10] + 2;
        FUN_1428ba050(local_288,L"SplitscreenCount",0,&DAT_1468e2410);
        uVar16 = 0xff;
        if ((int)uVar15 < 0x100) {
          uVar16 = uVar15 & 0xff;
        }
        FString::PrintfImpl(&local_488,L"SplitscreenCount=%i",uVar16);
        pcVar14 = (code *)&DAT_143f3eda8;
        if (iStack_480 != 0) {
          pcVar14 = local_488;
        }
        FURL::AddOption(local_288,pcVar14);
        if (local_488 != (code *)0x0) {
          FMemory::Free();
        }
        uVar7 = FUN_1428bd910(local_288,local_358,0);
        FString::operator=(&local_560,uVar7);
        if (local_358[0] != 0) {
          FMemory::Free();
        }
        if ((int)local_558 == 0) {
          psVar22 = &DAT_143f3eda8;
        }
        else {
          sVar3 = *local_560;
          psVar22 = local_560;
          while ((sVar3 != 0 && (sVar3 != 0x3f))) {
            psVar2 = psVar22 + 1;
            psVar22 = psVar22 + 1;
            sVar3 = *psVar2;
          }
        }
        plVar8 = *(longlong **)(param_1 + 0x118);
        local_528 = 0;
        local_520 = 0;
        if (plVar8 == (longlong *)0x0) {
LAB_1428d216e:
          lVar13 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x360))
                             (*(longlong **)(param_1 + 0x10),param_2);
          FUN_1404c0940(lVar13 + 0x158,&local_408);
          FUN_1425d1620(lVar13,param_2[0x306]);
          FString::operator=(lVar13 + 0x1b0,&local_560);
          lVar11 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(param_1 + 0x160));
          FUN_1425d0d80(lVar13,*(undefined8 *)(lVar11 + 0x18));
          psVar22 = &DAT_143f3eda8;
          if ((int)local_558 != 0) {
            psVar22 = local_560;
          }
          FUN_14289aca0(local_98,0,psVar22,0);
          param_1 = param_1 + -0x28;
          lVar11 = FUN_142552430(param_1,lVar13,2,local_98,lVar13 + 0x158,&local_528,
                                 (char)(int)param_2[10]);
          if (lVar11 != 0) {
            local_4d8 = (undefined2 *)0x0;
            local_4d0 = 0;
            pcVar12 = (char *)FUN_14288cc20(DAT_146b17150,param_1);
            if (*pcVar12 == '\0') {
              cVar4 = FUN_14270dfe0(*(undefined8 *)(lVar13 + 0x30));
              if (cVar4 != '\0') goto LAB_1428d23b2;
              lVar11 = UObjectBaseUtility::GetOutermost(param_1);
              local_460[4] = *(undefined8 *)(lVar11 + 0x18);
              FName::ToString(local_460 + 4,local_3b8);
              FString::operator=(&local_4d8,local_3b8);
              local_338[0] = local_3b8[0];
            }
            else {
              uVar7 = FSeamlessTravelHandler::GetDestinationMapName(pcVar12,local_338);
              FString::operator=(&local_4d8,uVar7);
            }
            if (local_338[0] != 0) {
              FMemory::Free();
            }
            puVar17 = local_4d8;
            if ((int)local_4d0 != 0) {
              puVar20 = local_4d8;
            }
LAB_1428d23b2:
            pwVar18 = &DAT_1451e5444;
            do {
              wVar5 = *(wint_t *)((longlong)(puVar20 + -0xa28f2a22) + (longlong)pwVar18);
              if ((wVar5 == 0) && (*pwVar18 == 0)) goto LAB_1428d23fc;
              if (wVar5 != *pwVar18) {
                wVar5 = towlower(wVar5);
                wVar6 = towlower(*pwVar18);
                if (wVar5 != wVar6) goto LAB_1428d23f1;
              }
              pwVar18 = pwVar18 + 1;
            } while( true );
          }
          lVar11 = (longlong)(int)param_2[10];
          if ((int)param_2[10] != 0) {
            local_588 = 0;
            local_res8[0] = *(longlong *)param_2[9] != lVar13;
            puVar20 = puVar17;
            puVar21 = puVar17;
            do {
              uVar16 = (uint)puVar20;
              uVar15 = (uint)puVar21;
              puVar17 = (undefined2 *)((longlong)puVar17 + 1);
              puVar21 = (undefined2 *)(ulonglong)(uVar15 + 1);
              if ((longlong)puVar17 < lVar11) {
                plVar8 = (longlong *)(param_2[9] + (longlong)puVar17 * 8);
                do {
                  if ((bool)local_res8[0] != (*plVar8 != lVar13)) break;
                  puVar21 = (undefined2 *)(ulonglong)((int)puVar21 + 1);
                  puVar17 = (undefined2 *)((longlong)puVar17 + 1);
                  plVar8 = plVar8 + 1;
                } while ((longlong)puVar17 < lVar11);
              }
              iVar19 = (int)puVar21 - uVar15;
              if (local_res8[0] != 0) {
                if (uVar16 != uVar15) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(param_2[9] + (longlong)(int)uVar16 * 8),
                             (void *)(param_2[9] + (longlong)(int)uVar15 * 8),(longlong)iVar19 << 3)
                  ;
                  uVar16 = local_588;
                }
                local_588 = uVar16 + iVar19;
                puVar20 = (undefined2 *)(ulonglong)local_588;
              }
              local_res8[0] = local_res8[0] ^ 1;
            } while ((longlong)puVar17 < lVar11);
            *(int *)(param_2 + 10) = (int)puVar20;
          }
          FUN_1404dfdc0(param_2,&local_528);
          (**(code **)(*param_2 + 0x2c8))(param_2,1);
          goto LAB_1428d2409;
        }
        local_4e0 = 0;
        local_4e8 = 0;
        if (*psVar22 != 0) {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (psVar22[lVar13] != 0);
          uVar16 = (int)lVar13 + 1;
          local_4e0 = (ulonglong)uVar16;
          if (0 < (int)uVar16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4e8,0);
          }
          FGenericPlatformString::Memcpy(local_4e8,psVar22,(longlong)(int)uVar16 * 2);
        }
        lVar13 = *plVar8;
        uVar7 = (**(code **)(*param_2 + 0x288))(param_2,local_348,0);
        (**(code **)(lVar13 + 0x7f8))(plVar8,&local_4e8,uVar7,&local_408,&local_528);
        if (local_348[0] != 0) {
          FMemory::Free();
        }
        if (local_4e8 != 0) {
          FMemory::Free();
        }
        if ((int)local_520 < 2) goto LAB_1428d216e;
        FUN_1404dfdc0(param_2,&local_528);
        (**(code **)(*param_2 + 0x2c8))(param_2,1);
        goto LAB_1428d2415;
      }
      *(byte *)(param_4 + 5) = *(byte *)(param_4 + 5) | 0x80;
      goto LAB_1428d242a;
    }
    goto LAB_1428d242f;
  case 0xf:
    plVar8 = (longlong *)param_4[1];
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_578,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,local_578,4);
      }
    }
    else {
      local_578[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    if ((char)param_4[5] < '\0') {
      return;
    }
    if (-1 < local_578[0]) {
      if ((int)param_2[10] <= local_578[0]) {
        return;
      }
      param_2 = *(longlong **)(param_2[9] + (longlong)local_578[0] * 8);
    }
    if (param_2 == (longlong *)0x0) {
      return;
    }
    iVar19 = 0;
    while( true ) {
      if (iVar19 < 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1b8) <= iVar19) break;
      lVar13 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar19 * 8);
      if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0x508) == 0)) &&
         (*(longlong **)(lVar13 + 0x680) == param_2)) {
        FUN_142543860(param_1 + -0x28,lVar13,0,1);
        return;
      }
      iVar19 = iVar19 + 1;
    }
    return;
  case 0x11:
    local_460[2] = 0;
    local_460[3] = 0;
    FUN_14158ce90(param_4,local_460 + 2);
    if (local_460[2] == 0) {
      return;
    }
    FMemory::Free();
    return;
  case 0x20:
    QueryPerformanceCounter(&local_438);
    FString::PrintfImpl(local_3a8,L"%08X",local_438.s.LowPart);
    FString::operator=(param_2 + 0x31,local_3a8);
    if (local_3a8[0] != 0) {
      FMemory::Free();
    }
    UNetConnection::SetExpectedClientLoginMsgType(param_2,5);
    FUN_1428d6f50(param_2,param_2 + 0x31);
    (**(code **)(*param_2 + 0x2c8))(param_2,0);
    return;
  case 0x21:
    param_2 = param_2 + 0x32a;
    break;
  case 0x22:
    param_2 = param_2 + 0x32c;
  }
  FUN_14158ce90(param_4,param_2);
  return;
LAB_1428d1ed3:
  local_548 = 0;
  uStack_540 = 0;
  local_368 = 0;
  uStack_364 = 0;
  uStack_360 = 0;
  uStack_35c = 0;
  FUN_1426ffc80(param_2[6],&local_570,2,1,&local_368);
LAB_1428d1f0a:
  *(undefined4 *)(param_2 + 0x42) = 0;
  if (local_570 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FURL::~FURL(local_108);
  psVar22 = local_498;
  goto LAB_1428d2440;
LAB_1428d23f1:
  psVar22 = (short *)(*(longlong *)(lVar13 + 0x30) + 0x6c8);
  *psVar22 = *psVar22 + 1;
LAB_1428d23fc:
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
LAB_1428d2409:
  FURL::~FURL(local_98);
LAB_1428d2415:
  if (local_528 != 0) {
    FMemory::Free();
  }
LAB_1428d242a:
  FURL::~FURL(local_288);
LAB_1428d242f:
  FUN_1404bf980(&local_408);
  psVar22 = local_560;
LAB_1428d2440:
  if (psVar22 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d2670 OggReadMemory body=64 status=ok
// SIG undefined OggReadMemory(void)

uint OggReadMemory(void *param_1,int param_2,int param_3,longlong param_4)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_4 + 0x18) - *(uint *)(param_4 + 0x1c);
  if ((uint)(param_3 * param_2) <= uVar1) {
    uVar1 = param_3 * param_2;
  }
  _guard_xfg_dispatch_icall_nop
            (param_1,(void *)((ulonglong)*(uint *)(param_4 + 0x1c) + *(longlong *)(param_4 + 0x10)),
             (ulonglong)uVar1);
  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + uVar1;
  return uVar1;
}



// FUNCTION 1428d26b0 OggReadStreaming body=196 status=ok
// SIG undefined OggReadStreaming(void)

longlong OggReadStreaming(void *param_1,int param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int local_res8 [2];
  
  lVar7 = 0;
  uVar8 = param_3 * param_2;
  while( true ) {
    if (uVar8 == 0) {
      return lVar7;
    }
    local_res8[0] = 0;
    uVar3 = IStreamingManager::Get();
    plVar4 = (longlong *)UNiagaraSystem::GetEffectType(uVar3);
    lVar5 = (**(code **)(*plVar4 + 0xd8))
                      (plVar4,*(undefined8 *)(param_4 + 0x50),
                       (ulonglong)*(uint *)(param_4 + 0x1c) / (ulonglong)*(uint *)(param_4 + 0x58),
                       local_res8);
    uVar1 = (ulonglong)*(uint *)(param_4 + 0x1c) % (ulonglong)*(uint *)(param_4 + 0x58);
    uVar6 = local_res8[0] - (int)uVar1;
    uVar2 = uVar8;
    if (uVar6 <= uVar8) {
      uVar2 = uVar6;
    }
    if (lVar5 == 0) break;
    if (uVar2 == 0) {
      return lVar7;
    }
    _guard_xfg_dispatch_icall_nop(param_1,(void *)(uVar1 + lVar5),(ulonglong)uVar2);
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + uVar2;
    lVar7 = lVar7 + (ulonglong)uVar2;
    param_1 = (void *)((longlong)param_1 + (ulonglong)uVar2);
    uVar8 = uVar8 - uVar2;
  }
  return lVar7;
}



// FUNCTION 1428d27b0 FUN_1428d27b0 body=50 status=ok
// SIG undefined FUN_1428d27b0(void)

void FUN_1428d27b0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x1ac) & 1) != 0) {
    FUN_1428d4280(&DAT_146535880,param_1 + 400);
    *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) & 0xfe;
  }
  return;
}



// FUNCTION 1428d27f0 OnLevelAddedToWorld body=94 status=ok
// SIG undefined OnLevelAddedToWorld(void)

void UWorldComposition::OnLevelAddedToWorld(undefined8 param_1,undefined8 param_2)

{
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_18 [8];
  int local_10;
  
  FUN_1428cc620(param_1,local_18,param_2);
  local_20 = (float)local_10;
  local_28 = (float)local_18._0_4_;
  local_24 = (float)local_18._4_4_;
  FUN_1425157e0(param_2,&local_28,0);
  return;
}



// FUNCTION 1428d2850 FUN_1428d2850 body=563 status=ok
// SIG undefined FUN_1428d2850(void)

void FUN_1428d2850(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong local_res10;
  undefined1 local_128 [56];
  longlong local_f0;
  longlong local_c0;
  longlong local_b0;
  undefined1 local_98 [56];
  longlong local_60;
  longlong local_30;
  longlong local_20;
  
  lVar4 = UObjectBaseUtility::GetOutermost();
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FWorldTileInfo::FWorldTileInfo(local_128);
  uVar7 = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x7e0);
  if (lVar6 != 0) {
    if (0 < *(int *)(lVar6 + 0x40)) {
      plVar9 = *(longlong **)(lVar6 + 0x38);
      uVar10 = uVar7;
      uVar12 = uVar7;
      do {
        iVar11 = (int)uVar12;
        if (*plVar9 == *(longlong *)(lVar4 + 0x18)) {
LAB_1428d2908:
          if ((iVar11 != -1) &&
             (plVar9 = *(longlong **)(lVar6 + 0x38) + (longlong)iVar11 * 0x16,
             plVar9 != (longlong *)0x0)) {
            FWorldTileInfo::operator=(local_128,plVar9 + 3);
          }
          break;
        }
        plVar8 = (longlong *)plVar9[1];
        plVar2 = plVar8 + (int)plVar9[2];
        for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
          if (*plVar8 == *(longlong *)(lVar4 + 0x18)) goto LAB_1428d2908;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar10 = uVar10 + 1;
        plVar9 = plVar9 + 0x16;
      } while ((longlong)uVar10 < (longlong)*(int *)(lVar6 + 0x40));
    }
  }
  uVar5 = FWorldTileInfo::FWorldTileInfo(local_98);
  cVar3 = FWorldTileInfo::operator==(local_128,uVar5);
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (cVar3 == '\0') {
    lVar6 = operator_new(0x90);
    if (lVar6 != 0) {
      uVar7 = FWorldTileInfo::FWorldTileInfo(lVar6,local_128);
    }
    puVar1 = (ulonglong *)(lVar4 + 0x88);
    if (puVar1 == &local_res10) {
      if (uVar7 == 0) goto LAB_1428d2a37;
      if (*(longlong *)(uVar7 + 0x78) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(uVar7 + 0x68) != 0) {
        FMemory::Free();
      }
      uVar10 = uVar7;
      if (*(longlong *)(uVar7 + 0x38) != 0) {
        FMemory::Free();
      }
    }
    else {
      uVar10 = *puVar1;
      *puVar1 = uVar7;
      if (uVar10 == 0) goto LAB_1428d2a37;
      if (*(longlong *)(uVar10 + 0x78) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(uVar10 + 0x68) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(uVar10 + 0x38) != 0) {
        FMemory::Free();
      }
    }
    FMemory::operator_delete(uVar10,0x90);
  }
LAB_1428d2a37:
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d2ab0 PopulateStreamingLevels body=455 status=ok
// SIG undefined PopulateStreamingLevels(void)

void UWorldComposition::PopulateStreamingLevels(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x40)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = puVar9 + (longlong)*(int *)(param_1 + 0x40) * 0x16;
  do {
    if (puVar9 == puVar8) {
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
LAB_1428d2b6f:
      lVar7 = 0;
    }
    else {
      lVar5 = FUN_142a2f930();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1428d2b6f;
    }
    FUN_1417846f0(lVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar6 = ULevelStreamingDynamic::GetPrivateStaticClass();
    lVar7 = FUN_1417985e0(uVar6,lVar7,0,0x40,0,0,0,0,0);
    ULevelStreaming::SetWorldAssetByPackageName(lVar7,*puVar9);
    puVar2 = (undefined8 *)(lVar7 + 0x58);
    *(undefined8 *)(lVar7 + 0x50) = *puVar9;
    if (puVar2 != puVar9 + 1) {
      iVar3 = *(int *)(puVar9 + 2);
      _Src = (void *)puVar9[1];
      *(int *)(lVar7 + 0x60) = iVar3;
      if ((iVar3 == 0) && (*(int *)(lVar7 + 100) == 0)) {
        *(undefined4 *)(lVar7 + 100) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar3);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar3 << 3);
      }
    }
    iVar3 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar3 + 1;
    if (*(int *)(param_1 + 0x54) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar9 = puVar9 + 0x16;
    *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar7;
  } while( true );
}



// FUNCTION 1428d2c80 PopulateStreamingLevelsToConsider body=169 status=ok
// SIG undefined PopulateStreamingLevelsToConsider(void)

void UWorld::PopulateStreamingLevelsToConsider(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 0x98);
  uVar4 = 0;
  plVar3 = *(longlong **)(param_1 + 0x88);
  uVar5 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x90) < plVar3) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar3;
      local_res10 = lVar1;
      if (*(char *)(lVar1 + 0xb4) == '\0') {
        ULevelStreaming::OnLevelAdded(lVar1);
      }
      cVar2 = FUN_142543c80(lVar1);
      if (cVar2 != '\0') {
        FUN_14058c900(param_1 + 0x98,local_res8,&local_res10,0);
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 1428d2d30 FUN_1428d2d30 body=579 status=ok
// SIG undefined FUN_1428d2d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428d2d30(longlong param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [6];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar6 = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  if (param_2 == '\0') {
    if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xc0) == 0) {
      *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xc0) = param_1;
    }
    if (*(longlong *)(param_1 + 0x188) == 0) {
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x30);
    }
    lVar5 = UObjectBaseUtility::GetOutermost();
    *(uint *)(lVar5 + 0x50) = *(uint *)(lVar5 + 0x50) | 0x20000;
  }
  bVar2 = false;
  DAT_14653578c = DAT_14653578c + 1;
  lVar5 = (longlong)(DAT_146535780 + -1);
  if (-1 < DAT_146535780 + -1) {
    lVar7 = lVar5 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + DAT_146535778) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + DAT_146535778), plVar1 == (longlong *)0x0)) {
LAB_1428d2e38:
        bVar2 = true;
      }
      else {
        local_a8 = local_98;
        cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,local_98 + 2);
        if (cVar4 == '\0') goto LAB_1428d2e38;
      }
      lVar7 = lVar7 + -0x10;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar3 = DAT_146535780;
  DAT_14653578c = DAT_14653578c + -1;
  if ((bVar2) && (DAT_14653578c < 1)) {
    uVar8 = uVar6;
    if (0 < DAT_146535780) {
      do {
        if (((*(int *)(uVar8 + 8 + DAT_146535778) == 0) ||
            (*(longlong **)(uVar8 + DAT_146535778) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(uVar8 + DAT_146535778) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535778,uVar6,1,1);
        }
        else {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar8 = uVar8 + 0x10;
        }
      } while ((int)uVar6 < DAT_146535780);
    }
    _DAT_146535788 = DAT_146535780 * 2;
    if (_DAT_146535788 < 3) {
      _DAT_146535788 = 2;
    }
    if ((_DAT_146535788 < iVar3) && (DAT_146535784 != DAT_146535780)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535778);
    }
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_98 + 2);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d2f80 PostDuplicate body=34 status=ok
// SIG undefined PostDuplicate(void)

void UWorldComposition::PostDuplicate(undefined8 param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 != '\0') {
    lVar1 = UObjectBaseUtility::GetOutermost();
    FixupForPIE(param_1,*(undefined4 *)(lVar1 + 0x54));
  }
  return;
}



// FUNCTION 1428d2fb0 PostInitProperties body=69 status=ok
// SIG undefined PostInitProperties(void)

void UWorldComposition::PostInitProperties(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_1417931d0();
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    lVar1 = UObjectBaseUtility::GetOutermost(param_1);
    if ((*(uint *)(lVar1 + 0x50) >> 0x14 & 1) == 0) {
      Rescan(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1428d3000 FUN_1428d3000 body=1035 status=ok
// SIG undefined FUN_1428d3000(void)

void FUN_1428d3000(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong *local_res18;
  longlong local_res20;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [24];
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  
  puVar16 = (undefined4 *)0x0;
  local_res8[0] = 0;
  lVar10 = *(longlong *)(param_1[4] + 0x18);
  if (DAT_1465356b8 != DAT_1465356e4) {
    puVar5 = DAT_1465356f0;
    if (DAT_1465356f0 == (undefined *)0x0) {
      puVar5 = &DAT_1465356e8;
    }
    iVar17 = *(int *)(puVar5 + ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                               (longlong)DAT_1465356f8 - 1U) * 4);
    while (iVar17 != -1) {
      lVar1 = (longlong)iVar17 * 0x18;
      if (*(longlong *)(lVar1 + DAT_1465356b0) == lVar10) {
        puVar18 = (undefined4 *)(lVar1 + DAT_1465356b0);
        if (iVar17 != -1) goto LAB_1428d30bd;
        break;
      }
      iVar17 = *(int *)(lVar1 + 0x10 + DAT_1465356b0);
    }
  }
  puVar18 = puVar16;
LAB_1428d30bd:
  puVar6 = puVar18 + 2;
  if (puVar18 == (undefined4 *)0x0) {
    puVar6 = puVar16;
  }
  if (puVar6 == (undefined4 *)0x0) {
    uVar12 = 7;
  }
  else {
    uVar12 = *puVar6;
  }
  *(undefined4 *)(param_1 + 0xe1) = uVar12;
  UObject::PostLoad(param_1);
  param_1[0x31] = param_1[6];
  plVar9 = param_1;
  FUN_1428d5680();
  plVar8 = param_1 + 0x11;
  iVar17 = 1;
  puVar18 = puVar16;
LAB_1428d3110:
  do {
    while( true ) {
      iVar13 = (int)plVar9;
      iVar15 = (int)puVar16;
      if ((iVar15 < 0) || (iVar13 = (int)param_1[0x12], iVar13 <= iVar15)) {
        if (DAT_146b19b69 == '\0') {
          plVar8 = (longlong *)FUN_14178e3a0();
          plVar9 = (longlong *)FMemory::Realloc(0,0x20);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_GetPoolName_143f3f048;
            plVar9[1] = (longlong)FUN_1428d35a0;
            lVar10 = FDelegateHandle::GenerateNewID();
            plVar9[3] = lVar10;
            *plVar9 = (longlong)&PTR_GetPoolName_143f3f090;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
            (**(code **)(*plVar9 + 0x20))(plVar9,local_98);
            iVar17 = (int)plVar8[1];
            *(int *)(plVar8 + 1) = iVar17 + 1;
            if (*(int *)((longlong)plVar8 + 0xc) < iVar17 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar17);
            }
            puVar11 = (undefined8 *)((longlong)iVar17 * 0x10 + *plVar8);
            *puVar11 = plVar9;
            *(undefined4 *)(puVar11 + 1) = 2;
          }
          plVar8 = (longlong *)FUN_14178e330();
          iVar13 = 0;
          plVar9 = (longlong *)FMemory::Realloc(0,0x20);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_GetPoolName_143f3f048;
            plVar9[1] = (longlong)&LAB_1428dc4c0;
            lVar10 = FDelegateHandle::GenerateNewID();
            plVar9[3] = lVar10;
            *plVar9 = (longlong)&PTR_GetPoolName_143f3f090;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
            plVar14 = plVar9;
            (**(code **)(*plVar9 + 0x20))(plVar9,local_90);
            iVar13 = (int)plVar14;
            iVar17 = (int)plVar8[1];
            *(int *)(plVar8 + 1) = iVar17 + 1;
            if (*(int *)((longlong)plVar8 + 0xc) < iVar17 + 1) {
              plVar14 = plVar8;
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar17);
              iVar13 = (int)plVar14;
            }
            puVar11 = (undefined8 *)((longlong)iVar17 * 0x10 + *plVar8);
            *puVar11 = plVar9;
            *(undefined4 *)(puVar11 + 1) = 2;
          }
          DAT_146b19b69 = '\x01';
        }
        AK::MemoryMgr::StartProfileThreadUsage(iVar13);
        return;
      }
      lVar10 = *plVar8;
      local_res20 = (longlong)iVar15 * 8;
      plVar9 = *(longlong **)(lVar10 + local_res20);
      local_res18 = plVar9;
      if (plVar9 != (longlong *)0x0) break;
      iVar15 = (iVar13 - iVar15) + -1;
      if (iVar15 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar10 + local_res20),(void *)(lVar10 + (longlong)iVar17 * 8),
                   (longlong)iVar15 << 3);
        iVar13 = (int)param_1[0x12];
      }
      *(int *)(param_1 + 0x12) = iVar13 + -1;
      plVar9 = plVar8;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
    }
    if (param_1[6] == 0) {
LAB_1428d31dd:
      bVar2 = false;
    }
    else {
      local_res10 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_70 = 0xffffffff;
      local_6c = 0;
      uVar7 = FSoftObjectPath::FSoftObjectPath(local_88,param_1);
      FSoftObjectPath::operator=(&local_60,uVar7);
      FWeakObjectPtr::operator=(&local_70,param_1);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_6c = CONCAT44(DAT_1464b56f4,(undefined4)local_6c);
      puVar18 = (undefined4 *)0x1;
      cVar3 = FSoftObjectPath::operator==(plVar9 + 7,&local_60);
      if ((cVar3 == '\0') && (local_res18[0x24] != param_1[6])) goto LAB_1428d31dd;
      bVar2 = true;
    }
    plVar9 = local_res18;
    if ((puVar18 != (undefined4 *)0x0) && (puVar18 = (undefined4 *)0x0, local_58 != 0)) {
      FMemory::Free();
    }
    if (bVar2) {
      iVar13 = (int)param_1[0x12];
      iVar4 = (iVar13 - iVar15) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar8 + local_res20),(void *)(*plVar8 + (longlong)iVar17 * 8),
                   (longlong)iVar4 << 3);
        iVar13 = (int)param_1[0x12];
      }
      *(int *)(param_1 + 0x12) = iVar13 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
      iVar15 = iVar15 + -1;
      iVar17 = iVar17 + -1;
      plVar9 = param_1;
      UObjectBaseUtility::MarkPackageDirty();
    }
    else {
      ULevelStreaming::OnLevelAdded(plVar9);
      cVar3 = FUN_142543c80();
      if (cVar3 != '\0') {
        plVar9 = param_1 + 0x13;
        FUN_14058c900(plVar9,local_res8,&local_res18,0);
        puVar16 = (undefined4 *)(ulonglong)(iVar15 + 1);
        iVar17 = iVar17 + 1;
        goto LAB_1428d3110;
      }
    }
    puVar16 = (undefined4 *)(ulonglong)(iVar15 + 1);
    iVar17 = iVar17 + 1;
  } while( true );
}



// FUNCTION 1428d3410 FUN_1428d3410 body=256 status=ok
// SIG undefined FUN_1428d3410(void)

void FUN_1428d3410(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  UObject::PostLoad();
  uVar7 = *(ulonglong *)(param_1 + 0x20);
  uVar6 = 0;
  if (uVar7 != 0) {
    lVar5 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1428d346b;
  }
  uVar7 = uVar6;
LAB_1428d346b:
  if ((*(uint *)(uVar7 + 0x708) < 7) && ((0x6aU >> (*(uint *)(uVar7 + 0x708) & 0x1f) & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    _Src = *(void **)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x50);
    plVar1 = (longlong *)(uVar7 + 0x88);
    if ((*(int *)(uVar7 + 0x94) < iVar2) &&
       (*(undefined4 *)(uVar7 + 0x90) = 0, iVar2 != *(int *)(uVar7 + 0x94))) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,iVar2);
      uVar6 = (ulonglong)*(uint *)(uVar7 + 0x90);
    }
    iVar4 = iVar2 + (int)uVar6;
    *(int *)(uVar7 + 0x90) = iVar4;
    if (*(int *)(uVar7 + 0x94) < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,uVar6);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)(int)uVar6 * 8),_Src,(longlong)iVar2 << 3);
    UWorld::PopulateStreamingLevelsToConsider(uVar7);
  }
  return;
}



// FUNCTION 1428d3520 FUN_1428d3520 body=38 status=ok
// SIG undefined FUN_1428d3520(void)

undefined1 FUN_1428d3520(longlong param_1)

{
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x204) & 1) == 0) {
    FUN_14253c2d0(*(longlong *)(param_1 + 0x30),1);
    return 1;
  }
  return 0;
}



// FUNCTION 1428d3550 FUN_1428d3550 body=14 status=ok
// SIG undefined FUN_1428d3550(void)

void FUN_1428d3550(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1428d3560 PrepareMapChange body=55 status=ok
// SIG undefined PrepareMapChange(void)

void UWorld::PrepareMapChange(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_146b17150;
  uVar2 = FUN_142876210(DAT_146b17150,param_1);
  FUN_142884ee0(uVar1,uVar2,param_2);
  return;
}



// FUNCTION 1428d35a0 FUN_1428d35a0 body=532 status=ok
// SIG undefined FUN_1428d35a0(void)

void FUN_1428d35a0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  if (0 < DAT_146b19a78) {
    TBaseMulticastDelegate<void>::Broadcast(&DAT_146535690);
  }
  iVar13 = 0;
  if (0 < DAT_146b19a78) {
    do {
      lVar6 = FWeakObjectPtr::Get(DAT_146b19a70 + (longlong)iVar13 * 8);
      if (lVar6 != 0) {
        lVar7 = UObjectBaseUtility::GetOutermost(lVar6);
        plVar10 = *(longlong **)(DAT_146b17150 + 0xc18);
        plVar1 = plVar10 + *(int *)(DAT_146b17150 + 0xc20);
        lVar8 = DAT_146b17150;
        for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
          lVar2 = *(longlong *)(*plVar10 + 0x288);
          if (lVar2 != 0) {
            lVar8 = FUN_142876210(lVar8,lVar2);
            plVar12 = *(longlong **)(lVar8 + 0x248);
            plVar11 = plVar12 + (longlong)*(int *)(lVar8 + 0x250) * 2;
            for (; plVar12 != plVar11; plVar12 = plVar12 + 2) {
              plVar3 = (longlong *)*plVar12;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x358))(plVar3,lVar6);
              }
            }
            ULevelStreaming::BroadcastLevelLoadedStatus(lVar2,*(undefined8 *)(lVar7 + 0x18),0);
            lVar8 = DAT_146b17150;
          }
        }
        lVar8 = (longlong)DAT_146b19a88;
        uVar9 = *(undefined8 *)(lVar7 + 0x18);
        iVar5 = DAT_146b19a88 + 1;
        if (DAT_146b19a8c < iVar5) {
          iVar4 = DAT_146b19a88;
          DAT_146b19a88 = iVar5;
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b19a80,iVar4);
          iVar5 = DAT_146b19a88;
        }
        DAT_146b19a88 = iVar5;
        *(undefined8 *)(DAT_146b19a80 + lVar8 * 8) = uVar9;
        uStack_30 = local_res8;
        local_38 = 0x428c6fb0;
        uStack_34 = 1;
        uVar9 = UObjectBaseUtility::GetOutermost(lVar6);
        FUN_1417a4830(uVar9,&local_38,1,0,0x20000000);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < DAT_146b19a78);
  }
  DAT_146b19a78 = 0;
  if (DAT_146b19a7c == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b19a70,0);
  return;
}



// FUNCTION 1428d37c0 FUN_1428d37c0 body=419 status=ok
// SIG undefined FUN_1428d37c0(void)

void FUN_1428d37c0(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_3 == '\0') {
    uVar1 = param_2[4];
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *param_2;
    uVar3 = param_2[3];
    puVar8 = puVar9 + 5;
    uVar4 = param_2[1];
    if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar9;
    *(undefined8 **)(param_1 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *(undefined4 *)(puVar9 + 2) = uVar2;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar3;
    *puVar9 = &PTR_LAB_143f59420;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined4 *)(puVar9 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 0;
  }
  uVar7 = DAT_146535900;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[3] = uVar7;
  iVar5 = param_2[5];
  iVar6 = param_2[2];
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar9 + 2) = 0;
  *(undefined4 *)(puVar9 + 4) = 0;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f59410;
  puVar9[2] = 1;
  *(undefined4 *)(puVar9 + 3) = 2;
  *(int *)((longlong)puVar9 + 0x1c) = iVar5 - iVar6;
  return;
}



// FUNCTION 1428d3970 ReadCompressedData body=337 status=ok
// SIG undefined ReadCompressedData(void)

undefined8
FVorbisAudioInfo::ReadCompressedData(longlong param_1,void *param_2,char param_3,uint param_4)

{
  BOOL BVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  
  uVar4 = 0;
  uVar3 = 0;
  LOCK();
  bVar7 = DAT_146b196d4 == 0;
  if (bVar7) {
    DAT_146b196d4 = 0;
  }
  else {
    uVar3 = (ulonglong)DAT_146b196d4;
  }
  UNLOCK();
  if (bVar7) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 1;
  UNLOCK();
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      iVar6 = param_4 - uVar4;
      iVar2 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8),param_2,iVar6,0,2,1,0);
      if (iVar2 == 0) {
        uVar5 = 1;
        if (param_3 == '\0') {
          ::_guard_xfg_dispatch_icall_nop(param_2,0,(longlong)iVar6);
          iVar2 = iVar6;
        }
        else {
          iVar6 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8));
          if (iVar6 < 0) {
            ::_guard_xfg_dispatch_icall_nop(param_2,0,(ulonglong)(param_4 - uVar4));
            break;
          }
        }
      }
      else if (iVar2 < 0) {
        ::_guard_xfg_dispatch_icall_nop(param_2,0,(ulonglong)(param_4 - uVar4));
        uVar5 = 0;
        break;
      }
      uVar4 = uVar4 + iVar2;
      param_2 = (void *)((longlong)param_2 + (longlong)iVar2);
    } while (uVar4 < param_4);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 0;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar5;
}



// FUNCTION 1428d3ad0 ReadCompressedInfo body=220 status=ok
// SIG undefined ReadCompressedInfo(void)

uint FVorbisAudioInfo::ReadCompressedInfo
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  BOOL BVar2;
  uint uVar3;
  bool bVar4;
  code *local_38;
  undefined1 *local_30;
  code *local_28;
  code *local_20;
  
  LOCK();
  bVar4 = DAT_146b196d4 == 0;
  if (bVar4) {
    DAT_146b196d4 = 0;
  }
  UNLOCK();
  if (bVar4) {
    uVar3 = DAT_146b196d4 & 0xffffff00;
  }
  else {
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 1;
    UNLOCK();
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      bVar1 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = param_2;
      local_38 = OggReadMemory;
      *(undefined4 *)(param_1 + 0x18) = param_3;
      local_30 = &LAB_1428d2780;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      local_28 = AK::MemoryMgr::GetPoolName;
      local_20 = FUN_141505dc0;
      bVar1 = FUN_1428cb750(param_1,&local_38,param_4);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 0;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    uVar3 = (uint)bVar1;
  }
  return uVar3;
}



// FUNCTION 1428d3bb0 FUN_1428d3bb0 body=345 status=ok
// SIG undefined FUN_1428d3bb0(void)

void FUN_1428d3bb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) != 0) {
    cVar4 = (**(code **)(*param_2 + 0xa0))(param_2);
    while (cVar4 == '\0') {
      plVar5 = (longlong *)UOnlineEngineInterface::Get();
      (**(code **)(*plVar5 + 0x338))
                (plVar5,&local_28,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0xd0),
                 *(longlong *)(param_1 + 0x28),param_2);
      if (local_28 == 0) {
        *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
        if (plStack_20 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar5 = plStack_20 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return;
        }
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return;
        }
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
        return;
      }
      lVar6 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)(*(longlong *)(lVar6 + 0x58) + 0x90) == 0) {
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
          lVar6 = *(longlong *)(param_1 + 0x28);
        }
        (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x328))(*(longlong **)(lVar6 + 0x58),&local_18)
        ;
      }
      plVar5 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_20)(plStack_20);
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
      cVar4 = (**(code **)(*param_2 + 0xa0))(param_2);
    }
  }
  return;
}



// FUNCTION 1428d3d10 RegisterAutoActivateCamera body=171 status=ok
// SIG undefined RegisterAutoActivateCamera(void)

void UWorld::RegisterAutoActivateCamera(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  plVar6 = (longlong *)(param_1 + 0x1f8);
  lVar3 = *plVar6;
  iVar2 = *(int *)(param_1 + 0x200);
  lVar5 = lVar3;
  do {
    if (lVar5 == lVar3 + (longlong)iVar2 * 8) {
LAB_1428d3d78:
      iVar2 = *(int *)(param_1 + 0x200);
      *(int *)(param_1 + 0x200) = iVar2 + 1;
      if (*(int *)(param_1 + 0x204) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar1 = (undefined4 *)(*plVar6 + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      puVar1[1] = local_resc;
      return;
    }
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res8);
    if (cVar4 != '\0') {
      if ((int)(lVar5 - lVar3 >> 3) != -1) {
        return;
      }
      goto LAB_1428d3d78;
    }
    lVar5 = lVar5 + 8;
  } while( true );
}



// FUNCTION 1428d3dc0 FUN_1428d3dc0 body=264 status=ok
// SIG undefined FUN_1428d3dc0(void)

void FUN_1428d3dc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res10;
  
  if ((*(byte *)(param_1 + 0x1ac) & 1) != 0) {
    FUN_1428d4280(&DAT_146535880,param_1 + 400);
    *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) & 0xfe;
  }
  lVar1 = param_2 + 0x4b0;
  if (*(longlong **)(param_2 + 0x4b8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 0x4b8) + 0x20))();
    if (cVar2 != '\0') {
      TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_146535880,local_res8,lVar1);
      if ((local_res8[0] == -1) || (DAT_146535880 + (longlong)local_res8[0] * 0x28 == 0)) {
        local_res10 = lVar1;
        FUN_1428c1020(&DAT_146535880,local_res8,&local_res10,0);
      }
      TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_146535880,local_res8,lVar1);
      if (local_res8[0] == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = DAT_146535880 + (longlong)local_res8[0] * 0x28;
      }
      *(longlong *)(lVar3 + 0x18) = param_1;
      FUN_1428c3a70(param_1 + 400,lVar1);
      *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) | 1;
    }
  }
  return;
}



// FUNCTION 1428d3ed0 FUN_1428d3ed0 body=528 status=ok
// SIG undefined FUN_1428d3ed0(void)

void FUN_1428d3ed0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1428d400f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1428d400f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar5 = GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x24) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1428d40e0 FUN_1428d40e0 body=92 status=ok
// SIG undefined FUN_1428d40e0(void)

void FUN_1428d40e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x30),0);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa0,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,0);
  return;
}



// FUNCTION 1428d4140 RemapCompiledScriptActor body=307 status=ok
// SIG undefined RemapCompiledScriptActor(void)

undefined8 UWorld::RemapCompiledScriptActor(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int local_res18 [2];
  undefined8 local_res20;
  longlong local_18 [2];
  
  if (DAT_146b196d0 == 0) {
    iVar1 = FUN_141592950(param_2,&DAT_1451e9050,1,0,0xffffffff);
    if (iVar1 != -1) {
      if ((int)param_2[1] == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      FName::FName(local_res18,puVar4,1);
      for (iVar1 = 0; (-1 < iVar1 && (iVar1 < *(int *)(param_1 + 0x168))); iVar1 = iVar1 + 1) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar1 * 8);
        if (lVar2 == 0) {
          lVar2 = *(longlong *)(param_1 + 0x188);
        }
        lVar2 = ULevel::GetLevelScriptActor(lVar2);
        if ((lVar2 != 0) &&
           (local_res20 = *(undefined8 *)(lVar2 + 0x18), (int)local_res20 == local_res18[0])) {
          plVar3 = (longlong *)FName::ToString(&local_res20,local_18);
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
          if (local_18[0] != 0) {
            FMemory::Free();
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1428d4280 FUN_1428d4280 body=395 status=ok
// SIG undefined FUN_1428d4280(void)

undefined8 FUN_1428d4280(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = GetTypeHash(param_2);
  lVar10 = (longlong)(int)((int)param_1[9] - 1U & uVar8);
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  piVar2 = (int *)((longlong)plVar9 + lVar10 * 4);
  iVar4 = *(int *)((longlong)plVar9 + lVar10 * 4);
  while( true ) {
    if (iVar4 == -1) {
      return 0;
    }
    lVar10 = *param_1 + (longlong)iVar4 * 0x28;
    cVar7 = FUniqueNetIdWrapper::operator==(lVar10,param_2);
    if (cVar7 != '\0') break;
    iVar4 = *(int *)(lVar10 + 0x20);
    piVar2 = (int *)(lVar10 + 0x20);
  }
  iVar4 = *piVar2;
  lVar10 = (longlong)iVar4;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar11 = (longlong)(int)(*(uint *)(lVar6 + 0x24 + lVar10 * 0x28) & (int)param_1[9] - 1U);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar3 = (undefined4 *)((longlong)plVar9 + lVar11 * 4);
    iVar5 = *(int *)((longlong)plVar9 + lVar11 * 4);
    while (iVar5 != -1) {
      if (iVar5 == iVar4) {
        *puVar3 = *(undefined4 *)(lVar6 + lVar10 * 0x28 + 0x20);
        break;
      }
      lVar11 = (longlong)iVar5 * 5 + 4;
      puVar3 = (undefined4 *)(lVar6 + lVar11 * 8);
      iVar5 = *(int *)(lVar6 + lVar11 * 8);
    }
  }
  lVar6 = *param_1;
  *(undefined ***)(lVar6 + lVar10 * 0x28) = &PTR_FUN_143f73d18;
  plVar9 = *(longlong **)(lVar6 + 0x10 + lVar10 * 0x28);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar4,1);
  return 1;
}



// FUNCTION 1428d4410 FUN_1428d4410 body=407 status=ok
// SIG undefined FUN_1428d4410(void)

void FUN_1428d4410(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)AActor::GetLevel(param_2);
  plVar5 = (longlong *)plVar1[0x14];
  plVar4 = plVar5;
  do {
    if (plVar4 == plVar5 + (int)plVar1[0x15]) {
LAB_1428d44f6:
      if (((param_2 != 0) && (DAT_146b17150 != 0)) &&
         ((param_1 != 0 && (lVar2 = FUN_1428761d0(DAT_146b17150,param_1), lVar2 != 0)))) {
        plVar5 = *(longlong **)(lVar2 + 0x248);
        plVar4 = plVar5 + (longlong)*(int *)(lVar2 + 0x250) * 2;
        for (; plVar5 != plVar4; plVar5 = plVar5 + 2) {
          if (*plVar5 != 0) {
            FUN_1425cb270(*plVar5,param_2);
          }
        }
        plVar5 = *(longlong **)(lVar2 + 0x290);
        plVar4 = plVar5 + (longlong)*(int *)(lVar2 + 0x298) * 2;
        for (; plVar5 != plVar4; plVar5 = plVar5 + 2) {
          if (*plVar5 != 0) {
            FUN_1425cb270(*plVar5,param_2);
          }
        }
      }
      return;
    }
    if (*plVar4 == param_2) {
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar5 >> 3);
      if (iVar3 != -1) {
        if ((((param_3 != '\0') && (DAT_1468b6150 != 0)) && (plVar1 != (longlong *)0x0)) &&
           ((*(uint *)(plVar1 + 1) >> 3 & 1) != 0)) {
          (**(code **)(*plVar1 + 0x70))(plVar1,0);
          (**(code **)(*(longlong *)plVar1[0x19] + 0x70))((longlong *)plVar1[0x19],0);
        }
        if ((6 < *(uint *)(param_1 + 0x708)) ||
           ((0x6aU >> (*(uint *)(param_1 + 0x708) & 0x1f) & 1) == 0)) {
          plVar5 = *(longlong **)(plVar1[0x14] + (longlong)iVar3 * 8);
          (**(code **)(*plVar5 + 0x70))(plVar5,1);
        }
        *(undefined8 *)(plVar1[0x14] + (longlong)iVar3 * 8) = 0;
      }
      goto LAB_1428d44f6;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 1428d45b0 RemoveController body=572 status=ok
// SIG undefined RemoveController(void)

void UWorld::RemoveController(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  FWeakObjectPtr::operator=(local_res8);
  iVar1 = *(int *)(param_1 + 0x1d0);
  if (iVar1 != 0) {
    iVar6 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(undefined8 *)(param_1 + 0x1c8),local_res8);
    bVar7 = cVar3 == '\0';
    iVar5 = 0;
    do {
      iVar2 = iVar5;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x1c8) + (longlong)iVar2 * 8,local_res8);
      } while (bVar7 == (cVar3 == '\0'));
      if (bVar7 != false) {
        if (iVar6 != iVar5) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar5 * 8),
                     (longlong)(iVar2 - iVar5) << 3);
        }
        iVar6 = iVar6 + (iVar2 - iVar5);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar5 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0x1d0) = iVar6;
    if ((0 < iVar1 - iVar6) && (param_2 != 0)) {
      lVar4 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        lVar4 = FUN_1429e18b0();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) {
          param_2 = 0;
        }
        FWeakObjectPtr::operator=(local_res8,param_2);
        iVar1 = *(int *)(param_1 + 0x1e0);
        if (iVar1 != 0) {
          iVar6 = 0;
          cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (*(undefined8 *)(param_1 + 0x1d8),local_res8);
          bVar7 = cVar3 == '\0';
          iVar5 = 0;
          do {
            iVar2 = iVar5;
            do {
              iVar2 = iVar2 + 1;
              if (iVar1 <= iVar2) break;
              cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                (*(longlong *)(param_1 + 0x1d8) + (longlong)iVar2 * 8,local_res8);
            } while (bVar7 == (cVar3 == '\0'));
            if (bVar7 != false) {
              if (iVar6 != iVar5) {
                ::_guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar6 * 8),
                           (void *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar5 * 8),
                           (longlong)(iVar2 - iVar5) << 3);
              }
              iVar6 = iVar6 + (iVar2 - iVar5);
            }
            bVar7 = (bool)(bVar7 ^ 1);
            iVar5 = iVar2;
          } while (iVar2 < iVar1);
          *(int *)(param_1 + 0x1e0) = iVar6;
        }
      }
    }
  }
  return;
}



// FUNCTION 1428d47f0 FUN_1428d47f0 body=266 status=ok
// SIG undefined FUN_1428d47f0(void)

void FUN_1428d47f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = *(int *)(param_1 + 0x860);
  lVar2 = (longlong)iVar1;
  if (iVar1 != 0) {
    iVar7 = 0;
    bVar8 = **(longlong **)(param_1 + 0x858) != param_2;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x858) + lVar4 * 8);
        do {
          if (bVar8 != (*plVar3 != param_2)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x858) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(param_1 + 0x858) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    *(int *)(param_1 + 0x860) = iVar7;
    if (0 < iVar1 - iVar7) {
      *(undefined1 *)(param_1 + 0x704) = 1;
      FUN_1428ca870(param_1);
    }
  }
  return;
}



// FUNCTION 1428d4900 FUN_1428d4900 body=1325 status=ok
// SIG undefined FUN_1428d4900(void)

void FUN_1428d4900(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  int iVar18;
  bool bVar19;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  undefined1 local_res20 [8];
  float local_78;
  float fStack_74;
  float local_70;
  
  if ((*(longlong *)(param_1 + 0xf8) == 0) && ((*(byte *)(param_2 + 0x204) & 0x10) != 0)) {
    local_res10 = param_2;
    QueryPerformanceCounter(&local_res8);
    uVar16 = 0;
    dVar4 = (double)local_res8.QuadPart * DAT_1468b02f8;
    if ((param_3 == '\0') || (DAT_146531eb0 <= 0.0)) {
      *(byte *)(param_2 + 0x206) = *(byte *)(param_2 + 0x206) | 1;
LAB_1428d4a18:
      uVar12 = uVar16;
      uVar15 = uVar16;
      if (0 < *(int *)(param_2 + 0xa8)) {
        do {
          lVar8 = *(longlong *)(uVar12 + *(longlong *)(param_2 + 0xa0));
          if (lVar8 != 0) {
            FUN_14223c120(lVar8,3);
          }
          uVar14 = (int)uVar15 + 1;
          uVar12 = uVar12 + 8;
          uVar15 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(param_2 + 0xa8));
      }
      while( true ) {
        iVar18 = 0;
        uVar17 = (undefined4)uVar16;
        local_res8.QuadPart._0_4_ = uVar17;
        if (((int)uVar17 < 0) || (*(int *)(param_1 + 0x1f0) <= (int)uVar17)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if (!bVar19) break;
        plVar7 = (longlong *)
                 FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar17 * 8);
        if (plVar7 == (longlong *)0x0) {
LAB_1428d4bed:
          uVar16 = (ulonglong)(uVar17 + 1);
        }
        else {
          cVar6 = AActor::IsInLevel(plVar7,param_2);
          if (cVar6 == '\0') {
            lVar8 = (**(code **)(*plVar7 + 0x6e8))(plVar7);
            if (lVar8 != 0) {
              lVar9 = UMediaSoundComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (bVar19) {
                *(uint *)(lVar8 + 0x300) = *(uint *)(lVar8 + 0x300) | 0x100;
              }
            }
            goto LAB_1428d4bed;
          }
          plVar2 = (longlong *)plVar7[0x92];
          if ((plVar2 != (longlong *)0x0) && ((longlong *)plVar2[0x91] == plVar7)) {
            (**(code **)(*plVar2 + 0x780))();
          }
          FWeakObjectPtr::operator=(local_res20,plVar7);
          iVar1 = *(int *)(param_1 + 0x1f0);
          if (iVar1 != 0) {
            cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                              (*(undefined8 *)(param_1 + 0x1e8),local_res20);
            bVar19 = cVar6 == '\0';
            iVar11 = iVar18;
            do {
              iVar5 = iVar11;
              do {
                iVar5 = iVar5 + 1;
                if (iVar1 <= iVar5) break;
                cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                  (*(longlong *)(param_1 + 0x1e8) + (longlong)iVar5 * 8,local_res20)
                ;
              } while (bVar19 == (cVar6 == '\0'));
              if (bVar19 != false) {
                if (iVar18 != iVar11) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(param_1 + 0x1e8) + (longlong)iVar18 * 8),
                             (void *)(*(longlong *)(param_1 + 0x1e8) + (longlong)iVar11 * 8),
                             (longlong)(iVar5 - iVar11) << 3);
                }
                iVar18 = iVar18 + (iVar5 - iVar11);
              }
              bVar19 = (bool)(bVar19 ^ 1);
              iVar11 = iVar5;
            } while (iVar5 < iVar1);
            *(int *)(param_1 + 0x1f0) = iVar18;
            param_2 = local_res10;
            uVar17 = local_res8.s.LowPart;
          }
          uVar16 = (ulonglong)(uint)uVar17;
        }
      }
      FUN_142534f40(param_2);
      plVar7 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar7 + 0x50))(plVar7,param_2);
      FUN_14251b150(param_2);
      if ((*(byte *)(param_2 + 0x205) & 0x40) == 0) {
        UEngine::GetLocalPlayerIterator(DAT_146b17150,&local_78,param_1);
        plVar7 = (longlong *)CONCAT44(fStack_74,local_78);
        while( true ) {
          if (((int)local_70 < 0) || ((int)plVar7[1] <= (int)local_70)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          if ((!bVar19) || (*(longlong *)(*plVar7 + (longlong)(int)local_70 * 8) != 0)) break;
          local_70 = (float)((int)local_70 + 1);
        }
        while( true ) {
          if (((int)local_70 < 0) || ((int)plVar7[1] <= (int)local_70)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          if (!bVar19) break;
          lVar8 = UPlayer::GetPlayerController
                            (*(undefined8 *)(*plVar7 + (longlong)(int)local_70 * 8),param_1);
          if (lVar8 != 0) {
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              local_res8.QuadPart = 0;
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0x18);
            }
            lVar9 = UObjectBaseUtility::GetOutermost(param_2);
            puVar10 = (undefined8 *)
                      APlayerController::NetworkRemapPath
                                (lVar8,local_res20,*(undefined8 *)(lVar9 + 0x18),0);
            FUN_1429e20c0(lVar8,*puVar10,uVar13);
          }
          plVar7 = (longlong *)CONCAT44(fStack_74,local_78);
          do {
            local_70 = (float)((int)local_70 + 1);
            if (((int)local_70 < 0) || ((int)plVar7[1] <= (int)local_70)) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
          } while ((bVar19) && (*(longlong *)(*plVar7 + (longlong)(int)local_70 * 8) == 0));
        }
      }
      *(byte *)(param_2 + 0x204) = *(byte *)(param_2 + 0x204) & 0xef;
      if (*(longlong *)(param_1 + 0x7e0) != 0) {
        FUN_1428cc620(*(longlong *)(param_1 + 0x7e0),&local_78,param_2);
        local_70 = -(float)(int)local_70;
        local_78 = -(float)(int)local_78;
        fStack_74 = -(float)(int)fStack_74;
        FUN_1425157e0(param_2,&local_78,0);
      }
      if ((*(uint *)(param_1 + 0x708) < 7) &&
         ((0x6aU >> (*(uint *)(param_1 + 0x708) & 0x1f) & 1) != 0)) {
        bVar19 = true;
      }
      else {
        bVar19 = false;
      }
      if (bVar19) {
        TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x160,&local_res10);
        *(undefined8 *)(local_res10 + 0xc0) = 0;
        param_2 = local_res10;
      }
      TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                (&DAT_146535808,param_2,param_1);
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x548);
      lVar8 = UObjectBaseUtility::GetOutermost(param_2);
      FUN_142540ff0(param_1,*(undefined8 *)(lVar8 + 0x18),0);
      *(byte *)(param_2 + 0x206) = *(byte *)(param_2 + 0x206) & 0xfe;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x100);
      if (lVar8 == 0) {
        *(longlong *)(param_1 + 0x100) = param_2;
        *(byte *)(param_2 + 0x206) = *(byte *)(param_2 + 0x206) | 1;
        lVar8 = *(longlong *)(param_1 + 0x100);
      }
      uVar17 = DAT_146531ea8;
      if (lVar8 == param_2) {
        do {
          cVar6 = FUN_14252b1c0(param_2,uVar17);
          if (cVar6 != '\0') {
            *(undefined8 *)(param_1 + 0x100) = 0;
            goto LAB_1428d4a18;
          }
          dVar3 = (double)DAT_146531eb0;
          QueryPerformanceCounter(&local_res8);
        } while (((double)local_res8.QuadPart * DAT_1468b02f8 - dVar4) * 1000.0 <= dVar3);
      }
    }
  }
  return;
}



// FUNCTION 1428d4e30 FUN_1428d4e30 body=26 status=ok
// SIG undefined FUN_1428d4e30(void)

void FUN_1428d4e30(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 600) = 0;
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x28);
    return;
  }
  return;
}



// FUNCTION 1428d4e50 FUN_1428d4e50 body=197 status=ok
// SIG undefined FUN_1428d4e50(void)

void FUN_1428d4e50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((((param_2 != 0) && (DAT_146b17150 != 0)) && (param_1 != 0)) &&
     (lVar1 = FUN_1428761d0(), lVar1 != 0)) {
    plVar2 = *(longlong **)(lVar1 + 0x248);
    plVar3 = plVar2 + (longlong)*(int *)(lVar1 + 0x250) * 2;
    for (; plVar2 != plVar3; plVar2 = plVar2 + 2) {
      if (*plVar2 != 0) {
        FUN_1425cb270(*plVar2,param_2);
      }
    }
    plVar2 = *(longlong **)(lVar1 + 0x290);
    plVar3 = plVar2 + (longlong)*(int *)(lVar1 + 0x298) * 2;
    for (; plVar2 != plVar3; plVar2 = plVar2 + 2) {
      if (*plVar2 != 0) {
        FUN_1425cb270(*plVar2,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1428d4f20 RemoveOnActorSpawnedHandler body=183 status=ok
// SIG undefined RemoveOnActorSpawnedHandler(void)

void UWorld::RemoveOnActorSpawnedHandler(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 1000)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x3e0);
      if (((*(int *)(lVar5 + 8 + lVar1) != 0) &&
          (plVar2 = *(longlong **)(lVar5 + lVar1), plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == param_2)
         ) {
        if ((*(int *)(lVar5 + 8 + lVar1) != 0) &&
           (plVar2 = *(longlong **)(lVar5 + lVar1), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*(longlong *)(lVar5 + lVar1) != 0) {
            uVar3 = FMemory::Realloc(*(longlong *)(lVar5 + lVar1),0,0);
            *(undefined8 *)(lVar5 + lVar1) = uVar3;
          }
          *(undefined4 *)(lVar5 + 8 + lVar1) = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 1000));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x3e0),0);
  return;
}



// FUNCTION 1428d4fe0 FUN_1428d4fe0 body=907 status=ok
// SIG undefined FUN_1428d4fe0(void)

longlong * FUN_1428d4fe0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  short *psVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  longlong lVar11;
  void *pvVar12;
  int iVar13;
  undefined2 *puVar14;
  int iVar15;
  void *_Src;
  uint uVar16;
  void *local_48;
  uint local_40;
  int local_3c;
  wchar_t *local_38;
  ulonglong local_30;
  
  local_30 = 7;
  local_38 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  pwVar3 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"UEDPIE",0xe);
  iVar8 = (uint)local_30;
  lVar11 = -1;
  pwVar6 = L"";
  if ((uint)local_30 != 0) {
    pwVar6 = pwVar3;
  }
  iVar4 = FUN_141592950(param_2,pwVar6,1,0,0xffffffff);
  if (-1 < iVar4) {
    iVar13 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar13 = 0;
    }
    iVar8 = (int)param_2[1];
    iVar13 = iVar13 + iVar4;
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    if ((iVar13 < iVar7) && (pwVar6 = (wchar_t *)*param_2, pwVar6[iVar13] == L'_')) {
      iVar13 = iVar13 + 1;
      pwVar5 = pwVar6 + iVar13;
      for (; iVar13 < iVar7; iVar13 = iVar13 + 1) {
        if (*pwVar5 == L'_') {
          if (iVar13 < iVar7) {
            pwVar5 = L"";
            if (iVar8 != 0) {
              pwVar5 = pwVar6;
            }
            local_38 = (wchar_t *)0x0;
            if (iVar4 < iVar7) {
              iVar7 = iVar4;
            }
            uVar16 = iVar7 + 1;
            if (iVar7 == 0) {
              uVar16 = 0;
            }
            local_30 = (ulonglong)uVar16;
            if (0 < (int)uVar16) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
              uVar16 = (uint)local_30;
              if (0 < (int)(uint)local_30) {
                wcsncpy(local_38,pwVar5,(longlong)iVar7);
                local_38[iVar7] = L'\0';
              }
            }
            pvVar9 = (void *)0x0;
            iVar4 = (int)param_2[1];
            iVar8 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar8 = -1;
            }
            iVar7 = iVar4 + -1;
            iVar15 = 0;
            if (iVar4 == 0) {
              iVar7 = -1;
              iVar8 = iVar15;
            }
            iVar1 = (iVar8 - iVar13) + -1;
            if (iVar4 == 0) {
              puVar14 = &DAT_143f3eda8;
              iVar7 = iVar15;
            }
            else {
              puVar14 = (undefined2 *)*param_2;
            }
            if ((-1 < iVar1) && (iVar15 = iVar7, iVar8 - iVar13 <= iVar7)) {
              iVar15 = iVar1;
            }
            local_48 = (void *)0x0;
            local_3c = 0;
            psVar2 = puVar14 + ((longlong)iVar7 - (longlong)iVar15);
            _Src = pvVar9;
            if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
              do {
                lVar11 = lVar11 + 1;
              } while (psVar2[lVar11] != 0);
              uVar10 = (int)lVar11 + 1;
              local_40 = uVar10;
              if (0 < (int)uVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              }
              _Src = local_48;
              pvVar9 = (void *)(ulonglong)local_40;
              FGenericPlatformString::Memcpy(local_48,psVar2,(longlong)(int)uVar10 * 2);
            }
            pvVar12 = (void *)0x0;
            iVar8 = (int)pvVar9;
            if ((int)uVar16 < 2) {
              *param_1 = 0;
              *(int *)(param_1 + 1) = iVar8;
              if (iVar8 == 0) {
                *(undefined4 *)((longlong)param_1 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,pvVar9,0);
                _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar8 * 2);
              }
            }
            else {
              iVar4 = 0;
              if (iVar8 != 0) {
                iVar4 = iVar8 + -1;
              }
              if ((uVar16 != 0) || (iVar8 = 1, iVar4 == 0)) {
                iVar8 = 0;
              }
              local_48 = (void *)0x0;
              local_40 = uVar16;
              if ((uVar16 == 0) && (iVar8 + iVar4 == 0)) {
                local_3c = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,uVar16 + iVar8 + iVar4,0)
                ;
                pvVar12 = local_48;
                _guard_xfg_dispatch_icall_nop(local_48,local_38,(longlong)(int)uVar16 * 2);
              }
              uVar16 = local_40;
              uVar10 = local_40;
              if (iVar4 != 0) {
                lVar11 = (longlong)(int)local_40;
                local_40 = local_40 + (local_40 == 0) + iVar4;
                if (local_3c < (int)local_40) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar16);
                  pvVar12 = local_48;
                }
                uVar10 = local_40;
                pvVar9 = (void *)((longlong)pvVar12 + (lVar11 - (ulonglong)(uVar16 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar9,_Src,(longlong)iVar4 * 2);
                *(undefined2 *)((longlong)pvVar9 + (longlong)iVar4 * 2) = 0;
              }
              *param_1 = (longlong)pvVar12;
              *(uint *)(param_1 + 1) = uVar10;
              *(int *)((longlong)param_1 + 0xc) = local_3c;
            }
            if (_Src != (void *)0x0) {
              FMemory::Free(_Src);
            }
            if (local_38 != (wchar_t *)0x0) {
              FMemory::Free(local_38);
            }
            goto LAB_1428d533d;
          }
          break;
        }
        if (9 < (ushort)(*pwVar5 + L'￐')) break;
        pwVar5 = pwVar5 + 1;
      }
    }
  }
  FString::FString(param_1,param_2);
LAB_1428d533d:
  if (pwVar3 != (wchar_t *)0x0) {
    FMemory::Free(pwVar3);
  }
  return param_1;
}



// FUNCTION 1428d5370 FUN_1428d5370 body=277 status=ok
// SIG undefined FUN_1428d5370(void)

void FUN_1428d5370(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  plVar2 = *(longlong **)(param_2 + 0x490);
  if ((plVar2 != (longlong *)0x0) && (plVar2[0x91] == param_2)) {
    (**(code **)(*plVar2 + 0x780))();
  }
  FWeakObjectPtr::operator=(local_res8,param_2);
  iVar1 = *(int *)(param_1 + 0x1f0);
  if (iVar1 != 0) {
    iVar6 = 0;
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(undefined8 *)(param_1 + 0x1e8),local_res8);
    bVar7 = cVar4 == '\0';
    iVar5 = 0;
    do {
      iVar3 = iVar5;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x1e8) + (longlong)iVar3 * 8,local_res8);
      } while (bVar7 == (cVar4 == '\0'));
      if (bVar7 != false) {
        if (iVar6 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x1e8) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x1e8) + (longlong)iVar5 * 8),
                     (longlong)(iVar3 - iVar5) << 3);
        }
        iVar6 = iVar6 + (iVar3 - iVar5);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar5 = iVar3;
    } while (iVar3 < iVar1);
    *(int *)(param_1 + 0x1f0) = iVar6;
  }
  return;
}



// FUNCTION 1428d5490 RemovePhysicsVolume body=71 status=ok
// SIG undefined RemovePhysicsVolume(void)

void UWorld::RemovePhysicsVolume(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FWeakObjectPtr::operator=(local_res8);
  TArray<TWeakObjectPtr<APhysicsVolume,FWeakObjectPtr>,FDefaultAllocator>::RemoveSwap
            (param_1 + 0x208,local_res8);
  FWeakObjectPtr::operator=(local_res8,0);
  TArray<TWeakObjectPtr<APhysicsVolume,FWeakObjectPtr>,FDefaultAllocator>::RemoveSwap
            (param_1 + 0x208,local_res8);
  return;
}



// FUNCTION 1428d54e0 RemoveStreamingLevel body=209 status=ok
// SIG undefined RemoveStreamingLevel(void)

undefined8 UWorld::RemoveStreamingLevel(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  iVar6 = *(int *)(param_1 + 0x90);
  plVar4 = plVar1;
  while( true ) {
    if (plVar4 == plVar1 + iVar6) {
      return 0;
    }
    if (*plVar4 == param_2) break;
    plVar4 = plVar4 + 1;
  }
  iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
  if (iVar3 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x90) <= iVar3) {
    return 0;
  }
  lVar2 = plVar1[iVar3];
  iVar5 = (iVar6 - iVar3) + -1;
  if (iVar5 != 0) {
    ::_guard_xfg_dispatch_icall_nop(plVar1 + iVar3,plVar1 + (iVar3 + 1),(longlong)iVar5 << 3);
    iVar6 = *(int *)(param_1 + 0x90);
  }
  *(int *)(param_1 + 0x90) = iVar6 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x88);
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x98,lVar2);
  ULevelStreaming::OnLevelRemoved(lVar2);
  return 1;
}



// FUNCTION 1428d55c0 RemoveSwap body=180 status=ok
// SIG undefined RemoveSwap(void)

int TArray<TWeakObjectPtr<APhysicsVolume,FWeakObjectPtr>,FDefaultAllocator>::RemoveSwap
              (longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)param_1[1];
  iVar5 = 0;
  iVar4 = iVar1;
  if (0 < iVar1) {
    do {
      cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (*param_1 + (longlong)iVar5 * 8,param_2);
      if (cVar2 != '\0') {
        iVar4 = (int)param_1[1];
        iVar3 = (iVar4 - iVar5) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + (longlong)iVar5 * 8),
                     (void *)(*param_1 + (longlong)(iVar4 - iVar3) * 8),(longlong)iVar3 << 3);
          iVar4 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
        iVar5 = iVar5 + -1;
      }
      iVar4 = (int)param_1[1];
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return iVar1 - iVar4;
}



// FUNCTION 1428d5680 FUN_1428d5680 body=619 status=ok
// SIG undefined FUN_1428d5680(void)

void FUN_1428d5680(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined1 local_10;
  ushort local_e;
  undefined4 local_c;
  
  plVar1 = (longlong *)FUN_14203ac20(*(undefined8 *)(param_1 + 0x30));
  if (plVar1 == (longlong *)0x0) {
    if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xa8) < 1) goto LAB_1428d5783;
    plVar1 = (longlong *)**(longlong **)(*(longlong *)(param_1 + 0x30) + 0xa0);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = UVoipListenerSynthComponent::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        FUN_142539720(*(undefined8 *)(param_1 + 0x30));
        goto LAB_1428d570a;
      }
    }
    plVar1 = (longlong *)0x0;
  }
  else {
LAB_1428d570a:
    lVar2 = *(longlong *)(DAT_146b17150 + 0x178);
    if (lVar2 != 0) {
      lVar3 = UVoipListenerSynthComponent::GetPrivateStaticClass();
      lVar5 = lVar2;
      do {
        if (lVar5 == lVar3) goto LAB_1428d5735;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar2 = 0;
LAB_1428d5735:
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      return;
    }
    (**(code **)(*plVar1 + 0x138))(plVar1,0,*(undefined8 *)(param_1 + 0x30),1);
  }
LAB_1428d5783:
  bVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xc0) == 0;
  if (bVar6) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xc0) = param_1;
  }
  lVar2 = DAT_146b17150;
  local_e = local_e & 0xfff0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_c = 8;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 1;
  if (*(longlong *)(DAT_146b17150 + 0x178) != 0) {
    lVar3 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    for (lVar5 = lVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar3) goto LAB_1428d5810;
    }
  }
  lVar2 = 0;
LAB_1428d5810:
  lVar5 = DAT_146b17150;
  local_38 = *(undefined8 *)(lVar2 + 0x18);
  if (*(longlong *)(DAT_146b17150 + 0x178) != 0) {
    lVar3 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar5 + 0x178);
    for (lVar5 = lVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar3) goto LAB_1428d5850;
    }
  }
  lVar2 = 0;
LAB_1428d5850:
  plVar4 = (longlong *)UWorld::SpawnActor(param_1,lVar2,0,0,&local_38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x4d8))(plVar4,0);
    FUN_142869970(plVar1,plVar4,0x101000100010100);
    (**(code **)(*plVar4 + 0x4c0))(plVar4);
  }
  FUN_142539720(*(undefined8 *)(param_1 + 0x30),plVar4);
  FUN_1425399c0(*(undefined8 *)(param_1 + 0x30));
  if (bVar6) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1428d58f0 FUN_1428d58f0 body=27 status=ok
// SIG undefined FUN_1428d58f0(void)

void FUN_1428d58f0(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x7c8) = *param_2;
  *(undefined4 *)(param_1 + 0x7cc) = param_2[1];
  *(undefined4 *)(param_1 + 2000) = param_2[2];
  return;
}



// FUNCTION 1428d5910 RequestUnload body=202 status=ok
// SIG undefined RequestUnload(void)

void FLevelStreamingGCHelper::RequestUnload(undefined8 param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (DAT_1468b616c == '\0') {
    FWeakObjectPtr::operator=(&local_res10,param_1);
    lVar2 = DAT_146b19a70;
    lVar6 = DAT_146b19a70 + (longlong)DAT_146b19a78 * 8;
    for (lVar5 = DAT_146b19a70; lVar5 != lVar6; lVar5 = lVar5 + 8) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res10);
      if (cVar4 != '\0') {
        if ((int)(lVar5 - lVar2 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    iVar3 = DAT_146b19a78;
    lVar6 = (longlong)DAT_146b19a78;
    DAT_146b19a78 = DAT_146b19a78 + 1;
    if (DAT_146b19a7c < DAT_146b19a78) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b19a70,iVar3);
    }
    puVar1 = (undefined4 *)(DAT_146b19a70 + lVar6 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
  }
  return;
}



// FUNCTION 1428d59e0 Rescan body=2846 status=ok
// SIG undefined Rescan(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UWorldComposition::Rescan(longlong param_1)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  int local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  longlong local_2a0;
  int local_298;
  longlong local_290 [2];
  longlong local_280 [2];
  undefined8 local_270;
  longlong local_268;
  int local_260;
  int local_25c;
  undefined2 *local_258;
  int local_250;
  undefined2 *local_248;
  int local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined1 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0;
  undefined1 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [56];
  longlong local_158;
  longlong local_128;
  longlong local_118;
  undefined8 local_100;
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  lVar16 = *(longlong *)(param_1 + 0x38);
  local_2d8 = (undefined8 *)(param_1 + 0x38);
  iVar21 = *(int *)(param_1 + 0x40);
  local_2a0 = 0;
  local_2a8 = param_1;
  local_298 = iVar21;
  if (iVar21 != 0) {
    local_2d0 = iVar21;
    TArray<FAnimLegIKData,FDefaultAllocator>::ResizeForCopy(&local_2a0,iVar21,0);
    lVar16 = lVar16 - local_2a0;
    puVar13 = (undefined8 *)(local_2a0 + 8);
    do {
      puVar13[-1] = *(undefined8 *)(lVar16 + -8 + (longlong)puVar13);
      *puVar13 = 0;
      iVar12 = *(int *)(lVar16 + 8 + (longlong)puVar13);
      _Src = *(void **)(lVar16 + (longlong)puVar13);
      *(int *)(puVar13 + 1) = iVar12;
      if (iVar12 == 0) {
        *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar13,iVar12,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar13,_Src,(longlong)iVar12 << 3);
      }
      FWorldTileInfo::FWorldTileInfo(puVar13 + 2,lVar16 + 0x10 + (longlong)puVar13);
      puVar13[0x14] = *(undefined8 *)(lVar16 + 0xa0 + (longlong)puVar13);
      puVar13 = puVar13 + 0x16;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  lVar16 = local_2a8;
  puVar13 = local_2d8;
  plVar14 = (longlong *)(local_2a8 + 0x28);
  *(undefined4 *)(local_2a8 + 0x30) = 0;
  local_2d0 = local_298;
  if (*(int *)(local_2a8 + 0x34) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar14,0);
  }
  TArray<FWorldCompositionTile,FDefaultAllocator>::Empty(puVar13,0);
  *(undefined4 *)(lVar16 + 0x50) = 0;
  if (*(int *)(lVar16 + 0x54) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar16 + 0x48,0);
  }
  lVar10 = *(longlong *)(lVar16 + 0x20);
  if (lVar10 != 0) {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1428d5b6e;
  }
  lVar10 = 0;
LAB_1428d5b6e:
  lVar3 = UObjectBaseUtility::GetOutermost(lVar16);
  local_2d8 = *(undefined8 **)(lVar3 + 0x18);
  FName::ToString(&local_2d8,&local_2b8);
  plVar4 = (longlong *)UWorld::StripPIEPrefixFromPackageName(local_280,&local_2b8,lVar10 + 0xe8);
  if (&local_2b8 != plVar4) {
    if (local_2b8 != 0) {
      FMemory::Free();
    }
    local_2b8 = *plVar4;
    *plVar4 = 0;
    local_2b0 = (undefined4)plVar4[1];
    local_2ac = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (local_280[0] != 0) {
    FMemory::Free();
  }
  cVar2 = FUN_1416f0740(&local_2b8,0,0,1);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_141672d20(local_280);
    lVar3 = plVar4[1];
    local_2e8 = *plVar4;
    *plVar4 = 0;
    local_2e0._0_4_ = (int)plVar4[1];
    local_2e0._4_4_ = *(int *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
    iVar21 = (int)local_2e0;
    if (local_2e0._4_4_ < (int)((2 - (uint)((int)lVar3 != 0)) + (int)local_2e0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2e8);
      iVar21 = (int)local_2e0;
    }
    iVar15 = (2 - (uint)(iVar21 != 0)) + iVar21;
    local_2e0 = CONCAT44(local_2e0._4_4_,iVar15);
    iVar12 = local_2e0._4_4_;
    if (local_2e0._4_4_ < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8);
      iVar12 = local_2e0._4_4_;
      iVar15 = (int)local_2e0;
    }
    lVar3 = local_2e8;
    lVar8 = (longlong)iVar21 - (ulonglong)(iVar21 != 0);
    *(undefined2 *)(local_2e8 + lVar8 * 2) = 0x2f;
    *(undefined2 *)(local_2e8 + 2 + lVar8 * 2) = 0;
    if (plVar14 == local_e8) {
      if (local_2e8 != 0) {
        FMemory::Free(local_2e8);
      }
    }
    else {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      *plVar14 = lVar3;
      *(int *)(lVar16 + 0x30) = iVar15;
      *(int *)(lVar16 + 0x34) = iVar12;
    }
    if (local_280[0] != 0) {
      FMemory::Free();
    }
    local_70 = 0xffffffff;
    local_c0 = 0;
    local_c8 = &PTR__scalar_deleting_destructor__1451efc68;
    local_b8 = 0;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    local_2c8 = (longlong *)0x0;
    local_2c0 = 0;
    FUN_1416fecc0(local_f8,plVar14,&local_2c8);
    if (local_2c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1428c6600(&local_c8,local_f8);
    lVar16 = UObjectBaseUtility::GetOutermost(lVar10);
    local_2d8 = *(undefined8 **)(lVar16 + 0x18);
    FName::ToString(&local_2d8,local_290);
    UWorld::StripPIEPrefixFromPackageName(&local_258,local_290,lVar10 + 0xe8);
    if (local_290[0] != 0) {
      FMemory::Free();
    }
    puVar22 = local_b0 + (longlong)(int)local_a8 * 2;
    puVar18 = local_258;
    puVar13 = local_b0;
    local_2d8 = puVar22;
    if (local_b0 != puVar22) {
      do {
        puVar11 = &DAT_143f3eda8;
        if (local_250 != 0) {
          puVar11 = puVar18;
        }
        if (*(int *)(puVar13 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar13;
        }
        iVar21 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar11);
        if (iVar21 != 0) {
          local_228 = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_214 = _DAT_1468b5d90;
          local_220 = _DAT_1468b5d90;
          local_20c = DAT_1468b5d98;
          local_218 = DAT_1468b5d98;
          local_208 = 0;
          local_200 = 0;
          local_1f8 = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
          FGenericPlatformString::Memcpy(local_200,L"Uncategorized",0x1c);
          local_1f0 = 0;
          local_1e8 = 0;
          local_1e4 = 50000;
          local_1e0 = 1;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1c8 = 0;
          local_1c0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          FUN_1416fecc0(local_290,puVar13,&DAT_1464b4438);
          cVar2 = FUN_141705ad0(local_290,&local_238);
          if (cVar2 == '\0') {
            if (local_290[0] != 0) {
              FMemory::Free();
            }
            if (local_1c0 != 0) {
              FMemory::Free();
            }
            if (local_1d0 != 0) {
              FMemory::Free();
            }
            if (local_200 != 0) {
              FMemory::Free();
            }
          }
          else {
            local_1a8 = 0;
            local_1a0 = (longlong *)0x0;
            local_198 = 0;
            FWorldTileInfo::FWorldTileInfo(local_190);
            local_100 = 0;
            if (*(int *)(puVar13 + 1) == 0) {
              puVar18 = &DAT_143f3eda8;
            }
            else {
              puVar18 = (undefined2 *)*puVar13;
            }
            puVar5 = (undefined8 *)FName::FName(local_d8,puVar18,1);
            local_1a8 = *puVar5;
            FWorldTileInfo::operator=(local_190,&local_238);
            FUN_1416f9e30(local_280,puVar13);
            local_2c8 = (longlong *)0x0;
            local_2c0 = 0;
            TMultiMap<FString,FPackageNameAndLODIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>_>
            ::MultiFind<FDefaultAllocator>(&local_a0,local_280,&local_2c8,0);
            uVar19 = (uint)local_2c0;
            uVar20 = (ulonglong)(int)(uint)local_2c0;
            plVar14 = local_1a0;
            iVar21 = (int)local_198;
            if ((uint)local_2c0 != 0) {
              lVar16 = (longlong)(int)local_198;
              if ((int)local_198 < 4) {
                iVar12 = 4 - (int)local_198;
                iVar21 = (int)local_198 + iVar12;
                local_198 = CONCAT44(local_198._4_4_,iVar21);
                if (local_198._4_4_ < iVar21) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a0);
                  iVar21 = (int)local_198;
                }
                plVar14 = local_1a0;
                ::_guard_xfg_dispatch_icall_nop(local_1a0 + lVar16,0,(longlong)iVar12 << 3);
              }
              else if ((4 < (int)local_198) && ((int)local_198 + -4 != 0)) {
                iVar12 = (int)local_198 - ((int)local_198 + -4);
                iVar21 = iVar12 + -4;
                if (iVar21 != 0) {
                  ::_guard_xfg_dispatch_icall_nop
                            (local_1a0 + 4,local_1a0 + (int)local_198,(longlong)iVar21 << 3);
                }
                local_198 = CONCAT44(local_198._4_4_,iVar12);
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_1a0);
                iVar21 = (int)local_198;
                plVar14 = local_1a0;
              }
              plVar4 = (longlong *)FUN_1416f9840(local_e8);
              lVar16 = plVar4[1];
              local_2e8 = *plVar4;
              *plVar4 = 0;
              local_2e0._0_4_ = (int)plVar4[1];
              local_2e0._4_4_ = *(int *)((longlong)plVar4 + 0xc);
              plVar4[1] = 0;
              iVar12 = (int)local_2e0;
              if (local_2e0._4_4_ < (int)((2 - (uint)((int)lVar16 != 0)) + (int)local_2e0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2e8);
                iVar12 = (int)local_2e0;
              }
              local_2e0._0_4_ = (2 - (uint)(iVar12 != 0)) + iVar12;
              lVar16 = local_2e8;
              iVar15 = (int)local_2e0;
              iVar7 = local_2e0._4_4_;
              if (local_2e0._4_4_ < (int)local_2e0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,iVar12);
                lVar16 = local_2e8;
                iVar15 = (int)local_2e0;
                iVar7 = local_2e0._4_4_;
              }
              local_25c = iVar7;
              local_2e8 = 0;
              local_2e0 = 0;
              lVar10 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
              *(undefined2 *)(lVar16 + lVar10 * 2) = 0x2f;
              *(undefined2 *)(lVar16 + 2 + lVar10 * 2) = 0;
              local_268 = lVar16;
              local_260 = iVar15;
              if (local_e8[0] != 0) {
                FMemory::Free();
              }
              plVar4 = local_2c8 + uVar20 * 3;
              for (plVar17 = local_2c8; plVar17 != plVar4; plVar17 = plVar17 + 3) {
                cVar2 = FString::StartsWith(plVar17,&local_268,1);
                if (cVar2 != '\0') {
                  if ((int)plVar17[1] == 0) {
                    puVar18 = &DAT_143f3eda8;
                  }
                  else {
                    puVar18 = (undefined2 *)*plVar17;
                  }
                  FString::PrintfImpl(&local_248,L"%s_LOD%d",puVar18);
                  lVar16 = plVar17[2];
                  puVar18 = &DAT_143f3eda8;
                  if (local_240 != 0) {
                    puVar18 = local_248;
                  }
                  plVar6 = (longlong *)FName::FName(local_d0,puVar18,1);
                  plVar14[(longlong)(int)lVar16 + -1] = *plVar6;
                  if (local_248 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                }
              }
              local_270 = 0;
              for (plVar4 = plVar14; plVar4 != plVar14 + iVar21; plVar4 = plVar4 + 1) {
                if (*plVar4 == 0) {
                  iVar12 = (int)((longlong)plVar4 - (longlong)plVar14 >> 3);
                  if (iVar12 != -1) {
                    if (iVar21 < iVar12) {
                      iVar15 = iVar21 + (iVar12 - iVar21);
                      local_198._4_4_ = (int)((ulonglong)local_198 >> 0x20);
                      local_198 = CONCAT44(local_198._4_4_,iVar15);
                      if (local_198._4_4_ < iVar15) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (&local_1a0);
                        plVar14 = local_1a0;
                        iVar15 = (int)local_198;
                      }
                      ::_guard_xfg_dispatch_icall_nop
                                (plVar14 + iVar21,0,(longlong)(iVar12 - iVar21) << 3);
                      iVar21 = iVar15;
                    }
                    else if ((iVar12 < iVar21) && (iVar15 = iVar21 - iVar12, iVar15 != 0)) {
                      iVar7 = (iVar21 - iVar15) - iVar12;
                      if (iVar7 != 0) {
                        ::_guard_xfg_dispatch_icall_nop
                                  (plVar14 + iVar12,plVar14 + (iVar15 + iVar12),(longlong)iVar7 << 3
                                  );
                      }
                      local_198 = CONCAT44(local_198._4_4_,iVar21 - iVar15);
                      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_1a0);
                      plVar14 = local_1a0;
                      iVar21 = (int)local_198;
                    }
                  }
                  break;
                }
              }
              puVar22 = local_2d8;
              if (local_268 != 0) {
                FMemory::Free();
                puVar22 = local_2d8;
              }
            }
            lVar16 = local_2a8;
            iVar12 = *(int *)(local_2a8 + 0x40);
            *(int *)(local_2a8 + 0x40) = iVar12 + 1;
            if (*(int *)(local_2a8 + 0x44) < iVar12 + 1) {
              TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
                        (local_2a8 + 0x38,iVar12);
            }
            puVar5 = (undefined8 *)((longlong)iVar12 * 0xb0 + *(longlong *)(lVar16 + 0x38));
            *puVar5 = local_1a8;
            puVar5[1] = 0;
            *(int *)(puVar5 + 2) = iVar21;
            if (iVar21 == 0) {
              *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (puVar5 + 1,iVar21,0);
              ::_guard_xfg_dispatch_icall_nop((void *)puVar5[1],plVar14,(longlong)iVar21 << 3);
            }
            FWorldTileInfo::FWorldTileInfo(puVar5 + 3,local_190);
            plVar4 = local_2c8;
            puVar5[0x15] = local_100;
            plVar14 = local_2c8;
            while (uVar19 != 0) {
              if (*plVar14 != 0) {
                FMemory::Free();
              }
              plVar14 = plVar14 + 3;
              uVar19 = (int)uVar20 - 1;
              uVar20 = (ulonglong)uVar19;
            }
            if (plVar4 != (longlong *)0x0) {
              FMemory::Free(plVar4);
            }
            if (local_280[0] != 0) {
              FMemory::Free();
            }
            if (local_118 != 0) {
              FMemory::Free();
            }
            if (local_128 != 0) {
              FMemory::Free();
            }
            if (local_158 != 0) {
              FMemory::Free();
            }
            if (local_1a0 != (longlong *)0x0) {
              FMemory::Free();
            }
            if (local_290[0] != 0) {
              FMemory::Free();
            }
            if (local_1c0 != 0) {
              FMemory::Free();
            }
            if (local_1d0 != 0) {
              FMemory::Free();
            }
            puVar18 = local_258;
            if (local_200 != 0) {
              FMemory::Free();
              puVar18 = local_258;
            }
          }
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar22);
    }
    PopulateStreamingLevels(local_2a8);
    FUN_1428c6a90(local_2a8);
    if (puVar18 != (undefined2 *)0x0) {
      FMemory::Free(puVar18);
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    FWorldTilesGatherer::~FWorldTilesGatherer(&local_c8);
  }
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  if (local_2d0 != 0) {
    plVar14 = (longlong *)(local_2a0 + 0x80);
    iVar21 = local_2d0;
    do {
      if (plVar14[2] != 0) {
        FMemory::Free();
      }
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      if (plVar14[-6] != 0) {
        FMemory::Free();
      }
      if (plVar14[-0xf] != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 0x16;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  if (local_2a0 != 0) {
    FMemory::Free(local_2a0);
  }
  return;
}



// FUNCTION 1428d6500 Reset body=265 status=ok
// SIG undefined Reset(void)

void TOptional<FActorIteratorState>::Reset(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  if ((char)param_1[10] != '\0') {
    *(undefined1 *)(param_1 + 10) = 0;
    lVar3 = param_1[9];
    iVar4 = 0;
    lVar1 = *param_1;
    if (0 < *(int *)(lVar1 + 1000)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x3e0) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3)
           ) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 1000));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x3e0,0);
    if (param_1[6] != 0) {
      FMemory::Free();
    }
    if (param_1[1] != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 1428d6610 SeamlessTravel body=1711 status=ok
// SIG undefined SeamlessTravel(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWorld::SeamlessTravel(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined4 *puStack_270;
  undefined4 *local_268;
  int local_260;
  undefined4 local_25c;
  undefined4 *local_258;
  ulonglong *puStack_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  longlong local_1c8 [2];
  longlong local_1b8;
  longlong local_1a0;
  longlong local_190;
  longlong *local_180;
  int local_178;
  longlong local_170;
  int local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [3];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (*(int *)(param_2 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  uVar7 = FUN_1428813c0(DAT_146b17150,param_1);
  FUN_14289aca0(local_1c8,uVar7,puVar13,(param_3 & 0xff ^ 1) * 2);
  if (local_160 == 0) {
    lVar8 = FText::FromString(local_d8,param_2);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_140,L"Invalid URL: {0}",L"Engine",L"InvalidUrl");
    plVar9 = (longlong *)FTextFormat::FTextFormat(local_f8,uVar7);
    local_a8[0] = 4;
    FText::FText(local_98,lVar8);
    local_258 = (undefined4 *)*plVar9;
    local_278 = local_a8;
    puStack_270 = local_78;
    puStack_250 = (ulonglong *)plVar9[1];
    local_80 = '\x01';
    if (puStack_250 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puStack_250 + 1) = (int)puStack_250[1] + 1;
      UNLOCK();
    }
    local_238 = local_278;
    uStack_230 = puStack_270;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_228,&local_238);
    uVar7 = FText::Format(local_158,&local_258,uVar7);
    FText::FText(local_1f8,uVar7);
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_228);
    if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(lVar8 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    puVar10 = (undefined8 *)FText::ToString();
    local_268 = (undefined4 *)0x0;
    local_260 = *(int *)(puVar10 + 1);
    lVar8 = (longlong)local_260;
    pvVar4 = (void *)*puVar10;
    if (local_260 == 0) {
      local_25c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_268,local_260,0);
      ::_guard_xfg_dispatch_icall_nop(local_268,pvVar4,lVar8 * 2);
    }
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1f0 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)local_1f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_138 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    FUN_1428661b0(DAT_146b17150,param_1,2,&local_268);
    puVar12 = local_268;
  }
  else {
    cVar6 = FURL::HasOption(local_1c8,L"Restart");
    if (cVar6 != '\0') {
      uVar7 = FUN_1428813c0(DAT_146b17150,param_1);
      FURL::operator=(local_1c8,uVar7);
    }
    pcVar11 = (char *)FUN_14288cc20(DAT_146b17150,param_1);
    cVar6 = FUN_1428d85d0(pcVar11,param_1,local_1c8,param_4);
    local_238 = (undefined4 *)CONCAT44(local_238._4_4_,(undefined4)local_238);
    uStack_230 = (undefined4 *)CONCAT44(uStack_230._4_4_,(undefined4)uStack_230);
    local_218 = (undefined4 *)CONCAT44(local_218._4_4_,(undefined4)local_218);
    uStack_210 = (ulonglong *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
    if ((cVar6 != '\0') ||
       (local_238 = (undefined4 *)CONCAT44(local_238._4_4_,(undefined4)local_238),
       uStack_230 = (undefined4 *)CONCAT44(uStack_230._4_4_,(undefined4)uStack_230),
       local_218 = (undefined4 *)CONCAT44(local_218._4_4_,(undefined4)local_218),
       uStack_210 = (ulonglong *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210), *pcVar11 != '\0'
       )) goto LAB_1428d6c28;
    lVar8 = FText::FromString(local_c0,param_2);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_110,L"Invalid URL: {0}",L"Engine",L"InvalidUrl");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar7);
    local_78[0] = 4;
    FText::FText(local_68,lVar8);
    local_248 = *puVar10;
    local_258 = local_78;
    puStack_250 = local_48;
    local_240 = puVar10[1];
    local_50 = '\x01';
    if (local_240 != 0) {
      LOCK();
      *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
      UNLOCK();
    }
    local_218 = local_258;
    uStack_210 = puStack_250;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_208,&local_218);
    uVar7 = FText::Format(local_128,&local_248,uVar7);
    FText::FText(local_1e0,uVar7);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_120 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_208);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_60 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    plVar9 = (longlong *)puVar10[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(lVar8 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    puVar10 = (undefined8 *)FText::ToString();
    local_278 = (undefined4 *)0x0;
    iVar3 = *(int *)(puVar10 + 1);
    pvVar4 = (void *)*puVar10;
    puStack_270 = (undefined4 *)CONCAT44(puStack_270._4_4_,iVar3);
    if (iVar3 == 0) {
      puStack_270 = (undefined4 *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_278,iVar3,0);
      ::_guard_xfg_dispatch_icall_nop(local_278,pvVar4,(longlong)iVar3 * 2);
    }
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1d8 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_108 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    FUN_1428661b0(DAT_146b17150,param_1,2,&local_278);
    puVar12 = local_278;
  }
  if (puVar12 != (undefined4 *)0x0) {
    FMemory::Free();
  }
LAB_1428d6c28:
  plVar9 = local_180;
  if (local_170 != 0) {
    FMemory::Free();
    plVar9 = local_180;
  }
  for (; local_178 != 0; local_178 = local_178 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_180 != (longlong *)0x0) {
    FMemory::Free(local_180);
  }
  if (local_190 != 0) {
    FMemory::Free();
  }
  if (local_1a0 != 0) {
    FMemory::Free();
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d6cc0 FUN_1428d6cc0 body=505 status=ok
// SIG undefined FUN_1428d6cc0(void)

void FUN_1428d6cc0(char *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 local_res8;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0x30);
  }
  FName::FName(&local_res8,puVar8,1);
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (&DAT_1465356b0,local_res8);
  if (*param_1 != '\0') {
    lVar5 = UWorld::FindWorldInPackage(param_3);
    if ((lVar5 == 0) && (lVar5 = FUN_1428cb040(param_3,0), lVar5 != 0)) {
      param_3 = UObjectBaseUtility::GetOutermost(lVar5);
    }
    *(longlong *)(param_1 + 0x90) = param_3;
    *(longlong *)(param_1 + 0xa0) = lVar5;
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0xc);
      uVar9 = 0;
      uVar6 = uVar9;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) | 0x40000000;
      if ((*(int *)(lVar5 + 0x708) == 3) && (*(int *)(param_3 + 0x54) != -1)) {
        FString::PrintfImpl(&local_28,L"%s_%d_",L"UEDPIE");
        plVar10 = (longlong *)(lVar5 + 0xe8);
        if (plVar10 == &local_28) {
          if (local_28 != 0) {
            FMemory::Free();
          }
        }
        else {
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          *plVar10 = local_28;
          *(undefined4 *)(lVar5 + 0xf0) = local_20;
          *(undefined4 *)(lVar5 + 0xf4) = local_1c;
        }
      }
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        FUN_14256fdc0();
      }
      FUN_1428c7a00(lVar5);
      plVar10 = *(longlong **)(lVar5 + 0x88);
      uVar6 = (longlong)*(int *)(lVar5 + 0x90) & 0x1fffffffffffffff;
      if (plVar10 + *(int *)(lVar5 + 0x90) < plVar10) {
        uVar6 = uVar9;
      }
      if (uVar6 != 0) {
        do {
          plVar2 = (longlong *)*plVar10;
          if (((plVar2 != (longlong *)0x0) &&
              (cVar3 = (**(code **)(*plVar2 + 0x290))(plVar2), cVar3 != '\0')) &&
             ((*(char *)((longlong)plVar2 + 0xb4) == '\x03' || (plVar2[0x24] == 0)))) {
            FUN_14254e430(plVar2,lVar5,1,2);
          }
          plVar10 = plVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar6);
      }
    }
  }
  return;
}



// FUNCTION 1428d6ec0 SeekToTime body=143 status=ok
// SIG undefined SeekToTime(void)

ulonglong FVorbisAudioInfo::SeekToTime(longlong param_1,float param_2)

{
  BOOL BVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  bool bVar3;
  double dVar4;
  float fVar5;
  
  uVar2 = 0;
  LOCK();
  bVar3 = DAT_146b196d4 == 0;
  if (bVar3) {
    DAT_146b196d4 = 0;
  }
  else {
    uVar2 = (ulonglong)DAT_146b196d4;
  }
  UNLOCK();
  if (!bVar3) {
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 1;
    UNLOCK();
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    dVar4 = (double)::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8),0xffffffff);
    fVar5 = (float)dVar4;
    if (param_2 <= (float)dVar4) {
      fVar5 = param_2;
    }
    ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8),(double)fVar5);
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 0;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    uVar2 = extraout_RAX;
  }
  return uVar2;
}



// FUNCTION 1428d6f50 FUN_1428d6f50 body=258 status=ok
// SIG undefined FUN_1428d6f50(void)

void FUN_1428d6f50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  lVar1 = **(longlong **)(param_1 + 0x1580);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar1,0);
    local_res8[0] = 3;
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    FUN_14158ce90(&local_118,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1580) + 0x2c8))
              ((longlong *)**(undefined8 **)(param_1 + 0x1580),local_res18,&local_118,1);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
  }
  return;
}



// FUNCTION 1428d7060 FUN_1428d7060 body=364 status=ok
// SIG undefined FUN_1428d7060(void)

void FUN_1428d7060(undefined8 param_1,char *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong local_18;
  ulonglong uStack_10;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_3);
  if (((plVar1 != (longlong *)0x0) && (1 < *(uint *)((longlong)plVar1 + 300))) && (plVar1[0xb] != 0)
     ) {
    if (*param_2 == '\x01') {
      local_18 = *(longlong *)(param_2 + 0x18);
      uStack_10 = CONCAT44(uStack_10._4_4_,*(undefined4 *)(param_2 + 0x20));
      FUN_1425bc1b0(plVar1,&local_18);
      FUN_1428d71f0(param_1,plVar1);
      return;
    }
    switch(*param_2) {
    case '\0':
      pwVar4 = L"Failure";
      break;
    case '\x01':
      pwVar4 = L"Success";
      break;
    case '\x02':
      pwVar4 = L"InvalidToken";
      break;
    case '\x03':
      pwVar4 = L"NoKey";
      break;
    case '\x04':
      pwVar4 = L"SessionIdMismatch";
      break;
    case '\x05':
      pwVar4 = L"InvalidParams";
      break;
    default:
      pwVar4 = L"";
    }
    local_18 = 0;
    uStack_10 = 0;
    if (*pwVar4 != L'\0') {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (pwVar4[lVar3] != L'\0');
      uVar2 = (int)lVar3 + 1;
      uStack_10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar4,(longlong)(int)uVar2 * 2);
    }
    FUN_1404dfdc0(plVar1,&local_18);
    (**(code **)(*plVar1 + 0x2c8))(plVar1,0);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1428d71f0 FUN_1428d71f0 body=194 status=ok
// SIG undefined FUN_1428d71f0(void)

void FUN_1428d71f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  LARGE_INTEGER local_res10 [3];
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((param_2 != (longlong *)0x0) && (1 < *(uint *)((longlong)param_2 + 300))) &&
     (param_2[0xb] != 0)) {
    QueryPerformanceCounter(local_res10);
    FString::PrintfImpl(&local_18,L"%08X",local_res10[0].s.LowPart);
    plVar1 = param_2 + 0x31;
    if (plVar1 == &local_18) {
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_18;
      *(undefined4 *)(param_2 + 0x32) = local_10;
      *(undefined4 *)((longlong)param_2 + 0x194) = local_c;
    }
    UNetConnection::SetExpectedClientLoginMsgType(param_2,5);
    FUN_1428d6f50(param_2,plVar1);
    (**(code **)(*param_2 + 0x2c8))(param_2,0);
  }
  return;
}



// FUNCTION 1428d72c0 FUN_1428d72c0 body=86 status=ok
// SIG undefined FUN_1428d72c0(void)

void FUN_1428d72c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_14234e7b0();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  plVar1 = *(longlong **)(lVar2 + 0x1b8);
  (**(code **)(*plVar1 + 0x1a8))(plVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001428d730f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1a0))(plVar1,param_1);
  return;
}



// FUNCTION 1428d7320 FUN_1428d7320 body=86 status=ok
// SIG undefined FUN_1428d7320(void)

void FUN_1428d7320(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  UActorComponent::SendRenderDynamicData_Concurrent();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  plVar1 = *(longlong **)(lVar2 + 0x1b8);
  (**(code **)(*plVar1 + 0x1a8))(plVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001428d736f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1a0))(plVar1,param_1);
  return;
}



// FUNCTION 1428d7380 FUN_1428d7380 body=135 status=ok
// SIG undefined FUN_1428d7380(void)

void FUN_1428d7380(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_1408bda20(param_2,param_1 + 8);
  FUN_1408bda20(param_2,param_1 + 0x18);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x28) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x28,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x28,4);
  }
  return;
}



// FUNCTION 1428d7410 FUN_1428d7410 body=103 status=ok
// SIG undefined FUN_1428d7410(void)

void FUN_1428d7410(undefined8 param_1,longlong *param_2)

{
  char local_res10 [8];
  undefined1 local_res18 [16];
  
  UTexture::Serialize();
  FUN_14242a0d0(local_res18,param_2,0,0xd6);
  local_res10[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res10);
  if ((local_res10[0] != '\0') || (param_2[0xe] != 0)) {
    FUN_142859990(param_1,param_2);
  }
  return;
}



// FUNCTION 1428d7480 FUN_1428d7480 body=526 status=ok
// SIG undefined FUN_1428d7480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428d7480(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_141763960();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x30);
  iVar1 = (int)param_2[8];
  if (iVar1 < 0x1c0) {
    lVar2 = 4;
    do {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
      local_1c = DAT_1468b5da0;
      local_14 = DAT_1468b5da8;
      local_10 = 0x461c4000;
      local_c = 0;
      FUN_1428c3c80(param_2,&local_28);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar1 = (int)param_2[8];
  }
  if (iVar1 < 0x199) {
    (**(code **)(*param_2 + 0x30))(param_2,local_res8);
  }
  if ((*(byte *)(param_2 + 5) & 3) == 0) {
    FUN_1408bdc30(param_2,param_1 + 0x160);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x188);
    FUN_14289d710(param_2,param_1 + 0x560);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x38);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x40);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x48);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x50);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x110);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x148);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x140);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x58);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x138);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x158);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x978);
  }
  FUN_1408bdc30(param_2,param_1 + 0x68);
  FUN_1408bdc30(param_2,param_1 + 0x88);
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && ((*(byte *)(param_2 + 5) & 0x40) != 0)) {
    *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 4;
    lVar2 = UObjectBaseUtility::GetOutermost(param_1);
    *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x20000;
  }
  if ((*(uint *)(param_2 + 6) >> 0x16 & 1) != 0) {
    FUN_1406da970(param_2,param_1 + 0x7bc);
    FUN_1406da970(param_2,param_1 + 0x7c8);
  }
  lVar2 = UObjectBaseUtility::GetOutermost(param_1);
  if ((*(uint *)(lVar2 + 0x50) >> 0x14 & 1) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc;
  }
  return;
}



// FUNCTION 1428d7690 FUN_1428d7690 body=78 status=ok
// SIG undefined FUN_1428d7690(void)

void FUN_1428d7690(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if ((*(uint *)(param_2 + 0x30) >> 0x16 & 1) != 0) {
    FUN_14158ce90(param_2,param_1 + 0x28);
    FUN_1428c3ee0(param_2,param_1 + 0x38);
    FUN_1408bdc30(param_2,param_1 + 0x48);
  }
  return;
}



// FUNCTION 1428d76e0 FUN_1428d76e0 body=202 status=ok
// SIG undefined FUN_1428d76e0(void)

undefined1 FUN_1428d76e0(longlong param_1,undefined8 param_2,byte param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x140);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x7b0))(plVar1), cVar2 == '\0')
     ) {
    return 0;
  }
  *(uint *)(param_1 + 0x7ec) = (param_3 ^ 1) * 2;
  if ((*(int *)(param_1 + 0x7f8) < 2) &&
     ((pcVar3 = (char *)FUN_14288cc20(DAT_146b17150,param_1), *pcVar3 == '\0' || (param_4 != '\0')))
     ) {
    FString::operator=(param_1 + 0x7f0,param_2);
    if (plVar1 == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0x800) = 0;
    }
    else if (param_4 == '\0') {
      (**(code **)(*plVar1 + 0x7b8))(plVar1,param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 1428d77b0 FUN_1428d77b0 body=359 status=ok
// SIG undefined FUN_1428d77b0(void)

void FUN_1428d77b0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0x180) = param_2;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x178) <= param_2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar3 = (longlong)param_2 * 0x80 + *(longlong *)(param_1 + 0x170);
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar3 + 0x20);
  if ((*(uint *)(param_1 + 0x708) < 7) && ((0x6aU >> (*(uint *)(param_1 + 0x708) & 0x1f) & 1) != 0))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (*(longlong *)(param_1 + 0x188) != *(longlong *)(lVar3 + 0x20))) {
    *(longlong *)(param_1 + 0x188) = *(longlong *)(lVar3 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar3 + 8);
  lVar2 = *(longlong *)(lVar3 + 0x10);
  *(longlong *)(param_1 + 0x38) = lVar2;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar3 + 0x18);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x120) != 0)) &&
     (lVar3 = FUN_142873bb0(DAT_146b17150,param_1,*(undefined8 *)(lVar2 + 0x120)),
     lVar3 != *(longlong *)(param_1 + 0x38))) {
    *(longlong *)(param_1 + 0x38) = lVar3;
  }
  lVar3 = *(longlong *)(param_1 + 0x108);
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x120) == 0) {
    return;
  }
  lVar3 = FUN_142873bb0(DAT_146b17150,param_1,*(undefined8 *)(lVar3 + 0x120));
  if (lVar3 != 0) {
    lVar2 = FUN_1429244d0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1428d78f7;
  }
  lVar3 = 0;
LAB_1428d78f7:
  if (lVar3 != *(longlong *)(param_1 + 0x108)) {
    *(longlong *)(param_1 + 0x108) = lVar3;
  }
  return;
}



// FUNCTION 1428d7920 FUN_1428d7920 body=180 status=ok
// SIG undefined FUN_1428d7920(void)

undefined8 FUN_1428d7920(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_78 [112];
  
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (((plVar4 != (longlong *)0x0) ||
      (plVar4 = *(longlong **)(param_1 + 0x108), plVar4 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar4 + 0x368))(), cVar1 == '\0')) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x140) == 0) {
    plVar4 = *(longlong **)(param_1 + 400);
    lVar3 = *plVar4;
    uVar2 = FURL::FURL(local_78,param_2);
    lVar3 = (**(code **)(lVar3 + 0x318))(plVar4,uVar2);
    *(longlong *)(param_1 + 0x140) = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428d79e0 FUN_1428d79e0 body=99 status=ok
// SIG undefined FUN_1428d79e0(void)

void FUN_1428d79e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if ((param_2 != *(longlong *)(param_1 + 0x148)) &&
     (*(longlong *)(param_1 + 0x148) = param_2, param_2 != 0)) {
    lVar2 = AActor::GetLevel(param_2);
    if ((lVar2 != 0) &&
       ((piVar1 = *(int **)(lVar2 + 600), piVar1 != (int *)0x0 &&
        (*(longlong *)(piVar1 + 2) = param_2, *piVar1 == 0)))) {
      lVar2 = UWorld::FindOrAddCollectionByType(param_1,2);
      *(longlong *)(lVar2 + 8) = param_2;
    }
  }
  return;
}



// FUNCTION 1428d7a50 SetHandlerLoadedData body=90 status=ok
// SIG undefined SetHandlerLoadedData(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FSeamlessTravelHandler::SetHandlerLoadedData
                   (longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong in_RAX;
  longlong lVar5;
  uint uVar6;
  
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(longlong *)(param_1 + 0xa0) = param_3;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar6;
      lVar5 = (longlong)(int)((uVar4 & 0xffff) - uVar6);
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8);
      puVar1 = (uint *)(lVar3 + 8 + lVar5 * 0x18);
      *puVar1 = *puVar1 | 0x40000000;
      return lVar3 + lVar5 * 0x18;
    }
    in_RAX = 0;
    _DAT_00000008 = _DAT_00000008 | 0x40000000;
  }
  return in_RAX;
}



// FUNCTION 1428d7ab0 SetPeriod body=13 status=ok
// SIG undefined SetPeriod(void)

void SCircularThrobber::SetPeriod(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2dc) = param_2;
  FUN_1423424c0();
  return;
}



// FUNCTION 1428d7ac0 FUN_1428d7ac0 body=239 status=ok
// SIG undefined FUN_1428d7ac0(void)

void FUN_1428d7ac0(float param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_28;
  int local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b19b48) {
    _Init_thread_header(&DAT_146b19b48);
    if (DAT_146b19b48 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b19b40 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"voice.SilenceDetectionThreshold");
      _Init_thread_footer(&DAT_146b19b48);
    }
  }
  plVar1 = DAT_146b19b40;
  FString::PrintfImpl(&local_28,&DAT_144050d74,(double)param_1);
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428d7bb0 SetRadius body=13 status=ok
// SIG undefined SetRadius(void)

void ACircularAreaMarker::SetRadius(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d8) = param_2;
  FUN_1423424c0();
  return;
}



// FUNCTION 1428d7bc0 FUN_1428d7bc0 body=62 status=ok
// SIG undefined FUN_1428d7bc0(void)

void FUN_1428d7bc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x138);
  if ((plVar1 != (longlong *)0x0) && (plVar1 != param_2)) {
    (**(code **)(*plVar1 + 0x280))(plVar1,0);
  }
  *(longlong **)(param_1 + 0x138) = param_2;
  return;
}



// FUNCTION 1428d7c00 FUN_1428d7c00 body=1630 status=ok
// SIG undefined FUN_1428d7c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1428d7c00(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  BOOL BVar8;
  ulonglong uVar9;
  undefined4 extraout_var;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  LARGE_INTEGER local_res8;
  longlong *local_78;
  float local_70;
  undefined8 local_68;
  uint local_60;
  longlong *local_58;
  undefined8 local_50;
  
  uVar9 = (ulonglong)*param_2;
  if ((*(uint *)(param_1 + 0x7bc) == *param_2) &&
     (uVar9 = (ulonglong)param_2[1], *(uint *)(param_1 + 0x7c0) == param_2[1])) {
    uVar13 = param_2[2];
    uVar9 = (ulonglong)uVar13;
    if (*(uint *)(param_1 + 0x7c4) == uVar13) {
      uVar9 = CONCAT71((uint7)(uint3)(uVar13 >> 8),1);
      goto LAB_1428d7c3d;
    }
  }
  uVar9 = uVar9 & 0xffffffffffffff00;
LAB_1428d7c3d:
  if ((char)uVar9 == '\0') {
    uVar9 = FUN_1415bac00();
    if (((char)uVar9 != '\0') &&
       ((*(longlong *)(param_1 + 0xf8) != 0 || (*(longlong *)(param_1 + 0x100) != 0)))) {
      return uVar9 & 0xffffffffffffff00;
    }
    QueryPerformanceCounter(&local_res8);
    bVar5 = false;
    DAT_1464af264 = DAT_1464af264 + 1;
    uVar1 = *(undefined8 *)param_2;
    uVar13 = param_2[2];
    plVar2 = *(longlong **)(param_1 + 0x7bc);
    uVar3 = *(undefined4 *)(param_1 + 0x7c4);
    lVar10 = (longlong)(DAT_1464af258 + -1);
    if (-1 < DAT_1464af258 + -1) {
      lVar11 = lVar10 << 4;
      bVar5 = false;
      do {
        if ((*(int *)(lVar11 + 8 + DAT_1464af250) == 0) ||
           (plVar16 = *(longlong **)(lVar11 + DAT_1464af250), plVar16 == (longlong *)0x0)) {
LAB_1428d7d2e:
          bVar5 = true;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,uVar3);
          local_68 = uVar1;
          local_60 = uVar13;
          local_58 = plVar2;
          cVar7 = (**(code **)(*plVar16 + 0x40))(plVar16,param_1,&local_58,&local_68);
          if (cVar7 == '\0') goto LAB_1428d7d2e;
        }
        lVar11 = lVar11 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
    iVar6 = DAT_1464af258;
    uVar9 = 0;
    DAT_1464af264 = DAT_1464af264 + -1;
    if ((bVar5) && (DAT_1464af264 < 1)) {
      uVar12 = uVar9;
      uVar15 = uVar9;
      if (0 < DAT_1464af258) {
        do {
          if (((*(int *)(uVar12 + 8 + DAT_1464af250) == 0) ||
              (*(longlong **)(uVar12 + DAT_1464af250) == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(**(longlong **)(uVar12 + DAT_1464af250) + 0x10))(), cVar7 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af250,uVar15,1,1);
          }
          else {
            uVar15 = (ulonglong)((int)uVar15 + 1);
            uVar12 = uVar12 + 0x10;
          }
        } while ((int)uVar15 < DAT_1464af258);
      }
      _DAT_1464af260 = DAT_1464af258 * 2;
      if (DAT_1464af258 * 2 < 3) {
        _DAT_1464af260 = 2;
      }
      if ((_DAT_1464af260 < iVar6) && (DAT_1464af25c != DAT_1464af258)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af250);
      }
    }
    local_68._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x7bc) >> 0x20);
    local_68._4_4_ = local_68._4_4_ - param_2[1];
    local_68._0_4_ = (int)*(undefined8 *)(param_1 + 0x7bc);
    local_68._0_4_ = (int)local_68 - *param_2;
    local_70 = (float)(int)(*(int *)(param_1 + 0x7c4) - param_2[2]);
    local_78 = (longlong *)CONCAT44((float)local_68._4_4_,(float)(int)local_68);
    *(longlong **)(param_1 + 0x7d4) = local_78;
    *(float *)(param_1 + 0x7dc) = local_70;
    local_58 = local_78;
    local_50._0_4_ = local_70;
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x260))
              (*(longlong **)(param_1 + 0x1b8),&local_58);
    if (*(longlong *)(param_1 + 0x218) != 0) {
      local_58 = local_78;
      local_50._0_4_ = local_70;
      FUN_1426da1d0(*(longlong *)(param_1 + 0x218),&local_58);
    }
    uVar12 = uVar9;
    uVar15 = uVar9;
    if (0 < *(int *)(param_1 + 0x168)) {
      do {
        lVar10 = *(longlong *)(uVar15 + *(longlong *)(param_1 + 0x160));
        if (((*(byte *)(lVar10 + 0x204) & 0x10) != 0) ||
           (cVar7 = ULevel::IsPersistentLevel(lVar10), cVar7 != '\0')) {
          FUN_1425157e0(lVar10,&local_78,1);
        }
        uVar13 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar13;
        uVar15 = uVar15 + 8;
      } while ((int)uVar13 < *(int *)(param_1 + 0x168));
    }
    plVar2 = *(longlong **)(param_1 + 0x138);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2a0))(plVar2,&local_78,1);
    }
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_1417a5b30(param_1,&local_58,0,0,0);
    plVar2 = local_58 + (int)(float)local_50;
    for (plVar16 = local_58; plVar16 != plVar2; plVar16 = plVar16 + 1) {
      plVar4 = (longlong *)*plVar16;
      if (plVar4 != (longlong *)0x0) {
        lVar10 = FUN_1428e7a40();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (plVar4[0x23] == 0)) {
          (**(code **)(*plVar4 + 1000))
                    (plVar4,&local_78,CONCAT71((int7)((ulonglong)(lVar10 + 0x88) >> 8),1));
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 1000))(plVar2,&local_78,1);
    }
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 1000))(plVar2,&local_78,1);
    }
    plVar2 = *(longlong **)(param_1 + 0x50);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 1000))(plVar2,&local_78,1);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x7bc);
    uVar13 = *(uint *)(param_1 + 0x7c4);
    *(uint *)(param_1 + 0x7bc) = *param_2;
    *(uint *)(param_1 + 0x7c0) = param_2[1];
    *(uint *)(param_1 + 0x7c4) = param_2[2];
    *(uint *)(param_1 + 0x7c8) = *param_2;
    *(uint *)(param_1 + 0x7cc) = param_2[1];
    *(uint *)(param_1 + 2000) = param_2[2];
    uVar12 = uVar9;
    uVar15 = uVar9;
    if (0 < *(int *)(param_1 + 0x168)) {
      do {
        lVar10 = *(longlong *)(uVar12 + *(longlong *)(param_1 + 0x160));
        if (((*(byte *)(lVar10 + 0x204) & 0x10) != 0) &&
           (lVar10 = *(longlong *)(lVar10 + 0xf0), lVar10 != 0)) {
          local_58 = *(longlong **)(param_1 + 0x7bc);
          local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x7c4));
          local_68 = uVar1;
          local_60 = uVar13;
          FUN_1429a1a50(lVar10,&local_68,&local_58);
        }
        uVar14 = (int)uVar15 + 1;
        uVar12 = uVar12 + 8;
        uVar15 = (ulonglong)uVar14;
      } while ((int)uVar14 < *(int *)(param_1 + 0x168));
    }
    plVar2 = *(longlong **)(param_1 + 0x150);
    if (plVar2 != (longlong *)0x0) {
      local_58 = *(longlong **)(param_1 + 0x7bc);
      local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x7c4));
      local_68 = uVar1;
      local_60 = uVar13;
      (**(code **)(*plVar2 + 0x280))(plVar2,&local_68,&local_58);
    }
    bVar5 = false;
    DAT_1464af27c = DAT_1464af27c + 1;
    plVar2 = *(longlong **)(param_1 + 0x7bc);
    uVar3 = *(undefined4 *)(param_1 + 0x7c4);
    lVar10 = (longlong)(DAT_1464af270 + -1);
    if (-1 < DAT_1464af270 + -1) {
      lVar11 = lVar10 << 4;
      bVar5 = false;
      do {
        if ((*(int *)(lVar11 + 8 + DAT_1464af268) == 0) ||
           (plVar16 = *(longlong **)(lVar11 + DAT_1464af268), plVar16 == (longlong *)0x0)) {
LAB_1428d815d:
          bVar5 = true;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,uVar3);
          local_68 = uVar1;
          local_60 = uVar13;
          local_58 = plVar2;
          cVar7 = (**(code **)(*plVar16 + 0x40))(plVar16,param_1,&local_68,&local_58);
          if (cVar7 == '\0') goto LAB_1428d815d;
        }
        lVar11 = lVar11 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
    iVar6 = DAT_1464af270;
    DAT_1464af27c = DAT_1464af27c + -1;
    if ((bVar5) && (DAT_1464af27c < 1)) {
      uVar12 = uVar9;
      if (0 < DAT_1464af270) {
        do {
          if (((*(int *)(uVar9 + 8 + DAT_1464af268) == 0) ||
              (*(longlong **)(uVar9 + DAT_1464af268) == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(**(longlong **)(uVar9 + DAT_1464af268) + 0x10))(), cVar7 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af268,uVar12,1,1);
          }
          else {
            uVar12 = (ulonglong)((int)uVar12 + 1);
            uVar9 = uVar9 + 0x10;
          }
        } while ((int)uVar12 < DAT_1464af270);
      }
      _DAT_1464af278 = DAT_1464af270 * 2;
      if (_DAT_1464af278 < 3) {
        _DAT_1464af278 = 2;
      }
      if ((_DAT_1464af278 < iVar6) && (DAT_1464af274 != DAT_1464af270)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af268);
      }
    }
    BVar8 = QueryPerformanceCounter(&local_res8);
    uVar9 = CONCAT44(extraout_var,BVar8);
  }
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 1428d8260 FUN_1428d8260 body=13 status=ok
// SIG undefined FUN_1428d8260(void)

void FUN_1428d8260(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2e0) = param_2;
  FUN_1423424c0();
  return;
}



// FUNCTION 1428d8270 SetPeriod body=13 status=ok
// SIG undefined SetPeriod(void)

void SCircularThrobber::SetPeriod(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d4) = param_2;
  FUN_1423424c0();
  return;
}



// FUNCTION 1428d8280 SetRadius body=13 status=ok
// SIG undefined SetRadius(void)

void UWindDirectionalSourceComponent::SetRadius(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d0) = param_2;
  FUN_1423424c0();
  return;
}



// FUNCTION 1428d8290 FUN_1428d8290 body=26 status=ok
// SIG undefined FUN_1428d8290(void)

void FUN_1428d8290(longlong param_1,char param_2)

{
  *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) & 0xfffffffe;
  *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | (uint)(param_2 == '\x01');
  FUN_1423424c0();
  return;
}



// FUNCTION 1428d82b0 ShouldCompilePermutation body=71 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 FWriteToSliceGS::ShouldCompilePermutation(uint *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  cVar2 = FUN_1424866d0(uVar1,2);
  if (cVar2 != '\0') {
    cVar2 = FUN_1424866d0(uVar1,2);
    if ((cVar2 != '\0') && ((0x1d < uVar1 || ((0x28e71800U >> (uVar1 & 0x1f) & 1) == 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428d8310 FUN_1428d8310 body=700 status=ok
// SIG undefined FUN_1428d8310(void)

void FUN_1428d8310(char *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  int local_res8 [2];
  longlong *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 *local_c8;
  int local_c0;
  undefined4 local_bc;
  int *local_b8;
  int local_b0;
  undefined1 local_a8 [120];
  
  if ((*param_1 != '\0') && (param_1[0x88] != '\0')) {
    FUN_1415afb20(L"LoadMap");
    AK::MemoryMgr::StartProfileThreadUsage(5);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 400);
    lVar11 = *plVar4;
    uVar3 = FURL::FURL(local_a8,param_1 + 8);
    (**(code **)(lVar11 + 0x310))(plVar4,uVar3);
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0x30);
    }
    FName::FName(local_res18,puVar6,1);
    local_c0 = *(int *)(param_1 + 0x38);
    lVar11 = (longlong)local_c0;
    pvVar2 = *(void **)(param_1 + 0x30);
    local_c8 = (undefined2 *)0x0;
    if (local_c0 == 0) {
      local_bc = 0;
      iVar10 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0,0);
      _guard_xfg_dispatch_icall_nop(local_c8,pvVar2,lVar11 * 2);
      iVar10 = *(int *)(param_1 + 0x38);
    }
    pvVar2 = *(void **)(param_1 + 0x30);
    local_b8 = (int *)0x0;
    piVar9 = (int *)0x0;
    local_b0 = iVar10;
    if (iVar10 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar10,0);
      piVar9 = local_b8;
      _guard_xfg_dispatch_icall_nop(local_b8,pvVar2,(longlong)iVar10 * 2);
    }
    iVar10 = local_b0;
    puVar6 = &DAT_143f3eda8;
    if (local_c0 != 0) {
      puVar6 = local_c8;
    }
    plVar4 = (longlong *)FName::FName(local_res20,puVar6,1);
    lVar11 = *plVar4;
    if (DAT_1465356b8 != DAT_1465356e4) {
      puVar5 = DAT_1465356f0;
      if (DAT_1465356f0 == (undefined *)0x0) {
        puVar5 = &DAT_1465356e8;
      }
      iVar1 = *(int *)(puVar5 + ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                                (longlong)DAT_1465356f8 - 1U) * 4);
      while (iVar1 != -1) {
        lVar7 = (longlong)iVar1 * 0x18;
        if (*(longlong *)(lVar7 + DAT_1465356b0) == lVar11) {
          if ((iVar1 != -1) && (lVar7 = lVar7 + DAT_1465356b0, lVar7 != 0)) goto LAB_1428d851d;
          break;
        }
        iVar1 = *(int *)(lVar7 + 0x10 + DAT_1465356b0);
      }
    }
    local_res10 = plVar4;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TKeyInitializer<FName_const_&>_>(&DAT_1465356b0,local_res8,&local_res10,0);
    lVar7 = DAT_1465356b0 + (longlong)local_res8[0] * 0x18;
LAB_1428d851d:
    *(undefined4 *)(lVar7 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x708);
    piVar8 = (int *)(param_1 + 0x78);
    if (((*(int *)(param_1 + 0x84) == 0 && *(int *)(param_1 + 0x80) == 0) &&
        *(int *)(param_1 + 0x7c) == 0) && *(int *)(param_1 + 0x78) == 0) {
      piVar8 = (int *)0x0;
    }
    piVar12 = (int *)&DAT_143f3eda8;
    if (iVar10 != 0) {
      piVar12 = piVar9;
    }
    uVar3 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                      (&local_b8,param_1,FUN_1428d6cc0);
    FUN_1416fe5f0(&local_c8,piVar8,piVar12,uVar3,0,0xffffffff,0);
    if (piVar9 != (int *)0x0) {
      FMemory::Free(piVar9);
    }
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1428d85d0 FUN_1428d85d0 body=1471 status=ok
// SIG undefined FUN_1428d85d0(void)

ulonglong FUN_1428d85d0(char *param_1,longlong param_2,longlong param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  BOOL BVar6;
  long lVar7;
  int iVar8;
  undefined4 extraout_var;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  int *piVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  wchar_t **ppwVar20;
  LARGE_INTEGER local_res8;
  wchar_t *local_res18 [2];
  wchar_t **local_a8;
  undefined8 local_a0;
  wchar_t **local_98;
  int local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [3];
  
  local_58 = FUN_142876210(DAT_146b17150);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(local_58 + 200);
  BVar6 = QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0xb8) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (*(int *)(param_3 + 0x68) == 0) {
    return CONCAT44(extraout_var,BVar6) & 0xffffffffffffff00;
  }
  puVar1 = (undefined8 *)(param_3 + 0x28);
  if (*(int *)(param_3 + 0x30) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*puVar1;
  }
  FUN_1415af970(puVar16,L"SeamlessTravel",L"PreLoad");
  lVar7 = FUN_14168db90();
  AK::MemoryMgr::StartProfileThreadUsage(lVar7);
  AK::MemoryMgr::StartProfileThreadUsage(5);
  FUN_1428d4fe0(local_50,puVar1);
  piVar15 = (int *)0x0;
  if (((param_4[3] != 0 || param_4[2] != 0) || param_4[1] != 0) || *param_4 != 0) {
    piVar15 = param_4;
  }
  cVar5 = FUN_1416f0740(local_50,piVar15,0,1);
  if (cVar5 == '\0') {
    uVar17 = 0;
  }
  else {
    local_res8.QuadPart = local_res8.QuadPart & 0xffffffffffffff00;
    if (*param_1 != '\0') {
      if (*(int *)(param_3 + 0x30) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar1;
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = *(undefined2 **)(param_1 + 0x30);
      }
      iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar16);
      if (iVar8 == 0) {
        FURL::operator=(param_1 + 8,param_3);
        uVar17 = 1;
        goto LAB_1428d8b56;
      }
      FUN_1428c7030(param_1);
      local_res8.s.LowPart._0_1_ = 1;
    }
    *(longlong *)(param_1 + 0x98) = param_2;
    if ((*(longlong *)(param_2 + 0x108) != 0) &&
       (cVar5 = UDemoNetDriver::IsRecording(), cVar5 != '\0')) {
      FUN_14241a710(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x108),puVar1);
    }
    FURL::operator=(param_1 + 8,param_3);
    iVar8 = *param_4;
    iVar18 = param_4[1];
    iVar3 = param_4[2];
    iVar4 = param_4[3];
    param_1[0x88] = '\0';
    *(int *)(param_1 + 0x78) = iVar8;
    *(int *)(param_1 + 0x7c) = iVar18;
    *(int *)(param_1 + 0x80) = iVar3;
    *(int *)(param_1 + 0x84) = iVar4;
    *param_1 = '\x01';
    param_1[0xa8] = '\0';
    param_1[0xa9] = '\0';
    lVar9 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(param_1 + 0x98));
    lVar9 = *(longlong *)(lVar9 + 0x18);
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = *(undefined2 **)(param_1 + 0x30);
    }
    FName::FName(&local_60,puVar16,1);
    plVar10 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
    lVar19 = plVar10[0x1f];
    if (lVar19 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar19 = plVar10[0x1f];
    }
    local_a8 = (wchar_t **)0x0;
    local_a0 = 0;
    local_78 = (undefined2 *)0x0;
    local_70 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    puVar16 = local_78;
    FGenericPlatformString::Memcpy(local_78,&DAT_143f73c90,4);
    local_res18[0] = (wchar_t *)0x0;
    if (*(longlong *)(lVar19 + 0x50) == 0) {
      local_88 = (wchar_t *)0x0;
      local_80 = 0;
    }
    else {
      FName::ToString((longlong *)(lVar19 + 0x50),&local_88);
    }
    puVar14 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar14 = puVar16;
    }
    iVar8 = FUN_141592950(&local_88,puVar14,0,0,0xffffffff);
    if (-1 < iVar8) {
      if ((int)local_80 == 0) {
        local_res18[0] = L"";
        iVar18 = 0;
      }
      else {
        iVar18 = (int)local_80 + -1;
        local_res18[0] = local_88;
      }
      local_98 = (wchar_t **)0x0;
      ppwVar20 = (wchar_t **)0x0;
      local_8c = 0;
      if (iVar8 < iVar18) {
        iVar18 = iVar8;
      }
      iVar8 = iVar18 + 1;
      if (iVar18 == 0) {
        iVar8 = 0;
      }
      local_90 = iVar8;
      if ((0 < iVar8) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0), iVar8 = local_90,
         ppwVar20 = local_98, 0 < local_90)) {
        wcsncpy((wchar_t *)local_98,local_res18[0],(longlong)iVar18);
        *(undefined2 *)((longlong)ppwVar20 + (longlong)iVar18 * 2) = 0;
      }
      if (local_a8 != (wchar_t **)0x0) {
        FMemory::Free();
      }
      local_a0 = CONCAT44(local_8c,iVar8);
      puVar16 = local_78;
      local_a8 = ppwVar20;
    }
    if (local_88 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar16 != (undefined2 *)0x0) {
      FMemory::Free(puVar16);
    }
    ppwVar20 = (wchar_t **)&DAT_143f3eda8;
    if ((int)local_a0 != 0) {
      ppwVar20 = local_a8;
    }
    FName::FName(&local_68,ppwVar20,1);
    if ((local_68 == lVar9) || (local_68 == local_60)) {
      param_1[0x88] = '\x01';
      if (local_res8.s.LowPart._0_1_ == '\0') {
        FUN_1428d8310(param_1);
      }
      else {
        param_1[0xa8] = '\x01';
        param_1[0xa9] = '\x01';
      }
    }
    else if ((int)local_a0 < 2) {
      local_res8.QuadPart = 0;
      if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x708) == 3) {
        uVar13 = 3;
      }
      else {
        uVar13 = 0;
      }
      uVar11 = FUN_1428c8a00(uVar13,0,0,0,1,4);
      FSeamlessTravelHandler::SetHandlerLoadedData(param_1,0,uVar11);
    }
    else {
      if (((lVar9 == local_60) &&
          (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x38), lVar9 != 0)) &&
         (iVar8 = 0, 0 < *(int *)(lVar9 + 0xa0))) {
        lVar19 = 0;
        do {
          lVar2 = *(longlong *)(lVar19 + *(longlong *)(lVar9 + 0x98));
          if (lVar2 != 0) {
            local_res8.QuadPart = 0;
            FUN_1425d0d80(lVar2,0);
          }
          iVar8 = iVar8 + 1;
          lVar19 = lVar19 + 8;
        } while (iVar8 < *(int *)(lVar9 + 0xa0));
      }
      ppwVar20 = (wchar_t **)&DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        ppwVar20 = local_a8;
      }
      FName::FName(local_res18,ppwVar20,1);
      if (DAT_1465356b8 != DAT_1465356e4) {
        puVar12 = DAT_1465356f0;
        if (DAT_1465356f0 == (undefined *)0x0) {
          puVar12 = &DAT_1465356e8;
        }
        iVar8 = *(int *)(puVar12 +
                        ((longlong)((int)((ulonglong)local_res18[0] >> 0x20) + (int)local_res18[0])
                        & (longlong)DAT_1465356f8 - 1U) * 4);
        while (iVar8 != -1) {
          lVar9 = (longlong)iVar8;
          if (*(wchar_t **)(DAT_1465356b0 + lVar9 * 0x18) == local_res18[0]) {
            if ((iVar8 != -1) && (lVar9 = DAT_1465356b0 + lVar9 * 0x18, lVar9 != 0))
            goto LAB_1428d8ac9;
            break;
          }
          iVar8 = *(int *)(DAT_1465356b0 + 0x10 + lVar9 * 0x18);
        }
      }
      local_98 = local_res18;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TKeyInitializer<FName_const_&>_>(&DAT_1465356b0,&local_res8,&local_98,0);
      lVar9 = DAT_1465356b0 + (longlong)(int)local_res8.s.LowPart * 0x18;
LAB_1428d8ac9:
      *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x708);
      uVar13 = 0;
      if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x708) == 3) {
        uVar13 = 0x100000;
      }
      uVar11 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                         (&local_78,param_1,FUN_1428d6cc0);
      FUN_1416fec20(&local_a8,uVar11,0,uVar13,*(undefined4 *)(local_58 + 600));
    }
    uVar17 = 1;
    if (local_a8 != (wchar_t **)0x0) {
      FMemory::Free();
    }
  }
LAB_1428d8b56:
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  return uVar17;
}



// FUNCTION 1428d8b90 StreamCompressedData body=361 status=ok
// SIG undefined StreamCompressedData(void)

undefined8
FVorbisAudioInfo::StreamCompressedData(longlong param_1,void *param_2,char param_3,uint param_4)

{
  BOOL BVar1;
  int iVar2;
  size_t _Size;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 1;
  UNLOCK();
  _Size = (size_t)param_4;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  uVar3 = 0;
  do {
    if (param_4 == 0) {
LAB_1428d8cbc:
      LOCK();
      *(undefined4 *)(param_1 + 0x20) = 0;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      return uVar3;
    }
    iVar2 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8),param_2,_Size,0,2,1,0);
    if (iVar2 < 1) {
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8));
      ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),0,0x348);
      local_48 = 0x428d26b0;
      uStack_44 = 1;
      uStack_40 = 0;
      uStack_3c = 0;
      local_38 = 0x40435d50;
      uStack_34 = 1;
      uStack_30 = 0;
      uStack_2c = 0;
      iVar2 = ::_guard_xfg_dispatch_icall_nop(param_1,*(undefined8 *)(param_1 + 8),0,0,&local_48);
      if (iVar2 < 0) goto LAB_1428d8cbc;
      if (param_3 == '\0') {
        ::_guard_xfg_dispatch_icall_nop(param_2,0,_Size);
        goto LAB_1428d8cbc;
      }
    }
    else {
      param_2 = (void *)((longlong)param_2 + (longlong)iVar2);
      _Size = (size_t)(uint)((int)_Size - iVar2);
    }
    param_4 = (uint)_Size;
  } while( true );
}



// FUNCTION 1428d8d00 StreamCompressedInfo body=206 status=ok
// SIG undefined StreamCompressedInfo(void)

undefined1
FVorbisAudioInfo::StreamCompressedInfo(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  BOOL BVar2;
  code *local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 local_10;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 1;
  UNLOCK();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_28 = OggReadStreaming;
    *(undefined8 *)(param_1 + 0x18) = 0;
    local_18 = AK::MemoryMgr::GetPoolName;
    *(undefined8 *)(param_1 + 0x50) = param_2;
    local_20 = 0;
    local_10 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x10000;
    uVar1 = FUN_1428cb750(param_1,&local_28,param_3);
    *(int *)(param_1 + 0x58) = *(int *)(param_3 + 4) << 0xf;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 0;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1428d8dd0 StripPIEPrefixFromPackageName body=1036 status=ok
// SIG undefined StripPIEPrefixFromPackageName(void)

void ** UWorld::StripPIEPrefixFromPackageName(void **param_1,undefined8 param_2,longlong param_3)

{
  short *psVar1;
  void *_Dst;
  void *pvVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  undefined2 *puVar11;
  int iVar12;
  int local_res8;
  void *local_88;
  void *local_80;
  void *local_78;
  uint local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  void *local_48;
  ulonglong local_40;
  
  uVar9 = 0;
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  FPackageName::GetLongPackageAssetName(&local_58);
  cVar3 = FString::StartsWith(&local_58,param_3,1);
  if (cVar3 == '\0') {
    FString::operator=(param_1,param_2);
  }
  else {
    FUN_1416f9840(&local_48);
    local_68 = (void *)0x0;
    local_60 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    pvVar7 = local_68;
    local_80 = local_68;
    FGenericPlatformString::Convert<char,wchar_t>(local_68,2,&DAT_1451e57e4,2,0x3f);
    iVar8 = 0;
    iVar4 = *(int *)(param_3 + 8) + -1;
    if (*(int *)(param_3 + 8) == 0) {
      iVar4 = iVar8;
    }
    if (local_50 == 0) {
      puVar11 = &DAT_143f3eda8;
      iVar12 = iVar8;
    }
    else {
      puVar11 = local_58;
      iVar12 = local_50 + -1;
    }
    iVar4 = iVar12 - iVar4;
    if ((-1 < iVar4) && (iVar8 = iVar12, iVar4 < iVar12)) {
      iVar8 = iVar4;
    }
    local_88 = (void *)0x0;
    local_78 = (void *)0x0;
    local_res8 = 0;
    local_6c = 0;
    psVar1 = puVar11 + ((longlong)iVar12 - (longlong)iVar8);
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (psVar1[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_70 = uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      local_res8 = local_6c;
      uVar9 = local_70;
      local_88 = local_78;
      FGenericPlatformString::Memcpy(local_78,psVar1,(longlong)(int)uVar5 * 2);
      pvVar7 = local_68;
    }
    pvVar10 = local_48;
    uVar5 = (uint)local_40;
    if ((int)uVar5 < 2) {
      local_40 = local_60 & 0xffffffff;
      local_80 = (void *)0x0;
      iVar8 = local_60._4_4_;
    }
    else {
      iVar4 = 0;
      if ((int)local_60 != 0) {
        iVar4 = (int)local_60 + -1;
      }
      if ((uVar5 != 0) || (iVar8 = 1, iVar4 == 0)) {
        iVar8 = 0;
      }
      local_78 = (void *)0x0;
      local_70 = uVar5;
      if ((uVar5 == 0) && (iVar8 + iVar4 == 0)) {
        local_6c = 0;
        pvVar7 = (void *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar8 + iVar4 + uVar5,0);
        pvVar7 = local_78;
        ::_guard_xfg_dispatch_icall_nop(local_78,pvVar10,(longlong)(int)uVar5 * 2);
        local_40 = (ulonglong)local_70;
      }
      iVar8 = local_6c;
      if (iVar4 != 0) {
        iVar12 = (int)local_40;
        local_70 = (uint)(iVar12 == 0) + iVar12 + iVar4;
        if (local_6c < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,local_40 & 0xffffffff);
          pvVar7 = local_78;
        }
        iVar8 = local_6c;
        local_40 = (ulonglong)local_70;
        pvVar10 = (void *)(((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2 + (longlong)pvVar7);
        ::_guard_xfg_dispatch_icall_nop(pvVar10,local_68,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)pvVar10 + (longlong)iVar4 * 2) = 0;
      }
    }
    pvVar10 = (void *)0x0;
    uVar5 = (uint)local_40;
    if (1 < (int)uVar5) {
      iVar4 = uVar9 - 1;
      if (uVar9 == 0) {
        iVar4 = 0;
      }
      if ((uVar5 != 0) || (iVar12 = 1, iVar4 == 0)) {
        iVar12 = 0;
      }
      local_40 = local_40 & 0xffffffff;
      local_78 = pvVar7;
      local_70 = uVar5;
      local_6c = iVar8;
      if (iVar8 < (int)(iVar12 + uVar5 + iVar4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
        local_40 = (ulonglong)local_70;
      }
      uVar9 = (uint)local_40;
      pvVar10 = local_88;
      if (iVar4 == 0) {
        pvVar7 = (void *)0x0;
        local_88 = local_78;
        local_res8 = local_6c;
      }
      else {
        local_70 = iVar4 + (uint)(uVar9 == 0) + uVar9;
        if (local_6c < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,local_40);
        }
        local_res8 = local_6c;
        uVar5 = local_70;
        pvVar2 = local_78;
        _Dst = (void *)((longlong)local_78 + ((longlong)(int)uVar9 - (ulonglong)(uVar9 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,local_88,(longlong)iVar4 * 2);
        pvVar7 = (void *)0x0;
        *(undefined2 *)((longlong)_Dst + (longlong)iVar4 * 2) = 0;
        local_88 = pvVar2;
        uVar9 = uVar5;
      }
    }
    if (param_1 == &local_68) {
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FMemory::Free();
      }
      *param_1 = local_88;
      *(uint *)(param_1 + 1) = uVar9;
      *(int *)((longlong)param_1 + 0xc) = local_res8;
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1428d91e0 FUN_1428d91e0 body=6118 status=ok
// SIG undefined FUN_1428d91e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001428da170) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1428d91e0(char *param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  char cVar8;
  wint_t wVar9;
  wint_t wVar10;
  int iVar11;
  BOOL BVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  char *pcVar19;
  int *piVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  undefined2 *puVar28;
  longlong *plVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  wint_t *pwVar34;
  LARGE_INTEGER LVar35;
  ulonglong uVar36;
  longlong *plVar37;
  int iVar38;
  byte bVar39;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  byte local_1e8;
  byte local_1e7;
  char *local_1e0;
  undefined1 local_1d8 [8];
  LARGE_INTEGER local_1d0;
  undefined8 local_1c8;
  LARGE_INTEGER local_1b8;
  undefined1 *puStack_1b0;
  LARGE_INTEGER local_1a8;
  longlong *local_1a0;
  LARGE_INTEGER local_198;
  undefined8 local_190;
  uint local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  longlong *local_178 [2];
  undefined8 local_168;
  undefined1 local_160 [40];
  undefined **local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  int local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  _RTL_CRITICAL_SECTION local_e0;
  longlong *local_b8;
  char local_b0;
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong *local_78;
  longlong local_70;
  int local_68;
  undefined1 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  bVar3 = false;
  local_1e0 = param_1;
  if ((param_1[0xa9] != '\0') &&
     (cVar7 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)(), cVar7 == '\0')) {
    FUN_14172d470(0,1);
    param_1[0xa9] = '\0';
    if ((*param_1 != '\0') && (param_1[0xa8] = '\0', param_1[0x88] != '\0')) {
      FUN_1428d8310(param_1);
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x98);
  plVar29 = (longlong *)0x0;
  local_178[0] = *(longlong **)(lVar16 + 0x38);
  if ((*(longlong *)(param_1 + 0x90) != 0) || (*(longlong *)(param_1 + 0xa0) != 0)) {
    if (*(int *)(lVar16 + 0x7f8) == 0) {
      puVar28 = &DAT_143f3eda8;
    }
    else {
      puVar28 = *(undefined2 **)(lVar16 + 0x7f0);
    }
    pwVar34 = &DAT_1451e5724;
    do {
      wVar9 = *(wint_t *)((longlong)pwVar34 + (longlong)(puVar28 + -0xa28f2b92));
      if ((wVar9 == 0) && (*pwVar34 == 0)) {
        if ((*(longlong *)(param_1 + 0xa0) != 0) &&
           (cVar7 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)(), cVar7 != '\0')) {
          return 0;
        }
        if (*(longlong *)(param_1 + 0x98) == *(longlong *)(param_1 + 0xa0)) {
          FString::PrintfImpl(&local_198,L"Travel aborted - new world is the same as current world")
          ;
          FUN_1428c7030(param_1);
LAB_1428d9329:
          if ((longlong *)local_198.QuadPart != (longlong *)0x0) {
            FMemory::Free();
          }
          return 0;
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x30) == 0) {
          local_1a8 = *(LARGE_INTEGER *)(*(longlong *)(param_1 + 0x90) + 0x18);
          FName::ToString(&local_1a8,&local_198);
          LVar35.QuadPart = (LONGLONG)&DAT_143f3eda8;
          if ((int)local_190 != 0) {
            LVar35 = local_198;
          }
          FString::PrintfImpl(&local_1d0,L"Unable to travel to \'%s\' - package is not a level",
                              LVar35.QuadPart);
          if ((longlong *)local_198.QuadPart != (longlong *)0x0) {
            FMemory::Free();
          }
          FUN_1428c7030(param_1);
          FUN_1428661b0(DAT_146b17150,*(undefined8 *)(param_1 + 0x98),0,&local_1d0);
          local_198 = local_1d0;
          goto LAB_1428d9329;
        }
        FUN_1428caf60(*(longlong *)(param_1 + 0x98),2);
        cVar7 = '\0';
        if (param_1[0x88] != '\0') {
          FUN_1428c9740(*(longlong *)(param_1 + 0xa0),
                        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20) + 0x18))
          ;
          cVar7 = param_1[0x88];
        }
        lVar16 = *(longlong *)(param_1 + 0x98);
        plVar22 = *(longlong **)(lVar16 + 0x148);
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x728))(plVar22,cVar7 == '\0');
          lVar16 = *(longlong *)(param_1 + 0x98);
        }
        *(uint *)(lVar16 + 0x830) = *(uint *)(lVar16 + 0x830) | 0x400;
        if (((*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x108) != 0) &&
            (cVar7 = FUN_142416ee0(), cVar7 == '\0')) &&
           (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x108) + 0x898) == '\0')) {
          FUN_1428c8ca0();
        }
        local_130 = 0;
        local_138 = &PTR__scalar_deleting_destructor__144d309d8;
        local_128 = 0;
        local_110 = 0;
        local_108 = 0;
        local_100 = 0xffffffff;
        local_fc = 0;
        local_f0 = 0;
        local_e8 = 0;
        InitializeCriticalSection(&local_e0);
        SetCriticalSectionSpinCount(&local_e0,4000);
        local_b8 = (longlong *)0x0;
        local_138 = &PTR__scalar_deleting_destructor__144d309d8;
        lVar16 = *(longlong *)(param_1 + 0x98);
        local_b0 = '\0';
        local_198.QuadPart = 0;
        local_190 = 0;
        plVar22 = *(longlong **)(lVar16 + 0x140);
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x650))(plVar22,param_1[0x88] == '\0',&local_198);
          lVar16 = *(longlong *)(param_1 + 0x98);
        }
        iVar11 = FUN_1428cf800(lVar16);
        lVar16 = *(longlong *)(param_1 + 0x98);
        local_1e7 = iVar11 == 3;
        plVar22 = plVar29;
        if ((bool)local_1e7) {
          UEngine::GetLocalPlayerIterator(DAT_146b17150,&local_1d0,lVar16);
          uVar30 = (uint)local_1c8;
          while( true ) {
            uVar33 = (ulonglong)uVar30;
            if (((int)uVar30 < 0) || (*(int *)(local_1d0.QuadPart + 8) <= (int)uVar30)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            LVar35 = local_1d0;
            if ((!bVar3) || (*(longlong *)(*(longlong *)local_1d0 + (longlong)(int)uVar30 * 8) != 0)
               ) break;
            uVar30 = uVar30 + 1;
            local_1c8 = CONCAT44(local_1c8._4_4_,uVar30);
          }
          while( true ) {
            iVar11 = (int)uVar33;
            if ((iVar11 < 0) || (*(int *)(LVar35.QuadPart + 8) <= iVar11)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) break;
            lVar16 = *(longlong *)(*(longlong *)(*(longlong *)LVar35 + (longlong)iVar11 * 8) + 0x30)
            ;
            if (lVar16 != 0) {
              FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation(&local_138,lVar16,1);
              plVar22 = *(longlong **)
                         (*(longlong *)(*(longlong *)local_1d0 + (longlong)(int)(uint)local_1c8 * 8)
                         + 0x30);
              (**(code **)(*plVar22 + 0x650))
                        (plVar22,CONCAT71((int7)(int3)(local_1c8 >> 8),param_1[0x88] == '\0'),
                         &local_198);
              uVar33 = local_1c8 & 0xffffffff;
              LVar35 = local_1d0;
            }
            do {
              uVar30 = (int)uVar33 + 1;
              uVar33 = (ulonglong)uVar30;
              local_1c8 = CONCAT44(local_1c8._4_4_,uVar30);
              if (((int)uVar30 < 0) || (*(int *)(LVar35.QuadPart + 8) <= (int)uVar30)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
            } while ((bVar3) &&
                    (*(longlong *)(*(longlong *)LVar35 + (longlong)(int)uVar30 * 8) == 0));
          }
          plVar22 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 400);
          if (plVar22 != (longlong *)0x0) {
            (**(code **)(*plVar22 + 0x368))
                      (plVar22,CONCAT71((int7)(uVar33 >> 8),param_1[0x88] == '\0'),&local_198);
          }
          goto LAB_1428d9621;
        }
        goto LAB_1428d9750;
      }
      if (wVar9 != *pwVar34) {
        wVar9 = towlower(wVar9);
        wVar10 = towlower(*pwVar34);
        if (wVar9 != wVar10) break;
      }
      pwVar34 = pwVar34 + 1;
    } while( true );
  }
  goto LAB_1428da97e;
LAB_1428d9750:
  iVar11 = (int)plVar22;
  if ((iVar11 < 0) || (*(int *)(lVar16 + 0x1d0) <= iVar11)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_1428d9621;
  plVar22 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(lVar16 + 0x1c8) + (longlong)iVar11 * 8);
  if (plVar22 == (longlong *)0x0) {
LAB_1428d97bb:
    plVar37 = plVar29;
  }
  else {
    lVar18 = FUN_1429e18b0();
    if ((*(int *)(plVar22[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar22[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
        lVar18 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar37 = plVar22;
    if (!bVar3) goto LAB_1428d97bb;
  }
  if (((plVar22[0x8c] != 0) || (plVar37 != (longlong *)0x0)) &&
     (FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation(&local_138,plVar22,1),
     plVar37 != (longlong *)0x0)) {
    (**(code **)(*plVar37 + 0x650))(plVar37,param_1[0x88] == '\0',&local_198);
  }
  plVar22 = (longlong *)(ulonglong)(iVar11 + 1);
  goto LAB_1428d9750;
LAB_1428d9bf2:
  param_1 = local_1e0;
  local_88 = iVar11;
  local_78 = plVar22;
  if (local_84 != '\0') goto LAB_1428d9bca;
  plVar22 = (longlong *)(local_1c8 & 0xffffffff);
  goto LAB_1428d9710;
LAB_1428d9621:
  LVar35.QuadPart = local_198.QuadPart + (longlong)(int)local_190 * 8;
  plVar22 = (longlong *)((ulonglong)(LVar35.QuadPart + (7 - (longlong)local_198)) >> 3);
  if ((ulonglong)LVar35 < (ulonglong)local_198) {
    plVar22 = plVar29;
  }
  LVar35 = local_198;
  plVar37 = plVar29;
  if (plVar22 != (longlong *)0x0) {
    do {
      if (*(longlong *)LVar35 != 0) {
        FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation(&local_138,*(longlong *)LVar35,1)
        ;
      }
      plVar37 = (longlong *)((longlong)plVar37 + 1);
      LVar35.QuadPart = LVar35.QuadPart + 8;
    } while (plVar37 != plVar22);
  }
  local_1d0.QuadPart = 0;
  local_1c8 = 0;
  plVar22 = plVar29;
  if (0 < (int)local_128 - local_fc) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1d0);
    plVar22 = (longlong *)(local_1c8 & 0xffffffff);
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast
            (&DAT_146535790,*(undefined8 *)(param_1 + 0x98));
  uVar26 = *(undefined8 *)(param_1 + 0x98);
  uVar15 = FUN_1428dfc70();
  local_a8[0] = 5;
  local_50 = 0;
  TOptional<FActorIteratorState>::Reset(&local_a0);
  FUN_1428c1e20(&local_a0,uVar26,uVar15);
  local_50 = 1;
  FUN_14045a130(local_a8);
  if (local_84 == '\0') {
LAB_1428d9710:
    plVar37 = local_78;
    lVar16 = FUN_1429e18b0();
    if ((*(int *)(plVar37[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar37[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
        lVar16 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      plVar17 = plVar29;
      if (local_178[0] != (longlong *)0x0) {
        plVar17 = (longlong *)FUN_1425bd3e0(local_178[0],plVar37);
      }
      lVar18 = AActor::GetLevel(plVar37);
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x30);
      BVar12 = TryEnterCriticalSection(&local_e0);
      if (BVar12 == 0) {
        EnterCriticalSection(&local_e0);
      }
      if (plVar37 != local_b8) {
        local_b8 = plVar37;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_130,&local_1a0,plVar37);
        if ((((int)local_1a0 == -1) ||
            (lVar21 = local_130 + (longlong)(int)local_1a0 * 0x18, lVar21 == 0)) ||
           (pcVar19 = (char *)(lVar21 + 8), pcVar19 == (char *)0x0)) {
          local_b0 = '\0';
        }
        else {
          local_b0 = *pcVar19;
        }
      }
      cVar7 = local_b0;
      LeaveCriticalSection(&local_e0);
      plVar6 = local_178[0];
      if (((plVar17 == (longlong *)0x0) || (local_178[0] == (longlong *)0x0)) ||
         (local_178[0][0x12] == 0)) {
LAB_1428d9901:
        bVar3 = false;
      }
      else {
        FWeakObjectPtr::operator=(&local_1a8);
        local_1b8 = local_1a8;
        piVar20 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                         ::FindId(plVar17 + 6,&local_188,&local_1b8);
        if (*piVar20 == -1) goto LAB_1428d9901;
        bVar3 = true;
      }
      if (((2 < *(byte *)(plVar37 + 0x25)) || (bVar3)) ||
         (cVar8 = UAbilityTask::IsWaitingOnRemotePlayerdata(plVar37), cVar8 != '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar21 = AWarriorSkills1AIController::GetPrivateStaticClass();
      if ((*(int *)(plVar37[2] + 0x90) < *(int *)(lVar21 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar37[2] + 0x88) + (longlong)*(int *)(lVar21 + 0x90) * 8) !=
          lVar21 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((lVar18 != lVar16) || (bVar4)) || ((cVar7 == '\0' && (!bVar3)))) {
        FUN_14223c120(plVar37,1);
        FUObjectAnnotationSparse<FBoolAnnotation,1>::NotifyUObjectDeleted(&local_138,plVar37);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x348))(plVar6,plVar37);
        }
      }
      else {
        iVar11 = (int)plVar22 + 1;
        local_1c8 = CONCAT44(local_1c8._4_4_,iVar11);
        if (local_1c8._4_4_ < iVar11) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1d0,plVar22);
        }
        *(longlong **)(local_1d0.QuadPart + (longlong)(int)plVar22 * 8) = plVar37;
      }
    }
    lVar16 = local_a0;
    iVar11 = local_88 + 1;
    if (iVar11 < local_68 + local_90) {
      lVar18 = (longlong)iVar11 * 8;
      iVar13 = local_90;
      iVar38 = local_68;
      do {
        if (iVar11 < iVar13) {
          plVar22 = *(longlong **)(local_98 + lVar18);
        }
        else {
          plVar22 = *(longlong **)(local_70 + (longlong)(iVar11 - iVar13) * 8);
        }
        local_80 = local_80 + 1;
        if ((plVar22 != (longlong *)0x0) &&
           (lVar21 = AActor::GetLevel(plVar22), iVar13 = local_90, iVar38 = local_68, lVar21 != 0))
        {
          if ((local_a8[0] & 1) != 0) {
            iVar2 = *(int *)((longlong)plVar22 + 0xc);
            plVar37 = plVar29;
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar31 = iVar2 >> 0x1f & 0xffff;
              uVar30 = iVar2 + uVar31;
              plVar37 = (longlong *)
                        (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar30 >> 0x10) * 8) +
                        (longlong)(int)((uVar30 & 0xffff) - uVar31) * 0x18);
            }
            if ((*(uint *)(plVar37 + 1) >> 0x1d & 1) != 0) goto LAB_1428d9ba5;
          }
          if (((local_a8[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(plVar22), iVar13 = local_90,
             iVar38 = local_68, cVar7 != '\0')) {
            if ((local_a8[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar21 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar21 + 0x205) & 0x10) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              lVar23 = *(longlong *)(lVar21 + 0xc0);
              plVar37 = *(longlong **)(lVar21 + 600);
              plVar17 = plVar29;
              if (lVar23 != 0) {
                iVar13 = *(int *)(lVar23 + 0x180);
                if ((iVar13 < 0) || (*(int *)(lVar23 + 0x178) <= iVar13)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  plVar17 = (longlong *)((longlong)iVar13 * 0x80 + *(longlong *)(lVar23 + 0x170));
                }
              }
              if ((plVar17 == (longlong *)0x0) || (plVar37 == plVar17)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((plVar37 == (longlong *)0x0) || ((int)*plVar37 == 2)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((bVar4) || (bVar4 = false, bVar5)) {
                bVar4 = true;
              }
              iVar13 = local_90;
              iVar38 = local_68;
              if ((!bVar3) || (!bVar4)) goto LAB_1428d9ba5;
            }
            lVar21 = ULevel::GetWorld(lVar21);
            iVar13 = local_90;
            iVar38 = local_68;
            if (lVar21 == lVar16) {
              lVar21 = AActor::GetLevel(plVar22);
              if (lVar21 == *(longlong *)(lVar16 + 0x30)) goto LAB_1428d9bf2;
              lVar21 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar22[2] + 0x90) < *(int *)(lVar21 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar22[2] + 0x88) + (longlong)*(int *)(lVar21 + 0x90) * 8) !=
                  lVar21 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              iVar13 = local_90;
              iVar38 = local_68;
              if (!bVar3) goto LAB_1428d9bf2;
            }
          }
        }
LAB_1428d9ba5:
        iVar11 = iVar11 + 1;
        lVar18 = lVar18 + 8;
        if (iVar38 + iVar13 <= iVar11) break;
      } while( true );
    }
    local_78 = (longlong *)0x0;
    local_84 = '\x01';
    param_1 = local_1e0;
  }
LAB_1428d9bca:
  TOptional<FActorIteratorState>::Reset(&local_a0);
  lVar16 = *(longlong *)(param_1 + 0x98);
  iVar11 = 0;
  while( true ) {
    plVar29 = local_178[0];
    if ((iVar11 < 0) || (*(int *)(lVar16 + 0x1e0) <= iVar11)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    plVar22 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(lVar16 + 0x1d8) + (longlong)iVar11 * 8);
    plVar29 = local_178[0];
    if (plVar22 == (longlong *)0x0) {
LAB_1428d9e03:
      iVar11 = iVar11 + 1;
    }
    else {
      if (local_178[0] == (longlong *)0x0) {
        lVar18 = 0;
      }
      else {
        lVar18 = FUN_1425bd3e0(local_178[0],plVar22);
      }
      lVar23 = AActor::GetLevel(plVar22);
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x30);
      BVar12 = TryEnterCriticalSection(&local_e0);
      if (BVar12 == 0) {
        EnterCriticalSection(&local_e0);
      }
      if (plVar22 != local_b8) {
        local_b8 = plVar22;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_130,&local_1a0,plVar22);
        if ((((int)local_1a0 == -1) ||
            (lVar1 = local_130 + (longlong)(int)local_1a0 * 0x18, lVar1 == 0)) ||
           (pcVar19 = (char *)(lVar1 + 8), pcVar19 == (char *)0x0)) {
          local_b0 = '\0';
        }
        else {
          local_b0 = *pcVar19;
        }
      }
      cVar7 = local_b0;
      LeaveCriticalSection(&local_e0);
      if (((lVar18 == 0) || (plVar29 == (longlong *)0x0)) || (plVar29[0x12] == 0)) {
LAB_1428d9d32:
        bVar3 = false;
      }
      else {
        FWeakObjectPtr::operator=(&local_1b8);
        local_1a8 = local_1b8;
        piVar20 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                         ::FindId(lVar18 + 0x30,&local_188,&local_1a8);
        if (*piVar20 == -1) goto LAB_1428d9d32;
        bVar3 = true;
      }
      if (((2 < *(byte *)(plVar22 + 0x25)) || (bVar3)) ||
         (cVar8 = UAbilityTask::IsWaitingOnRemotePlayerdata(plVar22), cVar8 != '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar18 = AWarriorSkills1AIController::GetPrivateStaticClass();
      uVar33 = local_1c8;
      if ((*(int *)(plVar22[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar22[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
          lVar18 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((lVar23 != lVar21) || (bVar4)) || ((cVar7 == '\0' && (!bVar3)))) {
        FUN_14223c120(plVar22,1);
        FUObjectAnnotationSparse<FBoolAnnotation,1>::NotifyUObjectDeleted(&local_138,plVar22);
        param_1 = local_1e0;
        if (plVar29 != (longlong *)0x0) {
          (**(code **)(*plVar29 + 0x348))(plVar29,plVar22);
          param_1 = local_1e0;
        }
        goto LAB_1428d9e03;
      }
      lVar18 = (longlong)(int)(uint)local_1c8;
      iVar13 = (uint)local_1c8 + 1;
      local_1c8 = CONCAT44(local_1c8._4_4_,iVar13);
      if (local_1c8._4_4_ < iVar13) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_1d0,uVar33 & 0xffffffff);
      }
      iVar11 = iVar11 + 1;
      *(longlong **)(local_1d0.QuadPart + lVar18 * 8) = plVar22;
      param_1 = local_1e0;
    }
  }
  if (local_178[0] != (longlong *)0x0) {
    FUN_1425b6360(local_178[0]);
  }
  plVar22 = (longlong *)0x0;
  plVar37 = (longlong *)0x0;
  bVar39 = local_1e7 ^ 1;
  local_1a0 = (longlong *)0x0;
  local_1a8.QuadPart = local_1d0.QuadPart + (longlong)(int)(uint)local_1c8 * 8;
  LVar35 = local_1d0;
  local_1e8 = bVar39;
  if (local_1d0.QuadPart != local_1a8.QuadPart) {
    do {
      plVar29 = *(longlong **)LVar35;
      BVar12 = TryEnterCriticalSection(&local_e0);
      if (BVar12 == 0) {
        EnterCriticalSection(&local_e0);
      }
      iVar11 = (int)local_128 - local_fc;
      local_b0 = '\0';
      local_b8 = plVar29;
      TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
      ::Remove(&local_130,plVar29);
      if ((0 < iVar11) && ((int)local_128 == local_fc)) {
        FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,&local_138);
      }
      LeaveCriticalSection(&local_e0);
      (**(code **)(*plVar29 + 0x138))
                (plVar29,0,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),0);
      (**(code **)(*plVar29 + 0x658))(plVar29,bVar39);
      lVar16 = FUN_14291fb80();
      if ((*(int *)(plVar29[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar29[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
          lVar16 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        UWorld::AddController(*(undefined8 *)(param_1 + 0xa0),plVar29);
        plVar17 = plVar22;
        plVar6 = local_1a0;
      }
      else {
        lVar16 = FUN_1429d7ab0();
        if ((*(int *)(plVar29[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar29[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8)
            != lVar16 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar16 = *(longlong *)(param_1 + 0xa0);
          FWeakObjectPtr::operator=(&local_188,plVar29);
          plVar22 = (longlong *)(lVar16 + 0x1e8);
          lVar18 = *plVar22;
          iVar11 = *(int *)(lVar16 + 0x1f0);
          for (lVar21 = lVar18; lVar21 != lVar18 + (longlong)iVar11 * 8; lVar21 = lVar21 + 8) {
            cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar21,&local_188);
            if (cVar7 != '\0') {
              plVar17 = local_1a0;
              param_1 = local_1e0;
              bVar39 = local_1e8;
              plVar6 = local_1a0;
              if ((int)(lVar21 - lVar18 >> 3) != -1) goto LAB_1428d9fff;
              break;
            }
          }
          iVar11 = *(int *)(lVar16 + 0x1f0);
          *(int *)(lVar16 + 0x1f0) = iVar11 + 1;
          if (*(int *)(lVar16 + 500) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar22,iVar11);
          }
          lVar16 = *plVar22;
          *(uint *)(lVar16 + (longlong)iVar11 * 8) = local_188;
          *(undefined4 *)(lVar16 + 4 + (longlong)iVar11 * 8) = uStack_184;
          plVar17 = local_1a0;
          param_1 = local_1e0;
          bVar39 = local_1e8;
          plVar6 = local_1a0;
        }
        else {
          lVar16 = UFadeInOutViewportClient::GetPrivateStaticClass();
          if ((*(int *)(plVar29[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar29[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
              lVar16 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar17 = plVar29;
          plVar6 = plVar29;
          if (!bVar3) {
            lVar16 = AGeometryCollectionActor::GetPrivateStaticClass();
            plVar17 = plVar22;
            plVar6 = local_1a0;
            if ((*(int *)(lVar16 + 0x90) <= *(int *)(plVar29[2] + 0x90)) &&
               (*(longlong *)
                 (*(longlong *)(plVar29[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) ==
                lVar16 + 0x88)) {
              plVar37 = plVar29;
            }
          }
        }
      }
LAB_1428d9fff:
      local_1a0 = plVar6;
      *(byte *)((longlong)plVar29 + 0x92) = *(byte *)((longlong)plVar29 + 0x92) | 0x20;
      LVar35.QuadPart = LVar35.QuadPart + 8;
      *(byte *)(plVar29 + 0x83) = *(byte *)(plVar29 + 0x83) | 1;
      plVar22 = plVar17;
    } while (LVar35.QuadPart != local_1a8.QuadPart);
    plVar29 = local_178[0];
    if (plVar17 != (longlong *)0x0) {
      lVar16 = *(longlong *)(param_1 + 0xa0);
      *(longlong **)(lVar16 + 0x140) = plVar17;
      if ((((plVar37 != *(longlong **)(lVar16 + 0x148)) &&
           (*(longlong **)(lVar16 + 0x148) = plVar37, plVar37 != (longlong *)0x0)) &&
          (lVar18 = AActor::GetLevel(plVar37), lVar18 != 0)) &&
         ((piVar20 = *(int **)(lVar18 + 600), piVar20 != (int *)0x0 &&
          (*(longlong **)(piVar20 + 2) = plVar37, *piVar20 == 0)))) {
        lVar16 = UWorld::FindOrAddCollectionByType(lVar16,2);
        *(longlong **)(lVar16 + 8) = plVar37;
      }
      local_1e8 = 0;
      plVar29 = local_178[0];
    }
  }
  FUN_1428c7ea0(param_1);
  if (plVar29 != (longlong *)0x0) {
    FUN_1425b5b20(plVar29);
  }
  FUN_1428c72b0(*(undefined8 *)(param_1 + 0x98),param_1[0x88],1,0);
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x98) + 0xc);
  if (iVar11 < (int)DAT_1469e91c4) {
    uVar31 = iVar11 >> 0x1f & 0xffff;
    uVar30 = iVar11 + uVar31;
    lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar30 >> 0x10) * 8) +
             (longlong)(int)((uVar30 & 0xffff) - uVar31) * 0x18;
  }
  else {
    lVar16 = 0;
  }
  *(uint *)(lVar16 + 8) = *(uint *)(lVar16 + 8) & 0xbfffffff;
  *(uint *)(*(longlong *)(param_1 + 0x98) + 8) =
       *(uint *)(*(longlong *)(param_1 + 0x98) + 8) & 0xfffffffd;
  lVar16 = UWorld::GetAudioDevice(*(undefined8 *)(param_1 + 0x98));
  if (lVar16 != 0) {
    FUN_1422c9b40(lVar16,*(undefined8 *)(param_1 + 0x98),1);
  }
  pcVar19 = local_1e0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x58) == 0) {
    uVar30 = 0;
  }
  else {
    uVar30 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x58) + 0x46c) >> 1;
  }
  iVar11 = *(int *)(*(longlong *)(local_1e0 + 0xa0) + 0xc);
  if (iVar11 < (int)DAT_1469e91c4) {
    uVar32 = iVar11 >> 0x1f & 0xffff;
    uVar31 = iVar11 + uVar32;
    lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar31 >> 0x10) * 8) +
             (longlong)(int)((uVar31 & 0xffff) - uVar32) * 0x18;
  }
  else {
    lVar16 = 0;
  }
  *(uint *)(lVar16 + 8) = *(uint *)(lVar16 + 8) | 0x40000000;
  pbVar24 = (byte *)FUN_142876210(DAT_146b17150,*(undefined8 *)(local_1e0 + 0x98));
  FUN_14288d2f0(pbVar24,*(undefined8 *)(pcVar19 + 0xa0));
  *(uint *)(*(longlong *)(pcVar19 + 0xa0) + 0x708) = (uint)*pbVar24;
  if (*pbVar24 == 3) {
    lVar16 = UObjectBaseUtility::GetOutermost();
    *(uint *)(lVar16 + 0x50) = *(uint *)(lVar16 + 0x50) | 0x100000;
  }
  if (plVar29 != (longlong *)0x0) {
    if (*(int *)(pcVar19 + 0x38) == 0) {
      puVar28 = &DAT_143f3eda8;
    }
    else {
      puVar28 = *(undefined2 **)(pcVar19 + 0x30);
    }
    puVar25 = (undefined8 *)FPackageName::GetShortName(&local_188,puVar28);
    if (*(int *)(puVar25 + 1) == 0) {
      puVar28 = &DAT_143f3eda8;
    }
    else {
      puVar28 = (undefined2 *)*puVar25;
    }
    uVar26 = FName::FName(&local_1b8,puVar28,1);
    UEditableGeometryCollectionAdapter::OnChangePolygonVertexInstances(plVar29,uVar26);
    if (CONCAT44(uStack_184,local_188) != 0) {
      FMemory::Free();
    }
  }
  DAT_146b19a68 = 0;
  iVar11 = 0;
  lVar16 = *(longlong *)(pcVar19 + 0x98);
  while( true ) {
    if ((iVar11 < 0) || (*(int *)(lVar16 + 0x168) <= iVar11)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar18 = *(longlong *)(*(longlong *)(lVar16 + 0x160) + (longlong)iVar11 * 8);
    if (lVar18 != 0) {
      puStack_1b0 = local_1d8;
      local_1b8.QuadPart = (LONGLONG)&LAB_1428c6fb0;
      local_188 = 0x428c6fb0;
      uStack_184 = 1;
      local_218 = 0x20000000;
      uStack_180 = puStack_1b0;
      FUN_1417a4830(*(undefined8 *)(lVar18 + 0x20),&local_188,1,0);
    }
    iVar11 = iVar11 + 1;
  }
  uVar36 = 0;
  plVar29 = *(longlong **)(*(longlong *)(local_1e0 + 0x98) + 0x88);
  uVar27 = (ulonglong)*(int *)(*(longlong *)(local_1e0 + 0x98) + 0x90);
  uVar33 = uVar27 & 0x1fffffffffffffff;
  if (plVar29 + uVar27 < plVar29) {
    uVar33 = uVar36;
  }
  if (uVar33 != 0) {
    do {
      plVar22 = (longlong *)*plVar29;
      if (plVar22[0x24] != 0) {
        cVar7 = (**(code **)(*plVar22 + 0x280))(plVar22);
        if (cVar7 != '\0') {
          cVar7 = (**(code **)(*plVar22 + 0x288))();
          if (cVar7 != '\0') goto LAB_1428da405;
        }
        puStack_1b0 = local_1d8;
        local_1b8.QuadPart = (LONGLONG)&LAB_1428c6fb0;
        local_188 = 0x428c6fb0;
        uStack_184 = 1;
        local_218 = 0x20000000;
        uStack_180 = puStack_1b0;
        FUN_1417a4830(*(undefined8 *)(plVar22[0x24] + 0x20),&local_188,1,0);
      }
LAB_1428da405:
      plVar29 = plVar29 + 1;
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar33);
  }
  pcVar19 = local_1e0;
  local_1e0[0x98] = '\0';
  local_1e0[0x99] = '\0';
  local_1e0[0x9a] = '\0';
  local_1e0[0x9b] = '\0';
  local_1e0[0x9c] = '\0';
  local_1e0[0x9d] = '\0';
  local_1e0[0x9e] = '\0';
  local_1e0[0x9f] = '\0';
  cVar7 = FUN_141789f20(&DAT_1469e8f10);
  if (cVar7 != '\0') {
    FUN_141789b30(&DAT_1469e8f10);
  }
  FUN_14172d470(0,1);
  if (local_178[0] != (longlong *)0x0) {
    FUN_1425c75d0();
  }
  DAT_146b19a68 = *(undefined8 *)(pcVar19 + 0xa0);
  lVar16 = *(longlong *)(pcVar19 + 0xa0);
  if (*(char *)(lVar16 + 0x6f8) == '\0') {
    FUN_1428ce1e0(lVar16,local_188 & 0xffffff7f | 0x37f);
    lVar16 = *(longlong *)(pcVar19 + 0xa0);
  }
  bVar3 = true;
  pcVar19 = local_1e0;
  if (local_1e8 != 0) {
    plVar29 = *(longlong **)(lVar16 + 0x38);
    if ((plVar29 != (longlong *)0x0) ||
       (plVar29 = *(longlong **)(lVar16 + 0x108), plVar29 != (longlong *)0x0)) {
      cVar7 = (**(code **)(*plVar29 + 0x368))();
      pcVar19 = local_1e0;
      if (cVar7 == '\0') goto LAB_1428da502;
    }
    pcVar19 = local_1e0;
    if (*(longlong *)(lVar16 + 0x140) == 0) {
      plVar29 = *(longlong **)(lVar16 + 400);
      lVar18 = *plVar29;
      uVar26 = FURL::FURL(local_a8,local_1e0 + 8);
      uVar26 = (**(code **)(lVar18 + 0x318))(plVar29,uVar26);
      *(undefined8 *)(lVar16 + 0x140) = uVar26;
    }
  }
LAB_1428da502:
  bVar39 = local_1e7;
  if ((pcVar19[0x88] != '\0') && (local_1e7 == 0)) {
    lVar16 = UWorld::GetAudioDevice(*(undefined8 *)(pcVar19 + 0xa0));
    if (lVar16 != 0) {
      lVar18 = 0;
      if (*(longlong *)(*(longlong *)(pcVar19 + 0xa0) + 0x30) != 0) {
        lVar18 = FUN_14203ac20(*(longlong *)(*(longlong *)(pcVar19 + 0xa0) + 0x30),1);
      }
      FUN_1422d8040(lVar16,*(undefined8 *)(lVar18 + 0x580));
    }
    lVar16 = *(longlong *)(*(longlong *)(pcVar19 + 0xa0) + 0x58);
    if (lVar16 != 0) {
      *(uint *)(lVar16 + 0x46c) = *(uint *)(lVar16 + 0x46c) & 0xfffffffd;
      *(uint *)(lVar16 + 0x46c) = *(uint *)(lVar16 + 0x46c) | (uVar30 & 1) * 2;
    }
  }
  FScopeLogTime::FScopeLogTime(local_160,L"    SeamlessTravel FlushLevelStreaming ",0,1);
  param_1 = local_1e0;
  FUN_1428caf60(*(undefined8 *)(local_1e0 + 0xa0),2);
  FScopeLogTime::~FScopeLogTime(local_160);
  if (param_1[0x88] != '\0') {
    FUN_1415afb20(L"BeginPlay");
  }
  FUN_1428c8130(*(undefined8 *)(param_1 + 0xa0));
  FUN_1428ced30(*(undefined8 *)(param_1 + 0xa0),param_1 + 8,0);
  FUN_142246630(*(undefined8 *)(param_1 + 0xa0),1);
  lVar16 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(param_1 + 0xa0));
  local_1b8 = *(LARGE_INTEGER *)(lVar16 + 0x18);
  FName::ToString(&local_1b8,local_178);
  puVar25 = (undefined8 *)FUN_1428d4fe0(&local_188,local_178);
  if (*(int *)(puVar25 + 1) == 0) {
    puVar28 = &DAT_143f3eda8;
  }
  else {
    puVar28 = (undefined2 *)*puVar25;
  }
  FName::FName(&local_168,puVar28,1);
  if (CONCAT44(uStack_184,local_188) != 0) {
    FMemory::Free();
  }
  if (local_178[0] != (longlong *)0x0) {
    FMemory::Free();
  }
  UEngine::GetLocalPlayerIterator(DAT_146b17150,&local_1b8,*(undefined8 *)(param_1 + 0xa0));
  iVar11 = (int)puStack_1b0;
  while( true ) {
    if ((iVar11 < 0) || (*(int *)(local_1b8.QuadPart + 8) <= iVar11)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    LVar35 = local_1b8;
    if ((!bVar4) || (*(longlong *)(*(longlong *)local_1b8 + (longlong)iVar11 * 8) != 0)) break;
    iVar11 = iVar11 + 1;
    puStack_1b0 = (undefined1 *)CONCAT44(puStack_1b0._4_4_,iVar11);
  }
  while( true ) {
    if ((iVar11 < 0) || (*(int *)(LVar35.QuadPart + 8) <= iVar11)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) break;
    plVar29 = *(longlong **)(*(longlong *)(*(longlong *)LVar35 + (longlong)iVar11 * 8) + 0x30);
    if (plVar29 != (longlong *)0x0) {
      (**(code **)(*plVar29 + 0xb88))(plVar29,local_168,param_1[0x88]);
      if (bVar39 == 0) {
LAB_1428da711:
        FUN_1429e1e70(*(undefined8 *)
                       (*(longlong *)(*(longlong *)local_1b8 + (longlong)(int)puStack_1b0 * 8) +
                       0x30),local_168);
      }
      else {
        cVar7 = APlayerController::IsPrimaryPlayer
                          (*(undefined8 *)
                            (*(longlong *)(*(longlong *)local_1b8 + (longlong)(int)puStack_1b0 * 8)
                            + 0x30));
        if (cVar7 != '\0') goto LAB_1428da711;
      }
      LVar35 = local_1b8;
      iVar11 = (int)puStack_1b0;
    }
    do {
      iVar11 = iVar11 + 1;
      puStack_1b0 = (undefined1 *)CONCAT44(puStack_1b0._4_4_,iVar11);
      if ((iVar11 < 0) || (*(int *)(LVar35.QuadPart + 8) <= iVar11)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    } while ((bVar4) && (*(longlong *)(*(longlong *)LVar35 + (longlong)iVar11 * 8) == 0));
  }
  *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x130) =
       *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x130) | 1;
  if (param_1[0x88] == '\0') {
    lVar16 = *(longlong *)(param_1 + 0xa0);
    *(longlong *)(param_1 + 0x98) = lVar16;
    param_1[0x88] = '\x01';
    if (param_1[0xa8] == '\0') {
      FUN_1428d8310(param_1);
      lVar16 = *(longlong *)(param_1 + 0xa0);
    }
    if (*(longlong **)(lVar16 + 0x140) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar16 + 0x140) + 0x8d8))();
    }
  }
  else {
    FURL::operator=(pbVar24 + 0xe8,param_1 + 8);
    uVar27 = 0;
    *param_1 = '\0';
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x970);
    uVar33 = (ulonglong)(local_1a8.QuadPart + (7 - (longlong)local_1d0)) >> 3;
    if ((ulonglong)local_1a8 < (ulonglong)local_1d0) {
      uVar33 = uVar27;
    }
    LVar35 = local_1d0;
    if (uVar33 != 0) {
      do {
        plVar29 = *(longlong **)LVar35;
        if (plVar29 != (longlong *)0x0) {
          *(byte *)(plVar29 + 0x83) = *(byte *)(plVar29 + 0x83) & 0xfe;
          (**(code **)(*plVar29 + 0x6d8))(plVar29);
          if (((*(byte *)(plVar29 + 0x80) & 4) != 0) && (lVar16 != 0)) {
            FUN_1424a97c0(lVar16,plVar29);
          }
        }
        LVar35.QuadPart = LVar35.QuadPart + 8;
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar33);
    }
    QueryPerformanceCounter(&local_1b8);
    lVar14 = FUN_14168db90();
    AK::MemoryMgr::StartProfileThreadUsage(lVar14);
    param_1 = local_1e0;
    lVar16 = *(longlong *)(local_1e0 + 0xa0);
    if (*(longlong **)(lVar16 + 0x140) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar16 + 0x140) + 0x7d8))();
      lVar16 = *(longlong *)(param_1 + 0xa0);
    }
    if (*(longlong *)(lVar16 + 0x978) == 0) {
      FUN_1417846f0(lVar16,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_1a8.QuadPart = 0;
      uVar26 = UMobileInstalledContent::GetPrivateStaticClass();
      local_1f8 = 0;
      local_200 = 0;
      local_208 = 0;
      local_210 = 0;
      local_218 = 0;
      uVar26 = FUN_1417985e0(uVar26,lVar16,0,0);
      *(undefined8 *)(lVar16 + 0x978) = uVar26;
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_146535868,lVar16);
    if (DAT_146b17150 != 0) {
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(DAT_146b17150 + 0xba8,lVar16);
    }
    if (*(longlong **)(lVar16 + 0x140) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar16 + 0x140) + 0x770))();
    }
    *(undefined4 *)(lVar16 + 0x7b4) = *(undefined4 *)(lVar16 + 0x790);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast
              (&DAT_1464b57d0,*(undefined8 *)(param_1 + 0xa0));
    FUN_1415a46c0();
  }
  if ((longlong *)local_1d0.QuadPart != (longlong *)0x0) {
    FMemory::Free(local_1d0.QuadPart);
  }
  if ((longlong *)local_198.QuadPart != (longlong *)0x0) {
    FMemory::Free();
  }
  FUObjectAnnotationSparse<FBoolAnnotation,1>::~FUObjectAnnotationSparse<FBoolAnnotation,1>
            (&local_138);
LAB_1428da97e:
  uVar26 = 0;
  if (bVar3) {
    uVar26 = *(undefined8 *)(param_1 + 0xa0);
    param_1[0xa0] = '\0';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\0';
    param_1[0xa3] = '\0';
    param_1[0xa4] = '\0';
    param_1[0xa5] = '\0';
    param_1[0xa6] = '\0';
    param_1[0xa7] = '\0';
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x92] = '\0';
    param_1[0x93] = '\0';
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
  }
  return uVar26;
}



// FUNCTION 1428da9d0 FUN_1428da9d0 body=649 status=ok
// SIG undefined FUN_1428da9d0(void)

void FUN_1428da9d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined1 local_138 [40];
  byte local_110;
  longlong local_a8;
  byte local_50;
  longlong local_48;
  longlong local_38;
  
  if ((*(longlong *)(param_1[5] + 0x30) == 0) ||
     (*(char *)(*(longlong *)(param_1[5] + 0x30) + 0x678) != '\0')) {
    iVar8 = 0;
    if (0 < (int)param_1[0xe]) {
      lVar9 = 0;
      do {
        iVar6 = (**(code **)(*(longlong *)param_1[5] + 0x2d8))((longlong *)param_1[5],0);
        if (iVar6 == 0) break;
        FUN_1423e4ec0(local_138,param_1,0);
        plVar2 = *(longlong **)(lVar9 + 8 + param_1[0xd]);
        plVar3 = *(longlong **)(lVar9 + param_1[0xd]);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        if (((*(byte *)(param_1 + 6) & 1) == 0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x30))(), cVar5 != '\0')) {
          bVar7 = 0x20;
        }
        else {
          bVar7 = 0;
        }
        local_50 = local_50 & 0xdf | bVar7;
        (**(code **)(*plVar3 + 0x38))(plVar3,local_138);
        if ((local_110 & 0x80) != 0) {
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar2 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
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
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
          if (local_a8 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(local_138);
          break;
        }
        (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,local_138,1);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar2 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar6 == 1) && (plVar2 != (longlong *)0x0)) {
              (**(code **)(*plVar2 + 8))(plVar2);
            }
          }
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(local_138);
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while (iVar8 < (int)param_1[0xe]);
      if (iVar8 < (int)param_1[0xe]) {
        if (0 < iVar8) {
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_1 + 0xd,0,iVar8,1);
        }
        goto LAB_1428dac12;
      }
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xd,0);
  }
LAB_1428dac12:
  iVar8 = (int)param_1[0xe] + -1;
  if (-1 < iVar8) {
    lVar9 = (longlong)iVar8 << 4;
    do {
      cVar5 = (**(code **)(**(longlong **)(lVar9 + param_1[0xd]) + 0x30))();
      if (cVar5 == '\0') {
        TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_1 + 0xd,iVar8,1);
      }
      lVar9 = lVar9 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 1428dac60 FUN_1428dac60 body=794 status=ok
// SIG undefined FUN_1428dac60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428dac60(longlong param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((*(uint *)(param_1 + 0x830) & 0x10000) != 0) {
    lVar8 = APlayerState::GetPrivateStaticClass();
    if (lVar8 != 0) {
      lVar9 = APlayerState::GetPrivateStaticClass();
      lVar17 = lVar8;
      do {
        if (lVar17 == lVar9) goto LAB_1428dacc0;
        lVar17 = *(longlong *)(lVar17 + 0x30);
      } while (lVar17 != 0);
    }
    lVar8 = 0;
LAB_1428dacc0:
    local_98[0] = 5;
    local_40 = 0;
    TOptional<FActorIteratorState>::Reset(&local_90);
    FUN_1428c1e20(&local_90,param_1,lVar8);
    local_40 = 1;
    FUN_1428c4380(local_98);
    if (local_74 == '\0') {
LAB_1428dad20:
      if (*(longlong *)(local_68 + 0x458) != 0) {
        FUN_1426f0720();
      }
      lVar8 = local_90;
      iVar15 = local_78 + 1;
      if (iVar15 < local_58 + local_80) {
        lVar17 = (longlong)iVar15 * 8;
        iVar16 = local_58;
        iVar13 = local_80;
        do {
          if (iVar15 < iVar13) {
            lVar9 = *(longlong *)(local_88 + lVar17);
          }
          else {
            lVar9 = *(longlong *)(local_60 + (longlong)(iVar15 - iVar13) * 8);
          }
          local_70 = local_70 + 1;
          if ((lVar9 != 0) &&
             (lVar10 = AActor::GetLevel(lVar9), iVar16 = local_58, iVar13 = local_80, lVar10 != 0))
          {
            if ((local_98[0] & 1) != 0) {
              iVar1 = *(int *)(lVar9 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar14 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar14;
                lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
              }
              else {
                lVar11 = 0;
              }
              if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_1428daef5;
            }
            if (((local_98[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar9), iVar16 = local_58,
               iVar13 = local_80, cVar6 != '\0')) {
              if ((local_98[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                lVar11 = *(longlong *)(lVar10 + 0xc0);
                piVar2 = *(int **)(lVar10 + 600);
                if (lVar11 == 0) {
LAB_1428dae64:
                  piVar12 = (int *)0x0;
                }
                else {
                  iVar16 = *(int *)(lVar11 + 0x180);
                  if ((iVar16 < 0) || (*(int *)(lVar11 + 0x178) <= iVar16)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (!bVar3) goto LAB_1428dae64;
                  piVar12 = (int *)((longlong)iVar16 * 0x80 + *(longlong *)(lVar11 + 0x170));
                }
                if ((piVar12 == (int *)0x0) || (piVar2 == piVar12)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar16 = local_58;
                iVar13 = local_80;
                if ((!bVar5) || (!bVar3)) goto LAB_1428daef5;
              }
              lVar10 = ULevel::GetWorld(lVar10);
              iVar16 = local_58;
              iVar13 = local_80;
              if (lVar10 == lVar8) {
                lVar10 = AActor::GetLevel(lVar9);
                if (lVar10 == *(longlong *)(lVar8 + 0x30)) goto LAB_1428daf67;
                lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar16 = local_58;
                iVar13 = local_80;
                if (!bVar5) goto LAB_1428daf67;
              }
            }
          }
LAB_1428daef5:
          iVar15 = iVar15 + 1;
          lVar17 = lVar17 + 8;
          if (iVar16 + iVar13 <= iVar15) break;
        } while( true );
      }
      local_68 = 0;
      local_74 = '\x01';
    }
LAB_1428daf33:
    TOptional<FActorIteratorState>::Reset(&local_90);
    *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) & 0xfffeffff;
  }
  return;
LAB_1428daf67:
  local_78 = iVar15;
  local_68 = lVar9;
  if (local_74 != '\0') goto LAB_1428daf33;
  goto LAB_1428dad20;
}



// FUNCTION 1428daf80 FUN_1428daf80 body=1852 status=ok
// SIG undefined FUN_1428daf80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1428daf80(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  uint *puVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  uint uStack_260;
  int iStack_25c;
  undefined1 local_258 [16];
  longlong *local_248;
  undefined2 local_240;
  longlong local_238;
  undefined4 local_230;
  undefined1 local_228 [80];
  undefined1 local_1d8;
  longlong *local_1d0;
  longlong lStack_1c8;
  uint *puStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198;
  int local_190;
  undefined1 local_178;
  longlong local_168;
  undefined8 local_160;
  uint local_158 [4];
  uint *local_148;
  undefined8 local_140;
  undefined4 local_138;
  int local_134;
  longlong local_128;
  undefined4 local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if (*(int *)(param_1 + 0x860) == 0) {
    return;
  }
  plVar12 = (longlong *)0x0;
  local_168 = 0;
  local_160 = 0;
  local_148 = (uint *)0x0;
  local_140 = 0;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_238 = param_3;
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar10 = FUN_1428dfc70();
      local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,5);
      local_178 = 0;
      TOptional<FActorIteratorState>::Reset(&lStack_1c8);
      FUN_1428c1e20(&lStack_1c8,param_1,uVar10);
      local_178 = 1;
      FUN_14045a130(&local_1d0);
      local_230 = 0;
      local_1d8 = 0;
      bVar24 = auStack_1b8[0xc] == '\0';
      if (bVar24) {
LAB_1428db070:
        local_58 = (longlong *)0x0;
        local_50 = 0;
        local_50._0_4_ = 0;
        if (local_1a0 != 0) {
          FUN_140725150(local_1a0,local_118,0);
        }
        plVar15 = local_118;
        if (local_58 != (longlong *)0x0) {
          plVar15 = plVar12;
        }
        plVar15 = (longlong *)((ulonglong)plVar15 | (ulonglong)local_58);
        plVar20 = (longlong *)((longlong)(int)local_50 & 0x1fffffffffffffff);
        if (plVar15 + (int)local_50 < plVar15) {
          plVar20 = plVar12;
        }
        plVar19 = plVar12;
        if (plVar20 != (longlong *)0x0) {
          do {
            local_280 = *plVar15;
            cVar8 = FUN_1423cc4e0();
            if (cVar8 != '\0') {
              local_278 = &local_280;
              uStack_270 = local_280 + 0x2dc;
              FUN_1428c1490(&local_168,local_288,&local_278);
            }
            plVar15 = plVar15 + 1;
            plVar19 = (longlong *)((longlong)plVar19 + 1);
          } while (plVar19 != plVar20);
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        lVar5 = lStack_1c8;
        iVar18 = auStack_1b8._8_4_ + 1;
        if (iVar18 < local_190 + auStack_1b8._0_4_) {
          lVar23 = (longlong)iVar18 * 8;
          iVar21 = local_190;
          iVar13 = auStack_1b8._0_4_;
          do {
            if (iVar18 < iVar13) {
              lVar16 = *(longlong *)((longlong)puStack_1c0 + lVar23);
            }
            else {
              lVar16 = *(longlong *)(local_198 + (longlong)(iVar18 - iVar13) * 8);
            }
            local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,(int)local_1a8 + 1);
            if (lVar16 != 0) {
              lVar11 = AActor::GetLevel(lVar16);
              if (lVar11 != 0) {
                if (((ulonglong)local_1d0 & 1) != 0) {
                  iVar21 = *(int *)(lVar16 + 0xc);
                  plVar15 = plVar12;
                  if (iVar21 < (int)DAT_1469e91c4) {
                    uVar14 = iVar21 >> 0x1f & 0xffff;
                    uVar9 = iVar21 + uVar14;
                    plVar15 = (longlong *)
                              (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                              (longlong)(int)((uVar9 & 0xffff) - uVar14) * 0x18);
                  }
                  if ((*(uint *)(plVar15 + 1) >> 0x1d & 1) != 0) goto LAB_1428db2f9;
                }
                if (((uint)local_1d0 >> 1 & 1) != 0) {
                  cVar8 = FOutputDevice::CanBeUsedOnAnyThread(lVar16);
                  if (cVar8 == '\0') goto LAB_1428db2f9;
                }
                if (((uint)local_1d0 >> 2 & 1) != 0) {
                  if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                     ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                    bVar24 = false;
                  }
                  else {
                    bVar24 = true;
                  }
                  lVar1 = *(longlong *)(lVar11 + 0xc0);
                  plVar15 = *(longlong **)(lVar11 + 600);
                  plVar20 = plVar12;
                  if (lVar1 != 0) {
                    iVar21 = *(int *)(lVar1 + 0x180);
                    if ((iVar21 < 0) || (*(int *)(lVar1 + 0x178) <= iVar21)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      plVar20 = (longlong *)((longlong)iVar21 * 0x80 + *(longlong *)(lVar1 + 0x170))
                      ;
                    }
                  }
                  if ((plVar20 == (longlong *)0x0) || (plVar15 == plVar20)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if ((plVar15 == (longlong *)0x0) || ((int)*plVar15 == 2)) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if ((bVar2) || (bVar2 = false, bVar3)) {
                    bVar2 = true;
                  }
                  if ((!bVar24) || (!bVar2)) goto LAB_1428db2f9;
                }
                lVar11 = ULevel::GetWorld(lVar11);
                if (lVar11 == lVar5) {
                  lVar11 = AActor::GetLevel(lVar16);
                  if (lVar11 == *(longlong *)(lVar5 + 0x30)) goto LAB_1428db341;
                  lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                    bVar24 = false;
                  }
                  else {
                    bVar24 = true;
                  }
                  if (!bVar24) goto LAB_1428db341;
                }
              }
LAB_1428db2f9:
              iVar21 = local_190;
              iVar13 = auStack_1b8._0_4_;
            }
            iVar18 = iVar18 + 1;
            lVar23 = lVar23 + 8;
            if (iVar21 + iVar13 <= iVar18) break;
          } while( true );
        }
        local_1a0 = 0;
        auStack_1b8[0xc] = 1;
      }
LAB_1428db32a:
      TOptional<FActorIteratorState>::Reset(local_228);
      TOptional<FActorIteratorState>::Reset(&lStack_1c8);
      goto LAB_1428db45e;
    }
  }
  else if (param_3 == 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_140725150(param_2,local_118,0);
    plVar15 = local_118;
    if (local_58 != (longlong *)0x0) {
      plVar15 = local_58;
    }
    plVar20 = (longlong *)((longlong)(int)local_50 & 0x1fffffffffffffff);
    if (plVar15 + (int)local_50 < plVar15) {
      plVar20 = plVar12;
    }
    plVar19 = plVar12;
    if (plVar20 != (longlong *)0x0) {
      do {
        local_280 = *plVar15;
        cVar8 = FUN_1423cc4e0();
        if (cVar8 != '\0') {
          local_278 = &local_280;
          uStack_270 = local_280 + 0x2dc;
          FUN_1428c1490(&local_168,local_288,&local_278,0);
        }
        plVar15 = plVar15 + 1;
        plVar19 = (longlong *)((longlong)plVar19 + 1);
      } while (plVar19 != plVar20);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    goto LAB_1428db45e;
  }
  cVar8 = FUN_1423cc4e0(param_3);
  if (cVar8 != '\0') {
    local_278 = &local_238;
    uStack_270 = local_238 + 0x2dc;
    FUN_1428c1490(&local_168,local_288,&local_278,0);
  }
LAB_1428db45e:
  local_268 = (uint *)CONCAT44(local_268._4_4_,(undefined4)local_268);
  if (0 < *(int *)(param_1 + 0x860)) {
    if (0 < (int)local_160 - local_134) {
      puVar17 = *(undefined8 **)(param_1 + 0x858);
      plVar15 = (longlong *)((longlong)*(int *)(param_1 + 0x860) & 0x1fffffffffffffff);
      if (puVar17 + *(int *)(param_1 + 0x860) < puVar17) {
        plVar15 = plVar12;
      }
      plVar20 = plVar12;
      if (plVar15 != (longlong *)0x0) {
        do {
          (**(code **)(*(longlong *)*puVar17 + 0x720))((longlong *)*puVar17,&local_168);
          plVar20 = (longlong *)((longlong)plVar20 + 1);
          puVar17 = puVar17 + 1;
        } while (plVar20 != plVar15);
      }
    }
    puStack_1c0 = local_158;
    local_278 = (longlong *)0x100000000;
    local_268._4_4_ = 0;
    uStack_260 = 0;
    if ((int)local_140 != 0) {
      puVar22 = local_158;
      if (local_148 != (uint *)0x0) {
        puVar22 = local_148;
      }
      uVar9 = *puVar22;
      plVar15 = plVar12;
      while (uVar9 == 0) {
        iVar18 = (int)plVar12;
        uStack_260 = (int)plVar15 + 0x20;
        plVar15 = (longlong *)(ulonglong)uStack_260;
        plVar12 = (longlong *)(ulonglong)(iVar18 + 1U);
        uVar4 = (ulonglong)local_278 >> 0x20;
        local_278 = (longlong *)CONCAT44((int)uVar4,iVar18 + 1U);
        if ((int)((int)local_140 + -1 + ((int)local_140 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar18) {
          local_268._4_4_ = (int)local_140;
          goto LAB_1428db58d;
        }
        uVar9 = puVar22[(longlong)iVar18 + 1];
      }
      uVar9 = -uVar9 & uVar9;
      iVar18 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      local_278 = (longlong *)CONCAT44(uVar9,SUB84(local_278,0));
      if (uVar9 == 0) {
        iVar18 = 0x20;
      }
      else {
        iVar18 = 0x1f - iVar18;
      }
      local_268._4_4_ = (uStack_260 - iVar18) + 0x1f;
      if ((int)local_140 < local_268._4_4_) {
        local_268._4_4_ = (int)local_140;
      }
    }
LAB_1428db58d:
    auStack_1b8._4_4_ = local_268._4_4_;
    auStack_1b8._0_4_ = 0xffffffff;
    auStack_1b8._8_4_ = uStack_260;
    auStack_1b8._12_4_ = iStack_25c;
    local_1d0 = &local_168;
    local_240 = 0;
    lStack_1c8 = (longlong)local_278;
    local_248 = &local_168;
    local_1a8._0_4_ = (int)&local_168;
    local_1a8._4_4_ = (undefined4)((ulonglong)&local_168 >> 0x20);
    uStack_270 = (longlong)local_278;
    uStack_260 = 0xffffffff;
    iStack_25c = local_268._4_4_;
    local_258._8_4_ = (int)local_1a8;
    local_258._0_8_ = auStack_1b8._8_8_;
    local_258._12_4_ = local_1a8._4_4_;
    bVar24 = local_268._4_4_ < (int)local_140;
    local_278 = local_1d0;
    local_1a8 = &local_168;
    local_268 = puStack_1c0;
    if (bVar24) {
      do {
        FUN_142397070(*(undefined8 *)(*local_278 + (longlong)iStack_25c * 0x18),
                      *(undefined4 *)(*local_278 + 8 + (longlong)iStack_25c * 0x18));
        uStack_260 = uStack_260 & ~uStack_270._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_270);
      } while (iStack_25c < (int)local_268[6]);
      if (((char)local_240 != '\0') && (local_240._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_248,(int)local_248[1] - *(int *)((longlong)local_248 + 0x34),1);
      }
    }
  }
  local_120 = 0;
  if (local_128 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_168);
  return;
LAB_1428db341:
  auVar6 = auStack_1b8;
  auStack_1b8._8_4_ = iVar18;
  auVar7 = auStack_1b8;
  auStack_1b8[0xc] = auVar6[0xc];
  bVar24 = auStack_1b8[0xc] != '\0';
  auStack_1b8 = auVar7;
  local_1a0 = lVar16;
  if (bVar24) goto LAB_1428db32a;
  goto LAB_1428db070;
}



// FUNCTION 1428db6c0 FUN_1428db6c0 body=818 status=ok
// SIG undefined FUN_1428db6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428db6c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 auStack_108 [32];
  char local_e8;
  char local_e7 [7];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  longlong local_88 [2];
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  uVar4 = DAT_1468e3590;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar10 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar10,"UpdateLevelStreaming",uVar4);
  iVar5 = DAT_146b19a78;
  if (*(char *)(param_1 + 0x700) == '\0') {
    lVar1 = param_1 + 0x98;
    local_88[0] = 0;
    local_88[1] = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(local_88,lVar1);
    lVar11 = *(longlong *)(param_1 + 0xd8);
    if (lVar11 == 0) {
      _guard_xfg_dispatch_icall_nop(local_50,(void *)(param_1 + 0xd0),4);
    }
    if (local_48 != 0) {
      FMemory::Free();
      lVar11 = *(longlong *)(param_1 + 0xd8);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    local_40 = *(undefined4 *)(param_1 + 0xe0);
    puStack_a0 = local_78;
    local_48 = lVar11;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    local_e0 = (longlong *)0x100000000;
    local_d0._4_4_ = 0;
    uStack_c8 = 0;
    if ((int)local_60 != 0) {
      puVar12 = local_78;
      if (local_68 != (uint *)0x0) {
        puVar12 = local_68;
      }
      uVar8 = *puVar12;
      uStack_c8 = 0;
      iVar9 = 0;
      while (uVar8 == 0) {
        uStack_c8 = uStack_c8 + 0x20;
        uVar3 = (ulonglong)local_e0 >> 0x20;
        local_e0 = (longlong *)CONCAT44((int)uVar3,iVar9 + 1);
        if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) {
          local_d0._4_4_ = (int)local_60;
          goto LAB_1428db868;
        }
        uVar8 = puVar12[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar9 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_e0 = (longlong *)CONCAT44(uVar8,SUB84(local_e0,0));
      if (uVar8 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_d0._4_4_ = (uStack_c8 - iVar9) + 0x1f;
      if ((int)local_60 < local_d0._4_4_) {
        local_d0._4_4_ = (int)local_60;
      }
    }
LAB_1428db868:
    local_b0 = local_88;
    local_b8 = local_88;
    uStack_98 = 0xffffffff;
    iStack_94 = local_d0._4_4_;
    iStack_90 = uStack_c8;
    iStack_8c = iStack_c4;
    uStack_a8 = local_e0;
    uStack_d8 = local_e0;
    local_c0 = uStack_c8;
    iStack_bc = iStack_c4;
    uStack_c8 = 0xffffffff;
    iStack_c4 = local_d0._4_4_;
    bVar2 = local_d0._4_4_ < (int)local_60;
    local_e0 = local_b0;
    local_d0 = puStack_a0;
    if (bVar2) {
      do {
        plVar6 = local_b8;
        iVar9 = iStack_c4;
        lVar11 = *(longlong *)(*local_e0 + (longlong)iStack_c4 * 0x10);
        if (lVar11 != 0) {
          local_e7[0] = '\x01';
          cVar7 = '\x01';
          do {
            if (cVar7 == '\0') goto LAB_1428db918;
            local_e8 = '\0';
            FUN_142553fe0(lVar11,local_e7,&local_e8);
            if (local_e8 != '\0') {
              cVar7 = FUN_142543c80(lVar11);
            }
          } while (local_e7[0] != '\0');
          if (cVar7 == '\0') {
LAB_1428db918:
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Remove(plVar6,iVar9);
            TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar1,lVar11);
          }
        }
        uStack_c8 = uStack_c8 & ~uStack_d8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
      } while (iStack_c4 < (int)local_d0[6]);
    }
    TSet<ULevelStreaming_*,DefaultKeyFuncs<ULevelStreaming_*,0>,FDefaultSetAllocator>::
    Append<FDefaultSetAllocator>(lVar1,local_88);
    if ((DAT_146531eb4 != 0) && (iVar5 < DAT_146b19a78)) {
      FUN_142873f70(DAT_146b17150,1);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_88);
  }
  uVar10 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar10,"UpdateLevelStreaming",uVar4);
  return;
}



// FUNCTION 1428dba00 FUN_1428dba00 body=541 status=ok
// SIG undefined FUN_1428dba00(void)

void FUN_1428dba00(longlong param_1,char param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  int local_38;
  
  plVar8 = param_3;
  if ((param_3 == (longlong *)0x0) &&
     (plVar8 = *(longlong **)(param_1 + 0x1b8), plVar8 == (longlong *)0x0)) {
    return;
  }
  uVar9 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar6 = uVar9;
  if (0 < *(int *)(param_1 + 0x1a0)) {
    do {
      lVar7 = *(longlong *)(uVar9 + *(longlong *)(param_1 + 0x198));
      if (param_2 != '\0') {
        FUN_1425d5810(lVar7);
      }
      uVar2 = local_50;
      uVar4 = *(undefined8 *)(lVar7 + 0xe0);
      lVar7 = (longlong)(int)local_50;
      iVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar3);
      if (local_50._4_4_ < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_58,uVar2 & 0xffffffff);
      }
      uVar10 = (int)uVar6 + 1;
      uVar9 = uVar9 + 8;
      *(undefined8 *)(local_58 + lVar7 * 8) = uVar4;
      uVar6 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x1a0));
  }
  (**(code **)(*plVar8 + 0x250))(plVar8,&local_58);
  if (param_3 == (longlong *)0x0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = -1;
    uVar4 = FUN_1429ff0b0();
    FUN_1417a5560(uVar4,&local_48,1,0x10,0);
    uVar6 = local_40 & 0xffffffff;
    do {
      local_38 = local_38 + 1;
      lVar7 = local_48;
      if ((int)local_40 <= local_38) break;
    } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
    do {
      if ((local_38 < 0) || ((int)uVar6 <= local_38)) goto LAB_1428dbbef;
      lVar1 = *(longlong *)(lVar7 + (longlong)local_38 * 8);
      lVar5 = *(longlong *)(lVar1 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(lVar1);
        uVar6 = local_40 & 0xffffffff;
        lVar7 = local_48;
      }
      if (((lVar5 == param_1) && (*(char *)(lVar1 + 0x328) != '\0')) &&
         (plVar8 = *(longlong **)(lVar1 + 0x380), plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x250))(plVar8,&local_58);
        uVar6 = local_40 & 0xffffffff;
        lVar7 = local_48;
      }
      do {
        local_38 = local_38 + 1;
        if ((int)uVar6 <= local_38) break;
      } while (*(longlong *)(lVar7 + (longlong)local_38 * 8) == 0);
    } while( true );
  }
LAB_1428dbbfc:
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
LAB_1428dbbef:
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
  goto LAB_1428dbbfc;
}



// FUNCTION 1428dbc20 UpdateStreamingLevelShouldBeConsidered body=96 status=ok
// SIG undefined UpdateStreamingLevelShouldBeConsidered(void)

void UWorld::UpdateStreamingLevelShouldBeConsidered(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  if ((((param_2 != 0) &&
       (local_res10 = param_2, lVar1 = ULevelStreaming::GetWorld(param_2), lVar1 == param_1)) &&
      (*(char *)(param_2 + 0xb4) != '\0')) && (cVar2 = FUN_142543c80(param_2), cVar2 != '\0')) {
    FUN_14058c900(param_1 + 0x98,local_res18,&local_res10,0);
  }
  return;
}



// FUNCTION 1428dbc80 UpdateStreamingState body=388 status=ok
// SIG undefined UpdateStreamingState(void)

void UWorldComposition::UpdateStreamingState(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 **ppuVar9;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 *local_28;
  undefined8 local_20;
  
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 != 0) {
    lVar5 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1428dbced;
  }
  lVar8 = 0;
LAB_1428dbced:
  ppuVar9 = &local_38;
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  local_38 = (undefined4 *)0x0;
  local_30 = 0;
  FUN_1428cbb60(param_1,param_2,param_3,&local_28,ppuVar9);
  iVar4 = FUN_1428cf800(lVar8);
  puVar3 = local_38;
  puVar7 = local_38 + (longlong)(int)local_30 * 6;
  puVar2 = local_28;
  for (puVar6 = local_38; local_28 = puVar2, puVar6 != puVar7; puVar6 = puVar6 + 6) {
    ppuVar9 = (undefined4 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
    FUN_1428c77e0(param_1,lVar8,*puVar6,0,ppuVar9,iVar4 == 1,puVar6[4]);
    puVar2 = local_28;
  }
  lVar5 = (longlong)(int)local_20;
  for (puVar7 = puVar2; puVar7 != puVar2 + lVar5 * 6; puVar7 = puVar7 + 6) {
    FUN_1428c77e0(param_1,lVar8,*puVar7,1,1,iVar4 == 1,puVar7[4]);
  }
  if (puVar3 != (undefined4 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (puVar2 != (undefined4 *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 1428dbe10 FUN_1428dbe10 body=955 status=ok
// SIG undefined FUN_1428dbe10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428dbe10(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_198 [32];
  float local_178;
  float fStack_174;
  float local_170;
  longlong local_168;
  undefined1 local_160 [24];
  undefined1 local_148 [192];
  undefined1 *local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong uVar10;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar11 = *(ulonglong *)(param_1 + 0x20);
  uVar10 = 0;
  local_168 = param_1;
  if (uVar11 == 0) {
LAB_1428dbe7b:
    uVar11 = uVar10;
  }
  else {
    lVar6 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1428dbe7b;
  }
  if ((DAT_1468b616c != '\0') || (iVar4 = FUN_1428cf800(uVar11), iVar4 == 1)) {
    UWorldComposition::UpdateStreamingState(param_1,&DAT_1468b5d90,1);
    return;
  }
  iVar4 = UEngine::GetNumGamePlayers(DAT_146b17150,uVar11);
  if (iVar4 == 0) {
    return;
  }
  bVar12 = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  fVar15 = DAT_1468b5d98;
  fVar16 = DAT_1468b5d90;
  fVar17 = DAT_1468b5d94;
  if (iVar4 < 1) {
    return;
  }
  do {
    lVar6 = UEngine::GetGamePlayer(DAT_146b17150,uVar11,uVar10);
    if ((lVar6 != 0) && (plVar1 = *(longlong **)(lVar6 + 0x30), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x7a8))(plVar1,&local_178,local_160);
      uVar3 = local_80;
      lVar13 = (longlong)(int)local_80;
      iVar5 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar5);
      if (local_80._4_4_ < iVar5) {
        TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                  (local_148,uVar3 & 0xffffffff);
      }
      puVar8 = local_148;
      if (local_88 != (undefined1 *)0x0) {
        puVar8 = local_88;
      }
      *(ulonglong *)(puVar8 + lVar13 * 0xc) = CONCAT44(fStack_174,local_178);
      *(float *)(puVar8 + lVar13 * 0xc + 8) = local_170;
      fVar16 = fVar16 + local_178;
      fVar17 = fVar17 + fStack_174;
      fVar15 = fVar15 + local_170;
      bVar12 = bVar12 | (byte)(*(uint *)(*(longlong *)(lVar6 + 0x30) + 0x640) >> 1) & 1;
    }
    lVar6 = local_168;
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
  } while ((int)uVar9 < iVar4);
  if ((int)local_80 == 0) goto LAB_1428dc15a;
  fVar14 = 1.0 / (float)(int)local_80;
  fVar16 = fVar16 * fVar14;
  fVar17 = fVar17 * fVar14;
  fVar15 = fVar15 * fVar14;
  lVar13 = 0;
  if (*(longlong *)(uVar11 + 0x30) != 0) {
    lVar13 = FUN_14203ac20(*(longlong *)(uVar11 + 0x30),1);
  }
  if ((*(byte *)(lVar13 + 0x460) & 0x20) != 0) {
    if (((*(float *)(uVar11 + 0x7d4) == 0.0) && (*(float *)(uVar11 + 0x7d8) == 0.0)) &&
       (*(float *)(uVar11 + 0x7dc) == 0.0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      lVar13 = *(longlong *)(lVar6 + 0x20);
      if (lVar13 == 0) {
LAB_1428dc0a9:
        lVar13 = 0;
      }
      else {
        lVar7 = FUN_142a2f930();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1428dc0a9;
      }
      if (*(char *)(lVar6 + 0x61) == '\0') {
        fVar15 = 0.0;
      }
      if (*(float *)(lVar6 + 100) * *(float *)(lVar6 + 100) <
          fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15) {
        *(int *)(lVar13 + 0x7c8) = (int)fVar16 + *(int *)(lVar13 + 0x7bc);
        *(int *)(lVar13 + 0x7cc) = (int)fVar17 + *(int *)(lVar13 + 0x7c0);
        *(int *)(lVar13 + 2000) = *(int *)(lVar13 + 0x7c4) + (int)fVar15;
      }
    }
  }
  if (bVar12 == 0) {
    puVar8 = local_148;
    if (local_88 != (undefined1 *)0x0) {
      puVar8 = local_88;
    }
    UWorldComposition::UpdateStreamingState(lVar6,puVar8,local_80 & 0xffffffff);
  }
  else {
    puVar8 = local_148;
    if (local_88 != (undefined1 *)0x0) {
      puVar8 = local_88;
    }
    UWorldComposition::UpdateStreamingStateCinematic(lVar6,puVar8);
  }
LAB_1428dc15a:
  if (local_88 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428dc1d0 UpdateStreamingStateCinematic body=375 status=ok
// SIG undefined UpdateStreamingStateCinematic(void)

void UWorldComposition::UpdateStreamingStateCinematic(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    UpdateStreamingState();
    return;
  }
  uVar8 = 0;
  bVar10 = 0;
  uVar4 = uVar8;
  uVar7 = uVar8;
  uVar9 = uVar8;
  if (*(int *)(param_1 + 0x40) < 1) {
    return;
  }
  do {
    if ((((int)uVar7 != -1) && (*(char *)(*(longlong *)(param_1 + 0x38) + 0x70 + uVar4) != '\0')) &&
       ((*(byte *)(*(longlong *)(uVar9 + *(longlong *)(param_1 + 0x48)) + 0xb7) & 1) == 0)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0xa8 + uVar4) = 0;
      uVar5 = *(ulonglong *)(param_1 + 0x20);
      if (uVar5 == 0) {
LAB_1428dc290:
        uVar5 = uVar8;
      }
      else {
        lVar3 = FUN_142a2f930();
        if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_1428dc290;
      }
      bVar2 = FUN_1428c77e0(param_1,uVar5,uVar7,1,1,1,0xffffffff);
      bVar10 = bVar10 | bVar2;
    }
    uVar6 = (int)uVar7 + 1;
    uVar4 = uVar4 + 0xb0;
    uVar7 = (ulonglong)uVar6;
    uVar9 = uVar9 + 8;
  } while ((int)uVar6 < *(int *)(param_1 + 0x40));
  if (bVar10 == 0) {
    return;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x20);
  if (uVar4 != 0) {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1428dc325;
  }
  uVar4 = uVar8;
LAB_1428dc325:
  FUN_1428caf60(uVar4,1);
  return;
}



// FUNCTION 1428dc350 FUN_1428dc350 body=355 status=ok
// SIG undefined FUN_1428dc350(void)

void FUN_1428dc350(longlong param_1,undefined1 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 == 0) {
    uVar2 = GetTransientPackage();
    lVar3 = FUN_1426f4cb0(uVar2);
    *(longlong *)(param_1 + 0x40) = lVar3;
    *(uint *)(lVar3 + 0x728) = *(uint *)(lVar3 + 0x728) & 0xfffffffe;
    lVar3 = *(longlong *)(param_1 + 0x40);
  }
  if ((*(byte *)(lVar3 + 0xb8) & 1) == 0) {
    FUN_14234b270(lVar3,param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 == 0) {
    uVar2 = GetTransientPackage();
    lVar3 = FUN_1426f4cb0(uVar2);
    *(longlong *)(param_1 + 0x48) = lVar3;
    *(uint *)(lVar3 + 0x728) = *(uint *)(lVar3 + 0x728) & 0xfffffffe;
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  if ((*(byte *)(lVar3 + 0xb8) & 1) == 0) {
    FUN_14234b270(lVar3,param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 == 0) {
    uVar2 = GetTransientPackage();
    lVar3 = FUN_1426f4cb0(uVar2);
    *(longlong *)(param_1 + 0x50) = lVar3;
    *(uint *)(lVar3 + 0x728) = *(uint *)(lVar3 + 0x728) & 0xfffffffe;
    lVar3 = *(longlong *)(param_1 + 0x50);
  }
  if ((*(byte *)(lVar3 + 0xb8) & 1) == 0) {
    FUN_14234b270(lVar3,param_1);
  }
  if (param_3 == '\0') {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x168)) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x160));
        lVar4 = FLevelUtils::FindStreamingLevel(lVar1);
        if ((lVar4 == 0) || ((*(byte *)(lVar1 + 0x204) & 0x10) != 0)) {
          FUN_14253c2d0(lVar1,param_2);
          plVar5 = (longlong *)IStreamingManager::Get();
          (**(code **)(*plVar5 + 0x48))(plVar5,lVar1);
        }
        iVar6 = iVar6 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar6 < *(int *)(param_1 + 0x168));
    }
  }
  else {
    FUN_14253c2d0(*(undefined8 *)(param_1 + 0x188),param_2);
  }
  FUN_1428daf80(param_1,0,0);
  return;
}



// FUNCTION 1428dc4f0 Visit body=305 status=ok
// SIG undefined Visit(void)

undefined8 FWorldTilesGatherer::Visit(longlong param_1,short *param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if (param_3 == '\0') {
    local_20 = 0;
    local_28 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar7 = -1;
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
    puVar2 = (undefined8 *)FUN_141672300(local_18,&local_28,1);
    puVar3 = &DAT_143f3eda8;
    puVar5 = &DAT_143f3eda8;
    if ((int)DAT_1464b4440 != 0) {
      puVar5 = DAT_1464b4438;
    }
    if (*(int *)(puVar2 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar2;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar5);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar1 + 1;
      if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
      }
      plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
      *plVar4 = 0;
      *plVar4 = local_28;
      local_28 = 0;
      *(undefined4 *)(plVar4 + 1) = (undefined4)local_20;
      *(undefined4 *)((longlong)plVar4 + 0xc) = local_20._4_4_;
      local_20 = 0;
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 1428dc630 FUN_1428dc630 body=624 status=ok
// SIG undefined FUN_1428dc630(void)

void FUN_1428dc630(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_168;
  longlong local_160;
  longlong local_158 [4];
  longlong local_138 [2];
  longlong local_128;
  longlong *local_120;
  longlong local_98;
  longlong local_38;
  longlong local_28;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_2);
  lVar1 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(param_1 + 0x188));
  local_res8 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res8,local_158 + 2);
  lVar1 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(param_1 + 0x188));
  FUN_1425d0d80(param_2,*(undefined8 *)(lVar1 + 0x18));
  local_168 = 0;
  local_160 = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    plVar2 = (longlong *)
             UObjectBaseUtility::GetPathName
                       (*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x10),local_138,0);
    if (&local_168 != plVar2) {
      if (local_168 != 0) {
        FMemory::Free();
      }
      local_168 = *plVar2;
      *plVar2 = 0;
      local_160 = plVar2[1];
      plVar2[1] = 0;
    }
    if (local_138[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x7e8))
              (*(longlong **)(param_1 + 0x140),param_2,local_158);
  }
  lVar1 = *(longlong *)param_2[0x2b0];
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FControlChannelOutBunch::FControlChannelOutBunch(&local_128,lVar1,0);
    local_res8 = CONCAT71(local_res8._1_7_,1);
    if ((undefined1 *)local_120[1] < (undefined1 *)*local_120 + 1) {
      (**(code **)(local_128 + 0x50))(&local_128,&local_res8,1);
    }
    else {
      local_res8 = CONCAT71(local_res8._1_7_,*(undefined1 *)*local_120);
      *local_120 = *local_120 + 1;
    }
    FUN_14158ce90(&local_128,local_158 + 2);
    FUN_14158ce90(&local_128,&local_168);
    FUN_14158ce90(&local_128,local_158);
    (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
              (*(longlong **)param_2[0x2b0],local_res10,&local_128,1);
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_128);
  }
  (**(code **)(*param_2 + 0x2c8))(param_2,0);
  *(undefined4 *)(param_2 + 0x42) = 0;
  UNetConnection::SetClientLoginState(param_2,2);
  if (local_158[0] != 0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (local_158[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428dc8b0 FUN_1428dc8b0 body=670 status=ok
// SIG undefined FUN_1428dc8b0(void)

longlong FUN_1428dc8b0(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_1428dcab1;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_1428dcab1;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_1428dcab1:
  plVar4 = (longlong *)FUN_14171bfe0();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = FUN_14171bfe0();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 1428dcb50 NewObject<USaveGame> body=149 status=ok
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



// FUNCTION 1428dcbf0 FUN_1428dcbf0 body=1109 status=ok
// SIG undefined FUN_1428dcbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1428dcbf0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  FUN_141784790(param_2,L"Sprite");
  puVar4 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar4,0,param_2);
  FUN_1424de090(param_1,param_2);
  *param_1 = &PTR_FUN_1451f0008;
  param_1[0x8b] = &PTR_LAB_1451f0728;
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 3;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 1;
  *(undefined4 *)(param_1 + 0x9d) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(uint *)(param_1 + 0xa6) = *(uint *)(param_1 + 0xa6) & 0xfffffffc;
  *(uint *)(param_1 + 0xa6) = *(uint *)(param_1 + 0xa6) | 4;
  *(uint *)(param_1 + 0xa3) = *(uint *)(param_1 + 0xa3) & 0xfffffffc;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0x43480000;
  *(undefined4 *)(param_1 + 0xa1) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x428c0000;
  *(undefined4 *)(param_1 + 0xa2) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0x43480000;
  *(uint *)(param_1 + 0xa7) = *(uint *)(param_1 + 0xa7) | 1;
  *(undefined1 *)((longlong)param_1 + 0x53c) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x40000000;
  FInteriorSettings::FInteriorSettings(param_1 + 0xab);
  uVar7 = (ulonglong)_tls_index;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined2 *)((longlong)param_1 + 0x624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x63c) = DAT_1468b5d98;
  param_1[0xc5] = *(undefined8 *)((longlong)param_1 + 0x634);
  *(undefined4 *)(param_1 + 0xc6) = uVar2;
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x644) = 2;
  param_1[0xc9] = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar7 * 8);
  param_1[0xca] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146b19ba8) {
    _Init_thread_header(&DAT_146b19ba8);
    if (DAT_146b19ba8 == -1) {
      FUN_141785db0(L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
      local_18 = 0;
      local_10 = 0x4c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      FGenericPlatformString::Memcpy
                (local_18,
                 L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C",0x98
                );
      FUN_14179acf0(&local_18,1);
      DAT_146b19ba0 = FUN_1428dc8b0(&local_18);
      if (DAT_146b19ba0 == 0) {
        FUN_14178ab20(L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C"
                     );
      }
      if (local_18 != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146b19ba8);
    }
  }
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xc97ffff0;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffffd7 | 7;
  param_1[0x8f] = DAT_146b19ba0;
  *(undefined4 *)(param_1 + 0xb1) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0x443b8000;
  uVar5 = FUN_142923b20();
  param_1[0x91] = uVar5;
  uVar5 = FUN_14293b120();
  param_1[0x94] = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *(uint *)(param_1 + 0x99) = *(uint *)(param_1 + 0x99) & 0xfffffffd;
  param_1[0x96] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x95) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x44160000;
  param_1[0x98] = 0x469c4000;
  *(undefined4 *)(param_1 + 0x9a) = 200;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0xdc;
  local_10 = CONCAT44(local_10._4_4_,0x3f800000);
  *(undefined4 *)(param_1 + 0x97) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 4;
  *(undefined4 *)(param_1 + 0xce) = 0x442f0000;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"GbxColorRemapLUTSet",1);
  uVar5 = *puVar4;
  uVar6 = FUN_14294c360();
  uVar5 = FUN_141752410(param_1,uVar5,uVar6,uVar6,1,0,0);
  param_1[0xcf] = uVar5;
  FUN_1428dd240(param_1);
  *(uint *)(param_1 + 0x99) = *(uint *)(param_1 + 0x99) | 1;
  return param_1;
}



// FUNCTION 1428dd060 FUN_1428dd060 body=121 status=ok
// SIG undefined FUN_1428dd060(void)

longlong FUN_1428dd060(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x648) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143f47c68;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x680);
  }
  return param_1;
}



// FUNCTION 1428dd0e0 AddAssetUserData body=344 status=ok
// SIG undefined AddAssetUserData(void)

void AWorldSettings::AddAssetUserData(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(param_2 + 0x10));
    if ((lVar1 != 0) && (lVar2 = (longlong)(int)param_1[0x3f], (int)param_1[0x3f] != 0)) {
      iVar7 = 0;
      bVar8 = *(longlong *)param_1[0x3e] != lVar1;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar2) {
          plVar3 = (longlong *)(param_1[0x3e] + lVar4 * 8);
          do {
            if (bVar8 != (*plVar3 != lVar1)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar4 < lVar2);
        }
        if (bVar8 != false) {
          if (iVar7 != iVar5) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x3e] + (longlong)iVar7 * 8),
                       (void *)(param_1[0x3e] + (longlong)iVar5 * 8),(longlong)(iVar6 - iVar5) << 3)
            ;
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar2);
      *(int *)(param_1 + 0x3f) = iVar7;
    }
    iVar5 = (int)param_1[0x3f];
    *(int *)(param_1 + 0x3f) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0x1fc) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x3e,iVar5);
    }
    *(longlong *)(param_1[0x3e] + (longlong)iVar5 * 8) = param_2;
  }
  return;
}



// FUNCTION 1428dd240 FUN_1428dd240 body=126 status=ok
// SIG undefined FUN_1428dd240(void)

void FUN_1428dd240(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      cVar1 = FUN_142235820(param_1,0);
      if ((cVar1 != '\0') && (param_1[0xcf] != 0)) {
        FUN_14247e190();
        lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1b8) != 0)) {
          FUN_14248a7c0(param_1[0xcf],lVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1428dd300 FUN_1428dd300 body=245 status=ok
// SIG undefined FUN_1428dd300(void)

undefined8 * FUN_1428dd300(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  bVar4 = (*(byte *)(param_1 + 0x460) & 4) == 0;
  puVar3 = &local_48;
  if (bVar4) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_14222d820();
  }
  lVar2 = local_40;
  *param_2 = *puVar3;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar3 + 2);
  _Src = (void *)puVar3[1];
  *(int *)(param_2 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2 + 1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_2[1],_Src,(longlong)iVar1 * 2);
  }
  if ((bVar4) && (lVar2 != 0)) {
    FMemory::Free(lVar2);
  }
  if ((!bVar4) && (local_40 != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1428dd400 GetAssetUserDataOfClass body=199 status=ok
// SIG undefined GetAssetUserDataOfClass(void)

longlong AWorldSettings::GetAssetUserDataOfClass(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x1f8)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x1f0));
      if (lVar1 != 0) {
        if (param_2 != 0) {
          lVar3 = UAssetUserData::GetPrivateStaticClass();
          lVar4 = param_2;
          do {
            lVar5 = param_2;
            if (lVar4 == lVar3) goto LAB_1428dd460;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
        }
        lVar5 = 0;
LAB_1428dd460:
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return lVar1;
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x1f8));
  }
  return 0;
}



// FUNCTION 1428dd4d0 FUN_1428dd4d0 body=127 status=ok
// SIG undefined FUN_1428dd4d0(void)

undefined4 FUN_1428dd4d0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 0x460) & 0x40) != 0) {
    return *(undefined4 *)(param_1 + 0x480);
  }
  if ((char)*(uint *)(param_1 + 0x460) < '\0') {
    *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x484);
    return *(undefined4 *)(param_1 + 0x484);
  }
  plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  uVar1 = *(undefined4 *)(lVar3 + 0x38);
  *(undefined4 *)(param_1 + 0x480) = uVar1;
  return uVar1;
}



// FUNCTION 1428dd550 FUN_1428dd550 body=785 status=ok
// SIG undefined FUN_1428dd550(void)

void FUN_1428dd550(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b19bb8) && (_Init_thread_header(&DAT_146b19bb8), DAT_146b19bb8 == -1)) {
    uVar1 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    UVoipListenerSynthComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Pauser",1);
    DAT_146b19bb0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b19bb8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b19bb0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b19bb0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b19bb0 + 0x30));
  }
  if ((*piVar5 < DAT_146b19bc8) && (_Init_thread_header(&DAT_146b19bc8), DAT_146b19bc8 == -1)) {
    uVar1 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    UVoipListenerSynthComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TimeDilation",1);
    DAT_146b19bc0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b19bc8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b19bc0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b19bc0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b19bc0 + 0x30));
  }
  if ((*piVar5 < DAT_146b19bd8) && (_Init_thread_header(&DAT_146b19bd8), DAT_146b19bd8 == -1)) {
    uVar1 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    UVoipListenerSynthComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"WorldGravityZ",1);
    DAT_146b19bd0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b19bd8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b19bd0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b19bd0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b19bd0 + 0x30));
  }
  if ((*piVar5 < DAT_146b19be8) && (_Init_thread_header(&DAT_146b19be8), DAT_146b19be8 == -1)) {
    uVar1 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    UVoipListenerSynthComponent::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bHighPriorityLoading",1);
    DAT_146b19be0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b19be8);
  }
  if (0 < *(int *)(DAT_146b19be0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b19be0 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b19be0 + 0x30));
  }
  return;
}



// FUNCTION 1428dd870 FUN_1428dd870 body=31 status=ok
// SIG undefined FUN_1428dd870(void)

ulonglong FUN_1428dd870(longlong param_1)

{
  ulonglong in_RAX;
  
  if (*(longlong *)(param_1 + 0x468) != 0) {
    in_RAX = 0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x468) + 0x28) != 0) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1428dd890 FUN_1428dd890 body=807 status=ok
// SIG undefined FUN_1428dd890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428dd890(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90 [2];
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_70;
  char local_6c;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if ((*(byte *)(lVar8 + 0x830) & 0x20) == 0) {
    local_a8 = lVar8;
    local_a0 = FUN_1428dfc70();
    local_90[0] = 5;
    local_38 = '\0';
    local_98 = lVar8;
    FUN_14044bc80(&local_88,&local_98,&local_a0);
    FUN_14045a130(local_90);
    if (local_6c == '\0') {
LAB_1428dd940:
      FUN_142227cf0(local_60);
      lVar8 = local_88;
      iVar17 = local_70 + 1;
      if (iVar17 < local_50 + local_78) {
        lVar16 = (longlong)iVar17 * 8;
        iVar15 = local_50;
        iVar12 = local_78;
        do {
          if (iVar17 < iVar12) {
            lVar14 = *(longlong *)(lVar16 + local_80);
          }
          else {
            lVar14 = *(longlong *)(local_58 + (longlong)(iVar17 - iVar12) * 8);
          }
          local_68 = local_68 + 1;
          if ((lVar14 != 0) &&
             (lVar9 = AActor::GetLevel(lVar14), iVar15 = local_50, iVar12 = local_78, lVar9 != 0)) {
            if ((local_90[0] & 1) != 0) {
              iVar1 = *(int *)(lVar14 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar13 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar13;
                lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_1428ddae7;
            }
            if (((local_90[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar14), iVar15 = local_50,
               iVar12 = local_78, cVar6 != '\0')) {
              if ((local_90[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar9 + 600);
                if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                    (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0)) ||
                   (piVar2 == piVar11)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar15 = local_50;
                iVar12 = local_78;
                if ((!bVar5) || (!bVar3)) goto LAB_1428ddae7;
              }
              lVar9 = ULevel::GetWorld(lVar9);
              iVar15 = local_50;
              iVar12 = local_78;
              if (lVar9 == lVar8) {
                lVar9 = AActor::GetLevel(lVar14);
                if (lVar9 == *(longlong *)(lVar8 + 0x30)) goto LAB_1428ddba0;
                lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar15 = local_50;
                iVar12 = local_78;
                if (!bVar5) goto LAB_1428ddba0;
              }
            }
          }
LAB_1428ddae7:
          iVar17 = iVar17 + 1;
          lVar16 = lVar16 + 8;
          if (iVar15 + iVar12 <= iVar17) break;
        } while( true );
      }
      local_60 = 0;
      local_6c = '\x01';
      lVar8 = local_a8;
    }
LAB_1428ddb3b:
    if (local_38 != '\0') {
      local_38 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
    *(uint *)(lVar8 + 0x830) = *(uint *)(lVar8 + 0x830) | 0x20;
    if (*(longlong **)(lVar8 + 0x150) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar8 + 0x150) + 0x290))();
    }
  }
  return;
LAB_1428ddba0:
  lVar8 = local_a8;
  local_70 = iVar17;
  local_60 = lVar14;
  if (local_6c != '\0') goto LAB_1428ddb3b;
  goto LAB_1428dd940;
}



// FUNCTION 1428ddbc0 FUN_1428ddbc0 body=25 status=ok
// SIG undefined FUN_1428ddbc0(void)

void FUN_1428ddbc0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  *(uint *)(lVar1 + 0x830) = *(uint *)(lVar1 + 0x830) | 0x40;
  return;
}



// FUNCTION 1428ddbf0 FUN_1428ddbf0 body=233 status=ok
// SIG undefined FUN_1428ddbf0(void)

void FUN_1428ddbf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res8;
  undefined8 local_res10;
  
  FUN_1422383f0();
  if (((*(uint *)(param_1 + 8) & 0x80410) == 0) && (FUN_14224f430(&local_res8), local_res8 != 0)) {
    lVar2 = UAISubsystem::GetPrivateStaticClass();
    for (lVar1 = local_res8; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        local_res10 = 0;
        lVar2 = UAISubsystem::GetPrivateStaticClass();
        for (lVar1 = local_res8; (lVar4 = 0, lVar1 != 0 && (lVar4 = local_res8, lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
        uVar3 = NewObject<USaveGame>(param_1,lVar4,local_res10,0,0,0,0);
        *(undefined8 *)(param_1 + 0x468) = uVar3;
        break;
      }
    }
  }
  if (*(float *)(param_1 + 0x5ec) <= 0.0 && *(float *)(param_1 + 0x5ec) != 0.0) {
    *(undefined4 *)(param_1 + 0x5ec) = 0;
  }
  if (*(float *)(param_1 + 0x5f0) <= 0.0 && *(float *)(param_1 + 0x5f0) != 0.0) {
    *(undefined4 *)(param_1 + 0x5f0) = 0;
  }
  if (*(float *)(param_1 + 0x5f4) <= 0.0 && *(float *)(param_1 + 0x5f4) != 0.0) {
    *(undefined4 *)(param_1 + 0x5f4) = 0;
  }
  if (*(float *)(param_1 + 0x5f8) <= 0.0 && *(float *)(param_1 + 0x5f8) != 0.0) {
    *(undefined4 *)(param_1 + 0x5f8) = 0;
  }
  return;
}



// FUNCTION 1428ddce0 FUN_1428ddce0 body=46 status=ok
// SIG undefined FUN_1428ddce0(void)

void FUN_1428ddce0(void)

{
  char cVar1;
  
  FUN_142238430();
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150,0);
  if (cVar1 != '\0') {
    *(uint *)(DAT_146b17150 + 0x848) = *(uint *)(DAT_146b17150 + 0x848) | 2;
  }
  return;
}



// FUNCTION 1428ddd10 FUN_1428ddd10 body=240 status=ok
// SIG undefined FUN_1428ddd10(void)

void FUN_1428ddd10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 local_res10;
  
  FUN_1422384a0();
  if (((((*(byte *)(param_1 + 0x460) & 2) != 0) && (*(longlong *)(param_1 + 0x468) == 0)) &&
      (lVar4 = AActor::GetLevel(param_1), lVar4 != 0)) &&
     (cVar3 = ULevel::IsPersistentLevel(lVar4), cVar3 != '\0')) {
    FUN_14224f430(&local_res8);
    if ((local_res8 != 0) &&
       (lVar1 = UAISubsystem::GetPrivateStaticClass(), lVar4 = local_res8, local_res8 != 0)) {
LAB_1428ddd80:
      if (lVar4 != lVar1) goto code_r0x0001428ddd85;
      local_res10 = 0;
      lVar1 = UAISubsystem::GetPrivateStaticClass();
      for (lVar4 = local_res8; (lVar5 = 0, lVar4 != 0 && (lVar5 = local_res8, lVar4 != lVar1));
          lVar4 = *(longlong *)(lVar4 + 0x30)) {
      }
      uVar2 = NewObject<USaveGame>(param_1,lVar5,local_res10,0,0,0,0);
      *(undefined8 *)(param_1 + 0x468) = uVar2;
    }
LAB_1428dddec:
    *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x460) & 0xfffffffd;
  }
  FUN_1428dd240(param_1);
  return;
code_r0x0001428ddd85:
  lVar4 = *(longlong *)(lVar4 + 0x30);
  if (lVar4 == 0) goto LAB_1428dddec;
  goto LAB_1428ddd80;
}



// FUNCTION 1428dde00 FUN_1428dde00 body=82 status=ok
// SIG undefined FUN_1428dde00(void)

void FUN_1428dde00(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = UWorld::GetAudioDevice(uVar1);
  if (lVar2 != 0) {
    FUN_1422d7f30(lVar2,uVar1,param_1 + 0xa7,param_1 + 0xab);
  }
  return;
}



// FUNCTION 1428dde60 FUN_1428dde60 body=403 status=ok
// SIG undefined FUN_1428dde60(void)

void FUN_1428dde60(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar11;
  undefined1 local_38 [16];
  longlong *local_28;
  longlong local_20;
  uint local_c;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  FUN_142239650();
  iVar3 = FUN_142235230(param_1);
  if (iVar3 == 1) {
    return;
  }
  cVar2 = FUN_142235820(param_1,0);
  if (cVar2 == '\0') {
    return;
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar4 + 0x110) != 0) {
    return;
  }
  if (*(int *)(DAT_146b17150 + 0x978) < 2) {
    return;
  }
  if (*(int *)(DAT_146b17150 + 0x978) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)(DAT_146b17150 + 0x970);
  }
  uVar5 = FUN_14171bfe0();
  lVar6 = FUN_141799c90(uVar5,0,puVar10,0,CONCAT44(uVar11,2),0,1);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar8 = APlayerState::GetPrivateStaticClass();
  lVar7 = lVar6;
  while (lVar7 != lVar8) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    if (lVar7 == 0) {
      return;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_20 = param_1[0x2a];
  local_c = local_c | 0x40;
  local_28 = param_1;
  lVar8 = APlayerState::GetPrivateStaticClass();
  lVar7 = lVar6;
  do {
    lVar9 = lVar6;
    if (lVar7 == lVar8) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
    lVar9 = 0;
  } while (lVar7 != 0);
  uVar5 = UWorld::SpawnActor(lVar4,lVar9,0,0,local_38);
  *(undefined8 *)(lVar4 + 0x110) = uVar5;
  return;
}



// FUNCTION 1428de000 RemoveUserDataOfClass body=271 status=ok
// SIG undefined RemoveUserDataOfClass(void)

void AWorldSettings::RemoveUserDataOfClass(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x1f8)) {
    lVar9 = 0;
    plVar1 = (longlong *)(param_1 + 0x1f0);
    do {
      lVar2 = *(longlong *)(lVar9 + *plVar1);
      if (lVar2 != 0) {
        if (param_2 != 0) {
          lVar5 = UAssetUserData::GetPrivateStaticClass();
          lVar8 = param_2;
          do {
            lVar6 = param_2;
            if (lVar8 == lVar5) goto LAB_1428de070;
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
        lVar6 = 0;
LAB_1428de070:
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar7 = *(int *)(param_1 + 0x1f8);
          iVar4 = (iVar7 - iVar10) + -1;
          if (iVar4 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar10 * 8),
                       (void *)(*plVar1 + (longlong)(iVar10 + 1) * 8),(longlong)iVar4 << 3);
            iVar7 = *(int *)(param_1 + 0x1f8);
          }
          *(int *)(param_1 + 0x1f8) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
          return;
        }
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar10 < *(int *)(param_1 + 0x1f8));
  }
  return;
}



// FUNCTION 1428de110 FUN_1428de110 body=78 status=ok
// SIG undefined FUN_1428de110(void)

void FUN_1428de110(longlong param_1,longlong param_2)

{
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_1464af950);
  if ((*(int *)(param_2 + 0x40) < 0x14d) && (*(float *)(param_1 + 0x484) != 0.0)) {
    *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x460) | 0x80;
  }
  return;
}



// FUNCTION 1428de190 FUN_1428de190 body=47 status=ok
// SIG undefined FUN_1428de190(void)

longlong FUN_1428de190(void)

{
  if (DAT_146b19cc8 == 0) {
    FUN_141786a30(&DAT_146b19cc8,&PTR_FUN_146535950);
  }
  return DAT_146b19cc8;
}



// FUNCTION 1428de1c0 FUN_1428de1c0 body=47 status=ok
// SIG undefined FUN_1428de1c0(void)

longlong FUN_1428de1c0(void)

{
  if (DAT_146b1a1b0 == 0) {
    FUN_141786440(&DAT_146b1a1b0,&PTR_LAB_1451f41e0);
  }
  return DAT_146b1a1b0;
}



// FUNCTION 1428de1f0 FUN_1428de1f0 body=47 status=ok
// SIG undefined FUN_1428de1f0(void)

longlong FUN_1428de1f0(void)

{
  if (DAT_146b19d50 == 0) {
    FUN_141786a30(&DAT_146b19d50,&PTR_FUN_146536970);
  }
  return DAT_146b19d50;
}



// FUNCTION 1428de220 FUN_1428de220 body=47 status=ok
// SIG undefined FUN_1428de220(void)

longlong FUN_1428de220(void)

{
  if (DAT_146b19d58 == 0) {
    FUN_141786a30(&DAT_146b19d58,&PTR_FUN_146536af0);
  }
  return DAT_146b19d58;
}



// FUNCTION 1428de250 FUN_1428de250 body=47 status=ok
// SIG undefined FUN_1428de250(void)

longlong FUN_1428de250(void)

{
  if (DAT_146b19d60 == 0) {
    FUN_141786a30(&DAT_146b19d60,&PTR_FUN_146536b70);
  }
  return DAT_146b19d60;
}



// FUNCTION 1428de280 FUN_1428de280 body=47 status=ok
// SIG undefined FUN_1428de280(void)

longlong FUN_1428de280(void)

{
  if (DAT_146b19d68 == 0) {
    FUN_141786a30(&DAT_146b19d68,&PTR_FUN_146536bf0);
  }
  return DAT_146b19d68;
}



// FUNCTION 1428de2b0 FUN_1428de2b0 body=47 status=ok
// SIG undefined FUN_1428de2b0(void)

longlong FUN_1428de2b0(void)

{
  if (DAT_146b19d70 == 0) {
    FUN_141786a30(&DAT_146b19d70,&PTR_FUN_146536cb0);
  }
  return DAT_146b19d70;
}



// FUNCTION 1428de2e0 FUN_1428de2e0 body=47 status=ok
// SIG undefined FUN_1428de2e0(void)

longlong FUN_1428de2e0(void)

{
  if (DAT_146b19d78 == 0) {
    FUN_141786a30(&DAT_146b19d78,&PTR_FUN_146536d30);
  }
  return DAT_146b19d78;
}



// FUNCTION 1428de310 FUN_1428de310 body=47 status=ok
// SIG undefined FUN_1428de310(void)

longlong FUN_1428de310(void)

{
  if (DAT_146b19d80 == 0) {
    FUN_141786a30(&DAT_146b19d80,&PTR_FUN_146536db0);
  }
  return DAT_146b19d80;
}



// FUNCTION 1428de340 FUN_1428de340 body=47 status=ok
// SIG undefined FUN_1428de340(void)

longlong FUN_1428de340(void)

{
  if (DAT_146b19d88 == 0) {
    FUN_141786a30(&DAT_146b19d88,&PTR_FUN_146536eb0);
  }
  return DAT_146b19d88;
}



// FUNCTION 1428de370 FUN_1428de370 body=47 status=ok
// SIG undefined FUN_1428de370(void)

longlong FUN_1428de370(void)

{
  if (DAT_146b19d90 == 0) {
    FUN_141786a30(&DAT_146b19d90,&PTR_FUN_146536ef0);
  }
  return DAT_146b19d90;
}



// FUNCTION 1428de3a0 FUN_1428de3a0 body=47 status=ok
// SIG undefined FUN_1428de3a0(void)

longlong FUN_1428de3a0(void)

{
  if (DAT_146b19d98 == 0) {
    FUN_141786a30(&DAT_146b19d98,&PTR_FUN_146536f30);
  }
  return DAT_146b19d98;
}



// FUNCTION 1428de3d0 FUN_1428de3d0 body=47 status=ok
// SIG undefined FUN_1428de3d0(void)

longlong FUN_1428de3d0(void)

{
  if (DAT_146b19da0 == 0) {
    FUN_141786a30(&DAT_146b19da0,&PTR_FUN_146536ff0);
  }
  return DAT_146b19da0;
}



// FUNCTION 1428de400 FUN_1428de400 body=47 status=ok
// SIG undefined FUN_1428de400(void)

longlong FUN_1428de400(void)

{
  if (DAT_146b19da8 == 0) {
    FUN_141786a30(&DAT_146b19da8,&PTR_FUN_1465370b0);
  }
  return DAT_146b19da8;
}



// FUNCTION 1428de430 FUN_1428de430 body=47 status=ok
// SIG undefined FUN_1428de430(void)

longlong FUN_1428de430(void)

{
  if (DAT_146b19db0 == 0) {
    FUN_141786a30(&DAT_146b19db0,&PTR_FUN_1465371f0);
  }
  return DAT_146b19db0;
}



// FUNCTION 1428de460 FUN_1428de460 body=47 status=ok
// SIG undefined FUN_1428de460(void)

longlong FUN_1428de460(void)

{
  if (DAT_146b19db8 == 0) {
    FUN_141786a30(&DAT_146b19db8,&PTR_FUN_1465372b0);
  }
  return DAT_146b19db8;
}



// FUNCTION 1428de490 FUN_1428de490 body=47 status=ok
// SIG undefined FUN_1428de490(void)

longlong FUN_1428de490(void)

{
  if (DAT_146b19dc0 == 0) {
    FUN_141786a30(&DAT_146b19dc0,&PTR_FUN_146537370);
  }
  return DAT_146b19dc0;
}



// FUNCTION 1428de4c0 FUN_1428de4c0 body=47 status=ok
// SIG undefined FUN_1428de4c0(void)

longlong FUN_1428de4c0(void)

{
  if (DAT_146b19dc8 == 0) {
    FUN_141786a30(&DAT_146b19dc8,&PTR_FUN_1465373f0);
  }
  return DAT_146b19dc8;
}



// FUNCTION 1428de4f0 FUN_1428de4f0 body=47 status=ok
// SIG undefined FUN_1428de4f0(void)

longlong FUN_1428de4f0(void)

{
  if (DAT_146b19dd0 == 0) {
    FUN_141786a30(&DAT_146b19dd0,&PTR_FUN_146537470);
  }
  return DAT_146b19dd0;
}



// FUNCTION 1428de520 FUN_1428de520 body=47 status=ok
// SIG undefined FUN_1428de520(void)

longlong FUN_1428de520(void)

{
  if (DAT_146b19dd8 == 0) {
    FUN_141786a30(&DAT_146b19dd8,&PTR_FUN_1465374f0);
  }
  return DAT_146b19dd8;
}



// FUNCTION 1428de550 FUN_1428de550 body=47 status=ok
// SIG undefined FUN_1428de550(void)

longlong FUN_1428de550(void)

{
  if (DAT_146b19de0 == 0) {
    FUN_141786a30(&DAT_146b19de0,&PTR_FUN_146537570);
  }
  return DAT_146b19de0;
}



// FUNCTION 1428de580 FUN_1428de580 body=47 status=ok
// SIG undefined FUN_1428de580(void)

longlong FUN_1428de580(void)

{
  if (DAT_146b19de8 == 0) {
    FUN_141786a30(&DAT_146b19de8,&PTR_FUN_1465375b0);
  }
  return DAT_146b19de8;
}



// FUNCTION 1428de5b0 FUN_1428de5b0 body=47 status=ok
// SIG undefined FUN_1428de5b0(void)

longlong FUN_1428de5b0(void)

{
  if (DAT_146b19df0 == 0) {
    FUN_141786a30(&DAT_146b19df0,&PTR_FUN_1465375f0);
  }
  return DAT_146b19df0;
}



// FUNCTION 1428de5e0 FUN_1428de5e0 body=47 status=ok
// SIG undefined FUN_1428de5e0(void)

longlong FUN_1428de5e0(void)

{
  if (DAT_146b19df8 == 0) {
    FUN_141786a30(&DAT_146b19df8,&PTR_FUN_146537670);
  }
  return DAT_146b19df8;
}



// FUNCTION 1428de610 FUN_1428de610 body=47 status=ok
// SIG undefined FUN_1428de610(void)

longlong FUN_1428de610(void)

{
  if (DAT_146b19e00 == 0) {
    FUN_141786a30(&DAT_146b19e00,&PTR_FUN_146537770);
  }
  return DAT_146b19e00;
}



// FUNCTION 1428de640 FUN_1428de640 body=47 status=ok
// SIG undefined FUN_1428de640(void)

longlong FUN_1428de640(void)

{
  if (DAT_146b19e08 == 0) {
    FUN_141786a30(&DAT_146b19e08,&PTR_FUN_1465377f0);
  }
  return DAT_146b19e08;
}



// FUNCTION 1428de670 FUN_1428de670 body=47 status=ok
// SIG undefined FUN_1428de670(void)

longlong FUN_1428de670(void)

{
  if (DAT_146b19e10 == 0) {
    FUN_141786a30(&DAT_146b19e10,&PTR_FUN_146537870);
  }
  return DAT_146b19e10;
}



// FUNCTION 1428de6a0 FUN_1428de6a0 body=47 status=ok
// SIG undefined FUN_1428de6a0(void)

longlong FUN_1428de6a0(void)

{
  if (DAT_146b19e18 == 0) {
    FUN_141786a30(&DAT_146b19e18,&PTR_FUN_1465378f0);
  }
  return DAT_146b19e18;
}



// FUNCTION 1428de6d0 FUN_1428de6d0 body=47 status=ok
// SIG undefined FUN_1428de6d0(void)

longlong FUN_1428de6d0(void)

{
  if (DAT_146b19e20 == 0) {
    FUN_141786a30(&DAT_146b19e20,&PTR_FUN_146537970);
  }
  return DAT_146b19e20;
}



// FUNCTION 1428de700 FUN_1428de700 body=47 status=ok
// SIG undefined FUN_1428de700(void)

longlong FUN_1428de700(void)

{
  if (DAT_146b19e28 == 0) {
    FUN_141786a30(&DAT_146b19e28,&PTR_FUN_1465379f0);
  }
  return DAT_146b19e28;
}



// FUNCTION 1428de730 FUN_1428de730 body=47 status=ok
// SIG undefined FUN_1428de730(void)

longlong FUN_1428de730(void)

{
  if (DAT_146b19e30 == 0) {
    FUN_141786a30(&DAT_146b19e30,&PTR_FUN_146537a70);
  }
  return DAT_146b19e30;
}



// FUNCTION 1428de760 FUN_1428de760 body=47 status=ok
// SIG undefined FUN_1428de760(void)

longlong FUN_1428de760(void)

{
  if (DAT_146b19e38 == 0) {
    FUN_141786a30(&DAT_146b19e38,&PTR_FUN_146537af0);
  }
  return DAT_146b19e38;
}



// FUNCTION 1428de790 FUN_1428de790 body=47 status=ok
// SIG undefined FUN_1428de790(void)

longlong FUN_1428de790(void)

{
  if (DAT_146b19e40 == 0) {
    FUN_141786a30(&DAT_146b19e40,&PTR_FUN_146537b70);
  }
  return DAT_146b19e40;
}



// FUNCTION 1428de7c0 FUN_1428de7c0 body=47 status=ok
// SIG undefined FUN_1428de7c0(void)

longlong FUN_1428de7c0(void)

{
  if (DAT_146b19e48 == 0) {
    FUN_141786a30(&DAT_146b19e48,&PTR_FUN_146537bb0);
  }
  return DAT_146b19e48;
}



// FUNCTION 1428de7f0 FUN_1428de7f0 body=47 status=ok
// SIG undefined FUN_1428de7f0(void)

longlong FUN_1428de7f0(void)

{
  if (DAT_146b19e50 == 0) {
    FUN_141786a30(&DAT_146b19e50,&PTR_FUN_146537cb0);
  }
  return DAT_146b19e50;
}



// FUNCTION 1428de820 FUN_1428de820 body=47 status=ok
// SIG undefined FUN_1428de820(void)

longlong FUN_1428de820(void)

{
  if (DAT_146b19e58 == 0) {
    FUN_141786a30(&DAT_146b19e58,&PTR_FUN_146537db0);
  }
  return DAT_146b19e58;
}



// FUNCTION 1428de850 FUN_1428de850 body=47 status=ok
// SIG undefined FUN_1428de850(void)

longlong FUN_1428de850(void)

{
  if (DAT_146b19e60 == 0) {
    FUN_141786a30(&DAT_146b19e60,&PTR_FUN_146537eb0);
  }
  return DAT_146b19e60;
}



// FUNCTION 1428de880 FUN_1428de880 body=47 status=ok
// SIG undefined FUN_1428de880(void)

longlong FUN_1428de880(void)

{
  if (DAT_146b19e68 == 0) {
    FUN_141786a30(&DAT_146b19e68,&PTR_FUN_146538020);
  }
  return DAT_146b19e68;
}



// FUNCTION 1428de8b0 FUN_1428de8b0 body=47 status=ok
// SIG undefined FUN_1428de8b0(void)

longlong FUN_1428de8b0(void)

{
  if (DAT_146b19e70 == 0) {
    FUN_141786a30(&DAT_146b19e70,&PTR_FUN_1465380a0);
  }
  return DAT_146b19e70;
}



// FUNCTION 1428de8e0 FUN_1428de8e0 body=47 status=ok
// SIG undefined FUN_1428de8e0(void)

longlong FUN_1428de8e0(void)

{
  if (DAT_146b19e78 == 0) {
    FUN_141786a30(&DAT_146b19e78,&PTR_FUN_146538120);
  }
  return DAT_146b19e78;
}



// FUNCTION 1428de910 FUN_1428de910 body=47 status=ok
// SIG undefined FUN_1428de910(void)

longlong FUN_1428de910(void)

{
  if (DAT_146b19e80 == 0) {
    FUN_141786a30(&DAT_146b19e80,&PTR_FUN_1465381d0);
  }
  return DAT_146b19e80;
}



// FUNCTION 1428de940 FUN_1428de940 body=47 status=ok
// SIG undefined FUN_1428de940(void)

longlong FUN_1428de940(void)

{
  if (DAT_146b19e88 == 0) {
    FUN_141786a30(&DAT_146b19e88,&PTR_FUN_146538250);
  }
  return DAT_146b19e88;
}



// FUNCTION 1428de970 FUN_1428de970 body=47 status=ok
// SIG undefined FUN_1428de970(void)

longlong FUN_1428de970(void)

{
  if (DAT_146b19e90 == 0) {
    FUN_141786a30(&DAT_146b19e90,&PTR_FUN_146538340);
  }
  return DAT_146b19e90;
}



// FUNCTION 1428de9a0 FUN_1428de9a0 body=47 status=ok
// SIG undefined FUN_1428de9a0(void)

longlong FUN_1428de9a0(void)

{
  if (DAT_146b19e98 == 0) {
    FUN_141786a30(&DAT_146b19e98,&PTR_FUN_1465383c0);
  }
  return DAT_146b19e98;
}



// FUNCTION 1428de9d0 FUN_1428de9d0 body=47 status=ok
// SIG undefined FUN_1428de9d0(void)

longlong FUN_1428de9d0(void)

{
  if (DAT_146b19ea0 == 0) {
    FUN_141786a30(&DAT_146b19ea0,&PTR_FUN_146538470);
  }
  return DAT_146b19ea0;
}



// FUNCTION 1428dea00 FUN_1428dea00 body=47 status=ok
// SIG undefined FUN_1428dea00(void)

longlong FUN_1428dea00(void)

{
  if (DAT_146b19ea8 == 0) {
    FUN_141786a30(&DAT_146b19ea8,&PTR_FUN_146538530);
  }
  return DAT_146b19ea8;
}



// FUNCTION 1428dea30 FUN_1428dea30 body=47 status=ok
// SIG undefined FUN_1428dea30(void)

longlong FUN_1428dea30(void)

{
  if (DAT_146b19eb0 == 0) {
    FUN_141786a30(&DAT_146b19eb0,&PTR_FUN_1465385b0);
  }
  return DAT_146b19eb0;
}



// FUNCTION 1428dea60 FUN_1428dea60 body=47 status=ok
// SIG undefined FUN_1428dea60(void)

longlong FUN_1428dea60(void)

{
  if (DAT_146b19eb8 == 0) {
    FUN_141786a30(&DAT_146b19eb8,&PTR_FUN_146538630);
  }
  return DAT_146b19eb8;
}



// FUNCTION 1428dea90 FUN_1428dea90 body=47 status=ok
// SIG undefined FUN_1428dea90(void)

longlong FUN_1428dea90(void)

{
  if (DAT_146b19ec0 == 0) {
    FUN_141786a30(&DAT_146b19ec0,&PTR_FUN_1465386e0);
  }
  return DAT_146b19ec0;
}



// FUNCTION 1428deac0 FUN_1428deac0 body=47 status=ok
// SIG undefined FUN_1428deac0(void)

longlong FUN_1428deac0(void)

{
  if (DAT_146b19ec8 == 0) {
    FUN_141786a30(&DAT_146b19ec8,&PTR_FUN_146538760);
  }
  return DAT_146b19ec8;
}



// FUNCTION 1428deaf0 FUN_1428deaf0 body=47 status=ok
// SIG undefined FUN_1428deaf0(void)

longlong FUN_1428deaf0(void)

{
  if (DAT_146b19ed0 == 0) {
    FUN_141786a30(&DAT_146b19ed0,&PTR_FUN_146538860);
  }
  return DAT_146b19ed0;
}



// FUNCTION 1428deb20 FUN_1428deb20 body=47 status=ok
// SIG undefined FUN_1428deb20(void)

longlong FUN_1428deb20(void)

{
  if (DAT_146b19ed8 == 0) {
    FUN_141786a30(&DAT_146b19ed8,&PTR_FUN_1465388e0);
  }
  return DAT_146b19ed8;
}



// FUNCTION 1428deb50 FUN_1428deb50 body=47 status=ok
// SIG undefined FUN_1428deb50(void)

longlong FUN_1428deb50(void)

{
  if (DAT_146b19ee0 == 0) {
    FUN_141786a30(&DAT_146b19ee0,&PTR_FUN_146538960);
  }
  return DAT_146b19ee0;
}



// FUNCTION 1428deb80 FUN_1428deb80 body=47 status=ok
// SIG undefined FUN_1428deb80(void)

longlong FUN_1428deb80(void)

{
  if (DAT_146b19ee8 == 0) {
    FUN_141786a30(&DAT_146b19ee8,&PTR_FUN_1465389e0);
  }
  return DAT_146b19ee8;
}



// FUNCTION 1428debb0 FUN_1428debb0 body=47 status=ok
// SIG undefined FUN_1428debb0(void)

longlong FUN_1428debb0(void)

{
  if (DAT_146b19ef0 == 0) {
    FUN_141786a30(&DAT_146b19ef0,&PTR_FUN_146538a60);
  }
  return DAT_146b19ef0;
}



// FUNCTION 1428debe0 FUN_1428debe0 body=47 status=ok
// SIG undefined FUN_1428debe0(void)

longlong FUN_1428debe0(void)

{
  if (DAT_146b19ef8 == 0) {
    FUN_141786a30(&DAT_146b19ef8,&PTR_FUN_146538ae0);
  }
  return DAT_146b19ef8;
}



// FUNCTION 1428dec10 FUN_1428dec10 body=47 status=ok
// SIG undefined FUN_1428dec10(void)

longlong FUN_1428dec10(void)

{
  if (DAT_146b19f00 == 0) {
    FUN_141786a30(&DAT_146b19f00,&PTR_FUN_146538bd0);
  }
  return DAT_146b19f00;
}



// FUNCTION 1428dec40 FUN_1428dec40 body=47 status=ok
// SIG undefined FUN_1428dec40(void)

longlong FUN_1428dec40(void)

{
  if (DAT_146b19f08 == 0) {
    FUN_141786a30(&DAT_146b19f08,&PTR_FUN_146538c90);
  }
  return DAT_146b19f08;
}



// FUNCTION 1428dec70 FUN_1428dec70 body=47 status=ok
// SIG undefined FUN_1428dec70(void)

longlong FUN_1428dec70(void)

{
  if (DAT_146b19f10 == 0) {
    FUN_141786a30(&DAT_146b19f10,&PTR_FUN_146538d10);
  }
  return DAT_146b19f10;
}



// FUNCTION 1428deca0 FUN_1428deca0 body=47 status=ok
// SIG undefined FUN_1428deca0(void)

longlong FUN_1428deca0(void)

{
  if (DAT_146b19f18 == 0) {
    FUN_141786a30(&DAT_146b19f18,&PTR_FUN_146538d90);
  }
  return DAT_146b19f18;
}



// FUNCTION 1428decd0 FUN_1428decd0 body=47 status=ok
// SIG undefined FUN_1428decd0(void)

longlong FUN_1428decd0(void)

{
  if (DAT_146b19f20 == 0) {
    FUN_141786a30(&DAT_146b19f20,&PTR_FUN_146538e10);
  }
  return DAT_146b19f20;
}



// FUNCTION 1428ded00 FUN_1428ded00 body=47 status=ok
// SIG undefined FUN_1428ded00(void)

longlong FUN_1428ded00(void)

{
  if (DAT_146b19f28 == 0) {
    FUN_141786a30(&DAT_146b19f28,&PTR_FUN_146538ed0);
  }
  return DAT_146b19f28;
}



// FUNCTION 1428ded30 FUN_1428ded30 body=47 status=ok
// SIG undefined FUN_1428ded30(void)

longlong FUN_1428ded30(void)

{
  if (DAT_146b19f30 == 0) {
    FUN_141786a30(&DAT_146b19f30,&PTR_FUN_146538f90);
  }
  return DAT_146b19f30;
}



// FUNCTION 1428ded60 FUN_1428ded60 body=47 status=ok
// SIG undefined FUN_1428ded60(void)

longlong FUN_1428ded60(void)

{
  if (DAT_146b19f38 == 0) {
    FUN_141786a30(&DAT_146b19f38,&PTR_FUN_146539050);
  }
  return DAT_146b19f38;
}



// FUNCTION 1428ded90 FUN_1428ded90 body=47 status=ok
// SIG undefined FUN_1428ded90(void)

longlong FUN_1428ded90(void)

{
  if (DAT_146b19f40 == 0) {
    FUN_141786a30(&DAT_146b19f40,&PTR_FUN_146539110);
  }
  return DAT_146b19f40;
}



// FUNCTION 1428dedc0 FUN_1428dedc0 body=47 status=ok
// SIG undefined FUN_1428dedc0(void)

longlong FUN_1428dedc0(void)

{
  if (DAT_146b19f48 == 0) {
    FUN_141786a30(&DAT_146b19f48,&PTR_FUN_146539210);
  }
  return DAT_146b19f48;
}



// FUNCTION 1428dedf0 FUN_1428dedf0 body=47 status=ok
// SIG undefined FUN_1428dedf0(void)

longlong FUN_1428dedf0(void)

{
  if (DAT_146b19f50 == 0) {
    FUN_141786a30(&DAT_146b19f50,&PTR_FUN_1465393d0);
  }
  return DAT_146b19f50;
}



// FUNCTION 1428dee20 FUN_1428dee20 body=47 status=ok
// SIG undefined FUN_1428dee20(void)

longlong FUN_1428dee20(void)

{
  if (DAT_146b19f58 == 0) {
    FUN_141786a30(&DAT_146b19f58,&PTR_FUN_146539590);
  }
  return DAT_146b19f58;
}



// FUNCTION 1428dee50 FUN_1428dee50 body=47 status=ok
// SIG undefined FUN_1428dee50(void)

longlong FUN_1428dee50(void)

{
  if (DAT_146b19f60 == 0) {
    FUN_141786a30(&DAT_146b19f60,&PTR_FUN_146539750);
  }
  return DAT_146b19f60;
}



// FUNCTION 1428dee80 FUN_1428dee80 body=47 status=ok
// SIG undefined FUN_1428dee80(void)

longlong FUN_1428dee80(void)

{
  if (DAT_146b19f68 == 0) {
    FUN_141786a30(&DAT_146b19f68,&PTR_FUN_146539910);
  }
  return DAT_146b19f68;
}



// FUNCTION 1428deeb0 FUN_1428deeb0 body=47 status=ok
// SIG undefined FUN_1428deeb0(void)

longlong FUN_1428deeb0(void)

{
  if (DAT_146b19f70 == 0) {
    FUN_141786a30(&DAT_146b19f70,&PTR_FUN_146539ad0);
  }
  return DAT_146b19f70;
}



// FUNCTION 1428deee0 FUN_1428deee0 body=47 status=ok
// SIG undefined FUN_1428deee0(void)

longlong FUN_1428deee0(void)

{
  if (DAT_146b19f78 == 0) {
    FUN_141786a30(&DAT_146b19f78,&PTR_FUN_146539c90);
  }
  return DAT_146b19f78;
}



// FUNCTION 1428def10 FUN_1428def10 body=47 status=ok
// SIG undefined FUN_1428def10(void)

longlong FUN_1428def10(void)

{
  if (DAT_146b19f80 == 0) {
    FUN_141786a30(&DAT_146b19f80,&PTR_FUN_146539dd0);
  }
  return DAT_146b19f80;
}


