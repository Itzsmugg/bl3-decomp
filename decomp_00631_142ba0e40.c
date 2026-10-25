// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ba0e40 GetViewRelevance body=151 status=ok
// SIG undefined GetViewRelevance(void)

undefined8 *
FNavLinkRenderingProxy::GetViewRelevance(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff | 0x200;
  bVar1 = FUN_142730ad0(param_1,param_3);
  uVar2 = *(uint *)((longlong)param_2 + 4) & 0xffffffef | (uint)bVar1 << 4;
  *(uint *)((longlong)param_2 + 4) = (uVar2 >> 1 ^ uVar2) & 8 ^ uVar2;
  bVar1 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar1 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 142ba0ee0 GetViewRelevance body=100 status=ok
// SIG undefined GetViewRelevance(void)

undefined8 *
FNavTestSceneProxy::GetViewRelevance(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10 | 0x200;
  FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xffffffe7;
  return param_2;
}



// FUNCTION 142ba0f50 FUN_142ba0f50 body=91 status=ok
// SIG undefined FUN_142ba0f50(void)

undefined8 FUN_142ba0f50(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    do {
      cVar1 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0x228) + (longlong)iVar2 * 8);
      if (cVar1 != '\0') {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x230));
  }
  return 0;
}



// FUNCTION 142ba0fe0 FUN_142ba0fe0 body=5300 status=ok
// SIG undefined FUN_142ba0fe0(void)

void FUN_142ba0fe0(longlong param_1,float param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined4 *puVar27;
  float *pfVar28;
  void *_Src;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
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
  int local_res18;
  int local_res20;
  undefined4 *local_248;
  uint local_240;
  int local_23c;
  int local_238;
  float *local_230;
  float *local_228;
  int local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1d8;
  float fStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  longlong local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 *local_118;
  float local_108;
  float local_fc;
  undefined1 local_f8 [184];
  
  lVar15 = FWeakObjectPtr::Get(param_1 + 0x9c);
  iVar26 = 0;
  if (lVar15 != 0) {
    local_1a0 = lVar15;
    lVar16 = FUN_142bac770();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8
         ) != lVar16 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_142ba1060;
  }
  local_1a0 = 0;
LAB_142ba1060:
  iVar24 = *(int *)(param_1 + 0x30);
  if ((iVar24 != 0) && (iVar24 < 0x65)) {
    local_118 = (undefined8 *)(param_1 + 0x28);
    puVar22 = *(undefined8 **)(param_1 + 0x28);
    bVar12 = false;
    local_220 = 0;
    local_238 = 0;
    local_248 = (undefined4 *)0x0;
    local_240 = 0;
    local_23c = 0;
    uVar25 = 0;
    if (0 < iVar24 + 2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (&local_248);
      uVar25 = local_240;
    }
    local_1b8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_240 = uVar25 + 1;
    uVar7 = *puVar22;
    uVar3 = puVar22[1];
    fStack_1b0 = DAT_1468b5d98;
    uVar8 = puVar22[2];
    uVar9 = puVar22[3];
    fStack_1a4 = DAT_1468b5d98;
    fStack_1ac = DAT_1468b5d90;
    fStack_1a8 = DAT_1468b5d94;
    if (local_23c < (int)local_240) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_248,uVar25);
    }
    lVar15 = (longlong)(int)uVar25;
    pfVar18 = (float *)(puVar22 + 4);
    local_res20 = 1;
    local_res18 = 1;
    *(undefined8 *)(local_248 + lVar15 * 0xe) = uVar7;
    *(undefined8 *)((longlong)(local_248 + lVar15 * 0xe) + 8) = uVar3;
    *(undefined8 *)(local_248 + lVar15 * 0xe + 4) = uVar8;
    *(undefined8 *)((longlong)(local_248 + lVar15 * 0xe + 4) + 8) = uVar9;
    puVar27 = local_248 + lVar15 * 0xe + 8;
    *puVar27 = (undefined4)local_1b8;
    puVar27[1] = local_1b8._4_4_;
    puVar27[2] = fStack_1b0;
    puVar27[3] = fStack_1ac;
    *(ulonglong *)(local_248 + lVar15 * 0xe + 0xc) = CONCAT44(fStack_1a4,fStack_1a8);
    iVar24 = *(int *)(param_1 + 0x30);
    puVar27 = local_248;
    if (1 < iVar24 + -1) {
      local_230 = (float *)0x0;
      local_228 = (float *)(puVar22 + 8);
      uVar25 = local_240;
      do {
        pfVar28 = local_228;
        if (*(int *)(param_1 + 0x130) <= iVar26) break;
        if (((uint)pfVar18[6] & 4) == 0) {
          pfVar21 = (float *)((longlong)iVar26 * 0x20 + *(longlong *)(param_1 + 0x128));
          pfVar28 = local_230;
          do {
            fVar30 = (float)FMath::PointDistToSegmentSquared(pfVar18,pfVar21,pfVar21 + 3);
            if (fVar30 <= 9.999999e-09) {
              fVar44 = (*pfVar21 - *pfVar18) * (*pfVar21 - *pfVar18) +
                       (pfVar21[1] - pfVar18[1]) * (pfVar21[1] - pfVar18[1]) +
                       (pfVar21[2] - pfVar18[2]) * (pfVar21[2] - pfVar18[2]);
              fVar30 = (pfVar21[4] - pfVar18[1]) * (pfVar21[4] - pfVar18[1]) +
                       (pfVar21[3] - *pfVar18) * (pfVar21[3] - *pfVar18) +
                       (pfVar21[5] - pfVar18[2]) * (pfVar21[5] - pfVar18[2]);
              if ((fVar44 <= param_2 * param_2) || (fVar30 <= param_2 * param_2)) {
                bVar12 = true;
                uVar29 = (ulonglong)(fVar30 <= fVar44);
                pfVar21 = (float *)((longlong)pfVar28 * 0x20 + *(longlong *)(param_1 + 0x128));
                local_190 = pfVar21[uVar29 * 3 + 2];
                local_1b8 = *(undefined8 *)(pfVar21 + uVar29 * 3);
                uVar17 = (ulonglong)((fVar30 <= fVar44) - 1 & 1);
                local_198._4_4_ = (float)((ulonglong)local_1b8 >> 0x20);
                local_170 = pfVar21[uVar17 * 3 + 2];
                uVar7 = *(undefined8 *)(pfVar18 + 6);
                local_178 = *(undefined8 *)(pfVar21 + uVar17 * 3);
                fVar30 = SQRT((pfVar21[4] - pfVar21[1]) * (pfVar21[4] - pfVar21[1]) +
                              (pfVar21[3] - *pfVar21) * (pfVar21[3] - *pfVar21) +
                              (pfVar21[5] - pfVar21[2]) * (pfVar21[5] - pfVar21[2])) * 0.5;
                fVar32 = (float)local_178 - (float)local_1b8;
                fVar44 = (float)((ulonglong)local_178 >> 0x20) - local_198._4_4_;
                if (param_2 <= fVar30) {
                  fVar30 = param_2;
                }
                fVar41 = local_170 - local_190;
                fVar39 = fVar32 * fVar32 + fVar44 * fVar44 + fVar41 * fVar41;
                fVar35 = fVar44;
                fVar36 = fVar41;
                fVar37 = fVar32;
                if ((fVar39 != 1.0) &&
                   (fVar35 = DAT_1468b5d94, fVar36 = DAT_1468b5d98, fVar37 = DAT_1468b5d90,
                   1e-08 <= fVar39)) {
                  auVar34 = rsqrtss(ZEXT416((uint)fVar39),ZEXT416((uint)fVar39));
                  fVar37 = auVar34._0_4_;
                  fVar37 = fVar37 + fVar37 * (0.5 - fVar39 * 0.5 * fVar37 * fVar37);
                  fVar37 = fVar37 + fVar37 * (0.5 - fVar39 * 0.5 * fVar37 * fVar37);
                  local_230 = (float *)CONCAT44(local_230._4_4_,fVar37);
                  fVar35 = fVar44 * fVar37;
                  fVar36 = fVar41 * fVar37;
                  fVar37 = fVar32 * fVar37;
                }
                fVar32 = fVar35 * fVar30 + local_198._4_4_;
                local_240 = uVar25 + 1;
                fVar44 = fVar37 * fVar30 + (float)local_1b8;
                fStack_1ac = (float)*(undefined8 *)(pfVar21 + uVar17 * 3);
                fStack_1a8 = (float)((ulonglong)*(undefined8 *)(pfVar21 + uVar17 * 3) >> 0x20);
                fVar30 = fVar36 * fVar30 + local_190;
                uStack_210._4_4_ = (float)((ulonglong)*(undefined8 *)(pfVar18 + 2) >> 0x20);
                fVar35 = uStack_210._4_4_;
                uVar3 = *(undefined8 *)(pfVar21 + 6);
                fStack_1b0 = pfVar21[uVar29 * 3 + 2];
                fStack_1a4 = pfVar21[uVar17 * 3 + 2];
                local_208._0_4_ = (float)uVar3;
                fVar36 = (float)local_208;
                local_208._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                fVar37 = local_208._4_4_;
                uStack_200._0_4_ = (float)uVar7;
                fVar39 = (float)uStack_200;
                uStack_200._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
                fVar41 = uStack_200._4_4_;
                local_218 = (void *)CONCAT44(fVar32,fVar44);
                uStack_210 = CONCAT44(uStack_210._4_4_,fVar30);
                local_208 = uVar3;
                uStack_200 = uVar7;
                local_1f0 = fVar30;
                local_198 = local_1b8;
                if (local_23c < (int)local_240) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_248,uVar25);
                  puVar27 = local_248;
                }
                local_230 = (float *)((longlong)pfVar28 + 1);
                local_220 = iVar26 + 1;
                local_238 = local_238 + 1;
                iVar26 = local_220;
                goto LAB_142ba16fc;
              }
              local_220 = local_220 + 1;
              local_230 = (float *)((longlong)local_230 + 1);
              break;
            }
            pfVar21 = pfVar21 + 8;
            iVar26 = iVar26 + 1;
            pfVar28 = (float *)((longlong)pfVar28 + 1);
          } while (iVar26 < *(int *)(param_1 + 0x130));
          iVar26 = local_220;
          if (local_238 == 0) {
            uVar7 = *(undefined8 *)pfVar18;
            uVar3 = *(undefined8 *)(pfVar18 + 2);
            lVar15 = (longlong)(int)uVar25;
            uVar8 = *(undefined8 *)(pfVar18 + 4);
            uVar9 = *(undefined8 *)(pfVar18 + 6);
            local_160 = 0.0;
            local_240 = uVar25 + 1;
            local_1b8 = 0;
            local_180 = 0.0;
            fStack_1b0 = 0.0;
            fStack_1ac = 0.0;
            fStack_1a8 = 0.0;
            fStack_1a4 = 0.0;
            if (local_23c < (int)local_240) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_248,uVar25);
              puVar27 = local_248;
            }
            *(undefined8 *)(puVar27 + lVar15 * 0xe) = uVar7;
            *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe) + 8) = uVar3;
            *(undefined8 *)(puVar27 + lVar15 * 0xe + 4) = uVar8;
            *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8) = uVar9;
            puVar23 = puVar27 + lVar15 * 0xe + 8;
            *puVar23 = (undefined4)local_1b8;
            puVar23[1] = local_1b8._4_4_;
            puVar23[2] = fStack_1b0;
            puVar23[3] = fStack_1ac;
            *(ulonglong *)(puVar27 + lVar15 * 0xe + 0xc) = CONCAT44(fStack_1a4,fStack_1a8);
            uVar25 = local_240;
          }
          else {
            local_238 = 0;
          }
          pfVar18 = pfVar18 + 8;
          local_res18 = local_res18 + 1;
          local_228 = local_228 + 8;
        }
        else {
          uVar7 = *(undefined8 *)pfVar18;
          uVar3 = *(undefined8 *)(pfVar18 + 2);
          local_240 = uVar25 + 1;
          local_120 = 0.0;
          uVar8 = *(undefined8 *)(pfVar18 + 4);
          uVar9 = *(undefined8 *)(pfVar18 + 6);
          local_130 = 0.0;
          local_1b8 = 0;
          fStack_1b0 = 0.0;
          fStack_1ac = 0.0;
          fStack_1a8 = 0.0;
          fStack_1a4 = 0.0;
          uVar20 = local_240;
          if (local_23c < (int)local_240) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_248,uVar25);
            puVar27 = local_248;
            uVar20 = local_240;
          }
          uVar10 = CONCAT44(fStack_1ac,fStack_1b0);
          lVar15 = (longlong)(int)uVar25;
          local_240 = uVar20 + 1;
          uVar11 = CONCAT44(fStack_1a4,fStack_1a8);
          local_140 = 0.0;
          local_150 = 0.0;
          fStack_1b0 = 0.0;
          *(undefined8 *)(puVar27 + lVar15 * 0xe) = uVar7;
          *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe) + 8) = uVar3;
          fStack_1a4 = 0.0;
          *(undefined8 *)(puVar27 + lVar15 * 0xe + 4) = uVar8;
          *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8) = uVar9;
          *(undefined8 *)(puVar27 + lVar15 * 0xe + 8) = local_1b8;
          *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 8) + 8) = uVar10;
          *(undefined8 *)(puVar27 + lVar15 * 0xe + 0xc) = uVar11;
          fVar44 = *pfVar28;
          fVar32 = pfVar28[1];
          fVar30 = pfVar28[2];
          fVar35 = pfVar28[3];
          fVar36 = pfVar28[4];
          fVar37 = pfVar28[5];
          fVar39 = pfVar28[6];
          fVar41 = pfVar28[7];
          local_1b8 = 0;
          fStack_1ac = 0.0;
          fStack_1a8 = 0.0;
          if (local_23c < (int)local_240) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_248,uVar20);
            puVar27 = local_248;
          }
          local_res18 = local_res18 + 2;
          pfVar18 = pfVar18 + 0x10;
          local_228 = pfVar28 + 0x10;
          uVar25 = uVar20;
LAB_142ba16fc:
          lVar15 = (longlong)(int)uVar25;
          pfVar28 = (float *)(puVar27 + lVar15 * 0xe);
          *pfVar28 = fVar44;
          pfVar28[1] = fVar32;
          pfVar28[2] = fVar30;
          pfVar28[3] = fVar35;
          pfVar28 = (float *)(puVar27 + lVar15 * 0xe + 4);
          *pfVar28 = fVar36;
          pfVar28[1] = fVar37;
          pfVar28[2] = fVar39;
          pfVar28[3] = fVar41;
          puVar23 = puVar27 + lVar15 * 0xe + 8;
          *puVar23 = (undefined4)local_1b8;
          puVar23[1] = local_1b8._4_4_;
          puVar23[2] = fStack_1b0;
          puVar23[3] = fStack_1ac;
          *(ulonglong *)(puVar27 + lVar15 * 0xe + 0xc) = CONCAT44(fStack_1a4,fStack_1a8);
          uVar25 = local_240;
        }
        iVar24 = *(int *)(param_1 + 0x30);
      } while (local_res18 < iVar24 + -1);
      if (bVar12) {
        if (((int)uVar25 < 3) || ((*(byte *)(local_1a0 + 0x680) & 0x40) == 0)) {
          lVar15 = (longlong)*(int *)(param_1 + 0x30) * 0x20;
          puVar22 = (undefined8 *)(lVar15 + -0x20 + *(longlong *)(param_1 + 0x28));
          uVar7 = *puVar22;
          uVar3 = puVar22[1];
          puVar22 = (undefined8 *)(lVar15 + -0x10 + *(longlong *)(param_1 + 0x28));
          uVar8 = *puVar22;
          uVar9 = puVar22[1];
          *(undefined4 *)(param_1 + 0x30) = 0;
          if (0x7fffffff < *(uint *)(param_1 + 0x34)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
            ResizeTo(param_1 + 0x28,0);
          }
          if (0 < (int)uVar25) {
            uVar29 = (ulonglong)uVar25;
            puVar23 = puVar27;
            do {
              iVar26 = *(int *)(param_1 + 0x30);
              *(int *)(param_1 + 0x30) = iVar26 + 1;
              if (*(int *)(param_1 + 0x34) < iVar26 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(param_1 + 0x28,iVar26);
              }
              uVar4 = puVar23[1];
              uVar5 = puVar23[2];
              uVar6 = puVar23[3];
              lVar15 = *(longlong *)(param_1 + 0x28);
              puVar1 = (undefined4 *)((longlong)iVar26 * 0x20 + lVar15);
              *puVar1 = *puVar23;
              puVar1[1] = uVar4;
              puVar1[2] = uVar5;
              puVar1[3] = uVar6;
              puVar22 = (undefined8 *)(puVar23 + 4);
              uVar10 = *(undefined8 *)(puVar23 + 6);
              puVar23 = puVar23 + 0xe;
              puVar2 = (undefined8 *)((longlong)iVar26 * 0x20 + 0x10 + lVar15);
              *puVar2 = *puVar22;
              puVar2[1] = uVar10;
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
          }
          iVar26 = *(int *)(param_1 + 0x30);
          *(int *)(param_1 + 0x30) = iVar26 + 1;
          if (*(int *)(param_1 + 0x34) < iVar26 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 0x28,iVar26);
          }
          lVar15 = *(longlong *)(param_1 + 0x28);
          puVar22 = (undefined8 *)((longlong)iVar26 * 0x20 + lVar15);
          *puVar22 = uVar7;
          puVar22[1] = uVar3;
          puVar22 = (undefined8 *)((longlong)iVar26 * 0x20 + 0x10 + lVar15);
          *puVar22 = uVar8;
          puVar22[1] = uVar9;
        }
        else {
          uVar29 = 0;
          local_218 = (void *)0x0;
          uStack_210 = 0;
          if (0 < (int)(uVar25 + 2)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
            ResizeTo(&local_218);
            iVar24 = *(int *)(param_1 + 0x30);
            uVar29 = uStack_210 & 0xffffffff;
          }
          _Src = local_218;
          local_1b8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          fStack_1ac = DAT_1468b5d90;
          fStack_1a8 = DAT_1468b5d94;
          puVar22 = (undefined8 *)((longlong)iVar24 * 0x20 + -0x20 + *(longlong *)(param_1 + 0x28));
          uVar7 = *puVar22;
          uVar3 = puVar22[1];
          puVar22 = (undefined8 *)((longlong)iVar24 * 0x20 + -0x10 + *(longlong *)(param_1 + 0x28));
          uVar8 = *puVar22;
          uVar9 = puVar22[1];
          fStack_1b0 = DAT_1468b5d98;
          fStack_1a4 = DAT_1468b5d98;
          local_240 = uVar25 + 1;
          if (local_23c < (int)local_240) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_248,uVar25);
            puVar27 = local_248;
          }
          lVar15 = (longlong)(int)uVar25;
          iVar26 = 0;
          local_238 = 200;
          local_res18 = 0;
          *(undefined8 *)(puVar27 + lVar15 * 0xe) = uVar7;
          *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe) + 8) = uVar3;
          *(undefined8 *)(puVar27 + lVar15 * 0xe + 4) = uVar8;
          *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8) = uVar9;
          puVar23 = puVar27 + lVar15 * 0xe + 8;
          *puVar23 = (undefined4)local_1b8;
          puVar23[1] = local_1b8._4_4_;
          puVar23[2] = fStack_1b0;
          puVar23[3] = fStack_1ac;
          *(ulonglong *)(puVar27 + lVar15 * 0xe + 0xc) = CONCAT44(fStack_1a4,fStack_1a8);
          uVar25 = local_240;
          do {
            if ((iVar26 == local_res20) || (local_238 == 0)) {
              uVar25 = (uint)uStack_210._4_4_;
              if (-1 < (longlong)uStack_210) goto LAB_142ba2337;
LAB_142ba22eb:
              uStack_210 = (ulonglong)uVar25 << 0x20;
              if (uVar25 == 0) goto LAB_142ba2337;
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
              ResizeTo(&local_218,0);
              _Src = local_218;
              iVar24 = (uint)uStack_210;
              break;
            }
            bVar12 = true;
            local_230 = (float *)CONCAT44(local_230._4_4_,puVar27[(longlong)local_res18 * 0xe + 6]);
            lVar15 = (longlong)iVar26;
            uVar19 = (uint)puVar27[(longlong)local_res18 * 0xe + 6] >> 8;
            local_1a0 = CONCAT44(local_1a0._4_4_,uVar19);
            uVar20 = (uint)puVar27[lVar15 * 0xe + 6] >> 8;
            local_228 = (float *)CONCAT44(local_228._4_4_,uVar20);
            if ((puVar27[lVar15 * 0xe + 6] & 4) != 0) {
              if ((iVar26 < 0) || ((int)uVar25 <= iVar26)) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if ((bVar12) && (*(longlong *)(puVar27 + lVar15 * 0xe + 4) != 0)) {
                iVar24 = (int)uVar29;
                uVar25 = iVar24 + 1;
                uStack_210 = CONCAT44(uStack_210._4_4_,uVar25);
                if ((int)uStack_210._4_4_ < (int)uVar25) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeGrow(&local_218,uVar29);
                  _Src = local_218;
                  uVar25 = (uint)uStack_210;
                }
                uVar29 = (ulonglong)uVar25;
                puVar23 = puVar27 + lVar15 * 0xe;
                uVar4 = puVar23[1];
                uVar5 = puVar23[2];
                uVar6 = puVar23[3];
                lVar16 = (longlong)iVar24 * 0x20;
                puVar1 = (undefined4 *)(lVar16 + (longlong)_Src);
                *puVar1 = *puVar23;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                uVar7 = *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8);
                puVar22 = (undefined8 *)(lVar16 + 0x10 + (longlong)_Src);
                *puVar22 = *(undefined8 *)(puVar27 + lVar15 * 0xe + 4);
                puVar22[1] = uVar7;
                uVar25 = local_240;
              }
              local_res18 = iVar26 + 1;
              if ((local_res18 < 0) || ((int)uVar25 <= local_res18)) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if ((bVar12) &&
                 (lVar15 = (longlong)iVar26 + 1, *(longlong *)(puVar27 + lVar15 * 0xe + 4) != 0)) {
                iVar24 = (int)uVar29;
                uVar25 = iVar24 + 1;
                uStack_210 = CONCAT44(uStack_210._4_4_,uVar25);
                if ((int)uStack_210._4_4_ < (int)uVar25) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeGrow(&local_218,uVar29);
                  _Src = local_218;
                  uVar25 = (uint)uStack_210;
                }
                uVar29 = (ulonglong)uVar25;
                puVar23 = puVar27 + lVar15 * 0xe;
                uVar4 = puVar23[1];
                uVar5 = puVar23[2];
                uVar6 = puVar23[3];
                lVar16 = (longlong)iVar24 * 0x20;
                puVar1 = (undefined4 *)(lVar16 + (longlong)_Src);
                *puVar1 = *puVar23;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                uVar7 = *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8);
                puVar22 = (undefined8 *)(lVar16 + 0x10 + (longlong)_Src);
                *puVar22 = *(undefined8 *)(puVar27 + lVar15 * 0xe + 4);
                puVar22[1] = uVar7;
              }
              local_res20 = iVar26 + 2;
              bVar12 = false;
              uVar25 = local_240;
              uVar19 = (uint)local_1a0;
              uVar20 = (uint)local_228;
              iVar26 = local_res18;
            }
            pfVar18 = (float *)0x0;
            bVar13 = false;
            if ((((ulonglong)local_230 & 4) == 0) && ((char)uVar20 == (char)uVar19)) {
              fVar35 = 3.4028235e+38;
              local_1d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              fVar36 = 3.4028235e+38;
              fStack_1d0 = DAT_1468b5d98;
              local_160 = DAT_1468b5d98;
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_230 = (float *)0x0;
              local_1f0 = (float)puVar27[(longlong)iVar26 * 0xe + 2];
              local_1f8 = *(undefined8 *)(puVar27 + (longlong)iVar26 * 0xe);
              local_1e0 = (float)puVar27[(longlong)local_res20 * 0xe + 2];
              local_1e8 = *(undefined8 *)(puVar27 + (longlong)local_res20 * 0xe);
              local_228 = (float *)0x0;
              pfVar28 = pfVar18;
              fVar30 = DAT_1468b5d90;
              fVar44 = DAT_1468b5d94;
              fVar32 = DAT_1468b5d98;
              local_168 = local_1d8;
              if (0 < *(int *)(param_1 + 0x130)) {
                do {
                  pfVar21 = (float *)((longlong)(int)pfVar28 * 0x20 + *(longlong *)(param_1 + 0x128)
                                     );
                  if ((9.999999e-09 < fVar35) &&
                     (fVar30 = (float)FMath::PointDistToSegmentSquared
                                                (&local_1f8,pfVar21,pfVar21 + 3),
                     pfVar18 = local_228, fVar30 < fVar35)) {
                    fVar35 = fVar30;
                    local_230 = pfVar21;
                  }
                  if ((9.999999e-09 < fVar36) &&
                     (fVar30 = (float)FMath::PointDistToSegmentSquared
                                                (&local_1e8,pfVar21,pfVar21 + 3),
                     pfVar18 = local_228, fVar30 < fVar36)) {
                    pfVar18 = pfVar21;
                    fVar36 = fVar30;
                    local_228 = pfVar21;
                  }
                  pfVar21 = local_228;
                  uVar25 = (int)pfVar28 + 1;
                  pfVar28 = (float *)(ulonglong)uVar25;
                } while ((int)uVar25 < *(int *)(param_1 + 0x130));
                fVar30 = DAT_1468b5d90;
                fVar44 = DAT_1468b5d94;
                fVar32 = DAT_1468b5d98;
                if ((local_230 != (float *)0x0) && (pfVar18 != (float *)0x0)) {
                  pfVar28 = local_230 + 8;
                  if (9.999999e-09 < fVar35) {
                    pfVar28 = local_230;
                  }
                  if (pfVar28 != pfVar18) {
                    fVar36 = (float)local_1f8 - (float)local_1e8;
                    fVar37 = local_1f8._4_4_ - local_1e8._4_4_;
                    fVar39 = local_1f0 - local_1e0;
                    fVar35 = fVar36 * fVar36 + fVar37 * fVar37 + fVar39 * fVar39;
                    fVar30 = fVar36;
                    fVar44 = fVar37;
                    fVar32 = fVar39;
                    if ((fVar35 != 1.0) &&
                       (fVar30 = DAT_1468b5d90, fVar44 = DAT_1468b5d94, fVar32 = DAT_1468b5d98,
                       1e-08 <= fVar35)) {
                      auVar34 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
                      fVar32 = auVar34._0_4_;
                      fVar32 = fVar32 + fVar32 * (0.5 - fVar35 * 0.5 * fVar32 * fVar32);
                      fVar32 = fVar32 + fVar32 * (0.5 - fVar35 * 0.5 * fVar32 * fVar32);
                      local_230 = (float *)CONCAT44(local_230._4_4_,fVar32);
                      fVar30 = fVar32 * fVar36;
                      fVar44 = fVar32 * fVar37;
                      fVar32 = fVar32 * fVar39;
                    }
                    local_1f0 = fVar32 * param_2 + local_1f0;
                    local_1e0 = local_1e0 - fVar32 * param_2;
                    local_1f8 = CONCAT44(fVar44 * param_2 + local_1f8._4_4_,
                                         fVar30 * param_2 + (float)local_1f8);
                    local_1e8 = CONCAT44(local_1e8._4_4_ - fVar44 * param_2,
                                         (float)local_1e8 - fVar30 * param_2);
                    if (pfVar28 <= pfVar18) {
                      do {
                        local_180 = pfVar28[2];
                        local_188 = *(undefined8 *)pfVar28;
                        local_190 = pfVar28[5];
                        local_198 = *(undefined8 *)(pfVar28 + 3);
                        cVar14 = FMath::SegmentIntersection2D
                                           (&local_188,&local_198,&local_1f8,&local_1e8,&local_168);
                        if (cVar14 == '\0') {
                          fVar30 = pfVar28[1];
                          local_180 = pfVar28[2];
                          fVar42 = fVar30 - pfVar28[4];
                          fVar44 = *pfVar28;
                          fVar43 = local_180 - pfVar28[5];
                          local_230 = (float *)CONCAT44(local_230._4_4_,fVar30);
                          fVar41 = fVar44 - pfVar28[3];
                          local_228 = (float *)CONCAT44(local_228._4_4_,local_180);
                          fVar36 = pfVar28[3] - fVar44;
                          fVar39 = pfVar28[5] - local_180;
                          fVar37 = pfVar28[4] - fVar30;
                          fVar35 = fVar41 * fVar41 + fVar42 * fVar42 + fVar43 * fVar43;
                          fVar32 = SQRT(fVar35) * 0.5;
                          if (param_2 <= SQRT(fVar35) * 0.5) {
                            fVar32 = param_2;
                          }
                          fVar32 = fVar32 * 0.1;
                          fVar31 = fVar36 * fVar36 + fVar37 * fVar37 + fVar39 * fVar39;
                          fVar38 = fVar36;
                          fVar40 = fVar37;
                          fVar33 = fVar39;
                          if ((fVar31 != 1.0) &&
                             (fVar38 = DAT_1468b5d90, fVar40 = DAT_1468b5d94, fVar33 = DAT_1468b5d98
                             , 1e-08 <= fVar31)) {
                            auVar34 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                            fVar33 = auVar34._0_4_;
                            fVar33 = fVar33 + fVar33 * (0.5 - fVar31 * 0.5 * fVar33 * fVar33);
                            fVar33 = fVar33 + fVar33 * (0.5 - fVar31 * 0.5 * fVar33 * fVar33);
                            local_1a0 = CONCAT44(local_1a0._4_4_,fVar33);
                            fVar38 = fVar33 * fVar36;
                            fVar40 = fVar33 * fVar37;
                            fVar33 = fVar33 * fVar39;
                          }
                          fVar44 = fVar44 + fVar32 * fVar38;
                          fVar30 = fVar30 + fVar32 * fVar40;
                          local_180 = local_180 + fVar32 * fVar33;
                          local_188 = CONCAT44(fVar30,fVar44);
                          fVar36 = fVar41;
                          fVar37 = fVar42;
                          fVar39 = fVar43;
                          if ((fVar35 != 1.0) &&
                             (fVar36 = DAT_1468b5d90, fVar37 = DAT_1468b5d94, fVar39 = DAT_1468b5d98
                             , 1e-08 <= fVar35)) {
                            auVar34 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
                            fVar39 = auVar34._0_4_;
                            fVar39 = fVar39 + fVar39 * (0.5 - fVar35 * 0.5 * fVar39 * fVar39);
                            fVar39 = fVar39 + fVar39 * (0.5 - fVar35 * 0.5 * fVar39 * fVar39);
                            local_230 = (float *)CONCAT44(local_230._4_4_,fVar39);
                            fVar36 = fVar39 * fVar41;
                            fVar37 = fVar39 * fVar42;
                            fVar39 = fVar39 * fVar43;
                          }
                          local_158 = CONCAT44(fVar30,fVar44);
                          fVar30 = fVar32 * fVar36 + pfVar28[3];
                          fVar44 = fVar32 * fVar37 + pfVar28[4];
                          local_190 = fVar32 * fVar39 + pfVar28[5];
                          local_198 = CONCAT44(fVar44,fVar30);
                          local_148 = CONCAT44(fVar44,fVar30);
                          local_138 = local_1e8;
                          local_130 = local_1e0;
                          local_120 = local_1f0;
                          local_128 = local_1f8;
                          local_150 = local_180;
                          local_140 = local_190;
                          local_108 = local_180;
                          local_fc = local_190;
                          FMath::SegmentDistToSegment
                                    (&local_128,&local_138,&local_148,&local_158,local_f8,&local_178
                                    );
                          local_1b8 = *(undefined8 *)pfVar28;
                          fStack_1b0 = pfVar28[2];
                          fStack_1a4 = pfVar28[5];
                          fStack_1ac = (float)*(undefined8 *)(pfVar28 + 3);
                          fStack_1a8 = (float)((ulonglong)*(undefined8 *)(pfVar28 + 3) >> 0x20);
                          fVar30 = (float)local_178;
                          fVar44 = local_178._4_4_;
                          fVar32 = local_170;
                          goto LAB_142ba1fd3;
                        }
                        pfVar28 = pfVar28 + 8;
                      } while (pfVar28 <= pfVar21);
                      bVar13 = true;
                      uVar25 = local_240;
                      goto LAB_142ba20b0;
                    }
                  }
                  bVar13 = true;
                  uVar25 = local_240;
                  goto LAB_142ba20b0;
                }
              }
LAB_142ba1fd3:
              uVar25 = local_240;
              local_1d8 = CONCAT44(fVar44,fVar30);
              if (((0.0001 < ABS(fVar30)) || (0.0001 < ABS(fVar44))) || (0.0001 < ABS(fVar32))) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
              fStack_1d0 = fVar32;
              if (bVar13) {
                uVar25 = (uint)uStack_210._4_4_;
                if ((longlong)uStack_210 < 0) goto LAB_142ba22eb;
                goto LAB_142ba2337;
              }
              lVar15 = (longlong)local_res18;
              bVar13 = false;
              if (iVar26 == local_res18) {
                local_res18 = iVar26 + 1;
                uStack_1c0 = CONCAT44(uStack_1c0._4_4_,puVar27[lVar15 * 0xe + 6]);
                local_240 = local_240 + 1;
                if (local_23c < (int)local_240) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_248,uVar25);
                  puVar27 = local_248;
                }
                puVar22 = (undefined8 *)(puVar27 + (longlong)local_res18 * 0xe);
                _guard_xfg_dispatch_icall_nop
                          (puVar22 + 7,puVar22,(longlong)(int)(uVar25 - local_res18) * 0x38);
                bVar13 = false;
                *puVar22 = local_1d8;
                puVar22[1] = CONCAT44(uStack_1cc,fStack_1d0);
                puVar22[2] = local_1c8;
                puVar22[3] = uStack_1c0;
                *(undefined4 *)(puVar22 + 4) = (undefined4)local_1b8;
                *(undefined4 *)((longlong)puVar22 + 0x24) = local_1b8._4_4_;
                *(float *)(puVar22 + 5) = fStack_1b0;
                *(float *)((longlong)puVar22 + 0x2c) = fStack_1ac;
                puVar22[6] = CONCAT44(fStack_1a4,fStack_1a8);
                uVar25 = local_240;
              }
            }
LAB_142ba20b0:
            iVar24 = local_res20;
            if (bVar12) {
              iVar24 = (int)uVar29;
              if (bVar13) {
                if ((iVar26 < 0) || ((int)uVar25 <= iVar26)) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if ((bVar12) &&
                   (lVar15 = (longlong)iVar26, *(longlong *)(puVar27 + lVar15 * 0xe + 4) != 0)) {
                  uVar20 = iVar24 + 1;
                  uStack_210 = CONCAT44(uStack_210._4_4_,uVar20);
                  if ((int)uStack_210._4_4_ < (int)uVar20) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                    ::ResizeGrow(&local_218,uVar29);
                    _Src = local_218;
                    uVar20 = (uint)uStack_210;
                  }
                  uVar29 = (ulonglong)uVar20;
                  puVar23 = puVar27 + lVar15 * 0xe;
                  uVar4 = puVar23[1];
                  uVar5 = puVar23[2];
                  uVar6 = puVar23[3];
                  puVar1 = (undefined4 *)((longlong)iVar24 * 0x20 + (longlong)_Src);
                  *puVar1 = *puVar23;
                  puVar1[1] = uVar4;
                  puVar1[2] = uVar5;
                  puVar1[3] = uVar6;
                  uVar7 = *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8);
                  puVar22 = (undefined8 *)((longlong)iVar24 * 0x20 + 0x10 + (longlong)_Src);
                  *puVar22 = *(undefined8 *)(puVar27 + lVar15 * 0xe + 4);
                  puVar22[1] = uVar7;
                }
                local_res18 = local_res20;
                iVar24 = local_res20 + 1;
                iVar26 = local_res20;
              }
              else {
                if ((iVar26 < 0) || ((int)uVar25 <= iVar26)) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if ((bVar12) &&
                   (lVar15 = (longlong)iVar26, *(longlong *)(puVar27 + lVar15 * 0xe + 4) != 0)) {
                  uVar20 = iVar24 + 1;
                  uStack_210 = CONCAT44(uStack_210._4_4_,uVar20);
                  if ((int)uStack_210._4_4_ < (int)uVar20) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                    ::ResizeGrow(&local_218,uVar29);
                    _Src = local_218;
                    uVar20 = (uint)uStack_210;
                  }
                  uVar29 = (ulonglong)uVar20;
                  puVar23 = puVar27 + lVar15 * 0xe;
                  uVar4 = puVar23[1];
                  uVar5 = puVar23[2];
                  uVar6 = puVar23[3];
                  puVar1 = (undefined4 *)((longlong)iVar24 * 0x20 + (longlong)_Src);
                  *puVar1 = *puVar23;
                  puVar1[1] = uVar4;
                  puVar1[2] = uVar5;
                  puVar1[3] = uVar6;
                  uVar7 = *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8);
                  puVar22 = (undefined8 *)((longlong)iVar24 * 0x20 + 0x10 + (longlong)_Src);
                  *puVar22 = *(undefined8 *)(puVar27 + lVar15 * 0xe + 4);
                  puVar22[1] = uVar7;
                }
                iVar24 = local_res18 + 1;
                iVar26 = local_res18;
              }
            }
            local_res20 = iVar24;
            iVar24 = (int)uVar29;
            if ((int)(uVar25 - 1) < local_res20) {
              if ((iVar26 < 0) || ((int)uVar25 <= iVar26)) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if ((bVar12) &&
                 (lVar15 = (longlong)iVar26, *(longlong *)(puVar27 + lVar15 * 0xe + 4) != 0)) {
                uVar20 = iVar24 + 1;
                uStack_210 = CONCAT44(uStack_210._4_4_,uVar20);
                if ((int)uStack_210._4_4_ < (int)uVar20) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeGrow(&local_218,uVar29);
                  _Src = local_218;
                  uVar20 = (uint)uStack_210;
                }
                uVar29 = (ulonglong)uVar20;
                puVar23 = puVar27 + lVar15 * 0xe;
                uVar4 = puVar23[1];
                uVar5 = puVar23[2];
                uVar6 = puVar23[3];
                puVar1 = (undefined4 *)((longlong)iVar24 * 0x20 + (longlong)_Src);
                *puVar1 = *puVar23;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                uVar7 = *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8);
                puVar22 = (undefined8 *)((longlong)iVar24 * 0x20 + 0x10 + (longlong)_Src);
                *puVar22 = *(undefined8 *)(puVar27 + lVar15 * 0xe + 4);
                puVar22[1] = uVar7;
              }
              iVar26 = uVar25 - 1;
              iVar24 = (int)uVar29;
              if ((iVar26 < 0) || ((int)uVar25 <= iVar26)) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if ((bVar12) &&
                 (lVar15 = (longlong)iVar26, *(longlong *)(puVar27 + lVar15 * 0xe + 4) != 0)) {
                iVar26 = iVar24 + 1;
                uStack_210 = CONCAT44(uStack_210._4_4_,iVar26);
                if ((int)uStack_210._4_4_ < iVar26) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeGrow(&local_218,uVar29);
                  _Src = local_218;
                  iVar26 = (uint)uStack_210;
                }
                puVar23 = puVar27 + lVar15 * 0xe;
                uVar4 = puVar23[1];
                uVar5 = puVar23[2];
                uVar6 = puVar23[3];
                puVar1 = (undefined4 *)((longlong)iVar24 * 0x20 + (longlong)_Src);
                *puVar1 = *puVar23;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                uVar7 = *(undefined8 *)((longlong)(puVar27 + lVar15 * 0xe + 4) + 8);
                puVar22 = (undefined8 *)((longlong)iVar24 * 0x20 + 0x10 + (longlong)_Src);
                *puVar22 = *(undefined8 *)(puVar27 + lVar15 * 0xe + 4);
                puVar22[1] = uVar7;
                iVar24 = iVar26;
              }
              break;
            }
            local_238 = local_238 + -1;
          } while (-1 < local_238);
          puVar22 = local_118;
          if ((iVar24 != 0) && (local_118 != &local_218)) {
            *(int *)(local_118 + 1) = iVar24;
            TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy
                      (local_118,iVar24,*(undefined4 *)((longlong)local_118 + 0xc));
            _guard_xfg_dispatch_icall_nop((void *)*puVar22,_Src,(longlong)iVar24 << 5);
          }
LAB_142ba2337:
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
        }
      }
    }
    if (puVar27 != (undefined4 *)0x0) {
      FMemory::Free(puVar27);
    }
  }
  return;
}



// FUNCTION 142ba24a0 OnLinkMoveFinished body=249 status=ok
// SIG undefined OnLinkMoveFinished(void)

void UNavLinkCustomComponent::OnLinkMoveFinished(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  FWeakObjectPtr::operator=(local_res8);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != 0) {
    iVar5 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(undefined8 *)(param_1 + 0x80),local_res8);
    bVar6 = cVar3 == '\0';
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 8,local_res8);
      } while (bVar6 == (cVar3 == '\0'));
      if (bVar6 != false) {
        if (iVar5 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar5 * 8),
                     (void *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar4 * 8),
                     (longlong)(iVar2 - iVar4) << 3);
        }
        iVar5 = iVar5 + (iVar2 - iVar4);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar4 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0x88) = iVar5;
  }
  return;
}



// FUNCTION 142ba25a0 FUN_142ba25a0 body=194 status=ok
// SIG undefined FUN_142ba25a0(void)

undefined8 FUN_142ba25a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  iVar2 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar2 + 1;
  if (*(int *)(param_1 + 0x8c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x80,iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 8);
  *puVar1 = local_res8;
  puVar1[1] = local_resc;
  if (((*(int *)(param_1 + 0x98) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x98) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x90);
    }
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + -0x1a8,param_2,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 142ba2670 FUN_142ba2670 body=54 status=ok
// SIG undefined FUN_142ba2670(void)

void FUN_142ba2670(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_142ba6330();
  if (*(int *)(param_1 + 0x1b0) == 0) {
    uVar1 = UMovieSceneEntitySystemLinker::RegisterExtension();
    *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  }
  UNavigationSystemV1::RequestCustomLinkRegistering(param_1 + 0x1a8,param_1);
  return;
}



// FUNCTION 142ba26b0 FUN_142ba26b0 body=34 status=ok
// SIG undefined FUN_142ba26b0(void)

void FUN_142ba26b0(longlong param_1)

{
  FUN_142ba6400();
  FUN_142b96af0(param_1 + 0x1a8,param_1);
  return;
}



// FUNCTION 142ba26e0 FUN_142ba26e0 body=30 status=ok
// SIG undefined FUN_142ba26e0(void)

void FUN_142ba26e0(longlong param_1)

{
  FUN_142349c80();
  FUN_142b9ac40(*(undefined4 *)(param_1 + 0x1b0));
  return;
}



// FUNCTION 142ba2700 FUN_142ba2700 body=137 status=ok
// SIG undefined FUN_142ba2700(void)

void FUN_142ba2700(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x138), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((char)param_1[0x25] == '\x03')) {
      (**(code **)(*plVar1 + 0x310))(plVar1,param_1);
    }
  }
  return;
}



// FUNCTION 142ba2790 FUN_142ba2790 body=125 status=ok
// SIG undefined FUN_142ba2790(void)

void FUN_142ba2790(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x138), lVar2 != 0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((char)param_1[0x25] == '\x03')) {
      FUN_142b91e90(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 142ba2810 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x44,0);
  iVar4 = (int)(uVar3 / 0x44);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x44,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 142ba28a0 ResizeTo body=124 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x38,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 5);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x38,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 142ba2920 FUN_142ba2920 body=252 status=ok
// SIG undefined FUN_142ba2920(void)

void FUN_142ba2920(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint local_res10 [2];
  undefined4 local_res18 [2];
  
  AActor::Serialize();
  plVar1 = (longlong *)param_2[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res10[0] = 0;
  lVar2 = (**(code **)(*param_2 + 0x90))(param_2);
  plVar1 = (longlong *)param_2[1];
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    (**(code **)(*param_2 + 0xa8))(param_2,(ulonglong)local_res10[0] + lVar2);
    (**(code **)(*param_1 + 0x6f0))(param_1);
  }
  return;
}



// FUNCTION 142ba2a20 FUN_142ba2a20 body=405 status=ok
// SIG undefined FUN_142ba2a20(void)

void FUN_142ba2a20(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res10 [2];
  longlong local_res18;
  
  FUN_141763960();
  plVar1 = (longlong *)param_2[1];
  local_res10[0] = 0xd;
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res18 = 0;
  lVar2 = (**(code **)(*param_2 + 0x90))(param_2);
  plVar1 = (longlong *)param_2[1];
  if ((longlong *)plVar1[1] < (longlong *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res18,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res18,8);
    }
  }
  else {
    local_res18 = *(longlong *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    (**(code **)(*param_2 + 0xa8))(param_2,local_res18 + lVar2);
    return;
  }
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    lVar3 = (**(code **)(*param_2 + 0x90))(param_2);
    local_res18 = lVar3 - lVar2;
    (**(code **)(*param_2 + 0xa8))(param_2,lVar2);
    plVar1 = (longlong *)param_2[1];
    if ((longlong *)plVar1[1] < (longlong *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_res18,8);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_res18,8);
      }
    }
    else {
      local_res18 = *(longlong *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    (**(code **)(*param_2 + 0xa8))(param_2,lVar3);
  }
  return;
}



// FUNCTION 142ba2bc0 FUN_142ba2bc0 body=296 status=ok
// SIG undefined FUN_142ba2bc0(void)

void FUN_142ba2bc0(longlong param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((*(uint *)(param_1 + 0x1e4) & 1) != (param_2 & 0xff)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe | param_2 & 0xff;
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x138), lVar3 != 0)) {
      lVar4 = FUN_142ba9430();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_142b9a190(lVar3,param_1 + 0x1a8);
      }
    }
    if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      FUN_142880530(uVar5,param_1 + 0x248);
      *(undefined8 *)(param_1 + 0x248) = 0;
      uVar1 = *(uint *)(param_1 + 0x1e4);
      if ((((byte)uVar1 & 3) == 3) || (((uVar1 & 1) == 0 && ((uVar1 & 4) != 0)))) {
        FUN_142b9ca30(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142ba2cf0 FUN_142ba2cf0 body=103 status=ok
// SIG undefined FUN_142ba2cf0(void)

void FUN_142ba2cf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x238);
  if (param_2 != plVar1) {
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142ba2d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x30))(param_2,plVar1);
      return;
    }
    if ((*(int *)(param_1 + 0x240) != 0) &&
       (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      *(undefined4 *)(param_1 + 0x240) = 0;
    }
  }
  return;
}



// FUNCTION 142ba2d60 FUN_142ba2d60 body=622 status=ok
// SIG undefined FUN_142ba2d60(void)

void FUN_142ba2d60(longlong param_1,float *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  longlong lVar7;
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
  undefined8 uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  int iVar21;
  float *pfVar22;
  longlong lVar23;
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
  undefined1 local_res18 [8];
  float fStack_6c;
  
  lVar23 = *param_3;
  iVar21 = 0;
  if (0 < (int)param_3[1]) {
    pfVar22 = (float *)(lVar23 + 0x40);
    do {
      fVar8 = *param_2;
      fVar9 = param_2[1];
      fVar10 = param_2[2];
      fVar11 = param_2[3];
      fVar30 = pfVar22[-2] * param_2[8];
      fVar32 = pfVar22[-1] * param_2[9];
      fVar34 = *pfVar22 * param_2[10];
      fVar24 = fVar34 * fVar9 - fVar32 * fVar10;
      fVar26 = fVar30 * fVar10 - fVar34 * fVar8;
      fVar28 = fVar32 * fVar8 - fVar30 * fVar9;
      fVar24 = fVar24 + fVar24;
      fVar26 = fVar26 + fVar26;
      fVar28 = fVar28 + fVar28;
      fVar12 = param_2[4];
      fVar13 = param_2[5];
      fVar14 = param_2[6];
      fVar31 = pfVar22[1] * param_2[8];
      fVar33 = pfVar22[2] * param_2[9];
      fVar35 = pfVar22[3] * param_2[10];
      fVar25 = fVar35 * fVar9 - fVar33 * fVar10;
      fVar27 = fVar31 * fVar10 - fVar35 * fVar8;
      fVar29 = fVar33 * fVar8 - fVar31 * fVar9;
      fVar25 = fVar25 + fVar25;
      fVar27 = fVar27 + fVar27;
      fVar29 = fVar29 + fVar29;
      fVar15 = param_2[4];
      fVar16 = param_2[5];
      fVar17 = param_2[6];
      bVar3 = *(byte *)(pfVar22 + -0xe);
      uVar18 = FUN_14222e1e0(lVar23);
      puVar19 = (undefined4 *)FUN_142b8e400(local_res18,uVar18);
      fVar2 = pfVar22[-0xc];
      uVar4 = *puVar19;
      if (((uint)pfVar22[-8] & 1) == 0) {
        fStack_6c = -1.0;
      }
      else {
        fStack_6c = pfVar22[-0xb];
      }
      iVar5 = *(int *)(param_1 + 0x3b8);
      fVar6 = pfVar22[-10];
      *(int *)(param_1 + 0x3b8) = iVar5 + 1;
      if (*(int *)(param_1 + 0x3bc) < iVar5 + 1) {
        TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x3b0),iVar5);
      }
      lVar7 = *(longlong *)(param_1 + 0x3b0);
      iVar21 = iVar21 + 1;
      lVar23 = lVar23 + 0x50;
      pfVar22 = pfVar22 + 0x14;
      lVar20 = (longlong)iVar5 * 0x2c;
      *(undefined8 *)(lVar20 + lVar7) =
           CONCAT44((fVar24 * fVar10 - fVar28 * fVar8) + fVar11 * fVar26 + fVar32 + fVar13,
                    (fVar28 * fVar9 - fVar26 * fVar10) + fVar11 * fVar24 + fVar30 + fVar12);
      ((undefined8 *)(lVar20 + lVar7))[1] =
           CONCAT44((fVar29 * fVar9 - fVar27 * fVar10) + fVar11 * fVar25 + fVar31 + fVar15,
                    (fVar26 * fVar8 - fVar24 * fVar9) + fVar11 * fVar28 + fVar34 + fVar14);
      puVar1 = (undefined8 *)(lVar20 + 0x10 + lVar7);
      *puVar1 = CONCAT44((fVar27 * fVar8 - fVar25 * fVar9) + fVar11 * fVar29 + fVar35 + fVar17,
                         (fVar25 * fVar10 - fVar29 * fVar8) + fVar11 * fVar27 + fVar33 + fVar16);
      puVar1[1] = CONCAT44(uVar4,(uint)bVar3);
      *(ulonglong *)(lVar20 + 0x20 + lVar7) = CONCAT44(fStack_6c,fVar2);
      *(float *)(lVar20 + 0x28 + lVar7) = fVar6;
    } while (iVar21 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 142ba2fd0 FUN_142ba2fd0 body=909 status=ok
// SIG undefined FUN_142ba2fd0(void)

void FUN_142ba2fd0(longlong param_1,float *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  float *pfVar18;
  int iVar19;
  longlong lVar20;
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
  undefined1 local_res18 [16];
  float fStack_bc;
  
  lVar20 = *param_3;
  iVar19 = 0;
  if (0 < (int)param_3[1]) {
    pfVar18 = (float *)(lVar20 + 0x40);
    do {
      fVar8 = *param_2;
      fVar9 = param_2[1];
      fVar10 = param_2[2];
      fVar11 = param_2[3];
      fVar33 = param_2[8];
      fVar37 = param_2[9];
      fVar41 = param_2[10];
      fVar12 = param_2[4];
      fVar13 = param_2[5];
      fVar14 = param_2[6];
      fVar42 = pfVar18[-2] * fVar33;
      fVar43 = pfVar18[-1] * fVar37;
      fVar44 = *pfVar18 * fVar41;
      fVar30 = fVar44 * fVar9 - fVar43 * fVar10;
      fVar34 = fVar42 * fVar10 - fVar44 * fVar8;
      fVar38 = fVar43 * fVar8 - fVar42 * fVar9;
      fVar30 = fVar30 + fVar30;
      fVar34 = fVar34 + fVar34;
      fVar38 = fVar38 + fVar38;
      fVar31 = pfVar18[1] * fVar33;
      fVar35 = pfVar18[2] * fVar37;
      fVar39 = pfVar18[3] * fVar41;
      fVar21 = fVar39 * fVar9 - fVar35 * fVar10;
      fVar24 = fVar31 * fVar10 - fVar39 * fVar8;
      fVar27 = fVar35 * fVar8 - fVar31 * fVar9;
      fVar21 = fVar21 + fVar21;
      fVar24 = fVar24 + fVar24;
      fVar27 = fVar27 + fVar27;
      fVar32 = pfVar18[4] * fVar33;
      fVar36 = pfVar18[5] * fVar37;
      fVar40 = pfVar18[6] * fVar41;
      fVar22 = fVar40 * fVar9 - fVar36 * fVar10;
      fVar25 = fVar32 * fVar10 - fVar40 * fVar8;
      fVar28 = fVar36 * fVar8 - fVar32 * fVar9;
      fVar22 = fVar22 + fVar22;
      fVar25 = fVar25 + fVar25;
      fVar28 = fVar28 + fVar28;
      fVar33 = pfVar18[7] * fVar33;
      fVar37 = pfVar18[8] * fVar37;
      fVar41 = pfVar18[9] * fVar41;
      fVar23 = fVar41 * fVar9 - fVar37 * fVar10;
      fVar26 = fVar33 * fVar10 - fVar41 * fVar8;
      fVar29 = fVar37 * fVar8 - fVar33 * fVar9;
      fVar23 = fVar23 + fVar23;
      fVar26 = fVar26 + fVar26;
      fVar29 = fVar29 + fVar29;
      bVar3 = *(byte *)(pfVar18 + -0xe);
      uVar15 = FUN_14222e1e0(lVar20);
      puVar16 = (undefined4 *)FUN_142b8e400(local_res18,uVar15);
      fVar2 = pfVar18[-0xc];
      uVar4 = *puVar16;
      if (((uint)pfVar18[-8] & 1) == 0) {
        fStack_bc = -1.0;
      }
      else {
        fStack_bc = pfVar18[-0xb];
      }
      iVar5 = *(int *)(param_1 + 0x3c8);
      fVar6 = pfVar18[-10];
      *(int *)(param_1 + 0x3c8) = iVar5 + 1;
      if (*(int *)(param_1 + 0x3cc) < iVar5 + 1) {
        TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x3c0),iVar5);
      }
      lVar7 = *(longlong *)(param_1 + 0x3c0);
      iVar19 = iVar19 + 1;
      lVar20 = lVar20 + 0x68;
      pfVar18 = pfVar18 + 0x1a;
      lVar17 = (longlong)iVar5 * 0x44;
      *(undefined8 *)(lVar17 + lVar7) =
           CONCAT44((fVar30 * fVar10 - fVar38 * fVar8) + fVar11 * fVar34 + fVar43 + fVar13,
                    (fVar38 * fVar9 - fVar34 * fVar10) + fVar11 * fVar30 + fVar42 + fVar12);
      ((undefined8 *)(lVar17 + lVar7))[1] =
           CONCAT44((fVar27 * fVar9 - fVar24 * fVar10) + fVar21 * fVar11 + fVar31 + fVar12,
                    (fVar34 * fVar8 - fVar30 * fVar9) + fVar11 * fVar38 + fVar44 + fVar14);
      puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar7);
      *puVar1 = CONCAT44((fVar24 * fVar8 - fVar21 * fVar9) + fVar27 * fVar11 + fVar39 + fVar14,
                         (fVar21 * fVar10 - fVar27 * fVar8) + fVar24 * fVar11 + fVar35 + fVar13);
      puVar1[1] = CONCAT44((fVar22 * fVar10 - fVar28 * fVar8) + fVar25 * fVar11 + fVar36 + fVar13,
                           (fVar28 * fVar9 - fVar25 * fVar10) + fVar22 * fVar11 + fVar32 + fVar12);
      puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar7);
      *puVar1 = CONCAT44((fVar29 * fVar9 - fVar26 * fVar10) + fVar23 * fVar11 + fVar33 + fVar12,
                         (fVar25 * fVar8 - fVar22 * fVar9) + fVar28 * fVar11 + fVar40 + fVar14);
      puVar1[1] = CONCAT44((fVar26 * fVar8 - fVar23 * fVar9) + fVar29 * fVar11 + fVar41 + fVar14,
                           (fVar23 * fVar10 - fVar29 * fVar8) + fVar26 * fVar11 + fVar37 + fVar13);
      puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar7);
      *puVar1 = CONCAT44(uVar4,(uint)bVar3);
      puVar1[1] = CONCAT44(fStack_bc,fVar2);
      *(float *)(lVar17 + 0x40 + lVar7) = fVar6;
    } while (iVar19 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 142ba3370 FUN_142ba3370 body=34 status=ok
// SIG undefined FUN_142ba3370(void)

void FUN_142ba3370(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(param_2 + (longlong)param_1);
      uVar2 = puVar1[1];
      *param_1 = *puVar1;
      param_1[1] = uVar2;
      param_1 = param_1 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142ba33a0 FUN_142ba33a0 body=101 status=ok
// SIG undefined FUN_142ba33a0(void)

undefined8 * FUN_142ba33a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1457d7860;
  param_1[0x92] = &PTR_LAB_1457d7f80;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x93] = uVar1;
  if (param_1[0x8e] != 0) {
    FUN_1423974f0(param_1[0x8e],0);
    (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  }
  return param_1;
}



// FUNCTION 142ba3410 FUN_142ba3410 body=590 status=ok
// SIG undefined FUN_142ba3410(void)

longlong * FUN_142ba3410(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong local_78 [2];
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  int local_48;
  uint local_44;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  FUN_143833170();
  local_58 = 0x1ffff;
  local_60 = 0;
  *param_1 = (longlong)&PTR_FUN_1457d7fd8;
  plVar1 = param_1 + 0x16;
  *plVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  local_68 = hkGeometry::vftable;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0x80000000;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0x80000000;
  FUN_142b8ebb0(param_1[0x18],&local_68,1);
  lVar10 = local_50;
  uVar12 = (longlong)local_48 * 0x10 >> 4;
  uVar6 = FUN_143703a50();
  iVar11 = (int)uVar12;
  if ((int)(*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff) < iVar11) {
    FUN_14370c310(uVar6,param_1 + 0xe,uVar12 & 0xffffffff,0x10);
  }
  puVar7 = (undefined4 *)param_1[0xe];
  lVar9 = (longlong)iVar11;
  if (0 < iVar11) {
    lVar10 = lVar10 - (longlong)puVar7;
    do {
      puVar2 = (undefined4 *)(lVar10 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *puVar7 = *puVar2;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      puVar7 = puVar7 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 0xf) = iVar11;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x96) = 1;
  FUN_143717df0(param_1[0xe],uVar12 & 0xffffffff,param_1 + 10);
  (**(code **)(*param_1 + 0x20))(param_1);
  uVar6 = FWeakObjectPtr::Get(param_2 + 0x138);
  plVar8 = (longlong *)UObjectBaseUtility::GetFullName(uVar6,local_78,0);
  if (plVar1 != plVar8) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar8;
    *plVar8 = 0;
    *(int *)(param_1 + 0x17) = (int)plVar8[1];
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)plVar8 + 0xc);
    plVar8[1] = 0;
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x13c);
  local_68 = hkGeometry::vftable;
  uVar6 = FUN_143703a50();
  local_38 = 0;
  if (-1 < (int)local_34) {
    FUN_143702e10(uVar6,local_40,0x10,local_34 & 0x3fffffff);
  }
  local_40 = 0;
  local_34 = 0x80000000;
  uVar6 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar6,local_50,0x10,local_44 & 0x3fffffff);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  FUN_14370c000(&local_68);
  return param_1;
}



// FUNCTION 142ba3660 FUN_142ba3660 body=172 status=ok
// SIG undefined FUN_142ba3660(void)

undefined8 * FUN_142ba3660(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142326e40();
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 0x10;
  *(uint *)((longlong)param_1 + 0x19c) = *(uint *)((longlong)param_1 + 0x19c) & 0xfffffffd | 1;
  *param_1 = &PTR_FUN_1457d73d8;
  param_1[5] = &PTR_LAB_1457d77d8;
  param_1[0x2f] = &PTR_LAB_1457d7808;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x35] = uVar1;
  *(byte *)((longlong)param_1 + 0x1bc) = *(byte *)((longlong)param_1 + 0x1bc) | 1;
  param_1[0x36] = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 0x37) = 0x42c80000;
  return param_1;
}



// FUNCTION 142ba3710 FUN_142ba3710 body=90 status=ok
// SIG undefined FUN_142ba3710(void)

undefined8 * FUN_142ba3710(undefined8 *param_1)

{
  FUN_142326e40();
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 0x10;
  *param_1 = &PTR_FUN_1457d6f50;
  param_1[5] = &PTR_LAB_1457d7350;
  param_1[0x2f] = &PTR_LAB_1457d7380;
  *(uint *)((longlong)param_1 + 0x19c) = *(uint *)((longlong)param_1 + 0x19c) & 0xfffffffd | 1;
  return param_1;
}



// FUNCTION 142ba3770 FUN_142ba3770 body=150 status=ok
// SIG undefined FUN_142ba3770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ba3770(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  longlong *plVar4;
  float fVar5;
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  float local_14;
  float local_10;
  
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0xc0) + 0x110);
  if ((plVar4 != (longlong *)0x0) ||
     (plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0xc0) + 0x118), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0xa0))(plVar4,&local_28);
    puVar1 = (undefined8 *)param_1[1];
    *puVar1 = local_28;
    puVar1[1] = local_20;
    auVar3._4_4_ = local_14;
    auVar3._0_4_ = local_18;
    auVar3._8_4_ = local_10;
    pauVar2 = (undefined1 (*) [16])param_1[2];
    auVar3._12_4_ = 0;
    *pauVar2 = auVar3;
    local_14 = local_14 * fRam0000000146af9cc4;
    local_10 = local_10 * fRam0000000146af9cc8;
    fVar5 = fRam0000000146af9ccc * 0.0;
    *(float *)*pauVar2 = local_18 * _DAT_146af9cc0;
    *(float *)(*pauVar2 + 4) = local_14;
    *(float *)(*pauVar2 + 8) = local_10;
    *(float *)(*pauVar2 + 0xc) = fVar5;
  }
  return;
}



// FUNCTION 142ba3850 FUN_142ba3850 body=87 status=ok
// SIG undefined FUN_142ba3850(void)

longlong FUN_142ba3850(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x490) = &PTR_FUN_1440197d0;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 142ba38b0 FUN_142ba38b0 body=166 status=ok
// SIG undefined FUN_142ba38b0(void)

undefined8 * FUN_142ba38b0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = &PTR_FUN_1457d7fd8;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  FUN_1438331b0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0xe0;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142ba3960 FUN_142ba3960 body=87 status=ok
// SIG undefined FUN_142ba3960(void)

longlong FUN_142ba3960(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440197d0;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 142ba39c0 FUN_142ba39c0 body=66 status=ok
// SIG undefined FUN_142ba39c0(void)

longlong FUN_142ba39c0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440197d0;
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 142ba3a10 Add body=152 status=ok
// SIG undefined Add(void)

void FCompositeNavModifier::Add(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[8];
  param_1[8] = uVar1 + 1;
  if ((int)param_1[9] < (int)(uVar1 + 1)) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 6,uVar1);
  }
  FAreaNavModifier::FAreaNavModifier
            ((longlong)(int)uVar1 * 0x50 + *(longlong *)(param_1 + 6),param_2);
  uVar1 = *param_1;
  uVar2 = param_1[0x12];
  *param_1 = ((*param_2 | uVar1) ^ uVar1) & 1 ^ uVar1;
  uVar2 = (((uint)*(byte *)((longlong)param_2 + 0x4a) * 2 | uVar2) ^ uVar2) & 2 ^ uVar2;
  param_1[0x12] = uVar2;
  param_1[0x12] = (((uint)*(byte *)((longlong)param_2 + 0x4a) * 2 | uVar2) ^ uVar2) & 4 ^ uVar2;
  return;
}



// FUNCTION 142ba3ab0 BuildAABB body=162 status=ok
// SIG undefined BuildAABB(void)

undefined8 * FBox::BuildAABB(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_3;
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  fVar4 = param_2[2];
  fVar5 = param_2[1];
  fVar6 = *param_2;
  *(undefined1 *)(param_1 + 3) = 1;
  *param_1 = CONCAT44(fVar5 - fVar3,fVar6 - fVar1);
  *(float *)(param_1 + 1) = fVar4 - fVar2;
  *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fVar3 + fVar5,fVar1 + fVar6);
  *(float *)((longlong)param_1 + 0x14) = fVar2 + fVar4;
  return param_1;
}



// FUNCTION 142ba3b60 FUN_142ba3b60 body=8771 status=ok
// SIG undefined FUN_142ba3b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ba3b60(longlong param_1)

{
  longlong *plVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  int iVar22;
  undefined4 uVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar49;
  undefined1 auVar44 [16];
  float fVar51;
  undefined1 auVar45 [16];
  float fVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar65;
  float fVar67;
  undefined1 auVar60 [16];
  float fVar66;
  float fVar68;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined4 uVar72;
  float fVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8;
  float local_3c0;
  uint local_3b8;
  undefined1 local_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  uint local_398;
  undefined8 local_390;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  uint local_378;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  uint local_350;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  undefined4 uStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  longlong local_2c8;
  float local_2c0;
  longlong local_2b8;
  float local_2a8;
  float fStack_2a4;
  undefined8 uStack_2a0;
  float fStack_298;
  float fStack_294;
  uint local_290;
  float local_280;
  float local_274;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_220;
  float local_214;
  float local_208;
  float local_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 local_1c8 [8];
  undefined8 uStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [192];
  undefined1 *local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong uVar33;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  lVar30 = *(longlong *)(param_1 + 0x118);
  if (lVar30 != 0) {
    uVar31 = 0;
    local_e8 = (undefined1 *)0x0;
    local_e0 = 0;
    local_2c8 = lVar30;
    FUN_140725150(lVar30,local_1a8,0);
    fVar43 = DAT_1468b5d98;
    fStack_2a4 = DAT_1468b5d94;
    local_2a8 = DAT_1468b5d90;
    plVar1 = (longlong *)(param_1 + 0x1c0);
    fStack_298 = DAT_1468b5d94;
    uStack_2a0 = CONCAT44(DAT_1468b5d90,DAT_1468b5d98);
    fStack_294 = DAT_1468b5d98;
    local_290 = local_290 & 0xffffff00;
    *(float *)(param_1 + 0x180) = DAT_1468b5d90;
    *(float *)(param_1 + 0x184) = fStack_2a4;
    *(undefined8 *)(param_1 + 0x188) = uStack_2a0;
    *(ulonglong *)(param_1 + 400) = CONCAT44(fVar43,fStack_2a4);
    *(uint *)(param_1 + 0x198) = local_290;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x1cc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar1,0);
    }
    local_398 = 0;
    uVar89 = _DAT_146b2bcc0;
    uVar90 = uRam0000000146b2bcc4;
    uVar91 = uRam0000000146b2bcc8;
    uVar92 = uRam0000000146b2bccc;
    if (0 < (int)local_e0) {
      local_2b8 = 0;
      uVar25 = uVar31;
      do {
        uVar32 = (uint)uVar25;
        puVar24 = local_1a8;
        if (local_e8 != (undefined1 *)0x0) {
          puVar24 = local_e8;
        }
        plVar5 = *(longlong **)(puVar24 + local_2b8);
        if ((((plVar5 != (longlong *)0x0) && ((*(byte *)(plVar5 + 0x17) & 1) != 0)) &&
            (iVar22 = (**(code **)(*plVar5 + 0x4e8))(plVar5), uVar89 = _DAT_146b2bcc0,
            uVar90 = uRam0000000146b2bcc4, uVar91 = uRam0000000146b2bcc8,
            uVar92 = uRam0000000146b2bccc, iVar22 != 0)) &&
           (uVar25 = (**(code **)(*plVar5 + 0x6b8))(plVar5), uVar92 = uRam0000000146b2bccc,
           uVar91 = uRam0000000146b2bcc8, uVar90 = uRam0000000146b2bcc4, uVar89 = _DAT_146b2bcc0,
           fVar73 = fRam0000000146b2bc9c, fVar50 = fRam0000000146b2bc98,
           fVar55 = fRam0000000146b2bc94, fVar43 = _DAT_146b2bc90, uVar32 = local_398, uVar25 != 0))
        {
          local_3c8 = plVar5[0x46];
          local_3c0 = *(float *)(plVar5 + 0x47);
          fVar83 = *(float *)(plVar5 + 0x42);
          fVar84 = *(float *)((longlong)plVar5 + 0x214);
          fVar85 = *(float *)(plVar5 + 0x43);
          fVar86 = *(float *)((longlong)plVar5 + 0x21c);
          fVar76 = (float)((uint)_DAT_146b2bcb0 & _DAT_146b2bcc0);
          fVar78 = (float)((uint)fRam0000000146b2bcb4 & uRam0000000146b2bcc4);
          fVar80 = (float)((uint)fRam0000000146b2bcb8 & uRam0000000146b2bcc8);
          fVar82 = (float)((uint)fRam0000000146b2bcbc & uRam0000000146b2bccc);
          fVar54 = *(float *)(plVar5 + 0x44);
          fVar42 = *(float *)((longlong)plVar5 + 0x224);
          fVar49 = *(float *)(plVar5 + 0x45);
          uStack_30c = *(undefined4 *)((longlong)plVar5 + 0x22c);
          local_350 = CONCAT31(local_350._1_3_,1);
          local_348 = _DAT_146b2bc90;
          fStack_344 = fRam0000000146b2bc94;
          fStack_340 = fRam0000000146b2bc98;
          fStack_33c = fRam0000000146b2bc9c;
          auVar44._0_4_ = fVar83 * fVar83 + fVar85 * fVar85;
          auVar44._4_4_ = fVar84 * fVar84 + fVar86 * fVar86;
          auVar44._8_4_ = fVar85 * fVar85 + fVar83 * fVar83;
          auVar44._12_4_ = fVar86 * fVar86 + fVar84 * fVar84;
          auVar60._0_4_ = auVar44._4_4_ + auVar44._0_4_;
          auVar60._4_4_ = auVar44._8_4_ + auVar44._4_4_;
          auVar60._8_4_ = auVar44._12_4_ + auVar44._8_4_;
          auVar60._12_4_ = auVar44._0_4_ + auVar44._12_4_;
          auVar44 = rsqrtps(auVar44,auVar60);
          fVar52 = auVar44._0_4_;
          fVar53 = auVar44._4_4_;
          fVar56 = auVar44._8_4_;
          fVar57 = auVar44._12_4_;
          fVar52 = (_DAT_146b2bc90 - fVar52 * fVar52 * auVar60._0_4_ * _DAT_146b2bc90) * fVar52 +
                   fVar52;
          fVar53 = (fRam0000000146b2bc94 - fVar53 * fVar53 * auVar60._4_4_ * fRam0000000146b2bc94) *
                   fVar53 + fVar53;
          fVar56 = (fRam0000000146b2bc98 - fVar56 * fVar56 * auVar60._8_4_ * fRam0000000146b2bc98) *
                   fVar56 + fVar56;
          fVar57 = (fRam0000000146b2bc9c - fVar57 * fVar57 * auVar60._12_4_ * fRam0000000146b2bc9c)
                   * fVar57 + fVar57;
          fStack_364 = *(float *)((longlong)plVar5 + 0x1d4) - *(float *)(plVar5 + 0x3c);
          fStack_358 = *(float *)((longlong)plVar5 + 0x1d4) + *(float *)(plVar5 + 0x3c);
          fStack_35c = *(float *)(plVar5 + 0x3a) + *(float *)((longlong)plVar5 + 0x1dc);
          local_368 = *(float *)(plVar5 + 0x3a) - *(float *)((longlong)plVar5 + 0x1dc);
          fStack_354 = *(float *)(plVar5 + 0x3b) + *(float *)((longlong)plVar5 + 0x1e4);
          fVar83 = (float)(((uint)(((_DAT_146b2bc90 -
                                    fVar52 * fVar52 * auVar60._0_4_ * _DAT_146b2bc90) * fVar52 +
                                   fVar52) * fVar83) ^ _DAT_146b2bc80) &
                           -(uint)(_DAT_146b2bca0 <= auVar60._0_4_) ^ _DAT_146b2bc80);
          fVar84 = (float)(((uint)(((fRam0000000146b2bc94 -
                                    fVar53 * fVar53 * auVar60._4_4_ * fRam0000000146b2bc94) * fVar53
                                   + fVar53) * fVar84) ^ uRam0000000146b2bc84) &
                           -(uint)(fRam0000000146b2bca4 <= auVar60._4_4_) ^ uRam0000000146b2bc84);
          fVar85 = (float)(((uint)(((fRam0000000146b2bc98 -
                                    fVar56 * fVar56 * auVar60._8_4_ * fRam0000000146b2bc98) * fVar56
                                   + fVar56) * fVar85) ^ uRam0000000146b2bc88) &
                           -(uint)(fRam0000000146b2bca8 <= auVar60._8_4_) ^ uRam0000000146b2bc88);
          fVar86 = (float)(((uint)(((fRam0000000146b2bc9c -
                                    fVar57 * fVar57 * auVar60._12_4_ * fRam0000000146b2bc9c) *
                                    fVar57 + fVar57) * fVar86) ^ uRam0000000146b2bc8c) &
                           -(uint)(fRam0000000146b2bcac <= auVar60._12_4_) ^ uRam0000000146b2bc8c);
          fStack_360 = *(float *)(plVar5 + 0x3b) - *(float *)((longlong)plVar5 + 0x1e4);
          if (*(char *)(param_1 + 0x198) == '\0') {
            auVar14._4_4_ = fStack_364;
            auVar14._0_4_ = local_368;
            auVar14._8_4_ = fStack_360;
            auVar14._12_4_ = fStack_35c;
            uVar26 = (ulonglong)local_350;
            *(undefined1 (*) [16])(param_1 + 0x180) = auVar14;
            *(float *)(param_1 + 400) = fStack_358;
            *(float *)(param_1 + 0x194) = fStack_354;
            *(uint *)(param_1 + 0x198) = local_350;
          }
          else {
            fVar52 = local_368;
            if (*(float *)(param_1 + 0x180) <= local_368) {
              fVar52 = *(float *)(param_1 + 0x180);
            }
            fVar53 = fStack_364;
            if (*(float *)(param_1 + 0x184) <= fStack_364) {
              fVar53 = *(float *)(param_1 + 0x184);
            }
            fVar56 = fStack_360;
            if (*(float *)(param_1 + 0x188) <= fStack_360) {
              fVar56 = *(float *)(param_1 + 0x188);
            }
            fVar57 = fStack_35c;
            if (fStack_35c <= *(float *)(param_1 + 0x18c)) {
              fVar57 = *(float *)(param_1 + 0x18c);
            }
            fVar87 = fStack_358;
            if (fStack_358 <= *(float *)(param_1 + 400)) {
              fVar87 = *(float *)(param_1 + 400);
            }
            fVar88 = fStack_354;
            if (fStack_354 <= *(float *)(param_1 + 0x194)) {
              fVar88 = *(float *)(param_1 + 0x194);
            }
            *(float *)(param_1 + 0x180) = fVar52;
            *(float *)(param_1 + 0x184) = fVar53;
            *(float *)(param_1 + 0x188) = fVar56;
            *(float *)(param_1 + 0x18c) = fVar57;
            *(float *)(param_1 + 400) = fVar87;
            *(float *)(param_1 + 0x194) = fVar88;
            uVar26 = uVar25;
          }
          local_328 = fVar76;
          fStack_324 = fVar78;
          fStack_320 = fVar80;
          fStack_31c = fVar82;
          local_318 = fVar54;
          fStack_314 = fVar42;
          fStack_310 = fVar49;
          if (0 < *(int *)(uVar25 + 0x30)) {
            local_3a8._4_4_ = fVar86;
            local_3a8._0_4_ = fVar86;
            fStack_3a0 = fVar86;
            fStack_39c = fVar86;
            uVar29 = uVar31;
            uVar33 = uVar31;
            do {
              lVar30 = *(longlong *)(uVar25 + 0x28);
              fVar57 = (float)((uint)_DAT_146b2bcb0 & uVar89);
              fVar87 = (float)((uint)fRam0000000146b2bcb4 & uVar90);
              fVar88 = (float)((uint)fRam0000000146b2bcb8 & uVar91);
              auVar35._4_4_ = fVar87;
              auVar35._0_4_ = fVar57;
              auVar35._8_4_ = fVar88;
              auVar35._12_4_ = (uint)fRam0000000146b2bcbc & uVar92;
              auVar9._4_4_ = fVar78;
              auVar9._0_4_ = fVar76;
              auVar9._8_4_ = fVar80;
              auVar9._12_4_ = fVar82;
              auVar44 = minps(auVar35,auVar9);
              auVar36._4_4_ = -(uint)(auVar44._4_4_ < fRam0000000146b2bd14);
              auVar36._0_4_ = -(uint)(auVar44._0_4_ < _DAT_146b2bd10);
              auVar36._8_4_ = -(uint)(auVar44._8_4_ < fRam0000000146b2bd18);
              auVar36._12_4_ = -(uint)(auVar44._12_4_ < fRam0000000146b2bd1c);
              iVar22 = movmskps((int)uVar26,auVar36);
              fVar52 = (float)local_3c8 * *(float *)(uVar29 + 0xa0 + lVar30);
              fVar53 = local_3c8._4_4_ * *(float *)(uVar29 + 0xa4 + lVar30);
              fVar56 = local_3c0 * *(float *)(uVar29 + 0xa8 + lVar30);
              local_338._4_4_ = fRam0000000146b2bd14;
              local_338._0_4_ = _DAT_146b2bd10;
              fStack_330 = fRam0000000146b2bd18;
              fStack_32c = fRam0000000146b2bd1c;
              fVar42 = local_3a8._0_4_;
              fVar54 = local_3a8._4_4_;
              fVar49 = local_3a8._8_4_;
              if (iVar22 == 0) {
                fVar52 = fVar52 * fVar76;
                fVar53 = fVar53 * fVar78;
                fVar56 = fVar56 * fVar80;
                local_348 = fVar83 * fRam0000000146b2bcbc * _DAT_146b2bcf0 + fVar42 * 0.0 +
                            fVar84 * 0.0 * _DAT_146b2bce0 + fVar85 * 0.0 * _DAT_146b2bcd0;
                fStack_344 = fVar83 * 0.0 * fRam0000000146b2bcf4 + fVar54 * 0.0 +
                             fVar84 * fRam0000000146b2bcbc * fRam0000000146b2bce4 +
                             fVar85 * 0.0 * fRam0000000146b2bcd4;
                fStack_340 = fVar83 * 0.0 * fRam0000000146b2bcf8 + fVar49 * 0.0 +
                             fVar84 * 0.0 * fRam0000000146b2bce8 +
                             fVar85 * fRam0000000146b2bcbc * fRam0000000146b2bcd8;
                fStack_33c = fVar83 * 0.0 * fRam0000000146b2bcfc +
                             local_3a8._12_4_ * fRam0000000146b2bcbc +
                             fVar84 * 0.0 * fRam0000000146b2bcec +
                             fVar85 * 0.0 * fRam0000000146b2bcdc;
                fVar57 = fVar56 * fVar84 - fVar53 * fVar85;
                fVar87 = fVar52 * fVar85 - fVar56 * fVar83;
                fVar88 = fVar53 * fVar83 - fVar52 * fVar84;
                fVar57 = fVar57 + fVar57;
                fVar87 = fVar87 + fVar87;
                fVar88 = fVar88 + fVar88;
                local_368 = (fVar88 * fVar84 - fVar87 * fVar85) + fVar42 * fVar57 + fVar52 +
                            local_318;
                fStack_364 = (fVar57 * fVar85 - fVar88 * fVar83) + fVar54 * fVar87 + fVar53 +
                             fStack_314;
                fStack_360 = (fVar87 * fVar83 - fVar57 * fVar84) + fVar49 * fVar88 + fVar56 +
                             fStack_310;
              }
              else {
                fVar76 = fVar84 + fVar84;
                fVar78 = fVar85 + fVar85;
                fVar80 = fVar83 * (fVar83 + fVar83);
                fVar54 = (fVar83 + fVar83) * fVar54;
                fVar77 = (fVar78 * fVar42 + fVar83 * fVar76) * local_328;
                fVar79 = (fVar54 + fVar84 * fVar78) * fStack_324;
                fVar81 = (fVar76 * fVar49 + fVar83 * fVar78) * fStack_320;
                fVar58 = fStack_324 * (fVar83 * fVar76 - fVar78 * fVar42);
                fVar65 = fStack_320 * (fVar84 * fVar78 - fVar54);
                fVar67 = local_328 * (fVar83 * fVar78 - fVar76 * fVar49);
                fVar54 = (float)((uint)((_DAT_146b2bcb0 - (fVar85 * fVar78 + fVar84 * fVar76)) *
                                       local_328) & uVar89);
                fVar49 = (float)((uint)((fRam0000000146b2bcb4 - (fVar85 * fVar78 + fVar80)) *
                                       fStack_324) & uVar90);
                fVar78 = (float)((uint)((fRam0000000146b2bcb8 - (fVar84 * fVar76 + fVar80)) *
                                       fStack_320) & uVar91);
                fVar82 = (float)((uint)((fRam0000000146b2bcbc - (fVar80 + fVar80)) * fStack_31c) &
                                uVar92);
                fVar69 = (fRam0000000146b2bcbc * 0.0 + 0.0) * fVar57;
                fVar70 = (fRam0000000146b2bcbc * 0.0 + 0.0) * fVar87;
                fVar71 = (fRam0000000146b2bcbc * 0.0 + 0.0) * fVar88;
                fVar59 = fVar87 * (0.0 - fRam0000000146b2bcbc * 0.0);
                fVar66 = fVar88 * (0.0 - fRam0000000146b2bcbc * 0.0);
                fVar68 = fVar57 * (0.0 - fRam0000000146b2bcbc * 0.0);
                fVar42 = (float)((uint)((_DAT_146b2bcb0 - 0.0) * fVar57) & uVar89);
                fVar76 = (float)((uint)((fRam0000000146b2bcb4 - 0.0) * fVar87) & uVar90);
                fVar80 = (float)((uint)((fRam0000000146b2bcb8 - 0.0) * fVar88) & uVar91);
                fVar51 = (float)((uint)((fRam0000000146b2bcbc - 0.0) *
                                       (float)((uint)fRam0000000146b2bcbc & uVar92)) & uVar92);
                local_1e8 = fVar69 * fVar58 + fVar42 * fVar54 + fVar68 * fVar81 + fVar51 * local_318
                ;
                fStack_1e4 = fVar69 * fVar49 + fVar42 * fVar77 + fVar68 * fVar65 +
                             fVar51 * fStack_314;
                fStack_1e0 = fVar69 * fVar79 + fVar42 * fVar67 + fVar68 * fVar78 +
                             fVar51 * fStack_310;
                fStack_1dc = fVar69 * fVar82 + fVar42 * fVar82 + fVar68 * fVar82 +
                             fVar51 * fRam0000000146b2bcbc;
                local_1d8._4_4_ =
                     fVar76 * fVar49 + fVar59 * fVar77 + fVar70 * fVar65 + fVar51 * fStack_314;
                local_1d8._0_4_ =
                     fVar76 * fVar58 + fVar59 * fVar54 + fVar70 * fVar81 + fVar51 * local_318;
                uStack_1d0._0_4_ =
                     fVar76 * fVar79 + fVar59 * fVar67 + fVar70 * fVar78 + fVar51 * fStack_310;
                uStack_1d0._4_4_ =
                     fVar76 * fVar82 + fVar59 * fVar82 + fVar70 * fVar82 +
                     fVar51 * fRam0000000146b2bcbc;
                local_1c8._4_4_ =
                     fVar66 * fVar49 + fVar71 * fVar77 + fVar80 * fVar65 + fVar51 * fStack_314;
                local_1c8._0_4_ =
                     fVar66 * fVar58 + fVar71 * fVar54 + fVar80 * fVar81 + fVar51 * local_318;
                uStack_1c0._0_4_ =
                     fVar66 * fVar79 + fVar71 * fVar67 + fVar80 * fVar78 + fVar51 * fStack_310;
                uStack_1c0._4_4_ =
                     fVar66 * fVar82 + fVar71 * fVar82 + fVar80 * fVar82 +
                     fVar51 * fRam0000000146b2bcbc;
                local_1b8 = fVar53 * fVar58 + fVar52 * fVar54 + fVar56 * fVar81 +
                            fRam0000000146b2bcbc * local_318;
                fStack_1b4 = fVar53 * fVar49 + fVar52 * fVar77 + fVar56 * fVar65 +
                             fRam0000000146b2bcbc * fStack_314;
                fStack_1b0 = fVar53 * fVar79 + fVar52 * fVar67 + fVar56 * fVar78 +
                             fRam0000000146b2bcbc * fStack_310;
                fStack_1ac = fVar53 * fVar82 + fVar52 * fVar82 + fVar56 * fVar82 +
                             fRam0000000146b2bcbc * fRam0000000146b2bcbc;
                FMatrix::RemoveScaling(&local_1e8);
                auVar60 = _local_1c8;
                auVar44 = _local_1d8;
                fVar82 = fStack_31c;
                fVar80 = fStack_320;
                fVar78 = fStack_324;
                fVar76 = local_328;
                fVar54 = (float)(-(uint)((float)local_338._0_4_ <= fVar57 * local_328) &
                                 (_DAT_146b2bd00 ^ (uint)_DAT_146b2bcb0) ^ _DAT_146b2bd00);
                fVar42 = (float)(-(uint)((float)local_338._4_4_ <= fVar87 * fStack_324) &
                                 (uRam0000000146b2bd04 ^ (uint)fRam0000000146b2bcb4) ^
                                uRam0000000146b2bd04);
                fVar52 = (float)(-(uint)(fStack_330 <= fVar88 * fStack_320) &
                                 (uRam0000000146b2bd08 ^ (uint)fRam0000000146b2bcb8) ^
                                uRam0000000146b2bd08);
                local_1e8 = local_1e8 * fVar54;
                fStack_1e4 = fStack_1e4 * fVar54;
                fStack_1e0 = fStack_1e0 * fVar54;
                fVar54 = (float)uStack_1d0 * fVar42;
                fVar49 = (float)local_1d8._0_4_ * fVar42;
                auVar16._4_8_ = uStack_1d0;
                auVar16._0_4_ = (float)local_1d8._4_4_ * fVar42;
                local_1d8 = (undefined1  [8])(auVar16._0_8_ << 0x20);
                uStack_1d0._4_4_ = auVar44._12_4_;
                uStack_1d0._0_4_ = fVar54;
                fVar54 = (float)uStack_1c0 * fVar52;
                fVar42 = (float)local_1c8._0_4_ * fVar52;
                auVar17._4_8_ = uStack_1c0;
                auVar17._0_4_ = (float)local_1c8._4_4_ * fVar52;
                local_1c8 = (undefined1  [8])(auVar17._0_8_ << 0x20);
                uStack_1c0._4_4_ = auVar60._12_4_;
                uStack_1c0._0_4_ = fVar54;
                local_1d8._0_4_ = fVar49;
                local_1c8._0_4_ = fVar42;
                FQuat::FQuat(&local_268,&local_1e8);
                local_3b8 = 0x322bcc77;
                auVar45._0_4_ = local_268 * local_268 + fStack_260 * fStack_260;
                auVar45._4_4_ = fStack_264 * fStack_264 + fStack_25c * fStack_25c;
                auVar45._8_4_ = fStack_260 * fStack_260 + local_268 * local_268;
                auVar45._12_4_ = fStack_25c * fStack_25c + fStack_264 * fStack_264;
                auVar61._0_4_ = auVar45._4_4_ + auVar45._0_4_;
                auVar61._4_4_ = auVar45._8_4_ + auVar45._4_4_;
                auVar61._8_4_ = auVar45._12_4_ + auVar45._8_4_;
                auVar61._12_4_ = auVar45._0_4_ + auVar45._12_4_;
                auVar44 = rsqrtps(auVar45,auVar61);
                fVar54 = auVar44._0_4_;
                fVar42 = auVar44._4_4_;
                fVar49 = auVar44._8_4_;
                fVar52 = auVar44._12_4_;
                fVar54 = (fVar43 - fVar54 * fVar54 * auVar61._0_4_ * fVar43) * fVar54 + fVar54;
                fVar42 = (fVar55 - fVar42 * fVar42 * auVar61._4_4_ * fVar55) * fVar42 + fVar42;
                fVar49 = (fVar50 - fVar49 * fVar49 * auVar61._8_4_ * fVar50) * fVar49 + fVar49;
                fVar52 = (fVar73 - fVar52 * fVar52 * auVar61._12_4_ * fVar73) * fVar52 + fVar52;
                local_348 = (float)(((uint)(((fVar43 - fVar54 * fVar54 * auVar61._0_4_ * fVar43) *
                                             fVar54 + fVar54) * local_268) ^ _DAT_146b2bc80) &
                                    -(uint)(1e-08 <= auVar61._0_4_) ^ _DAT_146b2bc80);
                fStack_344 = (float)(((uint)(((fVar55 - fVar42 * fVar42 * auVar61._4_4_ * fVar55) *
                                              fVar42 + fVar42) * fStack_264) ^ uRam0000000146b2bc84)
                                     & -(uint)(1e-08 <= auVar61._4_4_) ^ uRam0000000146b2bc84);
                fStack_340 = (float)(((uint)(((fVar50 - fVar49 * fVar49 * auVar61._8_4_ * fVar50) *
                                              fVar49 + fVar49) * fStack_260) ^ uRam0000000146b2bc88)
                                     & -(uint)(1e-08 <= auVar61._8_4_) ^ uRam0000000146b2bc88);
                fStack_33c = (float)(((uint)(((fVar73 - fVar52 * fVar52 * auVar61._12_4_ * fVar73) *
                                              fVar52 + fVar52) * fStack_25c) ^ uRam0000000146b2bc8c)
                                     & -(uint)(1e-08 <= auVar61._12_4_) ^ uRam0000000146b2bc8c);
                local_368 = local_1b8;
                fStack_364 = fStack_1b4;
                fStack_360 = fStack_1b0;
                local_268 = local_348;
                fStack_264 = fStack_344;
                fStack_260 = fStack_340;
                fStack_25c = fStack_33c;
              }
              fVar49 = fStack_310;
              fVar42 = fStack_314;
              fVar54 = local_318;
              fVar52 = *(float *)(uVar29 + 0xac + lVar30);
              iVar22 = *(int *)(param_1 + 0x1c8);
              local_350 = CONCAT31(local_350._1_3_,1);
              fStack_35c = (float)local_3c8 * fVar52 + local_368;
              fStack_354 = local_3c0 * fVar52 + fStack_360;
              fStack_358 = local_3c8._4_4_ * fVar52 + fStack_364;
              local_368 = local_368 - (float)local_3c8 * fVar52;
              fStack_360 = fStack_360 - local_3c0 * fVar52;
              fStack_364 = fStack_364 - local_3c8._4_4_ * fVar52;
              *(int *)(param_1 + 0x1c8) = iVar22 + 1;
              local_220 = fStack_360;
              local_214 = fStack_354;
              if (*(int *)(param_1 + 0x1cc) < iVar22 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar22);
                fVar43 = _DAT_146b2bc90;
                fVar55 = fRam0000000146b2bc94;
                fVar50 = fRam0000000146b2bc98;
                fVar73 = fRam0000000146b2bc9c;
                uVar89 = _DAT_146b2bcc0;
                uVar90 = uRam0000000146b2bcc4;
                uVar91 = uRam0000000146b2bcc8;
                uVar92 = uRam0000000146b2bccc;
              }
              uVar26 = (ulonglong)local_350;
              uVar32 = (int)uVar33 + 1;
              uVar33 = (ulonglong)uVar32;
              uVar29 = uVar29 + 0xb0;
              puVar27 = (undefined8 *)((longlong)iVar22 * 0x30 + *plVar1);
              *puVar27 = CONCAT44(fStack_364,local_368);
              puVar27[1] = CONCAT44(fStack_35c,fStack_360);
              auVar15._4_4_ = fStack_344;
              auVar15._0_4_ = local_348;
              auVar15._8_4_ = fStack_340;
              auVar15._12_4_ = fStack_33c;
              puVar27[2] = CONCAT44(fStack_354,fStack_358);
              *(uint *)(puVar27 + 3) = local_350;
              *(undefined1 (*) [16])(puVar27 + 4) = auVar15;
            } while ((int)uVar32 < *(int *)(uVar25 + 0x30));
          }
          fStack_33c = fVar73;
          fStack_340 = fVar50;
          fStack_344 = fVar55;
          local_348 = fVar43;
          if (0 < *(int *)(uVar25 + 0x40)) {
            local_338._4_4_ = fVar86;
            local_338._0_4_ = fVar86;
            fStack_330 = fVar86;
            fStack_32c = fVar86;
            uVar29 = uVar31;
            uVar33 = uVar31;
            fVar43 = fVar86;
            fVar55 = fVar86;
            fVar50 = fVar86;
            do {
              lVar30 = *(longlong *)(uVar25 + 0x38);
              uVar23 = FRotator::Quaternion(lVar30 + 0xbc + uVar29,&local_1f8);
              uVar92 = uRam0000000146b2bccc;
              uVar91 = uRam0000000146b2bcc8;
              uVar90 = uRam0000000146b2bcc4;
              uVar89 = _DAT_146b2bcc0;
              fVar88 = fRam0000000146b2bcb8;
              fVar87 = fRam0000000146b2bcb4;
              fVar57 = _DAT_146b2bcb0;
              fVar56 = fRam0000000146b2bc9c;
              fVar53 = fRam0000000146b2bc98;
              fVar52 = fRam0000000146b2bc94;
              fVar73 = _DAT_146b2bc90;
              local_3a8 = (undefined1  [8])CONCAT44(DAT_1464aa788._4_4_,(float)DAT_1464aa788);
              fStack_3a0 = DAT_1464aa790;
              fStack_39c = 0.0;
              auVar37._8_4_ = DAT_1464aa790;
              auVar37._0_8_ = local_3a8;
              auVar37._12_4_ = 0;
              auVar10._4_4_ = fVar78;
              auVar10._0_4_ = fVar76;
              auVar10._8_4_ = fVar80;
              auVar10._12_4_ = fVar82;
              auVar44 = minps(auVar37,auVar10);
              auVar38._4_4_ = -(uint)(auVar44._4_4_ < fRam0000000146b2bd14);
              auVar38._0_4_ = -(uint)(auVar44._0_4_ < _DAT_146b2bd10);
              auVar38._8_4_ = -(uint)(auVar44._8_4_ < fRam0000000146b2bd18);
              auVar38._12_4_ = -(uint)(auVar44._12_4_ < fRam0000000146b2bd1c);
              iVar22 = movmskps(uVar23,auVar38);
              fVar51 = (float)local_3c8 * *(float *)(uVar29 + 0xb0 + lVar30);
              fVar58 = local_3c8._4_4_ * *(float *)(uVar29 + 0xb4 + lVar30);
              fVar59 = local_3c0 * *(float *)(uVar29 + 0xb8 + lVar30);
              local_368 = _DAT_146b2bd10;
              fStack_364 = fRam0000000146b2bd14;
              fStack_360 = fRam0000000146b2bd18;
              fStack_35c = fRam0000000146b2bd1c;
              local_348 = _DAT_146b2bc90;
              fStack_344 = fRam0000000146b2bc94;
              fStack_340 = fRam0000000146b2bc98;
              fStack_33c = fRam0000000146b2bc9c;
              if (iVar22 == 0) {
                fVar51 = fVar51 * fVar76;
                fVar58 = fVar58 * fVar78;
                fVar59 = fVar59 * fVar80;
                local_3a8._0_4_ =
                     fVar83 * fStack_1ec * _DAT_146b2bcf0 + local_1f8 * (float)local_338._0_4_ +
                     fVar84 * fStack_1f0 * _DAT_146b2bce0 + fVar85 * fStack_1f4 * _DAT_146b2bcd0;
                local_3a8._4_4_ =
                     fVar83 * fStack_1f0 * fRam0000000146b2bcf4 +
                     fStack_1f4 * (float)local_338._4_4_ +
                     fVar84 * fStack_1ec * fRam0000000146b2bce4 +
                     fVar85 * local_1f8 * fRam0000000146b2bcd4;
                fStack_3a0 = fVar83 * fStack_1f4 * fRam0000000146b2bcf8 + fStack_1f0 * fStack_330 +
                             fVar84 * local_1f8 * fRam0000000146b2bce8 +
                             fVar85 * fStack_1ec * fRam0000000146b2bcd8;
                fStack_39c = fVar83 * local_1f8 * fRam0000000146b2bcfc + fStack_1ec * fStack_32c +
                             fVar84 * fStack_1f4 * fRam0000000146b2bcec +
                             fVar85 * fStack_1f0 * fRam0000000146b2bcdc;
                fVar50 = fVar59 * fVar84 - fVar58 * fVar85;
                fVar73 = fVar51 * fVar85 - fVar59 * fVar83;
                fVar52 = fVar58 * fVar83 - fVar51 * fVar84;
                fVar50 = fVar50 + fVar50;
                fVar73 = fVar73 + fVar73;
                fVar52 = fVar52 + fVar52;
                fVar43 = (fVar52 * fVar84 - fVar73 * fVar85) +
                         fVar50 * (float)local_338._0_4_ + fVar51 + fVar54;
                fVar55 = (fVar50 * fVar85 - fVar52 * fVar83) +
                         fVar73 * (float)local_338._4_4_ + fVar58 + fVar42;
                fStack_388 = (fVar73 * fVar83 - fVar50 * fVar84) + fVar52 * fStack_330 + fVar59 +
                             fVar49;
              }
              else {
                fVar54 = fVar84 + fVar84;
                fVar42 = fVar85 + fVar85;
                fVar82 = fVar83 * (fVar83 + fVar83);
                fVar55 = (fVar83 + fVar83) * fVar55;
                fVar77 = (fVar42 * fVar43 + fVar54 * fVar83) * fVar76;
                fVar79 = (fVar55 + fVar42 * fVar84) * fVar78;
                fVar81 = (fVar54 * fVar50 + fVar42 * fVar83) * fVar80;
                fVar78 = fVar78 * (fVar54 * fVar83 - fVar42 * fVar43);
                fVar80 = fVar80 * (fVar42 * fVar84 - fVar55);
                fVar76 = fVar76 * (fVar42 * fVar83 - fVar54 * fVar50);
                fVar43 = (float)((uint)((_DAT_146b2bcb0 - (fVar85 * fVar42 + fVar84 * fVar54)) *
                                       local_328) & _DAT_146b2bcc0);
                fVar50 = (float)((uint)((fRam0000000146b2bcb4 - (fVar85 * fVar42 + fVar82)) *
                                       fStack_324) & uRam0000000146b2bcc4);
                fVar49 = (float)((uint)((fRam0000000146b2bcb8 - (fVar84 * fVar54 + fVar82)) *
                                       fStack_320) & uRam0000000146b2bcc8);
                fVar82 = (float)((uint)((fRam0000000146b2bcbc - (fVar82 + fVar82)) * fStack_31c) &
                                uRam0000000146b2bccc);
                fVar54 = fStack_1f4 + fStack_1f4;
                fVar42 = fStack_1f0 + fStack_1f0;
                fVar65 = local_1f8 * (local_1f8 + local_1f8);
                fVar55 = fStack_1ec * (local_1f8 + local_1f8);
                fVar69 = (fStack_1ec * fVar42 + local_1f8 * fVar54) * (float)DAT_1464aa788;
                fVar70 = (fVar55 + fStack_1f4 * fVar42) * DAT_1464aa788._4_4_;
                fVar71 = (fStack_1ec * fVar54 + local_1f8 * fVar42) * DAT_1464aa790;
                fVar66 = DAT_1464aa788._4_4_ * (local_1f8 * fVar54 - fStack_1ec * fVar42);
                fVar67 = DAT_1464aa790 * (fStack_1f4 * fVar42 - fVar55);
                fVar68 = (float)DAT_1464aa788 * (local_1f8 * fVar42 - fStack_1ec * fVar54);
                fVar55 = (float)((uint)((_DAT_146b2bcb0 -
                                        (fStack_1f0 * fVar42 + fStack_1f4 * fVar54)) *
                                       (float)DAT_1464aa788) & _DAT_146b2bcc0);
                fVar42 = (float)((uint)((fRam0000000146b2bcb4 - (fStack_1f0 * fVar42 + fVar65)) *
                                       DAT_1464aa788._4_4_) & uRam0000000146b2bcc4);
                fVar54 = (float)((uint)((fRam0000000146b2bcb8 - (fStack_1f4 * fVar54 + fVar65)) *
                                       DAT_1464aa790) & uRam0000000146b2bcc8);
                fVar65 = (float)((uint)((fRam0000000146b2bcbc - (fVar65 + fVar65)) * 0.0) &
                                uRam0000000146b2bccc);
                local_1e8 = fVar69 * fVar78 + fVar55 * fVar43 + fVar68 * fVar81 + fVar65 * local_318
                ;
                fStack_1e4 = fVar69 * fVar50 + fVar55 * fVar77 + fVar68 * fVar80 +
                             fVar65 * fStack_314;
                fStack_1e0 = fVar69 * fVar79 + fVar55 * fVar76 + fVar68 * fVar49 +
                             fVar65 * fStack_310;
                fStack_1dc = fVar69 * fVar82 + fVar55 * fVar82 + fVar68 * fVar82 +
                             fVar65 * fRam0000000146b2bcbc;
                local_1d8._4_4_ =
                     fVar42 * fVar50 + fVar66 * fVar77 + fVar70 * fVar80 + fVar65 * fStack_314;
                local_1d8._0_4_ =
                     fVar42 * fVar78 + fVar66 * fVar43 + fVar70 * fVar81 + fVar65 * local_318;
                uStack_1d0._0_4_ =
                     fVar42 * fVar79 + fVar66 * fVar76 + fVar70 * fVar49 + fVar65 * fStack_310;
                uStack_1d0._4_4_ =
                     fVar42 * fVar82 + fVar66 * fVar82 + fVar70 * fVar82 +
                     fVar65 * fRam0000000146b2bcbc;
                local_1c8._4_4_ =
                     fVar67 * fVar50 + fVar71 * fVar77 + fVar54 * fVar80 + fVar65 * fStack_314;
                local_1c8._0_4_ =
                     fVar67 * fVar78 + fVar71 * fVar43 + fVar54 * fVar81 + fVar65 * local_318;
                uStack_1c0._0_4_ =
                     fVar67 * fVar79 + fVar71 * fVar76 + fVar54 * fVar49 + fVar65 * fStack_310;
                uStack_1c0._4_4_ =
                     fVar67 * fVar82 + fVar71 * fVar82 + fVar54 * fVar82 +
                     fVar65 * fRam0000000146b2bcbc;
                local_1b8 = fVar58 * fVar78 + fVar51 * fVar43 + fVar59 * fVar81 +
                            fRam0000000146b2bcbc * local_318;
                fStack_1b4 = fVar58 * fVar50 + fVar51 * fVar77 + fVar59 * fVar80 +
                             fRam0000000146b2bcbc * fStack_314;
                fStack_1b0 = fVar58 * fVar79 + fVar51 * fVar76 + fVar59 * fVar49 +
                             fRam0000000146b2bcbc * fStack_310;
                fStack_1ac = fVar58 * fVar82 + fVar51 * fVar82 + fVar59 * fVar82 +
                             fRam0000000146b2bcbc * fRam0000000146b2bcbc;
                FMatrix::RemoveScaling(&local_1e8);
                auVar60 = _local_1c8;
                auVar44 = _local_1d8;
                fVar43 = (float)(-(uint)(local_368 <= (float)local_3a8._0_4_ * local_328) &
                                 (_DAT_146b2bd00 ^ (uint)fVar57) ^ _DAT_146b2bd00);
                fVar55 = (float)(-(uint)(fStack_364 <= (float)local_3a8._4_4_ * fStack_324) &
                                 (uRam0000000146b2bd04 ^ (uint)fVar87) ^ uRam0000000146b2bd04);
                fVar54 = (float)(-(uint)(fStack_360 <= fStack_3a0 * fStack_320) &
                                 (uRam0000000146b2bd08 ^ (uint)fVar88) ^ uRam0000000146b2bd08);
                local_1e8 = local_1e8 * fVar43;
                fStack_1e4 = fStack_1e4 * fVar43;
                fStack_1e0 = fStack_1e0 * fVar43;
                fVar43 = (float)uStack_1d0 * fVar55;
                fVar50 = (float)local_1d8._0_4_ * fVar55;
                auVar18._4_8_ = uStack_1d0;
                auVar18._0_4_ = (float)local_1d8._4_4_ * fVar55;
                local_1d8 = (undefined1  [8])(auVar18._0_8_ << 0x20);
                uStack_1d0._4_4_ = auVar44._12_4_;
                uStack_1d0._0_4_ = fVar43;
                fVar43 = (float)uStack_1c0 * fVar54;
                fVar55 = (float)local_1c8._0_4_ * fVar54;
                auVar19._4_8_ = uStack_1c0;
                auVar19._0_4_ = (float)local_1c8._4_4_ * fVar54;
                local_1c8 = (undefined1  [8])(auVar19._0_8_ << 0x20);
                uStack_1c0._4_4_ = auVar60._12_4_;
                uStack_1c0._0_4_ = fVar43;
                local_1d8._0_4_ = fVar50;
                local_1c8._0_4_ = fVar55;
                FQuat::FQuat(&local_258,&local_1e8);
                local_3b8 = 0x322bcc77;
                auVar46._0_4_ = local_258 * local_258 + fStack_250 * fStack_250;
                auVar46._4_4_ = fStack_254 * fStack_254 + fStack_24c * fStack_24c;
                auVar46._8_4_ = fStack_250 * fStack_250 + local_258 * local_258;
                auVar46._12_4_ = fStack_24c * fStack_24c + fStack_254 * fStack_254;
                auVar62._0_4_ = auVar46._4_4_ + auVar46._0_4_;
                auVar62._4_4_ = auVar46._8_4_ + auVar46._4_4_;
                auVar62._8_4_ = auVar46._12_4_ + auVar46._8_4_;
                auVar62._12_4_ = auVar46._0_4_ + auVar46._12_4_;
                auVar44 = rsqrtps(auVar46,auVar62);
                fVar43 = auVar44._0_4_;
                fVar55 = auVar44._4_4_;
                fVar50 = auVar44._8_4_;
                fVar54 = auVar44._12_4_;
                fVar43 = (fVar73 - fVar43 * fVar43 * auVar62._0_4_ * fVar73) * fVar43 + fVar43;
                fVar55 = (fVar52 - fVar55 * fVar55 * auVar62._4_4_ * fVar52) * fVar55 + fVar55;
                fVar50 = (fVar53 - fVar50 * fVar50 * auVar62._8_4_ * fVar53) * fVar50 + fVar50;
                fVar54 = (fVar56 - fVar54 * fVar54 * auVar62._12_4_ * fVar56) * fVar54 + fVar54;
                local_3a8._0_4_ =
                     ((uint)(((fVar73 - fVar43 * fVar43 * auVar62._0_4_ * fVar73) * fVar43 + fVar43)
                            * local_258) ^ _DAT_146b2bc80) & -(uint)(1e-08 <= auVar62._0_4_) ^
                     _DAT_146b2bc80;
                local_3a8._4_4_ =
                     ((uint)(((fVar52 - fVar55 * fVar55 * auVar62._4_4_ * fVar52) * fVar55 + fVar55)
                            * fStack_254) ^ uRam0000000146b2bc84) & -(uint)(1e-08 <= auVar62._4_4_)
                     ^ uRam0000000146b2bc84;
                fStack_3a0 = (float)(((uint)(((fVar53 - fVar50 * fVar50 * auVar62._8_4_ * fVar53) *
                                              fVar50 + fVar50) * fStack_250) ^ uRam0000000146b2bc88)
                                     & -(uint)(1e-08 <= auVar62._8_4_) ^ uRam0000000146b2bc88);
                fStack_39c = (float)(((uint)(((fVar56 - fVar54 * fVar54 * auVar62._12_4_ * fVar56) *
                                              fVar54 + fVar54) * fStack_24c) ^ uRam0000000146b2bc8c)
                                     & -(uint)(1e-08 <= auVar62._12_4_) ^ uRam0000000146b2bc8c);
                fVar43 = local_1b8;
                fVar55 = fStack_1b4;
                fStack_388 = fStack_1b0;
                fVar76 = local_328;
                fVar78 = fStack_324;
                fVar80 = fStack_320;
                fVar82 = fStack_31c;
                fVar54 = local_318;
                fVar42 = fStack_314;
                fVar49 = fStack_310;
                local_258 = (float)local_3a8._0_4_;
                fStack_254 = (float)local_3a8._4_4_;
                fStack_250 = fStack_3a0;
                fStack_24c = fStack_39c;
              }
              local_378 = CONCAT31(local_378._1_3_,1);
              iVar22 = *(int *)(param_1 + 0x1c8);
              fVar52 = (float)local_3c8 * *(float *)(uVar29 + 200 + lVar30) * 0.5;
              fVar50 = local_3c0 * *(float *)(uVar29 + 0xd0 + lVar30) * 0.5;
              fVar73 = local_3c8._4_4_ * *(float *)(uVar29 + 0xcc + lVar30) * 0.5;
              fStack_384 = fVar52 + fVar43;
              fStack_37c = fVar50 + fStack_388;
              fStack_380 = fVar73 + fVar55;
              fStack_388 = fStack_388 - fVar50;
              local_390 = CONCAT44(fVar55 - fVar73,fVar43 - fVar52);
              *(int *)(param_1 + 0x1c8) = iVar22 + 1;
              local_208 = fStack_388;
              local_1fc = fStack_37c;
              if (*(int *)(param_1 + 0x1cc) < iVar22 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar22);
                local_348 = _DAT_146b2bc90;
                fStack_344 = fRam0000000146b2bc94;
                fStack_340 = fRam0000000146b2bc98;
                fStack_33c = fRam0000000146b2bc9c;
                uVar89 = _DAT_146b2bcc0;
                uVar90 = uRam0000000146b2bcc4;
                uVar91 = uRam0000000146b2bcc8;
                uVar92 = uRam0000000146b2bccc;
              }
              uVar26 = (ulonglong)local_378;
              uVar32 = (int)uVar33 + 1;
              uVar33 = (ulonglong)uVar32;
              uVar29 = uVar29 + 0xe0;
              puVar27 = (undefined8 *)((longlong)iVar22 * 0x30 + *plVar1);
              *puVar27 = local_390;
              puVar27[1] = CONCAT44(fStack_384,fStack_388);
              *(float *)(puVar27 + 2) = fStack_380;
              *(float *)((longlong)puVar27 + 0x14) = fStack_37c;
              *(uint *)(puVar27 + 3) = local_378;
              *(undefined1 (*) [16])(puVar27 + 4) = _local_3a8;
              fVar43 = (float)local_338._0_4_;
              fVar55 = (float)local_338._4_4_;
              fVar50 = fStack_330;
            } while ((int)uVar32 < *(int *)(uVar25 + 0x40));
          }
          if (0 < *(int *)(uVar25 + 0x50)) {
            local_338._4_4_ = fVar86;
            local_338._0_4_ = fVar86;
            fStack_330 = fVar86;
            fStack_32c = fVar86;
            uVar29 = uVar31;
            uVar33 = uVar31;
            fVar43 = fVar86;
            fVar55 = fVar86;
            fVar50 = fVar86;
            do {
              lVar30 = *(longlong *)(uVar25 + 0x48);
              uVar23 = FRotator::Quaternion(lVar30 + 0xbc + uVar29,&local_2a8);
              uVar92 = uRam0000000146b2bccc;
              uVar91 = uRam0000000146b2bcc8;
              uVar90 = uRam0000000146b2bcc4;
              uVar89 = _DAT_146b2bcc0;
              fVar88 = fRam0000000146b2bcb8;
              fVar87 = fRam0000000146b2bcb4;
              fVar57 = _DAT_146b2bcb0;
              fVar56 = fRam0000000146b2bc9c;
              fVar53 = fRam0000000146b2bc98;
              fVar52 = fRam0000000146b2bc94;
              fVar73 = _DAT_146b2bc90;
              local_3a8 = (undefined1  [8])CONCAT44(DAT_1464aa788._4_4_,(float)DAT_1464aa788);
              fStack_3a0 = DAT_1464aa790;
              fStack_39c = 0.0;
              auVar39._8_4_ = DAT_1464aa790;
              auVar39._0_8_ = local_3a8;
              auVar39._12_4_ = 0;
              auVar11._4_4_ = fVar78;
              auVar11._0_4_ = fVar76;
              auVar11._8_4_ = fVar80;
              auVar11._12_4_ = fVar82;
              auVar44 = minps(auVar39,auVar11);
              local_368 = _DAT_146b2bd10;
              fStack_364 = fRam0000000146b2bd14;
              fStack_360 = fRam0000000146b2bd18;
              fStack_35c = fRam0000000146b2bd1c;
              auVar40._4_4_ = -(uint)(auVar44._4_4_ < fRam0000000146b2bd14);
              auVar40._0_4_ = -(uint)(auVar44._0_4_ < _DAT_146b2bd10);
              auVar40._8_4_ = -(uint)(auVar44._8_4_ < fRam0000000146b2bd18);
              auVar40._12_4_ = -(uint)(auVar44._12_4_ < fRam0000000146b2bd1c);
              iVar22 = movmskps(uVar23,auVar40);
              fVar51 = (float)local_3c8 * *(float *)(uVar29 + 0xb0 + lVar30);
              fVar58 = local_3c8._4_4_ * *(float *)(uVar29 + 0xb4 + lVar30);
              fVar59 = local_3c0 * *(float *)(uVar29 + 0xb8 + lVar30);
              local_348 = _DAT_146b2bc90;
              fStack_344 = fRam0000000146b2bc94;
              fStack_340 = fRam0000000146b2bc98;
              fStack_33c = fRam0000000146b2bc9c;
              if (iVar22 == 0) {
                fVar51 = fVar51 * fVar76;
                fVar58 = fVar58 * fVar78;
                fVar59 = fVar59 * fVar80;
                local_3a8._0_4_ =
                     fVar83 * uStack_2a0._4_4_ * _DAT_146b2bcf0 + (float)local_338._0_4_ * local_2a8
                     + fVar84 * (float)uStack_2a0 * _DAT_146b2bce0 +
                     fVar85 * fStack_2a4 * _DAT_146b2bcd0;
                local_3a8._4_4_ =
                     fVar83 * (float)uStack_2a0 * fRam0000000146b2bcf4 +
                     (float)local_338._4_4_ * fStack_2a4 +
                     fVar84 * uStack_2a0._4_4_ * fRam0000000146b2bce4 +
                     fVar85 * local_2a8 * fRam0000000146b2bcd4;
                fStack_3a0 = fVar83 * fStack_2a4 * fRam0000000146b2bcf8 +
                             fStack_330 * (float)uStack_2a0 +
                             fVar84 * local_2a8 * fRam0000000146b2bce8 +
                             fVar85 * uStack_2a0._4_4_ * fRam0000000146b2bcd8;
                fStack_39c = fVar83 * local_2a8 * fRam0000000146b2bcfc +
                             fStack_32c * uStack_2a0._4_4_ +
                             fVar84 * fStack_2a4 * fRam0000000146b2bcec +
                             fVar85 * (float)uStack_2a0 * fRam0000000146b2bcdc;
                fVar50 = fVar59 * fVar84 - fVar58 * fVar85;
                fVar73 = fVar51 * fVar85 - fVar59 * fVar83;
                fVar52 = fVar58 * fVar83 - fVar51 * fVar84;
                fVar50 = fVar50 + fVar50;
                fVar73 = fVar73 + fVar73;
                fVar52 = fVar52 + fVar52;
                fVar43 = (fVar52 * fVar84 - fVar73 * fVar85) +
                         fVar50 * (float)local_338._0_4_ + fVar51 + fVar54;
                fVar55 = (fVar50 * fVar85 - fVar52 * fVar83) +
                         fVar73 * (float)local_338._4_4_ + fVar58 + fVar42;
                fStack_388 = (fVar73 * fVar83 - fVar50 * fVar84) + fVar52 * fStack_330 + fVar59 +
                             fVar49;
              }
              else {
                fVar54 = fVar84 + fVar84;
                fVar42 = fVar85 + fVar85;
                fVar82 = fVar83 * (fVar83 + fVar83);
                fVar55 = (fVar83 + fVar83) * fVar55;
                fVar77 = (fVar42 * fVar43 + fVar83 * fVar54) * fVar76;
                fVar79 = (fVar55 + fVar84 * fVar42) * fVar78;
                fVar81 = (fVar54 * fVar50 + fVar83 * fVar42) * fVar80;
                fVar78 = fVar78 * (fVar83 * fVar54 - fVar42 * fVar43);
                fVar80 = fVar80 * (fVar84 * fVar42 - fVar55);
                fVar76 = fVar76 * (fVar83 * fVar42 - fVar54 * fVar50);
                fVar43 = (float)((uint)((_DAT_146b2bcb0 - (fVar85 * fVar42 + fVar84 * fVar54)) *
                                       local_328) & _DAT_146b2bcc0);
                fVar50 = (float)((uint)((fRam0000000146b2bcb4 - (fVar85 * fVar42 + fVar82)) *
                                       fStack_324) & uRam0000000146b2bcc4);
                fVar49 = (float)((uint)((fRam0000000146b2bcb8 - (fVar84 * fVar54 + fVar82)) *
                                       fStack_320) & uRam0000000146b2bcc8);
                fVar82 = (float)((uint)((fRam0000000146b2bcbc - (fVar82 + fVar82)) * fStack_31c) &
                                uRam0000000146b2bccc);
                fVar54 = fStack_2a4 + fStack_2a4;
                fVar42 = (float)uStack_2a0 + (float)uStack_2a0;
                fVar65 = local_2a8 * (local_2a8 + local_2a8);
                fVar55 = uStack_2a0._4_4_ * (local_2a8 + local_2a8);
                fVar69 = (uStack_2a0._4_4_ * fVar42 + local_2a8 * fVar54) * (float)DAT_1464aa788;
                fVar70 = (fVar55 + fStack_2a4 * fVar42) * DAT_1464aa788._4_4_;
                fVar71 = (uStack_2a0._4_4_ * fVar54 + local_2a8 * fVar42) * DAT_1464aa790;
                fVar66 = DAT_1464aa788._4_4_ * (local_2a8 * fVar54 - uStack_2a0._4_4_ * fVar42);
                fVar67 = DAT_1464aa790 * (fStack_2a4 * fVar42 - fVar55);
                fVar68 = (float)DAT_1464aa788 * (local_2a8 * fVar42 - uStack_2a0._4_4_ * fVar54);
                fVar55 = (float)((uint)((_DAT_146b2bcb0 -
                                        ((float)uStack_2a0 * fVar42 + fStack_2a4 * fVar54)) *
                                       (float)DAT_1464aa788) & _DAT_146b2bcc0);
                fVar42 = (float)((uint)((fRam0000000146b2bcb4 -
                                        ((float)uStack_2a0 * fVar42 + fVar65)) * DAT_1464aa788._4_4_
                                       ) & uRam0000000146b2bcc4);
                fVar54 = (float)((uint)((fRam0000000146b2bcb8 - (fStack_2a4 * fVar54 + fVar65)) *
                                       DAT_1464aa790) & uRam0000000146b2bcc8);
                fVar65 = (float)((uint)((fRam0000000146b2bcbc - (fVar65 + fVar65)) * 0.0) &
                                uRam0000000146b2bccc);
                local_1e8 = fVar69 * fVar78 + fVar55 * fVar43 + fVar68 * fVar81 + fVar65 * local_318
                ;
                fStack_1e4 = fVar69 * fVar50 + fVar55 * fVar77 + fVar68 * fVar80 +
                             fVar65 * fStack_314;
                fStack_1e0 = fVar69 * fVar79 + fVar55 * fVar76 + fVar68 * fVar49 +
                             fVar65 * fStack_310;
                fStack_1dc = fVar69 * fVar82 + fVar55 * fVar82 + fVar68 * fVar82 +
                             fVar65 * fRam0000000146b2bcbc;
                local_1d8._4_4_ =
                     fVar42 * fVar50 + fVar66 * fVar77 + fVar70 * fVar80 + fVar65 * fStack_314;
                local_1d8._0_4_ =
                     fVar42 * fVar78 + fVar66 * fVar43 + fVar70 * fVar81 + fVar65 * local_318;
                uStack_1d0._0_4_ =
                     fVar42 * fVar79 + fVar66 * fVar76 + fVar70 * fVar49 + fVar65 * fStack_310;
                uStack_1d0._4_4_ =
                     fVar42 * fVar82 + fVar66 * fVar82 + fVar70 * fVar82 +
                     fVar65 * fRam0000000146b2bcbc;
                local_1c8._4_4_ =
                     fVar67 * fVar50 + fVar71 * fVar77 + fVar54 * fVar80 + fVar65 * fStack_314;
                local_1c8._0_4_ =
                     fVar67 * fVar78 + fVar71 * fVar43 + fVar54 * fVar81 + fVar65 * local_318;
                uStack_1c0._0_4_ =
                     fVar67 * fVar79 + fVar71 * fVar76 + fVar54 * fVar49 + fVar65 * fStack_310;
                uStack_1c0._4_4_ =
                     fVar67 * fVar82 + fVar71 * fVar82 + fVar54 * fVar82 +
                     fVar65 * fRam0000000146b2bcbc;
                local_1b8 = fVar58 * fVar78 + fVar51 * fVar43 + fVar59 * fVar81 +
                            fRam0000000146b2bcbc * local_318;
                fStack_1b4 = fVar58 * fVar50 + fVar51 * fVar77 + fVar59 * fVar80 +
                             fRam0000000146b2bcbc * fStack_314;
                fStack_1b0 = fVar58 * fVar79 + fVar51 * fVar76 + fVar59 * fVar49 +
                             fRam0000000146b2bcbc * fStack_310;
                fStack_1ac = fVar58 * fVar82 + fVar51 * fVar82 + fVar59 * fVar82 +
                             fRam0000000146b2bcbc * fRam0000000146b2bcbc;
                FMatrix::RemoveScaling(&local_1e8);
                auVar60 = _local_1c8;
                auVar44 = _local_1d8;
                fVar43 = (float)(-(uint)(local_368 <= (float)local_3a8._0_4_ * local_328) &
                                 (_DAT_146b2bd00 ^ (uint)fVar57) ^ _DAT_146b2bd00);
                fVar55 = (float)(-(uint)(fStack_364 <= (float)local_3a8._4_4_ * fStack_324) &
                                 (uRam0000000146b2bd04 ^ (uint)fVar87) ^ uRam0000000146b2bd04);
                fVar54 = (float)(-(uint)(fStack_360 <= fStack_3a0 * fStack_320) &
                                 (uRam0000000146b2bd08 ^ (uint)fVar88) ^ uRam0000000146b2bd08);
                local_1e8 = local_1e8 * fVar43;
                fStack_1e4 = fStack_1e4 * fVar43;
                fStack_1e0 = fStack_1e0 * fVar43;
                fVar43 = (float)uStack_1d0 * fVar55;
                fVar50 = (float)local_1d8._0_4_ * fVar55;
                auVar20._4_8_ = uStack_1d0;
                auVar20._0_4_ = (float)local_1d8._4_4_ * fVar55;
                local_1d8 = (undefined1  [8])(auVar20._0_8_ << 0x20);
                uStack_1d0._4_4_ = auVar44._12_4_;
                uStack_1d0._0_4_ = fVar43;
                fVar43 = (float)uStack_1c0 * fVar54;
                fVar55 = (float)local_1c8._0_4_ * fVar54;
                auVar21._4_8_ = uStack_1c0;
                auVar21._0_4_ = (float)local_1c8._4_4_ * fVar54;
                local_1c8 = (undefined1  [8])(auVar21._0_8_ << 0x20);
                uStack_1c0._4_4_ = auVar60._12_4_;
                uStack_1c0._0_4_ = fVar43;
                local_1d8._0_4_ = fVar50;
                local_1c8._0_4_ = fVar55;
                FQuat::FQuat(&local_248,&local_1e8);
                local_3b8 = 0x322bcc77;
                auVar47._0_4_ = local_248 * local_248 + fStack_240 * fStack_240;
                auVar47._4_4_ = fStack_244 * fStack_244 + fStack_23c * fStack_23c;
                auVar47._8_4_ = fStack_240 * fStack_240 + local_248 * local_248;
                auVar47._12_4_ = fStack_23c * fStack_23c + fStack_244 * fStack_244;
                auVar63._0_4_ = auVar47._4_4_ + auVar47._0_4_;
                auVar63._4_4_ = auVar47._8_4_ + auVar47._4_4_;
                auVar63._8_4_ = auVar47._12_4_ + auVar47._8_4_;
                auVar63._12_4_ = auVar47._0_4_ + auVar47._12_4_;
                auVar44 = rsqrtps(auVar47,auVar63);
                fVar43 = auVar44._0_4_;
                fVar55 = auVar44._4_4_;
                fVar50 = auVar44._8_4_;
                fVar54 = auVar44._12_4_;
                fVar43 = (fVar73 - fVar43 * fVar43 * auVar63._0_4_ * fVar73) * fVar43 + fVar43;
                fVar55 = (fVar52 - fVar55 * fVar55 * auVar63._4_4_ * fVar52) * fVar55 + fVar55;
                fVar50 = (fVar53 - fVar50 * fVar50 * auVar63._8_4_ * fVar53) * fVar50 + fVar50;
                fVar54 = (fVar56 - fVar54 * fVar54 * auVar63._12_4_ * fVar56) * fVar54 + fVar54;
                local_3a8._0_4_ =
                     ((uint)(((fVar73 - fVar43 * fVar43 * auVar63._0_4_ * fVar73) * fVar43 + fVar43)
                            * local_248) ^ _DAT_146b2bc80) & -(uint)(1e-08 <= auVar63._0_4_) ^
                     _DAT_146b2bc80;
                local_3a8._4_4_ =
                     ((uint)(((fVar52 - fVar55 * fVar55 * auVar63._4_4_ * fVar52) * fVar55 + fVar55)
                            * fStack_244) ^ uRam0000000146b2bc84) & -(uint)(1e-08 <= auVar63._4_4_)
                     ^ uRam0000000146b2bc84;
                fStack_3a0 = (float)(((uint)(((fVar53 - fVar50 * fVar50 * auVar63._8_4_ * fVar53) *
                                              fVar50 + fVar50) * fStack_240) ^ uRam0000000146b2bc88)
                                     & -(uint)(1e-08 <= auVar63._8_4_) ^ uRam0000000146b2bc88);
                fStack_39c = (float)(((uint)(((fVar56 - fVar54 * fVar54 * auVar63._12_4_ * fVar56) *
                                              fVar54 + fVar54) * fStack_23c) ^ uRam0000000146b2bc8c)
                                     & -(uint)(1e-08 <= auVar63._12_4_) ^ uRam0000000146b2bc8c);
                fVar43 = local_1b8;
                fVar55 = fStack_1b4;
                fStack_388 = fStack_1b0;
                fVar76 = local_328;
                fVar78 = fStack_324;
                fVar80 = fStack_320;
                fVar82 = fStack_31c;
                fVar54 = local_318;
                fVar42 = fStack_314;
                fVar49 = fStack_310;
                local_248 = (float)local_3a8._0_4_;
                fStack_244 = (float)local_3a8._4_4_;
                fStack_240 = fStack_3a0;
                fStack_23c = fStack_39c;
              }
              fVar50 = *(float *)(uVar29 + 200 + lVar30);
              fVar73 = local_3c0 * *(float *)(uVar29 + 0xcc + lVar30);
              iVar22 = *(int *)(param_1 + 0x1c8);
              fVar52 = (float)local_3c8 * fVar50;
              local_378 = CONCAT31(local_378._1_3_,1);
              fVar50 = local_3c8._4_4_ * fVar50;
              fStack_384 = fVar43 + fVar52;
              fStack_37c = fStack_388 + fVar73;
              fStack_388 = fStack_388 - fVar73;
              fStack_380 = fVar55 + fVar50;
              local_390 = CONCAT44(fVar55 - fVar50,fVar43 - fVar52);
              *(int *)(param_1 + 0x1c8) = iVar22 + 1;
              local_280 = fStack_388;
              local_274 = fStack_37c;
              if (*(int *)(param_1 + 0x1cc) < iVar22 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar22);
                local_348 = _DAT_146b2bc90;
                fStack_344 = fRam0000000146b2bc94;
                fStack_340 = fRam0000000146b2bc98;
                fStack_33c = fRam0000000146b2bc9c;
                uVar89 = _DAT_146b2bcc0;
                uVar90 = uRam0000000146b2bcc4;
                uVar91 = uRam0000000146b2bcc8;
                uVar92 = uRam0000000146b2bccc;
              }
              uVar26 = (ulonglong)local_378;
              uVar32 = (int)uVar33 + 1;
              uVar33 = (ulonglong)uVar32;
              uVar29 = uVar29 + 0xd0;
              puVar27 = (undefined8 *)((longlong)iVar22 * 0x30 + *plVar1);
              *puVar27 = local_390;
              puVar27[1] = CONCAT44(fStack_384,fStack_388);
              *(float *)(puVar27 + 2) = fStack_380;
              *(float *)((longlong)puVar27 + 0x14) = fStack_37c;
              *(uint *)(puVar27 + 3) = local_378;
              *(undefined1 (*) [16])(puVar27 + 4) = _local_3a8;
              fVar43 = (float)local_338._0_4_;
              fVar55 = (float)local_338._4_4_;
              fVar50 = fStack_330;
            } while ((int)uVar32 < *(int *)(uVar25 + 0x50));
          }
          uVar32 = local_398;
          if (0 < *(int *)(uVar25 + 0x60)) {
            fVar43 = 0.0;
            local_338._4_4_ = fVar42;
            local_338._0_4_ = fVar54;
            fStack_330 = fVar49;
            fStack_32c = 0.0;
            uVar29 = uVar31;
            uVar33 = uVar31;
            while( true ) {
              fVar73 = fRam0000000146b2bcb8;
              fVar50 = fRam0000000146b2bcb4;
              fVar55 = _DAT_146b2bcb0;
              lVar30 = *(longlong *)(uVar25 + 0x58) + uVar29;
              fVar76 = (float)((uint)_DAT_146b2bcb0 & uVar89);
              fVar78 = (float)((uint)fRam0000000146b2bcb4 & uVar90);
              fVar80 = (float)((uint)fRam0000000146b2bcb8 & uVar91);
              fVar82 = (float)((uint)fRam0000000146b2bcbc & uVar92);
              local_1e8 = *(float *)(lVar30 + 0x90);
              fStack_1e4 = *(float *)(lVar30 + 0x94);
              fStack_1e0 = *(float *)(lVar30 + 0x98);
              fStack_1dc = *(float *)(lVar30 + 0x9c);
              _local_1c8 = *(undefined1 (*) [16])(lVar30 + 0xb0);
              local_368 = local_1c8._0_4_;
              fStack_364 = local_1c8._4_4_;
              fStack_360 = local_1c8._8_4_;
              fStack_35c = local_1c8._12_4_;
              auVar7._4_4_ = fVar78;
              auVar7._0_4_ = fVar76;
              auVar7._8_4_ = fVar80;
              auVar7._12_4_ = fVar82;
              auVar44 = minps(_local_1c8,auVar7);
              local_1d8._0_4_ = (float)local_3c8 * *(float *)(lVar30 + 0xa0);
              local_1d8._4_4_ = local_3c8._4_4_ * *(float *)(lVar30 + 0xa4);
              uStack_1d0._0_4_ = local_3c0 * *(float *)(lVar30 + 0xa8);
              uStack_1d0._4_4_ = *(float *)(lVar30 + 0xac) * 0.0;
              auVar41._4_4_ = -(uint)(auVar44._4_4_ < fRam0000000146b2bd14);
              auVar41._0_4_ = -(uint)(auVar44._0_4_ < _DAT_146b2bd10);
              auVar41._8_4_ = -(uint)(auVar44._8_4_ < fRam0000000146b2bd18);
              auVar41._12_4_ = -(uint)(auVar44._12_4_ < fRam0000000146b2bd1c);
              iVar22 = movmskps((int)uVar26,auVar41);
              local_3a8._4_4_ = fRam0000000146b2bd14;
              local_3a8._0_4_ = _DAT_146b2bd10;
              fStack_3a0 = fRam0000000146b2bd18;
              fStack_39c = fRam0000000146b2bd1c;
              if (iVar22 == 0) {
                fVar53 = fStack_1e4 * 0.0;
                fVar56 = local_1e8 * 0.0;
                local_1d8._0_4_ = (float)local_1d8._0_4_ * fVar76;
                local_1d8._4_4_ = (float)local_1d8._4_4_ * fVar78;
                uStack_1d0._0_4_ = (float)uStack_1d0 * fVar80;
                uStack_1d0._4_4_ = uStack_1d0._4_4_ * fVar82;
                fVar73 = local_1e8 * 0.0;
                fVar52 = fStack_1e4 * 0.0;
                fVar55 = local_1e8 * 0.0;
                fVar50 = fStack_1e0 * 0.0;
                local_1c8._4_4_ = fStack_364 * fVar78;
                local_1c8._0_4_ = local_368 * fVar76;
                uStack_1c0._0_4_ = fStack_360 * fVar80;
                uStack_1c0._4_4_ = fStack_35c * fVar82;
                local_1e8 = fStack_1dc * 0.0 * _DAT_146b2bcf0 + local_1e8 * fRam0000000146b2bcbc +
                            fStack_1e0 * 0.0 * _DAT_146b2bce0 + fStack_1e4 * 0.0 * _DAT_146b2bcd0;
                fStack_1e4 = fStack_1e0 * 0.0 * fRam0000000146b2bcf4 +
                             fStack_1e4 * fRam0000000146b2bcbc +
                             fStack_1dc * 0.0 * fRam0000000146b2bce4 + fVar55 * fRam0000000146b2bcd4
                ;
                fStack_1e0 = fVar53 * fRam0000000146b2bcf8 + fStack_1e0 * fRam0000000146b2bcbc +
                             fVar73 * fRam0000000146b2bce8 + fStack_1dc * 0.0 * fRam0000000146b2bcd8
                ;
                fStack_1dc = fVar56 * fRam0000000146b2bcfc + fStack_1dc * fRam0000000146b2bcbc +
                             fVar52 * fRam0000000146b2bcec + fVar50 * fRam0000000146b2bcdc;
                fVar55 = (float)uStack_1d0 * 0.0 - (float)local_1d8._4_4_ * 0.0;
                fVar50 = (float)local_1d8._0_4_ * 0.0 - (float)uStack_1d0 * 0.0;
                fVar73 = (float)local_1d8._4_4_ * 0.0 - (float)local_1d8._0_4_ * 0.0;
                fVar76 = uStack_1d0._4_4_ * fRam0000000146b2bcbc -
                         uStack_1d0._4_4_ * fRam0000000146b2bcbc;
                fVar55 = fVar55 + fVar55;
                fVar50 = fVar50 + fVar50;
                fVar73 = fVar73 + fVar73;
                fVar76 = fVar76 + fVar76;
                local_1d8._4_4_ =
                     (fVar55 * 0.0 - fVar73 * 0.0) +
                     fVar50 * fRam0000000146b2bcbc + (float)local_1d8._4_4_ + fVar42;
                local_1d8._0_4_ =
                     (fVar73 * 0.0 - fVar50 * 0.0) +
                     fVar55 * fRam0000000146b2bcbc + (float)local_1d8._0_4_ + fVar54;
                uStack_1d0._0_4_ =
                     (fVar50 * 0.0 - fVar55 * 0.0) +
                     fVar73 * fRam0000000146b2bcbc + (float)uStack_1d0 + fVar49;
                uStack_1d0._4_4_ =
                     (fVar76 * fRam0000000146b2bcbc - fVar76 * fRam0000000146b2bcbc) +
                     fVar76 * fRam0000000146b2bcbc + uStack_1d0._4_4_ + fVar43;
              }
              else {
                fVar68 = fVar76 * local_368;
                fVar69 = fVar78 * fStack_364;
                fVar70 = fVar80 * fStack_360;
                fVar71 = fVar82 * fStack_35c;
                fVar65 = (fRam0000000146b2bcbc * 0.0 + 0.0) * fVar76;
                fVar66 = (fRam0000000146b2bcbc * 0.0 + 0.0) * fVar78;
                fVar67 = (fRam0000000146b2bcbc * 0.0 + 0.0) * fVar80;
                fVar52 = fVar78 * (0.0 - fRam0000000146b2bcbc * 0.0);
                fVar56 = fVar80 * (0.0 - fRam0000000146b2bcbc * 0.0);
                fVar87 = fVar76 * (0.0 - fRam0000000146b2bcbc * 0.0);
                fVar43 = (float)((uint)((_DAT_146b2bcb0 - 0.0) * fVar76) & uVar89);
                fVar42 = (float)((uint)((fRam0000000146b2bcb4 - 0.0) * fVar78) & uVar90);
                fVar78 = (float)((uint)((fRam0000000146b2bcb8 - 0.0) * fVar80) & uVar91);
                fVar80 = (float)((uint)((fRam0000000146b2bcbc - 0.0) * fVar82) & uVar92);
                fVar49 = fStack_1e4 + fStack_1e4;
                fVar76 = fStack_1e0 + fStack_1e0;
                fVar82 = local_1e8 * (local_1e8 + local_1e8);
                fVar54 = fStack_1dc * (local_1e8 + local_1e8);
                fVar51 = (fStack_1dc * fVar76 + local_1e8 * fVar49) * local_368;
                fVar58 = (fVar54 + fStack_1e4 * fVar76) * fStack_364;
                fVar59 = (fStack_1dc * fVar49 + local_1e8 * fVar76) * fStack_360;
                fVar53 = fStack_364 * (local_1e8 * fVar49 - fStack_1dc * fVar76);
                fVar57 = fStack_360 * (fStack_1e4 * fVar76 - fVar54);
                fVar88 = local_368 * (local_1e8 * fVar76 - fStack_1dc * fVar49);
                fVar54 = (float)((uint)((_DAT_146b2bcb0 -
                                        (fStack_1e0 * fVar76 + fStack_1e4 * fVar49)) * local_368) &
                                uVar89);
                fVar76 = (float)((uint)((fRam0000000146b2bcb4 - (fStack_1e0 * fVar76 + fVar82)) *
                                       fStack_364) & uVar90);
                fVar49 = (float)((uint)((fRam0000000146b2bcb8 - (fStack_1e4 * fVar49 + fVar82)) *
                                       fStack_360) & uVar91);
                fVar82 = (float)((uint)((fRam0000000146b2bcbc - (fVar82 + fVar82)) * fStack_35c) &
                                uVar92);
                local_308 = fVar51 * fVar52 + fVar54 * fVar43 + fVar88 * fVar67 +
                            fVar82 * (float)local_338._0_4_;
                fStack_304 = fVar51 * fVar42 + fVar54 * fVar65 + fVar88 * fVar56 +
                             fVar82 * (float)local_338._4_4_;
                fStack_300 = fVar51 * fVar66 + fVar54 * fVar87 + fVar88 * fVar78 +
                             fVar82 * fStack_330;
                fStack_2fc = fVar51 * fVar80 + fVar54 * fVar80 + fVar88 * fVar80 +
                             fVar82 * fRam0000000146b2bcbc;
                local_2f8 = fVar76 * fVar52 + fVar53 * fVar43 + fVar58 * fVar67 +
                            fVar82 * (float)local_338._0_4_;
                fStack_2f4 = fVar76 * fVar42 + fVar53 * fVar65 + fVar58 * fVar56 +
                             fVar82 * (float)local_338._4_4_;
                fStack_2f0 = fVar76 * fVar66 + fVar53 * fVar87 + fVar58 * fVar78 +
                             fVar82 * fStack_330;
                fStack_2ec = fVar76 * fVar80 + fVar53 * fVar80 + fVar58 * fVar80 +
                             fVar82 * fRam0000000146b2bcbc;
                local_2e8 = fVar57 * fVar52 + fVar59 * fVar43 + fVar49 * fVar67 +
                            fVar82 * (float)local_338._0_4_;
                fStack_2e4 = fVar57 * fVar42 + fVar59 * fVar65 + fVar49 * fVar56 +
                             fVar82 * (float)local_338._4_4_;
                fStack_2e0 = fVar57 * fVar66 + fVar59 * fVar87 + fVar49 * fVar78 +
                             fVar82 * fStack_330;
                fStack_2dc = fVar57 * fVar80 + fVar59 * fVar80 + fVar49 * fVar80 +
                             fVar82 * fRam0000000146b2bcbc;
                local_2d8 = (float)local_1d8._4_4_ * fVar52 + (float)local_1d8._0_4_ * fVar43 +
                            (float)uStack_1d0 * fVar67 +
                            fRam0000000146b2bcbc * (float)local_338._0_4_;
                fStack_2d4 = (float)local_1d8._4_4_ * fVar42 + (float)local_1d8._0_4_ * fVar65 +
                             (float)uStack_1d0 * fVar56 +
                             fRam0000000146b2bcbc * (float)local_338._4_4_;
                fStack_2d0 = (float)local_1d8._4_4_ * fVar66 + (float)local_1d8._0_4_ * fVar87 +
                             (float)uStack_1d0 * fVar78 + fRam0000000146b2bcbc * fStack_330;
                fStack_2cc = (float)local_1d8._4_4_ * fVar80 + (float)local_1d8._0_4_ * fVar80 +
                             (float)uStack_1d0 * fVar80 +
                             fRam0000000146b2bcbc * fRam0000000146b2bcbc;
                FMatrix::RemoveScaling(&local_308);
                fVar43 = (float)(-(uint)((float)local_3a8._0_4_ <= fVar68) &
                                 (_DAT_146b2bd00 ^ (uint)fVar55) ^ _DAT_146b2bd00);
                fVar55 = (float)(-(uint)((float)local_3a8._4_4_ <= fVar69) &
                                 (uRam0000000146b2bd04 ^ (uint)fVar50) ^ uRam0000000146b2bd04);
                fVar50 = (float)(-(uint)(fStack_3a0 <= fVar70) &
                                 (uRam0000000146b2bd08 ^ (uint)fVar73) ^ uRam0000000146b2bd08);
                local_308 = local_308 * fVar43;
                fStack_304 = fStack_304 * fVar43;
                fStack_300 = fStack_300 * fVar43;
                fStack_2f4 = fStack_2f4 * fVar55;
                fStack_2f0 = fStack_2f0 * fVar55;
                local_2f8 = local_2f8 * fVar55;
                fStack_2e4 = fStack_2e4 * fVar50;
                fStack_2e0 = fStack_2e0 * fVar50;
                local_2e8 = local_2e8 * fVar50;
                FQuat::FQuat(&local_238,&local_308);
                local_3b8 = 0x322bcc77;
                local_1c8._4_4_ = fVar69;
                local_1c8._0_4_ = fVar68;
                uStack_1c0._0_4_ = fVar70;
                uStack_1c0._4_4_ = fVar71;
                auVar48._0_4_ = local_238 * local_238 + fStack_230 * fStack_230;
                auVar48._4_4_ = fStack_234 * fStack_234 + fStack_22c * fStack_22c;
                auVar48._8_4_ = fStack_230 * fStack_230 + local_238 * local_238;
                auVar48._12_4_ = fStack_22c * fStack_22c + fStack_234 * fStack_234;
                auVar64._0_4_ = auVar48._4_4_ + auVar48._0_4_;
                auVar64._4_4_ = auVar48._8_4_ + auVar48._4_4_;
                auVar64._8_4_ = auVar48._12_4_ + auVar48._8_4_;
                auVar64._12_4_ = auVar48._0_4_ + auVar48._12_4_;
                auVar44 = rsqrtps(auVar48,auVar64);
                fVar43 = auVar44._0_4_;
                fVar55 = auVar44._4_4_;
                fVar50 = auVar44._8_4_;
                fVar73 = auVar44._12_4_;
                fVar43 = (local_348 - fVar43 * fVar43 * auVar64._0_4_ * local_348) * fVar43 + fVar43
                ;
                fVar55 = (fStack_344 - fVar55 * fVar55 * auVar64._4_4_ * fStack_344) * fVar55 +
                         fVar55;
                fVar50 = (fStack_340 - fVar50 * fVar50 * auVar64._8_4_ * fStack_340) * fVar50 +
                         fVar50;
                fVar73 = (fStack_33c - fVar73 * fVar73 * auVar64._12_4_ * fStack_33c) * fVar73 +
                         fVar73;
                local_1d8._4_4_ = fStack_2d4;
                local_1d8._0_4_ = local_2d8;
                uStack_1d0._0_4_ = fStack_2d0;
                local_238 = (float)(((uint)(((local_348 -
                                             fVar43 * fVar43 * auVar64._0_4_ * local_348) * fVar43 +
                                            fVar43) * local_238) ^ _DAT_146b2bc80) &
                                    -(uint)(1e-08 <= auVar64._0_4_) ^ _DAT_146b2bc80);
                fStack_234 = (float)(((uint)(((fStack_344 -
                                              fVar55 * fVar55 * auVar64._4_4_ * fStack_344) * fVar55
                                             + fVar55) * fStack_234) ^ uRam0000000146b2bc84) &
                                     -(uint)(1e-08 <= auVar64._4_4_) ^ uRam0000000146b2bc84);
                fStack_230 = (float)(((uint)(((fStack_340 -
                                              fVar50 * fVar50 * auVar64._8_4_ * fStack_340) * fVar50
                                             + fVar50) * fStack_230) ^ uRam0000000146b2bc88) &
                                     -(uint)(1e-08 <= auVar64._8_4_) ^ uRam0000000146b2bc88);
                fStack_22c = (float)(((uint)(((fStack_33c -
                                              fVar73 * fVar73 * auVar64._12_4_ * fStack_33c) *
                                              fVar73 + fVar73) * fStack_22c) ^ uRam0000000146b2bc8c)
                                     & -(uint)(1e-08 <= auVar64._12_4_) ^ uRam0000000146b2bc8c);
                uStack_1d0._4_4_ = 0.0;
                fVar54 = (float)local_338._0_4_;
                fVar42 = (float)local_338._4_4_;
                fVar49 = fStack_330;
                fVar43 = fStack_32c;
                local_1e8 = local_238;
                fStack_1e4 = fStack_234;
                fStack_1e0 = fStack_230;
                fStack_1dc = fStack_22c;
              }
              FUN_1423045a0(lVar30,&local_390,&local_1e8,&local_3c8);
              fVar50 = fStack_384;
              fVar55 = fStack_388;
              iVar22 = *(int *)(param_1 + 0x1c8);
              uVar23 = (undefined4)local_390;
              uVar72 = local_390._4_4_;
              local_3b8 = local_378;
              uVar3 = CONCAT44(fStack_37c,fStack_380);
              *(int *)(param_1 + 0x1c8) = iVar22 + 1;
              local_3a8._4_4_ =
                   fVar85 * local_1e8 * fRam0000000146b2bcf4 + fStack_1dc * fVar84 +
                   fVar86 * fStack_1e4 * fRam0000000146b2bce4 +
                   fVar83 * fStack_1e0 * fRam0000000146b2bcd4;
              local_3a8._0_4_ =
                   fVar86 * local_1e8 * _DAT_146b2bcf0 + fStack_1dc * fVar83 +
                   fVar85 * fStack_1e4 * _DAT_146b2bce0 + fVar84 * fStack_1e0 * _DAT_146b2bcd0;
              fStack_3a0 = fVar84 * local_1e8 * fRam0000000146b2bcf8 + fStack_1dc * fVar85 +
                           fVar83 * fStack_1e4 * fRam0000000146b2bce8 +
                           fVar86 * fStack_1e0 * fRam0000000146b2bcd8;
              fStack_39c = fVar83 * local_1e8 * fRam0000000146b2bcfc + fStack_1dc * fVar86 +
                           fVar84 * fStack_1e4 * fRam0000000146b2bcec +
                           fVar85 * fStack_1e0 * fRam0000000146b2bcdc;
              if (*(int *)(param_1 + 0x1cc) < iVar22 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar22);
              }
              uVar92 = uRam0000000146b2bccc;
              uVar91 = uRam0000000146b2bcc8;
              uVar90 = uRam0000000146b2bcc4;
              uVar89 = _DAT_146b2bcc0;
              uVar26 = (ulonglong)local_3b8;
              uVar34 = (int)uVar33 + 1;
              uVar33 = (ulonglong)uVar34;
              uVar29 = uVar29 + 0xd0;
              puVar28 = (undefined4 *)((longlong)iVar22 * 0x30 + *plVar1);
              *puVar28 = uVar23;
              puVar28[1] = uVar72;
              puVar28[2] = fVar55;
              puVar28[3] = fVar50;
              *(undefined8 *)(puVar28 + 4) = uVar3;
              puVar28[6] = local_3b8;
              *(undefined1 (*) [16])(puVar28 + 8) = _local_3a8;
              uVar32 = local_398;
              if (*(int *)(uVar25 + 0x60) <= (int)uVar34) break;
              local_348 = _DAT_146b2bc90;
              fStack_344 = fRam0000000146b2bc94;
              fStack_340 = fRam0000000146b2bc98;
              fStack_33c = fRam0000000146b2bc9c;
            }
          }
        }
        local_398 = uVar32 + 1;
        uVar25 = (ulonglong)local_398;
        local_2b8 = local_2b8 + 8;
        lVar30 = local_2c8;
      } while ((int)local_398 < (int)local_e0);
    }
    fVar50 = fRam0000000146b2bd28;
    fVar55 = fRam0000000146b2bd24;
    fVar43 = _DAT_146b2bd20;
    if (*(int *)(param_1 + 0x1c8) == 0) {
      lVar6 = *(longlong *)(lVar30 + 0x168);
      if (lVar6 == 0) {
        local_3c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_3c0 = DAT_1468b5d98;
      }
      else {
        local_3c8 = *(longlong *)(lVar6 + 0x220);
        local_3c0 = *(float *)(lVar6 + 0x228);
      }
      local_2c8 = local_3c8;
      local_2c0 = local_3c0;
      puVar27 = (undefined8 *)FBox::BuildAABB(&local_390,&local_2c8,param_1 + 0x1b0);
      uVar3 = puVar27[1];
      *(undefined8 *)(param_1 + 0x180) = *puVar27;
      *(undefined8 *)(param_1 + 0x188) = uVar3;
      *(undefined8 *)(param_1 + 400) = puVar27[2];
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(puVar27 + 3);
      lVar30 = *(longlong *)(lVar30 + 0x168);
      if (lVar30 == 0) {
        uVar75 = 0x3f800000;
        uVar23 = 0;
        uVar72 = 0;
        uVar74 = 0;
      }
      else {
        uVar23 = *(undefined4 *)(lVar30 + 0x210);
        uVar72 = *(undefined4 *)(lVar30 + 0x214);
        uVar74 = *(undefined4 *)(lVar30 + 0x218);
        uVar75 = *(undefined4 *)(lVar30 + 0x21c);
      }
      iVar22 = *(int *)(param_1 + 0x1c8);
      uVar12 = *puVar27;
      uVar13 = puVar27[1];
      uVar4 = *(undefined4 *)(puVar27 + 3);
      uVar3 = puVar27[2];
      *(int *)(param_1 + 0x1c8) = iVar22 + 1;
      if (*(int *)(param_1 + 0x1cc) < iVar22 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar22);
      }
      puVar27 = (undefined8 *)((longlong)iVar22 * 0x30 + *plVar1);
      *puVar27 = uVar12;
      puVar27[1] = uVar13;
      puVar27[2] = uVar3;
      *(undefined4 *)(puVar27 + 3) = uVar4;
      *(undefined4 *)(puVar27 + 4) = uVar23;
      *(undefined4 *)((longlong)puVar27 + 0x24) = uVar72;
      *(undefined4 *)(puVar27 + 5) = uVar74;
      *(undefined4 *)((longlong)puVar27 + 0x2c) = uVar75;
    }
    else {
      uVar25 = uVar31;
      if (0 < *(int *)(param_1 + 0x1c8)) {
        do {
          lVar30 = *plVar1;
          fVar53 = (float)((uint)_DAT_146b2bcb0 & uVar89);
          fVar56 = (float)((uint)fRam0000000146b2bcb4 & uVar90);
          fVar57 = (float)((uint)fRam0000000146b2bcb8 & uVar91);
          fVar73 = *(float *)(lVar30 + 0xc + uVar31);
          fVar83 = *(float *)(lVar30 + 0x10 + uVar31);
          fVar84 = *(float *)(lVar30 + 0x14 + uVar31);
          fVar85 = (fVar83 + *(float *)(lVar30 + 4 + uVar31)) * 0.5;
          pfVar2 = (float *)(lVar30 + 0x20 + (longlong)(int)uVar25 * 0x30);
          fVar42 = _DAT_146b2bd40 * *pfVar2;
          fVar49 = fRam0000000146b2bd44 * pfVar2[1];
          fVar76 = fRam0000000146b2bd48 * pfVar2[2];
          fVar78 = fRam0000000146b2bd4c * pfVar2[3];
          auVar8._4_4_ = fVar56;
          auVar8._0_4_ = fVar53;
          auVar8._8_4_ = fVar57;
          auVar8._12_4_ = (uint)fRam0000000146b2bcbc & uVar92;
          auVar44 = rcpps(ZEXT416((uint)fVar85),auVar8);
          fVar87 = (fVar73 - *(float *)(lVar30 + uVar31)) * 0.5;
          fVar80 = (float)((uint)((fVar73 + *(float *)(lVar30 + uVar31)) * 0.5 - 0.0) & uVar89);
          fVar82 = (float)((uint)(fVar85 - 0.0) & uVar90);
          fVar52 = (float)((uint)((fVar84 + *(float *)(lVar30 + 8 + uVar31)) * 0.5 - 0.0) & uVar91);
          fVar88 = (fVar83 - *(float *)(lVar30 + 4 + uVar31)) * 0.5;
          fVar51 = (fVar84 - *(float *)(lVar30 + 8 + uVar31)) * 0.5;
          fVar73 = fVar52 * fVar49 - fVar82 * fVar76;
          fVar83 = fVar80 * fVar76 - fVar52 * fVar42;
          fVar84 = fVar82 * fVar42 - fVar80 * fVar49;
          fVar85 = auVar44._0_4_;
          fVar86 = auVar44._4_4_;
          fVar54 = auVar44._8_4_;
          fVar73 = fVar73 + fVar73;
          fVar83 = fVar83 + fVar83;
          fVar84 = fVar84 + fVar84;
          fVar85 = (fVar85 + fVar85) - fVar85 * fVar85 * fVar53;
          fVar86 = (fVar86 + fVar86) - fVar86 * fVar86 * fVar56;
          fVar54 = (fVar54 + fVar54) - fVar54 * fVar54 * fVar57;
          fVar85 = (fVar85 + fVar85) - fVar85 * fVar85 * fVar53;
          fVar86 = (fVar86 + fVar86) - fVar86 * fVar86 * fVar56;
          fVar54 = (fVar54 + fVar54) - fVar54 * fVar54 * fVar57;
          fVar85 = ((fVar84 * fVar49 - fVar83 * fVar76) + fVar78 * fVar73 + fVar80) *
                   (float)(-(uint)((float)((uint)fVar53 & _DAT_146b2bd30) <= fVar43) & (uint)fVar85
                          ^ (uint)fVar85);
          fVar86 = ((fVar73 * fVar76 - fVar84 * fVar42) + fVar78 * fVar83 + fVar82) *
                   (float)(-(uint)((float)((uint)fVar56 & uRam0000000146b2bd34) <= fVar55) &
                           (uint)fVar86 ^ (uint)fVar86);
          fStack_388 = ((fVar83 * fVar42 - fVar73 * fVar49) + fVar78 * fVar84 + fVar52) *
                       (float)(-(uint)((float)((uint)fVar57 & uRam0000000146b2bd38) <= fVar50) &
                               (uint)fVar54 ^ (uint)fVar54);
          fStack_384 = fVar87 + fVar85;
          fStack_380 = fVar88 + fVar86;
          local_378 = CONCAT31(local_378._1_3_,1);
          fStack_37c = fVar51 + fStack_388;
          uVar32 = (int)uVar25 + 1;
          fStack_388 = fStack_388 - fVar51;
          local_390 = CONCAT44(fVar86 - fVar88,fVar85 - fVar87);
          *(undefined8 *)(lVar30 + uVar31) = local_390;
          ((undefined8 *)(lVar30 + uVar31))[1] = CONCAT44(fStack_384,fStack_388);
          *(ulonglong *)(lVar30 + 0x10 + uVar31) = CONCAT44(fStack_37c,fStack_380);
          *(uint *)(lVar30 + 0x18 + uVar31) = local_378;
          uVar31 = uVar31 + 0x30;
          uVar25 = (ulonglong)uVar32;
          local_280 = fStack_37c;
          local_274 = fStack_388;
        } while ((int)uVar32 < *(int *)(param_1 + 0x1c8));
      }
    }
    if (local_e8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ba5db0 FUN_142ba5db0 body=302 status=ok
// SIG undefined FUN_142ba5db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ba5db0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_24;
  
  fVar3 = (float)_DAT_1468b5d90;
  fVar4 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
  fVar2 = DAT_1468b5d98;
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168), lVar1 != 0)) {
    fVar3 = *(float *)(lVar1 + 0x220);
    fVar4 = *(float *)(lVar1 + 0x224);
    fVar2 = *(float *)(lVar1 + 0x228);
  }
  local_24 = CONCAT31(local_24._1_3_,1);
  *(float *)(param_1 + 0x180) = fVar3 - 100.0;
  *(float *)(param_1 + 0x184) = fVar4 - 100.0;
  *(float *)(param_1 + 0x188) = fVar2 - 100.0;
  *(float *)(param_1 + 0x18c) = fVar3 + 100.0;
  *(ulonglong *)(param_1 + 400) = CONCAT44(fVar2 + 100.0,fVar4 + 100.0);
  *(undefined4 *)(param_1 + 0x198) = local_24;
  return;
}



// FUNCTION 142ba5ee0 FUN_142ba5ee0 body=67 status=ok
// SIG undefined FUN_142ba5ee0(void)

void FUN_142ba5ee0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0xc0) + 0x110);
  if ((plVar2 != (longlong *)0x0) ||
     (plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0xc0) + 0x118), plVar2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*plVar2 + 0x30))();
    *(bool *)param_1[1] = lVar1 != 0;
  }
  return;
}



// FUNCTION 142ba5f30 FUN_142ba5f30 body=108 status=ok
// SIG undefined FUN_142ba5f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ba5f30(longlong *param_1)

{
  float fVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  longlong *plVar4;
  undefined1 (*pauVar5) [12];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_18 [16];
  
  plVar4 = (longlong *)FUN_142697a40(*(undefined8 *)(*param_1 + 0xc0));
  pauVar2 = (undefined1 (*) [16])param_1[1];
  if (plVar4 != (longlong *)0x0) {
    pauVar5 = (undefined1 (*) [12])(**(code **)(*plVar4 + 0x128))(plVar4,local_18);
    fVar7 = *(float *)(*pauVar5 + 8);
    fVar6 = *(float *)(*pauVar5 + 4);
    fVar1 = *(float *)*pauVar5;
    auVar3._12_4_ = 0;
    auVar3._0_12_ = *pauVar5;
    *pauVar2 = auVar3;
    fVar6 = fVar6 * fRam0000000146af9cc4;
    fVar7 = fVar7 * fRam0000000146af9cc8;
    fVar8 = fRam0000000146af9ccc * 0.0;
    *(float *)*pauVar2 = fVar1 * _DAT_146af9cc0;
    *(float *)(*pauVar2 + 4) = fVar6;
    *(float *)(*pauVar2 + 8) = fVar7;
    *(float *)(*pauVar2 + 0xc) = fVar8;
    return;
  }
  *(undefined8 *)*pauVar2 = 0;
  *(undefined8 *)(*pauVar2 + 8) = 0;
  return;
}



// FUNCTION 142ba5fb0 FUN_142ba5fb0 body=37 status=ok
// SIG undefined FUN_142ba5fb0(void)

undefined8 FUN_142ba5fb0(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x490) + 0x560))((longlong *)(param_1 + -0x490),param_2,1);
  return param_2;
}



// FUNCTION 142ba5fe0 FUN_142ba5fe0 body=79 status=ok
// SIG undefined FUN_142ba5fe0(void)

undefined8 * FUN_142ba5fe0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x24) & 2) == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x178) + 0x3f8))();
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  return param_2;
}



// FUNCTION 142ba6030 FUN_142ba6030 body=315 status=ok
// SIG undefined FUN_142ba6030(void)

void FUN_142ba6030(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_58 [56];
  longlong local_20;
  
  if ((*(longlong *)(param_1 + -0x28) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    lVar2 = UAITask::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + 8);
    lVar4 = lVar5;
    if (lVar5 != 0) {
      while (lVar4 != lVar2) {
        plVar1 = (longlong *)(lVar4 + 0x30);
        lVar4 = *plVar1;
        if (*plVar1 == 0) {
          return;
        }
      }
      if (lVar5 != 0) {
        if (lVar5 != 0) {
          lVar2 = UAITask::GetPrivateStaticClass();
          lVar5 = *(longlong *)(param_1 + 8);
          for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar2) goto LAB_142ba60d0;
          }
        }
        lVar5 = 0;
LAB_142ba60d0:
        lVar4 = DAT_146b2bae0;
        if (DAT_146b2bae0 != 0) {
          lVar3 = UAITask::GetPrivateStaticClass();
          lVar2 = lVar4;
          do {
            if (lVar2 == lVar3) goto LAB_142ba60f4;
            lVar2 = *(longlong *)(lVar2 + 0x30);
          } while (lVar2 != 0);
        }
        lVar4 = 0;
LAB_142ba60f4:
        if (lVar5 != lVar4) {
          if (*(longlong *)(param_1 + 8) != 0) {
            lVar2 = UAITask::GetPrivateStaticClass();
            lVar5 = *(longlong *)(param_1 + 8);
            for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
              if (lVar4 == lVar2) goto LAB_142ba6132;
            }
          }
          lVar5 = 0;
LAB_142ba6132:
          FUN_1422208c0(local_58,*(undefined8 *)(param_1 + -0x20),lVar5);
          FCompositeNavModifier::Add(param_2 + 0x70,local_58);
          if (local_20 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ba6170 GetNavigationData body=421 status=ok
// SIG undefined GetNavigationData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UNavModifierComponent::GetNavigationData(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [56];
  longlong local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar4 = UAITask::GetPrivateStaticClass();
        lVar9 = *(longlong *)(param_1 + 0x30);
        for (lVar7 = lVar9; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
          if (lVar7 == lVar4) goto LAB_142ba61e1;
        }
      }
      lVar9 = 0;
LAB_142ba61e1:
      local_58 = _DAT_146b2bcb0 & _DAT_146b2bcc0;
      uStack_54 = uRam0000000146b2bcb4 & uRam0000000146b2bcc4;
      uStack_50 = uRam0000000146b2bcb8 & uRam0000000146b2bcc8;
      uStack_4c = uRam0000000146b2bcbc & uRam0000000146b2bccc;
      bVar1 = *(byte *)(param_1 + 0x44);
      lVar7 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x48);
      local_78 = *(undefined4 *)(lVar7 + 0x20);
      uStack_74 = *(undefined4 *)(lVar7 + 0x24);
      uStack_70 = *(undefined4 *)(lVar7 + 0x28);
      uStack_6c = *(undefined4 *)(lVar7 + 0x2c);
      local_68 = 0;
      uStack_60 = 0;
      puVar5 = (uint *)FAreaNavModifier::FAreaNavModifier(local_c8,lVar7,&local_78,lVar9);
      *(byte *)((longlong)puVar5 + 0x4a) = *(byte *)((longlong)puVar5 + 0x4a) & 0xfe;
      *(byte *)((longlong)puVar5 + 0x4a) = *(byte *)((longlong)puVar5 + 0x4a) | bVar1 & 1;
      iVar2 = *(int *)(param_2 + 0x90);
      *(int *)(param_2 + 0x90) = iVar2 + 1;
      if (*(int *)(param_2 + 0x94) < iVar2 + 1) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2 + 0x88,iVar2);
      }
      FAreaNavModifier::FAreaNavModifier
                ((longlong)iVar2 * 0x50 + *(longlong *)(param_2 + 0x88),puVar5);
      uVar3 = *(uint *)(param_2 + 0x70);
      uVar6 = *(uint *)(param_2 + 0xb8);
      *(uint *)(param_2 + 0x70) = ((*puVar5 | uVar3) ^ uVar3) & 1 ^ uVar3;
      uVar6 = (((uint)*(byte *)((longlong)puVar5 + 0x4a) * 2 | uVar6) ^ uVar6) & 2 ^ uVar6;
      *(uint *)(param_2 + 0xb8) = uVar6;
      *(uint *)(param_2 + 0xb8) =
           (((uint)*(byte *)((longlong)puVar5 + 0x4a) * 2 | uVar6) ^ uVar6) & 4 ^ uVar6;
      if (local_90 != 0) {
        FMemory::Free();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 142ba6330 FUN_142ba6330 body=199 status=ok
// SIG undefined FUN_142ba6330(void)

void FUN_142ba6330(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  FUN_142343b00();
  if (((*(byte *)(param_1 + 0x19c) & 1) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    lVar2 = plVar1[0x2d];
    if (lVar2 != 0) {
      uVar4 = UNavRelevantInterface::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
      if (((plVar5 != (longlong *)0x0) &&
          (cVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), cVar3 != '\0')) &&
         (cVar3 = (**(code **)(*plVar1 + 0x638))(plVar1,lVar2), cVar3 != '\0')) {
        *(longlong *)(param_1 + 0x1a0) = lVar2;
      }
    }
    if (*(longlong *)(param_1 + 0x1a0) == 0) {
      uVar4 = UNavRelevantInterface::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar4);
      if ((plVar5 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), cVar3 != '\0')) {
        *(longlong **)(param_1 + 0x1a0) = plVar1;
      }
    }
  }
  FUN_142251d60(param_1);
  return;
}



// FUNCTION 142ba6400 FUN_142ba6400 body=27 status=ok
// SIG undefined FUN_142ba6400(void)

void FUN_142ba6400(undefined8 param_1)

{
  FUN_142344780();
  FUN_142251da0(param_1);
  return;
}



// FUNCTION 142ba6430 FUN_142ba6430 body=137 status=ok
// SIG undefined FUN_142ba6430(void)

void FUN_142ba6430(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar1 = UAITask::GetPrivateStaticClass();
    lVar3 = param_2;
    do {
      lVar4 = param_2;
      if (lVar3 == lVar1) goto LAB_142ba6462;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  lVar4 = 0;
LAB_142ba6462:
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar2 = UAITask::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_1 + 0x498);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_142ba6490;
    }
  }
  lVar3 = 0;
LAB_142ba6490:
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x498) = param_2;
    FUN_142252cd0(param_1);
  }
  return;
}



// FUNCTION 142ba64c0 FUN_142ba64c0 body=156 status=ok
// SIG undefined FUN_142ba64c0(void)

void FUN_142ba64c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  lVar3 = lVar4;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    lVar1 = UAITask::GetPrivateStaticClass();
    for (lVar5 = *(longlong *)(param_1 + 0x1a8);
        (lVar3 = lVar4, lVar5 != 0 && (lVar3 = *(longlong *)(param_1 + 0x1a8), lVar5 != lVar1));
        lVar5 = *(longlong *)(lVar5 + 0x30)) {
    }
  }
  lVar5 = lVar4;
  if (param_2 != 0) {
    lVar2 = UAITask::GetPrivateStaticClass();
    lVar1 = param_2;
    do {
      lVar5 = param_2;
      if (lVar1 == lVar2) break;
      lVar1 = *(longlong *)(lVar1 + 0x30);
      lVar5 = lVar4;
    } while (lVar1 != 0);
  }
  if (lVar3 != lVar5) {
    *(longlong *)(param_1 + 0x1a8) = param_2;
    FUN_142252d00(param_1);
  }
  return;
}



// FUNCTION 142ba6560 FUN_142ba6560 body=44 status=ok
// SIG undefined FUN_142ba6560(void)

void FUN_142ba6560(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0xba) >> 4 & 1) != param_2) {
    *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) & 0xef | param_2 << 4;
    FUN_142252d00();
    return;
  }
  return;
}



// FUNCTION 142ba6590 FUN_142ba6590 body=35 status=ok
// SIG undefined FUN_142ba6590(void)

void FUN_142ba6590(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + -0x178) + 0x3f8))();
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return;
}



// FUNCTION 142ba65c0 FUN_142ba65c0 body=120 status=ok
// SIG undefined FUN_142ba65c0(void)

void FUN_142ba65c0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong local_28;
  undefined8 *local_20;
  code *local_18;
  longlong *plStack_10;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 200);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  plStack_10 = &local_28;
  local_18 = FUN_142ba5f30;
  local_28 = param_1;
  local_20 = param_2;
  FUN_1426936b0(*(undefined8 *)(param_1 + 0xc0),&local_18);
  return;
}



// FUNCTION 142ba6640 FUN_142ba6640 body=121 status=ok
// SIG undefined FUN_142ba6640(void)

void FUN_142ba6640(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 *local_38;
  longlong *plStack_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 200);
  if (cVar1 != '\0') {
    plStack_30 = &local_28;
    local_38 = &LAB_142ba5fa0;
    local_28 = param_1;
    local_20 = param_2;
    local_18 = param_3;
    FUN_1426936b0(*(undefined8 *)(param_1 + 0xc0),&local_38);
  }
  return;
}



// FUNCTION 142ba66c0 FUN_142ba66c0 body=123 status=ok
// SIG undefined FUN_142ba66c0(void)

ulonglong FUN_142ba66c0(longlong param_1)

{
  ulonglong in_RAX;
  byte local_res8 [32];
  longlong local_28;
  byte *local_20;
  code *local_18;
  longlong *plStack_10;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    in_RAX = FWeakObjectPtr::IsValid(param_1 + 200);
    if ((char)in_RAX != '\0') {
      local_20 = local_res8;
      plStack_10 = &local_28;
      local_res8[0] = 0;
      local_18 = FUN_142ba5ee0;
      local_28 = param_1;
      FUN_1426936b0(*(undefined8 *)(param_1 + 0xc0),&local_18);
      return (ulonglong)local_res8[0];
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ba6740 FUN_142ba6740 body=8 status=ok
// SIG undefined FUN_142ba6740(void)

void FUN_142ba6740(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}



// FUNCTION 142ba6750 FUN_142ba6750 body=47 status=ok
// SIG undefined FUN_142ba6750(void)

longlong FUN_142ba6750(void)

{
  if (DAT_146b2bfc0 == 0) {
    FUN_141786440(&DAT_146b2bfc0,&PTR_GetPrivateStaticClass_1457d80c0);
  }
  return DAT_146b2bfc0;
}



// FUNCTION 142ba67a0 FUN_142ba67a0 body=162 status=ok
// SIG undefined FUN_142ba67a0(void)

longlong FUN_142ba67a0(void)

{
  if (DAT_146b2bfd8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokTraversalType_ClimbUp",&DAT_146b2bfd8,
                  FUN_140447710,0x78,0x10000000,0,L"Engine",&LAB_142ba7e50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDialog_Speaker::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2bfd8;
}



// FUNCTION 142ba6860 FUN_142ba6860 body=162 status=ok
// SIG undefined FUN_142ba6860(void)

longlong FUN_142ba6860(void)

{
  if (DAT_146b2bfe8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokTraversalType_DropDown",&DAT_146b2bfe8,
                  FUN_140447710,0x70,0x10000000,0,L"Engine",&LAB_142ba7e70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDialog_Speaker::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2bfe8;
}



// FUNCTION 142ba6920 FUN_142ba6920 body=162 status=ok
// SIG undefined FUN_142ba6920(void)

longlong FUN_142ba6920(void)

{
  if (DAT_146b2bff8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokTraversalType_Jump",&DAT_146b2bff8,
                  FUN_140447710,0x70,0x10000000,0,L"Engine",&LAB_142ba7e90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDialog_Speaker::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2bff8;
}



// FUNCTION 142ba69e0 FUN_142ba69e0 body=162 status=ok
// SIG undefined FUN_142ba69e0(void)

longlong FUN_142ba69e0(void)

{
  if (DAT_146b2c008 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokTraversalType_Vault",&DAT_146b2c008,
                  FUN_140447710,0x88,0x10000000,0,L"Engine",&LAB_142ba7eb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDialog_Speaker::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c008;
}



// FUNCTION 142ba6aa0 FUN_142ba6aa0 body=162 status=ok
// SIG undefined FUN_142ba6aa0(void)

longlong FUN_142ba6aa0(void)

{
  if (DAT_146b2c018 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"GbxUserEdgeBase",&DAT_146b2c018,FUN_140447710,0x30,
                  0x10000001,0,L"Engine",FUN_1405ba820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c018;
}



// FUNCTION 142ba6b50 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInterpTrack::GetPrivateStaticClass(void)

{
  if (DAT_146b2c028 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokUserEdge",&DAT_146b2c028,FUN_140447710,0x70,
                  0x10000001,0,L"Engine",&LAB_142ba7ed0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2c028;
}



// FUNCTION 142ba6c00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAITask::GetPrivateStaticClass(void)

{
  if (DAT_146b2c048 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavArea",&DAT_146b2c048,FUN_140447710,0x70,
                  0x10000005,0,L"Engine",&LAB_142ba7ef0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UNavAreaBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c048;
}



// FUNCTION 142ba6cd0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UNavLinkTrivial::StaticClass(void)

{
  if (DAT_146b2bef0 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavTraversalData",&DAT_146b2bef0,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",InternalConstructor<UAISenseEvent_Damage>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2bef0;
}



// FUNCTION 142ba6d80 FUN_142ba6d80 body=151 status=ok
// SIG undefined FUN_142ba6d80(void)

longlong FUN_142ba6d80(void)

{
  if (DAT_146b2bf00 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavMeshGenerationSettings",&DAT_146b2bf00,
                  FUN_140447710,0x188,0x10000006,0,L"Engine",&LAB_142ba7d50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2bf00;
}



// FUNCTION 142ba6e30 FUN_142ba6e30 body=53 status=ok
// SIG undefined FUN_142ba6e30(void)

void FUN_142ba6e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1457dd230;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142ba6e70 FUN_142ba6e70 body=162 status=ok
// SIG undefined FUN_142ba6e70(void)

longlong FUN_142ba6e70(void)

{
  if (DAT_146b2bdf0 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"AbstractNavData",&DAT_146b2bdf0,FUN_140447710,0x618,
                  0x10000006,0,L"Engine",&LAB_142ba7ca0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_142baab40,&LAB_140447700,0);
  }
  return DAT_146b2bdf0;
}



// FUNCTION 142ba6f20 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSymPostprocessExpFog_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x7c;
    *puVar1 = &PTR_FUN_1457dd348;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142ba6f70 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCrowdManagerBase::GetPrivateStaticClass(void)

{
  if (DAT_146b2be00 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"CrowdManagerBase",&DAT_146b2be00,FUN_140447710,0x28,
                  0x10000009,0,L"Engine",FUN_142ba7cc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2be00;
}



// FUNCTION 142ba7010 FUN_142ba7010 body=53 status=ok
// SIG undefined FUN_142ba7010(void)

void FUN_142ba7010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &PTR_FUN_1457dd460;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142ba7060 FUN_142ba7060 body=151 status=ok
// SIG undefined FUN_142ba7060(void)

longlong FUN_142ba7060(void)

{
  if (DAT_146b2be10 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavData",&DAT_146b2be10,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2be10;
}



// FUNCTION 142ba7100 FUN_142ba7100 body=47 status=ok
// SIG undefined FUN_142ba7100(void)

longlong FUN_142ba7100(void)

{
  if (DAT_146b2be08 == 0) {
    FUN_141786440(&DAT_146b2be08,&PTR_FUN_1457da740);
  }
  return DAT_146b2be08;
}



// FUNCTION 142ba7130 FUN_142ba7130 body=53 status=ok
// SIG undefined FUN_142ba7130(void)

void FUN_142ba7130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1457dd578;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142ba7180 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong URecastFilter_UseDefaultArea::StaticClass(void)

{
  if (DAT_146b2be20 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavigationQueryFilter",&DAT_146b2be20,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",&LAB_142ba7e10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UNavigationQueryFilter::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2be20;
}



// FUNCTION 142ba7230 FUN_142ba7230 body=53 status=ok
// SIG undefined FUN_142ba7230(void)

void FUN_142ba7230(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_1457dd690;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142ba7280 FUN_142ba7280 body=162 status=ok
// SIG undefined FUN_142ba7280(void)

longlong FUN_142ba7280(void)

{
  if (DAT_146b2be30 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"GbxNavLayerBase",&DAT_146b2be30,FUN_140447710,0x30,
                  0x10000001,0,L"Engine",FUN_1405ba820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2be30;
}



// FUNCTION 142ba7330 FUN_142ba7330 body=162 status=ok
// SIG undefined FUN_142ba7330(void)

longlong FUN_142ba7330(void)

{
  if (DAT_146b2be40 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavLayer",&DAT_146b2be40,FUN_140447710,0x38,
                  0x10000003,0,L"Engine",&LAB_142ba7cf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429500a0,&LAB_140447700,0);
  }
  return DAT_146b2be40;
}



// FUNCTION 142ba73e0 FUN_142ba73e0 body=53 status=ok
// SIG undefined FUN_142ba73e0(void)

void FUN_142ba73e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1457dd7a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142ba7420 FUN_142ba7420 body=47 status=ok
// SIG undefined FUN_142ba7420(void)

longlong FUN_142ba7420(void)

{
  if (DAT_146b2be38 == 0) {
    FUN_141786440(&DAT_146b2be38,&PTR_FUN_1457db090);
  }
  return DAT_146b2be38;
}



// FUNCTION 142ba7480 FUN_142ba7480 body=151 status=ok
// SIG undefined FUN_142ba7480(void)

longlong FUN_142ba7480(void)

{
  if (DAT_146b2be50 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavLayerRegistry",&DAT_146b2be50,FUN_140447710,
                  0x108,0x10000000,0,L"Engine",&LAB_142ba7d10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2be50;
}



// FUNCTION 142ba7530 FUN_142ba7530 body=162 status=ok
// SIG undefined FUN_142ba7530(void)

longlong FUN_142ba7530(void)

{
  if (DAT_146b2bf10 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavMeshLayer",&DAT_146b2bf10,FUN_140447710,0x48
                  ,0x10000007,0,L"Engine",&LAB_142ba7d70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142ba7330,&LAB_140447700,0);
  }
  return DAT_146b2bf10;
}



// FUNCTION 142ba75e0 FUN_142ba75e0 body=47 status=ok
// SIG undefined FUN_142ba75e0(void)

longlong FUN_142ba75e0(void)

{
  if (DAT_146b2bf08 == 0) {
    FUN_141786440(&DAT_146b2bf08,&PTR_FUN_1457db5c0);
  }
  return DAT_146b2bf08;
}



// FUNCTION 142ba7620 FUN_142ba7620 body=162 status=ok
// SIG undefined FUN_142ba7620(void)

longlong FUN_142ba7620(void)

{
  if (DAT_146b2bf20 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavMeshLayer_Default",&DAT_146b2bf20,
                  FUN_140447710,0x48,0x10000006,0,L"Engine",&LAB_142ba7d70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142ba7530,&LAB_140447700,0);
  }
  return DAT_146b2bf20;
}



// FUNCTION 142ba76e0 FUN_142ba76e0 body=53 status=ok
// SIG undefined FUN_142ba76e0(void)

void FUN_142ba76e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1457dd8c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142ba7720 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong URecastNavMeshDataChunk::GetPrivateStaticClass(void)

{
  if (DAT_146b2bf40 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavVolume",&DAT_146b2bf40,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_142ba7d90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142ba7060,&LAB_140447700,0);
  }
  return DAT_146b2bf40;
}



// FUNCTION 142ba77e0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTwitchInteractivitySettings::GetPrivateStaticClass(void)

{
  if (DAT_146b2bf90 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavVolumeGenerationSettings",&DAT_146b2bf90,
                  FUN_140447710,0x68,0x10000006,0,L"Engine",&LAB_142ba7db0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2bf90;
}



// FUNCTION 142ba7880 FUN_142ba7880 body=53 status=ok
// SIG undefined FUN_142ba7880(void)

void FUN_142ba7880(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1457dd9d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142ba78c0 FUN_142ba78c0 body=53 status=ok
// SIG undefined FUN_142ba78c0(void)

void FUN_142ba78c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1457ddaf0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142ba7900 FUN_142ba7900 body=53 status=ok
// SIG undefined FUN_142ba7900(void)

void FUN_142ba7900(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1457ddc08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142ba7940 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1457ddd20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return;
  }
  return;
}



// FUNCTION 142ba7990 FUN_142ba7990 body=162 status=ok
// SIG undefined FUN_142ba7990(void)

longlong FUN_142ba7990(void)

{
  if (DAT_146b2bfa8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavVolumeLayer",&DAT_146b2bfa8,FUN_140447710,
                  0x48,0x10000007,0,L"Engine",&LAB_142ba7dd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142ba7330,&LAB_140447700,0);
  }
  return DAT_146b2bfa8;
}



// FUNCTION 142ba7a50 FUN_142ba7a50 body=47 status=ok
// SIG undefined FUN_142ba7a50(void)

longlong FUN_142ba7a50(void)

{
  if (DAT_146b2bfa0 == 0) {
    FUN_141786440(&DAT_146b2bfa0,&PTR_FUN_1457dc4e0);
  }
  return DAT_146b2bfa0;
}



// FUNCTION 142ba7a80 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UNavLinkTrivial::StaticClass(void)

{
  if (DAT_146b2be60 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavMesh",&DAT_146b2be60,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",&LAB_142ba7d30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142ba7060,&LAB_140447700,0);
  }
  return DAT_146b2be60;
}



// FUNCTION 142ba7b40 FUN_142ba7b40 body=162 status=ok
// SIG undefined FUN_142ba7b40(void)

longlong FUN_142ba7b40(void)

{
  if (DAT_146b2bfb8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokNavVolumeLayer_Default",&DAT_146b2bfb8,
                  FUN_140447710,0x48,0x10000006,0,L"Engine",&LAB_142ba7df0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142ba7990,&LAB_140447700,0);
  }
  return DAT_146b2bfb8;
}



// FUNCTION 142ba7c00 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDialog_Speaker::GetPrivateStaticClass(void)

{
  if (DAT_146b2bfc8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"HavokTraversalType",&DAT_146b2bfc8,FUN_140447710,
                  0x58,0x10000001,0,L"Engine",&LAB_142ba7e30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2bfc8;
}



// FUNCTION 142ba7cc0 FUN_142ba7cc0 body=41 status=ok
// SIG undefined FUN_142ba7cc0(void)

void FUN_142ba7cc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1457dcc30;
  }
  return;
}



// FUNCTION 142ba7f10 InternalConstructor<UAISenseEvent_Damage> body=55 status=ok
// SIG undefined InternalConstructor<UAISenseEvent_Damage>(void)

void InternalConstructor<UAISenseEvent_Damage>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1457dcf18;
    FUN_142b80600(puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 142ba7f50 FUN_142ba7f50 body=70 status=ok
// SIG undefined FUN_142ba7f50(void)

longlong FUN_142ba7f50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142ba82d0 FUN_142ba82d0 body=242 status=ok
// SIG undefined FUN_142ba82d0(void)

undefined8 FUN_142ba82d0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_3 + 0x28);
    do {
      *param_2 = puVar7[-5];
      puVar1 = param_2 + 5;
      uVar3 = *(undefined4 *)((longlong)puVar7 + -0x1c);
      uVar4 = *(undefined4 *)(puVar7 + -3);
      uVar5 = *(undefined4 *)((longlong)puVar7 + -0x14);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar7 + -4);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
      *(undefined4 *)(param_2 + 2) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
      param_2[3] = puVar7[-2];
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar7 + -1);
      if (puVar1 != puVar7) {
        iVar2 = *(int *)(puVar7 + 1);
        _Src = (void *)*puVar7;
        *(int *)(param_2 + 6) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x34) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x34) = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
        }
      }
      puVar1 = puVar7 + 2;
      uVar6 = puVar7[3];
      puVar7 = puVar7 + 9;
      param_2[7] = *puVar1;
      param_2[8] = uVar6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 9;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142ba83d0 Copy body=199 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDirectorProStruct>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 0x10);
    do {
      if (param_2 != (undefined8 *)(puVar3 + -4)) {
        iVar2 = puVar3[-2];
        _Src = *(void **)(puVar3 + -4);
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 3);
        }
      }
      *(undefined4 *)(param_2 + 2) = *puVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = puVar3[1];
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 8;
      *(undefined4 *)(param_2 + 3) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142ba84a0 ERuntimeGenerationType_StaticEnum body=55 status=ok
// SIG undefined ERuntimeGenerationType_StaticEnum(void)

void ERuntimeGenerationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2bd60 == 0) {
    uVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bd60 = GetStaticEnum(FUN_142ba90d0,uVar1,L"EHavokNavMaterial");
  }
  return;
}



// FUNCTION 142ba84e0 ERuntimeGenerationType_StaticEnum body=55 status=ok
// SIG undefined ERuntimeGenerationType_StaticEnum(void)

void ERuntimeGenerationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2bd78 == 0) {
    uVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bd78 = GetStaticEnum(FUN_142ba9100,uVar1,L"EHavokNavMeshCharacterWidthUsage");
  }
  return;
}



// FUNCTION 142ba8520 ERuntimeGenerationType_StaticEnum body=55 status=ok
// SIG undefined ERuntimeGenerationType_StaticEnum(void)

void ERuntimeGenerationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2bd80 == 0) {
    uVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bd80 = GetStaticEnum(FUN_142ba9130,uVar1,L"EHavokNavMeshEdgeMatchingMetric");
  }
  return;
}



// FUNCTION 142ba8560 ERuntimeGenerationType_StaticEnum body=55 status=ok
// SIG undefined ERuntimeGenerationType_StaticEnum(void)

void ERuntimeGenerationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2bd68 == 0) {
    uVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bd68 = GetStaticEnum(FUN_142ba9160,uVar1,L"EHavokNavMeshVertexSelectionMethod");
  }
  return;
}



// FUNCTION 142ba85a0 ERuntimeGenerationType_StaticEnum body=55 status=ok
// SIG undefined ERuntimeGenerationType_StaticEnum(void)

void ERuntimeGenerationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2bd70 == 0) {
    uVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bd70 = GetStaticEnum(FUN_142ba9190,uVar1,L"EHavokNavMeshWalkableTriangleSeetings");
  }
  return;
}



// FUNCTION 142ba85e0 ERuntimeGenerationType_StaticEnum body=55 status=ok
// SIG undefined ERuntimeGenerationType_StaticEnum(void)

void ERuntimeGenerationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2bd88 == 0) {
    uVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bd88 =
         GetStaticEnum(FUN_142ba91c0,uVar1,L"EHavokNavVolumeCellWidthToResolutionRounding");
  }
  return;
}



// FUNCTION 142ba8620 ERuntimeGenerationType_StaticEnum body=55 status=ok
// SIG undefined ERuntimeGenerationType_StaticEnum(void)

void ERuntimeGenerationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b2bd58 == 0) {
    uVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bd58 = GetStaticEnum(FUN_142ba91f0,uVar1,L"EHavokUserEdgeDirection");
  }
  return;
}



// FUNCTION 142ba8660 FUN_142ba8660 body=6 status=ok
// SIG undefined FUN_142ba8660(void)

undefined8 FUN_142ba8660(void)

{
  return 0xf521122f;
}



// FUNCTION 142ba8670 FUN_142ba8670 body=6 status=ok
// SIG undefined FUN_142ba8670(void)

undefined8 FUN_142ba8670(void)

{
  return 0x953be77b;
}



// FUNCTION 142ba8680 FUN_142ba8680 body=6 status=ok
// SIG undefined FUN_142ba8680(void)

undefined8 FUN_142ba8680(void)

{
  return 0x4e7f03d6;
}



// FUNCTION 142ba8690 FUN_142ba8690 body=6 status=ok
// SIG undefined FUN_142ba8690(void)

undefined8 FUN_142ba8690(void)

{
  return 0xc393b394;
}



// FUNCTION 142ba86a0 FUN_142ba86a0 body=6 status=ok
// SIG undefined FUN_142ba86a0(void)

undefined8 FUN_142ba86a0(void)

{
  return 0xb0397d6c;
}



// FUNCTION 142ba86b0 FUN_142ba86b0 body=6 status=ok
// SIG undefined FUN_142ba86b0(void)

undefined8 FUN_142ba86b0(void)

{
  return 0xcad60a4e;
}



// FUNCTION 142ba86c0 FUN_142ba86c0 body=6 status=ok
// SIG undefined FUN_142ba86c0(void)

undefined8 FUN_142ba86c0(void)

{
  return 0xb96f17cc;
}



// FUNCTION 142ba86d0 FUN_142ba86d0 body=6 status=ok
// SIG undefined FUN_142ba86d0(void)

undefined8 FUN_142ba86d0(void)

{
  return 0x9a4a9d4c;
}



// FUNCTION 142ba86e0 FUN_142ba86e0 body=6 status=ok
// SIG undefined FUN_142ba86e0(void)

undefined8 FUN_142ba86e0(void)

{
  return 0xa991e5f3;
}



// FUNCTION 142ba86f0 FUN_142ba86f0 body=6 status=ok
// SIG undefined FUN_142ba86f0(void)

undefined8 FUN_142ba86f0(void)

{
  return 0x768cdc;
}



// FUNCTION 142ba8700 FUN_142ba8700 body=6 status=ok
// SIG undefined FUN_142ba8700(void)

undefined8 FUN_142ba8700(void)

{
  return 0xe7569377;
}



// FUNCTION 142ba8750 Serialize body=112 status=ok
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
  FUN_142b97380(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142ba87c0 Serialize body=112 status=ok
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
  FUN_142b973b0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142ba8830 Serialize body=112 status=ok
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
  UNavArea::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142ba88a0 thunk_FUN_142baab40 body=5 status=ok
// SIG undefined thunk_FUN_142baab40(void)

void thunk_FUN_142baab40(void)

{
  FUN_142baab40();
  return;
}



// FUNCTION 142ba88b0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UNavigationQueryFilter::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 142ba88c0 FUN_142ba88c0 body=82 status=ok
// SIG undefined FUN_142ba88c0(void)

void FUN_142ba88c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2bed8 == 0) {
    uVar1 = FUN_142ba8660();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bed8 =
         GetStaticStruct(FUN_142ba9220,uVar2,L"HavokNavMeshEdgeMatchingSettings",0x28,uVar1);
  }
  return;
}



// FUNCTION 142ba8920 FUN_142ba8920 body=82 status=ok
// SIG undefined FUN_142ba8920(void)

void FUN_142ba8920(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2bea8 == 0) {
    uVar1 = FUN_142ba8670();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bea8 =
         GetStaticStruct(FUN_142ba9250,uVar2,L"HavokNavMeshExtraVertexSettings",0x24,uVar1);
  }
  return;
}



// FUNCTION 142ba8980 FUN_142ba8980 body=82 status=ok
// SIG undefined FUN_142ba8980(void)

void FUN_142ba8980(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2beb8 == 0) {
    uVar1 = FUN_142ba8680();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2beb8 =
         GetStaticStruct(FUN_142ba9280,uVar2,L"HavokNavMeshOverlappingTrianglesSettings",0xc,uVar1);
  }
  return;
}



// FUNCTION 142ba89e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNavCollisionCylinder::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2bec8 == 0) {
    uVar1 = FUN_142ba8690();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bec8 =
         GetStaticStruct(FUN_142ba92b0,uVar2,L"HavokNavMeshRegionPruningSettings",0x14,uVar1);
  }
  return;
}



// FUNCTION 142ba8a40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSymPostprocessExpFog::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2be98 == 0) {
    uVar1 = FUN_142ba86a0();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2be98 =
         GetStaticStruct(FUN_142ba92e0,uVar2,L"HavokNavMeshSimplificationSettings",0x7c,uVar1);
  }
  return;
}



// FUNCTION 142ba8aa0 FUN_142ba8aa0 body=82 status=ok
// SIG undefined FUN_142ba8aa0(void)

void FUN_142ba8aa0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2bf28 == 0) {
    uVar1 = FUN_142ba86b0();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bf28 = GetStaticStruct(FUN_142ba9310,uVar2,L"HavokNavSectionFixedBound",0x48,uVar1);
  }
  return;
}



// FUNCTION 142ba8b00 FUN_142ba8b00 body=82 status=ok
// SIG undefined FUN_142ba8b00(void)

void FUN_142ba8b00(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2bf68 == 0) {
    uVar1 = FUN_142ba86c0();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bf68 = GetStaticStruct(FUN_142ba9340,uVar2,L"HavokNavVolumeBorderSettings",8,uVar1);
  }
  return;
}



// FUNCTION 142ba8b60 FUN_142ba8b60 body=82 status=ok
// SIG undefined FUN_142ba8b60(void)

void FUN_142ba8b60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2bf78 == 0) {
    uVar1 = FUN_142ba86d0();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bf78 = GetStaticStruct(FUN_142ba9370,uVar2,L"HavokNavVolumeChunkSettings",8,uVar1);
  }
  return;
}



// FUNCTION 142ba8bc0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSupportedAreaData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2bf58 == 0) {
    uVar1 = FUN_142ba86e0();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bf58 = GetStaticStruct(FUN_142ba93a0,uVar2,L"HavokNavVolumeMergingSettings",0x20,uVar1)
    ;
  }
  return;
}



// FUNCTION 142ba8c20 FUN_142ba8c20 body=82 status=ok
// SIG undefined FUN_142ba8c20(void)

void FUN_142ba8c20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2bf48 == 0) {
    uVar1 = FUN_142ba86f0();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2bf48 = GetStaticStruct(FUN_142ba93d0,uVar2,L"HavokNavVolumePruningSettings",8,uVar1);
  }
  return;
}



// FUNCTION 142ba8c80 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSupportedAreaData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b2be88 == 0) {
    uVar1 = FUN_142ba8700();
    uVar2 = Z_Construct_UPackage__Script_NavigationSystem();
    DAT_146b2be88 =
         GetStaticStruct(FUN_142ba9400,uVar2,L"HavokTraversalAnalysisSettings",0x20,uVar1);
  }
  return;
}



// FUNCTION 142ba8ce0 Tick body=83 status=ok
// SIG undefined Tick(void)

void UCrowdManagerBase::Tick(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\NavigationSystem/Public/CrowdManagerBase.h",0xf,
             L"Pure virtual not implemented (%s)",L"UCrowdManagerBase::Tick");
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\NavigationSystem/Public/CrowdManagerBase.h",0xf,
             L"Pure virtual not implemented (%s)",L"UCrowdManagerBase::Tick");
  return;
}



// FUNCTION 142ba8d40 FUN_142ba8d40 body=47 status=ok
// SIG undefined FUN_142ba8d40(void)

longlong FUN_142ba8d40(void)

{
  if (DAT_146b2bde8 == 0) {
    FUN_141786440(&DAT_146b2bde8,&PTR_FUN_1457da140);
  }
  return DAT_146b2bde8;
}



// FUNCTION 142ba8d70 FUN_142ba8d70 body=47 status=ok
// SIG undefined FUN_142ba8d70(void)

longlong FUN_142ba8d70(void)

{
  if (DAT_146b2bdf8 == 0) {
    FUN_141786440(&DAT_146b2bdf8,&PTR_GetPrivateStaticClass_1457da480);
  }
  return DAT_146b2bdf8;
}



// FUNCTION 142ba8da0 FUN_142ba8da0 body=47 status=ok
// SIG undefined FUN_142ba8da0(void)

longlong FUN_142ba8da0(void)

{
  if (DAT_146b2be28 == 0) {
    FUN_141786440(&DAT_146b2be28,&PTR_FUN_1457daee0);
  }
  return DAT_146b2be28;
}



// FUNCTION 142ba8dd0 FUN_142ba8dd0 body=47 status=ok
// SIG undefined FUN_142ba8dd0(void)

longlong FUN_142ba8dd0(void)

{
  if (DAT_146b2c010 == 0) {
    FUN_141786440(&DAT_146b2c010,&PTR_FUN_1457d8af0);
  }
  return DAT_146b2c010;
}



// FUNCTION 142ba8e00 FUN_142ba8e00 body=47 status=ok
// SIG undefined FUN_142ba8e00(void)

longlong FUN_142ba8e00(void)

{
  if (DAT_146b2be48 == 0) {
    FUN_141786440(&DAT_146b2be48,&PTR_FUN_1457dc240);
  }
  return DAT_146b2be48;
}



// FUNCTION 142ba8e30 FUN_142ba8e30 body=47 status=ok
// SIG undefined FUN_142ba8e30(void)

longlong FUN_142ba8e30(void)

{
  if (DAT_146b2be58 == 0) {
    FUN_141786440(&DAT_146b2be58,&PTR_StaticClass_1457d8b70);
  }
  return DAT_146b2be58;
}



// FUNCTION 142ba8e60 FUN_142ba8e60 body=47 status=ok
// SIG undefined FUN_142ba8e60(void)

longlong FUN_142ba8e60(void)

{
  if (DAT_146b2bef8 == 0) {
    FUN_141786440(&DAT_146b2bef8,&PTR_FUN_1457db1a0);
  }
  return DAT_146b2bef8;
}



// FUNCTION 142ba8e90 FUN_142ba8e90 body=47 status=ok
// SIG undefined FUN_142ba8e90(void)

longlong FUN_142ba8e90(void)

{
  if (DAT_146b2bf18 == 0) {
    FUN_141786440(&DAT_146b2bf18,&PTR_FUN_1457db710);
  }
  return DAT_146b2bf18;
}



// FUNCTION 142ba8ec0 FUN_142ba8ec0 body=47 status=ok
// SIG undefined FUN_142ba8ec0(void)

longlong FUN_142ba8ec0(void)

{
  if (DAT_146b2bf38 == 0) {
    FUN_141786440(&DAT_146b2bf38,&PTR_GetPrivateStaticClass_1457db9d0);
  }
  return DAT_146b2bf38;
}



// FUNCTION 142ba8ef0 FUN_142ba8ef0 body=47 status=ok
// SIG undefined FUN_142ba8ef0(void)

longlong FUN_142ba8ef0(void)

{
  if (DAT_146b2bf88 == 0) {
    FUN_141786440(&DAT_146b2bf88,&PTR_GetPrivateStaticClass_1457dbfd0);
  }
  return DAT_146b2bf88;
}



// FUNCTION 142ba8f20 FUN_142ba8f20 body=47 status=ok
// SIG undefined FUN_142ba8f20(void)

longlong FUN_142ba8f20(void)

{
  if (DAT_146b2bfb0 == 0) {
    FUN_141786440(&DAT_146b2bfb0,&PTR_FUN_1457dc630);
  }
  return DAT_146b2bfb0;
}



// FUNCTION 142ba8f50 FUN_142ba8f50 body=47 status=ok
// SIG undefined FUN_142ba8f50(void)

longlong FUN_142ba8f50(void)

{
  if (DAT_146b2be18 == 0) {
    FUN_141786440(&DAT_146b2be18,&PTR_StaticClass_1457da9d0);
  }
  return DAT_146b2be18;
}



// FUNCTION 142ba8f80 FUN_142ba8f80 body=47 status=ok
// SIG undefined FUN_142ba8f80(void)

longlong FUN_142ba8f80(void)

{
  if (DAT_146b2bfd0 == 0) {
    FUN_141786440(&DAT_146b2bfd0,&PTR_FUN_1457d82b0);
  }
  return DAT_146b2bfd0;
}



// FUNCTION 142ba8fb0 FUN_142ba8fb0 body=47 status=ok
// SIG undefined FUN_142ba8fb0(void)

longlong FUN_142ba8fb0(void)

{
  if (DAT_146b2bfe0 == 0) {
    FUN_141786440(&DAT_146b2bfe0,&PTR_FUN_1457d84d0);
  }
  return DAT_146b2bfe0;
}



// FUNCTION 142ba8fe0 FUN_142ba8fe0 body=47 status=ok
// SIG undefined FUN_142ba8fe0(void)

longlong FUN_142ba8fe0(void)

{
  if (DAT_146b2bff0 == 0) {
    FUN_141786440(&DAT_146b2bff0,&PTR_FUN_1457d86b0);
  }
  return DAT_146b2bff0;
}



// FUNCTION 142ba9010 FUN_142ba9010 body=47 status=ok
// SIG undefined FUN_142ba9010(void)

longlong FUN_142ba9010(void)

{
  if (DAT_146b2c000 == 0) {
    FUN_141786440(&DAT_146b2c000,&PTR_FUN_1457d88b0);
  }
  return DAT_146b2c000;
}



// FUNCTION 142ba9040 FUN_142ba9040 body=47 status=ok
// SIG undefined FUN_142ba9040(void)

longlong FUN_142ba9040(void)

{
  if (DAT_146b2c020 == 0) {
    FUN_141786440(&DAT_146b2c020,&PTR_GetPrivateStaticClass_1457d8d60);
  }
  return DAT_146b2c020;
}



// FUNCTION 142ba9070 FUN_142ba9070 body=47 status=ok
// SIG undefined FUN_142ba9070(void)

longlong FUN_142ba9070(void)

{
  if (DAT_146b2c040 == 0) {
    FUN_141786440(&DAT_146b2c040,&PTR_GetPrivateStaticClass_1457d92e0);
  }
  return DAT_146b2c040;
}



// FUNCTION 142ba90a0 FUN_142ba90a0 body=47 status=ok
// SIG undefined FUN_142ba90a0(void)

longlong FUN_142ba90a0(void)

{
  if (DAT_146b2bee8 == 0) {
    FUN_141786440(&DAT_146b2bee8,&PTR_StaticClass_1457dae40);
  }
  return DAT_146b2bee8;
}



// FUNCTION 142ba90d0 FUN_142ba90d0 body=47 status=ok
// SIG undefined FUN_142ba90d0(void)

longlong FUN_142ba90d0(void)

{
  if (DAT_146b2c038 == 0) {
    FUN_1417866a0(&DAT_146b2c038,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668b380);
  }
  return DAT_146b2c038;
}



// FUNCTION 142ba9100 FUN_142ba9100 body=47 status=ok
// SIG undefined FUN_142ba9100(void)

longlong FUN_142ba9100(void)

{
  if (DAT_146b2be78 == 0) {
    FUN_1417866a0(&DAT_146b2be78,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668b240);
  }
  return DAT_146b2be78;
}



// FUNCTION 142ba9130 FUN_142ba9130 body=47 status=ok
// SIG undefined FUN_142ba9130(void)

longlong FUN_142ba9130(void)

{
  if (DAT_146b2be80 == 0) {
    FUN_1417866a0(&DAT_146b2be80,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668b290);
  }
  return DAT_146b2be80;
}



// FUNCTION 142ba9160 FUN_142ba9160 body=47 status=ok
// SIG undefined FUN_142ba9160(void)

longlong FUN_142ba9160(void)

{
  if (DAT_146b2be68 == 0) {
    FUN_1417866a0(&DAT_146b2be68,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668b1a0);
  }
  return DAT_146b2be68;
}



// FUNCTION 142ba9190 FUN_142ba9190 body=47 status=ok
// SIG undefined FUN_142ba9190(void)

longlong FUN_142ba9190(void)

{
  if (DAT_146b2be70 == 0) {
    FUN_1417866a0(&DAT_146b2be70,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668b1f0);
  }
  return DAT_146b2be70;
}



// FUNCTION 142ba91c0 FUN_142ba91c0 body=47 status=ok
// SIG undefined FUN_142ba91c0(void)

longlong FUN_142ba91c0(void)

{
  if (DAT_146b2bf98 == 0) {
    FUN_1417866a0(&DAT_146b2bf98,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668b2e0);
  }
  return DAT_146b2bf98;
}



// FUNCTION 142ba91f0 FUN_142ba91f0 body=47 status=ok
// SIG undefined FUN_142ba91f0(void)

longlong FUN_142ba91f0(void)

{
  if (DAT_146b2c030 == 0) {
    FUN_1417866a0(&DAT_146b2c030,&PTR_Z_Construct_UPackage__Script_NavigationSystem_14668b330);
  }
  return DAT_146b2c030;
}



// FUNCTION 142ba9220 FUN_142ba9220 body=47 status=ok
// SIG undefined FUN_142ba9220(void)

longlong FUN_142ba9220(void)

{
  if (DAT_146b2bee0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bee0,&PTR_Z_Construct_UPackage__Script_NavigationSystem_146688b60);
  }
  return DAT_146b2bee0;
}



// FUNCTION 142ba9250 FUN_142ba9250 body=47 status=ok
// SIG undefined FUN_142ba9250(void)

longlong FUN_142ba9250(void)

{
  if (DAT_146b2beb0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2beb0,&PTR_Z_Construct_UPackage__Script_NavigationSystem_1466885f0);
  }
  return DAT_146b2beb0;
}



// FUNCTION 142ba9280 FUN_142ba9280 body=47 status=ok
// SIG undefined FUN_142ba9280(void)

longlong FUN_142ba9280(void)

{
  if (DAT_146b2bec0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bec0,&PTR_Z_Construct_UPackage__Script_NavigationSystem_1466886f0);
  }
  return DAT_146b2bec0;
}



// FUNCTION 142ba92b0 FUN_142ba92b0 body=47 status=ok
// SIG undefined FUN_142ba92b0(void)

longlong FUN_142ba92b0(void)

{
  if (DAT_146b2bed0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bed0,&PTR_Z_Construct_UPackage__Script_NavigationSystem_1466888d0);
  }
  return DAT_146b2bed0;
}



// FUNCTION 142ba92e0 FUN_142ba92e0 body=47 status=ok
// SIG undefined FUN_142ba92e0(void)

longlong FUN_142ba92e0(void)

{
  if (DAT_146b2bea0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bea0,&PTR_Z_Construct_UPackage__Script_NavigationSystem_146688340);
  }
  return DAT_146b2bea0;
}



// FUNCTION 142ba9310 FUN_142ba9310 body=47 status=ok
// SIG undefined FUN_142ba9310(void)

longlong FUN_142ba9310(void)

{
  if (DAT_146b2bf30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bf30,&PTR_Z_Construct_UPackage__Script_NavigationSystem_1466893e0);
  }
  return DAT_146b2bf30;
}



// FUNCTION 142ba9340 FUN_142ba9340 body=47 status=ok
// SIG undefined FUN_142ba9340(void)

longlong FUN_142ba9340(void)

{
  if (DAT_146b2bf70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bf70,&PTR_Z_Construct_UPackage__Script_NavigationSystem_1466897d0);
  }
  return DAT_146b2bf70;
}



// FUNCTION 142ba9370 FUN_142ba9370 body=47 status=ok
// SIG undefined FUN_142ba9370(void)

longlong FUN_142ba9370(void)

{
  if (DAT_146b2bf80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bf80,&PTR_Z_Construct_UPackage__Script_NavigationSystem_146689910);
  }
  return DAT_146b2bf80;
}



// FUNCTION 142ba93a0 FUN_142ba93a0 body=47 status=ok
// SIG undefined FUN_142ba93a0(void)

longlong FUN_142ba93a0(void)

{
  if (DAT_146b2bf60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bf60,&PTR_Z_Construct_UPackage__Script_NavigationSystem_146689700);
  }
  return DAT_146b2bf60;
}



// FUNCTION 142ba93d0 FUN_142ba93d0 body=47 status=ok
// SIG undefined FUN_142ba93d0(void)

longlong FUN_142ba93d0(void)

{
  if (DAT_146b2bf50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2bf50,&PTR_Z_Construct_UPackage__Script_NavigationSystem_1466894c0);
  }
  return DAT_146b2bf50;
}



// FUNCTION 142ba9400 FUN_142ba9400 body=47 status=ok
// SIG undefined FUN_142ba9400(void)

longlong FUN_142ba9400(void)

{
  if (DAT_146b2be90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2be90,&PTR_Z_Construct_UPackage__Script_NavigationSystem_146687da0);
  }
  return DAT_146b2be90;
}



// FUNCTION 142ba9430 FUN_142ba9430 body=162 status=ok
// SIG undefined FUN_142ba9430(void)

longlong FUN_142ba9430(void)

{
  if (DAT_146b2c2f0 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationSystemV1",&DAT_146b2c2f0,FUN_142baaf00,
                  0x428,0x10000006,0,L"Engine",&LAB_142baa930,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,UNavigationSystemV1::AddReferencedObjects,
                  FUN_1429c1c30,&LAB_1407b5e80,0);
  }
  return DAT_146b2c2f0;
}



// FUNCTION 142ba9500 FUN_142ba9500 body=162 status=ok
// SIG undefined FUN_142ba9500(void)

longlong FUN_142ba9500(void)

{
  if (DAT_146b2c330 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavLinkComponent",&DAT_146b2c330,FUN_140447710,0x710
                  ,0x10000000,0,L"Engine",&LAB_142baa850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b2c330;
}



// FUNCTION 142ba95c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_146b2c340 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavLinkCustomComponent",&DAT_146b2c340,FUN_140447710
                  ,0x250,0x10000000,0,L"Engine",&LAB_142baa870,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UThrobber::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c340;
}



// FUNCTION 142ba9670 FUN_142ba9670 body=47 status=ok
// SIG undefined FUN_142ba9670(void)

longlong FUN_142ba9670(void)

{
  if (DAT_146b2c188 == 0) {
    FUN_141786440(&DAT_146b2c188,&PTR_thunk_FUN_142baab40_1457de9e0);
  }
  return DAT_146b2c188;
}



// FUNCTION 142ba96a0 FUN_142ba96a0 body=53 status=ok
// SIG undefined FUN_142ba96a0(void)

void FUN_142ba96a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1457e1cc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142ba9700 FUN_142ba9700 body=162 status=ok
// SIG undefined FUN_142ba9700(void)

longlong FUN_142ba9700(void)

{
  if (DAT_146b2c1c0 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationGraph",&DAT_146b2c1c0,FUN_140447710,0x618,
                  0x10000007,0,L"Engine",&LAB_142baa730,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_142baab40,&LAB_140447700,0);
  }
  return DAT_146b2c1c0;
}



// FUNCTION 142ba97b0 FUN_142ba97b0 body=53 status=ok
// SIG undefined FUN_142ba97b0(void)

void FUN_142ba97b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1457e1dd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142ba97f0 FUN_142ba97f0 body=53 status=ok
// SIG undefined FUN_142ba97f0(void)

void FUN_142ba97f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1457e1ef0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142ba9830 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAITask_LockLogic::StaticClass(void)

{
  if (DAT_146b2c0e8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavArea_Default",&DAT_146b2c0e8,FUN_140447710,0x70,
                  0x10000004,0,L"Engine",&LAB_142baa7b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAITask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c0e8;
}



// FUNCTION 142ba98e0 Z_Construct_UPackage__Script_NavigationSystem body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_NavigationSystem(void)

longlong Z_Construct_UPackage__Script_NavigationSystem(void)

{
  if (DAT_146b2c308 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
  }
  return DAT_146b2c308;
}



// FUNCTION 142ba9930 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXScriptedBotSpawner::GetPrivateStaticClass(void)

{
  if (DAT_146b2c1d0 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationGraphNode",&DAT_146b2c1d0,FUN_140447710,
                  0x458,0x10000001,0,L"Engine",&LAB_1405d4700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b2c1d0;
}



// FUNCTION 142ba99e0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAITask_LockLogic::StaticClass(void)

{
  if (DAT_146b2c0f8 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavArea_LowHeight",&DAT_146b2c0f8,FUN_140447710,0x70
                  ,0x10000004,0,L"Engine",&LAB_142baa7d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAITask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c0f8;
}



// FUNCTION 142ba9ab0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStartScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_146b2c1e0 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationGraphNodeComponent",&DAT_146b2c1e0,
                  FUN_140447710,0x300,0x10000000,0,L"Engine",&LAB_142baa890,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b2c1e0;
}



// FUNCTION 142ba9b60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAITask_LockLogic::StaticClass(void)

{
  if (DAT_146b2c108 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavArea_Null",&DAT_146b2c108,FUN_140447710,0x70,
                  0x10000004,0,L"Engine",&LAB_142baa7f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAITask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c108;
}



// FUNCTION 142ba9c30 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAITask_LockLogic::StaticClass(void)

{
  if (DAT_146b2c118 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavArea_Obstacle",&DAT_146b2c118,FUN_140447710,0x70,
                  0x10000004,0,L"Engine",&LAB_142baa810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAITask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c118;
}



// FUNCTION 142ba9ce0 FUN_142ba9ce0 body=162 status=ok
// SIG undefined FUN_142ba9ce0(void)

longlong FUN_142ba9ce0(void)

{
  if (DAT_146b2c1f0 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationInvokerComponent",&DAT_146b2c1f0,
                  FUN_140447710,0x180,0x10000000,0,L"Engine",&LAB_142baa8b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b2c1f0;
}



// FUNCTION 142ba9db0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAITask::GetPrivateStaticClass(void)

{
  if (DAT_146b2c128 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavAreaMeta",&DAT_146b2c128,FUN_140447710,0x70,
                  0x10000005,0,L"Engine",&LAB_142baa770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c128;
}



// FUNCTION 142ba9e60 FUN_142ba9e60 body=47 status=ok
// SIG undefined FUN_142ba9e60(void)

longlong FUN_142ba9e60(void)

{
  if (DAT_146b2c120 == 0) {
    FUN_141786440(&DAT_146b2c120,&PTR_GetPrivateStaticClass_1457df9f0);
  }
  return DAT_146b2c120;
}



// FUNCTION 142ba9ea0 FUN_142ba9ea0 body=162 status=ok
// SIG undefined FUN_142ba9ea0(void)

longlong FUN_142ba9ea0(void)

{
  if (DAT_146b2c138 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavAreaMeta_SwitchByAgent",&DAT_146b2c138,
                  FUN_140447710,0xf0,0x10000005,0,L"Engine",&LAB_142baa790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAITask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c138;
}



// FUNCTION 142ba9f50 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavigationPath::GetPrivateStaticClass(void)

{
  if (DAT_146b2c248 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationPath",&DAT_146b2c248,
                  StaticRegisterNativesUNavigationPath,0x88,0x10000000,0,L"Engine",&LAB_142baa8d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2c248;
}



// FUNCTION 142baa000 FUN_142baa000 body=47 status=ok
// SIG undefined FUN_142baa000(void)

longlong FUN_142baa000(void)

{
  if (DAT_146b2c240 == 0) {
    FUN_141786440(&DAT_146b2c240,&PTR_GetPrivateStaticClass_1457e00d0);
  }
  return DAT_146b2c240;
}



// FUNCTION 142baa030 FUN_142baa030 body=47 status=ok
// SIG undefined FUN_142baa030(void)

longlong FUN_142baa030(void)

{
  if (DAT_146b2c200 == 0) {
    FUN_141786a30(&DAT_146b2c200,&PTR_FUN_14668c610);
  }
  return DAT_146b2c200;
}



// FUNCTION 142baa060 FUN_142baa060 body=47 status=ok
// SIG undefined FUN_142baa060(void)

longlong FUN_142baa060(void)

{
  if (DAT_146b2c208 == 0) {
    FUN_141786a30(&DAT_146b2c208,&PTR_FUN_14668c690);
  }
  return DAT_146b2c208;
}



// FUNCTION 142baa090 FUN_142baa090 body=47 status=ok
// SIG undefined FUN_142baa090(void)

longlong FUN_142baa090(void)

{
  if (DAT_146b2c210 == 0) {
    FUN_141786a30(&DAT_146b2c210,&PTR_FUN_14668c710);
  }
  return DAT_146b2c210;
}



// FUNCTION 142baa0c0 FUN_142baa0c0 body=47 status=ok
// SIG undefined FUN_142baa0c0(void)

longlong FUN_142baa0c0(void)

{
  if (DAT_146b2c218 == 0) {
    FUN_141786a30(&DAT_146b2c218,&PTR_FUN_14668c790);
  }
  return DAT_146b2c218;
}



// FUNCTION 142baa0f0 FUN_142baa0f0 body=47 status=ok
// SIG undefined FUN_142baa0f0(void)

longlong FUN_142baa0f0(void)

{
  if (DAT_146b2c220 == 0) {
    FUN_141786a30(&DAT_146b2c220,&PTR_FUN_14668c810);
  }
  return DAT_146b2c220;
}



// FUNCTION 142baa120 FUN_142baa120 body=47 status=ok
// SIG undefined FUN_142baa120(void)

longlong FUN_142baa120(void)

{
  if (DAT_146b2c228 == 0) {
    FUN_141786a30(&DAT_146b2c228,&PTR_FUN_14668c8a0);
  }
  return DAT_146b2c228;
}



// FUNCTION 142baa150 FUN_142baa150 body=47 status=ok
// SIG undefined FUN_142baa150(void)

longlong FUN_142baa150(void)

{
  if (DAT_146b2c230 == 0) {
    FUN_141786a30(&DAT_146b2c230,&PTR_FUN_14668c930);
  }
  return DAT_146b2c230;
}



// FUNCTION 142baa180 FUN_142baa180 body=47 status=ok
// SIG undefined FUN_142baa180(void)

longlong FUN_142baa180(void)

{
  if (DAT_146b2c238 == 0) {
    FUN_141786a30(&DAT_146b2c238,&PTR_FUN_14668c9c0);
  }
  return DAT_146b2c238;
}



// FUNCTION 142baa1b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UNullNavSysConfig::StaticClass(void)

{
  if (DAT_146b2c300 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationSystemModuleConfig",&DAT_146b2c300,
                  FUN_140447710,0x48,0x10000002,0,L"Engine",&LAB_142baa910,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAISubsystem::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c300;
}



// FUNCTION 142baa260 FUN_142baa260 body=47 status=ok
// SIG undefined FUN_142baa260(void)

longlong FUN_142baa260(void)

{
  if (DAT_146b2c2e8 == 0) {
    FUN_141786440(&DAT_146b2c2e8,&PTR_FUN_1457e1090);
  }
  return DAT_146b2c2e8;
}



// FUNCTION 142baa290 FUN_142baa290 body=47 status=ok
// SIG undefined FUN_142baa290(void)

longlong FUN_142baa290(void)

{
  if (DAT_146b2c298 == 0) {
    FUN_141786a30(&DAT_146b2c298,&PTR_FUN_14668d4d0);
  }
  return DAT_146b2c298;
}



// FUNCTION 142baa2c0 FUN_142baa2c0 body=47 status=ok
// SIG undefined FUN_142baa2c0(void)

longlong FUN_142baa2c0(void)

{
  if (DAT_146b2c2a0 == 0) {
    FUN_141786a30(&DAT_146b2c2a0,&PTR_FUN_14668d6a0);
  }
  return DAT_146b2c2a0;
}



// FUNCTION 142baa2f0 FUN_142baa2f0 body=47 status=ok
// SIG undefined FUN_142baa2f0(void)

longlong FUN_142baa2f0(void)

{
  if (DAT_146b2c2a8 == 0) {
    FUN_141786a30(&DAT_146b2c2a8,&PTR_FUN_14668d870);
  }
  return DAT_146b2c2a8;
}



// FUNCTION 142baa320 FUN_142baa320 body=47 status=ok
// SIG undefined FUN_142baa320(void)

longlong FUN_142baa320(void)

{
  if (DAT_146b2c2b0 == 0) {
    FUN_141786a30(&DAT_146b2c2b0,&PTR_FUN_14668da90);
  }
  return DAT_146b2c2b0;
}



// FUNCTION 142baa350 FUN_142baa350 body=47 status=ok
// SIG undefined FUN_142baa350(void)

longlong FUN_142baa350(void)

{
  if (DAT_146b2c2b8 == 0) {
    FUN_141786a30(&DAT_146b2c2b8,&PTR_FUN_14668dcb0);
  }
  return DAT_146b2c2b8;
}



// FUNCTION 142baa380 FUN_142baa380 body=47 status=ok
// SIG undefined FUN_142baa380(void)

longlong FUN_142baa380(void)

{
  if (DAT_146b2c2c0 == 0) {
    FUN_141786a30(&DAT_146b2c2c0,&PTR_FUN_14668ded0);
  }
  return DAT_146b2c2c0;
}



// FUNCTION 142baa3b0 FUN_142baa3b0 body=47 status=ok
// SIG undefined FUN_142baa3b0(void)

longlong FUN_142baa3b0(void)

{
  if (DAT_146b2c2c8 == 0) {
    FUN_141786a30(&DAT_146b2c2c8,&PTR_FUN_14668df50);
  }
  return DAT_146b2c2c8;
}



// FUNCTION 142baa3e0 FUN_142baa3e0 body=47 status=ok
// SIG undefined FUN_142baa3e0(void)

longlong FUN_142baa3e0(void)

{
  if (DAT_146b2c2d0 == 0) {
    FUN_141786a30(&DAT_146b2c2d0,&PTR_FUN_14668e120);
  }
  return DAT_146b2c2d0;
}



// FUNCTION 142baa410 FUN_142baa410 body=47 status=ok
// SIG undefined FUN_142baa410(void)

longlong FUN_142baa410(void)

{
  if (DAT_146b2c2d8 == 0) {
    FUN_141786a30(&DAT_146b2c2d8,&PTR_FUN_14668e1e0);
  }
  return DAT_146b2c2d8;
}



// FUNCTION 142baa440 FUN_142baa440 body=47 status=ok
// SIG undefined FUN_142baa440(void)

longlong FUN_142baa440(void)

{
  if (DAT_146b2c2e0 == 0) {
    FUN_141786a30(&DAT_146b2c2e0,&PTR_FUN_14668e2a0);
  }
  return DAT_146b2c2e0;
}



// FUNCTION 142baa480 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavCollision::GetPrivateStaticClass(void)

{
  if (DAT_146b2c168 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavCollision",&DAT_146b2c168,FUN_140447710,0xd8,
                  0x10000004,0,L"Engine",&LAB_142baa830,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UNavCollisionBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c168;
}



// FUNCTION 142baa530 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UNavigationPathGenerator::StaticClass(void)

{
  if (DAT_146b2c258 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationPathGenerator",&DAT_146b2c258,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2c258;
}



// FUNCTION 142baa5f0 FUN_142baa5f0 body=53 status=ok
// SIG undefined FUN_142baa5f0(void)

void FUN_142baa5f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1457e2090;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142baa660 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantQuest::GetPrivateStaticClass(void)

{
  if (DAT_146b2c320 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationTestingActor",&DAT_146b2c320,FUN_140447710
                  ,0x540,0x10000000,0,L"Engine",&LAB_142baa750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b2c320;
}



// FUNCTION 142baa9b0 Copy body=194 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSupportedAreaData>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 0x10);
    do {
      if (param_2 != (undefined8 *)(puVar3 + -4)) {
        iVar2 = puVar3[-2];
        _Src = *(void **)(puVar3 + -4);
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 * 2);
        }
      }
      *(undefined4 *)(param_2 + 2) = *puVar3;
      puVar1 = (undefined8 *)(puVar3 + 2);
      puVar3 = puVar3 + 8;
      param_2[3] = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142baaa80 ENavCostDisplay_StaticEnum body=85 status=ok
// SIG undefined ENavCostDisplay_StaticEnum(void)

void ENavCostDisplay_StaticEnum(void)

{
  if (DAT_146b2c058 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    DAT_146b2c058 = GetStaticEnum(FUN_142bab610,DAT_146b2c308,L"ENavCostDisplay");
  }
  return;
}



// FUNCTION 142baaae0 ERuntimeGenerationType_StaticEnum body=85 status=ok
// SIG undefined ERuntimeGenerationType_StaticEnum(void)

void ERuntimeGenerationType_StaticEnum(void)

{
  if (DAT_146b2c050 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    DAT_146b2c050 = GetStaticEnum(FUN_142bab640,DAT_146b2c308,L"ERuntimeGenerationType");
  }
  return;
}



// FUNCTION 142baab40 FUN_142baab40 body=162 status=ok
// SIG undefined FUN_142baab40(void)

longlong FUN_142baab40(void)

{
  if (DAT_146b2c190 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationData",&DAT_146b2c190,FUN_140447710,0x618,
                  0x10000007,0,L"Engine",&LAB_142baa710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b2c190;
}



// FUNCTION 142baabf0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavigationQueryFilter::GetPrivateStaticClass(void)

{
  if (DAT_146b2c288 == 0) {
    FUN_14171ccd0(L"/Script/NavigationSystem",L"NavigationQueryFilter",&DAT_146b2c288,FUN_140447710,
                  0x48,0x10000001,0,L"Engine",&LAB_142baa8f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2c288;
}



// FUNCTION 142baac90 Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC(void)

{
  return 0x9caaea6;
}



// FUNCTION 142baaca0 Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC(void)

{
  return 0x353a858e;
}



// FUNCTION 142baacb0 Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC(void)

{
  return 0xd272a03a;
}



// FUNCTION 142baacc0 Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC(void)

{
  return 0x4dd28263;
}



// FUNCTION 142baacd0 Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC(void)

{
  return 0xef73074c;
}



// FUNCTION 142baace0 Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC(void)

{
  return 0xcc699f3;
}



// FUNCTION 142baacf0 Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC(void)

{
  return 0xf701726c;
}



// FUNCTION 142baae50 Serialize body=112 status=ok
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
  FUN_142b97410(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142baaec0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UThrobber::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 142baaed0 StaticRegisterNativesUNavigationPath body=34 status=ok
// SIG undefined StaticRegisterNativesUNavigationPath(void)

void UNavigationPath::StaticRegisterNativesUNavigationPath(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnableDebugDrawing_1457e2010,8);
  return;
}



// FUNCTION 142baaf00 FUN_142baaf00 body=34 status=ok
// SIG undefined FUN_142baaf00(void)

void FUN_142baaf00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142ba9430();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetNavigationSystem_1457e21b0,10);
  return;
}



// FUNCTION 142baaf30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNavCollisionBox::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2c140 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    lVar1 = DAT_146b2c308;
    uVar2 = Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC();
    DAT_146b2c140 = GetStaticStruct(FUN_142bab670,lVar1,L"NavCollisionBox",0x18,uVar2);
  }
  return;
}



// FUNCTION 142baafb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNavCollisionCylinder::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2c150 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    lVar1 = DAT_146b2c308;
    uVar2 = Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC();
    DAT_146b2c150 = GetStaticStruct(FUN_142bab6a0,lVar1,L"NavCollisionCylinder",0x14,uVar2);
  }
  return;
}



// FUNCTION 142bab030 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNavGraphEdge::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2c1a8 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    lVar1 = DAT_146b2c308;
    uVar2 = Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC();
    DAT_146b2c1a8 = GetStaticStruct(FUN_142bab6d0,lVar1,L"NavGraphEdge",0x18,uVar2);
  }
  return;
}



// FUNCTION 142bab0b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNavGraphNode::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2c198 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    lVar1 = DAT_146b2c308;
    uVar2 = Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC();
    DAT_146b2c198 = GetStaticStruct(FUN_142bab700,lVar1,L"NavGraphNode",0x18,uVar2);
  }
  return;
}



// FUNCTION 142bab130 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNavigationFilterArea::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2c270 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    lVar1 = DAT_146b2c308;
    uVar2 = Get_Z_Construct_UScriptStruct_FNavigationFilterArea_CRC();
    DAT_146b2c270 = GetStaticStruct(FUN_142bab730,lVar1,L"NavigationFilterArea",0x18,uVar2);
  }
  return;
}



// FUNCTION 142bab1b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNavigationFilterFlags::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2c260 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    lVar1 = DAT_146b2c308;
    uVar2 = Get_Z_Construct_UScriptStruct_FNavigationFilterFlags_CRC();
    DAT_146b2c260 = GetStaticStruct(FUN_142bab760,lVar1,L"NavigationFilterFlags",4,uVar2);
  }
  return;
}



// FUNCTION 142bab230 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSupportedAreaData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2c178 == 0) {
    if (DAT_146b2c308 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2c308,&PTR_s__Script_NavigationSystem_1457e2260);
    }
    lVar1 = DAT_146b2c308;
    uVar2 = Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC();
    DAT_146b2c178 = GetStaticStruct(FUN_142bab790,lVar1,L"SupportedAreaData",0x20,uVar2);
  }
  return;
}



// FUNCTION 142bab2b0 FUN_142bab2b0 body=47 status=ok
// SIG undefined FUN_142bab2b0(void)

longlong FUN_142bab2b0(void)

{
  if (DAT_146b2c1b8 == 0) {
    FUN_141786440(&DAT_146b2c1b8,&PTR_FUN_1457deff0);
  }
  return DAT_146b2c1b8;
}



// FUNCTION 142bab2e0 FUN_142bab2e0 body=47 status=ok
// SIG undefined FUN_142bab2e0(void)

longlong FUN_142bab2e0(void)

{
  if (DAT_146b2c1c8 == 0) {
    FUN_141786440(&DAT_146b2c1c8,&PTR_GetPrivateStaticClass_1457df230);
  }
  return DAT_146b2c1c8;
}



// FUNCTION 142bab310 FUN_142bab310 body=47 status=ok
// SIG undefined FUN_142bab310(void)

longlong FUN_142bab310(void)

{
  if (DAT_146b2c318 == 0) {
    FUN_141786440(&DAT_146b2c318,&PTR_GetPrivateStaticClass_1457de040);
  }
  return DAT_146b2c318;
}



// FUNCTION 142bab340 FUN_142bab340 body=47 status=ok
// SIG undefined FUN_142bab340(void)

longlong FUN_142bab340(void)

{
  if (DAT_146b2c130 == 0) {
    FUN_141786440(&DAT_146b2c130,&PTR_FUN_1457dfb70);
  }
  return DAT_146b2c130;
}



// FUNCTION 142bab370 FUN_142bab370 body=47 status=ok
// SIG undefined FUN_142bab370(void)

longlong FUN_142bab370(void)

{
  if (DAT_146b2c0e0 == 0) {
    FUN_141786440(&DAT_146b2c0e0,&PTR_StaticClass_1457df080);
  }
  return DAT_146b2c0e0;
}



// FUNCTION 142bab3a0 FUN_142bab3a0 body=47 status=ok
// SIG undefined FUN_142bab3a0(void)

longlong FUN_142bab3a0(void)

{
  if (DAT_146b2c0f0 == 0) {
    FUN_141786440(&DAT_146b2c0f0,&PTR_StaticClass_1457df2d0);
  }
  return DAT_146b2c0f0;
}



// FUNCTION 142bab3d0 FUN_142bab3d0 body=47 status=ok
// SIG undefined FUN_142bab3d0(void)

longlong FUN_142bab3d0(void)

{
  if (DAT_146b2c100 == 0) {
    FUN_141786440(&DAT_146b2c100,&PTR_StaticClass_1457df540);
  }
  return DAT_146b2c100;
}



// FUNCTION 142bab400 FUN_142bab400 body=47 status=ok
// SIG undefined FUN_142bab400(void)

longlong FUN_142bab400(void)

{
  if (DAT_146b2c110 == 0) {
    FUN_141786440(&DAT_146b2c110,&PTR_StaticClass_1457df740);
  }
  return DAT_146b2c110;
}



// FUNCTION 142bab430 FUN_142bab430 body=47 status=ok
// SIG undefined FUN_142bab430(void)

longlong FUN_142bab430(void)

{
  if (DAT_146b2c160 == 0) {
    FUN_141786440(&DAT_146b2c160,&PTR_GetPrivateStaticClass_1457de270);
  }
  return DAT_146b2c160;
}



// FUNCTION 142bab460 FUN_142bab460 body=47 status=ok
// SIG undefined FUN_142bab460(void)

longlong FUN_142bab460(void)

{
  if (DAT_146b2c328 == 0) {
    FUN_141786440(&DAT_146b2c328,&PTR_FUN_1457de5d0);
  }
  return DAT_146b2c328;
}



// FUNCTION 142bab490 FUN_142bab490 body=47 status=ok
// SIG undefined FUN_142bab490(void)

longlong FUN_142bab490(void)

{
  if (DAT_146b2c338 == 0) {
    FUN_141786440(&DAT_146b2c338,&PTR_GetPrivateStaticClass_1457dec50);
  }
  return DAT_146b2c338;
}



// FUNCTION 142bab4c0 FUN_142bab4c0 body=47 status=ok
// SIG undefined FUN_142bab4c0(void)

longlong FUN_142bab4c0(void)

{
  if (DAT_146b2c1d8 == 0) {
    FUN_141786440(&DAT_146b2c1d8,&PTR_GetPrivateStaticClass_1457df4b0);
  }
  return DAT_146b2c1d8;
}



// FUNCTION 142bab4f0 FUN_142bab4f0 body=47 status=ok
// SIG undefined FUN_142bab4f0(void)

longlong FUN_142bab4f0(void)

{
  if (DAT_146b2c1e8 == 0) {
    FUN_141786440(&DAT_146b2c1e8,&PTR_FUN_1457df7d0);
  }
  return DAT_146b2c1e8;
}



// FUNCTION 142bab520 FUN_142bab520 body=47 status=ok
// SIG undefined FUN_142bab520(void)

longlong FUN_142bab520(void)

{
  if (DAT_146b2c250 == 0) {
    FUN_141786440(&DAT_146b2c250,&PTR_StaticClass_1457e04e0);
  }
  return DAT_146b2c250;
}



// FUNCTION 142bab550 FUN_142bab550 body=47 status=ok
// SIG undefined FUN_142bab550(void)

longlong FUN_142bab550(void)

{
  if (DAT_146b2c280 == 0) {
    FUN_141786440(&DAT_146b2c280,&PTR_GetPrivateStaticClass_1457e0f20);
  }
  return DAT_146b2c280;
}



// FUNCTION 142bab580 FUN_142bab580 body=47 status=ok
// SIG undefined FUN_142bab580(void)

longlong FUN_142bab580(void)

{
  if (DAT_146b2c2f8 == 0) {
    FUN_141786440(&DAT_146b2c2f8,&PTR_StaticClass_1457e1670);
  }
  return DAT_146b2c2f8;
}


