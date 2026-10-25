// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142617b70 FUN_142617b70 body=1562 status=ok
// SIG undefined FUN_142617b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142617b70(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,char param_10,char param_11)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  ushort *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60 [5];
  
  lVar9 = DAT_146b057f8;
  plVar21 = (longlong *)0x0;
  local_98 = local_98 & 0xffffffff00000000;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  local_68 = 4;
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    plVar10 = (longlong *)&DAT_00000004;
    if (DVar7 != DAT_1468c21c0) goto LAB_142617bec;
  }
  plVar10 = plVar21;
LAB_142617bec:
  if (*(int *)((longlong)plVar10 + lVar9) != 0) {
    local_98 = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    FScopedGPUStatEvent::Begin(local_60,param_1,&DAT_146b05770,&local_98);
    if ((*(float *)(DAT_146b057b0 + 4) <= 0.0) || (bVar5 = false, param_10 != '\0')) {
      bVar5 = true;
    }
    bVar4 = false;
    if (param_11 == '\0') {
      bVar4 = bVar5;
    }
    uVar8 = (longlong)*(int *)(param_5 + 0x228) ^ 1;
    if (!bVar4) {
      uVar8 = (longlong)*(int *)(param_5 + 0x228);
    }
    local_88 = param_5 + 0xf0;
    local_80 = param_5 + 0xb0;
    lVar9 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
    lVar13 = 0;
    local_78 = &DAT_146b05c10;
    local_70 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&local_98,&local_78);
    if ((float)local_98 != -NAN) {
      lVar13 = (longlong)(int)(float)local_98 * 0x20 + *(longlong *)(lVar9 + 0x38);
    }
    plVar10 = (longlong *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      plVar10 = plVar21;
    }
    lVar9 = *plVar10;
    lVar13 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
    plVar10 = (longlong *)0x0;
    local_78 = &DAT_146b06600;
    local_70 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar13 + 0x38),&local_98,&local_78);
    plVar14 = plVar10;
    if ((float)local_98 != -NAN) {
      plVar14 = (longlong *)((longlong)(int)(float)local_98 * 0x20 + *(longlong *)(lVar13 + 0x38));
    }
    plVar17 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar17 = plVar10;
    }
    lVar13 = *plVar17;
    *param_2 = DAT_146534538;
    if (lVar9 == 0) {
      local_90 = 0;
      plVar21 = (longlong *)0x1;
    }
    else {
      lVar20 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar20 + 0x28) == '\0') {
        FUN_1419f3850(lVar20);
      }
      plVar10 = *(longlong **)(lVar20 + 0x38);
    }
    uVar11 = 0;
    param_2[1] = plVar10;
    if (plVar21 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
    }
    bVar5 = false;
    if (lVar13 == 0) {
      bVar5 = true;
      local_90 = 0;
    }
    else {
      lVar20 = *(longlong *)(lVar13 + 0x48);
      if (*(char *)(lVar20 + 0x28) == '\0') {
        FUN_1419f3850(lVar20);
      }
      uVar11 = *(undefined8 *)(lVar20 + 0x40);
    }
    param_2[4] = uVar11;
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
    }
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
    FUN_141ed6ac0(param_1,param_2,2,1);
    uVar22 = local_80;
    TParticleSimulationPS<0>::SetParameters
              (lVar13,param_1,uVar8 * 0x58 + param_5,local_88,local_80,param_6,param_3,param_7,
               param_8,param_9);
    local_90 = (longlong)(int)param_4[1];
    if (0 < local_90) {
      local_78 = (undefined *)(ulonglong)_tls_index;
      local_80 = 0;
      do {
        lVar20 = *param_4;
        lVar2 = *(longlong *)(lVar9 + 0x48);
        uVar11 = *(undefined8 *)(local_80 + lVar20);
        local_88 = lVar20;
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850(lVar2);
        }
        uVar3 = *(undefined8 *)(lVar2 + 0x38);
        if (*(short *)(lVar9 + 0xc2) != 0) {
          uVar1 = *(ushort *)(lVar9 + 0xc0);
          puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
          if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
            FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
            puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar12 = puVar15 + 5;
          }
          *(undefined8 **)(param_1 + 0x30) = puVar12;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar15;
          *(undefined8 **)(param_1 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          *(uint *)(puVar15 + 3) = (uint)uVar1;
          *puVar15 = &PTR_LAB_144165218;
          puVar15[2] = uVar3;
          puVar15[4] = uVar11;
          lVar20 = local_88;
        }
        uVar22 = uVar22 & 0xffffffff00000000;
        local_98._0_4_ = 4.0 / (float)DAT_146534410;
        FUN_1404986d0(param_1,uVar3,lVar9 + 0xc4,&local_98,uVar22);
        uVar22 = uVar22 & 0xffffffff00000000;
        local_98 = CONCAT44(local_98._4_4_,4.0 / (float)DAT_146534414);
        FUN_1404986d0(param_1,uVar3,lVar9 + 0xca,&local_98,uVar22);
        uVar8 = local_80;
        lVar2 = *(longlong *)(lVar13 + 0x48);
        uVar11 = *(undefined8 *)(local_80 + 8 + lVar20);
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850();
        }
        lVar16 = 0;
        lVar2 = *(longlong *)(lVar2 + 0x40);
        local_88 = lVar2;
        if (0 < *(int *)(lVar13 + 0x10)) {
          do {
            if (*(undefined **)(*(longlong *)(lVar13 + 8) + lVar16 * 8) == &DAT_146b05af0) {
              if (lVar16 != -1) {
                puVar19 = *(undefined4 **)(*(longlong *)(lVar13 + 0x18) + lVar16 * 8);
                *puVar19 = *(undefined4 *)(lVar13 + 0xb8);
                goto LAB_142617fde;
              }
              break;
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(lVar13 + 0x10));
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)local_78 * 8) +
                     0x38) < DAT_146b06db8) &&
           (_Init_thread_header(&DAT_146b06db8), DAT_146b06db8 == -1)) {
          _DAT_146b06db0 = 0;
          _DAT_146b06db4 = 0;
          DAT_146b06db6 = 0;
          _Init_thread_footer(&DAT_146b06db8);
        }
        puVar19 = (undefined4 *)&DAT_146b06db0;
LAB_142617fde:
        SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_1,lVar2,puVar19,uVar11);
        uVar22 = CONCAT71((int7)(uVar22 >> 8),param_10);
        FParticlePerFrameSimulationShaderParameters::Set<FRHIPixelShader_*>
                  (lVar13 + 0x108,param_1,&local_88,uVar8 + 0x10 + lVar20,uVar22);
        FUN_142632570(lVar13,param_1,uVar8 + 0x50 + lVar20,uVar8 + 0x68 + lVar20);
        FUN_142622630(param_1);
        local_80 = uVar8 + 0x90;
        local_90 = local_90 + -1;
      } while (local_90 != 0);
      local_90 = 0;
    }
    lVar9 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1419f3850(lVar9);
    }
    uVar11 = *(undefined8 *)(lVar9 + 0x40);
    puVar18 = (ushort *)(lVar13 + 0xe8);
    lVar9 = 4;
    do {
      if (puVar18[1] != 0) {
        uVar1 = *puVar18;
        puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar15;
        *(undefined8 **)(param_1 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_144d8e600;
        puVar15[2] = uVar11;
        *(uint *)(puVar15 + 3) = (uint)uVar1;
        puVar15[4] = 0;
        lVar9 = local_68;
      }
      puVar18 = puVar18 + 2;
      lVar9 = lVar9 + -1;
      local_68 = lVar9;
    } while (lVar9 != 0);
    if (local_60[0] != 0) {
      FScopedGPUStatEvent::End(local_60);
    }
  }
  return;
}



// FUNCTION 142618190 FUN_142618190 body=1517 status=ok
// SIG undefined FUN_142618190(void)

undefined8 * FUN_142618190(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *_Dst;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  int local_7c;
  int local_78 [2];
  undefined8 local_70;
  longlong *local_68;
  undefined4 *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined4 local_40;
  
  lVar8 = DAT_146b057f8;
  puVar17 = (undefined8 *)0x0;
  iVar20 = 0;
  if (DAT_1468b5054 != 0) {
    return (undefined8 *)(ulonglong)DAT_1468b5054;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    puVar7 = (undefined8 *)&DAT_00000004;
    if (DVar4 != DAT_1468c21c0) goto LAB_142618212;
  }
  puVar7 = puVar17;
LAB_142618212:
  if (*(int *)((longlong)puVar7 + lVar8) != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)DAT_146b06ff8;
    puVar7 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
    iVar14 = (int)param_4[1];
    plVar12 = (longlong *)((ulonglong)(longlong)DAT_146b06ff8 / 0x48);
    local_70 = DAT_1465346f0;
    iVar19 = 0;
    if (0 < iVar14) {
      local_60 = &DAT_1464c9c48 + param_3;
      plVar16 = plVar12;
      local_68 = plVar12;
      do {
        lVar8 = *param_4;
        iVar5 = (int)local_68;
        if (iVar14 <= (int)local_68) {
          iVar5 = iVar14;
        }
        _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                 (DAT_146ab6358,&DAT_146ab6e78,local_70,0,iVar5 * 0x48,1,iVar19,
                                  iVar20);
        _guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)(lVar8 + (longlong)iVar19 * 0x48),(longlong)iVar5 * 0x48);
        (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,local_70);
        iVar14 = iVar14 - iVar5;
        iVar19 = iVar19 + iVar5;
        local_58 = &DAT_146b05f40;
        local_50 = 0;
        lVar8 = FUN_1419ef210(*local_60);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar8 + 0x38,&local_7c,&local_58);
        if (local_7c == -1) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)local_7c * 0x20 + *(longlong *)(lVar8 + 0x38);
        }
        local_40 = 0;
        local_48 = &DAT_146b06b40;
        plVar11 = (longlong *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          plVar11 = (longlong *)0x0;
        }
        lVar8 = *plVar11;
        lVar9 = FUN_1419ef210(*local_60);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar9 + 0x38,local_78,&local_48);
        if (local_78[0] == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)local_78[0] * 0x20 + *(longlong *)(lVar9 + 0x38);
        }
        plVar11 = (longlong *)0x0;
        plVar15 = (longlong *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          plVar15 = plVar11;
        }
        lVar9 = *plVar15;
        *param_2 = DAT_146534570;
        if (lVar8 == 0) {
          puVar17 = (undefined8 *)(ulonglong)((uint)puVar17 | 1);
          plVar16 = plVar11;
        }
        else {
          lVar10 = *(longlong *)(lVar8 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          plVar11 = *(longlong **)(lVar10 + 0x38);
        }
        param_2[1] = plVar11;
        if ((((ulonglong)puVar17 & 1) != 0) &&
           (puVar17 = (undefined8 *)(ulonglong)((uint)puVar17 & 0xfffffffe),
           plVar16 != (longlong *)0x0)) {
          LOCK();
          plVar11 = plVar16 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            if (((char)plVar16[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)plVar16 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)plVar16 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar6 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar10 + 8) = plVar16;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar16)(plVar16,1);
            }
          }
        }
        if (lVar9 == 0) {
          puVar17 = (undefined8 *)(ulonglong)((uint)puVar17 | 2);
          plVar11 = (longlong *)0x0;
          plVar12 = plVar11;
        }
        else {
          lVar9 = *(longlong *)(lVar9 + 0x48);
          if (*(char *)(lVar9 + 0x28) == '\0') {
            FUN_1419f3850(lVar9);
          }
          plVar11 = *(longlong **)(lVar9 + 0x40);
        }
        lVar9 = 0;
        param_2[4] = plVar11;
        if ((((ulonglong)puVar17 & 2) != 0) &&
           (puVar17 = (undefined8 *)(ulonglong)((uint)puVar17 & 0xfffffffd),
           plVar12 != (longlong *)0x0)) {
          LOCK();
          plVar11 = plVar12 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            if (((char)plVar12[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)plVar12 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)plVar12 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar6 != 0) {
                  lVar9 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar9 + 8) = plVar12;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar12)(plVar12,1);
            }
          }
        }
        *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
        FUN_141ed6ac0(param_1,param_2,2);
        FUN_142631f50(lVar8,param_1);
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar7;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar13;
        *(undefined8 **)(param_1 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_143f489e0;
        puVar13[3] = local_70;
        *(undefined4 *)(puVar13 + 2) = 0;
        *(undefined4 *)(puVar13 + 4) = 0;
        uVar2 = DAT_146534600;
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar7;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar13;
        *(undefined8 **)(param_1 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_143f489e0;
        *(undefined4 *)(puVar13 + 2) = 1;
        puVar13[3] = uVar2;
        *(undefined4 *)(puVar13 + 4) = 0;
        lVar8 = DAT_146534670;
        if (DAT_146534670 == 0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
          FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x8d8);
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar7 + 7;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x40);
          puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar7 + 7;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar7;
        *(undefined8 **)(param_1 + 8) = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_143f489d0;
        puVar7[3] = 0;
        *(undefined4 *)(puVar7 + 4) = 0;
        *(int *)(puVar7 + 6) = iVar5;
        puVar7[2] = lVar8;
        *(undefined8 *)((longlong)puVar7 + 0x24) = 4;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = 2;
        iVar20 = iVar14;
      } while (0 < iVar14);
    }
  }
  return puVar7;
}



// FUNCTION 142618780 FUN_142618780 body=1517 status=ok
// SIG undefined FUN_142618780(void)

undefined8 * FUN_142618780(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *_Dst;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  int local_7c;
  int local_78 [2];
  undefined8 local_70;
  longlong *local_68;
  undefined4 *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined4 local_40;
  
  lVar8 = DAT_146b057f8;
  puVar17 = (undefined8 *)0x0;
  iVar20 = 0;
  if (DAT_1468b5054 != 0) {
    return (undefined8 *)(ulonglong)DAT_1468b5054;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    puVar7 = (undefined8 *)&DAT_00000004;
    if (DVar4 != DAT_1468c21c0) goto LAB_142618802;
  }
  puVar7 = puVar17;
LAB_142618802:
  if (*(int *)((longlong)puVar7 + lVar8) != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)DAT_146b06ff8;
    puVar7 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
    iVar14 = (int)param_4[1];
    plVar12 = (longlong *)((ulonglong)(longlong)DAT_146b06ff8 / 0x48);
    local_70 = DAT_1465346f0;
    iVar19 = 0;
    if (0 < iVar14) {
      local_60 = &DAT_1464c9c48 + param_3;
      plVar16 = plVar12;
      local_68 = plVar12;
      do {
        lVar8 = *param_4;
        iVar5 = (int)local_68;
        if (iVar14 <= (int)local_68) {
          iVar5 = iVar14;
        }
        _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                 (DAT_146ab6358,&DAT_146ab6e78,local_70,0,iVar5 * 0x48,1,iVar19,
                                  iVar20);
        _guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)(lVar8 + (longlong)iVar19 * 0x48),(longlong)iVar5 * 0x48);
        (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,local_70);
        iVar14 = iVar14 - iVar5;
        iVar19 = iVar19 + iVar5;
        local_58 = &DAT_146b05f40;
        local_50 = 0;
        lVar8 = FUN_1419ef210(*local_60);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar8 + 0x38,&local_7c,&local_58);
        if (local_7c == -1) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)local_7c * 0x20 + *(longlong *)(lVar8 + 0x38);
        }
        local_40 = 0;
        local_48 = &DAT_146b069f0;
        plVar11 = (longlong *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          plVar11 = (longlong *)0x0;
        }
        lVar8 = *plVar11;
        lVar9 = FUN_1419ef210(*local_60);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar9 + 0x38,local_78,&local_48);
        if (local_78[0] == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)local_78[0] * 0x20 + *(longlong *)(lVar9 + 0x38);
        }
        plVar11 = (longlong *)0x0;
        plVar15 = (longlong *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          plVar15 = plVar11;
        }
        lVar9 = *plVar15;
        *param_2 = DAT_146534570;
        if (lVar8 == 0) {
          puVar17 = (undefined8 *)(ulonglong)((uint)puVar17 | 1);
          plVar16 = plVar11;
        }
        else {
          lVar10 = *(longlong *)(lVar8 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          plVar11 = *(longlong **)(lVar10 + 0x38);
        }
        param_2[1] = plVar11;
        if ((((ulonglong)puVar17 & 1) != 0) &&
           (puVar17 = (undefined8 *)(ulonglong)((uint)puVar17 & 0xfffffffe),
           plVar16 != (longlong *)0x0)) {
          LOCK();
          plVar11 = plVar16 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            if (((char)plVar16[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)plVar16 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)plVar16 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar6 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar10 + 8) = plVar16;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar16)(plVar16,1);
            }
          }
        }
        if (lVar9 == 0) {
          puVar17 = (undefined8 *)(ulonglong)((uint)puVar17 | 2);
          plVar11 = (longlong *)0x0;
          plVar12 = plVar11;
        }
        else {
          lVar9 = *(longlong *)(lVar9 + 0x48);
          if (*(char *)(lVar9 + 0x28) == '\0') {
            FUN_1419f3850(lVar9);
          }
          plVar11 = *(longlong **)(lVar9 + 0x40);
        }
        lVar9 = 0;
        param_2[4] = plVar11;
        if ((((ulonglong)puVar17 & 2) != 0) &&
           (puVar17 = (undefined8 *)(ulonglong)((uint)puVar17 & 0xfffffffd),
           plVar12 != (longlong *)0x0)) {
          LOCK();
          plVar11 = plVar12 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            if (((char)plVar12[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)plVar12 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)plVar12 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar6 != 0) {
                  lVar9 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar9 + 8) = plVar12;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar12)(plVar12,1);
            }
          }
        }
        *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
        FUN_141ed6ac0(param_1,param_2,2);
        FUN_142631f50(lVar8,param_1);
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar7;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar13;
        *(undefined8 **)(param_1 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_143f489e0;
        puVar13[3] = local_70;
        *(undefined4 *)(puVar13 + 2) = 0;
        *(undefined4 *)(puVar13 + 4) = 0;
        uVar2 = DAT_146534600;
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar7;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar13;
        *(undefined8 **)(param_1 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_143f489e0;
        *(undefined4 *)(puVar13 + 2) = 1;
        puVar13[3] = uVar2;
        *(undefined4 *)(puVar13 + 4) = 0;
        lVar8 = DAT_146534670;
        if (DAT_146534670 == 0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
          FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x8d8);
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar7 + 7;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x40);
          puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar7 + 7;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar7;
        *(undefined8 **)(param_1 + 8) = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_143f489d0;
        puVar7[3] = 0;
        *(undefined4 *)(puVar7 + 4) = 0;
        *(int *)(puVar7 + 6) = iVar5;
        puVar7[2] = lVar8;
        *(undefined8 *)((longlong)puVar7 + 0x24) = 4;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = 2;
        iVar20 = iVar14;
      } while (0 < iVar14);
    }
  }
  return puVar7;
}



// FUNCTION 142618d70 Set<FRHIPixelShader_*> body=507 status=ok
// SIG undefined Set<FRHIPixelShader_*>(void)

void FParticlePerFrameSimulationShaderParameters::Set<FRHIPixelShader_*>
               (longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,byte param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  longlong lVar9;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  if ((*(float *)(DAT_146b057b0 + 4) <= 0.0) || (param_5 != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  local_3c = *(undefined4 *)(param_4 + 0x1c);
  local_48 = 0;
  local_40 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,*param_3,param_1,param_4,0);
  puVar7 = (undefined8 *)(param_4 + 0x10);
  if (!bVar5) {
    puVar7 = &local_48;
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,*param_3,param_1 + 6,puVar7,0);
  uVar3 = *param_3;
  uVar4 = (uint)*(ushort *)(param_1 + 0x10);
  if (7 < *(ushort *)(param_1 + 0x10)) {
    uVar4 = 8;
  }
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe);
    uVar2 = *(ushort *)(param_1 + 0xc);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (ulonglong)uVar4 + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (ulonglong)uVar4 + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)(param_4 + 0x20),(ulonglong)uVar4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f594b0;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar4;
  }
  lVar9 = ((ulonglong)param_5 ^ 1) * 8;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x12,param_4 + 0x28 + lVar9,0);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x18,param_4 + 0x2c + lVar9,0);
  return;
}



// FUNCTION 142618f70 FUN_142618f70 body=797 status=ok
// SIG undefined FUN_142618f70(void)

undefined8 * FUN_142618f70(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  
  FGlobalShader::FGlobalShader();
  iVar1 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145138de8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = param_1 + 0x1f;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *puVar2 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 0x126) = 0;
  *(undefined2 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  FShaderResourceParameter::Bind
            (param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"PositionTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xc4,*(undefined8 *)(param_2 + 0x18),L"PositionTextureSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"VelocityTexture",0);
  FShaderResourceParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xcc),*(undefined8 *)(param_2 + 0x18),
             L"VelocityTextureSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"AttributesTexture",0);
  FShaderResourceParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xd4),*(undefined8 *)(param_2 + 0x18),
             L"AttributesTextureSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"RenderAttributesTexture",0);
  FShaderResourceParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xdc),*(undefined8 *)(param_2 + 0x18),
             L"RenderAttributesTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"CurveTexture",0);
  FShaderResourceParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xe4),*(undefined8 *)(param_2 + 0x18),
             L"CurveTextureSampler",0);
  do {
    FString::PrintfImpl(&local_70,L"VectorFieldTextures%d",iVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_68 != 0) {
      puVar3 = local_70;
    }
    FShaderResourceParameter::Bind(puVar2 + -2,*(undefined8 *)(param_2 + 0x18),puVar3,0);
    if (local_70 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FString::PrintfImpl(&local_60,L"VectorFieldTexturesSampler%d",iVar1);
    puVar3 = &DAT_143f3eda8;
    if (local_58 != 0) {
      puVar3 = local_60;
    }
    FShaderResourceParameter::Bind(puVar2,*(undefined8 *)(param_2 + 0x18),puVar3,0);
    if (local_60 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar1 = iVar1 + 1;
    puVar2 = (undefined8 *)((longlong)puVar2 + 4);
  } while (iVar1 < 4);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x126),*(undefined8 *)(param_2 + 0x18),
             L"CollisionDepthBounds",0);
  FParticlePerFrameSimulationShaderParameters::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18));
  FGlobalDistanceFieldParameters::Bind((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 142619290 TParticleSimulationPS<1> body=189 status=ok
// SIG undefined TParticleSimulationPS<1>(void)

undefined8 * TParticleSimulationPS<1>::TParticleSimulationPS<1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__145138de8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 142619350 FUN_142619350 body=40 status=ok
// SIG undefined FUN_142619350(void)

undefined8 * FUN_142619350(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *param_1 = &PTR_FUN_14513a3e0;
  return param_1;
}



// FUNCTION 142619380 FUN_142619380 body=108 status=ok
// SIG undefined FUN_142619380(void)

undefined8 * FUN_142619380(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 1426193f0 FDynamicEmitterDataBase body=33 status=ok
// SIG undefined FDynamicEmitterDataBase(void)

undefined8 * FDynamicEmitterDataBase::FDynamicEmitterDataBase(undefined8 *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe;
  *param_1 = &PTR__scalar_deleting_destructor__1451279d8;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 142619420 FUN_142619420 body=221 status=ok
// SIG undefined FUN_142619420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142619420(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  param_1[8] = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *param_1 = &PTR_FUN_145138e68;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((longlong)param_1 + 0xac) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x18) = 0xbf000000;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 142619500 FUN_142619500 body=860 status=ok
// SIG undefined FUN_142619500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142619500(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  FUN_142619de0();
  param_1[0x3e] = param_2;
  puVar8 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_14513afd8;
  param_1[0x3f] = param_3;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x52) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  puVar7 = (undefined8 *)operator_new(0x260);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 4;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    puVar7[6] = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__14513ae88;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    *(undefined4 *)(puVar7 + 0xc) = DAT_1468b5d90;
    *(undefined4 *)((longlong)puVar7 + 100) = DAT_1468b5d94;
    *(undefined4 *)(puVar7 + 0xd) = DAT_1468b5d98;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 0;
    *(undefined4 *)(puVar7 + 0xe) = DAT_1468b5d90;
    *(undefined4 *)((longlong)puVar7 + 0x74) = DAT_1468b5d94;
    *(undefined4 *)(puVar7 + 0xf) = DAT_1468b5d98;
    *(undefined4 *)((longlong)puVar7 + 0x7c) = 0;
    *(undefined4 *)(puVar7 + 0x10) = 0x3f800000;
    *(undefined8 *)((longlong)puVar7 + 0x84) = 0x3f800000;
    *(undefined8 *)((longlong)puVar7 + 0x8c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x94) = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x1c] = 0;
    uVar2 = _DAT_1464aa7d8;
    puVar7[0x22] = _DAT_1464aa7d0;
    puVar7[0x23] = uVar2;
    uVar2 = _DAT_1464aa7e8;
    puVar7[0x24] = _DAT_1464aa7e0;
    puVar7[0x25] = uVar2;
    uVar2 = CONCAT44(uRam00000001464aa7fc,DAT_1464aa7f8);
    puVar7[0x26] = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
    puVar7[0x27] = uVar2;
    uVar2 = uRam00000001464aa808;
    puVar7[0x28] = _DAT_1464aa800;
    puVar7[0x29] = uVar2;
    uVar2 = _DAT_1464aa7d8;
    puVar7[0x2a] = _DAT_1464aa7d0;
    puVar7[0x2b] = uVar2;
    uVar2 = _DAT_1464aa7e8;
    puVar7[0x2c] = _DAT_1464aa7e0;
    puVar7[0x2d] = uVar2;
    uVar2 = CONCAT44(uRam00000001464aa7fc,DAT_1464aa7f8);
    puVar7[0x2e] = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
    puVar7[0x2f] = uVar2;
    uVar2 = uRam00000001464aa808;
    puVar7[0x30] = _DAT_1464aa800;
    puVar7[0x31] = uVar2;
    uVar2 = _DAT_1464aa7d8;
    puVar7[0x32] = _DAT_1464aa7d0;
    puVar7[0x33] = uVar2;
    uVar2 = _DAT_1464aa7e8;
    puVar7[0x34] = _DAT_1464aa7e0;
    puVar7[0x35] = uVar2;
    uVar5 = uRam00000001464aa7fc;
    uVar4 = DAT_1464aa7f8;
    uVar3 = DAT_1464aa7f4;
    *(undefined4 *)(puVar7 + 0x36) = DAT_1464aa7f0;
    *(undefined4 *)((longlong)puVar7 + 0x1b4) = uVar3;
    *(undefined4 *)(puVar7 + 0x37) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x1bc) = uVar5;
    uVar6 = uRam00000001464aa808;
    uVar2 = _DAT_1464aa800;
    *(uint *)((longlong)puVar7 + 0x1dc) = *(uint *)((longlong)puVar7 + 0x1dc) & 0xfffffff0;
    puVar7[0x38] = uVar2;
    puVar7[0x39] = uVar6;
    puVar7[0x3a] = 0;
    *(undefined4 *)(puVar7 + 0x3b) = 0xffffffff;
    *(undefined1 *)(puVar7 + 0x3c) = 0;
    *(undefined4 *)(puVar7 + 0x3f) = 4;
    puVar7[0x40] = 0;
    puVar7[0x41] = 0;
    *(undefined1 *)(puVar7 + 0x43) = 0;
    puVar7[0x44] = 0;
    puVar7[0x45] = 0;
    puVar7[0x3e] = &PTR__scalar_deleting_destructor__14513aec8;
    *(undefined4 *)(puVar7 + 0x46) = 0;
    puVar7[0x47] = 0;
    *(undefined4 *)(puVar7 + 0x48) = 0xffffffff;
    *(undefined4 *)((longlong)puVar7 + 0x244) = 0;
    *(undefined1 *)(puVar7 + 0x49) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24c) = 0;
    *(undefined4 *)(puVar7 + 0x4a) = 0x1000101;
    puVar8 = puVar7;
  }
  param_1[0x40] = puVar8;
  plVar1 = *(longlong **)(param_1[0x3f] + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,puVar8 + 0x1c,0);
    puVar8 = (undefined8 *)param_1[0x40];
  }
  *(byte *)(puVar8 + 0x49) = *(byte *)(param_3 + 0x18c) & 1;
  *(uint *)(param_1[0x40] + 0x24c) = (uint)*(byte *)(param_3 + 400);
  return param_1;
}



// FUNCTION 142619860 FGPUSpriteResources body=361 status=ok
// SIG undefined FGPUSpriteResources(void)

undefined8 * FGPUSpriteResources::FGPUSpriteResources(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14513af28;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 1426199d0 FParticleEmitterBuildInfo body=1025 status=ok
// SIG undefined FParticleEmitterBuildInfo(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FParticleEmitterBuildInfo::FParticleEmitterBuildInfo(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FComposableVectorDistribution::FComposableVectorDistribution(param_1 + 5);
  FComposableVectorDistribution::FComposableVectorDistribution(param_1 + 10);
  FComposableVectorDistribution::FComposableVectorDistribution(param_1 + 0xf);
  FComposableVectorDistribution::FComposableVectorDistribution(param_1 + 0x14);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x25) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 300) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x134) = DAT_1468b5d98;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x36) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = DAT_1468b5d98;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FComposableVectorDistribution::FComposableVectorDistribution(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x46) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x234) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x48);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x4d);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x52);
  *(undefined2 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ba) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x59] = 0x3f800000;
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x5a);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x5f);
  param_1[100] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x65) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x66);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x6b);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0xbf800000;
  param_1[0x76] = 0;
  uVar1 = uRam00000001468b5b78;
  param_1[0x78] = _DAT_1468b5b70;
  param_1[0x79] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[0x7a] = _DAT_1468b5b80;
  param_1[0x7b] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[0x7c] = _DAT_1468b5b90;
  param_1[0x7d] = uVar1;
  param_1[0x7e] = 0;
  param_1[0x7f] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x80) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x404) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x40c) = DAT_1468b5d98;
  param_1[0x82] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x83) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x434) = 1;
  *(undefined4 *)(param_1 + 0x87) = 0xbf000000;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0xbf000000;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffffc0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  FComposableFloatDistribution::InitializeWithConstant(param_1 + 0x52,0x3f800000);
  FComposableFloatDistribution::InitializeWithConstant(param_1 + 0x6b,0x3f800000);
  FComposableFloatDistribution::InitializeWithConstant(param_1 + 0x70,0x3f800000);
  return param_1;
}



// FUNCTION 142619de0 FUN_142619de0 body=270 status=ok
// SIG undefined FUN_142619de0(void)

undefined8 * FUN_142619de0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145139cf0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xfffff809 | 1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x39) = 0xbf000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f800000;
  return param_1;
}



// FUNCTION 142619ef0 FUN_142619ef0 body=76 status=ok
// SIG undefined FUN_142619ef0(void)

undefined8 * FUN_142619ef0(undefined8 *param_1)

{
  FUN_142619de0();
  *param_1 = &PTR_FUN_14513a190;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return param_1;
}



// FUNCTION 142619f40 FUN_142619f40 body=628 status=ok
// SIG undefined FUN_142619f40(void)

undefined8 * FUN_142619f40(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 1) = 4;
  plVar1 = param_1 + 0x49;
  uVar3 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14513ab98;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xb] = &PTR__scalar_deleting_destructor__14513ab98;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x17) = 4;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = &PTR__scalar_deleting_destructor__14513ac38;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = &PTR__scalar_deleting_destructor__14513ac38;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x27) = 4;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x26] = &PTR__scalar_deleting_destructor__14513acb0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 4;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = &PTR__scalar_deleting_destructor__14513aae8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *plVar1 = 0;
  param_1[0x4a] = 0;
  *(int *)(param_1 + 0x4b) = DAT_146b051e8;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4c),4000);
  iVar2 = DAT_146b051e8 + *(int *)(param_1 + 0x4a);
  *(int *)(param_1 + 0x4a) = iVar2;
  if (*(int *)((longlong)param_1 + 0x254) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  uVar5 = uVar3;
  if (0 < DAT_146b051e8) {
    do {
      uVar4 = (int)uVar5 + 1;
      *(int *)(uVar3 + *plVar1) = (DAT_146b051e8 - (int)uVar5) + -1;
      uVar3 = uVar3 + 4;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < DAT_146b051e8);
  }
  return param_1;
}



// FUNCTION 14261a1c0 FUN_14261a1c0 body=33 status=ok
// SIG undefined FUN_14261a1c0(void)

undefined8 * FUN_14261a1c0(undefined8 *param_1)

{
  FUN_142619de0();
  *param_1 = &PTR_FUN_145139f40;
  return param_1;
}



// FUNCTION 14261a1f0 FVectorFieldUniformParameters body=227 status=ok
// SIG undefined FVectorFieldUniformParameters(void)

longlong FVectorFieldUniformParameters::FVectorFieldUniformParameters(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x21c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined8 *)(param_1 + 0x22c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x244) = 0;
  *(undefined8 *)(param_1 + 0x24c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 0x25c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x26c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x27c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x284) = 0;
  *(undefined8 *)(param_1 + 0x28c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x29c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(undefined8 *)(param_1 + 0x2ac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2b4) = 0;
  *(undefined8 *)(param_1 + 700) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0x3f800000;
  return param_1;
}



// FUNCTION 14261a2e0 FUN_14261a2e0 body=194 status=ok
// SIG undefined FUN_14261a2e0(void)

undefined8 * FUN_14261a2e0(undefined8 *param_1)

{
  UParticleModuleSpawnBase::UParticleModuleSpawnBase();
  *param_1 = &PTR_FUN_145138ec8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffc;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x10;
  return param_1;
}



// FUNCTION 14261a3b0 FUN_14261a3b0 body=433 status=ok
// SIG undefined FUN_14261a3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14261a3b0(undefined8 *param_1)

{
  FUN_1425f9f70();
  *param_1 = &PTR__scalar_deleting_destructor__145139970;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x84) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x8c) = DAT_1468b5d98;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x22) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x114) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x11c) = DAT_1468b5d98;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) | 1;
  *(uint *)(param_1 + 0x26) = *(uint *)(param_1 + 0x26) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x17c) = *(uint *)((longlong)param_1 + 0x17c) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 10;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 14261a570 FUN_14261a570 body=406 status=ok
// SIG undefined FUN_14261a570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14261a570(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  FUN_1425f9f70();
  *param_1 = &PTR__scalar_deleting_destructor__145139270;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x11) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x8c) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1c) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xe4) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar1;
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06d58)
  {
    _Init_thread_header(&DAT_146b06d58);
    if (DAT_146b06d58 == -1) {
      FName::FName(&DAT_146b06d50,&DAT_143f3edc8,1);
      _Init_thread_footer(&DAT_146b06d58);
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  uVar2 = DAT_146b06d50;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffe;
  param_1[8] = uVar2;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(uint *)(param_1 + 0x27) = *(uint *)(param_1 + 0x27) | 2;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  return param_1;
}



// FUNCTION 14261a710 FUN_14261a710 body=416 status=ok
// SIG undefined FUN_14261a710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14261a710(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  FUN_1425f9f70();
  *param_1 = &PTR__scalar_deleting_destructor__1451395f0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x84) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1b) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xdc) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06d68)
  {
    _Init_thread_header(&DAT_146b06d68);
    if (DAT_146b06d68 == -1) {
      FName::FName(&DAT_146b06d60,&DAT_143f3edc8,1);
      _Init_thread_footer(&DAT_146b06d68);
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  uVar2 = DAT_146b06d60;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffffe;
  param_1[8] = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(uint *)(param_1 + 0x27) = *(uint *)(param_1 + 0x27) | 1;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x41200000;
  return param_1;
}



// FUNCTION 14261a8b0 ~FDynamicSpriteEmitterReplayDataBase body=88 status=ok
// SIG undefined ~FDynamicSpriteEmitterReplayDataBase(void)

void FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0xd];
  *param_1 = &PTR_FUN_145138e68;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x30);
  }
  *param_1 = &PTR__scalar_deleting_destructor__145138e58;
  FUN_142624c00(param_1 + 3);
  return;
}



// FUNCTION 14261a910 FUN_14261a910 body=367 status=ok
// SIG undefined FUN_14261a910(void)

void FUN_14261a910(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145139cf0;
  if (0 < *(int *)(param_1 + 0x3b)) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + param_1[0x3a]);
      (**(code **)(*plVar2 + 0x70))(plVar2,1);
      (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x3b));
  }
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1dc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x3a,0);
  }
  FMemory::Free(param_1[0x20]);
  FMemory::Free(param_1[0x21]);
  FMemory::Free(param_1[0x22]);
  puVar1 = param_1 + 0x2e;
  plVar2 = (longlong *)*puVar1;
  for (iVar3 = *(int *)(param_1 + 0x2f); iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (*(int *)((longlong)param_1 + 0x17c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar1,0);
  }
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x32] != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x2f);
  plVar2 = (longlong *)*puVar1;
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)*puVar1;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 14261aa80 ~FParticleSortBuffers body=1380 status=ok
// SIG undefined ~FParticleSortBuffers(void)

void FParticleSortBuffers::~FParticleSortBuffers(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar7 = 2;
  lVar8 = param_1 + 0xb0;
  lVar9 = 2;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar9 != 0);
  lVar9 = 2;
  lVar8 = param_1 + 0xa0;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar9 != 0);
  lVar9 = 2;
  lVar8 = param_1 + 0x90;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar9 != 0);
  lVar9 = 2;
  lVar8 = param_1 + 0x80;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar9 != 0);
  lVar9 = 2;
  lVar8 = param_1 + 0x70;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar9 != 0);
  lVar9 = 2;
  lVar8 = param_1 + 0x60;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar9 != 0);
  lVar9 = 2;
  lVar8 = param_1 + 0x50;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar9 = lVar9 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
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
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar9 != 0);
  lVar8 = param_1 + 0x40;
  do {
    puVar3 = *(undefined8 **)(lVar8 + -8);
    lVar8 = lVar8 + -8;
    lVar7 = lVar7 + -1;
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
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar9 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar7 != 0);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 14261aff0 ~FTexelAllocator body=174 status=ok
// SIG undefined ~FTexelAllocator(void)

void FTexelAllocator::~FTexelAllocator(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < (int)param_1[4]) {
    do {
      lVar4 = *param_1;
      plVar5 = *(longlong **)(uVar8 + lVar4);
      if (*(longlong **)(uVar8 + lVar4) != (longlong *)0x0) {
        do {
          plVar1 = (longlong *)*plVar5;
          FMemory::Free(plVar5);
          plVar5 = plVar1;
        } while (plVar1 != (longlong *)0x0);
        lVar4 = *param_1;
      }
      *(undefined8 *)(uVar8 + lVar4) = 0;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 8;
    } while ((int)uVar6 < (int)param_1[4]);
  }
  puVar3 = (undefined8 *)param_1[2];
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    FMemory::Free(puVar3);
    puVar3 = puVar2;
  }
  param_1[2] = 0;
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14261b0a0 FUN_14261b0a0 body=390 status=ok
// SIG undefined FUN_14261b0a0(void)

void FUN_14261b0a0(ulonglong param_1)

{
  int iVar1;
  
  if (DAT_146534418 != 0) {
    LOCK();
    DAT_146b051ec = DAT_146b051ec + (int)param_1;
    UNLOCK();
    LOCK();
    if (DAT_146b051ec == 0) {
      DAT_146b051ec = 0;
    }
    UNLOCK();
    iVar1 = 0;
    LOCK();
    if (DAT_146b05278 != 0) {
      iVar1 = DAT_146b05278;
    }
    UNLOCK();
    DAT_146b05278 = DAT_146b051ec;
    if (DAT_146b051ec <= iVar1) {
      DAT_146b05278 = iVar1;
    }
    LOCK();
    UNLOCK();
    if (param_1 < 0x801) {
      if (param_1 == 0x800) {
        FUN_14261e270(&DAT_146b055e0,0x800);
        return;
      }
      if (param_1 < 0x201) {
        if (param_1 == 0x200) {
          FUN_14261d690(&DAT_146b05620,0x200);
          return;
        }
        if (param_1 == 400) {
          FUN_14261cf70(&DAT_146b05680,400);
          return;
        }
        if (param_1 == 0x1b0) {
          FUN_14261d1d0(&DAT_146b056a0,0x1b0);
          return;
        }
        if (param_1 == 0x1f0) {
          FUN_14261d430(&DAT_146b05640,0x1f0);
          return;
        }
      }
      else {
        if (param_1 == 0x260) {
          FUN_14261db50(&DAT_146b05660,0x260);
          return;
        }
        if (param_1 == 0x400) {
          FUN_14261ddb0(&DAT_146b05600,0x400);
          return;
        }
      }
    }
    else {
      if (param_1 == 0x1000) {
        FUN_14261cab0(&DAT_146b055c0,0x1000);
        return;
      }
      if (param_1 == 0x2000) {
        FUN_14261d8f0(&DAT_146b055a0,0x2000);
        return;
      }
      if (param_1 == 0x4000) {
        FUN_14261e010(&DAT_146b05580,0x4000);
        return;
      }
      if (param_1 == 0x8000) {
        FUN_14261e4d0(&DAT_146b05560,0x8000);
        return;
      }
      if (param_1 == 0x10000) {
        FUN_14261cd10(&DAT_146b05540,0x10000);
        return;
      }
    }
  }
  FMemory::Malloc(param_1,0);
  return;
}



// FUNCTION 14261b230 FUN_14261b230 body=332 status=ok
// SIG undefined FUN_14261b230(void)

void FUN_14261b230(undefined8 param_1,ulonglong param_2)

{
  if (DAT_146534418 != 0) {
    LOCK();
    DAT_146b051ec = DAT_146b051ec - (int)param_2;
    UNLOCK();
    if (param_2 < 0x801) {
      if (param_2 == 0x800) {
        FUN_1415b1b00(&DAT_146b055e0,param_1);
        return;
      }
      if (param_2 < 0x201) {
        if (param_2 == 0x200) {
          FUN_1415b1b00(&DAT_146b05620,param_1);
          return;
        }
        if (param_2 == 400) {
          FUN_1415b1b00(&DAT_146b05680,param_1);
          return;
        }
        if (param_2 == 0x1b0) {
          FUN_1415b1b00(&DAT_146b056a0,param_1);
          return;
        }
        if (param_2 == 0x1f0) {
          FUN_1415b1b00(&DAT_146b05640,param_1);
          return;
        }
      }
      else {
        if (param_2 == 0x260) {
          FUN_1415b1b00(&DAT_146b05660,param_1);
          return;
        }
        if (param_2 == 0x400) {
          FUN_1415b1b00(&DAT_146b05600,param_1);
          return;
        }
      }
    }
    else {
      if (param_2 == 0x1000) {
        FUN_1415b1b00(&DAT_146b055c0,param_1);
        return;
      }
      if (param_2 == 0x2000) {
        FUN_1415b1b00(&DAT_146b055a0,param_1);
        return;
      }
      if (param_2 == 0x4000) {
        FUN_1415b1b00(&DAT_146b05580,param_1);
        return;
      }
      if (param_2 == 0x8000) {
        FUN_1415b1b00(&DAT_146b05560,param_1);
        return;
      }
      if (param_2 == 0x10000) {
        FUN_1415b1b00(&DAT_146b05540,param_1);
        return;
      }
    }
  }
  FMemory::Free();
  return;
}



// FUNCTION 14261b380 FUN_14261b380 body=754 status=ok
// SIG undefined FUN_14261b380(void)

void FUN_14261b380(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_res8;
  int local_res18 [2];
  uint local_res20;
  
  fVar16 = 0.0;
  fVar14 = 1.0;
  lVar1 = **(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x40);
  fVar15 = *(float *)param_1[1];
  iVar4 = *(int *)param_1[2];
  if ((0 < iVar4) && (0.0 < *(float *)param_1[3])) {
    fVar16 = 1.0 / (float)iVar4;
  }
  local_res8 = 0;
  if (0 < iVar4) {
    do {
      uVar9 = 0;
      lVar6 = *param_1;
      local_res20 = *(uint *)(lVar6 + 0x128);
      uVar11 = (ulonglong)(int)local_res20;
      lVar8 = (longlong)
              (int)((uint)*(ushort *)(*(longlong *)(lVar6 + 0x108) + uVar11 * 2) *
                   *(int *)(lVar6 + 0x124)) + *(longlong *)(lVar6 + 0x100);
      *(uint *)(lVar6 + 0x128) = local_res20 + 1;
      if (param_2 != '\0') {
        fVar14 = fVar14 - fVar16;
        *(float *)param_1[1] = *(float *)param_1[1] - *(float *)param_1[3];
      }
      (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,lVar8,param_1[4],param_1[5]);
      lVar6 = *(longlong *)param_1[6];
      uVar13 = uVar9;
      if (0 < *(int *)(lVar6 + 0x78)) {
        do {
          plVar2 = *(longlong **)(uVar9 + *(longlong *)(lVar6 + 0x70));
          if ((*(byte *)(plVar2 + 5) & 0x80) != 0) {
            lVar6 = *param_1;
            lVar7 = *(longlong *)(lVar6 + 0x10);
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(lVar7 + 0xb8,local_res18,*(undefined8 *)(*(longlong *)(lVar1 + 0x70) + uVar9));
            if (local_res18[0] == -1) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(longlong *)(lVar7 + 0xb8) + (longlong)local_res18[0] * 0x18;
            }
            puVar5 = (undefined4 *)(lVar7 + 8);
            if (lVar7 == 0) {
              puVar5 = (undefined4 *)0x0;
            }
            if (puVar5 == (undefined4 *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = *puVar5;
            }
            (**(code **)(*plVar2 + 0x280))(plVar2,lVar6,uVar10,fVar15,lVar8);
            iVar4 = _finite((double)*(float *)(lVar8 + 0x10));
            if ((iVar4 != 0) && (iVar4 = _finite((double)*(float *)(lVar8 + 0x14)), iVar4 != 0)) {
              _finite((double)*(float *)(lVar8 + 0x18));
            }
          }
          uVar12 = (int)uVar13 + 1;
          uVar9 = uVar9 + 8;
          lVar6 = *(longlong *)param_1[6];
          uVar13 = (ulonglong)uVar12;
        } while ((int)uVar12 < *(int *)(lVar6 + 0x78));
        uVar11 = (ulonglong)local_res20;
      }
      (**(code **)(*(longlong *)*param_1 + 0xd0))((longlong *)*param_1,lVar8,fVar14,fVar15);
      if (*(float *)(lVar8 + 0xc) <= 1.0) {
        pbVar3 = *(byte **)param_1[7];
        if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
          (**(code **)(**(longlong **)(*(longlong *)param_1[6] + 0x58) + 0x380))
                    (*(longlong **)(*(longlong *)param_1[6] + 0x58),*param_1,pbVar3,lVar8);
        }
        if (param_2 == '\0') {
          fVar14 = fVar14 - fVar16;
          fVar15 = fVar15 - *(float *)param_1[3];
        }
      }
      else {
        (**(code **)(*(longlong *)*param_1 + 0xe8))((longlong *)*param_1,uVar11 & 0xffffffff);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < *(int *)param_1[2]);
  }
  return;
}



// FUNCTION 14261b680 operator() body=158 status=ok
// SIG undefined operator()(void)

void <lambda_6b4f3c461ca5edbc3d5013ca6f6beaf4>::operator()(void)

{
  longlong lVar1;
  int iVar2;
  
  if (DAT_146b06d00 != 0) {
    lVar1 = DAT_146b06cf8 + 0x50;
    iVar2 = DAT_146b06d00;
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
      lVar1 = lVar1 + 0x90;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  DAT_146b06d00 = 0;
  if (DAT_146b06d04 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146b06cf8,0);
  }
  DAT_146b06d18 = 0;
  if (DAT_146b06d1c != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146b06d10,0);
  }
  DAT_146b06d30 = 0;
  if (DAT_146b06d34 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146b06d28,0);
  }
  return;
}



// FUNCTION 14261b720 FUN_14261b720 body=97 status=ok
// SIG undefined FUN_14261b720(void)

undefined8 * FUN_14261b720(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513b268;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14261b790 FUN_14261b790 body=97 status=ok
// SIG undefined FUN_14261b790(void)

undefined8 * FUN_14261b790(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513ad10;
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



// FUNCTION 14261b800 FUN_14261b800 body=97 status=ok
// SIG undefined FUN_14261b800(void)

undefined8 * FUN_14261b800(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513af78;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14261b870 FUN_14261b870 body=97 status=ok
// SIG undefined FUN_14261b870(void)

undefined8 * FUN_14261b870(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513acf0;
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



// FUNCTION 14261b8e0 FUN_14261b8e0 body=97 status=ok
// SIG undefined FUN_14261b8e0(void)

undefined8 * FUN_14261b8e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513b248;
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



// FUNCTION 14261b950 FUN_14261b950 body=97 status=ok
// SIG undefined FUN_14261b950(void)

undefined8 * FUN_14261b950(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145138eb8;
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



// FUNCTION 14261b9c0 FUN_14261b9c0 body=97 status=ok
// SIG undefined FUN_14261b9c0(void)

undefined8 * FUN_14261b9c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513af08;
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



// FUNCTION 14261ba30 FUN_14261ba30 body=97 status=ok
// SIG undefined FUN_14261ba30(void)

undefined8 * FUN_14261ba30(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513ad00;
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



// FUNCTION 14261baa0 FUN_14261baa0 body=97 status=ok
// SIG undefined FUN_14261baa0(void)

undefined8 * FUN_14261baa0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513af18;
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



// FUNCTION 14261bb10 FUN_14261bb10 body=97 status=ok
// SIG undefined FUN_14261bb10(void)

undefined8 * FUN_14261bb10(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513b258;
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



// FUNCTION 14261bb80 FUN_14261bb80 body=97 status=ok
// SIG undefined FUN_14261bb80(void)

undefined8 * FUN_14261bb80(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513b278;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14261bbf0 FUN_14261bbf0 body=97 status=ok
// SIG undefined FUN_14261bbf0(void)

undefined8 * FUN_14261bbf0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513b238;
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



// FUNCTION 14261bc60 FUN_14261bc60 body=97 status=ok
// SIG undefined FUN_14261bc60(void)

undefined8 * FUN_14261bc60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513b288;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14261bcd0 FUN_14261bcd0 body=97 status=ok
// SIG undefined FUN_14261bcd0(void)

undefined8 * FUN_14261bcd0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14513af68;
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



// FUNCTION 14261bd40 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDynamicEmitterReplayDataBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145138e58;
  FUN_142624c00(param_1 + 3);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14261bd90 FUN_14261bd90 body=123 status=ok
// SIG undefined FUN_14261bd90(void)

undefined8 * FUN_14261bd90(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0xd];
  *param_1 = &PTR_FUN_145138e68;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x30);
  }
  *param_1 = &PTR__scalar_deleting_destructor__145138e58;
  FUN_142624c00(param_1 + 3);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14261be10 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGPUParticleVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14261be70 FUN_14261be70 body=222 status=ok
// SIG undefined FUN_14261be70(void)

undefined8 * FUN_14261be70(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_14513af88;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x7c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xe,0);
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__1451279d8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (DAT_146534418 != 0) {
        LOCK();
        DAT_146b051ec = DAT_146b051ec + -400;
        UNLOCK();
        FUN_1415b1b00(&DAT_146b05680,param_1);
        return param_1;
      }
      FMemory::Free(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,400);
  }
  return param_1;
}



// FUNCTION 14261bf50 FUN_14261bf50 body=213 status=ok
// SIG undefined FUN_14261bf50(void)

undefined8 * FUN_14261bf50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14513afd8;
  FUN_14262dda0();
  FUN_1426219a0(param_1[0x40]);
  param_1[0x40] = 0;
  if (param_1[0x4f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x49] != 0) {
    FMemory::Free();
  }
  if (param_1[0x47] != 0) {
    FMemory::Free();
  }
  if (param_1[0x45] != 0) {
    FMemory::Free();
  }
  if (param_1[0x41] != 0) {
    FMemory::Free();
  }
  FUN_14261a910(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 14261c030 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FGPUSpriteResources::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 14261c080 FUN_14261c080 body=79 status=ok
// SIG undefined FUN_14261c080(void)

longlong FUN_14261c080(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6b8);
  }
  return param_1;
}



// FUNCTION 14261c0d0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FParticleAttributesTexture::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14261c120 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FParticleCurveTexture::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FTexelAllocator::~FTexelAllocator(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14261c190 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurCS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14261a910();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 14261c1d0 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FParticleIndicesVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14261c230 FUN_14261c230 body=73 status=ok
// SIG undefined FUN_14261c230(void)

longlong FUN_14261c230(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  FUN_14261a910(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 14261c280 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FParticleSortBuffers::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FParticleSortBuffers();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14261c2c0 FUN_14261c2c0 body=62 status=ok
// SIG undefined FUN_14261c2c0(void)

undefined8 * FUN_14261c2c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145139f40;
  FUN_14261a910();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 14261c300 `scalar_deleting_destructor' body=91 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FParticleStateTextures::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x48);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14261c360 FUN_14261c360 body=91 status=ok
// SIG undefined FUN_14261c360(void)

longlong FUN_14261c360(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x658);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x668);
  }
  return param_1;
}



// FUNCTION 14261c3c0 FUN_14261c3c0 body=113 status=ok
// SIG undefined FUN_14261c3c0(void)

longlong FUN_14261c3c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TArray<MenuData,FDefaultAllocator>::~TArray<MenuData,FDefaultAllocator>(param_1 + 0x50);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14261c440 FUN_14261c440 body=531 status=ok
// SIG undefined FUN_14261c440(void)

undefined4 * FUN_14261c440(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *_Dst;
  undefined8 uVar7;
  size_t _Size;
  undefined8 *puVar8;
  undefined8 *puVar9;
  short sVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar7 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar7,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    uVar3 = *(uint *)(param_3 + 1);
    uVar11 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x60);
      puVar8 = (undefined8 *)0x0;
      if (0 < iVar4) {
        puVar9 = puVar8;
        do {
          iVar13 = (int)puVar9;
          puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar13 * 8);
          for (puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x40) + (longlong)iVar13 * 8);
              puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
            uVar1 = *(ushort *)((longlong)puVar6 + 10);
            uVar12 = (uint)uVar1;
            if (uVar12 != uVar3 && (int)uVar3 <= (int)uVar12) {
              *(ushort *)((longlong)puVar6 + 10) = uVar1 - (short)uVar3;
              local_res20 = CONCAT22((short)puVar9,*(short *)(puVar6 + 1));
              *(short *)(puVar6 + 1) = *(short *)(puVar6 + 1) + (short)uVar3;
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - uVar3;
              goto LAB_14261c514;
            }
            if (uVar12 == uVar3) {
              uVar2 = *(undefined2 *)(puVar6 + 1);
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - uVar3;
              *puVar5 = *puVar6;
              *puVar6 = *(undefined8 *)(param_1 + 0x50);
              *(undefined8 **)(param_1 + 0x50) = puVar6;
              local_res20 = CONCAT22((short)puVar9,uVar2);
              goto LAB_14261c514;
            }
            puVar5 = puVar6;
          }
          puVar9 = (undefined8 *)(ulonglong)(iVar13 + 1U);
        } while ((int)(iVar13 + 1U) < iVar4);
      }
      uVar11 = 0;
      local_res20 = CONCAT22((short)iVar4,*(undefined2 *)(param_1 + 0x5c));
LAB_14261c514:
      sVar10 = (short)uVar11;
      if (sVar10 != 0) {
        iVar4 = *(int *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = iVar4 + 1;
        if (*(int *)(param_1 + 0x74) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x68,iVar4);
        }
        puVar9 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x68));
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined4 *)((longlong)puVar9 + 10) = 0;
          puVar8 = puVar9;
        }
        *(undefined4 *)(puVar8 + 1) = local_res20;
        _Size = (uVar11 & 0xffff) << 2;
        *(short *)((longlong)puVar8 + 0xc) = sVar10;
        _Dst = (void *)FMemory::Malloc(_Size,0);
        *puVar8 = _Dst;
        _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_3,_Size);
        *param_2 = local_res20;
        *(short *)(param_2 + 1) = sVar10;
        return param_2;
      }
      *param_2 = local_res20;
      *(undefined2 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14261c660 FUN_14261c660 body=477 status=ok
// SIG undefined FUN_14261c660(void)

void FUN_14261c660(longlong param_1,longlong param_2)

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
  longlong local_28;
  longlong local_20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_28 = param_1;
    local_20 = param_2;
    FUN_142621e10(&local_28,2,local_res18);
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
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_14513b268;
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
  local_res20 = lVar7;
  FUN_1409421c0(plVar9,0,0xff,1,0,0);
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



// FUNCTION 14261c840 FUN_14261c840 body=71 status=ok
// SIG undefined FUN_14261c840(void)

void FUN_14261c840(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 0x228);
  *puVar1 = *puVar1 ^ 1;
  lVar2 = *(longlong *)(param_1 + 0x78);
  *(undefined4 *)(lVar2 + 0x238) = 0;
  if (0x7fffffff < *(uint *)(lVar2 + 0x23c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (lVar2 + 0x230,0);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x240) = 0;
  return;
}



// FUNCTION 14261c890 FUN_14261c890 body=539 status=ok
// SIG undefined FUN_14261c890(void)

void FUN_14261c890(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  
  param_1[1] = param_2;
  param_2 = param_2 + param_3 * 2;
  *param_1 = param_2;
  param_1[2] = param_3;
  uVar4 = (ulonglong)(int)param_2;
  if (DAT_146534418 != 0) {
    LOCK();
    DAT_146b051ec = DAT_146b051ec + param_2;
    UNLOCK();
    LOCK();
    if (DAT_146b051ec == 0) {
      DAT_146b051ec = 0;
    }
    UNLOCK();
    iVar1 = 0;
    LOCK();
    if (DAT_146b05278 != 0) {
      iVar1 = DAT_146b05278;
    }
    UNLOCK();
    DAT_146b05278 = DAT_146b051ec;
    if (DAT_146b051ec <= iVar1) {
      DAT_146b05278 = iVar1;
    }
    iVar1 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    LOCK();
    UNLOCK();
    iVar3 = 0x20;
    if (param_2 != 0) {
      iVar3 = 0x1f - iVar1;
    }
    param_2 = param_2 - 1;
    iVar1 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    if (param_2 == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x1f' - (char)iVar1;
    }
    uVar4 = (ulonglong)(uint)(1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f));
    if (uVar4 < 0x801) {
      if (uVar4 == 0x800) {
        lVar2 = FUN_14261e270(&DAT_146b055e0,0x800);
        goto LAB_14261ca34;
      }
      if (uVar4 < 0x201) {
        if (uVar4 == 0x200) {
          lVar2 = FUN_14261d690(&DAT_146b05620,0x200);
          goto LAB_14261ca34;
        }
        if (uVar4 == 400) {
          lVar2 = FUN_14261cf70(&DAT_146b05680,400);
          goto LAB_14261ca34;
        }
        if (uVar4 == 0x1b0) {
          lVar2 = FUN_14261d1d0(&DAT_146b056a0,0x1b0);
          goto LAB_14261ca34;
        }
        if (uVar4 == 0x1f0) {
          lVar2 = FUN_14261d430(&DAT_146b05640,0x1f0);
          goto LAB_14261ca34;
        }
      }
      else {
        if (uVar4 == 0x260) {
          lVar2 = FUN_14261db50(&DAT_146b05660,0x260);
          goto LAB_14261ca34;
        }
        if (uVar4 == 0x400) {
          lVar2 = FUN_14261ddb0(&DAT_146b05600,0x400);
          goto LAB_14261ca34;
        }
      }
    }
    else {
      if (uVar4 == 0x1000) {
        lVar2 = FUN_14261cab0(&DAT_146b055c0,0x1000);
        goto LAB_14261ca34;
      }
      if (uVar4 == 0x2000) {
        lVar2 = FUN_14261d8f0(&DAT_146b055a0,0x2000);
        goto LAB_14261ca34;
      }
      if (uVar4 == 0x4000) {
        lVar2 = FUN_14261e010(&DAT_146b05580,0x4000);
        goto LAB_14261ca34;
      }
      if (uVar4 == 0x8000) {
        lVar2 = FUN_14261e4d0(&DAT_146b05560,0x8000);
        goto LAB_14261ca34;
      }
      if (uVar4 == 0x10000) {
        lVar2 = FUN_14261cd10(&DAT_146b05540,0x10000);
        goto LAB_14261ca34;
      }
    }
  }
  lVar2 = FMemory::Malloc(uVar4,0);
LAB_14261ca34:
  *(longlong *)(param_1 + 4) = lVar2;
  *(longlong *)(param_1 + 6) = (int)param_1[1] + lVar2;
  return;
}



// FUNCTION 14261cab0 FUN_14261cab0 body=595 status=ok
// SIG undefined FUN_14261cab0(void)

ulonglong FUN_14261cab0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x4000,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 0xc) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261cd10 FUN_14261cd10 body=595 status=ok
// SIG undefined FUN_14261cd10(void)

ulonglong FUN_14261cd10(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x40000,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 0x10) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261cf70 FUN_14261cf70 body=595 status=ok
// SIG undefined FUN_14261cf70(void)

ulonglong FUN_14261cf70(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x640,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 * 400) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261d1d0 FUN_14261d1d0 body=595 status=ok
// SIG undefined FUN_14261d1d0(void)

ulonglong FUN_14261d1d0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x6c0,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 * 0x1b0) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261d430 FUN_14261d430 body=595 status=ok
// SIG undefined FUN_14261d430(void)

ulonglong FUN_14261d430(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x7c0,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 * 0x1f0) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261d690 FUN_14261d690 body=595 status=ok
// SIG undefined FUN_14261d690(void)

ulonglong FUN_14261d690(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x800,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 9) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261d8f0 FUN_14261d8f0 body=595 status=ok
// SIG undefined FUN_14261d8f0(void)

ulonglong FUN_14261d8f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x8000,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 0xd) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261db50 FUN_14261db50 body=595 status=ok
// SIG undefined FUN_14261db50(void)

ulonglong FUN_14261db50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x980,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 * 0x260) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261ddb0 FUN_14261ddb0 body=595 status=ok
// SIG undefined FUN_14261ddb0(void)

ulonglong FUN_14261ddb0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x1000,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 10) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261e010 FUN_14261e010 body=595 status=ok
// SIG undefined FUN_14261e010(void)

ulonglong FUN_14261e010(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x10000,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 0xe) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261e270 FUN_14261e270 body=595 status=ok
// SIG undefined FUN_14261e270(void)

ulonglong FUN_14261e270(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x2000,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 0xb) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261e4d0 FUN_14261e4d0 body=595 status=ok
// SIG undefined FUN_14261e4d0(void)

ulonglong FUN_14261e4d0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x20000,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 << 0xf) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 14261e730 AllocateTile body=120 status=ok
// SIG undefined AllocateTile(void)

undefined4 FParticleSimulationResources::AllocateTile(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x260);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 600);
  if (0 < iVar1) {
    *(int *)(param_1 + 600) = iVar1 + -1;
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x248) + -4 + (longlong)iVar1 * 4);
    LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0xffffffff;
}



// FUNCTION 14261e7b0 FUN_14261e7b0 body=999 status=ok
// SIG undefined FUN_14261e7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14261e7b0(longlong param_1,longlong *param_2,int param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x78);
  iVar10 = *(int *)(param_1 + 0x2a0);
  if ((iVar10 < 0) || (*(int *)(param_1 + 0x210) <= iVar10)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar10 * 4);
  }
  else {
    uVar6 = 0xffffffff;
  }
  iVar10 = 0;
  fVar12 = (float)uVar6 / (float)_DAT_146b051e0;
  fVar13 = fVar12 - (float)(int)fVar12;
  fVar12 = (float)(int)fVar12 / (float)_DAT_146b051e4 -
           (float)(int)((float)(int)fVar12 / (float)_DAT_146b051e4);
  if (0 < param_3) {
    iVar4 = *(int *)(param_1 + 0x2a4);
    do {
      if (iVar4 < 1) {
        if (*param_4 < *(int *)(param_1 + 0x210)) {
          lVar9 = *(longlong *)(param_1 + 0x228);
          if (*(longlong *)(param_1 + 0x228) == 0) {
            lVar9 = param_1 + 0x218;
          }
          lVar7 = 0;
          iVar4 = *(int *)(param_1 + 0x230) + 0x1f;
          iVar8 = 0;
          iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
          if (0 < iVar4) {
            do {
              if (*(int *)(lVar9 + lVar7 * 4) != -1) break;
              iVar8 = iVar8 + 1;
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar4);
          }
          if (iVar8 < iVar4) {
            uVar6 = *(uint *)(lVar9 + lVar7 * 4);
            uVar5 = ~uVar6;
            iVar4 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
              }
            }
            iVar4 = iVar8 * 0x20 + iVar4;
            if (iVar4 < *(int *)(param_1 + 0x230)) {
              *(uint *)(lVar9 + lVar7 * 4) = uVar6 | -uVar5 & uVar5;
              *(int *)(param_1 + 0x2a0) = iVar4;
              goto LAB_14261ea19;
            }
          }
          *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
        }
        else {
          iVar4 = FParticleSimulationResources::AllocateTile(uVar2);
          if (iVar4 == -1) {
            return iVar10;
          }
          iVar8 = *(int *)(param_1 + 0x210);
          *(int *)(param_1 + 0x210) = iVar8 + 1;
          if (*(int *)(param_1 + 0x214) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x208,iVar8);
          }
          *(int *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar8 * 4) = iVar4;
          *(int *)(param_1 + 0x2a0) = iVar8;
          iVar8 = *(int *)(param_1 + 0x240);
          *(int *)(param_1 + 0x240) = iVar8 + 1;
          if (*(int *)(param_1 + 0x244) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x238,iVar8);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar8 * 4) = 0;
          iVar8 = *(int *)(param_1 + 0x250);
          *(int *)(param_1 + 0x250) = iVar8 + 1;
          if (*(int *)(param_1 + 0x254) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x248,iVar8);
          }
          *(int *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar8 * 4) = iVar4;
          TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 0x218,1);
          *(undefined1 *)(*(longlong *)(param_1 + 0x200) + 0x250) = 1;
        }
LAB_14261ea19:
        *param_4 = *param_4 + 1;
        fVar11 = (float)*(uint *)(*(longlong *)(param_1 + 0x208) +
                                 (longlong)*(int *)(param_1 + 0x2a0) * 4) / (float)_DAT_146b051e0;
        fVar13 = fVar11 - (float)(int)fVar11;
        fVar12 = (float)_DAT_146b051e4;
        *(undefined4 *)(param_1 + 0x2a4) = 0x10;
        fVar12 = (float)(int)fVar11 / fVar12 - (float)(int)((float)(int)fVar11 / fVar12);
      }
      iVar4 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      puVar1 = (undefined8 *)(*param_2 + (longlong)iVar4 * 0x48);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
      }
      iVar4 = 0x10 - *(int *)(param_1 + 0x2a4);
      iVar10 = iVar10 + 1;
      uVar5 = iVar4 >> 0x1f & 3;
      uVar6 = iVar4 + uVar5;
      *(float *)(puVar1 + 8) = (float)(int)((uVar6 & 3) - uVar5) / (float)DAT_146534410 + fVar13;
      *(float *)((longlong)puVar1 + 0x44) = (float)((int)uVar6 >> 2) / (float)DAT_146534414 + fVar12
      ;
      *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x2a0);
      *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + -1;
      iVar4 = *(int *)(param_1 + 0x2a4);
    } while (iVar10 < param_3);
  }
  return param_3;
}



// FUNCTION 14261eba0 FUN_14261eba0 body=168 status=ok
// SIG undefined FUN_14261eba0(void)

void FUN_14261eba0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_14263ab70();
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *(float *)(param_1 + 0x5c) = fVar1 + *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x60) = fVar2 + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 100) = fVar3 + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x144) = fVar1 + *(float *)(param_1 + 0x144);
  *(float *)(param_1 + 0x148) = fVar2 + *(float *)(param_1 + 0x148);
  *(float *)(param_1 + 0x14c) = fVar3 + *(float *)(param_1 + 0x14c);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1) == 0) {
    fVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0x1c0) = fVar1;
  }
  return;
}



// FUNCTION 14261ec50 BeginCreateGPUSpriteResources body=137 status=ok
// SIG undefined BeginCreateGPUSpriteResources(void)

longlong BeginCreateGPUSpriteResources(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  lVar3 = 0;
  lVar1 = lVar2;
  if ((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
     (((lVar1 = lVar3, DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
      ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))))) {
    lVar1 = operator_new(0x240);
    if (lVar1 != 0) {
      lVar2 = FGPUSpriteResources::FGPUSpriteResources(lVar1);
    }
    LOCK();
    *(int *)(lVar2 + 0x230) = *(int *)(lVar2 + 0x230) + 1;
    UNLOCK();
    FUN_14262fcb0(lVar2,param_1);
    FUN_141edf270(lVar2);
    lVar1 = lVar2;
  }
  return lVar1;
}



// FUNCTION 14261ece0 BeginReleaseGPUSpriteResources body=32 status=ok
// SIG undefined BeginReleaseGPUSpriteResources(void)

void BeginReleaseGPUSpriteResources(longlong param_1)

{
  if (param_1 != 0) {
    ClearGPUSpriteResourceData();
    FUN_14262d6b0(param_1);
  }
  return;
}



// FUNCTION 14261ed00 FUN_14261ed00 body=525 status=ok
// SIG undefined FUN_14261ed00(void)

void FUN_14261ed00(longlong *param_1)

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
  
  *(undefined1 *)((longlong)param_1 + 0x251) = 1;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res18);
    (**(code **)(param_1[0x3e] + 0x30))();
    (**(code **)(*param_1 + 0x30))(param_1);
    if ((longlong *)param_1[0x47] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x47] + 0x30))();
    }
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
  *plVar9 = (longlong)&PTR_FUN_14513af18;
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
  FUN_14048a3d0(plVar9,0,0xff,1,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res10);
      return;
    }
  }
  return;
}



// FUNCTION 14261ef10 BeginUpdateGPUSpriteResources body=50 status=ok
// SIG undefined BeginUpdateGPUSpriteResources(void)

void BeginUpdateGPUSpriteResources(undefined8 param_1,undefined8 param_2)

{
  ClearGPUSpriteResourceData();
  FUN_14262fcb0(param_1,param_2);
  FUN_141edf5d0(param_1);
  return;
}



// FUNCTION 14261ef50 Bind body=67 status=ok
// SIG undefined Bind(void)

void FVectorFieldVisualizationVertexFactoryShaderParameters::Bind
               (longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"GPUSpriteParameters",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"GPUSpriteParameterIndex",0);
  return;
}



// FUNCTION 14261efa0 FUN_14261efa0 body=287 status=ok
// SIG undefined FUN_14261efa0(void)

void FUN_14261efa0(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"ParticleIndices",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"ParticleIndicesOffset",0);
  FShaderResourceParameter::Bind(param_1 + 0x12,param_2,L"PositionTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x16,param_2,L"PositionTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x1a,param_2,L"VelocityTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x1e,param_2,L"VelocityTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x22,param_2,L"AttributesTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x26,param_2,L"AttributesTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x2a,param_2,L"CurveTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x2e,param_2,L"CurveTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x32,param_2,L"GPUSpriteParameters",0);
  FShaderParameter::Bind(param_1 + 0x36,param_2,L"GPUSpriteParameterIndex",0);
  return;
}



// FUNCTION 14261f0c0 Bind body=129 status=ok
// SIG undefined Bind(void)

void FParticlePerFrameSimulationShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"PointAttractor",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"PositionOffsetAndAttractorStrength",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"LocalToWorldScale",0);
  FShaderParameter::Bind(param_1 + 0x12,param_2,L"DeltaSeconds",0);
  FShaderParameter::Bind(param_1 + 0x18,param_2,L"NumIterations",0);
  return;
}



// FUNCTION 14261f150 FUN_14261f150 body=2177 status=ok
// SIG undefined FUN_14261f150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14261f150(longlong param_1,undefined8 *param_2,int *param_3,longlong *param_4)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  void *_Dst;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_148 [48];
  char local_118 [4];
  float local_114;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  int local_f0;
  undefined8 *local_e8;
  float local_d8;
  ulonglong local_d0;
  
  puVar21 = auStack_148;
  local_d0 = DAT_1468387a8 ^ (ulonglong)local_118;
  if (*(int *)(param_1 + 0x120) == -0x10) {
    _Dst = (void *)0x0;
  }
  else {
    uVar18 = (ulonglong)(*(int *)(param_1 + 0x120) + 0x1f);
    uVar13 = uVar18 + 0xf;
    if (uVar13 <= uVar18) {
      uVar13 = 0xffffffffffffff0;
    }
    puVar21 = auStack_148 + -(uVar13 & 0xfffffffffffffff0);
    _Dst = (void *)((longlong)&local_110 + -(uVar13 & 0xfffffffffffffff0));
  }
  bVar2 = *(byte *)(*(longlong **)(param_1 + 0x1f8) + 0x31);
  if ((bVar2 < 2) || (local_118[0] = '\0', bVar2 == 6)) {
    local_118[0] = '\x01';
  }
  if ((*(byte *)(**(longlong **)(param_1 + 0x1f8) + 100) & 1) == 0) {
    local_108 = *(float *)(param_1 + 0x14c) - *(float *)(param_1 + 100);
    local_110 = CONCAT44(*(float *)(param_1 + 0x148) - *(float *)(param_1 + 0x60),
                         *(float *)(param_1 + 0x144) - *(float *)(param_1 + 0x5c));
  }
  else {
    local_110 = _DAT_1468b5d90;
    local_108 = DAT_1468b5d98;
  }
  fVar6 = local_108;
  iVar16 = *param_3;
  local_100 = local_110;
  uVar8 = local_100;
  local_f8 = local_108;
  if (0 < iVar16) {
    fVar27 = (float)param_3[1];
    local_100._4_4_ = (float)((ulonglong)local_110 >> 0x20);
    fVar9 = local_100._4_4_;
    local_100._0_4_ = (float)local_110;
    fVar7 = (float)local_100;
    fVar24 = (float)iVar16;
    iVar23 = iVar16;
    local_100 = uVar8;
    local_e8 = param_2;
    do {
      puVar20 = local_e8;
      iVar3 = *(int *)(param_1 + 0x120);
      *(undefined8 *)(puVar21 + -8) = 0x14261f321;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar3);
      local_f8 = *(float *)(param_1 + 0xa8);
      *(undefined8 *)((longlong)_Dst + 0x10) = *(undefined8 *)(param_1 + 0xa0);
      *(float *)((longlong)_Dst + 0x18) = local_f8;
      iVar16 = iVar16 - (int)param_4[1];
      if (((int)param_4[1] != 0) && (iVar16 < iVar23)) {
        lVar14 = (longlong)(iVar23 - iVar16);
        lVar19 = *param_4;
        *(undefined8 *)((longlong)_Dst + 0x10) = *(undefined8 *)(lVar19 + -0x48 + lVar14 * 0x48);
        *(undefined4 *)((longlong)_Dst + 0x18) = *(undefined4 *)(lVar19 + -0x40 + lVar14 * 0x48);
        *(undefined4 *)((longlong)_Dst + 0xc) = *(undefined4 *)(*param_4 + -0x3c + lVar14 * 0x48);
        lVar19 = *param_4;
        *(float *)((longlong)_Dst + 0x3c) =
             *(float *)((longlong)_Dst + 0x3c) + *(float *)(lVar19 + -0x38 + lVar14 * 0x48);
        *(float *)((longlong)_Dst + 0x40) =
             *(float *)(lVar19 + -0x34 + lVar14 * 0x48) + *(float *)((longlong)_Dst + 0x40);
        *(float *)((longlong)_Dst + 0x44) =
             *(float *)(lVar19 + -0x30 + lVar14 * 0x48) + *(float *)((longlong)_Dst + 0x44);
      }
      lVar19 = *(longlong *)(param_1 + 0x1f8);
      iVar16 = 0;
      fVar29 = fVar27;
      if (0 < *(int *)(lVar19 + 0x20)) {
        lVar14 = 0;
        do {
          plVar4 = *(longlong **)(lVar14 + *(longlong *)(lVar19 + 0x18));
          fVar29 = fVar27;
          if ((*(byte *)(plVar4 + 5) & 0x80) != 0) {
            lVar19 = *plVar4;
            fVar29 = (float)param_3[1];
            *(void **)(puVar21 + 0x20) = _Dst;
            pcVar5 = *(code **)(lVar19 + 0x280);
            *(undefined8 *)(puVar21 + -8) = 0x14261f3fc;
            (*pcVar5)(plVar4,param_1,0);
            lVar19 = *(longlong *)(param_1 + 0x1f8);
          }
          iVar16 = iVar16 + 1;
          lVar14 = lVar14 + 8;
          puVar20 = local_e8;
        } while (iVar16 < *(int *)(lVar19 + 0x20));
      }
      local_e8 = puVar20 + 9;
      uVar10 = *(int *)(param_1 + 0x2ac) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x2ac) = uVar10;
      fVar11 = (float)(uVar10 & 0x7fffff | 0x3f800000);
      fVar27 = (float)iVar23 * (1.0 / fVar24);
      local_f0 = *(int *)(puVar20 + 7);
      fVar11 = fVar11 - (float)(int)fVar11;
      puVar20[2] = *(undefined8 *)((longlong)_Dst + 0x2c);
      *(undefined4 *)(puVar20 + 3) = *(undefined4 *)((longlong)_Dst + 0x34);
      lVar19 = *(longlong *)(param_1 + 0x1f8);
      local_d8 = fVar6 * fVar27 + *(float *)((longlong)_Dst + 0x18) +
                 fVar29 * *(float *)(puVar20 + 3) + *(float *)(lVar19 + 0x164) +
                 fVar11 * *(float *)(lVar19 + 0x170);
      *puVar20 = CONCAT44(fVar9 * fVar27 + *(float *)((longlong)_Dst + 0x14) +
                          fVar29 * *(float *)((longlong)puVar20 + 0x14) + *(float *)(lVar19 + 0x160)
                          + fVar11 * *(float *)(lVar19 + 0x16c),
                          fVar7 * fVar27 + *(float *)((longlong)_Dst + 0x10) +
                          fVar29 * *(float *)(puVar20 + 2) + *(float *)(lVar19 + 0x15c) +
                          fVar11 * *(float *)(lVar19 + 0x168));
      *(float *)(puVar20 + 1) = local_d8;
      *(undefined4 *)((longlong)puVar20 + 0xc) = *(undefined4 *)((longlong)_Dst + 0xc);
      fVar27 = *(float *)((longlong)_Dst + 0x1c);
      if (fVar27 <= 0.001) {
        fVar27 = 0.001;
      }
      *(float *)((longlong)puVar20 + 0x1c) = fVar27;
      local_110 = *(undefined8 *)((longlong)_Dst + 0x4c);
      fVar27 = (float)((ulonglong)local_110 >> 0x20);
      if (0.0 <= fVar27) {
        fVar28 = 0.5;
      }
      else {
        fVar28 = 0.0;
      }
      if (0.0 <= (float)local_110) {
        fVar26 = 0.5;
      }
      else {
        fVar26 = 0.0;
      }
      fVar25 = ABS((float)local_110) * *(float *)(*(longlong *)(param_1 + 0x1f8) + 0x174) * 0.5;
      *(float *)(puVar20 + 4) = fVar25;
      fVar12 = fVar25;
      if (local_118[0] == '\0') {
        fVar12 = ABS(fVar27) * *(float *)(*(longlong *)(param_1 + 0x1f8) + 0x178) * 0.5;
      }
      *(float *)((longlong)puVar20 + 0x24) = fVar12;
      *(float *)(puVar20 + 4) = fVar26 + fVar25;
      *(float *)((longlong)puVar20 + 0x24) = fVar28 + *(float *)((longlong)puVar20 + 0x24);
      fVar27 = *(float *)((longlong)_Dst + 0x38) * 0.15915494;
      *(float *)(puVar20 + 5) = fVar27 - (float)(int)fVar27;
      fVar27 = *(float *)((longlong)_Dst + 0x48);
      fVar28 = *(float *)(*(longlong *)(param_1 + 0x1f8) + 0x17c);
      *(float *)((longlong)puVar20 + 0x3c) = fVar11;
      *(float *)((longlong)puVar20 + 0x2c) =
           (fVar27 * 0.15915494 * fVar28) / *(float *)((longlong)puVar20 + 0x1c);
      lVar19 = *(longlong *)(param_1 + 0x1f8);
      lVar14 = *(longlong *)(lVar19 + 0xb0);
      uVar10 = *(byte *)(lVar19 + 0xa1) - 1;
      fVar27 = (*(float *)(param_1 + 0x13c) - *(float *)(lVar19 + 0xa8)) * *(float *)(lVar19 + 0xa4)
      ;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      uVar17 = (uint)fVar27;
      uVar22 = uVar10;
      if (uVar17 <= uVar10) {
        uVar22 = uVar17;
      }
      if (uVar17 + 1 <= uVar10) {
        uVar10 = uVar17 + 1;
      }
      pfVar1 = (float *)(lVar14 + (longlong)(int)(uVar22 * *(byte *)(lVar19 + 0xa2)) * 4);
      lVar15 = (longlong)(int)(uVar10 * *(byte *)(lVar19 + 0xa2));
      uVar13 = (ulonglong)*(byte *)(lVar19 + 0xa3);
      fVar11 = *(float *)(lVar14 + lVar15 * 4 + uVar13 * 4);
      fVar28 = pfVar1[uVar13];
      fVar25 = (*(float *)(lVar14 + lVar15 * 4) - *pfVar1) * (fVar27 - (float)(int)fVar27) + *pfVar1
      ;
      fVar26 = pfVar1[uVar13];
      uVar10 = *(int *)(param_1 + 0x2ac) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x2ac) = uVar10;
      fVar12 = (float)(uVar10 & 0x7fffff | 0x3f800000);
      *(float *)((longlong)puVar20 + 0x34) =
           (fVar12 - (float)(int)fVar12) *
           (((fVar11 - fVar28) * (fVar27 - (float)(int)fVar27) + fVar26) - fVar25) + fVar25;
      lVar19 = *(longlong *)(param_1 + 0x1f8);
      fVar27 = (*(float *)(param_1 + 0x13c) - *(float *)(lVar19 + 0xd0)) * *(float *)(lVar19 + 0xcc)
      ;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      lVar14 = *(longlong *)(lVar19 + 0xd8);
      uVar22 = *(byte *)(lVar19 + 0xc9) - 1;
      uVar17 = (uint)fVar27;
      uVar10 = uVar22;
      if (uVar17 <= uVar22) {
        uVar10 = uVar17;
      }
      if (uVar17 + 1 <= uVar22) {
        uVar22 = uVar17 + 1;
      }
      pfVar1 = (float *)(lVar14 + (longlong)(int)(uVar10 * *(byte *)(lVar19 + 0xca)) * 4);
      lVar15 = (longlong)(int)(uVar22 * *(byte *)(lVar19 + 0xca));
      uVar13 = (ulonglong)*(byte *)(lVar19 + 0xcb);
      fVar11 = *(float *)(lVar14 + lVar15 * 4 + uVar13 * 4);
      fVar28 = pfVar1[uVar13];
      fVar25 = (*(float *)(lVar14 + lVar15 * 4) - *pfVar1) * (fVar27 - (float)(int)fVar27) + *pfVar1
      ;
      fVar26 = pfVar1[uVar13];
      uVar10 = *(int *)(param_1 + 0x2ac) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x2ac) = uVar10;
      fVar12 = (float)(uVar10 & 0x7fffff | 0x3f800000);
      *(float *)(puVar20 + 6) =
           (fVar12 - (float)(int)fVar12) *
           (((fVar11 - fVar28) * (fVar27 - (float)(int)fVar27) + fVar26) - fVar25) + fVar25;
      lVar19 = *(longlong *)(param_1 + 0x1f8);
      lVar14 = *(longlong *)(lVar19 + 0x128);
      uVar10 = *(byte *)(lVar19 + 0x119) - 1;
      fVar11 = (*(float *)(param_1 + 0x13c) - *(float *)(lVar19 + 0x120)) *
               *(float *)(lVar19 + 0x11c);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      uVar17 = (uint)fVar11;
      uVar22 = uVar10;
      if (uVar17 <= uVar10) {
        uVar22 = uVar17;
      }
      if (uVar17 + 1 <= uVar10) {
        uVar10 = uVar17 + 1;
      }
      pfVar1 = (float *)(lVar14 + (longlong)(int)(uVar22 * *(byte *)(lVar19 + 0x11a)) * 4);
      lVar15 = (longlong)(int)(uVar10 * *(byte *)(lVar19 + 0x11a));
      uVar13 = (ulonglong)*(byte *)(lVar19 + 0x11b);
      fVar28 = *(float *)(lVar14 + lVar15 * 4 + uVar13 * 4);
      fVar26 = pfVar1[uVar13];
      fVar25 = (*(float *)(lVar14 + lVar15 * 4) - *pfVar1) * (fVar11 - (float)(int)fVar11) + *pfVar1
      ;
      fVar12 = pfVar1[uVar13];
      uVar10 = *(int *)(param_1 + 0x2ac) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x2ac) = uVar10;
      fVar27 = fVar29 - (float)param_3[2];
      local_114 = (float)(uVar10 & 0x7fffff | 0x3f800000);
      iVar23 = iVar23 + -1;
      param_3[1] = (int)fVar27;
      *(float *)(puVar20 + 7) =
           (local_114 - (float)(int)local_114) *
           (((fVar28 - fVar26) * (fVar11 - (float)(int)fVar11) + fVar12) - fVar25) + fVar25;
      iVar16 = *param_3;
      fVar11 = 1.0 / *(float *)((longlong)puVar20 + 0x1c) + *(float *)(param_1 + 0x138);
      fVar29 = *(float *)(*(longlong *)(param_1 + 0x238) + (longlong)local_f0 * 4);
      if (fVar11 <= fVar29) {
        fVar11 = fVar29;
      }
      *(float *)(*(longlong *)(param_1 + 0x238) + (longlong)local_f0 * 4) = fVar11;
    } while (0 < iVar23);
  }
  *(undefined8 *)(puVar21 + -8) = 0x14261f966;
  return;
}



// FUNCTION 14261f9e0 FUN_14261f9e0 body=1039 status=ok
// SIG undefined FUN_14261f9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14261f9e0(undefined8 param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
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
  
  iVar4 = *(int *)(param_2 + 1);
  lVar5 = (longlong)iVar4;
  puVar3 = (ushort *)
           (**(code **)(*DAT_146ab6358 + 0x4b0))
                     (DAT_146ab6358,&DAT_146ab6e78,param_1,0,iVar4 << 6,1);
  if (0 < iVar4) {
    puVar6 = (uint *)*param_2;
    fVar15 = (float)DAT_146534414;
    fVar14 = 1.0 / (float)DAT_146534410;
    fVar16 = (float)_DAT_146b051e0;
    fVar17 = (float)_DAT_146b051e4;
    do {
      iVar4 = 0;
      fVar9 = (float)*puVar6 / fVar16;
      fVar10 = fVar9 - (float)(int)fVar9;
      fVar9 = (float)(int)fVar9 / fVar17 - (float)(int)((float)(int)fVar9 / fVar17);
      fVar11 = fVar10 + fVar14 * 0.5;
      fVar12 = fVar10 + fVar14 * 1.5;
      fVar13 = fVar10 + fVar14 * 2.5;
      fVar10 = fVar10 + fVar14 * 3.5;
      do {
        uVar1 = (ushort)((uint)fVar11 >> 0x10);
        *puVar3 = ((uVar1 >> 7) - 0x10 & 0x1f | (uVar1 >> 0xf) << 5) << 10 |
                  (ushort)((uint)fVar11 >> 0xd) & 0x3ff;
        fVar8 = (float)iVar4;
        fVar7 = (1.0 / fVar15) * (fVar8 + 0.5) + fVar9;
        uVar1 = (ushort)((uint)fVar7 >> 0x10);
        puVar3[1] = ((uVar1 >> 7) - 0x10 & 0x1f | (uVar1 >> 0xf) << 5) << 10 |
                    (ushort)((uint)fVar7 >> 0xd) & 0x3ff;
        uVar2 = (ushort)((uint)fVar12 >> 0x10);
        puVar3[2] = ((uVar2 >> 7) - 0x10 & 0x1f | (uVar2 >> 0xf) << 5) << 10 |
                    (ushort)((uint)fVar12 >> 0xd) & 0x3ff;
        puVar3[3] = ((uVar1 >> 7) - 0x10 & 0x1f | (uVar1 >> 0xf) << 5) << 10 |
                    (ushort)((uint)fVar7 >> 0xd) & 0x3ff;
        uVar2 = (ushort)((uint)fVar13 >> 0x10);
        puVar3[4] = ((uVar2 >> 7) - 0x10 & 0x1f | (uVar2 >> 0xf) << 5) << 10 |
                    (ushort)((uint)fVar13 >> 0xd) & 0x3ff;
        iVar4 = iVar4 + 1;
        puVar3[5] = ((uVar1 >> 7) - 0x10 & 0x1f | (uVar1 >> 0xf) << 5) << 10 |
                    (ushort)((uint)fVar7 >> 0xd) & 0x3ff;
        uVar1 = (ushort)((uint)fVar10 >> 0x10);
        puVar3[6] = ((uVar1 >> 7) - 0x10 & 0x1f | (uVar1 >> 0xf) << 5) << 10 |
                    (ushort)((uint)fVar10 >> 0xd) & 0x3ff;
        fVar7 = (fVar8 + 0.5) / fVar15 + fVar9;
        uVar1 = (ushort)((uint)fVar7 >> 0x10);
        puVar3[7] = ((uVar1 >> 7) - 0x10 & 0x1f | (uVar1 >> 0xf) << 5) << 10 |
                    (ushort)((uint)fVar7 >> 0xd) & 0x3ff;
        puVar3 = puVar3 + 8;
      } while (iVar4 < 4);
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014261fde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,param_1);
  return;
}



// FUNCTION 14261fdf0 FUN_14261fdf0 body=298 status=ok
// SIG undefined FUN_14261fdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14261fdf0(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = (longlong)param_3;
  uVar4 = param_3 + 7U & 0xfffffff8;
  lVar1 = (**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,&DAT_146ab6e78,param_1,0,uVar4 * 8,1);
  if (0 < param_3) {
    lVar2 = 0;
    do {
      fVar6 = (float)*(uint *)(param_2 + lVar2 * 4);
      fVar5 = fVar6 / (float)_DAT_146b051e0;
      *(float *)(lVar1 + lVar2 * 8) = fVar5 - (float)(int)fVar5;
      fVar5 = (float)(int)(fVar6 / (float)_DAT_146b051e0) / (float)_DAT_146b051e4;
      *(float *)(lVar1 + 4 + lVar2 * 8) = fVar5 - (float)(int)fVar5;
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar3);
  }
  for (; lVar3 < (int)uVar4; lVar3 = lVar3 + 1) {
    *(undefined4 *)(lVar1 + lVar3 * 8) = 0x42c80000;
    *(undefined4 *)(lVar1 + 4 + lVar3 * 8) = 0x42c80000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014261ff13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,param_1);
  return;
}



// FUNCTION 14261ff20 FUN_14261ff20 body=1031 status=ok
// SIG undefined FUN_14261ff20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14261ff20(longlong param_1,float *param_2,longlong param_3,float param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  float local_118;
  float fStack_114;
  float local_108;
  float fStack_104;
  
  lVar4 = *(longlong *)(param_3 + 0x18);
  lVar7 = FUN_142627a50(param_3,param_1);
  uVar2 = *(undefined8 *)(lVar7 + 0x38);
  fVar3 = *(float *)(lVar7 + 0x40);
  local_130 = *(float *)(lVar7 + 0x6c);
  local_138 = *(undefined8 *)(lVar7 + 100);
  if ((*(byte *)(lVar4 + 0x71b) & 4) == 0) {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      lVar8 = 0x930;
      if (DVar6 != DAT_1468c21c0) goto LAB_14261ffe8;
    }
  }
  lVar8 = 0x210;
LAB_14261ffe8:
  pfVar1 = (float *)(lVar8 + lVar4);
  fVar10 = pfVar1[1];
  fVar13 = pfVar1[2];
  fVar11 = fVar10 + fVar10;
  fVar12 = fVar13 + fVar13;
  fVar9 = *(float *)(lVar8 + 0x20 + lVar4);
  fVar15 = (pfVar1[3] * fVar12 + *pfVar1 * fVar11) * fVar9;
  fVar14 = fVar9 * (*pfVar1 * fVar12 - pfVar1[3] * fVar11);
  fVar13 = (float)((uint)((_DAT_146b056d0 - (fVar13 * fVar12 + fVar10 * fVar11)) * fVar9) &
                  _DAT_146b056e0);
  fVar10 = ABS((float)local_138);
  local_res8 = (float)local_138;
  if (((fVar10 <= 0.0001) &&
      (local_138._4_4_ = (float)((ulonglong)local_138 >> 0x20), fVar10 = ABS(local_138._4_4_),
      fVar10 <= 0.0001)) && (ABS(local_130) <= 0.0001)) {
    local_res8 = fVar13;
    local_138 = CONCAT44(fVar15,fVar13);
    local_130 = fVar14;
  }
  local_128 = *(undefined8 *)(lVar7 + 0xac);
  fVar10 = *(float *)(lVar7 + 0x88);
  local_120 = *(float *)(lVar7 + 0xb4);
  if (((ABS((float)local_128) <= 0.0001) &&
      (local_128._4_4_ = (float)((ulonglong)local_128 >> 0x20), fVar9 = ABS(local_128._4_4_),
      fVar9 <= 0.0001)) && (ABS(local_120) <= 0.0001)) {
    local_128 = CONCAT44(fVar15,fVar13);
    local_120 = fVar14;
  }
  local_108 = (float)uVar2;
  fStack_104 = (float)((ulonglong)uVar2 >> 0x20);
  local_118 = (float)*(undefined8 *)(lVar7 + 0x80);
  fStack_114 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x80) >> 0x20);
  fVar13 = fVar3 - fVar10;
  fVar12 = _guard_xfg_dispatch_icall_nop
                     (SQRT((fStack_104 - fStack_114) * (fStack_104 - fStack_114) +
                           (local_108 - local_118) * (local_108 - local_118) + fVar13 * fVar13) *
                      0.1,*(float *)(param_1 + 0x48));
  fVar9 = param_4 * param_4;
  fVar11 = fVar9 * param_4;
  fVar15 = fVar11 - fVar9;
  fVar13 = *(float *)(lVar7 + 0x70);
  fVar16 = fVar9 * 3.0 - (fVar11 + fVar11);
  param_4 = (fVar11 - (fVar9 + fVar9)) + param_4;
  fVar14 = ((fVar11 + fVar11) - fVar9 * 3.0) + 1.0;
  fVar9 = *(float *)(lVar7 + 0xb8);
  *param_2 = local_res8 * *(float *)(lVar7 + 0x70) * fVar12 * param_4 + local_108 * fVar14 +
             (float)local_128 * *(float *)(lVar7 + 0xb8) * fVar12 * fVar15 + local_118 * fVar16;
  fVar11 = *(float *)(lVar7 + 0xb8);
  param_2[1] = local_138._4_4_ * *(float *)(lVar7 + 0x70) * fVar12 * param_4 + fStack_104 * fVar14 +
               local_128._4_4_ * fVar9 * fVar12 * fVar15 + fStack_114 * fVar16;
  param_2[2] = local_130 * fVar13 * fVar12 * param_4 + fVar3 * fVar14 +
               local_120 * fVar11 * fVar12 * fVar15 + fVar10 * fVar16;
  return param_2;
}



// FUNCTION 142620330 FUN_142620330 body=1025 status=ok
// SIG undefined FUN_142620330(void)

void FUN_142620330(undefined8 param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
                  float param_6,undefined8 *param_7,float *param_8)

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
  float *pfVar28;
  undefined8 uVar29;
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
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [176];
  
  fVar1 = *param_5;
  fVar2 = param_5[1];
  param_4[2] = param_5[2] * param_6 + param_4[2];
  uVar29 = CONCAT44(fVar2 * param_6 + param_4[1],param_6 * fVar1 + *param_4);
  *(undefined8 *)param_4 = uVar29;
  *(undefined8 *)(param_2 + 0x18) = uVar29;
  *(float *)(param_2 + 0x20) = param_4[2];
  fVar1 = *param_4;
  if (((0.0001 < ABS(fVar1)) || (0.0001 < ABS(param_4[1]))) || (0.0001 < ABS(param_4[2]))) {
    fVar2 = param_4[1];
    fStack_c0 = param_4[2];
    _local_c8 = CONCAT44(fVar2,fVar1);
    uStack_bc = 0;
    local_d0 = (param_8[0xe] * 0.0 + fStack_c0 * param_8[10] +
               fVar2 * param_8[6] + fVar1 * param_8[2]) * 360.0;
    _local_d8 = CONCAT44((param_8[0xd] * 0.0 + fStack_c0 * param_8[9] +
                         fVar2 * param_8[5] + fVar1 * param_8[1]) * 360.0,
                         (param_8[0xc] * 0.0 + fStack_c0 * param_8[8] +
                         fVar2 * param_8[4] + fVar1 * *param_8) * 360.0);
    FRotator::MakeFromEuler(&local_c8,&local_d8);
    pfVar28 = (float *)FRotationMatrix::FRotationMatrix(local_b8,&local_c8);
    fVar1 = *param_8;
    fVar2 = param_8[1];
    fVar3 = param_8[2];
    fVar32 = param_8[3];
    fVar30 = param_8[4];
    fVar31 = param_8[5];
    fVar33 = param_8[6];
    fVar34 = param_8[7];
    fVar4 = param_8[8];
    fVar5 = param_8[9];
    fVar6 = param_8[10];
    fVar7 = param_8[0xb];
    fVar8 = pfVar28[4];
    fVar9 = pfVar28[5];
    fVar10 = pfVar28[6];
    fVar11 = pfVar28[7];
    fVar12 = *pfVar28;
    fVar13 = pfVar28[1];
    fVar14 = pfVar28[2];
    fVar15 = pfVar28[3];
    fVar16 = pfVar28[8];
    fVar17 = pfVar28[9];
    fVar18 = pfVar28[10];
    fVar19 = pfVar28[0xb];
    fVar20 = pfVar28[0xc];
    fVar21 = pfVar28[0xd];
    fVar22 = pfVar28[0xe];
    fVar23 = pfVar28[0xf];
    fVar24 = param_8[0xc];
    fVar25 = param_8[0xd];
    fVar26 = param_8[0xe];
    fVar27 = param_8[0xf];
    fVar39 = fVar2 * fVar8 + fVar1 * fVar12 + fVar3 * fVar16 + fVar32 * fVar20;
    fVar40 = fVar2 * fVar9 + fVar1 * fVar13 + fVar3 * fVar17 + fVar32 * fVar21;
    fVar41 = fVar2 * fVar10 + fVar1 * fVar14 + fVar3 * fVar18 + fVar32 * fVar22;
    *param_8 = fVar39;
    param_8[1] = fVar40;
    param_8[2] = fVar41;
    param_8[3] = fVar2 * fVar11 + fVar1 * fVar15 + fVar3 * fVar19 + fVar32 * fVar23;
    fVar36 = fVar31 * fVar8 + fVar30 * fVar12 + fVar33 * fVar16 + fVar34 * fVar20;
    fVar37 = fVar31 * fVar9 + fVar30 * fVar13 + fVar33 * fVar17 + fVar34 * fVar21;
    fVar38 = fVar31 * fVar10 + fVar30 * fVar14 + fVar33 * fVar18 + fVar34 * fVar22;
    param_8[4] = fVar36;
    param_8[5] = fVar37;
    param_8[6] = fVar38;
    param_8[7] = fVar31 * fVar11 + fVar30 * fVar15 + fVar33 * fVar19 + fVar34 * fVar23;
    fVar33 = fVar5 * fVar8 + fVar4 * fVar12 + fVar6 * fVar16 + fVar7 * fVar20;
    fVar34 = fVar5 * fVar9 + fVar4 * fVar13 + fVar6 * fVar17 + fVar7 * fVar21;
    fVar35 = fVar5 * fVar10 + fVar4 * fVar14 + fVar6 * fVar18 + fVar7 * fVar22;
    param_8[8] = fVar33;
    param_8[9] = fVar34;
    param_8[10] = fVar35;
    param_8[0xb] = fVar5 * fVar11 + fVar4 * fVar15 + fVar6 * fVar19 + fVar7 * fVar23;
    fVar30 = fVar25 * fVar8 + fVar24 * fVar12 + fVar26 * fVar16 + fVar27 * fVar20;
    fVar31 = fVar25 * fVar9 + fVar24 * fVar13 + fVar26 * fVar17 + fVar27 * fVar21;
    fVar32 = fVar25 * fVar10 + fVar24 * fVar14 + fVar26 * fVar18 + fVar27 * fVar22;
    param_8[0xc] = fVar30;
    param_8[0xd] = fVar31;
    param_8[0xe] = fVar32;
    param_8[0xf] = fVar25 * fVar11 + fVar24 * fVar15 + fVar26 * fVar19 + fVar27 * fVar23;
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = *param_3;
    fVar32 = fVar32 * 1.0 + fVar2 * fVar35 + fVar3 * fVar41 + fVar1 * fVar38;
    *param_7 = CONCAT44(fVar31 * 1.0 + fVar2 * fVar34 + fVar3 * fVar40 + fVar1 * fVar37,
                        fVar30 * 1.0 + fVar2 * fVar33 + fVar3 * fVar39 + fVar1 * fVar36);
  }
  else {
    *param_7 = *(undefined8 *)param_3;
    fVar32 = param_3[2];
  }
  *(float *)(param_7 + 1) = fVar32;
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_5[0] = 0.0;
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  return;
}



// FUNCTION 142620740 FUN_142620740 body=1646 status=ok
// SIG undefined FUN_142620740(void)

float * FUN_142620740(longlong param_1,float *param_2,undefined8 param_3,float param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_128;
  float fStack_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  
  iVar5 = *(int *)(param_1 + 0x58) + 2;
  fVar10 = (float)(*(int *)(param_1 + 0x58) + 1);
  fVar21 = fVar10 * param_4;
  fVar10 = 1.0 / fVar10;
  iVar6 = ((int)ROUND((fVar21 + fVar21) - 0.5) >> 1) - (uint)(param_4 == 1.0);
  iVar7 = iVar6 + -1;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar2 = iVar6 + 2;
  if (iVar5 <= iVar6 + 2) {
    iVar2 = iVar5;
  }
  FUN_1426254e0(&local_128,param_3,param_1,iVar6,(float)iVar6 * fVar10);
  FUN_1426254e0(&local_108,param_3,param_1,iVar6 + 1,(float)(iVar6 + 1) * fVar10);
  fVar13 = local_100;
  fVar12 = local_104;
  fVar9 = local_108;
  fVar15 = local_120;
  fVar11 = fStack_124;
  fVar8 = local_128;
  if (iVar7 < iVar6) {
    puVar3 = (undefined8 *)FUN_1426254e0(&local_e8,param_3,param_1,iVar7,(float)iVar7 * fVar10);
  }
  else {
    puVar3 = &local_f8;
    local_f8 = CONCAT44((fStack_124 - local_104) + fStack_124,(local_128 - local_108) + local_128);
    local_f0 = (local_120 - local_100) + local_120;
  }
  local_118 = *puVar3;
  local_110 = *(float *)(puVar3 + 1);
  if (iVar2 < iVar5) {
    pfVar4 = (float *)FUN_1426254e0(&local_e8,param_3,param_1,iVar2,(float)iVar2 * fVar10);
  }
  else {
    pfVar4 = &local_e8;
    local_e8 = (fVar9 - fVar8) + fVar9;
    local_e4 = (fVar12 - fVar11) + fVar12;
    local_e0 = (fVar13 - fVar15) + fVar13;
  }
  local_f0 = pfVar4[2];
  fVar19 = *(float *)(param_1 + 0x60) * 0.5;
  fVar14 = (local_118._4_4_ - fVar11) * (local_118._4_4_ - fVar11) +
           ((float)local_118 - fVar8) * ((float)local_118 - fVar8) +
           (local_110 - fVar15) * (local_110 - fVar15);
  fVar10 = _guard_xfg_dispatch_icall_nop(fVar14,fVar19);
  fVar8 = _guard_xfg_dispatch_icall_nop
                    ((fVar11 - fVar12) * (fVar11 - fVar12) + (fVar8 - fVar9) * (fVar8 - fVar9) +
                     (fVar15 - fVar13) * (fVar15 - fVar13),fVar19);
  uVar1 = *(undefined8 *)pfVar4;
  fVar8 = fVar8 + fVar10;
  fVar9 = fVar9 - (float)uVar1;
  local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar11 = fVar12 - local_f8._4_4_;
  local_f8 = uVar1;
  fVar11 = _guard_xfg_dispatch_icall_nop
                     (fVar11 * fVar11 + fVar9 * fVar9 + (fVar13 - local_f0) * (fVar13 - local_f0),
                      fVar19);
  fVar11 = fVar11 + fVar8;
  fVar15 = fVar8 - fVar10;
  fVar21 = (fVar21 - (float)iVar6) * fVar15 + fVar10;
  if ((((ABS(fVar10) <= 1e-08) || (ABS(fVar15) <= 1e-08)) || (ABS(fVar11 - fVar8) <= 1e-08)) ||
     ((ABS(fVar8) <= 1e-08 || (ABS(fVar11 - fVar10) <= 1e-08)))) {
    *(ulonglong *)param_2 = CONCAT44(fStack_124,local_128);
    param_2[2] = local_120;
  }
  else {
    fVar9 = _guard_xfg_dispatch_icall_nop(fVar14,-fVar19);
    fVar18 = fVar9 * fVar21;
    fVar9 = (fVar10 - fVar21) * fVar9;
    fVar20 = (fVar21 - fVar10) * (1.0 / fVar15);
    fVar17 = (fVar8 - fVar21) * (1.0 / fVar15);
    fVar15 = fVar17 * local_128 + fVar20 * local_108;
    fVar14 = fVar20 * fVar12 + fVar17 * fStack_124;
    fVar19 = fVar20 * fVar13 + fVar17 * local_120;
    fVar13 = 1.0 / (fVar11 - fVar8);
    fVar16 = (fVar8 - fVar21) * (1.0 / fVar8);
    fVar12 = (1.0 / fVar8) * fVar21;
    fVar22 = 1.0 / (fVar11 - fVar10);
    fVar8 = (fVar21 - fVar8) * fVar13;
    fVar13 = fVar13 * (fVar11 - fVar21);
    fVar10 = (fVar21 - fVar10) * fVar22;
    fVar22 = fVar22 * (fVar11 - fVar21);
    *param_2 = (((float)*(undefined8 *)pfVar4 * fVar8 + fVar13 * local_108) * fVar10 +
               fVar22 * fVar15) * fVar20 +
               (((float)local_118 * fVar9 + fVar18 * local_128) * fVar16 + fVar15 * fVar12) * fVar17
    ;
    param_2[1] = ((local_f8._4_4_ * fVar8 + fVar13 * local_104) * fVar10 + fVar22 * fVar14) * fVar20
                 + ((local_118._4_4_ * fVar9 + fVar18 * fStack_124) * fVar16 + fVar14 * fVar12) *
                   fVar17;
    param_2[2] = ((local_110 * fVar9 + fVar18 * local_120) * fVar16 + fVar19 * fVar12) * fVar17 +
                 ((local_f0 * fVar8 + fVar13 * local_100) * fVar10 + fVar22 * fVar19) * fVar20;
  }
  return param_2;
}



// FUNCTION 142620db0 FUN_142620db0 body=164 status=ok
// SIG undefined FUN_142620db0(void)

void FUN_142620db0(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  float fVar5;
  
  if (((int)param_1[0x25] == 0) &&
     (((plVar3 = *(longlong **)(param_1[5] + 0x50), (int)plVar3[0x18] == 0 ||
       (lVar2 = plVar3[0x17] + ((longlong)(int)plVar3[0x18] * 3 + -3) * 4, lVar2 == 0)) ||
      (pfVar1 = (float *)(lVar2 + 8),
      *pfVar1 <= *(float *)((longlong)param_1 + 0x13c) &&
      *(float *)((longlong)param_1 + 0x13c) != *pfVar1)))) {
    lVar2 = *(longlong *)(param_1[5] + 0x30);
    cVar4 = (**(code **)(*param_1 + 0xd8))(param_1);
    if ((cVar4 != '\0') ||
       (((fVar5 = (float)(**(code **)(*plVar3 + 0x390))(plVar3), fVar5 == 0.0 &&
         (*(float *)(lVar2 + 0x70) == 0.0)) && (*(int *)(lVar2 + 0x7c) == 0)))) {
      *(undefined1 *)((longlong)param_1 + 0x1a4) = 1;
    }
  }
  return;
}



// FUNCTION 142620e60 FUN_142620e60 body=258 status=ok
// SIG undefined FUN_142620e60(void)

void FUN_142620e60(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x254)) {
    TArray<float,FDefaultAllocator>::ResizeTo(puVar1,0);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x208)) {
    iVar2 = *(int *)(param_1 + 0x210);
    pvVar5 = *(void **)(param_1 + 0x208);
    *(int *)(param_1 + 0x250) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x254) == 0)) {
      *(undefined4 *)(param_1 + 0x254) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar5,(longlong)iVar2 << 2);
    }
  }
  iVar2 = *(int *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  iVar3 = (int)(iVar2 + 0x1f + (iVar2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  iVar4 = iVar3 << 5;
  if (*(int *)(param_1 + 0x234) != iVar4) {
    *(int *)(param_1 + 0x234) = iVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((void *)(param_1 + 0x218));
  }
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x230) = iVar2;
    pvVar5 = *(void **)(param_1 + 0x228);
    if (*(void **)(param_1 + 0x228) == (void *)0x0) {
      pvVar5 = (void *)(param_1 + 0x218);
    }
    _guard_xfg_dispatch_icall_nop(pvVar5,0,(longlong)iVar3 << 2);
  }
  return;
}



// FUNCTION 142620f70 ClearGPUSpriteResourceData body=147 status=ok
// SIG undefined ClearGPUSpriteResourceData(void)

void ClearGPUSpriteResourceData(longlong param_1)

{
  undefined4 local_res8;
  undefined2 local_resc;
  
  local_res8 = *(undefined4 *)(param_1 + 0x48);
  if (*(short *)(param_1 + 0x4c) != 0) {
    local_resc = *(undefined2 *)(param_1 + 0x4c);
    FTexelAllocator::Free(&DAT_146534460,&local_res8);
  }
  local_res8 = *(undefined4 *)(param_1 + 0x4e);
  if (*(short *)(param_1 + 0x52) != 0) {
    local_resc = *(undefined2 *)(param_1 + 0x52);
    FTexelAllocator::Free(&DAT_146534460,&local_res8);
  }
  local_res8 = *(undefined4 *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x58) != 0) {
    local_resc = *(undefined2 *)(param_1 + 0x58);
    FTexelAllocator::Free(&DAT_146534460,&local_res8);
  }
  return;
}



// FUNCTION 142621010 FUN_142621010 body=988 status=ok
// SIG undefined FUN_142621010(void)

void FUN_142621010(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  int local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined4 local_48;
  
  lVar6 = DAT_146b057f8;
  lVar16 = 0;
  local_80 = local_80 & 0xffffffff00000000;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar7 = 4;
    if (DVar5 != DAT_1468c21c0) goto LAB_142621089;
  }
  lVar7 = lVar16;
LAB_142621089:
  if (*(int *)(lVar7 + lVar6) != 0) {
    local_80 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FScopedGPUStatEvent::Begin(&local_60,param_1,&DAT_146b05770,&local_80);
    uVar14 = (ulonglong)((uint)((ulonglong)(longlong)DAT_146b06ff8 >> 3) & 0xfffffff8);
    local_78 = uVar14;
    local_68 = UNiagaraSystem::GetEffectType(&PTR_PTR_1465346c0);
    local_70 = FVoicePacketImpl::GetSampleCounter();
    uVar13 = *(uint *)(param_4 + 1);
    local_50 = &DAT_146b05c10;
    local_88 = 0;
    local_48 = 0;
    lVar6 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar6 + 0x38,&local_80,&local_50);
    if ((float)local_80 == -NAN) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)(int)(float)local_80 * 0x20 + *(longlong *)(lVar6 + 0x38);
    }
    local_48 = 0;
    plVar8 = (longlong *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      plVar8 = (longlong *)0x0;
    }
    local_50 = &DAT_146b05d60;
    lVar6 = *plVar8;
    lVar7 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar7 + 0x38,&local_80,&local_50);
    if ((float)local_80 == -NAN) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)(int)(float)local_80 * 0x20 + *(longlong *)(lVar7 + 0x38);
    }
    plVar8 = (longlong *)0x0;
    plVar12 = (longlong *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      plVar12 = plVar8;
    }
    lVar7 = *plVar12;
    *param_2 = DAT_146534538;
    if (lVar6 == 0) {
      local_80 = 0;
      lVar16 = 1;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar8 = *(longlong **)(lVar2 + 0x38);
      uVar14 = local_78;
    }
    param_2[1] = plVar8;
    if (lVar16 != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_80);
    }
    bVar3 = false;
    if (lVar7 == 0) {
      bVar3 = true;
      uVar9 = 0;
      local_80 = 0;
    }
    else {
      lVar16 = *(longlong *)(lVar7 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      uVar9 = *(undefined8 *)(lVar16 + 0x40);
    }
    param_2[4] = uVar9;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_80);
    }
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
    FUN_141ed6ac0(param_1,param_2,2,1);
    for (; 0 < (int)uVar13; uVar13 = uVar13 - iVar15) {
      uVar17 = uVar14 & 0xffffffff;
      if ((int)uVar13 <= (int)uVar14) {
        uVar17 = (ulonglong)uVar13;
      }
      iVar15 = (int)uVar17;
      FUN_14261fdf0(local_70,*param_4 + (longlong)local_88 * 4,uVar17);
      lVar16 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      uVar9 = *(undefined8 *)(lVar16 + 0x38);
      if (*(short *)(lVar6 + 0xc2) != 0) {
        uVar1 = *(ushort *)(lVar6 + 0xc0);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar11 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar11 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar10;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar11;
        *(undefined8 **)(param_1 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_144165218;
        *(uint *)(puVar11 + 3) = (uint)uVar1;
        puVar11[4] = local_68;
        puVar11[2] = uVar9;
        uVar14 = local_78;
      }
      local_80._0_4_ = 4.0 / (float)DAT_146534410;
      FUN_1404986d0(param_1,uVar9,lVar6 + 0xc4,&local_80,0);
      local_80 = CONCAT44(local_80._4_4_,4.0 / (float)DAT_146534414);
      FUN_1404986d0(param_1,uVar9,lVar6 + 0xca,&local_80,0);
      FUN_142622630(param_1,iVar15 + 7U & 0xfffffff8);
      local_88 = local_88 + iVar15;
    }
    if (local_60 != 0) {
      FScopedGPUStatEvent::End(&local_60);
    }
  }
  return;
}



// FUNCTION 1426213f0 FUN_1426213f0 body=46 status=ok
// SIG undefined FUN_1426213f0(void)

void FUN_1426213f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x170);
  if (lVar1 != 0) {
    FUN_142618f70(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142621420 ConstructCompiledInstance body=305 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FParticleBoundsCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e82da8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InParticleIndices",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"PositionTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"PositionTextureSampler",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"OutBounds",0);
    FShaderParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"TextureSizeX",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd6,*(undefined8 *)(param_1 + 0x18),L"TextureSizeY",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142621560 ConstructCompiledInstance body=265 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FParticleSimVisualizePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e82460;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"VisualizationMode",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"PositionTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),L"PositionTextureSampler",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"CurveTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"CurveTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142621670 ConstructCompiledInstance body=196 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FParticleTileVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145138ca8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"TileOffsets",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"TileSizeX",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),L"TileSizeY",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142621750 FUN_142621750 body=36 status=ok
// SIG undefined FUN_142621750(void)

void FUN_142621750(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x170);
  if (lVar1 != 0) {
    TParticleSimulationPS<1>::TParticleSimulationPS<1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 142621780 FUN_142621780 body=73 status=ok
// SIG undefined FUN_142621780(void)

undefined8 * FUN_142621780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__145138ca8;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1426217d0 FUN_1426217d0 body=177 status=ok
// SIG undefined FUN_1426217d0(void)

undefined8 * FUN_1426217d0(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x40);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = &PTR_FUN_14513ad20;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1a) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x22) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x2a) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x32) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x3a) = 0;
      return puVar1;
    }
  }
  else {
    if (param_1 != 3) {
      return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)operator_new(0x18);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_FUN_14513adf0;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142621890 FUN_142621890 body=58 status=ok
// SIG undefined FUN_142621890(void)

void FUN_142621890(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14513b298;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_14513b2e0;
  }
  return;
}



// FUNCTION 1426218d0 FUN_1426218d0 body=66 status=ok
// SIG undefined FUN_1426218d0(void)

void FUN_1426218d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x2c0);
  if (lVar1 != 0) {
    FUN_142619500(lVar1,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 142621920 FUN_142621920 body=127 status=ok
// SIG undefined FUN_142621920(void)

longlong * FUN_142621920(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x6b8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 1) = param_2;
    plVar1[2] = 0;
    plVar1[3] = 0;
    *(undefined1 *)(plVar1 + 5) = 0;
    plVar1[0x66] = 0;
    *(undefined1 *)((longlong)plVar1 + 0x33a) = 0;
    *(undefined2 *)(plVar1 + 0x67) = 1;
    plVar1[200] = 0;
    plVar1[0xc9] = 0;
    plVar1[0xca] = 0;
    *plVar1 = (longlong)&PTR_FUN_14513ae18;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return plVar1;
}



// FUNCTION 1426219a0 FUN_1426219a0 body=458 status=ok
// SIG undefined FUN_1426219a0(void)

void FUN_1426219a0(longlong param_1)

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
  longlong local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  *(undefined1 *)(param_1 + 0x252) = 1;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_res8 = param_1;
    FUN_142622310(&local_res8,2,local_res18);
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
  *plVar9 = (longlong)&PTR_FUN_14513af08;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res10 = lVar7;
  FUN_14048a3d0(plVar9,0,0xff,1,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res10);
    }
  }
  return;
}



// FUNCTION 142621b70 FUN_142621b70 body=456 status=ok
// SIG undefined FUN_142621b70(void)

void FUN_142621b70(longlong param_1)

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
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_res10 = param_1;
    FUN_142621f20(&local_res10,2,local_res20);
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
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_14513ad10;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_14048a3d0(plVar9,0,0xff,1,0,0);
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



// FUNCTION 142621d40 FUN_142621d40 body=197 status=ok
// SIG undefined FUN_142621d40(void)

void FUN_142621d40(longlong param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            (&local_38,param_1 + 0x40);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      *(undefined4 *)(*(longlong *)(*local_38 + (longlong)local_1c * 8) + 0x240) = 0xffffffff;
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x50,0);
  }
  FUN_14262dad0(param_1);
  FUN_142621b70(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 142621e10 FUN_142621e10 body=270 status=ok
// SIG undefined FUN_142621e10(void)

void FUN_142621e10(longlong *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  if (*(int *)(param_1[1] + 0x240) == -1) {
    lVar4 = *param_1;
    if (*(int *)(lVar4 + 0x74) == 0) {
      iVar5 = *(int *)(lVar4 + 0x48);
      *(int *)(lVar4 + 0x48) = iVar5 + 1;
      if (*(int *)(lVar4 + 0x4c) < iVar5 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x40,iVar5);
      }
      TBitArray<FDefaultBitArrayAllocator>::Add(lVar4 + 0x50,0);
    }
    else {
      iVar5 = *(int *)(lVar4 + 0x70);
      iVar1 = *(int *)(lVar4 + 0x74) + -1;
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x40) + 4 + (longlong)iVar5 * 8);
      *(int *)(lVar4 + 0x70) = iVar3;
      *(int *)(lVar4 + 0x74) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(*(longlong *)(lVar4 + 0x40) + (longlong)iVar3 * 8) = 0xffffffff;
      }
    }
    lVar6 = *(longlong *)(lVar4 + 0x60);
    if (*(longlong *)(lVar4 + 0x60) == 0) {
      lVar6 = lVar4 + 0x50;
    }
    puVar2 = (uint *)(lVar6 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
    *(int *)(param_1[1] + 0x240) = iVar5;
    *(longlong *)(*(longlong *)(*param_1 + 0x40) + (longlong)iVar5 * 8) = param_1[1];
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142621f20 FUN_142621f20 body=348 status=ok
// SIG undefined FUN_142621f20(void)

void FUN_142621f20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x260));
    if (*(longlong *)(lVar1 + 0x248) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x230) != 0) {
      FMemory::Free();
    }
    FParticleSortBuffers::~FParticleSortBuffers(lVar1 + 0x170);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x168);
    *(undefined ***)(lVar1 + 0x130) = &PTR_FUN_143f48ad0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x160);
    FUN_141edd2d0(lVar1 + 0x130);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x128);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x120);
    FUN_141edd2d0(lVar1 + 0xf0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0xe8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0xe0);
    FUN_141edd2d0(lVar1 + 0xb0);
    lVar3 = 2;
    lVar2 = lVar1 + 0xb0;
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + -0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + -0x18);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + -0x20);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + -0x28);
      FUN_141edd2d0(lVar2 + -0x58);
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + -0x58;
    } while (lVar3 != 0);
    FMemory::operator_delete(lVar1,0x288);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142622080 FUN_142622080 body=277 status=ok
// SIG undefined FUN_142622080(void)

void FUN_142622080(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)(*param_1 + 0x1f0) + 0x30))();
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  lVar1 = *param_1;
  *(int *)(lVar1 + 0x230) = (int)param_1[2] << 4;
  (**(code **)(*(longlong *)(lVar1 + 0x1f0) + 0x28))(lVar1 + 0x1f0);
  iVar4 = 0;
  if ((int)param_1[2] != 0) {
    FUN_14261f9e0(*(undefined8 *)(lVar1 + 0x220),param_1 + 1);
    iVar4 = (int)param_1[2];
  }
  plVar2 = (longlong *)*param_1;
  *(int *)(plVar2 + 8) = iVar4;
  *(uint *)((longlong)plVar2 + 0x44) = iVar4 + 7U & 0xfffffff8;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  if ((int)param_1[2] != 0) {
    FUN_14261fdf0(plVar2[6],param_1[1]);
  }
  lVar1 = param_1[3];
  lVar3 = *(longlong *)(*param_1 + 0x48);
  *(longlong *)(*param_1 + 0x48) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x230) = *(int *)(lVar1 + 0x230) + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    FUN_14262d6b0();
  }
  *(longlong *)(*param_1 + 0x50) = param_1[3] + 0x38;
  if (*(longlong **)(*param_1 + 0x238) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(*param_1 + 0x238) + 0x28))();
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1426221a0 FUN_1426221a0 body=366 status=ok
// SIG undefined FUN_1426221a0(void)

void FUN_1426221a0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  LARGE_INTEGER local_res8;
  
  lVar4 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res8);
  uVar3 = local_res8.s.LowPart;
  (**(code **)(*(longlong *)*param_1 + 0x28))();
  (**(code **)(*(longlong *)(*param_1 + 0x58) + 0x28))();
  (**(code **)(*(longlong *)(*param_1 + 0xb0) + 0x28))();
  (**(code **)(*(longlong *)(*param_1 + 0xf0) + 0x28))();
  (**(code **)(*(longlong *)(*param_1 + 0x130) + 0x28))();
  puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar1 = *(undefined8 *)(*param_1 + 0xe8);
  uVar2 = *(undefined8 *)(*param_1 + 0x128);
  puVar5 = puVar7 + 2;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 2;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar5;
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar5;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar6;
  *(undefined8 **)(lVar4 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar6 + 2) = 2;
  puVar6[3] = puVar7;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - uVar3);
  return;
}



// FUNCTION 142622310 FUN_142622310 body=292 status=ok
// SIG undefined FUN_142622310(void)

void FUN_142622310(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  param_1 = (longlong *)*param_1;
  plVar1 = param_1 + 0x3e;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  (**(code **)(*param_1 + 0x30))(param_1);
  if ((longlong *)param_1[0x47] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x47] + 0x30))();
    puVar2 = (undefined8 *)param_1[0x47];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  param_1[0x47] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x45);
  *plVar1 = (longlong)&PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x44);
  FUN_141edd2d0(plVar1);
  FUN_14289d270(param_1 + 0x1c);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FUN_14262d6b0();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = (longlong)&PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  FMemory::operator_delete(param_1,0x260);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142622440 FUN_142622440 body=126 status=ok
// SIG undefined FUN_142622440(void)

void FUN_142622440(longlong *param_1)

{
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  (**(code **)(*(longlong *)(*param_1 + 0x58) + 0x30))();
  (**(code **)(*(longlong *)(*param_1 + 0xb0) + 0x30))();
  (**(code **)(*(longlong *)(*param_1 + 0xf0) + 0x30))();
  (**(code **)(*(longlong *)(*param_1 + 0x130) + 0x30))();
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1426224c0 FUN_1426224c0 body=205 status=ok
// SIG undefined FUN_1426224c0(void)

void FUN_1426224c0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar5 = param_1[1];
  iVar2 = *(int *)(lVar5 + 0x240);
  if (iVar2 != -1) {
    lVar5 = *param_1;
    bVar3 = (byte)iVar2 & 0x1f;
    if (*(int *)(lVar5 + 0x74) != 0) {
      *(int *)(*(longlong *)(lVar5 + 0x40) + (longlong)*(int *)(lVar5 + 0x70) * 8) = iVar2;
    }
    lVar6 = *(longlong *)(lVar5 + 0x40);
    *(undefined4 *)(lVar6 + (longlong)iVar2 * 8) = 0xffffffff;
    if (*(int *)(lVar5 + 0x74) < 1) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(lVar5 + 0x70);
    }
    *(undefined4 *)(lVar6 + (longlong)iVar2 * 8 + 4) = uVar4;
    *(int *)(lVar5 + 0x74) = *(int *)(lVar5 + 0x74) + 1;
    *(int *)(lVar5 + 0x70) = iVar2;
    lVar6 = *(longlong *)(lVar5 + 0x60);
    if (*(longlong *)(lVar5 + 0x60) == 0) {
      lVar6 = lVar5 + 0x50;
    }
    puVar1 = (uint *)(lVar6 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
    lVar5 = param_1[1];
  }
  *(undefined4 *)(lVar5 + 0x240) = 0xffffffff;
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142622590 FUN_142622590 body=154 status=ok
// SIG undefined FUN_142622590(void)

void FUN_142622590(longlong *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar3 = (ulonglong)*(int *)(*(longlong *)(*param_1 + 0x78) + 0x228);
  uVar2 = uVar3 ^ 1;
  if (*(float *)(DAT_146b057b0 + 4) <= 0.0) {
    uVar2 = uVar3;
  }
  FUN_14263b480(uVar1,(int)param_1[3],(int)param_1[1],param_1[2],
                uVar2 * 0x58 + *(longlong *)(*param_1 + 0x78),DAT_146534458);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142622630 FUN_142622630 body=363 status=ok
// SIG undefined FUN_142622630(void)

void FUN_142622630(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = DAT_146534600;
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar4;
  *(undefined8 **)(param_1 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar4[3] = uVar1;
  *(undefined4 *)(puVar4 + 4) = 0;
  lVar2 = DAT_146534670;
  if (DAT_146534670 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x8d8,
               L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
  }
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 7;
  if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x40);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 7;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar4;
  *(undefined8 **)(param_1 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  puVar4[2] = lVar2;
  *(int *)(puVar4 + 6) = (int)((param_2 >> 0x1f & 7U) + param_2) >> 3;
  *puVar4 = &PTR_LAB_143f489d0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x24) = 4;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x10;
  return;
}



// FUNCTION 1426227a0 FUN_1426227a0 body=111 status=ok
// SIG undefined FUN_1426227a0(void)

void FUN_1426227a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = *param_1 + 0x50;
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
      lVar1 = lVar1 + 0x90;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 142622820 ExecuteIfSafe body=20 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseFunctorDelegateInstance<void___cdecl(void),<lambda_6b4f3c461ca5edbc3d5013ca6f6beaf4>_>::
ExecuteIfSafe(longlong param_1)

{
  <lambda_6b4f3c461ca5edbc3d5013ca6f6beaf4>::operator()(param_1 + 8);
  return 1;
}



// FUNCTION 142622840 FUN_142622840 body=315 status=ok
// SIG undefined FUN_142622840(void)

void FUN_142622840(void)

{
  longlong in_stack_00000030;
  longlong in_stack_00000038;
  int in_stack_00000050;
  
  if (in_stack_00000050 == 2) {
    if (in_stack_00000030 != 0) {
      FUN_142616f30();
      return;
    }
  }
  else if ((in_stack_00000050 == 1) && (in_stack_00000038 != 0)) {
    FUN_142617550();
    return;
  }
  FUN_142617b70();
  return;
}



// FUNCTION 142622980 FUN_142622980 body=237 status=ok
// SIG undefined FUN_142622980(void)

void FUN_142622980(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142621e10(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14513b268;
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



// FUNCTION 142622a70 FUN_142622a70 body=237 status=ok
// SIG undefined FUN_142622a70(void)

void FUN_142622a70(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142621f20(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14513ad10;
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



// FUNCTION 142622b60 ExecuteTask body=265 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FParticleSimulationGPU::InitResources'::`5'::EURCMacro_FInitParticleSimulationGPUCommand>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142622080(param_1 + 2,param_3,param_1 + 7);
  if (param_1[5] != 0) {
    FUN_14262d6b0();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_14513af78;
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



// FUNCTION 142622c70 FUN_142622c70 body=237 status=ok
// SIG undefined FUN_142622c70(void)

void FUN_142622c70(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1426221a0(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14513acf0;
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



// FUNCTION 142622d60 FUN_142622d60 body=263 status=ok
// SIG undefined FUN_142622d60(void)

void FUN_142622d60(undefined8 *param_1)

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
  (**(code **)(*(longlong *)(param_1[2] + 0x170) + 0x18))();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14513b248;
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



// FUNCTION 142622e70 FUN_142622e70 body=287 status=ok
// SIG undefined FUN_142622e70(void)

void FUN_142622e70(undefined8 *param_1)

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
  FUN_14262adb0(uVar3,*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(param_1[2] + 0x30),
                param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_145138eb8;
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



// FUNCTION 142622f90 FUN_142622f90 body=237 status=ok
// SIG undefined FUN_142622f90(void)

void FUN_142622f90(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142622310(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14513af08;
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



// FUNCTION 142623080 FUN_142623080 body=237 status=ok
// SIG undefined FUN_142623080(void)

void FUN_142623080(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142622440(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14513ad00;
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



// FUNCTION 142623170 FUN_142623170 body=290 status=ok
// SIG undefined FUN_142623170(void)

void FUN_142623170(undefined8 *param_1)

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
  (**(code **)(plVar5[0x3e] + 0x30))();
  (**(code **)(*plVar5 + 0x30))(plVar5);
  if ((longlong *)plVar5[0x47] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar5[0x47] + 0x30))();
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14513af18;
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



// FUNCTION 1426232a0 FUN_1426232a0 body=263 status=ok
// SIG undefined FUN_1426232a0(void)

void FUN_1426232a0(undefined8 *param_1)

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
  (**(code **)(*(longlong *)(param_1[2] + 0x170) + 0x20))();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14513b258;
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



// FUNCTION 1426233b0 FUN_1426233b0 body=237 status=ok
// SIG undefined FUN_1426233b0(void)

void FUN_1426233b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1426224c0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14513b278;
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



// FUNCTION 1426234a0 FUN_1426234a0 body=270 status=ok
// SIG undefined FUN_1426234a0(void)

void FUN_1426234a0(undefined8 *param_1)

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
  if (((longlong *)param_1[2] != (longlong *)0x0) && (DAT_1468c217e == '\0')) {
    (**(code **)(*(longlong *)param_1[2] + 0x48))();
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14513b238;
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



// FUNCTION 1426235b0 FUN_1426235b0 body=237 status=ok
// SIG undefined FUN_1426235b0(void)

void FUN_1426235b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142622590(param_1 + 2,param_3,param_1 + 7);
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_14513b288;
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



// FUNCTION 1426236a0 FUN_1426236a0 body=275 status=ok
// SIG undefined FUN_1426236a0(void)

void FUN_1426236a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)param_1[2] + 0x30))();
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14513af68;
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



// FUNCTION 1426237c0 FUN_1426237c0 body=145 status=ok
// SIG undefined FUN_1426237c0(void)

void FUN_1426237c0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  if (0 < *(int *)(lVar3 + 0xc0)) {
    iVar5 = 0;
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (((*(int *)(lVar2 + 0x28) < *(int *)(param_1 + 0x178)) &&
          (plVar4 = (longlong *)
                    ((longlong)*(int *)(lVar2 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x170)),
          iVar5 < (int)plVar4[1])) &&
         (fVar1 = *(float *)(*(longlong *)(lVar3 + 0xb8) + 8 + lVar7),
         fVar1 < *(float *)(param_1 + 0x13c) || fVar1 == *(float *)(param_1 + 0x13c))) {
        *(undefined1 *)(lVar6 + *plVar4) = 1;
        lVar3 = *(longlong *)(lVar2 + 0x50);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xc;
    } while (iVar5 < *(int *)(lVar3 + 0xc0));
  }
  return;
}



// FUNCTION 142623860 FUN_142623860 body=1143 status=ok
// SIG undefined FUN_142623860(void)

undefined1 * FUN_142623860(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  float fVar11;
  int local_res8 [2];
  
  if ((((*(longlong *)(param_1 + 0x10) != 0) && (0 < *(int *)(param_1 + 0x128))) &&
      ((*(byte *)(param_1 + 0xf0) & 1) != 0)) &&
     ((lVar3 = *(longlong *)(param_1 + 0x28), lVar3 != 0 && ((*(byte *)(lVar3 + 0x2c) & 1) != 0))))
  {
    puVar10 = (undefined8 *)0x0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined8 *)(param_2 + 0x38) = 0x3f8000003f800000;
    *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      auVar2 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x18) + 0x230);
      *(longlong *)(param_2 + 0x38) = auVar2._0_8_;
      *(int *)(param_2 + 0x40) = auVar2._8_4_;
    }
    iVar9 = *(int *)(param_1 + 0x130) * *(int *)(param_1 + 0x124);
    FUN_14261c890(param_2 + 0x18,iVar9);
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_2 + 0x28),*(void **)(param_1 + 0x100),(longlong)iVar9);
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_2 + 0x30),*(void **)(param_1 + 0x108),
               (longlong)*(int *)(param_2 + 0x20) * 2);
    lVar4 = *(longlong *)(lVar3 + 0x30);
    puVar6 = (undefined8 *)operator_new(0x30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar10 = puVar6;
    }
    puVar6 = puVar10 + 3;
    *(bool *)puVar10 = *(longlong *)(lVar4 + 0x118) != 0;
    *(int *)((longlong)puVar10 + 4) = *(int *)(lVar4 + 0xe4) * *(int *)(lVar4 + 0xe0);
    if (puVar6 != (undefined8 *)(lVar4 + 0x160)) {
      iVar9 = *(int *)(lVar4 + 0x168);
      _Src = *(void **)(lVar4 + 0x160);
      *(int *)(puVar10 + 4) = iVar9;
      if ((iVar9 == 0) && (*(int *)((longlong)puVar10 + 0x24) == 0)) {
        *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6,iVar9);
        _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)iVar9 << 3);
      }
    }
    uVar5 = 8;
    if (*(char *)(lVar4 + 0x120) == '\0') {
      uVar5 = 4;
    }
    *(undefined4 *)(puVar10 + 1) = uVar5;
    uVar5 = 6;
    if (*(char *)(lVar4 + 0x120) == '\0') {
      uVar5 = 2;
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = uVar5;
    *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(lVar4 + 0x124);
    puVar10[5] = *(undefined8 *)(*(longlong *)(lVar4 + 0x178) + 0x40);
    *(undefined8 **)(param_2 + 0x68) = puVar10;
    *(undefined8 *)(param_2 + 0x60) = 0;
    if (*(float *)(param_1 + 0x140) <= 0.0001) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = 1.0 / *(float *)(param_1 + 0x140);
    }
    *(float *)(param_2 + 0x88) = fVar11;
    if ((*(byte *)(*(longlong *)(lVar3 + 0x30) + 0x108) & 1) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0x10c);
    }
    *(undefined4 *)(param_2 + 0x8c) = uVar5;
    *(undefined1 *)(param_2 + 0xb6) = *(undefined1 *)(*(longlong *)(lVar3 + 0x30) + 0x58);
    *(byte *)(param_2 + 0xb4) = *(byte *)(*(longlong *)(lVar3 + 0x30) + 100) & 1;
    *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x34);
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0xe0);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0xe4);
    *(byte *)(param_2 + 0x48) = *(byte *)(*(longlong *)(lVar3 + 0x30) + 0xf4) & 1;
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0x104);
    lVar4 = *(longlong *)(lVar3 + 0x30);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(lVar4 + 0xf8);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(lVar4 + 0x100);
    *(undefined1 *)(param_2 + 0xb5) = 0;
    if ((((*(uint *)(param_1 + 0xf0) & 0x200) != 0) &&
        (*(undefined1 *)(param_2 + 0xb7) = *(undefined1 *)(param_1 + 0xf4),
        *(char *)(param_1 + 0xf4) != '\0')) &&
       (*(undefined1 *)(param_2 + 0xb5) = 1, *(char *)(param_1 + 0xf4) == '\n')) {
      *(undefined1 *)(param_2 + 0xc5) = 1;
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0x50);
    }
    if (0 < *(int *)(lVar3 + 0x98)) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res8,
               *(undefined8 *)
                (*(longlong *)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40) + 0x90) + -8 +
                (longlong)*(int *)(lVar3 + 0x98) * 8));
      puVar8 = (undefined4 *)0x0;
      if (local_res8[0] != -1) {
        puVar8 = (undefined4 *)(*plVar1 + (longlong)local_res8[0] * 0x18);
      }
      puVar7 = puVar8 + 2;
      if (puVar8 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      *(undefined4 *)(param_2 + 0x90) = *puVar7;
    }
    *(undefined1 *)(param_2 + 0xb9) = *(undefined1 *)(*(longlong *)(lVar3 + 0x30) + 0x128);
    lVar4 = *(longlong *)(lVar3 + 0x30);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar4 + 300);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(lVar4 + 0x134);
    lVar4 = *(longlong *)(lVar3 + 0x30);
    *(undefined8 *)(param_2 + 0x7c) = *(undefined8 *)(lVar4 + 0x138);
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(lVar4 + 0x140);
    *(undefined8 *)(param_2 + 0xbc) = *(undefined8 *)(param_1 + 0x1c4);
    *(byte *)(param_2 + 0xc4) = (byte)(*(uint *)(*(longlong *)(lVar3 + 0x30) + 0x6c) >> 1) & 1;
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0x5c);
    lVar3 = *(longlong *)(lVar3 + 0x30);
    *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(lVar3 + 0x60);
    return (undefined1 *)CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return &stack0x00000000;
}



// FUNCTION 142623ce0 FUN_142623ce0 body=710 status=ok
// SIG undefined FUN_142623ce0(void)

ulonglong FUN_142623ce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_10;
  
  uVar3 = FUN_142623860();
  if ((((char)uVar3 == '\0') || (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 == 0)) ||
     ((*(byte *)(lVar1 + 0x2c) & 1) == 0)) {
    return uVar3 & 0xffffffffffffff00;
  }
  *(undefined4 *)(param_2 + 8) = 2;
  plVar4 = *(longlong **)(param_1 + 0x1b0);
  if ((plVar4 == (longlong *)0x0) ||
     (cVar2 = (**(code **)(*plVar4 + 0x2f0))(plVar4,3), cVar2 == '\0')) {
    plVar4 = (longlong *)UMaterial::GetDefaultMaterial(0);
  }
  *(longlong **)(param_2 + 0x60) = plVar4;
  *(longlong **)(param_1 + 0x1b0) = plVar4;
  *(byte *)(param_2 + 0xe0) = *(byte *)(*(longlong *)(lVar1 + 0x30) + 0xe8) & 1;
  *(uint *)(param_2 + 0xd0) = (uint)*(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdc);
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(*(longlong *)(lVar1 + 0x30) + 0xe0);
  *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(*(longlong *)(lVar1 + 0x30) + 0xe4);
  *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(param_1 + 0x200);
  *(undefined1 *)(param_2 + 0xed) = *(undefined1 *)(param_1 + 0x1f8);
  *(undefined1 *)(param_2 + 0xec) = *(undefined1 *)(*(longlong *)(param_1 + 0x1f0) + 0x5c);
  *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_1 + 0x204);
  *(undefined8 *)(param_2 + 0x38) = 0x3f8000003f800000;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((lVar1 != 0) &&
      ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0xf0) & 0x80) == 0)) {
    uVar5 = *(undefined4 *)(lVar1 + 0x234);
    uVar6 = *(undefined4 *)(lVar1 + 0x238);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar1 + 0x230);
    *(undefined4 *)(param_2 + 0x3c) = uVar5;
    *(undefined4 *)(param_2 + 0x40) = uVar6;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x1f0);
  if (*(char *)(uVar3 + 200) != '\0') {
    if (*(char *)(uVar3 + 200) == '\n') {
      *(undefined1 *)(param_2 + 0xc5) = 1;
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x50);
      *(uint *)(param_2 + 0xb0) = *(uint *)(param_1 + 0x50);
    }
LAB_142623f82:
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  if ((*(uint *)(param_1 + 0xf0) & 0x200) == 0) goto LAB_142623f82;
  uVar3 = 0;
  *(undefined1 *)(param_2 + 0xb7) = *(undefined1 *)(param_1 + 0xf4);
  if (*(char *)(param_1 + 0xf4) == '\0') goto LAB_142623f82;
  *(undefined1 *)(param_2 + 0xb5) = 1;
  cVar2 = *(char *)(param_1 + 0xf4);
  if (cVar2 == '\x01') {
    uVar5 = 0x3f800000;
LAB_142623f3b:
    uVar6 = 0;
  }
  else {
    if (cVar2 == '\x02') {
      uVar5 = 0;
      local_10 = 0;
      uVar6 = 0x3f800000;
      goto LAB_142623f49;
    }
    if (cVar2 == '\x04') {
      uVar5 = 0xbf800000;
      goto LAB_142623f3b;
    }
    if (cVar2 != '\x05') {
      uVar6 = 0;
      if (cVar2 == '\x06') {
        *(undefined8 *)(param_2 + 0xf0) = 0;
        *(undefined4 *)(param_2 + 0xf8) = 0xbf800000;
        return 0xbf800001;
      }
      local_10 = 0x3f800000;
      uVar5 = 0;
      goto LAB_142623f49;
    }
    uVar6 = 0xbf800000;
    uVar5 = 0;
  }
  local_10 = 0;
LAB_142623f49:
  *(ulonglong *)(param_2 + 0xf0) = CONCAT44(uVar6,uVar5);
  *(undefined4 *)(param_2 + 0xf8) = local_10;
  return CONCAT71((uint7)(uint3)((uint)local_10 >> 8),1);
}



// FUNCTION 142623fb0 FUN_142623fb0 body=131 status=ok
// SIG undefined FUN_142623fb0(void)

undefined8 FUN_142623fb0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x128) < 1) {
    return 0;
  }
  cVar1 = FUN_142623860();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 8) = 1;
    plVar2 = *(longlong **)(param_1 + 0x1b0);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar2 + 0x2f0))(plVar2,1), cVar1 == '\0')) {
      plVar2 = (longlong *)UMaterial::GetDefaultMaterial(0);
    }
    *(longlong **)(param_1 + 0x1b0) = plVar2;
    *(longlong **)(param_2 + 0x60) = plVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 142624040 FUN_142624040 body=277 status=ok
// SIG undefined FUN_142624040(void)

void FUN_142624040(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  uVar4 = (longlong)*(int *)(lVar1 + 0x228) ^ 1;
  if (*(float *)(DAT_146b057b0 + 4) <= 0.0) {
    uVar4 = (longlong)*(int *)(lVar1 + 0x228);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *(undefined8 *)(uVar4 * 0x58 + 0x30 + lVar1);
  uVar3 = *(undefined8 *)(uVar4 * 0x58 + 0x40 + lVar1);
  puVar5 = puVar7 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar7 = uVar2;
  puVar7[1] = uVar3;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  puVar6[3] = puVar7;
  *puVar6 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar6 + 2) = 2;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  return;
}



// FUNCTION 142624160 FUN_142624160 body=180 status=ok
// SIG undefined FUN_142624160(void)

void FUN_142624160(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
  if (0 < *(int *)(lVar1 + 0xc0)) {
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar7 + *(longlong *)(lVar1 + 0xb8));
      if ((((plVar3 != (longlong *)0x0) && ((char)*(uint *)(plVar3 + 5) < '\0')) &&
          ((*(byte *)(plVar3 + 6) & 1) != 0)) && ((*(uint *)(plVar3 + 5) & 8) != 0)) {
        lVar4 = *plVar3;
        uVar5 = FUN_1426279f0(param_1,*(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + lVar7));
        (**(code **)(lVar4 + 0x370))(plVar3,param_1,uVar5);
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(lVar1 + 0xc0));
  }
  return;
}



// FUNCTION 142624220 FUN_142624220 body=255 status=ok
// SIG undefined FUN_142624220(void)

void FUN_142624220(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int local_res8 [2];
  
  puVar10 = (uint *)0x0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
  puVar8 = puVar10;
  puVar9 = puVar10;
  if (0 < *(int *)(lVar1 + 0xc0)) {
    do {
      plVar3 = *(longlong **)((longlong)puVar9 + *(longlong *)(lVar1 + 0xb8));
      if (((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 5) & 0x80) != 0)) &&
         ((*(byte *)(plVar3 + 6) & 1) != 0)) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar4 + 0xb8,local_res8,
                 *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + (longlong)puVar9));
        puVar6 = puVar10;
        if (local_res8[0] != -1) {
          puVar6 = (uint *)(*(longlong *)(lVar4 + 0xb8) + (longlong)local_res8[0] * 0x18);
        }
        puVar5 = puVar6 + 2;
        if (puVar6 == (uint *)0x0) {
          puVar5 = puVar10;
        }
        puVar6 = puVar10;
        if (puVar5 != (uint *)0x0) {
          puVar6 = (uint *)(ulonglong)*puVar5;
        }
        (**(code **)(*plVar3 + 0x370))(plVar3,param_1,puVar6);
      }
      uVar7 = (int)puVar8 + 1;
      puVar8 = (uint *)(ulonglong)uVar7;
      puVar9 = puVar9 + 2;
    } while ((int)uVar7 < *(int *)(lVar1 + 0xc0));
  }
  return;
}



// FUNCTION 142624320 FUN_142624320 body=604 status=ok
// SIG undefined FUN_142624320(void)

void FUN_142624320(longlong param_1,float param_2,int param_3,uint param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar9 = (ulonglong)param_4;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1) != 0) {
    param_5 = (undefined8 *)&DAT_1468b5d90;
  }
  uVar4 = *(uint *)(param_5 + 1);
  uVar2 = *param_5;
  if (((param_3 != 0) && (*(int *)(param_1 + 0x274) == 0)) && (0 < param_3)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x268,param_3);
  }
  iVar8 = 0;
  if (0 < param_3) {
    do {
      uVar3 = *param_6;
      uVar5 = *(undefined4 *)(param_6 + 1);
      iVar6 = *(int *)(param_1 + 0x270);
      lVar10 = (longlong)iVar6;
      fVar11 = (float)iVar8;
      *(int *)(param_1 + 0x270) = iVar6 + 1;
      if (*(int *)(param_1 + 0x274) < iVar6 + 1) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0x268,iVar6);
      }
      lVar7 = *(longlong *)(param_1 + 0x268);
      iVar8 = iVar8 + 1;
      puVar1 = (undefined8 *)(lVar7 + lVar10 * 0x48);
      *puVar1 = uVar2;
      puVar1[1] = CONCAT44(fVar11 * (param_2 / (float)param_3),uVar4);
      puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar10 * 0x48);
      *puVar1 = uVar3;
      puVar1[1] = CONCAT44(uStack_7c,uVar5);
      puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar10 * 0x48);
      *puVar1 = local_78;
      puVar1[1] = uStack_70;
      puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar10 * 0x48);
      *puVar1 = local_68;
      puVar1[1] = uStack_60;
      *(undefined8 *)(lVar7 + 0x40 + lVar10 * 0x48) = local_58;
    } while (iVar8 < param_3);
  }
  if (param_4 != 0) {
    if (*(int *)(param_1 + 0x284) == 0) {
      if ((int)param_4 < 1) {
        return;
      }
      if (0 < (int)param_4) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x278,param_4);
      }
    }
    if (0 < (int)param_4) {
      do {
        uVar5 = *(undefined4 *)(param_6 + 1);
        iVar8 = *(int *)(param_1 + 0x280);
        lVar10 = (longlong)iVar8;
        uVar3 = *param_6;
        *(int *)(param_1 + 0x280) = iVar8 + 1;
        if (*(int *)(param_1 + 0x284) < iVar8 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0x278,iVar8);
        }
        lVar7 = *(longlong *)(param_1 + 0x278);
        puVar1 = (undefined8 *)(lVar7 + lVar10 * 0x48);
        *puVar1 = uVar2;
        puVar1[1] = (ulonglong)uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar10 * 0x48);
        *puVar1 = uVar3;
        puVar1[1] = CONCAT44(uStack_7c,uVar5);
        puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar10 * 0x48);
        *puVar1 = local_78;
        puVar1[1] = uStack_70;
        puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar10 * 0x48);
        *puVar1 = local_68;
        puVar1[1] = uStack_60;
        *(undefined8 *)(lVar7 + 0x40 + lVar10 * 0x48) = local_58;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 142624580 FUN_142624580 body=434 status=ok
// SIG undefined FUN_142624580(void)

void FUN_142624580(longlong *param_1,float param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float local_res8 [4];
  float local_res18 [2];
  int local_res20 [2];
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  float *local_80;
  int *local_78;
  float *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  
  fVar3 = 0.0;
  if (param_3 < 1) {
    if (param_4 < 1) {
      return;
    }
  }
  else {
    fVar3 = param_2 / (float)param_3;
  }
  iVar2 = (int)param_1[0x25] + param_3 + param_4;
  if ((iVar2 < (int)param_1[0x26]) ||
     (cVar1 = (**(code **)(*param_1 + 0x18))
                        (param_1,(int)(SQRT(SQRT((float)iVar2)) + 1.0) + iVar2,param_2 < 0.05),
     cVar1 == '\x01')) {
    local_90 = 0;
    local_98 = param_1[5];
    local_80 = local_res18;
    local_78 = local_res20;
    local_70 = local_res8;
    local_58 = &local_98;
    local_50 = &local_90;
    local_68 = param_5;
    local_60 = param_6;
    local_res8[0] = fVar3;
    local_res18[0] = param_2;
    local_res20[0] = param_3;
    local_88 = param_1;
    FUN_14261b380(&local_88,*(byte *)(param_1[2] + 0xb0) & 1);
    local_98 = 0;
    local_res8[0] = 0.0;
    local_90 = param_1[5];
    local_80 = local_res18;
    local_78 = local_res20;
    local_70 = local_res8;
    local_58 = &local_90;
    local_50 = &local_98;
    local_68 = param_5;
    local_60 = param_6;
    local_res18[0] = param_2;
    local_res20[0] = param_4;
    local_88 = param_1;
    FUN_14261b380(&local_88,(*(byte *)(param_1[2] + 0xb0) & 1) != 0);
  }
  return;
}



// FUNCTION 142624740 FUN_142624740 body=1203 status=ok
// SIG undefined FUN_142624740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142624740(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  byte bVar7;
  ulonglong uVar8;
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
  float fVar19;
  float local_148;
  float fStack_144;
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  float local_128;
  float fStack_124;
  float local_118;
  float fStack_114;
  undefined4 local_f0;
  undefined8 local_e8;
  float fStack_e0;
  undefined8 local_d8;
  float fStack_d0;
  undefined8 local_c8;
  float fStack_c0;
  undefined8 local_b8;
  float fStack_b0;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x230);
    lVar4 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x15c) = _DAT_1468b5d90;
    uVar2 = DAT_1468b5d98;
    *(undefined4 *)(param_1 + 0x164) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
    *(undefined4 *)(param_1 + 0x158) = uVar2;
    *(undefined1 *)(param_1 + 0x168) = 0;
    iVar3 = FUN_142627ad0();
    lVar5 = (longlong)iVar3;
    bVar7 = *(byte *)(*(longlong *)(lVar4 + 0x30) + 100) & 1;
    if (bVar7 == 0) {
      local_e8 = _DAT_1464aa7d0;
      fStack_e0 = (float)_DAT_1464aa7d8;
      local_d8 = _DAT_1464aa7e0;
      fStack_d0 = (float)_DAT_1464aa7e8;
      local_c8 = _DAT_1464aa7f0;
      fStack_c0 = (float)_DAT_1464aa7f8;
      local_b8 = _DAT_1464aa800;
      fStack_b0 = (float)uRam00000001464aa808;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x18);
      fVar14 = *(float *)(lVar4 + 0x210);
      fVar15 = *(float *)(lVar4 + 0x214);
      fVar16 = *(float *)(lVar4 + 0x218);
      fVar17 = *(float *)(lVar4 + 0x21c);
      fVar9 = fVar15 + fVar15;
      fVar11 = fVar16 + fVar16;
      fVar12 = fVar14 * (fVar14 + fVar14);
      fVar10 = (fVar14 + fVar14) * fVar17;
      fVar18 = *(float *)(lVar4 + 0x230);
      fVar19 = *(float *)(lVar4 + 0x234);
      fVar13 = *(float *)(lVar4 + 0x238);
      fStack_d0 = (fVar10 + fVar11 * fVar15) * fVar19;
      fStack_e0 = fVar18 * (fVar11 * fVar14 - fVar9 * fVar17);
      fStack_c0 = (float)((uint)((fRam0000000146b056d8 - (fVar15 * fVar9 + fVar12)) * fVar13) &
                         uRam0000000146b056e8);
      local_b8 = *(undefined8 *)(lVar4 + 0x220);
      fStack_b0 = *(float *)(lVar4 + 0x228);
      local_e8 = CONCAT44((fVar11 * fVar17 + fVar9 * fVar14) * fVar18,
                          (uint)((_DAT_146b056d0 - (fVar16 * fVar11 + fVar15 * fVar9)) * fVar18) &
                          _DAT_146b056e0);
      local_d8 = CONCAT44((uint)((fRam0000000146b056d4 - (fVar16 * fVar11 + fVar12)) * fVar19) &
                          uRam0000000146b056e4,fVar19 * (fVar9 * fVar14 - fVar11 * fVar17));
      local_c8 = CONCAT44(fVar13 * (fVar11 * fVar15 - fVar10),
                          (fVar9 * fVar17 + fVar11 * fVar14) * fVar13);
    }
    local_148 = 1048576.0;
    fStack_144 = 1048576.0;
    local_140 = 1048576.0;
    local_138 = -1048576.0;
    fStack_134 = -1048576.0;
    local_130 = -1048576.0;
    if (0 < (int)*(uint *)(param_1 + 0x128)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x128);
      puVar6 = *(ushort **)(param_1 + 0x108);
      fStack_124 = (float)((ulonglong)uVar1 >> 0x20);
      local_128 = (float)uVar1;
      fVar14 = 1048576.0;
      fVar15 = -1048576.0;
      fVar16 = 1048576.0;
      fVar17 = 1048576.0;
      fVar18 = -1048576.0;
      fVar19 = -1048576.0;
      do {
        lVar4 = (longlong)(int)((uint)*puVar6 * *(int *)(param_1 + 0x124)) +
                *(longlong *)(param_1 + 0x100);
        if (lVar5 == -1) {
          fVar13 = ABS(local_128 * *(float *)(lVar4 + 0x5c));
          fVar9 = ABS(fStack_124 * *(float *)(lVar4 + 0x60));
          if (fVar13 <= fVar9) {
            fVar13 = fVar9;
          }
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
        }
        else {
          fVar13 = ABS(*(float *)(lVar5 + 0x10 + lVar4));
          fVar9 = ABS(*(float *)(lVar5 + 0xc + lVar4));
          if (fVar13 <= fVar9) {
            fVar13 = fVar9;
          }
          fVar9 = ABS(*(float *)(lVar5 + 0x14 + lVar4));
          if (fVar13 <= fVar9) {
            fVar13 = fVar9;
          }
        }
        fVar9 = *(float *)(lVar4 + 0x18);
        if (bVar7 == 0) {
          fStack_114 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20);
          local_118 = (float)*(undefined8 *)(lVar4 + 0x10);
        }
        else {
          fVar9 = *(float *)(lVar4 + 0x10);
          fVar10 = *(float *)(lVar4 + 0x14);
          fVar11 = *(float *)(lVar4 + 0x18);
          local_118 = (float)local_b8 * 1.0 + fVar11 * (float)local_c8 +
                      fVar10 * (float)local_d8 + fVar9 * (float)local_e8;
          fStack_114 = local_b8._4_4_ * 1.0 + fVar11 * local_c8._4_4_ +
                       fVar10 * local_d8._4_4_ + fVar9 * local_e8._4_4_;
          fVar9 = fStack_b0 * 1.0 + fVar11 * fStack_c0 + fVar10 * fStack_d0 + fVar9 * fStack_e0;
        }
        puVar6 = puVar6 + 1;
        local_148 = local_118 - fVar13;
        if (fVar14 <= local_118 - fVar13) {
          local_148 = fVar14;
        }
        local_138 = local_118 + fVar13;
        if (local_118 + fVar13 <= fVar15) {
          local_138 = fVar15;
        }
        fStack_144 = fStack_114 - fVar13;
        if (fVar16 <= fStack_114 - fVar13) {
          fStack_144 = fVar16;
        }
        fStack_134 = fStack_114 + fVar13;
        if (fStack_114 + fVar13 <= fVar18) {
          fStack_134 = fVar18;
        }
        local_140 = fVar9 - fVar13;
        if (fVar17 <= fVar9 - fVar13) {
          local_140 = fVar17;
        }
        local_130 = fVar9 + fVar13;
        if (fVar9 + fVar13 <= fVar19) {
          local_130 = fVar19;
        }
        uVar8 = uVar8 - 1;
        fVar14 = local_148;
        fVar15 = local_138;
        fVar16 = fStack_144;
        fVar17 = local_140;
        fVar18 = fStack_134;
        fVar19 = local_130;
      } while (uVar8 != 0);
    }
    local_f0 = CONCAT31(local_f0._1_3_,1);
    *(float *)(param_1 + 0x150) = local_148;
    *(float *)(param_1 + 0x154) = fStack_144;
    *(float *)(param_1 + 0x158) = local_140;
    *(float *)(param_1 + 0x15c) = local_138;
    *(ulonglong *)(param_1 + 0x160) = CONCAT44(local_130,fStack_134);
    *(undefined4 *)(param_1 + 0x168) = local_f0;
  }
  return;
}



// FUNCTION 142624c00 FUN_142624c00 body=456 status=ok
// SIG undefined FUN_142624c00(void)

void FUN_142624c00(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  
  if (*(longlong *)(param_1 + 4) == 0) goto LAB_142624db2;
  uVar2 = *param_1;
  if (DAT_146534418 != 0) {
    LOCK();
    DAT_146b051ec = DAT_146b051ec - uVar2;
    UNLOCK();
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar2 != 0) {
      iVar3 = 0x1f - iVar1;
    }
    uVar2 = uVar2 - 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    if (uVar2 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x1f' - (char)iVar1;
    }
    uVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - cVar4 & 0x1f);
    if (uVar2 < 0x801) {
      if (uVar2 == 0x800) {
        FUN_1415b1b00(&DAT_146b055e0);
        goto LAB_142624db2;
      }
      if (uVar2 < 0x201) {
        if (uVar2 == 0x200) {
          FUN_1415b1b00(&DAT_146b05620);
          goto LAB_142624db2;
        }
        if (uVar2 == 400) {
          FUN_1415b1b00(&DAT_146b05680);
          goto LAB_142624db2;
        }
        if (uVar2 == 0x1b0) {
          FUN_1415b1b00(&DAT_146b056a0);
          goto LAB_142624db2;
        }
        if (uVar2 == 0x1f0) {
          FUN_1415b1b00(&DAT_146b05640);
          goto LAB_142624db2;
        }
      }
      else {
        if (uVar2 == 0x260) {
          FUN_1415b1b00(&DAT_146b05660);
          goto LAB_142624db2;
        }
        if (uVar2 == 0x400) {
          FUN_1415b1b00(&DAT_146b05600);
          goto LAB_142624db2;
        }
      }
    }
    else {
      if (uVar2 == 0x1000) {
        FUN_1415b1b00(&DAT_146b055c0);
        goto LAB_142624db2;
      }
      if (uVar2 == 0x2000) {
        FUN_1415b1b00(&DAT_146b055a0);
        goto LAB_142624db2;
      }
      if (uVar2 == 0x4000) {
        FUN_1415b1b00(&DAT_146b05580);
        goto LAB_142624db2;
      }
      if (uVar2 == 0x8000) {
        FUN_1415b1b00(&DAT_146b05560);
        goto LAB_142624db2;
      }
      if (uVar2 == 0x10000) {
        FUN_1415b1b00(&DAT_146b05540);
        goto LAB_142624db2;
      }
    }
  }
  FMemory::Free(*(longlong *)(param_1 + 4));
LAB_142624db2:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 142624dd0 Free body=344 status=ok
// SIG undefined Free(void)

void FTexelAllocator::Free(longlong *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  
  plVar5 = *(longlong **)(*param_1 + (ulonglong)param_2[1] * 8);
  plVar8 = (longlong *)(*param_1 + (ulonglong)param_2[1] * 8);
  uVar1 = param_2[2];
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + (uint)uVar1;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) {
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      plVar5 = (longlong *)FMemory::Malloc(0x10);
    }
    else {
      param_1[2] = *plVar5;
    }
    *(ushort *)(plVar5 + 1) = *param_2;
    *plVar5 = 0;
    *(ushort *)((longlong)plVar5 + 10) = uVar1;
    *plVar8 = (longlong)plVar5;
  }
  else {
    uVar2 = *param_2;
    uVar7 = (uint)uVar2;
    do {
      plVar6 = plVar5;
      uVar3 = *(ushort *)((longlong)plVar6 + 10);
      uVar4 = *(ushort *)(plVar6 + 1);
      if (uVar7 <= (uint)uVar4 + (uint)uVar3) {
        if ((uint)uVar4 == uVar1 + uVar7) {
          *(ushort *)(plVar6 + 1) = uVar2;
          *(ushort *)((longlong)plVar6 + 10) = uVar3 + uVar1;
          return;
        }
        plVar5 = plVar6;
        if ((uint)uVar4 + (uint)uVar3 == uVar7) {
          *(ushort *)((longlong)plVar6 + 10) = uVar3 + uVar1;
          plVar8 = (longlong *)*plVar6;
          while( true ) {
            if (plVar8 == (longlong *)0x0) {
              return;
            }
            if ((uint)*(ushort *)(plVar8 + 1) !=
                (uint)*(ushort *)(plVar6 + 1) + (uint)*(ushort *)((longlong)plVar6 + 10)) break;
            *(ushort *)((longlong)plVar6 + 10) =
                 *(short *)((longlong)plVar8 + 10) + *(ushort *)((longlong)plVar6 + 10);
            *plVar6 = *plVar8;
            plVar5 = (longlong *)*plVar8;
            *plVar8 = param_1[2];
            param_1[2] = (longlong)plVar8;
            plVar8 = plVar5;
          }
          return;
        }
        break;
      }
      plVar5 = (longlong *)*plVar6;
      plVar8 = plVar6;
    } while (plVar5 != (longlong *)0x0);
    plVar6 = (longlong *)param_1[2];
    if (plVar6 == (longlong *)0x0) {
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      plVar6 = (longlong *)FMemory::Malloc(0x10);
    }
    else {
      param_1[2] = *plVar6;
    }
    *plVar6 = (longlong)plVar5;
    *(ushort *)(plVar6 + 1) = uVar2;
    *(ushort *)((longlong)plVar6 + 10) = uVar1;
    *plVar8 = (longlong)plVar6;
  }
  return;
}



// FUNCTION 142624f30 FUN_142624f30 body=795 status=ok
// SIG undefined FUN_142624f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_142624f30(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  float fVar18;
  
  if (*(int *)(param_1 + 0x2b0) == 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x1f8) + 0x184) + 0xf;
    iVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4;
    fVar18 = (float)iVar5 * _DAT_146534304;
    iVar5 = iVar5 - ((int)ROUND(-0.5 - (fVar18 + fVar18)) >> 1);
    iVar4 = DAT_146534308;
    if (iVar5 <= DAT_146534308) {
      iVar4 = iVar5;
    }
  }
  else {
    iVar4 = 0;
  }
  iVar13 = *(int *)(param_1 + 0x230) + -1;
  iVar5 = iVar13 >> 5;
  uVar10 = 1 << ((byte)iVar13 & 0x1f);
  iVar16 = 0;
  if (iVar13 < 0) {
    return 0;
  }
  do {
    if (iVar13 < iVar4) break;
    lVar8 = *(longlong *)(param_1 + 0x228);
    if (*(longlong *)(param_1 + 0x228) == 0) {
      lVar8 = param_1 + 0x218;
    }
    if ((*(uint *)(lVar8 + (longlong)iVar5 * 4) & uVar10) != 0) break;
    iVar16 = iVar16 + 1;
    bVar17 = uVar10 < 2;
    uVar10 = uVar10 >> 1;
    if (bVar17) {
      iVar5 = iVar5 + -1;
      uVar10 = 0x80000000;
    }
    iVar13 = iVar13 + -1;
  } while (-1 < iVar13);
  if (0 < iVar16) {
    iVar4 = *(int *)(param_1 + 0x210);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x78);
    iVar5 = iVar4 - iVar16;
    for (lVar9 = (longlong)iVar5; lVar9 < iVar4; lVar9 = lVar9 + 1) {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + lVar9 * 4);
      BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x260));
      if (BVar6 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x260));
      }
      *(undefined4 *)(*(longlong *)(lVar8 + 0x248) + (longlong)*(int *)(lVar8 + 600) * 4) = uVar1;
      *(int *)(lVar8 + 600) = *(int *)(lVar8 + 600) + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x260));
    }
    iVar13 = *(int *)(param_1 + 0x230);
    if (iVar4 != iVar13) {
      iVar12 = 0;
      iVar11 = 0;
      iVar15 = 0;
      iVar14 = 0;
      uVar10 = 1;
      uVar7 = 1;
      if (0 < iVar13) {
        do {
          if ((iVar14 < iVar5) || (iVar4 <= iVar14)) {
            if (iVar11 != iVar14) {
              lVar9 = (longlong)iVar12;
              lVar8 = *(longlong *)(param_1 + 0x228);
              if (*(longlong *)(param_1 + 0x228) == 0) {
                lVar8 = param_1 + 0x218;
              }
              uVar2 = *(uint *)(lVar8 + lVar9 * 4);
              if ((*(uint *)(lVar8 + (longlong)iVar15 * 4) & uVar7) == 0) {
                *(uint *)(lVar8 + lVar9 * 4) = ~uVar10 & uVar2;
              }
              else {
                *(uint *)(lVar8 + lVar9 * 4) = uVar2 | uVar10;
              }
            }
            iVar11 = iVar11 + 1;
            uVar10 = uVar10 * 2;
            if (uVar10 == 0) {
              uVar10 = 1;
              iVar12 = iVar12 + 1;
            }
          }
          iVar13 = *(int *)(param_1 + 0x230);
          uVar2 = uVar7 * 2;
          iVar14 = iVar14 + 1;
          iVar3 = iVar15 + 1;
          uVar7 = 1;
          if (uVar2 != 0) {
            iVar3 = iVar15;
            uVar7 = uVar2;
          }
          iVar15 = iVar3;
        } while (iVar14 < iVar13);
      }
    }
    *(int *)(param_1 + 0x230) = iVar13 - iVar16;
    iVar13 = *(int *)(param_1 + 0x210);
    lVar8 = (longlong)iVar4 * 4;
    iVar4 = (iVar13 - iVar5) - iVar16;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar5 * 4),
                 (void *)(*(longlong *)(param_1 + 0x208) + lVar8),(longlong)iVar4 << 2);
      iVar13 = *(int *)(param_1 + 0x210);
    }
    *(int *)(param_1 + 0x210) = iVar13 - iVar16;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x208);
    iVar4 = *(int *)(param_1 + 0x240);
    iVar13 = (iVar4 - iVar5) - iVar16;
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar5 * 4),
                 (void *)(*(longlong *)(param_1 + 0x238) + lVar8),(longlong)iVar13 << 2);
      iVar4 = *(int *)(param_1 + 0x240);
    }
    *(int *)(param_1 + 0x240) = iVar4 - iVar16;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x238);
    *(undefined1 *)(*(longlong *)(param_1 + 0x200) + 0x250) = 1;
  }
  return iVar16;
}



// FUNCTION 142625250 FUN_142625250 body=127 status=ok
// SIG undefined FUN_142625250(void)

void FUN_142625250(longlong param_1,byte *param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if ((lVar1 == 0) && (lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x30) + 0x38), lVar1 == 0)) {
    lVar1 = UMaterial::GetDefaultMaterial();
  }
  pbVar2 = (byte *)FUN_142592090(lVar1,local_res8,param_4);
  *param_2 = *param_2 | *pbVar2;
  param_2[1] = param_2[1] | pbVar2[1];
  param_2[2] = param_2[2] | pbVar2[2];
  param_2[3] = param_2[3] | pbVar2[3];
  param_2[4] = param_2[4] | pbVar2[4];
  param_2[5] = param_2[5] | pbVar2[5];
  param_2[6] = param_2[6] | pbVar2[6];
  param_2[7] = param_2[7] | pbVar2[7];
  return;
}



// FUNCTION 1426252d0 FUN_1426252d0 body=263 status=ok
// SIG undefined FUN_1426252d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426252d0(undefined8 param_1,byte *param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong uVar4;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar4 = 0;
  local_60 = 0;
  local_68 = 1;
  local_40 = (undefined1 *)0x0;
  local_38 = 0;
  FUN_1426277b0(param_1,local_50);
  uVar5 = uVar4;
  if (0 < (int)local_38) {
    do {
      puVar2 = local_50;
      if (local_40 != (undefined1 *)0x0) {
        puVar2 = local_40;
      }
      pbVar1 = (byte *)FUN_142592090(*(undefined8 *)(puVar2 + uVar5),local_58,param_4);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *param_2 = *param_2 | *pbVar1;
      param_2[1] = param_2[1] | pbVar1[1];
      param_2[2] = param_2[2] | pbVar1[2];
      param_2[3] = param_2[3] | pbVar1[3];
      param_2[4] = param_2[4] | pbVar1[4];
      param_2[5] = param_2[5] | pbVar1[5];
      param_2[6] = param_2[6] | pbVar1[6];
      param_2[7] = param_2[7] | pbVar1[7];
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < (int)local_38);
  }
  if (local_40 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426253e0 FUN_1426253e0 body=118 status=ok
// SIG undefined FUN_1426253e0(void)

void FUN_1426253e0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = iVar1;
  iVar4 = iVar1;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    iVar3 = *(int *)(param_1 + 0x128) * *(int *)(param_1 + 0x124);
    iVar4 = *(int *)(param_1 + 0x130) * *(int *)(param_1 + 0x124);
  }
  iVar2 = iVar1;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    iVar1 = *(int *)(param_1 + 0x130) * 2;
    iVar2 = *(int *)(param_1 + 0x128) * 2;
  }
  *param_2 = iVar3 + 0x220 + iVar2;
  *param_3 = iVar4 + 0x220 + iVar1;
  return;
}



// FUNCTION 142625460 FUN_142625460 body=118 status=ok
// SIG undefined FUN_142625460(void)

void FUN_142625460(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = iVar1;
  iVar4 = iVar1;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    iVar3 = *(int *)(param_1 + 0x128) * *(int *)(param_1 + 0x124);
    iVar4 = *(int *)(param_1 + 0x130) * *(int *)(param_1 + 0x124);
  }
  iVar2 = iVar1;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    iVar1 = *(int *)(param_1 + 0x130) * 2;
    iVar2 = *(int *)(param_1 + 0x128) * 2;
  }
  *param_2 = iVar3 + 0x1f0 + iVar2;
  *param_3 = iVar4 + 0x1f0 + iVar1;
  return;
}



// FUNCTION 1426254e0 FUN_1426254e0 body=542 status=ok
// SIG undefined FUN_1426254e0(void)

float * FUN_1426254e0(float *param_1,undefined8 param_2,undefined8 param_3,int param_4,float param_5
                     )

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
  longlong lVar10;
  longlong lVar11;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  
  lVar11 = (longlong)param_4;
  lVar10 = FUN_142627a50(param_2,param_3);
  if (param_4 == 0) {
    fVar9 = *(float *)(lVar10 + 0x40);
    *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + 0x38);
    param_1[2] = fVar9;
  }
  else if (param_4 < *(int *)(lVar10 + 0x170) + 1) {
    fVar9 = *(float *)(lVar10 + 0x38);
    fVar1 = *(float *)(lVar10 + 0x80);
    fVar2 = *(float *)(lVar10 + 0x3c);
    fVar3 = *(float *)(lVar10 + 0x84);
    fVar4 = *(float *)(lVar10 + 0x40);
    fVar5 = *(float *)(lVar10 + 0x88);
    FUN_142625700(&local_a8,param_2,param_3);
    lVar10 = *(longlong *)(lVar10 + 0x178);
    fVar6 = *(float *)(lVar10 + -0xc + lVar11 * 0xc);
    fVar7 = *(float *)(lVar10 + -8 + lVar11 * 0xc);
    fVar8 = *(float *)(lVar10 + -4 + lVar11 * 0xc);
    *param_1 = (fVar1 - fVar9) * param_5 + fVar9 +
               local_78 * 0.0 + fVar8 * local_88 + fVar7 * local_98 + fVar6 * local_a8;
    param_1[1] = (fVar3 - fVar2) * param_5 + fVar2 +
                 fStack_74 * 0.0 + fVar8 * fStack_84 + fVar7 * fStack_94 + fVar6 * fStack_a4;
    param_1[2] = (fVar5 - fVar4) * param_5 + fVar4 +
                 fStack_70 * 0.0 + fVar8 * fStack_80 + fVar7 * fStack_90 + fVar6 * fStack_a0;
  }
  else {
    fVar9 = *(float *)(lVar10 + 0x88);
    *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + 0x80);
    param_1[2] = fVar9;
  }
  return param_1;
}



// FUNCTION 142625700 FUN_142625700 body=1177 status=ok
// SIG undefined FUN_142625700(void)

float * FUN_142625700(float *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar4 = FUN_142627a50(param_2,param_3);
  fVar15 = *(float *)(lVar4 + 0x80) - *(float *)(lVar4 + 0x38);
  fVar17 = *(float *)(lVar4 + 0x84) - *(float *)(lVar4 + 0x3c);
  fVar19 = *(float *)(lVar4 + 0x88) - *(float *)(lVar4 + 0x40);
  fVar6 = fVar17 * fVar17 + fVar15 * fVar15 + fVar19 * fVar19;
  fVar16 = fVar15;
  fVar18 = fVar17;
  fVar10 = fVar19;
  if ((fVar6 != 1.0) &&
     (fVar16 = DAT_1468b5d90, fVar18 = DAT_1468b5d94, fVar10 = DAT_1468b5d98, 1e-08 <= fVar6)) {
    auVar12 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar10 = auVar12._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar6 * 0.5 * fVar10 * fVar10);
    fVar10 = fVar10 + fVar10 * (0.5 - fVar6 * 0.5 * fVar10 * fVar10);
    fVar16 = fVar15 * fVar10;
    fVar18 = fVar17 * fVar10;
    fVar10 = fVar19 * fVar10;
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (((((*(byte *)(lVar4 + 0x71b) & 4) == 0) &&
       (cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 == '\0')) && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar5 = 0x930;
  }
  else {
    lVar5 = 0x210;
  }
  pfVar1 = (float *)(lVar5 + lVar4);
  fVar6 = *pfVar1;
  fVar15 = pfVar1[1];
  fVar17 = pfVar1[2];
  fVar19 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 0x20 + lVar4);
  fVar11 = *pfVar1 * 0.0;
  fVar13 = pfVar1[1] * 0.0;
  fVar14 = pfVar1[2] * 1.0;
  fVar7 = fVar14 * fVar15 - fVar13 * fVar17;
  fVar8 = fVar11 * fVar17 - fVar14 * fVar6;
  fVar9 = fVar13 * fVar6 - fVar11 * fVar15;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar11 = (fVar9 * fVar15 - fVar8 * fVar17) + fVar19 * fVar7 + fVar11;
  fVar17 = (fVar7 * fVar17 - fVar9 * fVar6) + fVar19 * fVar8 + fVar13;
  fVar6 = (fVar8 * fVar6 - fVar7 * fVar15) + fVar19 * fVar9 + fVar14;
  fVar9 = fVar17 * fVar10 - fVar6 * fVar18;
  fVar8 = fVar6 * fVar16 - fVar11 * fVar10;
  fVar7 = fVar11 * fVar18 - fVar17 * fVar16;
  fVar19 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
  fVar6 = fVar7;
  fVar15 = fVar8;
  fVar17 = fVar9;
  if ((fVar19 != 1.0) &&
     (fVar6 = DAT_1468b5d98, fVar15 = DAT_1468b5d94, fVar17 = DAT_1468b5d90, 1e-08 <= fVar19)) {
    auVar12 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
    fVar6 = auVar12._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar19 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar19 * 0.5 * fVar6 * fVar6);
    fVar17 = fVar9 * fVar6;
    fVar15 = fVar8 * fVar6;
    fVar6 = fVar7 * fVar6;
  }
  fVar11 = fVar18 * fVar6 - fVar10 * fVar15;
  fVar13 = fVar10 * fVar17 - fVar16 * fVar6;
  fVar14 = fVar16 * fVar15 - fVar18 * fVar17;
  fVar9 = fVar13 * fVar13 + fVar11 * fVar11 + fVar14 * fVar14;
  fVar19 = fVar11;
  fVar7 = fVar13;
  fVar8 = fVar14;
  if ((fVar9 != 1.0) &&
     (fVar19 = DAT_1468b5d90, fVar7 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, 1e-08 <= fVar9)) {
    auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar8 = auVar12._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8);
    fVar19 = fVar8 * fVar11;
    fVar7 = fVar8 * fVar13;
    fVar8 = fVar8 * fVar14;
  }
  *param_1 = fVar16;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[1] = fVar18;
  param_1[2] = fVar10;
  param_1[4] = fVar17;
  param_1[5] = fVar15;
  param_1[6] = fVar6;
  param_1[8] = fVar19;
  param_1[9] = fVar7;
  param_1[10] = fVar8;
  param_1[0xf] = 1.0;
  return param_1;
}



// FUNCTION 142625be0 FUN_142625be0 body=532 status=ok
// SIG undefined FUN_142625be0(void)

void FUN_142625be0(longlong param_1,float *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(lVar1 + 0x50);
  if (0 < *(int *)(lVar2 + 0xc0)) {
    iVar3 = 0;
    lVar6 = 0;
    lVar7 = 0;
    do {
      piVar4 = (int *)(*(longlong *)(lVar2 + 0xb8) + lVar7);
      if ((((piVar4 != (int *)0x0) && (*(int *)(lVar1 + 0x28) < *(int *)(param_1 + 0x178))) &&
          (plVar5 = (longlong *)
                    ((longlong)*(int *)(lVar1 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x170)),
          iVar3 < (int)plVar5[1])) && (*(char *)(lVar6 + *plVar5) == '\0')) {
        if ((float)piVar4[2] < *(float *)(param_1 + 0x13c) ||
            (float)piVar4[2] == *(float *)(param_1 + 0x13c)) {
          if (*param_2 <= 1e-05 && *param_2 != 1e-05) {
            *param_2 = 1e-05;
          }
          iVar8 = *piVar4;
          if (-1 < piVar4[1]) {
            iVar8 = piVar4[1];
            fVar9 = (float)FGenericPlatformMath::SRand();
            fVar9 = fVar9 * (float)(*piVar4 - iVar8);
            iVar8 = ((int)ROUND(fVar9 + fVar9 + 0.5) >> 1) + iVar8;
          }
          fVar9 = (float)FUN_1424116d0(*(longlong *)(lVar1 + 0x50) + 200,
                                       *(undefined4 *)(param_1 + 0x13c),
                                       *(undefined8 *)(param_1 + 0x18),0);
          *param_3 = *param_3 -
                     ((int)ROUND(-0.5 - (fVar9 * (float)iVar8 + fVar9 * (float)iVar8)) >> 1);
          *(undefined1 *)(lVar6 + *plVar5) = 1;
        }
      }
      lVar2 = *(longlong *)(lVar1 + 0x50);
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xc;
    } while (iVar3 < *(int *)(lVar2 + 0xc0));
    return;
  }
  return;
}



// FUNCTION 142625e00 FUN_142625e00 body=93 status=ok
// SIG undefined FUN_142625e00(void)

longlong * FUN_142625e00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x1b0);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x2f0))(plVar2,0x10);
    if (cVar1 != '\0') {
      *(longlong **)(param_1 + 0x1b0) = plVar2;
      return plVar2;
    }
  }
  plVar2 = (longlong *)UMaterial::GetDefaultMaterial(0);
  *(longlong **)(param_1 + 0x1b0) = plVar2;
  return plVar2;
}



// FUNCTION 142625e60 FUN_142625e60 body=4060 status=ok
// SIG undefined FUN_142625e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142625e60(longlong param_1,byte param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  int iVar24;
  uint uVar25;
  DWORD DVar26;
  int iVar27;
  float *pfVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  byte bVar34;
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
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  float local_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  float fStack_290;
  undefined8 uStack_28c;
  float fStack_284;
  undefined1 local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
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
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  uint uStack_1ec;
  float local_1e8;
  uint uStack_1e4;
  float fStack_1e0;
  uint uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
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
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
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
  float fStack_ec;
  undefined1 local_e8 [192];
  
  uVar22 = uRam0000000146b056ec;
  uVar21 = uRam0000000146b056e8;
  uVar20 = uRam0000000146b056e4;
  uVar25 = _DAT_146b056e0;
  fVar50 = fRam0000000146b056dc;
  fVar49 = fRam0000000146b056d8;
  fVar48 = fRam0000000146b056d4;
  fVar47 = _DAT_146b056d0;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (((*(byte *)(lVar3 + 0x2c) & 1) == 0) || ((*(byte *)(param_1 + 0xf0) & 1) == 0)) {
    return (undefined8 *)0x0;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  plVar30 = *(longlong **)(param_1 + 0x1f8);
  fVar43 = *(float *)(lVar4 + 0x210);
  fVar44 = *(float *)(lVar4 + 0x214);
  fVar45 = *(float *)(lVar4 + 0x218);
  fVar46 = *(float *)(lVar4 + 0x21c);
  fVar35 = fVar44 + fVar44;
  fVar36 = fVar45 + fVar45;
  lVar5 = *(longlong *)(lVar4 + 0x6f0);
  fVar41 = (fVar43 + fVar43) * fVar43;
  fVar37 = fVar46 * (fVar43 + fVar43);
  fVar6 = *(float *)(lVar4 + 0x230);
  fVar7 = *(float *)(lVar4 + 0x234);
  fVar8 = *(float *)(lVar4 + 0x238);
  pfVar28 = (float *)&DAT_1464aa7d0;
  uStack_1ec = (uint)((fRam0000000146b056dc - (fVar41 + fVar41)) * *(float *)(lVar4 + 0x23c)) &
               uRam0000000146b056ec;
  local_1f8 = (float)((uint)((_DAT_146b056d0 - (fVar36 * fVar45 + fVar35 * fVar44)) * fVar6) &
                     _DAT_146b056e0);
  fStack_1f4 = (fVar46 * fVar36 + fVar43 * fVar35) * fVar6;
  fStack_1f0 = fVar6 * (fVar43 * fVar36 - fVar46 * fVar35);
  local_1e8 = fVar7 * (fVar43 * fVar35 - fVar46 * fVar36);
  uStack_1e4 = (uint)((fRam0000000146b056d4 - (fVar36 * fVar45 + fVar41)) * fVar7) &
               uRam0000000146b056e4;
  fStack_1e0 = (fVar37 + fVar44 * fVar36) * fVar7;
  uStack_1dc = uStack_1ec;
  local_1d8 = (fVar46 * fVar35 + fVar43 * fVar36) * fVar8;
  fStack_1d4 = fVar8 * (fVar44 * fVar36 - fVar37);
  uStack_1d0 = (uint)((fRam0000000146b056d8 - (fVar35 * fVar44 + fVar41)) * fVar8) &
               uRam0000000146b056e8;
  uStack_1cc = uStack_1ec;
  local_1c8._12_4_ = fRam0000000146b056dc;
  local_1c8._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar4 + 0x220),0);
  bVar34 = *(byte *)(*plVar30 + 100) & 1;
  if ((bVar34 == 0) && ((*(byte *)((longlong)plVar30 + 0x9c) & 1) == 0)) {
    pfVar28 = &local_1f8;
  }
  fVar43 = *pfVar28;
  fVar44 = pfVar28[1];
  fVar45 = pfVar28[2];
  fVar46 = pfVar28[3];
  fVar6 = pfVar28[4];
  fVar7 = pfVar28[5];
  fVar8 = pfVar28[6];
  fVar35 = pfVar28[7];
  fVar36 = pfVar28[8];
  fVar37 = pfVar28[9];
  fVar41 = pfVar28[10];
  fVar9 = pfVar28[0xb];
  fVar10 = pfVar28[0xc];
  fVar11 = pfVar28[0xd];
  fVar12 = pfVar28[0xe];
  fVar13 = pfVar28[0xf];
  local_278 = fVar43;
  fStack_274 = fVar44;
  fStack_270 = fVar45;
  fStack_26c = fVar46;
  local_268 = fVar6;
  fStack_264 = fVar7;
  fStack_260 = fVar8;
  fStack_25c = fVar35;
  local_258 = fVar36;
  fStack_254 = fVar37;
  fStack_250 = fVar41;
  fStack_24c = fVar9;
  local_248 = fVar10;
  fStack_244 = fVar11;
  fStack_240 = fVar12;
  fStack_23c = fVar13;
  FRotationMatrix::FRotationMatrix(SUB168(*(undefined1 (*) [16])(lVar4 + 0x220),8),param_1 + 0x288);
  fVar51 = *(float *)(plVar30 + 8);
  fVar52 = *(float *)((longlong)plVar30 + 0x44);
  fVar53 = *(float *)(plVar30 + 9);
  fVar54 = *(float *)((longlong)plVar30 + 0x4c);
  fVar38 = fVar52 + fVar52;
  fVar40 = fVar53 + fVar53;
  fVar42 = (fVar51 + fVar51) * fVar51;
  fVar39 = (fVar51 + fVar51) * fVar54;
  fVar55 = *(float *)(plVar30 + 0xc);
  fVar56 = *(float *)((longlong)plVar30 + 100);
  fVar57 = *(float *)(plVar30 + 0xd);
  local_138 = *(float *)(plVar30 + 10);
  fStack_134 = *(float *)((longlong)plVar30 + 0x54);
  fStack_130 = *(float *)(plVar30 + 0xb);
  fStack_164 = (fVar40 * fVar54 + fVar38 * fVar51) * fVar55;
  fStack_150 = (fVar39 + fVar40 * fVar52) * fVar56;
  local_148 = (fVar38 * fVar54 + fVar40 * fVar51) * fVar57;
  local_158 = fVar56 * (fVar38 * fVar51 - fVar40 * fVar54);
  fStack_144 = fVar57 * (fVar40 * fVar52 - fVar39);
  fStack_160 = fVar55 * (fVar40 * fVar51 - fVar38 * fVar54);
  fStack_12c = fVar50;
  local_168 = (float)((uint)((fVar47 - (fVar40 * fVar53 + fVar38 * fVar52)) * fVar55) & uVar25);
  fStack_154 = (float)((uint)((fVar48 - (fVar40 * fVar53 + fVar42)) * fVar56) & uVar20);
  fStack_140 = (float)((uint)((fVar49 - (fVar38 * fVar52 + fVar42)) * fVar57) & uVar21);
  fStack_15c = (float)((uint)((fVar50 - (fVar42 + fVar42)) * *(float *)((longlong)plVar30 + 0x6c)) &
                      uVar22);
  local_128 = fStack_1a4 * local_158 + local_1a8 * local_168 + fStack_1a0 * local_148 +
              fStack_19c * local_138;
  fStack_124 = fStack_1a4 * fStack_154 + local_1a8 * fStack_164 + fStack_1a0 * fStack_144 +
               fStack_19c * fStack_134;
  fStack_120 = fStack_1a4 * fStack_150 + local_1a8 * fStack_160 + fStack_1a0 * fStack_140 +
               fStack_19c * fStack_130;
  fStack_11c = fStack_1a4 * fStack_15c + local_1a8 * fStack_15c + fStack_1a0 * fStack_15c +
               fStack_19c * fVar50;
  local_118 = fStack_194 * local_158 + local_198 * local_168 + fStack_190 * local_148 +
              fStack_18c * local_138;
  fStack_114 = fStack_194 * fStack_154 + local_198 * fStack_164 + fStack_190 * fStack_144 +
               fStack_18c * fStack_134;
  fStack_110 = fStack_194 * fStack_150 + local_198 * fStack_160 + fStack_190 * fStack_140 +
               fStack_18c * fStack_130;
  fStack_10c = fStack_194 * fStack_15c + local_198 * fStack_15c + fStack_190 * fStack_15c +
               fStack_18c * fVar50;
  local_108 = fStack_184 * local_158 + local_188 * local_168 + fStack_180 * local_148 +
              fStack_17c * local_138;
  fStack_104 = fStack_184 * fStack_154 + local_188 * fStack_164 + fStack_180 * fStack_144 +
               fStack_17c * fStack_134;
  fStack_100 = fStack_184 * fStack_150 + local_188 * fStack_160 + fStack_180 * fStack_140 +
               fStack_17c * fStack_130;
  fStack_fc = fStack_184 * fStack_15c + local_188 * fStack_15c + fStack_180 * fStack_15c +
              fStack_17c * fVar50;
  local_f8 = fStack_174 * local_158 + local_178 * local_168 + fStack_170 * local_148 +
             fStack_16c * local_138;
  fStack_f4 = fStack_174 * fStack_154 + local_178 * fStack_164 + fStack_170 * fStack_144 +
              fStack_16c * fStack_134;
  fStack_f0 = fStack_174 * fStack_150 + local_178 * fStack_160 + fStack_170 * fStack_140 +
              fStack_16c * fStack_130;
  fStack_ec = fStack_174 * fStack_15c + local_178 * fStack_15c + fStack_170 * fStack_15c +
              fStack_16c * fVar50;
  fVar51 = local_128 * fVar43 + fStack_124 * fVar6 + fStack_120 * fVar36 + fStack_11c * fVar10;
  fVar52 = local_128 * fVar44 + fStack_124 * fVar7 + fStack_120 * fVar37 + fStack_11c * fVar11;
  fVar53 = local_128 * fVar45 + fStack_124 * fVar8 + fStack_120 * fVar41 + fStack_11c * fVar12;
  fVar54 = local_128 * fVar46 + fStack_124 * fVar35 + fStack_120 * fVar9 + fStack_11c * fVar13;
  fVar47 = local_118 * fVar43 + fStack_114 * fVar6 + fStack_110 * fVar36 + fStack_10c * fVar10;
  fVar48 = local_118 * fVar44 + fStack_114 * fVar7 + fStack_110 * fVar37 + fStack_10c * fVar11;
  fVar49 = local_118 * fVar45 + fStack_114 * fVar8 + fStack_110 * fVar41 + fStack_10c * fVar12;
  fVar50 = local_118 * fVar46 + fStack_114 * fVar35 + fStack_110 * fVar9 + fStack_10c * fVar13;
  puVar33 = (undefined8 *)0x0;
  fVar55 = local_108 * fVar43 + fStack_104 * fVar6 + fStack_100 * fVar36 + fStack_fc * fVar10;
  fVar56 = local_108 * fVar44 + fStack_104 * fVar7 + fStack_100 * fVar37 + fStack_fc * fVar11;
  fVar57 = local_108 * fVar45 + fStack_104 * fVar8 + fStack_100 * fVar41 + fStack_fc * fVar12;
  fVar38 = local_108 * fVar46 + fStack_104 * fVar35 + fStack_100 * fVar9 + fStack_fc * fVar13;
  fVar43 = local_f8 * fVar43 + fStack_f4 * fVar6 + fStack_f0 * fVar36 + fStack_ec * fVar10;
  fVar44 = local_f8 * fVar44 + fStack_f4 * fVar7 + fStack_f0 * fVar37 + fStack_ec * fVar11;
  fVar45 = local_f8 * fVar45 + fStack_f4 * fVar8 + fStack_f0 * fVar41 + fStack_ec * fVar12;
  fVar46 = local_f8 * fVar46 + fStack_f4 * fVar35 + fStack_f0 * fVar9 + fStack_ec * fVar13;
  local_238 = fVar51;
  fStack_234 = fVar52;
  fStack_230 = fVar53;
  fStack_22c = fVar54;
  local_228 = fVar47;
  fStack_224 = fVar48;
  fStack_220 = fVar49;
  fStack_21c = fVar50;
  local_218 = fVar55;
  fStack_214 = fVar56;
  fStack_210 = fVar57;
  fStack_20c = fVar38;
  local_208 = fVar43;
  fStack_204 = fVar44;
  fStack_200 = fVar45;
  fStack_1fc = fVar46;
  fStack_14c = fStack_15c;
  fStack_13c = fStack_15c;
  if (DAT_146534418 == 0) {
    puVar29 = (undefined8 *)FMemory::Malloc(400,0);
  }
  else {
    LOCK();
    DAT_146b051ec = DAT_146b051ec + 400;
    UNLOCK();
    LOCK();
    if (DAT_146b051ec == 0) {
      DAT_146b051ec = 0;
    }
    UNLOCK();
    iVar24 = 0;
    LOCK();
    if (DAT_146b05278 != 0) {
      iVar24 = DAT_146b05278;
    }
    UNLOCK();
    DAT_146b05278 = DAT_146b051ec;
    if (DAT_146b051ec <= iVar24) {
      DAT_146b05278 = iVar24;
    }
    LOCK();
    UNLOCK();
    puVar29 = (undefined8 *)FUN_14261cf70(&DAT_146b05680,400);
    fVar47 = local_228;
    fVar48 = fStack_224;
    fVar49 = fStack_220;
    fVar50 = fStack_21c;
    fVar51 = local_238;
    fVar52 = fStack_234;
    fVar53 = fStack_230;
    fVar54 = fStack_22c;
    fVar43 = local_208;
    fVar44 = fStack_204;
    fVar45 = fStack_200;
    fVar46 = fStack_1fc;
    fVar55 = local_218;
    fVar56 = fStack_214;
    fVar57 = fStack_210;
    fVar38 = fStack_20c;
  }
  puVar32 = puVar33;
  if (puVar29 != (undefined8 *)0x0) {
    *(uint *)((longlong)puVar29 + 0xc) = *(uint *)((longlong)puVar29 + 0xc) & 0xfffffffe;
    *(undefined4 *)(puVar29 + 2) = 0xffffffff;
    puVar29[3] = 0;
    *puVar29 = &PTR_FUN_14513af88;
    *(undefined1 *)(puVar29 + 6) = 1;
    puVar29[7] = 0;
    puVar29[8] = 0;
    puVar29[9] = 0;
    puVar29[0xe] = 0;
    puVar29[0xf] = 0;
    puVar29[0x10] = 0;
    puVar29[0x11] = 0;
    *(undefined4 *)(puVar29 + 0x1c) = DAT_1468b5d90;
    *(undefined4 *)((longlong)puVar29 + 0xe4) = DAT_1468b5d94;
    *(undefined4 *)(puVar29 + 0x1d) = DAT_1468b5d98;
    *(undefined4 *)((longlong)puVar29 + 0xec) = 0;
    *(undefined4 *)(puVar29 + 0x1e) = DAT_1468b5d90;
    *(undefined4 *)((longlong)puVar29 + 0xf4) = DAT_1468b5d94;
    *(undefined4 *)(puVar29 + 0x1f) = DAT_1468b5d98;
    *(undefined4 *)((longlong)puVar29 + 0xfc) = 0;
    *(undefined4 *)(puVar29 + 0x20) = 0x3f800000;
    *(undefined8 *)((longlong)puVar29 + 0x104) = 0x3f800000;
    *(undefined8 *)((longlong)puVar29 + 0x10c) = 0;
    *(undefined8 *)((longlong)puVar29 + 0x114) = 0;
    puVar29[0x26] = 0;
    *(undefined4 *)(puVar29 + 0x27) = 0;
    *(undefined8 *)((longlong)puVar29 + 0x13c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar29 + 0x144) = 0;
    *(undefined8 *)((longlong)puVar29 + 0x14c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar29 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar29 + 0x15c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar29 + 0x164) = 0;
    *(undefined8 *)((longlong)puVar29 + 0x16c) = 0x3f800000;
    *(uint *)(puVar29 + 0x2f) = *(uint *)(puVar29 + 0x2f) & 0xfffffff0;
    *(undefined1 *)((longlong)puVar29 + 0x17c) = 0;
    puVar29[0x30] = 0;
    puVar29[0x31] = 0;
    puVar29[4] = 0;
    puVar29[5] = 0;
    puVar32 = puVar29;
  }
  puVar32[7] = *(undefined8 *)(param_1 + 0x1f0);
  puVar32[8] = *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + 0x2b0);
  plVar30 = (longlong *)FUN_142625e00(param_1);
  uVar31 = (**(code **)(*plVar30 + 0x2a8))(plVar30,0,0);
  puVar32[4] = uVar31;
  puVar32[5] = uVar31;
  plVar30 = (longlong *)FUN_142625e00(param_1);
  uVar25 = (**(code **)(*plVar30 + 0x460))(plVar30);
  *(bool *)(puVar32 + 6) = 1 < uVar25;
  puVar32[9] = *(undefined8 *)(param_1 + 0x200);
  if ((*(byte *)(lVar5 + 0x98) & 1) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    local_280 = 1;
    local_2b0 = *(float *)(lVar4 + 0x1d8) - *(float *)(lVar4 + 0x1e4);
    local_298 = CONCAT44(*(float *)(lVar4 + 0x1d4) - *(float *)(lVar4 + 0x1e0),
                         *(float *)(lVar4 + 0x1d0) - *(float *)(lVar4 + 0x1dc));
    fStack_290 = local_2b0;
    fStack_284 = *(float *)(lVar4 + 0x1d8) + *(float *)(lVar4 + 0x1e4);
    puVar29 = &local_298;
    uStack_28c = CONCAT44(*(float *)(lVar4 + 0x1d4) + *(float *)(lVar4 + 0x1e0),
                          *(float *)(lVar4 + 0x1d0) + *(float *)(lVar4 + 0x1dc));
  }
  else {
    puVar29 = (undefined8 *)FBox::TransformBy(lVar5 + 0x9c,local_e8,&local_1f8);
  }
  uVar31 = puVar29[1];
  puVar32[10] = *puVar29;
  puVar32[0xb] = uVar31;
  puVar32[0xc] = puVar29[2];
  uVar2 = *(undefined4 *)(puVar29 + 3);
  *(float *)(puVar32 + 0x12) = fVar51;
  *(float *)((longlong)puVar32 + 0x94) = fVar52;
  *(float *)(puVar32 + 0x13) = fVar53;
  *(float *)((longlong)puVar32 + 0x9c) = fVar54;
  *(undefined4 *)(puVar32 + 0xd) = uVar2;
  *(float *)(puVar32 + 0x14) = fVar47;
  *(float *)((longlong)puVar32 + 0xa4) = fVar48;
  *(float *)(puVar32 + 0x15) = fVar49;
  *(float *)((longlong)puVar32 + 0xac) = fVar50;
  *(float *)(puVar32 + 0x16) = fVar55;
  *(float *)((longlong)puVar32 + 0xb4) = fVar56;
  *(float *)(puVar32 + 0x17) = fVar57;
  *(float *)((longlong)puVar32 + 0xbc) = fVar38;
  *(float *)(puVar32 + 0x18) = fVar43;
  *(float *)((longlong)puVar32 + 0xc4) = fVar44;
  *(float *)(puVar32 + 0x19) = fVar45;
  *(float *)((longlong)puVar32 + 0xcc) = fVar46;
  *(undefined4 *)(puVar32 + 0x1a) = *(undefined4 *)(*(longlong *)(param_1 + 0x1f8) + 0x94);
  *(undefined4 *)((longlong)puVar32 + 0xd4) = *(undefined4 *)(*(longlong *)(param_1 + 0x1f8) + 0x98)
  ;
  *(uint *)(puVar32 + 0x2f) =
       *(uint *)(puVar32 + 0x2f) ^
       (*(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x9c) >> 1 ^ *(uint *)(puVar32 + 0x2f)) & 1;
  uVar25 = (*(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x9c) >> 1 ^ *(uint *)(puVar32 + 0x2f)) & 2 ^
           *(uint *)(puVar32 + 0x2f);
  *(uint *)(puVar32 + 0x2f) = uVar25;
  uVar25 = (*(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x9c) >> 1 ^ uVar25) & 4 ^ uVar25;
  *(uint *)(puVar32 + 0x2f) = uVar25;
  *(uint *)(puVar32 + 0x2f) =
       (*(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x9c) >> 1 ^ uVar25) & 8 ^ uVar25;
  bVar1 = *(byte *)(**(longlong **)(param_1 + 0x1f8) + 0x68);
  *(uint *)((longlong)puVar32 + 0xc) = *(uint *)((longlong)puVar32 + 0xc) & 0xfffffffe;
  *(uint *)(puVar32 + 0x2e) = (uint)bVar1;
  *(uint *)((longlong)puVar32 + 0xc) = *(uint *)((longlong)puVar32 + 0xc) | (uint)param_2;
  *(byte *)((longlong)puVar32 + 0x174) = *(byte *)(**(longlong **)(param_1 + 0x1f8) + 100) & 1;
  uVar31 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x230);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x1f8) + 0x188);
  if ((bVar1 < 2) || (bVar1 == 6)) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  local_2f8 = (undefined4)uVar31;
  *(undefined4 *)(puVar32 + 0x24) = local_2f8;
  if (!bVar19) {
    uStack_2f4 = (undefined4)((ulonglong)uVar31 >> 0x20);
    local_2f8 = uStack_2f4;
  }
  *(undefined4 *)((longlong)puVar32 + 0x124) = local_2f8;
  cVar23 = *(char *)(*(longlong *)(param_1 + 0x1f8) + 0x189);
  puVar32[0x26] = 0;
  puVar32[0x27] = 0;
  puVar32[0x28] = 0;
  puVar32[0x29] = 0;
  if (cVar23 != '\0') {
    pfVar28 = &local_278;
    if (bVar34 == 0) {
      pfVar28 = (float *)&DAT_1464aa7d0;
    }
    FUN_142660b40(cVar23,pfVar28,&local_2c8,&local_2d8);
    *(undefined4 *)(puVar32 + 0x26) = local_2d8;
    *(undefined4 *)((longlong)puVar32 + 0x134) = local_2d4;
    *(undefined4 *)(puVar32 + 0x27) = local_2d0;
    *(undefined4 *)((longlong)puVar32 + 0x13c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar32 + 0x13c) = 0x3f800000;
    *(undefined4 *)(puVar32 + 0x28) = local_2c8;
    *(undefined4 *)((longlong)puVar32 + 0x144) = local_2c4;
    *(undefined4 *)(puVar32 + 0x29) = local_2c0;
    *(undefined4 *)((longlong)puVar32 + 0x14c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar32 + 0x14c) = 0x3f800000;
  }
  fVar47 = 1.0;
  fVar48 = 1.0;
  fVar49 = 1.0;
  cVar23 = FRawDistributionVector::IsCreated(*(longlong *)(param_1 + 0x1f8) + 0x228);
  if (cVar23 != '\0') {
    pfVar28 = (float *)FUN_1424118e0(*(longlong *)(param_1 + 0x1f8) + 0x228,local_1b8,0,
                                     *(undefined8 *)(param_1 + 0x18),0,0);
    fVar47 = *pfVar28;
    fVar48 = pfVar28[1];
    fVar49 = pfVar28[2];
  }
  fVar50 = 1.0;
  cVar23 = FRawDistributionFloat::IsCreated(*(longlong *)(param_1 + 0x1f8) + 0x278);
  if (cVar23 != '\0') {
    fVar50 = (float)FUN_1424116d0(*(longlong *)(param_1 + 0x1f8) + 0x278,0,
                                  *(undefined8 *)(param_1 + 0x18),0);
  }
  fVar43 = 1.0;
  fVar44 = 1.0;
  fVar45 = 1.0;
  cVar23 = FRawDistributionVector::IsCreated(*(longlong *)(param_1 + 0x1f8) + 0x1a0);
  if (cVar23 != '\0') {
    pfVar28 = (float *)FUN_1424118e0(*(longlong *)(param_1 + 0x1f8) + 0x1a0,local_2a8,0,
                                     *(undefined8 *)(param_1 + 0x18),0,0);
    fVar43 = *pfVar28;
    fVar44 = pfVar28[1];
    fVar45 = pfVar28[2];
  }
  fVar46 = 1.0;
  cVar23 = FRawDistributionFloat::IsCreated(*(longlong *)(param_1 + 0x1f8) + 0x1f0);
  if (cVar23 != '\0') {
    fVar46 = (float)FUN_1424116d0(*(longlong *)(param_1 + 0x1f8) + 0x1f0,0,
                                  *(undefined8 *)(param_1 + 0x18),0);
  }
  *(float *)(puVar32 + 0x2a) = fVar47 * fVar43;
  *(float *)((longlong)puVar32 + 0x154) = fVar44 * fVar48;
  *(float *)(puVar32 + 0x2b) = fVar45 * fVar49;
  *(float *)((longlong)puVar32 + 0x15c) = fVar50 * fVar46;
  *(byte *)((longlong)puVar32 + 0x17c) = *(byte *)(*(longlong *)(lVar3 + 0x30) + 0xf4) & 1;
  *(undefined4 *)(puVar32 + 0x30) = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0x104);
  lVar3 = *(longlong *)(lVar3 + 0x30);
  *(undefined8 *)((longlong)puVar32 + 0x184) = *(undefined8 *)(lVar3 + 0xf8);
  *(undefined4 *)((longlong)puVar32 + 0x18c) = *(undefined4 *)(lVar3 + 0x100);
  *(undefined4 *)(puVar32 + 0x25) = *(undefined4 *)(param_1 + 0x2b4);
  if (((DAT_146b047d0 != 0) || (DAT_146b047d4 != 0)) ||
     (cVar23 = RHISupportsGPUParticles(), lVar3 = DAT_146b057b0, cVar23 == '\0'))
  goto LAB_142626d7b;
  cVar23 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar23 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar26 = GetCurrentThreadId();
    puVar29 = (undefined8 *)&DAT_00000004;
    if (DVar26 == DAT_1468c21c0) goto LAB_142626a3f;
  }
  else {
LAB_142626a3f:
    puVar29 = puVar33;
  }
  lVar4 = DAT_146b057c8;
  fVar47 = *(float *)((longlong)puVar29 + lVar3);
  cVar23 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar23 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar26 = GetCurrentThreadId();
    puVar29 = (undefined8 *)&DAT_00000004;
    if (DVar26 == DAT_1468c21c0) goto LAB_142626a7e;
  }
  else {
LAB_142626a7e:
    puVar29 = puVar33;
  }
  lVar3 = DAT_146b057e0;
  fVar48 = *(float *)((longlong)puVar29 + lVar4);
  cVar23 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar23 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar26 = GetCurrentThreadId(), puVar29 = (undefined8 *)&DAT_00000004, DVar26 == DAT_1468c21c0)
     ) {
    puVar29 = puVar33;
  }
  iVar24 = *(int *)((longlong)puVar29 + lVar3);
  *(float *)(puVar32 + 0x21) = fVar47;
  *(undefined4 *)((longlong)puVar32 + 0x10c) = 0;
  *(float *)(puVar32 + 0x22) = *(float *)(param_1 + 0x298) + *(float *)(param_1 + 0x29c);
  *(undefined4 *)((longlong)puVar32 + 0x114) = 1;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  if (0.0 < fVar47) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0x1dc) & 8) == 0) {
      uVar2 = *(undefined4 *)(puVar32 + 0x21);
      *(undefined4 *)(puVar32 + 0x21) = *(undefined4 *)(puVar32 + 0x22);
      *(undefined4 *)(puVar32 + 0x22) = uVar2;
      uVar2 = *(undefined4 *)((longlong)puVar32 + 0x10c);
      *(undefined4 *)((longlong)puVar32 + 0x10c) = *(undefined4 *)((longlong)puVar32 + 0x114);
      *(undefined4 *)((longlong)puVar32 + 0x114) = uVar2;
    }
    else {
      fVar49 = (1.0 / fVar47) * *(float *)(puVar32 + 0x22);
      iVar27 = (int)ROUND((fVar49 + fVar49) - 0.5) >> 1;
      *(int *)((longlong)puVar32 + 0x10c) = iVar27;
      fVar43 = *(float *)(puVar32 + 0x22) - (float)iVar27 * fVar47;
      *(float *)(puVar32 + 0x22) = fVar43;
      iVar27 = *(int *)((longlong)puVar32 + 0x10c);
      fVar49 = fVar43 * (1.0 / fVar47);
      fVar50 = (float)iVar27 * fVar47;
      if ((iVar27 < 1) || (fVar48 <= fVar49)) {
        if (1.0 - fVar49 < fVar48) {
          fVar50 = fVar50 + fVar43;
          *(int *)((longlong)puVar32 + 0x10c) = iVar27 + 1;
          puVar32[0x22] = 0;
          goto LAB_142626bfe;
        }
        if (0 < iVar27) {
          fVar50 = fVar50 + fVar48 * fVar47;
          *(float *)(puVar32 + 0x22) = fVar43 - fVar48 * fVar47;
          goto LAB_142626bfe;
        }
      }
      else {
        fVar50 = fVar50 + fVar43;
        puVar32[0x22] = 0;
LAB_142626bfe:
        iVar27 = *(int *)((longlong)puVar32 + 0x10c);
        if (0 < iVar27) {
          if (iVar27 <= iVar24) {
            iVar24 = iVar27;
          }
          *(int *)((longlong)puVar32 + 0x10c) = iVar24;
          *(float *)(puVar32 + 0x21) = fVar50 / (float)iVar24;
        }
      }
      *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(puVar32 + 0x22);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x1f8);
  puVar33 = puVar32 + 0x10;
  fVar47 = *(float *)(lVar3 + 0x14c);
  fVar48 = *(float *)(lVar3 + 0x150);
  fVar49 = *(float *)(lVar3 + 0x154);
  uVar2 = *(undefined4 *)(lVar3 + 0x158);
  *(float *)(puVar32 + 0x1c) =
       local_248 * 1.0 + fVar49 * local_258 + fVar47 * local_278 + fVar48 * local_268;
  *(float *)((longlong)puVar32 + 0xe4) =
       fStack_244 * 1.0 + fVar49 * fStack_254 + fVar47 * fStack_274 + fVar48 * fStack_264;
  *(float *)(puVar32 + 0x1d) =
       fStack_240 * 1.0 + fVar49 * fStack_250 + fVar47 * fStack_270 + fVar48 * fStack_260;
  *(undefined4 *)((longlong)puVar32 + 0xec) = uVar2;
  uVar14 = *(undefined4 *)(param_1 + 0x1b8);
  uVar15 = *(undefined4 *)(param_1 + 0x1bc);
  uVar16 = *(undefined4 *)(param_1 + 0x1c0);
  uVar2 = *(undefined4 *)(param_1 + 0x294);
  puVar32[0x20] = puVar32[0x24];
  *(undefined4 *)(puVar32 + 0x1e) = uVar14;
  *(undefined4 *)((longlong)puVar32 + 0xf4) = uVar15;
  *(undefined4 *)(puVar32 + 0x1f) = uVar16;
  *(undefined4 *)((longlong)puVar32 + 0xfc) = uVar2;
  *(undefined4 *)(puVar32 + 0x23) = *(undefined4 *)(param_1 + 0x298);
  puVar29 = (undefined8 *)(param_1 + 0x248);
  if (puVar33 != puVar29) {
    uVar31 = *(undefined8 *)(param_1 + 0x250);
    uVar17 = *puVar33;
    uVar18 = puVar32[0x11];
    *puVar33 = *puVar29;
    puVar32[0x11] = uVar31;
    *puVar29 = uVar17;
    *(undefined8 *)(param_1 + 0x250) = uVar18;
  }
  puVar29 = (undefined8 *)(param_1 + 600);
  puVar33 = puVar32 + 0xe;
  if (puVar33 != puVar29) {
    uVar31 = *(undefined8 *)(param_1 + 0x260);
    uVar17 = *puVar33;
    uVar18 = puVar32[0xf];
    *puVar33 = *puVar29;
    puVar32[0xf] = uVar31;
    *puVar29 = uVar17;
    *(undefined8 *)(param_1 + 0x260) = uVar18;
  }
LAB_142626d7b:
  *(undefined4 *)(param_1 + 0x260) = 0;
  if ((*(int *)(param_1 + 0x264) < 0) && (*(int *)(param_1 + 0x264) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 600,0);
  }
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(ulonglong *)(param_1 + 0x1b8) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(undefined4 *)(param_1 + 0x1c0) = DAT_1468b5d98;
  if (*(char *)(*(longlong *)(param_1 + 0x200) + 0x250) != '\0') {
    FUN_14262aac0(*(longlong *)(param_1 + 0x200),param_1 + 0x208,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + 0x2b0));
  }
  return puVar32;
}



// FUNCTION 142626e40 FUN_142626e40 body=343 status=ok
// SIG undefined FUN_142626e40(void)

undefined8 * FUN_142626e40(longlong *param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = param_1[5];
  cVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar1);
  if (((cVar2 != '\0') && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1[0x3e] + 0x40) + (longlong)param_4 * 8) != 0)) {
    puVar5 = (undefined8 *)0x0;
    if (DAT_146534418 == 0) {
      lVar4 = FMemory::Malloc(400,0);
    }
    else {
      LOCK();
      DAT_146b051ec = DAT_146b051ec + 400;
      UNLOCK();
      LOCK();
      if (DAT_146b051ec == 0) {
        DAT_146b051ec = 0;
      }
      UNLOCK();
      iVar3 = 0;
      LOCK();
      if (DAT_146b05278 != 0) {
        iVar3 = DAT_146b05278;
      }
      UNLOCK();
      DAT_146b05278 = DAT_146b051ec;
      if (DAT_146b051ec <= iVar3) {
        DAT_146b05278 = iVar3;
      }
      LOCK();
      UNLOCK();
      lVar4 = FUN_14261cf70(&DAT_146b05680,400);
    }
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_142659270(lVar4,*(undefined8 *)(lVar1 + 0x30));
    }
    cVar2 = (**(code **)(*param_1 + 0x238))(param_1,puVar5 + 7);
    if (cVar2 != '\0') {
      lVar1 = param_1[0x3e];
      FUN_142673bc0(puVar5,param_2,param_1,
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + (longlong)param_4 * 8),
                    *(undefined1 *)(lVar1 + 0x51),*(undefined4 *)(lVar1 + 0x54),param_3,param_4);
      return puVar5;
    }
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142626fa0 FUN_142626fa0 body=465 status=ok
// SIG undefined FUN_142626fa0(void)

undefined8 * FUN_142626fa0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x118))(param_1,param_1[5]);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) {
    puVar4 = (undefined8 *)0x0;
    if (DAT_146534418 == 0) {
      puVar3 = (undefined8 *)FMemory::Malloc(0x1b0,0);
    }
    else {
      LOCK();
      DAT_146b051ec = DAT_146b051ec + 0x1b0;
      UNLOCK();
      LOCK();
      if (DAT_146b051ec == 0) {
        DAT_146b051ec = 0;
      }
      UNLOCK();
      iVar2 = 0;
      LOCK();
      if (DAT_146b05278 != 0) {
        iVar2 = DAT_146b05278;
      }
      UNLOCK();
      DAT_146b05278 = DAT_146b051ec;
      if (DAT_146b051ec <= iVar2) {
        DAT_146b05278 = iVar2;
      }
      LOCK();
      UNLOCK();
      puVar3 = (undefined8 *)FUN_14261d1d0(&DAT_146b056a0,0x1b0);
    }
    if (puVar3 != (undefined8 *)0x0) {
      *(uint *)((longlong)puVar3 + 0xc) = *(uint *)((longlong)puVar3 + 0xc) & 0xfffffffe;
      *(uint *)(puVar3 + 6) = *(uint *)(puVar3 + 6) & 0xfffffffe;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *puVar3 = &PTR__scalar_deleting_destructor__1451319d8;
      FUN_142619420(puVar3 + 7);
      puVar3[7] = &PTR__scalar_deleting_destructor__1451319c8;
      puVar3[0x22] = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x11c) = 0x3f800000;
      *(undefined8 *)((longlong)puVar3 + 0x124) = 0;
      *(undefined8 *)((longlong)puVar3 + 300) = 0x3f800000;
      *(undefined8 *)((longlong)puVar3 + 0x134) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x13c) = 0x3f800000;
      *(undefined8 *)((longlong)puVar3 + 0x144) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x14c) = 0x3f800000;
      *(undefined8 *)((longlong)puVar3 + 0x154) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x15c) = 0x3f800000;
      *(undefined8 *)((longlong)puVar3 + 0x164) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x16c) = 0x3f800000;
      puVar3[0x30] = 0;
      *(undefined4 *)(puVar3 + 0x31) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x18c) = 0x3f800000;
      puVar4 = puVar3;
    }
    cVar1 = (**(code **)(*param_1 + 0x238))(param_1,puVar4 + 7);
    if (cVar1 != '\0') {
      FUN_142674020(puVar4,param_2);
      return puVar4;
    }
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1426271a0 FUN_1426271a0 body=1526 status=ok
// SIG undefined FUN_1426271a0(void)

void FUN_1426271a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,longlong *param_6,longlong param_7)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 local_68 [4];
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined *local_38;
  undefined1 *puStack_30;
  undefined8 *local_28;
  undefined4 local_20;
  
  iVar9 = FSceneViewFamily::GetFeatureLevel(param_4);
  if (((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
      (((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
       ((DAT_1464c9c12 != '\0' &&
        ((DAT_1464c9c6c != '\0' && (*(int *)(*(longlong *)(param_1 + 0x48) + 0x240) != -1)))))))) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x48) + 0x230))) {
    (**(code **)(**(longlong **)(param_4 + 0x20) + 0x2d8))(*(longlong **)(param_4 + 0x20),&local_28)
    ;
    uVar7 = *(undefined8 *)(param_1 + 0x128);
    *local_28 = *(undefined8 *)(param_1 + 0x120);
    local_28[1] = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x138);
    local_28[2] = *(undefined8 *)(param_1 + 0x130);
    local_28[3] = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x148);
    local_28[4] = *(undefined8 *)(param_1 + 0x140);
    local_28[5] = uVar7;
    uVar4 = *(undefined4 *)(param_1 + 0x154);
    uVar5 = *(undefined4 *)(param_1 + 0x158);
    uVar6 = *(undefined4 *)(param_1 + 0x15c);
    *(undefined4 *)(local_28 + 6) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)((longlong)local_28 + 0x34) = uVar4;
    *(undefined4 *)(local_28 + 7) = uVar5;
    *(undefined4 *)((longlong)local_28 + 0x3c) = uVar6;
    uVar4 = *(undefined4 *)(param_1 + 0x164);
    uVar5 = *(undefined4 *)(param_1 + 0x168);
    uVar6 = *(undefined4 *)(param_1 + 0x16c);
    *(undefined4 *)(local_28 + 8) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)((longlong)local_28 + 0x44) = uVar4;
    *(undefined4 *)(local_28 + 9) = uVar5;
    *(undefined4 *)((longlong)local_28 + 0x4c) = uVar6;
    FUN_142671de0(param_2,param_3,&local_60,&local_58);
    local_28[8] = CONCAT44(local_5c,local_60);
    local_28[9] = CONCAT44(local_54,local_58);
    *(uint *)((longlong)local_28 + 0xc) = (uint)*(byte *)(param_1 + 0x174);
    if (((DAT_1465342f8 == 0) || (iVar9 != 3)) || (*(char *)(param_1 + 0x30) == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    local_68[0] = 0;
    local_48 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x78);
    puStack_30 = local_68;
    local_38 = &DAT_14060d670;
    lVar12 = FUN_1415d8310(&local_38,&DAT_146216a38);
    puVar17 = (undefined8 *)(*(longlong *)(lVar12 + 0x18) + 0xfU & 0xfffffffffffffff0);
    puVar1 = (ulonglong *)(lVar12 + 0x18);
    puVar13 = puVar17 + 2;
    if (*(undefined8 **)(lVar12 + 0x20) < puVar13) {
      FMemStackBase::AllocateNewChunk(puVar1,0x20);
      puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar13 = puVar17 + 2;
    }
    *puVar1 = (ulonglong)puVar13;
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[1] = 0;
      *puVar17 = &PTR_FUN_1445515c0;
    }
    iVar9 = (int)param_6[0x1a];
    *(int *)(param_6 + 0x1a) = iVar9 + 1;
    if (*(int *)((longlong)param_6 + 0xd4) < iVar9 + 1) {
      FUN_140822430(param_6 + 0x19,iVar9);
    }
    *(undefined8 **)(param_6[0x19] + (longlong)iVar9 * 8) = puVar17;
    puVar17[1] = param_7;
    if ((bVar8) && (*(int *)(param_1 + 0x170) == 2)) {
      lVar12 = *(longlong *)(param_1 + 0x38);
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar3 = *(longlong *)(lVar12 + 0x78);
      iVar9 = *(int *)(lVar3 + 0x240);
      *(int *)(lVar3 + 0x240) = *(int *)(lVar2 + 0x230) + iVar9;
      lVar12 = *(longlong *)(lVar12 + 0x78);
      iVar10 = *(int *)(lVar12 + 0x238);
      *(int *)(lVar12 + 0x238) = iVar10 + 1;
      if (*(int *)(lVar12 + 0x23c) < iVar10 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar12 + 0x230,iVar10);
      }
      puVar13 = (undefined8 *)(*(longlong *)(lVar12 + 0x230) + (longlong)iVar10 * 0x18);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
      }
      *puVar13 = *(undefined8 *)(lVar2 + 0x228);
      puVar13[1] = *(undefined8 *)(param_3 + 0x8dc);
      *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(param_3 + 0x8e4);
      *(undefined4 *)((longlong)puVar13 + 0x14) = *(undefined4 *)(lVar2 + 0x230);
      lVar12 = local_48 + 0x130;
    }
    else {
      iVar9 = 0;
      lVar12 = *(longlong *)(param_1 + 0x48) + 0x1f0;
    }
    *(longlong *)(param_7 + 0x690) = lVar12;
    *(int *)(param_7 + 0x698) = iVar9;
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x230);
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x78);
    uVar14 = (longlong)*(int *)(lVar12 + 0x228) ^ 1;
    if (*(float *)(DAT_146b057b0 + 4) <= 0.0) {
      uVar14 = (longlong)*(int *)(lVar12 + 0x228);
    }
    *(undefined8 *)(param_7 + 0x680) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30);
    *(undefined4 *)(param_7 + 0x688) = local_20;
    *(undefined8 *)(param_7 + 0x6a0) = *(undefined8 *)(uVar14 * 0x58 + 0x38 + lVar12);
    *(undefined8 *)(param_7 + 0x6a8) = *(undefined8 *)(uVar14 * 0x58 + 0x48 + lVar12);
    *(undefined8 *)(param_7 + 0x6b0) = *(undefined8 *)(lVar12 + 0xe8);
    iVar10 = FUN_1408bed80(param_6,1);
    local_48 = 0x2000000000;
    plVar18 = (longlong *)
              ((ulonglong)(uint)(iVar10 % 0x59) * 0xb8 +
              *(longlong *)(*param_6 + (longlong)(iVar10 / 0x59) * 8));
    plVar19 = (longlong *)plVar18[0xf];
    if ((longlong *)plVar18[0xf] == (longlong *)0x0) {
      plVar19 = plVar18;
    }
    plVar19[2] = (longlong)&PTR_PTR_146534640;
    *(int *)(plVar19 + 8) = (int)(iVar9 + (iVar9 >> 0x1f & 0xfU)) >> 4;
    local_64 = (int)plVar19[7];
    *(int *)(plVar19 + 7) = local_64 + 1;
    if (*(int *)((longlong)plVar19 + 0x3c) < local_64 + 1) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(plVar19 + 5);
    }
    plVar16 = (longlong *)plVar19[6];
    if ((longlong *)plVar19[6] == (longlong *)0x0) {
      plVar16 = plVar19 + 5;
    }
    plVar16[local_64] = local_48;
    *(undefined1 *)((longlong)plVar19 + 0x67) = 1;
    plVar18[0x14] = param_7;
    plVar18[0x13] = 0;
    *plVar19 = param_2 + 0x188;
    *(undefined4 *)(plVar19 + 9) = 0;
    *(undefined4 *)((longlong)plVar19 + 0x4c) = 3;
    uVar11 = ((uint)*(byte *)(param_2 + 0x18) << 3 ^ *(uint *)((longlong)plVar18 + 0x8c)) & 8 ^
             *(uint *)((longlong)plVar18 + 0x8c);
    *(uint *)((longlong)plVar18 + 0x8c) = uVar11;
    uVar11 = ((uint)*(byte *)(param_2 + 0x3b8) << 5 ^ uVar11) & 0x20 ^ uVar11;
    *(uint *)((longlong)plVar18 + 0x8c) = uVar11;
    uVar15 = *(uint *)(param_2 + 0x18);
    if ((uVar15 >> 0xb & 1) != 0) {
      plVar19 = *(longlong **)(param_2 + 0x120);
      for (plVar16 = plVar19; plVar16 != plVar19 + *(int *)(param_2 + 0x128); plVar16 = plVar16 + 1)
      {
        if (*plVar16 == *(longlong *)(param_3 + 0x350)) {
          if ((int)((longlong)plVar16 - (longlong)plVar19 >> 3) != -1) {
            uVar15 = uVar15 >> 0x10;
            goto LAB_1426276d5;
          }
          break;
        }
      }
    }
    uVar15 = uVar15 >> 0xd;
LAB_1426276d5:
    uVar11 = ((uVar15 & 0xff) << 0x12 ^ uVar11) & 0x1c0000 ^ uVar11;
    *(uint *)((longlong)plVar18 + 0x8c) = uVar11;
    plVar18[0x15] = *(longlong *)(param_1 + 0x20 + (ulonglong)(*(byte *)(param_1 + 0xc) & 1) * 8);
    *(uint *)((longlong)plVar18 + 0x8c) = uVar11 & 0xfffc0fff | 0x200000;
    uVar15 = -(uint)((*(uint *)(param_2 + 0x18) & 0x300) != 0) & 0x400000 |
             uVar11 & 0xffbc0fff | 0x200000;
    *(uint *)((longlong)plVar18 + 0x8c) = uVar15;
    *(uint *)((longlong)plVar18 + 0x8c) =
         (*(uint *)(param_2 + 0x1c) >> 0x11 ^ uVar15) & 0x200 ^ uVar15;
    FUN_142747330(param_6,param_5,plVar18);
  }
  return;
}



// FUNCTION 1426277b0 FUN_1426277b0 body=555 status=ok
// SIG undefined FUN_1426277b0(void)

void FUN_1426277b0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,int param_6)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if ((lVar1 != 0) && (param_6 < *(int *)(lVar1 + 0x48))) {
    lVar1 = *(longlong *)((longlong)param_6 * 8 + *(longlong *)(lVar1 + 0x40));
    if (lVar1 != 0) {
      iVar9 = 0;
      lVar1 = *(longlong *)**(undefined8 **)(lVar1 + 0x38);
      if (0 < *(int *)(lVar1 + 0x480)) {
        lVar8 = 0;
        local_res8 = 0;
        do {
          if ((*(int *)(param_1 + 0x218) <= iVar9) ||
             (lVar7 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x210)), lVar7 == 0)) {
            iVar6 = 0;
            if (0 < *(int *)(param_3 + 0x40)) {
              lVar7 = 0;
              do {
                lVar5 = *(longlong *)(lVar7 + *(longlong *)(param_3 + 0x38));
                if (lVar5 != 0) {
                  lVar4 = FUN_1429cc280();
                  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (((bVar2) && ((*(byte *)(lVar5 + 0x28) & 0x80) != 0)) &&
                     (iVar9 < *(int *)(lVar5 + 0x40))) {
                    lVar7 = *(longlong *)(lVar8 + *(longlong *)(lVar5 + 0x38));
                    if (lVar7 != 0) goto LAB_142627938;
                    break;
                  }
                }
                iVar6 = iVar6 + 1;
                lVar7 = lVar7 + 8;
              } while (iVar6 < *(int *)(param_3 + 0x40));
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x60) & 1) == 0) ||
               ((lVar7 = *(longlong *)(param_1 + 0x1b0), lVar7 == 0 &&
                (lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x30) + 0x38), lVar7 == 0)))) {
              lVar7 = UStaticMesh::GetMaterial
                                (*(undefined8 *)
                                  ((longlong)param_6 * 8 +
                                  *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x40)),
                                 *(undefined4 *)(local_res8 + *(longlong *)(lVar1 + 0x478)));
            }
          }
LAB_142627938:
          cVar3 = FUN_142859470(lVar7,0,param_4);
          if ((cVar3 != '\0') || (lVar7 == 0)) {
            lVar7 = UMaterial::GetDefaultMaterial();
          }
          iVar6 = *(int *)(param_2 + 0x18);
          *(int *)(param_2 + 0x18) = iVar6 + 1;
          if (*(int *)(param_2 + 0x1c) < iVar6 + 1) {
            TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
            ::ResizeGrow(param_2,iVar6);
          }
          lVar5 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar5 = param_2;
          }
          local_res8 = local_res8 + 0x18;
          iVar9 = iVar9 + 1;
          lVar8 = lVar8 + 8;
          *(longlong *)(lVar5 + (longlong)iVar6 * 8) = lVar7;
        } while (iVar9 < *(int *)(lVar1 + 0x480));
      }
    }
  }
  return;
}



// FUNCTION 1426279f0 FUN_1426279f0 body=96 status=ok
// SIG undefined FUN_1426279f0(void)

undefined4 FUN_1426279f0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0xb8,local_res8);
  puVar3 = (undefined4 *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (undefined4 *)(*(longlong *)(lVar1 + 0xb8) + (longlong)local_res8[0] * 0x18);
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar2;
}



// FUNCTION 142627a50 FUN_142627a50 body=120 status=ok
// SIG undefined FUN_142627a50(void)

longlong FUN_142627a50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 0x108,local_res8);
    puVar4 = (uint *)0x0;
    if (local_res8[0] != -1) {
      puVar4 = (uint *)(*(longlong *)(lVar2 + 0x108) + (longlong)local_res8[0] * 0x18);
    }
    puVar3 = puVar4 + 2;
    if (puVar4 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    if (puVar3 != (uint *)0x0) {
      return (ulonglong)*puVar3 + lVar1;
    }
  }
  return 0;
}



// FUNCTION 142627ad0 FUN_142627ad0 body=155 status=ok
// SIG undefined FUN_142627ad0(void)

undefined4 FUN_142627ad0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_res8 [8];
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(*(longlong *)(**(longlong **)(lVar2 + 0x40) + 0x90) + -8 + (longlong)iVar1 * 8)
      != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 0xb8,local_res8);
    puVar4 = (undefined4 *)0x0;
    if (local_res8[0] != -1) {
      puVar4 = (undefined4 *)(*(longlong *)(lVar2 + 0xb8) + (longlong)local_res8[0] * 0x18);
    }
    puVar3 = puVar4 + 2;
    if (puVar4 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      return *puVar3;
    }
  }
  return 0xffffffff;
}



// FUNCTION 142627bd0 GetParticleLocationWithOrbitOffset body=118 status=ok
// SIG undefined GetParticleLocationWithOrbitOffset(void)

float * FParticleEmitterInstance::GetParticleLocationWithOrbitOffset
                  (undefined8 param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = FUN_142627ad0();
  if (iVar5 == -1) {
    fVar4 = *(float *)(param_3 + 0x18);
    *(undefined8 *)param_2 = *(undefined8 *)(param_3 + 0x10);
    param_2[2] = fVar4;
    return param_2;
  }
  lVar6 = (longlong)iVar5;
  fVar4 = *(float *)(lVar6 + 0x10 + param_3);
  fVar1 = *(float *)(param_3 + 0x14);
  *param_2 = *(float *)(lVar6 + 0xc + param_3) + *(float *)(param_3 + 0x10);
  fVar2 = *(float *)(lVar6 + 0x14 + param_3);
  fVar3 = *(float *)(param_3 + 0x18);
  param_2[1] = fVar4 + fVar1;
  param_2[2] = fVar2 + fVar3;
  return param_2;
}



// FUNCTION 142627c50 FUN_142627c50 body=186 status=ok
// SIG undefined FUN_142627c50(void)

/* WARNING: Removing unreachable block (ram,0x000142627cf0) */

void FUN_142627c50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x38) == '\x04') {
    puVar3 = (undefined8 *)FName::ToString(param_1 + 0x40,local_18);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"BeamSource : Actor: %s\n",puVar4);
    lVar1 = param_2[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_2);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142627d10 FUN_142627d10 body=186 status=ok
// SIG undefined FUN_142627d10(void)

/* WARNING: Removing unreachable block (ram,0x000142627db0) */

void FUN_142627d10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x38) == '\x04') {
    puVar3 = (undefined8 *)FName::ToString(param_1 + 0x40,local_18);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"BeamTarget : Actor: %s\n",puVar4);
    lVar1 = param_2[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_2);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142627dd0 FUN_142627dd0 body=197 status=ok
// SIG undefined FUN_142627dd0(void)

undefined8 * FUN_142627dd0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((0 < (int)param_1[0x25]) && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) {
    puVar2 = (undefined8 *)operator_new(0x100);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_142619420(puVar2);
      *puVar2 = &PTR__scalar_deleting_destructor__145131a58;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      *(undefined1 *)(puVar2 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xe4) = 0;
      *(undefined2 *)((longlong)puVar2 + 0xec) = 0;
      puVar2[0x1e] = 0x3f800000;
      *(undefined4 *)(puVar2 + 0x1f) = 0;
    }
    cVar1 = (**(code **)(*param_1 + 0x238))(param_1,puVar2);
    if (cVar1 != '\0') {
      return puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142627ea0 FUN_142627ea0 body=135 status=ok
// SIG undefined FUN_142627ea0(void)

undefined8 * FUN_142627ea0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((0 < (int)param_1[0x25]) && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) {
    puVar2 = (undefined8 *)operator_new(0xd0);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      FUN_142619420(puVar2);
      *puVar2 = &PTR__scalar_deleting_destructor__1451319c8;
    }
    cVar1 = (**(code **)(*param_1 + 0x238))(param_1,puVar2);
    if (cVar1 != '\0') {
      return puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142628020 FUN_142628020 body=114 status=ok
// SIG undefined FUN_142628020(void)

void FUN_142628020(longlong param_1,uint *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = (uint)*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 0x58);
  *param_3 = 0x3f8000003f800000;
  *(undefined4 *)(param_3 + 1) = 0x3f800000;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x234);
    uVar3 = *(undefined4 *)(lVar1 + 0x238);
    *(undefined4 *)param_3 = *(undefined4 *)(lVar1 + 0x230);
    *(undefined4 *)((longlong)param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 1) = uVar3;
  }
  return;
}



// FUNCTION 1426280a0 FUN_1426280a0 body=215 status=ok
// SIG undefined FUN_1426280a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1426280a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b06cf0) {
    _Init_thread_header(&DAT_146b06cf0);
    if (DAT_146b06cf0 == -1) {
      _DAT_146b06cc8 = 0x3f800000;
      _DAT_146b06c90 = &PTR__scalar_deleting_destructor__145138e58;
      _DAT_146b06ccc = 0x3f800000;
      _DAT_146b06c98 = 0;
      _DAT_146b06ca0 = 0;
      _DAT_146b06ca8 = 0;
      _DAT_146b06cb0 = 0;
      _DAT_146b06cb8 = 0;
      _DAT_146b06cc0 = 0;
      DAT_146b06cd8 = 0;
      _DAT_146b06cdc = 0;
      _DAT_146b06ce4 = 0;
      _DAT_146b06cd0 = 0x3f800000;
      atexit((_func_5014 *)&LAB_143eb5960);
      _Init_thread_footer(&DAT_146b06cf0);
      return &DAT_146b06c90;
    }
  }
  return &DAT_146b06c90;
}



// FUNCTION 1426281d0 FUN_1426281d0 body=183 status=ok
// SIG undefined FUN_1426281d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1426281d0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 8) == param_2) {
        if (iVar3 != -1) {
          puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8);
          *puVar1 = *(undefined4 *)(param_1 + 0xb8);
          return puVar1;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b065c8) {
    _Init_thread_header(&DAT_146b065c8);
    if (DAT_146b065c8 == -1) {
      _DAT_146b065c0 = 0;
      _DAT_146b065c4 = 0;
      DAT_146b065c6 = 0;
      _Init_thread_footer(&DAT_146b065c8);
    }
  }
  return (undefined4 *)&DAT_146b065c0;
}



// FUNCTION 142628290 FUN_142628290 body=21 status=ok
// SIG undefined FUN_142628290(void)

longlong FUN_142628290(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar2 + 0x120) != 0) {
    return *(longlong *)(lVar2 + 0x120);
  }
  plVar1 = *(longlong **)(lVar2 + 0x118);
  if (((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 4 & 1) == 0)) &&
     (lVar4 = (**(code **)(*plVar1 + 0x148))(), lVar4 != 0)) {
    return lVar4;
  }
  lVar2 = *(longlong *)(lVar2 + 0x20);
  if (lVar2 != 0) {
    lVar4 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1426282b0 FUN_1426282b0 body=367 status=ok
// SIG undefined FUN_1426282b0(void)

void FUN_1426282b0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 != 0) {
    lVar2 = FMemory::Malloc(param_2 * 400,0);
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(lVar4 + 8) = (ulonglong)(uVar6 * 400) + lVar2;
        do {
          LOCK();
          uVar3 = *(ulonglong *)(param_1 + 8);
          if (uVar3 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar3 = 0;
          }
          UNLOCK();
          uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
          if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          lVar4 = 0;
          if (uVar1 != 0) {
            lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
          }
          *(uint *)(lVar4 + 0x10) = (uint)uVar3 & 0x3ffffff;
          LOCK();
          bVar7 = uVar3 == *(ulonglong *)(param_1 + 8);
          if (bVar7) {
            *(ulonglong *)(param_1 + 8) = uVar1 | uVar5;
          }
          UNLOCK();
        } while (!bVar7);
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
    UNLOCK();
  }
  return;
}



// FUNCTION 142628420 FUN_142628420 body=367 status=ok
// SIG undefined FUN_142628420(void)

void FUN_142628420(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 != 0) {
    lVar2 = FMemory::Malloc(param_2 * 0x1f0,0);
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(lVar4 + 8) = (ulonglong)(uVar6 * 0x1f0) + lVar2;
        do {
          LOCK();
          uVar3 = *(ulonglong *)(param_1 + 8);
          if (uVar3 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar3 = 0;
          }
          UNLOCK();
          uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
          if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          lVar4 = 0;
          if (uVar1 != 0) {
            lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
          }
          *(uint *)(lVar4 + 0x10) = (uint)uVar3 & 0x3ffffff;
          LOCK();
          bVar7 = uVar3 == *(ulonglong *)(param_1 + 8);
          if (bVar7) {
            *(ulonglong *)(param_1 + 8) = uVar1 | uVar5;
          }
          UNLOCK();
        } while (!bVar7);
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
    UNLOCK();
  }
  return;
}



// FUNCTION 142628590 FUN_142628590 body=367 status=ok
// SIG undefined FUN_142628590(void)

void FUN_142628590(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 != 0) {
    lVar2 = FMemory::Malloc(param_2 << 9,0);
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(lVar4 + 8) = (ulonglong)(uVar6 << 9) + lVar2;
        do {
          LOCK();
          uVar3 = *(ulonglong *)(param_1 + 8);
          if (uVar3 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar3 = 0;
          }
          UNLOCK();
          uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
          if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          lVar4 = 0;
          if (uVar1 != 0) {
            lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
          }
          *(uint *)(lVar4 + 0x10) = (uint)uVar3 & 0x3ffffff;
          LOCK();
          bVar7 = uVar3 == *(ulonglong *)(param_1 + 8);
          if (bVar7) {
            *(ulonglong *)(param_1 + 8) = uVar1 | uVar5;
          }
          UNLOCK();
        } while (!bVar7);
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
    UNLOCK();
  }
  return;
}



// FUNCTION 142628700 FUN_142628700 body=367 status=ok
// SIG undefined FUN_142628700(void)

void FUN_142628700(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 != 0) {
    lVar2 = FMemory::Malloc(param_2 * 0x260,0);
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(lVar4 + 8) = (ulonglong)(uVar6 * 0x260) + lVar2;
        do {
          LOCK();
          uVar3 = *(ulonglong *)(param_1 + 8);
          if (uVar3 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar3 = 0;
          }
          UNLOCK();
          uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
          if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          lVar4 = 0;
          if (uVar1 != 0) {
            lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
          }
          *(uint *)(lVar4 + 0x10) = (uint)uVar3 & 0x3ffffff;
          LOCK();
          bVar7 = uVar3 == *(ulonglong *)(param_1 + 8);
          if (bVar7) {
            *(ulonglong *)(param_1 + 8) = uVar1 | uVar5;
          }
          UNLOCK();
        } while (!bVar7);
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
    UNLOCK();
  }
  return;
}



// FUNCTION 142628870 FUN_142628870 body=367 status=ok
// SIG undefined FUN_142628870(void)

void FUN_142628870(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 != 0) {
    lVar2 = FMemory::Malloc(param_2 << 10,0);
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(lVar4 + 8) = (ulonglong)(uVar6 << 10) + lVar2;
        do {
          LOCK();
          uVar3 = *(ulonglong *)(param_1 + 8);
          if (uVar3 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar3 = 0;
          }
          UNLOCK();
          uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
          if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          lVar4 = 0;
          if (uVar1 != 0) {
            lVar4 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
          }
          *(uint *)(lVar4 + 0x10) = (uint)uVar3 & 0x3ffffff;
          LOCK();
          bVar7 = uVar3 == *(ulonglong *)(param_1 + 8);
          if (bVar7) {
            *(ulonglong *)(param_1 + 8) = uVar1 | uVar5;
          }
          UNLOCK();
        } while (!bVar7);
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
    UNLOCK();
  }
  return;
}



// FUNCTION 1426289e0 FUN_1426289e0 body=262 status=ok
// SIG undefined FUN_1426289e0(void)

void FUN_1426289e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong uVar6;
  
  uVar4 = *(ulonglong *)(param_2 + 0x118);
  uVar3 = 0;
  if (uVar4 != 0) {
    lVar2 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142628a3a;
  }
  uVar4 = uVar3;
LAB_142628a3a:
  if (0 < (int)param_3[1]) {
    uVar6 = uVar3;
    do {
      lVar2 = *param_3;
      local_38 = *(undefined8 *)(uVar3 + 8 + lVar2);
      local_30 = *(undefined4 *)(uVar3 + 0x10 + lVar2);
      local_2c = *(undefined4 *)(uVar3 + 0x40 + lVar2);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_2 + 0x740,&local_38);
      if (uVar4 != 0) {
        local_28 = *(undefined8 *)(uVar3 + 8 + lVar2);
        local_20 = *(undefined4 *)(uVar3 + 0x10 + lVar2);
        local_1c = *(undefined4 *)(uVar3 + 0x40 + lVar2);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (uVar4 + 0x478,&local_28);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar3 = uVar3 + 0x48;
    } while ((int)uVar5 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 142628af0 FUN_142628af0 body=476 status=ok
// SIG undefined FUN_142628af0(void)

void FUN_142628af0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar6;
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong uVar5;
  
  uVar6 = *(ulonglong *)(param_2 + 0x118);
  uVar3 = 0;
  if (uVar6 != 0) {
    lVar2 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142628b53;
  }
  uVar6 = uVar3;
LAB_142628b53:
  if (0 < (int)param_3[1]) {
    uVar5 = uVar3;
    do {
      lVar2 = *param_3;
      local_68 = *(undefined8 *)(uVar3 + 8 + lVar2);
      local_60 = *(undefined4 *)(uVar3 + 0x10 + lVar2);
      local_5c = (int)*(float *)(uVar3 + 0x40 + lVar2);
      local_58 = *(undefined8 *)(uVar3 + 0x14 + lVar2);
      local_50 = *(undefined4 *)(uVar3 + 0x1c + lVar2);
      local_44 = *(undefined4 *)(uVar3 + 0x28 + lVar2);
      local_38 = *(undefined4 *)(uVar3 + 0x4c + lVar2);
      local_4c = *(undefined8 *)(uVar3 + 0x20 + lVar2);
      local_2c = *(undefined4 *)(uVar3 + 0x58 + lVar2);
      local_28 = *(undefined8 *)(uVar3 + 0x68 + lVar2);
      local_40 = *(undefined8 *)(uVar3 + 0x44 + lVar2);
      local_20 = *(undefined8 *)(uVar3 + 0x70 + lVar2);
      local_34 = *(undefined8 *)(uVar3 + 0x50 + lVar2);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_2 + 0x760,&local_68);
      if (uVar6 != 0) {
        local_68 = *(undefined8 *)(uVar3 + 8 + lVar2);
        local_60 = *(undefined4 *)(uVar3 + 0x10 + lVar2);
        local_5c = (int)*(float *)(uVar3 + 0x40 + lVar2);
        local_58 = *(undefined8 *)(uVar3 + 0x14 + lVar2);
        local_50 = *(undefined4 *)(uVar3 + 0x1c + lVar2);
        local_44 = *(undefined4 *)(uVar3 + 0x28 + lVar2);
        local_38 = *(undefined4 *)(uVar3 + 0x4c + lVar2);
        local_4c = *(undefined8 *)(uVar3 + 0x20 + lVar2);
        local_2c = *(undefined4 *)(uVar3 + 0x58 + lVar2);
        local_28 = *(undefined8 *)(uVar3 + 0x68 + lVar2);
        local_40 = *(undefined8 *)(uVar3 + 0x44 + lVar2);
        local_20 = *(undefined8 *)(uVar3 + 0x70 + lVar2);
        local_34 = *(undefined8 *)(uVar3 + 0x50 + lVar2);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (uVar6 + 0x498,&local_68);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 0x78;
    } while ((int)uVar4 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 142628cd0 FUN_142628cd0 body=399 status=ok
// SIG undefined FUN_142628cd0(void)

void FUN_142628cd0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong uVar6;
  
  uVar4 = *(ulonglong *)(param_2 + 0x118);
  uVar3 = 0;
  if (uVar4 != 0) {
    lVar2 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142628d2a;
  }
  uVar4 = uVar3;
LAB_142628d2a:
  if (0 < (int)param_3[1]) {
    uVar6 = uVar3;
    do {
      lVar2 = *param_3;
      local_58 = *(undefined8 *)(uVar3 + 8 + lVar2);
      local_50 = *(undefined4 *)(uVar3 + 0x10 + lVar2);
      local_4c = (int)*(float *)(uVar3 + 0x40 + lVar2);
      local_48 = *(undefined8 *)(uVar3 + 0x14 + lVar2);
      local_40 = *(undefined4 *)(uVar3 + 0x1c + lVar2);
      local_3c = *(undefined8 *)(uVar3 + 0x20 + lVar2);
      local_34 = *(undefined4 *)(uVar3 + 0x28 + lVar2);
      local_30 = *(undefined8 *)(uVar3 + 0x44 + lVar2);
      local_28 = *(undefined4 *)(uVar3 + 0x4c + lVar2);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_2 + 0x750,&local_58);
      if (uVar4 != 0) {
        local_58 = *(undefined8 *)(uVar3 + 8 + lVar2);
        local_50 = *(undefined4 *)(uVar3 + 0x10 + lVar2);
        local_4c = (int)*(float *)(uVar3 + 0x40 + lVar2);
        local_48 = *(undefined8 *)(uVar3 + 0x14 + lVar2);
        local_40 = *(undefined4 *)(uVar3 + 0x1c + lVar2);
        local_3c = *(undefined8 *)(uVar3 + 0x20 + lVar2);
        local_34 = *(undefined4 *)(uVar3 + 0x28 + lVar2);
        local_30 = *(undefined8 *)(uVar3 + 0x44 + lVar2);
        local_28 = *(undefined4 *)(uVar3 + 0x4c + lVar2);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (uVar4 + 0x488,&local_58);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar3 = uVar3 + 0x50;
    } while ((int)uVar5 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 142628e60 FUN_142628e60 body=333 status=ok
// SIG undefined FUN_142628e60(void)

void FUN_142628e60(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong uVar6;
  
  uVar4 = *(ulonglong *)(param_2 + 0x118);
  uVar3 = 0;
  if (uVar4 != 0) {
    lVar2 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142628eba;
  }
  uVar4 = uVar3;
LAB_142628eba:
  if (0 < (int)param_3[1]) {
    uVar6 = uVar3;
    do {
      lVar2 = *param_3;
      local_48 = *(undefined8 *)(uVar3 + 8 + lVar2);
      local_40 = *(undefined4 *)(uVar3 + 0x10 + lVar2);
      local_3c = *(undefined8 *)(uVar3 + 0x14 + lVar2);
      local_34 = *(undefined4 *)(uVar3 + 0x1c + lVar2);
      local_30 = *(undefined8 *)(uVar3 + 0x20 + lVar2);
      local_28 = *(undefined4 *)(uVar3 + 0x28 + lVar2);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_2 + 0x730,&local_48);
      if (uVar4 != 0) {
        local_48 = *(undefined8 *)(uVar3 + 8 + lVar2);
        local_40 = *(undefined4 *)(uVar3 + 0x10 + lVar2);
        local_3c = *(undefined8 *)(uVar3 + 0x14 + lVar2);
        local_34 = *(undefined4 *)(uVar3 + 0x1c + lVar2);
        local_30 = *(undefined8 *)(uVar3 + 0x20 + lVar2);
        local_28 = *(undefined4 *)(uVar3 + 0x28 + lVar2);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (uVar4 + 0x468,&local_48);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar3 = uVar3 + 0x40;
    } while ((int)uVar5 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 142629010 FUN_142629010 body=779 status=ok
// SIG undefined FUN_142629010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142629010(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  BOOL BVar6;
  undefined8 uVar7;
  int iVar8;
  void *_Dst;
  
  FUN_142629320();
  lVar1 = **(longlong **)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  iVar2 = 0;
  if (lVar1 != 0) {
    iVar2 = *(int *)(**(longlong **)(param_1 + 0x1f8) + 0x7c);
  }
  *(int *)(param_1 + 0x2b0) = iVar2;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  iVar2 = rand();
  *(int *)(param_1 + 0x2a8) = iVar2;
  uVar3 = iVar2 * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x2ac) = uVar3;
  fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000);
  *(float *)(param_1 + 0x2b4) = fVar4 - (float)(int)fVar4;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x78);
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x2b0) == 0) &&
     (iVar2 = *(int *)(*(longlong *)(param_1 + 0x1f8) + 0x184) + 0xf,
     iVar5 = (int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4, fVar4 = (float)iVar5 * _DAT_146534304,
     iVar5 = iVar5 - ((int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1), iVar2 = DAT_146534308,
     iVar5 <= DAT_146534308)) {
    iVar2 = iVar5;
  }
  iVar5 = *(int *)(param_1 + 0x210);
  do {
    if (iVar2 <= iVar5) {
LAB_142629219:
      lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
      if (((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x48) + 0x464) & 1) != 0)) ||
         (*(int *)(param_1 + 0x230) != *(int *)(param_1 + 0x210))) {
        iVar2 = *(int *)(param_1 + 0x210);
        *(undefined4 *)(param_1 + 0x230) = 0;
        iVar5 = (int)(iVar2 + 0x1f + (iVar2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
        iVar8 = iVar5 << 5;
        if (*(int *)(param_1 + 0x234) != iVar8) {
          *(int *)(param_1 + 0x234) = iVar8;
          TBitArray<FDefaultBitArrayAllocator>::Realloc((void *)(param_1 + 0x218));
        }
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x230) = iVar2;
          _Dst = *(void **)(param_1 + 0x228);
          if (*(void **)(param_1 + 0x228) == (void *)0x0) {
            _Dst = (void *)(param_1 + 0x218);
          }
          _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar5 << 2);
        }
        FUN_142620e60(param_1);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x200) + 0x250) = 1;
      FUN_14261c660(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x200));
      if (**(longlong **)(param_1 + 0x1f8) == 0) {
        uVar7 = UMaterial::GetDefaultMaterial(0);
      }
      else {
        uVar7 = *(undefined8 *)(**(longlong **)(param_1 + 0x1f8) + 0x38);
      }
      *(undefined8 *)(param_1 + 0x1b0) = uVar7;
      FUN_142629d00(param_1);
      return;
    }
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x260));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x260));
    }
    iVar5 = *(int *)(lVar1 + 600);
    if (iVar5 < 1) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x260));
      goto LAB_142629219;
    }
    *(int *)(lVar1 + 600) = iVar5 + -1;
    iVar5 = *(int *)(*(longlong *)(lVar1 + 0x248) + -4 + (longlong)iVar5 * 4);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x260));
    if (iVar5 == -1) goto LAB_142629219;
    iVar8 = *(int *)(param_1 + 0x210);
    *(int *)(param_1 + 0x210) = iVar8 + 1;
    if (*(int *)(param_1 + 0x214) < iVar8 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x208,iVar8);
    }
    *(int *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar8 * 4) = iVar5;
    iVar5 = *(int *)(param_1 + 0x240);
    *(int *)(param_1 + 0x240) = iVar5 + 1;
    if (*(int *)(param_1 + 0x244) < iVar5 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x238,iVar5);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar5 * 4) = 0;
    iVar5 = *(int *)(param_1 + 0x210);
  } while( true );
}



// FUNCTION 142629320 FUN_142629320 body=1307 status=ok
// SIG undefined FUN_142629320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142629320(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Dst;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  undefined8 *puVar20;
  float fVar21;
  int local_res8 [2];
  int local_res10;
  longlong local_res18;
  
  iVar12 = (int)param_1[0x24];
  puVar15 = (uint *)0x0;
  lVar8 = param_1[2];
  lVar13 = **(longlong **)(lVar8 + 0x40);
  param_1[0x36] = *(longlong *)(*(longlong *)(lVar13 + 0x30) + 0x38);
  local_res10 = iVar12;
  local_res18 = lVar13;
  if (iVar12 == 0) {
    uVar9 = (*(int *)(lVar8 + 0xb0) << 5 ^ *(uint *)(param_1 + 0x1e)) & 0x40 ^
            *(uint *)(param_1 + 0x1e);
    *(uint *)(param_1 + 0x1e) = uVar9;
    *(uint *)(param_1 + 0x1e) = (*(int *)(lVar8 + 0xb0) << 7 ^ uVar9) & 0x200 ^ uVar9;
    *(undefined1 *)((longlong)param_1 + 0xf4) = *(undefined1 *)(lVar8 + 0xb4);
    lVar8 = param_1[2];
    _Dst = (void *)param_1[0x22];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(lVar8 + 0x168);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar8 + 0x16c);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(lVar8 + 0x170);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(lVar8 + 0x174);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar8 + 400);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar8 + 0x178);
    *(undefined8 *)((longlong)param_1 + 0x1c4) = *(undefined8 *)(lVar8 + 0x180);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar8 + 0x188);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(lVar8 + 0x18c);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(lVar8 + 0x194);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar8 + 0x198);
    if ((_Dst == (void *)0x0) || (iVar4 = (int)param_1[0x23], iVar4 < *(int *)(lVar8 + 0x17c))) {
      _Dst = (void *)FMemory::Realloc(_Dst,(longlong)*(int *)(lVar8 + 0x17c),0);
      param_1[0x22] = (longlong)_Dst;
      iVar4 = *(int *)(param_1[2] + 0x17c);
      *(int *)(param_1 + 0x23) = iVar4;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar4);
    puVar20 = *(undefined8 **)(param_1[2] + 0x1a8);
    uVar6 = (ulonglong)*(int *)(param_1[2] + 0x1b0);
    puVar18 = (uint *)(uVar6 & 0x1fffffffffffffff);
    if (puVar20 + uVar6 < puVar20) {
      puVar18 = puVar15;
    }
    puVar17 = puVar15;
    if (puVar18 != (uint *)0x0) {
      do {
        lVar8 = param_1[0x22];
        plVar14 = (longlong *)*puVar20;
        puVar16 = puVar15;
        if (lVar8 != 0) {
          lVar13 = param_1[2];
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(lVar13 + 0x108,local_res8,plVar14);
          puVar10 = puVar15;
          if (local_res8[0] != -1) {
            puVar10 = (uint *)(*(longlong *)(lVar13 + 0x108) + (longlong)local_res8[0] * 0x18);
          }
          puVar7 = puVar10 + 2;
          if (puVar10 == (uint *)0x0) {
            puVar7 = puVar15;
          }
          if (puVar7 != (uint *)0x0) {
            puVar16 = (uint *)((ulonglong)*puVar7 + lVar8);
          }
        }
        (**(code **)(*plVar14 + 0x2b8))(plVar14,param_1,puVar16);
        puVar20 = puVar20 + 1;
        puVar17 = (uint *)((longlong)puVar17 + 1);
        lVar13 = local_res18;
        iVar12 = local_res10;
      } while (puVar17 != puVar18);
    }
    *(int *)((longlong)param_1 + 0x11c) = (int)param_1[0x24];
    iVar4 = (**(code **)(*param_1 + 0x78))(param_1);
    *(uint *)(param_1 + 0x24) = (int)param_1[0x24] + 0xf + iVar4 & 0xfffffff0;
    uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x124) = uVar5;
  }
  (**(code **)(*param_1 + 0x160))(param_1,param_1[2] + 0x158);
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  FUN_14263ab70(param_1);
  lVar8 = param_1[3];
  uVar5 = *(undefined4 *)(lVar8 + 0x220);
  uVar1 = *(undefined4 *)(lVar8 + 0x224);
  uVar2 = *(undefined4 *)(lVar8 + 0x228);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar5;
  *(undefined4 *)(param_1 + 0x29) = uVar1;
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar2;
  param_1[0x35] = 0;
  if (param_1[0x20] == 0) {
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x15c) = _DAT_1468b5d90;
  uVar5 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x164) = DAT_1468b5d98;
  param_1[0x2a] = *(longlong *)((longlong)param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x2b) = uVar5;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  iVar4 = *(int *)(*(longlong *)(lVar13 + 0x30) + 0xf0);
  if (iVar4 == 0) {
    fVar21 = 1.0;
  }
  else {
    fVar21 = 0.99 / (float)(iVar4 + 1);
  }
  *(float *)(*(longlong *)(lVar13 + 0x30) + 0xec) = fVar21;
  if (iVar12 == 0) {
    lVar8 = *(longlong *)(param_1[3] + 0x120);
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0();
    }
    cVar3 = UWorld::IsGameWorld(lVar8);
    if ((cVar3 == '\x01') && (lVar8 = param_1[2], 0.0 < *(float *)(lVar8 + 0x60))) {
      iVar4 = *(int *)(lVar13 + 0xb4);
      if ((iVar4 < 1) && (*(int *)(lVar8 + 0x58) < 1)) {
        (**(code **)(*param_1 + 0x18))(param_1,10,1);
      }
      else {
        iVar19 = *(int *)(lVar8 + 0x58);
        if (iVar19 < 1) {
          iVar11 = 100;
          if (iVar4 < 0x65) {
            iVar11 = iVar4;
          }
        }
        else {
          iVar11 = 100;
          if (iVar19 < 0x65) {
            iVar11 = iVar19;
          }
        }
        (**(code **)(*param_1 + 0x18))(param_1,iVar11,CONCAT71((uint7)(uint3)((uint)iVar19 >> 8),1))
        ;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar12 == 0) {
    uVar9 = (*(uint *)(*(longlong *)(lVar13 + 0x30) + 100) ^ *(uint *)(param_1 + 0x1e)) & 2 ^
            *(uint *)(param_1 + 0x1e);
    *(uint *)(param_1 + 0x1e) = uVar9;
    lVar8 = param_1[2];
    *(uint *)(param_1 + 0x1e) = (*(uint *)(*(longlong *)(lVar13 + 0x30) + 100) ^ uVar9) & 4 ^ uVar9;
    iVar12 = (int)param_1[0x2f];
    *(uint *)(param_1 + 0x1f) = (uint)*(byte *)(*(longlong *)(lVar13 + 0x30) + 0x68);
    if (iVar12 < *(int *)(lVar8 + 0x48)) {
      iVar19 = *(int *)(lVar8 + 0x48) - iVar12;
      iVar4 = iVar19 + iVar12;
      *(int *)(param_1 + 0x2f) = iVar4;
      if (*(int *)((longlong)param_1 + 0x17c) < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x2e);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar12 * 0x10 + param_1[0x2e]),0,(longlong)iVar19 << 4);
      lVar8 = param_1[2];
    }
    puVar18 = puVar15;
    puVar17 = puVar15;
    if (0 < *(int *)(lVar8 + 0x48)) {
      do {
        plVar14 = (longlong *)(param_1[0x2e] + (longlong)puVar18);
        iVar12 = (int)plVar14[1];
        iVar4 = *(int *)(*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar8 + 0x40) + (longlong)puVar17) + 0x50) +
                        0xc0);
        if (iVar12 < iVar4) {
          *(int *)(plVar14 + 1) = iVar4;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar4) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar14);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar12 + *plVar14),0,(longlong)(iVar4 - iVar12));
          lVar8 = param_1[2];
        }
        uVar9 = (int)puVar15 + 1;
        puVar15 = (uint *)(ulonglong)uVar9;
        puVar18 = puVar18 + 4;
        puVar17 = puVar17 + 2;
      } while ((int)uVar9 < *(int *)(lVar8 + 0x48));
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x184) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  return;
}



// FUNCTION 142629840 FUN_142629840 body=456 status=ok
// SIG undefined FUN_142629840(void)

void FUN_142629840(longlong param_1)

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
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_res10 = param_1;
    FUN_1426221a0(&local_res10,2,local_res20);
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
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_14513acf0;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_14048a3d0(plVar9,0,0xff,1,0,0);
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



// FUNCTION 142629a10 FUN_142629a10 body=620 status=ok
// SIG undefined FUN_142629a10(void)

void FUN_142629a10(longlong param_1)

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
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if (((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
      ((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')))) &&
     ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))) {
    FUN_142629840(*(undefined8 *)(param_1 + 0x78));
    *(int *)(*(longlong *)(param_1 + 0x78) + 0x220) = DAT_146534414 * DAT_146534410;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      lVar7 = *(longlong *)(param_1 + 0x78);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      (**(code **)(*(longlong *)(lVar7 + 0x170) + 0x18))();
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
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
    *(undefined1 *)(plVar9 + 3) = 0;
    *plVar9 = (longlong)&PTR_FUN_14513b248;
    plVar9[4] = 0;
    plVar9[2] = *(longlong *)(param_1 + 0x78);
    lVar7 = plVar9[4];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res18 = lVar7;
    FUN_140445100(plVar9,0,0xff,1,0,0);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res18);
      }
    }
  }
  return;
}



// FUNCTION 142629c80 InitGPUSimulation body=122 status=ok
// SIG undefined InitGPUSimulation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FFXSystem::InitGPUSimulation(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  _DAT_146b051e0 = (int)((DAT_146534410 >> 0x1f & 3U) + DAT_146534410) >> 2;
  _DAT_146b051e4 = (int)(DAT_146534414 + (DAT_146534414 >> 0x1f & 3U)) >> 2;
  DAT_146b051e8 = _DAT_146b051e4 * _DAT_146b051e0;
  lVar1 = operator_new(0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_142619f40(lVar1);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    FUN_142629a10(param_1);
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_142629a10(param_1);
  return;
}



// FUNCTION 142629d00 FUN_142629d00 body=868 status=ok
// SIG undefined FUN_142629d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142629d00(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if (DAT_1468c217e == '\0') {
    uVar8 = *(int *)(param_1 + 0x2ac) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x2ac) = uVar8;
    fVar4 = (float)DAT_146b065b0;
    fVar5 = DAT_146b065b0._4_4_;
    fVar6 = DAT_146b065b0._8_4_;
    local_res10.s.LowPart = uVar8 & 0x7fffff | 0x3f800000;
    lVar15 = *(longlong *)(param_1 + 0x1f8);
    fVar20 = (float)local_res10.s.LowPart - (float)(int)(float)local_res10.s.LowPart;
    fVar17 = 1.0 - fVar20;
    fVar19 = fVar17 * *(float *)(lVar15 + 0x70) + fVar20 * *(float *)(lVar15 + 0x7c);
    fVar18 = fVar20 * *(float *)(lVar15 + 0x80) + fVar17 * *(float *)(lVar15 + 0x74);
    fVar20 = fVar20 * *(float *)(lVar15 + 0x84) + fVar17 * *(float *)(lVar15 + 0x78);
    auVar16._4_4_ = fVar18;
    auVar16._0_4_ = fVar19;
    auVar16._8_4_ = fVar20;
    auVar16._12_4_ = 0;
    auVar16 = divps(auVar16,_DAT_146b065b0);
    fVar19 = fVar19 - (float)(int)auVar16._0_4_ * fVar4;
    fVar18 = fVar18 - (float)(int)auVar16._4_4_ * fVar5;
    fVar20 = fVar20 - (float)(int)auVar16._8_4_ * fVar6;
    fVar17 = (float)(((uint)(fVar19 + fVar4) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                    (uint)(fVar19 + fVar4));
    fVar18 = (float)(((uint)(fVar18 + fVar5) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                    (uint)(fVar18 + fVar5));
    fVar19 = (float)(((uint)(fVar20 + fVar6) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                    (uint)(fVar20 + fVar6));
    bVar3 = fRam0000000146b065a8 < fVar19;
    *(ulonglong *)(param_1 + 0x288) =
         CONCAT44(((uint)(fVar18 - fVar5) ^ (uint)fVar18) & -(uint)(fRam0000000146b065a4 < fVar18) ^
                  (uint)fVar18,
                  ((uint)(fVar17 - fVar4) ^ (uint)fVar17) & -(uint)(_DAT_146b065a0 < fVar17) ^
                  (uint)fVar17);
    *(uint *)(param_1 + 0x290) =
         ((uint)(fVar19 - fVar6) ^ (uint)fVar19) & -(uint)bVar3 ^ (uint)fVar19;
    if (*(char *)(*(longlong *)(param_1 + 0x200) + 0x252) == '\0') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
        plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 0xe0);
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res20);
        if ((plVar12 != (longlong *)0x0) && (DAT_1468c217e == '\0')) {
          (**(code **)(*plVar12 + 0x48))(plVar12);
        }
        QueryPerformanceCounter(&local_res10);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
        return;
      }
      pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar11 = TlsGetValue(*pDVar10);
      plVar12 = (longlong *)0x0;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = 0;
          plVar11[1] = 0;
          *(undefined4 *)(plVar11 + 2) = 0;
          plVar12 = plVar11;
        }
        TlsSetValue(*pDVar10,plVar12);
        plVar11 = plVar12;
      }
      plVar12 = (longlong *)plVar11[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar11;
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
          plVar11[1] = (longlong)plVar12;
          if (plVar12 == (longlong *)0x0) {
            puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar11[1] = (longlong)puVar13;
            lVar15 = 0x1f;
            do {
              puVar2 = puVar13 + 0x20;
              *puVar13 = puVar2;
              lVar15 = lVar15 + -1;
              puVar13 = puVar2;
            } while (lVar15 != 0);
            *puVar2 = 0;
            plVar12 = (longlong *)plVar11[1];
          }
          iVar14 = 0x20;
          *(undefined4 *)(plVar11 + 2) = 0x20;
        }
        else {
          iVar14 = 0x20;
          plVar11[1] = (longlong)plVar12;
          *(undefined4 *)(plVar11 + 2) = 0x20;
          *plVar11 = 0;
        }
      }
      else {
        iVar14 = (int)plVar11[2];
      }
      plVar11[1] = *plVar12;
      *(int *)(plVar11 + 2) = iVar14 + -1;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *(undefined1 *)(plVar12 + 3) = 0;
      *plVar12 = (longlong)&PTR_FUN_14513b238;
      plVar12[4] = 0;
      plVar12[2] = *(longlong *)(*(longlong *)(param_1 + 0x200) + 0xe0);
      lVar15 = plVar12[4];
      piVar1 = (int *)(lVar15 + 0x48);
      if (lVar15 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar15;
      FUN_14048a3d0(plVar12,0,0xff,1,0,0);
      if (lVar15 != 0) {
        LOCK();
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
  }
  return;
}



// FUNCTION 14262a070 InitParameters body=13 status=ok
// SIG undefined InitParameters(void)

void FParticleEmitterInstance::InitParameters
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_1426327b0();
  return;
}



// FUNCTION 14262a080 FUN_14262a080 body=95 status=ok
// SIG undefined FUN_14262a080(void)

void FUN_14262a080(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_1426327b0();
  lVar1 = UParticleEmitter::GetLODLevel(param_2,0);
  lVar1 = *(longlong *)(lVar1 + 0x48);
  *(longlong *)(param_1 + 0x1f0) = lVar1;
  *(byte *)(param_1 + 0x1f8) = (byte)(*(uint *)(param_2 + 0xb0) >> 3) & 1;
  if (*(char *)(lVar1 + 200) == '\n') {
    *(undefined1 *)(param_1 + 0xf4) = 10;
  }
  return;
}



// FUNCTION 14262a0e0 FUN_14262a0e0 body=359 status=ok
// SIG undefined FUN_14262a0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14262a0e0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
     (((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
      ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))))) {
    local_70 = &local_58;
    local_78 = 0x201;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 1;
    iVar1 = 1;
    if (0 < *(int *)(param_1 + 0x40)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,iVar1 << 2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    local_70 = (undefined8 *)CONCAT71(local_70._1_7_,0xf);
    local_78 = 4;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 14262a250 InitRHI body=204 status=ok
// SIG undefined InitRHI(void)

void FGPUSpriteResources::InitRHI(longlong param_1)

{
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,param_1 + 0x60,&DAT_146b05848,2);
  local_res10 = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,&local_res10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res18,param_1 + 0x120,&DAT_146b05b18,2)
  ;
  local_res20 = local_res18;
  if (local_res18 != 0) {
    LOCK();
    *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,&local_res20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  return;
}



// FUNCTION 14262a320 FUN_14262a320 body=141 status=ok
// SIG undefined FUN_14262a320(void)

void FUN_14262a320(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint6 uStack_16;
  
  iVar2 = *(int *)(param_1 + 0x330);
  *(int *)(param_1 + 0x330) = iVar2 + 1;
  if (*(int *)(param_1 + 0x334) < iVar2 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1 + 0x30,iVar2);
  }
  puVar1 = (undefined4 *)(param_1 + 0x30 + (longlong)iVar2 * 0x18);
  *puVar1 = 0x465345d0;
  puVar1[1] = 1;
  puVar1[2] = 8;
  puVar1[3] = 0;
  *(ulonglong *)(param_1 + 0x40 + (longlong)iVar2 * 0x18) = (ulonglong)uStack_16 << 0x10;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x648,DAT_146534500);
  return;
}



// FUNCTION 14262a3b0 FUN_14262a3b0 body=936 status=ok
// SIG undefined FUN_14262a3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14262a3b0(longlong param_1)

{
  longlong *plVar1;
  wchar_t wVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  longlong local_178 [2];
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_160 [168];
  undefined8 local_b8;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_1c8 = 1;
  local_198 = DAT_1464c9cc8;
  local_1d0 = param_1 + 0x38;
  local_1e0 = &local_1b8;
  local_1f0 = 0x2000001;
  if (*(int *)(DAT_146b05810 + 4) == 1) {
    local_1f0 = 0x22000001;
  }
  local_1e8 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = _DAT_1464c9cb8;
  uStack_1a0 = uRam00000001464c9cc0;
  local_194 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_1f8 = 0;
  local_1d8 = plVar1;
  FUN_1404a2100(DAT_146534410,DAT_146534414,0x22000002,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b065f8) {
    _Init_thread_header(&DAT_146b065f8);
    if (DAT_146b065f8 == -1) {
      FName::FName(&DAT_146b065f0,L"ParticleAttributes",1);
      _Init_thread_footer(&DAT_146b065f8);
    }
  }
  *(undefined8 *)(*plVar1 + 0x58) = DAT_146b065f0;
  (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,*plVar1,L"ParticleAttributes");
  local_178[0] = *plVar1;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_a0 = 0;
  local_9c = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_60 = 0;
  local_28 = 0;
  local_178[1] = 0;
  local_168 = 0xffffffff;
  local_164 = 0x900;
  local_b8 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_20 = 1 < *(uint *)(local_178[0] + 0x38);
  _guard_xfg_dispatch_icall_nop(local_160,0,0xa8);
  uVar7 = (longlong)DAT_146ab6ea8 + 1U & 0xfffffffffffffffe;
  puVar3 = (undefined8 *)(uVar7 + 0xc);
  if (DAT_146ab6eb0 < puVar3) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0xe);
    uVar7 = (longlong)DAT_146ab6ea8 + 1U & 0xfffffffffffffffe;
    puVar3 = (undefined8 *)(uVar7 + 0xc);
  }
  pwVar4 = L"Clear";
  DAT_146ab6ea8 = puVar3;
  do {
    wVar2 = *pwVar4;
    *(wchar_t *)((uVar7 - 0x14513aca0) + (longlong)pwVar4) = wVar2;
    pwVar4 = pwVar4 + 1;
  } while (wVar2 != L'\0');
  uVar5 = (longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8;
  puVar3 = (undefined8 *)(uVar5 + 0x178);
  if (DAT_146ab6eb0 < puVar3) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x180);
    uVar5 = (longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8;
    puVar3 = (undefined8 *)(uVar5 + 0x178);
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  DAT_146ab6ea8 = puVar3;
  *DAT_146ab6e80 = uVar5;
  DAT_146ab6e80 = (ulonglong *)(uVar5 + 8);
  FUN_140499730(uVar5,local_178,uVar7);
  DAT_146ab7024 = 1;
  FUN_14049c2a0(&DAT_146ab6e78,local_178);
  DAT_146ab7024 = 1;
  puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar3 = puVar6 + 2;
  if (DAT_146ab6eb0 < puVar3) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x18);
    puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar6 + 2;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  DAT_146ab6ea8 = puVar3;
  *DAT_146ab6e80 = (ulonglong)puVar6;
  DAT_146ab6e80 = puVar6 + 1;
  *DAT_146ab6e80 = 0;
  *puVar6 = &PTR_LAB_143f59460;
  DAT_146ab7024 = 0;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(local_178);
  return;
}



// FUNCTION 14262a760 FUN_14262a760 body=570 status=ok
// SIG undefined FUN_14262a760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14262a760(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  uVar4 = DAT_146534414;
  uVar3 = DAT_146534410;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_58 = _DAT_1464c9cb8;
  uStack_54 = uRam00000001464c9cbc;
  uStack_50 = uRam00000001464c9cc0;
  uStack_4c = DAT_1464c9cc4;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 1;
  local_48 = DAT_1464c9cc8;
  local_80 = param_1 + 0x38;
  local_44 = 0;
  local_90 = &local_68;
  local_98 = 0;
  local_a0 = 1;
  local_a8 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = plVar1;
  FUN_1404a2100(DAT_146534410,DAT_146534414,1);
  local_78 = 1;
  local_80 = param_1 + 0x48;
  plVar2 = (longlong *)(param_1 + 0x40);
  local_90 = &local_68;
  local_98 = 0;
  local_a0 = 1;
  local_a8 = 0;
  local_88 = plVar2;
  FUN_1404a2100(uVar3,uVar4,10,1);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146b065d8) {
    _Init_thread_header(&DAT_146b065d8);
    if (DAT_146b065d8 == -1) {
      FName::FName(&DAT_146b065d0,L"ParticleStatePosition",1);
      _Init_thread_footer(&DAT_146b065d8);
    }
  }
  if (*piVar5 < DAT_146b065e8) {
    _Init_thread_header(&DAT_146b065e8);
    if (DAT_146b065e8 == -1) {
      FName::FName(&DAT_146b065e0,L"ParticleStateVelocity",1);
      _Init_thread_footer(&DAT_146b065e8);
    }
  }
  *(undefined8 *)(*plVar1 + 0x58) = DAT_146b065d0;
  *(undefined8 *)(*plVar2 + 0x58) = DAT_146b065e0;
  (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,*plVar1,L"ParticleStatePosition");
  (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,*plVar2,L"ParticleStateVelocity");
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14262a9a0 FUN_14262a9a0 body=274 status=ok
// SIG undefined FUN_14262a9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14262a9a0(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x44)) {
    local_70 = &local_58;
    local_48 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_78 = 0x601;
    (**(code **)(*DAT_146ab6358 + 0x490))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(int *)(param_1 + 0x44) * 8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    local_70 = (undefined8 *)CONCAT71(local_70._1_7_,0x11);
    local_78 = 8;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 14262aac0 FUN_14262aac0 body=738 status=ok
// SIG undefined FUN_14262aac0(void)

void FUN_14262aac0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res8 [16];
  longlong local_res18;
  undefined8 local_res20;
  undefined8 uVar12;
  longlong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  if (param_3 != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      LOCK();
      *(int *)(param_3 + 0x230) = *(int *)(param_3 + 0x230) + 1;
      UNLOCK();
      local_50 = *(int *)(param_2 + 1);
      lVar10 = (longlong)local_50;
      pvVar3 = (void *)*param_2;
      local_58 = (void *)0x0;
      local_60 = param_1;
      if (local_50 == 0) {
        local_4c = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar3,lVar10 << 2);
      }
      LOCK();
      *(int *)(param_3 + 0x230) = *(int *)(param_3 + 0x230) + 1;
      UNLOCK();
      local_48 = param_3;
      FUN_14262d6b0(param_3);
      FUN_142622080(&local_60,2,local_res8);
      if (local_48 != 0) {
        FUN_14262d6b0();
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      plVar11 = (longlong *)0x0;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar11 = plVar7;
        }
        TlsSetValue(*pDVar6,plVar11);
        plVar7 = plVar11;
      }
      plVar11 = (longlong *)plVar7[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar7;
        if (plVar11 == (longlong *)0x0) {
          lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar10;
          if (lVar10 == 0) {
            puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar8;
            lVar10 = 0x1f;
            do {
              puVar2 = puVar8 + 0x20;
              *puVar8 = puVar2;
              lVar10 = lVar10 + -1;
              puVar8 = puVar2;
            } while (lVar10 != 0);
            *puVar2 = 0;
          }
          plVar11 = (longlong *)plVar7[1];
          iVar9 = 0x20;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          iVar9 = 0x20;
          plVar7[1] = (longlong)plVar11;
          *(undefined4 *)(plVar7 + 2) = 0x20;
          *plVar7 = 0;
        }
      }
      else {
        iVar9 = (int)plVar7[2];
      }
      plVar7[1] = *plVar11;
      *(int *)(plVar7 + 2) = iVar9 + -1;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      local_res20 = 0;
      uVar12 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_14513af78;
      *(undefined1 *)(plVar11 + 6) = 0;
      plVar11[7] = 0;
      LOCK();
      *(int *)(param_3 + 0x230) = *(int *)(param_3 + 0x230) + 1;
      UNLOCK();
      plVar11[2] = param_1;
      plVar11[3] = 0;
      iVar9 = *(int *)(param_2 + 1);
      pvVar3 = (void *)*param_2;
      *(int *)(plVar11 + 4) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)((longlong)plVar11 + 0x24) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(plVar11 + 3,iVar9,0);
        _guard_xfg_dispatch_icall_nop((void *)plVar11[3],pvVar3,(longlong)iVar9 << 2);
      }
      plVar11[5] = param_3;
      LOCK();
      *(int *)(param_3 + 0x230) = *(int *)(param_3 + 0x230) + 1;
      UNLOCK();
      FUN_14262d6b0(param_3);
      lVar10 = plVar11[7];
      piVar1 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar10;
      FUN_14048a640(plVar11,0,0xff,1,uVar12);
      if (lVar10 != 0) {
        LOCK();
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
  }
  *(undefined2 *)(param_1 + 0x250) = 0;
  return;
}



// FUNCTION 14262adb0 FUN_14262adb0 body=2933 status=ok
// SIG undefined FUN_14262adb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14262adb0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong *puVar19;
  bool bVar20;
  undefined1 auStack_508 [32];
  int local_4e8;
  undefined4 local_4e0;
  int local_4d8;
  ulonglong local_4d0;
  longlong *local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  int local_4a8;
  int local_4a4;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_484;
  float local_480;
  float local_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined8 local_438;
  ulonglong local_430;
  longlong *local_428;
  undefined8 local_420;
  longlong *local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined2 local_408;
  undefined *local_400;
  undefined4 local_3f8;
  undefined *local_3f0;
  undefined4 local_3e8;
  undefined8 local_3d8;
  longlong *plStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined4 local_390;
  ulonglong local_38c;
  undefined8 local_384;
  undefined4 local_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_334;
  undefined8 local_32c;
  undefined4 local_324;
  undefined1 local_318 [192];
  undefined4 local_258;
  undefined1 local_188 [256];
  ulonglong local_88;
  longlong *plVar12;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  puVar19 = (ulonglong *)(param_1 + 0x30);
  puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  plVar12 = (longlong *)0x0;
  local_4a0 = DAT_1465346f0;
  puVar5 = puVar6 + 3;
  uVar13 = 0;
  local_4d0 = local_4d0 & 0xffffffff00000000;
  local_4c8 = param_4;
  local_4c0 = param_1;
  local_428 = param_3;
  local_420 = param_2;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(puVar19,0x20);
    puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
  }
  *puVar19 = (ulonglong)puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  bVar20 = DAT_1465345b0 == '\0';
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144e1b868;
  puVar6[2] = param_3;
  uVar16 = 0;
  if (bVar20) {
    FUN_141a19150(param_1,param_3,0,1);
  }
  else {
    local_448 = 0x22;
    FUN_141ae34d0(param_1,param_3,0,0x22);
    local_410 = 0;
    local_40c = 0xffffffff;
    local_408 = 0x102;
    local_498 = 0;
    local_490 = 0;
    local_418 = param_3;
    FUN_140c63b80(local_318,1,&local_418,&local_498);
    FRHICommandListBase::CacheActiveRenderTargets(param_1,local_258,local_318,local_188);
    puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 0x54;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(puVar19,0x2a8);
      puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar6 + 0x54;
    }
    *puVar19 = (ulonglong)puVar5;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar6;
    *(undefined8 **)(param_1 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar6 + 2,local_318);
    DAT_1465345b0 = '\0';
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_318);
  }
  local_398 = 0;
  local_3d8 = 0;
  plStack_3d0 = (longlong *)0x0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = (longlong *)0x0;
  uStack_3b0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_390 = 0;
  local_38c = 0x26;
  local_384 = 0;
  local_37c = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_334 = 0;
  local_32c = 0;
  local_324 = 0;
  FUN_14049afe0(param_1,&local_3d8);
  puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(puVar19,0x30);
    puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *puVar19 = (ulonglong)puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar6 + 2) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
  puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(puVar19,0x30);
    puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *puVar19 = (ulonglong)puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f59420;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x200;
  *(undefined4 *)(puVar6 + 4) = 0x200;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0x3f800000;
  local_398 = FUN_1409853f0();
  uStack_3a0 = FUN_140985530();
  local_3a8 = FUN_1404a0ce0();
  lVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_3f8 = 0;
  local_400 = &DAT_146b05280;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar3 + 0x38),&local_4a8,&local_400);
  plVar14 = plVar12;
  if (local_4a8 != -1) {
    plVar14 = (longlong *)((longlong)local_4a8 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar11 = plVar14 + 2;
  if (plVar14 == (longlong *)0x0) {
    plVar11 = plVar12;
  }
  lVar3 = *plVar11;
  local_4b8 = lVar3;
  lVar4 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_3e8 = 0;
  local_3f0 = &DAT_146b053d0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar4 + 0x38),&local_4a4,&local_3f0);
  plVar14 = plVar12;
  if (local_4a4 != -1) {
    plVar14 = (longlong *)((longlong)local_4a4 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar11 = plVar14 + 2;
  if (plVar14 == (longlong *)0x0) {
    plVar11 = plVar12;
  }
  lVar4 = *plVar11;
  local_3d8 = DAT_1465344c8;
  if (lVar3 == 0) {
    local_440 = 0;
    plVar14 = (longlong *)0x1;
    plStack_3d0 = plVar12;
  }
  else {
    lVar8 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plStack_3d0 = *(longlong **)(lVar8 + 0x38);
    plVar14 = plVar12;
    param_4 = local_4c8;
  }
  if (plVar14 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_440);
  }
  bVar20 = false;
  if (lVar4 == 0) {
    bVar20 = true;
    local_438 = 0;
    local_3b8 = plVar12;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    local_3b8 = *(longlong **)(lVar4 + 0x40);
  }
  if (bVar20) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_438);
  }
  local_38c = local_38c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_3d8,2,1);
  uVar15 = local_4a0;
  uVar17 = (ulonglong)(int)param_4[1];
  lVar4 = 0;
  uVar10 = uVar16;
  if (1 < (longlong)uVar17) {
    lVar8 = (uVar17 - 2 >> 1) + 1;
    lVar4 = lVar8 * 2;
    puVar7 = (ushort *)(*param_4 + 0x1c);
    plVar14 = plVar12;
    do {
      uVar10 = (int)plVar12 + (uint)puVar7[-8];
      plVar12 = (longlong *)(ulonglong)uVar10;
      uVar13 = (int)plVar14 + (uint)*puVar7;
      plVar14 = (longlong *)(ulonglong)uVar13;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 0x10;
    } while (lVar8 != 0);
  }
  if (lVar4 < (longlong)uVar17) {
    uVar16 = (uint)*(ushort *)(lVar4 * 0x10 + *param_4 + 0xc);
  }
  local_4e0 = 1;
  local_4e8 = (uVar16 + uVar10 + uVar13) * 4;
  local_4d0 = uVar17;
  lVar4 = (**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,&DAT_146ab6e78,local_4a0);
  local_4b0 = lVar4;
  if (0 < (longlong)uVar17) {
    lVar3 = 0;
    iVar18 = 0;
    uVar17 = local_4d0;
    do {
      lVar8 = *param_4;
      uVar13 = (uint)*(ushort *)(lVar8 + 0xc + lVar3);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar18 * 4 + lVar4),*(void **)(lVar8 + lVar3),
                 (ulonglong)uVar13 << 2);
      FMemory::Free(*(undefined8 *)(lVar8 + lVar3));
      iVar18 = iVar18 + uVar13;
      *(undefined8 *)(lVar8 + lVar3) = 0;
      lVar3 = lVar3 + 0x10;
      uVar17 = uVar17 + -1;
      param_4 = local_4c8;
    } while (uVar17 != 0);
    puVar19 = (ulonglong *)(local_4c0 + 0x30);
    uVar15 = local_4a0;
    lVar3 = local_4b8;
    uVar17 = local_4d0;
    param_1 = local_4c0;
  }
  (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,param_1,uVar15);
  local_4d8 = 0;
  if (0 < (longlong)uVar17) {
    local_430 = (ulonglong)_tls_index;
    local_4b0 = 0;
    do {
      lVar4 = *param_4;
      iVar18 = local_4d8 * 4;
      local_4d0 = CONCAT44(local_4d0._4_4_,(uint)*(ushort *)(lVar4 + 0xc + local_4b0));
      uVar1 = *(ushort *)(lVar4 + 10 + local_4b0);
      uVar2 = *(ushort *)(lVar4 + 8 + local_4b0);
      puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if ((undefined8 *)puVar19[1] < puVar5) {
        FMemStackBase::AllocateNewChunk(puVar19,0x30);
        puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *puVar19 = (ulonglong)puVar5;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar6;
      *(undefined8 **)(param_1 + 8) = puVar6 + 1;
      *puVar6 = &PTR_LAB_143f489e0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar6[3] = uVar15;
      *(int *)(puVar6 + 4) = iVar18;
      puVar6[1] = 0;
      uVar15 = DAT_146534600;
      puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if ((undefined8 *)puVar19[1] < puVar5) {
        FMemStackBase::AllocateNewChunk(puVar19,0x30);
        puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *puVar19 = (ulonglong)puVar5;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar6;
      *(undefined8 **)(param_1 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      *puVar6 = &PTR_LAB_143f489e0;
      *(undefined4 *)(puVar6 + 2) = 1;
      puVar6[3] = uVar15;
      local_488 = 0x3b000000;
      local_484 = 0x3b000000;
      local_4e8 = 0;
      local_480 = (float)uVar2 * 0.001953125;
      local_47c = (float)uVar1 * 0.001953125;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_4c0,&local_488);
      lVar4 = local_4c0;
      local_4b8 = local_4c0;
      if (local_4c0 != 0) {
        LOCK();
        *(int *)(local_4c0 + 8) = *(int *)(local_4c0 + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4c0);
      lVar8 = *(longlong *)(lVar3 + 0x48);
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1419f3850(lVar8);
      }
      uVar15 = *(undefined8 *)(lVar8 + 0x38);
      lVar8 = 0;
      if (0 < *(int *)(lVar3 + 0x10)) {
        do {
          if (*(undefined **)(*(longlong *)(lVar3 + 8) + lVar8 * 8) == &DAT_146b051f0) {
            if (lVar8 != -1) {
              puVar9 = *(undefined4 **)(*(longlong *)(lVar3 + 0x18) + lVar8 * 8);
              *puVar9 = *(undefined4 *)(lVar3 + 0xb8);
              goto LAB_14262b59e;
            }
            break;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)(lVar3 + 0x10));
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + local_430 * 8) + 0x38) <
           DAT_146b06d78) && (_Init_thread_header(&DAT_146b06d78), DAT_146b06d78 == -1)) {
        _DAT_146b06d70 = 0;
        DAT_146b06d74 = 0;
        DAT_146b06d76 = 0;
        _Init_thread_footer(&DAT_146b06d78);
      }
      puVar9 = (undefined4 *)&DAT_146b06d70;
LAB_14262b59e:
      if (*(char *)((longlong)puVar9 + 6) != '\0') {
        uVar1 = *(ushort *)(puVar9 + 1);
        puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
        if ((undefined8 *)puVar19[1] < puVar5) {
          FMemStackBase::AllocateNewChunk(puVar19);
          puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
          puVar5 = puVar6 + 5;
        }
        *puVar19 = (ulonglong)puVar5;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar6;
        *(undefined8 **)(param_1 + 8) = puVar6 + 1;
        puVar6[1] = 0;
        *puVar6 = &PTR_LAB_144dcb388;
        puVar6[2] = uVar15;
        *(uint *)(puVar6 + 3) = (uint)uVar1;
        puVar6[4] = lVar4;
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4b8);
      lVar4 = DAT_146534670;
      if (DAT_146534670 == 0) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
        FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x8d8);
      }
      puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar6 + 7;
      if ((undefined8 *)puVar19[1] < puVar5) {
        FMemStackBase::AllocateNewChunk(puVar19,0x40);
        puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar6 + 7;
      }
      local_4b0 = local_4b0 + 0x10;
      *puVar19 = (ulonglong)puVar5;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar6;
      *(undefined8 **)(param_1 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_143f489d0;
      local_4d8 = local_4d8 + (int)local_4d0;
      puVar6[2] = lVar4;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x24) = 4;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = 2;
      *(int *)(puVar6 + 6) = (int)local_4d0;
      uVar17 = uVar17 + -1;
      uVar15 = local_4a0;
      param_4 = local_4c8;
    } while (uVar17 != 0);
  }
  puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  local_478 = 0xffffffff00000000;
  uStack_470 = 0xffffffffffffffff;
  puVar5 = puVar6 + 10;
  local_468 = 0xffffffffffffffff;
  uStack_460 = 0xffffffffffffffff;
  local_458 = 0xffffffff;
  uStack_450 = 0;
  if ((undefined8 *)puVar19[1] < puVar5) {
    FMemStackBase::AllocateNewChunk(puVar19,0x58);
    puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 10;
  }
  plVar12 = local_428;
  *puVar19 = (ulonglong)puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar6 + 2) = (undefined4)local_478;
  *(undefined4 *)((longlong)puVar6 + 0x14) = local_478._4_4_;
  *(undefined4 *)(puVar6 + 3) = (undefined4)uStack_470;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_470._4_4_;
  *(undefined4 *)(puVar6 + 4) = (undefined4)local_468;
  *(undefined4 *)((longlong)puVar6 + 0x24) = local_468._4_4_;
  *(undefined4 *)(puVar6 + 5) = (undefined4)uStack_460;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = uStack_460._4_4_;
  *(undefined4 *)(puVar6 + 6) = (undefined4)local_458;
  *(undefined4 *)((longlong)puVar6 + 0x34) = local_458._4_4_;
  *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_450;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_450._4_4_;
  puVar6[9] = local_420;
  puVar6[8] = local_428;
  lVar3 = (**(code **)(*local_428 + 8))(local_428);
  if ((lVar3 == 0) && (lVar3 = (**(code **)(*(longlong *)puVar6[8] + 0x18))(), lVar3 == 0)) {
    (**(code **)(*(longlong *)puVar6[8] + 0x20))();
  }
  lVar3 = (**(code **)(*(longlong *)puVar6[9] + 8))();
  if ((lVar3 == 0) && (lVar3 = (**(code **)(*(longlong *)puVar6[9] + 0x18))(), lVar3 == 0)) {
    (**(code **)(*(longlong *)puVar6[9] + 0x20))();
  }
  puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 3;
  if ((undefined8 *)puVar19[1] < puVar5) {
    FMemStackBase::AllocateNewChunk(puVar19,0x20);
    puVar6 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
  }
  *puVar19 = (ulonglong)puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144e1b878;
  puVar6[2] = plVar12;
  return;
}



// FUNCTION 14262b990 FUN_14262b990 body=70 status=ok
// SIG undefined FUN_14262b990(void)

ulonglong FUN_14262b990(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if (((0 < *(int *)(param_1 + 0x128)) &&
      (((in_RAX = *(ulonglong *)(param_1 + 0x10), in_RAX == 0 ||
        (*(char *)(in_RAX + 0x34) != '\x04')) && (param_2 != 0)))) &&
     (((*(byte *)(param_2 + 0x2c) & 1) != 0 &&
      (((in_RAX = *(ulonglong *)(param_2 + 0x30), (*(byte *)(in_RAX + 0x108) & 1) == 0 ||
        (*(int *)(in_RAX + 0x10c) != 0)) && (*(longlong *)(param_1 + 0x18) != 0)))))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14262b9e0 FUN_14262b9e0 body=173 status=ok
// SIG undefined FUN_14262b9e0(void)

ulonglong FUN_14262b9e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x40);
  uVar2 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0x48);
  plVar1 = plVar3 + uVar2;
  do {
    if (plVar3 == plVar1) {
LAB_14262ba32:
      return uVar2 & 0xffffffffffffff00;
    }
    if ((*plVar3 != 0) && (uVar2 = FUN_142820890(*plVar3,0,0xffffffff), (char)uVar2 != '\0')) {
      if (((0 < *(int *)(param_1 + 0x128)) &&
          (((uVar2 = *(ulonglong *)(param_1 + 0x10), uVar2 == 0 ||
            (*(char *)(uVar2 + 0x34) != '\x04')) && (param_2 != 0)))) &&
         (((*(byte *)(param_2 + 0x2c) & 1) != 0 &&
          (((uVar2 = *(ulonglong *)(param_2 + 0x30), (*(byte *)(uVar2 + 0x108) & 1) == 0 ||
            (*(int *)(uVar2 + 0x10c) != 0)) && (*(longlong *)(param_1 + 0x18) != 0)))))) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      goto LAB_14262ba32;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 14262baa0 FUN_14262baa0 body=251 status=ok
// SIG undefined FUN_14262baa0(void)

void FUN_14262baa0(longlong param_1,int param_2)

{
  ushort uVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar5 = *(int *)(param_1 + 0x128);
  uVar8 = (ulonglong)param_2;
  if (param_2 < iVar5) {
    pbVar3 = (byte *)0x0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58);
    if (plVar2 != (longlong *)0x0) {
      pbVar3 = (byte *)FUN_142627a50(param_1,plVar2);
      if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) == 0)) {
        pbVar3 = (byte *)0x0;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x108);
    lVar6 = uVar8 * 2;
    uVar1 = *(ushort *)(lVar6 + lVar4);
    if (pbVar3 != (byte *)0x0) {
      (**(code **)(*plVar2 + 0x388))
                (plVar2,param_1,pbVar3,
                 (longlong)(int)(*(int *)(param_1 + 0x124) * (uint)uVar1) +
                 *(longlong *)(param_1 + 0x100));
      lVar4 = *(longlong *)(param_1 + 0x108);
      iVar5 = *(int *)(param_1 + 0x128);
    }
    if (param_2 < iVar5 + -1) {
      do {
        lVar6 = lVar6 + 2;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *(undefined2 *)(*(longlong *)(param_1 + 0x108) + -2 + lVar6) =
             *(undefined2 *)(*(longlong *)(param_1 + 0x108) + lVar6);
        iVar5 = *(int *)(param_1 + 0x128);
      } while ((int)uVar7 < iVar5 + -1);
      lVar4 = *(longlong *)(param_1 + 0x108);
    }
    *(ushort *)(lVar4 + -2 + (longlong)iVar5 * 2) = uVar1;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
  }
  return;
}



// FUNCTION 14262bba0 FUN_14262bba0 body=301 status=ok
// SIG undefined FUN_14262bba0(void)

void FUN_14262bba0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x128);
  if (iVar2 < 1) {
    *(uint *)(param_1 + 0x1e8) = *(uint *)(param_1 + 0x1e8) & 0xfffffffd;
    return;
  }
  pbVar5 = (byte *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (((*(longlong *)(lVar3 + 0x58) != 0) &&
      (pbVar5 = (byte *)FUN_142627a50(), pbVar5 != (byte *)0x0)) && ((*pbVar5 & 2) == 0)) {
    pbVar5 = (byte *)0x0;
  }
  iVar2 = iVar2 + -1;
  lVar7 = (longlong)iVar2;
  if (iVar2 < 0) {
    *(uint *)(param_1 + 0x1e8) = *(uint *)(param_1 + 0x1e8) & 0xfffffffd;
  }
  else {
    do {
      lVar6 = *(longlong *)(param_1 + 0x108);
      uVar1 = *(ushort *)(lVar6 + lVar7 * 2);
      if ((1.0 < *(float *)((longlong)(int)((uint)uVar1 * *(int *)(param_1 + 0x124)) +
                            *(longlong *)(param_1 + 0x100) + 0xc)) ||
         ((*(byte *)(param_1 + 0x1e8) & 2) != 0)) {
        if (pbVar5 != (byte *)0x0) {
          plVar4 = *(longlong **)(lVar3 + 0x58);
          (**(code **)(*plVar4 + 0x388))(plVar4,param_1,pbVar5);
          lVar6 = *(longlong *)(param_1 + 0x108);
        }
        *(undefined2 *)(lVar6 + lVar7 * 2) =
             *(undefined2 *)(lVar6 + -2 + (longlong)*(int *)(param_1 + 0x128) * 2);
        *(ushort *)(*(longlong *)(param_1 + 0x108) + -2 + (longlong)*(int *)(param_1 + 0x128) * 2) =
             uVar1;
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    *(uint *)(param_1 + 0x1e8) = *(uint *)(param_1 + 0x1e8) & 0xfffffffd;
  }
  return;
}



// FUNCTION 14262bd00 ModifyCompilationEnvironment body=150 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TParticleInjectionPS<1>::ModifyCompilationEnvironment(int *param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_14262fb40(param_2,L"STATIC_PROPERTIES_ONLY",1);
  local_18 = local_res10;
  local_res10[0] = 0;
  local_10 = local_res8;
  local_res8[0] = 0x26;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res18,&local_18,0);
  if (*param_1 == 8) {
    iVar1 = *(int *)(param_2 + 0xb8);
    *(int *)(param_2 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262bda0 ModifyCompilationEnvironment body=150 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TParticleInjectionPS<0>::ModifyCompilationEnvironment(int *param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_14262fb40(param_2,L"STATIC_PROPERTIES_ONLY",0);
  local_18 = local_res10;
  local_res10[0] = 0;
  local_10 = local_res8;
  local_res8[0] = 1;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res18,&local_18,0);
  if (*param_1 == 8) {
    iVar1 = *(int *)(param_2 + 0xb8);
    *(int *)(param_2 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262be40 ModifyCompilationEnvironment body=210 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TParticleSimulationPS<1>::ModifyCompilationEnvironment(int *param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141a172f0(param_2,L"PARTICLE_SIMULATION_PIXELSHADER",1);
  FUN_141a172f0(param_2,L"MAX_VECTOR_FIELDS",4);
  FUN_14262fb40(param_2,L"DEPTH_BUFFER_COLLISION",1);
  FUN_14262fb40(param_2,L"DISTANCE_FIELD_COLLISION",0);
  local_18 = local_res10;
  local_res10[0] = 0;
  local_10 = local_res8;
  local_res8[0] = 1;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res18,&local_18,0);
  if (*param_1 == 8) {
    iVar1 = *(int *)(param_2 + 0xb8);
    *(int *)(param_2 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262bf20 ModifyCompilationEnvironment body=210 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TParticleSimulationPS<2>::ModifyCompilationEnvironment(int *param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141a172f0(param_2,L"PARTICLE_SIMULATION_PIXELSHADER",1);
  FUN_141a172f0(param_2,L"MAX_VECTOR_FIELDS",4);
  FUN_14262fb40(param_2,L"DEPTH_BUFFER_COLLISION",0);
  FUN_14262fb40(param_2,L"DISTANCE_FIELD_COLLISION",1);
  local_18 = local_res10;
  local_res10[0] = 0;
  local_10 = local_res8;
  local_res8[0] = 1;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res18,&local_18,0);
  if (*param_1 == 8) {
    iVar1 = *(int *)(param_2 + 0xb8);
    *(int *)(param_2 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262c000 ModifyCompilationEnvironment body=210 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TParticleSimulationPS<0>::ModifyCompilationEnvironment(int *param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141a172f0(param_2,L"PARTICLE_SIMULATION_PIXELSHADER",1);
  FUN_141a172f0(param_2,L"MAX_VECTOR_FIELDS",4);
  FUN_14262fb40(param_2,L"DEPTH_BUFFER_COLLISION",0);
  FUN_14262fb40(param_2,L"DISTANCE_FIELD_COLLISION",0);
  local_18 = local_res10;
  local_res10[0] = 0;
  local_10 = local_res8;
  local_res8[0] = 1;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res18,&local_18,0);
  if (*param_1 == 8) {
    iVar1 = *(int *)(param_2 + 0xb8);
    *(int *)(param_2 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262c0e0 ModifyCompilationEnvironment body=138 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FGPUSpriteVertexFactory::ModifyCompilationEnvironment
               (int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_1404a3a40(param_3,L"PARTICLE_FACTORY",&DAT_143f591f0);
  FUN_141a172f0(param_3,L"PARTICLES_PER_INSTANCE",0x10);
  FUN_1404a3a40(param_3,L"PARTICLE_SPRITE_FACTORY",&DAT_143f591f0);
  if (param_1 == 8) {
    iVar1 = *(int *)(param_3 + 0xb8);
    *(int *)(param_3 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_3 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262c170 ModifyCompilationEnvironment body=97 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FParticleBoundsCS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"THREAD_COUNT",0x40);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 14262c1e0 ModifyCompilationEnvironment body=76 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FParticleInjectionVS::ModifyCompilationEnvironment(int *param_1,longlong param_2)

{
  int iVar1;
  
  if (*param_1 == 8) {
    iVar1 = *(int *)(param_2 + 0xb8);
    *(int *)(param_2 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262c230 ModifyCompilationEnvironment body=153 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FParticleSimulationClearPS::ModifyCompilationEnvironment(int *param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141a172f0(param_2,L"PARTICLE_CLEAR_PIXELSHADER",1);
  local_18 = local_res10;
  local_res10[0] = 0;
  local_10 = local_res8;
  local_res8[0] = 1;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res18,&local_18,0);
  if (*param_1 == 8) {
    iVar1 = *(int *)(param_2 + 0xb8);
    *(int *)(param_2 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262c2d0 ModifyCompilationEnvironment body=95 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FParticleTileVS::ModifyCompilationEnvironment(int *param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"TILES_PER_INSTANCE",8);
  if (*param_1 == 8) {
    iVar1 = *(int *)(param_2 + 0xb8);
    *(int *)(param_2 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0xb0),iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 10;
  }
  return;
}



// FUNCTION 14262c370 FUN_14262c370 body=261 status=ok
// SIG undefined FUN_14262c370(void)

void FUN_14262c370(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x68);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"Distance",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x98) = uVar2;
    }
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0xa0);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"TaperFactor",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0xd0) = uVar2;
    }
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0xd8);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"TaperScale",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x108) = uVar2;
    }
  }
  return;
}



// FUNCTION 14262c480 FUN_14262c480 body=586 status=ok
// SIG undefined FUN_14262c480(void)

void FUN_14262c480(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  uint in_stack_ffffffffffffffa8;
  uint uVar5;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    puVar1 = (undefined8 *)FName::FName(&local_res8,L"DistributionNoiseSpeed",1);
    lVar2 = NewObject<UDistributionVectorConstant>
                      (param_1,*puVar1,0,0,in_stack_ffffffffffffffa8 & 0xffffff00,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x4248000042480000;
    *(undefined4 *)(lVar2 + 0x40) = 0x42480000;
    *(longlong *)(param_1 + 0x120) = lVar2;
    plVar3 = (longlong *)FName::FName(local_res10,L"DistributionNoiseRange",1);
    local_res8 = 0;
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar4 = UDistributionVectorUniform::GetPrivateStaticClass();
    uVar5 = 0;
    lVar2 = FUN_1417985e0(uVar4,param_1,lVar2,0,0,0,0,0,0);
    *(undefined8 *)(lVar2 + 0x44) = 0xc2480000c2480000;
    *(undefined4 *)(lVar2 + 0x4c) = 0xc2480000;
    *(undefined8 *)(lVar2 + 0x38) = 0x4248000042480000;
    *(undefined4 *)(lVar2 + 0x40) = 0x42480000;
    *(longlong *)(param_1 + 0x90) = lVar2;
    puVar1 = (undefined8 *)FName::FName(&local_res8,L"DistributionNoiseRangeScale",1);
    uVar5 = uVar5 & 0xffffff00;
    lVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,uVar5,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
    *(longlong *)(param_1 + 200) = lVar2;
    puVar1 = (undefined8 *)FName::FName(&local_res8,L"DistributionNoiseTangentStrength",1);
    lVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,uVar5 & 0xffffff00,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x437a0000;
    *(longlong *)(param_1 + 0x170) = lVar2;
    plVar3 = (longlong *)FName::FName(local_res10,L"DistributionNoiseScale",1);
    local_res8 = 0;
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar4 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
    uVar4 = FUN_1417985e0(uVar4,param_1,lVar2,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x1b8) = uVar4;
  }
  return;
}



// FUNCTION 14262c6d0 FUN_14262c6d0 body=338 status=ok
// SIG undefined FUN_14262c6d0(void)

void FUN_14262c6d0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x50);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionSource",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(longlong *)(param_1 + 0x98) = lVar3;
    }
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0xa8);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionSourceTangent",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(longlong *)(param_1 + 0xf0) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x100);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionSourceStrength",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x41c80000;
      *(longlong *)(param_1 + 0x130) = lVar3;
    }
  }
  return;
}



// FUNCTION 14262c830 FUN_14262c830 body=343 status=ok
// SIG undefined FUN_14262c830(void)

void FUN_14262c830(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x48);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTarget",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x43fa0000;
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(longlong *)(param_1 + 0x90) = lVar3;
    }
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0xa0);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTargetTangent",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(longlong *)(param_1 + 0xe8) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0xf8);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTargetStrength",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x41c80000;
      *(longlong *)(param_1 + 0x128) = lVar3;
    }
  }
  return;
}



// FUNCTION 14262c990 FUN_14262c990 body=386 status=ok
// SIG undefined FUN_14262c990(void)

void FUN_14262c990(longlong param_1,undefined8 *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1) == 0) {
    fVar1 = *(float *)(param_1 + 0x148);
    fVar6 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x144);
    fVar2 = *(float *)(param_1 + 0x14c);
    fVar3 = *(float *)(param_1 + 0x60);
    fVar4 = *(float *)(param_1 + 100);
    fVar7 = fVar3 - fVar1;
    fVar5 = fVar4 - fVar2;
    if (1.0 < fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) {
      *(float *)(param_2 + 2) =
           (*(float *)(param_1 + 0x144) - *(float *)(param_1 + 0x5c)) * param_3 +
           *(float *)(param_2 + 2);
      *(float *)((longlong)param_2 + 0x14) =
           (fVar1 - fVar3) * param_3 + *(float *)((longlong)param_2 + 0x14);
      *(float *)(param_2 + 3) = (fVar2 - fVar4) * param_3 + *(float *)(param_2 + 3);
    }
  }
  *param_2 = param_2[2];
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_2 + 3);
  *(float *)(param_2 + 2) = param_4 * *(float *)((longlong)param_2 + 0x3c) + *(float *)(param_2 + 2)
  ;
  *(float *)((longlong)param_2 + 0x14) =
       *(float *)(param_2 + 8) * param_4 + *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) = *(float *)((longlong)param_2 + 0x44) * param_4 + *(float *)(param_2 + 3)
  ;
  *(float *)(param_2 + 4) = param_4 * *(float *)((longlong)param_2 + 0x3c) + *(float *)(param_2 + 4)
  ;
  *(float *)((longlong)param_2 + 0x24) =
       *(float *)(param_2 + 8) * param_4 + *(float *)((longlong)param_2 + 0x24);
  *(float *)(param_2 + 5) = *(float *)((longlong)param_2 + 0x44) * param_4 + *(float *)(param_2 + 5)
  ;
  *(uint *)(param_2 + 0xd) = *(uint *)(param_2 + 0xd) | *(uint *)(param_1 + 300) & 0x1ffffff;
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  *(uint *)(param_2 + 0xd) = *(uint *)(param_2 + 0xd) | 0x2000000;
  return;
}



// FUNCTION 14262cb20 FUN_14262cb20 body=1005 status=ok
// SIG undefined FUN_14262cb20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14262cb20(longlong param_1,undefined8 *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [96];
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1) == 0) {
    fVar9 = *(float *)(param_1 + 0x60);
    fVar10 = *(float *)(param_1 + 0x148);
    fVar7 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x144);
    fVar1 = *(float *)(param_1 + 100);
    fVar8 = fVar9 - fVar10;
    fVar2 = *(float *)(param_1 + 0x14c);
    fVar6 = fVar1 - fVar2;
    if (1.0 < fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
      *(float *)(param_2 + 2) =
           (*(float *)(param_1 + 0x144) - *(float *)(param_1 + 0x5c)) * param_3 +
           *(float *)(param_2 + 2);
      *(float *)((longlong)param_2 + 0x14) =
           (fVar10 - fVar9) * param_3 + *(float *)((longlong)param_2 + 0x14);
      *(float *)(param_2 + 3) = (fVar2 - fVar1) * param_3 + *(float *)(param_2 + 3);
    }
  }
  uVar12 = 0;
  *param_2 = param_2[2];
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_2 + 3);
  *(float *)(param_2 + 2) = param_4 * *(float *)((longlong)param_2 + 0x3c) + *(float *)(param_2 + 2)
  ;
  *(float *)((longlong)param_2 + 0x14) =
       *(float *)(param_2 + 8) * param_4 + *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) = *(float *)((longlong)param_2 + 0x44) * param_4 + *(float *)(param_2 + 3)
  ;
  *(float *)(param_2 + 4) = param_4 * *(float *)((longlong)param_2 + 0x3c) + *(float *)(param_2 + 4)
  ;
  *(float *)((longlong)param_2 + 0x24) =
       *(float *)(param_2 + 8) * param_4 + *(float *)((longlong)param_2 + 0x24);
  *(float *)(param_2 + 5) = *(float *)((longlong)param_2 + 0x44) * param_4 + *(float *)(param_2 + 5)
  ;
  *(uint *)(param_2 + 0xd) = *(uint *)(param_2 + 0xd) | *(uint *)(param_1 + 300) & 0x1ffffff;
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  *(uint *)(param_2 + 0xd) = *(uint *)(param_2 + 0xd) | 0x2000000;
  puVar5 = (undefined8 *)((longlong)*(int *)(param_1 + 0x1fc) + (longlong)param_2);
  cVar3 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 0x58);
  if ((byte)(cVar3 - 3U) < 2) {
    local_a8 = *(undefined8 *)((longlong)param_2 + 0x3c);
    local_a0 = *(float *)((longlong)param_2 + 0x44);
    if (cVar3 == '\x04') {
      local_a8 = param_2[2];
      local_a0 = *(float *)(param_2 + 3);
    }
    fVar9 = local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8 +
            local_a0 * local_a0;
    if (1e-08 < fVar9) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      local_a0 = local_a0 * fVar10;
      local_a8 = CONCAT44(local_a8._4_4_ * fVar10,(float)local_a8 * fVar10);
    }
    local_98 = 0x3f800000;
    local_90 = 0;
    FQuat::FindBetweenNormals(local_68,&local_98,&local_a8);
    FQuat::Euler(local_68,&local_88);
    *(float *)(puVar5 + 3) = local_88 + *(float *)(puVar5 + 3);
    *(float *)((longlong)puVar5 + 0x1c) = local_84 + *(float *)((longlong)puVar5 + 0x1c);
    *(float *)(puVar5 + 4) = local_80 + *(float *)(puVar5 + 4);
  }
  FUN_1424118e0(*(longlong *)(param_1 + 0x1f0) + 0x70,&local_78,param_4,0,0,
                *(longlong *)(param_1 + 0x1f0) + 0xc0);
  *puVar5 = local_78;
  *(undefined4 *)(puVar5 + 1) = local_70;
  if (*(int *)(param_1 + 0x200) != 0) {
    iVar4 = *(int *)(param_1 + 0x1fc);
    puVar5 = (undefined8 *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x200));
    *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(param_2 + 7);
    *puVar5 = *(undefined8 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((longlong)param_2 + 0x44);
    *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)((longlong)param_2 + 0x5c);
    *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)((longlong)param_2 + 100);
    puVar5[3] = *(undefined8 *)((longlong)iVar4 + 0x18 + (longlong)param_2);
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)((longlong)iVar4 + 0x20 + (longlong)param_2);
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar12 = *(undefined4 *)((longlong)*(int *)(param_1 + 0x4c) + 4 + (longlong)param_2);
    }
    *(undefined4 *)((longlong)puVar5 + 0x34) = uVar12;
    iVar4 = *(int *)(param_1 + 0x48);
    if (iVar4 == 0) {
      *(undefined8 *)((longlong)puVar5 + 0x24) = _DAT_1468b5d90;
      uVar12 = DAT_1468b5d98;
    }
    else {
      *(undefined8 *)((longlong)puVar5 + 0x24) =
           *(undefined8 *)((longlong)iVar4 + 0xc + (longlong)param_2);
      uVar12 = *(undefined4 *)((longlong)iVar4 + 0x14 + (longlong)param_2);
    }
    *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar12;
  }
  return;
}



// FUNCTION 14262cf10 FUN_14262cf10 body=202 status=ok
// SIG undefined FUN_14262cf10(void)

void FUN_14262cf10(longlong param_1,void *param_2,undefined8 *param_3,undefined8 *param_4)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,(longlong)*(int *)(param_1 + 0x120));
  *(undefined8 *)((longlong)param_2 + 0x10) = *param_3;
  *(undefined4 *)((longlong)param_2 + 0x18) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((longlong)param_2 + 0x20) = *param_3;
  *(undefined4 *)((longlong)param_2 + 0x28) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((longlong)param_2 + 0x2c) = *param_4;
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((longlong)param_2 + 0x3c) = *param_4;
  *(undefined4 *)((longlong)param_2 + 0x44) = *(undefined4 *)(param_4 + 1);
  *(float *)((longlong)param_2 + 0x10) =
       *(float *)((longlong)param_2 + 0x10) - *(float *)(param_1 + 0x1b8);
  *(float *)((longlong)param_2 + 0x14) =
       *(float *)((longlong)param_2 + 0x14) - *(float *)(param_1 + 0x1bc);
  *(float *)((longlong)param_2 + 0x18) =
       *(float *)((longlong)param_2 + 0x18) - *(float *)(param_1 + 0x1c0);
  *(undefined4 *)((longlong)param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x1e0);
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
  return;
}



// FUNCTION 14262cfe0 FUN_14262cfe0 body=332 status=ok
// SIG undefined FUN_14262cfe0(void)

void FUN_14262cfe0(longlong param_1,void *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  _guard_xfg_dispatch_icall_nop(param_2,0,(longlong)*(int *)(param_1 + 0x120));
  *(undefined8 *)((longlong)param_2 + 0x10) = *param_3;
  *(undefined4 *)((longlong)param_2 + 0x18) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((longlong)param_2 + 0x20) = *param_3;
  *(undefined4 *)((longlong)param_2 + 0x28) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((longlong)param_2 + 0x2c) = *param_4;
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((longlong)param_2 + 0x3c) = *param_4;
  *(undefined4 *)((longlong)param_2 + 0x44) = *(undefined4 *)(param_4 + 1);
  *(float *)((longlong)param_2 + 0x10) =
       *(float *)((longlong)param_2 + 0x10) - *(float *)(param_1 + 0x1b8);
  *(float *)((longlong)param_2 + 0x14) =
       *(float *)((longlong)param_2 + 0x14) - *(float *)(param_1 + 0x1bc);
  *(float *)((longlong)param_2 + 0x18) =
       *(float *)((longlong)param_2 + 0x18) - *(float *)(param_1 + 0x1c0);
  *(undefined4 *)((longlong)param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x1e0);
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  if (lVar2 != 0) {
    uVar5 = 0;
    if (*(char *)(lVar2 + 0x50) == '\0') {
      iVar1 = *(int *)(lVar2 + 0x48);
      if (iVar1 < 1) {
        uVar5 = 0;
      }
      else {
        iVar3 = rand();
        uVar5 = (ulonglong)(byte)(iVar1 + -1);
        uVar4 = (uint)((float)iVar3 * 3.051851e-05 * (float)iVar1);
        if ((int)uVar4 <= iVar1 + -1) {
          uVar5 = (ulonglong)(uVar4 & 0xff);
        }
      }
    }
    else if (*(char *)(lVar2 + 0x50) == '\x01') {
      uVar5 = (ulonglong)(*(int *)(param_1 + 0x208) + 1) % (ulonglong)*(uint *)(lVar2 + 0x48);
      *(int *)(param_1 + 0x208) = (int)uVar5;
    }
    *(char *)((longlong)*(int *)(param_1 + 0x204) + (longlong)param_2) = (char)uVar5;
  }
  return;
}



// FUNCTION 14262d130 FUN_14262d130 body=330 status=ok
// SIG undefined FUN_14262d130(void)

undefined8 FUN_14262d130(longlong param_1,undefined8 param_2,void *param_3)

{
  undefined4 uStack_14;
  
  if (param_3 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(param_3,0,0x180);
    *(undefined8 *)((longlong)param_3 + 0x30) = 0;
    *(undefined8 *)((longlong)param_3 + 0x38) = 0;
    *(undefined4 *)((longlong)param_3 + 0x40) = 0;
    FWeakObjectPtr::operator=((longlong)param_3 + 0x44);
    *(undefined8 *)((longlong)param_3 + 0x50) = 0;
    FWeakObjectPtr::operator=((longlong)param_3 + 0x58);
    *(undefined4 *)((longlong)param_3 + 0x60) = 0xffffffff;
    *(undefined8 *)((longlong)param_3 + 100) = 0;
    *(undefined8 *)((longlong)param_3 + 0x6c) = 0;
    *(undefined4 *)((longlong)param_3 + 0x74) = 0;
    *(undefined8 *)((longlong)param_3 + 0x80) = 0;
    *(undefined4 *)((longlong)param_3 + 0x88) = 0;
    FWeakObjectPtr::operator=((longlong)param_3 + 0x8c);
    *(undefined8 *)((longlong)param_3 + 0x98) = 0;
    FWeakObjectPtr::operator=((longlong)param_3 + 0xa0);
    *(undefined4 *)((longlong)param_3 + 0xa8) = 0xffffffff;
    *(undefined8 *)((longlong)param_3 + 0xac) = 0;
    *(undefined8 *)((longlong)param_3 + 0xb4) = 0;
    *(undefined4 *)((longlong)param_3 + 0xbc) = 0;
    *(undefined4 *)((longlong)param_3 + 0x144) = 0xffffffff;
    *(undefined4 *)((longlong)param_3 + 0x148) = 0;
    *(undefined4 *)((longlong)param_3 + 0x14c) = 0xffffffff;
    *(undefined4 *)((longlong)param_3 + 0x150) = 0;
    *(undefined4 *)((longlong)param_3 + 0x154) = 0xffffffff;
    *(undefined4 *)((longlong)param_3 + 0x158) = 0;
    *(undefined8 *)((longlong)param_3 + 0x160) = 0;
    *(undefined8 *)((longlong)param_3 + 0x168) = 0;
    _guard_xfg_dispatch_icall_nop((void *)((longlong)param_3 + 0xe0),0,0x90);
    *(undefined4 *)((longlong)param_3 + 0xec) = 0x3f800000;
    *(undefined4 *)((longlong)param_3 + 0x170) = 0;
    *(undefined8 *)((longlong)param_3 + 0x178) = 0;
    *(ulonglong *)((longlong)param_3 + 0x170) = CONCAT44(uStack_14,*(undefined4 *)(param_1 + 0x58));
    *(longlong *)((longlong)param_3 + 0x178) = (longlong)param_3 + 0x180;
  }
  return 0xffffffff;
}



// FUNCTION 14262d280 FUN_14262d280 body=255 status=ok
// SIG undefined FUN_14262d280(void)

void FUN_14262d280(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar4 = (longlong)*(int *)(lVar1 + 0x228) * 0x58;
  uVar2 = *(undefined8 *)(lVar4 + 0x30 + lVar1);
  uVar3 = *(undefined8 *)(lVar4 + 0x40 + lVar1);
  puVar5 = puVar7 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar7 = uVar2;
  puVar7[1] = uVar3;
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
  puVar6[3] = puVar7;
  *puVar6 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar6 + 2) = 2;
  *(undefined4 *)(puVar6 + 4) = 1;
  *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  return;
}



// FUNCTION 14262d380 FUN_14262d380 body=728 status=ok
// SIG undefined FUN_14262d380(void)

void FUN_14262d380(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (0 < *(int *)(lVar2 + 0xa8)) {
    iVar7 = 0;
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x18);
      plVar3 = *(longlong **)(lVar8 + *(longlong *)(lVar2 + 0xa0));
      cVar4 = (**(code **)(*plVar3 + 0x380))(plVar3,1);
      if ((cVar4 != '\0') && (iVar1 = *(int *)(lVar6 + 0x7e8), 0 < iVar1)) {
        lVar6 = *(longlong *)(lVar6 + 0x7e0);
        lVar5 = (longlong)iVar1 * 0x40 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x40) {
          (**(code **)(*plVar3 + 0x388))(plVar3,param_1,lVar6,param_2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x18);
      cVar4 = (**(code **)(*plVar3 + 0x380))(plVar3,2);
      if ((cVar4 != '\0') && (iVar1 = *(int *)(lVar6 + 0x7f8), 0 < iVar1)) {
        lVar6 = *(longlong *)(lVar6 + 0x7f0);
        lVar5 = (longlong)iVar1 * 0x50 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x50) {
          (**(code **)(*plVar3 + 0x388))(plVar3,param_1,lVar6,param_2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x18);
      cVar4 = (**(code **)(*plVar3 + 0x380))(plVar3,3);
      if ((cVar4 != '\0') && (iVar1 = *(int *)(lVar6 + 0x808), 0 < iVar1)) {
        lVar6 = *(longlong *)(lVar6 + 0x800);
        lVar5 = (longlong)iVar1 * 0x78 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x78) {
          (**(code **)(*plVar3 + 0x388))(plVar3,param_1,lVar6,param_2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x18);
      cVar4 = (**(code **)(*plVar3 + 0x380))(plVar3,4);
      if ((cVar4 != '\0') && (iVar1 = *(int *)(lVar6 + 0x818), 0 < iVar1)) {
        lVar5 = *(longlong *)(lVar6 + 0x810);
        lVar6 = lVar5 + (longlong)iVar1 * 0x48;
        for (; lVar5 != lVar6; lVar5 = lVar5 + 0x48) {
          (**(code **)(*plVar3 + 0x388))(plVar3,param_1,lVar5,param_2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x18);
      cVar4 = (**(code **)(*plVar3 + 0x380))(plVar3,5);
      if ((cVar4 != '\0') && (iVar1 = *(int *)(lVar6 + 0x828), 0 < iVar1)) {
        lVar6 = *(longlong *)(lVar6 + 0x820);
        lVar5 = (longlong)iVar1 * 0x60 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x60) {
          (**(code **)(*plVar3 + 0x388))(plVar3,param_1,lVar6,param_2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x18);
      cVar4 = (**(code **)(*plVar3 + 0x380))(plVar3,6);
      if ((cVar4 != '\0') && (iVar1 = *(int *)(lVar6 + 0x838), 0 < iVar1)) {
        lVar6 = *(longlong *)(lVar6 + 0x830);
        lVar5 = (longlong)iVar1 * 0x78 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x78) {
          (**(code **)(*plVar3 + 0x388))(plVar3,param_1,lVar6,param_2);
        }
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < *(int *)(lVar2 + 0xa8));
  }
  return;
}



// FUNCTION 14262d660 RHISupportsGPUParticles body=69 status=ok
// SIG undefined RHISupportsGPUParticles(void)

undefined1 RHISupportsGPUParticles(void)

{
  if ((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
     (((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
      ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14262d6b0 FUN_14262d6b0 body=509 status=ok
// SIG undefined FUN_14262d6b0(void)

int FUN_14262d6b0(longlong *param_1)

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
  int iVar11;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  LOCK();
  plVar9 = param_1 + 0x46;
  lVar7 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  iVar11 = (int)lVar7 + -1;
  if (iVar11 == 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res10);
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)*param_1)(param_1,1);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10._0_4_);
      return 0;
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
    local_res18 = 0;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_14513af68;
    *(undefined1 *)(plVar9 + 3) = 0;
    plVar9[4] = 0;
    plVar9[2] = (longlong)param_1;
    lVar7 = plVar9[4];
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
      UNLOCK();
    }
    FUN_14048a3d0(plVar9,0,0xff,1);
    if (lVar7 != 0) {
      LOCK();
      piVar1 = (int *)(lVar7 + 0x48);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(lVar7);
      }
    }
  }
  return iVar11;
}



// FUNCTION 14262d8b0 FUN_14262d8b0 body=536 status=ok
// SIG undefined FUN_14262d8b0(void)

void FUN_14262d8b0(longlong *param_1)

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
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(param_1[0xb] + 0x30))(param_1 + 0xb);
    (**(code **)(param_1[0x16] + 0x30))();
    (**(code **)(param_1[0x1e] + 0x30))();
    (**(code **)(param_1[0x26] + 0x30))();
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
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
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_14513ad00;
  plVar9[4] = 0;
  plVar9[2] = (longlong)param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_14048a3d0(plVar9,0,0xff,1,0,0);
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



// FUNCTION 14262dad0 FUN_14262dad0 body=604 status=ok
// SIG undefined FUN_14262dad0(void)

void FUN_14262dad0(longlong param_1)

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
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if (((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
      ((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')))) &&
     ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))) {
    FUN_14262d8b0(*(undefined8 *)(param_1 + 0x78));
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      lVar7 = *(longlong *)(param_1 + 0x78);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      (**(code **)(*(longlong *)(lVar7 + 0x170) + 0x20))();
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
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
    *(undefined1 *)(plVar9 + 3) = 0;
    *plVar9 = (longlong)&PTR_FUN_14513b258;
    plVar9[4] = 0;
    plVar9[2] = *(longlong *)(param_1 + 0x78);
    lVar7 = plVar9[4];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res18 = lVar7;
    FUN_140445100(plVar9,0,0xff,1,0,0);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res18);
      }
    }
  }
  return;
}



// FUNCTION 14262dd30 ReleaseRHI body=58 status=ok
// SIG undefined ReleaseRHI(void)

void FParticleStateTextures::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x48,0);
  return;
}



// FUNCTION 14262dd70 ReleaseRHI body=42 status=ok
// SIG undefined ReleaseRHI(void)

void FParticleTileVertexBuffer::ReleaseRHI(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  return;
}



// FUNCTION 14262dda0 FUN_14262dda0 body=439 status=ok
// SIG undefined FUN_14262dda0(void)

void FUN_14262dda0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  BOOL BVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
     (FUN_14262df60(*(longlong *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x200)),
     DAT_1468c217e == '\0')) {
    iVar4 = *(int *)(param_1 + 0x210);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x78);
    if (0 < (longlong)iVar4) {
      do {
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + lVar5 * 4);
        BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x260));
        if (BVar3 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x260));
        }
        *(undefined4 *)(*(longlong *)(lVar2 + 0x248) + (longlong)*(int *)(lVar2 + 600) * 4) = uVar1;
        *(int *)(lVar2 + 600) = *(int *)(lVar2 + 600) + 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x260));
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
    }
    *(undefined4 *)(param_1 + 0x210) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x214)) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x208,0);
    }
  }
  iVar4 = *(int *)(param_1 + 0x230) + 0x1f;
  _Dst = *(void **)(param_1 + 0x228);
  if (*(void **)(param_1 + 0x228) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x218);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  if ((*(int *)(param_1 + 0x214) < 0) && (*(int *)(param_1 + 0x214) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x208,0);
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if ((*(int *)(param_1 + 0x244) < 0) && (*(int *)(param_1 + 0x244) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x238,0);
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if ((*(int *)(param_1 + 0x254) < 0) && (*(int *)(param_1 + 0x254) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x248,0);
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  FUN_14261ed00(*(undefined8 *)(param_1 + 0x200));
  return;
}



// FUNCTION 14262df60 FUN_14262df60 body=620 status=ok
// SIG undefined FUN_14262df60(void)

void FUN_14262df60(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  DWORD DVar6;
  undefined4 uVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    iVar13 = *(int *)(param_2 + 0x240);
    if (iVar13 != -1) {
      bVar4 = (byte)iVar13 & 0x1f;
      if (*(int *)(param_1 + 0x74) != 0) {
        *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x70) * 8) = iVar13;
      }
      lVar10 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar10 + (longlong)iVar13 * 8) = 0xffffffff;
      if (*(int *)(param_1 + 0x74) < 1) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x70);
      }
      *(undefined4 *)(lVar10 + (longlong)iVar13 * 8 + 4) = uVar7;
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
      *(int *)(param_1 + 0x70) = iVar13;
      lVar10 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar10 = param_1 + 0x50;
      }
      puVar3 = (uint *)(lVar10 + (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    }
    *(undefined4 *)(param_2 + 0x240) = 0xffffffff;
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_38._0_4_);
    return;
  }
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
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
  *(undefined1 *)(plVar12 + 4) = 0;
  *plVar12 = (longlong)&PTR_FUN_14513b278;
  plVar12[5] = 0;
  plVar12[2] = param_1;
  plVar12[3] = param_2;
  lVar10 = plVar12[5];
  piVar1 = (int *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar10;
  FUN_1409421c0(plVar12,0,0xff);
  if (lVar10 != 0) {
    LOCK();
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14262e1d0 FUN_14262e1d0 body=147 status=ok
// SIG undefined FUN_14262e1d0(void)

undefined8 FUN_14262e1d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  bVar1 = false;
  iVar4 = 0;
  if (*(int *)(lVar2 + 0x48) < 1) {
    return 0;
  }
  do {
    if (bVar1) goto LAB_14262e241;
    lVar2 = UParticleEmitter::GetLODLevel(lVar2,iVar4);
    if (lVar2 != 0) {
      bVar1 = false;
      if (*(char *)(*(longlong *)(lVar2 + 0x30) + 0xdc) != '\0') {
        bVar1 = true;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(lVar2 + 0x48));
  if (bVar1) {
LAB_14262e241:
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x11c);
    uVar3 = 8;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14262e270 FUN_14262e270 body=251 status=ok
// SIG undefined FUN_14262e270(void)

int FUN_14262e270(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  bVar2 = false;
  iVar6 = 0;
  iVar7 = 0;
  if (0 < *(int *)(lVar4 + 0x48)) {
    do {
      if (bVar2) goto LAB_14262e2d4;
      lVar4 = UParticleEmitter::GetLODLevel(lVar4,iVar7);
      if (lVar4 != 0) {
        bVar2 = false;
        if (*(char *)(*(longlong *)(lVar4 + 0x30) + 0xdc) != '\0') {
          bVar2 = true;
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(lVar4 + 0x48));
    if (bVar2) {
LAB_14262e2d4:
      iVar7 = *(int *)(param_1 + 0x11c);
      iVar6 = 8;
      *(int *)(param_1 + 0x38) = iVar7;
      goto LAB_14262e2ea;
    }
  }
  iVar7 = *(int *)(param_1 + 0x11c);
LAB_14262e2ea:
  iVar5 = iVar6 + 0x48;
  *(int *)(param_1 + 0x1fc) = iVar7 + iVar6;
  iVar7 = iVar5;
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x3b8))();
    iVar1 = *(int *)(param_1 + 0x11c);
    if (cVar3 != '\0') {
      iVar7 = iVar1 + iVar5;
      iVar5 = iVar6 + 0x80;
      *(int *)(param_1 + 0x200) = iVar7;
    }
    iVar7 = iVar5 + 1;
    *(int *)(param_1 + 0x204) = iVar1 + iVar5;
    if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 200) == '\n') {
      *(int *)(param_1 + 0x50) = iVar1 + iVar7;
      return iVar5 + 0xd;
    }
  }
  return iVar7;
}



// FUNCTION 14262e390 FUN_14262e390 body=34 status=ok
// SIG undefined FUN_14262e390(void)

void FUN_14262e390(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x264);
    if (iVar4 != 0) {
      iVar1 = param_2 - iVar4;
      bVar5 = param_2 == iVar4;
    }
    else {
      bVar5 = param_2 == 0;
      iVar1 = param_2;
    }
    if (!bVar5 && (iVar4 != 0 && SBORROW4(param_2,iVar4)) == iVar1 < 0) {
      iVar4 = 0;
      if (param_2 != 0) {
        uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x48,0);
        iVar4 = (int)(uVar2 / 0x48);
        if (iVar4 < param_2) {
          iVar4 = 0x7fffffff;
        }
      }
      if (iVar4 != *(int *)(param_1 + 0x264)) {
        *(int *)(param_1 + 0x264) = iVar4;
        lVar3 = *(longlong *)(param_1 + 600);
        if ((lVar3 != 0) || (iVar4 != 0)) {
          lVar3 = FMemory::Realloc(lVar3,(longlong)iVar4 * 0x48,0);
          *(longlong *)(param_1 + 600) = lVar3;
        }
      }
      return;
    }
  }
  return;
}



// FUNCTION 14262e3c0 FUN_14262e3c0 body=103 status=ok
// SIG undefined FUN_14262e3c0(void)

void FUN_14262e3c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x178)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x170);
      iVar3 = 0;
      lVar2 = 0;
      if (0 < *(int *)(lVar1 + 8 + lVar5)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined1 *)(lVar2 + *(longlong *)(lVar1 + lVar5)) = 0;
          lVar2 = lVar2 + 1;
        } while (iVar3 < *(int *)(lVar1 + 8 + lVar5));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x178));
  }
  return;
}



// FUNCTION 14262e430 FUN_14262e430 body=691 status=ok
// SIG undefined FUN_14262e430(void)

void FUN_14262e430(longlong param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  int local_res8 [2];
  int *local_58;
  uint local_50;
  uint local_4c;
  
  piVar14 = (int *)0x0;
  uVar12 = 0;
  lVar8 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
  local_58 = (int *)0x0;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_4c = 0;
  piVar10 = piVar14;
  piVar11 = piVar14;
  piVar16 = piVar14;
  piVar17 = piVar14;
  if (0 < lVar4) {
    do {
      if (*(longlong *)(*(longlong *)(lVar8 + 0x90) + (longlong)piVar11 * 8) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar3 + 0xb8,local_res8);
        piVar6 = piVar14;
        if (local_res8[0] != -1) {
          piVar6 = (int *)(*(longlong *)(lVar3 + 0xb8) + (longlong)local_res8[0] * 0x18);
        }
        piVar5 = piVar6 + 2;
        if (piVar6 == (int *)0x0) {
          piVar5 = piVar14;
        }
        if (piVar5 != (int *)0x0) {
          iVar2 = *piVar5;
          iVar9 = (int)piVar10;
          local_50 = iVar9 + 1;
          if ((int)piVar16 < (int)local_50) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58,piVar10);
            piVar16 = (int *)(ulonglong)local_4c;
            piVar17 = local_58;
          }
          piVar10 = (int *)(ulonglong)local_50;
          piVar17[iVar9] = iVar2;
        }
      }
      uVar12 = (uint)piVar10;
      piVar11 = (int *)((longlong)piVar11 + 1);
    } while ((longlong)piVar11 < lVar4);
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xb0);
  piVar10 = piVar14;
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      lVar8 = (longlong)
              (int)((uint)*(ushort *)((longlong)piVar10 + *(longlong *)(param_1 + 0x108)) *
                   *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100);
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x3c) = *(undefined8 *)(lVar8 + 0x2c);
      *(undefined4 *)(lVar8 + 0x44) = *(undefined4 *)(lVar8 + 0x34);
      local_50 = *(uint *)(lVar8 + 0x54) & 0x7fffffff;
      *(ulonglong *)(lVar8 + 0x5c) = *(ulonglong *)(lVar8 + 0x4c) & 0x7fffffff7fffffff;
      *(uint *)(lVar8 + 100) = local_50;
      *(undefined4 *)(lVar8 + 0x58) = *(undefined4 *)(lVar8 + 0x48);
      *(undefined8 *)(lVar8 + 0x6c) = *(undefined8 *)(lVar8 + 0x7c);
      *(undefined8 *)(lVar8 + 0x74) = *(undefined8 *)(lVar8 + 0x84);
      if (((*(uint *)(lVar8 + 0x68) >> 0x19 & 1) == 0) || ((~bVar1 & 1) == 0)) {
        fVar18 = param_2 * *(float *)(lVar8 + 0x1c);
      }
      else {
        fVar18 = 0.0;
      }
      *(float *)(lVar8 + 0xc) = fVar18 + *(float *)(lVar8 + 0xc);
      iVar2 = *(int *)(param_1 + 0x4c);
      if (0 < iVar2) {
        *(undefined4 *)((longlong)iVar2 + 4 + lVar8) = *(undefined4 *)(iVar2 + lVar8);
      }
      if (0 < (int)uVar12) {
        uVar15 = (ulonglong)uVar12;
        piVar11 = piVar17;
        do {
          iVar2 = *piVar11;
          piVar11 = piVar11 + 1;
          puVar7 = (undefined8 *)(iVar2 + lVar8);
          *(undefined8 *)((longlong)puVar7 + 0x3c) = *(undefined8 *)((longlong)puVar7 + 0xc);
          *(undefined8 *)((longlong)puVar7 + 0xc) = *puVar7;
          *(undefined4 *)((longlong)puVar7 + 0x44) = *(undefined4 *)((longlong)puVar7 + 0x14);
          *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)(puVar7 + 1);
          puVar7[6] = *(undefined8 *)((longlong)puVar7 + 0x24);
          *(undefined4 *)(puVar7 + 7) = *(undefined4 *)((longlong)puVar7 + 0x2c);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar10 = (int *)((longlong)piVar10 + 2);
    } while ((int)uVar13 < *(int *)(param_1 + 0x128));
  }
  if (piVar17 == (int *)0x0) {
    return;
  }
  FMemory::Free(piVar17);
  return;
}



// FUNCTION 14262e6f0 FUN_14262e6f0 body=258 status=ok
// SIG undefined FUN_14262e6f0(void)

undefined8 FUN_14262e6f0(longlong param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((0 < *(int *)(DAT_146b17150 + 0x8dc)) &&
     ((param_2 < 0 || (*(int *)(DAT_146b17150 + 0x8dc) < param_2)))) {
    return 0;
  }
  if (*(int *)(param_1 + 0x130) < param_2) {
    uVar1 = FMemory::Realloc(*(undefined8 *)(param_1 + 0x100),
                             (longlong)(*(int *)(param_1 + 0x124) * param_2),0);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    if (*(longlong *)(param_1 + 0x108) == 0) {
      *(undefined4 *)(param_1 + 0x130) = 0;
    }
    uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x108),(longlong)(param_2 + 1) * 2,0);
    uVar4 = (ulonglong)*(int *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x108) = uVar1;
    if (*(int *)(param_1 + 0x130) < param_2) {
      lVar2 = uVar4 * 2;
      do {
        *(short *)(lVar2 + *(longlong *)(param_1 + 0x108)) = (short)uVar4;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        lVar2 = lVar2 + 2;
      } while ((int)uVar3 < param_2);
    }
    *(int *)(param_1 + 0x130) = param_2;
  }
  if (param_3 != '\0') {
    lVar2 = UParticleEmitter::GetLODLevel(*(undefined8 *)(param_1 + 0x10),0);
    if (*(int *)(lVar2 + 0xb4) < *(int *)(param_1 + 0x130)) {
      *(int *)(lVar2 + 0xb4) = *(int *)(param_1 + 0x130);
    }
  }
  return 1;
}



// FUNCTION 14262e800 FUN_14262e800 body=349 status=ok
// SIG undefined FUN_14262e800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14262e800(longlong param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(int *)(param_1 + 0x130);
  if ((*(int *)(DAT_146b17150 + 0x8dc) < 1) ||
     ((-1 < param_2 && (param_2 <= *(int *)(DAT_146b17150 + 0x8dc))))) {
    if (*(int *)(param_1 + 0x130) < param_2) {
      uVar1 = FMemory::Realloc(*(undefined8 *)(param_1 + 0x100),
                               (longlong)(*(int *)(param_1 + 0x124) * param_2),0);
      *(undefined8 *)(param_1 + 0x100) = uVar1;
      if (*(longlong *)(param_1 + 0x108) == 0) {
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
      uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x108),(longlong)(param_2 + 1) * 2,0);
      uVar4 = (ulonglong)*(int *)(param_1 + 0x130);
      *(undefined8 *)(param_1 + 0x108) = uVar1;
      if (*(int *)(param_1 + 0x130) < param_2) {
        lVar2 = uVar4 * 2;
        do {
          *(short *)(lVar2 + *(longlong *)(param_1 + 0x108)) = (short)uVar4;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          lVar2 = lVar2 + 2;
        } while ((int)uVar3 < param_2);
      }
      *(int *)(param_1 + 0x130) = param_2;
    }
    if (param_3 != '\0') {
      lVar2 = UParticleEmitter::GetLODLevel(*(undefined8 *)(param_1 + 0x10),0);
      if (*(int *)(lVar2 + 0xb4) < *(int *)(param_1 + 0x130)) {
        *(int *)(lVar2 + 0xb4) = *(int *)(param_1 + 0x130);
      }
    }
    if (*(char *)(param_1 + 0x1f8) != '\0') {
      for (; lVar5 < param_2; lVar5 = lVar5 + 1) {
        lVar2 = (longlong)
                (int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x108) + lVar5 * 2) *
                     *(int *)(param_1 + 0x124)) + (longlong)*(int *)(param_1 + 0x1fc) +
                *(longlong *)(param_1 + 0x100);
        *(undefined8 *)(lVar2 + 0x3c) = _DAT_1468b5d90;
        *(undefined4 *)(lVar2 + 0x44) = DAT_1468b5d98;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14262e960 FUN_14262e960 body=1116 status=ok
// SIG undefined FUN_14262e960(void)

void FUN_14262e960(longlong param_1,int param_2,int param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,longlong param_8,char param_9,char param_10,
                  char param_11,char param_12)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_28;
  float local_20;
  
  if (param_9 == '\0') {
    if (param_2 == 1) {
      if (*(char *)((longlong)param_4 + 0x3d) == '\0') goto LAB_14262ea78;
    }
    else if (param_2 < 2) {
LAB_14262ea78:
      lVar7 = *(longlong *)(param_1 + 0x18);
      pfVar6 = (float *)FUN_1424118e0(param_5,&local_28,*(undefined4 *)(param_1 + 0x13c),lVar7,0,0);
      if (param_12 == '\0') {
        fVar10 = *(float *)(lVar7 + 0x210);
        fVar4 = *(float *)(lVar7 + 0x214);
        fVar14 = *(float *)(lVar7 + 0x218);
        fVar5 = *(float *)(lVar7 + 0x21c);
        fVar13 = *pfVar6 * *(float *)(lVar7 + 0x230);
        fVar16 = pfVar6[1] * *(float *)(lVar7 + 0x234);
        fVar17 = pfVar6[2] * *(float *)(lVar7 + 0x238);
        fVar15 = fVar17 * fVar4 - fVar16 * fVar14;
        fVar11 = fVar13 * fVar14 - fVar17 * fVar10;
        fVar12 = fVar16 * fVar10 - fVar13 * fVar4;
        fVar15 = fVar15 + fVar15;
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar12 + fVar12;
        local_20 = (fVar11 * fVar10 - fVar15 * fVar4) + fVar5 * fVar12 + fVar17 +
                   *(float *)(lVar7 + 0x228);
        *(ulonglong *)param_4 =
             CONCAT44((fVar15 * fVar14 - fVar12 * fVar10) + fVar5 * fVar11 + fVar16 +
                      *(float *)(lVar7 + 0x224),
                      (fVar12 * fVar4 - fVar11 * fVar14) + fVar5 * fVar15 + fVar13 +
                      *(float *)(lVar7 + 0x220));
        param_4[2] = local_20;
      }
      else {
        *(undefined8 *)param_4 = *(undefined8 *)pfVar6;
        param_4[2] = pfVar6[2];
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120);
        if (lVar7 == 0) {
          lVar7 = FUN_1423407b0();
        }
        local_28 = *(undefined8 *)(lVar7 + 0x7bc);
        iVar1 = *(int *)(lVar7 + 0x7c4);
        *param_4 = *param_4 - (float)(int)local_28;
        param_4[1] = param_4[1] - (float)(int)((ulonglong)local_28 >> 0x20);
        param_4[2] = param_4[2] - (float)iVar1;
      }
    }
    else if (param_2 < 4) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x6f0);
      plVar2 = *(longlong **)(lVar7 + 0x40);
      for (plVar9 = plVar2; plVar9 != plVar2 + *(int *)(lVar7 + 0x48); plVar9 = plVar9 + 1) {
        if (*(longlong *)(*plVar9 + 0x28) == param_8) {
          if (plVar9 != plVar2 + *(int *)(lVar7 + 0x48)) {
            fVar10 = (float)((longlong)plVar9 - (longlong)plVar2 >> 3);
            goto LAB_14262e9fa;
          }
          break;
        }
      }
      fVar10 = -NAN;
LAB_14262e9fa:
      param_4[10] = fVar10;
      if ((((fVar10 == -NAN) || (*(int *)(*(longlong *)(param_1 + 0x18) + 0x928) <= (int)fVar10)) ||
          (lVar7 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x920) +
                    (longlong)(int)fVar10 * 8), lVar7 == 0)) || (*(int *)(lVar7 + 0x128) < 1))
      goto LAB_14262ea78;
      lVar3 = *(longlong *)(lVar7 + 0x100);
      lVar7 = (longlong)(int)((uint)**(ushort **)(lVar7 + 0x108) * *(int *)(lVar7 + 0x124));
      *(undefined8 *)param_4 = *(undefined8 *)(lVar7 + 0x10 + lVar3);
      param_4[2] = *(float *)(lVar7 + 0x18 + lVar3);
      *(undefined1 *)((longlong)param_4 + 0x3d) = 1;
    }
    else {
      if (param_2 != 4) goto LAB_14262ea78;
      *(undefined1 *)((longlong)param_4 + 0x3d) = 2;
    }
  }
  if (param_10 != '\0') goto LAB_14262ec91;
  if (param_3 == 0) {
LAB_14262ec06:
    lVar7 = *(longlong *)(param_1 + 0x18);
    fVar15 = *(float *)(lVar7 + 0x230) * 1.0;
    fVar16 = *(float *)(lVar7 + 0x234) * 0.0;
    fVar17 = *(float *)(lVar7 + 0x238) * 0.0;
    fVar10 = *(float *)(lVar7 + 0x210);
    fVar4 = *(float *)(lVar7 + 0x214);
    fVar14 = *(float *)(lVar7 + 0x218);
    fVar5 = *(float *)(lVar7 + 0x21c);
    fVar11 = fVar17 * fVar4 - fVar16 * fVar14;
    fVar12 = fVar15 * fVar14 - fVar17 * fVar10;
    fVar13 = fVar16 * fVar10 - fVar15 * fVar4;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    fVar15 = (fVar13 * fVar4 - fVar12 * fVar14) + fVar5 * fVar11 + fVar15;
    fVar14 = (fVar11 * fVar14 - fVar13 * fVar10) + fVar5 * fVar12 + fVar16;
    local_20 = (fVar12 * fVar10 - fVar11 * fVar4) + fVar5 * fVar13 + fVar17;
  }
  else {
    if (param_3 == 1) {
      if (*(char *)((longlong)param_4 + 0x3f) != '\0') goto LAB_14262ec91;
    }
    else if (param_3 == 3) goto LAB_14262ec06;
    puVar8 = (undefined8 *)
             FUN_1424118e0(param_6,&local_28,*(undefined4 *)(param_1 + 0x13c),
                           *(undefined8 *)(param_1 + 0x18),0,0);
    *(undefined8 *)(param_4 + 0xb) = *puVar8;
    param_4[0xd] = *(float *)(puVar8 + 1);
    if (param_12 != '\0') goto LAB_14262ec91;
    lVar7 = *(longlong *)(param_1 + 0x18);
    fVar10 = *(float *)(lVar7 + 0x210);
    fVar4 = *(float *)(lVar7 + 0x214);
    fVar14 = *(float *)(lVar7 + 0x218);
    fVar5 = *(float *)(lVar7 + 0x21c);
    fVar15 = param_4[0xb] * *(float *)(lVar7 + 0x230);
    fVar16 = param_4[0xc] * *(float *)(lVar7 + 0x234);
    fVar17 = param_4[0xd] * *(float *)(lVar7 + 0x238);
    fVar11 = fVar17 * fVar4 - fVar16 * fVar14;
    fVar12 = fVar15 * fVar14 - fVar17 * fVar10;
    fVar13 = fVar16 * fVar10 - fVar15 * fVar4;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    fVar15 = (fVar13 * fVar4 - fVar12 * fVar14) + fVar5 * fVar11 + fVar15;
    fVar14 = (fVar11 * fVar14 - fVar13 * fVar10) + fVar5 * fVar12 + fVar16;
    local_20 = (fVar12 * fVar10 - fVar11 * fVar4) + fVar5 * fVar13 + fVar17;
  }
  *(ulonglong *)(param_4 + 0xb) = CONCAT44(fVar14,fVar15);
  param_4[0xd] = local_20;
LAB_14262ec91:
  if ((param_11 == '\0') && (*(char *)((longlong)param_4 + 0x3f) == '\0')) {
    fVar10 = (float)FUN_1424116d0(param_7,*(undefined4 *)(param_1 + 0x13c),
                                  *(undefined8 *)(param_1 + 0x18),0);
    param_4[0xe] = fVar10;
  }
  return;
}



// FUNCTION 14262edc0 FUN_14262edc0 body=210 status=ok
// SIG undefined FUN_14262edc0(void)

undefined8 FUN_14262edc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_2 + 600) != 0) {
    lVar1 = FUN_142627a50(param_2);
  }
  FUN_14262e960(param_2,*(undefined1 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0xa4),lVar1 + 0x38
                ,param_1 + 0x50,param_1 + 0xa8,param_1 + 0x100,*(undefined8 *)(param_1 + 0x40),
                *(byte *)(param_1 + 0xa0) & 1,*(byte *)(param_1 + 0xf8) & 1,
                *(byte *)(param_1 + 0x138) & 1,*(byte *)(param_1 + 0x48) & 1);
  return 1;
}



// FUNCTION 14262eea0 FUN_14262eea0 body=217 status=ok
// SIG undefined FUN_14262eea0(void)

undefined8 FUN_14262eea0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_2 + 600) != 0) {
    lVar1 = FUN_142627a50(param_2);
  }
  FUN_14262e960(param_2,*(undefined1 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x9c),lVar1 + 0x80
                ,param_1 + 0x48,param_1 + 0xa0,param_1 + 0xf8,*(undefined8 *)(param_1 + 0x40),
                (byte)(*(uint *)(param_1 + 0x98) >> 1) & 1,*(byte *)(param_1 + 0xf0) & 1,
                *(byte *)(param_1 + 0x130) & 1,*(byte *)(param_1 + 0x98) & 1);
  return 1;
}



// FUNCTION 14262ef80 FUN_14262ef80 body=86 status=ok
// SIG undefined FUN_14262ef80(void)

void FUN_14262ef80(longlong *param_1)

{
  if ((param_1[3] != 0) && (*(longlong *)(param_1[3] + 0x120) == 0)) {
    FUN_1423407b0();
  }
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) | 1;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_142629d00(param_1);
  return;
}



// FUNCTION 14262efe0 FUN_14262efe0 body=79 status=ok
// SIG undefined FUN_14262efe0(void)

void FUN_14262efe0(longlong *param_1)

{
  if ((param_1[3] != 0) && (*(longlong *)(param_1[3] + 0x120) == 0)) {
    FUN_1423407b0();
  }
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) | 1;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014262f028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



// FUNCTION 14262f030 FUN_14262f030 body=923 status=ok
// SIG undefined FUN_14262f030(void)

void FUN_14262f030(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *_Src;
  int iVar7;
  undefined4 local_res8 [2];
  int local_res10 [2];
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  ulonglong local_40;
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  plVar2 = (longlong *)param_2[1];
  if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pvVar6 = (void *)0x0;
  local_58 = (void *)0x0;
  local_4c = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  _Src = pvVar6;
  iVar7 = 0;
  iVar5 = 0;
  if (((*(byte *)(param_2 + 5) & 1) == 0) &&
     (_Src = (void *)0x0, iVar7 = 0, iVar5 = 0, (*(byte *)((longlong)param_2 + 0x2a) & 8) == 0)) {
    iVar4 = *(int *)(param_1 + 0x1c);
    _Src = pvVar6;
    iVar7 = 0;
    iVar5 = 0;
    if (iVar4 != 0) {
      local_50 = iVar4;
      if (0 < iVar4) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0);
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      iVar7 = local_4c;
      iVar5 = local_50;
      _Src = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,*(void **)(param_1 + 0x28),(longlong)iVar4);
    }
    iVar4 = *(int *)(param_1 + 0x20);
    if (iVar4 != 0) {
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        iVar4 = *(int *)(param_1 + 0x20);
        pvVar6 = local_48;
      }
      _guard_xfg_dispatch_icall_nop(pvVar6,*(void **)(param_1 + 0x30),(longlong)iVar4 * 2);
    }
  }
  (**(code **)(*param_2 + 0x78))(param_2,(longlong)iVar5,(longlong)iVar7);
  plVar2 = (longlong *)param_2[1];
  local_res10[0] = iVar5;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_res10[0] = 0;
  }
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
  bVar1 = *(byte *)(param_2 + 5);
  if (-1 < (char)bVar1) {
    if ((-1 < local_res10[0]) &&
       (((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0 || (local_res10[0] < 0x1000001)))) {
      local_50 = local_res10[0];
      if (((local_res10[0] != 0) || (iVar7 != 0)) && ((bVar1 & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_58,local_res10[0],iVar7);
        _Src = local_58;
      }
      iVar5 = local_50;
      (**(code **)(*param_2 + 0x50))(param_2,_Src,(longlong)local_50);
      goto LAB_14262f282;
    }
  }
  *(byte *)(param_2 + 5) = bVar1 | 0x80;
LAB_14262f282:
  FUN_14091a320(param_2,&local_48);
  pvVar6 = local_48;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_142624c00(param_1 + 0x18);
    if (iVar5 != 0) {
      FUN_14261c890(param_1 + 0x18,iVar5,local_40 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x28),_Src,(longlong)*(int *)(param_1 + 0x1c));
      if (*(int *)(param_1 + 0x20) != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 0x30),pvVar6,(longlong)*(int *)(param_1 + 0x20) * 2);
      }
    }
  }
  FUN_1406da970(param_2,param_1 + 0x38);
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x44,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x44,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x48);
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x4c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x4c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1406da970(param_2,param_1 + 0x50);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 14262f3d0 FUN_14262f3d0 body=1227 status=ok
// SIG undefined FUN_14262f3d0(void)

void FUN_14262f3d0(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint local_res8 [2];
  
  FUN_14262f030();
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0xb6),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xb6) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xb4);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xb5);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0xb7),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xb7) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x8c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x8c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar3 = (longlong *)param_2[1];
  local_res8[0] = (uint)*(byte *)(param_1 + 0xb8);
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  *(undefined1 *)(param_1 + 0xb8) = (undefined1)local_res8[0];
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x90,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x90,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x94,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x94,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x98,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x98,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x9c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x9c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x9c) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xa0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xa0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xb9,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xb9) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_1406da970(param_2,param_1 + 0x70);
  FUN_1406da970(param_2,param_1 + 0x7c);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x60);
  puVar2 = (undefined4 *)(param_1 + 0xbc);
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,puVar2,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,puVar2,4);
    }
  }
  else {
    *puVar2 = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xc0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc0) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xc4);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 200,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 200,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 200) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0xcc) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xcc,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0xcc,4);
  }
  return;
}



// FUNCTION 14262f8a0 Serialize body=50 status=ok
// SIG undefined Serialize(void)

void FVectorFieldVisualizationVertexFactoryShaderParameters::Serialize
               (longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0xc);
  return;
}



// FUNCTION 14262f8e0 FUN_14262f8e0 body=170 status=ok
// SIG undefined FUN_14262f8e0(void)

void FUN_14262f8e0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0xc);
  FUN_1419e0b60(param_2,param_1 + 0x12);
  FUN_1419e0b60(param_2,param_1 + 0x16);
  FUN_1419e0b60(param_2,param_1 + 0x1a);
  FUN_1419e0b60(param_2,param_1 + 0x1e);
  FUN_1419e0b60(param_2,param_1 + 0x22);
  FUN_1419e0b60(param_2,param_1 + 0x26);
  FUN_1419e0b60(param_2,param_1 + 0x2a);
  FUN_1419e0b60(param_2,param_1 + 0x2e);
  FUN_1419e0b60(param_2,param_1 + 0x32);
  FUN_1419e0a40(param_2,param_1 + 0x36);
  return;
}



// FUNCTION 14262f9a0 FUN_14262f9a0 body=404 status=ok
// SIG undefined FUN_14262f9a0(void)

void FUN_14262f9a0(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    uVar6 = 0;
    *(int *)(param_1 + 4) = param_2;
    if (param_2 < *(int *)(lVar3 + 0x48)) {
      plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x40) + (longlong)param_2 * 8);
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0;
      plVar4 = *(longlong **)(lVar3 + 0x40);
    }
    param_1[5] = *plVar4;
    iVar8 = (int)param_1[4];
    *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_1[0x32] + (longlong)iVar8 * 4);
    if (param_3 == '\x01') {
      lVar3 = param_1[5];
      *(uint *)(param_1 + 0x1e) =
           *(uint *)(param_1 + 0x1e) ^
           (*(uint *)(*(longlong *)(lVar3 + 0x30) + 100) ^ *(uint *)(param_1 + 0x1e)) & 4;
      *(uint *)(param_1 + 0x1e) =
           (*(uint *)(*(longlong *)(lVar3 + 0x30) + 100) ^ *(uint *)(param_1 + 0x1e)) & 2 ^
           *(uint *)(param_1 + 0x1e);
      lVar3 = *(longlong *)(lVar3 + 0x50);
      if ((int)param_1[0x2f] < iVar8 + 1) {
        TArray<FString,FDefaultAllocator>::AddZeroed
                  (param_1 + 0x2e,(iVar8 - (int)param_1[0x2f]) + 1);
        iVar8 = (int)param_1[4];
      }
      iVar2 = *(int *)(lVar3 + 0xc0);
      plVar4 = (longlong *)((longlong)iVar8 * 0x10 + param_1[0x2e]);
      if ((int)plVar4[1] < iVar2) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(plVar4,iVar2 - (int)plVar4[1]);
        iVar2 = *(int *)(lVar3 + 0xc0);
      }
      uVar7 = uVar6;
      uVar9 = uVar6;
      if (0 < iVar2) {
        do {
          if (*(float *)(uVar9 + 8 + *(longlong *)(lVar3 + 0xb8)) +
              *(float *)(*(longlong *)(param_1[5] + 0x30) + 0xd0) <
              *(float *)((longlong)param_1 + 0x13c)) {
            *(undefined1 *)(uVar7 + *plVar4) = 1;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + 0xc;
        } while ((int)uVar5 < *(int *)(lVar3 + 0xc0));
      }
    }
    lVar3 = *(longlong *)(param_1[3] + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    cVar1 = UWorld::IsGameWorld(lVar3);
    if ((cVar1 == '\x01') && ((*(byte *)(param_1[5] + 0x2c) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014262fb27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf0))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14262fb40 FUN_14262fb40 body=359 status=ok
// SIG undefined FUN_14262fb40(void)

void FUN_14262fb40(longlong param_1,short *param_2,undefined1 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  undefined1 local_res18 [16];
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  short *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  
  FString::PrintfImpl(&local_48,&DAT_144550a50,param_3);
  psVar4 = &DAT_143f3eda8;
  if (local_40 != 0) {
    psVar4 = local_48;
  }
  local_50 = 0;
  local_58 = 0;
  lVar1 = -1;
  if ((psVar4 != (short *)0x0) && (lVar3 = lVar1, *psVar4 != 0)) {
    do {
      lVar3 = lVar3 + 1;
    } while (psVar4[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_50 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar4,(longlong)(int)uVar2 * 2);
  }
  local_68 = 0;
  local_60 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar1 = lVar1 + 1;
    } while (param_2[lVar1] != 0);
    uVar2 = (int)lVar1 + 1;
    local_60 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar2 * 2);
  }
  local_38 = &local_68;
  local_30 = &local_58;
  FUN_140497620(param_1 + 0x200,local_res18,&local_38,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}


