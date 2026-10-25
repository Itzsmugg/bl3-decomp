// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424d5f10 FUN_1424d5f10 body=462 status=ok
// SIG undefined FUN_1424d5f10(void)

void FUN_1424d5f10(undefined4 param_1,undefined4 param_2)

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
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_res20;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_res18 = param_1;
    local_res1c = param_2;
    FUN_1424c2520(&local_res18,2,local_38);
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
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_1450cdc90;
  plVar9[4] = 0;
  *(undefined4 *)(plVar9 + 2) = param_1;
  *(undefined4 *)((longlong)plVar9 + 0x14) = param_2;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar7;
  FUN_140445100(plVar9,0,0xff,1);
  if (lVar7 != 0) {
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



// FUNCTION 1424d60f0 FUN_1424d60f0 body=649 status=ok
// SIG undefined FUN_1424d60f0(void)

ulonglong FUN_1424d60f0(float *param_1,undefined8 param_2,longlong param_3,int param_4,
                       undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  float fVar1;
  char cVar2;
  ulonglong in_RAX;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b0;
  float local_a0;
  
  if (param_3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  fVar1 = param_1[7];
  if (param_4 < 3) {
    param_4 = 2;
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      fVar8 = param_1[7];
      iVar4 = iVar3 + 1;
      fVar5 = (float)iVar3 * (fVar1 / (float)param_4);
      fVar9 = (float)iVar4 * (fVar1 / (float)param_4);
      if (0.0 <= fVar5) {
        fVar7 = fVar8;
        if (fVar5 <= fVar8) {
          fVar7 = fVar5;
        }
      }
      else {
        fVar7 = 0.0;
      }
      local_b0 = param_1[5];
      fVar5 = (float)*(undefined8 *)(param_1 + 3);
      fVar6 = (float)((ulonglong)*(undefined8 *)(param_1 + 3) >> 0x20);
      local_c8 = fVar5 * fVar7 + *param_1;
      local_c4 = fVar6 * fVar7 + param_1[1];
      local_c0 = (param_1[6] * 0.5 * fVar7 + local_b0) * fVar7 + param_1[2];
      if (0.0 <= fVar9) {
        if (fVar9 <= fVar8) {
          fVar8 = fVar9;
        }
      }
      else {
        fVar8 = 0.0;
      }
      local_d0 = (param_1[6] * 0.5 * fVar8 + local_b0) * fVar8 + param_1[2];
      local_d8 = fVar5 * fVar8 + *param_1;
      local_d4 = fVar6 * fVar8 + param_1[1];
      local_a0 = local_b0;
      cVar2 = UWorld::SweepSingleByChannel
                        (param_3,param_2,&local_c8,&local_d8,param_5,param_6,param_7,param_8,param_9
                        );
      if (cVar2 != '\0') {
        return 1;
      }
      iVar3 = iVar4;
    } while (iVar4 < param_4);
  }
  return 0;
}



// FUNCTION 1424d6380 TransformByUsingAdjointT body=650 status=ok
// SIG undefined TransformByUsingAdjointT(void)

undefined8 *
FPlane::TransformByUsingAdjointT
          (float *param_1,undefined8 *param_2,float *param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar17 = *param_1;
  fVar18 = param_1[1];
  fVar19 = param_1[2];
  fVar14 = param_5[0xc] * 0.0 + fVar19 * param_5[8] + fVar18 * param_5[4] + fVar17 * *param_5;
  fVar15 = param_5[0xd] * 0.0 + fVar19 * param_5[9] + fVar18 * param_5[5] + fVar17 * param_5[1];
  fVar16 = param_5[0xe] * 0.0 + fVar19 * param_5[10] + fVar18 * param_5[6] + fVar17 * param_5[2];
  fVar11 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
  if (fVar11 <= 1e-08) {
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
  }
  else {
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar13._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    fVar14 = fVar14 * fVar12;
    fVar15 = fVar15 * fVar12;
    fVar16 = fVar16 * fVar12;
  }
  if (param_4 < 0.0) {
    fVar16 = -fVar16;
    fVar14 = -fVar14;
    fVar15 = -fVar15;
  }
  fVar11 = param_1[3];
  fVar17 = fVar17 * fVar11;
  fVar18 = fVar18 * fVar11;
  fVar19 = fVar19 * fVar11;
  fVar11 = param_3[0xc];
  fVar12 = param_3[0xd];
  fVar1 = param_3[0xe];
  fVar2 = param_3[4];
  fVar3 = param_3[5];
  fVar4 = param_3[6];
  fVar5 = param_3[8];
  fVar6 = param_3[9];
  fVar7 = param_3[10];
  fVar8 = *param_3;
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  *param_2 = CONCAT44(fVar15,fVar14);
  *(float *)(param_2 + 1) = fVar16;
  *(float *)((longlong)param_2 + 0xc) =
       (fVar12 * 1.0 + fVar19 * fVar6 + fVar18 * fVar3 + fVar17 * fVar9) * fVar15 +
       (fVar11 * 1.0 + fVar19 * fVar5 + fVar18 * fVar2 + fVar17 * fVar8) * fVar14 +
       (fVar1 * 1.0 + fVar19 * fVar7 + fVar18 * fVar4 + fVar17 * fVar10) * fVar16;
  return param_2;
}



// FUNCTION 1424d6610 TransitionAllToReadable body=358 status=ok
// SIG undefined TransitionAllToReadable(void)

void FGPUSkinCache::TransitionAllToReadable(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  iVar1 = (int)param_1[1];
  lVar7 = (longlong)iVar1;
  if (0 < iVar1) {
    iVar6 = iVar1 * 8;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    lVar2 = *param_1;
    uVar3 = (longlong)iVar6 + (longlong)puVar8;
    if (*(ulonglong *)(param_2 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar6 + 8);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar3 = (longlong)iVar6 + (longlong)puVar8;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar3;
    if (0 < iVar1) {
      puVar4 = puVar8;
      do {
        *puVar4 = *(undefined8 *)((lVar2 - (longlong)puVar8) + (longlong)puVar4);
        puVar4 = puVar4 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e60;
    *(int *)(puVar5 + 2) = iVar1;
    puVar5[3] = puVar8;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 1;
    puVar5[5] = 0;
    iVar1 = (int)param_1[1];
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)iVar1 * 8),0,(longlong)-iVar1 << 3);
    }
    else if ((0 < iVar1) && (iVar1 != 0)) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  return;
}



// FUNCTION 1424d6780 FUN_1424d6780 body=2012 status=ok
// SIG undefined FUN_1424d6780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1424d6780(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  char cVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  undefined8 *puVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  float *pfVar28;
  float *_Dst;
  void *pvVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_708 [32];
  undefined4 local_6e8;
  char local_6d8;
  void *local_6d0;
  int local_6c8;
  undefined4 local_6c4;
  float local_6c0;
  int local_6bc;
  longlong local_6b8;
  float *local_6b0;
  undefined8 *local_6a8;
  longlong *local_6a0;
  void *local_698;
  longlong local_690;
  undefined1 local_680 [120];
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 local_588 [108];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_708;
  if (*(int *)(param_2 + 0x6d) < 3) {
    return 1;
  }
  pvVar19 = (void *)param_2[0x6c];
  local_6c8 = *(int *)(param_2 + 0x6d);
  lVar27 = (longlong)local_6c8;
  pvVar29 = (void *)0x0;
  local_6d0 = (void *)0x0;
  local_6d8 = param_3;
  local_6a8 = param_2;
  local_6a0 = param_1;
  if (local_6c8 == 0) {
    local_6c4 = 0;
    iVar26 = 0;
  }
  else {
    FUN_1409b8040(&local_6d0,local_6c8,0);
    pvVar29 = local_6d0;
    _guard_xfg_dispatch_icall_nop(local_6d0,pvVar19,lVar27 * 0x78);
    iVar26 = local_6c8;
  }
  do {
    if ((local_6d8 == '\0') && (iVar23 = 0, 0 < iVar26)) {
      iVar25 = 2;
      iVar30 = 1;
      do {
        iVar21 = iVar30 % iVar26;
        _Dst = (float *)((longlong)iVar21 * 0x78 + (longlong)pvVar29);
        pfVar28 = (float *)((longlong)(iVar25 % iVar26) * 0x78 + (longlong)pvVar29);
        pfVar22 = (float *)((longlong)(iVar23 % iVar26) * 0x78 + (longlong)pvVar29);
        fVar3 = *pfVar22;
        fVar4 = pfVar22[1];
        fVar33 = *pfVar28 - fVar3;
        fVar5 = pfVar22[2];
        fVar32 = pfVar28[1] - fVar4;
        fVar31 = pfVar28[2] - fVar5;
        fVar31 = fVar33 * fVar33 + fVar32 * fVar32 + fVar31 * fVar31;
        if (fVar31 <= 1e-05) {
LAB_1424d69d8:
          iVar15 = (iVar26 - iVar21) + -1;
          if (iVar15 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,(void *)((longlong)(iVar21 + 1) * 0x78 + (longlong)pvVar29),
                       (longlong)iVar15 * 0x78);
          }
          local_6c8 = iVar26 + -1;
          FUN_14089e470(&local_6d0);
          iVar23 = iVar23 + -1;
          iVar30 = iVar30 + -1;
          iVar25 = iVar25 + -1;
          pvVar29 = local_6d0;
          iVar26 = local_6c8;
        }
        else {
          puVar16 = (undefined8 *)
                    FUN_1424ca260(local_680,pfVar22,pfVar28,
                                  ((*_Dst - fVar3) * (*pfVar28 - fVar3) +
                                   (_Dst[1] - fVar4) * (pfVar28[1] - fVar4) +
                                  (_Dst[2] - fVar5) * (pfVar28[2] - fVar5)) / fVar31);
          local_608 = *puVar16;
          uStack_600 = puVar16[1];
          local_5f8 = puVar16[2];
          uStack_5f0 = puVar16[3];
          local_5e8 = puVar16[4];
          uStack_5e0 = puVar16[5];
          local_5d8 = puVar16[6];
          uStack_5d0 = puVar16[7];
          local_5c8 = puVar16[8];
          uStack_5c0 = puVar16[9];
          local_5b8 = puVar16[10];
          uStack_5b0 = puVar16[0xb];
          local_5a8 = *(undefined4 *)(puVar16 + 0xc);
          uStack_5a4 = *(undefined4 *)((longlong)puVar16 + 100);
          uStack_5a0 = *(undefined4 *)(puVar16 + 0xd);
          uStack_59c = *(undefined4 *)((longlong)puVar16 + 0x6c);
          local_598 = puVar16[0xe];
          cVar14 = FUN_1424d8b80(&local_608,_Dst);
          if (cVar14 != '\0') goto LAB_1424d69d8;
        }
        iVar23 = iVar23 + 1;
        iVar30 = iVar30 + 1;
        iVar25 = iVar25 + 1;
        param_2 = local_6a8;
      } while (iVar23 < iVar26);
    }
    if (iVar26 < 3) {
      uVar24 = 1;
      goto LAB_1424d6ec5;
    }
    local_6b8 = 0;
    if (iVar26 < 1) {
LAB_1424d6ea6:
      *(undefined4 *)(local_6a0 + 1) = 0;
      if (*(int *)((longlong)local_6a0 + 0xc) != 0) {
        TArray<FDeployedUnitDescriptor,TSizedDefaultAllocator<32>_>::ResizeTo(local_6a0,0);
      }
      uVar24 = 0;
LAB_1424d6ec5:
      if (pvVar29 == (void *)0x0) {
        return uVar24;
      }
      FMemory::Free(pvVar29);
      return uVar24;
    }
    fVar3 = *(float *)(param_2 + 3);
    local_6b0 = (float *)((longlong)pvVar29 + 8);
    fVar4 = *(float *)((longlong)param_2 + 0x14);
    fVar5 = *(float *)((longlong)param_2 + 0x1c);
    iVar23 = 0;
    while( true ) {
      iVar25 = iVar26;
      if (iVar23 != 0) {
        iVar25 = iVar23;
      }
      local_6bc = iVar23 + 1;
      iVar30 = local_6bc % iVar26;
      local_690 = (longlong)(iVar25 + -1);
      pfVar22 = (float *)(local_690 * 0x78 + (longlong)pvVar29);
      lVar27 = (longlong)iVar30 * 0x78;
      fVar31 = *(float *)(lVar27 + 8 + (longlong)pvVar29) - pfVar22[2];
      pvVar19 = (void *)(lVar27 + (longlong)pvVar29);
      fVar33 = *(float *)(lVar27 + 4 + (longlong)pvVar29) - pfVar22[1];
      fVar32 = *(float *)(lVar27 + (longlong)pvVar29) - *pfVar22;
      local_6c0 = (fVar32 * (*local_6b0 - pfVar22[2]) - fVar31 * (local_6b0[-2] - *pfVar22)) * fVar3
                  + (fVar31 * (local_6b0[-1] - pfVar22[1]) - fVar33 * (*local_6b0 - pfVar22[2])) *
                    fVar4 + (fVar33 * (local_6b0[-2] - *pfVar22) -
                            fVar32 * (local_6b0[-1] - pfVar22[1])) * fVar5;
      local_698 = pvVar19;
      if ((uint)local_6c0 < 0x80000000) break;
LAB_1424d6e87:
      local_6b8 = local_6b8 + 1;
      local_6b0 = local_6b0 + 0x1e;
      iVar23 = local_6bc;
      if (iVar26 <= local_6bc) goto LAB_1424d6ea6;
    }
    iVar21 = 0;
    do {
      if (((iVar21 != iVar25 + -1) && (iVar21 != iVar23)) && (iVar21 != iVar30)) {
        local_6e8 = 0;
        cVar14 = FGeomTools::PointInTriangle
                           (pfVar22,(void *)((longlong)iVar23 * 0x78 + (longlong)pvVar29),pvVar19,
                            (void *)((longlong)iVar21 * 0x78 + (longlong)pvVar29));
        pvVar19 = local_698;
        if (cVar14 != '\0') goto LAB_1424d6e87;
      }
      plVar13 = local_6a0;
      param_2 = local_6a8;
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar26);
    local_c0 = 0;
    lVar27 = 6;
    puVar16 = local_588;
    puVar1 = local_6a8;
    do {
      puVar20 = puVar1;
      puVar18 = puVar16;
      uVar24 = puVar20[1];
      uVar10 = puVar20[2];
      uVar11 = puVar20[3];
      *puVar18 = *puVar20;
      puVar18[1] = uVar24;
      uVar24 = puVar20[4];
      uVar12 = puVar20[5];
      puVar18[2] = uVar10;
      puVar18[3] = uVar11;
      uVar10 = puVar20[6];
      uVar11 = puVar20[7];
      puVar18[4] = uVar24;
      puVar18[5] = uVar12;
      uVar24 = puVar20[8];
      uVar12 = puVar20[9];
      puVar18[6] = uVar10;
      puVar18[7] = uVar11;
      uVar10 = puVar20[10];
      uVar11 = puVar20[0xb];
      puVar18[8] = uVar24;
      puVar18[9] = uVar12;
      uVar24 = puVar20[0xc];
      uVar12 = puVar20[0xd];
      puVar18[10] = uVar10;
      puVar18[0xb] = uVar11;
      uVar10 = puVar20[0xe];
      uVar11 = puVar20[0xf];
      puVar18[0xc] = uVar24;
      puVar18[0xd] = uVar12;
      puVar18[0xe] = uVar10;
      puVar18[0xf] = uVar11;
      lVar27 = lVar27 + -1;
      puVar16 = puVar18 + 0x10;
      puVar1 = puVar20 + 0x10;
    } while (lVar27 != 0);
    uVar24 = puVar20[0x11];
    uVar10 = puVar20[0x12];
    uVar11 = puVar20[0x13];
    puVar18[0x10] = puVar20[0x10];
    puVar18[0x11] = uVar24;
    puVar18[0x12] = uVar10;
    puVar18[0x13] = uVar11;
    uVar24 = puVar20[0x15];
    uVar10 = puVar20[0x16];
    uVar11 = puVar20[0x17];
    puVar18[0x14] = puVar20[0x14];
    puVar18[0x15] = uVar24;
    puVar18[0x16] = uVar10;
    puVar18[0x17] = uVar11;
    uVar24 = puVar20[0x19];
    uVar10 = puVar20[0x1a];
    uVar11 = puVar20[0x1b];
    puVar18[0x18] = puVar20[0x18];
    puVar18[0x19] = uVar24;
    puVar18[0x1a] = uVar10;
    puVar18[0x1b] = uVar11;
    lVar27 = local_690 * 0x78;
    puVar16 = (undefined8 *)(lVar27 + 0x10 + (longlong)pvVar29);
    local_228 = *(undefined8 *)(lVar27 + (longlong)pvVar29);
    uStack_220 = ((undefined8 *)(lVar27 + (longlong)pvVar29))[1];
    puVar1 = (undefined8 *)(lVar27 + 0x20 + (longlong)pvVar29);
    local_218 = *puVar16;
    uStack_210 = puVar16[1];
    puVar16 = (undefined8 *)(lVar27 + 0x30 + (longlong)pvVar29);
    local_208 = *puVar1;
    uStack_200 = puVar1[1];
    puVar1 = (undefined8 *)(lVar27 + 0x40 + (longlong)pvVar29);
    local_1f8 = *puVar16;
    uStack_1f0 = puVar16[1];
    puVar16 = (undefined8 *)(lVar27 + 0x50 + (longlong)pvVar29);
    local_1e8 = *puVar1;
    uStack_1e0 = puVar1[1];
    puVar1 = (undefined8 *)(lVar27 + 0x60 + (longlong)pvVar29);
    local_1d8 = *puVar16;
    uStack_1d0 = puVar16[1];
    lVar17 = local_6b8 * 0x78;
    local_1c8 = *puVar1;
    uStack_1c0 = puVar1[1];
    local_1b8 = *(undefined8 *)(lVar27 + 0x70 + (longlong)pvVar29);
    puVar16 = (undefined8 *)(lVar17 + 0x10 + (longlong)pvVar29);
    local_1b0 = *(undefined8 *)(lVar17 + (longlong)pvVar29);
    uStack_1a8 = ((undefined8 *)(lVar17 + (longlong)pvVar29))[1];
    puVar1 = (undefined8 *)(lVar17 + 0x20 + (longlong)pvVar29);
    local_1a0 = *puVar16;
    uStack_198 = puVar16[1];
    puVar16 = (undefined8 *)(lVar17 + 0x30 + (longlong)pvVar29);
    local_190 = *puVar1;
    uStack_188 = puVar1[1];
    puVar1 = (undefined8 *)(lVar17 + 0x40 + (longlong)pvVar29);
    local_180 = *puVar16;
    uStack_178 = puVar16[1];
    puVar16 = (undefined8 *)(lVar17 + 0x50 + (longlong)pvVar29);
    local_170 = *puVar1;
    uStack_168 = puVar1[1];
    puVar1 = (undefined8 *)(lVar17 + 0x60 + (longlong)pvVar29);
    local_160 = *puVar16;
    uStack_158 = puVar16[1];
    lVar27 = (longlong)iVar30 * 0x78;
    local_150 = *puVar1;
    uStack_148 = puVar1[1];
    local_140 = *(undefined8 *)(lVar17 + 0x70 + (longlong)pvVar29);
    iVar25 = (int)local_6a0[1];
    puVar16 = (undefined8 *)(lVar27 + 0x10 + (longlong)pvVar29);
    local_138 = *(undefined8 *)(lVar27 + (longlong)pvVar29);
    uStack_130 = ((undefined8 *)(lVar27 + (longlong)pvVar29))[1];
    puVar1 = (undefined8 *)(lVar27 + 0x20 + (longlong)pvVar29);
    local_128 = *puVar16;
    uStack_120 = puVar16[1];
    puVar16 = (undefined8 *)(lVar27 + 0x30 + (longlong)pvVar29);
    local_118 = *puVar1;
    uStack_110 = puVar1[1];
    puVar1 = (undefined8 *)(lVar27 + 0x40 + (longlong)pvVar29);
    local_108 = *puVar16;
    uStack_100 = puVar16[1];
    puVar16 = (undefined8 *)(lVar27 + 0x50 + (longlong)pvVar29);
    local_f8 = *puVar1;
    uStack_f0 = puVar1[1];
    puVar2 = (undefined4 *)(lVar27 + 0x60 + (longlong)pvVar29);
    local_e8 = *puVar16;
    uStack_e0 = puVar16[1];
    local_d8 = *puVar2;
    uStack_d4 = puVar2[1];
    uStack_d0 = puVar2[2];
    uStack_cc = puVar2[3];
    local_c8 = *(undefined8 *)(lVar27 + 0x70 + (longlong)pvVar29);
    *(int *)(local_6a0 + 1) = iVar25 + 1;
    if (*(int *)((longlong)local_6a0 + 0xc) < iVar25 + 1) {
      FUN_1424cede0(local_6a0,iVar25);
    }
    lVar27 = 9;
    puVar16 = local_588;
    puVar1 = (undefined8 *)((longlong)iVar25 * 0x4d0 + *plVar13);
    do {
      puVar20 = puVar1;
      puVar18 = puVar16;
      uVar24 = puVar18[1];
      uVar10 = puVar18[2];
      uVar11 = puVar18[3];
      *puVar20 = *puVar18;
      puVar20[1] = uVar24;
      uVar24 = puVar18[4];
      uVar12 = puVar18[5];
      puVar20[2] = uVar10;
      puVar20[3] = uVar11;
      uVar10 = puVar18[6];
      uVar11 = puVar18[7];
      puVar20[4] = uVar24;
      puVar20[5] = uVar12;
      uVar24 = puVar18[8];
      uVar12 = puVar18[9];
      puVar20[6] = uVar10;
      puVar20[7] = uVar11;
      uVar10 = puVar18[10];
      uVar11 = puVar18[0xb];
      puVar20[8] = uVar24;
      puVar20[9] = uVar12;
      uVar24 = puVar18[0xc];
      uVar12 = puVar18[0xd];
      puVar20[10] = uVar10;
      puVar20[0xb] = uVar11;
      uVar10 = puVar18[0xe];
      uVar11 = puVar18[0xf];
      puVar20[0xc] = uVar24;
      puVar20[0xd] = uVar12;
      puVar20[0xe] = uVar10;
      puVar20[0xf] = uVar11;
      lVar27 = lVar27 + -1;
      puVar16 = puVar18 + 0x10;
      puVar1 = puVar20 + 0x10;
    } while (lVar27 != 0);
    uVar24 = puVar18[0x11];
    uVar10 = puVar18[0x12];
    uVar11 = puVar18[0x13];
    puVar20[0x10] = puVar18[0x10];
    puVar20[0x11] = uVar24;
    uVar24 = puVar18[0x14];
    uVar12 = puVar18[0x15];
    puVar20[0x12] = uVar10;
    puVar20[0x13] = uVar11;
    uVar10 = puVar18[0x16];
    uVar11 = puVar18[0x17];
    puVar20[0x14] = uVar24;
    puVar20[0x15] = uVar12;
    uVar6 = *(undefined4 *)(puVar18 + 0x18);
    uVar7 = *(undefined4 *)((longlong)puVar18 + 0xc4);
    uVar8 = *(undefined4 *)(puVar18 + 0x19);
    uVar9 = *(undefined4 *)((longlong)puVar18 + 0xcc);
    puVar20[0x16] = uVar10;
    puVar20[0x17] = uVar11;
    *(undefined4 *)(puVar20 + 0x18) = uVar6;
    *(undefined4 *)((longlong)puVar20 + 0xc4) = uVar7;
    *(undefined4 *)(puVar20 + 0x19) = uVar8;
    *(undefined4 *)((longlong)puVar20 + 0xcc) = uVar9;
    iVar25 = (iVar26 - iVar23) + -1;
    if (iVar25 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar23 * 0x78 + (longlong)pvVar29),
                 (void *)((longlong)(iVar23 + 1) * 0x78 + (longlong)pvVar29),(longlong)iVar25 * 0x78
                );
    }
    local_6c8 = iVar26 + -1;
    FUN_14089e470(&local_6d0);
    pvVar29 = local_6d0;
    iVar26 = local_6c8;
  } while( true );
}



// FUNCTION 1424d6f60 UnbindBuffers body=753 status=ok
// SIG undefined UnbindBuffers(void)

void FRadixSortDownsweepCS::UnbindBuffers(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  return;
}



// FUNCTION 1424d7260 UnsetParameters body=314 status=ok
// SIG undefined UnsetParameters(void)

void FBaseGPUSkinCacheCS::UnsetParameters(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  if (*(short *)(param_1 + 0xee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xec);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0xf2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf0);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  return;
}



// FUNCTION 1424d73a0 FUN_1424d73a0 body=1511 status=ok
// SIG undefined FUN_1424d73a0(void)

undefined8
FUN_1424d73a0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,int param_5,
             byte param_6,int param_7,char param_8)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 local_res20 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong local_40;
  
  plVar13 = (longlong *)0x0;
  uVar1 = *(uint *)(param_4 + 1);
  if (param_7 < 2) {
    plVar14 = plVar13;
    plVar5 = (longlong *)&DAT_146af7ba0;
    if (uVar1 == 0) {
      plVar5 = plVar13;
    }
    goto LAB_1424d7604;
  }
  iVar12 = *(int *)(param_1 + 0x28);
  if (iVar12 == param_5) {
    iVar3 = *(int *)(param_1 + 0x24);
    uVar8 = *(uint *)(param_1 + 0x20);
  }
  else {
    *(int *)(param_1 + 0x24) = iVar12;
    uVar8 = 1 - *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar8;
    *(int *)(param_1 + 0x28) = param_5;
    iVar3 = iVar12;
    iVar12 = param_5;
  }
  uVar17 = 0x11;
  bVar6 = 0;
  if ((uint)(iVar12 - iVar3) < 2) {
    bVar6 = param_6;
  }
  plVar14 = (longlong *)(((ulonglong)bVar6 ^ (ulonglong)uVar8) * 0x10 + param_1);
  uVar8 = uVar1 * 0x30;
  plVar5 = plVar13;
  do {
    uVar15 = uVar17 + (int)plVar5 >> 1;
    if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar15 - 1) * 4) < uVar8) {
      plVar5 = (longlong *)(ulonglong)uVar15;
      uVar15 = uVar17;
    }
    uVar17 = uVar15;
  } while (1 < uVar17 - (int)plVar5);
  lVar2 = *plVar14;
  if (lVar2 == 0) {
LAB_1424d74c7:
    IsInRenderingThread();
    if (DAT_146af8e38 == '\0') {
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      FUN_1424bfc30(&DAT_146af89b0,&local_58,uVar8);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(plVar14,&local_58);
    TRefCountPtr<FRHIIndexBuffer>::operator=(plVar14 + 1,&uStack_50);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_50);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  }
  else if ((plVar14[1] == 0) ||
          (*(int *)(&DAT_146532ba0 + (longlong)plVar5 * 4) != *(int *)(lVar2 + 0x18))) {
    if ((lVar2 != 0) && (plVar14[1] != 0)) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      local_40 = plVar14[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_48 = lVar2;
      FUN_1424cde10(&DAT_146af89b0,&local_48);
    }
    goto LAB_1424d74c7;
  }
  plVar5 = plVar13;
  if (uVar1 != 0) {
    if (((param_8 == '\0') && (DAT_146ab6383 != '\0')) && (0 < *(int *)(DAT_146af7a58 + 4))) {
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar9 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar9 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar9;
      *(undefined8 **)(param_2 + 8) = puVar9 + 1;
      lVar2 = *plVar14;
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_1450cd828;
      puVar9[4] = param_3;
      puVar9[2] = lVar2;
      *(uint *)(puVar9 + 3) = uVar8;
      puVar9[5] = param_4;
      return 1;
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,&DAT_146ab6e78,*plVar14,0,uVar8,1);
  }
LAB_1424d7604:
  if (3 < uVar1) {
    lVar2 = *param_3;
    plVar16 = plVar5 + 7;
    do {
      lVar10 = (longlong)(int)plVar13;
      lVar7 = (ulonglong)*(ushort *)(*param_4 + lVar10 * 2) * 0x40;
      *(undefined4 *)(plVar16 + -7) = *(undefined4 *)(lVar7 + lVar2);
      *(undefined4 *)((longlong)plVar16 + -0x34) = *(undefined4 *)(lVar7 + 0x10 + lVar2);
      *(undefined4 *)(plVar16 + -6) = *(undefined4 *)(lVar7 + 0x20 + lVar2);
      *(undefined4 *)((longlong)plVar16 + -0x2c) = *(undefined4 *)(lVar7 + 0x30 + lVar2);
      *(undefined4 *)(plVar16 + -5) = *(undefined4 *)(lVar7 + 4 + lVar2);
      *(undefined4 *)((longlong)plVar16 + -0x24) = *(undefined4 *)(lVar7 + 0x14 + lVar2);
      *(undefined4 *)(plVar16 + -4) = *(undefined4 *)(lVar7 + 0x24 + lVar2);
      *(undefined4 *)((longlong)plVar16 + -0x1c) = *(undefined4 *)(lVar7 + 0x34 + lVar2);
      *(undefined4 *)(plVar16 + -3) = *(undefined4 *)(lVar7 + 8 + lVar2);
      *(undefined4 *)((longlong)plVar16 + -0x14) = *(undefined4 *)(lVar7 + 0x18 + lVar2);
      *(undefined4 *)(plVar16 + -2) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
      *(undefined4 *)((longlong)plVar16 + -0xc) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
      lVar7 = (ulonglong)*(ushort *)(*param_4 + 2 + lVar10 * 2) * 0x40;
      *(undefined4 *)(plVar16 + -1) = *(undefined4 *)(lVar7 + lVar2);
      *(undefined4 *)((longlong)plVar16 + -4) = *(undefined4 *)(lVar7 + 0x10 + lVar2);
      *(undefined4 *)plVar16 = *(undefined4 *)(lVar7 + 0x20 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 4) = *(undefined4 *)(lVar7 + 0x30 + lVar2);
      *(undefined4 *)(plVar16 + 1) = *(undefined4 *)(lVar7 + 4 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0xc) = *(undefined4 *)(lVar7 + 0x14 + lVar2);
      *(undefined4 *)(plVar16 + 2) = *(undefined4 *)(lVar7 + 0x24 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x14) = *(undefined4 *)(lVar7 + 0x34 + lVar2);
      *(undefined4 *)(plVar16 + 3) = *(undefined4 *)(lVar7 + 8 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x1c) = *(undefined4 *)(lVar7 + 0x18 + lVar2);
      *(undefined4 *)(plVar16 + 4) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x24) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
      lVar7 = (ulonglong)*(ushort *)(*param_4 + 4 + lVar10 * 2) * 0x40;
      *(undefined4 *)(plVar16 + 5) = *(undefined4 *)(lVar7 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x2c) = *(undefined4 *)(lVar7 + 0x10 + lVar2);
      *(undefined4 *)(plVar16 + 6) = *(undefined4 *)(lVar7 + 0x20 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x34) = *(undefined4 *)(lVar7 + 0x30 + lVar2);
      *(undefined4 *)(plVar16 + 7) = *(undefined4 *)(lVar7 + 4 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x3c) = *(undefined4 *)(lVar7 + 0x14 + lVar2);
      *(undefined4 *)(plVar16 + 8) = *(undefined4 *)(lVar7 + 0x24 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x44) = *(undefined4 *)(lVar7 + 0x34 + lVar2);
      *(undefined4 *)(plVar16 + 9) = *(undefined4 *)(lVar7 + 8 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x4c) = *(undefined4 *)(lVar7 + 0x18 + lVar2);
      *(undefined4 *)(plVar16 + 10) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x54) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
      lVar7 = (ulonglong)*(ushort *)(*param_4 + 6 + lVar10 * 2) * 0x40;
      uVar8 = (int)plVar13 + 4;
      plVar13 = (longlong *)(ulonglong)uVar8;
      *(undefined4 *)(plVar16 + 0xb) = *(undefined4 *)(lVar7 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x5c) = *(undefined4 *)(lVar7 + 0x10 + lVar2);
      *(undefined4 *)(plVar16 + 0xc) = *(undefined4 *)(lVar7 + 0x20 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 100) = *(undefined4 *)(lVar7 + 0x30 + lVar2);
      *(undefined4 *)(plVar16 + 0xd) = *(undefined4 *)(lVar7 + 4 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x6c) = *(undefined4 *)(lVar7 + 0x14 + lVar2);
      *(undefined4 *)(plVar16 + 0xe) = *(undefined4 *)(lVar7 + 0x24 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x74) = *(undefined4 *)(lVar7 + 0x34 + lVar2);
      *(undefined4 *)(plVar16 + 0xf) = *(undefined4 *)(lVar7 + 8 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x7c) = *(undefined4 *)(lVar7 + 0x18 + lVar2);
      *(undefined4 *)(plVar16 + 0x10) = *(undefined4 *)(lVar7 + 0x28 + lVar2);
      *(undefined4 *)((longlong)plVar16 + 0x84) = *(undefined4 *)(lVar7 + 0x38 + lVar2);
      plVar16 = plVar16 + 0x18;
    } while (uVar8 < uVar1 - 3);
  }
  if ((uint)plVar13 < uVar1) {
    lVar2 = *param_3;
    plVar5 = plVar5 + (longlong)plVar13 * 6 + 1;
    do {
      iVar12 = (int)plVar13;
      uVar8 = iVar12 + 1;
      plVar13 = (longlong *)(ulonglong)uVar8;
      puVar11 = (undefined4 *)
                ((ulonglong)*(ushort *)(*param_4 + (longlong)iVar12 * 2) * 0x40 + lVar2);
      *(undefined4 *)(plVar5 + -1) = *puVar11;
      *(undefined4 *)((longlong)plVar5 + -4) = puVar11[4];
      *(undefined4 *)plVar5 = puVar11[8];
      *(undefined4 *)((longlong)plVar5 + 4) = puVar11[0xc];
      *(undefined4 *)(plVar5 + 1) = puVar11[1];
      *(undefined4 *)((longlong)plVar5 + 0xc) = puVar11[5];
      *(undefined4 *)(plVar5 + 2) = puVar11[9];
      *(undefined4 *)((longlong)plVar5 + 0x14) = puVar11[0xd];
      *(undefined4 *)(plVar5 + 3) = puVar11[2];
      *(undefined4 *)((longlong)plVar5 + 0x1c) = puVar11[6];
      *(undefined4 *)(plVar5 + 4) = puVar11[10];
      *(undefined4 *)((longlong)plVar5 + 0x24) = puVar11[0xe];
      plVar5 = plVar5 + 6;
    } while (uVar8 < uVar1);
  }
  if (param_7 < 2) {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res20,&DAT_146af7ba0,&DAT_146af7b28,2)
    ;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res20);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res20);
  }
  else if (uVar1 != 0) {
    (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,*plVar14);
  }
  return 0;
}



// FUNCTION 1424d7990 FUN_1424d7990 body=751 status=ok
// SIG undefined FUN_1424d7990(void)

undefined *
FUN_1424d7990(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,int param_5,
             int param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  uVar7 = *(uint *)(param_3 + 1);
  if (1 < param_6) {
    if (*(int *)(param_1 + 0x30) == -1) {
      uVar9 = 0;
    }
    else if (*(int *)(param_1 + 0x34) == -1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulonglong)
              ((uint)(param_5 - *(int *)(param_1 + 0x30)) <=
              (uint)(param_5 - *(int *)(param_1 + 0x34)));
    }
    iVar3 = 0;
    if (param_5 != -1) {
      iVar3 = param_5;
    }
    *(int *)(param_1 + 0x30 + uVar9 * 4) = iVar3;
    puVar6 = (ulonglong *)((uVar9 + 1) * 0x10 + param_1);
    uVar10 = 0x11;
    uVar12 = 0x10000;
    if (uVar7 < 0x10001) {
      uVar12 = uVar7;
    }
    uVar7 = uVar12 * 0x18;
    uVar9 = 0;
    do {
      uVar8 = uVar10 + (int)uVar9 >> 1;
      if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar8 - 1) * 4) < uVar7) {
        uVar9 = (ulonglong)uVar8;
        uVar8 = uVar10;
      }
      uVar10 = uVar8;
    } while (1 < uVar10 - (int)uVar9);
    in_RAX = *puVar6;
    if (((in_RAX == 0) || (puVar6[1] == 0)) ||
       (*(int *)(&DAT_146532ba0 + uVar9 * 4) != *(int *)(in_RAX + 0x18))) {
      if ((in_RAX != 0) && (puVar6[1] != 0)) {
        LOCK();
        *(int *)(in_RAX + 8) = *(int *)(in_RAX + 8) + 1;
        UNLOCK();
        local_20 = puVar6[1];
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        local_28 = in_RAX;
        FUN_1424cde10(&DAT_146af8ff0,&local_28);
      }
      IsInRenderingThread();
      if (DAT_146af9478 == '\0') {
        local_38 = 0;
        uStack_30 = 0;
      }
      else {
        FUN_1424bfe90(&DAT_146af8ff0,&local_38,uVar7);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(puVar6,&local_38);
      TRefCountPtr<FRHIIndexBuffer>::operator=(puVar6 + 1,&uStack_30);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_30);
      in_RAX = TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_38);
    }
    if (uVar12 != 0) {
      if ((DAT_146ab6383 != '\0') && (0 < *(int *)(DAT_146af7a58 + 4))) {
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 6;
        if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
          puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar4 = puVar5 + 6;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar4;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar5;
        *(undefined8 **)(param_2 + 8) = puVar5 + 1;
        uVar9 = *puVar6;
        puVar5[1] = 0;
        *puVar5 = &PTR_ExecuteAndDestruct_1450cdc70;
        puVar5[2] = uVar9;
        *(uint *)(puVar5 + 3) = uVar7;
        puVar5[4] = param_3;
        puVar5[5] = param_4;
        return &DAT_1450cdc01;
      }
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,&DAT_146ab6e78,*puVar6,0,uVar7,1)
      ;
      param_3 = (undefined8 *)*param_3;
      if (uVar12 != 0) {
        lVar11 = *param_4 - (longlong)param_3;
        uVar9 = (ulonglong)uVar12;
        do {
          uVar1 = *param_3;
          uVar2 = *(undefined4 *)(param_3 + 1);
          param_3 = (undefined8 *)((longlong)param_3 + 0xc);
          *puVar4 = uVar1;
          uVar1 = *(undefined8 *)(lVar11 + -0xc + (longlong)param_3);
          *(undefined4 *)(puVar4 + 1) = uVar2;
          uVar2 = *(undefined4 *)(lVar11 + -4 + (longlong)param_3);
          *(undefined8 *)((longlong)puVar4 + 0xc) = uVar1;
          *(undefined4 *)((longlong)puVar4 + 0x14) = uVar2;
          puVar4 = puVar4 + 3;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      in_RAX = (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,*puVar6);
    }
  }
  return (undefined *)(in_RAX & 0xffffffffffffff00);
}



// FUNCTION 1424d7c80 FUN_1424d7c80 body=1556 status=ok
// SIG undefined FUN_1424d7c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1424d7c80(longlong param_1,int param_2,undefined4 *param_3,char param_4,char param_5,
                       undefined1 param_6)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_1e8 [32];
  char local_1c8;
  undefined1 local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  undefined4 local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  float local_174;
  undefined1 local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  float local_144;
  undefined1 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x7b0) <= param_2)) {
    uVar7 = (DAT_1468387a8 ^ (ulonglong)auStack_1e8) & 0xffffffffffffff00;
  }
  else {
    if (*(char *)(param_1 + 0x8f0) != '\0') {
      *(undefined1 *)(param_1 + 0x8f2) = 1;
    }
    iVar9 = param_2;
    if (param_2 < *(int *)(param_1 + 2000)) {
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x7c8) + (longlong)param_2 * 4);
    }
    puVar4 = (undefined8 *)((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x7a8));
    local_d8 = *puVar4;
    uStack_d0 = puVar4[1];
    local_c8 = *(float *)(puVar4 + 2);
    fStack_c4 = *(float *)((longlong)puVar4 + 0x14);
    fStack_c0 = *(float *)(puVar4 + 3);
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 0x1c);
    local_b8 = *(undefined4 *)(puVar4 + 4);
    uStack_b4 = *(undefined4 *)((longlong)puVar4 + 0x24);
    uStack_b0 = *(undefined4 *)(puVar4 + 5);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0x2c);
    if (param_4 == '\0') {
      local_108 = *param_3;
      uStack_104 = param_3[1];
      uStack_100 = param_3[2];
      uStack_fc = param_3[3];
      puVar5 = &local_138;
      local_128 = *(undefined8 *)(param_3 + 4);
      uStack_120 = *(undefined8 *)(param_3 + 6);
      local_118 = *(undefined8 *)(param_3 + 8);
      uStack_110 = *(undefined8 *)(param_3 + 10);
      local_138 = local_108;
      uStack_134 = uStack_104;
      uStack_130 = uStack_100;
      uStack_12c = uStack_fc;
    }
    else {
      puVar5 = (undefined4 *)FUN_14162bcf0(param_3,&local_138,param_1 + 0x210);
      local_108 = *puVar5;
      uStack_104 = puVar5[1];
      uStack_100 = puVar5[2];
      uStack_fc = puVar5[3];
    }
    local_198 = (float)puVar5[4];
    fStack_194 = (float)puVar5[5];
    fStack_190 = (float)puVar5[6];
    uStack_18c = puVar5[7];
    local_f8 = local_198;
    fStack_f4 = fStack_194;
    fStack_f0 = fStack_190;
    uStack_ec = uStack_18c;
    local_e8 = puVar5[8];
    uStack_e4 = puVar5[9];
    uStack_e0 = puVar5[10];
    uStack_dc = puVar5[0xb];
    if ((((iVar9 == -1) || (*(int *)(param_1 + 0x864) <= iVar9)) ||
        (local_168 = local_c8, fStack_164 = fStack_c4, fStack_160 = fStack_c0,
        uStack_15c = uStack_bc, 0.0001 < ABS(local_198 - local_c8))) ||
       (((0.0001 < ABS(fStack_194 - fStack_c4) || (0.0001 < ABS(fStack_190 - fStack_c0))) ||
        ((*(longlong *)(param_1 + 0x7e8) == 0 ||
         (*(char *)(*(longlong *)(param_1 + 0x7e8) + 0x58) == '\0')))))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    local_1c0 = param_6;
    local_1c8 = param_5;
    bVar3 = FUN_14250c5d0(param_1,param_2,param_3,param_4);
    if ((bVar3 != 0) && (*(longlong *)(param_1 + 0x728) != 0)) {
      pfVar6 = (float *)UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),&local_158);
      fStack_190 = pfVar6[5] + pfVar6[2];
      local_170 = 1;
      local_180 = pfVar6[2] - pfVar6[5];
      local_188 = CONCAT44(pfVar6[1] - pfVar6[4],*pfVar6 - pfVar6[3]);
      local_17c = CONCAT44(pfVar6[4] + pfVar6[1],pfVar6[3] + *pfVar6);
      local_174 = fStack_190;
      fStack_160 = local_180;
      FBox::TransformBy(&local_188,&local_1b8,&local_108);
      if (iVar9 != -1) {
        FUN_14250c440(param_1 + 0x7f8,iVar9,&local_108);
      }
      if (bVar2) {
        pfVar6 = (float *)UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),&local_138);
        fStack_160 = pfVar6[5] + pfVar6[2];
        local_140 = 1;
        fStack_190 = pfVar6[2] - pfVar6[5];
        local_158 = CONCAT44(pfVar6[1] - pfVar6[4],*pfVar6 - pfVar6[3]);
        local_14c = CONCAT44(pfVar6[4] + pfVar6[1],pfVar6[3] + *pfVar6);
        local_150 = fStack_190;
        local_144 = fStack_160;
        FBox::TransformBy(&local_158,&local_188,&local_d8);
        if ((((((local_1b8 <= (float)local_188) || ((float)local_17c <= local_1b8)) ||
              (fStack_1b4 <= local_188._4_4_)) ||
             (((local_17c._4_4_ <= fStack_1b4 || (fStack_1b0 <= local_180)) ||
              ((local_174 <= fStack_1b0 ||
               ((fStack_1ac <= (float)local_188 || ((float)local_17c <= fStack_1ac)))))))) ||
            (local_1a8 <= local_188._4_4_)) ||
           (((local_17c._4_4_ <= local_1a8 || (fStack_1a4 <= local_180)) ||
            (local_174 <= fStack_1a4)))) {
          if (*(char *)(param_1 + 0x880) == '\0') {
            if ((char)local_1a0 != '\0') {
              *(float *)(param_1 + 0x868) = local_1b8;
              *(float *)(param_1 + 0x86c) = fStack_1b4;
              *(float *)(param_1 + 0x870) = fStack_1b0;
              *(float *)(param_1 + 0x874) = fStack_1ac;
              *(ulonglong *)(param_1 + 0x878) = CONCAT44(fStack_1a4,local_1a8);
              *(undefined4 *)(param_1 + 0x880) = local_1a0;
            }
          }
          else if ((char)local_1a0 != '\0') {
            fVar10 = *(float *)(param_1 + 0x868);
            if (local_1b8 <= *(float *)(param_1 + 0x868)) {
              fVar10 = local_1b8;
            }
            if (*(float *)(param_1 + 0x870) <= fStack_1b0) {
              fStack_1b0 = *(float *)(param_1 + 0x870);
            }
            if (local_1a8 <= *(float *)(param_1 + 0x878)) {
              local_1a8 = *(float *)(param_1 + 0x878);
            }
            fVar11 = *(float *)(param_1 + 0x86c);
            if (fStack_1b4 <= *(float *)(param_1 + 0x86c)) {
              fVar11 = fStack_1b4;
            }
            *(float *)(param_1 + 0x868) = fVar10;
            fVar10 = *(float *)(param_1 + 0x874);
            if (*(float *)(param_1 + 0x874) <= fStack_1ac) {
              fVar10 = fStack_1ac;
            }
            *(float *)(param_1 + 0x870) = fStack_1b0;
            *(float *)(param_1 + 0x86c) = fVar11;
            *(float *)(param_1 + 0x878) = local_1a8;
            *(float *)(param_1 + 0x874) = fVar10;
            fVar10 = *(float *)(param_1 + 0x87c);
            if (*(float *)(param_1 + 0x87c) <= fStack_1a4) {
              fVar10 = fStack_1a4;
            }
            *(float *)(param_1 + 0x87c) = fVar10;
          }
          if (param_5 != '\0') {
            FUN_1423424e0(param_1);
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x89c) == '\0') {
          if ((char)local_1a0 != '\0') {
            *(float *)(param_1 + 0x884) = local_1b8;
            *(float *)(param_1 + 0x888) = fStack_1b4;
            *(float *)(param_1 + 0x88c) = fStack_1b0;
            *(float *)(param_1 + 0x890) = fStack_1ac;
            *(ulonglong *)(param_1 + 0x894) = CONCAT44(fStack_1a4,local_1a8);
            *(undefined4 *)(param_1 + 0x89c) = local_1a0;
          }
        }
        else if ((char)local_1a0 != '\0') {
          fVar10 = *(float *)(param_1 + 0x884);
          if (local_1b8 <= *(float *)(param_1 + 0x884)) {
            fVar10 = local_1b8;
          }
          *(float *)(param_1 + 0x884) = fVar10;
          fVar10 = *(float *)(param_1 + 0x888);
          if (fStack_1b4 <= *(float *)(param_1 + 0x888)) {
            fVar10 = fStack_1b4;
          }
          fVar11 = fStack_1b0;
          if (*(float *)(param_1 + 0x88c) <= fStack_1b0) {
            fVar11 = *(float *)(param_1 + 0x88c);
          }
          *(float *)(param_1 + 0x888) = fVar10;
          fVar10 = fStack_1ac;
          if (fStack_1ac <= *(float *)(param_1 + 0x890)) {
            fVar10 = *(float *)(param_1 + 0x890);
          }
          *(float *)(param_1 + 0x88c) = fVar11;
          fVar11 = *(float *)(param_1 + 0x894);
          if (*(float *)(param_1 + 0x894) <= local_1a8) {
            fVar11 = local_1a8;
          }
          *(float *)(param_1 + 0x890) = fVar10;
          fVar10 = *(float *)(param_1 + 0x898);
          if (*(float *)(param_1 + 0x898) <= fStack_1a4) {
            fVar10 = fStack_1a4;
          }
          *(float *)(param_1 + 0x894) = fVar11;
          *(float *)(param_1 + 0x898) = fVar10;
        }
        iVar9 = *(int *)(param_1 + 0x8a8);
        *(int *)(param_1 + 0x8a8) = iVar9 + 1;
        if (*(int *)(param_1 + 0x8ac) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x8a0,iVar9);
        }
        lVar1 = *(longlong *)(param_1 + 0x8a0);
        lVar8 = (longlong)iVar9 * 0x1c;
        pfVar6 = (float *)(lVar8 + lVar1);
        *pfVar6 = local_1b8;
        pfVar6[1] = fStack_1b4;
        pfVar6[2] = fStack_1b0;
        pfVar6[3] = fStack_1ac;
        *(ulonglong *)(lVar8 + 0x10 + lVar1) = CONCAT44(fStack_1a4,local_1a8);
        *(undefined4 *)(lVar8 + 0x18 + lVar1) = local_1a0;
        FUN_1424bd460(param_1,CONCAT71((int7)((ulonglong)lVar8 >> 8),1),0);
      }
    }
    uVar7 = (ulonglong)bVar3;
  }
  return uVar7;
}



// FUNCTION 1424d82a0 FUN_1424d82a0 body=143 status=ok
// SIG undefined FUN_1424d82a0(void)

undefined8 FUN_1424d82a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xc4) * *(int *)(param_2 + 0xc0);
  if (*(int *)(param_1 + 0x30) == iVar2) {
    if (*(byte *)(param_2 + 0xe2) == 0) {
      uVar1 = FUN_14046e310(*(undefined1 *)(param_2 + 0xe1));
    }
    else {
      uVar1 = (uint)*(byte *)(param_2 + 0xe2);
    }
    if (uVar1 == 10) {
      if (0 < iVar2) {
        FUN_1424d8330(param_2,*(undefined8 *)(param_1 + 0x28),8);
        FUN_141ee24f0(0);
        UObjectBaseUtility::MarkPackageDirty(param_2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1424d8330 FUN_1424d8330 body=715 status=ok
// SIG undefined FUN_1424d8330(void)

undefined8 FUN_1424d8330(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  LARGE_INTEGER local_res10 [2];
  LARGE_INTEGER local_res20;
  
  plVar9 = (longlong *)0x0;
  lVar6 = *(longlong *)(param_1 + 0xc0);
  plVar5 = (longlong *)operator_new(0x30);
  plVar11 = plVar9;
  if (plVar5 != (longlong *)0x0) {
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar11 = plVar5;
  }
  *plVar11 = param_1;
  *(undefined4 *)(plVar11 + 1) = 0;
  *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
  *(undefined4 *)(plVar11 + 2) = 0;
  *(undefined4 *)((longlong)plVar11 + 0x14) = 0;
  plVar11[3] = lVar6;
  iVar10 = *(int *)(param_1 + 0xc0);
  *(int *)((longlong)plVar11 + 0x24) = param_3;
  plVar11[5] = param_2;
  *(int *)(plVar11 + 4) = param_3 * iVar10;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    lVar6 = UTextureRenderTarget::GetRenderTargetResource(*plVar11);
    if (lVar6 != 0) {
      lVar6 = UTextureRenderTarget::GetRenderTargetResource(*plVar11);
      puVar7 = (undefined8 *)(**(code **)(*(longlong *)(lVar6 + 0x68) + 8))(lVar6 + 0x68);
      (**(code **)(*DAT_146ab6358 + 0x590))
                (DAT_146ab6358,&DAT_146ab6e78,*puVar7,0,plVar11 + 1,(int)plVar11[4],plVar11[5]);
    }
    FMemory::operator_delete(plVar11,0x30);
    QueryPerformanceCounter(local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10[0].s.LowPart - local_res20._0_4_);
    return 1;
  }
  pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar8);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar9 = plVar5;
    }
    TlsSetValue(*pDVar8,plVar9);
    plVar5 = plVar9;
  }
  plVar9 = (longlong *)plVar5[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar5;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
      plVar5[1] = (longlong)plVar9;
      if (plVar9 == (longlong *)0x0) {
        puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar5[1] = (longlong)puVar7;
        lVar6 = 0x1f;
        do {
          puVar2 = puVar7 + 0x20;
          *puVar7 = puVar2;
          lVar6 = lVar6 + -1;
          puVar7 = puVar2;
        } while (lVar6 != 0);
        *puVar2 = 0;
        plVar9 = (longlong *)plVar5[1];
      }
      iVar10 = 0x20;
      *(undefined4 *)(plVar5 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar5[1] = (longlong)plVar9;
      *(undefined4 *)(plVar5 + 2) = 0x20;
      *plVar5 = 0;
    }
  }
  else {
    iVar10 = (int)plVar5[2];
  }
  plVar5[1] = *plVar9;
  *(int *)(plVar5 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *plVar9 = (longlong)&PTR_FUN_1450cd600;
  *(undefined1 *)(plVar9 + 3) = 0;
  plVar9[4] = 0;
  plVar9[2] = (longlong)plVar11;
  lVar6 = plVar9[4];
  piVar1 = (int *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_140445100(plVar9,0,0xff,1);
  if (lVar6 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar6);
    }
  }
  return 1;
}



// FUNCTION 1424d8600 FUN_1424d8600 body=1388 status=ok
// SIG undefined FUN_1424d8600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424d8600(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  uint uVar13;
  wchar_t *pwVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_298 [32];
  undefined2 local_278;
  wchar_t *local_268;
  undefined8 local_260;
  undefined8 local_258;
  float local_250;
  wchar_t *local_248;
  undefined8 local_240;
  wchar_t *local_238;
  undefined8 local_230;
  float local_228;
  float fStack_224;
  float local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  int local_1e0;
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined4 local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  undefined1 local_168 [128];
  longlong local_e8;
  undefined8 local_e0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    cVar4 = FUN_14254a160(param_2);
    UWorld::GetPlayerControllerIterator(param_2,&local_1e8);
    while( true ) {
      if ((local_1e0 < 0) || (*(int *)(local_1e8 + 8) <= local_1e0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar6 = (longlong *)FWeakObjectPtr::Get();
      if (((cVar4 == '\0') || (cVar5 = (**(code **)(*plVar6 + 0xe10))(), cVar5 != '\0')) &&
         (lVar8 = plVar6[0xa1], lVar8 != 0)) {
        lVar7 = ULocalPlayer::GetPrivateStaticClass();
        lVar8 = *(longlong *)(lVar8 + 0x10);
        if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*plVar6 + 0x7a8))(plVar6,&local_228,local_1c8);
          local_218 = 0;
          local_210 = 0x3f800000;
          FRotator::RotateVector(local_1c8,&local_1b8,&local_218);
          local_20c = 0x3f800000;
          local_204 = 0;
          FRotator::RotateVector(local_1c8,&local_258,&local_20c);
          uVar3 = local_1b0;
          uVar2 = local_1b8;
          fVar17 = (float)local_258 * 500.0 + local_228;
          fVar16 = local_258._4_4_ * 500.0 + fStack_224;
          local_1f8 = local_228 * 0.01;
          fStack_1f4 = fStack_224 * 0.01;
          fStack_1f0 = local_220 * 0.01;
          uStack_1ec = 0;
          local_250 = local_250 * 500.0 + local_220;
          local_258 = CONCAT44(fVar16,fVar17);
          fVar19 = local_250 * 0.01;
          fVar15 = (float)(**(code **)(*(longlong *)plVar6[0xa5] + 0x778))();
          lVar8 = UWorld::GetGameViewport(param_2);
          fVar18 = 1.7777778;
          if ((lVar8 != 0) && (*(longlong **)(lVar8 + 0xb0) != (longlong *)0x0)) {
            fVar18 = (float)(**(code **)(**(longlong **)(lVar8 + 0xb0) + 0x158))();
          }
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar15 * 0.0027777778);
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar15 / fVar18);
          local_248 = (wchar_t *)0x0;
          local_240 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
          pwVar11 = local_248;
          local_278 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_248,5,&DAT_1450c7e80);
          lVar8 = (**(code **)(*plVar6 + 0x4a0))(plVar6);
          if (lVar8 == 0) {
            uVar13 = (uint)local_240;
          }
          else {
            local_1d0 = *(undefined8 *)(lVar8 + 0x18);
            FName::ToString(&local_1d0,&local_238);
            if (pwVar11 != (wchar_t *)0x0) {
              FMemory::Free(pwVar11);
            }
            pwVar11 = local_238;
            uVar13 = (uint)local_230;
            local_238 = (wchar_t *)0x0;
            local_240 = CONCAT44(local_230._4_4_,(uint)local_240);
            local_230 = 0;
          }
          pwVar14 = pwVar11 + (int)uVar13;
          do {
            pwVar12 = pwVar11;
            if (pwVar14 == pwVar11) goto LAB_1424d8a32;
            pwVar14 = pwVar14 + -1;
          } while (*pwVar14 != L'_');
          uVar10 = (longlong)pwVar14 - (longlong)pwVar11 >> 1;
          iVar9 = (int)uVar10;
          if (iVar9 != -1) {
            if (uVar13 == 0) {
              pwVar14 = L"";
              uVar13 = 0;
            }
            else {
              uVar13 = uVar13 - 1;
              pwVar14 = pwVar11;
            }
            local_268 = (wchar_t *)0x0;
            pwVar12 = (wchar_t *)0x0;
            if (iVar9 < 0) {
LAB_1424d89d1:
              iVar9 = (int)pwVar12;
              uVar13 = 0;
            }
            else {
              pwVar12 = (wchar_t *)(ulonglong)uVar13;
              if (iVar9 < (int)uVar13) {
                pwVar12 = (wchar_t *)(uVar10 & 0xffffffff);
              }
              iVar9 = (int)pwVar12;
              if (iVar9 == 0) goto LAB_1424d89d1;
              uVar13 = iVar9 + 1;
            }
            local_260 = (ulonglong)uVar13;
            pwVar12 = (wchar_t *)0x0;
            if (0 < (int)uVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
              pwVar12 = local_268;
              uVar13 = (uint)local_260;
              if (0 < (int)(uint)local_260) {
                wcsncpy(local_268,pwVar14,(longlong)iVar9);
                pwVar12[iVar9] = L'\0';
              }
            }
            if (pwVar11 != (wchar_t *)0x0) {
              FMemory::Free(pwVar11);
            }
            local_240 = CONCAT44(local_260._4_4_,(uint)local_240);
            local_268 = (wchar_t *)0x0;
            local_260 = 0;
          }
LAB_1424d8a32:
          pwVar11 = L"";
          if (uVar13 != 0) {
            pwVar11 = pwVar12;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_168,pwVar11);
          local_1a8 = local_1f8;
          fStack_1a4 = fStack_1f4;
          fStack_1a0 = fStack_1f0;
          uStack_19c = uStack_1ec;
          local_188._8_4_ = uVar3;
          local_188._0_8_ = uVar2;
          local_188._12_4_ = 0;
          local_178 = 0x3f000000;
          local_174 = 0x447a0000;
          local_198 = fVar17 * 0.01;
          fStack_194 = fVar16 * 0.01;
          fStack_190 = fVar19;
          uStack_18c = 0;
          local_170 = fVar15 * 360.0;
          (**(code **)(*DAT_146b84580 + 0x80))(DAT_146b84580,local_1d8,local_e0,&local_1a8);
          if (local_e8 != 0) {
            FMemory::Free();
          }
          if (pwVar12 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        }
      }
      local_1e0 = local_1e0 + 1;
    }
  }
  return;
}



// FUNCTION 1424d8b80 FUN_1424d8b80 body=344 status=ok
// SIG undefined FUN_1424d8b80(void)

ulonglong FUN_1424d8b80(float *param_1,float *param_2)

{
  float *in_RAX;
  uint uVar1;
  
  if ((((((ABS(*param_1 - *param_2) <= 2e-05) && (ABS(param_1[1] - param_2[1]) <= 2e-05)) &&
        (ABS(param_1[2] - param_2[2]) <= 2e-05)) &&
       (((ABS(param_1[3] - param_2[3]) <= 2e-05 && (ABS(param_1[4] - param_2[4]) <= 2e-05)) &&
        ((ABS(param_1[5] - param_2[5]) <= 2e-05 &&
         ((ABS(param_1[6] - param_2[6]) <= 2e-05 && (ABS(param_1[7] - param_2[7]) <= 2e-05))))))))
      && (ABS(param_1[8] - param_2[8]) <= 2e-05)) &&
     ((((ABS(param_1[9] - param_2[9]) <= 2e-05 && (ABS(param_1[10] - param_2[10]) <= 2e-05)) &&
       (ABS(param_1[0xb] - param_2[0xb]) <= 2e-05)) && (param_1 == param_2)))) {
    in_RAX = param_2 + 0xd;
    uVar1 = 0;
    while ((ABS(*(float *)(((longlong)param_1 - (longlong)param_2) + -4 + (longlong)in_RAX) -
                in_RAX[-1]) <= 0.0009765625 &&
           (ABS(*(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)in_RAX) - *in_RAX) <=
            0.0009765625))) {
      uVar1 = uVar1 + 1;
      in_RAX = in_RAX + 2;
      if (7 < uVar1) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1424d8ce0 FUN_1424d8ce0 body=301 status=ok
// SIG undefined FUN_1424d8ce0(void)

longlong * FUN_1424d8ce0(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  if (0x10 < param_2) {
    plVar5 = (longlong *)FMemory::Malloc((longlong)param_2,0x10);
    FMemory::GetAllocSize(plVar5);
    return plVar5;
  }
  plVar2 = TlsGetValue(DAT_146af9a60);
  plVar5 = (longlong *)0x0;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar5 = plVar2;
    }
    TlsSetValue(DAT_146af9a60,plVar5);
    plVar2 = plVar5;
  }
  plVar5 = (longlong *)plVar2[1];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)*plVar2;
    if (plVar5 == (longlong *)0x0) {
      lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_146af9a68);
      plVar2[1] = lVar3;
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)FMemory::Malloc(0x200,0);
        plVar2[1] = (longlong)puVar4;
        lVar3 = 0x1f;
        do {
          puVar1 = puVar4 + 2;
          *puVar4 = puVar1;
          lVar3 = lVar3 + -1;
          puVar4 = puVar1;
        } while (lVar3 != 0);
        *puVar1 = 0;
      }
      plVar5 = (longlong *)plVar2[1];
      iVar6 = 0x20;
      *(undefined4 *)(plVar2 + 2) = 0x20;
    }
    else {
      iVar6 = 0x20;
      plVar2[1] = (longlong)plVar5;
      *(undefined4 *)(plVar2 + 2) = 0x20;
      *plVar2 = 0;
    }
  }
  else {
    iVar6 = (int)plVar2[2];
  }
  plVar2[1] = *plVar5;
  *(int *)(plVar2 + 2) = iVar6 + -1;
  return plVar5;
}



// FUNCTION 1424d8e10 FUN_1424d8e10 body=199 status=ok
// SIG undefined FUN_1424d8e10(void)

void FUN_1424d8e10(undefined8 param_1,undefined8 *param_2,int param_3)

{
  longlong *lpTlsValue;
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    if (param_3 < 0x11) {
      lpTlsValue = TlsGetValue(DAT_146af9a60);
      plVar2 = (longlong *)0x0;
      if (lpTlsValue == (longlong *)0x0) {
        plVar1 = (longlong *)operator_new(0x18);
        lpTlsValue = plVar2;
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = 0;
          plVar1[1] = 0;
          *(undefined4 *)(plVar1 + 2) = 0;
          lpTlsValue = plVar1;
        }
        TlsSetValue(DAT_146af9a60,lpTlsValue);
      }
      if ((int)lpTlsValue[2] < 0x20) {
        plVar2 = (longlong *)lpTlsValue[1];
      }
      else {
        if (*lpTlsValue != 0) {
          TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_146af9a68);
        }
        *lpTlsValue = lpTlsValue[1];
        lpTlsValue[1] = 0;
        *(undefined4 *)(lpTlsValue + 2) = 0;
      }
      *param_2 = plVar2;
      *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
      lpTlsValue[1] = (longlong)param_2;
      return;
    }
    FMemory::GetAllocSize(param_2);
    FMemory::Free(param_2);
  }
  return;
}



// FUNCTION 1424d8f00 FUN_1424d8f00 body=196 status=ok
// SIG undefined FUN_1424d8f00(void)

undefined8 FUN_1424d8f00(void)

{
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [32];
  
  FUN_14370f020(&DAT_146b7b930,local_res10);
  FUN_14370f020(&DAT_146b8b498,local_res18);
  FUN_14370f020(&DAT_146b7b9d8,local_res20);
  FUN_14370f020(&DAT_146b7ba08,local_38);
  FUN_14370f020(&DAT_146b7ba38,local_34);
  FUN_14370f020(&DAT_146b7ba68,local_30);
  FUN_14370f020(&DAT_146b7bba8,local_2c);
  FUN_14370f020(&DAT_146b7bd18,local_28);
  FUN_14370f020(&DAT_146b7bde8,local_24);
  FUN_14370f020(&DAT_146b7be98,local_20);
  FUN_1424d91b0();
  return 0;
}



// FUNCTION 1424d8fd0 FUN_1424d8fd0 body=479 status=ok
// SIG undefined FUN_1424d8fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1424d8fd0(longlong *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  int local_2b0;
  wchar_t *local_2a8;
  wchar_t *local_2a0;
  undefined8 local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [256];
  longlong local_178;
  undefined8 local_170;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  if ((param_3 == -1) && ((int)param_1[6] != 0)) {
    param_3 = *(int *)(param_1[5] + -4 + (longlong)(int)param_1[6] * 4);
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (param_2 < iVar1) {
    return 0;
  }
  pcVar2 = (char *)(**(code **)(*param_1 + 0x28))(param_1,local_288,param_3);
  if (*pcVar2 == '\0') {
    return 0;
  }
  if ((char)param_1[0xf] == '\0') {
    if (((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) {
      if (param_2 != 3) {
        return 0;
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,param_5);
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_278,param_4);
      local_2a0 = (wchar_t *)local_170;
      local_2a8 = L"Error";
      local_2b8 = CONCAT44(local_2b8._4_4_,param_6);
      local_2b0 = param_3;
      LowLevelFatalErrorHandler("Unknown",0x88,L"%s(%d): [0x%08X] %s: %s",local_50);
      local_298 = local_170;
      local_2a0 = L"Error";
      local_2a8 = (wchar_t *)CONCAT44(local_2a8._4_4_,param_3);
      local_2b0 = param_6;
      local_2b8 = local_50;
      FDebug::AssertFailed(&DAT_1450c73ad,"Unknown",0x88,L"%s(%d): [0x%08X] %s: %s");
      if (local_178 != 0) {
        FMemory::Free();
      }
      goto LAB_1424d909b;
    }
  }
  else if (param_2 != 0) {
    if (param_2 == 1) {
      *(undefined1 *)((longlong)param_1 + 0x79) = 1;
    }
    else if (param_2 == 2) {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
    }
    else {
      if (param_2 != 3) {
        return 0;
      }
      *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
    }
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_278,param_5);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,param_4);
  bVar3 = local_58 != 0;
  local_58 = local_178;
  if (bVar3) {
    FMemory::Free();
    local_58 = local_178;
  }
LAB_1424d909b:
  if (local_58 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 1424d91b0 FUN_1424d91b0 body=8958 status=ok
// SIG undefined FUN_1424d91b0(void)

undefined8 FUN_1424d91b0(void)

{
  return 0xe7260;
}



// FUNCTION 1424db4b0 FUN_1424db4b0 body=77 status=ok
// SIG undefined FUN_1424db4b0(void)

undefined4 FUN_1424db4b0(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  char *local_18;
  char *pcStack_10;
  undefined8 uVar5;
  
  pcVar4 = "0x0a4ba483-0x2316735e:2018-12-12.Ai.GearboxSoftware_ProjectOak_Windows-Mac-PS4-XboxOne";
  local_18 = 
  "0x0a4ba483-0x2316735e:2018-12-12.Ai.GearboxSoftware_ProjectOak_Windows-Mac-PS4-XboxOne";
  iVar1 = FUN_14370c910(
                       "0x0a4ba483-0x2316735e:2018-12-12.Ai.GearboxSoftware_ProjectOak_Windows-Mac-PS4-XboxOne"
                       );
  pcStack_10 = "0x0a4ba483-0x2316735e:2018-12-12.Ai.GearboxSoftware_ProjectOak_Windows-Mac-PS4-XboxOne"
               + iVar1;
  uVar5 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),2);
  lVar3 = (long)uVar5;
  uVar2 = FUN_143791a70(uVar5,&local_18,0);
  AK::MemoryMgr::StartProfileThreadUsage(lVar3);
  return uVar2;
}



// FUNCTION 1424db500 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FRadixSortParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"RadixShift";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 3;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
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
  *puVar3 = L"TilesPerGroup";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 3;
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
  *puVar3 = L"ExtraTileCount";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 8;
  puVar1[1] = 3;
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
  *puVar3 = L"ExtraKeyCount";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0xc;
  puVar1[1] = 3;
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
  *puVar3 = L"GroupCount";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x300000010;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 1424db760 CopyCurvePoints<FInterpCurvePoint<FVector>_> body=739 status=ok
// SIG undefined CopyCurvePoints<FInterpCurvePoint<FVector>_>(void)

void MatineeKeyReduction::MCurve<FTwoVectors,6>::CopyCurvePoints<FInterpCurvePoint<FVector>_>
               (longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar8 = (int)param_2[1];
  iVar2 = 0;
  lVar13 = param_1[1];
  lVar9 = (longlong)(int)lVar13;
  iVar12 = -1;
  iVar7 = -1;
  if (0 < iVar8) {
    lVar4 = 0;
    do {
      if (((iVar12 != -1) ||
          (pfVar1 = (float *)(lVar4 + *param_2), iVar3 = iVar2,
          *pfVar1 <= *(float *)((longlong)param_1 + 0x54) &&
          *(float *)((longlong)param_1 + 0x54) != *pfVar1)) &&
         (iVar7 = iVar2, iVar3 = iVar12, *(float *)(param_1 + 0xb) < *(float *)(lVar4 + *param_2)))
      break;
      iVar12 = iVar3;
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 0x2c;
      iVar7 = -1;
    } while (iVar2 < iVar8);
  }
  iVar2 = iVar8;
  if (iVar7 != -1) {
    iVar2 = iVar7;
  }
  iVar7 = iVar2 - iVar12;
  if (iVar7 != 0) {
    iVar3 = (iVar8 - iVar7) - iVar12;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar12 * 0x2c + *param_2),
                 (void *)((longlong)iVar2 * 0x2c + *param_2),(longlong)iVar3 * 0x2c);
      iVar8 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar8 - iVar7;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_2);
  }
  iVar8 = (int)param_2[1];
  iVar7 = iVar8 + (int)lVar13;
  *(int *)(param_2 + 1) = iVar7;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
  }
  lVar13 = (longlong)iVar12 * 0x2c;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(lVar9 * 0x2c + *param_2 + lVar13),(void *)(*param_2 + lVar13),
             (longlong)(iVar8 - iVar12) * 0x2c);
  iVar8 = 0;
  if (0 < lVar9) {
    lVar4 = 0;
    do {
      iVar7 = 0;
      *(undefined4 *)(lVar13 + *param_2) = *(undefined4 *)(lVar4 + *param_1);
      *(undefined1 *)(lVar13 + 0x28 + *param_2) = *(undefined1 *)(lVar4 + 0x4c + *param_1);
      if (0 < param_3) {
        lVar10 = (longlong)(iVar8 + iVar12) * 0x2c;
        lVar11 = (longlong)iVar8 * 0x50;
        do {
          iVar2 = iVar7 + param_4;
          puVar6 = (undefined4 *)(*param_1 + 4 + lVar11);
          if (iVar2 != 0) {
            if (iVar2 == 1) {
              puVar6 = puVar6 + 3;
            }
            else if (iVar2 == 2) {
              puVar6 = puVar6 + 1;
            }
            else if (iVar2 == 3) {
              puVar6 = puVar6 + 4;
            }
            else if (iVar2 == 4) {
              puVar6 = puVar6 + 2;
            }
            else {
              puVar6 = puVar6 + 5;
            }
          }
          puVar5 = (undefined4 *)(*param_2 + 4 + lVar10);
          if (iVar7 != 0) {
            if (iVar7 == 1) {
              puVar5 = puVar5 + 1;
            }
            else {
              puVar5 = puVar5 + 2;
            }
          }
          *puVar5 = *puVar6;
          puVar6 = (undefined4 *)(*param_1 + 0x1c + lVar11);
          if (iVar2 != 0) {
            if (iVar2 == 1) {
              puVar6 = puVar6 + 3;
            }
            else if (iVar2 == 2) {
              puVar6 = puVar6 + 1;
            }
            else if (iVar2 == 3) {
              puVar6 = puVar6 + 4;
            }
            else if (iVar2 == 4) {
              puVar6 = puVar6 + 2;
            }
            else {
              puVar6 = puVar6 + 5;
            }
          }
          puVar5 = (undefined4 *)(*param_2 + 0x10 + lVar10);
          if (iVar7 != 0) {
            if (iVar7 == 1) {
              puVar5 = puVar5 + 1;
            }
            else {
              puVar5 = puVar5 + 2;
            }
          }
          *puVar5 = *puVar6;
          puVar6 = (undefined4 *)(*param_1 + 0x34 + lVar11);
          if (iVar2 != 0) {
            if (iVar2 == 1) {
              puVar6 = puVar6 + 3;
            }
            else if (iVar2 == 2) {
              puVar6 = puVar6 + 1;
            }
            else if (iVar2 == 3) {
              puVar6 = puVar6 + 4;
            }
            else if (iVar2 == 4) {
              puVar6 = puVar6 + 2;
            }
            else {
              puVar6 = puVar6 + 5;
            }
          }
          puVar5 = (undefined4 *)(*param_2 + 0x1c + lVar10);
          if (iVar7 != 0) {
            if (iVar7 == 1) {
              puVar5 = puVar5 + 1;
            }
            else {
              puVar5 = puVar5 + 2;
            }
          }
          iVar7 = iVar7 + 1;
          *puVar5 = *puVar6;
        } while (iVar7 < param_3);
      }
      iVar8 = iVar8 + 1;
      lVar13 = lVar13 + 0x2c;
      lVar4 = lVar4 + 0x50;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 1424dba50 CopyCurvePoints<FInterpCurvePoint<MatineeKeyReduction::SFLOAT>_> body=597 status=ok
// SIG undefined CopyCurvePoints<FInterpCurvePoint<MatineeKeyReduction::SFLOAT>_>(void)

void MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
     CopyCurvePoints<FInterpCurvePoint<MatineeKeyReduction::SFLOAT>_>
               (longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar8 = (int)param_1[1];
  lVar11 = (longlong)iVar8;
  iVar4 = 0;
  iVar7 = (int)param_2[1];
  iVar6 = -1;
  iVar10 = -1;
  if (0 < iVar7) {
    lVar5 = 0;
    do {
      if (((iVar6 != -1) ||
          (iVar2 = iVar4,
          *(float *)(lVar5 + *param_2) <= *(float *)(param_1 + 8) &&
          *(float *)(param_1 + 8) != *(float *)(lVar5 + *param_2))) &&
         (iVar2 = iVar6, iVar10 = iVar4,
         *(float *)((longlong)param_1 + 0x44) < *(float *)(lVar5 + *param_2))) break;
      iVar6 = iVar2;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x14;
      iVar10 = -1;
    } while (iVar4 < iVar7);
  }
  iVar4 = iVar7;
  if (iVar10 != -1) {
    iVar4 = iVar10;
  }
  iVar10 = iVar4 - iVar6;
  if (iVar10 != 0) {
    iVar2 = (iVar7 - iVar10) - iVar6;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar6 * 0x14),
                 (void *)(*param_2 + (longlong)iVar4 * 0x14),(longlong)iVar2 * 0x14);
      iVar7 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar7 - iVar10;
    TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_2);
  }
  FUN_1424fd550(param_2,iVar6,iVar8);
  if (0 < iVar8) {
    lVar5 = 0;
    do {
      lVar1 = lVar5 + (longlong)iVar6 * 0x14;
      iVar8 = 0;
      *(undefined4 *)(lVar1 + *param_2) = *(undefined4 *)(lVar5 + *param_1);
      *(undefined1 *)(lVar1 + 0x10 + *param_2) = *(undefined1 *)(lVar5 + 0x10 + *param_1);
      if (3 < param_3) {
        uVar3 = (param_3 - 4U >> 2) + 1;
        uVar9 = (ulonglong)uVar3;
        iVar8 = uVar3 * 4;
        do {
          *(undefined4 *)(lVar1 + 4 + *param_2) = *(undefined4 *)(lVar5 + 4 + *param_1);
          *(undefined4 *)(lVar1 + 8 + *param_2) = *(undefined4 *)(lVar5 + 8 + *param_1);
          *(undefined4 *)(lVar1 + 0xc + *param_2) = *(undefined4 *)(lVar5 + 0xc + *param_1);
          *(undefined4 *)(lVar1 + 4 + *param_2) = *(undefined4 *)(lVar5 + 4 + *param_1);
          *(undefined4 *)(lVar1 + 8 + *param_2) = *(undefined4 *)(lVar5 + 8 + *param_1);
          *(undefined4 *)(lVar1 + 0xc + *param_2) = *(undefined4 *)(lVar5 + 0xc + *param_1);
          *(undefined4 *)(lVar1 + 4 + *param_2) = *(undefined4 *)(lVar5 + 4 + *param_1);
          *(undefined4 *)(lVar1 + 8 + *param_2) = *(undefined4 *)(lVar5 + 8 + *param_1);
          *(undefined4 *)(lVar1 + 0xc + *param_2) = *(undefined4 *)(lVar5 + 0xc + *param_1);
          *(undefined4 *)(lVar1 + 4 + *param_2) = *(undefined4 *)(lVar5 + 4 + *param_1);
          *(undefined4 *)(lVar1 + 8 + *param_2) = *(undefined4 *)(lVar5 + 8 + *param_1);
          *(undefined4 *)(lVar1 + 0xc + *param_2) = *(undefined4 *)(lVar5 + 0xc + *param_1);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (iVar8 < param_3) {
        uVar9 = (ulonglong)(uint)(param_3 - iVar8);
        do {
          *(undefined4 *)(lVar1 + 4 + *param_2) = *(undefined4 *)(lVar5 + 4 + *param_1);
          *(undefined4 *)(lVar1 + 8 + *param_2) = *(undefined4 *)(lVar5 + 8 + *param_1);
          *(undefined4 *)(lVar1 + 0xc + *param_2) = *(undefined4 *)(lVar5 + 0xc + *param_1);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 0x14;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 1424dbcb0 CreateControlPoints<FVector> body=681 status=ok
// SIG undefined CreateControlPoints<FVector>(void)

void MatineeKeyReduction::MCurve<FTwoVectors,6>::CreateControlPoints<FVector>
               (longlong *param_1,longlong *param_2)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 local_res10;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar7 = (int)param_2[1];
  local_58 = (longlong)iVar7;
  if ((0 < iVar7) && ((int)param_1[4] == 0)) {
    bVar5 = false;
    uVar8 = 0;
    uVar9 = 0;
    if (*(int *)((longlong)param_1 + 0x24) < iVar7) {
      TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(param_1 + 3,iVar7);
    }
    uVar10 = uVar8;
    uVar11 = uVar8;
    if (0 < iVar7) {
      do {
        fVar1 = *(float *)(uVar11 + *param_2);
        iVar7 = (int)uVar8;
        if ((*(float *)((longlong)param_1 + 0x54) <= fVar1) &&
           (fVar1 < *(float *)(param_1 + 0xb) || fVar1 == *(float *)(param_1 + 0xb))) {
          iVar3 = (int)param_1[4];
          lVar6 = (longlong)iVar3;
          *(int *)(param_1 + 4) = iVar3 + 1;
          if (*(int *)((longlong)param_1 + 0x24) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 3,iVar3);
          }
          *(undefined4 *)(param_1[3] + lVar6 * 0x24) = *(undefined4 *)(uVar11 + *param_2);
          bVar2 = *(byte *)(*param_2 + 0x28 + uVar11);
          if ((bVar2 < 6) && ((0x2bU >> (bVar2 & 0x1f) & 1) != 0)) {
            bVar5 = true;
            *(undefined1 *)(param_1[3] + 0x1c + lVar6 * 0x24) = 3;
            uVar8 = uVar10;
          }
          else {
            *(byte *)(param_1[3] + 0x1c + lVar6 * 0x24) = bVar2;
            if (bVar5) {
              iVar4 = (int)param_1[6];
              *(int *)(param_1 + 6) = iVar4 + 1;
              if (*(int *)((longlong)param_1 + 0x34) < iVar4 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar4)
                ;
              }
              *(ulonglong *)(param_1[5] + (longlong)iVar4 * 8) = CONCAT44(iVar3,(int)uVar10);
            }
            bVar5 = false;
          }
          uVar10 = uVar8;
          if (!bVar5) {
            local_40 = 0;
            local_50 = 0;
            uStack_48 = 0;
            FInterpCurve<FTwoVectors>::AddPoint
                      (param_1,*(undefined4 *)(param_1[3] + lVar6 * 0x24),&local_50);
          }
        }
        uVar9 = (undefined4)uVar10;
        uVar8 = (ulonglong)(iVar7 + 1);
        local_58 = local_58 + -1;
        uVar11 = uVar11 + 0x2c;
      } while (local_58 != 0);
    }
    iVar7 = (int)param_1[1];
    if (((iVar7 == 0) || (*(float *)*param_1 - *(float *)param_1[3] <= -0.0001)) ||
       (0.0001 <= *(float *)*param_1 - *(float *)param_1[3])) {
      local_40 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FInterpCurve<FTwoVectors>::AddPoint(param_1,iVar7,&local_50);
      iVar7 = (int)param_1[1];
    }
    fVar1 = *(float *)(param_1[3] + -0x24 + (longlong)(int)param_1[4] * 0x24);
    fVar12 = *(float *)(*param_1 + -0x50 + (longlong)iVar7 * 0x50) - fVar1;
    if ((fVar12 <= -0.0001) || (0.0001 <= fVar12)) {
      local_40 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FInterpCurve<FTwoVectors>::AddPoint(param_1,fVar1,&local_50);
    }
    if (bVar5) {
      iVar7 = (int)param_1[6];
      local_res10 = CONCAT44((int)param_1[4] + -1,uVar9);
      *(int *)(param_1 + 6) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0x34) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar7);
      }
      *(undefined8 *)(param_1[5] + (longlong)iVar7 * 8) = local_res10;
    }
  }
  return;
}



// FUNCTION 1424dbf60 CreateControlPoints<MatineeKeyReduction::SFLOAT> body=622 status=ok
// SIG undefined CreateControlPoints<MatineeKeyReduction::SFLOAT>(void)

void MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
     CreateControlPoints<MatineeKeyReduction::SFLOAT>(longlong *param_1,longlong *param_2)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  undefined8 local_res10;
  int local_res20;
  undefined4 local_48;
  int local_44;
  int iStack_40;
  
  iVar4 = (int)param_2[1];
  lVar5 = (longlong)iVar4;
  if ((0 < iVar4) && ((int)param_1[4] == 0)) {
    bVar3 = false;
    lVar9 = 0;
    local_res20 = 0;
    local_res10 = param_2;
    if (*(int *)((longlong)param_1 + 0x24) < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 3,iVar4);
    }
    iVar7 = 0;
    iVar8 = 0;
    if (0 < iVar4) {
      do {
        fVar1 = *(float *)(lVar9 + *param_2);
        if ((*(float *)(param_1 + 8) <= fVar1) &&
           (fVar1 < *(float *)((longlong)param_1 + 0x44) ||
            fVar1 == *(float *)((longlong)param_1 + 0x44))) {
          iVar4 = (int)param_1[4];
          lVar6 = (longlong)iVar4;
          *(int *)(param_1 + 4) = iVar4 + 1;
          if (*(int *)((longlong)param_1 + 0x24) < iVar4 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 3,iVar4);
          }
          *(undefined4 *)(param_1[3] + lVar6 * 0xc) = *(undefined4 *)(lVar9 + *param_2);
          bVar2 = *(byte *)(*param_2 + 0x10 + lVar9);
          if ((bVar2 < 6) && ((0x2bU >> (bVar2 & 0x1f) & 1) != 0)) {
            bVar3 = true;
            *(undefined1 *)(param_1[3] + 8 + lVar6 * 0xc) = 3;
          }
          else {
            *(byte *)(param_1[3] + 8 + lVar6 * 0xc) = bVar2;
            if (bVar3) {
              iVar8 = (int)param_1[6];
              local_44 = local_res20;
              *(int *)(param_1 + 6) = iVar8 + 1;
              iStack_40 = iVar4;
              if (*(int *)((longlong)param_1 + 0x34) < iVar8 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar8)
                ;
              }
              *(ulonglong *)(param_1[5] + (longlong)iVar8 * 8) = CONCAT44(iStack_40,local_44);
            }
            bVar3 = false;
            local_48 = 0;
            local_res20 = iVar7;
            FInterpCurve<float>::AddPoint
                      (param_1,*(undefined4 *)(param_1[3] + lVar6 * 0xc),&local_48);
            param_2 = local_res10;
          }
        }
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 0x14;
        lVar5 = lVar5 + -1;
        iVar8 = local_res20;
      } while (lVar5 != 0);
    }
    iVar4 = (int)param_1[1];
    if (((iVar4 == 0) || (*(float *)*param_1 - *(float *)param_1[3] <= -0.0001)) ||
       (0.0001 <= *(float *)*param_1 - *(float *)param_1[3])) {
      local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
      FInterpCurve<float>::AddPoint(param_1,iVar4,&local_res10);
      iVar4 = (int)param_1[1];
    }
    fVar1 = *(float *)(param_1[3] + -0xc + (longlong)(int)param_1[4] * 0xc);
    fVar10 = *(float *)(*param_1 + -0x14 + (longlong)iVar4 * 0x14) - fVar1;
    if ((fVar10 <= -0.0001) || (0.0001 <= fVar10)) {
      local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
      FInterpCurve<float>::AddPoint(param_1,fVar1,&local_res10);
    }
    if (bVar3) {
      iVar4 = (int)param_1[6];
      local_res10 = (longlong *)CONCAT44((int)param_1[4] + -1,iVar8);
      *(int *)(param_1 + 6) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0x34) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar4);
      }
      *(longlong **)(param_1[5] + (longlong)iVar4 * 8) = local_res10;
    }
  }
  return;
}



// FUNCTION 1424dc1d0 FillControlPoints<FVector> body=2191 status=ok
// SIG undefined FillControlPoints<FVector>(void)

void MatineeKeyReduction::MCurve<FTwoVectors,6>::FillControlPoints<FVector>
               (longlong param_1,longlong *param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_res8;
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_118 [16];
  float local_108 [52];
  
  uVar9 = 0;
  local_108[4] = 0.0;
  local_108[5] = 0.0;
  local_108[10] = 0.0;
  local_108[0xb] = 0.0;
  local_108[0] = 0.0;
  local_108[1] = 0.0;
  local_108[2] = 0.0;
  local_108[3] = 0.0;
  local_108[6] = 0.0;
  local_108[7] = 0.0;
  local_108[8] = 0.0;
  local_108[9] = 0.0;
  uVar7 = uVar9;
  if (0 < param_3) {
    do {
      iVar8 = (int)uVar7;
      if (iVar8 == 0) {
        pfVar1 = local_108;
      }
      else if (iVar8 == 1) {
        pfVar1 = local_108 + 3;
      }
      else if (iVar8 == 2) {
        pfVar1 = local_108 + 1;
      }
      else if (iVar8 == 3) {
        pfVar1 = local_108 + 4;
      }
      else if (iVar8 == 4) {
        pfVar1 = local_108 + 2;
      }
      else {
        pfVar1 = local_108 + 5;
      }
      *pfVar1 = 3.4e+38;
      if (iVar8 == 0) {
        pfVar1 = local_108 + 6;
      }
      else if (iVar8 == 1) {
        pfVar1 = local_108 + 9;
      }
      else if (iVar8 == 2) {
        pfVar1 = local_108 + 7;
      }
      else if (iVar8 == 3) {
        pfVar1 = local_108 + 10;
      }
      else if (iVar8 == 4) {
        pfVar1 = local_108 + 8;
      }
      else {
        pfVar1 = local_108 + 0xb;
      }
      uVar7 = (ulonglong)(iVar8 + 1U);
      *pfVar1 = -3.4e+38;
    } while ((int)(iVar8 + 1U) < param_3);
  }
  uVar7 = uVar9;
  if (0 < (int)param_2[1]) {
    pfVar1 = (float *)*param_2;
    uVar4 = uVar9;
    do {
      if (**(float **)(param_1 + 0x18) < *pfVar1 || **(float **)(param_1 + 0x18) == *pfVar1) break;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar4 = uVar4 + 1;
      pfVar1 = pfVar1 + 0xb;
    } while ((longlong)uVar4 < (longlong)(int)param_2[1]);
  }
  fVar15 = local_108[4];
  fVar16 = local_108[5];
  fVar17 = local_108[3];
  fVar18 = local_108[2];
  fVar19 = local_108[1];
  fVar20 = local_108[0];
  if (0 < *(int *)(param_1 + 0x20)) {
    local_res8 = (longlong)(int)uVar7;
    uVar4 = uVar9;
    do {
      uVar10 = 0;
      iVar8 = (int)uVar9;
      if ((int)uVar7 < (int)param_2[1]) {
        lVar5 = *(longlong *)(param_1 + 0x18);
        lVar11 = local_res8 * 0x2c;
        fVar12 = *(float *)(lVar11 + *param_2) - *(float *)(lVar5 + uVar4 * 0x24);
        if ((fVar12 <= -0.01) || (0.01 <= fVar12)) goto LAB_1424dc6cc;
        if (0 < param_3) {
          uVar9 = uVar10;
          do {
            lVar5 = *param_2;
            iVar3 = (int)uVar9;
            if (iVar3 == 0) {
              fVar12 = *(float *)(lVar11 + 4 + lVar5);
            }
            else if (iVar3 == 1) {
              fVar12 = *(float *)(lVar11 + 8 + lVar5);
            }
            else {
              fVar12 = *(float *)(lVar11 + 0xc + lVar5);
            }
            iVar2 = iVar3 + param_4;
            pfVar1 = (float *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar8 * 0x24);
            if (iVar2 != 0) {
              if (iVar2 == 1) {
                pfVar1 = pfVar1 + 3;
              }
              else if (iVar2 == 2) {
                pfVar1 = pfVar1 + 1;
              }
              else if (iVar2 == 3) {
                pfVar1 = pfVar1 + 4;
              }
              else if (iVar2 == 4) {
                pfVar1 = pfVar1 + 2;
              }
              else {
                pfVar1 = pfVar1 + 5;
              }
            }
            *pfVar1 = fVar12;
            fVar13 = fVar20;
            if (((iVar3 != 0) && (fVar13 = fVar17, iVar3 != 1)) &&
               ((fVar13 = fVar19, iVar3 != 2 &&
                ((fVar13 = fVar15, iVar3 != 3 && (fVar13 = fVar18, iVar3 != 4)))))) {
              fVar13 = fVar16;
            }
            if (fVar12 < fVar13) {
              if (iVar3 == 0) {
                pfVar1 = local_108;
              }
              else if (iVar3 == 1) {
                pfVar1 = local_108 + 3;
              }
              else if (iVar3 == 2) {
                pfVar1 = local_108 + 1;
              }
              else if (iVar3 == 3) {
                pfVar1 = local_108 + 4;
              }
              else if (iVar3 == 4) {
                pfVar1 = local_108 + 2;
              }
              else {
                pfVar1 = local_108 + 5;
              }
              *pfVar1 = fVar12;
              fVar15 = local_108[4];
              fVar16 = local_108[5];
              fVar17 = local_108[3];
              fVar18 = local_108[2];
              fVar19 = local_108[1];
              fVar20 = local_108[0];
            }
            if (iVar3 == 0) {
              fVar13 = local_108[6];
            }
            else if (iVar3 == 1) {
              fVar13 = local_108[9];
            }
            else if (iVar3 == 2) {
              fVar13 = local_108[7];
            }
            else if (iVar3 == 3) {
              fVar13 = local_108[10];
            }
            else if (iVar3 == 4) {
              fVar13 = local_108[8];
            }
            else {
              fVar13 = local_108[0xb];
            }
            if (fVar13 < fVar12) {
              if (iVar3 == 0) {
                pfVar1 = local_108 + 6;
              }
              else if (iVar3 == 1) {
                pfVar1 = local_108 + 9;
              }
              else if (iVar3 == 2) {
                pfVar1 = local_108 + 7;
              }
              else if (iVar3 == 3) {
                pfVar1 = local_108 + 10;
              }
              else if (iVar3 == 4) {
                pfVar1 = local_108 + 8;
              }
              else {
                pfVar1 = local_108 + 0xb;
              }
              *pfVar1 = fVar12;
            }
            uVar9 = (ulonglong)(iVar3 + 1U);
          } while ((int)(iVar3 + 1U) < param_3);
          lVar5 = *(longlong *)(param_1 + 0x18);
        }
        if ((*(char *)(lVar5 + 0x1c + uVar4 * 0x24) == '\x04') && (0 < (longlong)param_3)) {
          do {
            lVar5 = *param_2;
            if (uVar10 == 0) {
              fVar12 = *(float *)(lVar11 + 0x10 + lVar5);
            }
            else if (uVar10 == 1) {
              fVar12 = *(float *)(lVar11 + 0x14 + lVar5);
            }
            else {
              fVar12 = *(float *)(lVar11 + 0x18 + lVar5);
            }
            fVar12 = ABS(fVar12 * *(float *)(param_1 + 0x50));
            if (fVar12 <= 1e-08) {
              fVar12 = 1e-08;
            }
            if (uVar10 == 0) {
              fVar13 = *(float *)(lVar11 + 0x10 + lVar5);
              fVar14 = *(float *)(lVar5 + 0x1c + lVar11);
            }
            else if (uVar10 == 1) {
              fVar13 = *(float *)(lVar11 + 0x14 + lVar5);
              fVar14 = *(float *)(lVar5 + 0x20 + lVar11);
            }
            else {
              fVar13 = *(float *)(lVar11 + 0x18 + lVar5);
              fVar14 = *(float *)(lVar5 + 0x24 + lVar11);
            }
            if ((fVar14 - fVar13 <= -fVar12) || (fVar12 <= fVar14 - fVar13)) {
              uVar6 = 0;
            }
            else {
              uVar6 = 1;
            }
            *(undefined1 *)
             (*(longlong *)(param_1 + 0x18) + (longlong)param_4 + uVar4 * 0x24 + 0x1d + uVar10) =
                 uVar6;
            uVar10 = uVar10 + 1;
          } while ((longlong)uVar10 < (longlong)param_3);
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
        local_res8 = local_res8 + 1;
      }
      else {
LAB_1424dc6cc:
        FInterpCurve<FVector>::Eval
                  (param_2,&local_128,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 0x24),
                   local_118);
        if (0 < param_3) {
          do {
            iVar3 = (int)uVar10;
            fVar12 = local_128;
            if ((iVar3 != 0) && (fVar12 = local_120, iVar3 == 1)) {
              fVar12 = local_124;
            }
            iVar2 = iVar3 + param_4;
            pfVar1 = (float *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar8 * 0x24);
            if (iVar2 != 0) {
              if (iVar2 == 1) {
                pfVar1 = pfVar1 + 3;
              }
              else if (iVar2 == 2) {
                pfVar1 = pfVar1 + 1;
              }
              else if (iVar2 == 3) {
                pfVar1 = pfVar1 + 4;
              }
              else if (iVar2 == 4) {
                pfVar1 = pfVar1 + 2;
              }
              else {
                pfVar1 = pfVar1 + 5;
              }
            }
            *pfVar1 = fVar12;
            fVar13 = fVar20;
            if ((((iVar3 != 0) && (fVar13 = fVar17, iVar3 != 1)) && (fVar13 = fVar19, iVar3 != 2))
               && ((fVar13 = fVar15, iVar3 != 3 && (fVar13 = fVar18, iVar3 != 4)))) {
              fVar13 = fVar16;
            }
            if (fVar12 < fVar13) {
              if (iVar3 == 0) {
                pfVar1 = local_108;
              }
              else if (iVar3 == 1) {
                pfVar1 = local_108 + 3;
              }
              else if (iVar3 == 2) {
                pfVar1 = local_108 + 1;
              }
              else if (iVar3 == 3) {
                pfVar1 = local_108 + 4;
              }
              else if (iVar3 == 4) {
                pfVar1 = local_108 + 2;
              }
              else {
                pfVar1 = local_108 + 5;
              }
              *pfVar1 = fVar12;
              fVar15 = local_108[4];
              fVar16 = local_108[5];
              fVar17 = local_108[3];
              fVar18 = local_108[2];
              fVar19 = local_108[1];
              fVar20 = local_108[0];
            }
            if (iVar3 == 0) {
              fVar13 = local_108[6];
            }
            else if (iVar3 == 1) {
              fVar13 = local_108[9];
            }
            else if (iVar3 == 2) {
              fVar13 = local_108[7];
            }
            else if (iVar3 == 3) {
              fVar13 = local_108[10];
            }
            else if (iVar3 == 4) {
              fVar13 = local_108[8];
            }
            else {
              fVar13 = local_108[0xb];
            }
            if (fVar13 < fVar12) {
              if (iVar3 == 0) {
                pfVar1 = local_108 + 6;
              }
              else if (iVar3 == 1) {
                pfVar1 = local_108 + 9;
              }
              else if (iVar3 == 2) {
                pfVar1 = local_108 + 7;
              }
              else if (iVar3 == 3) {
                pfVar1 = local_108 + 10;
              }
              else if (iVar3 == 4) {
                pfVar1 = local_108 + 8;
              }
              else {
                pfVar1 = local_108 + 0xb;
              }
              *pfVar1 = fVar12;
            }
            uVar10 = (ulonglong)(iVar3 + 1U);
          } while ((int)(iVar3 + 1U) < param_3);
        }
      }
      uVar9 = (ulonglong)(iVar8 + 1U);
      uVar4 = uVar4 + 1;
    } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0x20));
  }
  iVar8 = 0;
  if (0 < param_3) {
    do {
      if (iVar8 == 0) {
        pfVar1 = local_108 + 6;
      }
      else if (iVar8 == 1) {
        pfVar1 = local_108 + 9;
      }
      else if (iVar8 == 2) {
        pfVar1 = local_108 + 7;
      }
      else if (iVar8 == 3) {
        pfVar1 = local_108 + 10;
      }
      else if (iVar8 == 4) {
        pfVar1 = local_108 + 8;
      }
      else {
        pfVar1 = local_108 + 0xb;
      }
      fVar12 = fVar20;
      if ((((iVar8 != 0) && (fVar12 = fVar17, iVar8 != 1)) && (fVar12 = fVar19, iVar8 != 2)) &&
         ((fVar12 = fVar15, iVar8 != 3 && (fVar12 = fVar18, iVar8 != 4)))) {
        fVar12 = fVar16;
      }
      iVar3 = iVar8 + param_4;
      fVar12 = (*pfVar1 - fVar12) * *(float *)(param_1 + 0x50);
      if (fVar12 <= 0.0001) {
        fVar12 = 0.0001;
      }
      if (iVar3 == 0) {
        pfVar1 = (float *)(param_1 + 0x38);
      }
      else if (iVar3 == 1) {
        pfVar1 = (float *)(param_1 + 0x44);
      }
      else if (iVar3 == 2) {
        pfVar1 = (float *)(param_1 + 0x3c);
      }
      else if (iVar3 == 3) {
        pfVar1 = (float *)(param_1 + 0x48);
      }
      else if (iVar3 == 4) {
        pfVar1 = (float *)(param_1 + 0x40);
      }
      else {
        pfVar1 = (float *)(param_1 + 0x4c);
      }
      iVar8 = iVar8 + 1;
      *pfVar1 = fVar12;
    } while (iVar8 < param_3);
  }
  return;
}



// FUNCTION 1424dca60 FillControlPoints<MatineeKeyReduction::SFLOAT> body=1351 status=ok
// SIG undefined FillControlPoints<MatineeKeyReduction::SFLOAT>(void)

void MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
     FillControlPoints<MatineeKeyReduction::SFLOAT>
               (longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8 [2];
  undefined1 local_res10 [8];
  float local_res18;
  
  iVar14 = 0;
  uVar5 = (ulonglong)param_3;
  fVar17 = local_res18;
  fVar18 = local_res18;
  if (7 < (int)param_3) {
    iVar14 = (param_3 - 8 & 0xfffffff8) + 8;
    fVar17 = -3.4e+38;
    fVar18 = 3.4e+38;
  }
  if (iVar14 < (int)param_3) {
    fVar18 = 3.4e+38;
    fVar17 = -3.4e+38;
  }
  iVar14 = 0;
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    pfVar4 = (float *)*param_2;
    do {
      if (**(float **)(param_1 + 0x18) < *pfVar4 || **(float **)(param_1 + 0x18) == *pfVar4) break;
      iVar14 = iVar14 + 1;
      lVar6 = lVar6 + 1;
      pfVar4 = pfVar4 + 5;
    } while (lVar6 < (int)param_2[1]);
  }
  local_res18 = 0.0;
  lVar6 = (longlong)(int)param_3;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar12 = 0;
    lVar10 = (longlong)param_4;
    lVar11 = (longlong)iVar14 * 0x14;
    do {
      if (iVar14 < (int)param_2[1]) {
        lVar9 = *(longlong *)(param_1 + 0x18);
        fVar15 = *(float *)(lVar11 + *param_2) - *(float *)(lVar12 + lVar9);
        if ((fVar15 <= -0.01) || (0.01 <= fVar15)) goto LAB_1424dce57;
        iVar8 = 0;
        if (3 < (int)param_3) {
          uVar3 = (param_3 - 4 >> 2) + 1;
          uVar7 = (ulonglong)uVar3;
          iVar8 = uVar3 * 4;
          do {
            fVar15 = *(float *)(lVar11 + 4 + *param_2);
            if (fVar17 <= fVar15) {
              fVar17 = fVar15;
            }
            if (fVar15 <= fVar18) {
              fVar18 = fVar15;
            }
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = fVar15;
            fVar15 = *(float *)(lVar11 + 4 + *param_2);
            fVar16 = fVar15;
            if (fVar18 <= fVar15) {
              fVar16 = fVar18;
            }
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = fVar15;
            if (fVar15 <= fVar17) {
              fVar15 = fVar17;
            }
            fVar17 = *(float *)(lVar11 + 4 + *param_2);
            if (fVar17 <= fVar16) {
              fVar16 = fVar17;
            }
            if (fVar15 <= fVar17) {
              fVar15 = fVar17;
            }
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = fVar17;
            fVar2 = *(float *)(lVar11 + 4 + *param_2);
            fVar18 = fVar16;
            if (fVar2 <= fVar16) {
              fVar18 = fVar2;
            }
            fVar17 = fVar15;
            if (fVar15 <= fVar2) {
              fVar17 = fVar2;
            }
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = fVar2;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          lVar9 = *(longlong *)(param_1 + 0x18);
        }
        if (iVar8 < (int)param_3) {
          uVar7 = (ulonglong)(param_3 - iVar8);
          do {
            fVar15 = *(float *)(lVar11 + 4 + *param_2);
            if (fVar15 <= fVar18) {
              fVar18 = fVar15;
            }
            if (fVar17 <= fVar15) {
              fVar17 = fVar15;
            }
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = fVar15;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          lVar9 = *(longlong *)(param_1 + 0x18);
        }
        if (*(char *)(lVar12 + 8 + lVar9) == '\x04') {
          lVar9 = 0;
          if (3 < lVar6) {
            do {
              fVar15 = *(float *)(lVar11 + 8 + *param_2);
              fVar16 = *(float *)(lVar11 + 0xc + *param_2) - fVar15;
              fVar15 = ABS(fVar15 * *(float *)(param_1 + 0x3c));
              if (fVar15 <= 1e-08) {
                fVar15 = 1e-08;
              }
              if ((fVar16 <= -fVar15) || (fVar15 <= fVar16)) {
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
              *(undefined1 *)(lVar12 + lVar9 + lVar10 + 9 + *(longlong *)(param_1 + 0x18)) = uVar13;
              fVar15 = *(float *)(lVar11 + 8 + *param_2);
              fVar16 = *(float *)(lVar11 + 0xc + *param_2) - fVar15;
              fVar15 = ABS(fVar15 * *(float *)(param_1 + 0x3c));
              if (fVar15 <= 1e-08) {
                fVar15 = 1e-08;
              }
              if ((fVar16 <= -fVar15) || (fVar15 <= fVar16)) {
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
              *(undefined1 *)(lVar12 + lVar9 + lVar10 + 10 + *(longlong *)(param_1 + 0x18)) = uVar13
              ;
              fVar15 = *(float *)(lVar11 + 8 + *param_2);
              fVar16 = *(float *)(lVar11 + 0xc + *param_2) - fVar15;
              fVar15 = ABS(fVar15 * *(float *)(param_1 + 0x3c));
              if (fVar15 <= 1e-08) {
                fVar15 = 1e-08;
              }
              if ((fVar16 <= -fVar15) || (fVar15 <= fVar16)) {
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
              *(undefined1 *)(lVar12 + lVar9 + lVar10 + 0xb + *(longlong *)(param_1 + 0x18)) =
                   uVar13;
              fVar15 = *(float *)(lVar11 + 8 + *param_2);
              fVar16 = *(float *)(lVar11 + 0xc + *param_2) - fVar15;
              fVar15 = ABS(fVar15 * *(float *)(param_1 + 0x3c));
              if (fVar15 <= 1e-08) {
                fVar15 = 1e-08;
              }
              if ((fVar16 <= -fVar15) || (fVar15 <= fVar16)) {
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
              lVar1 = lVar12 + lVar9;
              lVar9 = lVar9 + 4;
              *(undefined1 *)(lVar1 + lVar10 + 0xc + *(longlong *)(param_1 + 0x18)) = uVar13;
            } while (lVar9 < lVar6 + -3);
          }
          for (; lVar9 < lVar6; lVar9 = lVar9 + 1) {
            fVar15 = *(float *)(lVar11 + 8 + *param_2);
            fVar16 = *(float *)(lVar11 + 0xc + *param_2) - fVar15;
            fVar15 = ABS(fVar15 * *(float *)(param_1 + 0x3c));
            if (fVar15 <= 1e-08) {
              fVar15 = 1e-08;
            }
            if ((fVar16 <= -fVar15) || (fVar15 <= fVar16)) {
              uVar13 = 0;
            }
            else {
              uVar13 = 1;
            }
            *(undefined1 *)(lVar12 + lVar9 + lVar10 + 9 + *(longlong *)(param_1 + 0x18)) = uVar13;
          }
        }
        iVar14 = iVar14 + 1;
        lVar11 = lVar11 + 0x14;
      }
      else {
LAB_1424dce57:
        FInterpCurve<MatineeKeyReduction::SFLOAT>::Eval
                  (param_2,local_res8,*(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x18)),
                   local_res10);
        iVar8 = 0;
        if (3 < (int)param_3) {
          uVar3 = (param_3 - 4 >> 2) + 1;
          uVar7 = (ulonglong)uVar3;
          iVar8 = uVar3 * 4;
          do {
            if (local_res8[0] <= fVar18) {
              fVar18 = local_res8[0];
            }
            if (fVar17 <= local_res8[0]) {
              fVar17 = local_res8[0];
            }
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = local_res8[0];
            if (local_res8[0] <= fVar18) {
              fVar18 = local_res8[0];
            }
            if (fVar17 <= local_res8[0]) {
              fVar17 = local_res8[0];
            }
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = local_res8[0];
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = local_res8[0];
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = local_res8[0];
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (iVar8 < (int)param_3) {
          uVar7 = (ulonglong)(param_3 - iVar8);
          do {
            if (local_res8[0] <= fVar18) {
              fVar18 = local_res8[0];
            }
            if (fVar17 <= local_res8[0]) {
              fVar17 = local_res8[0];
            }
            *(float *)(lVar12 + 4 + *(longlong *)(param_1 + 0x18)) = local_res8[0];
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      lVar12 = lVar12 + 0xc;
      local_res18 = (float)((int)local_res18 + 1);
    } while ((int)local_res18 < *(int *)(param_1 + 0x20));
  }
  if (0 < (int)param_3) {
    fVar17 = (fVar17 - fVar18) * *(float *)(param_1 + 0x3c);
    if (fVar17 <= 0.0001) {
      fVar17 = 0.0001;
    }
    do {
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(float *)(param_1 + 0x38) = fVar17;
  }
  return;
}



// FUNCTION 1424dcfb0 GetInstancedSubObjects<TArray<FInstancedSubObjRef,FDefaultAllocator>_> body=213 status=ok
// SIG undefined GetInstancedSubObjects<TArray<FInstancedSubObjRef,FDefaultAllocator>_>(void)

void FFindInstancedReferenceSubobjectHelper::
     GetInstancedSubObjects<TArray<FInstancedSubObjRef,FDefaultAllocator>_>
               (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined4 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  code *local_28;
  undefined8 *puStack_20;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
  if (lVar1 != 0) {
    do {
      local_48 = (undefined4 *)0x0;
      uStack_40 = 1;
      uStack_30 = 0xffffffff;
      local_38 = lVar1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,0);
      local_28 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_be523bb6e0a12b36afa00b81ffc07c95>,void___cdecl(FInstancedSubObjRef_const_&)>
                 ::Call;
      *local_48 = (undefined4)local_38;
      local_48[1] = local_38._4_4_;
      local_48[2] = uStack_30;
      local_48[3] = uStack_2c;
      local_res8 = param_2;
      puStack_20 = &local_res8;
      FUN_1424f50f0(&local_48,param_1,&local_28);
      if (local_48 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      lVar1 = *(longlong *)(lVar1 + 0x58);
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1424dd090 NewObject<UInterpGroupInstDirector> body=146 status=ok
// SIG undefined NewObject<UInterpGroupInstDirector>(void)

void NewObject<UInterpGroupInstDirector>
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UInterpGroupInstDirector::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 1424dd130 FUN_1424dd130 body=1810 status=ok
// SIG undefined FUN_1424dd130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424dd130(uint *param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char *pcVar22;
  char *pcVar23;
  int iVar24;
  char *pcVar25;
  longlong lVar26;
  double dVar27;
  float fVar28;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  longlong local_170;
  undefined8 local_168;
  float local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 local_159;
  undefined4 local_158;
  uint local_154;
  int local_150;
  int local_14c;
  ulonglong local_148;
  longlong *local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  char *local_120;
  longlong *local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 local_100 [24];
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  ulonglong local_a8 [14];
  
  local_a8[0] = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar15 = param_1[1];
  plVar13 = &local_e8;
  lVar17 = 4;
  local_160 = 5.79815e-41;
  uVar3 = *param_1;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_154 = uVar3;
  local_128 = param_3;
  local_118 = param_2;
  do {
    if (*(int *)((longlong)plVar13 + 0xc) < (int)uVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar13,uVar3);
    }
    plVar13 = plVar13 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (0 < (int)uVar15) {
    local_14c = (int)local_154 >> 8;
    fVar7 = 5.79815e-41;
    local_130 = (ulonglong)uVar15;
    do {
      uVar15 = local_154;
      uVar18 = (ulonglong)local_154;
      local_15a = (undefined1)local_14c;
      local_15c = 0x202;
      local_159 = (undefined1)local_154;
      (**(code **)(*param_2 + 0x50))(param_2,&local_15c,4);
      puVar12 = &local_e0;
      lVar17 = 4;
      do {
        *(undefined4 *)puVar12 = 0;
        if (0x7fffffff < *(uint *)((longlong)puVar12 + 4)) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar12 + -1,0);
        }
        puVar12 = puVar12 + 2;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar6 = local_160;
      lVar17 = local_128;
      if (0 < (int)uVar15) {
        do {
          FLinearColor::FLinearColor(&local_110,param_3);
          fVar5 = local_108;
          fVar4 = local_10c;
          fVar6 = local_110;
          fVar28 = local_10c;
          if (local_10c <= local_110) {
            fVar28 = local_110;
          }
          if (fVar28 <= local_108) {
            fVar28 = local_108;
          }
          if (1e-32 <= (double)fVar28) {
            dVar27 = frexp((double)fVar28,&local_150);
            uVar15 = (int)fVar7 * 0xbb38435 + 0x3619636b;
            fVar7 = (float)(uVar15 & 0x7fffff | 0x3f800000);
            fVar28 = ((float)dVar27 / fVar28) * 255.0;
            iVar8 = (int)((fVar7 - (float)(int)fVar7) + fVar28 * fVar6);
            if (iVar8 < 0) {
              local_178._2_2_ = 0;
            }
            else {
              bVar9 = 0xff;
              if (iVar8 < 0xff) {
                bVar9 = (byte)iVar8;
              }
              local_178._2_2_ = (ushort)bVar9;
            }
            uVar15 = uVar15 * 0xbb38435 + 0x3619636b;
            fVar7 = (float)(uVar15 & 0x7fffff | 0x3f800000);
            iVar8 = (int)((fVar7 - (float)(int)fVar7) + fVar28 * fVar4);
            if (iVar8 < 0) {
              local_178 = (uint)local_178._2_2_ << 0x10;
            }
            else {
              uVar10 = 0xff;
              if (iVar8 < 0xff) {
                uVar10 = (char)iVar8;
              }
              local_178 = (uint)CONCAT21(local_178._2_2_,uVar10) << 8;
            }
            fVar7 = (float)(uVar15 * 0xbb38435 + 0x3619636b);
            local_160 = (float)((uint)fVar7 & 0x7fffff | 0x3f800000);
            iVar8 = (int)((local_160 - (float)(int)local_160) + fVar28 * fVar5);
            if (iVar8 < 0) {
              local_178 = (uint)local_178._1_3_ << 8;
            }
            else {
              uVar10 = 0xff;
              if (iVar8 < 0xff) {
                uVar10 = (char)iVar8;
              }
              local_178 = CONCAT31(local_178._1_3_,uVar10);
            }
            iVar8 = (int)(float)local_150;
            if (iVar8 < -0x80) {
              iVar16 = -0x80;
            }
            else {
              iVar16 = 0x7f;
              if (iVar8 < 0x7f) {
                iVar16 = iVar8;
              }
            }
            local_178 = CONCAT13((char)iVar16 + -0x80,(undefined3)local_178);
          }
          else {
            local_158 = 0;
            local_178 = 0;
          }
          FColor::FromRGBE(&local_178,local_100);
          uVar21 = local_e0;
          lVar17 = (longlong)(int)local_e0;
          iVar8 = (int)local_e0 + 1;
          local_e0 = CONCAT44(local_e0._4_4_,iVar8);
          if (local_e0._4_4_ < iVar8) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_e8,uVar21 & 0xffffffff);
          }
          uVar21 = local_d0;
          *(undefined1 *)(lVar17 + local_e8) = local_178._2_1_;
          lVar17 = (longlong)(int)local_d0;
          iVar8 = (int)local_d0 + 1;
          local_d0 = CONCAT44(local_d0._4_4_,iVar8);
          if (local_d0._4_4_ < iVar8) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_d8,uVar21 & 0xffffffff);
          }
          uVar21 = local_c0;
          *(undefined1 *)(lVar17 + local_d8) = local_178._1_1_;
          lVar17 = (longlong)(int)local_c0;
          iVar8 = (int)local_c0 + 1;
          local_c0 = CONCAT44(local_c0._4_4_,iVar8);
          if (local_c0._4_4_ < iVar8) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_c8,uVar21 & 0xffffffff);
          }
          uVar21 = local_b0;
          *(undefined1 *)(lVar17 + local_c8) = (undefined1)local_178;
          lVar17 = (longlong)(int)local_b0;
          iVar8 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,iVar8);
          if (local_b0._4_4_ < iVar8) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_b8,uVar21 & 0xffffffff);
          }
          param_3 = param_3 + 4;
          *(undefined1 *)(lVar17 + local_b8) = local_178._3_1_;
          uVar18 = uVar18 - 1;
          fVar6 = fVar7;
          lVar17 = param_3;
        } while (uVar18 != 0);
      }
      local_128 = lVar17;
      local_160 = fVar6;
      plVar13 = &local_e8;
      local_138 = 4;
      do {
        lVar17 = local_138;
        pcVar23 = (char *)*plVar13;
        uVar18 = 0;
        local_170 = 0;
        local_168 = 0;
        pcVar22 = pcVar23 + (int)plVar13[1];
        local_140 = plVar13;
        local_120 = pcVar22;
        if (0 < (int)plVar13[1] * 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_170);
          uVar18 = local_168 & 0xffffffff;
        }
        iVar8 = (int)uVar18;
        lVar26 = local_170;
        if (pcVar23 < pcVar22) {
          do {
            iVar8 = (int)uVar18;
            uVar20 = 0;
            uVar21 = 0;
            iVar16 = 0;
            do {
              iVar11 = (int)uVar21;
              if ((0x7f < iVar11) || (pcVar22 <= pcVar23 + iVar11)) {
                if (iVar16 < 5) {
                  uVar15 = iVar8 + 1;
                  local_168 = CONCAT44(local_168._4_4_,uVar15);
                  if (local_168._4_4_ < (int)uVar15) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,uVar18);
                    lVar26 = local_170;
                    uVar15 = (uint)local_168;
                  }
                  uVar18 = (ulonglong)uVar15;
                  *(char *)(iVar8 + lVar26) = (char)uVar21;
                  lVar17 = local_170;
                  pcVar25 = pcVar23;
                  if (0 < iVar11) {
                    do {
                      iVar8 = (int)uVar18;
                      uVar15 = iVar8 + 1;
                      local_168 = CONCAT44(local_168._4_4_,uVar15);
                      if (local_168._4_4_ < (int)uVar15) {
                        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,uVar18);
                        lVar17 = local_170;
                        uVar15 = (uint)local_168;
                      }
                      uVar18 = (ulonglong)uVar15;
                      *(char *)(iVar8 + lVar17) = *pcVar25;
                      uVar21 = uVar21 - 1;
                      lVar26 = local_170;
                      pcVar25 = pcVar25 + 1;
                    } while (uVar21 != 0);
                  }
                  goto LAB_1424dd73a;
                }
                break;
              }
              uVar20 = (ulonglong)iVar11;
              iVar16 = 0;
              do {
                iVar11 = (int)uVar21;
                if (((0x7f < iVar11) || (pcVar22 <= pcVar23 + iVar11)) ||
                   (pcVar23[uVar20] != pcVar23[iVar11])) break;
                uVar21 = (ulonglong)(iVar11 + 1);
                iVar16 = iVar16 + 1;
              } while (iVar16 < 0x7f);
              iVar11 = (int)uVar21;
            } while (iVar16 < 5);
            iVar19 = (int)uVar20;
            lVar17 = local_170;
            if (0 < iVar19) {
              lVar17 = (longlong)iVar8;
              local_168._0_4_ = iVar8 + 1;
              iVar8 = (uint)local_168;
              if (local_168._4_4_ < (int)(uint)local_168) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,uVar18);
                iVar8 = (uint)local_168;
              }
              *(char *)(lVar17 + local_170) = (char)uVar20;
              lVar17 = local_170;
              if (0 < iVar19) {
                local_148 = uVar20 & 0xffffffff;
                pcVar22 = pcVar23;
                iVar24 = iVar8;
                do {
                  local_168._0_4_ = iVar24 + 1;
                  iVar8 = (uint)local_168;
                  if (local_168._4_4_ < (int)(uint)local_168) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,iVar24);
                    lVar17 = local_170;
                    iVar8 = (uint)local_168;
                  }
                  cVar2 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  local_148 = local_148 - 1;
                  *(char *)(iVar24 + lVar17) = cVar2;
                  iVar24 = iVar8;
                } while (local_148 != 0);
                local_148 = 0;
                pcVar22 = local_120;
              }
            }
            local_168._0_4_ = iVar8 + 1;
            iVar24 = (uint)local_168;
            if (local_168._4_4_ < (int)(uint)local_168) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,iVar8);
              lVar17 = local_170;
              iVar24 = (uint)local_168;
            }
            uVar15 = iVar24 + 1;
            local_168 = CONCAT44(local_168._4_4_,uVar15);
            *(char *)(iVar8 + lVar17) = (char)iVar16 + -0x80;
            if (local_168._4_4_ < (int)uVar15) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,iVar24);
              uVar15 = (uint)local_168;
            }
            uVar18 = (ulonglong)uVar15;
            *(char *)(iVar24 + local_170) = pcVar23[iVar19];
            lVar26 = local_170;
LAB_1424dd73a:
            iVar8 = (int)uVar18;
            pcVar23 = pcVar23 + iVar11;
            plVar13 = local_140;
            lVar17 = local_138;
            param_2 = local_118;
          } while (pcVar23 < pcVar22);
        }
        (**(code **)(*param_2 + 0x50))(param_2,lVar26,(longlong)iVar8);
        if (lVar26 != 0) {
          FMemory::Free(lVar26);
        }
        plVar13 = plVar13 + 2;
        local_138 = lVar17 + -1;
      } while (local_138 != 0);
      local_130 = local_130 - 1;
      local_138 = 0;
      param_3 = local_128;
      fVar7 = local_160;
      local_140 = plVar13;
    } while (local_130 != 0);
    local_138 = 0;
    local_130 = 0;
  }
  lVar17 = 4;
  puVar14 = local_a8;
  do {
    puVar1 = puVar14 + -2;
    puVar14 = puVar14 + -2;
    lVar17 = lVar17 + -1;
    if (*puVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar17 != 0);
  return;
}



// FUNCTION 1424dd850 FUN_1424dd850 body=1810 status=ok
// SIG undefined FUN_1424dd850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424dd850(uint *param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char *pcVar22;
  char *pcVar23;
  int iVar24;
  char *pcVar25;
  longlong lVar26;
  double dVar27;
  float fVar28;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  longlong local_170;
  undefined8 local_168;
  float local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 local_159;
  undefined4 local_158;
  uint local_154;
  int local_150;
  int local_14c;
  ulonglong local_148;
  longlong *local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  char *local_120;
  longlong *local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 local_100 [24];
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  ulonglong local_a8 [14];
  
  local_a8[0] = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar15 = param_1[1];
  plVar13 = &local_e8;
  lVar17 = 4;
  local_160 = 5.79815e-41;
  uVar3 = *param_1;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_154 = uVar3;
  local_128 = param_3;
  local_118 = param_2;
  do {
    if (*(int *)((longlong)plVar13 + 0xc) < (int)uVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar13,uVar3);
    }
    plVar13 = plVar13 + 2;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (0 < (int)uVar15) {
    local_14c = (int)local_154 >> 8;
    fVar7 = 5.79815e-41;
    local_130 = (ulonglong)uVar15;
    do {
      uVar15 = local_154;
      uVar18 = (ulonglong)local_154;
      local_15a = (undefined1)local_14c;
      local_15c = 0x202;
      local_159 = (undefined1)local_154;
      (**(code **)(*param_2 + 0x50))(param_2,&local_15c,4);
      puVar12 = &local_e0;
      lVar17 = 4;
      do {
        *(undefined4 *)puVar12 = 0;
        if (0x7fffffff < *(uint *)((longlong)puVar12 + 4)) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar12 + -1,0);
        }
        puVar12 = puVar12 + 2;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar6 = local_160;
      lVar17 = local_128;
      if (0 < (int)uVar15) {
        do {
          FUN_14161f710(&local_110,param_3);
          fVar5 = local_108;
          fVar4 = local_10c;
          fVar6 = local_110;
          fVar28 = local_10c;
          if (local_10c <= local_110) {
            fVar28 = local_110;
          }
          if (fVar28 <= local_108) {
            fVar28 = local_108;
          }
          if (1e-32 <= (double)fVar28) {
            dVar27 = frexp((double)fVar28,&local_150);
            uVar15 = (int)fVar7 * 0xbb38435 + 0x3619636b;
            fVar7 = (float)(uVar15 & 0x7fffff | 0x3f800000);
            fVar28 = ((float)dVar27 / fVar28) * 255.0;
            iVar8 = (int)((fVar7 - (float)(int)fVar7) + fVar28 * fVar6);
            if (iVar8 < 0) {
              local_178._2_2_ = 0;
            }
            else {
              bVar9 = 0xff;
              if (iVar8 < 0xff) {
                bVar9 = (byte)iVar8;
              }
              local_178._2_2_ = (ushort)bVar9;
            }
            uVar15 = uVar15 * 0xbb38435 + 0x3619636b;
            fVar7 = (float)(uVar15 & 0x7fffff | 0x3f800000);
            iVar8 = (int)((fVar7 - (float)(int)fVar7) + fVar28 * fVar4);
            if (iVar8 < 0) {
              local_178 = (uint)local_178._2_2_ << 0x10;
            }
            else {
              uVar10 = 0xff;
              if (iVar8 < 0xff) {
                uVar10 = (char)iVar8;
              }
              local_178 = (uint)CONCAT21(local_178._2_2_,uVar10) << 8;
            }
            fVar7 = (float)(uVar15 * 0xbb38435 + 0x3619636b);
            local_160 = (float)((uint)fVar7 & 0x7fffff | 0x3f800000);
            iVar8 = (int)((local_160 - (float)(int)local_160) + fVar28 * fVar5);
            if (iVar8 < 0) {
              local_178 = (uint)local_178._1_3_ << 8;
            }
            else {
              uVar10 = 0xff;
              if (iVar8 < 0xff) {
                uVar10 = (char)iVar8;
              }
              local_178 = CONCAT31(local_178._1_3_,uVar10);
            }
            iVar8 = (int)(float)local_150;
            if (iVar8 < -0x80) {
              iVar16 = -0x80;
            }
            else {
              iVar16 = 0x7f;
              if (iVar8 < 0x7f) {
                iVar16 = iVar8;
              }
            }
            local_178 = CONCAT13((char)iVar16 + -0x80,(undefined3)local_178);
          }
          else {
            local_158 = 0;
            local_178 = 0;
          }
          FColor::FromRGBE(&local_178,local_100);
          uVar21 = local_e0;
          lVar17 = (longlong)(int)local_e0;
          iVar8 = (int)local_e0 + 1;
          local_e0 = CONCAT44(local_e0._4_4_,iVar8);
          if (local_e0._4_4_ < iVar8) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_e8,uVar21 & 0xffffffff);
          }
          uVar21 = local_d0;
          *(undefined1 *)(lVar17 + local_e8) = local_178._2_1_;
          lVar17 = (longlong)(int)local_d0;
          iVar8 = (int)local_d0 + 1;
          local_d0 = CONCAT44(local_d0._4_4_,iVar8);
          if (local_d0._4_4_ < iVar8) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_d8,uVar21 & 0xffffffff);
          }
          uVar21 = local_c0;
          *(undefined1 *)(lVar17 + local_d8) = local_178._1_1_;
          lVar17 = (longlong)(int)local_c0;
          iVar8 = (int)local_c0 + 1;
          local_c0 = CONCAT44(local_c0._4_4_,iVar8);
          if (local_c0._4_4_ < iVar8) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_c8,uVar21 & 0xffffffff);
          }
          uVar21 = local_b0;
          *(undefined1 *)(lVar17 + local_c8) = (undefined1)local_178;
          lVar17 = (longlong)(int)local_b0;
          iVar8 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,iVar8);
          if (local_b0._4_4_ < iVar8) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_b8,uVar21 & 0xffffffff);
          }
          param_3 = param_3 + 8;
          *(undefined1 *)(lVar17 + local_b8) = local_178._3_1_;
          uVar18 = uVar18 - 1;
          fVar6 = fVar7;
          lVar17 = param_3;
        } while (uVar18 != 0);
      }
      local_128 = lVar17;
      local_160 = fVar6;
      plVar13 = &local_e8;
      local_138 = 4;
      do {
        lVar17 = local_138;
        pcVar23 = (char *)*plVar13;
        uVar18 = 0;
        local_170 = 0;
        local_168 = 0;
        pcVar22 = pcVar23 + (int)plVar13[1];
        local_140 = plVar13;
        local_120 = pcVar22;
        if (0 < (int)plVar13[1] * 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_170);
          uVar18 = local_168 & 0xffffffff;
        }
        iVar8 = (int)uVar18;
        lVar26 = local_170;
        if (pcVar23 < pcVar22) {
          do {
            iVar8 = (int)uVar18;
            uVar20 = 0;
            uVar21 = 0;
            iVar16 = 0;
            do {
              iVar11 = (int)uVar21;
              if ((0x7f < iVar11) || (pcVar22 <= pcVar23 + iVar11)) {
                if (iVar16 < 5) {
                  uVar15 = iVar8 + 1;
                  local_168 = CONCAT44(local_168._4_4_,uVar15);
                  if (local_168._4_4_ < (int)uVar15) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,uVar18);
                    lVar26 = local_170;
                    uVar15 = (uint)local_168;
                  }
                  uVar18 = (ulonglong)uVar15;
                  *(char *)(iVar8 + lVar26) = (char)uVar21;
                  lVar17 = local_170;
                  pcVar25 = pcVar23;
                  if (0 < iVar11) {
                    do {
                      iVar8 = (int)uVar18;
                      uVar15 = iVar8 + 1;
                      local_168 = CONCAT44(local_168._4_4_,uVar15);
                      if (local_168._4_4_ < (int)uVar15) {
                        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,uVar18);
                        lVar17 = local_170;
                        uVar15 = (uint)local_168;
                      }
                      uVar18 = (ulonglong)uVar15;
                      *(char *)(iVar8 + lVar17) = *pcVar25;
                      uVar21 = uVar21 - 1;
                      lVar26 = local_170;
                      pcVar25 = pcVar25 + 1;
                    } while (uVar21 != 0);
                  }
                  goto LAB_1424dde5a;
                }
                break;
              }
              uVar20 = (ulonglong)iVar11;
              iVar16 = 0;
              do {
                iVar11 = (int)uVar21;
                if (((0x7f < iVar11) || (pcVar22 <= pcVar23 + iVar11)) ||
                   (pcVar23[uVar20] != pcVar23[iVar11])) break;
                uVar21 = (ulonglong)(iVar11 + 1);
                iVar16 = iVar16 + 1;
              } while (iVar16 < 0x7f);
              iVar11 = (int)uVar21;
            } while (iVar16 < 5);
            iVar19 = (int)uVar20;
            lVar17 = local_170;
            if (0 < iVar19) {
              lVar17 = (longlong)iVar8;
              local_168._0_4_ = iVar8 + 1;
              iVar8 = (uint)local_168;
              if (local_168._4_4_ < (int)(uint)local_168) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,uVar18);
                iVar8 = (uint)local_168;
              }
              *(char *)(lVar17 + local_170) = (char)uVar20;
              lVar17 = local_170;
              if (0 < iVar19) {
                local_148 = uVar20 & 0xffffffff;
                pcVar22 = pcVar23;
                iVar24 = iVar8;
                do {
                  local_168._0_4_ = iVar24 + 1;
                  iVar8 = (uint)local_168;
                  if (local_168._4_4_ < (int)(uint)local_168) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,iVar24);
                    lVar17 = local_170;
                    iVar8 = (uint)local_168;
                  }
                  cVar2 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  local_148 = local_148 - 1;
                  *(char *)(iVar24 + lVar17) = cVar2;
                  iVar24 = iVar8;
                } while (local_148 != 0);
                local_148 = 0;
                pcVar22 = local_120;
              }
            }
            local_168._0_4_ = iVar8 + 1;
            iVar24 = (uint)local_168;
            if (local_168._4_4_ < (int)(uint)local_168) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,iVar8);
              lVar17 = local_170;
              iVar24 = (uint)local_168;
            }
            uVar15 = iVar24 + 1;
            local_168 = CONCAT44(local_168._4_4_,uVar15);
            *(char *)(iVar8 + lVar17) = (char)iVar16 + -0x80;
            if (local_168._4_4_ < (int)uVar15) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_170,iVar24);
              uVar15 = (uint)local_168;
            }
            uVar18 = (ulonglong)uVar15;
            *(char *)(iVar24 + local_170) = pcVar23[iVar19];
            lVar26 = local_170;
LAB_1424dde5a:
            iVar8 = (int)uVar18;
            pcVar23 = pcVar23 + iVar11;
            plVar13 = local_140;
            lVar17 = local_138;
            param_2 = local_118;
          } while (pcVar23 < pcVar22);
        }
        (**(code **)(*param_2 + 0x50))(param_2,lVar26,(longlong)iVar8);
        if (lVar26 != 0) {
          FMemory::Free(lVar26);
        }
        plVar13 = plVar13 + 2;
        local_138 = lVar17 + -1;
      } while (local_138 != 0);
      local_130 = local_130 - 1;
      local_138 = 0;
      param_3 = local_128;
      fVar7 = local_160;
      local_140 = plVar13;
    } while (local_130 != 0);
    local_138 = 0;
    local_130 = 0;
  }
  lVar17 = 4;
  puVar14 = local_a8;
  do {
    puVar1 = puVar14 + -2;
    puVar14 = puVar14 + -2;
    lVar17 = lVar17 + -1;
    if (*puVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar17 != 0);
  return;
}



// FUNCTION 1424ddf70 FUN_1424ddf70 body=274 status=ok
// SIG undefined FUN_1424ddf70(void)

undefined8 * FUN_1424ddf70(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1450d2d80;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0xffffffff;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 6) = 2;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) | 2;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) & 0xfb;
  return param_1;
}



// FUNCTION 1424de090 FUN_1424de090 body=85 status=ok
// SIG undefined FUN_1424de090(void)

undefined8 * FUN_1424de090(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef;
  *param_1 = &PTR_FUN_1450d2698;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf | 8;
  return param_1;
}



// FUNCTION 1424de0f0 FUN_1424de0f0 body=126 status=ok
// SIG undefined FUN_1424de0f0(void)

undefined8 * FUN_1424de0f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__1450e05b8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 1424de170 FUN_1424de170 body=310 status=ok
// SIG undefined FUN_1424de170(void)

undefined8 * FUN_1424de170(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__1450d6430;
  param_1[0x8c] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  *(undefined1 *)(param_1 + 6) = 0;
  *(uint *)((longlong)param_1 + 0x46c) = *(uint *)((longlong)param_1 + 0x46c) & 0xfffffffe;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined4 *)(param_1 + 0x29) = 0x402ccccd;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x98) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  return param_1;
}



// FUNCTION 1424de2b0 FUN_1424de2b0 body=320 status=ok
// SIG undefined FUN_1424de2b0(void)

undefined8 * FUN_1424de2b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__1450d6430;
  param_1[0x8c] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  *(undefined1 *)(param_1 + 6) = 0;
  *(uint *)((longlong)param_1 + 0x46c) = *(uint *)((longlong)param_1 + 0x46c) & 0xfffffffe;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__1450d6b60;
  *(undefined4 *)(param_1 + 0x29) = 0x402ccccd;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x98) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  return param_1;
}



// FUNCTION 1424de3f0 FCanvasTextItem body=342 status=ok
// SIG undefined FCanvasTextItem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTextItem::FCanvasTextItem
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  param_1[1] = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  uVar5 = _DAT_1464aa6c8;
  uVar4 = _DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1444d54b8;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xfffffffe;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar4 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  param_1[0xd] = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  param_1[0xe] = uVar4;
  uVar4 = DAT_1468b5d88;
  param_1[0xf] = DAT_1468b5d88;
  uVar5 = DAT_1468b5d88;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8a) = 0;
  param_1[0x10] = uVar5;
  uVar6 = DAT_1464aa6ec;
  uVar3 = DAT_1464aa6e8;
  uVar2 = DAT_1464aa6e4;
  uVar1 = DAT_1464aa6e0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar6;
  FCanvasTileItem::FCanvasTileItem(param_1 + 0x15,uVar4,&DAT_1468b5d88,param_5);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 5) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  *param_1 = &PTR_FUN_1444d5500;
  FText::FText(param_1 + 0x26,param_3);
  param_1[0x29] = param_4;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  return param_1;
}



// FUNCTION 1424de550 FComponentKey body=91 status=ok
// SIG undefined FComponentKey(void)

undefined8 * FComponentKey::FComponentKey(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      uVar1 = USimpleConstructionScript::GetOwnerClass();
    }
    *param_1 = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0xd8);
    param_1[2] = *(undefined8 *)(param_2 + 0xd0);
    param_1[3] = uVar1;
    param_1[1] = *(undefined8 *)(param_2 + 0xf8);
  }
  return param_1;
}



// FUNCTION 1424de5b0 FUN_1424de5b0 body=589 status=ok
// SIG undefined FUN_1424de5b0(void)

undefined8 * FUN_1424de5b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  FUN_1416e5570();
  *(undefined1 *)(param_1 + 0x17) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d5b68;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
  uVar2 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FUN_141690010(uVar4,uVar2);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5);
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x140))(plVar5);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&DAT_143f3ed00;
    plVar7[1] = (longlong)param_1;
    plVar7[2] = (longlong)FEnginePackageLocalizationCache::HandleAssetAdded;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar1 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
    *puVar3 = plVar7;
    *(undefined4 *)(puVar3 + 1) = 3;
  }
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x148))(plVar5);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&DAT_143f3ed00;
    plVar7[1] = (longlong)param_1;
    plVar7[2] = (longlong)FEnginePackageLocalizationCache::HandleAssetRemoved;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar1 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
    *puVar3 = plVar7;
    *(undefined4 *)(puVar3 + 1) = 3;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x150))(plVar5);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = (longlong)param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FEnginePackageLocalizationCache::HandleAssetRenamed;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar8;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
    (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
    iVar1 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
    *puVar3 = plVar6;
    *(undefined4 *)(puVar3 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 1424de800 FHitProxyId body=42 status=ok
// SIG undefined FHitProxyId(void)

uint * FHitProxyId::FHitProxyId(uint *param_1,uint param_2)

{
  *param_1 = ((param_2 >> 0x10 & 0xff) << 8 | param_2 >> 8 & 0xff) << 8 | param_2 & 0xff;
  return param_1;
}



// FUNCTION 1424de830 FInGameCycleHistory body=166 status=ok
// SIG undefined FInGameCycleHistory(void)

longlong * FInGameCycleHistory::FInGameCycleHistory(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<float,FDefaultAllocator>::ResizeTo();
    iVar1 = (int)param_1[1];
  }
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return param_1;
  }
  if ((param_2 < iVar1) && (param_2 != iVar1)) {
    *(int *)(param_1 + 1) = param_2;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1);
  }
  return param_1;
}



// FUNCTION 1424de8e0 FUN_1424de8e0 body=222 status=ok
// SIG undefined FUN_1424de8e0(void)

longlong * FUN_1424de8e0(longlong *param_1,longlong param_2,byte param_3,byte param_4,char param_5)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8;
  
  if (((param_2 == 0) || (param_5 == '\0')) || (*(longlong *)(param_2 + 0x838) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = ((ulonglong)param_3 * 3 + (ulonglong)param_4) * 0x30 + *(longlong *)(param_2 + 0x838);
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((lVar4 != 0) && (DAT_146afbc80 != 0)) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') &&
       ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
      QueryPerformanceCounter(&local_res8);
      *(DWORD *)(param_1 + 1) = local_res8.s.LowPart;
      return param_1;
    }
    lVar4 = *param_1;
    iVar1 = *(int *)(lVar4 + 0x28);
    *(int *)(lVar4 + 0x28) = iVar1 + 1;
    if ((iVar1 == 0) && (DAT_146afbc80 != 0)) {
      QueryPerformanceCounter(&local_res8);
      *(DWORD *)(lVar4 + 0x2c) = local_res8.s.LowPart;
    }
  }
  return param_1;
}



// FUNCTION 1424de9c0 FInputActionUnifiedDelegate body=140 status=ok
// SIG undefined FInputActionUnifiedDelegate(void)

longlong *
FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (((param_2 != param_1) && ((int)param_2[1] != 0)) &&
     (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (((param_2 + 2 != param_1 + 2) && ((int)param_2[3] != 0)) &&
     (plVar1 = (longlong *)param_2[2], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_1[5] = param_2[5];
  *(char *)(param_1 + 6) = (char)param_2[6];
  return param_1;
}



// FUNCTION 1424dea50 FInputAxisBinding body=135 status=ok
// SIG undefined FInputAxisBinding(void)

undefined1 * FInputAxisBinding::FInputAxisBinding(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((((longlong *)(param_2 + 0x10) != plVar1) && (*(int *)(param_2 + 0x18) != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 0x10), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 1424deae0 FUN_1424deae0 body=144 status=ok
// SIG undefined FUN_1424deae0(void)

undefined1 * FUN_1424deae0(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((((longlong *)(param_2 + 0x20) != plVar1) && (*(int *)(param_2 + 0x28) != 0)) &&
     (plVar3 = *(longlong **)(param_2 + 0x20), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 1424deb70 FInputTouchBinding body=112 status=ok
// SIG undefined FInputTouchBinding(void)

undefined1 * FInputTouchBinding::FInputTouchBinding(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((((longlong *)(param_2 + 8) != plVar1) && (*(int *)(param_2 + 0x10) != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 1424debe0 FUN_1424debe0 body=154 status=ok
// SIG undefined FUN_1424debe0(void)

undefined1 * FUN_1424debe0(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((((longlong *)(param_2 + 0x28) != plVar1) && (*(int *)(param_2 + 0x30) != 0)) &&
     (plVar3 = *(longlong **)(param_2 + 0x28), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 1424dec80 FInstancedPropertyPath body=106 status=ok
// SIG undefined FInstancedPropertyPath(void)

undefined8 * FInstancedPropertyPath::FInstancedPropertyPath(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 4);
  return param_1;
}



// FUNCTION 1424decf0 FUN_1424decf0 body=547 status=ok
// SIG undefined FUN_1424decf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1424decf0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)param_2[4];
  lVar7 = (**(code **)(*(longlong *)param_2[2] + 0x48))();
  lVar8 = (**(code **)(*plVar5 + 0x48))(plVar5);
  lVar9 = (**(code **)(*(longlong *)*param_2 + 0x48))();
  puVar3 = param_1 + 0x24;
  param_1[2] = lVar9 + lVar7 + lVar8;
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = &PTR__scalar_deleting_destructor__1450d56d0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = param_4;
  *(undefined4 *)(param_1 + 0xd) = 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0xc] = &PTR_FUN_1450d5610;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 4;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = &PTR_FUN_1450d5650;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x1c] = &PTR_FUN_1450d5690;
  param_1[0x23] = 0;
  *puVar3 = 0;
  param_1[0x25] = 0;
  FUN_1424fa9d0(param_1 + 3,param_2);
  plVar5 = (longlong *)param_1[10];
  uVar6 = param_1[9];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = uVar6;
  plStack_60 = plVar5;
  if (&local_68 != puVar3) {
    local_68 = *puVar3;
    plStack_60 = (longlong *)param_1[0x25];
    *puVar3 = uVar6;
    param_1[0x25] = plVar5;
    local_58 = uVar6;
    plStack_50 = plVar5;
  }
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  FUN_141edf270(param_1 + 3);
  return param_1;
}



// FUNCTION 1424def20 FWorldInGamePerformanceTrackers body=96 status=ok
// SIG undefined FWorldInGamePerformanceTrackers(void)

longlong FWorldInGamePerformanceTrackers::FWorldInGamePerformanceTrackers(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x2c;
  lVar3 = 3;
  do {
    uVar1 = (**(code **)(*DAT_146afbd18 + 0x68))();
    FInGameCycleHistory::FInGameCycleHistory(lVar2 + -0x2c,uVar1);
    *(undefined8 *)(lVar2 + -4) = 0;
    lVar2 = lVar2 + 0x30;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 1424def80 HHitProxy body=53 status=ok
// SIG undefined HHitProxy(void)

undefined8 * HHitProxy::HHitProxy(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d2648;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  FUN_1424fadc0();
  return param_1;
}



// FUNCTION 1424defc0 UInGameAdManager body=55 status=ok
// SIG undefined UInGameAdManager(void)

undefined8 * UInGameAdManager::UInGameAdManager(undefined8 *param_1)

{
  UPlatformInterfaceBase::UPlatformInterfaceBase();
  *param_1 = &PTR__scalar_deleting_destructor__1450d36b0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  return param_1;
}



// FUNCTION 1424df000 FUN_1424df000 body=43 status=ok
// SIG undefined FUN_1424df000(void)

undefined8 * FUN_1424df000(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_1450d3c18;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1424df030 FUN_1424df030 body=43 status=ok
// SIG undefined FUN_1424df030(void)

undefined8 * FUN_1424df030(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_1450d3eb0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1424df060 FUN_1424df060 body=43 status=ok
// SIG undefined FUN_1424df060(void)

undefined8 * FUN_1424df060(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_1450d4148;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1424df090 UInputDelegateBinding body=33 status=ok
// SIG undefined UInputDelegateBinding(void)

undefined8 * UInputDelegateBinding::UInputDelegateBinding(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_1450d3980;
  return param_1;
}



// FUNCTION 1424df0c0 FUN_1424df0c0 body=43 status=ok
// SIG undefined FUN_1424df0c0(void)

undefined8 * FUN_1424df0c0(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR__scalar_deleting_destructor__1450d43e0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1424df0f0 FUN_1424df0f0 body=43 status=ok
// SIG undefined FUN_1424df0f0(void)

undefined8 * FUN_1424df0f0(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_1450d4678;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1424df120 UInputVectorAxisDelegateBinding body=43 status=ok
// SIG undefined UInputVectorAxisDelegateBinding(void)

undefined8 * UInputVectorAxisDelegateBinding::UInputVectorAxisDelegateBinding(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1450d4910;
  return param_1;
}



// FUNCTION 1424df150 FUN_1424df150 body=186 status=ok
// SIG undefined FUN_1424df150(void)

undefined8 * FUN_1424df150(undefined8 *param_1)

{
  FUN_1423c48a0();
  *param_1 = &PTR_FUN_1450d4ba8;
  param_1[5] = &PTR_LAB_1450d5588;
  param_1[0x5a] = &PTR_LAB_1450d55b8;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 2;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7;
  *(byte *)((longlong)param_1 + 0x744) = *(byte *)((longlong)param_1 + 0x744) | 0x10;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 8;
  return param_1;
}



// FUNCTION 1424df210 UInterpCurveEdSetup body=301 status=ok
// SIG undefined UInterpCurveEdSetup(void)

undefined8 * UInterpCurveEdSetup::UInterpCurveEdSetup(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_141781840();
  local_48[1] = 8;
  local_48[0] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d5e48;
  param_1[5] = 0;
  param_1[6] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"Default",0x10);
  FString::FString(local_48 + 2,local_48);
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0xbf800000;
  uStack_c = 0x3f800000;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar1);
  }
  lVar2 = local_48[2];
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x30 + param_1[5]);
  local_48[2] = 0;
  local_28 = 0;
  local_20 = 0;
  *puVar3 = lVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  *(undefined4 *)(puVar3 + 5) = 0xbf800000;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0x3f800000;
  local_30 = 0;
  TArray<FCurveEdEntry,FDefaultAllocator>::~TArray<FCurveEdEntry,FDefaultAllocator>(&local_28);
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1424df340 UInterpData body=73 status=ok
// SIG undefined UInterpData(void)

undefined8 * UInterpData::UInterpData(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450d7290;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfffffffe;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  return param_1;
}



// FUNCTION 1424df390 FUN_1424df390 body=43 status=ok
// SIG undefined FUN_1424df390(void)

undefined8 * FUN_1424df390(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450e00b8;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1424df3c0 UInputVectorAxisDelegateBinding body=43 status=ok
// SIG undefined UInputVectorAxisDelegateBinding(void)

undefined8 * UInputVectorAxisDelegateBinding::UInputVectorAxisDelegateBinding(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1450e0338;
  return param_1;
}



// FUNCTION 1424df3f0 FUN_1424df3f0 body=200 status=ok
// SIG undefined FUN_1424df3f0(void)

undefined8 * FUN_1424df3f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450df898;
  param_1[5] = &PTR_SetMonitoring_1450dfb30;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afc4c0) {
    _Init_thread_header(&DAT_146afc4c0);
    if (DAT_146afc4c0 == -1) {
      FName::FName(&DAT_146afc4b8,L"UInterpGroup",1);
      _Init_thread_footer(&DAT_146afc4c0);
    }
  }
  param_1[8] = DAT_146afc4b8;
  *(undefined4 *)(param_1 + 9) = 0xff6450c8;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xffffffef | 2;
  return param_1;
}



// FUNCTION 1424df4c0 UInterpGroupCamera body=51 status=ok
// SIG undefined UInterpGroupCamera(void)

undefined8 * UInterpGroupCamera::UInterpGroupCamera(undefined8 *param_1)

{
  FUN_1424df3f0();
  *(undefined4 *)(param_1 + 0xb) = 0x40a00000;
  *param_1 = &PTR__scalar_deleting_destructor__1450dfe20;
  param_1[5] = &PTR_SetMonitoring_1450dfb30;
  return param_1;
}



// FUNCTION 1424df500 FUN_1424df500 body=150 status=ok
// SIG undefined FUN_1424df500(void)

undefined8 * FUN_1424df500(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_1424df3f0();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450df898;
  param_1[5] = &PTR_SetMonitoring_1450dfb30;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afc4d0) {
    _Init_thread_header(&DAT_146afc4d0);
    if (DAT_146afc4d0 == -1) {
      FName::FName(&DAT_146afc4c8,L"DirGroup",1);
      _Init_thread_footer(&DAT_146afc4d0);
    }
  }
  param_1[8] = DAT_146afc4c8;
  return param_1;
}



// FUNCTION 1424df5a0 FUN_1424df5a0 body=43 status=ok
// SIG undefined FUN_1424df5a0(void)

undefined8 * FUN_1424df5a0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450dfb78;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1424df5d0 UInterpGroupInstCamera body=43 status=ok
// SIG undefined UInterpGroupInstCamera(void)

undefined8 * UInterpGroupInstCamera::UInterpGroupInstCamera(undefined8 *param_1)

{
  FUN_141781840();
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450dfb78;
  return param_1;
}



// FUNCTION 1424df600 UInterpTrack body=207 status=ok
// SIG undefined UInterpTrack(void)

undefined8 * UInterpTrack::UInterpTrack(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_141781840();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d60c0;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = UInterpTrackInst::GetPrivateStaticClass();
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  if ((wchar_t *)param_1[0xb] != L"Track") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,6);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 6;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Track",6);
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xffffff77 | 0x40;
  return param_1;
}



// FUNCTION 1424df6d0 UInterpTrackAnimControl body=210 status=ok
// SIG undefined UInterpTrackAnimControl(void)

undefined8 * UInterpTrackAnimControl::UInterpTrackAnimControl(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_1424dfdd0();
  iVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d91e0;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_LAB_1450d9550;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar2 = UInterpTrackInstAnimControl::GetPrivateStaticClass();
  param_1[9] = uVar2;
  if ((undefined *)param_1[0xb] != &DAT_1450d1160) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,5);
      iVar3 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar3 + 5;
    if (*(int *)((longlong)param_1 + 100) < iVar3 + 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar3);
    }
    puVar1 = (undefined8 *)param_1[0xb];
    *puVar1 = 0x6d0069006e0041;
    *(undefined2 *)(puVar1 + 1) = 0;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 0x10;
  param_1[0x12] = DAT_146aef320;
  return param_1;
}



// FUNCTION 1424df7b0 UInterpTrackAudioMaster body=176 status=ok
// SIG undefined UInterpTrackAudioMaster(void)

undefined8 * UInterpTrackAudioMaster::UInterpTrackAudioMaster(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424e0c30();
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 3;
  *param_1 = &PTR__scalar_deleting_destructor__1450dd6b8;
  param_1[5] = &PTR_FUN_143fcc0d0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  uVar1 = UInterpTrackInstAudioMaster::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Audio Master") {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0xd);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0xd;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Audio Master",0xd);
  }
  return param_1;
}



// FUNCTION 1424df860 UInterpTrackBoolProp body=195 status=ok
// SIG undefined UInterpTrackBoolProp(void)

undefined8 * UInterpTrackBoolProp::UInterpTrackBoolProp(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  UInterpTrack::UInterpTrack();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450dc4a0;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = UInterpTrackInstBoolProp::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Bool Property") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0xe);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0xe;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Bool Property",0xe);
  }
  return param_1;
}



// FUNCTION 1424df930 UInterpTrackColorProp body=198 status=ok
// SIG undefined UInterpTrackColorProp(void)

undefined8 * UInterpTrackColorProp::UInterpTrackColorProp(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424e0c30();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450dcaa8;
  param_1[5] = &PTR_FUN_143fcc0d0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  uVar1 = UInterpTrackInstColorProp::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Color Property") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0xf);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0xf;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Color Property",0xf);
  }
  return param_1;
}



// FUNCTION 1424dfa00 UInterpTrackColorScale body=165 status=ok
// SIG undefined UInterpTrackColorScale(void)

undefined8 * UInterpTrackColorScale::UInterpTrackColorScale(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_1424e0c30();
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 3;
  *param_1 = &PTR__scalar_deleting_destructor__1450dda28;
  param_1[5] = &PTR_FUN_143fcc0d0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  uVar2 = UInterpTrackInstColorScale::GetPrivateStaticClass();
  param_1[9] = uVar2;
  if ((undefined *)param_1[0xb] != &DAT_1450d1ad0) {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0xc) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0xc);
      iVar3 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar3 + 0xc;
    if (*(int *)((longlong)param_1 + 100) < iVar3 + 0xc) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    puVar1 = (undefined8 *)param_1[0xb];
    *puVar1 = 0x6f006c006f0043;
    puVar1[1] = 0x63005300200072;
    puVar1[2] = 0x65006c0061;
  }
  return param_1;
}



// FUNCTION 1424dfab0 UInterpTrackDirector body=188 status=ok
// SIG undefined UInterpTrackDirector(void)

undefined8 * UInterpTrackDirector::UInterpTrackDirector(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  UInterpTrack::UInterpTrack();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d8868;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 3;
  uVar1 = UInterpTrackInstDirector::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Director") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,9);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 9;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Director",9);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return param_1;
}



// FUNCTION 1424dfb70 UInterpTrackEvent body=184 status=ok
// SIG undefined UInterpTrackEvent(void)

undefined8 * UInterpTrackEvent::UInterpTrackEvent(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  UInterpTrack::UInterpTrack();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d9598;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = UInterpTrackInstEvent::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Event") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,6);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 6;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Event",6);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 3;
  return param_1;
}



// FUNCTION 1424dfc30 UInterpTrackFade body=179 status=ok
// SIG undefined UInterpTrackFade(void)

undefined8 * UInterpTrackFade::UInterpTrackFade(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  FUN_1424dfdd0();
  *param_1 = &PTR__scalar_deleting_destructor__1450d9f10;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  uVar5 = DAT_1464aa6ec;
  uVar4 = DAT_1464aa6e8;
  uVar3 = DAT_1464aa6e4;
  uVar2 = DAT_1464aa6e0;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 3;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  uVar6 = UInterpTrackInstFade::GetPrivateStaticClass();
  param_1[9] = uVar6;
  if ((undefined *)param_1[0xb] != &DAT_1450d1018) {
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,5);
      iVar7 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar7 + 5;
    if (*(int *)((longlong)param_1 + 100) < iVar7 + 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    puVar1 = (undefined8 *)param_1[0xb];
    *puVar1 = 0x65006400610046;
    *(undefined2 *)(puVar1 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 1424dfcf0 UInterpTrackFloatAnimBPParam body=210 status=ok
// SIG undefined UInterpTrackFloatAnimBPParam(void)

undefined8 * UInterpTrackFloatAnimBPParam::UInterpTrackFloatAnimBPParam(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424dfdd0();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450e0ca0;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = UInterpTrackInstFloatAnimBPParam::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Float AnimBP Param") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x13);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0x13;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Float AnimBP Param",0x13);
  }
  return param_1;
}



// FUNCTION 1424dfdd0 FUN_1424dfdd0 body=194 status=ok
// SIG undefined FUN_1424dfdd0(void)

undefined8 * FUN_1424dfdd0(undefined8 *param_1)

{
  int iVar1;
  
  UInterpTrack::UInterpTrack();
  iVar1 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d7e68;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((wchar_t *)param_1[0xb] != L"Generic Float Track") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x14);
      iVar1 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar1 + 0x14;
    if (*(int *)((longlong)param_1 + 100) < iVar1 + 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Generic Float Track",0x14);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1424dfea0 UInterpTrackFloatMaterialParam body=212 status=ok
// SIG undefined UInterpTrackFloatMaterialParam(void)

undefined8 * UInterpTrackFloatMaterialParam::UInterpTrackFloatMaterialParam(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424dfdd0();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450de638;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = UInterpTrackInstFloatMaterialParam::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Float UMaterial Param") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x16);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0x16;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0x16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Float UMaterial Param",0x16);
  }
  return param_1;
}



// FUNCTION 1424dff80 UInterpTrackFloatParticleParam body=200 status=ok
// SIG undefined UInterpTrackFloatParticleParam(void)

undefined8 * UInterpTrackFloatParticleParam::UInterpTrackFloatParticleParam(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424dfdd0();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450de030;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  uVar1 = UInterpTrackInstFloatParticleParam::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Float Particle Param") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x15);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0x15;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Float Particle Param",0x15);
  }
  return param_1;
}



// FUNCTION 1424e0050 UInterpTrackFloatProp body=198 status=ok
// SIG undefined UInterpTrackFloatProp(void)

undefined8 * UInterpTrackFloatProp::UInterpTrackFloatProp(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424dfdd0();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450db890;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  uVar1 = UInterpTrackInstFloatProp::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Float Property") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0xf);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0xf;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Float Property",0xf);
  }
  return param_1;
}



// FUNCTION 1424e0120 FUN_1424e0120 body=33 status=ok
// SIG undefined FUN_1424e0120(void)

undefined8 * FUN_1424e0120(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450d7508;
  return param_1;
}



// FUNCTION 1424e0150 FUN_1424e0150 body=33 status=ok
// SIG undefined FUN_1424e0150(void)

undefined8 * FUN_1424e0150(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fcb830;
  return param_1;
}



// FUNCTION 1424e0180 FUN_1424e0180 body=33 status=ok
// SIG undefined FUN_1424e0180(void)

undefined8 * FUN_1424e0180(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450dc810;
  return param_1;
}



// FUNCTION 1424e01b0 FUN_1424e01b0 body=33 status=ok
// SIG undefined FUN_1424e01b0(void)

undefined8 * FUN_1424e01b0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450dce18;
  return param_1;
}



// FUNCTION 1424e01e0 FUN_1424e01e0 body=33 status=ok
// SIG undefined FUN_1424e01e0(void)

undefined8 * FUN_1424e01e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450ddd98;
  return param_1;
}



// FUNCTION 1424e0210 FUN_1424e0210 body=33 status=ok
// SIG undefined FUN_1424e0210(void)

undefined8 * FUN_1424e0210(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450d8bd8;
  return param_1;
}



// FUNCTION 1424e0240 FUN_1424e0240 body=33 status=ok
// SIG undefined FUN_1424e0240(void)

undefined8 * FUN_1424e0240(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450da280;
  return param_1;
}



// FUNCTION 1424e0270 UInterpTrackInstFloatAnimBPParam body=46 status=ok
// SIG undefined UInterpTrackInstFloatAnimBPParam(void)

undefined8 * UInterpTrackInstFloatAnimBPParam::UInterpTrackInstFloatAnimBPParam(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450e1010;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1424e02a0 FUN_1424e02a0 body=59 status=ok
// SIG undefined FUN_1424e02a0(void)

undefined8 * FUN_1424e02a0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450de9a8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1424e02e0 FUN_1424e02e0 body=33 status=ok
// SIG undefined FUN_1424e02e0(void)

undefined8 * FUN_1424e02e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450de3a0;
  return param_1;
}



// FUNCTION 1424e0310 FUN_1424e0310 body=33 status=ok
// SIG undefined FUN_1424e0310(void)

undefined8 * FUN_1424e0310(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450dbc00;
  return param_1;
}



// FUNCTION 1424e0340 FUN_1424e0340 body=33 status=ok
// SIG undefined FUN_1424e0340(void)

undefined8 * FUN_1424e0340(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450dd420;
  return param_1;
}



// FUNCTION 1424e0370 FUN_1424e0370 body=33 status=ok
// SIG undefined FUN_1424e0370(void)

undefined8 * FUN_1424e0370(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450d85d0;
  return param_1;
}



// FUNCTION 1424e03a0 FUN_1424e03a0 body=33 status=ok
// SIG undefined FUN_1424e03a0(void)

undefined8 * FUN_1424e03a0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450df600;
  return param_1;
}



// FUNCTION 1424e03d0 FUN_1424e03d0 body=33 status=ok
// SIG undefined FUN_1424e03d0(void)

undefined8 * FUN_1424e03d0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450d77a0;
  return param_1;
}



// FUNCTION 1424e0400 FUN_1424e0400 body=33 status=ok
// SIG undefined FUN_1424e0400(void)

undefined8 * FUN_1424e0400(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450da888;
  return param_1;
}



// FUNCTION 1424e0430 FUN_1424e0430 body=33 status=ok
// SIG undefined FUN_1424e0430(void)

undefined8 * FUN_1424e0430(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450db200;
  return param_1;
}



// FUNCTION 1424e0460 FUN_1424e0460 body=33 status=ok
// SIG undefined FUN_1424e0460(void)

undefined8 * FUN_1424e0460(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450d9c78;
  return param_1;
}



// FUNCTION 1424e0490 FUN_1424e0490 body=59 status=ok
// SIG undefined FUN_1424e0490(void)

undefined8 * FUN_1424e0490(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450defb0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1424e04d0 FUN_1424e04d0 body=33 status=ok
// SIG undefined FUN_1424e04d0(void)

undefined8 * FUN_1424e04d0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450dc208;
  return param_1;
}



// FUNCTION 1424e0500 FUN_1424e0500 body=33 status=ok
// SIG undefined FUN_1424e0500(void)

undefined8 * FUN_1424e0500(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fcbac8;
  return param_1;
}



// FUNCTION 1424e0530 FUN_1424e0530 body=201 status=ok
// SIG undefined FUN_1424e0530(void)

undefined8 * FUN_1424e0530(undefined8 *param_1)

{
  int iVar1;
  
  UInterpTrack::UInterpTrack();
  iVar1 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450db498;
  param_1[5] = &PTR_FUN_1450db808;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((wchar_t *)param_1[0xb] != L"Generic LinearColor Track") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x1a) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x1a);
      iVar1 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar1 + 0x1a;
    if (*(int *)((longlong)param_1 + 100) < iVar1 + 0x1a) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Generic LinearColor Track",0x1a);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1424e0600 FUN_1424e0600 body=359 status=ok
// SIG undefined FUN_1424e0600(void)

undefined8 * FUN_1424e0600(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  UInterpTrack::UInterpTrack();
  iVar2 = 0;
  iVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450db498;
  param_1[5] = &PTR_FUN_1450db808;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((wchar_t *)param_1[0xb] != L"Generic LinearColor Track") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x1a) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x1a);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0x1a;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0x1a) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Generic LinearColor Track",0x1a);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450dd0b0;
  param_1[5] = &PTR_FUN_1450db808;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  uVar1 = UInterpTrackInstLinearColorProp::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"LinearColor Property") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x15);
      iVar3 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar3 + 0x15;
    if (*(int *)((longlong)param_1 + 100) < iVar3 + 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar3);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"LinearColor Property",0x15);
  }
  return param_1;
}



// FUNCTION 1424e0770 FUN_1424e0770 body=262 status=ok
// SIG undefined FUN_1424e0770(void)

undefined8 * FUN_1424e0770(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  UInterpTrack::UInterpTrack();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d7a38;
  param_1[5] = &PTR_FUN_1450d7de0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar1 = UInterpTrackInstMove::GetPrivateStaticClass();
  param_1[9] = uVar1;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 1;
  if ((wchar_t *)param_1[0xb] != L"Movement") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,9);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 9;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Movement",9);
  }
  param_1[0x17] = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffef | 8;
  return param_1;
}



// FUNCTION 1424e0880 UInterpTrackMoveAxis body=174 status=ok
// SIG undefined UInterpTrackMoveAxis(void)

undefined8 * UInterpTrackMoveAxis::UInterpTrackMoveAxis(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1424dfdd0();
  *param_1 = &PTR__scalar_deleting_destructor__1450d81d8;
  param_1[5] = &PTR_FUN_1450d8548;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 0x20;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((wchar_t *)param_1[0xb] != L"Move Axis Track") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x10);
      iVar1 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar1 + 0x10;
    if (*(int *)((longlong)param_1 + 100) < iVar1 + 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar1);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Move Axis Track",0x10);
  }
  return param_1;
}



// FUNCTION 1424e0930 UInterpTrackParticleReplay body=177 status=ok
// SIG undefined UInterpTrackParticleReplay(void)

undefined8 * UInterpTrackParticleReplay::UInterpTrackParticleReplay(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  UInterpTrack::UInterpTrack();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450df248;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  param_1[6] = &PTR_LAB_1450df5b8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = UInterpTrackInstParticleReplay::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Particle Replay") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x10);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0x10;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Particle Replay",0x10);
  }
  return param_1;
}



// FUNCTION 1424e09f0 UInterpTrackSlomo body=163 status=ok
// SIG undefined UInterpTrackSlomo(void)

undefined8 * UInterpTrackSlomo::UInterpTrackSlomo(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_1424dfdd0();
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 3;
  *param_1 = &PTR__scalar_deleting_destructor__1450da518;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  uVar2 = UInterpTrackInstSlomo::GetPrivateStaticClass();
  param_1[9] = uVar2;
  if ((undefined *)param_1[0xb] != &DAT_1450d1028) {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,6);
      iVar3 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar3 + 6;
    if (*(int *)((longlong)param_1 + 100) < iVar3 + 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    puVar1 = (undefined8 *)param_1[0xb];
    *puVar1 = 0x6d006f006c0053;
    *(undefined4 *)(puVar1 + 1) = 0x6f;
  }
  return param_1;
}



// FUNCTION 1424e0aa0 UInterpTrackSound body=190 status=ok
// SIG undefined UInterpTrackSound(void)

undefined8 * UInterpTrackSound::UInterpTrackSound(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424e0c30();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450dae90;
  param_1[5] = &PTR_FUN_143fcc0d0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = UInterpTrackInstSound::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Sound") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,6);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 6;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Sound",6);
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10;
  return param_1;
}



// FUNCTION 1424e0b60 UInterpTrackToggle body=202 status=ok
// SIG undefined UInterpTrackToggle(void)

undefined8 * UInterpTrackToggle::UInterpTrackToggle(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  UInterpTrack::UInterpTrack();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d9908;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = UInterpTrackInstToggle::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Toggle") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,7);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 7;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Toggle",7);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1e;
  return param_1;
}



// FUNCTION 1424e0c30 FUN_1424e0c30 body=205 status=ok
// SIG undefined FUN_1424e0c30(void)

undefined8 * FUN_1424e0c30(undefined8 *param_1)

{
  int iVar1;
  
  UInterpTrack::UInterpTrack();
  iVar1 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450dab20;
  param_1[5] = &PTR_FUN_143fcc0d0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((wchar_t *)param_1[0xb] != L"Generic Vector Track") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x15);
      iVar1 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar1 + 0x15;
    if (*(int *)((longlong)param_1 + 100) < iVar1 + 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Generic Vector Track",0x15);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1424e0d00 UInterpTrackVectorMaterialParam body=223 status=ok
// SIG undefined UInterpTrackVectorMaterialParam(void)

undefined8 * UInterpTrackVectorMaterialParam::UInterpTrackVectorMaterialParam(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424e0c30();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450dec40;
  param_1[5] = &PTR_FUN_143fcc0d0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = UInterpTrackInstVectorMaterialParam::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Vector UMaterial Param") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x17);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0x17;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0x17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Vector UMaterial Param",0x17);
  }
  return param_1;
}



// FUNCTION 1424e0de0 UInterpTrackVectorProp body=176 status=ok
// SIG undefined UInterpTrackVectorProp(void)

undefined8 * UInterpTrackVectorProp::UInterpTrackVectorProp(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424e0c30();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450dbe98;
  param_1[5] = &PTR_FUN_143fcc0d0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  uVar1 = UInterpTrackInstVectorProp::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Vector Property") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0x10);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0x10;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Vector Property",0x10);
  }
  return param_1;
}



// FUNCTION 1424e0e90 UInterpTrackVisibility body=193 status=ok
// SIG undefined UInterpTrackVisibility(void)

undefined8 * UInterpTrackVisibility::UInterpTrackVisibility(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  UInterpTrack::UInterpTrack();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450d8e70;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = UInterpTrackInstVisibility::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Visibility") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0xb);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0xb;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Visibility",0xb);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 7;
  return param_1;
}



// FUNCTION 1424e0f60 UStringTable body=410 status=ok
// SIG undefined UStringTable(void)

undefined8 * UStringTable::UStringTable(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined8 local_res8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38 [2];
  undefined8 local_28;
  longlong local_20;
  longlong local_18 [2];
  
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__1450d5b98;
  plVar6 = (longlong *)operator_new(0x180);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144cb61d8;
    FStringTable::FStringTable(plVar6 + 2);
  }
  plVar1 = plVar6 + 2;
  local_48 = plVar1;
  local_40 = plVar6;
  TSharedRef<FStringTable,1>::Init<FStringTable>(&local_48,plVar1);
  param_1[5] = plVar1;
  param_1[6] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  puVar7 = (undefined8 *)UObjectBaseUtility::GetPathName(param_1,local_18,0);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar7;
  }
  FName::FName(param_1 + 7,puVar9,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FStringTable::SetOwnerAsset(param_1[5],param_1);
  TResourceArray<FMediaElementVertex,0>::SetAllowCPUAccess
            (param_1[5],(*(uint *)(param_1 + 1) & 0x1400) == 0);
  local_res8 = param_1[3];
  FName::ToString(&local_res8,local_38);
  FUN_141618550(param_1[5],local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    local_28 = param_1[5];
    local_20 = param_1[6];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    uVar4 = param_1[7];
    uVar8 = FUN_141607d00();
    FStringTableRegistry::RegisterStringTable(uVar8,uVar4,&local_28);
  }
  return param_1;
}



// FUNCTION 1424e1100 FUN_1424e1100 body=159 status=ok
// SIG undefined FUN_1424e1100(void)

void FUN_1424e1100(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424e11a0 ~TArray<FBlueprintInputKeyDelegateBinding,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<FBlueprintInputKeyDelegateBinding,TSizedDefaultAllocator<32>_>(void)

void TArray<FBlueprintInputKeyDelegateBinding,TSizedDefaultAllocator<32>_>::
     ~TArray<FBlueprintInputKeyDelegateBinding,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424e1240 ~TArray<FCurveEdEntry,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FCurveEdEntry,FDefaultAllocator>(void)

void TArray<FCurveEdEntry,FDefaultAllocator>::~TArray<FCurveEdEntry,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424e12a0 ~TArray<FCurveEdTab,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FCurveEdTab,FDefaultAllocator>(void)

void TArray<FCurveEdTab,FDefaultAllocator>::~TArray<FCurveEdTab,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      TArray<FCurveEdEntry,FDefaultAllocator>::~TArray<FCurveEdEntry,FDefaultAllocator>(plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1424e1300 ~TArray<FDebugTextInfo,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FDebugTextInfo,FDefaultAllocator>(void)

void TArray<FDebugTextInfo,FDefaultAllocator>::~TArray<FDebugTextInfo,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424e1360 FUN_1424e1360 body=119 status=ok
// SIG undefined FUN_1424e1360(void)

void FUN_1424e1360(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x480);
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1424e13e0 FUN_1424e13e0 body=125 status=ok
// SIG undefined FUN_1424e13e0(void)

void FUN_1424e13e0(longlong *param_1)

{
  char cVar1;
  DWORD DVar2;
  LARGE_INTEGER local_res8 [4];
  
  if ((*param_1 != 0) && (DAT_146afbc80 != 0)) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 != DAT_1468c21c0) {
        QueryPerformanceCounter(local_res8);
        LOCK();
        *(int *)(*param_1 + 0x24) =
             *(int *)(*param_1 + 0x24) + (local_res8[0].s.LowPart - (int)param_1[1]);
        UNLOCK();
        *(undefined4 *)(param_1 + 1) = 0;
        return;
      }
    }
    FInGamePerformanceTracker::ExitTimedSection(*param_1);
    return;
  }
  return;
}



// FUNCTION 1424e1460 ~FStaticMeshInstanceBuffer body=341 status=ok
// SIG undefined ~FStaticMeshInstanceBuffer(void)

void FStaticMeshInstanceBuffer::~FStaticMeshInstanceBuffer(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450d56d0;
  local_10 = (longlong *)0x0;
  if (param_1 + 6 != &local_18) {
    param_1[6] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x20);
  param_1[0x19] = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1f);
  FUN_141edd2d0(param_1 + 0x19);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18);
  param_1[0x11] = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x17);
  FUN_141edd2d0(param_1 + 0x11);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  param_1[9] = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  FUN_141edd2d0(param_1 + 9);
  plVar4 = (longlong *)param_1[7];
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
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 1424e15c0 ~FWorldInGamePerformanceTrackers body=69 status=ok
// SIG undefined ~FWorldInGamePerformanceTrackers(void)

void FWorldInGamePerformanceTrackers::~FWorldInGamePerformanceTrackers(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 3;
  param_1 = param_1 + 0x90;
  do {
    plVar1 = (longlong *)(param_1 + -0x30);
    param_1 = param_1 + -0x30;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1424e1610 ~HHitProxy body=213 status=ok
// SIG undefined ~HHitProxy(void)

void HHitProxy::~HHitProxy(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  BOOL BVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  iVar3 = *(int *)(param_1 + 3);
  *param_1 = &PTR__scalar_deleting_destructor__1450d2648;
  plVar7 = (longlong *)FUN_1424f03b0();
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(plVar7 + 7));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar7 + 7));
  }
  bVar4 = (byte)iVar3 & 0x1f;
  if (*(int *)((longlong)plVar7 + 0x34) != 0) {
    *(int *)(*plVar7 + (longlong)(int)plVar7[6] * 8) = iVar3;
  }
  puVar1 = (undefined4 *)(*plVar7 + (longlong)iVar3 * 8);
  uVar6 = 0xffffffff;
  *puVar1 = 0xffffffff;
  if (0 < *(int *)((longlong)plVar7 + 0x34)) {
    uVar6 = (undefined4)plVar7[6];
  }
  puVar1[1] = uVar6;
  *(int *)((longlong)plVar7 + 0x34) = *(int *)((longlong)plVar7 + 0x34) + 1;
  *(int *)(plVar7 + 6) = iVar3;
  plVar8 = (longlong *)plVar7[4];
  if ((longlong *)plVar7[4] == (longlong *)0x0) {
    plVar8 = plVar7 + 2;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar7 + 7));
  *param_1 = &PTR_FUN_1440104c8;
  return;
}



// FUNCTION 1424e16f0 FUN_1424e16f0 body=306 status=ok
// SIG undefined FUN_1424e16f0(void)

void FUN_1424e16f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_1450d4ba8;
  param_1[5] = &PTR_LAB_1450d5588;
  param_1[0x5a] = &PTR_LAB_1450d55b8;
  FUN_142502580();
  if (param_1[0x106] != 0) {
    FMemory::Free();
  }
  if (param_1[0x103] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x102];
  if (plVar4 != (longlong *)0x0) {
    puVar5 = (undefined8 *)*plVar4;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    puVar5 = (undefined8 *)plVar4[4];
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    puVar5 = (undefined8 *)plVar4[2];
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    FMemory::operator_delete(plVar4,0x38);
  }
  if (param_1[0xff] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0xfe];
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
  if (param_1[0xf9] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf5] != 0) {
    FMemory::Free();
  }
  FUN_1423c53e0(param_1);
  return;
}



// FUNCTION 1424e1830 operator= body=263 status=ok
// SIG undefined operator=(void)

undefined8 *
FInstancedStaticMeshVertexFactory::FDataType::operator=(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0xe) = *(undefined1 *)((longlong)param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0xf) = *(undefined1 *)((longlong)param_2 + 0xf);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x1f) = *(undefined1 *)((longlong)param_2 + 0x1f);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x2f) = *(undefined1 *)((longlong)param_2 + 0x2f);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
  *(undefined1 *)((longlong)param_1 + 0x3e) = *(undefined1 *)((longlong)param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0x3f) = *(undefined1 *)((longlong)param_2 + 0x3f);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x4e) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  FUN_1424b6ac0(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 1424e1940 FUN_1424e1940 body=105 status=ok
// SIG undefined FUN_1424e1940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1424e1940(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_140da9f70();
  FUN_1406da970(param_1,param_2 + 0x10);
  FUN_1406da970(param_1,param_2 + 0x20);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    uVar1 = *(uint *)(param_2 + 0x14) & uRam0000000146afbcb4;
    uVar2 = *(uint *)(param_2 + 0x18) & uRam0000000146afbcb8;
    uVar3 = *(uint *)(param_2 + 0x1c) & uRam0000000146afbcbc;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & _DAT_146afbcb0;
    *(uint *)(param_2 + 0x14) = uVar1;
    *(uint *)(param_2 + 0x18) = uVar2;
    *(uint *)(param_2 + 0x1c) = uVar3;
    uVar1 = *(uint *)(param_2 + 0x24) & uRam0000000146afbcb4;
    uVar2 = *(uint *)(param_2 + 0x28) & uRam0000000146afbcb8;
    uVar3 = *(uint *)(param_2 + 0x2c) & uRam0000000146afbcbc;
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & _DAT_146afbcb0;
    *(uint *)(param_2 + 0x24) = uVar1;
    *(uint *)(param_2 + 0x28) = uVar2;
    *(uint *)(param_2 + 0x2c) = uVar3;
  }
  return param_1;
}



// FUNCTION 1424e19b0 FUN_1424e19b0 body=426 status=ok
// SIG undefined FUN_1424e19b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1424e19b0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  puVar10 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x55555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1424e1940(param_1,(longlong)(int)puVar10 * 0x30 + *param_2);
        uVar11 = (int)puVar10 + 1;
        puVar10 = (undefined8 *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_2,local_res8[0]);
  }
  puVar12 = puVar10;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    uVar4 = uRam00000001468b5b78;
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x30 + *param_2);
    puVar9 = puVar10;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = _DAT_1468b5b70;
      puVar8[1] = uVar4;
      uVar4 = uRam00000001468b5b88;
      puVar8[2] = _DAT_1468b5b80;
      puVar8[3] = uVar4;
      uVar7 = uRam00000001468b5b9c;
      uVar6 = uRam00000001468b5b98;
      uVar5 = uRam00000001468b5b94;
      *(undefined4 *)(puVar8 + 4) = _DAT_1468b5b90;
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar5;
      *(undefined4 *)(puVar8 + 5) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar7;
      puVar9 = puVar8;
    }
    FUN_1424e1940(param_1,puVar9);
    uVar11 = (int)puVar12 + 1;
    puVar12 = (undefined8 *)(ulonglong)uVar11;
  } while ((int)uVar11 < local_res8[0]);
  return param_1;
}



// FUNCTION 1424e1b90 FUN_1424e1b90 body=97 status=ok
// SIG undefined FUN_1424e1b90(void)

undefined8 * FUN_1424e1b90(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450d5b48;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1424e1c00 FUN_1424e1c00 body=97 status=ok
// SIG undefined FUN_1424e1c00(void)

undefined8 * FUN_1424e1c00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450d5b58;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1424e1c70 FUN_1424e1c70 body=236 status=ok
// SIG undefined FUN_1424e1c70(void)

longlong FUN_1424e1c70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4f8);
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  TArray<FDebugTextInfo,FDefaultAllocator>::~TArray<FDebugTextInfo,FDefaultAllocator>
            (param_1 + 0x4b8);
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x578);
  }
  return param_1;
}



// FUNCTION 1424e1d60 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMAU_XboxUserLayer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x468);
  }
  return param_1;
}



// FUNCTION 1424e1db0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UOctreeRenderingComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1424e1360();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x500);
  }
  return param_1;
}



// FUNCTION 1424e1df0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FOnlineIdentityEOSCore::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1424e1360();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x508);
  }
  return param_1;
}



// FUNCTION 1424e1e30 `scalar_deleting_destructor' body=245 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FEnginePackageLocalizationCache::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR__scalar_deleting_destructor__1450d5b68;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
  uVar3 = FUN_14168dc80();
  cVar1 = FModuleManager::IsModuleLoaded(uVar3,*puVar2);
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
    uVar3 = *puVar2;
    uVar4 = FUN_14168dc80();
    plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar3);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5);
    uVar3 = (**(code **)(*plVar5 + 0x140))(plVar5);
    FUN_140483870(uVar3,param_1);
    uVar3 = (**(code **)(*plVar5 + 0x148))(plVar5);
    FUN_140483870(uVar3,param_1);
    uVar3 = (**(code **)(*plVar5 + 0x150))(plVar5);
    FUN_140483870(uVar3,param_1);
  }
  FPackageLocalizationCache::~FPackageLocalizationCache(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1424e1f30 FUN_1424e1f30 body=43 status=ok
// SIG undefined FUN_1424e1f30(void)

undefined8 * FUN_1424e1f30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1424e1f60 FUN_1424e1f60 body=43 status=ok
// SIG undefined FUN_1424e1f60(void)

undefined8 * FUN_1424e1f60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1424e1f90 `scalar_deleting_destructor' body=266 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FPerInstanceRenderData::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x120) != &local_18) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x128,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x30))(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x128);
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
  FStaticMeshInstanceBuffer::~FStaticMeshInstanceBuffer(param_1 + 0x18);
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 1424e20a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FStaticMeshInstanceBuffer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FStaticMeshInstanceBuffer();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1424e20e0 `scalar_deleting_destructor' body=119 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FStringTableEngineBridge::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 2) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1424e2160 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 HHitProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~HHitProxy();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1424e21a0 `scalar_deleting_destructor' body=154 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInGameAdManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1424e2240 FUN_1424e2240 body=64 status=ok
// SIG undefined FUN_1424e2240(void)

longlong FUN_1424e2240(longlong param_1,ulonglong param_2)

{
  FUN_1424e1100(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1424e2280 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInputKeyDelegateBinding::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FBlueprintInputKeyDelegateBinding,TSizedDefaultAllocator<32>_>::
  ~TArray<FBlueprintInputKeyDelegateBinding,TSizedDefaultAllocator<32>_>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1424e22c0 FUN_1424e22c0 body=341 status=ok
// SIG undefined FUN_1424e22c0(void)

undefined8 * FUN_1424e22c0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_1450d4ba8;
  param_1[5] = &PTR_LAB_1450d5588;
  param_1[0x5a] = &PTR_LAB_1450d55b8;
  FUN_142502580();
  if (param_1[0x106] != 0) {
    FMemory::Free();
  }
  if (param_1[0x103] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x102];
  if (plVar4 != (longlong *)0x0) {
    puVar5 = (undefined8 *)*plVar4;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    puVar5 = (undefined8 *)plVar4[4];
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    puVar5 = (undefined8 *)plVar4[2];
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    FMemory::operator_delete(plVar4,0x38);
  }
  if (param_1[0xff] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0xfe];
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
  if (param_1[0xf9] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf5] != 0) {
    FMemory::Free();
  }
  FUN_1423c53e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x840);
  }
  return param_1;
}



// FUNCTION 1424e2420 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpCurveEdSetup::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FCurveEdTab,FDefaultAllocator>::~TArray<FCurveEdTab,FDefaultAllocator>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1424e2460 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1424e24c0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1424e2520 `scalar_deleting_destructor' body=115 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackAnimControl::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1424e25a0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackAudioMaster::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1424e2610 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackBoolProp::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1424e2680 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackColorProp::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1424e26f0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackFade::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1424e2760 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackFloatAnimBPParam::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1424e27d0 `scalar_deleting_destructor' body=115 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackFloatMaterialParam::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1424e2850 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackInstFloatMaterialParam::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1424e28c0 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackMove::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1424e2950 `scalar_deleting_destructor' body=115 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackMoveAxis::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1424e29d0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackParticleReplay::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1424e2a40 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UStringTable::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1424e2ad0 FUN_1424e2ad0 body=169 status=ok
// SIG undefined FUN_1424e2ad0(void)

void FUN_1424e2ad0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *local_res8;
  
  if (param_1 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
        (local_res8 = param_1, lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 == param_3))
       && (cVar2 = FUN_142242bb0(param_1,0x3e4ccccd), cVar2 != '\0')) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,&local_res8);
    }
  }
  return;
}



// FUNCTION 1424e2b80 FUN_1424e2b80 body=208 status=ok
// SIG undefined FUN_1424e2b80(void)

int FUN_1424e2b80(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                 undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10;
  
  if (*(longlong **)(param_4 + 0x20) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_4 + 0x20) + 0x278))();
    if (lVar2 != 0) {
      local_res10 = (ulonglong)local_res10._4_4_ << 0x20;
      iVar1 = FInterpCurve<float>::AddPoint(param_2 + 0x70,param_3,&local_res10);
      local_res10 = 0;
      *(undefined1 *)(*(longlong *)(param_2 + 0x70) + 0x10 + (longlong)iVar1 * 0x14) = param_5;
      FInterpLookupTrack::AddPoint(param_2 + 0x98,param_3,&local_res10);
      (**(code **)(*param_1 + 0x2c0))(param_1,param_2,iVar1,param_4);
      return iVar1;
    }
  }
  return -1;
}



// FUNCTION 1424e2c50 AddClickedBannerDelegate body=104 status=ok
// SIG undefined AddClickedBannerDelegate(void)

void UInGameAdManager::AddClickedBannerDelegate(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar2 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar1);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar2 + 1;
    if (*(int *)(param_1 + 0x4c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar3 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_2 + 2);
  }
  return;
}



// FUNCTION 1424e2cc0 AddClosedAdDelegate body=104 status=ok
// SIG undefined AddClosedAdDelegate(void)

void UInGameAdManager::AddClosedAdDelegate(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar2 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar1);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar3 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_2 + 2);
  }
  return;
}



// FUNCTION 1424e2d30 FUN_1424e2d30 body=715 status=ok
// SIG undefined FUN_1424e2d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424e2d30(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,int param_7,char param_8,byte param_9,
                  byte param_10,undefined8 param_11,undefined4 param_12,byte param_13)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 local_a8;
  undefined4 local_a0;
  
  if (param_3 == 0) {
    return;
  }
  if (param_7 == DAT_1468b5ad4) {
    param_7 = DAT_1464aa730;
  }
  uVar11 = 0;
  iVar8 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar8 = 0;
  }
  if (iVar8 == 0) {
    FUN_1429513f0(param_1,param_3,0);
    return;
  }
  if (param_8 == '\0') {
    uVar9 = 0xffffffff;
    if (0 < *(int *)(param_1 + 0x4c0)) {
      uVar7 = uVar11;
      do {
        iVar8 = (int)uVar9;
        if (iVar8 != -1) goto LAB_1424e2ea3;
        uVar6 = (int)uVar7 + 1;
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x4b8) + uVar11);
        uVar11 = uVar11 + 0x60;
        uVar9 = uVar7;
        if (*plVar4 != param_3) {
          uVar9 = 0xffffffff;
        }
        iVar8 = (int)uVar9;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(param_1 + 0x4c0));
      if (iVar8 != -1) goto LAB_1424e2ea3;
    }
  }
  iVar8 = *(int *)(param_1 + 0x4c0);
  *(int *)(param_1 + 0x4c0) = iVar8 + 1;
  if (*(int *)(param_1 + 0x4c4) < iVar8 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x4b8),iVar8);
  }
  puVar5 = (undefined8 *)((longlong)iVar8 * 0x60 + *(longlong *)(param_1 + 0x4b8));
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
  *puVar5 = 0;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 0xb) = 0x3f800000;
  puVar5[10] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  *(uint *)((longlong)puVar5 + 0x3c) = *(uint *)((longlong)puVar5 + 0x3c) & 0xfffffff8;
  puVar5[6] = 0;
LAB_1424e2ea3:
  plVar4 = (longlong *)(param_1 + 0x4b8);
  lVar10 = (longlong)iVar8 * 0x60;
  *(longlong *)(lVar10 + *plVar4) = param_3;
  lVar3 = *plVar4;
  uVar2 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(lVar3 + 8 + lVar10) = *param_5;
  *(undefined4 *)(lVar3 + 0x10 + lVar10) = uVar2;
  lVar3 = *plVar4;
  uVar2 = *(undefined4 *)(param_6 + 1);
  *(undefined8 *)(lVar3 + 0x14 + lVar10) = *param_6;
  *(undefined4 *)(lVar3 + 0x1c + lVar10) = uVar2;
  FString::operator=(*plVar4 + 0x20 + lVar10,param_2);
  *(undefined4 *)(*plVar4 + 0x30 + lVar10) = param_4;
  *(undefined4 *)(*plVar4 + 0x34 + lVar10) = param_4;
  *(int *)(*plVar4 + 0x38 + lVar10) = param_7;
  lVar3 = *plVar4;
  puVar1 = (uint *)(lVar3 + 0x3c + lVar10);
  *puVar1 = *puVar1 & 0xfffffffe;
  puVar1 = (uint *)(lVar3 + 0x3c + lVar10);
  *puVar1 = *puVar1 | (uint)param_9;
  lVar3 = *plVar4;
  puVar1 = (uint *)(lVar3 + 0x3c + lVar10);
  *puVar1 = *puVar1 & 0xfffffffd;
  puVar1 = (uint *)(lVar3 + 0x3c + lVar10);
  *puVar1 = *puVar1 | (uint)param_10 * 2;
  lVar3 = *(longlong *)(param_3 + 0x168);
  if (lVar3 == 0) {
    local_a8 = _DAT_1468b5d90;
    local_a0 = DAT_1468b5d98;
  }
  else {
    local_a8 = *(undefined8 *)(lVar3 + 0x220);
    local_a0 = *(undefined4 *)(lVar3 + 0x228);
  }
  lVar3 = *plVar4;
  *(undefined8 *)(lVar3 + 0x40 + lVar10) = local_a8;
  *(undefined4 *)(lVar3 + 0x48 + lVar10) = local_a0;
  *(undefined8 *)(*plVar4 + 0x50 + lVar10) = param_11;
  *(undefined4 *)(*plVar4 + 0x58 + lVar10) = param_12;
  lVar3 = *plVar4;
  puVar1 = (uint *)(lVar3 + 0x3c + lVar10);
  *puVar1 = *puVar1 & 0xfffffffb;
  puVar1 = (uint *)(lVar3 + 0x3c + lVar10);
  *puVar1 = *puVar1 | (uint)param_13 << 2;
  return;
}



// FUNCTION 1424e3000 FUN_1424e3000 body=103 status=ok
// SIG undefined FUN_1424e3000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424e3000(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  uVar3 = uRam0000000146afbcac;
  lVar2 = (longlong)iVar1 * 0x60 + *param_1;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x14) = 0;
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(uint *)(lVar2 + 0x1c) = uVar3;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  uVar3 = uRam0000000146afbca4 & uRam0000000146afbcb4;
  uVar4 = uRam0000000146afbca8 & uRam0000000146afbcb8;
  uVar5 = uRam0000000146afbcac & uRam0000000146afbcbc;
  *(uint *)(lVar2 + 0x30) = _DAT_146afbca0 & _DAT_146afbcb0;
  *(uint *)(lVar2 + 0x34) = uVar3;
  *(uint *)(lVar2 + 0x38) = uVar4;
  *(uint *)(lVar2 + 0x3c) = uVar5;
  return;
}



// FUNCTION 1424e3070 FUN_1424e3070 body=407 status=ok
// SIG undefined FUN_1424e3070(void)

void FUN_1424e3070(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,int param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong local_res20;
  undefined1 local_38 [32];
  
  plVar1 = (longlong *)(param_1 + 0x4d8);
  lVar4 = *plVar1;
  for (lVar6 = lVar4; lVar6 != (longlong)*(int *)(param_1 + 0x4e0) * 0x20 + lVar4;
      lVar6 = lVar6 + 0x20) {
    if (*(longlong *)(lVar6 + 0x10) == param_4) {
      return;
    }
  }
  uVar9 = 0;
  local_res20 = param_4;
  if (0 < *(int *)(param_1 + 0x4e0)) {
    piVar7 = (int *)(lVar4 + 0x1c);
    uVar11 = uVar9;
    do {
      iVar10 = (int)uVar11;
      if (*piVar7 < param_6) {
        puVar8 = (undefined8 *)
                 FHUDHitBox::FHUDHitBox(local_38,param_2,param_3,&local_res20,param_5,param_6);
        iVar3 = *(int *)(param_1 + 0x4e0);
        *(int *)(param_1 + 0x4e0) = iVar3 + 1;
        if (*(int *)(param_1 + 0x4e4) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar1,iVar3);
        }
        lVar6 = (longlong)iVar10 * 0x20;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar6 + 0x20),(void *)(*plVar1 + lVar6),
                   (longlong)(iVar3 - iVar10) << 5);
        uVar5 = puVar8[1];
        lVar4 = *plVar1;
        puVar2 = (undefined8 *)(lVar6 + lVar4);
        *puVar2 = *puVar8;
        puVar2[1] = uVar5;
        uVar5 = puVar8[3];
        puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar4);
        *puVar2 = puVar8[2];
        puVar2[1] = uVar5;
        return;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 8;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x4e0));
  }
  puVar8 = (undefined8 *)
           FHUDHitBox::FHUDHitBox(local_38,param_2,param_3,&local_res20,param_5,param_6);
  iVar10 = *(int *)(param_1 + 0x4e0);
  *(int *)(param_1 + 0x4e0) = iVar10 + 1;
  if (*(int *)(param_1 + 0x4e4) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar10);
  }
  uVar5 = puVar8[1];
  lVar4 = *plVar1;
  puVar2 = (undefined8 *)((longlong)iVar10 * 0x20 + lVar4);
  *puVar2 = *puVar8;
  puVar2[1] = uVar5;
  uVar5 = puVar8[3];
  puVar2 = (undefined8 *)((longlong)iVar10 * 0x20 + 0x10 + lVar4);
  *puVar2 = puVar8[2];
  puVar2[1] = uVar5;
  return;
}



// FUNCTION 1424e3210 FUN_1424e3210 body=74 status=ok
// SIG undefined FUN_1424e3210(void)

void FUN_1424e3210(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_1424e3000();
  *puVar2 = 0xffffffff;
  puVar2[1] = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(puVar2 + 4) = *param_2;
  *(undefined8 *)(puVar2 + 6) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(puVar2 + 8) = param_2[2];
  *(undefined8 *)(puVar2 + 10) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(puVar2 + 0xc) = param_2[4];
  *(undefined8 *)(puVar2 + 0xe) = uVar1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}



// FUNCTION 1424e3260 FUN_1424e3260 body=17 status=ok
// SIG undefined FUN_1424e3260(void)

void FUN_1424e3260(longlong param_1,undefined8 param_2)

{
  FUN_1424e3280(param_1,*(undefined4 *)(param_1 + 0x7b0),0,param_2);
  return;
}



// FUNCTION 1424e3280 FUN_1424e3280 body=469 status=ok
// SIG undefined FUN_1424e3280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1424e3280(longlong *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  puVar6 = (undefined8 *)0x0;
  lVar8 = (longlong)param_2;
  if (param_3 == (undefined8 *)0x0) {
    iVar3 = (int)param_1[0xf6];
    *(int *)(param_1 + 0xf6) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x7b4) < iVar3 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0xf5,iVar3);
    }
    uVar4 = uRam00000001468b5b78;
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x30 + param_1[0xf5]);
    param_3 = puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = _DAT_1468b5b70;
      puVar7[1] = uVar4;
      uVar4 = uRam00000001468b5b88;
      puVar7[2] = _DAT_1468b5b80;
      puVar7[3] = uVar4;
      uVar4 = uRam00000001468b5b98;
      puVar7[4] = _DAT_1468b5b90;
      puVar7[5] = uVar4;
      param_3 = puVar7;
    }
  }
  uVar4 = param_4[1];
  *param_3 = *param_4;
  param_3[1] = uVar4;
  uVar4 = param_4[3];
  param_3[2] = param_4[2];
  param_3[3] = uVar4;
  uVar4 = param_4[5];
  param_3[4] = param_4[4];
  param_3[5] = uVar4;
  if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
    if (((0.0001 < ABS(*(float *)(param_4 + 4))) ||
        (0.0001 < ABS(*(float *)((longlong)param_4 + 0x24)))) ||
       (0.0001 < ABS(*(float *)(param_4 + 5)))) {
      lVar5 = operator_new(0x1b0);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)FUN_1426852e0(lVar5);
      }
      plVar1 = param_1 + 0x103;
      iVar3 = (int)param_1[0x104];
      *(int *)(param_1 + 0x104) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x824) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      pvVar2 = (void *)(*plVar1 + lVar8 * 8);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)pvVar2 + 8),pvVar2,(longlong)(iVar3 - param_2) << 3);
      *(undefined8 **)(*plVar1 + lVar8 * 8) = puVar6;
      FUN_1424faec0(param_1,param_2,puVar6);
    }
    else {
      plVar1 = param_1 + 0x103;
      iVar3 = (int)param_1[0x104];
      *(int *)(param_1 + 0x104) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x824) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      pvVar2 = (void *)(*plVar1 + lVar8 * 8);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)pvVar2 + 8),pvVar2,(longlong)(iVar3 - param_2) << 3);
      *(undefined8 *)(*plVar1 + lVar8 * 8) = 0;
    }
  }
  (**(code **)(*param_1 + 0x9c8))(param_1,param_2);
  *(int *)((longlong)param_1 + 0x80c) = *(int *)((longlong)param_1 + 0x80c) + 1;
  FUN_1423424e0(param_1);
  return param_2;
}



// FUNCTION 1424e3460 FUN_1424e3460 body=83 status=ok
// SIG undefined FUN_1424e3460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424e3460(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_14162bcf0(param_2,local_48,param_1 + 0x42);
  (**(code **)(*param_1 + 0x980))(param_1,local_48);
  return;
}



// FUNCTION 1424e34c0 AddKeyframe body=206 status=ok
// SIG undefined AddKeyframe(void)

uint UInterpTrackAnimControl::AddKeyframe(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined4 uStack_24;
  undefined4 uStack_c;
  ulonglong uVar9;
  
  uVar5 = 0;
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    pfVar4 = *(float **)(param_1 + 0x98);
    uVar9 = uVar5;
    do {
      uVar8 = (uint)uVar9;
      if (param_2 < *pfVar4 || param_2 == *pfVar4) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 8;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0xa0));
  }
  plVar7 = (longlong *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xa4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar7,iVar2);
  }
  lVar6 = (longlong)(int)uVar8 * 0x20;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar7 + lVar6 + 0x20),(void *)(*plVar7 + lVar6),
             (longlong)(int)(iVar2 - uVar8) << 5);
  lVar3 = *plVar7;
  puVar1 = (undefined8 *)(lVar6 + lVar3);
  *puVar1 = CONCAT44(uStack_24,param_2);
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar3);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_c,0x3f800000) & 0xfffffffcffffffff;
  return uVar8;
}



// FUNCTION 1424e3590 AddKeyframe body=120 status=ok
// SIG undefined AddKeyframe(void)

int UInterpTrackAudioMaster::AddKeyframe
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0;
  iVar1 = FInterpCurve<FVector>::AddPoint(param_1 + 0x70,param_2,&local_18);
  *(undefined1 *)((longlong)iVar1 * 0x2c + 0x28 + *(longlong *)(param_1 + 0x70)) = param_4;
  FInterpCurve<FVector>::AutoSetTangents
            (param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),
             CONCAT71((int7)((ulonglong)((longlong)iVar1 * 0x2c) >> 8),1));
  return iVar1;
}



// FUNCTION 1424e3610 FUN_1424e3610 body=193 status=ok
// SIG undefined FUN_1424e3610(void)

int FUN_1424e3610(longlong *param_1,undefined4 param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uStackX_1c;
  
  if ((*(longlong *)(param_3 + 0x38) != 0) && (lVar4 = *(longlong *)(param_3 + 0x40), lVar4 != 0)) {
    iVar3 = (int)param_1[0xf];
    bVar1 = *(byte *)((ulonglong)*(byte *)(lVar4 + 0x71) + *(longlong *)(param_3 + 0x38));
    bVar2 = *(byte *)(lVar4 + 0x73);
    *(int *)(param_1 + 0xf) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x7c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe,iVar3);
    }
    *(ulonglong *)(param_1[0xe] + (longlong)iVar3 * 8) =
         CONCAT44((uint)((bVar2 & bVar1) != 0) | uStackX_1c & 0xfffffffe,param_2);
    (**(code **)(*param_1 + 0x2b8))(param_1,iVar3,param_3);
    return iVar3;
  }
  return -1;
}



// FUNCTION 1424e36e0 FUN_1424e36e0 body=164 status=ok
// SIG undefined FUN_1424e36e0(void)

int FUN_1424e36e0(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  
  if (*(longlong *)(param_3 + 0x38) == 0) {
    return -1;
  }
  iVar1 = FInterpCurve<FVector>::AddPoint(param_1 + 0xe,param_2,&DAT_1468b5d90);
  *(undefined1 *)((longlong)iVar1 * 0x2c + 0x28 + param_1[0xe]) = param_4;
  (**(code **)(*param_1 + 0x2b8))(param_1,iVar1,param_3);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0xe,(int)param_1[0x11],1);
  return iVar1;
}



// FUNCTION 1424e3790 AddKeyframe body=119 status=ok
// SIG undefined AddKeyframe(void)

int UInterpTrackColorScale::AddKeyframe
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  iVar1 = FInterpCurve<FVector>::AddPoint(param_1 + 0x70,param_2,&local_18);
  *(undefined1 *)((longlong)iVar1 * 0x2c + 0x28 + *(longlong *)(param_1 + 0x70)) = param_4;
  FInterpCurve<FVector>::AutoSetTangents
            (param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),
             CONCAT71((int7)((ulonglong)((longlong)iVar1 * 0x2c) >> 8),1));
  return iVar1;
}



// FUNCTION 1424e3810 AddKeyframe body=219 status=ok
// SIG undefined AddKeyframe(void)

uint UInterpTrackDirector::AddKeyframe(longlong param_1,float param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uStack_24;
  ulonglong uVar8;
  
  uVar6 = 0;
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar4 = *(float **)(param_1 + 0x70);
    uVar8 = uVar6;
    do {
      uVar7 = (uint)uVar8;
      if (param_2 < *pfVar4 || param_2 == *pfVar4) break;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + 1;
      pfVar4 = pfVar4 + 6;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x78));
  }
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar1 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x70,iVar1);
  }
  lVar5 = (longlong)(int)uVar7;
  _Src = (void *)(*(longlong *)(param_1 + 0x70) + lVar5 * 0x18);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x18),_Src,(longlong)(int)(iVar1 - uVar7) * 0x18);
  lVar2 = *(longlong *)(param_1 + 0x70);
  pfVar4 = (float *)(lVar2 + lVar5 * 0x18);
  *pfVar4 = param_2;
  pfVar4[1] = 0.0;
  pfVar4[2] = 0.0;
  pfVar4[3] = 0.0;
  *(ulonglong *)(lVar2 + 0x10 + lVar5 * 0x18) = (ulonglong)uStack_24 << 0x20;
  uVar3 = FUN_1424f0300(param_1,uVar7);
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x10 + lVar5 * 0x18) = uVar3;
  return uVar7;
}



// FUNCTION 1424e38f0 AddKeyframe body=177 status=ok
// SIG undefined AddKeyframe(void)

uint UInterpTrackEvent::AddKeyframe(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  void *_Src;
  uint uVar6;
  undefined4 uStack_14;
  ulonglong uVar7;
  
  uVar5 = 0;
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar4 = *(float **)(param_1 + 0x70);
    uVar7 = uVar5;
    do {
      uVar6 = (uint)uVar7;
      if (param_2 < *pfVar4 || param_2 == *pfVar4) break;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 4;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x78));
  }
  iVar3 = *(int *)(param_1 + 0x78);
  plVar1 = (longlong *)(param_1 + 0x70);
  *(int *)(param_1 + 0x78) = iVar3 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
  }
  _Src = (void *)(*plVar1 + (longlong)(int)uVar6 * 0x10);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x10),_Src,(longlong)(int)(iVar3 - uVar6) << 4);
  puVar2 = (undefined8 *)((longlong)(int)uVar6 * 0x10 + *plVar1);
  *puVar2 = CONCAT44(uStack_14,param_2);
  puVar2[1] = 0;
  return uVar6;
}



// FUNCTION 1424e39b0 AddKeyframe body=108 status=ok
// SIG undefined AddKeyframe(void)

int UInterpTrackFade::AddKeyframe
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  iVar1 = FInterpCurve<float>::AddPoint(param_1 + 0x70,param_2,local_res20);
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x10 + (longlong)iVar1 * 0x14) = param_4;
  FInterpCurve<float>::AutoSetTangents
            (param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),
             CONCAT71((int7)((ulonglong)((longlong)iVar1 * 5) >> 8),1));
  return iVar1;
}



// FUNCTION 1424e3a20 AddKeyframe body=471 status=ok
// SIG undefined AddKeyframe(void)

int UInterpTrackFloatAnimBPParam::AddKeyframe
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  fVar9 = 0.0;
  iVar2 = FInterpCurve<float>::AddPoint(param_1 + 0x70,param_2,local_res20);
  lVar5 = (longlong)iVar2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x10 + lVar5 * 0x14) = param_4;
  iVar6 = *(int *)(param_1 + 0x78) + -1;
  if (iVar2 < 1) {
    if (iVar2 < iVar6) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (lVar5 * 5 + 1) * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x70) + ((longlong)(iVar2 + 1) * 5 + 1) * 4);
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x70);
    lVar3 = (longlong)(iVar2 + -1);
    if (iVar2 < iVar6) {
      lVar4 = (longlong)(iVar2 + 1);
      fVar7 = *(float *)(lVar1 + lVar4 * 0x14);
      fVar10 = fVar7 - *(float *)(lVar1 + lVar3 * 0x14);
      if (0.0 < fVar10) {
        fVar9 = (fVar10 - (fVar7 - *(float *)(lVar1 + lVar5 * 0x14))) / fVar10;
      }
      if ((*(byte *)(lVar1 + 0x10 + lVar3 * 0x14) & 0xfd) == 0) {
        *(float *)(lVar1 + 4 + lVar5 * 0x14) =
             (*(float *)(lVar1 + 4 + lVar4 * 0x14) - *(float *)(lVar1 + 4 + lVar3 * 0x14)) * fVar9 +
             *(float *)(lVar1 + 4 + lVar3 * 0x14);
      }
      else {
        fVar8 = fVar9 * fVar9;
        fVar7 = fVar8 * fVar9;
        *(float *)(lVar1 + 4 + lVar5 * 0x14) =
             ((fVar7 - (fVar8 + fVar8)) + fVar9) * fVar10 * *(float *)(lVar1 + 0xc + lVar3 * 0x14) +
             (((fVar7 + fVar7) - fVar8 * 3.0) + 1.0) * *(float *)(lVar1 + 4 + lVar3 * 0x14) +
             fVar10 * *(float *)(lVar1 + 8 + lVar4 * 0x14) * (fVar7 - fVar8) +
             (fVar8 * 3.0 - (fVar7 + fVar7)) * *(float *)(lVar1 + 4 + lVar4 * 0x14);
      }
    }
    else {
      *(undefined4 *)(lVar1 + 4 + lVar5 * 0x14) = *(undefined4 *)(lVar1 + 4 + lVar3 * 0x14);
    }
  }
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  return iVar2;
}



// FUNCTION 1424e3c00 FUN_1424e3c00 body=148 status=ok
// SIG undefined FUN_1424e3c00(void)

int FUN_1424e3c00(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_res18 [4];
  
  if (*(longlong *)(param_3 + 0x38) == 0) {
    return -1;
  }
  local_res18[0] = 0;
  iVar1 = FInterpCurve<float>::AddPoint(param_1 + 0xe,param_2,local_res18);
  *(undefined1 *)(param_1[0xe] + 0x10 + (longlong)iVar1 * 0x14) = param_4;
  (**(code **)(*param_1 + 0x2b8))(param_1,iVar1,param_3);
  FInterpCurve<float>::AutoSetTangents(param_1 + 0xe,(int)param_1[0x11],1);
  return iVar1;
}



// FUNCTION 1424e3ca0 FUN_1424e3ca0 body=174 status=ok
// SIG undefined FUN_1424e3ca0(void)

int FUN_1424e3ca0(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_3 + 0x38) == 0) {
    return -1;
  }
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
  iVar1 = FInterpCurve<FLinearColor>::AddPoint(param_1 + 0xe,param_2,&local_18);
  *(undefined1 *)((longlong)iVar1 * 0x38 + 0x34 + param_1[0xe]) = param_4;
  (**(code **)(*param_1 + 0x2b8))(param_1,iVar1,param_3);
  FInterpCurve<FLinearColor>::AutoSetTangents(param_1 + 0xe,(int)param_1[0x11],1);
  return iVar1;
}



// FUNCTION 1424e3d50 FUN_1424e3d50 body=386 status=ok
// SIG undefined FUN_1424e3d50(void)

int FUN_1424e3d50(longlong *param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  
  plVar1 = *(longlong **)(param_3 + 0x20);
  if ((int)param_1[8] == 0) {
    if ((plVar1 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar1 + 0x278))(), lVar4 == 0)) {
      iVar2 = -1;
    }
    else {
      iVar2 = FInterpCurve<FVector>::AddPoint(param_1 + 0xe,param_2,&DAT_1468b5d90);
      *(char *)((longlong)iVar2 * 0x2c + 0x28 + param_1[0xe]) = (char)param_4;
      iVar3 = FInterpCurve<FVector>::AddPoint(param_1 + 0x11,param_2,&DAT_1468b5d90);
      local_res8 = 0;
      *(char *)((longlong)iVar3 * 0x2c + 0x28 + param_1[0x11]) = (char)param_4;
      FInterpLookupTrack::AddPoint(param_1 + 0x14,param_2,&local_res8);
      (**(code **)(*param_1 + 0x2b8))(param_1,iVar2,param_3);
      FInterpCurve<FVector>::AutoSetTangents(param_1 + 0xe,(int)param_1[0x17],1);
      FInterpCurve<FVector>::AutoSetTangents
                (param_1 + 0x11,*(undefined4 *)((longlong)param_1 + 0xbc),1);
    }
  }
  else {
    uVar7 = 0;
    uVar5 = uVar7;
    if (plVar1 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar1 + 0x278))();
    }
    iVar2 = -1;
    if ((uVar5 != 0) && (uVar5 = uVar7, 0 < (int)param_1[8])) {
      do {
        iVar3 = (**(code **)(*param_1 + 0x2a0))
                          (param_1,*(undefined8 *)(uVar5 + param_1[7]),param_2,param_3,param_4);
        if ((iVar3 < iVar2) || (iVar2 == -1)) {
          iVar2 = iVar3;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar5 = uVar5 + 8;
      } while ((int)uVar6 < (int)param_1[8]);
    }
  }
  return iVar2;
}



// FUNCTION 1424e3ee0 AddKeyframe body=36 status=ok
// SIG undefined AddKeyframe(void)

void UInterpTrackMoveAxis::AddKeyframe
               (longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))
            (*(longlong **)(param_1 + 0x20),param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1424e3f10 AddKeyframe body=147 status=ok
// SIG undefined AddKeyframe(void)

ulonglong UInterpTrackParticleReplay::AddKeyframe(longlong param_1,float param_2)

{
  longlong lVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = uVar3;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar2 = *(float **)(param_1 + 0x70);
    do {
      if (param_2 < *pfVar2 || param_2 == *pfVar2) break;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 3;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x78));
  }
  TArray<FParticleReplayTrackKey,FDefaultAllocator>::InsertUninitialized
            ((longlong *)(param_1 + 0x70),uVar4,1);
  lVar1 = *(longlong *)(param_1 + 0x70);
  *(ulonglong *)(lVar1 + (longlong)(int)uVar4 * 0xc) = CONCAT44(0x3f800000,param_2);
  *(undefined4 *)(lVar1 + 8 + (longlong)(int)uVar4 * 0xc) = 1;
  return uVar4;
}



// FUNCTION 1424e3fb0 AddKeyframe body=113 status=ok
// SIG undefined AddKeyframe(void)

int UInterpTrackSlomo::AddKeyframe
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_res20 [2];
  
  local_res20[0] = 0x3f800000;
  iVar1 = FInterpCurve<float>::AddPoint(param_1 + 0x70,param_2,local_res20);
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x10 + (longlong)iVar1 * 0x14) = param_4;
  FInterpCurve<float>::AutoSetTangents
            (param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),
             CONCAT71((int7)((ulonglong)((longlong)iVar1 * 5) >> 8),1));
  return iVar1;
}



// FUNCTION 1424e4030 AddKeyframe body=201 status=ok
// SIG undefined AddKeyframe(void)

uint UInterpTrackSound::AddKeyframe(longlong param_1,float param_2)

{
  longlong *plVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 uStack_1c;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    pfVar5 = *(float **)(param_1 + 0x90);
    uVar9 = uVar7;
    do {
      uVar8 = (uint)uVar9;
      if (param_2 < *pfVar5 || param_2 == *pfVar5) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar7 = uVar7 + 1;
      pfVar5 = pfVar5 + 6;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x98));
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar3 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar3);
  }
  lVar6 = (longlong)(int)uVar8;
  _Src = (void *)(*plVar1 + lVar6 * 0x18);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x18),_Src,(longlong)(int)(iVar3 - uVar8) * 0x18);
  lVar4 = *plVar1;
  puVar2 = (undefined8 *)(lVar4 + lVar6 * 0x18);
  *puVar2 = CONCAT44(0x3f800000,param_2);
  puVar2[1] = CONCAT44(uStack_1c,0x3f800000);
  *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = 0;
  return uVar8;
}



// FUNCTION 1424e4100 AddKeyframe body=185 status=ok
// SIG undefined AddKeyframe(void)

uint UInterpTrackToggle::AddKeyframe(longlong param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar4 = 0;
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    pfVar3 = *(float **)(param_1 + 0x70);
    uVar7 = uVar4;
    do {
      uVar6 = (uint)uVar7;
      if (param_2 < *pfVar3 || param_2 == *pfVar3) break;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 2;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x78));
  }
  iVar2 = *(int *)(param_1 + 0x78);
  plVar1 = (longlong *)(param_1 + 0x70);
  *(int *)(param_1 + 0x78) = iVar2 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar5 = (longlong)(int)uVar6;
  _Src = (void *)(*plVar1 + lVar5 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar2 - uVar6) << 3);
  *(float *)(*plVar1 + lVar5 * 8) = param_2;
  *(undefined1 *)(*plVar1 + 4 + lVar5 * 8) = *(undefined1 *)(param_3 + 0x28);
  return uVar6;
}



// FUNCTION 1424e41c0 AddKeyframe body=101 status=ok
// SIG undefined AddKeyframe(void)

int UInterpTrackVectorMaterialParam::AddKeyframe
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FInterpCurve<FVector>::AddPoint(param_1 + 0x70,param_2,&DAT_1468b5d90);
  *(undefined1 *)((longlong)iVar1 * 0x2c + 0x28 + *(longlong *)(param_1 + 0x70)) = param_4;
  FInterpCurve<FVector>::AutoSetTangents
            (param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),
             CONCAT71((int7)((ulonglong)((longlong)iVar1 * 0x2c) >> 8),1));
  return iVar1;
}



// FUNCTION 1424e4230 FUN_1424e4230 body=883 status=ok
// SIG undefined FUN_1424e4230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424e4230(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_148 [32];
  int local_128;
  longlong local_120;
  longlong *local_118;
  undefined1 local_110 [192];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  if (param_3 != 0) {
    local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
    local_118 = param_2;
    cVar7 = FUN_142235f50(param_3);
    if (cVar7 == '\0') {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      FUN_140749cd0(param_3,local_110,0);
      local_128 = 0;
      if (0 < (int)param_2[1]) {
        local_120 = 0;
        do {
          uVar13 = 0;
          lVar4 = *(longlong *)(local_120 + *param_2);
          uVar15 = uVar13;
          if (0 < (int)local_48) {
            do {
              iVar12 = 0;
              puVar9 = local_110;
              if (local_50 != (undefined1 *)0x0) {
                puVar9 = local_50;
              }
              plVar5 = *(longlong **)(puVar9 + uVar15);
              if ((*(byte *)(plVar5 + 0x17) & 1) != 0) {
                lVar10 = FUN_1429f11d0();
                if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                    lVar10 + 0x88)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) {
                  iVar8 = (**(code **)(*plVar5 + 0x6c8))(plVar5);
                  if (0 < iVar8) {
                    do {
                      lVar10 = (**(code **)(*plVar5 + 0x560))(plVar5,iVar12);
                      if (lVar10 != 0) {
                        if (lVar10 != lVar4) {
                          lVar11 = FUN_1429ba110();
                          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) <
                               *(int *)(lVar11 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if ((!bVar6) || (*(longlong *)(lVar10 + 0x90) != lVar4))
                          goto LAB_1424e4412;
                        }
                        iVar3 = (int)param_1[1];
                        *(int *)(param_1 + 1) = iVar3 + 1;
                        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                          ::ResizeGrow(param_1,iVar3);
                        }
                        plVar1 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
                        if (plVar1 != (longlong *)0x0) {
                          *plVar1 = (longlong)plVar5;
                          plVar1[1] = 0;
                          *(int *)(plVar1 + 2) = iVar12;
                        }
                      }
LAB_1424e4412:
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < iVar8);
                  }
                }
                else {
                  lVar10 = FUN_142923000();
                  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                      lVar10 + 0x88)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if ((bVar6) && (iVar8 = (**(code **)(*plVar5 + 0x6c8))(plVar5), 0 < iVar8)) {
                    do {
                      lVar10 = (**(code **)(*plVar5 + 0x560))(plVar5,iVar12);
                      if (lVar10 != 0) {
                        if (lVar10 != lVar4) {
                          lVar11 = FUN_1429ba110();
                          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) <
                               *(int *)(lVar11 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if ((!bVar6) || (*(longlong *)(lVar10 + 0x90) != lVar4))
                          goto LAB_1424e4507;
                        }
                        iVar3 = (int)param_1[1];
                        *(int *)(param_1 + 1) = iVar3 + 1;
                        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                          ::ResizeGrow(param_1,iVar3);
                        }
                        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x18);
                        if (puVar2 != (undefined8 *)0x0) {
                          *puVar2 = 0;
                          puVar2[1] = plVar5;
                          *(int *)(puVar2 + 2) = iVar12;
                        }
                      }
LAB_1424e4507:
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < iVar8);
                  }
                }
              }
              uVar14 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar14;
              param_2 = local_118;
              uVar15 = uVar15 + 8;
            } while ((int)uVar14 < (int)local_48);
          }
          local_128 = local_128 + 1;
          local_120 = local_120 + 8;
        } while (local_128 < (int)param_2[1]);
      }
      if (local_50 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1424e45b0 FUN_1424e45b0 body=438 status=ok
// SIG undefined FUN_1424e45b0(void)

void FUN_1424e45b0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (((param_2 != 0) && (param_1[0x8b] != 0)) && (0 < (int)param_1[0x94])) {
    uVar4 = (**(code **)(*param_1 + 0x148))();
    cVar3 = UWorld::IsGameWorld(uVar4);
    if (cVar3 != '\0') {
      lVar5 = param_1[0x8b];
      uVar9 = 0;
      if (0 < *(int *)(lVar5 + 0x38)) {
        plVar1 = param_1 + 0x93;
        uVar11 = uVar9;
        do {
          iVar8 = 0;
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + uVar11);
          if (lVar5 != 0) {
            lVar6 = UInterpGroupDirector::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              if (0 < (int)param_1[0x94]) {
                plVar7 = (longlong *)*plVar1;
                do {
                  if ((*(longlong *)(*plVar7 + 0x28) == lVar5) &&
                     (*(longlong *)(*plVar7 + 0x30) == param_2)) goto LAB_1424e4729;
                  iVar8 = iVar8 + 1;
                  plVar7 = plVar7 + 1;
                } while (iVar8 < (int)param_1[0x94]);
              }
              cVar3 = FUN_1424fd940(param_1,param_2);
              if (cVar3 != '\0') {
                plVar7 = (longlong *)NewObject<UInterpGroupInstDirector>(param_1,0,8,0,0,0);
                iVar8 = (int)param_1[0x94];
                *(int *)(param_1 + 0x94) = iVar8 + 1;
                if (*(int *)((longlong)param_1 + 0x4a4) < iVar8 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
                }
                *(longlong **)(*plVar1 + (longlong)iVar8 * 8) = plVar7;
                (**(code **)(*plVar7 + 0x298))(plVar7,lVar5,param_2);
              }
            }
          }
LAB_1424e4729:
          lVar5 = param_1[0x8b];
          uVar10 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar10;
          uVar11 = uVar11 + 8;
        } while ((int)uVar10 < *(int *)(lVar5 + 0x38));
      }
    }
  }
  return;
}



// FUNCTION 1424e4770 AddPoint body=220 status=ok
// SIG undefined AddPoint(void)

uint FInterpCurve<FLinearColor>::AddPoint(longlong *param_1,float param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar2 = (int)param_1[1];
  uVar6 = 0;
  uVar8 = 0;
  if (0 < iVar2) {
    pfVar5 = (float *)*param_1;
    uVar9 = uVar6;
    do {
      uVar8 = (uint)uVar9;
      if (param_2 < *pfVar5 || param_2 == *pfVar5) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 0xe;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar2);
  }
  lVar7 = (longlong)(int)uVar8 * 0x38;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar7 + 0x38),(void *)(*param_1 + lVar7),
             (longlong)(int)(iVar2 - uVar8) * 0x38);
  lVar3 = *param_1;
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)(lVar7 + 4 + lVar3);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  *(float *)(lVar7 + lVar3) = param_2;
  puVar1 = (undefined8 *)(lVar7 + 0x14 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar7 + 0x24 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar7 + 0x34 + lVar3) = 0;
  return uVar8;
}



// FUNCTION 1424e4850 AddPoint body=185 status=ok
// SIG undefined AddPoint(void)

uint FInterpLookupTrack::AddPoint(longlong *param_1,float param_2,undefined8 *param_3)

{
  int iVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_1[1];
  uVar3 = 0;
  uVar5 = 0;
  if (0 < iVar1) {
    pfVar2 = (float *)(*param_1 + 8);
    uVar6 = uVar3;
    do {
      uVar5 = (uint)uVar6;
      if (param_2 < *pfVar2 || param_2 == *pfVar2) break;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 4;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar4 = (longlong)(int)uVar5 * 0x10;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
             (longlong)(int)(iVar1 - uVar5) << 4);
  *(float *)(lVar4 + 8 + *param_1) = param_2;
  *(undefined8 *)(lVar4 + *param_1) = *param_3;
  return uVar5;
}



// FUNCTION 1424e4910 FUN_1424e4910 body=192 status=ok
// SIG undefined FUN_1424e4910(void)

void FUN_1424e4910(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x478);
  uVar3 = 0;
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 0x470);
    uVar4 = uVar3;
    do {
      if (*plVar2 == param_2) {
        return;
      }
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)uVar4 < (longlong)iVar1);
    if (0 < iVar1) {
      plVar2 = *(longlong **)(param_1 + 0x470);
      uVar4 = uVar3;
      do {
        if (*plVar2 == 0) {
          (*(longlong **)(param_1 + 0x470))[(int)uVar4] = param_2;
          return;
        }
        uVar4 = (ulonglong)((int)uVar4 + 1);
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 1;
      } while ((longlong)uVar3 < (longlong)iVar1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x478);
  *(int *)(param_1 + 0x478) = iVar1 + 1;
  if (*(int *)(param_1 + 0x47c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x470,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x470) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1424e49d0 AddReferencedObjects body=100 status=ok
// SIG undefined AddReferencedObjects(void)

void FStringTableEngineBridge::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0,0);
                    /* WARNING: Could not recover jumptable at 0x0001424e4a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 1424e4a40 AddReferencedObjects body=65 status=ok
// SIG undefined AddReferencedObjects(void)

void HModel::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x20,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001424e4a7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x28,0,0);
  return;
}



// FUNCTION 1424e4a90 FUN_1424e4a90 body=186 status=ok
// SIG undefined FUN_1424e4a90(void)

void FUN_1424e4a90(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_142222f50();
  lVar2 = *(longlong *)(param_1 + 0x458);
  if ((lVar2 != 0) && (iVar4 = 0, 0 < *(int *)(lVar2 + 0x38))) {
    lVar6 = 0;
    do {
      iVar5 = 0;
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(lVar2 + 0x30));
      if (0 < *(int *)(lVar2 + 0x38)) {
        lVar3 = 0;
        do {
          plVar1 = *(longlong **)(lVar3 + *(longlong *)(lVar2 + 0x30));
          (**(code **)(*plVar1 + 0x368))(plVar1,param_2,param_3);
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar5 < *(int *)(lVar2 + 0x38));
      }
      lVar2 = *(longlong *)(param_1 + 0x458);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x38));
  }
  return;
}



// FUNCTION 1424e4c70 AutoSetTangents body=777 status=ok
// SIG undefined AutoSetTangents(void)

void FInterpCurve<FLinearColor>::AutoSetTangents(longlong *param_1,float param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar2 = (int)param_1[1];
  iVar8 = iVar2 + -1;
  if (0 < iVar2) {
    lVar11 = 0;
    lVar9 = (longlong)iVar8;
    iVar4 = 0;
    do {
      if (lVar11 == 0) {
        iVar6 = 0;
        if ((char)param_1[2] != '\0') {
          iVar6 = iVar8;
        }
      }
      else {
        iVar6 = iVar4 + -1;
      }
      iVar12 = iVar4 + 1;
      if ((lVar11 == lVar9) && (iVar12 = iVar8, (char)param_1[2] != '\0')) {
        iVar12 = 0;
      }
      lVar3 = *param_1;
      pfVar10 = (float *)((longlong)iVar6 * 0x38 + lVar3);
      pfVar7 = (float *)(lVar11 * 0x38 + lVar3);
      pfVar13 = (float *)((longlong)iVar12 * 0x38 + lVar3);
      cVar1 = *(char *)(pfVar7 + 0xd);
      if ((cVar1 - 1U & 0xfb) == 0) {
        if ((param_3 == '\0') ||
           ((lVar11 != 0 && ((lVar11 != lVar9 || ((char)param_1[2] != '\0')))))) {
          if ((*(char *)(pfVar10 + 0xd) == '\x01') || ((byte)(*(char *)(pfVar10 + 0xd) - 3U) < 3)) {
            if (((char)param_1[2] == '\0') || (lVar11 != 0)) {
              fVar15 = *pfVar10;
            }
            else {
              fVar15 = *pfVar7 - *(float *)((longlong)param_1 + 0x14);
            }
            if (((char)param_1[2] == '\0') || (lVar11 != lVar9)) {
              fVar14 = *pfVar13;
            }
            else {
              fVar14 = *(float *)((longlong)param_1 + 0x14) + *pfVar7;
            }
            fVar16 = fVar14 - fVar15;
            if (fVar14 - fVar15 <= 0.0001) {
              fVar16 = 0.0001;
            }
            fVar17 = 1.0 - param_2;
            fVar16 = 1.0 / fVar16;
            fVar18 = ((pfVar13[1] - pfVar7[1]) + (pfVar7[1] - pfVar10[1])) * fVar17 * fVar16;
            fVar14 = ((pfVar7[2] - pfVar10[2]) + (pfVar13[2] - pfVar7[2])) * fVar17 * fVar16;
            fVar15 = ((pfVar7[3] - pfVar10[3]) + (pfVar13[3] - pfVar7[3])) * fVar17 * fVar16;
            fVar16 = ((pfVar7[4] - pfVar10[4]) + (pfVar13[4] - pfVar7[4])) * fVar17 * fVar16;
            pfVar7[5] = fVar18;
            pfVar7[6] = fVar14;
            pfVar7[7] = fVar15;
            pfVar7[8] = fVar16;
            pfVar7[9] = fVar18;
            pfVar7[10] = fVar14;
            pfVar7[0xb] = fVar15;
            pfVar7[0xc] = fVar16;
          }
          else {
            uVar5 = *(undefined8 *)(pfVar10 + 7);
            *(undefined8 *)(pfVar7 + 5) = *(undefined8 *)(pfVar10 + 5);
            *(undefined8 *)(pfVar7 + 7) = uVar5;
            fVar15 = pfVar10[10];
            fVar14 = pfVar10[0xb];
            fVar16 = pfVar10[0xc];
            pfVar7[9] = pfVar10[9];
            pfVar7[10] = fVar15;
            pfVar7[0xb] = fVar14;
            pfVar7[0xc] = fVar16;
          }
        }
        else {
          pfVar7[5] = 0.0;
          pfVar7[6] = 0.0;
          pfVar7[7] = 0.0;
          pfVar7[8] = 0.0;
          pfVar7[9] = 0.0;
          pfVar7[10] = 0.0;
          pfVar7[0xb] = 0.0;
          pfVar7[0xc] = 0.0;
        }
      }
      else if (cVar1 == '\0') {
        fVar15 = pfVar13[1];
        fVar14 = pfVar13[2];
        fVar16 = pfVar13[3];
        fVar17 = pfVar13[4];
        pfVar7[5] = fVar15 - pfVar7[1];
        pfVar7[6] = fVar14 - pfVar7[2];
        pfVar7[7] = fVar16 - pfVar7[3];
        pfVar7[8] = fVar17 - pfVar7[4];
        pfVar7[9] = fVar15 - pfVar7[1];
        pfVar7[10] = fVar14 - pfVar7[2];
        pfVar7[0xb] = fVar16 - pfVar7[3];
        pfVar7[0xc] = fVar17 - pfVar7[4];
      }
      else if (cVar1 == '\x02') {
        pfVar7[5] = 0.0;
        pfVar7[6] = 0.0;
        pfVar7[7] = 0.0;
        pfVar7[8] = 0.0;
        pfVar7[9] = 0.0;
        pfVar7[10] = 0.0;
        pfVar7[0xb] = 0.0;
        pfVar7[0xc] = 0.0;
      }
      lVar11 = lVar11 + 1;
      iVar4 = iVar4 + 1;
    } while (lVar11 < iVar2);
  }
  return;
}



// FUNCTION 1424e4f80 FUN_1424e4f80 body=27 status=ok
// SIG undefined FUN_1424e4f80(void)

void FUN_1424e4f80(undefined8 param_1)

{
  FUN_142502580();
  FUN_1423c9690(param_1);
  return;
}



// FUNCTION 1424e4fa0 FUN_1424e4fa0 body=47 status=ok
// SIG undefined FUN_1424e4fa0(void)

void FUN_1424e4fa0(longlong *param_1)

{
  FUN_142223710();
  if ((*(byte *)((longlong)param_1 + 0x46c) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001424e4fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6f0))(param_1);
    return;
  }
  return;
}



// FUNCTION 1424e4fd0 FUN_1424e4fd0 body=339 status=ok
// SIG undefined FUN_1424e4fd0(void)

void FUN_1424e4fd0(longlong param_1,undefined8 param_2)

{
  FUN_142567d90();
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"InstancingFadeOutParams",0);
  FShaderParameter::Bind(param_1 + 0x16,param_2,L"InstancingViewZCompareZero",0);
  FShaderParameter::Bind(param_1 + 0x1c,param_2,L"InstancingViewZCompareOne",0);
  FShaderParameter::Bind(param_1 + 0x22,param_2,L"InstancingViewZConstant",0);
  FShaderParameter::Bind(param_1 + 0x28,param_2,L"InstancingWorldViewOriginZero",0);
  FShaderParameter::Bind(param_1 + 0x2e,param_2,L"InstancingWorldViewOriginOne",0);
  FShaderParameter::Bind(param_1 + 0x34,param_2,L"CPUInstanceOrigin",0);
  FShaderParameter::Bind(param_1 + 0x3a,param_2,L"CPUInstanceTransform",0);
  FShaderParameter::Bind(param_1 + 0x40,param_2,L"CPUInstanceLightmapAndShadowMapBias",0);
  FShaderResourceParameter::Bind(param_1 + 0x46,param_2,L"VertexFetch_IndexBuffer",0);
  FShaderResourceParameter::Bind(param_1 + 0x4a,param_2,L"VertexFetch_PositionBuffer",0);
  FShaderResourceParameter::Bind(param_1 + 0x4e,param_2,L"VertexFetch_InstanceOriginBuffer",0);
  FShaderResourceParameter::Bind(param_1 + 0x52,param_2,L"VertexFetch_InstanceTransformBuffer",0);
  FShaderResourceParameter::Bind(param_1 + 0x56,param_2,L"VertexFetch_InstanceLightmapBuffer",0);
  return;
}



// FUNCTION 1424e5130 FUN_1424e5130 body=232 status=ok
// SIG undefined FUN_1424e5130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424e5130(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afc438) && (_Init_thread_header(&DAT_146afc438), DAT_146afc438 == -1))
  {
    DAT_146afc408 = UInputActionDelegateBinding::GetPrivateStaticClass();
    DAT_146afc410 = UInputAxisDelegateBinding::GetPrivateStaticClass();
    _DAT_146afc418 = UInputKeyDelegateBinding::GetPrivateStaticClass();
    _DAT_146afc420 = UInputTouchDelegateBinding::GetPrivateStaticClass();
    _DAT_146afc428 = UInputAxisKeyDelegateBinding::GetPrivateStaticClass();
    _DAT_146afc430 = UInputVectorAxisDelegateBinding::GetPrivateStaticClass();
    _Init_thread_footer(&DAT_146afc438);
  }
  if (param_1 != 0) {
    FUN_1424e5130(*(undefined8 *)(param_1 + 0x30),param_2);
    uVar1 = 0;
    puVar2 = &DAT_146afc408;
    do {
      FUN_1422f1ac0(param_1,*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < 6);
  }
  return;
}



// FUNCTION 1424e5220 FUN_1424e5220 body=611 status=ok
// SIG undefined FUN_1424e5220(void)

void FUN_1424e5220(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_res18;
  ulonglong local_98;
  uint local_90;
  uint local_8c;
  byte local_88;
  byte local_87;
  byte local_86;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  
  uVar6 = 0;
  local_98 = 0;
  local_8c = 0;
  uVar12 = uVar6;
  uVar13 = uVar6;
  if (0 < *(int *)(param_1 + 0x30)) {
    local_res18 = 0;
    uVar9 = uVar6;
    do {
      puVar7 = (uint *)(*(longlong *)(param_1 + 0x28) + local_res18);
      local_88 = local_88 & 0xfd | 1;
      local_86 = (byte)puVar7[4];
      local_80 = *(longlong *)(puVar7 + 2);
      local_87 = local_87 & 0xfe;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      FWeakObjectPtr::operator=(local_58,0);
      local_50 = 0;
      bVar4 = local_88 ^ ((byte)*puVar7 ^ local_88) & 1;
      local_88 = ((char)(*puVar7 >> 1) * '\x02' ^ bVar4) & 2 ^ bVar4;
      uVar2 = *(undefined8 *)(puVar7 + 6);
      local_48 = 3;
      FWeakObjectPtr::operator=(local_58,*(undefined8 *)(param_2 + 0x118));
      local_50 = uVar2;
      if (((*puVar7 & 4) != 0) && (iVar5 = *(int *)(param_2 + 0x1e0) + -1, -1 < iVar5)) {
        lVar8 = (longlong)iVar5 << 4;
        do {
          lVar3 = *(longlong *)(lVar8 + *(longlong *)(param_2 + 0x1d8));
          if ((*(longlong *)(lVar3 + 8) == local_80) && (*(byte *)(lVar3 + 2) == local_86)) {
            FUN_1423747d0(param_2,iVar5);
          }
          lVar8 = lVar8 + -0x10;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      iVar5 = (int)uVar12;
      local_90 = iVar5 + 1;
      if ((int)uVar6 < (int)local_90) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_98,uVar12);
        uVar6 = (ulonglong)local_8c;
        uVar13 = local_98;
      }
      uVar11 = local_90;
      uVar12 = (ulonglong)local_90;
      *(byte *)(uVar13 + (longlong)iVar5 * 0x48) = local_88;
      lVar8 = (longlong)iVar5 * 9 + 2;
      pbVar1 = (byte *)((uVar13 - 0xf) + lVar8 * 8);
      *pbVar1 = *pbVar1 ^ (local_87 ^ *(byte *)((uVar13 - 0xf) + lVar8 * 8)) & 1;
      *(byte *)((uVar13 - 0xe) + lVar8 * 8) = local_86;
      *(longlong *)((uVar13 - 8) + lVar8 * 8) = local_80;
      FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(uVar13 + lVar8 * 8,&local_78);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
      local_res18 = local_res18 + 0x20;
    } while ((int)uVar10 < *(int *)(param_1 + 0x30));
    uVar6 = uVar13;
    uVar9 = uVar12;
    if (0 < (int)uVar11) {
      do {
        FUN_142360eb0(param_2,uVar6);
        uVar9 = uVar9 - 1;
        uVar6 = uVar6 + 0x48;
      } while (uVar9 != 0);
    }
  }
  if ((int)uVar12 != 0) {
    lVar8 = uVar13 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar8 + 0x10);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar8);
      lVar8 = lVar8 + 0x48;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 != 0);
  }
  if (uVar13 != 0) {
    FMemory::Free(uVar13);
  }
  return;
}



// FUNCTION 1424e5490 FUN_1424e5490 body=1005 status=ok
// SIG undefined FUN_1424e5490(void)

void FUN_1424e5490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int local_res18;
  uint local_res20;
  longlong local_a0;
  longlong local_98;
  uint local_90;
  int local_8c;
  byte local_88;
  longlong local_80;
  longlong *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar13 = 0;
  local_98 = 0;
  local_res20 = 0;
  local_8c = 0;
  local_res18 = 0;
  lVar14 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    local_a0 = 0;
    do {
      lVar14 = *(longlong *)(param_1 + 0x28);
      bVar5 = false;
      if (*(longlong *)(lVar14 + 0x10 + local_a0) == 0) {
        lVar9 = *(longlong *)(param_2 + 0x198);
        lVar10 = (longlong)*(int *)(param_2 + 0x1a0) * 0x38 + lVar9;
        for (; bVar5 = false, lVar9 != lVar10; lVar9 = lVar9 + 0x38) {
          if ((*(longlong *)(lVar14 + 8 + local_a0) == *(longlong *)(lVar9 + 8)) &&
             ((((*(int *)(lVar9 + 0x18) == 0 || (*(longlong **)(lVar9 + 0x10) == (longlong *)0x0))
               || (cVar6 = (**(code **)(**(longlong **)(lVar9 + 0x10) + 0x18))(), cVar6 == '\0')) &&
              (((int)*(undefined8 *)(lVar9 + 0x28) == 0 &&
               ((int)((ulonglong)*(undefined8 *)(lVar9 + 0x28) >> 0x20) == 0)))))) {
            bVar5 = true;
            break;
          }
        }
      }
      lVar9 = local_98;
      if (!bVar5) {
        local_78 = (longlong *)0x0;
        local_88 = local_88 & 0xfd | 1;
        local_70 = 0;
        local_80 = *(longlong *)(lVar14 + 8 + local_a0);
        FWeakObjectPtr::operator=(&local_68,0);
        uVar2 = *(undefined8 *)(lVar14 + 0x10 + local_a0);
        local_60 = 0;
        local_58 = 0;
        local_88 = ((byte)(*(uint *)(lVar14 + local_a0) >> 1) & 1) * '\x02' |
                   (byte)*(uint *)(lVar14 + local_a0) & 1 | local_88 & 0xfc;
        if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
          (**(code **)(*local_78 + 0x28))(local_78,0);
          if (local_78 != (longlong *)0x0) {
            local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
          }
          local_70 = 0;
        }
        FWeakObjectPtr::operator=(&local_68);
        uVar12 = uVar13;
        local_60 = uVar2;
        if ((*(byte *)(lVar14 + local_a0) & 4) != 0) {
          iVar15 = *(int *)(param_2 + 0x1a0) + -1;
          if (-1 < iVar15) {
            plVar1 = (longlong *)(param_2 + 0x198);
            lVar9 = (longlong)iVar15 * 0x38;
            lVar10 = (longlong)*(int *)(param_2 + 0x1a0) * 0x38;
            lVar14 = lVar9;
            do {
              lVar3 = *plVar1;
              if ((*(longlong *)(lVar9 + 8 + lVar3) == local_80) &&
                 ((((*(int *)(lVar9 + 0x18 + lVar3) != 0 &&
                    (plVar4 = *(longlong **)(lVar9 + 0x10 + lVar3), plVar4 != (longlong *)0x0)) &&
                   (cVar6 = (**(code **)(*plVar4 + 0x18))(), cVar6 != '\0')) ||
                  ((uVar2 = *(undefined8 *)(lVar9 + 0x28 + lVar3), (int)uVar2 != 0 ||
                   ((int)((ulonglong)uVar2 >> 0x20) != 0)))))) {
                TBaseDelegate<FText>::~TBaseDelegate<FText>(*plVar1 + 0x10 + lVar14);
                iVar8 = *(int *)(param_2 + 0x1a0);
                iVar7 = (iVar8 - iVar15) + -1;
                if (iVar7 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar1 + lVar14),(void *)(*plVar1 + lVar10),
                             (longlong)iVar7 * 0x38);
                  iVar8 = *(int *)(param_2 + 0x1a0);
                }
                *(int *)(param_2 + 0x1a0) = iVar8 + -1;
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
                ResizeShrink(plVar1);
              }
              lVar10 = lVar10 + -0x38;
              lVar14 = lVar14 + -0x38;
              lVar9 = lVar9 + -0x38;
              iVar15 = iVar15 + -1;
              uVar12 = local_res20;
            } while (-1 < iVar15);
          }
        }
        local_90 = uVar12 + 1;
        if (local_8c < (int)local_90) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_98);
        }
        uVar13 = local_90;
        lVar9 = local_98;
        pbVar11 = (byte *)((longlong)(int)uVar12 * 0x38 + local_98);
        *pbVar11 = local_88;
        *(longlong *)(pbVar11 + 8) = local_80;
        *(longlong **)(pbVar11 + 0x10) = (longlong *)0x0;
        pbVar11[0x18] = 0;
        pbVar11[0x19] = 0;
        pbVar11[0x1a] = 0;
        pbVar11[0x1b] = 0;
        if (((&local_78 != (longlong **)(pbVar11 + 0x10)) && (local_70 != 0)) &&
           (local_78 != (longlong *)0x0)) {
          (**(code **)(*local_78 + 0x30))();
        }
        *(undefined4 *)(pbVar11 + 0x20) = local_68;
        *(undefined4 *)(pbVar11 + 0x24) = local_64;
        *(undefined8 *)(pbVar11 + 0x28) = local_60;
        *(undefined4 *)(pbVar11 + 0x30) = local_58;
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
        local_res20 = uVar13;
      }
      local_res18 = local_res18 + 1;
      local_a0 = local_a0 + 0x18;
    } while (local_res18 < *(int *)(param_1 + 0x30));
    lVar14 = lVar9;
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      do {
        iVar15 = *(int *)(param_2 + 0x1a0);
        *(int *)(param_2 + 0x1a0) = iVar15 + 1;
        if (*(int *)(param_2 + 0x1a4) < iVar15 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2 + 0x198,iVar15);
        }
        FInputAxisBinding::FInputAxisBinding
                  ((longlong)iVar15 * 0x38 + *(longlong *)(param_2 + 0x198),lVar9);
        lVar9 = lVar9 + 0x38;
        uVar16 = uVar16 - 1;
        lVar14 = local_98;
      } while (uVar16 != 0);
    }
  }
  if (uVar13 != 0) {
    lVar9 = lVar14 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar9);
      lVar9 = lVar9 + 0x38;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (lVar14 != 0) {
    FMemory::Free(lVar14);
  }
  return;
}



// FUNCTION 1424e5890 FUN_1424e5890 body=932 status=ok
// SIG undefined FUN_1424e5890(void)

void FUN_1424e5890(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  byte *pbVar11;
  longlong **pplVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong local_78;
  undefined8 local_70;
  byte local_68;
  undefined4 local_64;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  uVar15 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar16 = uVar15;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      lVar13 = *(longlong *)(param_1 + 0x28);
      plVar14 = *(longlong **)(uVar15 + 0x18 + lVar13);
      local_60 = *(longlong *)(uVar15 + 8 + lVar13);
      local_58 = *(undefined8 *)(uVar15 + 0x10 + lVar13);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_64 = 0;
      local_68 = local_68 & 0xfd | 1;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_48 = (longlong *)0x0;
      local_40 = 0;
      local_50 = plVar14;
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FKey::IsFloatAxis(&local_60);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar14 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      uVar4 = *(undefined8 *)(param_2 + 0x118);
      bVar9 = local_68 ^ (*(byte *)(uVar15 + lVar13) ^ local_68) & 1;
      local_68 = ((char)(*(uint *)(uVar15 + lVar13) >> 1) * '\x02' ^ bVar9) & 2 ^ bVar9;
      uVar5 = *(undefined8 *)(uVar15 + 0x20 + lVar13);
      if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
        (**(code **)(*local_48 + 0x28))(local_48,0);
        if (local_48 != (longlong *)0x0) {
          local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
        }
        local_40 = 0;
      }
      FWeakObjectPtr::operator=(&local_38,uVar4);
      local_30 = uVar5;
      if (((*(byte *)(uVar15 + lVar13) & 4) != 0) &&
         (iVar10 = *(int *)(param_2 + 0x1b0) + -1, -1 < iVar10)) {
        lVar13 = (longlong)iVar10 << 6;
        do {
          if (*(longlong *)(lVar13 + 8 + *(longlong *)(param_2 + 0x1a8)) == local_60) {
            TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_2 + 0x1a8,iVar10,1,1);
          }
          lVar13 = lVar13 + -0x40;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
      uVar8 = local_70;
      lVar13 = (longlong)(int)local_70;
      iVar10 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar10);
      if (local_70._4_4_ < iVar10) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_78,uVar8 & 0xffffffff);
      }
      pbVar11 = (byte *)(lVar13 * 0x40 + local_78);
      *pbVar11 = local_68;
      *(undefined4 *)(pbVar11 + 4) = local_64;
      *(longlong *)(pbVar11 + 8) = local_60;
      *(undefined8 *)(pbVar11 + 0x10) = local_58;
      *(longlong **)(pbVar11 + 0x18) = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      pplVar12 = (longlong **)(pbVar11 + 0x20);
      *pplVar12 = (longlong *)0x0;
      pbVar11[0x28] = 0;
      pbVar11[0x29] = 0;
      pbVar11[0x2a] = 0;
      pbVar11[0x2b] = 0;
      if (((&local_48 != pplVar12) && (local_40 != 0)) && (local_48 != (longlong *)0x0)) {
        (**(code **)(*local_48 + 0x30))(local_48,pplVar12);
      }
      *(undefined4 *)(pbVar11 + 0x30) = local_38;
      *(undefined4 *)(pbVar11 + 0x34) = local_34;
      *(undefined8 *)(pbVar11 + 0x38) = local_30;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
      plVar14 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_50 + 1;
        lVar13 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      uVar17 = (int)uVar16 + 1;
      uVar15 = uVar15 + 0x28;
      uVar16 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)(param_1 + 0x30));
    if (0 < (int)local_70) {
      uVar16 = local_70 & 0xffffffff;
      lVar13 = local_78;
      do {
        iVar10 = *(int *)(param_2 + 0x1b0);
        *(int *)(param_2 + 0x1b0) = iVar10 + 1;
        if (*(int *)(param_2 + 0x1b4) < iVar10 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2 + 0x1a8,iVar10);
        }
        FUN_1424deae0((longlong)iVar10 * 0x40 + *(longlong *)(param_2 + 0x1a8),lVar13);
        lVar13 = lVar13 + 0x40;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if ((int)local_70 != 0) {
    plVar14 = (longlong *)(local_78 + 0x18);
    iVar10 = (int)local_70;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar14 + 1);
      plVar6 = (longlong *)*plVar14;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      plVar14 = plVar14 + 8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424e5c40 FUN_1424e5c40 body=1180 status=ok
// SIG undefined FUN_1424e5c40(void)

void FUN_1424e5c40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_b8;
  undefined8 local_b0;
  byte local_a8;
  byte local_a7;
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  longlong *local_80;
  int local_78;
  longlong *local_70;
  int local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  
  uVar16 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uVar17 = uVar16;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      puVar13 = (uint *)(*(longlong *)(param_1 + 0x28) + uVar17);
      plVar5 = *(longlong **)(puVar13 + 6);
      local_a0 = *(longlong *)(puVar13 + 2);
      local_98 = *(undefined8 *)(puVar13 + 4);
      local_a7 = (byte)puVar13[10];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      uVar11 = puVar13[8];
      local_a8 = local_a8 & 0xfd | 1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_80 = (longlong *)0x0;
      local_78 = 0;
      local_88 = local_88 ^ (uVar11 ^ local_88) & 0xf;
      local_70 = (longlong *)0x0;
      local_68 = 0;
      local_90 = plVar5;
      local_48 = local_a0;
      local_40 = local_98;
      local_38 = plVar5;
      FWeakObjectPtr::operator=(local_60,0);
      local_58 = 0;
      local_50 = '\0';
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      uVar6 = *(undefined8 *)(param_2 + 0x118);
      bVar10 = local_a8 ^ ((byte)*puVar13 ^ local_a8) & 1;
      local_a8 = ((char)(*puVar13 >> 1) * '\x02' ^ bVar10) & 2 ^ bVar10;
      uVar7 = *(undefined8 *)(puVar13 + 0xc);
      if (local_50 == '\x01') {
        if ((local_78 != 0) && (local_80 != (longlong *)0x0)) {
          (**(code **)(*local_80 + 0x28))(local_80,0);
          if (local_80 != (longlong *)0x0) {
            local_80 = (longlong *)FMemory::Realloc(local_80,0,0);
          }
          local_78 = 0;
        }
      }
      else if (local_50 == '\x02') {
        if ((local_68 != 0) && (local_70 != (longlong *)0x0)) {
          (**(code **)(*local_70 + 0x28))(local_70,0);
          if (local_70 != (longlong *)0x0) {
            local_70 = (longlong *)FMemory::Realloc(local_70,0,0);
          }
          local_68 = 0;
        }
      }
      else if (local_50 == '\x03') {
        FWeakObjectPtr::operator=(local_60,0);
        local_58 = 0;
      }
      local_50 = 3;
      FWeakObjectPtr::operator=(local_60,uVar6);
      local_58 = uVar7;
      if (((*puVar13 & 4) != 0) && (iVar12 = *(int *)(param_2 + 0x180) + -1, -1 < iVar12)) {
        lVar14 = (longlong)iVar12 * 0x60;
        uVar11 = local_88;
        do {
          lVar8 = *(longlong *)(param_2 + 0x178);
          if ((((*(longlong *)(lVar8 + 8 + lVar14) == local_a0) &&
               (uVar4 = *(uint *)(lVar8 + 0x20 + lVar14), ((uVar4 ^ uVar11) & 1) == 0)) &&
              (((uVar4 ^ uVar11) & 2) == 0)) &&
             (((((uVar4 ^ uVar11) & 4) == 0 && (((uVar4 ^ uVar11) & 8) == 0)) &&
              (*(byte *)(lVar8 + 1 + lVar14) == local_a7)))) {
            FUN_142502ac0(param_2 + 0x178,iVar12,1,1);
            uVar11 = local_88;
          }
          lVar14 = lVar14 + -0x60;
          iVar12 = iVar12 + -1;
        } while (-1 < iVar12);
      }
      uVar9 = local_b0;
      lVar14 = (longlong)(int)local_b0;
      iVar12 = (int)local_b0 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,iVar12);
      if (local_b0._4_4_ < iVar12) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                  (&local_b8,uVar9 & 0xffffffff);
      }
      pbVar15 = (byte *)(lVar14 * 0x60 + local_b8);
      *pbVar15 = local_a8;
      pbVar15[1] = local_a7;
      *(longlong *)(pbVar15 + 8) = local_a0;
      *(undefined8 *)(pbVar15 + 0x10) = local_98;
      *(longlong **)(pbVar15 + 0x18) = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      *(uint *)(pbVar15 + 0x20) =
           *(uint *)(pbVar15 + 0x20) ^ (*(uint *)(pbVar15 + 0x20) ^ local_88) & 1;
      uVar11 = (local_88 ^ *(uint *)(pbVar15 + 0x20)) & 2 ^ *(uint *)(pbVar15 + 0x20);
      *(uint *)(pbVar15 + 0x20) = uVar11;
      uVar11 = (uVar11 ^ local_88) & 4 ^ uVar11;
      *(uint *)(pbVar15 + 0x20) = uVar11;
      *(uint *)(pbVar15 + 0x20) = (uVar11 ^ local_88) & 8 ^ uVar11;
      FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(pbVar15 + 0x28,&local_80);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_70);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_80);
      plVar5 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      uVar11 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar11;
      uVar17 = uVar17 + 0x38;
    } while ((int)uVar11 < *(int *)(param_1 + 0x30));
    if (0 < (int)local_b0) {
      uVar17 = local_b0 & 0xffffffff;
      lVar14 = local_b8;
      do {
        iVar12 = *(int *)(param_2 + 0x180);
        *(int *)(param_2 + 0x180) = iVar12 + 1;
        if (*(int *)(param_2 + 0x184) < iVar12 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2 + 0x178,iVar12);
        }
        FUN_140aec850((longlong)iVar12 * 0x60 + *(longlong *)(param_2 + 0x178),lVar14);
        lVar14 = lVar14 + 0x60;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if ((int)local_b0 != 0) {
    lVar14 = local_b8 + 0x28;
    iVar12 = (int)local_b0;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar14 + 0x10);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar14);
      plVar5 = *(longlong **)(lVar14 + -0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      lVar14 = lVar14 + 0x60;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424e60e0 FUN_1424e60e0 body=775 status=ok
// SIG undefined FUN_1424e60e0(void)

void FUN_1424e60e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint local_res18;
  longlong local_res20;
  ulonglong local_88;
  uint local_80;
  int local_7c;
  byte local_78;
  byte local_77;
  longlong *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  
  uVar8 = 0;
  local_88 = 0;
  local_7c = 0;
  local_res18 = 0;
  uVar13 = uVar8;
  if (0 < *(int *)(param_1 + 0x30)) {
    local_res20 = 0;
    uVar10 = uVar8;
    do {
      puVar11 = (uint *)(*(longlong *)(param_1 + 0x28) + local_res20);
      local_78 = local_78 & 0xfd | 1;
      local_77 = (byte)puVar11[1];
      local_70 = (longlong *)0x0;
      local_68 = 0;
      FWeakObjectPtr::operator=(&local_60,0);
      local_58 = (longlong *)0x0;
      bVar4 = local_78 ^ ((byte)*puVar11 ^ local_78) & 1;
      local_78 = ((char)(*puVar11 >> 1) * '\x02' ^ bVar4) & 2 ^ bVar4;
      plVar1 = *(longlong **)(puVar11 + 2);
      if ((local_68 != 0) && (local_70 != (longlong *)0x0)) {
        (**(code **)(*local_70 + 0x28))(local_70,0);
        if (local_70 != (longlong *)0x0) {
          local_70 = (longlong *)FMemory::Realloc(local_70,0,0);
        }
        local_68 = 0;
      }
      FWeakObjectPtr::operator=(&local_60);
      uVar12 = (uint)uVar10;
      local_58 = plVar1;
      if ((*puVar11 & 4) != 0) {
        iVar6 = *(int *)(param_2 + 400) + -1;
        if (-1 < iVar6) {
          plVar1 = (longlong *)(param_2 + 0x188);
          lVar9 = (longlong)iVar6 * 0x28;
          lVar16 = (longlong)*(int *)(param_2 + 400) * 0x28;
          lVar14 = lVar9;
          do {
            if (*(byte *)(*plVar1 + 1 + lVar9) != local_77) {
              TBaseDelegate<FText>::~TBaseDelegate<FText>(*plVar1 + 8 + lVar14);
              iVar5 = *(int *)(param_2 + 400);
              iVar3 = (iVar5 - iVar6) + -1;
              if (iVar3 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar1 + lVar14),(void *)(*plVar1 + lVar16),
                           (longlong)iVar3 * 0x28);
                iVar5 = *(int *)(param_2 + 400);
              }
              *(int *)(param_2 + 400) = iVar5 + -1;
              TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar1);
            }
            lVar16 = lVar16 + -0x28;
            lVar14 = lVar14 + -0x28;
            lVar9 = lVar9 + -0x28;
            iVar6 = iVar6 + -1;
            uVar12 = local_res18;
          } while (-1 < iVar6);
        }
      }
      lVar14 = (longlong)(int)uVar8;
      local_80 = (int)uVar8 + 1;
      if (local_7c < (int)local_80) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_88);
        uVar13 = local_88;
      }
      uVar2 = local_80;
      uVar8 = (ulonglong)local_80;
      *(byte *)(uVar13 + lVar14 * 0x28) = local_78;
      pplVar7 = (longlong **)(lVar14 * 0x28 + 8 + uVar13);
      *(byte *)(uVar13 + 1 + lVar14 * 0x28) = local_77;
      *pplVar7 = (longlong *)0x0;
      *(undefined4 *)(pplVar7 + 1) = 0;
      if (((&local_70 != pplVar7) && (local_68 != 0)) && (local_70 != (longlong *)0x0)) {
        (**(code **)(*local_70 + 0x30))();
      }
      *(undefined4 *)(pplVar7 + 2) = local_60;
      *(undefined4 *)((longlong)pplVar7 + 0x14) = local_5c;
      pplVar7[3] = local_58;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_70);
      local_res18 = uVar12 + 1;
      uVar10 = (ulonglong)local_res18;
      local_res20 = local_res20 + 0x10;
    } while ((int)local_res18 < *(int *)(param_1 + 0x30));
    uVar10 = uVar13;
    uVar15 = uVar8;
    if (0 < (int)uVar2) {
      do {
        iVar6 = *(int *)(param_2 + 400);
        *(int *)(param_2 + 400) = iVar6 + 1;
        if (*(int *)(param_2 + 0x194) < iVar6 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2 + 0x188,iVar6);
        }
        FInputTouchBinding::FInputTouchBinding
                  (*(longlong *)(param_2 + 0x188) + (longlong)iVar6 * 0x28,uVar10);
        uVar15 = uVar15 - 1;
        uVar10 = uVar10 + 0x28;
      } while (uVar15 != 0);
    }
  }
  if ((int)uVar8 != 0) {
    lVar14 = uVar13 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar14);
      lVar14 = lVar14 + 0x28;
      uVar12 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar12;
    } while (uVar12 != 0);
  }
  if (uVar13 != 0) {
    FMemory::Free(uVar13);
  }
  return;
}



// FUNCTION 1424e63f0 FUN_1424e63f0 body=941 status=ok
// SIG undefined FUN_1424e63f0(void)

void FUN_1424e63f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  longlong **pplVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong local_88;
  undefined8 local_80;
  byte local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  uVar14 = 0;
  local_88 = 0;
  local_80 = 0;
  uVar16 = uVar14;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      puVar15 = (uint *)(*(longlong *)(param_1 + 0x28) + uVar14);
      plVar13 = *(longlong **)(puVar15 + 6);
      local_68 = *(longlong *)(puVar15 + 2);
      local_60 = *(undefined8 *)(puVar15 + 4);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_78 = local_78 & 0xfd | 1;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_50 = (longlong *)0x0;
      local_48 = 0;
      local_58 = plVar13;
      FWeakObjectPtr::operator=(&local_40,0);
      local_38 = 0;
      FKey::IsVectorAxis(&local_68);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar13 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      uVar5 = *(undefined8 *)(param_2 + 0x118);
      bVar9 = local_78 ^ ((byte)*puVar15 ^ local_78) & 1;
      local_78 = ((char)(*puVar15 >> 1) * '\x02' ^ bVar9) & 2 ^ bVar9;
      uVar6 = *(undefined8 *)(puVar15 + 8);
      if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 0x28))(local_50,0);
        if (local_50 != (longlong *)0x0) {
          local_50 = (longlong *)FMemory::Realloc(local_50,0,0);
        }
        local_48 = 0;
      }
      FWeakObjectPtr::operator=(&local_40,uVar5);
      local_38 = uVar6;
      if (((*puVar15 & 4) != 0) && (iVar10 = *(int *)(param_2 + 0x1c0) + -1, -1 < iVar10)) {
        lVar12 = (longlong)iVar10 * 0x48;
        do {
          if (*(longlong *)(lVar12 + 0x10 + *(longlong *)(param_2 + 0x1b8)) == local_68) {
            TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_2 + 0x1a8,iVar10,1,1);
          }
          lVar12 = lVar12 + -0x48;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
      uVar8 = local_80;
      lVar12 = (longlong)(int)local_80;
      iVar10 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar10);
      if (local_80._4_4_ < iVar10) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_88,uVar8 & 0xffffffff);
      }
      pbVar3 = (byte *)(local_88 + lVar12 * 0x48);
      *pbVar3 = local_78;
      *(undefined8 *)(pbVar3 + 4) = local_74;
      *(undefined4 *)(pbVar3 + 0xc) = local_6c;
      *(longlong *)(pbVar3 + 0x10) = local_68;
      *(undefined8 *)(pbVar3 + 0x18) = local_60;
      *(longlong **)(pbVar3 + 0x20) = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      pplVar11 = (longlong **)(pbVar3 + 0x28);
      *pplVar11 = (longlong *)0x0;
      pbVar3[0x30] = 0;
      pbVar3[0x31] = 0;
      pbVar3[0x32] = 0;
      pbVar3[0x33] = 0;
      if (((&local_50 != pplVar11) && (local_48 != 0)) && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 0x30))(local_50,pplVar11);
      }
      *(undefined4 *)(pbVar3 + 0x38) = local_40;
      *(undefined4 *)(pbVar3 + 0x3c) = local_3c;
      *(undefined8 *)(pbVar3 + 0x40) = local_38;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
      plVar13 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_58 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      uVar17 = (int)uVar16 + 1;
      uVar14 = uVar14 + 0x28;
      uVar16 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)(param_1 + 0x30));
    if (0 < (int)local_80) {
      uVar16 = local_80 & 0xffffffff;
      lVar12 = local_88;
      do {
        iVar10 = *(int *)(param_2 + 0x1c0);
        *(int *)(param_2 + 0x1c0) = iVar10 + 1;
        if (*(int *)(param_2 + 0x1c4) < iVar10 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(param_2 + 0x1b8),iVar10);
        }
        FUN_1424debe0(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar10 * 0x48,lVar12);
        lVar12 = lVar12 + 0x48;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if ((int)local_80 != 0) {
    plVar13 = (longlong *)(local_88 + 0x20);
    iVar10 = (int)local_80;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar13 + 1);
      plVar7 = (longlong *)*plVar13;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar12 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
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
      plVar13 = plVar13 + 9;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424e67a0 FUN_1424e67a0 body=3637 status=ok
// SIG undefined FUN_1424e67a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424e67a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
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
  float local_1b8;
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
  uint uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  TArray<TRefCountPtr<HHitProxy>,FDefaultAllocator>::Empty(param_3,0);
  iVar1 = *(int *)(param_1 + 0x7b0);
  if (iVar1 != 0) {
    FStaticMeshInstanceData::AllocateInstances(param_2,iVar1,0,1);
    uVar18 = 0;
    uVar13 = uVar18;
    if (0 < *(int *)(param_1 + 0x760)) {
      local_188 = 0.0;
      fStack_184 = 0.0;
      fStack_180 = 0.0;
      fStack_17c = 0.0;
      uVar13 = FUN_1423d3320(param_1,*(undefined8 *)(param_1 + 0x758),&local_188);
    }
    uVar11 = *(uint *)(param_1 + 0x7b8);
    uVar21 = uVar18;
    if (0 < iVar1) {
      do {
        iVar17 = (int)uVar18;
        iVar15 = iVar17;
        if ((-1 < iVar17) && (iVar17 < *(int *)(param_1 + 2000))) {
          iVar15 = *(int *)(*(longlong *)(param_1 + 0x7c8) + uVar21 * 4);
        }
        if (iVar15 != -1) {
          fVar30 = -1.0;
          fVar28 = -1.0;
          pfVar16 = (float *)(uVar21 * 0x30 + *(longlong *)(param_1 + 0x7a8));
          fVar29 = -1.0;
          fVar31 = -1.0;
          if (((uVar13 != 0) && (-1 < iVar17)) && (iVar17 < *(int *)(uVar13 + 0x28))) {
            lVar2 = *(longlong *)(uVar13 + 0x20);
            fVar30 = *(float *)(lVar2 + uVar21 * 0x10);
            fVar28 = *(float *)(lVar2 + 4 + uVar21 * 0x10);
            fVar29 = *(float *)(lVar2 + 8 + uVar21 * 0x10);
            fVar31 = *(float *)(lVar2 + 0xc + uVar21 * 0x10);
          }
          fVar3 = *pfVar16;
          fVar4 = pfVar16[1];
          fVar5 = pfVar16[2];
          fVar22 = pfVar16[3];
          fVar23 = fVar4 + fVar4;
          fVar25 = fVar5 + fVar5;
          uVar11 = uVar11 * 0xbb38435 + 0x3619636b;
          fVar26 = fVar3 * (fVar3 + fVar3);
          local_1b8 = (float)(uVar11 & 0x7fffff | 0x3f800000);
          local_1b8 = local_1b8 - (float)(int)local_1b8;
          fVar24 = (fVar3 + fVar3) * fVar22;
          fVar6 = pfVar16[8];
          fVar7 = pfVar16[9];
          fVar8 = pfVar16[10];
          fVar27 = (fVar25 * fVar22 + fVar23 * fVar3) * fVar6;
          fStack_160 = (fVar24 + fVar25 * fVar4) * fVar7;
          local_138 = (fVar23 * fVar22 + fVar25 * fVar3) * fVar8;
          local_168 = fVar7 * (fVar23 * fVar3 - fVar25 * fVar22);
          fStack_134 = fVar8 * (fVar25 * fVar4 - fVar24);
          local_178 = fVar6 * (fVar25 * fVar3 - fVar23 * fVar22);
          fVar22 = (float)((uint)((_DAT_146afbca0 - (fVar5 * fVar25 + fVar4 * fVar23)) * fVar6) &
                          _DAT_146afbcb0);
          fStack_164 = (float)((uint)((fRam0000000146afbca4 - (fVar5 * fVar25 + fVar26)) * fVar7) &
                              uRam0000000146afbcb4);
          local_188 = (float)((uint)((fRam0000000146afbca8 - (fVar4 * fVar23 + fVar26)) * fVar8) &
                             uRam0000000146afbcb8);
          uStack_15c = (uint)((fRam0000000146afbcac - (fVar26 + fVar26)) * pfVar16[0xb]) &
                       uRam0000000146afbcbc;
          fVar3 = pfVar16[4];
          fVar4 = pfVar16[5];
          fVar5 = pfVar16[6];
          fStack_dc = fRam0000000146afbcac;
          if (0.0 <= ((fStack_164 * local_188 - fStack_134 * fStack_160) * fVar22 -
                     (fVar27 * local_188 - local_178 * fStack_134) * local_168) +
                     (fVar27 * fStack_160 - local_178 * fStack_164) * local_138) {
            local_1b8 = (float)((uint)local_1b8 & 0xfffffffe);
          }
          else {
            local_1b8 = (float)((uint)local_1b8 | 1);
          }
          lVar2 = param_2[1];
          fStack_184 = local_188;
          fStack_180 = local_188;
          fStack_17c = local_188;
          fStack_174 = local_178;
          fStack_170 = local_178;
          fStack_16c = local_178;
          local_158 = fStack_164;
          fStack_154 = fStack_164;
          fStack_150 = fStack_164;
          fStack_14c = fStack_164;
          local_148 = fStack_160;
          fStack_144 = fStack_160;
          fStack_140 = fStack_160;
          fStack_13c = fStack_160;
          fStack_130 = local_188;
          uStack_12c = uStack_15c;
          local_128 = fStack_134;
          fStack_124 = fStack_134;
          fStack_120 = fStack_134;
          fStack_11c = fStack_134;
          local_e8 = fVar3;
          fStack_e4 = fVar4;
          fStack_e0 = fVar5;
          (**(code **)(*(longlong *)*param_2 + 0x28))();
          (**(code **)(*(longlong *)*param_2 + 0x20))();
          lVar19 = (longlong)iVar15;
          pfVar16 = (float *)(lVar2 + lVar19 * 0x10);
          *pfVar16 = fVar3;
          pfVar16[1] = fVar4;
          pfVar16[2] = fVar5;
          pfVar16[3] = local_1b8;
          lVar2 = param_2[3];
          if (*(char *)((longlong)param_2 + 0x34) == '\0') {
            (**(code **)(*(longlong *)param_2[2] + 0x28))();
            (**(code **)(*(longlong *)param_2[2] + 0x20))();
            *(float *)(lVar2 + lVar19 * 0x30) = fVar22;
            *(float *)(lVar2 + 4 + lVar19 * 0x30) = fVar27;
            *(float *)(lVar2 + 8 + lVar19 * 0x30) = local_178;
            *(undefined4 *)(lVar2 + 0xc + lVar19 * 0x30) = 0;
            *(float *)(lVar2 + 0x10 + lVar19 * 0x30) = local_168;
            *(float *)(lVar2 + 0x14 + lVar19 * 0x30) = local_158;
            *(float *)(lVar2 + 0x18 + lVar19 * 0x30) = local_148;
            *(undefined4 *)(lVar2 + 0x1c + lVar19 * 0x30) = 0;
            *(float *)(lVar2 + 0x20 + lVar19 * 0x30) = local_138;
            *(float *)(lVar2 + 0x24 + lVar19 * 0x30) = local_128;
            *(float *)(lVar2 + 0x28 + lVar19 * 0x30) = local_188;
            *(undefined4 *)(lVar2 + 0x2c + lVar19 * 0x30) = 0;
          }
          else {
            (**(code **)(*(longlong *)param_2[2] + 0x28))();
            (**(code **)(*(longlong *)param_2[2] + 0x20))();
            uVar9 = (ushort)((uint)fVar22 >> 0x10);
            uVar14 = (uint)fVar22 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar2 + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = -uVar14 + 0x7e;
              if (iVar15 < 0x19) {
                uVar20 = (uint)fVar22 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar20 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + lVar19 * 0x18) = uVar9;
                if ((uVar20 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + lVar19 * 0x18) = uVar9 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar2 + lVar19 * 0x18) =
                   (ushort)((uint)fVar22 >> 0xd) & 0x3ff | ((uVar9 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar9 & 0x8000;
            }
            else {
              *(ushort *)(lVar2 + lVar19 * 0x18) =
                   uVar9 & 0x8000 | *(ushort *)(lVar2 + lVar19 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar9 = (ushort)((uint)fVar27 >> 0x10);
            uVar14 = (uint)fVar27 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar2 + 2 + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = -uVar14 + 0x7e;
              if (iVar15 < 0x19) {
                uVar20 = (uint)fVar27 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar20 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + 2 + lVar19 * 0x18) = uVar9;
                if ((uVar20 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + 2 + lVar19 * 0x18) = uVar9 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar2 + 2 + lVar19 * 0x18) =
                   ((uVar9 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar27 >> 0xd) & 0x3ff |
                   uVar9 & 0x8000;
            }
            else {
              *(ushort *)(lVar2 + 2 + lVar19 * 0x18) =
                   uVar9 & 0x8000 | *(ushort *)(lVar2 + 2 + lVar19 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar9 = (ushort)((uint)local_178 >> 0x10);
            uVar14 = (uint)local_178 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              iVar12 = -((uint)local_178 >> 0x17 & 0xff);
              *(ushort *)(lVar2 + 4 + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = iVar12 + 0x7e;
              if (iVar15 < 0x19) {
                uVar14 = (uint)local_178 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar14 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + 4 + lVar19 * 0x18) = uVar9;
                if ((uVar14 >> ((char)iVar12 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + 4 + lVar19 * 0x18) = uVar9 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar2 + 4 + lVar19 * 0x18) =
                   ((uVar9 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)local_178 >> 0xd) & 0x3ff |
                   uVar9 & 0x8000;
            }
            else {
              *(ushort *)(lVar2 + 4 + lVar19 * 0x18) =
                   uVar9 & 0x8000 | *(ushort *)(lVar2 + 4 + lVar19 * 0x18) & 0x7bff | 0x7bff;
            }
            *(undefined2 *)(lVar2 + 6 + lVar19 * 0x18) = 0;
            uVar9 = (ushort)((uint)local_168 >> 0x10);
            uVar14 = (uint)local_168 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar2 + 8 + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = -uVar14 + 0x7e;
              if (iVar15 < 0x19) {
                uVar20 = (uint)local_168 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar20 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + 8 + lVar19 * 0x18) = uVar9;
                if ((uVar20 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + 8 + lVar19 * 0x18) = uVar9 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar2 + 8 + lVar19 * 0x18) =
                   ((uVar9 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)local_168 >> 0xd) & 0x3ff |
                   uVar9 & 0x8000;
            }
            else {
              *(ushort *)(lVar2 + 8 + lVar19 * 0x18) =
                   uVar9 & 0x8000 | *(ushort *)(lVar2 + 8 + lVar19 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar9 = (ushort)((uint)local_158 >> 0x10);
            uVar14 = (uint)local_158 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar2 + 10 + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = -uVar14 + 0x7e;
              if (iVar15 < 0x19) {
                uVar20 = (uint)local_158 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar20 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + 10 + lVar19 * 0x18) = uVar9;
                if ((uVar20 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + 10 + lVar19 * 0x18) = uVar9 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar2 + 10 + lVar19 * 0x18) =
                   (ushort)((uint)local_158 >> 0xd) & 0x3ff | ((uVar9 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar9 & 0x8000;
            }
            else {
              *(ushort *)(lVar2 + 10 + lVar19 * 0x18) =
                   uVar9 & 0x8000 | *(ushort *)(lVar2 + 10 + lVar19 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar9 = (ushort)((uint)local_148 >> 0x10);
            uVar14 = (uint)local_148 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              iVar12 = -((uint)local_148 >> 0x17 & 0xff);
              *(ushort *)(lVar2 + 0xc + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = iVar12 + 0x7e;
              if (iVar15 < 0x19) {
                uVar14 = (uint)local_148 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar14 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + 0xc + lVar19 * 0x18) = uVar9;
                if ((uVar14 >> ((char)iVar12 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + 0xc + lVar19 * 0x18) = uVar9 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar2 + 0xc + lVar19 * 0x18) =
                   (ushort)((uint)local_148 >> 0xd) & 0x3ff | ((uVar9 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar9 & 0x8000;
            }
            else {
              *(ushort *)(lVar2 + 0xc + lVar19 * 0x18) =
                   uVar9 & 0x8000 | *(ushort *)(lVar2 + 0xc + lVar19 * 0x18) & 0x7bff | 0x7bff;
            }
            *(undefined2 *)(lVar2 + 0xe + lVar19 * 0x18) = 0;
            uVar9 = (ushort)((uint)local_138 >> 0x10);
            uVar14 = (uint)local_138 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar2 + 0x10 + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = -uVar14 + 0x7e;
              if (iVar15 < 0x19) {
                uVar20 = (uint)local_138 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar20 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + 0x10 + lVar19 * 0x18) = uVar9;
                if ((uVar20 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + 0x10 + lVar19 * 0x18) = uVar9 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar2 + 0x10 + lVar19 * 0x18) =
                   (ushort)((uint)local_138 >> 0xd) & 0x3ff | ((uVar9 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar9 & 0x8000;
            }
            else {
              *(ushort *)(lVar2 + 0x10 + lVar19 * 0x18) =
                   uVar9 & 0x8000 | *(ushort *)(lVar2 + 0x10 + lVar19 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar9 = (ushort)((uint)local_128 >> 0x10);
            uVar14 = (uint)local_128 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar2 + 0x12 + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = -uVar14 + 0x7e;
              if (iVar15 < 0x19) {
                uVar20 = (uint)local_128 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar20 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + 0x12 + lVar19 * 0x18) = uVar9;
                if ((uVar20 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + 0x12 + lVar19 * 0x18) = uVar9 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar2 + 0x12 + lVar19 * 0x18) =
                   ((uVar9 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)local_128 >> 0xd) & 0x3ff |
                   uVar9 & 0x8000;
            }
            else {
              *(ushort *)(lVar2 + 0x12 + lVar19 * 0x18) =
                   uVar9 & 0x8000 | *(ushort *)(lVar2 + 0x12 + lVar19 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar9 = (ushort)((uint)local_188 >> 0x10);
            uVar14 = (uint)local_188 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              iVar12 = -((uint)local_188 >> 0x17 & 0xff);
              *(ushort *)(lVar2 + 0x14 + lVar19 * 0x18) = uVar9 & 0x8000;
              iVar15 = iVar12 + 0x7e;
              if (iVar15 < 0x19) {
                uVar14 = (uint)local_188 & 0x7fffff | 0x800000;
                uVar9 = (ushort)(uVar14 >> ((byte)iVar15 & 0x1f)) & 0x3ff | uVar9 & 0x8000;
                *(ushort *)(lVar2 + 0x14 + lVar19 * 0x18) = uVar9;
                if ((uVar14 >> ((char)iVar12 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar2 + 0x14 + lVar19 * 0x18) = uVar9 + 1;
                  *(undefined2 *)(lVar2 + 0x16 + lVar19 * 0x18) = 0;
                  goto LAB_1424e7472;
                }
              }
            }
            else {
              if (0x8e < uVar14) {
                *(ushort *)(lVar2 + 0x14 + lVar19 * 0x18) =
                     uVar9 & 0x8000 | *(ushort *)(lVar2 + 0x14 + lVar19 * 0x18) & 0x7bff | 0x7bff;
                *(undefined2 *)(lVar2 + 0x16 + lVar19 * 0x18) = 0;
                goto LAB_1424e7472;
              }
              *(ushort *)(lVar2 + 0x14 + lVar19 * 0x18) =
                   (ushort)((uint)local_188 >> 0xd) & 0x3ff | ((uVar9 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar9 & 0x8000;
            }
            *(undefined2 *)(lVar2 + 0x16 + lVar19 * 0x18) = 0;
          }
LAB_1424e7472:
          lVar2 = param_2[5];
          (**(code **)(*(longlong *)param_2[4] + 0x28))();
          (**(code **)(*(longlong *)param_2[4] + 0x20))();
          iVar15 = (int)(fVar30 * 32767.0);
          if (iVar15 < -0x8000) {
            uVar10 = 0x8000;
          }
          else {
            uVar10 = 0x7fff;
            if (iVar15 < 0x7fff) {
              uVar10 = (undefined2)iVar15;
            }
          }
          *(undefined2 *)(lVar2 + lVar19 * 8) = uVar10;
          iVar15 = (int)(fVar28 * 32767.0);
          if (iVar15 < -0x8000) {
            iVar12 = -0x8000;
          }
          else {
            iVar12 = 0x7fff;
            if (iVar15 < 0x7fff) {
              iVar12 = iVar15;
            }
          }
          *(short *)(lVar2 + 2 + lVar19 * 8) = (short)iVar12;
          iVar15 = (int)(fVar29 * 32767.0);
          if (iVar15 < -0x8000) {
            iVar12 = -0x8000;
          }
          else {
            iVar12 = 0x7fff;
            if (iVar15 < 0x7fff) {
              iVar12 = iVar15;
            }
          }
          *(short *)(lVar2 + 4 + lVar19 * 8) = (short)iVar12;
          iVar15 = (int)(fVar31 * 32767.0);
          if (iVar15 < -0x8000) {
            iVar12 = -0x8000;
          }
          else {
            iVar12 = 0x7fff;
            if (iVar15 < 0x7fff) {
              iVar12 = iVar15;
            }
          }
          *(short *)(lVar2 + 6 + lVar19 * 8) = (short)iVar12;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar21 = uVar21 + 1;
      } while ((longlong)uVar21 < (longlong)iVar1);
    }
  }
  return;
}



// FUNCTION 1424e75e0 FUN_1424e75e0 body=3578 status=ok
// SIG undefined FUN_1424e75e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1424e75e0(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  undefined1 local_1f8;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  float local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  float local_160;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if ((*(longlong *)(param_1 + 0x728) == 0) || (*(int *)(param_1 + 0x7b0) < 1)) {
    fVar6 = param_3[5];
    fVar28 = param_3[6];
    *param_2 = param_3[4];
    param_2[1] = fVar6;
    param_2[2] = fVar28;
    *(undefined8 *)(param_2 + 3) = _DAT_1468b5d90;
    param_2[5] = DAT_1468b5d98;
    param_2[6] = 0.0;
  }
  else {
    uVar4 = UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),local_158);
    fVar32 = fRam0000000146afbca8;
    fVar29 = fRam0000000146afbca4;
    fVar25 = _DAT_146afbca0;
    pfVar8 = *(float **)(param_1 + 0x7a8);
    auVar10 = *(undefined1 (*) [16])(param_3 + 8);
    fVar6 = auVar10._0_4_;
    fVar28 = auVar10._4_4_;
    fVar47 = auVar10._8_4_;
    fStack_ec = auVar10._12_4_;
    auVar1 = *(undefined1 (*) [16])(pfVar8 + 8);
    local_f8 = auVar1._0_4_;
    fStack_f4 = auVar1._4_4_;
    fStack_f0 = auVar1._8_4_;
    auVar10 = minps(auVar1,auVar10);
    auVar11._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146afc304);
    auVar11._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146afc300);
    auVar11._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146afc308);
    auVar11._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146afc30c);
    iVar5 = movmskps(uVar4,auVar11);
    if (iVar5 == 0) {
      fVar25 = *param_3;
      fVar29 = param_3[1];
      fVar32 = param_3[2];
      fVar18 = param_3[3];
      fVar26 = *pfVar8;
      fVar30 = pfVar8[1];
      fVar13 = pfVar8[2];
      fVar33 = pfVar8[3];
      fVar27 = fVar6 * pfVar8[4];
      fVar31 = fVar28 * pfVar8[5];
      fVar20 = fVar47 * pfVar8[6];
      fVar21 = fStack_ec * pfVar8[7];
      local_118 = fVar25 * fVar33 * _DAT_146afc2e0 + fVar18 * fVar26 +
                  fVar29 * fVar13 * _DAT_146afc2d0 + fVar32 * fVar30 * _DAT_146afc2c0;
      fStack_114 = fVar25 * fVar13 * fRam0000000146afc2e4 + fVar18 * fVar30 +
                   fVar29 * fVar33 * fRam0000000146afc2d4 + fVar32 * fVar26 * fRam0000000146afc2c4;
      fStack_110 = fVar25 * fVar30 * fRam0000000146afc2e8 + fVar18 * fVar13 +
                   fVar29 * fVar26 * fRam0000000146afc2d8 + fVar32 * fVar33 * fRam0000000146afc2c8;
      fStack_10c = fVar25 * fVar26 * fRam0000000146afc2ec + fVar18 * fVar33 +
                   fVar29 * fVar30 * fRam0000000146afc2dc + fVar32 * fVar13 * fRam0000000146afc2cc;
      fVar26 = fVar20 * fVar29 - fVar31 * fVar32;
      fVar30 = fVar27 * fVar32 - fVar20 * fVar25;
      fVar13 = fVar31 * fVar25 - fVar27 * fVar29;
      fVar33 = fVar21 * fVar18 - fVar21 * fVar18;
      fVar26 = fVar26 + fVar26;
      fVar30 = fVar30 + fVar30;
      fVar13 = fVar13 + fVar13;
      fVar33 = fVar33 + fVar33;
      local_108._4_4_ = (fVar26 * fVar32 - fVar13 * fVar25) + fVar18 * fVar30 + fVar31 + param_3[5];
      local_108._0_4_ = (fVar13 * fVar29 - fVar30 * fVar32) + fVar18 * fVar26 + fVar27 + param_3[4];
      fStack_100 = (fVar30 * fVar25 - fVar26 * fVar29) + fVar18 * fVar13 + fVar20 + param_3[6];
      fStack_fc = (fVar33 * fVar18 - fVar33 * fVar18) + fVar18 * fVar33 + fVar21 + param_3[7];
    }
    else {
      fVar18 = *param_3;
      fVar26 = param_3[1];
      fVar30 = param_3[2];
      fVar13 = param_3[3];
      fVar33 = param_3[4];
      fVar27 = param_3[5];
      fVar31 = param_3[6];
      fVar19 = fVar26 + fVar26;
      fVar21 = fVar30 + fVar30;
      fVar23 = fVar18 * (fVar18 + fVar18);
      fVar20 = (fVar18 + fVar18) * fVar13;
      fVar51 = (fVar21 * fVar13 + fVar19 * fVar18) * fVar6;
      fVar52 = (fVar20 + fVar21 * fVar26) * fVar28;
      fVar53 = (fVar19 * fVar13 + fVar21 * fVar18) * fVar47;
      fVar34 = fVar28 * (fVar19 * fVar18 - fVar21 * fVar13);
      fVar36 = fVar47 * (fVar21 * fVar26 - fVar20);
      fVar38 = fVar6 * (fVar21 * fVar18 - fVar19 * fVar13);
      fVar20 = (float)((uint)((_DAT_146afbca0 - (fVar30 * fVar21 + fVar26 * fVar19)) * fVar6) &
                      _DAT_146afbcb0);
      fVar21 = (float)((uint)((fRam0000000146afbca4 - (fVar30 * fVar21 + fVar23)) * fVar28) &
                      uRam0000000146afbcb4);
      fVar16 = (float)((uint)((fRam0000000146afbca8 - (fVar26 * fVar19 + fVar23)) * fVar47) &
                      uRam0000000146afbcb8);
      fVar17 = (float)((uint)((fRam0000000146afbcac - (fVar23 + fVar23)) * fStack_ec) &
                      uRam0000000146afbcbc);
      fVar18 = *pfVar8;
      fVar26 = pfVar8[1];
      fVar30 = pfVar8[2];
      fVar13 = pfVar8[3];
      fVar23 = fVar26 + fVar26;
      fVar22 = fVar30 + fVar30;
      fVar24 = fVar18 * (fVar18 + fVar18);
      fVar19 = (fVar18 + fVar18) * fVar13;
      fVar44 = (fVar22 * fVar13 + fVar23 * fVar18) * local_f8;
      fVar45 = (fVar19 + fVar22 * fVar26) * fStack_f4;
      fVar46 = (fVar23 * fVar13 + fVar22 * fVar18) * fStack_f0;
      fVar35 = fStack_f4 * (fVar23 * fVar18 - fVar22 * fVar13);
      fVar37 = fStack_f0 * (fVar22 * fVar26 - fVar19);
      fVar39 = local_f8 * (fVar22 * fVar18 - fVar23 * fVar13);
      fVar13 = (float)((uint)((_DAT_146afbca0 - (fVar30 * fVar22 + fVar26 * fVar23)) * local_f8) &
                      _DAT_146afbcb0);
      fVar19 = (float)((uint)((fRam0000000146afbca4 - (fVar30 * fVar22 + fVar24)) * fStack_f4) &
                      uRam0000000146afbcb4);
      fVar23 = (float)((uint)((fRam0000000146afbca8 - (fVar26 * fVar23 + fVar24)) * fStack_f0) &
                      uRam0000000146afbcb8);
      fVar22 = (float)((uint)((fRam0000000146afbcac - (fVar24 + fVar24)) * auVar1._12_4_) &
                      uRam0000000146afbcbc);
      fVar18 = pfVar8[4];
      fVar26 = pfVar8[5];
      fVar30 = pfVar8[6];
      local_1e8 = fVar44 * fVar34 + fVar13 * fVar20 + fVar39 * fVar53 + fVar22 * fVar33;
      fStack_1e4 = fVar44 * fVar21 + fVar13 * fVar51 + fVar39 * fVar36 + fVar22 * fVar27;
      fStack_1e0 = fVar44 * fVar52 + fVar13 * fVar38 + fVar39 * fVar16 + fVar22 * fVar31;
      fStack_1dc = fVar44 * fVar17 + fVar13 * fVar17 + fVar39 * fVar17 +
                   fVar22 * fRam0000000146afbcac;
      local_1d8 = fVar19 * fVar34 + fVar35 * fVar20 + fVar45 * fVar53 + fVar22 * fVar33;
      fStack_1d4 = fVar19 * fVar21 + fVar35 * fVar51 + fVar45 * fVar36 + fVar22 * fVar27;
      fStack_1d0 = fVar19 * fVar52 + fVar35 * fVar38 + fVar45 * fVar16 + fVar22 * fVar31;
      fStack_1cc = fVar19 * fVar17 + fVar35 * fVar17 + fVar45 * fVar17 +
                   fVar22 * fRam0000000146afbcac;
      local_1c8 = fVar37 * fVar34 + fVar46 * fVar20 + fVar23 * fVar53 + fVar22 * fVar33;
      fStack_1c4 = fVar37 * fVar21 + fVar46 * fVar51 + fVar23 * fVar36 + fVar22 * fVar27;
      fStack_1c0 = fVar37 * fVar52 + fVar46 * fVar38 + fVar23 * fVar16 + fVar22 * fVar31;
      fStack_1bc = fVar37 * fVar17 + fVar46 * fVar17 + fVar23 * fVar17 +
                   fVar22 * fRam0000000146afbcac;
      local_1b8 = fVar26 * fVar34 + fVar18 * fVar20 + fVar30 * fVar53 +
                  fRam0000000146afbcac * fVar33;
      fStack_1b4 = fVar26 * fVar21 + fVar18 * fVar51 + fVar30 * fVar36 +
                   fRam0000000146afbcac * fVar27;
      fStack_1b0 = fVar26 * fVar52 + fVar18 * fVar38 + fVar30 * fVar16 +
                   fRam0000000146afbcac * fVar31;
      fStack_1ac = fVar26 * fVar17 + fVar18 * fVar17 + fVar30 * fVar17 +
                   fRam0000000146afbcac * fRam0000000146afbcac;
      FMatrix::RemoveScaling(&local_1e8);
      fVar25 = (float)(-(uint)(_DAT_146afc300 <= local_f8 * fVar6) & (_DAT_146afc2f0 ^ (uint)fVar25)
                      ^ _DAT_146afc2f0);
      fVar29 = (float)(-(uint)(fRam0000000146afc304 <= fStack_f4 * fVar28) &
                       (uRam0000000146afc2f4 ^ (uint)fVar29) ^ uRam0000000146afc2f4);
      fVar32 = (float)(-(uint)(fRam0000000146afc308 <= fStack_f0 * fVar47) &
                       (uRam0000000146afc2f8 ^ (uint)fVar32) ^ uRam0000000146afc2f8);
      local_1e8 = local_1e8 * fVar25;
      fStack_1e4 = fStack_1e4 * fVar25;
      fStack_1e0 = fStack_1e0 * fVar25;
      fStack_1d4 = fStack_1d4 * fVar29;
      fStack_1d0 = fStack_1d0 * fVar29;
      local_1d8 = local_1d8 * fVar29;
      fStack_1c4 = fStack_1c4 * fVar32;
      fStack_1c0 = fStack_1c0 * fVar32;
      local_1c8 = local_1c8 * fVar32;
      FQuat::FQuat(&local_188,&local_1e8);
      local_218 = 0x322bcc77;
      auVar14._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
      auVar14._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
      auVar14._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
      auVar14._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
      fVar26 = auVar14._4_4_ + auVar14._0_4_;
      fVar30 = auVar14._8_4_ + auVar14._4_4_;
      fVar13 = auVar14._12_4_ + auVar14._8_4_;
      fVar33 = auVar14._0_4_ + auVar14._12_4_;
      auVar10._4_4_ = fVar30;
      auVar10._0_4_ = fVar26;
      auVar10._8_4_ = fVar13;
      auVar10._12_4_ = fVar33;
      auVar10 = rsqrtps(auVar14,auVar10);
      fVar25 = auVar10._0_4_;
      fVar29 = auVar10._4_4_;
      fVar32 = auVar10._8_4_;
      fVar18 = auVar10._12_4_;
      fVar25 = (_DAT_146afbd30 - fVar25 * fVar25 * fVar26 * _DAT_146afbd30) * fVar25 + fVar25;
      fVar29 = (fRam0000000146afbd34 - fVar29 * fVar29 * fVar30 * fRam0000000146afbd34) * fVar29 +
               fVar29;
      fVar32 = (fRam0000000146afbd38 - fVar32 * fVar32 * fVar13 * fRam0000000146afbd38) * fVar32 +
               fVar32;
      fVar18 = (fRam0000000146afbd3c - fVar18 * fVar18 * fVar33 * fRam0000000146afbd3c) * fVar18 +
               fVar18;
      local_108._4_4_ = fStack_1b4;
      local_108._0_4_ = local_1b8;
      fStack_100 = fStack_1b0;
      local_118 = (float)(((uint)(((_DAT_146afbd30 - fVar25 * fVar25 * fVar26 * _DAT_146afbd30) *
                                   fVar25 + fVar25) * local_188) ^ _DAT_146afbd20) &
                          -(uint)(1e-08 <= fVar26) ^ _DAT_146afbd20);
      fStack_114 = (float)(((uint)(((fRam0000000146afbd34 -
                                    fVar29 * fVar29 * fVar30 * fRam0000000146afbd34) * fVar29 +
                                   fVar29) * fStack_184) ^ uRam0000000146afbd24) &
                           -(uint)(1e-08 <= fVar30) ^ uRam0000000146afbd24);
      fStack_110 = (float)(((uint)(((fRam0000000146afbd38 -
                                    fVar32 * fVar32 * fVar13 * fRam0000000146afbd38) * fVar32 +
                                   fVar32) * fStack_180) ^ uRam0000000146afbd28) &
                           -(uint)(1e-08 <= fVar13) ^ uRam0000000146afbd28);
      fStack_10c = (float)(((uint)(((fRam0000000146afbd3c -
                                    fVar18 * fVar18 * fVar33 * fRam0000000146afbd3c) * fVar18 +
                                   fVar18) * fStack_17c) ^ uRam0000000146afbd2c) &
                           -(uint)(1e-08 <= fVar33) ^ uRam0000000146afbd2c);
      fStack_fc = 0.0;
    }
    fStack_ec = auVar1._12_4_ * fStack_ec;
    fStack_f0 = fStack_f0 * fVar47;
    fStack_f4 = fStack_f4 * fVar28;
    local_f8 = local_f8 * fVar6;
    fVar6 = (float)FBoxSphereBounds::TransformBy(local_158,&local_1a8,&local_118);
    iVar5 = 1;
    if (1 < *(int *)(param_1 + 0x7b0)) {
      lVar9 = 0x30;
      do {
        fVar20 = fRam0000000146afc308;
        fVar31 = fRam0000000146afc304;
        fVar27 = _DAT_146afc300;
        fVar33 = fRam0000000146afbca8;
        fVar13 = fRam0000000146afbca4;
        fVar30 = _DAT_146afbca0;
        lVar2 = *(longlong *)(param_1 + 0x7a8);
        auVar10 = *(undefined1 (*) [16])(param_3 + 8);
        fVar28 = auVar10._0_4_;
        fVar25 = auVar10._4_4_;
        fVar32 = auVar10._8_4_;
        fVar26 = auVar10._12_4_;
        local_118 = 0.0;
        fStack_114 = 0.0;
        fStack_110 = 0.0;
        fStack_10c = fRam0000000146afbcac;
        local_f8 = (float)((uint)_DAT_146afbca0 & _DAT_146afbcb0);
        fStack_f4 = (float)((uint)fRam0000000146afbca4 & uRam0000000146afbcb4);
        fStack_f0 = (float)((uint)fRam0000000146afbca8 & uRam0000000146afbcb8);
        fStack_ec = (float)((uint)fRam0000000146afbcac & uRam0000000146afbcbc);
        _local_108 = ZEXT816(0);
        auVar1 = *(undefined1 (*) [16])(lVar9 + 0x20 + lVar2);
        fVar47 = auVar1._0_4_;
        fVar29 = auVar1._4_4_;
        fVar18 = auVar1._8_4_;
        auVar10 = minps(auVar1,auVar10);
        auVar12._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146afc304);
        auVar12._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146afc300);
        auVar12._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146afc308);
        auVar12._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146afc30c);
        iVar7 = movmskps(fVar6,auVar12);
        if (iVar7 == 0) {
          fVar6 = *param_3;
          fVar30 = param_3[1];
          fVar13 = param_3[2];
          fVar33 = param_3[3];
          pfVar8 = (float *)(lVar9 + lVar2);
          fVar27 = *pfVar8;
          fVar31 = pfVar8[1];
          fVar20 = pfVar8[2];
          fVar21 = pfVar8[3];
          pfVar8 = (float *)(lVar9 + 0x10 + lVar2);
          fVar19 = fVar28 * *pfVar8;
          fVar16 = fVar25 * pfVar8[1];
          fVar23 = fVar32 * pfVar8[2];
          fVar17 = fVar26 * pfVar8[3];
          local_118 = fVar21 * fVar6 * _DAT_146afc2e0 + fVar27 * fVar33 +
                      fVar30 * fVar20 * _DAT_146afc2d0 + fVar13 * fVar31 * _DAT_146afc2c0;
          fStack_114 = fVar20 * fVar6 * fRam0000000146afc2e4 + fVar31 * fVar33 +
                       fVar30 * fVar21 * fRam0000000146afc2d4 +
                       fVar13 * fVar27 * fRam0000000146afc2c4;
          fStack_110 = fVar31 * fVar6 * fRam0000000146afc2e8 + fVar20 * fVar33 +
                       fVar30 * fVar27 * fRam0000000146afc2d8 +
                       fVar13 * fVar21 * fRam0000000146afc2c8;
          fStack_10c = fVar27 * fVar6 * fRam0000000146afc2ec + fVar21 * fVar33 +
                       fVar30 * fVar31 * fRam0000000146afc2dc +
                       fVar13 * fVar20 * fRam0000000146afc2cc;
          fVar27 = fVar23 * fVar30 - fVar16 * fVar13;
          fVar31 = fVar19 * fVar13 - fVar23 * fVar6;
          fVar20 = fVar16 * fVar6 - fVar19 * fVar30;
          fVar21 = fVar17 * fVar33 - fVar17 * fVar33;
          fVar27 = fVar27 + fVar27;
          fVar31 = fVar31 + fVar31;
          fVar20 = fVar20 + fVar20;
          fVar21 = fVar21 + fVar21;
          local_108._4_4_ =
               (fVar27 * fVar13 - fVar20 * fVar6) + fVar31 * fVar33 + fVar16 + param_3[5];
          local_108._0_4_ =
               (fVar20 * fVar30 - fVar31 * fVar13) + fVar27 * fVar33 + fVar19 + param_3[4];
          fStack_100 = (fVar31 * fVar6 - fVar27 * fVar30) + fVar20 * fVar33 + fVar23 + param_3[6];
          fStack_fc = (fVar21 * fVar33 - fVar21 * fVar33) + fVar21 * fVar33 + fVar17 + param_3[7];
        }
        else {
          fVar6 = *param_3;
          fVar21 = param_3[1];
          fVar19 = param_3[2];
          fVar16 = param_3[3];
          fVar36 = fVar21 + fVar21;
          fVar37 = fVar19 + fVar19;
          fVar38 = fVar6 * (fVar6 + fVar6);
          fVar34 = fVar16 * (fVar6 + fVar6);
          pfVar8 = (float *)(lVar9 + lVar2);
          fVar23 = *pfVar8;
          fVar17 = pfVar8[1];
          fVar22 = pfVar8[2];
          fVar24 = pfVar8[3];
          fVar48 = (fVar16 * fVar37 + fVar6 * fVar36) * fVar28;
          fVar49 = (fVar34 + fVar21 * fVar37) * fVar25;
          fVar50 = (fVar16 * fVar36 + fVar6 * fVar37) * fVar32;
          fVar45 = fVar25 * (fVar6 * fVar36 - fVar16 * fVar37);
          fVar51 = fVar32 * (fVar21 * fVar37 - fVar34);
          fVar53 = fVar28 * (fVar6 * fVar37 - fVar16 * fVar36);
          fVar6 = param_3[4];
          fVar16 = param_3[5];
          fVar34 = param_3[6];
          fVar35 = (float)((uint)((_DAT_146afbca0 - (fVar19 * fVar37 + fVar21 * fVar36)) * fVar28) &
                          _DAT_146afbcb0);
          fVar37 = (float)((uint)((fRam0000000146afbca4 - (fVar19 * fVar37 + fVar38)) * fVar25) &
                          uRam0000000146afbcb4);
          fVar36 = (float)((uint)((fRam0000000146afbca8 - (fVar21 * fVar36 + fVar38)) * fVar32) &
                          uRam0000000146afbcb8);
          fVar38 = (float)((uint)((fRam0000000146afbcac - (fVar38 + fVar38)) * fVar26) &
                          uRam0000000146afbcbc);
          fVar21 = fVar17 + fVar17;
          fVar19 = fVar22 + fVar22;
          fVar44 = fVar23 * (fVar23 + fVar23);
          fVar39 = fVar24 * (fVar23 + fVar23);
          fVar41 = (fVar24 * fVar19 + fVar23 * fVar21) * fVar47;
          fVar42 = (fVar39 + fVar17 * fVar19) * fVar29;
          fVar43 = (fVar24 * fVar21 + fVar23 * fVar19) * fVar18;
          fVar46 = fVar29 * (fVar23 * fVar21 - fVar24 * fVar19);
          fVar52 = fVar18 * (fVar17 * fVar19 - fVar39);
          fVar40 = fVar47 * (fVar23 * fVar19 - fVar24 * fVar21);
          fVar24 = (float)((uint)((_DAT_146afbca0 - (fVar22 * fVar19 + fVar17 * fVar21)) * fVar47) &
                          _DAT_146afbcb0);
          fVar22 = (float)((uint)((fRam0000000146afbca4 - (fVar22 * fVar19 + fVar44)) * fVar29) &
                          uRam0000000146afbcb4);
          fVar17 = (float)((uint)((fRam0000000146afbca8 - (fVar17 * fVar21 + fVar44)) * fVar18) &
                          uRam0000000146afbcb8);
          fVar39 = (float)((uint)((fRam0000000146afbcac - (fVar44 + fVar44)) * auVar1._12_4_) &
                          uRam0000000146afbcbc);
          pfVar8 = (float *)(lVar9 + 0x10 + lVar2);
          fVar21 = *pfVar8;
          fVar19 = pfVar8[1];
          fVar23 = pfVar8[2];
          local_1e8 = fVar41 * fVar45 + fVar24 * fVar35 + fVar40 * fVar50 + fVar39 * fVar6;
          fStack_1e4 = fVar41 * fVar37 + fVar24 * fVar48 + fVar40 * fVar51 + fVar39 * fVar16;
          fStack_1e0 = fVar41 * fVar49 + fVar24 * fVar53 + fVar40 * fVar36 + fVar39 * fVar34;
          fStack_1dc = fVar41 * fVar38 + fVar24 * fVar38 + fVar40 * fVar38 +
                       fVar39 * fRam0000000146afbcac;
          local_1d8 = fVar22 * fVar45 + fVar46 * fVar35 + fVar42 * fVar50 + fVar39 * fVar6;
          fStack_1d4 = fVar22 * fVar37 + fVar46 * fVar48 + fVar42 * fVar51 + fVar39 * fVar16;
          fStack_1d0 = fVar22 * fVar49 + fVar46 * fVar53 + fVar42 * fVar36 + fVar39 * fVar34;
          fStack_1cc = fVar22 * fVar38 + fVar46 * fVar38 + fVar42 * fVar38 +
                       fVar39 * fRam0000000146afbcac;
          local_1c8 = fVar52 * fVar45 + fVar43 * fVar35 + fVar17 * fVar50 + fVar39 * fVar6;
          fStack_1c4 = fVar52 * fVar37 + fVar43 * fVar48 + fVar17 * fVar51 + fVar39 * fVar16;
          fStack_1c0 = fVar52 * fVar49 + fVar43 * fVar53 + fVar17 * fVar36 + fVar39 * fVar34;
          fStack_1bc = fVar52 * fVar38 + fVar43 * fVar38 + fVar17 * fVar38 +
                       fVar39 * fRam0000000146afbcac;
          local_1b8 = fVar19 * fVar45 + fVar21 * fVar35 + fVar23 * fVar50 +
                      fRam0000000146afbcac * fVar6;
          fStack_1b4 = fVar19 * fVar37 + fVar21 * fVar48 + fVar23 * fVar51 +
                       fRam0000000146afbcac * fVar16;
          fStack_1b0 = fVar19 * fVar49 + fVar21 * fVar53 + fVar23 * fVar36 +
                       fRam0000000146afbcac * fVar34;
          fStack_1ac = fVar19 * fVar38 + fVar21 * fVar38 + fVar23 * fVar38 +
                       fRam0000000146afbcac * fRam0000000146afbcac;
          FMatrix::RemoveScaling(&local_1e8);
          fVar6 = (float)(-(uint)(fVar27 <= fVar47 * fVar28) & (_DAT_146afc2f0 ^ (uint)fVar30) ^
                         _DAT_146afc2f0);
          fVar30 = (float)(-(uint)(fVar31 <= fVar29 * fVar25) &
                           (uRam0000000146afc2f4 ^ (uint)fVar13) ^ uRam0000000146afc2f4);
          fVar13 = (float)(-(uint)(fVar20 <= fVar18 * fVar32) &
                           (uRam0000000146afc2f8 ^ (uint)fVar33) ^ uRam0000000146afc2f8);
          local_1e8 = local_1e8 * fVar6;
          fStack_1e4 = fStack_1e4 * fVar6;
          fStack_1e0 = fStack_1e0 * fVar6;
          fStack_1d0 = fStack_1d0 * fVar30;
          fStack_1d4 = fStack_1d4 * fVar30;
          local_1d8 = local_1d8 * fVar30;
          fStack_1c0 = fStack_1c0 * fVar13;
          local_1c8 = local_1c8 * fVar13;
          fStack_1c4 = fStack_1c4 * fVar13;
          FQuat::FQuat(&local_188,&local_1e8);
          local_218 = 0x322bcc77;
          auVar15._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
          auVar15._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
          auVar15._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
          auVar15._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
          fVar27 = auVar15._4_4_ + auVar15._0_4_;
          fVar31 = auVar15._8_4_ + auVar15._4_4_;
          fVar20 = auVar15._12_4_ + auVar15._8_4_;
          fVar21 = auVar15._0_4_ + auVar15._12_4_;
          auVar3._4_4_ = fVar31;
          auVar3._0_4_ = fVar27;
          auVar3._8_4_ = fVar20;
          auVar3._12_4_ = fVar21;
          auVar10 = rsqrtps(auVar15,auVar3);
          fVar6 = auVar10._0_4_;
          fVar30 = auVar10._4_4_;
          fVar13 = auVar10._8_4_;
          fVar33 = auVar10._12_4_;
          fVar6 = (_DAT_146afbd30 - fVar6 * fVar6 * fVar27 * _DAT_146afbd30) * fVar6 + fVar6;
          fVar30 = (fRam0000000146afbd34 - fVar30 * fVar30 * fVar31 * fRam0000000146afbd34) * fVar30
                   + fVar30;
          fVar13 = (fRam0000000146afbd38 - fVar13 * fVar13 * fVar20 * fRam0000000146afbd38) * fVar13
                   + fVar13;
          fVar33 = (fRam0000000146afbd3c - fVar33 * fVar33 * fVar21 * fRam0000000146afbd3c) * fVar33
                   + fVar33;
          local_108._4_4_ = fStack_1b4;
          local_108._0_4_ = local_1b8;
          fStack_100 = fStack_1b0;
          local_188 = (float)(((uint)(((_DAT_146afbd30 - fVar6 * fVar6 * fVar27 * _DAT_146afbd30) *
                                       fVar6 + fVar6) * local_188) ^ _DAT_146afbd20) &
                              -(uint)(1e-08 <= fVar27) ^ _DAT_146afbd20);
          fStack_184 = (float)(((uint)(((fRam0000000146afbd34 -
                                        fVar30 * fVar30 * fVar31 * fRam0000000146afbd34) * fVar30 +
                                       fVar30) * fStack_184) ^ uRam0000000146afbd24) &
                               -(uint)(1e-08 <= fVar31) ^ uRam0000000146afbd24);
          fStack_180 = (float)(((uint)(((fRam0000000146afbd38 -
                                        fVar13 * fVar13 * fVar20 * fRam0000000146afbd38) * fVar13 +
                                       fVar13) * fStack_180) ^ uRam0000000146afbd28) &
                               -(uint)(1e-08 <= fVar20) ^ uRam0000000146afbd28);
          fStack_17c = (float)(((uint)(((fRam0000000146afbd3c -
                                        fVar33 * fVar33 * fVar21 * fRam0000000146afbd3c) * fVar33 +
                                       fVar33) * fStack_17c) ^ uRam0000000146afbd2c) &
                               -(uint)(1e-08 <= fVar21) ^ uRam0000000146afbd2c);
          fStack_fc = 0.0;
          local_118 = local_188;
          fStack_114 = fStack_184;
          fStack_110 = fStack_180;
          fStack_10c = fStack_17c;
        }
        fStack_ec = auVar1._12_4_ * fVar26;
        fStack_f0 = fVar18 * fVar32;
        fStack_f4 = fVar29 * fVar25;
        local_f8 = fVar47 * fVar28;
        pfVar8 = (float *)FBoxSphereBounds::TransformBy(local_158,local_138,&local_118);
        local_204 = (float)local_1a8 - uStack_1a0._4_4_;
        fVar47 = uStack_1a0._4_4_ + (float)local_1a8;
        fVar28 = local_1a8._4_4_ - (float)local_198;
        local_1f8 = 1;
        fVar6 = (float)uStack_1a0 - local_198._4_4_;
        local_200 = (float)local_198 + local_1a8._4_4_;
        local_1fc = local_198._4_4_ + (float)uStack_1a0;
        local_210 = local_204;
        if (fVar47 < local_204) {
          local_210 = fVar47;
        }
        local_20c = fVar28;
        if (local_200 < fVar28) {
          local_20c = local_200;
        }
        local_208 = fVar6;
        if (local_1fc < fVar6) {
          local_208 = local_1fc;
        }
        if (local_204 < fVar47) {
          local_204 = fVar47;
        }
        if (local_200 <= fVar28) {
          local_200 = fVar28;
        }
        if (local_1fc <= fVar6) {
          local_1fc = fVar6;
        }
        fVar28 = *pfVar8 - pfVar8[3];
        fVar6 = pfVar8[1] - pfVar8[4];
        fVar47 = pfVar8[2] - pfVar8[5];
        if (fVar28 < local_210) {
          local_210 = fVar28;
        }
        if (fVar6 < local_20c) {
          local_20c = fVar6;
        }
        if (fVar47 < local_208) {
          local_208 = fVar47;
        }
        if (local_204 < fVar28) {
          local_204 = fVar28;
        }
        if (local_200 < fVar6) {
          local_200 = fVar6;
        }
        if (local_1fc < fVar47) {
          local_1fc = fVar47;
        }
        fVar47 = *pfVar8 + pfVar8[3];
        fVar28 = pfVar8[1] + pfVar8[4];
        fVar6 = pfVar8[2] + pfVar8[5];
        if (fVar47 < local_210) {
          local_210 = fVar47;
        }
        if (fVar28 < local_20c) {
          local_20c = fVar28;
        }
        if (fVar6 < local_208) {
          local_208 = fVar6;
        }
        if (local_204 < fVar47) {
          local_204 = fVar47;
        }
        if (local_200 < fVar28) {
          local_200 = fVar28;
        }
        if (local_1fc < fVar6) {
          local_1fc = fVar6;
        }
        FBoxSphereBounds::FBoxSphereBounds(&local_178,&local_210);
        fVar6 = SQRT((pfVar8[1] - fStack_174) * (pfVar8[1] - fStack_174) +
                     (*pfVar8 - local_178) * (*pfVar8 - local_178) +
                     (pfVar8[2] - fStack_170) * (pfVar8[2] - fStack_170)) + pfVar8[6];
        local_190 = SQRT((local_1a8._4_4_ - fStack_174) * (local_1a8._4_4_ - fStack_174) +
                         ((float)local_1a8 - local_178) * ((float)local_1a8 - local_178) +
                         ((float)uStack_1a0 - fStack_170) * ((float)uStack_1a0 - fStack_170)) +
                    local_190;
        if (fVar6 <= local_190) {
          fVar6 = local_190;
        }
        if (fVar6 < local_160) {
          local_160 = fVar6;
        }
        local_1a8 = CONCAT44(fStack_174,local_178);
        uStack_1a0 = CONCAT44(uStack_16c,fStack_170);
        iVar5 = iVar5 + 1;
        local_190 = local_160;
        local_198 = local_168;
        lVar9 = lVar9 + 0x30;
        fVar6 = local_160;
      } while (iVar5 < *(int *)(param_1 + 0x7b0));
    }
    *(undefined8 *)param_2 = local_1a8;
    *(undefined8 *)(param_2 + 2) = uStack_1a0;
    *(undefined8 *)(param_2 + 4) = local_198;
    param_2[6] = local_190;
  }
  return param_2;
}



// FUNCTION 1424e83e0 CalcChannelIndex body=198 status=ok
// SIG undefined CalcChannelIndex(void)

int UInterpTrackAnimControl::CalcChannelIndex(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar5 = 0;
  iVar7 = 0;
  if (0 < *(int *)(lVar1 + 0x38)) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar6 + *(longlong *)(lVar1 + 0x30));
      if (lVar4 == 0) {
LAB_1424e8453:
        lVar4 = 0;
      }
      else {
        lVar3 = GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1424e8453;
      }
      if (lVar4 == param_1) {
        return iVar5;
      }
      if (((lVar4 != 0) && ((*(uint *)(lVar4 + 0x68) >> 2 & 1) == 0)) &&
         (*(longlong *)(lVar4 + 0x90) == *(longlong *)(param_1 + 0x90))) {
        iVar5 = iVar5 + 1;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar7 < *(int *)(lVar1 + 0x38));
  }
  return 0;
}



// FUNCTION 1424e84b0 Call body=91 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_be523bb6e0a12b36afa00b81ffc07c95>,void___cdecl(FInstancedSubObjRef_const_&)>
     ::Call(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar2);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  FInstancedPropertyPath::FInstancedPropertyPath(puVar1 + 1,param_2 + 1);
  return;
}



// FUNCTION 1424e8510 CanAddChildKeyframe body=46 status=ok
// SIG undefined CanAddChildKeyframe(void)

bool UInterpTrackMove::CanAddChildKeyframe(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x278))();
    return lVar1 != 0;
  }
  return false;
}



// FUNCTION 1424e8570 FUN_1424e8570 body=85 status=ok
// SIG undefined FUN_1424e8570(void)

void FUN_1424e8570(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x4b8);
  if (((uVar1 & 1) == 0) && (0 < *(int *)(param_1 + 0x4d0))) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x4c8,0);
    uVar1 = *(uint *)(param_1 + 0x4b8);
  }
  *(uint *)(param_1 + 0x4b8) = ~uVar1 & 2 | uVar1 & 0xfffffff9 | 1;
  AActor::SetActorTickEnabled(param_1,CONCAT71((uint7)(uint3)((uVar1 & 0xfffffff9) >> 8),1));
  return;
}



// FUNCTION 1424e85d0 FUN_1424e85d0 body=410 status=ok
// SIG undefined FUN_1424e85d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424e85d0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)param_1[7];
  plVar5 = param_1 + 6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar7 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 != (longlong *)0x0) {
          lVar4 = *plVar5;
          LOCK();
          plVar1 = plVar3 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          if (lVar4 != 0) {
            FUN_142880d70(lVar4 + 8);
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar8 = iVar7 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + 4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[4] = 0x3f800000;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = lVar4;
  plStack_50 = plVar3;
  if (&local_58 != plVar5) {
    local_58 = *plVar5;
    plStack_50 = (longlong *)param_1[7];
    *plVar5 = lVar4;
    param_1[7] = plVar3;
    local_40 = lVar4;
    plStack_38 = plVar3;
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_50 + 0xc);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*plStack_50 + 8))(plStack_50,1);
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}



// FUNCTION 1424e8770 FUN_1424e8770 body=167 status=ok
// SIG undefined FUN_1424e8770(void)

void FUN_1424e8770(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < (int)param_1[0x94]) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + param_1[0x93]);
      if (lVar1 != 0) {
        lVar3 = UInterpGroupInstDirector::GetPrivateStaticClass();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*param_1 + 0x600))(param_1);
          return;
        }
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < (int)param_1[0x94]);
  }
  return;
}



// FUNCTION 1424e8820 FUN_1424e8820 body=176 status=ok
// SIG undefined FUN_1424e8820(void)

void FUN_1424e8820(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x820)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 0x818)) != 0) {
        FUN_1426adfd0();
        lVar1 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x818));
        if (lVar1 != 0) {
          FUN_14061f570(lVar1);
          FMemory::operator_delete(lVar1,0x1b0);
        }
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x820));
  }
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (*(int *)(param_1 + 0x824) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x818,0);
  return;
}



// FUNCTION 1424e88d0 ClearClickedBannerDelegate body=103 status=ok
// SIG undefined ClearClickedBannerDelegate(void)

void UInGameAdManager::ClearClickedBannerDelegate(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar2 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar1);
  if (iVar2 != -1) {
    iVar3 = *(int *)(param_1 + 0x48);
    iVar4 = (iVar3 - iVar2) + -1;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar2 * 0x10 + *plVar1),
                 (void *)((longlong)(iVar2 + 1) * 0x10 + *plVar1),(longlong)iVar4 << 4);
      iVar3 = *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar3 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
    return;
  }
  return;
}



// FUNCTION 1424e8940 ClearClosedAdDelegate body=103 status=ok
// SIG undefined ClearClosedAdDelegate(void)

void UInGameAdManager::ClearClosedAdDelegate(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar2 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar1);
  if (iVar2 != -1) {
    iVar3 = *(int *)(param_1 + 0x58);
    iVar4 = (iVar3 - iVar2) + -1;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar2 * 0x10 + *plVar1),
                 (void *)((longlong)(iVar2 + 1) * 0x10 + *plVar1),(longlong)iVar4 << 4);
      iVar3 = *(int *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x58) = iVar3 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
    return;
  }
  return;
}



// FUNCTION 1424e89b0 FUN_1424e89b0 body=244 status=ok
// SIG undefined FUN_1424e89b0(void)

void FUN_1424e89b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  if (*(int *)(param_1 + 0x7b4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x7a8,0);
  }
  *(undefined4 *)(param_1 + 2000) = 0;
  if (*(int *)(param_1 + 0x7d4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x7c8,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x810);
  *(undefined8 *)(param_1 + 0x810) = 0;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)plVar1[4];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)plVar1[2];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    FMemory::operator_delete(plVar1,0x38);
  }
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  FUN_1424e8820(param_1);
  *(undefined4 *)(param_1 + 0x800) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x804)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x7f8,0);
  }
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x80c) = 1;
  FUN_1423424e0(param_1);
  FUN_142252d00(param_1);
  return;
}



// FUNCTION 1424e8ab0 ClearLookupKeyGroupName body=30 status=ok
// SIG undefined ClearLookupKeyGroupName(void)

void UInterpTrackMove::ClearLookupKeyGroupName(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  (**(code **)(*param_1 + 0x378))(param_1,param_2,local_res8);
  return;
}



// FUNCTION 1424e8ad0 FUN_1424e8ad0 body=62 status=ok
// SIG undefined FUN_1424e8ad0(void)

void FUN_1424e8ad0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  uVar1 = FUN_141607d00();
  local_res18[0] = FStringTableRegistry::FindStringTableAsset(uVar1,param_2);
  (**(code **)(*param_3 + 0x30))(param_3,local_res18);
  return;
}



// FUNCTION 1424e8b10 CompressImageArray body=349 status=ok
// SIG undefined CompressImageArray(void)

void FImageUtils::CompressImageArray(int param_1,int param_2,undefined8 *param_3,void **param_4)

{
  undefined1 uVar1;
  void *pvVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  void *local_58;
  int local_50;
  int local_48;
  int local_44;
  void *local_40;
  int local_38;
  void *local_30;
  int local_28;
  int local_24;
  
  local_50 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_50;
  _Src = (void *)0x0;
  pvVar2 = (void *)*param_3;
  local_58 = (void *)0x0;
  if (local_50 != 0) {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _Src = local_58;
    ::_guard_xfg_dispatch_icall_nop(local_58,pvVar2,lVar4 << 2);
  }
  iVar3 = param_1 * param_2;
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined1 *)((longlong)_Src + lVar4 * 4 + 2);
      *(undefined1 *)((longlong)_Src + lVar4 * 4 + 2) = *(undefined1 *)((longlong)_Src + lVar4 * 4);
      *(undefined1 *)((longlong)_Src + lVar4 * 4) = uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  FObjectThumbnail::FObjectThumbnail(&local_48);
  local_28 = local_28 + iVar3 * 4;
  local_48 = param_1;
  local_44 = param_2;
  if (local_24 < local_28) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_30);
  }
  ::_guard_xfg_dispatch_icall_nop(local_30,_Src,(longlong)(iVar3 * 4));
  FObjectThumbnail::CompressImageData(&local_48);
  pvVar2 = local_40;
  if (param_4 != &local_40) {
    *(int *)(param_4 + 1) = local_38;
    if ((local_38 == 0) && (*(int *)((longlong)param_4 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_4 + 0xc) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_4,local_38);
      ::_guard_xfg_dispatch_icall_nop(*param_4,pvVar2,(longlong)local_38);
    }
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 1424e8c70 FUN_1424e8c70 body=1597 status=ok
// SIG undefined FUN_1424e8c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424e8c70(longlong *param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  undefined1 auVar10 [16];
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
  undefined1 auStack_198 [32];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
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
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  (**(code **)(*param_1 + 0x398))(param_1,&local_108,param_2);
  uVar6 = FRotator::Quaternion(param_4,&local_178);
  fVar5 = fRam0000000146afbca8;
  fVar4 = fRam0000000146afbca4;
  fVar3 = _DAT_146afbca0;
  fVar2 = DAT_1464aa790;
  fVar29 = DAT_1464aa788._4_4_;
  fVar28 = (float)DAT_1464aa788;
  fVar21 = param_3[2];
  fVar24 = param_3[1];
  fVar27 = *param_3;
  fVar14 = local_e8._0_4_;
  fVar22 = local_e8._4_4_;
  fVar25 = local_e8._8_4_;
  auVar8._4_4_ = DAT_1464aa788._4_4_;
  auVar8._0_4_ = (float)DAT_1464aa788;
  auVar8._8_4_ = DAT_1464aa790;
  auVar8._12_4_ = 0;
  auVar8 = minps(auVar8,local_e8);
  auVar9._4_4_ = -(uint)(auVar8._4_4_ < fRam0000000146afc304);
  auVar9._0_4_ = -(uint)(auVar8._0_4_ < _DAT_146afc300);
  auVar9._8_4_ = -(uint)(auVar8._8_4_ < fRam0000000146afc308);
  auVar9._12_4_ = -(uint)(auVar8._12_4_ < fRam0000000146afc30c);
  iVar7 = movmskps(uVar6,auVar9);
  if (iVar7 == 0) {
    fVar14 = fVar14 * fVar27;
    fVar22 = fVar22 * fVar24;
    fVar25 = fVar25 * fVar21;
    local_118 = local_108 * fStack_16c * _DAT_146afc2e0 + fStack_fc * local_178 +
                fStack_104 * fStack_170 * _DAT_146afc2d0 + fStack_100 * fStack_174 * _DAT_146afc2c0;
    fStack_114 = local_108 * fStack_170 * fRam0000000146afc2e4 + fStack_fc * fStack_174 +
                 fStack_104 * fStack_16c * fRam0000000146afc2d4 +
                 fStack_100 * local_178 * fRam0000000146afc2c4;
    fStack_110 = local_108 * fStack_174 * fRam0000000146afc2e8 + fStack_fc * fStack_170 +
                 fStack_104 * local_178 * fRam0000000146afc2d8 +
                 fStack_100 * fStack_16c * fRam0000000146afc2c8;
    fStack_10c = local_108 * local_178 * fRam0000000146afc2ec + fStack_fc * fStack_16c +
                 fStack_104 * fStack_174 * fRam0000000146afc2dc +
                 fStack_100 * fStack_170 * fRam0000000146afc2cc;
    fVar21 = fVar25 * fStack_104 - fVar22 * fStack_100;
    fVar24 = fVar14 * fStack_100 - fVar25 * local_108;
    fVar27 = fVar22 * local_108 - fVar14 * fStack_104;
    fVar21 = fVar21 + fVar21;
    fVar24 = fVar24 + fVar24;
    fVar27 = fVar27 + fVar27;
    local_f8 = (fVar27 * fStack_104 - fVar24 * fStack_100) + fStack_fc * fVar21 + fVar14 + local_f8;
    fStack_f4 = (fVar21 * fStack_100 - fVar27 * local_108) + fStack_fc * fVar24 + fVar22 + fStack_f4
    ;
    fStack_170 = (fVar24 * local_108 - fVar21 * fStack_104) + fStack_fc * fVar27 + fVar25 +
                 fStack_f0;
  }
  else {
    fVar16 = fStack_104 + fStack_104;
    fVar18 = fStack_100 + fStack_100;
    fVar19 = local_108 * (local_108 + local_108);
    fVar17 = (local_108 + local_108) * fStack_fc;
    fVar36 = (fVar18 * fStack_fc + fVar16 * local_108) * fVar14;
    fVar37 = (fVar17 + fVar18 * fStack_104) * fVar22;
    fVar38 = (fVar16 * fStack_fc + fVar18 * local_108) * fVar25;
    fVar30 = fVar22 * (fVar16 * local_108 - fVar18 * fStack_fc);
    fVar31 = fVar25 * (fVar18 * fStack_104 - fVar17);
    fVar32 = fVar14 * (fVar18 * local_108 - fVar16 * fStack_fc);
    fVar12 = fStack_174 + fStack_174;
    fVar13 = fStack_170 + fStack_170;
    fVar17 = (float)((uint)((_DAT_146afbca0 - (fStack_100 * fVar18 + fStack_104 * fVar16)) * fVar14)
                    & _DAT_146afbcb0);
    fVar18 = (float)((uint)((fRam0000000146afbca4 - (fStack_100 * fVar18 + fVar19)) * fVar22) &
                    uRam0000000146afbcb4);
    fVar11 = (float)((uint)((fRam0000000146afbca8 - (fStack_104 * fVar16 + fVar19)) * fVar25) &
                    uRam0000000146afbcb8);
    fVar19 = (float)((uint)((fRam0000000146afbcac - (fVar19 + fVar19)) * local_e8._12_4_) &
                    uRam0000000146afbcbc);
    fVar15 = (local_178 + local_178) * local_178;
    fVar16 = (local_178 + local_178) * fStack_16c;
    fVar33 = (fVar13 * fStack_16c + fVar12 * local_178) * (float)DAT_1464aa788;
    fVar34 = (fVar16 + fVar13 * fStack_174) * DAT_1464aa788._4_4_;
    fVar35 = (fVar12 * fStack_16c + fVar13 * local_178) * DAT_1464aa790;
    fVar20 = DAT_1464aa788._4_4_ * (fVar12 * local_178 - fVar13 * fStack_16c);
    fVar23 = DAT_1464aa790 * (fVar13 * fStack_174 - fVar16);
    fVar26 = (float)DAT_1464aa788 * (fVar13 * local_178 - fVar12 * fStack_16c);
    fVar16 = (float)((uint)((_DAT_146afbca0 - (fVar13 * fStack_170 + fVar12 * fStack_174)) *
                           (float)DAT_1464aa788) & _DAT_146afbcb0);
    fVar13 = (float)((uint)((fRam0000000146afbca4 - (fVar13 * fStack_170 + fVar15)) *
                           DAT_1464aa788._4_4_) & uRam0000000146afbcb4);
    fVar12 = (float)((uint)((fRam0000000146afbca8 - (fVar12 * fStack_174 + fVar15)) * DAT_1464aa790)
                    & uRam0000000146afbcb8);
    fVar15 = (float)((uint)((fRam0000000146afbcac - (fVar15 + fVar15)) * 0.0) & uRam0000000146afbcbc
                    );
    local_158 = fVar33 * fVar30 + fVar16 * fVar17 + fVar26 * fVar38 + fVar15 * local_f8;
    fStack_154 = fVar33 * fVar18 + fVar16 * fVar36 + fVar26 * fVar31 + fVar15 * fStack_f4;
    fStack_150 = fVar33 * fVar37 + fVar16 * fVar32 + fVar26 * fVar11 + fVar15 * fStack_f0;
    fStack_14c = fVar33 * fVar19 + fVar16 * fVar19 + fVar26 * fVar19 + fVar15 * fRam0000000146afbcac
    ;
    local_148 = fVar13 * fVar30 + fVar20 * fVar17 + fVar34 * fVar38 + fVar15 * local_f8;
    fStack_144 = fVar13 * fVar18 + fVar20 * fVar36 + fVar34 * fVar31 + fVar15 * fStack_f4;
    fStack_140 = fVar13 * fVar37 + fVar20 * fVar32 + fVar34 * fVar11 + fVar15 * fStack_f0;
    fStack_13c = fVar13 * fVar19 + fVar20 * fVar19 + fVar34 * fVar19 + fVar15 * fRam0000000146afbcac
    ;
    local_138 = fVar23 * fVar30 + fVar35 * fVar17 + fVar12 * fVar38 + fVar15 * local_f8;
    fStack_134 = fVar23 * fVar18 + fVar35 * fVar36 + fVar12 * fVar31 + fVar15 * fStack_f4;
    fStack_130 = fVar23 * fVar37 + fVar35 * fVar32 + fVar12 * fVar11 + fVar15 * fStack_f0;
    fStack_12c = fVar23 * fVar19 + fVar35 * fVar19 + fVar12 * fVar19 + fVar15 * fRam0000000146afbcac
    ;
    local_128 = fVar24 * fVar30 + fVar27 * fVar17 + fVar21 * fVar38 +
                fRam0000000146afbcac * local_f8;
    fStack_124 = fVar24 * fVar18 + fVar27 * fVar36 + fVar21 * fVar31 +
                 fRam0000000146afbcac * fStack_f4;
    fStack_120 = fVar24 * fVar37 + fVar27 * fVar32 + fVar21 * fVar11 +
                 fRam0000000146afbcac * fStack_f0;
    fStack_11c = fVar24 * fVar19 + fVar27 * fVar19 + fVar21 * fVar19 +
                 fRam0000000146afbcac * fRam0000000146afbcac;
    FMatrix::RemoveScaling(&local_158);
    fVar21 = (float)(-(uint)(_DAT_146afc300 <= fVar14 * fVar28) & (_DAT_146afc2f0 ^ (uint)fVar3) ^
                    _DAT_146afc2f0);
    fVar24 = (float)(-(uint)(fRam0000000146afc304 <= fVar22 * fVar29) &
                     (uRam0000000146afc2f4 ^ (uint)fVar4) ^ uRam0000000146afc2f4);
    fVar27 = (float)(-(uint)(fRam0000000146afc308 <= fVar25 * fVar2) &
                     (uRam0000000146afc2f8 ^ (uint)fVar5) ^ uRam0000000146afc2f8);
    local_158 = local_158 * fVar21;
    fStack_154 = fStack_154 * fVar21;
    fStack_150 = fStack_150 * fVar21;
    fStack_144 = fStack_144 * fVar24;
    fStack_140 = fStack_140 * fVar24;
    local_148 = local_148 * fVar24;
    fStack_134 = fStack_134 * fVar27;
    fStack_130 = fStack_130 * fVar27;
    local_138 = local_138 * fVar27;
    FQuat::FQuat(&local_178,&local_158);
    local_168 = 0x322bcc77;
    auVar10._0_4_ = local_178 * local_178 + fStack_170 * fStack_170;
    auVar10._4_4_ = fStack_174 * fStack_174 + fStack_16c * fStack_16c;
    auVar10._8_4_ = fStack_170 * fStack_170 + local_178 * local_178;
    auVar10._12_4_ = fStack_16c * fStack_16c + fStack_174 * fStack_174;
    fVar22 = auVar10._4_4_ + auVar10._0_4_;
    fVar25 = auVar10._8_4_ + auVar10._4_4_;
    fVar28 = auVar10._12_4_ + auVar10._8_4_;
    fVar29 = auVar10._0_4_ + auVar10._12_4_;
    auVar1._4_4_ = fVar25;
    auVar1._0_4_ = fVar22;
    auVar1._8_4_ = fVar28;
    auVar1._12_4_ = fVar29;
    auVar8 = rsqrtps(auVar10,auVar1);
    fVar21 = auVar8._0_4_;
    fVar24 = auVar8._4_4_;
    fVar27 = auVar8._8_4_;
    fVar14 = auVar8._12_4_;
    fVar21 = (_DAT_146afbd30 - fVar21 * fVar21 * fVar22 * _DAT_146afbd30) * fVar21 + fVar21;
    fVar24 = (fRam0000000146afbd34 - fVar24 * fVar24 * fVar25 * fRam0000000146afbd34) * fVar24 +
             fVar24;
    fVar27 = (fRam0000000146afbd38 - fVar27 * fVar27 * fVar28 * fRam0000000146afbd38) * fVar27 +
             fVar27;
    fVar14 = (fRam0000000146afbd3c - fVar14 * fVar14 * fVar29 * fRam0000000146afbd3c) * fVar14 +
             fVar14;
    local_118 = (float)(((uint)(((_DAT_146afbd30 - fVar21 * fVar21 * fVar22 * _DAT_146afbd30) *
                                 fVar21 + fVar21) * local_178) ^ _DAT_146afbd20) &
                        -(uint)(1e-08 <= fVar22) ^ _DAT_146afbd20);
    fStack_114 = (float)(((uint)(((fRam0000000146afbd34 -
                                  fVar24 * fVar24 * fVar25 * fRam0000000146afbd34) * fVar24 + fVar24
                                 ) * fStack_174) ^ uRam0000000146afbd24) & -(uint)(1e-08 <= fVar25)
                        ^ uRam0000000146afbd24);
    fStack_110 = (float)(((uint)(((fRam0000000146afbd38 -
                                  fVar27 * fVar27 * fVar28 * fRam0000000146afbd38) * fVar27 + fVar27
                                 ) * fStack_170) ^ uRam0000000146afbd28) & -(uint)(1e-08 <= fVar28)
                        ^ uRam0000000146afbd28);
    fStack_10c = (float)(((uint)(((fRam0000000146afbd3c -
                                  fVar14 * fVar14 * fVar29 * fRam0000000146afbd3c) * fVar14 + fVar14
                                 ) * fStack_16c) ^ uRam0000000146afbd2c) & -(uint)(1e-08 <= fVar29)
                        ^ uRam0000000146afbd2c);
    local_f8 = local_128;
    fStack_f4 = fStack_124;
    fStack_170 = fStack_120;
  }
  *param_5 = CONCAT44(fStack_f4,local_f8);
  *(float *)(param_5 + 1) = fStack_170;
  FQuat::Rotator(&local_118,&local_178);
  *param_6 = CONCAT44(fStack_174,local_178);
  *(float *)(param_6 + 1) = fStack_170;
  return;
}



// FUNCTION 1424e92b0 FUN_1424e92b0 body=274 status=ok
// SIG undefined FUN_1424e92b0(void)

void FUN_1424e92b0(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xd);
  lVar2 = param_3[4];
  if (lVar2 != 0) {
    lVar4 = UInterpGroupInst::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0)) {
      lVar4 = FUN_1429ba1d0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         ((((char)param_1[10] == '\x01' && ((*(byte *)(lVar2 + 0x490) & 1) == 0)) ||
          (((char)param_1[10] == '\x02' && ((*(byte *)(lVar2 + 0x490) & 1) != 0))))))
      goto LAB_1424e9398;
    }
  }
  if ((~(byte)(uVar1 >> 2) & 1) != 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3);
    return;
  }
LAB_1424e9398:
  (**(code **)(*param_3 + 0x280))(param_3,param_1);
  return;
}



// FUNCTION 1424e93d0 FUN_1424e93d0 body=257 status=ok
// SIG undefined FUN_1424e93d0(void)

void FUN_1424e93d0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  byte bVar4;
  
  lVar1 = *(longlong *)(param_3 + 0x20);
  bVar4 = ~(byte)(*(uint *)(param_1 + 0xd) >> 2) & 1;
  if (lVar1 != 0) {
    lVar3 = UInterpGroupInst::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 != 0)) {
      lVar3 = FUN_1429ba1d0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         ((((char)param_1[10] == '\x01' && ((*(byte *)(lVar1 + 0x490) & 1) == 0)) ||
          (((char)param_1[10] == '\x02' && ((*(byte *)(lVar1 + 0x490) & 1) != 0)))))) {
        bVar4 = 0;
      }
    }
  }
  if (bVar4 == 0) {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424e94ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3);
  return;
}



// FUNCTION 1424e94e0 FUN_1424e94e0 body=292 status=ok
// SIG undefined FUN_1424e94e0(void)

void FUN_1424e94e0(longlong *param_1,undefined4 param_2,longlong *param_3,undefined1 param_4)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xd);
  lVar2 = param_3[4];
  if (lVar2 != 0) {
    lVar4 = UInterpGroupInst::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0)) {
      lVar4 = FUN_1429ba1d0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         ((((char)param_1[10] == '\x01' && ((*(byte *)(lVar2 + 0x490) & 1) == 0)) ||
          (((char)param_1[10] == '\x02' && ((*(byte *)(lVar2 + 0x490) & 1) != 0))))))
      goto LAB_1424e95d5;
    }
  }
  if ((~(byte)(uVar1 >> 2) & 1) != 0) {
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3,param_4);
    return;
  }
LAB_1424e95d5:
  (**(code **)(*param_3 + 0x280))(param_3,param_1);
  return;
}



// FUNCTION 1424e9610 ConditionallyReversePosition body=63 status=ok
// SIG undefined ConditionallyReversePosition(void)

ulonglong UInterpTrackAnimControl::ConditionallyReversePosition
                    (undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  float fVar1;
  
  if (((*(byte *)(param_2 + 0x1c) & 2) != 0) &&
     ((param_3 != 0 || (param_3 = *(longlong *)(param_2 + 8), param_3 != 0)))) {
    fVar1 = *(float *)(param_2 + 0x10);
    return (ulonglong)
           (uint)(((*(float *)(param_3 + 0x90) - (fVar1 + *(float *)(param_2 + 0x14))) -
                  ((float)param_4 - fVar1)) + fVar1);
  }
  return param_4;
}



// FUNCTION 1424e9660 FUN_1424e9660 body=133 status=ok
// SIG undefined FUN_1424e9660(void)

undefined8 * FUN_1424e9660(int param_1)

{
  undefined8 *_Dst;
  
  if (param_1 != 0) {
    return (undefined8 *)0x0;
  }
  _Dst = (undefined8 *)operator_new(0x60);
  if (_Dst != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
    *(undefined4 *)((longlong)_Dst + 10) = 0;
    *(undefined1 *)((longlong)_Dst + 0xe) = 0;
    *_Dst = &PTR_FUN_1450d57d8;
    _Dst[2] = 0;
    _Dst[3] = 0;
    _Dst[4] = 0;
    _Dst[5] = 0;
    _Dst[6] = 0;
    _Dst[7] = 0;
    _Dst[8] = 0;
    _Dst[9] = 0;
    _Dst[10] = 0;
    *(undefined2 *)(_Dst + 0xb) = 0;
    return _Dst;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424e96f0 FUN_1424e96f0 body=2288 status=ok
// SIG undefined FUN_1424e96f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424e96f0(longlong *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
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
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
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
  longlong local_168;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  longlong local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  iVar15 = (int)param_1[0xf6];
  lVar22 = (longlong)iVar15;
  lVar16 = (**(code **)(*param_1 + 0x6b8))();
  local_168 = lVar16;
  if (lVar16 == 0) {
    lVar16 = param_1[0x104];
    iVar15 = (int)lVar16 + iVar15;
    *(int *)(param_1 + 0x104) = iVar15;
    if (*(int *)((longlong)param_1 + 0x824) < iVar15) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x103);
    }
    _guard_xfg_dispatch_icall_nop((void *)(param_1[0x103] + (longlong)(int)lVar16 * 8),0,lVar22 * 8)
    ;
  }
  else {
    lVar17 = param_1[0x24];
    if (lVar17 == 0) {
      lVar17 = FUN_1423407b0(param_1);
    }
    local_148 = *(undefined8 *)(lVar17 + 0x218);
    plVar1 = param_1 + 0x103;
    iVar3 = (int)param_1[0x104];
    if (iVar3 < iVar15) {
      *(int *)(param_1 + 0x104) = iVar15;
      if (*(int *)((longlong)param_1 + 0x824) < iVar15) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
    }
    else if ((iVar15 < iVar3) && (iVar15 != iVar3)) {
      *(int *)(param_1 + 0x104) = iVar15;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    uVar21 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    if (0 < iVar15) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1d0,iVar15);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_140 = lVar22;
    if (0 < iVar15) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(&local_1c0,iVar15);
      uVar23 = uVar21;
      uVar24 = uVar21;
      uVar55 = _DAT_146afbcb0;
      uVar56 = uRam0000000146afbcb4;
      uVar57 = uRam0000000146afbcb8;
      uVar58 = uRam0000000146afbcbc;
      do {
        piVar18 = (int *)0x0;
        lVar16 = param_1[0xf5];
        auVar25 = *(undefined1 (*) [16])(param_1 + 0x46);
        fVar4 = auVar25._0_4_;
        fVar6 = auVar25._4_4_;
        fVar8 = auVar25._8_4_;
        fVar10 = auVar25._12_4_;
        fVar27 = *(float *)(param_1 + 0x42);
        fVar50 = *(float *)((longlong)param_1 + 0x214);
        fVar29 = *(float *)(param_1 + 0x43);
        fVar30 = *(float *)((longlong)param_1 + 0x21c);
        _local_158 = *(undefined1 (*) [16])(uVar24 + 0x20 + lVar16);
        fVar5 = local_158._0_4_;
        fVar7 = local_158._4_4_;
        fVar9 = local_158._8_4_;
        fVar11 = local_158._12_4_;
        pfVar2 = (float *)(uVar24 + lVar16);
        fVar31 = *pfVar2;
        fVar32 = pfVar2[1];
        fVar43 = pfVar2[2];
        fVar42 = pfVar2[3];
        pfVar2 = (float *)(uVar24 + 0x10 + lVar16);
        fVar51 = *pfVar2;
        fVar52 = pfVar2[1];
        fVar53 = pfVar2[2];
        local_108 = 0.0;
        fStack_104 = 0.0;
        fStack_100 = 0.0;
        fStack_fc = fRam0000000146afbcac;
        local_e8 = (float)((uint)_DAT_146afbca0 & uVar55);
        fStack_e4 = (float)((uint)fRam0000000146afbca4 & uVar56);
        fStack_e0 = (float)((uint)fRam0000000146afbca8 & uVar57);
        fStack_dc = (float)((uint)fRam0000000146afbcac & uVar58);
        auVar25 = minps(_local_158,auVar25);
        auVar26._4_4_ = -(uint)(auVar25._4_4_ < fRam0000000146afc304);
        auVar26._0_4_ = -(uint)(auVar25._0_4_ < _DAT_146afc300);
        auVar26._8_4_ = -(uint)(auVar25._8_4_ < fRam0000000146afc308);
        auVar26._12_4_ = -(uint)(auVar25._12_4_ < fRam0000000146afc30c);
        iVar15 = movmskps((int)lVar16,auVar26);
        _local_f8 = ZEXT816(0);
        local_128 = _DAT_146afc300;
        fStack_124 = fRam0000000146afc304;
        fStack_120 = fRam0000000146afc308;
        fStack_11c = fRam0000000146afc30c;
        if (iVar15 == 0) {
          fVar51 = fVar51 * fVar4;
          fVar52 = fVar52 * fVar6;
          fVar53 = fVar53 * fVar8;
          fVar54 = pfVar2[3] * fVar10;
          local_108 = fVar27 * fVar42 * _DAT_146afc2e0 + fVar31 * fVar30 +
                      fVar50 * fVar43 * _DAT_146afc2d0 + fVar29 * fVar32 * _DAT_146afc2c0;
          fStack_104 = fVar27 * fVar43 * fRam0000000146afc2e4 + fVar32 * fVar30 +
                       fVar50 * fVar42 * fRam0000000146afc2d4 +
                       fVar29 * fVar31 * fRam0000000146afc2c4;
          fStack_100 = fVar27 * fVar32 * fRam0000000146afc2e8 + fVar43 * fVar30 +
                       fVar50 * fVar31 * fRam0000000146afc2d8 +
                       fVar29 * fVar42 * fRam0000000146afc2c8;
          fStack_fc = fVar27 * fVar31 * fRam0000000146afc2ec + fVar42 * fVar30 +
                      fVar50 * fVar32 * fRam0000000146afc2dc +
                      fVar29 * fVar43 * fRam0000000146afc2cc;
          fVar31 = fVar53 * fVar50 - fVar52 * fVar29;
          fVar32 = fVar51 * fVar29 - fVar53 * fVar27;
          fVar43 = fVar52 * fVar27 - fVar51 * fVar50;
          fVar42 = fVar54 * fVar30 - fVar54 * fVar30;
          fVar31 = fVar31 + fVar31;
          fVar32 = fVar32 + fVar32;
          fVar43 = fVar43 + fVar43;
          fVar42 = fVar42 + fVar42;
          local_f8._4_4_ =
               (fVar31 * fVar29 - fVar43 * fVar27) + fVar32 * fVar30 + fVar52 +
               *(float *)((longlong)param_1 + 0x224);
          local_f8._0_4_ =
               (fVar43 * fVar50 - fVar32 * fVar29) + fVar31 * fVar30 + fVar51 +
               *(float *)(param_1 + 0x44);
          uStack_f0._0_4_ =
               (fVar32 * fVar27 - fVar31 * fVar50) + fVar43 * fVar30 + fVar53 +
               *(float *)(param_1 + 0x45);
          uStack_f0._4_4_ =
               (fVar42 * fVar30 - fVar42 * fVar30) + fVar42 * fVar30 + fVar54 +
               *(float *)((longlong)param_1 + 0x22c);
        }
        else {
          fVar54 = *(float *)(param_1 + 0x44);
          fVar12 = *(float *)((longlong)param_1 + 0x224);
          fVar13 = *(float *)(param_1 + 0x45);
          fVar33 = fVar50 + fVar50;
          fVar35 = fVar29 + fVar29;
          fVar36 = (fVar27 + fVar27) * fVar27;
          fVar34 = (fVar27 + fVar27) * fVar30;
          fVar47 = (fVar35 * fVar30 + fVar33 * fVar27) * fVar4;
          fVar48 = (fVar34 + fVar35 * fVar50) * fVar6;
          fVar49 = (fVar33 * fVar30 + fVar35 * fVar27) * fVar8;
          fVar37 = fVar6 * (fVar33 * fVar27 - fVar35 * fVar30);
          fVar39 = fVar8 * (fVar35 * fVar50 - fVar34);
          fVar41 = fVar4 * (fVar35 * fVar27 - fVar33 * fVar30);
          fVar27 = (float)((uint)((_DAT_146afbca0 - (fVar35 * fVar29 + fVar33 * fVar50)) * fVar4) &
                          uVar55);
          fVar29 = (float)((uint)((fRam0000000146afbca4 - (fVar35 * fVar29 + fVar36)) * fVar6) &
                          uVar56);
          fVar33 = (float)((uint)((fRam0000000146afbca8 - (fVar33 * fVar50 + fVar36)) * fVar8) &
                          uVar57);
          fVar35 = (float)((uint)((fRam0000000146afbcac - (fVar36 + fVar36)) * fVar10) & uVar58);
          fVar30 = fVar32 + fVar32;
          fVar34 = fVar43 + fVar43;
          fVar36 = fVar31 * (fVar31 + fVar31);
          fVar50 = fVar42 * (fVar31 + fVar31);
          fVar44 = (fVar42 * fVar34 + fVar31 * fVar30) * fVar5;
          fVar45 = (fVar50 + fVar32 * fVar34) * fVar7;
          fVar46 = (fVar42 * fVar30 + fVar31 * fVar34) * fVar9;
          fVar38 = fVar7 * (fVar31 * fVar30 - fVar42 * fVar34);
          fVar40 = fVar9 * (fVar32 * fVar34 - fVar50);
          fVar42 = fVar5 * (fVar31 * fVar34 - fVar42 * fVar30);
          fVar50 = (float)((uint)((_DAT_146afbca0 - (fVar43 * fVar34 + fVar32 * fVar30)) * fVar5) &
                          uVar55);
          fVar31 = (float)((uint)((fRam0000000146afbca4 - (fVar43 * fVar34 + fVar36)) * fVar7) &
                          uVar56);
          fVar30 = (float)((uint)((fRam0000000146afbca8 - (fVar32 * fVar30 + fVar36)) * fVar9) &
                          uVar57);
          fVar32 = (float)((uint)((fRam0000000146afbcac - (fVar36 + fVar36)) * fVar11) & uVar58);
          local_1a8 = fVar44 * fVar37 + fVar50 * fVar27 + fVar42 * fVar49 + fVar32 * fVar54;
          fStack_1a4 = fVar44 * fVar29 + fVar50 * fVar47 + fVar42 * fVar39 + fVar32 * fVar12;
          fStack_1a0 = fVar44 * fVar48 + fVar50 * fVar41 + fVar42 * fVar33 + fVar32 * fVar13;
          fStack_19c = fVar44 * fVar35 + fVar50 * fVar35 + fVar42 * fVar35 +
                       fVar32 * fRam0000000146afbcac;
          local_198 = fVar31 * fVar37 + fVar38 * fVar27 + fVar45 * fVar49 + fVar32 * fVar54;
          fStack_194 = fVar31 * fVar29 + fVar38 * fVar47 + fVar45 * fVar39 + fVar32 * fVar12;
          fStack_190 = fVar31 * fVar48 + fVar38 * fVar41 + fVar45 * fVar33 + fVar32 * fVar13;
          fStack_18c = fVar31 * fVar35 + fVar38 * fVar35 + fVar45 * fVar35 +
                       fVar32 * fRam0000000146afbcac;
          local_188 = fVar40 * fVar37 + fVar46 * fVar27 + fVar30 * fVar49 + fVar32 * fVar54;
          fStack_184 = fVar40 * fVar29 + fVar46 * fVar47 + fVar30 * fVar39 + fVar32 * fVar12;
          fStack_180 = fVar40 * fVar48 + fVar46 * fVar41 + fVar30 * fVar33 + fVar32 * fVar13;
          fStack_17c = fVar40 * fVar35 + fVar46 * fVar35 + fVar30 * fVar35 +
                       fVar32 * fRam0000000146afbcac;
          local_178 = fVar52 * fVar37 + fVar51 * fVar27 + fVar53 * fVar49 +
                      fRam0000000146afbcac * fVar54;
          fStack_174 = fVar52 * fVar29 + fVar51 * fVar47 + fVar53 * fVar39 +
                       fRam0000000146afbcac * fVar12;
          fStack_170 = fVar52 * fVar48 + fVar51 * fVar41 + fVar53 * fVar33 +
                       fRam0000000146afbcac * fVar13;
          fStack_16c = fVar52 * fVar35 + fVar51 * fVar35 + fVar53 * fVar35 +
                       fRam0000000146afbcac * fRam0000000146afbcac;
          FMatrix::RemoveScaling(&local_1a8);
          fVar27 = (float)(-(uint)(local_128 <= fVar5 * fVar4) &
                           (_DAT_146afc2f0 ^ (uint)_DAT_146afbca0) ^ _DAT_146afc2f0);
          fVar50 = (float)(-(uint)(fStack_124 <= fVar7 * fVar6) &
                           (uRam0000000146afc2f4 ^ (uint)fRam0000000146afbca4) ^
                          uRam0000000146afc2f4);
          fVar29 = (float)(-(uint)(fStack_120 <= fVar9 * fVar8) &
                           (uRam0000000146afc2f8 ^ (uint)fRam0000000146afbca8) ^
                          uRam0000000146afc2f8);
          local_1a8 = local_1a8 * fVar27;
          fStack_1a4 = fStack_1a4 * fVar27;
          fStack_1a0 = fStack_1a0 * fVar27;
          fStack_190 = fStack_190 * fVar50;
          fStack_194 = fStack_194 * fVar50;
          local_198 = local_198 * fVar50;
          fStack_180 = fStack_180 * fVar29;
          local_188 = local_188 * fVar29;
          fStack_184 = fStack_184 * fVar29;
          FQuat::FQuat(&local_138,&local_1a8);
          local_1d8 = 0x322bcc77;
          auVar28._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
          auVar28._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
          auVar28._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
          auVar28._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
          fVar31 = auVar28._4_4_ + auVar28._0_4_;
          fVar32 = auVar28._8_4_ + auVar28._4_4_;
          fVar43 = auVar28._12_4_ + auVar28._8_4_;
          fVar42 = auVar28._0_4_ + auVar28._12_4_;
          auVar25._4_4_ = fVar32;
          auVar25._0_4_ = fVar31;
          auVar25._8_4_ = fVar43;
          auVar25._12_4_ = fVar42;
          auVar25 = rsqrtps(auVar28,auVar25);
          fVar27 = auVar25._0_4_;
          fVar50 = auVar25._4_4_;
          fVar29 = auVar25._8_4_;
          fVar30 = auVar25._12_4_;
          fVar27 = (_DAT_146afbd30 - fVar27 * fVar27 * fVar31 * _DAT_146afbd30) * fVar27 + fVar27;
          fVar50 = (fRam0000000146afbd34 - fVar50 * fVar50 * fVar32 * fRam0000000146afbd34) * fVar50
                   + fVar50;
          fVar29 = (fRam0000000146afbd38 - fVar29 * fVar29 * fVar43 * fRam0000000146afbd38) * fVar29
                   + fVar29;
          fVar30 = (fRam0000000146afbd3c - fVar30 * fVar30 * fVar42 * fRam0000000146afbd3c) * fVar30
                   + fVar30;
          local_f8._4_4_ = fStack_174;
          local_f8._0_4_ = local_178;
          uStack_f0._0_4_ = fStack_170;
          local_138 = (float)(((uint)(((_DAT_146afbd30 - fVar27 * fVar27 * fVar31 * _DAT_146afbd30)
                                       * fVar27 + fVar27) * local_138) ^ _DAT_146afbd20) &
                              -(uint)(1e-08 <= fVar31) ^ _DAT_146afbd20);
          fStack_134 = (float)(((uint)(((fRam0000000146afbd34 -
                                        fVar50 * fVar50 * fVar32 * fRam0000000146afbd34) * fVar50 +
                                       fVar50) * fStack_134) ^ uRam0000000146afbd24) &
                               -(uint)(1e-08 <= fVar32) ^ uRam0000000146afbd24);
          fStack_130 = (float)(((uint)(((fRam0000000146afbd38 -
                                        fVar29 * fVar29 * fVar43 * fRam0000000146afbd38) * fVar29 +
                                       fVar29) * fStack_130) ^ uRam0000000146afbd28) &
                               -(uint)(1e-08 <= fVar43) ^ uRam0000000146afbd28);
          fStack_12c = (float)(((uint)(((fRam0000000146afbd3c -
                                        fVar30 * fVar30 * fVar42 * fRam0000000146afbd3c) * fVar30 +
                                       fVar30) * fStack_12c) ^ uRam0000000146afbd2c) &
                               -(uint)(1e-08 <= fVar42) ^ uRam0000000146afbd2c);
          uStack_f0._4_4_ = 0;
          local_108 = local_138;
          fStack_104 = fStack_134;
          fStack_100 = fStack_130;
          fStack_fc = fStack_12c;
        }
        fStack_dc = fVar11 * fVar10;
        fStack_e0 = fVar9 * fVar8;
        fStack_e4 = fVar7 * fVar6;
        local_e8 = fVar5 * fVar4;
        local_158._4_4_ = fStack_e4;
        local_158._0_4_ = local_e8;
        fStack_150 = fStack_e0;
        fStack_14c = fStack_dc;
        if (((0.0001 < ABS(local_e8)) || (0.0001 < ABS(fStack_e4))) || (0.0001 < ABS(fStack_e0))) {
          lVar16 = operator_new(0x1b0);
          if (lVar16 != 0) {
            piVar18 = (int *)FUN_1426852e0(lVar16);
          }
          uVar14 = local_1c8;
          lVar16 = (longlong)(int)local_1c8;
          iVar15 = (int)local_1c8 + 1;
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar15);
          if (local_1c8._4_4_ < iVar15) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_1d0,uVar14 & 0xffffffff);
          }
          *(int **)(local_1d0 + lVar16 * 8) = piVar18;
          *(int **)(*plVar1 + uVar21 * 8) = piVar18;
          thunk_FUN_142686190(piVar18,param_1 + 0x76);
          uVar14 = local_1b8;
          *(byte *)(piVar18 + 4) = *(byte *)(piVar18 + 4) & 0xb7;
          *piVar18 = (int)uVar23;
          if (*(char *)((longlong)param_1 + 0x24e) == '\x02') {
            plVar20 = (longlong *)0x0;
            if (DAT_146533118 != 0) {
              plVar20 = param_1;
            }
            FUN_142685570(local_118,plVar20);
            local_1e0 = local_118;
            local_1e8 = local_148;
            FUN_14269a1d0(piVar18,local_168,&local_108,param_1);
            uVar55 = _DAT_146afbcb0;
            uVar56 = uRam0000000146afbcb4;
            uVar57 = uRam0000000146afbcb8;
            uVar58 = uRam0000000146afbcbc;
          }
          else {
            lVar16 = (longlong)(int)local_1b8;
            iVar15 = (int)local_1b8 + 1;
            local_1b8 = CONCAT44(local_1b8._4_4_,iVar15);
            if (local_1b8._4_4_ < iVar15) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1c0,uVar14 & 0xffffffff);
            }
            puVar19 = (undefined8 *)(lVar16 * 0x30 + local_1c0);
            *puVar19 = CONCAT44(fStack_104,local_108);
            puVar19[1] = CONCAT44(fStack_fc,fStack_100);
            puVar19[2] = local_f8;
            puVar19[3] = uStack_f0;
            puVar19[4] = CONCAT44(fStack_e4,local_e8);
            puVar19[5] = CONCAT44(fStack_dc,fStack_e0);
            uVar55 = _DAT_146afbcb0;
            uVar56 = uRam0000000146afbcb4;
            uVar57 = uRam0000000146afbcb8;
            uVar58 = uRam0000000146afbcbc;
          }
        }
        else {
          *(undefined8 *)(*plVar1 + uVar21 * 8) = 0;
        }
        uVar23 = (ulonglong)((int)uVar23 + 1);
        uVar21 = uVar21 + 1;
        uVar24 = uVar24 + 0x30;
        lVar16 = local_168;
      } while ((longlong)uVar21 < local_140);
    }
    if ((0 < (int)local_1c8) && (*(char *)((longlong)param_1 + 0x24e) != '\x02')) {
      lVar22 = param_1[0x24];
      if (lVar22 == 0) {
        lVar22 = FUN_1423407b0(param_1);
      }
      local_1e8 = *(undefined8 *)(lVar22 + 0x218);
      FUN_14269bda0(&local_1d0,&local_1c0,lVar16,param_1);
    }
    if (local_1c0 != 0) {
      FMemory::Free();
    }
    if (local_1d0 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1424e9fe0 FUN_1424e9fe0 body=182 status=ok
// SIG undefined FUN_1424e9fe0(void)

undefined8 FUN_1424e9fe0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  
  if ((*(longlong *)(param_1 + 0x3f0) != 0) && (*(int *)(*(longlong *)(param_1 + 0x3f0) + 8) != 0))
  {
    uVar4 = FUN_142728740();
    puVar2 = *(undefined8 **)(param_1 + 0x3f0);
    iVar1 = *(int *)(puVar2 + 1);
    if (iVar1 != 0) {
      iVar7 = (int)param_3[1];
      if (*(int *)((longlong)param_3 + 0xc) < iVar7 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
        iVar7 = (int)param_3[1];
      }
      plVar5 = (longlong *)*puVar2;
      plVar6 = (longlong *)(*param_3 + (longlong)iVar7 * 8);
      iVar7 = iVar1;
      do {
        lVar3 = *plVar5;
        *plVar6 = lVar3;
        if (lVar3 != 0) {
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        }
        plVar6 = plVar6 + 1;
        plVar5 = plVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      *(int *)(param_3 + 1) = (int)param_3[1] + iVar1;
    }
    return uVar4;
  }
  uVar4 = FUN_142728740();
  return uVar4;
}



// FUNCTION 1424ea0a0 CreateHitProxyData body=10 status=ok
// SIG undefined CreateHitProxyData(void)

void UInstancedStaticMeshComponent::CreateHitProxyData(undefined8 param_1,undefined8 param_2)

{
  TArray<TRefCountPtr<HHitProxy>,FDefaultAllocator>::Empty(param_2,0);
  return;
}



// FUNCTION 1424ea0b0 FUN_1424ea0b0 body=832 status=ok
// SIG undefined FUN_1424ea0b0(void)

undefined8 * FUN_1424ea0b0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  longlong local_res8;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar11 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  if (*(longlong *)(param_1 + 0x7e8) == 0) {
    FUN_1424fbbf0(param_1,1,0,0);
  }
  if ((0 < *(int *)(param_1 + 0x7b0)) && (*(longlong *)(param_1 + 0x728) != 0)) {
    cVar4 = FUN_142820890(*(longlong *)(param_1 + 0x728),1,0xffffffff);
    if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x7e8) != 0)) {
      if (*(int *)(param_1 + 0x80c) != 0) {
        *(undefined4 *)(param_1 + 0x800) = 0;
        if (0x7fffffff < *(uint *)(param_1 + 0x804)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(param_1 + 0x7f8,0);
        }
        *(undefined8 *)(param_1 + 0x808) = 0;
        local_38 = 0;
        local_34 = 1;
        local_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        local_48 = (undefined8 *)0x0;
        uStack_40 = 0;
        FStaticMeshInstanceData::AllocateBuffers(&local_68,0,0);
        FUN_1424e67a0(param_1,&local_68,*(undefined8 *)(param_1 + 0x7e8));
        FUN_14250b800(*(undefined8 *)(param_1 + 0x7e8),&local_68);
        if (local_68 != (undefined8 *)0x0) {
          (**(code **)*local_68)(local_68,1);
        }
        if (local_48 != (undefined8 *)0x0) {
          (**(code **)*local_48)(local_48,1);
        }
        if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,1);
        }
      }
      *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x10);
      puVar5 = (undefined8 *)operator_new(0x480);
      if (puVar5 != (undefined8 *)0x0) {
        lVar6 = *(longlong *)(param_1 + 0x120);
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0(param_1);
        }
        uVar1 = *(undefined4 *)(lVar6 + 0x1c0);
        FUN_142817110(puVar5,param_1,1);
        *puVar5 = &PTR_FUN_1450ce980;
        puVar5[0x7c] = *(undefined8 *)(param_1 + 0x728);
        FUN_1424b4b40(puVar5 + 0x7d,param_1,uVar1);
        if (0 < *(int *)(puVar5 + 0x77)) {
          local_res8 = 0;
          puVar12 = puVar11;
          do {
            lVar6 = *(longlong *)(local_res8 + puVar5[0x76]);
            puVar9 = puVar11;
            puVar10 = puVar11;
            if (0 < *(int *)(lVar6 + 0x30)) {
              do {
                lVar2 = *(longlong *)(lVar6 + 0x28);
                plVar3 = *(longlong **)(lVar2 + (longlong)puVar10);
                cVar4 = (**(code **)(*plVar3 + 0x2f0))(plVar3,7);
                if (cVar4 == '\0') {
                  uVar7 = UMaterial::GetDefaultMaterial(0);
                  *(undefined8 *)(lVar2 + (longlong)puVar10) = uVar7;
                }
                uVar8 = (int)puVar9 + 1;
                puVar9 = (undefined8 *)(ulonglong)uVar8;
                puVar10 = puVar10 + 2;
              } while ((int)uVar8 < *(int *)(lVar6 + 0x30));
            }
            local_res8 = local_res8 + 8;
            uVar8 = (int)puVar12 + 1;
            puVar12 = (undefined8 *)(ulonglong)uVar8;
          } while ((int)uVar8 < *(int *)(puVar5 + 0x77));
        }
        bVar13 = DAT_1464c9c6c == '\0';
        puVar5[0x85] = *(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x38);
        *(undefined4 *)(puVar5 + 0x86) = *(undefined4 *)(param_1 + 0x7bc);
        *(undefined4 *)((longlong)puVar5 + 0x434) = *(undefined4 *)(param_1 + 0x7c0);
        *(undefined4 *)(puVar5 + 0x87) = *(undefined4 *)((longlong)puVar5 + 0x3cc);
        *(undefined2 *)((longlong)puVar5 + 0x43c) = 0x101;
        if (bVar13) {
          puVar11 = puVar5 + 0x7d;
        }
        puVar5[0x84] = puVar11;
        puVar5[0x88] = puVar5[0x84];
        puVar5[0x89] = puVar5[0x85];
        puVar5[0x8c] = puVar5[0x84];
        puVar5[0x8d] = puVar5[0x85];
        puVar5[0x8a] = puVar5[0x86];
        puVar5[0x8b] = puVar5[0x87];
        *(undefined1 *)((longlong)puVar5 + 0x45d) = 0;
        puVar5[0x8e] = puVar5[0x86];
        puVar5[0x8f] = puVar5[0x87];
        *(undefined1 *)((longlong)puVar5 + 0x47c) = 0;
        puVar11 = puVar5;
      }
      return puVar11;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424ea3f0 FUN_1424ea3f0 body=284 status=ok
// SIG undefined FUN_1424ea3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424ea3f0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong *local_70;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_68 = 1;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_70 = param_2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  local_90 = &local_78;
  local_98 = param_3;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_88,&DAT_146ab6e78,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_6,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,param_5);
  local_98 = param_4;
  (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_88,&DAT_146ab6e78,*param_6);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_7,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  return;
}



// FUNCTION 1424ea510 FUN_1424ea510 body=450 status=ok
// SIG undefined FUN_1424ea510(void)

void FUN_1424ea510(int param_1,int param_2,int param_3,int param_4,longlong *param_5,
                  longlong param_6)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  
  fVar9 = (float)param_1;
  fVar10 = fVar9 / ((float)param_3 / (float)param_4);
  fVar8 = (float)param_2;
  if (fVar8 < fVar10) {
    fVar9 = fVar8 * ((float)param_3 / (float)param_4);
  }
  if (fVar8 <= fVar10) {
    fVar10 = fVar8;
  }
  iVar3 = 0;
  local_68 = (void *)0x0;
  local_5c = 0;
  iVar6 = (int)ROUND((fVar9 + fVar9) - 0.5) >> 1;
  uVar7 = (int)ROUND((fVar10 + fVar10) - 0.5) >> 1;
  local_60 = uVar7 * iVar6;
  if (0 < local_60) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_68,0);
  }
  pvVar1 = local_68;
  iVar2 = iVar3;
  if ((int)uVar7 < param_2) {
    iVar2 = (int)(param_2 - uVar7) / 2;
  }
  if (iVar6 < param_1) {
    iVar3 = (param_1 - iVar6) / 2;
  }
  if (0 < (int)uVar7) {
    lVar4 = (longlong)(iVar2 * param_1 + iVar3) << 2;
    uVar5 = (ulonglong)uVar7;
    _Dst = local_68;
    do {
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)(*param_5 + lVar4),(longlong)(iVar6 * 4));
      lVar4 = lVar4 + (longlong)param_1 * 4;
      _Dst = (void *)((longlong)_Dst + (longlong)iVar6 * 4);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar3 = param_3 * param_4 + *(int *)(param_6 + 8);
  *(int *)(param_6 + 8) = iVar3;
  if (*(int *)(param_6 + 0xc) < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_6);
  }
  FUN_1424f9d40((int)fVar9,(int)fVar10,&local_68,param_3,param_4,param_6,1);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}



// FUNCTION 1424ea6e0 FUN_1424ea6e0 body=146 status=ok
// SIG undefined FUN_1424ea6e0(void)

void FUN_1424ea6e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  
  *param_5 = 0;
  *(undefined4 *)(param_5 + 1) = 0;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  cVar1 = FUN_1424fd5d0();
  if (cVar1 != '\0') {
    UCanvas::Deproject(*(undefined8 *)(param_1 + 0x4a8),CONCAT44(param_3,param_2),param_4,param_5);
  }
  return;
}



// FUNCTION 1424ea790 DestroyObject body=78 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FStaticMeshInstanceData>::DestroyObject
               (longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424ea7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1424ea7e0 FUN_1424ea7e0 body=20 status=ok
// SIG undefined FUN_1424ea7e0(void)

void FUN_1424ea7e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FPerInstanceRenderData::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1424ea800 FUN_1424ea800 body=433 status=ok
// SIG undefined FUN_1424ea800(void)

ulonglong FUN_1424ea800(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  uint7 uVar5;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = *(longlong *)(param_1 + 0x728);
  uVar5 = (uint7)((ulonglong)in_RAX >> 8);
  if (lVar3 == 0) {
    return (ulonglong)uVar5 << 8;
  }
  lVar1 = *(longlong *)(lVar3 + 0x160);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x28) & 1) != 0)) {
    return (ulonglong)uVar5 << 8;
  }
  if ((*(uint *)(lVar1 + 0x28) >> 1 & 1) == 0) {
    if (*(longlong *)(lVar3 + 0xa0) != 0) {
      (**(code **)(*param_2 + 0x30))(param_2,*(longlong *)(lVar3 + 0xa0),&DAT_1468b5b70);
    }
  }
  else {
    (**(code **)(*param_2 + 0x38))
              (param_2,*(undefined8 *)(lVar1 + 0x50),*(undefined4 *)(lVar1 + 0x58),
               *(undefined8 *)(lVar1 + 0x60),*(undefined4 *)(lVar1 + 0x68),&DAT_1468b5b70);
    (**(code **)(*param_2 + 0x38))
              (param_2,*(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38),
               *(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x48),&DAT_1468b5b70);
  }
  local_18 = &LAB_1424e1b5c;
  uStack_10 = 0;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_20 = 3;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144012f78;
  }
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_28);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_1424ea97b;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  uVar4 = 0;
  if (local_28 != (longlong *)0x0) {
    uVar4 = FMemory::Free(local_28);
  }
LAB_1424ea97b:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1424ea9c0 FUN_1424ea9c0 body=254 status=ok
// SIG undefined FUN_1424ea9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424ea9c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_30);
  plVar4 = (longlong *)param_1[1];
  lVar5 = param_1[2];
  uVar6 = *param_1;
  puVar7 = (undefined8 *)(lVar5 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48 = uVar6;
  plStack_40 = plVar4;
  if (&local_48 != puVar7) {
    local_48 = *puVar7;
    plStack_40 = *(longlong **)(lVar5 + 0x38);
    *puVar7 = uVar6;
    *(longlong **)(lVar5 + 0x38) = plVar4;
    local_28 = uVar6;
    plStack_20 = plVar4;
  }
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  FRenderResource::UpdateRHI(param_1[2]);
  QueryPerformanceCounter(&local_38);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_38.s.LowPart - local_30._0_4_);
  return;
}



// FUNCTION 1424eaac0 FUN_1424eaac0 body=151 status=ok
// SIG undefined FUN_1424eaac0(void)

void FUN_1424eaac0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 8);
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
    FMemory::operator_delete(lVar4,0x10);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1424eab60 FUN_1424eab60 body=275 status=ok
// SIG undefined FUN_1424eab60(void)

void FUN_1424eab60(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FRotator::Vector(param_3,&local_38);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x470);
      plVar2 = *(longlong **)(lVar6 + lVar1);
      if (plVar2 == (longlong *)0x0) {
        iVar4 = *(int *)(param_1 + 0x478);
        iVar3 = (iVar4 - iVar5) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar5 * 8),
                     (void *)(lVar1 + (longlong)(iVar5 + 1) * 8),(longlong)iVar3 << 3);
          iVar4 = *(int *)(param_1 + 0x478);
        }
        *(int *)(param_1 + 0x478) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x470);
      }
      else {
        local_20 = local_30;
        local_10 = *(undefined4 *)(param_2 + 1);
        local_28 = local_38;
        local_18 = *param_2;
        (**(code **)(*plVar2 + 0x620))
                  (plVar2,*(undefined8 *)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x4a8),
                   &local_18,&local_28);
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      }
    } while (iVar5 < *(int *)(param_1 + 0x478));
  }
  return;
}



// FUNCTION 1424eac80 FUN_1424eac80 body=1616 status=ok
// SIG undefined FUN_1424eac80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424eac80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  undefined4 *local_358;
  float local_348;
  float fStack_344;
  float local_340;
  float local_338;
  float local_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  float local_320;
  float local_31c;
  float local_318;
  undefined8 local_310;
  undefined4 local_308;
  float local_2fc;
  undefined8 local_2f8;
  float local_2f0;
  float local_2e8;
  float local_2e4;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [40];
  undefined8 local_250;
  undefined8 uStack_248;
  uint local_238;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 local_148 [24];
  longlong local_130;
  ulonglong local_d0;
  
  local_d0 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  if ((0 < *(int *)(param_1 + 0x4c0)) && (*(longlong *)(param_1 + 0x4b0) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x458) + 0x7a8))
              (*(longlong **)(param_1 + 0x458),&local_320,local_2d8);
    uVar7 = UEngine::GetSmallFont();
    uVar8 = FUN_1404b03b0();
    local_358 = &DAT_1464aa6c0;
    FCanvasTextItem::FCanvasTextItem(local_278,&DAT_1468b5d88,uVar8,uVar7);
    iVar6 = *(int *)(param_1 + 0x4c0);
    iVar12 = 0;
    if (0 < iVar6) {
      iVar14 = 1;
      lVar11 = 0;
      do {
        lVar13 = *(longlong *)(param_1 + 0x4b8);
        if (*(longlong *)(lVar13 + lVar11) == 0) {
          if (*(longlong *)((longlong)iVar12 * 0x60 + 0x20 + lVar13) != 0) {
            FMemory::Free();
          }
          iVar6 = *(int *)(param_1 + 0x4c0);
          iVar5 = (iVar6 - iVar12) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x4b8) + (longlong)iVar12 * 0x60),
                       (void *)((longlong)iVar14 * 0x60 + *(longlong *)(param_1 + 0x4b8)),
                       (longlong)iVar5 * 0x60);
            iVar6 = *(int *)(param_1 + 0x4c0);
          }
          *(int *)(param_1 + 0x4c0) = iVar6 + -1;
          TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1 + 0x4b8);
          iVar12 = iVar12 + -1;
          iVar14 = iVar14 + -1;
          lVar11 = lVar11 + -0x60;
        }
        else {
          lVar15 = *(longlong *)(lVar13 + 0x50 + lVar11);
          if (lVar15 == 0) {
            lVar15 = UEngine::GetSmallFont();
            lVar13 = *(longlong *)(param_1 + 0x4b8);
          }
          fVar16 = *(float *)(lVar11 + 0x34 + lVar13);
          if (1e-08 < ABS(fVar16)) {
            fVar16 = 1.0 - *(float *)(lVar11 + 0x30 + lVar13) / fVar16;
          }
          else {
            fVar16 = 0.0;
          }
          uVar4 = *(uint *)(lVar11 + 0x3c + lVar13);
          local_348 = (*(float *)(lVar11 + 0x14 + lVar13) - *(float *)(lVar11 + 8 + lVar13)) *
                      fVar16 + *(float *)(lVar11 + 8 + lVar13);
          fStack_344 = (*(float *)(lVar11 + 0x18 + lVar13) - *(float *)(lVar11 + 0xc + lVar13)) *
                       fVar16 + *(float *)(lVar11 + 0xc + lVar13);
          local_340 = (*(float *)(lVar11 + 0x1c + lVar13) - *(float *)(lVar11 + 0x10 + lVar13)) *
                      fVar16 + *(float *)(lVar11 + 0x10 + lVar13);
          if ((uVar4 & 1) == 0) {
            if ((uVar4 & 2) == 0) {
              local_348 = local_348 + *(float *)(lVar11 + 0x40 + lVar13);
              fStack_344 = fStack_344 + *(float *)(lVar11 + 0x44 + lVar13);
              local_340 = local_340 + *(float *)(lVar11 + 0x48 + lVar13);
            }
            else {
              lVar13 = *(longlong *)(*(longlong *)(lVar11 + lVar13) + 0x168);
              if (lVar13 == 0) {
                local_308 = DAT_1468b5d98;
                puVar9 = &local_310;
                local_310 = _DAT_1468b5d90;
              }
              else {
                local_288 = *(undefined4 *)(lVar13 + 0x220);
                uStack_284 = *(undefined4 *)(lVar13 + 0x224);
                uStack_280 = *(undefined4 *)(lVar13 + 0x228);
                uStack_27c = *(undefined4 *)(lVar13 + 0x22c);
                puVar9 = (undefined8 *)&local_330;
                local_330 = local_288;
                local_328 = uStack_280;
                uStack_32c = uStack_284;
              }
              local_2fc = *(float *)(puVar9 + 1);
              local_348 = local_348 + (float)*puVar9;
              local_340 = local_340 + local_2fc;
              fStack_344 = fStack_344 + (float)((ulonglong)*puVar9 >> 0x20);
            }
          }
          if (((*(byte *)(param_1 + 0x468) & 4) == 0) && ((uVar4 & 4) == 0)) {
            local_238 = local_238 & 0xfffffffd;
            local_200 = DAT_1468b5d88;
          }
          else {
            local_238 = local_238 | 2;
            local_210 = _DAT_1464aa6e0;
            uStack_208 = _DAT_1464aa6e8;
            local_200 = 0x3f8000003f800000;
          }
          fVar17 = local_348 - local_320;
          fVar16 = fStack_344 - local_31c;
          fVar18 = local_340 - local_318;
          local_130 = lVar15;
          pfVar10 = (float *)FRotator::Vector(local_2d8,local_2b8);
          if (0.0 < fVar16 * pfVar10[1] + fVar17 * *pfVar10 + fVar18 * pfVar10[2]) {
            local_2f8 = CONCAT44(fStack_344,local_348);
            local_2f0 = local_340;
            UCanvas::Project(*(undefined8 *)(param_1 + 0x4a8),&local_2e8,&local_2f8,0);
            FLinearColor::FLinearColor
                      (&local_2c8,*(longlong *)(param_1 + 0x4b8) + 0x38 + (longlong)iVar12 * 0x60);
            local_250 = local_2c8;
            uStack_248 = uStack_2c0;
            uVar7 = FText::FromString(local_2a8,
                                      *(longlong *)(param_1 + 0x4b8) + 0x20 +
                                      (longlong)iVar12 * 0x60);
            FText::operator=(local_148,uVar7);
            plVar3 = local_2a0;
            if (local_2a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_2a0 + 1;
              lVar13 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*local_2a0)(local_2a0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            local_1d8 = *(undefined4 *)(*(longlong *)(param_1 + 0x4b8) + 0x58 + lVar11);
            local_338 = (float)-((int)ROUND(-0.5 - local_2e8 * 2.0) >> 1);
            local_334 = (float)-((int)ROUND(-0.5 - local_2e4 * 2.0) >> 1);
            local_1d4 = local_1d8;
            UCanvas::DrawItem(*(undefined8 *)(param_1 + 0x4b0),local_278,&local_338);
          }
          fVar16 = *(float *)(*(longlong *)(param_1 + 0x4b8) + 0x30 + lVar11);
          if (fVar16 != -1.0) {
            *(float *)(*(longlong *)(param_1 + 0x4b8) + 0x30 + lVar11) =
                 fVar16 - *(float *)(param_1 + 0x484);
          }
        }
        iVar6 = *(int *)(param_1 + 0x4c0);
        iVar12 = iVar12 + 1;
        iVar14 = iVar14 + 1;
        lVar11 = lVar11 + 0x60;
      } while (iVar12 < iVar6);
    }
    iVar12 = iVar6 + -1;
    if (-1 < iVar12) {
      plVar3 = (longlong *)(param_1 + 0x4b8);
      lVar13 = (longlong)iVar12 * 0x60;
      lVar15 = (longlong)iVar6 * 0x60;
      lVar11 = lVar13;
      do {
        fVar16 = *(float *)(lVar11 + 0x30 + *plVar3);
        if ((fVar16 != -1.0) && (fVar16 <= 0.0)) {
          if (*(longlong *)(lVar13 + 0x20 + *plVar3) != 0) {
            FMemory::Free();
          }
          iVar6 = *(int *)(param_1 + 0x4c0);
          iVar14 = (iVar6 - iVar12) + -1;
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar3 + lVar13),(void *)(*plVar3 + lVar15),(longlong)iVar14 * 0x60
                      );
            iVar6 = *(int *)(param_1 + 0x4c0);
          }
          *(int *)(param_1 + 0x4c0) = iVar6 + -1;
          TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(plVar3);
        }
        lVar15 = lVar15 + -0x60;
        lVar13 = lVar13 + -0x60;
        lVar11 = lVar11 + -0x60;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
    FUN_140c64b70(local_278);
  }
  return;
}



// FUNCTION 1424eb2d0 FUN_1424eb2d0 body=198 status=ok
// SIG undefined FUN_1424eb2d0(void)

void FUN_1424eb2d0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4e4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x9b,0);
  }
  *(undefined4 *)(param_1 + 0x9e) = 0;
  if ((*(int *)((longlong)param_1 + 0x4f4) < 0) && (*(int *)((longlong)param_1 + 0x4f4) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9d,0);
  }
  if (((*(byte *)(param_1 + 0x8d) & 2) != 0) &&
     (plVar1 = (longlong *)param_1[0x8b], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x7a8))(plVar1,&local_38,&local_48);
    local_20 = local_40;
    local_10 = local_30;
    local_28 = local_48;
    local_18 = local_38;
    (**(code **)(*param_1 + 0x718))(param_1,&local_18,&local_28);
  }
  FUN_1429512a0(param_1,*(undefined4 *)(param_1[0x95] + 0x40),*(undefined4 *)(param_1[0x95] + 0x44))
  ;
  return;
}



// FUNCTION 1424eb3a0 FUN_1424eb3a0 body=216 status=ok
// SIG undefined FUN_1424eb3a0(void)

void FUN_1424eb3a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  char cVar1;
  undefined **local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  cVar1 = FUN_1424fd5d0();
  if (cVar1 != '\0') {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_98 = &PTR_FUN_14416c998;
    local_50 = param_5;
    local_70 = *param_6;
    uStack_6c = param_6[1];
    uStack_68 = param_6[2];
    uStack_64 = param_6[3];
    local_58 = 0;
    local_4c = 0;
    local_48 = param_7;
    local_90 = param_2;
    local_8c = param_3;
    local_60 = param_2;
    local_5c = param_3;
    local_54 = param_4;
    FUN_1428a6cf0(*(undefined8 *)(param_1 + 0x4a8),&local_98);
  }
  return;
}



// FUNCTION 1424eb480 FUN_1424eb480 body=374 status=ok
// SIG undefined FUN_1424eb480(void)

void FUN_1424eb480(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10,float param_11,char param_12,uint param_13,undefined8 param_14)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_b8 [8];
  float local_b0;
  float local_ac;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_44;
  
  cVar1 = FUN_1424fd5d0();
  if ((cVar1 != '\0') && (param_2 != (longlong *)0x0)) {
    local_dc = param_7 + param_9;
    local_d8 = param_8 + param_10;
    local_cc = param_5 * param_11;
    local_d4 = param_7;
    local_c8 = param_6 * param_11;
    local_d0 = param_8;
    local_e8 = param_3;
    local_e4 = param_4;
    uVar2 = (**(code **)(*param_2 + 0x2a8))(param_2,0,0);
    FCanvasTileItem::FCanvasTileItem(local_b8,&local_e8,uVar2,&local_cc,&local_d4,&local_dc);
    local_50 = (ulonglong)param_13 << 0x20;
    local_e0 = 0;
    local_44 = param_14;
    local_48 = 0;
    if (param_12 != '\0') {
      local_b0 = local_b0 * param_11;
      local_ac = local_ac * param_11;
    }
    FUN_1428a6cf0(*(undefined8 *)(param_1 + 0x4a8),local_b8);
  }
  return;
}



// FUNCTION 1424eb600 FUN_1424eb600 body=261 status=ok
// SIG undefined FUN_1424eb600(void)

void FUN_1424eb600(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,float param_6,float param_7,char param_8)

{
  char cVar1;
  undefined8 uVar2;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [8];
  float local_b0;
  float local_ac;
  
  cVar1 = FUN_1424fd5d0();
  if ((cVar1 != '\0') && (param_2 != (longlong *)0x0)) {
    local_c8 = param_5 * param_7;
    local_c4 = param_6 * param_7;
    local_c0 = param_3;
    local_bc = param_4;
    uVar2 = (**(code **)(*param_2 + 0x2a8))(param_2,0,0);
    FCanvasTileItem::FCanvasTileItem(local_b8,&local_c0,uVar2,&local_c8);
    if (param_8 != '\0') {
      local_b0 = local_b0 * param_7;
      local_ac = local_ac * param_7;
    }
    FUN_1428a6cf0(*(undefined8 *)(param_1 + 0x4a8),local_b8);
  }
  return;
}


