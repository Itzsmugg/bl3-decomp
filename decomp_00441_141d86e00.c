// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141d86e00 FUN_141d86e00 body=1789 status=ok
// SIG undefined FUN_141d86e00(void)

void FUN_141d86e00(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined *puVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  bool bVar18;
  undefined2 *in_stack_fffffffffffffe38;
  undefined4 uVar19;
  int local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  undefined2 *local_190;
  uint local_188;
  int local_184;
  uint local_180;
  uint uStack_17c;
  undefined *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined *local_128;
  undefined2 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  void *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  longlong local_b0 [2];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  bVar18 = false;
  bVar5 = false;
  local_1a0 = (undefined8 *)(param_4 + 0x30 + (longlong)*(int *)(param_6 + 0x1a38) * 0x38);
  if (DAT_1464c314c != 0) {
    if (*(char *)(local_1a0 + 5) != '\0') {
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (param_2,param_3,param_1 + 0xdc,*local_1a0);
      goto LAB_141d86e94;
    }
    cVar8 = IsInRenderingThread();
    if ((cVar8 != '\0') && ((*(byte *)(param_4 + 0x110) & 3) != 0)) {
      FMaterialRenderProxy::InitDynamicRHI(param_4);
    }
  }
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_c0,param_4,param_5,param_6);
  bVar5 = true;
  local_1a0 = (undefined8 *)operator_new(0x38);
  if (local_1a0 != (undefined8 *)0x0) {
    *local_1a0 = 0;
    local_1a0[1] = 0;
    local_1a0[2] = 0;
    local_1a0[3] = 0;
    local_1a0[4] = 0;
    *(undefined1 *)(local_1a0 + 5) = 0;
    local_1a0[6] = 0;
  }
  FUN_14258c390(param_4,local_1a0,local_c0,param_2);
  if (*(char *)(param_1 + 0xe2) != '\0') {
    uVar2 = *(ushort *)(param_1 + 0xe0);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_144e5c310;
    puVar12[2] = param_3;
    *(uint *)(puVar12 + 3) = (uint)uVar2;
    puVar12[4] = local_1a0[1];
    lVar4 = local_1a0[2];
    puVar12[5] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    piVar1 = (int *)(*(longlong *)(puVar12[4] + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
  }
LAB_141d86e94:
  local_1a8 = 0;
  iVar14 = *(int *)(local_1a0 + 4);
  if (*(int *)(param_1 + 0xf0) <= *(int *)(local_1a0 + 4)) {
    iVar14 = *(int *)(param_1 + 0xf0);
  }
  local_108 = (longlong)iVar14;
  if (0 < iVar14) {
    local_198 = 0;
    do {
      puVar15 = (undefined2 *)0x0;
      local_160 = (longlong)local_1a8 * 0x10;
      local_110 = FUN_141d9ac40(param_1,local_1a0[3] + local_160,
                                *(undefined8 *)(*(longlong *)(param_6 + 0x10) + 0x20));
      uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
      if (local_110 == 0) {
        local_190 = (undefined2 *)0x0;
        local_184 = 0;
        local_180 = 0;
        uStack_17c = 1;
        puStack_178 = &DAT_1465340f0;
        iStack_16c = 0;
        uStack_168 = 0;
        iVar14 = (int)DAT_146534108;
        if (iVar14 != 0) {
          puVar17 = DAT_146534100;
          if (DAT_146534100 == (uint *)0x0) {
            puVar17 = (uint *)&DAT_1465340f0;
          }
          uVar3 = *puVar17;
          uStack_168 = 0;
          puVar11 = puVar15;
          puVar16 = puVar15;
          while (uVar3 == 0) {
            iVar9 = (int)puVar11;
            uStack_168 = (int)puVar16 + 0x20;
            puVar16 = (undefined2 *)(ulonglong)uStack_168;
            local_180 = iVar9 + 1;
            puVar11 = (undefined2 *)(ulonglong)local_180;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_141d870ea;
            uVar3 = puVar17[(longlong)iVar9 + 1];
          }
          uStack_17c = -uVar3 & uVar3;
          iVar9 = 0x1f;
          if (uStack_17c != 0) {
            for (; uStack_17c >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_17c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          iStack_16c = (uStack_168 - iVar9) + 0x1f;
          if (iVar14 < iStack_16c) {
LAB_141d870ea:
            iStack_16c = iVar14;
          }
        }
        local_170 = 0xffffffff;
        uStack_140 = CONCAT44(iStack_16c,0xffffffff);
        auStack_88._8_4_ = uStack_168;
        auStack_88._0_8_ = uStack_140;
        auStack_88._12_4_ = uStack_164;
        local_120 = 0;
        uStack_150 = CONCAT44(uStack_17c,local_180);
        local_a0 = &DAT_1465340e0;
        puStack_90 = &DAT_1465340f0;
        local_128 = &DAT_1465340e0;
        local_138._8_4_ = 0x465340e0;
        local_138._0_8_ = auStack_88._8_8_;
        local_138._12_4_ = 1;
        local_158 = (longlong *)&DAT_1465340e0;
        local_148 = &DAT_1465340f0;
        local_58._8_4_ = 0x465340e0;
        local_58._0_8_ = auStack_88._8_8_;
        local_58._12_4_ = 1;
        puVar11 = puVar15;
        puVar16 = puVar15;
        iVar9 = iStack_16c;
        uStack_98 = uStack_150;
        if (iStack_16c < iVar14) {
          do {
            plVar6 = local_158;
            lVar4 = *(longlong *)((longlong)iVar9 * 0x20 + 0x10 + *local_158);
            if (lVar4 == 0) {
              pwVar13 = L"None";
            }
            else {
              local_118 = *(undefined8 *)(lVar4 + 0x10);
              bVar18 = true;
              puVar10 = (undefined8 *)FName::ToString(&local_118,local_b0);
              if (*(int *)(puVar10 + 1) == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)*puVar10;
              }
            }
            FUN_141682af0(*plVar6 + (longlong)iVar9 * 0x20,&local_f0,0);
            puVar11 = &DAT_143f3eda8;
            if (local_e8 != 0) {
              puVar11 = local_f0;
            }
            FString::PrintfImpl(&local_100,L"\n0x%p: %s: %s",lVar4,pwVar13,puVar11);
            _Src = local_100;
            uVar19 = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (local_f8 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = local_f8 + -1;
            }
            if (iVar14 != 0) {
              iVar9 = (int)puVar16;
              local_188 = iVar14 + (uint)(iVar9 == 0) + iVar9;
              if (local_184 < (int)local_188) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,puVar16);
                puVar15 = local_190;
              }
              puVar16 = (undefined2 *)(ulonglong)local_188;
              _guard_xfg_dispatch_icall_nop
                        (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),_Src,
                         (longlong)iVar14 * 2);
              (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar14] = 0;
            }
            iVar14 = (int)puVar16;
            if (local_100 != (void *)0x0) {
              FMemory::Free(local_100);
            }
            if (local_f0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if ((bVar18) && (bVar18 = false, local_b0[0] != 0)) {
              FMemory::Free();
            }
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
            iVar9 = uStack_140._4_4_;
          } while (uStack_140._4_4_ < *(int *)(local_148 + 0x18));
          puVar11 = puVar15;
          if (iVar14 == 0) goto LAB_141d872d5;
        }
        else {
LAB_141d872d5:
          iVar14 = (int)puVar16;
          puVar15 = &DAT_143f3eda8;
        }
        puVar7 = local_128;
        iVar9 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_e0,0);
        puVar16 = &DAT_143f3eda8;
        if (local_d8 != 0) {
          puVar16 = local_e0;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,puVar16,CONCAT44(uVar19,iVar9),puVar15);
        uVar19 = (undefined4)((ulonglong)puVar15 >> 0x20);
        if (local_e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar15 = &DAT_143f3eda8;
        if (iVar14 != 0) {
          puVar15 = puVar11;
        }
        iVar14 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_d0,0);
        in_stack_fffffffffffffe38 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          in_stack_fffffffffffffe38 = local_d0;
        }
        FDebug::AssertFailed
                  (&DAT_144e519b7,"Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,in_stack_fffffffffffffe38,CONCAT44(uVar19,iVar14),puVar15);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
          TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(puVar7,*(int *)(puVar7 + 8) - *(int *)(puVar7 + 0x34),1);
        }
        if (puVar11 != (undefined2 *)0x0) {
          FMemory::Free(puVar11);
        }
      }
      if (*(char *)(*(longlong *)(param_1 + 0xe8) + 6 + local_198 * 8) != '\0') {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xe8) + 4 + local_198 * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_144dd59c8;
        puVar12[2] = param_3;
        puVar12[4] = local_110;
        *(uint *)(puVar12 + 3) = (uint)uVar2;
      }
      local_1a8 = local_1a8 + 1;
      local_198 = local_198 + 1;
    } while (local_198 < local_108);
  }
  if ((bVar5) && (local_1a0 != (undefined8 *)0x0)) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_1a0,0);
    if (local_1a0[3] != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0 + 2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0);
    FMemory::operator_delete(local_1a0,0x38);
  }
  return;
}



// FUNCTION 141d87500 FUN_141d87500 body=1789 status=ok
// SIG undefined FUN_141d87500(void)

void FUN_141d87500(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined *puVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  bool bVar18;
  undefined2 *in_stack_fffffffffffffe38;
  undefined4 uVar19;
  int local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  undefined2 *local_190;
  uint local_188;
  int local_184;
  uint local_180;
  uint uStack_17c;
  undefined *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined *local_128;
  undefined2 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  void *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  longlong local_b0 [2];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  bVar18 = false;
  bVar5 = false;
  local_1a0 = (undefined8 *)(param_4 + 0x30 + (longlong)*(int *)(param_6 + 0x1a38) * 0x38);
  if (DAT_1464c314c != 0) {
    if (*(char *)(local_1a0 + 5) != '\0') {
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (param_2,param_3,param_1 + 0xdc,*local_1a0);
      goto LAB_141d87594;
    }
    cVar8 = IsInRenderingThread();
    if ((cVar8 != '\0') && ((*(byte *)(param_4 + 0x110) & 3) != 0)) {
      FMaterialRenderProxy::InitDynamicRHI(param_4);
    }
  }
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_c0,param_4,param_5,param_6);
  bVar5 = true;
  local_1a0 = (undefined8 *)operator_new(0x38);
  if (local_1a0 != (undefined8 *)0x0) {
    *local_1a0 = 0;
    local_1a0[1] = 0;
    local_1a0[2] = 0;
    local_1a0[3] = 0;
    local_1a0[4] = 0;
    *(undefined1 *)(local_1a0 + 5) = 0;
    local_1a0[6] = 0;
  }
  FUN_14258c390(param_4,local_1a0,local_c0,param_2);
  if (*(char *)(param_1 + 0xe2) != '\0') {
    uVar2 = *(ushort *)(param_1 + 0xe0);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_ExecuteAndDestruct_144e5c2f0;
    puVar12[2] = param_3;
    *(uint *)(puVar12 + 3) = (uint)uVar2;
    puVar12[4] = local_1a0[1];
    lVar4 = local_1a0[2];
    puVar12[5] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    piVar1 = (int *)(*(longlong *)(puVar12[4] + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
  }
LAB_141d87594:
  local_1a8 = 0;
  iVar14 = *(int *)(local_1a0 + 4);
  if (*(int *)(param_1 + 0xf0) <= *(int *)(local_1a0 + 4)) {
    iVar14 = *(int *)(param_1 + 0xf0);
  }
  local_108 = (longlong)iVar14;
  if (0 < iVar14) {
    local_198 = 0;
    do {
      puVar15 = (undefined2 *)0x0;
      local_160 = (longlong)local_1a8 * 0x10;
      local_110 = FUN_141d9ac40(param_1,local_1a0[3] + local_160,
                                *(undefined8 *)(*(longlong *)(param_6 + 0x10) + 0x20));
      uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
      if (local_110 == 0) {
        local_190 = (undefined2 *)0x0;
        local_184 = 0;
        local_180 = 0;
        uStack_17c = 1;
        puStack_178 = &DAT_1465340f0;
        iStack_16c = 0;
        uStack_168 = 0;
        iVar14 = (int)DAT_146534108;
        if (iVar14 != 0) {
          puVar17 = DAT_146534100;
          if (DAT_146534100 == (uint *)0x0) {
            puVar17 = (uint *)&DAT_1465340f0;
          }
          uVar3 = *puVar17;
          uStack_168 = 0;
          puVar11 = puVar15;
          puVar16 = puVar15;
          while (uVar3 == 0) {
            iVar9 = (int)puVar11;
            uStack_168 = (int)puVar16 + 0x20;
            puVar16 = (undefined2 *)(ulonglong)uStack_168;
            local_180 = iVar9 + 1;
            puVar11 = (undefined2 *)(ulonglong)local_180;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_141d877ea;
            uVar3 = puVar17[(longlong)iVar9 + 1];
          }
          uStack_17c = -uVar3 & uVar3;
          iVar9 = 0x1f;
          if (uStack_17c != 0) {
            for (; uStack_17c >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_17c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          iStack_16c = (uStack_168 - iVar9) + 0x1f;
          if (iVar14 < iStack_16c) {
LAB_141d877ea:
            iStack_16c = iVar14;
          }
        }
        local_170 = 0xffffffff;
        uStack_140 = CONCAT44(iStack_16c,0xffffffff);
        auStack_88._8_4_ = uStack_168;
        auStack_88._0_8_ = uStack_140;
        auStack_88._12_4_ = uStack_164;
        local_120 = 0;
        uStack_150 = CONCAT44(uStack_17c,local_180);
        local_a0 = &DAT_1465340e0;
        puStack_90 = &DAT_1465340f0;
        local_128 = &DAT_1465340e0;
        local_138._8_4_ = 0x465340e0;
        local_138._0_8_ = auStack_88._8_8_;
        local_138._12_4_ = 1;
        local_158 = (longlong *)&DAT_1465340e0;
        local_148 = &DAT_1465340f0;
        local_58._8_4_ = 0x465340e0;
        local_58._0_8_ = auStack_88._8_8_;
        local_58._12_4_ = 1;
        puVar11 = puVar15;
        puVar16 = puVar15;
        iVar9 = iStack_16c;
        uStack_98 = uStack_150;
        if (iStack_16c < iVar14) {
          do {
            plVar6 = local_158;
            lVar4 = *(longlong *)((longlong)iVar9 * 0x20 + 0x10 + *local_158);
            if (lVar4 == 0) {
              pwVar13 = L"None";
            }
            else {
              local_118 = *(undefined8 *)(lVar4 + 0x10);
              bVar18 = true;
              puVar10 = (undefined8 *)FName::ToString(&local_118,local_b0);
              if (*(int *)(puVar10 + 1) == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)*puVar10;
              }
            }
            FUN_141682af0(*plVar6 + (longlong)iVar9 * 0x20,&local_f0,0);
            puVar11 = &DAT_143f3eda8;
            if (local_e8 != 0) {
              puVar11 = local_f0;
            }
            FString::PrintfImpl(&local_100,L"\n0x%p: %s: %s",lVar4,pwVar13,puVar11);
            _Src = local_100;
            uVar19 = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (local_f8 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = local_f8 + -1;
            }
            if (iVar14 != 0) {
              iVar9 = (int)puVar16;
              local_188 = iVar14 + (uint)(iVar9 == 0) + iVar9;
              if (local_184 < (int)local_188) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,puVar16);
                puVar15 = local_190;
              }
              puVar16 = (undefined2 *)(ulonglong)local_188;
              _guard_xfg_dispatch_icall_nop
                        (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),_Src,
                         (longlong)iVar14 * 2);
              (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar14] = 0;
            }
            iVar14 = (int)puVar16;
            if (local_100 != (void *)0x0) {
              FMemory::Free(local_100);
            }
            if (local_f0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if ((bVar18) && (bVar18 = false, local_b0[0] != 0)) {
              FMemory::Free();
            }
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
            iVar9 = uStack_140._4_4_;
          } while (uStack_140._4_4_ < *(int *)(local_148 + 0x18));
          puVar11 = puVar15;
          if (iVar14 == 0) goto LAB_141d879d5;
        }
        else {
LAB_141d879d5:
          iVar14 = (int)puVar16;
          puVar15 = &DAT_143f3eda8;
        }
        puVar7 = local_128;
        iVar9 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_e0,0);
        puVar16 = &DAT_143f3eda8;
        if (local_d8 != 0) {
          puVar16 = local_e0;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,puVar16,CONCAT44(uVar19,iVar9),puVar15);
        uVar19 = (undefined4)((ulonglong)puVar15 >> 0x20);
        if (local_e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar15 = &DAT_143f3eda8;
        if (iVar14 != 0) {
          puVar15 = puVar11;
        }
        iVar14 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_d0,0);
        in_stack_fffffffffffffe38 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          in_stack_fffffffffffffe38 = local_d0;
        }
        FDebug::AssertFailed
                  (&DAT_144e519b3,"Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,in_stack_fffffffffffffe38,CONCAT44(uVar19,iVar14),puVar15);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
          TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(puVar7,*(int *)(puVar7 + 8) - *(int *)(puVar7 + 0x34),1);
        }
        if (puVar11 != (undefined2 *)0x0) {
          FMemory::Free(puVar11);
        }
      }
      if (*(char *)(*(longlong *)(param_1 + 0xe8) + 6 + local_198 * 8) != '\0') {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xe8) + 4 + local_198 * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_144dcb398;
        puVar12[2] = param_3;
        puVar12[4] = local_110;
        *(uint *)(puVar12 + 3) = (uint)uVar2;
      }
      local_1a8 = local_1a8 + 1;
      local_198 = local_198 + 1;
    } while (local_198 < local_108);
  }
  if ((bVar5) && (local_1a0 != (undefined8 *)0x0)) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_1a0,0);
    if (local_1a0[3] != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0 + 2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0);
    FMemory::operator_delete(local_1a0,0x38);
  }
  return;
}



// FUNCTION 141d87c00 FUN_141d87c00 body=1789 status=ok
// SIG undefined FUN_141d87c00(void)

void FUN_141d87c00(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined *puVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  bool bVar18;
  undefined2 *in_stack_fffffffffffffe38;
  undefined4 uVar19;
  int local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  undefined2 *local_190;
  uint local_188;
  int local_184;
  uint local_180;
  uint uStack_17c;
  undefined *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined *local_128;
  undefined2 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  void *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  longlong local_b0 [2];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  bVar18 = false;
  bVar5 = false;
  local_1a0 = (undefined8 *)(param_4 + 0x30 + (longlong)*(int *)(param_6 + 0x1a38) * 0x38);
  if (DAT_1464c314c != 0) {
    if (*(char *)(local_1a0 + 5) != '\0') {
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (param_2,param_3,param_1 + 0xdc,*local_1a0);
      goto LAB_141d87c94;
    }
    cVar8 = IsInRenderingThread();
    if ((cVar8 != '\0') && ((*(byte *)(param_4 + 0x110) & 3) != 0)) {
      FMaterialRenderProxy::InitDynamicRHI(param_4);
    }
  }
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_c0,param_4,param_5,param_6);
  bVar5 = true;
  local_1a0 = (undefined8 *)operator_new(0x38);
  if (local_1a0 != (undefined8 *)0x0) {
    *local_1a0 = 0;
    local_1a0[1] = 0;
    local_1a0[2] = 0;
    local_1a0[3] = 0;
    local_1a0[4] = 0;
    *(undefined1 *)(local_1a0 + 5) = 0;
    local_1a0[6] = 0;
  }
  FUN_14258c390(param_4,local_1a0,local_c0,param_2);
  if (*(char *)(param_1 + 0xe2) != '\0') {
    uVar2 = *(ushort *)(param_1 + 0xe0);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_144d92070;
    puVar12[2] = param_3;
    *(uint *)(puVar12 + 3) = (uint)uVar2;
    puVar12[4] = local_1a0[1];
    lVar4 = local_1a0[2];
    puVar12[5] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    piVar1 = (int *)(*(longlong *)(puVar12[4] + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
  }
LAB_141d87c94:
  local_1a8 = 0;
  iVar14 = *(int *)(local_1a0 + 4);
  if (*(int *)(param_1 + 0xf0) <= *(int *)(local_1a0 + 4)) {
    iVar14 = *(int *)(param_1 + 0xf0);
  }
  local_108 = (longlong)iVar14;
  if (0 < iVar14) {
    local_198 = 0;
    do {
      puVar15 = (undefined2 *)0x0;
      local_160 = (longlong)local_1a8 * 0x10;
      local_110 = FUN_141d9ac40(param_1,local_1a0[3] + local_160,
                                *(undefined8 *)(*(longlong *)(param_6 + 0x10) + 0x20));
      uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
      if (local_110 == 0) {
        local_190 = (undefined2 *)0x0;
        local_184 = 0;
        local_180 = 0;
        uStack_17c = 1;
        puStack_178 = &DAT_1465340f0;
        iStack_16c = 0;
        uStack_168 = 0;
        iVar14 = (int)DAT_146534108;
        if (iVar14 != 0) {
          puVar17 = DAT_146534100;
          if (DAT_146534100 == (uint *)0x0) {
            puVar17 = (uint *)&DAT_1465340f0;
          }
          uVar3 = *puVar17;
          uStack_168 = 0;
          puVar11 = puVar15;
          puVar16 = puVar15;
          while (uVar3 == 0) {
            iVar9 = (int)puVar11;
            uStack_168 = (int)puVar16 + 0x20;
            puVar16 = (undefined2 *)(ulonglong)uStack_168;
            local_180 = iVar9 + 1;
            puVar11 = (undefined2 *)(ulonglong)local_180;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_141d87eea;
            uVar3 = puVar17[(longlong)iVar9 + 1];
          }
          uStack_17c = -uVar3 & uVar3;
          iVar9 = 0x1f;
          if (uStack_17c != 0) {
            for (; uStack_17c >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_17c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          iStack_16c = (uStack_168 - iVar9) + 0x1f;
          if (iVar14 < iStack_16c) {
LAB_141d87eea:
            iStack_16c = iVar14;
          }
        }
        local_170 = 0xffffffff;
        uStack_140 = CONCAT44(iStack_16c,0xffffffff);
        auStack_88._8_4_ = uStack_168;
        auStack_88._0_8_ = uStack_140;
        auStack_88._12_4_ = uStack_164;
        local_120 = 0;
        uStack_150 = CONCAT44(uStack_17c,local_180);
        local_a0 = &DAT_1465340e0;
        puStack_90 = &DAT_1465340f0;
        local_128 = &DAT_1465340e0;
        local_138._8_4_ = 0x465340e0;
        local_138._0_8_ = auStack_88._8_8_;
        local_138._12_4_ = 1;
        local_158 = (longlong *)&DAT_1465340e0;
        local_148 = &DAT_1465340f0;
        local_58._8_4_ = 0x465340e0;
        local_58._0_8_ = auStack_88._8_8_;
        local_58._12_4_ = 1;
        puVar11 = puVar15;
        puVar16 = puVar15;
        iVar9 = iStack_16c;
        uStack_98 = uStack_150;
        if (iStack_16c < iVar14) {
          do {
            plVar6 = local_158;
            lVar4 = *(longlong *)((longlong)iVar9 * 0x20 + 0x10 + *local_158);
            if (lVar4 == 0) {
              pwVar13 = L"None";
            }
            else {
              local_118 = *(undefined8 *)(lVar4 + 0x10);
              bVar18 = true;
              puVar10 = (undefined8 *)FName::ToString(&local_118,local_b0);
              if (*(int *)(puVar10 + 1) == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)*puVar10;
              }
            }
            FUN_141682af0(*plVar6 + (longlong)iVar9 * 0x20,&local_f0,0);
            puVar11 = &DAT_143f3eda8;
            if (local_e8 != 0) {
              puVar11 = local_f0;
            }
            FString::PrintfImpl(&local_100,L"\n0x%p: %s: %s",lVar4,pwVar13,puVar11);
            _Src = local_100;
            uVar19 = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (local_f8 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = local_f8 + -1;
            }
            if (iVar14 != 0) {
              iVar9 = (int)puVar16;
              local_188 = iVar14 + (uint)(iVar9 == 0) + iVar9;
              if (local_184 < (int)local_188) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,puVar16);
                puVar15 = local_190;
              }
              puVar16 = (undefined2 *)(ulonglong)local_188;
              _guard_xfg_dispatch_icall_nop
                        (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),_Src,
                         (longlong)iVar14 * 2);
              (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar14] = 0;
            }
            iVar14 = (int)puVar16;
            if (local_100 != (void *)0x0) {
              FMemory::Free(local_100);
            }
            if (local_f0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if ((bVar18) && (bVar18 = false, local_b0[0] != 0)) {
              FMemory::Free();
            }
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
            iVar9 = uStack_140._4_4_;
          } while (uStack_140._4_4_ < *(int *)(local_148 + 0x18));
          puVar11 = puVar15;
          if (iVar14 == 0) goto LAB_141d880d5;
        }
        else {
LAB_141d880d5:
          iVar14 = (int)puVar16;
          puVar15 = &DAT_143f3eda8;
        }
        puVar7 = local_128;
        iVar9 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_e0,0);
        puVar16 = &DAT_143f3eda8;
        if (local_d8 != 0) {
          puVar16 = local_e0;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,puVar16,CONCAT44(uVar19,iVar9),puVar15);
        uVar19 = (undefined4)((ulonglong)puVar15 >> 0x20);
        if (local_e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar15 = &DAT_143f3eda8;
        if (iVar14 != 0) {
          puVar15 = puVar11;
        }
        iVar14 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_d0,0);
        in_stack_fffffffffffffe38 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          in_stack_fffffffffffffe38 = local_d0;
        }
        FDebug::AssertFailed
                  (&DAT_144e519ef,"Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,in_stack_fffffffffffffe38,CONCAT44(uVar19,iVar14),puVar15);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
          TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(puVar7,*(int *)(puVar7 + 8) - *(int *)(puVar7 + 0x34),1);
        }
        if (puVar11 != (undefined2 *)0x0) {
          FMemory::Free(puVar11);
        }
      }
      if (*(char *)(*(longlong *)(param_1 + 0xe8) + 6 + local_198 * 8) != '\0') {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xe8) + 4 + local_198 * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_144d920a0;
        puVar12[2] = param_3;
        puVar12[4] = local_110;
        *(uint *)(puVar12 + 3) = (uint)uVar2;
      }
      local_1a8 = local_1a8 + 1;
      local_198 = local_198 + 1;
    } while (local_198 < local_108);
  }
  if ((bVar5) && (local_1a0 != (undefined8 *)0x0)) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_1a0,0);
    if (local_1a0[3] != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0 + 2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0);
    FMemory::operator_delete(local_1a0,0x38);
  }
  return;
}



// FUNCTION 141d88300 FUN_141d88300 body=1789 status=ok
// SIG undefined FUN_141d88300(void)

void FUN_141d88300(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined *puVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  bool bVar18;
  undefined2 *in_stack_fffffffffffffe38;
  undefined4 uVar19;
  int local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  undefined2 *local_190;
  uint local_188;
  int local_184;
  uint local_180;
  uint uStack_17c;
  undefined *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined *local_128;
  undefined2 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  void *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  longlong local_b0 [2];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  bVar18 = false;
  bVar5 = false;
  local_1a0 = (undefined8 *)(param_4 + 0x30 + (longlong)*(int *)(param_6 + 0x1a38) * 0x38);
  if (DAT_1464c314c != 0) {
    if (*(char *)(local_1a0 + 5) != '\0') {
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (param_2,param_3,param_1 + 0xdc,*local_1a0);
      goto LAB_141d88394;
    }
    cVar8 = IsInRenderingThread();
    if ((cVar8 != '\0') && ((*(byte *)(param_4 + 0x110) & 3) != 0)) {
      FMaterialRenderProxy::InitDynamicRHI(param_4);
    }
  }
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_c0,param_4,param_5,param_6);
  bVar5 = true;
  local_1a0 = (undefined8 *)operator_new(0x38);
  if (local_1a0 != (undefined8 *)0x0) {
    *local_1a0 = 0;
    local_1a0[1] = 0;
    local_1a0[2] = 0;
    local_1a0[3] = 0;
    local_1a0[4] = 0;
    *(undefined1 *)(local_1a0 + 5) = 0;
    local_1a0[6] = 0;
  }
  FUN_14258c390(param_4,local_1a0,local_c0,param_2);
  if (*(char *)(param_1 + 0xe2) != '\0') {
    uVar2 = *(ushort *)(param_1 + 0xe0);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_ExecuteAndDestruct_144e5c2e0;
    puVar12[2] = param_3;
    *(uint *)(puVar12 + 3) = (uint)uVar2;
    puVar12[4] = local_1a0[1];
    lVar4 = local_1a0[2];
    puVar12[5] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    piVar1 = (int *)(*(longlong *)(puVar12[4] + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
  }
LAB_141d88394:
  local_1a8 = 0;
  iVar14 = *(int *)(local_1a0 + 4);
  if (*(int *)(param_1 + 0xf0) <= *(int *)(local_1a0 + 4)) {
    iVar14 = *(int *)(param_1 + 0xf0);
  }
  local_108 = (longlong)iVar14;
  if (0 < iVar14) {
    local_198 = 0;
    do {
      puVar15 = (undefined2 *)0x0;
      local_160 = (longlong)local_1a8 * 0x10;
      local_110 = FUN_141d9ac40(param_1,local_1a0[3] + local_160,
                                *(undefined8 *)(*(longlong *)(param_6 + 0x10) + 0x20));
      uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
      if (local_110 == 0) {
        local_190 = (undefined2 *)0x0;
        local_184 = 0;
        local_180 = 0;
        uStack_17c = 1;
        puStack_178 = &DAT_1465340f0;
        iStack_16c = 0;
        uStack_168 = 0;
        iVar14 = (int)DAT_146534108;
        if (iVar14 != 0) {
          puVar17 = DAT_146534100;
          if (DAT_146534100 == (uint *)0x0) {
            puVar17 = (uint *)&DAT_1465340f0;
          }
          uVar3 = *puVar17;
          uStack_168 = 0;
          puVar11 = puVar15;
          puVar16 = puVar15;
          while (uVar3 == 0) {
            iVar9 = (int)puVar11;
            uStack_168 = (int)puVar16 + 0x20;
            puVar16 = (undefined2 *)(ulonglong)uStack_168;
            local_180 = iVar9 + 1;
            puVar11 = (undefined2 *)(ulonglong)local_180;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_141d885ea;
            uVar3 = puVar17[(longlong)iVar9 + 1];
          }
          uStack_17c = -uVar3 & uVar3;
          iVar9 = 0x1f;
          if (uStack_17c != 0) {
            for (; uStack_17c >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_17c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          iStack_16c = (uStack_168 - iVar9) + 0x1f;
          if (iVar14 < iStack_16c) {
LAB_141d885ea:
            iStack_16c = iVar14;
          }
        }
        local_170 = 0xffffffff;
        uStack_140 = CONCAT44(iStack_16c,0xffffffff);
        auStack_88._8_4_ = uStack_168;
        auStack_88._0_8_ = uStack_140;
        auStack_88._12_4_ = uStack_164;
        local_120 = 0;
        uStack_150 = CONCAT44(uStack_17c,local_180);
        local_a0 = &DAT_1465340e0;
        puStack_90 = &DAT_1465340f0;
        local_128 = &DAT_1465340e0;
        local_138._8_4_ = 0x465340e0;
        local_138._0_8_ = auStack_88._8_8_;
        local_138._12_4_ = 1;
        local_158 = (longlong *)&DAT_1465340e0;
        local_148 = &DAT_1465340f0;
        local_58._8_4_ = 0x465340e0;
        local_58._0_8_ = auStack_88._8_8_;
        local_58._12_4_ = 1;
        puVar11 = puVar15;
        puVar16 = puVar15;
        iVar9 = iStack_16c;
        uStack_98 = uStack_150;
        if (iStack_16c < iVar14) {
          do {
            plVar6 = local_158;
            lVar4 = *(longlong *)((longlong)iVar9 * 0x20 + 0x10 + *local_158);
            if (lVar4 == 0) {
              pwVar13 = L"None";
            }
            else {
              local_118 = *(undefined8 *)(lVar4 + 0x10);
              bVar18 = true;
              puVar10 = (undefined8 *)FName::ToString(&local_118,local_b0);
              if (*(int *)(puVar10 + 1) == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)*puVar10;
              }
            }
            FUN_141682af0(*plVar6 + (longlong)iVar9 * 0x20,&local_f0,0);
            puVar11 = &DAT_143f3eda8;
            if (local_e8 != 0) {
              puVar11 = local_f0;
            }
            FString::PrintfImpl(&local_100,L"\n0x%p: %s: %s",lVar4,pwVar13,puVar11);
            _Src = local_100;
            uVar19 = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (local_f8 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = local_f8 + -1;
            }
            if (iVar14 != 0) {
              iVar9 = (int)puVar16;
              local_188 = iVar14 + (uint)(iVar9 == 0) + iVar9;
              if (local_184 < (int)local_188) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,puVar16);
                puVar15 = local_190;
              }
              puVar16 = (undefined2 *)(ulonglong)local_188;
              _guard_xfg_dispatch_icall_nop
                        (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),_Src,
                         (longlong)iVar14 * 2);
              (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar14] = 0;
            }
            iVar14 = (int)puVar16;
            if (local_100 != (void *)0x0) {
              FMemory::Free(local_100);
            }
            if (local_f0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if ((bVar18) && (bVar18 = false, local_b0[0] != 0)) {
              FMemory::Free();
            }
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
            iVar9 = uStack_140._4_4_;
          } while (uStack_140._4_4_ < *(int *)(local_148 + 0x18));
          puVar11 = puVar15;
          if (iVar14 == 0) goto LAB_141d887d5;
        }
        else {
LAB_141d887d5:
          iVar14 = (int)puVar16;
          puVar15 = &DAT_143f3eda8;
        }
        puVar7 = local_128;
        iVar9 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_e0,0);
        puVar16 = &DAT_143f3eda8;
        if (local_d8 != 0) {
          puVar16 = local_e0;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,puVar16,CONCAT44(uVar19,iVar9),puVar15);
        uVar19 = (undefined4)((ulonglong)puVar15 >> 0x20);
        if (local_e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar15 = &DAT_143f3eda8;
        if (iVar14 != 0) {
          puVar15 = puVar11;
        }
        iVar14 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_d0,0);
        in_stack_fffffffffffffe38 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          in_stack_fffffffffffffe38 = local_d0;
        }
        FDebug::AssertFailed
                  (&DAT_144e5197f,"Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,in_stack_fffffffffffffe38,CONCAT44(uVar19,iVar14),puVar15);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
          TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(puVar7,*(int *)(puVar7 + 8) - *(int *)(puVar7 + 0x34),1);
        }
        if (puVar11 != (undefined2 *)0x0) {
          FMemory::Free(puVar11);
        }
      }
      if (*(char *)(*(longlong *)(param_1 + 0xe8) + 6 + local_198 * 8) != '\0') {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xe8) + 4 + local_198 * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_144dcb388;
        puVar12[2] = param_3;
        puVar12[4] = local_110;
        *(uint *)(puVar12 + 3) = (uint)uVar2;
      }
      local_1a8 = local_1a8 + 1;
      local_198 = local_198 + 1;
    } while (local_198 < local_108);
  }
  if ((bVar5) && (local_1a0 != (undefined8 *)0x0)) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_1a0,0);
    if (local_1a0[3] != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0 + 2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0);
    FMemory::operator_delete(local_1a0,0x38);
  }
  return;
}



// FUNCTION 141d88a00 FUN_141d88a00 body=308 status=ok
// SIG undefined FUN_141d88a00(void)

void FUN_141d88a00(longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (3 < (int)uVar6) {
    uVar6 = 4;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144e34a28;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141d88b40 FUN_141d88b40 body=227 status=ok
// SIG undefined FUN_141d88b40(void)

undefined8 *
FUN_141d88b40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = *param_5;
  param_1[4] = param_5[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_5 + 2);
  lVar1 = param_5[3];
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = param_5[4];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 5);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_5 + 0x2c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_5 + 6);
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  uVar2 = *param_6;
  uVar3 = param_6[1];
  param_1[0xc] = param_7;
  param_1[0xd] = param_8;
  *(undefined4 *)(param_1 + 0xe) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_11;
  param_1[0xf] = param_12;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_9 != (undefined8 *)0x0) {
    uVar2 = param_9[1];
    param_1[0x10] = *param_9;
    param_1[0x11] = uVar2;
    uVar2 = param_9[3];
    param_1[0x12] = param_9[2];
    param_1[0x13] = uVar2;
    uVar2 = param_9[5];
    param_1[0x14] = param_9[4];
    param_1[0x15] = uVar2;
  }
  return param_1;
}



// FUNCTION 141d88c30 FUN_141d88c30 body=677 status=ok
// SIG undefined FUN_141d88c30(void)

undefined8 *
FUN_141d88c30(undefined8 *param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5,
             undefined8 param_6,int param_7,longlong *param_8,undefined8 param_9,byte param_10)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  longlong lVar10;
  
  FUN_141b279e0(param_1,param_8,param_9,param_2,param_6,0);
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) & 0xfffffffe;
  lVar10 = (longlong)param_7;
  param_1[8] = 0;
  *(int *)(param_1 + 0xc) = param_7;
  uVar1 = ((param_4 & 0xfffffffb | (uint)param_5 << 2) * 2 | param_10 & 0xfffffff5) * 2;
  *(uint *)((longlong)param_1 + 100) =
       uVar1 | ((uint)param_3 | *(uint *)((longlong)param_1 + 100)) & 0xffffffe9;
  if ((uVar1 & 4) == 0) {
LAB_141d88cfe:
    uVar6 = 1;
  }
  else {
    uVar1 = (&DAT_1464c9c48)[lVar10];
    iVar5 = FUN_1419ef5f0(uVar1);
    if ((1 < iVar5) && ((0x1d < uVar1 || ((0x28e71800U >> (uVar1 & 0x1f) & 1) == 0))))
    goto LAB_141d88cfe;
    uVar6 = 6;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  if (param_8 == (longlong *)0x0) {
    return param_1;
  }
  if ((param_3 == 0) && (param_4 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar7 = (**(code **)(*param_8 + 0x40))(param_8);
  iVar5 = (**(code **)(*(longlong *)param_1[3] + 0x178))();
  if (((iVar5 == 0) || (cVar4 = FUN_141ed13a0((&DAT_1464c9c48)[lVar10]), cVar4 == '\0')) ||
     (cVar4 = (**(code **)(lVar7 + 0x48))(), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) & 0xfffffff7;
  uVar8 = param_1[3];
  if ((*(byte *)((longlong)param_1 + 100) & 4) == 0) {
    if (bVar3) {
      uVar8 = FUN_1425939a0(uVar8,&DAT_146a9ffb0,lVar7,1);
      param_1[7] = uVar8;
      if (!bVar2) goto LAB_141d88e6c;
      uVar8 = FUN_1425939a0(param_1[3],&DAT_146aa0250,lVar7,1);
      puVar9 = &DAT_146aa03a0;
    }
    else {
      uVar8 = FUN_1425939a0(uVar8,&DAT_146aa0a30,lVar7,1);
      param_1[7] = uVar8;
      if (!bVar2) goto LAB_141d88e6c;
      uVar8 = FUN_1425939a0(param_1[3],&DAT_146aa0cd0,lVar7,1);
      puVar9 = &DAT_146aa0e20;
    }
  }
  else {
    uVar8 = FUN_1425939a0(uVar8,&DAT_146a9fe60,lVar7,1);
    param_1[7] = uVar8;
    uVar1 = (&DAT_1464c9c48)[lVar10];
    iVar5 = FUN_1419ef5f0(uVar1);
    if ((1 < iVar5) && ((0x1d < uVar1 || ((0x28e71800U >> (uVar1 & 0x1f) & 1) == 0)))) {
      uVar8 = FUN_1425939a0(param_1[3],&DAT_146a9ef90,lVar7,1);
      param_1[8] = uVar8;
    }
    if (!bVar2) goto LAB_141d88e6c;
    uVar8 = FUN_1425939a0(param_1[3],&DAT_146aa1600,lVar7,1);
    puVar9 = &DAT_146aa1750;
  }
  param_1[10] = uVar8;
  uVar8 = FUN_1425939a0(param_1[3],puVar9,lVar7,1);
  param_1[0xb] = uVar8;
LAB_141d88e6c:
  FUN_141b196e0(param_1[3],1);
  if (bVar3) {
    puVar9 = &DAT_146aa2080;
  }
  else {
    puVar9 = &DAT_146aa2470;
    if ((*(byte *)((longlong)param_1 + 100) & 4) == 0) {
      puVar9 = &DAT_146aa1de0;
    }
  }
  uVar8 = FUN_1425939a0(param_1[3],puVar9,lVar7,0);
  param_1[9] = uVar8;
  *param_1 = param_1[7];
  return param_1;
}



// FUNCTION 141d88ee0 FUN_141d88ee0 body=816 status=ok
// SIG undefined FUN_141d88ee0(void)

undefined8 *
FUN_141d88ee0(undefined8 *param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5,
             undefined8 param_6,int param_7,longlong *param_8,undefined8 param_9,byte param_10)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *puVar11;
  longlong lVar12;
  
  uVar9 = 0;
  FUN_141b279e0(param_1,param_8,param_9,param_2,param_6,0);
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) & 0xfffffffe;
  lVar12 = (longlong)param_7;
  param_1[8] = 0;
  *(int *)(param_1 + 0xc) = param_7;
  uVar10 = ((param_4 & 0xfffffffb | (uint)param_5 << 2) * 2 | param_10 & 0xfffffff5) * 2;
  *(uint *)((longlong)param_1 + 100) =
       uVar10 | ((uint)param_3 | *(uint *)((longlong)param_1 + 100)) & 0xffffffe9;
  if ((uVar10 & 4) == 0) {
LAB_141d88fad:
    uVar6 = 1;
  }
  else {
    uVar10 = (&DAT_1464c9c48)[lVar12];
    iVar5 = FUN_1419ef5f0(uVar10);
    if ((1 < iVar5) && ((0x1d < uVar10 || ((0x28e71800U >> (uVar10 & 0x1f) & 1) == 0))))
    goto LAB_141d88fad;
    uVar6 = 6;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  if (param_8 == (longlong *)0x0) {
    return param_1;
  }
  if ((param_3 == 0) && (param_4 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar7 = (**(code **)(*param_8 + 0x40))(param_8);
  iVar5 = (**(code **)(*(longlong *)param_1[3] + 0x178))();
  if (((iVar5 == 0) || (cVar4 = FUN_141ed13a0((&DAT_1464c9c48)[lVar12]), cVar4 == '\0')) ||
     (cVar4 = (**(code **)(lVar7 + 0x48))(), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x50))();
  if ((cVar4 == '\0') || (cVar4 = FUN_141b196e0(param_1[3],1), cVar4 == '\0')) {
LAB_141d89041:
    uVar10 = 0;
  }
  else {
    cVar4 = FUN_14259cbc0(param_1[3]);
    uVar10 = 8;
    if (cVar4 != '\0') goto LAB_141d89041;
  }
  uVar1 = *(uint *)((longlong)param_1 + 100);
  uVar8 = param_1[3];
  *(uint *)((longlong)param_1 + 100) = uVar1 & 0xfffffff7 | uVar10;
  if ((uVar1 & 4) == 0) {
    if (bVar3) {
      puVar11 = &DAT_146aa18a0;
      if (uVar10 == 0) {
        puVar11 = &DAT_146aa04f0;
      }
      uVar8 = FUN_1425939a0(uVar8,puVar11,lVar7,1);
      param_1[7] = uVar8;
      if (!bVar2) goto LAB_141d8918f;
      uVar8 = FUN_1425939a0(param_1[3],&DAT_146aa0790,lVar7,1);
      puVar11 = &DAT_146aa08e0;
    }
    else {
      puVar11 = &DAT_146aa19f0;
      if (uVar10 == 0) {
        puVar11 = &DAT_146aa0f70;
      }
      uVar8 = FUN_1425939a0(uVar8,puVar11,lVar7,1);
      param_1[7] = uVar8;
      if (!bVar2) goto LAB_141d8918f;
      uVar8 = FUN_1425939a0(param_1[3],&DAT_146aa1210,lVar7,1);
      puVar11 = &DAT_146aa1360;
    }
  }
  else {
    puVar11 = &DAT_146aa1c90;
    if (uVar10 == 0) {
      puVar11 = &DAT_146a9fe60;
    }
    uVar8 = FUN_1425939a0(uVar8,puVar11,lVar7,1);
    param_1[7] = uVar8;
    uVar10 = (&DAT_1464c9c48)[lVar12];
    iVar5 = FUN_1419ef5f0(uVar10);
    if ((1 < iVar5) && ((0x1d < uVar10 || ((0x28e71800U >> (uVar10 & 0x1f) & 1) == 0)))) {
      uVar8 = FUN_1425939a0(param_1[3],&DAT_146a9ef90,lVar7,1);
      param_1[8] = uVar8;
    }
    if (!bVar2) goto LAB_141d8918f;
    uVar8 = FUN_1425939a0(param_1[3],&DAT_146aa1600,lVar7,1);
    puVar11 = &DAT_146aa1750;
  }
  param_1[10] = uVar8;
  uVar8 = FUN_1425939a0(param_1[3],puVar11,lVar7,1);
  param_1[0xb] = uVar8;
LAB_141d8918f:
  cVar4 = FUN_141b196e0(param_1[3],1);
  if (((cVar4 == '\0') || (bVar3)) ||
     (cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x58))(), cVar4 == '\0')) {
    if (bVar3) {
      puVar11 = &DAT_146aa21d0;
    }
    else {
      puVar11 = &DAT_146aa2470;
      if ((*(byte *)((longlong)param_1 + 100) & 4) == 0) {
        puVar11 = &DAT_146aa1f30;
      }
    }
    uVar9 = FUN_1425939a0(param_1[3],puVar11,lVar7,0);
  }
  param_1[9] = uVar9;
  *param_1 = param_1[7];
  return param_1;
}



// FUNCTION 141d89210 FUN_141d89210 body=388 status=ok
// SIG undefined FUN_141d89210(void)

undefined8 * FUN_141d89210(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e5b950;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  FUN_141cdf500(param_2);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"ShadowDepthTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"LightPositionAndInvRadius",0
            );
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"ShadowFadeFraction",0);
  FShaderParameter::Bind(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"ShadowSharpen",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),
             L"PointLightDepthBiasAndProjParameters",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"SSProfilesTexture",0);
  FShaderParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"LayerIndex",0);
  return param_1;
}



// FUNCTION 141d893a0 FUN_141d893a0 body=135 status=ok
// SIG undefined FUN_141d893a0(void)

undefined8 * FUN_141d893a0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e5b950;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  return param_1;
}



// FUNCTION 141d89430 FUN_141d89430 body=119 status=ok
// SIG undefined FUN_141d89430(void)

undefined8 * FUN_141d89430(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a9f290;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141d894b0 FUN_141d894b0 body=334 status=ok
// SIG undefined FUN_141d894b0(void)

undefined8 * FUN_141d894b0(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  *param_1 = &PTR_FUN_144e5b780;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x156) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x166) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x176) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17e) = 0;
  FShaderParameter::Bind(param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"ShadowParams",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x156,*(undefined8 *)(param_2 + 0x18),
             L"ReflectiveShadowMapTextureResolution",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x15c,*(undefined8 *)(param_2 + 0x18),L"ProjectionMatrix",0);
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x162,*(undefined8 *)(param_2 + 0x18),L"RWGvListBuffer");
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x16a,*(undefined8 *)(param_2 + 0x18),L"RWGvListHeadBuffer");
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x172,*(undefined8 *)(param_2 + 0x18),L"RWVplListBuffer");
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x17a,*(undefined8 *)(param_2 + 0x18),L"RWVplListHeadBuffer");
  FUN_141cdf500(param_2,param_1 + 0x22,param_1 + 0x22);
  return param_1;
}



// FUNCTION 141d89600 FUN_141d89600 body=270 status=ok
// SIG undefined FUN_141d89600(void)

undefined8 * FUN_141d89600(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e5b7e0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  FUN_141d8fdf0(param_1 + 0x18,param_2);
  FShaderParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"ShadowFadeFraction",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10e,*(undefined8 *)(param_2 + 0x18),L"ShadowSharpen",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11a,*(undefined8 *)(param_2 + 0x18),L"SSProfilesTexture",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x114,*(undefined8 *)(param_2 + 0x18),L"LightPositionAndInvRadius",
             0);
  return param_1;
}



// FUNCTION 141d89710 FUN_141d89710 body=149 status=ok
// SIG undefined FUN_141d89710(void)

undefined8 * FUN_141d89710(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e5b7e0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  return param_1;
}



// FUNCTION 141d897b0 FUN_141d897b0 body=270 status=ok
// SIG undefined FUN_141d897b0(void)

undefined8 * FUN_141d897b0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e5b870;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  FUN_141d8fdf0(param_1 + 0x18,param_2);
  FShaderParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"ShadowFadeFraction",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10e,*(undefined8 *)(param_2 + 0x18),L"ShadowSharpen",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11a,*(undefined8 *)(param_2 + 0x18),L"SSProfilesTexture",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x114,*(undefined8 *)(param_2 + 0x18),L"LightPositionAndInvRadius",
             0);
  return param_1;
}



// FUNCTION 141d898c0 FUN_141d898c0 body=149 status=ok
// SIG undefined FUN_141d898c0(void)

undefined8 * FUN_141d898c0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e5b870;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  return param_1;
}



// FUNCTION 141d89960 FDrawingPolicyLink body=237 status=ok
// SIG undefined FDrawingPolicyLink(void)

undefined8 *
TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink::FDrawingPolicyLink
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  param_1[0x10] = param_2[0x10];
  uVar1 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar1;
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar1;
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar1;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0xbc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_1[0x1a] = param_2[0x1a];
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  return param_1;
}



// FUNCTION 141d89a50 FUN_141d89a50 body=532 status=ok
// SIG undefined FUN_141d89a50(void)

undefined8 * FUN_141d89a50(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 local_res8;
  undefined2 uStackX_c;
  undefined1 uStackX_e;
  undefined1 uStackX_f;
  undefined2 *local_38;
  int local_30;
  
  FUN_1419d6310();
  iVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f47aa8;
  plVar1 = param_1 + 0x1d;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  *plVar1 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  FShaderUniformBufferParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xdc),*(undefined8 *)(param_2 + 0x18),L"Material",0)
  ;
  if (0 < *(int *)(*(longlong *)(param_2 + 0x60) + 0xb8)) {
    do {
      local_res8 = 0;
      uStackX_c = 0;
      uStackX_e = 0;
      FString::PrintfImpl(&local_38,L"MaterialCollection%u",iVar3);
      puVar4 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar4 = local_38;
      }
      FShaderUniformBufferParameter::Bind(&local_res8,*(undefined8 *)(param_2 + 0x18),puVar4,0);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar2 = *(int *)(param_1 + 0x1e);
      *(int *)(param_1 + 0x1e) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xf4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      iVar3 = iVar3 + 1;
      *(ulonglong *)(*plVar1 + (longlong)iVar2 * 8) =
           CONCAT17(uStackX_f,CONCAT16(uStackX_e,CONCAT24(uStackX_c,local_res8)));
    } while (iVar3 < *(int *)(*(longlong *)(param_2 + 0x60) + 0xb8));
  }
  FUN_141cdf500(param_2,param_1 + 0x18,param_1 + 0x19);
  FShaderParameter::Bind(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"InstanceCount",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"InstanceOffset",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"VertexOffset",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),L"PrimitiveVisibilityBuffer",0
            );
  FShaderResourceParameter::Bind
            (param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"PrimitiveVisibilityRemapBuffer",0);
  return param_1;
}



// FUNCTION 141d89c70 FUN_141d89c70 body=188 status=ok
// SIG undefined FUN_141d89c70(void)

undefined4 * FUN_141d89c70(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(byte *)(param_1 + 0x13) =
       *(byte *)(param_1 + 0x13) ^ (*(byte *)(param_1 + 0x13) ^ *(byte *)(param_2 + 0x13)) & 0x3f;
  bVar1 = (*(byte *)(param_2 + 0x13) ^ *(byte *)(param_1 + 0x13)) & 0x40 ^ *(byte *)(param_1 + 0x13)
  ;
  *(byte *)(param_1 + 0x13) = bVar1;
  *(byte *)(param_1 + 0x13) = (*(byte *)(param_2 + 0x13) ^ bVar1) & 0x7f ^ *(byte *)(param_2 + 0x13)
  ;
  *(undefined2 *)((longlong)param_1 + 0x4d) = *(undefined2 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
  return param_1;
}



// FUNCTION 141d89d30 FUN_141d89d30 body=186 status=ok
// SIG undefined FUN_141d89d30(void)

undefined4 * FUN_141d89d30(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(byte *)(param_1 + 0x13) =
       *(byte *)(param_1 + 0x13) ^ (*(byte *)(param_1 + 0x13) ^ *(byte *)(param_2 + 0x13)) & 0x3f;
  bVar2 = (*(byte *)(param_1 + 0x13) ^ *(byte *)(param_2 + 0x13)) & 0x40 ^ *(byte *)(param_1 + 0x13)
  ;
  *(byte *)(param_1 + 0x13) = bVar2;
  *(byte *)(param_1 + 0x13) = (bVar2 ^ *(byte *)(param_2 + 0x13)) & 0x7f ^ *(byte *)(param_2 + 0x13)
  ;
  *(undefined2 *)((longlong)param_1 + 0x4d) = *(undefined2 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
  return param_1;
}



// FUNCTION 141d89df0 FUN_141d89df0 body=2145 status=ok
// SIG undefined FUN_141d89df0(void)

undefined4 *
FUN_141d89df0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *param_1 = *(undefined4 *)(*(longlong *)(param_4 + 0x10) + 0x50);
  uVar1 = *(undefined4 *)(*(longlong *)(param_4 + 0x10) + 0x54);
  *(undefined1 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 10) = param_6;
  *(undefined8 *)(param_1 + 0xc) = param_7;
  *(undefined8 *)(param_1 + 0xe) = param_8;
  *(undefined8 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_9;
  puVar2 = param_1 + 0x16d8;
  *(undefined8 *)(param_1 + 2) = param_2;
  lVar3 = 0x7f;
  param_1[1] = uVar1;
  *(longlong *)(param_1 + 6) = param_4;
  param_1[0x12] = 0;
  param_1[0x92] = 0;
  param_1[0x112] = 0;
  param_1[0x192] = 0;
  param_1[0x292] = 0;
  *(undefined8 *)(param_1 + 0xa84) = 0;
  param_1[0xa88] = 0;
  *(undefined8 *)(param_1 + 0xa89) = 0;
  *(undefined8 *)(param_1 + 0xa86) = 0;
  param_1[0xb8a] = 0;
  param_1[0xd88] = 0;
  param_1[0xe88] = 0;
  param_1[0xf88] = 0;
  param_1[0x1088] = 0;
  param_1[0x1188] = 0;
  param_1[0x1288] = 0;
  param_1[5000] = 0;
  *(undefined8 *)(param_1 + 0x1684) = 0;
  *(undefined8 *)(param_1 + 0x1686) = 0;
  *(undefined8 *)(param_1 + 0x168c) = 0;
  *(undefined8 *)(param_1 + 0x168e) = 0;
  param_1[0x1690] = 0xffffffff;
  param_1[0x1691] = 0;
  *(undefined8 *)(param_1 + 0x16d2) = 0;
  param_1[0x16d4] = 0;
  param_1[0x16d6] = 0xffffffff;
  param_1[0x16d7] = 0;
  do {
    *puVar2 = 0xffffffff;
    *(undefined2 *)(puVar2 + 1) = 0x7f7f;
    puVar2 = puVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x17d6] = 0;
  *(undefined8 *)(param_1 + 0x17d8) = 0;
  *(undefined8 *)(param_1 + 0x17da) = 0;
  *(undefined8 *)(param_1 + 0x17dc) = 0;
  *(undefined8 *)(param_1 + 0x17de) = 0;
  *(undefined8 *)(param_1 + 0x17e0) = 0;
  *(undefined8 *)(param_1 + 0x17e2) = 0;
  *(undefined8 *)(param_1 + 0x17e4) = 0;
  *(undefined8 *)(param_1 + 0x17e6) = 0;
  *(undefined8 *)(param_1 + 0x17e8) = 0;
  *(undefined8 *)(param_1 + 0x17ea) = 0;
  *(undefined8 *)(param_1 + 0x17ec) = 0;
  *(undefined8 *)(param_1 + 0x17ee) = 0;
  *(undefined8 *)(param_1 + 0x17f0) = 0;
  *(undefined8 *)(param_1 + 0x17f2) = 0;
  *(undefined8 *)(param_1 + 0x17f4) = 0;
  *(undefined8 *)(param_1 + 0x17f6) = 0;
  *(undefined8 *)(param_1 + 0x17f8) = 0;
  *(undefined8 *)(param_1 + 0x17fa) = 0;
  *(undefined8 *)(param_1 + 0x17fc) = 0;
  *(undefined8 *)(param_1 + 0x17fe) = 0;
  *(undefined8 *)(param_1 + 0x1800) = 0;
  *(undefined8 *)(param_1 + 0x1802) = 0;
  *(undefined8 *)(param_1 + 0x1804) = 0;
  *(undefined8 *)(param_1 + 0x1806) = 0;
  *(undefined8 *)(param_1 + 0x1808) = 0;
  *(undefined8 *)(param_1 + 0x180a) = 0;
  *(undefined8 *)(param_1 + 0x180c) = 0;
  *(undefined8 *)(param_1 + 0x180e) = 0;
  *(undefined8 *)(param_1 + 0x1810) = 0;
  *(undefined8 *)(param_1 + 0x1812) = 0;
  *(undefined8 *)(param_1 + 0x1814) = 0;
  *(undefined8 *)(param_1 + 0x1816) = 0;
  *(undefined8 *)(param_1 + 0x1818) = 0;
  *(undefined8 *)(param_1 + 0x181a) = 0;
  *(undefined8 *)(param_1 + 0x181c) = 0;
  *(undefined8 *)(param_1 + 0x181e) = 0;
  *(undefined8 *)(param_1 + 0x1820) = 0;
  *(undefined8 *)(param_1 + 0x1822) = 0;
  *(undefined8 *)(param_1 + 0x1824) = 0;
  *(undefined8 *)(param_1 + 0x1826) = 0;
  *(undefined8 *)(param_1 + 0x1828) = 0;
  *(undefined8 *)(param_1 + 0x182a) = 0;
  *(undefined8 *)(param_1 + 0x182c) = 0;
  *(undefined8 *)(param_1 + 0x182e) = 0;
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined8 *)(param_1 + 0x1832) = 0;
  *(undefined8 *)(param_1 + 0x1834) = 0;
  *(undefined8 *)(param_1 + 0x1836) = 0;
  *(undefined8 *)(param_1 + 0x1838) = 0;
  *(undefined8 *)(param_1 + 0x183a) = 0;
  *(undefined8 *)(param_1 + 0x183c) = 0;
  *(undefined8 *)(param_1 + 0x183e) = 0;
  *(undefined8 *)(param_1 + 0x1840) = 0;
  *(undefined8 *)(param_1 + 0x1842) = 0;
  *(undefined8 *)(param_1 + 0x1844) = 0;
  *(undefined8 *)(param_1 + 0x1846) = 0;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined8 *)(param_1 + 0x184a) = 0;
  *(undefined8 *)(param_1 + 0x184c) = 0;
  *(undefined8 *)(param_1 + 0x184e) = 0;
  *(undefined8 *)(param_1 + 0x1850) = 0;
  *(undefined8 *)(param_1 + 0x1852) = 0;
  *(undefined8 *)(param_1 + 0x1854) = 0;
  *(undefined8 *)(param_1 + 0x1856) = 0;
  *(undefined8 *)(param_1 + 0x1858) = 0;
  *(undefined8 *)(param_1 + 0x185a) = 0;
  *(undefined8 *)(param_1 + 0x185c) = 0;
  *(undefined8 *)(param_1 + 0x185e) = 0;
  *(undefined8 *)(param_1 + 0x1860) = 0;
  *(undefined8 *)(param_1 + 0x1862) = 0;
  *(undefined8 *)(param_1 + 0x1864) = 0;
  *(undefined8 *)(param_1 + 0x1866) = 0;
  *(undefined8 *)(param_1 + 0x1868) = 0;
  *(undefined8 *)(param_1 + 0x186a) = 0;
  *(undefined8 *)(param_1 + 0x186c) = 0;
  *(undefined8 *)(param_1 + 0x186e) = 0;
  *(undefined8 *)(param_1 + 0x1870) = 0;
  *(undefined8 *)(param_1 + 0x1872) = 0;
  *(undefined8 *)(param_1 + 0x1874) = 0;
  *(undefined8 *)(param_1 + 0x1876) = 0;
  *(undefined8 *)(param_1 + 0x1878) = 0;
  *(undefined8 *)(param_1 + 0x187a) = 0;
  *(undefined8 *)(param_1 + 0x187c) = 0;
  *(undefined8 *)(param_1 + 0x187e) = 0;
  *(undefined8 *)(param_1 + 0x1880) = 0;
  *(undefined8 *)(param_1 + 0x1882) = 0;
  *(undefined8 *)(param_1 + 0x1884) = 0;
  *(undefined8 *)(param_1 + 0x1886) = 0;
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x188a) = 0;
  *(undefined8 *)(param_1 + 0x188c) = 0;
  *(undefined8 *)(param_1 + 0x188e) = 0;
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x1892) = 0;
  *(undefined8 *)(param_1 + 0x1894) = 0;
  *(undefined8 *)(param_1 + 0x1896) = 0;
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x189a) = 0;
  *(undefined8 *)(param_1 + 0x189c) = 0;
  *(undefined8 *)(param_1 + 0x189e) = 0;
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x18a2) = 0;
  *(undefined8 *)(param_1 + 0x18a4) = 0;
  *(undefined8 *)(param_1 + 0x18a6) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x18aa) = 0;
  *(undefined8 *)(param_1 + 0x18ac) = 0;
  *(undefined8 *)(param_1 + 0x18ae) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x18b2) = 0;
  *(undefined8 *)(param_1 + 0x18b4) = 0;
  *(undefined8 *)(param_1 + 0x18b6) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x18ba) = 0;
  *(undefined8 *)(param_1 + 0x18bc) = 0;
  *(undefined8 *)(param_1 + 0x18be) = 0;
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x18c2) = 0;
  *(undefined8 *)(param_1 + 0x18c4) = 0;
  *(undefined8 *)(param_1 + 0x18c6) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x18ca) = 0;
  *(undefined8 *)(param_1 + 0x18cc) = 0;
  *(undefined8 *)(param_1 + 0x18ce) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined8 *)(param_1 + 0x18d2) = 0;
  *(undefined8 *)(param_1 + 0x18d4) = 0;
  *(undefined8 *)(param_1 + 0x18d6) = 0;
  *(undefined8 *)(param_1 + 0x18d8) = 0;
  *(undefined8 *)(param_1 + 0x18da) = 0;
  *(undefined8 *)(param_1 + 0x18dc) = 0;
  *(undefined8 *)(param_1 + 0x18de) = 0;
  *(undefined8 *)(param_1 + 0x18e0) = 0;
  *(undefined8 *)(param_1 + 0x18e2) = 0;
  *(undefined8 *)(param_1 + 0x18e4) = 0;
  *(undefined8 *)(param_1 + 0x18e6) = 0;
  *(undefined8 *)(param_1 + 0x18e8) = 0;
  *(undefined8 *)(param_1 + 0x18ea) = 0;
  *(undefined8 *)(param_1 + 0x18ec) = 0;
  *(undefined8 *)(param_1 + 0x18ee) = 0;
  *(undefined8 *)(param_1 + 0x18f0) = 0;
  *(undefined8 *)(param_1 + 0x18f2) = 0;
  *(undefined8 *)(param_1 + 0x18f4) = 0;
  *(undefined8 *)(param_1 + 0x18f6) = 0;
  *(undefined8 *)(param_1 + 0x18f8) = 0;
  *(undefined8 *)(param_1 + 0x18fa) = 0;
  *(undefined8 *)(param_1 + 0x18fc) = 0;
  *(undefined8 *)(param_1 + 0x18fe) = 0;
  *(undefined8 *)(param_1 + 0x1900) = 0;
  *(undefined8 *)(param_1 + 0x1902) = 0;
  *(undefined8 *)(param_1 + 0x1904) = 0;
  *(undefined8 *)(param_1 + 0x1906) = 0;
  *(undefined8 *)(param_1 + 0x1908) = 0;
  *(undefined8 *)(param_1 + 0x190a) = 0;
  *(undefined8 *)(param_1 + 0x190c) = 0;
  *(undefined8 *)(param_1 + 0x190e) = 0;
  *(undefined8 *)(param_1 + 0x1910) = 0;
  *(undefined8 *)(param_1 + 0x1912) = 0;
  *(undefined8 *)(param_1 + 0x1914) = 0;
  *(undefined8 *)(param_1 + 0x1916) = 0;
  *(undefined8 *)(param_1 + 0x1918) = 0;
  *(undefined8 *)(param_1 + 0x191a) = 0;
  *(undefined8 *)(param_1 + 0x191c) = 0;
  *(undefined8 *)(param_1 + 0x191e) = 0;
  *(undefined8 *)(param_1 + 0x1920) = 0;
  *(undefined8 *)(param_1 + 0x1922) = 0;
  *(undefined8 *)(param_1 + 0x1924) = 0;
  *(undefined8 *)(param_1 + 0x1926) = 0;
  *(undefined8 *)(param_1 + 0x1928) = 0;
  *(undefined8 *)(param_1 + 0x192a) = 0;
  *(undefined8 *)(param_1 + 0x192c) = 0;
  *(undefined8 *)(param_1 + 0x192e) = 0;
  *(undefined8 *)(param_1 + 0x1930) = 0;
  *(undefined8 *)(param_1 + 0x1932) = 0;
  *(undefined8 *)(param_1 + 0x1934) = 0;
  *(undefined8 *)(param_1 + 0x1936) = 0;
  *(undefined8 *)(param_1 + 0x1938) = 0;
  *(undefined8 *)(param_1 + 0x193a) = 0;
  *(undefined8 *)(param_1 + 0x193c) = 0;
  *(undefined8 *)(param_1 + 0x193e) = 0;
  *(undefined8 *)(param_1 + 0x1940) = 0;
  *(undefined8 *)(param_1 + 0x1942) = 0;
  *(undefined8 *)(param_1 + 0x1944) = 0;
  *(undefined8 *)(param_1 + 0x1946) = 0;
  *(undefined8 *)(param_1 + 0x1948) = 0;
  *(undefined8 *)(param_1 + 0x194a) = 0;
  *(undefined8 *)(param_1 + 0x194c) = 0;
  *(undefined8 *)(param_1 + 0x194e) = 0;
  *(undefined8 *)(param_1 + 0x1950) = 0;
  *(undefined8 *)(param_1 + 0x1952) = 0;
  *(undefined8 *)(param_1 + 0x1954) = 0;
  *(undefined8 *)(param_1 + 0x1956) = 0;
  *(undefined8 *)(param_1 + 0x1958) = 0;
  *(undefined8 *)(param_1 + 0x195a) = 0;
  *(undefined8 *)(param_1 + 0x195c) = 0;
  *(undefined8 *)(param_1 + 0x195e) = 0;
  *(undefined8 *)(param_1 + 0x1960) = 0;
  *(undefined8 *)(param_1 + 0x1962) = 0;
  *(undefined8 *)(param_1 + 0x1964) = 0;
  *(undefined8 *)(param_1 + 0x1966) = 0;
  *(undefined8 *)(param_1 + 0x1968) = 0;
  *(undefined8 *)(param_1 + 0x196a) = 0;
  *(undefined8 *)(param_1 + 0x196c) = 0;
  *(undefined8 *)(param_1 + 0x196e) = 0;
  *(undefined8 *)(param_1 + 0x1970) = 0;
  *(undefined8 *)(param_1 + 0x1972) = 0;
  *(undefined8 *)(param_1 + 0x1974) = 0;
  *(undefined8 *)(param_1 + 0x1976) = 0;
  *(undefined8 *)(param_1 + 0x1978) = 0;
  *(undefined8 *)(param_1 + 0x197a) = 0;
  *(undefined8 *)(param_1 + 0x197c) = 0;
  *(undefined8 *)(param_1 + 0x197e) = 0;
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1982) = 0;
  *(undefined8 *)(param_1 + 0x1984) = 0;
  *(undefined8 *)(param_1 + 0x1986) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x198a) = 0;
  *(undefined8 *)(param_1 + 0x198c) = 0;
  *(undefined8 *)(param_1 + 0x198e) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1992) = 0;
  *(undefined8 *)(param_1 + 0x1994) = 0;
  *(undefined8 *)(param_1 + 0x1996) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x199a) = 0;
  *(undefined8 *)(param_1 + 0x199c) = 0;
  *(undefined8 *)(param_1 + 0x199e) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a2) = 0;
  *(undefined8 *)(param_1 + 0x19a4) = 0;
  *(undefined8 *)(param_1 + 0x19a6) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19aa) = 0;
  *(undefined8 *)(param_1 + 0x19ac) = 0;
  *(undefined8 *)(param_1 + 0x19ae) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b2) = 0;
  *(undefined8 *)(param_1 + 0x19b4) = 0;
  *(undefined8 *)(param_1 + 0x19b6) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19ba) = 0;
  *(undefined8 *)(param_1 + 0x19bc) = 0;
  *(undefined8 *)(param_1 + 0x19be) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c2) = 0;
  *(undefined8 *)(param_1 + 0x19c4) = 0;
  *(undefined8 *)(param_1 + 0x19c6) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19ca) = 0;
  *(undefined8 *)(param_1 + 0x19cc) = 0;
  *(undefined8 *)(param_1 + 0x19ce) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x19d2) = 0;
  *(undefined8 *)(param_1 + 0x19d4) = param_10;
  *(undefined8 *)(param_1 + 0x19d6) = param_11;
  param_1[0x19d8] = 0;
  *(undefined2 *)(param_1 + 0x19d9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6766) = 0;
  return param_1;
}



// FUNCTION 141d8a660 FUN_141d8a660 body=251 status=ok
// SIG undefined FUN_141d8a660(void)

undefined8 * FUN_141d8a660(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141aaf710();
  *param_1 = &PTR_FUN_144dc7018;
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),DAT_146a632c0,0);
  *param_1 = &PTR_FUN_144e5b670;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x156) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x162) = 0;
  *(undefined2 *)((longlong)param_1 + 0x166) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderParameter::Bind(param_1 + 0x2a,uVar1,L"ProjectionMatrix",0);
  FShaderParameter::Bind((undefined4 *)((longlong)param_1 + 0x156),uVar1,L"ShadowParams",0);
  FShaderParameter::Bind((undefined4 *)((longlong)param_1 + 0x15c),uVar1,L"bClampToNearPlane",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x162,*(undefined8 *)(param_2 + 0x18),
             L"ShadowViewProjectionMatrices",0);
  return param_1;
}



// FUNCTION 141d8a760 FUN_141d8a760 body=279 status=ok
// SIG undefined FUN_141d8a760(void)

undefined8 * FUN_141d8a760(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141aaf710();
  *param_1 = &PTR_FUN_144e5b540;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x156) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x162) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16a) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderParameter::Bind(param_1 + 0x2a,uVar1,L"ProjectionMatrix",0);
  FShaderParameter::Bind((undefined4 *)((longlong)param_1 + 0x156),uVar1,L"ShadowParams",0);
  FShaderParameter::Bind((undefined4 *)((longlong)param_1 + 0x15c),uVar1,L"bClampToNearPlane",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x162,*(undefined8 *)(param_2 + 0x18),
             L"ShadowViewProjectionMatrices",0);
  FShaderParameter::Bind(param_1 + 0x2d,*(undefined8 *)(param_2 + 0x18),L"MeshVisibleToFace",0);
  FUN_141cdf500(param_2,param_1 + 0x22,param_1 + 0x22);
  return param_1;
}



// FUNCTION 141d8a880 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bf80;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8a910 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5c080;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8a9a0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bf40;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8aa30 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5c040;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8aac0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5be40;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8ab50 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5be80;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8abe0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bf00;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8ac70 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5c000;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8ad00 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5be00;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8ad90 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bec0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8ae20 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bfc0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8aeb0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<0,0,0,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5c140;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<0,0,0,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8af40 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<0,0,0,1,0,0,1,15,0,0,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5c180;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<0,0,0,1,0,0,1,15,0,0,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8afd0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bdc0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b060 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5c0c0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000101;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b110 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5c100;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000100;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b1c0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,6,0,1,7,0,7,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bd40;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010300;
    local_14 = 0x1000600;
    local_10 = 0x70007;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b280 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bcc0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010300;
    local_14 = 0x1020000;
    local_10 = 0x2000007;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b340 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bd80;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010300;
    local_14 = 0x20000;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b400 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,6,1,7,0,0,7,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bd00;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010300;
    local_14 = 0x1060000;
    local_10 = 0x7000007;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b4c0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,1,1,1,0,7,1,1,1,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bc80;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x5010700;
    local_14 = 0x10101;
    local_10 = 0x1010107;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b580 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5bc40;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x5010700;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b630 FStaticStateResource body=183 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e5c2a0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_18 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x1010101;
    local_10 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141d8b6f0 FVisibleLightInfo body=489 status=ok
// SIG undefined FVisibleLightInfo(void)

undefined8 * FVisibleLightInfo::FVisibleLightInfo(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  *param_1 = 0;
  iVar5 = *(int *)(param_2 + 1);
  pvVar1 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_141dab250(param_1,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar1,(longlong)iVar5 << 3);
  }
  param_1[2] = 0;
  iVar5 = *(int *)(param_2 + 3);
  pvVar1 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_141dab250(param_1 + 2,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar1,(longlong)iVar5 << 3);
  }
  param_1[4] = 0;
  iVar5 = *(int *)(param_2 + 5);
  pvVar1 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_141dab250(param_1 + 4,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[4],pvVar1,(longlong)iVar5 << 3);
  }
  param_1[6] = 0;
  iVar5 = *(int *)(param_2 + 7);
  pvVar1 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_141dab250(param_1 + 6,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[6],pvVar1,(longlong)iVar5 << 3);
  }
  param_1[8] = 0;
  iVar5 = *(int *)(param_2 + 9);
  pvVar1 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_141dab250(param_1 + 8,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[8],pvVar1,(longlong)iVar5 << 3);
  }
  param_1[10] = 0;
  iVar5 = *(int *)(param_2 + 0xb);
  plVar4 = (longlong *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_141dab250(param_1 + 10,iVar5,0);
    plVar3 = (longlong *)param_1[10];
    do {
      lVar2 = *plVar4;
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      }
      plVar3 = plVar3 + 1;
      plVar4 = plVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0xc] = 0;
  iVar5 = *(int *)(param_2 + 0xd);
  pvVar1 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_141dab250(param_1 + 0xc,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0xc],pvVar1,(longlong)iVar5 << 3);
  }
  return param_1;
}



// FUNCTION 141d8b8e0 FUN_141d8b8e0 body=483 status=ok
// SIG undefined FUN_141d8b8e0(void)

undefined8 * FUN_141d8b8e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  iVar4 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_141dab210(param_1,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar4 << 3);
  }
  puVar1 = param_1 + 2;
  param_1[4] = 0;
  param_1[5] = 0;
  if (puVar1 != param_2 + 2) {
    uVar3 = *(int *)(param_2 + 5) + 0x1f + (*(int *)(param_2 + 5) + 0x1f >> 0x1f & 0x1fU) &
            0xffffffe0;
    if (uVar3 != 0) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<SceneRenderingBitArrayAllocator>::Realloc(puVar1,0);
    }
    iVar4 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar4;
    if (iVar4 != 0) {
      iVar4 = *(int *)((longlong)param_1 + 0x2c) + 0x1f;
      puVar6 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar6 = param_2 + 2;
      }
      puVar5 = (undefined8 *)param_1[4];
      if ((undefined8 *)param_1[4] == (undefined8 *)0x0) {
        puVar5 = puVar1;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar5,puVar6,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
    }
  }
  param_1[6] = 0;
  iVar4 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_141dab210(param_1 + 6,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[6],pvVar2,(longlong)iVar4 << 3);
  }
  puVar1 = param_1 + 8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (puVar1 != param_2 + 8) {
    uVar3 = *(int *)(param_2 + 0xb) + 0x1f + (*(int *)(param_2 + 0xb) + 0x1f >> 0x1f & 0x1fU) &
            0xffffffe0;
    if (uVar3 != 0) {
      *(uint *)((longlong)param_1 + 0x5c) = uVar3;
      TBitArray<SceneRenderingBitArrayAllocator>::Realloc(puVar1,0);
    }
    iVar4 = *(int *)(param_2 + 0xb);
    *(int *)(param_1 + 0xb) = iVar4;
    if (iVar4 != 0) {
      iVar4 = *(int *)((longlong)param_1 + 0x5c) + 0x1f;
      puVar6 = (undefined8 *)param_2[10];
      if ((undefined8 *)param_2[10] == (undefined8 *)0x0) {
        puVar6 = param_2 + 8;
      }
      puVar5 = (undefined8 *)param_1[10];
      if ((undefined8 *)param_1[10] == (undefined8 *)0x0) {
        puVar5 = puVar1;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar5,puVar6,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
    }
  }
  param_1[0xc] = 0;
  iVar4 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_141dab210(param_1 + 0xc,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0xc],pvVar2,(longlong)iVar4 << 3);
  }
  param_1[0xe] = param_2[0xe];
  return param_1;
}



// FUNCTION 141d8bad0 ~FPrimitiveOcclusionHistory body=210 status=ok
// SIG undefined ~FPrimitiveOcclusionHistory(void)

void FPrimitiveOcclusionHistory::~FPrimitiveOcclusionHistory(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = 3;
  param_1 = param_1 + 0x20;
  do {
    puVar3 = *(undefined8 **)(param_1 + -8);
    param_1 = param_1 + -8;
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
          bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
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
  } while (lVar7 != 0);
  return;
}



// FUNCTION 141d8bbb0 operator= body=170 status=ok
// SIG undefined operator=(void)

longlong * FTemporalAAHistory::operator=(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = 2;
  plVar3 = param_1;
  do {
    plVar1 = *(longlong **)((param_2 - (longlong)param_1) + (longlong)plVar3);
    plVar2 = (longlong *)*plVar3;
    *plVar3 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 141d8bc60 FUN_141d8bc60 body=391 status=ok
// SIG undefined FUN_141d8bc60(void)

longlong * FUN_141d8bc60(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  puVar6 = (undefined4 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141ad3f10(*param_2 + (longlong)(int)puVar6 * 8,param_1);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 8);
    puVar5 = puVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 6) = 0;
      puVar5 = puVar1;
    }
    FUN_141ad3f10(puVar5,param_1);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141d8bdf0 FUN_141d8bdf0 body=173 status=ok
// SIG undefined FUN_141d8bdf0(void)

undefined8 FUN_141d8bdf0(undefined8 param_1,longlong param_2)

{
  FUN_141ad3f10(param_2,param_1);
  FUN_141ad3f10(param_2 + 8,param_1);
  FUN_1419e0a40(param_1,param_2 + 0x10);
  FUN_1419e0a40(param_1,param_2 + 0x16);
  FUN_1419e0a40(param_1,param_2 + 0x1c);
  FUN_1419e0b60(param_1,param_2 + 0x22);
  FUN_1419e0b60(param_1,param_2 + 0x26);
  FUN_1419e0a40(param_1,param_2 + 0x2a);
  FUN_1419e0a40(param_1,param_2 + 0x30);
  FUN_1419e0a40(param_1,param_2 + 0x36);
  FUN_1419e0a40(param_1,param_2 + 0x3c);
  FUN_1419e0a40(param_1,param_2 + 0x42);
  return param_1;
}



// FUNCTION 141d8bea0 FUN_141d8bea0 body=576 status=ok
// SIG undefined FUN_141d8bea0(void)

longlong * FUN_141d8bea0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,4);
    }
  }
  else {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 5,4);
    }
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 6,4);
  }
  return param_1;
}



// FUNCTION 141d8c0e0 FUN_141d8c0e0 body=1395 status=ok
// SIG undefined FUN_141d8c0e0(void)

void FUN_141d8c0e0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res8;
  uint local_res18;
  undefined4 local_res20;
  int local_118;
  undefined8 local_110;
  longlong local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 local_d0;
  
  lVar14 = *(longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar14 + 0x1ad8);
  fVar3 = *(float *)(lVar14 + 0x8e4);
  fVar20 = DAT_1464c313c;
  if (DAT_146a9ecec != 0) {
    fVar20 = 0.0;
  }
  if (((*(char *)(*(longlong *)(lVar14 + 0x10) + 0x4c) == '\0') ||
      (*(int *)(*(longlong *)(lVar14 + 0x10) + 0x48) == 0)) ||
     (bVar5 = true, 1 < *(int *)(lVar14 + 0xf60) - 1U)) {
    bVar5 = false;
  }
  param_2 = DAT_1464c3144 * param_2;
  if (param_2 < DAT_1464c3144 + param_2) {
    local_110._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar14 + 0x8dc) >> 0x20);
    fVar7 = local_110._4_4_;
    local_110._0_4_ = (float)*(undefined8 *)(lVar14 + 0x8dc);
    fVar6 = (float)local_110;
    local_f8 = (longlong)param_2 * 4;
    lVar14 = (longlong)param_2 << 5;
    iVar12 = param_2 * 0x20;
    local_118 = param_2;
    do {
      if (iVar2 <= iVar12) {
        return;
      }
      local_res18 = 0;
      local_res8 = 0;
      local_110 = 0;
      uVar15 = 1;
      iVar16 = iVar12;
      do {
        if (iVar2 <= iVar16) break;
        lVar4 = *(longlong *)(param_1 + 8);
        lVar11 = lVar14 + local_110;
        local_res20 = 0xffffffff;
        puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x1000) + lVar11 * 0x28);
        fVar18 = *(float *)(*(longlong *)(lVar4 + 0x1000) + lVar11 * 0x28) - fVar6;
        fVar19 = *(float *)((longlong)puVar1 + 4) - fVar7;
        fVar17 = *(float *)(puVar1 + 1) - fVar3;
        fVar17 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17;
        if ((*(byte *)(*(longlong *)(lVar4 + 0x1030) + lVar11) & 9) == 9) {
          local_res20 = *(undefined4 *)(*(longlong *)(lVar4 + 0x1020) + lVar11 * 8);
        }
        if (3.4028235e+38 <= *(float *)((longlong)puVar1 + 0x24)) {
          fVar18 = 3.4028235e+38;
        }
        else {
          fVar18 = *(float *)((longlong)puVar1 + 0x24) * *(float *)(param_1 + 0x18);
        }
        fVar19 = *(float *)((longlong)puVar1 + 0x1c);
        if (((*(char *)(*(longlong *)(param_1 + 0x10) + 0x1a9a) != '\0') || (DAT_1464c3130 == 0)) ||
           (((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x2c) & 0x4000000) !=
             0 && (cVar8 = (**(code **)(**(longlong **)
                                          (*(longlong *)(*(longlong *)(lVar4 + 0xfe0) + lVar11 * 8)
                                          + 8) + 0xf8))(), cVar8 == '\0')))) {
          fVar18 = 3.4028235e+38;
        }
        lVar4 = *(longlong *)(param_1 + 0x20);
        if (lVar4 != 0) {
          uVar13 = 1 << ((byte)iVar16 & 0x1f);
          iVar10 = iVar16;
          if (iVar16 < 0) {
            iVar10 = iVar16 + 0x1f;
          }
          if ((*(uint *)(((ulonglong)(*(ulonglong *)(lVar4 + 0x50) != 0) - 1 & lVar4 + 0x40U |
                         *(ulonglong *)(lVar4 + 0x50)) + (longlong)(iVar10 >> 5) * 4) & uVar13) == 0
             ) {
            if ((*(uint *)(((ulonglong)(*(longlong *)(lVar4 + 0x70) != 0) - 1 & lVar4 + 0x60U |
                           *(ulonglong *)(lVar4 + 0x70)) + (longlong)(iVar10 >> 5) * 4) & uVar13) !=
                0) {
              fVar18 = 0.0;
            }
          }
          else {
            fVar18 = 3.4028235e+38;
            fVar19 = 0.0;
          }
        }
        cVar8 = (**(code **)(**(longlong **)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) + lVar11 * 8) +
                               8) + 0x18))();
        if ((DAT_1464c3130 == 0) ||
           (lVar4 = *(longlong *)(param_1 + 0x10), *(char *)(lVar4 + 0x1a9a) != '\0')) {
LAB_141d8c4ea:
          if ((fVar18 * fVar18 < fVar17) ||
             (local_res18 = local_res18 | uVar15, (fVar18 - fVar20) * (fVar18 - fVar20) < fVar17)) {
            local_res8 = local_res8 | uVar15;
          }
        }
        else if ((*(char *)(lVar4 + 0x1a99) == '\0') &&
                ((fVar17 <= (fVar18 + fVar20) * (fVar18 + fVar20) && (fVar19 <= fVar17)))) {
          local_e0 = *(undefined4 *)(puVar1 + 1);
          local_e8 = *puVar1;
          local_dc = *(undefined8 *)((longlong)puVar1 + 0xc);
          local_d0 = *(undefined4 *)(puVar1 + 3);
          local_d4 = *(undefined4 *)((longlong)puVar1 + 0x14);
          cVar9 = (**(code **)(**(longlong **)(lVar4 + 0x30a0) + 0x28))
                            (*(longlong **)(lVar4 + 0x30a0),local_res20,&local_e8);
          if (((cVar9 != '\0') &&
              ((cVar8 != '\0' ||
               ((cVar8 = FConvexVolume::IntersectSphere
                                   (*(longlong *)(param_1 + 0x10) + 0x1070,puVar1,puVar1 + 3),
                cVar8 != '\0' &&
                (cVar8 = FConvexVolume::IntersectBox
                                   (*(longlong *)(param_1 + 0x10) + 0x1070,puVar1,
                                    (longlong)puVar1 + 0xc), cVar8 != '\0')))))) &&
             ((!bVar5 ||
              ((*(uint *)(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) + lVar11 * 8) + 8) +
                         0x18) >> 3 & 1) == 0)))) goto LAB_141d8c4ea;
        }
        iVar16 = iVar16 + 1;
        local_110 = local_110 + 1;
        uVar15 = uVar15 * 2;
      } while (local_110 < 0x20);
      if (local_res8 != 0) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b10);
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(param_1 + 0x10) + 0x1b00;
        }
        *(uint *)(lVar11 + local_f8) = local_res8;
      }
      if (local_res18 != 0) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1ad0);
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(param_1 + 0x10) + 0x1ac0;
        }
        *(uint *)(lVar11 + local_f8) = local_res18;
      }
      lVar14 = lVar14 + 0x20;
      local_118 = local_118 + 1;
      iVar12 = iVar12 + 0x20;
      local_f8 = local_f8 + 4;
    } while (local_118 < param_2 + DAT_1464c3144);
  }
  return;
}



// FUNCTION 141d8c660 FUN_141d8c660 body=838 status=ok
// SIG undefined FUN_141d8c660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d8c660(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  char local_2d0;
  undefined2 local_2cf;
  undefined1 local_2cd;
  undefined4 local_2cc;
  longlong *local_2c8 [2];
  undefined1 local_2b7;
  undefined4 local_208;
  longlong *local_138 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_2cf = 0x101;
  local_2cd = 1;
  local_2cc = 0x22;
  local_2d8 = (longlong *)**(undefined8 **)(param_1 + 8);
  local_2d0 = param_3 + '\x01';
  FUN_140c63b80(local_2c8,0,0,&local_2d8);
  local_2b7 = 0;
  if (DAT_1464c9c1b == '\0') {
    local_208 = 1;
    lVar2 = (**(code **)(*local_138[0] + 8))();
    uVar1 = *(undefined4 *)(lVar2 + 100);
    lVar2 = (**(code **)(*local_138[0] + 8))();
    puVar3 = (undefined8 *)
             FUN_141ce5160(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined4 *)(lVar2 + 0x60),
                           uVar1);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_2d8 = (longlong *)*puVar3;
    puVar3 = puVar5 + 1;
    local_2c8[0] = local_2d8;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *puVar5 = local_2d8;
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar4 + 2) = 1;
    puVar4[3] = puVar5;
    *(undefined4 *)(puVar4 + 4) = 1;
    *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_2d8 = local_138[0];
  puVar3 = puVar5 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *puVar5 = local_2d8;
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  *puVar4 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar4 + 2) = 1;
  puVar4[3] = puVar5;
  *(undefined4 *)(puVar4 + 4) = 1;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[1] = 0;
  FRHICommandListBase::CacheActiveRenderTargets(param_2,local_208,local_2c8,local_138);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 0x54;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0x54;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar5 + 2,local_2c8);
  if (param_3 == '\0') {
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
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
    *puVar5 = &PTR_LAB_144e345f0;
    *(undefined2 *)(puVar5 + 2) = 0x100;
    *(undefined1 *)((longlong)puVar5 + 0x12) = 0;
  }
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2c8);
  return;
}



// FUNCTION 141d8c9b0 FUN_141d8c9b0 body=1184 status=ok
// SIG undefined FUN_141d8c9b0(void)

void FUN_141d8c9b0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res8;
  longlong local_f0;
  float local_e0;
  float fStack_dc;
  
  lVar13 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar13 + 0x1ad8);
  fVar4 = *(float *)(lVar13 + 0x8e4);
  fVar20 = DAT_1464c313c;
  if (DAT_146a9ecec != 0) {
    fVar20 = 0.0;
  }
  if (((*(char *)(*(longlong *)(lVar13 + 0x10) + 0x4c) == '\0') ||
      (*(int *)(*(longlong *)(lVar13 + 0x10) + 0x48) == 0)) ||
     (bVar6 = true, 1 < *(int *)(lVar13 + 0xf60) - 1U)) {
    bVar6 = false;
  }
  param_2 = DAT_1464c3144 * param_2;
  if (param_2 < DAT_1464c3144 + param_2) {
    fStack_dc = (float)((ulonglong)*(undefined8 *)(lVar13 + 0x8dc) >> 0x20);
    local_e0 = (float)*(undefined8 *)(lVar13 + 0x8dc);
    local_f0 = (longlong)param_2 * 4;
    lVar13 = (longlong)param_2 << 5;
    iVar11 = param_2 * 0x20;
    local_res8 = param_2;
    do {
      if (iVar3 <= iVar11) {
        return;
      }
      uVar14 = 0;
      uVar15 = 0;
      lVar16 = 0;
      uVar10 = 1;
      iVar9 = iVar11;
      do {
        if (iVar3 <= iVar9) break;
        lVar1 = lVar13 + lVar16;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1000);
        lVar2 = lVar5 + lVar1 * 0x28;
        fVar18 = *(float *)(lVar5 + lVar1 * 0x28) - local_e0;
        fVar19 = *(float *)(lVar2 + 4) - fStack_dc;
        fVar17 = *(float *)(lVar2 + 8) - fVar4;
        fVar17 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17;
        if (3.4028235e+38 <= *(float *)(lVar2 + 0x24)) {
          fVar18 = 3.4028235e+38;
        }
        else {
          fVar18 = *(float *)(lVar2 + 0x24) * *(float *)(param_1 + 0x18);
        }
        fVar19 = *(float *)(lVar2 + 0x1c);
        if (((*(char *)(*(longlong *)(param_1 + 0x10) + 0x1a9a) != '\0') || (DAT_1464c3130 == 0)) ||
           (((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x2c) & 0x4000000) !=
             0 && (cVar7 = (**(code **)(**(longlong **)
                                          (*(longlong *)
                                            (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) +
                                            lVar1 * 8) + 8) + 0xf8))(), cVar7 == '\0')))) {
          fVar18 = 3.4028235e+38;
        }
        lVar5 = *(longlong *)(param_1 + 0x20);
        if (lVar5 != 0) {
          uVar12 = 1 << ((byte)iVar9 & 0x1f);
          iVar8 = iVar9;
          if (iVar9 < 0) {
            iVar8 = iVar9 + 0x1f;
          }
          if ((*(uint *)(((ulonglong)(*(ulonglong *)(lVar5 + 0x50) != 0) - 1 & lVar5 + 0x40U |
                         *(ulonglong *)(lVar5 + 0x50)) + (longlong)(iVar8 >> 5) * 4) & uVar12) == 0)
          {
            if ((*(uint *)(((ulonglong)(*(longlong *)(lVar5 + 0x70) != 0) - 1 & lVar5 + 0x60U |
                           *(ulonglong *)(lVar5 + 0x70)) + (longlong)(iVar8 >> 5) * 4) & uVar12) !=
                0) {
              fVar18 = 0.0;
            }
          }
          else {
            fVar18 = 3.4028235e+38;
            fVar19 = 0.0;
          }
        }
        cVar7 = (**(code **)(**(longlong **)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) + lVar1 * 8) + 8
                               ) + 0x18))();
        if ((((DAT_1464c3130 == 0) ||
             (lVar5 = *(longlong *)(param_1 + 0x10), *(char *)(lVar5 + 0x1a9a) != '\0')) ||
            ((((*(char *)(lVar5 + 0x1a99) == '\0' &&
               ((fVar17 <= (fVar18 + fVar20) * (fVar18 + fVar20) && (fVar19 <= fVar17)))) &&
              ((cVar7 != '\0' ||
               ((cVar7 = FConvexVolume::IntersectSphere(lVar5 + 0x1070,lVar2,lVar2 + 0x18),
                cVar7 != '\0' &&
                (cVar7 = FConvexVolume::IntersectBox
                                   (*(longlong *)(param_1 + 0x10) + 0x1070,lVar2,lVar2 + 0xc),
                cVar7 != '\0')))))) &&
             ((!bVar6 ||
              ((*(uint *)(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) + lVar1 * 8) + 8) +
                         0x18) >> 3 & 1) == 0)))))) &&
           ((fVar18 * fVar18 < fVar17 ||
            (uVar14 = uVar14 | uVar10, (fVar18 - fVar20) * (fVar18 - fVar20) < fVar17)))) {
          uVar15 = uVar15 | uVar10;
        }
        iVar9 = iVar9 + 1;
        lVar16 = lVar16 + 1;
        uVar10 = uVar10 * 2;
      } while (lVar16 < 0x20);
      if (uVar15 != 0) {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b10);
        if (lVar16 == 0) {
          lVar16 = *(longlong *)(param_1 + 0x10) + 0x1b00;
        }
        *(uint *)(lVar16 + local_f0) = uVar15;
      }
      if (uVar14 != 0) {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1ad0);
        if (lVar16 == 0) {
          lVar16 = *(longlong *)(param_1 + 0x10) + 0x1ac0;
        }
        *(uint *)(lVar16 + local_f0) = uVar14;
      }
      lVar13 = lVar13 + 0x20;
      local_res8 = local_res8 + 1;
      iVar11 = iVar11 + 0x20;
      local_f0 = local_f0 + 4;
    } while (local_res8 < param_2 + DAT_1464c3144);
  }
  return;
}



// FUNCTION 141d8ce50 FUN_141d8ce50 body=1456 status=ok
// SIG undefined FUN_141d8ce50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d8ce50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_268 [32];
  uint local_248;
  longlong *local_240;
  float local_238;
  float fStack_234;
  float local_230;
  float local_22c;
  longlong *local_228;
  undefined8 uStack_220;
  longlong local_218;
  uint uStack_210;
  int iStack_20c;
  undefined8 local_208;
  longlong *local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  uint uStack_1e8;
  int iStack_1e4;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  uint uStack_1c0;
  int iStack_1bc;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 uStack_1a8;
  longlong local_1a0;
  uint uStack_198;
  int iStack_194;
  undefined8 local_190;
  longlong *local_188;
  undefined1 auStack_180 [4];
  uint uStack_17c;
  longlong local_178;
  uint uStack_170;
  int iStack_16c;
  undefined8 local_168;
  undefined1 local_160 [8];
  float local_158;
  float local_14c;
  float local_148;
  undefined1 local_140 [12];
  undefined1 local_134 [12];
  float local_128;
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_240 = param_1;
  AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
  if ((*(longlong **)(param_1[1] + 0x30a0) == (longlong *)0x0) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1[1] + 0x30a0) + 0x20))(), cVar4 == '\0')) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  local_248 = (uint)bVar5;
  if (DAT_1464c3134 == 0) {
    local_248 = 0;
  }
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            (&local_188,*(longlong *)(*param_1 + 8) + 0x1070);
  uStack_210 = uStack_170;
  iStack_20c = iStack_16c;
  lVar7 = 0x10;
  uStack_220 = (ulonglong)uStack_17c << 0x20;
  local_218 = local_178;
  local_228 = local_188;
  local_208 = local_168;
  local_200 = local_188;
  local_1f0 = local_178;
  local_1e0 = local_168;
  local_1d8 = local_188;
  local_1c8 = local_178;
  local_1b8 = local_168;
  local_1b0 = local_188;
  local_1a0 = local_178;
  local_190 = local_168;
  iVar11 = iStack_16c;
  uStack_1f8 = uStack_220;
  uStack_1d0 = uStack_220;
  uStack_1a8 = uStack_220;
  uStack_1e8 = uStack_210;
  iStack_1e4 = iStack_20c;
  uStack_1c0 = uStack_210;
  iStack_1bc = iStack_20c;
  uStack_198 = uStack_210;
  iStack_194 = iStack_20c;
  do {
    if (iVar11 < *(int *)(local_218 + 0x18)) {
      uStack_210 = uStack_210 & ~uStack_220._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_220);
      iVar11 = iStack_20c;
    }
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 0xc;
  iVar9 = iStack_1e4;
  do {
    if (iVar9 < *(int *)(local_1f0 + 0x18)) {
      uStack_1e8 = uStack_1e8 & ~uStack_1f8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1f8);
      iVar9 = iStack_1e4;
    }
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 8;
  iVar10 = iStack_1bc;
  do {
    if (iVar10 < *(int *)(local_1c8 + 0x18)) {
      uStack_1c0 = uStack_1c0 & ~uStack_1d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1d0);
      iVar10 = iStack_1bc;
    }
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 4;
  iVar8 = iStack_194;
  do {
    if (iVar8 < *(int *)(local_1a0 + 0x18)) {
      uStack_198 = uStack_198 & ~uStack_1a8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a8);
      iVar8 = iStack_194;
    }
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (iStack_16c < *(int *)(local_178 + 0x18)) {
    do {
      if (iVar11 < *(int *)(local_218 + 0x18)) {
        uStack_210 = uStack_210 & ~uStack_220._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_220);
        iVar11 = iStack_20c;
      }
      if (iVar9 < *(int *)(local_1f0 + 0x18)) {
        uStack_1e8 = uStack_1e8 & ~uStack_1f8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1f8);
        iVar9 = iStack_1e4;
      }
      if (iVar10 < *(int *)(local_1c8 + 0x18)) {
        uStack_1c0 = uStack_1c0 & ~uStack_1d0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1d0);
        iVar10 = iStack_1bc;
      }
      if (iVar8 < *(int *)(local_1a0 + 0x18)) {
        uStack_198 = uStack_198 & ~uStack_1a8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a8);
        iVar8 = iStack_194;
      }
      cVar6 = '\0';
      lVar7 = (longlong)iStack_16c * 0x30 + *local_188;
      plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x20) + 0x30);
      cVar4 = (char)plVar1[0x31];
      if (((cVar4 == '\x01') || (cVar4 == '\x02')) || (cVar4 == '\x03')) {
        (**(code **)(*plVar1 + 0x10))(plVar1,local_140);
        cVar4 = FConvexVolume::IntersectSphere(local_240[1] + 0x1070,local_140,local_134);
        plVar3 = local_240;
        if (cVar4 != '\0') {
          if (1.0 < *(float *)(local_240[1] + 0x3cc) || *(float *)(local_240[1] + 0x3cc) == 1.0) {
            cVar6 = '\x01';
          }
          else {
            (**(code **)(*plVar1 + 0x10))(plVar1,&local_238);
            lVar2 = plVar3[1];
            fVar14 = local_238 - *(float *)(lVar2 + 0x8dc);
            fVar12 = fStack_234 - *(float *)(lVar2 + 0x8e0);
            fVar13 = local_230 - *(float *)(lVar2 + 0x8e4);
            fVar15 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
            fVar12 = (float)(**(code **)(*plVar1 + 0xf8))(plVar1);
            fVar13 = (float)(**(code **)(*plVar1 + 0xf8))(plVar1);
            lVar2 = plVar3[1];
            fVar14 = DAT_1464c3114 / local_22c;
            if (0.0002 <= fVar14) {
              fVar14 = 0.0002;
            }
            fVar12 = fVar12 * fVar13 * _DAT_1464c3140 * _DAT_1464c3140;
            fVar14 = fVar14 * *(float *)(lVar2 + 0x11ec);
            if ((1.0 <= fVar14 * fVar14 * fVar15) || ((fVar12 != 0.0 && (fVar12 <= fVar15)))) {
              cVar6 = '\0';
            }
            else {
              cVar6 = '\x01';
            }
            if (((char)local_248 != '\0') && (cVar6 != '\0')) {
              local_158 = local_230;
              local_148 = local_22c;
              local_128 = local_22c;
              local_14c = local_22c;
              plVar1 = *(longlong **)(lVar2 + 0x30a0);
              cVar6 = (**(code **)(*plVar1 + 0x28))(plVar1,0xffffffff,local_160);
            }
          }
        }
      }
      else {
        cVar6 = '\x01';
      }
      if (cVar6 != '\0') {
        local_108 = 0;
        local_100 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = lVar7;
        lVar7 = FUN_141d9f390(local_240[1] + 0x1df8,local_120,iStack_16c);
        if (*(longlong *)(lVar7 + 8) != 0) {
          FUN_141d8b8e0(*(longlong *)(lVar7 + 8),&local_108);
        }
      }
      uStack_170 = uStack_170 & ~uStack_17c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(auStack_180);
    } while (iStack_16c < *(int *)(local_178 + 0x18));
  }
  AK::MemoryMgr::StartProfileThreadUsage(iStack_16c);
  return;
}



// FUNCTION 141d8d400 FUN_141d8d400 body=737 status=ok
// SIG undefined FUN_141d8d400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d8d400(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  char local_2c0;
  undefined2 local_2bf;
  undefined1 local_2bd;
  undefined4 local_2bc;
  longlong *local_2b8 [2];
  undefined1 local_2a7;
  undefined4 local_1f8;
  longlong *local_128 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_2bf = 0x101;
  local_2c0 = param_3 + '\x01';
  local_2bd = 1;
  local_2c8 = (longlong *)**(undefined8 **)(param_1 + 8);
  local_2bc = 0x22;
  FUN_140c63b80(local_2b8,0,0,&local_2c8);
  local_2a7 = 0;
  if (DAT_1464c9c1b == '\0') {
    local_1f8 = 1;
    lVar2 = (**(code **)(*local_128[0] + 8))();
    uVar1 = *(undefined4 *)(lVar2 + 100);
    lVar2 = (**(code **)(*local_128[0] + 8))();
    puVar3 = (undefined8 *)
             FUN_141ce5160(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined4 *)(lVar2 + 0x60),
                           uVar1);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_2c8 = (longlong *)*puVar3;
    puVar3 = puVar5 + 1;
    local_2b8[0] = local_2c8;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *puVar5 = local_2c8;
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar4 + 2) = 1;
    puVar4[3] = puVar5;
    *(undefined4 *)(puVar4 + 4) = 1;
    *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_2c8 = local_128[0];
  puVar3 = puVar5 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *puVar5 = local_2c8;
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  *puVar4 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar4 + 2) = 1;
  puVar4[3] = puVar5;
  *(undefined4 *)(puVar4 + 4) = 1;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[1] = 0;
  FRHICommandListBase::CacheActiveRenderTargets(param_2,local_1f8,local_2b8,local_128);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 0x54;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0x54;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar5 + 2,local_2b8);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2b8);
  return;
}



// FUNCTION 141d8d6f0 FUN_141d8d6f0 body=642 status=ok
// SIG undefined FUN_141d8d6f0(void)

void FUN_141d8d6f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar11 = 0;
  puVar9 = (undefined8 *)
           ((longlong)*(int *)(*(longlong *)(*param_1 + 0x30) + (longlong)param_2 * 4) * 0xe8 +
           *(longlong *)(*param_1 + 0x40));
  puVar8 = (uint *)*puVar9;
  lVar14 = (longlong)*(int *)(puVar9 + 1);
  lVar2 = param_1[4];
  if (0 < lVar14) {
    lVar10 = 0;
    do {
      uVar5 = *puVar8;
      if (lVar2 == 0) {
        lVar13 = *(longlong *)(*(longlong *)param_1[2] + 0x10);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)param_1[2];
        }
        if ((*(uint *)(lVar13 + ((longlong)(int)uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
        goto LAB_141d8d800;
      }
      else {
        uVar12 = 1 << ((byte)uVar5 & 0x1f);
        lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(lVar2 + 0x10);
        }
        lVar1 = ((longlong)(int)uVar5 >> 5) * 4;
        if ((*(uint *)(lVar13 + lVar1) & uVar12) == 0) {
          lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(lVar2 + 0x18);
          }
          if ((*(uint *)(lVar13 + lVar1) & uVar12) == 0) goto LAB_141d8d914;
        }
LAB_141d8d800:
        lVar13 = *(longlong *)(lVar10 + 8 + puVar9[2]);
        if ((*(uint *)(lVar13 + 0x8c) & 0x2000000) == 0) {
          iVar11 = iVar11 + *(int *)(lVar13 + 0x80);
        }
        else {
          lVar13 = (longlong)*(int *)(lVar13 + 0xcc);
          if (lVar2 == 0) {
            uVar7 = *(ulonglong *)(**(longlong **)param_1[3] + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            iVar11 = iVar11 + (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) *
                                           0x101010101010101 >> 0x38);
          }
          else {
            uVar7 = *(ulonglong *)(**(longlong **)(lVar2 + 0x20) + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar4 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            uVar7 = *(ulonglong *)(**(longlong **)(lVar2 + 0x28) + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            uVar5 = (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
            bVar3 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
            if (uVar5 < bVar3) {
              uVar5 = (uint)bVar3;
            }
            iVar11 = iVar11 + uVar5;
          }
        }
      }
LAB_141d8d914:
      lVar10 = lVar10 + 0x38;
      puVar8 = puVar8 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if (iVar11 != 0) {
      uVar6 = 0xffff;
      if (iVar11 < 0x10000) {
        uVar6 = (short)iVar11;
      }
      *(undefined2 *)(*(longlong *)param_1[1] + (longlong)param_2 * 2) = uVar6;
    }
  }
  *(int *)(puVar9 + 0x1b) = iVar11;
  return;
}



// FUNCTION 141d8d980 FUN_141d8d980 body=1170 status=ok
// SIG undefined FUN_141d8d980(void)

void FUN_141d8d980(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res8;
  longlong local_f0;
  float local_e0;
  float fStack_dc;
  
  lVar14 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar14 + 0x1ad8);
  fVar4 = *(float *)(lVar14 + 0x8e4);
  fVar20 = DAT_1464c313c;
  if (DAT_146a9ecec != 0) {
    fVar20 = 0.0;
  }
  if (((*(char *)(*(longlong *)(lVar14 + 0x10) + 0x4c) == '\0') ||
      (*(int *)(*(longlong *)(lVar14 + 0x10) + 0x48) == 0)) ||
     (bVar6 = true, 1 < *(int *)(lVar14 + 0xf60) - 1U)) {
    bVar6 = false;
  }
  param_2 = DAT_1464c3144 * param_2;
  if (param_2 < DAT_1464c3144 + param_2) {
    fStack_dc = (float)((ulonglong)*(undefined8 *)(lVar14 + 0x8dc) >> 0x20);
    local_e0 = (float)*(undefined8 *)(lVar14 + 0x8dc);
    local_f0 = (longlong)param_2 * 4;
    lVar14 = (longlong)param_2 << 5;
    iVar12 = param_2 * 0x20;
    local_res8 = param_2;
    do {
      if (iVar3 <= iVar12) {
        return;
      }
      uVar15 = 0;
      uVar10 = 0;
      lVar16 = 0;
      uVar9 = 1;
      iVar11 = iVar12;
      do {
        if (iVar3 <= iVar11) break;
        lVar1 = lVar14 + lVar16;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1000);
        lVar2 = lVar5 + lVar1 * 0x28;
        fVar18 = *(float *)(lVar5 + lVar1 * 0x28) - local_e0;
        fVar19 = *(float *)(lVar2 + 4) - fStack_dc;
        fVar17 = *(float *)(lVar2 + 8) - fVar4;
        fVar17 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17;
        if (3.4028235e+38 <= *(float *)(lVar2 + 0x24)) {
          fVar18 = 3.4028235e+38;
        }
        else {
          fVar18 = *(float *)(lVar2 + 0x24) * *(float *)(param_1 + 0x18);
        }
        fVar19 = *(float *)(lVar2 + 0x1c);
        if (((*(char *)(*(longlong *)(param_1 + 0x10) + 0x1a9a) != '\0') || (DAT_1464c3130 == 0)) ||
           (((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x2c) & 0x4000000) !=
             0 && (cVar7 = (**(code **)(**(longlong **)
                                          (*(longlong *)
                                            (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) +
                                            lVar1 * 8) + 8) + 0xf8))(), cVar7 == '\0')))) {
          fVar18 = 3.4028235e+38;
        }
        lVar5 = *(longlong *)(param_1 + 0x20);
        if (lVar5 != 0) {
          uVar13 = 1 << ((byte)iVar11 & 0x1f);
          iVar8 = iVar11;
          if (iVar11 < 0) {
            iVar8 = iVar11 + 0x1f;
          }
          if ((*(uint *)(((ulonglong)(*(ulonglong *)(lVar5 + 0x50) != 0) - 1 & lVar5 + 0x40U |
                         *(ulonglong *)(lVar5 + 0x50)) + (longlong)(iVar8 >> 5) * 4) & uVar13) == 0)
          {
            if ((*(uint *)(((ulonglong)(*(longlong *)(lVar5 + 0x70) != 0) - 1 & lVar5 + 0x60U |
                           *(ulonglong *)(lVar5 + 0x70)) + (longlong)(iVar8 >> 5) * 4) & uVar13) !=
                0) {
              fVar18 = 0.0;
            }
          }
          else {
            fVar18 = 3.4028235e+38;
            fVar19 = 0.0;
          }
        }
        cVar7 = (**(code **)(**(longlong **)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) + lVar1 * 8) + 8
                               ) + 0x18))();
        if ((((DAT_1464c3130 == 0) ||
             (lVar5 = *(longlong *)(param_1 + 0x10), *(char *)(lVar5 + 0x1a9a) != '\0')) ||
            ((((*(char *)(lVar5 + 0x1a99) == '\0' &&
               ((fVar17 <= (fVar18 + fVar20) * (fVar18 + fVar20) && (fVar19 <= fVar17)))) &&
              ((cVar7 != '\0' ||
               (cVar7 = FConvexVolume::IntersectBox(lVar5 + 0x1070,lVar2,lVar2 + 0xc), cVar7 != '\0'
               )))) && ((!bVar6 ||
                        ((*(uint *)(*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) +
                                       lVar1 * 8) + 8) + 0x18) >> 3 & 1) == 0)))))) &&
           ((fVar18 * fVar18 < fVar17 ||
            (uVar15 = uVar15 | uVar9, (fVar18 - fVar20) * (fVar18 - fVar20) < fVar17)))) {
          uVar10 = uVar10 | uVar9;
        }
        iVar11 = iVar11 + 1;
        lVar16 = lVar16 + 1;
        uVar9 = uVar9 * 2;
      } while (lVar16 < 0x20);
      if (uVar10 != 0) {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b10);
        if (lVar16 == 0) {
          lVar16 = *(longlong *)(param_1 + 0x10) + 0x1b00;
        }
        *(uint *)(lVar16 + local_f0) = uVar10;
      }
      if (uVar15 != 0) {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1ad0);
        if (lVar16 == 0) {
          lVar16 = *(longlong *)(param_1 + 0x10) + 0x1ac0;
        }
        *(uint *)(lVar16 + local_f0) = uVar15;
      }
      lVar14 = lVar14 + 0x20;
      local_res8 = local_res8 + 1;
      iVar12 = iVar12 + 0x20;
      local_f0 = local_f0 + 4;
    } while (local_res8 < param_2 + DAT_1464c3144);
  }
  return;
}



// FUNCTION 141d8de20 FUN_141d8de20 body=478 status=ok
// SIG undefined FUN_141d8de20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d8de20(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_58 = *(undefined8 *)param_1[3];
  lVar1 = param_1[1];
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_50 = *(undefined8 *)param_1[4];
  local_48 = *(undefined8 *)(*(longlong *)(lVar1 + 0x130) + 8);
  local_40 = *(undefined8 *)(*(longlong *)(lVar1 + 0x128) + 0x18);
  local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x88) + 8);
  local_30 = *(undefined8 *)(*(longlong *)(lVar1 + 0x80) + 0x18);
  puVar2 = puVar4 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar4 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *puVar4 = local_48;
  puVar4[1] = local_40;
  puVar4[2] = local_38;
  puVar4[3] = local_30;
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  local_60 = 0;
  local_68 = 0;
  **(undefined8 **)(param_2 + 8) = puVar3;
  *(undefined8 **)(param_2 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_144d91e60;
  local_70 = &local_48;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 2) = 4;
  puVar3[3] = puVar4;
  *(undefined4 *)(puVar3 + 4) = 2;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 2;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,4);
  FUN_141ad7ef0(param_2,2,&local_58,*(undefined8 *)param_1[5]);
  local_70 = *(undefined8 **)param_1[5];
  local_78 = &local_58;
  local_68 = param_3;
  FProjectedShadowInfo::ClearDepth(param_1[2],param_2,*param_1,2);
  return;
}



// FUNCTION 141d8e000 FUN_141d8e000 body=1332 status=ok
// SIG undefined FUN_141d8e000(void)

void FUN_141d8e000(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_res8;
  undefined4 local_res18;
  int local_res20;
  undefined8 local_110;
  longlong local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 local_d0;
  
  lVar15 = *(longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar15 + 0x1ad8);
  fVar3 = *(float *)(lVar15 + 0x8e4);
  fVar21 = DAT_1464c313c;
  if (DAT_146a9ecec != 0) {
    fVar21 = 0.0;
  }
  if (((*(char *)(*(longlong *)(lVar15 + 0x10) + 0x4c) == '\0') ||
      (*(int *)(*(longlong *)(lVar15 + 0x10) + 0x48) == 0)) ||
     (bVar5 = true, 1 < *(int *)(lVar15 + 0xf60) - 1U)) {
    bVar5 = false;
  }
  param_2 = DAT_1464c3144 * param_2;
  if (param_2 < DAT_1464c3144 + param_2) {
    local_110._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar15 + 0x8dc) >> 0x20);
    fVar7 = local_110._4_4_;
    local_110._0_4_ = (float)*(undefined8 *)(lVar15 + 0x8dc);
    fVar6 = (float)local_110;
    local_f8 = (longlong)param_2 * 4;
    lVar15 = (longlong)param_2 << 5;
    iVar13 = param_2 * 0x20;
    local_res20 = param_2;
    do {
      if (iVar2 <= iVar13) {
        return;
      }
      uVar16 = 0;
      local_res8 = 0;
      local_110 = 0;
      uVar17 = 1;
      iVar12 = iVar13;
      do {
        if (iVar2 <= iVar12) break;
        lVar4 = *(longlong *)(param_1 + 8);
        lVar11 = lVar15 + local_110;
        local_res18 = 0xffffffff;
        puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x1000) + lVar11 * 0x28);
        fVar19 = *(float *)(*(longlong *)(lVar4 + 0x1000) + lVar11 * 0x28) - fVar6;
        fVar20 = *(float *)((longlong)puVar1 + 4) - fVar7;
        fVar18 = *(float *)(puVar1 + 1) - fVar3;
        fVar18 = fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18;
        if ((*(byte *)(lVar11 + *(longlong *)(lVar4 + 0x1030)) & 9) == 9) {
          local_res18 = *(undefined4 *)(*(longlong *)(lVar4 + 0x1020) + lVar11 * 8);
        }
        if (3.4028235e+38 <= *(float *)((longlong)puVar1 + 0x24)) {
          fVar19 = 3.4028235e+38;
        }
        else {
          fVar19 = *(float *)((longlong)puVar1 + 0x24) * *(float *)(param_1 + 0x18);
        }
        fVar20 = *(float *)((longlong)puVar1 + 0x1c);
        if (((*(char *)(*(longlong *)(param_1 + 0x10) + 0x1a9a) != '\0') || (DAT_1464c3130 == 0)) ||
           (((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x2c) & 0x4000000) !=
             0 && (cVar8 = (**(code **)(**(longlong **)
                                          (*(longlong *)(*(longlong *)(lVar4 + 0xfe0) + lVar11 * 8)
                                          + 8) + 0xf8))(), cVar8 == '\0')))) {
          fVar19 = 3.4028235e+38;
        }
        lVar4 = *(longlong *)(param_1 + 0x20);
        if (lVar4 != 0) {
          uVar14 = 1 << ((byte)iVar12 & 0x1f);
          iVar10 = iVar12;
          if (iVar12 < 0) {
            iVar10 = iVar12 + 0x1f;
          }
          if ((*(uint *)(((ulonglong)(*(ulonglong *)(lVar4 + 0x50) != 0) - 1 & lVar4 + 0x40U |
                         *(ulonglong *)(lVar4 + 0x50)) + (longlong)(iVar10 >> 5) * 4) & uVar14) == 0
             ) {
            if ((*(uint *)(((ulonglong)(*(longlong *)(lVar4 + 0x70) != 0) - 1 & lVar4 + 0x60U |
                           *(ulonglong *)(lVar4 + 0x70)) + (longlong)(iVar10 >> 5) * 4) & uVar14) !=
                0) {
              fVar19 = 0.0;
            }
          }
          else {
            fVar19 = 3.4028235e+38;
            fVar20 = 0.0;
          }
        }
        cVar8 = (**(code **)(**(longlong **)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) + lVar11 * 8) +
                               8) + 0x18))();
        if ((DAT_1464c3130 == 0) ||
           (lVar4 = *(longlong *)(param_1 + 0x10), *(char *)(lVar4 + 0x1a9a) != '\0')) {
LAB_141d8e3d3:
          if ((fVar19 * fVar19 < fVar18) ||
             (local_res8 = local_res8 | uVar17, (fVar19 - fVar21) * (fVar19 - fVar21) < fVar18)) {
            uVar16 = uVar16 | uVar17;
          }
        }
        else if ((*(char *)(lVar4 + 0x1a99) == '\0') &&
                ((fVar18 <= (fVar19 + fVar21) * (fVar19 + fVar21) && (fVar20 <= fVar18)))) {
          local_e0 = *(undefined4 *)(puVar1 + 1);
          local_e8 = *puVar1;
          local_dc = *(undefined8 *)((longlong)puVar1 + 0xc);
          local_d0 = *(undefined4 *)(puVar1 + 3);
          local_d4 = *(undefined4 *)((longlong)puVar1 + 0x14);
          cVar9 = (**(code **)(**(longlong **)(lVar4 + 0x30a0) + 0x28))
                            (*(longlong **)(lVar4 + 0x30a0),local_res18,&local_e8);
          if ((cVar9 != '\0') &&
             (((cVar8 != '\0' ||
               (cVar8 = FConvexVolume::IntersectBox
                                  (*(longlong *)(param_1 + 0x10) + 0x1070,puVar1,
                                   (longlong)puVar1 + 0xc), cVar8 != '\0')) &&
              ((!bVar5 ||
               ((*(uint *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) + lVar11 * 8) + 8)
                          + 0x18) >> 3 & 1) == 0)))))) goto LAB_141d8e3d3;
        }
        iVar12 = iVar12 + 1;
        local_110 = local_110 + 1;
        uVar17 = uVar17 * 2;
      } while (local_110 < 0x20);
      if (uVar16 != 0) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b10);
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(param_1 + 0x10) + 0x1b00;
        }
        *(uint *)(lVar11 + local_f8) = uVar16;
      }
      if (local_res8 != 0) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1ad0);
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(param_1 + 0x10) + 0x1ac0;
        }
        *(uint *)(lVar11 + local_f8) = local_res8;
      }
      lVar15 = lVar15 + 0x20;
      local_res20 = local_res20 + 1;
      iVar13 = iVar13 + 0x20;
      local_f8 = local_f8 + 4;
    } while (local_res20 < param_2 + DAT_1464c3144);
  }
  return;
}



// FUNCTION 141d8e540 FUN_141d8e540 body=329 status=ok
// SIG undefined FUN_141d8e540(void)

void FUN_141d8e540(longlong *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffffd0;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(*param_1 + 8) + 0x17e8) + 8);
  puVar2 = puVar4 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar4 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *puVar4 = uVar1;
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  local_res20 = 0;
  **(undefined8 **)(param_2 + 8) = puVar3;
  *(undefined8 **)(param_2 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar3 + 2) = 1;
  puVar3[3] = puVar4;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined1 *)((longlong)puVar3 + 0x24) = 0;
  FUN_141ad74f0(param_2,0,uVar1,0,CONCAT44(uVar5,0x22),
                in_stack_ffffffffffffffd0 & 0xffffffffffffff00);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  FProjectedShadowInfo::ClearDepth(param_1[1],param_2,*param_1,0,0,uVar1,param_3);
  return;
}



// FUNCTION 141d8e6a0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong TComplexityAccumulatePS<1>::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_143fca6f8;
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141d8e6f0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddExponentialHeightFog'::`2'::FAddFogCommandName,<lambda_23dd2bba3cad69a0d8fd09c4f72e10da>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e5c290;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141d8e760 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddExponentialHeightFog'::`2'::FAddFogCommandName,<lambda_23dd2bba3cad69a0d8fd09c4f72e10da>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e5c280;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141d8e7d0 FUN_141d8e7d0 body=97 status=ok
// SIG undefined FUN_141d8e7d0(void)

undefined8 * FUN_141d8e7d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e5bc20;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141d8e840 FUN_141d8e840 body=97 status=ok
// SIG undefined FUN_141d8e840(void)

undefined8 * FUN_141d8e840(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e5bba8;
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



// FUNCTION 141d8e8b0 FUN_141d8e8b0 body=97 status=ok
// SIG undefined FUN_141d8e8b0(void)

undefined8 * FUN_141d8e8b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e5bc30;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141d8e920 FUN_141d8e920 body=97 status=ok
// SIG undefined FUN_141d8e920(void)

undefined8 * FUN_141d8e920(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e5bb60;
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



// FUNCTION 141d8e990 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShadowParallelCommandListSet::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bc10;
  FUN_141d662d0(param_1,0);
  FParallelCommandListSet::~FParallelCommandListSet(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141d8e9e0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bf80;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ea30 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5c080;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ea80 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bf40;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ead0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5c040;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8eb20 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5be40;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8eb70 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5be80;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ebc0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bf00;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ec10 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5c000;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ec60 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5be00;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ecb0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bec0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ed00 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bfc0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ed50 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5c140;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8eda0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5c180;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8edf0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bdc0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ee40 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5c0c0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ee90 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5c100;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8eee0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bd40;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ef30 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bcc0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8ef80 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bd80;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8efd0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bd00;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8f020 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bc80;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8f070 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5bc40;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8f0c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e5c2a0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d8f110 FUN_141d8f110 body=398 status=ok
// SIG undefined FUN_141d8f110(void)

void FUN_141d8f110(longlong *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int local_res10 [4];
  longlong local_res20;
  int *local_48;
  longlong *local_40;
  longlong local_38 [4];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
      plVar2 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar2 = param_1 + 8;
      }
      iVar3 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[10] - 1U & (longlong)param_2) * 4)
      ;
      if (iVar3 != -1) {
        do {
          lVar4 = param_1[1] + (longlong)iVar3 * 0x28;
          if (*(int *)(param_1[1] + (longlong)iVar3 * 0x28) == param_2) {
            if (iVar3 != -1) goto LAB_141d8f1a3;
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x20);
        } while (iVar3 != -1);
      }
    }
    lVar4 = 0;
LAB_141d8f1a3:
    lVar6 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    local_res10[0] = param_2;
    if (lVar6 == 0) {
      local_48 = local_res10;
      local_38[0] = 0;
      local_40 = local_38;
      local_38[1] = 0;
      local_38[2] = 0;
      FUN_141d7ffe0(param_1 + 1,&local_res20,&local_48,0);
      lVar6 = param_1[1] + ((longlong)(int)local_res20 * 5 + 1) * 8;
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      lVar4 = *param_1;
      piVar1 = *(int **)(lVar4 + 0x1050);
      for (piVar5 = piVar1; piVar5 != piVar1 + *(int *)(lVar4 + 0x1058); piVar5 = piVar5 + 1) {
        if (*piVar5 == local_res10[0]) {
          iVar3 = (int)((longlong)piVar5 - (longlong)piVar1 >> 2);
          if ((-1 < iVar3) && (iVar3 < *(int *)(lVar4 + 0xfe8))) {
            *(undefined8 *)(lVar6 + 0x10) =
                 *(undefined8 *)(*(longlong *)(lVar4 + 0xfe0) + (longlong)iVar3 * 8);
          }
          break;
        }
      }
    }
    local_res20 = param_3;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar6,&local_res20);
  }
  return;
}



// FUNCTION 141d8f2a0 FUN_141d8f2a0 body=849 status=ok
// SIG undefined FUN_141d8f2a0(void)

void FUN_141d8f2a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  void *_Src;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_148 [5];
  undefined8 uStack_120;
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
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [48];
  
  local_res10 = param_2;
  TSet<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink,TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,&local_res8,param_4);
  if (((int)local_res8 == -1) ||
     (plVar10 = (longlong *)((longlong)(int)local_res8 * 0xe8 + *(longlong *)(param_1 + 0x40)),
     plVar10 == (longlong *)0x0)) {
    local_148[4] = *param_4;
    uStack_120 = param_4[1];
    local_118 = param_4[2];
    uStack_110 = param_4[3];
    local_148[0] = 0;
    local_148[1] = 0;
    local_108 = param_4[4];
    uStack_100 = param_4[5];
    local_148[2] = 0;
    local_148[3] = 0;
    local_f8 = param_4[6];
    uStack_f0 = param_4[7];
    local_90 = param_5;
    local_7c = 0xffffffff;
    local_e8 = param_4[8];
    uStack_e0 = param_4[9];
    iVar7 = 0;
    local_70 = 0;
    local_d8 = param_4[10];
    uStack_d0 = param_4[0xb];
    local_c8 = param_4[0xc];
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_78 = param_1;
    puVar9 = (undefined8 *)FUN_141d9aaa0(local_148 + 4,local_68);
    local_c0 = *puVar9;
    uStack_b8 = puVar9[1];
    local_b0 = puVar9[2];
    uStack_a8 = puVar9[3];
    local_a0 = puVar9[4];
    uStack_98 = puVar9[5];
    FUN_141d7f500(param_1 + 0x40,&local_res8,local_148,0);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (local_148 + 2);
    if (local_148[0] != 0) {
      FMemory::Free();
    }
    iVar2 = (int)local_res8;
    plVar10 = (longlong *)((longlong)(int)local_res8 * 0xe8 + *(longlong *)(param_1 + 0x40));
    *(int *)((longlong)plVar10 + 0xcc) = (int)local_res8;
    DAT_146a81050 =
         (ulonglong)(uint)(*(int *)((longlong)plVar10 + 0x1c) * 0x38) + 0xe0 +
         (ulonglong)(uint)(*(int *)((longlong)plVar10 + 0xc) << 2) + DAT_146a81050;
    iVar12 = *(int *)(param_1 + 0x38) + -1;
    if (0 < iVar12) {
      local_res8 = *(ulonglong *)(param_1 + 0x40);
      lVar11 = *(longlong *)(param_1 + 0x30);
      iVar13 = 0;
      do {
        iVar7 = (iVar12 + iVar13) / 2;
        iVar8 = CompareDrawingPolicy<1>
                          ((longlong)*(int *)(lVar11 + (longlong)iVar7 * 4) * 0xe8 +
                           local_res8 + 0x20,plVar10 + 4);
        if (iVar8 < 0) {
          iVar13 = iVar7 + 1;
        }
        else {
          iVar12 = iVar7;
          if (iVar8 < 1) break;
        }
        iVar7 = iVar13;
        iVar13 = iVar7;
      } while (iVar7 < iVar12);
    }
    iVar12 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar12 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar12);
    }
    _Src = (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 4);
    _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 4),_Src,(longlong)(iVar12 - iVar7) << 2)
    ;
    *(int *)((longlong)iVar7 * 4 + *(longlong *)(param_1 + 0x30)) = iVar2;
    param_2 = local_res10;
  }
  iVar7 = (int)plVar10[3];
  iVar2 = *(int *)((longlong)plVar10 + 0x1c);
  local_res8 = (ulonglong)(uint)(*(int *)((longlong)plVar10 + 0xc) << 2);
  *(int *)(plVar10 + 3) = iVar7 + 1;
  if (*(int *)((longlong)plVar10 + 0x1c) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar10 + 2,iVar7);
  }
  lVar11 = (longlong)iVar7 * 0x38 + plVar10[2];
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((longlong)plVar10 + 0xcc);
    *(longlong *)(lVar11 + 8) = param_2;
    puVar9 = (undefined8 *)operator_new(0x20);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 0;
      *puVar9 = &PTR_FUN_144e5c268;
      puVar9[2] = param_1;
      *(undefined4 *)(puVar9 + 3) = uVar3;
      *(int *)((longlong)puVar9 + 0x1c) = iVar7;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    }
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 8) + 0xc0) + 8);
    uVar3 = *(undefined4 *)(lVar4 + 0xc4);
    uVar5 = *(undefined4 *)(lVar4 + 200);
    uVar6 = *(undefined4 *)(lVar4 + 0xcc);
    *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(lVar4 + 0xc0);
    *(undefined4 *)(lVar11 + 0x14) = uVar3;
    *(undefined4 *)(lVar11 + 0x18) = uVar5;
    *(undefined4 *)(lVar11 + 0x1c) = uVar6;
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar4 + 0xd0);
    *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(lVar4 + 0xd8);
    *(byte *)(lVar11 + 0x2c) =
         (byte)((uint)*(undefined4 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 8) + 0xc0) + 8) + 0x18)
               >> 0x1b) & 1;
  }
  iVar7 = (int)plVar10[1];
  *(int *)(plVar10 + 1) = iVar7 + 1;
  if (*(int *)((longlong)plVar10 + 0xc) < iVar7 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar7);
  }
  puVar1 = (undefined4 *)(*plVar10 + (longlong)iVar7 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_2 + 200);
  }
  DAT_146a81050 =
       DAT_146a81050 +
       ((((ulonglong)(uint)(*(int *)((longlong)plVar10 + 0x1c) * 0x38) +
         (ulonglong)(uint)(*(int *)((longlong)plVar10 + 0xc) << 2)) - local_res8) -
       (ulonglong)(uint)(iVar2 * 0x38));
  FUN_141d6b230(param_2,*(undefined8 *)(lVar11 + 0x30));
  return;
}



// FUNCTION 141d8f600 FUN_141d8f600 body=748 status=ok
// SIG undefined FUN_141d8f600(void)

void FUN_141d8f600(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *local_res10;
  ulonglong local_res18;
  longlong *local_res20;
  uint in_stack_ffffffffffffff18;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined1 local_a8 [112];
  
  if ((*(byte *)(param_2 + 0x8c) & 0x20) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    plVar9 = *(longlong **)(param_2 + 0xa8);
    local_res20 = (longlong *)0x0;
    (**(code **)(*plVar9 + 0x40))(plVar9,uVar1,local_b8,&local_res20);
    plVar10 = local_res20;
    uVar6 = (**(code **)(*local_res20 + 0x1e8))(local_res20);
    iVar7 = (**(code **)(*plVar10 + 0x1f8))(plVar10);
    uVar4 = UseLightPropagationVolumeRT(uVar1);
    local_res10 = (longlong *)CONCAT71(local_res10._1_7_,uVar4);
    cVar5 = (**(code **)(*plVar10 + 0x28))(plVar10);
    if ((cVar5 == '\0') &&
       ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0xc0) + 8) + 0x1c) >> 10 & 1) == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    if ((uVar6 < 2) && (iVar7 != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    uVar2 = *(uint *)(param_2 + 0x8c);
    local_res18 = CONCAT44(uVar2 >> 0xc,
                           ((uVar2 >> 0x13 & 0x80 | uVar2 & 0x100) >> 2 | uVar2 & 0x10) >> 4 |
                           uVar2 & 8 | uVar11) & 0x3fffffffff;
    if ((((char)local_res10 != '\0') &&
        ((((uVar6 < 2 && (iVar7 != 0)) ||
          (cVar5 = (**(code **)(*plVar10 + 0x48))(plVar10), cVar5 != '\0')) ||
         (cVar5 = (**(code **)(*plVar10 + 0x50))(plVar10), cVar5 != '\0')))) &&
       ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0xc0) + 8) + 0x1c) >> 3 & 1) != 0)) {
      uVar8 = FUN_141d88c30(local_a8,plVar10,1,0,in_stack_ffffffffffffff18 & 0xffffff00,&local_res18
                            ,uVar1,*(undefined8 *)(param_2 + 0xa0),plVar9,
                            (byte)(*(uint *)(param_2 + 0x8c) >> 3) & 1);
      in_stack_ffffffffffffff18 = uVar1;
      FUN_141d8f2a0(param_1 + 3000,param_2,&local_res10,uVar8,uVar1);
    }
    if (bVar3) {
      cVar5 = FUN_141b196e0(plVar10,1);
      if ((cVar5 != '\0') && (cVar5 = FUN_14259cbc0(plVar10), cVar5 == '\0')) {
        plVar9 = (longlong *)UMaterial::GetDefaultMaterial(0);
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2a8))(plVar9,0,0);
        local_res10 = (longlong *)0x0;
        (**(code **)(*plVar9 + 0x40))(plVar9,uVar1,&local_b0,&local_res10);
        plVar10 = local_res10;
      }
      uVar8 = FUN_141d88ee0(local_a8,plVar10,1,0,in_stack_ffffffffffffff18 & 0xffffff00,&local_res18
                            ,uVar1,*(undefined8 *)(param_2 + 0xa0),plVar9,
                            (byte)(*(uint *)(param_2 + 0x8c) >> 3) & 1);
      FUN_141d8f2a0(param_1 + 0xb20,param_2,&local_res10,uVar8,uVar1);
    }
  }
  return;
}



// FUNCTION 141d8f8f0 FUN_141d8f8f0 body=471 status=ok
// SIG undefined FUN_141d8f8f0(void)

int * FUN_141d8f8f0(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x824) == 0) {
    iVar8 = *(int *)(param_1 + 0x7f8);
    *(int *)(param_1 + 0x7f8) = iVar8 + 1;
    if (*(int *)(param_1 + 0x7fc) < iVar8 + 1) {
      FUN_141dab5c0(param_1,iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x818);
    iVar6 = iVar2 + 1;
    *(int *)(param_1 + 0x818) = iVar6;
    if (*(int *)(param_1 + 0x81c) <= iVar2) {
      uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      if (uVar3 < 5) {
        iVar4 = 4;
      }
      else {
        uVar5 = FMemory::QuantizeSize
                          ((((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3) * 4
                           + 0x40,0);
        iVar6 = *(int *)(param_1 + 0x818);
        iVar4 = (int)(uVar5 >> 2);
        if (iVar4 < (int)uVar3) {
          iVar4 = 0x7fffffff;
        }
      }
      *(int *)(param_1 + 0x81c) = iVar4 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x800,iVar6 + -1);
    }
    lVar7 = *(longlong *)(param_1 + 0x810);
    if (*(longlong *)(param_1 + 0x810) == 0) {
      lVar7 = param_1 + 0x800;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  }
  else {
    iVar8 = *(int *)(param_1 + 0x820);
    lVar7 = *(longlong *)(param_1 + 0x7f0);
    if (*(longlong *)(param_1 + 0x7f0) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0x10);
    iVar6 = *(int *)(param_1 + 0x824) + -1;
    *(int *)(param_1 + 0x820) = iVar2;
    *(int *)(param_1 + 0x824) = iVar6;
    if (iVar6 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x7f0);
      if (*(longlong *)(param_1 + 0x7f0) == 0) {
        lVar7 = param_1;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar7 = *(longlong *)(param_1 + 0x810);
  if (*(longlong *)(param_1 + 0x810) == 0) {
    lVar7 = param_1 + 0x800;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x7f0);
  if (*(longlong *)(param_1 + 0x7f0) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + (longlong)iVar8 * 0x10;
  return param_2;
}



// FUNCTION 141d8fad0 AddUninitialized body=210 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x58 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x58 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 141d8fbb0 FUN_141d8fbb0 body=571 status=ok
// SIG undefined FUN_141d8fbb0(void)

void FUN_141d8fbb0(longlong param_1,longlong param_2,ulonglong *param_3,undefined2 *param_4,
                  char param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (param_3[2] != 0) {
    *param_4 = *(undefined2 *)(param_2 + 0x408);
    plVar10 = (longlong *)*param_3;
    uVar6 = 0;
    uVar11 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
    if (plVar10 + (int)param_3[1] < plVar10) {
      uVar11 = uVar6;
    }
    if (uVar11 != 0) {
      do {
        lVar7 = *plVar10;
        if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x10) != 0)) &&
            (iVar3 = *(int *)(lVar7 + 0xe8), (iVar3 + 1U & 0x7fffffff) != 0)) &&
           ((-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x398))))) {
          iVar1 = iVar3;
          if (iVar3 < 0) {
            iVar1 = iVar3 + 0x1f;
          }
          lVar5 = (longlong)(iVar1 >> 5) * 4;
          lVar4 = *(longlong *)(param_2 + 0x390);
          if (*(longlong *)(param_2 + 0x390) == 0) {
            lVar4 = param_2 + 0x380;
          }
          uVar9 = 1 << ((byte)iVar3 & 0x1f);
          uVar8 = ~uVar9;
          if (param_5 == '\0') {
            uVar2 = uVar8 & *(uint *)(lVar4 + lVar5);
          }
          else {
            uVar2 = uVar9 | *(uint *)(lVar4 + lVar5);
          }
          *(uint *)(lVar4 + lVar5) = uVar2;
          lVar4 = *(longlong *)(param_2 + 0x3b0);
          if (*(longlong *)(param_2 + 0x3b0) == 0) {
            lVar4 = param_2 + 0x3a0;
          }
          uVar2 = uVar8 & *(uint *)(lVar4 + lVar5);
          if (param_6 != '\0') {
            uVar2 = uVar9 | *(uint *)(lVar4 + lVar5);
          }
          *(uint *)(lVar4 + lVar5) = uVar2;
          lVar4 = *(longlong *)(param_2 + 0x3f0);
          if (*(longlong *)(param_2 + 0x3f0) == 0) {
            lVar4 = param_2 + 0x3e0;
          }
          *(uint *)(lVar4 + lVar5) = *(uint *)(lVar4 + lVar5) & uVar8;
          if (param_5 != '\0') {
            lVar4 = *(longlong *)(param_2 + 0x3d0);
            if (*(longlong *)(param_2 + 0x3d0) == 0) {
              lVar4 = param_2 + 0x3c0;
            }
            *(uint *)(lVar4 + lVar5) = *(uint *)(lVar4 + lVar5) | uVar9;
          }
          if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
            lVar5 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar5 = param_1 + 0x40;
            }
            iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x50) - 1U &
                                     (longlong)*(int *)(lVar7 + 0x10)) * 4);
            if (iVar3 != -1) {
              do {
                lVar5 = *(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x28;
                if (*(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x28) ==
                    *(int *)(lVar7 + 0x10)) {
                  if (iVar3 != -1) goto LAB_141d8fd98;
                  break;
                }
                iVar3 = *(int *)(lVar5 + 0x20);
              } while (iVar3 != -1);
            }
          }
          lVar5 = 0;
LAB_141d8fd98:
          lVar7 = lVar5 + 8;
          if (lVar5 == 0) {
            lVar7 = 0;
          }
          if (lVar7 != 0) {
            FUN_141d9dda0(param_1,param_2);
          }
        }
        plVar10 = plVar10 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar11);
    }
  }
  return;
}



// FUNCTION 141d8fdf0 FUN_141d8fdf0 body=265 status=ok
// SIG undefined FUN_141d8fdf0(void)

void FUN_141d8fdf0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FUN_141cdf500(param_2,param_1,param_1 + 8);
  FShaderParameter::Bind(param_1 + 0x10,uVar1,L"ScreenToShadowMatrix",0);
  FShaderParameter::Bind(param_1 + 0x16,uVar1,L"SoftTransitionScale",0);
  FShaderParameter::Bind(param_1 + 0x1c,uVar1,L"ShadowBufferSize",0);
  FShaderResourceParameter::Bind(param_1 + 0x22,uVar1,L"ShadowDepthTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x26,uVar1,L"ShadowDepthTextureSampler",0);
  FShaderParameter::Bind(param_1 + 0x2a,uVar1,L"ProjectionDepthBiasParameters",0);
  FShaderParameter::Bind(param_1 + 0x30,uVar1,L"FadePlaneOffset",0);
  FShaderParameter::Bind(param_1 + 0x36,uVar1,L"InvFadePlaneLength",0);
  FShaderParameter::Bind(param_1 + 0x3c,uVar1,L"ShadowTileOffsetAndSize",0);
  FShaderParameter::Bind(param_1 + 0x42,uVar1,L"LayerIndex",0);
  return;
}



// FUNCTION 141d8ff00 Bind body=129 status=ok
// SIG undefined Bind(void)

void FOnePassPointShadowProjectionShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1,param_2,L"ShadowDepthCubeTexture",0);
  FShaderResourceParameter::Bind(param_1 + 4,param_2,L"ShadowDepthCubeTexture2",0);
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"ShadowDepthCubeTextureSampler",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"ShadowViewProjectionMatrices",0);
  FShaderParameter::Bind(param_1 + 0x12,param_2,L"InvShadowmapResolution",0);
  return;
}



// FUNCTION 141d8ff90 Bind body=107 status=ok
// SIG undefined Bind(void)

void FTranslucencyShadowProjectionShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1,param_2,L"TranslucencyShadowTransmission0",0);
  FShaderResourceParameter::Bind(param_1 + 4,param_2,L"TranslucencyShadowTransmission0Sampler",0);
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"TranslucencyShadowTransmission1",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"TranslucencyShadowTransmission1Sampler",0);
  return;
}



// FUNCTION 141d90000 FUN_141d90000 body=3134 status=ok
// SIG undefined FUN_141d90000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d90000(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  uint uVar17;
  undefined *puVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  float local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [64];
  float local_128 [18];
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_c8 [20];
  
  local_c8[0] = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9fac0) && (_Init_thread_header(&DAT_146a9fac0), DAT_146a9fac0 == -1))
  {
    atexit(`TMeshElementArray<FMeshTriangle,FTriangleID>::Compact'::`2'::
           _dynamic_atexit_destructor_for__NewContainer__);
    _Init_thread_footer(&DAT_146a9fac0);
  }
  if (DAT_146a9fabc == '\0') {
    local_188 = CONCAT26(local_188._6_2_,0x307040004);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,1);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x506020104);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,2);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x405010004);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,4);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = 4;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x10307040506);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,5);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x50602010006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,6);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 4;
    }
    local_188 = CONCAT26(local_188._6_2_,0x607030204);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,8);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x30206070406);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,9);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x50607030206);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,10);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 1;
    }
    local_188 = CONCAT26(local_188._6_2_,0x102030004);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x10);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = 1;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x20307040006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x11);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 1;
    }
    local_188 = CONCAT26(local_188._6_2_,0x50602030006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x12);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 1;
    }
    local_188 = CONCAT26(local_188._6_2_,0x50102030006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x14);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 4;
    }
    local_188 = CONCAT26(local_188._6_2_,0x30704050106);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x15);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 2;
    }
    local_188 = CONCAT26(local_188._6_2_,0x50602030006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x16);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 4;
    }
    local_188 = CONCAT26(local_188._6_2_,0x20607030006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x18);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 1;
    }
    local_188 = CONCAT26(local_188._6_2_,0x20607040006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x19);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 1;
    }
    local_188 = CONCAT26(local_188._6_2_,0x50607030006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x1a);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 1;
    }
    local_188 = CONCAT26(local_188._6_2_,0x706050404);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x20);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x30706050406);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x21);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 0;
    }
    local_188 = CONCAT26(local_188._6_2_,0x40706020106);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x22);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 5;
    }
    local_188 = CONCAT26(local_188._6_2_,0x70605010006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x24);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 4;
    }
    local_188 = CONCAT26(local_188._6_2_,0x70605010006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x25);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 3;
    }
    local_188 = CONCAT26(local_188._6_2_,0x70602010006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x26);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 4;
    }
    local_188 = CONCAT26(local_188._6_2_,0x50407030206);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x28);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 6;
    }
    local_188 = CONCAT26(local_188._6_2_,0x20605040006);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x29);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 3;
    }
    local_188 = CONCAT26(local_188._6_2_,0x40703020106);
    lVar10 = FUN_141d9ef30(&DAT_1464c3150,local_178,0x2a);
    puVar7 = *(undefined4 **)(lVar10 + 8);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = (float)local_188;
      *(undefined2 *)(puVar7 + 1) = local_188._4_2_;
      *(undefined1 *)((longlong)puVar7 + 6) = 5;
    }
    DAT_146a9fabc = '\x01';
  }
  fVar22 = param_1[3];
  pfVar13 = local_128;
  fVar1 = param_1[4];
  uVar14 = 0;
  fVar2 = param_1[5];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  uVar11 = uVar14;
  do {
    uVar19 = (uint)uVar11;
    uVar11 = (ulonglong)(uVar19 + 1);
    fVar21 = (float)(int)(((int)uVar19 >> 1 & 1U) * 2 + -1);
    *(ulonglong *)pfVar13 =
         CONCAT44(fVar4 - (float)(int)((uVar19 & 1) * 2 + -1) * fVar1 * fVar21,
                  (float)(int)(((int)uVar19 >> 2 & 1U) * 2 + -1) * fVar22 + fVar3);
    pfVar13[2] = fVar21 * fVar2 + fVar5;
    pfVar13 = pfVar13 + 3;
  } while (pfVar13 != (float *)local_c8);
  local_188 = *(undefined8 *)(param_2 + 0x8dc);
  uVar17 = 0;
  local_180 = *(float *)(param_2 + 0x8e4);
  fVar22 = (float)((ulonglong)local_188 >> 0x20);
  uVar19 = uVar17;
  if (local_180 < local_128[2]) {
    uVar19 = 2;
  }
  uVar9 = uVar17;
  if (local_d8 < local_180) {
    uVar9 = 4;
  }
  uVar8 = uVar17;
  if ((float)local_188 < local_128[0]) {
    uVar8 = 8;
  }
  if (local_e0 < (float)local_188) {
    uVar17 = 0x10;
  }
  uVar19 = (uVar19 | local_dc < fVar22 | uVar9 | uVar8 | uVar17) * 2 | (uint)(fVar22 < local_128[1])
  ;
  if ((int)uVar19 < DAT_1464c3258) {
    puVar18 = DAT_1464c3268;
    if (DAT_1464c3268 == (undefined *)0x0) {
      puVar18 = &DAT_1464c3260;
    }
    if ((*(uint *)(puVar18 + (ulonglong)(uVar17 >> 4) * 4) & 1 << ((byte)uVar19 & 0x1f)) != 0) {
      puVar18 = DAT_1464c3250;
      if (DAT_1464c3250 == (undefined *)0x0) {
        puVar18 = &DAT_1464c3150;
      }
      bVar6 = puVar18[(ulonglong)uVar19 * 8];
      uVar11 = (ulonglong)bVar6;
      if (bVar6 != 0) {
        pbVar16 = puVar18 + (ulonglong)uVar19 * 8 + 1;
        puVar15 = local_168;
        uVar20 = uVar11;
        do {
          FUN_142763280(param_2,local_128 + (ulonglong)*pbVar16 * 3,puVar15);
          puVar15 = puVar15 + 8;
          pbVar16 = pbVar16 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      lVar10 = uVar11 - 1;
      uVar19 = bVar6 - 1;
      uVar17 = 0;
      if ((0 < (int)uVar19) && (7 < uVar19)) {
        uVar9 = uVar19 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        uVar20 = uVar14;
        do {
          uVar17 = (int)uVar20 + 8;
          uVar20 = (ulonglong)uVar17;
          uVar14 = uVar14 + 8;
        } while ((longlong)uVar14 < (longlong)(int)(uVar19 - uVar9));
      }
      lVar12 = (longlong)(int)uVar17;
      if (lVar12 < lVar10) {
        if (3 < lVar10 - lVar12) {
          do {
            lVar12 = lVar12 + 4;
          } while (lVar12 < (longlong)(uVar11 - 4));
        }
        for (; lVar12 < lVar10; lVar12 = lVar12 + 1) {
        }
      }
    }
  }
  return;
}



// FUNCTION 141d90c40 CalculateFieldOfViewDistanceScale body=88 status=ok
// SIG undefined CalculateFieldOfViewDistanceScale(void)

float FCachedSystemScalabilityCVars::CalculateFieldOfViewDistanceScale
                (longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x30);
  if (ABS(fVar4) <= 1e-08) {
    return *(float *)(param_1 + 0x38);
  }
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 0x34);
  fVar3 = fVar1;
  if ((fVar1 <= param_2) && (fVar3 = fVar2, param_2 <= fVar2)) {
    fVar3 = param_2;
  }
  return ((fVar3 - fVar1) / (fVar2 - fVar1)) * fVar4 + *(float *)(param_1 + 0x30);
}



// FUNCTION 141d90cb0 FUN_141d90cb0 body=40 status=ok
// SIG undefined FUN_141d90cb0(void)

void FUN_141d90cb0(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(longlong *)*param_1 + (longlong)*param_2 * 8);
  FUN_141d91db0(uVar1);
  FUN_141d9f9a0(uVar1);
  return;
}



// FUNCTION 141d90d70 FUN_141d90d70 body=345 status=ok
// SIG undefined FUN_141d90d70(void)

ulonglong FUN_141d90d70(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong *puVar14;
  bool bVar15;
  
  uVar3 = *(uint *)(param_2 + 0x58);
  iVar13 = 0;
  uVar8 = (longlong)(int)uVar3 * 0x70 + *(longlong *)(param_1 + 0x1c8);
  piVar1 = (int *)(uVar8 + 0x18);
  if (0 < *piVar1) {
    puVar14 = *(ulonglong **)(uVar8 + 0x10);
    do {
      bVar5 = false;
      if (0 < (longlong)*(int *)(param_1 + 200)) {
        uVar8 = *puVar14;
        lVar11 = *(longlong *)(param_1 + 0xc0);
        bVar4 = (byte)iVar13 & 0x1f;
        plVar2 = (longlong *)(uVar8 + 0x38);
        lVar10 = (longlong)*(int *)(param_1 + 200);
        do {
          if ((((*plVar2 == 0) || (*plVar2 == lVar11)) && (-1 < (int)uVar3)) &&
             ((int)uVar3 < *(int *)(lVar11 + 0x1e20))) {
            lVar12 = *(longlong *)(lVar11 + 0x1e18);
            if (*(longlong *)(lVar11 + 0x1e18) == 0) {
              lVar12 = lVar11 + 0x1e08;
            }
            uVar6 = uVar3;
            if ((int)uVar3 < 0) {
              uVar6 = uVar3 + 0x1f;
            }
            uVar6 = *(uint *)(lVar12 + (longlong)((int)uVar6 >> 5) * 4);
            uVar8 = (ulonglong)uVar6;
            if ((uVar6 >> (uVar3 & 0x1f) & 1) != 0) {
              lVar9 = (longlong)(int)uVar3 * 0x78 + 0x10 + *(longlong *)(lVar11 + 0x1df8);
              lVar12 = *(longlong *)(lVar9 + 0x10);
              if (lVar12 == 0) {
                lVar12 = lVar9;
              }
              iVar7 = iVar13;
              if (iVar13 < 0) {
                iVar7 = iVar13 + 0x1f;
              }
              bVar15 = (*(uint *)(lVar12 + (longlong)(iVar7 >> 5) * 4) &
                       (1 << bVar4 | 1U >> 0x20 - bVar4)) != 0;
              uVar8 = (ulonglong)CONCAT31((int3)(iVar7 >> 0xd),bVar15);
              bVar5 = (bool)(bVar5 | bVar15);
            }
          }
          lVar11 = lVar11 + 0x30d0;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (bVar5) {
          return CONCAT71((int7)(uVar8 >> 8),1);
        }
      }
      iVar13 = iVar13 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar13 < *piVar1);
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 141d90ed0 ClearDepth body=441 status=ok
// SIG undefined ClearDepth(void)

void FProjectedShadowInfo::ClearDepth
               (longlong param_1,longlong param_2,undefined8 param_3,int param_4,undefined8 param_5,
               undefined8 param_6,char param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = *(int *)(param_1 + 0x538);
  iVar5 = *(int *)(param_1 + 0x540) * 2;
  iVar2 = *(int *)(param_1 + 0x53c);
  iVar3 = *(int *)(param_1 + 0x530);
  iVar4 = *(int *)(param_1 + 0x534);
  bVar9 = (*(byte *)(param_1 + 0x560) & 0x80) == 0;
  if (bVar9) {
    iVar6 = 1;
    local_48 = DAT_1464aa6c0;
    uStack_44 = DAT_1464aa6c4;
    uStack_40 = DAT_1464aa6c8;
    uStack_3c = DAT_1464aa6cc;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    iVar6 = 2;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0x3f800000;
    uStack_3c = 0;
  }
  bVar9 = !bVar9;
  if (iVar6 <= param_4) {
    param_4 = iVar6;
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  if (param_7 == '\0') {
    puVar7 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144e345f0;
    *(bool *)(puVar8 + 2) = bVar9;
    *(undefined2 *)((longlong)puVar8 + 0x11) = 1;
  }
  else {
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 3) = 0;
    *puVar8 = &PTR_LAB_143f59420;
    *(int *)(puVar8 + 2) = iVar3;
    *(int *)((longlong)puVar8 + 0x14) = iVar4;
    *(int *)((longlong)puVar8 + 0x1c) = iVar1 + iVar5 + iVar3;
    *(int *)(puVar8 + 4) = iVar2 + iVar5 + iVar4;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
    DrawClearQuadMRT(param_2,bVar9,param_4,&local_48,1,0x3f800000,0,0);
  }
  return;
}



// FUNCTION 141d91090 FUN_141d91090 body=124 status=ok
// SIG undefined FUN_141d91090(void)

void FUN_141d91090(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo(param_1 + 0x98,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo(param_1 + 0x78,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo(param_1 + 0x58,0);
  }
  return;
}



// FUNCTION 141d91110 FUN_141d91110 body=3232 status=ok
// SIG undefined FUN_141d91110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d91110(code *param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined8 uVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  byte *_Dst;
  uint uVar57;
  uint uVar58;
  ulonglong uVar59;
  longlong *plVar60;
  uint uVar61;
  int iVar62;
  byte *pbVar63;
  uint *puVar64;
  ulonglong uVar65;
  longlong lVar66;
  longlong lVar67;
  uint uVar68;
  longlong lVar69;
  byte bVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  ulonglong uVar74;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 local_180;
  byte *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [14];
  code *local_148;
  longlong ***ppplStack_140;
  longlong *local_138;
  undefined8 local_130;
  longlong **local_128;
  undefined1 *puStack_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined **local_f8;
  longlong ***ppplStack_f0;
  int local_e8;
  int local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  uint local_98;
  undefined8 local_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_d0 = *(undefined8 *)(param_3 + 0x8dc);
  local_100 = param_5;
  local_108 = param_6;
  local_110 = param_7;
  local_c8 = *(undefined4 *)(param_3 + 0x8e4);
  local_c4 = 0;
  lVar54 = *(longlong *)(param_3 + 0x10);
  local_157 = param_4;
  local_148 = param_1;
  local_118 = param_2;
  if ((*(uint *)(lVar54 + 0x2c) & 0x800) != 0) {
    local_c4 = FUN_14046cec0();
    lVar54 = *(longlong *)(param_3 + 0x10);
  }
  uVar4 = *(undefined4 *)(param_3 + 0x1a38);
  local_c0 = *(float *)(param_3 + 0x11ec) * *(float *)(DAT_146a9ed98 + 4);
  local_bc = 1.0 / local_c0;
  local_b4 = DAT_1464c3118 * DAT_1464c3118;
  local_b8 = DAT_1464c311c * DAT_1464c311c;
  uVar53 = (**(code **)(**(longlong **)(lVar54 + 0x20) + 0x210))();
  local_b0 = FUN_141b18ec0(uVar4,uVar53);
  iVar62 = *(int *)(param_3 + 7000);
  puStack_120 = local_156;
  iVar15 = iVar62 + 0x1f;
  local_128 = (longlong **)&DAT_14060d670;
  local_156[0] = 0;
  local_d8 = iVar62;
  lVar54 = FUN_1415d8310(&local_128);
  _Dst = (byte *)(*(longlong *)(lVar54 + 0x18) + 7U & 0xfffffffffffffff8);
  puVar1 = (ulonglong *)(lVar54 + 0x18);
  pbVar63 = _Dst + iVar15;
  if (*(byte **)(lVar54 + 0x20) < pbVar63) {
    FMemStackBase::AllocateNewChunk(puVar1);
    _Dst = (byte *)(*puVar1 + 7 & 0xfffffffffffffff8);
    pbVar63 = _Dst + iVar15;
  }
  *puVar1 = (ulonglong)pbVar63;
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar15);
  uVar55 = 0;
  uVar61 = 0;
  local_138 = (longlong *)0x0;
  local_130 = 0;
  if (0 < iVar62 / 0x1fc) {
    FUN_140848da0(&local_138);
  }
  cVar14 = FUN_141636a40();
  if ((cVar14 != '\0') && (0 < *(int *)(DAT_146a9eeb0 + 4))) {
    bVar70 = 1;
    cVar14 = (**(code **)(*param_2 + 0xf0))(param_2);
    if ((cVar14 == '\0') || (*(int *)(DAT_146a10108 + 4) != 0)) {
      if (*(int *)(param_3 + 0x2804) <
          (int)((float)iVar62 * 0.007874016 + 1.0) + *(int *)(param_3 + 0x2800)) {
        FUN_141b15710();
      }
      goto LAB_141d91336;
    }
  }
  bVar70 = 0;
LAB_141d91336:
  local_a0 = (undefined ***)(param_3 + 0x1ac0);
  uVar57 = *(uint *)(param_3 + 0x1ad8);
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 1;
  local_94 = 0;
  uVar74 = uVar55;
  if (uVar57 != 0) {
    uVar74 = (ulonglong)uVar57;
    puVar64 = *(uint **)(param_3 + 0x1ad0);
    if (*(uint **)(param_3 + 0x1ad0) == (uint *)0x0) {
      puVar64 = (uint *)local_a0;
    }
    uVar58 = *puVar64;
    uVar65 = uVar55;
    uVar59 = uVar55;
    while (uVar58 == 0) {
      iVar15 = (int)uVar65;
      uVar61 = (int)uVar59 + 0x20;
      uVar59 = (ulonglong)uVar61;
      local_a8._0_4_ = iVar15 + 1;
      uVar65 = (ulonglong)(uint)local_a8;
      local_94 = (ulonglong)uVar61 << 0x20;
      if ((int)((uVar57 - 1) + ((int)(uVar57 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15) {
        local_94 = CONCAT44(uVar61,uVar57);
        goto LAB_141d913f9;
      }
      uVar58 = puVar64[(longlong)iVar15 + 1];
    }
    local_a8._4_4_ = -uVar58 & uVar58;
    iVar15 = 0x1f;
    if (local_a8._4_4_ != 0) {
      for (; local_a8._4_4_ >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (local_a8._4_4_ == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uVar61 = (uVar61 - iVar15) + 0x1f;
    if ((int)uVar57 < (int)uVar61) {
      uVar61 = uVar57;
    }
    uVar74 = (ulonglong)uVar61;
    uVar65 = local_94 >> 0x20;
    local_94 = CONCAT44((int)uVar65,uVar61);
  }
LAB_141d913f9:
  if ((int)uVar74 < (int)uVar57) {
    puStack_120 = &local_158;
    local_158 = 0;
    local_128 = (longlong **)&DAT_14060d670;
    lVar54 = FUN_1415d8310(&local_128,&DAT_146216a38);
    local_128 = (longlong **)operator_new(0x6768,lVar54 + 0x18,1);
    if (local_128 != (longlong **)0x0) {
      plVar60 = (longlong *)(param_3 + 0x27f8);
      if (bVar70 == 0) {
        local_170 = (undefined8 *)*plVar60;
      }
      else {
        iVar15 = *(int *)(param_3 + 0x2800);
        *(int *)(param_3 + 0x2800) = iVar15 + 1;
        if (*(int *)(param_3 + 0x2804) < iVar15 + 1) {
          TArray<FTransientDecalRenderData,TMemStackAllocator<0>_>::ResizeGrow(plVar60,iVar15);
        }
        local_170 = (undefined8 *)(*plVar60 + (longlong)iVar15 * 0x28);
        if (local_170 != (undefined8 *)0x0) {
          *local_170 = 0;
          local_170[1] = 0;
          local_170[2] = 0;
          local_170[3] = 0;
          local_170[4] = 0;
        }
      }
      local_168 = local_110;
      local_180 = local_108;
      local_188 = (undefined8 *)local_100;
      local_190 = &local_d0;
      local_198 = CONCAT31(local_198._1_3_,local_157);
      local_178 = _Dst;
      uVar55 = FUN_141d89df0(local_128,local_148,local_118,param_3);
    }
    uVar65 = local_130;
    lVar54 = (longlong)(int)local_130;
    iVar15 = (int)local_130 + 1;
    local_130 = CONCAT44(local_130._4_4_,iVar15);
    if (local_130._4_4_ < iVar15) {
      FUN_140848b80(&local_138,uVar65 & 0xffffffff);
    }
    local_138[lVar54] = uVar55;
    local_98 = 0xffffffff;
    do {
      while( true ) {
        uVar65 = 0;
        *(int *)(uVar55 + 0x4c + (longlong)*(int *)(uVar55 + 0x48) * 4) = (int)uVar74;
        *(int *)(uVar55 + 0x48) = *(int *)(uVar55 + 0x48) + 1;
        local_98 = local_98 & ~local_a8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar74 = local_94 & 0xffffffff;
        if (*(int *)(uVar55 + 0x48) < 0x7f) break;
        if ((int)*(uint *)((longlong)local_a0 + 0x18) <= (int)local_94) goto LAB_141d916d3;
        puStack_120 = &local_158;
        local_158 = 0;
        local_128 = (longlong **)&DAT_14060d670;
        local_f8 = (undefined **)&DAT_14060d670;
        ppplStack_f0 = (longlong ***)puStack_120;
        lVar54 = FUN_1415d8310(&local_f8,&DAT_146216a38);
        uVar59 = *(longlong *)(lVar54 + 0x18) + 0xfU & 0xfffffffffffffff0;
        puVar1 = (ulonglong *)(lVar54 + 0x18);
        uVar55 = uVar59 + 0x6768;
        if (*(ulonglong *)(lVar54 + 0x20) < uVar55) {
          FMemStackBase::AllocateNewChunk(puVar1,0x6778);
          uVar59 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar55 = uVar59 + 0x6768;
        }
        *puVar1 = uVar55;
        if (uVar59 != 0) {
          plVar60 = (longlong *)(param_3 + 0x27f8);
          if (bVar70 == 0) {
            local_170 = (undefined8 *)*plVar60;
          }
          else {
            iVar15 = *(int *)(param_3 + 0x2800);
            *(int *)(param_3 + 0x2800) = iVar15 + 1;
            if (*(int *)(param_3 + 0x2804) < iVar15 + 1) {
              TArray<FTransientDecalRenderData,TMemStackAllocator<0>_>::ResizeGrow(plVar60,iVar15);
            }
            local_170 = (undefined8 *)0x0;
            puVar2 = (undefined8 *)(*plVar60 + (longlong)iVar15 * 0x28);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar2[2] = 0;
              puVar2[3] = 0;
              puVar2[4] = 0;
              local_170 = puVar2;
            }
          }
          local_168 = local_110;
          local_180 = local_108;
          local_188 = (undefined8 *)local_100;
          local_190 = &local_d0;
          local_198 = CONCAT31(local_198._1_3_,local_157);
          local_178 = _Dst;
          uVar65 = FUN_141d89df0(uVar59,local_148,local_118,param_3);
        }
        uVar55 = local_130;
        lVar54 = (longlong)(int)local_130;
        iVar15 = (int)local_130 + 1;
        local_130 = CONCAT44(local_130._4_4_,iVar15);
        if (local_130._4_4_ < iVar15) {
          FUN_140848b80(&local_138,uVar55 & 0xffffffff);
        }
        local_138[lVar54] = uVar65;
        uVar55 = uVar65;
      }
    } while ((int)local_94 < (int)*(uint *)((longlong)local_a0 + 0x18));
  }
LAB_141d916d3:
  uVar74 = 0;
  local_128 = &local_138;
  ppplStack_140 = &local_128;
  local_148 = FUN_141d90cb0;
  local_f8 = (undefined **)FUN_141d90cb0;
  ppplStack_f0 = ppplStack_140;
  FUN_1406a7b10(local_130 & 0xffffffff,&local_f8,bVar70 ^ 1);
  iVar15 = 0;
  uVar55 = (ulonglong)((longlong)(local_138 + (int)local_130) + (7 - (longlong)local_138)) >> 3;
  if (local_138 + (int)local_130 < local_138) {
    uVar55 = uVar74;
  }
  uVar65 = uVar74;
  plVar60 = local_138;
  iVar62 = iVar15;
  if (uVar55 != 0) {
    do {
      lVar54 = *plVar60;
      plVar60 = plVar60 + 1;
      iVar15 = *(int *)(lVar54 + 0x5b58);
      if (*(int *)(lVar54 + 0x5b58) <= iVar62) {
        iVar15 = iVar62;
      }
      uVar65 = uVar65 + 1;
      iVar62 = iVar15;
    } while (uVar65 != uVar55);
  }
  iVar15 = *(int *)(param_3 + 0x1c18) + 1 + iVar15;
  *(int *)(param_3 + 0x1c18) = iVar15;
  if (*(int *)(param_3 + 0x1c1c) < iVar15) {
    TArray<int,TMemStackAllocator<0>_>::ResizeGrow(param_3 + 0x1c10);
  }
  uVar55 = (ulonglong)((longlong)(local_138 + (int)local_130) + (7 - (longlong)local_138)) >> 3;
  if (local_138 + (int)local_130 < local_138) {
    uVar55 = uVar74;
  }
  plVar60 = local_138;
  if (uVar55 != 0) {
    do {
      FUN_141daa910(*plVar60);
      uVar74 = uVar74 + 1;
      plVar60 = plVar60 + 1;
    } while (uVar74 != uVar55);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x58,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x60,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x68,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x70,0);
  if (*(int *)(param_3 + 0x1c08) != 0) {
    local_98 = 1;
    local_f8 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
    ppplStack_f0 = *(longlong ****)(param_3 + 0x1c00);
    local_e8 = *(int *)(param_3 + 0x1c08) * 4;
    local_a8 = 0;
    local_a0 = &local_f8;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_94 = CONCAT44(uRam00000001468b5d7c,_DAT_1468b5d78);
    uStack_8c = uRam00000001468b5d80;
    uStack_88 = uRam00000001468b5d84;
    local_198 = TResourceArray<unsigned_char,0>::GetResourceDataSize(&local_f8);
    local_188 = &local_a8;
    local_190._0_4_ = 0x204;
    (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,&local_148,&DAT_146ab6e78,4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x58,&local_148);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
    (**(code **)(*DAT_146ab6358 + 0x620))
              (DAT_146ab6358,&local_148,&DAT_146ab6e78,*(undefined8 *)(param_3 + 0x58));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x60,&local_148);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
    local_98 = 1;
    local_a8 = 0;
    local_f8 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
    ppplStack_f0 = *(longlong ****)(param_3 + 0x1c10);
    local_e8 = *(int *)(param_3 + 0x1c18) << 2;
    local_a0 = &local_f8;
    local_94 = CONCAT44(uRam00000001468b5d7c,_DAT_1468b5d78);
    uStack_8c = uRam00000001468b5d80;
    uStack_88 = uRam00000001468b5d84;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_198 = TResourceArray<unsigned_char,0>::GetResourceDataSize(&local_f8);
    local_188 = &local_a8;
    local_190 = (undefined8 *)CONCAT44(local_190._4_4_,0x204);
    (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,&local_148,&DAT_146ab6e78,4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x68,&local_148);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
    (**(code **)(*DAT_146ab6358 + 0x620))
              (DAT_146ab6358,&local_148,&DAT_146ab6e78,*(undefined8 *)(param_3 + 0x68));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x70,&local_148);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  lVar54 = *(longlong *)(param_3 + 0x1b50);
  if (*(longlong *)(param_3 + 0x1b50) == 0) {
    lVar54 = param_3 + 0x1b40;
  }
  puVar64 = *(uint **)(param_3 + 0x1b90);
  if (*(uint **)(param_3 + 0x1b90) == (uint *)0x0) {
    puVar64 = (uint *)(param_3 + 0x1b80);
  }
  lVar66 = *(longlong *)(param_3 + 0x1bb0);
  if (*(longlong *)(param_3 + 0x1bb0) == 0) {
    lVar66 = param_3 + 0x1ba0;
  }
  lVar69 = *(longlong *)(param_3 + 0x1b70);
  if (*(longlong *)(param_3 + 0x1b70) == 0) {
    lVar69 = param_3 + 0x1b60;
  }
  local_148 = *(code **)(param_3 + 0x1bd0);
  if (*(code **)(param_3 + 0x1bd0) == (code *)0x0) {
    local_148 = (code *)(param_3 + 0x1bc0);
  }
  lVar56 = *(longlong *)(param_3 + 0x1bf0);
  if (*(longlong *)(param_3 + 0x1bf0) == 0) {
    lVar56 = param_3 + 0x1be0;
  }
  if (0 < local_d8) {
    lVar56 = lVar56 - (longlong)puVar64;
    lVar54 = lVar54 - (longlong)puVar64;
    lVar66 = lVar66 - (longlong)puVar64;
    lVar69 = lVar69 - (longlong)puVar64;
    local_118 = (longlong *)(ulonglong)((local_d8 - 1U >> 5) + 1);
    pbVar63 = _Dst;
    do {
      bVar13 = false;
      uVar68 = 0;
      uVar58 = 0;
      uVar57 = 0;
      uVar72 = 0;
      uVar73 = 0;
      uVar71 = 0;
      uVar61 = 1;
      lVar67 = 4;
      do {
        lVar5 = *(longlong *)_Dst;
        _Dst = _Dst + 8;
        if (lVar5 == 0) {
          uVar61 = uVar61 << 8;
        }
        else {
          bVar70 = *pbVar63;
          uVar16 = 0;
          if ((bVar70 & 2) != 0) {
            uVar16 = uVar61;
          }
          uVar17 = 0;
          if ((bVar70 & 4) != 0) {
            uVar17 = uVar61;
          }
          uVar18 = 0;
          if ((bVar70 & 1) != 0) {
            uVar18 = uVar61;
          }
          uVar19 = 0;
          if ((bVar70 & 8) != 0) {
            uVar19 = uVar61;
          }
          uVar20 = 0;
          if ((bVar70 & 0x10) != 0) {
            uVar20 = uVar61;
          }
          bVar3 = pbVar63[1];
          uVar21 = 0;
          if ((bVar70 & 0x20) != 0) {
            uVar21 = uVar61;
          }
          uVar6 = uVar61 * 2;
          uVar22 = 0;
          if ((bVar3 & 2) != 0) {
            uVar22 = uVar6;
          }
          uVar23 = 0;
          if ((bVar3 & 4) != 0) {
            uVar23 = uVar6;
          }
          uVar24 = 0;
          if ((bVar3 & 1) != 0) {
            uVar24 = uVar6;
          }
          uVar25 = 0;
          if ((bVar3 & 8) != 0) {
            uVar25 = uVar6;
          }
          uVar26 = 0;
          if ((bVar3 & 0x10) != 0) {
            uVar26 = uVar6;
          }
          bVar70 = pbVar63[2];
          uVar7 = 0;
          if ((bVar3 & 0x20) != 0) {
            uVar7 = uVar6;
          }
          uVar6 = uVar61 * 4;
          uVar27 = 0;
          if ((bVar70 & 2) != 0) {
            uVar27 = uVar6;
          }
          uVar28 = 0;
          if ((bVar70 & 4) != 0) {
            uVar28 = uVar6;
          }
          uVar29 = 0;
          if ((bVar70 & 1) != 0) {
            uVar29 = uVar6;
          }
          uVar30 = 0;
          if ((bVar70 & 8) != 0) {
            uVar30 = uVar6;
          }
          uVar31 = 0;
          if ((bVar70 & 0x10) != 0) {
            uVar31 = uVar6;
          }
          bVar3 = pbVar63[3];
          uVar8 = 0;
          if ((bVar70 & 0x20) != 0) {
            uVar8 = uVar6;
          }
          uVar6 = uVar61 * 8;
          uVar32 = 0;
          if ((bVar3 & 2) != 0) {
            uVar32 = uVar6;
          }
          uVar33 = 0;
          if ((bVar3 & 4) != 0) {
            uVar33 = uVar6;
          }
          uVar34 = 0;
          if ((bVar3 & 1) != 0) {
            uVar34 = uVar6;
          }
          uVar35 = 0;
          if ((bVar3 & 8) != 0) {
            uVar35 = uVar6;
          }
          uVar36 = 0;
          if ((bVar3 & 0x10) != 0) {
            uVar36 = uVar6;
          }
          bVar70 = pbVar63[4];
          uVar9 = 0;
          if ((bVar3 & 0x20) != 0) {
            uVar9 = uVar6;
          }
          uVar6 = uVar61 * 0x10;
          uVar37 = 0;
          if ((bVar70 & 2) != 0) {
            uVar37 = uVar6;
          }
          uVar38 = 0;
          if ((bVar70 & 4) != 0) {
            uVar38 = uVar6;
          }
          uVar39 = 0;
          if ((bVar70 & 1) != 0) {
            uVar39 = uVar6;
          }
          uVar40 = 0;
          if ((bVar70 & 8) != 0) {
            uVar40 = uVar6;
          }
          uVar41 = 0;
          if ((bVar70 & 0x10) != 0) {
            uVar41 = uVar6;
          }
          bVar3 = pbVar63[5];
          uVar10 = 0;
          if ((bVar70 & 0x20) != 0) {
            uVar10 = uVar6;
          }
          uVar6 = uVar61 * 0x20;
          uVar42 = 0;
          if ((bVar3 & 2) != 0) {
            uVar42 = uVar6;
          }
          uVar43 = 0;
          if ((bVar3 & 4) != 0) {
            uVar43 = uVar6;
          }
          uVar44 = 0;
          if ((bVar3 & 1) != 0) {
            uVar44 = uVar6;
          }
          uVar45 = 0;
          if ((bVar3 & 8) != 0) {
            uVar45 = uVar6;
          }
          uVar46 = 0;
          if ((bVar3 & 0x10) != 0) {
            uVar46 = uVar6;
          }
          bVar70 = pbVar63[6];
          uVar11 = 0;
          if ((bVar3 & 0x20) != 0) {
            uVar11 = uVar6;
          }
          uVar6 = uVar61 * 0x40;
          uVar47 = 0;
          if ((bVar70 & 2) != 0) {
            uVar47 = uVar6;
          }
          uVar48 = 0;
          if ((bVar70 & 4) != 0) {
            uVar48 = uVar6;
          }
          uVar49 = 0;
          if ((bVar70 & 1) != 0) {
            uVar49 = uVar6;
          }
          uVar50 = 0;
          if ((bVar70 & 8) != 0) {
            uVar50 = uVar6;
          }
          uVar51 = 0;
          if ((bVar70 & 0x10) != 0) {
            uVar51 = uVar6;
          }
          bVar3 = pbVar63[7];
          uVar12 = 0;
          if ((bVar70 & 0x20) != 0) {
            uVar12 = uVar6;
          }
          uVar6 = uVar61 * 0x80;
          uVar52 = 0;
          if ((bVar3 & 2) != 0) {
            uVar52 = uVar6;
          }
          uVar68 = uVar68 | uVar16 | uVar22 | uVar27 | uVar32 | uVar37 | uVar42 | uVar47 | uVar52;
          uVar16 = 0;
          if ((bVar3 & 4) != 0) {
            uVar16 = uVar6;
          }
          uVar58 = uVar58 | uVar17 | uVar23 | uVar28 | uVar33 | uVar38 | uVar43 | uVar48 | uVar16;
          uVar16 = 0;
          if ((bVar3 & 1) != 0) {
            uVar16 = uVar6;
          }
          uVar57 = uVar57 | uVar18 | uVar24 | uVar29 | uVar34 | uVar39 | uVar44 | uVar49 | uVar16;
          uVar16 = 0;
          if ((bVar3 & 8) != 0) {
            uVar16 = uVar6;
          }
          uVar72 = uVar72 | uVar19 | uVar25 | uVar30 | uVar35 | uVar40 | uVar45 | uVar50 | uVar16;
          uVar16 = 0;
          if ((bVar3 & 0x10) != 0) {
            uVar16 = uVar6;
          }
          uVar73 = uVar73 | uVar20 | uVar26 | uVar31 | uVar36 | uVar41 | uVar46 | uVar51 | uVar16;
          bVar13 = true;
          uVar16 = 0;
          if ((bVar3 & 0x20) != 0) {
            uVar16 = uVar6;
          }
          uVar61 = uVar61 * 0x100;
          uVar71 = uVar71 | uVar21 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar16;
        }
        pbVar63 = pbVar63 + 8;
        lVar67 = lVar67 + -1;
      } while (lVar67 != 0);
      if (bVar13) {
        *(uint *)(lVar54 + (longlong)puVar64) = uVar68;
        *puVar64 = uVar58;
        *(uint *)(lVar66 + (longlong)puVar64) = uVar57;
        *(uint *)(lVar69 + (longlong)puVar64) = uVar72;
        *(uint *)local_148 = uVar73;
        *(uint *)(lVar56 + (longlong)puVar64) = uVar71;
      }
      local_148 = local_148 + 4;
      puVar64 = puVar64 + 1;
      local_118 = (longlong *)((longlong)local_118 - 1);
    } while (local_118 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 141d91db0 FUN_141d91db0 body=1860 status=ok
// SIG undefined FUN_141d91db0(void)

void FUN_141d91db0(float *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  float fVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  undefined4 uVar20;
  float local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  float local_res20;
  undefined4 uStackX_24;
  longlong local_b8;
  float *local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  uint uVar15;
  
  iVar17 = 0;
  param_1[0x19d8] = 0.0;
  *(undefined1 *)(param_1 + 0x19d9) = 0;
  if (0 < (int)param_1[0x12]) {
    local_b8 = 0;
    do {
      fVar4 = param_1[local_b8 + 0x13];
      lVar18 = (longlong)(int)fVar4;
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0xfe0) + lVar18 * 8);
      puVar2 = (ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 6) + 0x1b30) + lVar18 * 8);
      puVar10 = (ulonglong *)
                (**(code **)(**(longlong **)(lVar5 + 8) + 0x78))(*(longlong **)(lVar5 + 8),local_a8)
      ;
      uVar6 = *puVar10;
      *puVar2 = uVar6;
      uVar15 = (uint)(uVar6 >> 0x20);
      uVar14 = uVar15 | 0x20000000;
      *(uint *)((longlong)puVar2 + 4) = uVar14;
      if ((*(char *)(*(longlong *)(param_1 + 6) + 0x1203) == '\0') ||
         ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x18) >> 0x14 & 1) != 0)) {
        if (((uVar6 & 0x10000000000) != 0) &&
           (((uVar6 & 0x40000000000) != 0 || ((uVar6 & 0x80000000000) != 0)))) {
          param_1[(longlong)(int)param_1[0x92] + 0x93] = fVar4;
          param_1[0x92] = (float)((int)param_1[0x92] + 1);
          uVar14 = *(uint *)((longlong)puVar2 + 4);
        }
        if ((uVar14 >> 0x1a & 1) != 0) {
          if ((uVar6 & 0x40000000000) == 0) goto LAB_141d91eac;
          *(undefined8 *)(param_1 + (longlong)(int)param_1[0xf88] * 2 + 0xf8a) =
               *(undefined8 *)(lVar5 + 8);
          param_1[0xf88] = (float)((int)param_1[0xf88] + 1);
        }
        if ((uVar6 & 0x40000000000) == 0) goto LAB_141d91eac;
        uVar14 = *(uint *)((longlong)puVar2 + 4);
        if ((uVar14 >> 0x15 & 1) != 0) {
          fStack_70 = (float)(*(short *)(*(longlong *)(lVar5 + 8) + 0x170) + 0x8000);
          local_78._0_4_ = (float)lVar5;
          local_78._4_4_ = (float)((ulonglong)lVar5 >> 0x20);
          pfVar3 = param_1 + (longlong)(int)param_1[0xb8a] * 4 + 0xb8c;
          *pfVar3 = (float)local_78;
          pfVar3[1] = local_78._4_4_;
          pfVar3[2] = fStack_70;
          pfVar3[3] = fStack_6c;
          param_1[0xb8a] = (float)((int)param_1[0xb8a] + 1);
          uVar14 = *(uint *)((longlong)puVar2 + 4);
          local_78 = lVar5;
        }
        if ((uVar14 >> 0x1b & 1) != 0) {
          *(undefined8 *)(param_1 + (longlong)(int)param_1[0xd88] * 2 + 0xd8a) =
               *(undefined8 *)(lVar5 + 8);
          param_1[0xd88] = (float)((int)param_1[0xd88] + 1);
        }
        if ((uVar6 & 0x800000000000) == 0) {
          if ((uVar6 & 0x20000000000) != 0) {
            *(longlong *)(param_1 + (longlong)(int)param_1[0x192] * 2 + 0x194) = lVar5;
            param_1[0x192] = (float)((int)param_1[0x192] + 1);
            *(byte *)(**(longlong **)(param_1 + 0xc) + lVar18) =
                 *(byte *)(**(longlong **)(param_1 + 0xc) + lVar18) | *(byte *)(param_1 + 8);
          }
        }
        else {
          *(longlong *)(param_1 + (longlong)(int)param_1[0x1288] * 2 + 0x128a) = lVar5;
          param_1[0x1288] = (float)((int)param_1[0x1288] + 1);
        }
        uVar14 = *(uint *)((longlong)puVar2 + 4);
        if ((uVar14 >> 0x18 & 1) != 0) {
          *(byte *)(**(longlong **)(param_1 + 0x19d6) + lVar18) =
               *(byte *)(**(longlong **)(param_1 + 0x19d6) + lVar18) | *(byte *)(param_1 + 8);
          uVar14 = *(uint *)((longlong)puVar2 + 4);
        }
        if ((((uVar6 & 0x1800000000) != 0) && ((uVar6 & 0x800000000000) == 0)) &&
           ((uVar14 >> 0xd & 1) != 0)) {
          FUN_141e02da0(lVar5,*(undefined8 *)(param_1 + 6),puVar2,param_1 + 0x294,param_1 + 0x292,
                        param_1 + 0xa84);
          uVar14 = *(uint *)((longlong)puVar2 + 4);
          if ((uVar14 & 4) != 0) {
            *(undefined8 *)(param_1 + (longlong)(int)param_1[0xa8a] * 2 + 0xa8c) =
                 *(undefined8 *)(lVar5 + 8);
            param_1[0xa8a] = (float)((int)param_1[0xa8a] + 1);
            uVar14 = *(uint *)((longlong)puVar2 + 4);
          }
        }
        if ((uVar14 >> 0xe & 1) != 0) {
          *(undefined8 *)(param_1 + (longlong)(int)param_1[5000] * 2 + 0x138a) =
               *(undefined8 *)(lVar5 + 8);
          param_1[5000] = (float)((int)param_1[5000] + 1);
        }
        *(ushort *)(param_1 + 0x19d8) = *(ushort *)(param_1 + 0x19d8) | (ushort)*puVar2;
        *(byte *)((longlong)param_1 + 0x6762) =
             *(byte *)((longlong)param_1 + 0x6762) |
             (byte)(*(uint *)((longlong)puVar2 + 4) >> 7) & 1;
        *(byte *)((longlong)param_1 + 0x6763) =
             *(byte *)((longlong)param_1 + 0x6763) |
             (byte)(*(uint *)((longlong)puVar2 + 4) >> 0x14) & 1;
        *(byte *)(param_1 + 0x19d9) =
             *(byte *)(param_1 + 0x19d9) | (byte)(*(uint *)((longlong)puVar2 + 4) >> 0x16) & 1;
        *(byte *)((longlong)param_1 + 0x6765) =
             *(byte *)((longlong)param_1 + 0x6765) |
             (byte)(*(uint *)((longlong)puVar2 + 4) >> 0x17) & 1;
        if ((((*(uint *)((longlong)puVar2 + 4) >> 0x19 & 1) == 0) || ((uVar6 & 0x1800000000) == 0))
           || ((*(uint *)((longlong)puVar2 + 4) >> 0x1a & 1) != 0)) {
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
        *(byte *)((longlong)param_1 + 0x6766) = *(byte *)((longlong)param_1 + 0x6766) | bVar8;
        if ((*puVar2 & 0x100000000000) != 0) {
          bVar8 = *(byte *)(param_1 + 8);
          if (((bVar8 & 1) != 0) && ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x20) >> 2 & 1) != 0)) {
            *(longlong *)(param_1 + (longlong)(int)param_1[0xe88] * 2 + 0xe8a) =
                 *(longlong *)(lVar5 + 8);
            param_1[0xe88] = (float)((int)param_1[0xe88] + 1);
            bVar8 = *(byte *)(param_1 + 8);
          }
          if (((bVar8 & 2) != 0) && ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x20) >> 3 & 1) != 0)) {
            *(longlong *)(param_1 + (longlong)(int)param_1[0xe88] * 2 + 0xe8a) =
                 *(longlong *)(lVar5 + 8);
            param_1[0xe88] = (float)((int)param_1[0xe88] + 1);
            bVar8 = *(byte *)(param_1 + 8);
          }
          if (((bVar8 & 4) != 0) && ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x20) >> 4 & 1) != 0)) {
            *(longlong *)(param_1 + (longlong)(int)param_1[0xe88] * 2 + 0xe8a) =
                 *(longlong *)(lVar5 + 8);
            param_1[0xe88] = (float)((int)param_1[0xe88] + 1);
            bVar8 = *(byte *)(param_1 + 8);
          }
          if (((bVar8 & 8) != 0) && ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x20) >> 5 & 1) != 0)) {
            *(longlong *)(param_1 + (longlong)(int)param_1[0xe88] * 2 + 0xe8a) =
                 *(longlong *)(lVar5 + 8);
            param_1[0xe88] = (float)((int)param_1[0xe88] + 1);
          }
        }
        fVar9 = *param_1;
        fVar19 = (fVar9 - param_1[1]) - 1e-05;
        if (*(float *)(lVar5 + 0xd0) <= fVar19 && fVar19 != *(float *)(lVar5 + 0xd0)) {
          *(float *)(lVar5 + 0xd4) = fVar9;
          fVar9 = *param_1;
        }
        *(float *)(lVar5 + 0xd0) = fVar9;
        lVar7 = *(longlong *)(param_1 + 6);
        lVar12 = *(longlong *)(lVar7 + 0x1af0);
        if (*(longlong *)(lVar7 + 0x1af0) == 0) {
          lVar12 = lVar7 + 0x1ae0;
        }
        fVar9 = fVar4;
        if ((int)fVar4 < 0) {
          fVar9 = (float)((int)fVar4 + 0x1f);
        }
        if (((*(uint *)(lVar12 + (longlong)((int)fVar9 >> 5) * 4) >> ((uint)fVar4 & 0x1f) & 1) != 0)
           || (*(longlong *)(lVar7 + 0x18) == 0)) {
          **(float **)(lVar5 + 0x18) = *param_1;
          **(float **)(lVar5 + 0x20) = *param_1;
        }
        if ((*(byte *)(lVar5 + 0x88) & 1) != 0) {
          lVar7 = *(longlong *)(param_1 + 4);
          if (((*(int *)(lVar7 + 8) < 2) || ((uVar6 & 0x1800000000) != 0)) ||
             ((DAT_146ac3ac0 != (uVar15 & 0x18) && (2 < *(int *)(lVar7 + 8))))) {
            local_98 = *(undefined8 *)(*(longlong *)(lVar7 + 0x1000) + lVar18 * 0x28);
            local_90 = *(undefined4 *)(*(longlong *)(lVar7 + 0x1000) + 8 + lVar18 * 0x28);
            uVar11 = FUN_141d33660(lVar7,&local_98);
            *(undefined8 *)(lVar5 + 0x68) = uVar11;
            uVar11 = FUN_141d33290(*(longlong *)(param_1 + 4),
                                   *(longlong *)(*(longlong *)(param_1 + 4) + 0x1000) +
                                   lVar18 * 0x28);
            *(undefined8 *)(lVar5 + 0x60) = uVar11;
            lVar7 = *(longlong *)(param_1 + 4);
            if (*(int *)(lVar7 + 8) < 2) {
              local_88 = *(undefined8 *)(*(longlong *)(lVar7 + 0x1000) + lVar18 * 0x28);
              local_80 = *(undefined4 *)(*(longlong *)(lVar7 + 0x1000) + 8 + lVar18 * 0x28);
              FUN_141d338d0(lVar7,&local_88,lVar5 + 0x90);
            }
            *(uint *)(lVar5 + 0x88) = *(uint *)(lVar5 + 0x88) & 0xfffffffe;
          }
        }
        if ((*puVar2 & 0x1000000000000000) != 0) {
          lVar7 = *(longlong *)(param_1 + 6);
          lVar12 = *(longlong *)(lVar7 + 0x1ab0);
          if (lVar12 != 0) {
            plVar1 = (longlong *)(lVar12 + 0x1808);
            uStackX_24 = 0;
            local_res8[0] =
                 *(float *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x1050) + lVar18 * 4);
            local_res20 = local_res8[0];
            FUN_141d9a660(plVar1,local_res10,local_res8[0]);
            if ((local_res10[0] == -1) ||
               (lVar12 = (longlong)local_res10[0] * 0x58 + *plVar1, lVar12 == 0)) {
              uVar20 = 0x3f800000;
            }
            else {
              uVar20 = *(undefined4 *)(lVar12 + 0x44);
            }
            pfVar3 = param_1 + 0x1488;
            *(undefined4 *)(*(longlong *)(lVar7 + 0x1c00) + lVar18 * 4) = uVar20;
            fVar9 = local_res8[0];
            if ((int)local_res8[0] <= (int)param_1[0x16d6]) {
              fVar9 = param_1[0x16d6];
            }
            param_1[0x16d6] = fVar9;
            if (param_1[0x1686] != param_1[0x1691]) {
              pfVar13 = *(float **)(param_1 + 0x16d2);
              if (*(float **)(param_1 + 0x16d2) == (float *)0x0) {
                pfVar13 = param_1 + 0x1692;
              }
              fVar9 = pfVar13[(longlong)(int)param_1[0x16d4] - 1U & (longlong)(int)local_res8[0]];
              if (fVar9 != -NAN) {
                pfVar13 = *(float **)(param_1 + 0x1684);
                if (*(float **)(param_1 + 0x1684) == (float *)0x0) {
                  pfVar13 = pfVar3;
                }
                do {
                  pfVar16 = pfVar13 + (longlong)(int)fVar9 * 4;
                  if (*pfVar16 == local_res8[0]) {
                    if ((fVar9 != -NAN) && (pfVar16 != (float *)0x0)) goto LAB_141d9242c;
                    break;
                  }
                  fVar9 = pfVar16[2];
                } while (fVar9 != -NAN);
              }
            }
            local_b0 = local_res8;
            FUN_141d7f7d0(pfVar3,local_res18,&local_b0,0);
            pfVar16 = *(float **)(param_1 + 0x1684);
            if (*(float **)(param_1 + 0x1684) == (float *)0x0) {
              pfVar16 = pfVar3;
            }
            pfVar16 = pfVar16 + (longlong)local_res18[0] * 4;
LAB_141d9242c:
            pfVar16[1] = fVar4;
          }
        }
        if ((*(char *)(lVar5 + 0xf9) != '\0') || (*(char *)(lVar5 + 0xf8) != '\0')) {
          *(longlong *)(param_1 + (longlong)(int)param_1[0x1088] * 2 + 0x108a) = lVar5;
          param_1[0x1088] = (float)((int)param_1[0x1088] + 1);
        }
        if ((0 < DAT_1464c3110) && (*(char *)(lVar5 + 0xfa) != '\0')) {
          FPrimitiveSceneInfo::UpdateUniformBuffer(lVar5);
        }
        if (*(char *)(lVar5 + 0xfb) != '\0') {
          *(longlong *)(param_1 + (longlong)(int)param_1[0x1188] * 2 + 0x118a) = lVar5;
          param_1[0x1188] = (float)((int)param_1[0x1188] + 1);
        }
      }
      else {
LAB_141d91eac:
        param_1[(longlong)(int)param_1[0x112] + 0x113] = fVar4;
        param_1[0x112] = (float)((int)param_1[0x112] + 1);
      }
      iVar17 = iVar17 + 1;
      local_b8 = local_b8 + 1;
    } while (iVar17 < (int)param_1[0x12]);
  }
  return;
}



// FUNCTION 141d92500 FUN_141d92500 body=274 status=ok
// SIG undefined FUN_141d92500(void)

float FUN_141d92500(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x560);
  if (((uVar1 & 0x40) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x30),
     (*(char *)(lVar3 + 0x188) - 1U & 0xfd) == 0)) {
    lVar2 = DAT_146a9f5a0;
    if ((uVar1 & 0x10) == 0) {
      lVar2 = DAT_146a9f588;
    }
    return (1.0 / *(float *)(lVar2 + 4)) * *(float *)(lVar3 + 0x124) * 2.0;
  }
  if (((uVar1 & 0x40) != 0) && ((-1 < *(int *)(param_1 + 0x524) && ((uVar1 & 0x10) != 0)))) {
    return (*(float *)(DAT_146a9f138 + 4) /
           (*(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x158))) *
           (*(float *)(param_1 + 0x3b0) / (float)*(uint *)(param_1 + 0x538)) *
           *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x30) + 0x124);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    return 1e-05;
  }
  lVar3 = DAT_146a9f5a0;
  if ((uVar1 & 0x10) == 0) {
    lVar3 = DAT_146a9f588;
  }
  return (1.0 / *(float *)(lVar3 + 4)) *
         *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x30) + 0x124) * 2.0;
}



// FUNCTION 141d92620 FUN_141d92620 body=7043 status=ok
// SIG undefined FUN_141d92620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d92620(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  DWORD *pDVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  int *piVar22;
  ulonglong uVar23;
  long lVar24;
  void *pvVar25;
  uint *puVar26;
  longlong *plVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined8 uVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  longlong *plVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_388 [32];
  void **local_368;
  undefined8 *local_360;
  void **local_358;
  longlong local_350;
  char local_348;
  longlong local_338;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  uint local_320;
  int local_31c;
  int local_318;
  uint local_314;
  longlong local_310;
  uint local_308;
  uint local_304;
  undefined4 local_300;
  int local_2f8;
  uint local_2f4;
  longlong local_2f0;
  uint local_2e8;
  uint local_2e4;
  undefined4 local_2e0;
  int local_2d8;
  uint local_2d4;
  longlong local_2d0;
  uint local_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  longlong local_2b8;
  void *local_2b0;
  int local_2a8;
  undefined4 local_2a4;
  void *local_2a0;
  int local_298;
  undefined4 local_294;
  longlong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  uint local_26c;
  longlong local_268;
  uint local_260;
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined1 *local_228;
  int **ppiStack_220;
  undefined1 *local_218;
  int **ppiStack_210;
  undefined1 *local_208;
  int **ppiStack_200;
  undefined1 *local_1f8;
  int **ppiStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  int *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  float local_1c0;
  longlong *local_1b8;
  int *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  float local_198;
  longlong *local_190;
  int *local_188;
  longlong local_180;
  longlong local_178;
  float local_170;
  longlong *local_168;
  int *local_160;
  longlong local_158;
  longlong local_150;
  float local_148;
  longlong *local_140;
  undefined1 *local_138;
  int **ppiStack_130;
  undefined1 *local_128;
  int **ppiStack_120;
  undefined1 *local_118;
  int **ppiStack_110;
  undefined1 *local_108;
  int **ppiStack_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  plVar36 = (longlong *)0x0;
  local_320 = 0;
  local_31c = 0;
  local_338 = param_1;
  local_278 = param_2;
  AK::MemoryMgr::StartProfileThreadUsage(0x464aa740);
  iVar14 = 0x464aa740;
  AK::MemoryMgr::StartProfileThreadUsage(0x464aa740);
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x1078)) {
    iVar14 = (int)param_1 + 0x1c8;
    FUN_141dab010();
  }
  AK::MemoryMgr::StartProfileThreadUsage(iVar14);
  AK::MemoryMgr::StartProfileThreadUsage(0x464aa740);
  iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
  local_2a0 = (void *)0x0;
  local_294 = 0;
  local_298 = iVar14;
  if (0 < iVar14) {
    FUN_141dab350(&local_2a0);
  }
  _guard_xfg_dispatch_icall_nop(local_2a0,0,(longlong)iVar14);
  local_2a4 = 0;
  local_2b0 = (void *)0x0;
  local_2a8 = iVar14;
  if (0 < iVar14) {
    FUN_141dab350(&local_2b0);
  }
  pvVar25 = local_2b0;
  _guard_xfg_dispatch_icall_nop(local_2b0,0,(longlong)iVar14);
  local_288 = 0;
  local_280 = 0;
  lVar24 = (long)pvVar25;
  AK::MemoryMgr::StartProfileThreadUsage(lVar24);
  AK::MemoryMgr::StartProfileThreadUsage(lVar24);
  iVar14 = *(int *)(param_1 + 200);
  local_348 = '\x01';
  local_31c = 0;
  if (0 < iVar14) {
    local_290 = 0;
    do {
      lVar18 = local_290;
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      lVar34 = lVar18 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
      iVar13 = *(int *)(lVar34 + 0x1c08);
      lVar18 = *(longlong *)(lVar34 + 0x18);
      iVar12 = iVar13 + iVar14;
      *(int *)(lVar34 + 0x1c08) = iVar12;
      local_250 = lVar18;
      if (*(int *)(lVar34 + 0x1c0c) < iVar12) {
        FUN_141dab480(lVar34 + 0x1c00);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(lVar34 + 0x1c00) + (longlong)iVar13 * 4),0,
                 (longlong)iVar14 << 2);
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      *(undefined4 *)(lVar34 + 0x1ad8) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1adc) != iVar12) {
        *(int *)(lVar34 + 0x1adc) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1ac0));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1ad8) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1ad0);
        if (*(void **)(lVar34 + 0x1ad0) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1ac0);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      iVar13 = *(int *)(lVar34 + 0x2298);
      if (iVar13 < iVar14) {
        *(int *)(lVar34 + 0x2298) = iVar14;
        if (*(int *)(lVar34 + 0x229c) < iVar14) {
          TArray<int,TMemStackAllocator<0>_>::ResizeGrow(lVar34 + 0x2290,iVar13);
        }
      }
      else if ((iVar14 < iVar13) && (iVar14 != iVar13)) {
        *(int *)(lVar34 + 0x2298) = iVar14;
        TArray<unsigned_int,TMemStackAllocator<0>_>::ResizeShrink(lVar34 + 0x2290);
      }
      lVar33 = lVar34 + 0x22b0;
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      iVar13 = *(int *)(lVar34 + 0x22b8);
      if (iVar13 < iVar14) {
        *(int *)(lVar34 + 0x22b8) = iVar14;
        if (*(int *)(lVar34 + 0x22bc) < iVar14) {
          TArray<int,TMemStackAllocator<0>_>::ResizeGrow(lVar33,iVar13);
          iVar14 = (int)lVar33;
        }
      }
      else if ((iVar14 < iVar13) && (iVar14 != iVar13)) {
        *(int *)(lVar34 + 0x22b8) = iVar14;
        TArray<unsigned_int,TMemStackAllocator<0>_>::ResizeShrink();
        iVar14 = (int)lVar33;
      }
      AK::MemoryMgr::StartProfileThreadUsage(iVar14);
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      *(undefined4 *)(lVar34 + 0x1af8) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1afc) != iVar12) {
        *(int *)(lVar34 + 0x1afc) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1ae0));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1af8) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1af0);
        if (*(void **)(lVar34 + 0x1af0) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1ae0);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      *(undefined4 *)(lVar34 + 0x1b18) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      lVar24 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1b1c) != lVar24) {
        *(long *)(lVar34 + 0x1b1c) = lVar24;
        pvVar25 = (void *)(lVar34 + 0x1b00);
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc();
        lVar24 = (long)pvVar25;
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1b18) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1b10);
        if (*(void **)(lVar34 + 0x1b10) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1b00);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
        lVar24 = (long)pvVar25;
      }
      AK::MemoryMgr::StartProfileThreadUsage(lVar24);
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      iVar14 = *(int *)(lVar34 + 0x1b28);
      iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      iVar12 = iVar14 + iVar13;
      *(int *)(lVar34 + 0x1b28) = iVar12;
      if (*(int *)(lVar34 + 0x1b2c) < iVar12) {
        FUN_140822430(lVar34 + 0x1b20);
      }
      pvVar25 = (void *)(*(longlong *)(lVar34 + 0x1b20) + (longlong)iVar14 * 8);
      _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 3);
      AK::MemoryMgr::StartProfileThreadUsage((long)pvVar25);
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0x1890);
      *(undefined4 *)(lVar34 + 7000) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1b5c) != iVar12) {
        *(int *)(lVar34 + 0x1b5c) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1b40));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 7000) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1b50);
        if (*(void **)(lVar34 + 0x1b50) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1b40);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0x1890);
      *(undefined4 *)(lVar34 + 0x1b78) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1b7c) != iVar12) {
        *(int *)(lVar34 + 0x1b7c) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1b60));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1b78) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1b70);
        if (*(void **)(lVar34 + 0x1b70) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1b60);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0x1890);
      *(undefined4 *)(lVar34 + 0x1bd8) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1bdc) != iVar12) {
        *(int *)(lVar34 + 0x1bdc) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1bc0));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1bd8) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1bd0);
        if (*(void **)(lVar34 + 0x1bd0) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1bc0);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0x1890);
      *(undefined4 *)(lVar34 + 0x1bf8) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1bfc) != iVar12) {
        *(int *)(lVar34 + 0x1bfc) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1be0));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1bf8) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1bf0);
        if (*(void **)(lVar34 + 0x1bf0) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1be0);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0x1890);
      *(undefined4 *)(lVar34 + 0x1b98) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1b9c) != iVar12) {
        *(int *)(lVar34 + 0x1b9c) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1b80));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1b98) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1b90);
        if (*(void **)(lVar34 + 0x1b90) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1b80);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0x1890);
      *(undefined4 *)(lVar34 + 0x1bb8) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1bbc) != iVar12) {
        *(int *)(lVar34 + 0x1bbc) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1ba0));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1bb8) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1bb0);
        if (*(void **)(lVar34 + 0x1bb0) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1ba0);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      iVar14 = *(int *)(lVar34 + 0x1c58);
      iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0x18c8);
      iVar12 = iVar14 + iVar13;
      *(int *)(lVar34 + 0x1c58) = iVar12;
      if (*(int *)(lVar34 + 0x1c5c) < iVar12) {
        FUN_140822430(lVar34 + 0x1c50);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(lVar34 + 0x1c50) + (longlong)iVar14 * 8),0,
                 (longlong)iVar13 << 3);
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      *(undefined4 *)(lVar34 + 0x1c48) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      iVar12 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x1c4c) != iVar12) {
        *(int *)(lVar34 + 0x1c4c) = iVar12;
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc((void *)(lVar34 + 0x1c30));
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x1c48) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x1c40);
        if (*(void **)(lVar34 + 0x1c40) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x1c30);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
      }
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      *(undefined4 *)(lVar34 + 0x27f0) = 0;
      iVar13 = (int)(iVar14 + 0x1f + (iVar14 + 0x1f >> 0x1f & 0x1fU)) >> 5;
      lVar24 = iVar13 << 5;
      if (*(int *)(lVar34 + 0x27f4) != lVar24) {
        *(long *)(lVar34 + 0x27f4) = lVar24;
        pvVar25 = (void *)(lVar34 + 0x27d8);
        TBitArray<SceneRenderingBitArrayAllocator>::Realloc();
        lVar24 = (long)pvVar25;
      }
      if (iVar14 != 0) {
        *(int *)(lVar34 + 0x27f0) = iVar14;
        pvVar25 = *(void **)(lVar34 + 0x27e8);
        if (*(void **)(lVar34 + 0x27e8) == (void *)0x0) {
          pvVar25 = (void *)(lVar34 + 0x27d8);
        }
        _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar13 << 2);
        lVar24 = (long)pvVar25;
      }
      AK::MemoryMgr::StartProfileThreadUsage(lVar24);
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8) + *(int *)(lVar34 + 0x1c28);
      *(int *)(lVar34 + 0x1c28) = iVar14;
      if (*(int *)(lVar34 + 0x1c2c) < iVar14) {
        FUN_141ad3a00(lVar34 + 0x1c20);
      }
      pvVar25 = *(void **)(lVar34 + 0x1c20);
      _guard_xfg_dispatch_icall_nop(pvVar25,0x7f,(ulonglong)(uint)(*(int *)(lVar34 + 0x1c28) * 2));
      AK::MemoryMgr::StartProfileThreadUsage((long)pvVar25);
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      iVar14 = *(int *)(lVar34 + 0x1a50);
      iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      iVar12 = iVar13 + iVar14;
      *(int *)(lVar34 + 0x1a50) = iVar12;
      if (*(int *)(lVar34 + 0x1a54) < iVar12) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar34 + 0x1a48);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(lVar34 + 0x1a48) + (longlong)iVar14 * 8),0,
                 (longlong)iVar13 << 3);
      if (*(int *)(lVar34 + 0x27d4) < *(int *)(*(longlong *)(param_1 + 8) + 0xfe8)) {
        FUN_140848da0();
      }
      iVar14 = *(int *)(lVar34 + 0x2800);
      *(int *)(lVar34 + 0x2800) = iVar14 + 1;
      if (*(int *)(lVar34 + 0x2804) < iVar14 + 1) {
        TArray<FTransientDecalRenderData,TMemStackAllocator<0>_>::ResizeGrow(lVar34 + 0x27f8,iVar14)
        ;
      }
      puVar21 = (undefined8 *)(*(longlong *)(lVar34 + 0x27f8) + (longlong)iVar14 * 0x28);
      if (puVar21 != (undefined8 *)0x0) {
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21[2] = 0;
        puVar21[3] = 0;
        puVar21[4] = 0;
      }
      AK::MemoryMgr::StartProfileThreadUsage(iVar14 * 5);
      uVar29 = 0x464aa748;
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      plVar27 = (longlong *)(lVar34 + 0x1df8);
      iVar14 = *(int *)(lVar34 + 0x1e00);
      iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0x1078);
      if (iVar14 < iVar13) {
        *(int *)(lVar34 + 0x1e00) = iVar13;
        if (*(int *)(lVar34 + 0x1e04) < iVar13) {
          plVar20 = plVar27;
          FUN_141dab790(plVar27,iVar14);
          uVar29 = (uint)plVar20;
        }
        iVar12 = iVar13 + -1;
        lVar33 = (longlong)iVar12;
        if (iVar14 <= lVar33) {
          iVar15 = *(int *)(lVar34 + 0x1e2c);
          lVar31 = lVar33 * 0x78;
          lVar33 = (lVar33 - iVar14) + 1;
          do {
            if (iVar15 != 0) {
              *(int *)((longlong)*(int *)(lVar34 + 0x1e28) * 0x78 + *plVar27) = iVar12;
            }
            *(undefined4 *)(lVar31 + *plVar27) = 0xffffffff;
            if (*(int *)(lVar34 + 0x1e2c) < 1) {
              uVar29 = 0xffffffff;
            }
            else {
              uVar29 = *(uint *)(lVar34 + 0x1e28);
            }
            *(uint *)(lVar31 + 4 + *plVar27) = uVar29;
            lVar31 = lVar31 + -0x78;
            *(int *)(lVar34 + 0x1e2c) = *(int *)(lVar34 + 0x1e2c) + 1;
            iVar15 = *(int *)(lVar34 + 0x1e2c);
            *(int *)(lVar34 + 0x1e28) = iVar12;
            iVar12 = iVar12 + -1;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
        }
        param_1 = local_338;
        if (0 < iVar13 - iVar14) {
          uVar30 = (ulonglong)(uint)(iVar13 - iVar14);
          do {
            uVar29 = *(uint *)(lVar34 + 0x1e20);
            *(uint *)(lVar34 + 0x1e20) = uVar29 + 1;
            if (*(int *)(lVar34 + 0x1e24) <= (int)uVar29) {
              uVar16 = (int)(uVar29 + 0x20 + ((int)(uVar29 + 0x20) >> 0x1f & 0x1fU)) >> 5;
              if (uVar16 < 5) {
                iVar13 = 4;
              }
              else {
                iVar14 = *(int *)(lVar34 + 0x1e24) + 0x1f;
                iVar13 = 4;
                if (((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar16)) {
                  iVar13 = uVar16 + 0x10 + (int)((ulonglong)((longlong)(int)uVar16 * 3) >> 3);
                }
                if (iVar13 < (int)uVar16) {
                  iVar13 = 0x7fffffff;
                }
              }
              *(int *)(lVar34 + 0x1e24) = iVar13 << 5;
              TBitArray<SceneRenderingBitArrayAllocator>::Realloc(lVar34 + 0x1e08,uVar29);
            }
            lVar18 = *(longlong *)(lVar34 + 0x1e18);
            if (*(longlong *)(lVar34 + 0x1e18) == 0) {
              lVar18 = lVar34 + 0x1e08;
            }
            uVar16 = uVar29;
            if ((int)uVar29 < 0) {
              uVar16 = uVar29 + 0x1f;
            }
            uVar29 = uVar29 & 0x1f;
            puVar26 = (uint *)(lVar18 + (longlong)((int)uVar16 >> 5) * 4);
            *puVar26 = *puVar26 & ~(1 << (sbyte)uVar29);
            uVar30 = uVar30 - 1;
            lVar18 = local_250;
            param_1 = local_338;
          } while (uVar30 != 0);
        }
      }
      AK::MemoryMgr::StartProfileThreadUsage(uVar29);
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      iVar14 = (int)lVar34 + 0x1c80;
      if (*(int *)(lVar34 + 0x1c8c) < *(int *)(*(longlong *)(param_1 + 8) + 0xfe8)) {
        FUN_140848da0();
      }
      AK::MemoryMgr::StartProfileThreadUsage(iVar14);
      AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
      plVar27 = (longlong *)(lVar34 + 0x1b30);
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      *(undefined4 *)(lVar34 + 0x1b38) = 0;
      plVar20 = plVar36;
      if (*(int *)(lVar34 + 0x1b3c) != iVar14) {
        FUN_140848da0(plVar27);
        plVar20 = (longlong *)(ulonglong)*(uint *)(lVar34 + 0x1b38);
      }
      iVar14 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
      iVar13 = iVar14 + (int)plVar20;
      *(int *)(lVar34 + 0x1b38) = iVar13;
      if (*(int *)(lVar34 + 0x1b3c) < iVar13) {
        FUN_140848b80(plVar27);
      }
      pvVar25 = (void *)(*plVar27 + (longlong)(int)plVar20 * 8);
      _guard_xfg_dispatch_icall_nop(pvVar25,0,(longlong)iVar14 << 3);
      AK::MemoryMgr::StartProfileThreadUsage((long)pvVar25);
      if ((lVar18 != 0) && (0 < *(int *)(lVar18 + 0x10))) {
        *(undefined4 *)(lVar18 + 0x268) = 0;
        if (*(int *)(lVar18 + 0x26c) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(lVar18 + 0x260,0);
        }
        pvVar25 = (void *)(lVar18 + 0x270);
        *(undefined4 *)(lVar18 + 0x290) = 0xffffffff;
        *(undefined4 *)(lVar18 + 0x294) = 0;
        *(undefined4 *)(lVar18 + 0x288) = 0;
        if (*(int *)(lVar18 + 0x28c) != 0) {
          *(undefined4 *)(lVar18 + 0x28c) = 0;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(pvVar25,0);
        }
        if (0 < (int)*(uint *)(lVar18 + 0x2a8)) {
          uVar30 = (ulonglong)*(uint *)(lVar18 + 0x2a8);
          plVar27 = plVar36;
          do {
            pvVar25 = *(void **)(lVar18 + 0x2a0);
            if (*(void **)(lVar18 + 0x2a0) == (void *)0x0) {
              pvVar25 = (void *)(lVar18 + 0x298);
            }
            uVar17 = (longlong)*(int *)(lVar18 + 0x2a8) - 1U & (ulonglong)plVar27;
            plVar27 = (longlong *)((longlong)plVar27 + 1);
            *(undefined4 *)((longlong)pvVar25 + uVar17 * 4) = 0xffffffff;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)pvVar25);
      plVar27 = plVar36;
      local_1e8 = param_1;
      lStack_1e0 = lVar34;
      if (lVar18 != 0) {
        plVar27 = (longlong *)FUN_141d69b20(lVar18,lVar34,*(undefined8 *)(param_1 + 8));
      }
      *(longlong **)(lVar34 + 0x2f30) = plVar27;
      if (plVar27 != (longlong *)0x0) {
        *(undefined1 *)(param_1 + 0x269) = 1;
      }
      lVar18 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
      if (((lVar18 == 0) ||
          (lVar18 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(),
          *(char *)(lVar18 + 0xcf) == '\0')) && (*(char *)(lVar34 + 0x1203) == '\0')) {
        lVar18 = *(longlong *)(param_1 + 8);
        if (0 < *(int *)(lVar18 + 0x5fa0) - *(int *)(lVar18 + 0x5fcc)) {
          FUN_141db4c10(lVar18 + 0x5f90,lVar34);
        }
        if ((*(longlong **)(lVar34 + 0x30a0) == (longlong *)0x0) ||
           (cVar11 = (**(code **)(**(longlong **)(lVar34 + 0x30a0) + 0x20))(), cVar11 == '\0')) {
          lVar18 = *(longlong *)(param_1 + 8);
          if (*(int *)(DAT_146a9ef30 + 4) == 0) {
            local_324 = 0;
            lVar33 = FUN_1428742e0();
            fVar5 = *(float *)(lVar34 + 0xf70);
            fVar6 = *(float *)(lVar33 + 0x1c);
            lVar33 = FUN_1428742e0();
            fVar38 = *(float *)(lVar33 + 0x38);
            fVar39 = fVar38 - *(float *)(lVar33 + 0x30);
            if (1e-08 < ABS(fVar39)) {
              fVar38 = *(float *)(lVar33 + 0x2c);
              fVar7 = *(float *)(lVar33 + 0x34);
              fVar37 = fVar38;
              if ((fVar38 <= fVar5) && (fVar37 = fVar7, fVar5 <= fVar7)) {
                fVar37 = fVar5;
              }
              fVar38 = ((fVar37 - fVar38) / (fVar7 - fVar38)) * fVar39 + *(float *)(lVar33 + 0x30);
            }
            if ((*(int *)(lVar18 + 0x5fa0) - *(int *)(lVar18 + 0x5fcc) < 1) ||
               (plVar27 = (longlong *)(*(longlong *)(lVar34 + 0x18) + 0x380),
               *(longlong *)(lVar34 + 0x18) == 0)) {
              plVar27 = plVar36;
            }
            iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x1f;
            if (iVar14 < 0) {
              iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x3e;
            }
            iVar14 = (iVar14 >> 5) + -1 + DAT_1464c3144;
            lVar33 = (longlong)DAT_1464c3144;
            cVar11 = FUN_141636a40();
            if ((cVar11 == '\0') || (*(int *)(DAT_146a9eeb0 + 4) == 0)) {
              uVar32 = 1;
            }
            else {
              uVar32 = 0;
            }
            local_160 = &local_324;
            ppiStack_1f0 = &local_160;
            local_1f8 = &LAB_141d90d00;
            local_108 = &LAB_141d90d00;
            local_158 = lVar18;
            local_150 = lVar34;
            local_148 = fVar6 * fVar38;
            local_140 = plVar27;
            ppiStack_100 = ppiStack_1f0;
            FUN_1406a7b10((longlong)iVar14 / lVar33 & 0xffffffff,&local_108,uVar32);
            LOCK();
            if (local_324 == 0) {
              local_324 = 0;
            }
            UNLOCK();
          }
          else {
            local_328 = 0;
            lVar33 = FUN_1428742e0();
            fVar5 = *(float *)(lVar34 + 0xf70);
            fVar6 = *(float *)(lVar33 + 0x1c);
            lVar33 = FUN_1428742e0();
            fVar38 = *(float *)(lVar33 + 0x38);
            fVar39 = fVar38 - *(float *)(lVar33 + 0x30);
            if (1e-08 < ABS(fVar39)) {
              fVar38 = *(float *)(lVar33 + 0x2c);
              fVar7 = *(float *)(lVar33 + 0x34);
              fVar37 = fVar38;
              if ((fVar38 <= fVar5) && (fVar37 = fVar7, fVar5 <= fVar7)) {
                fVar37 = fVar5;
              }
              fVar38 = ((fVar37 - fVar38) / (fVar7 - fVar38)) * fVar39 + *(float *)(lVar33 + 0x30);
            }
            if ((*(int *)(lVar18 + 0x5fa0) - *(int *)(lVar18 + 0x5fcc) < 1) ||
               (plVar27 = (longlong *)(*(longlong *)(lVar34 + 0x18) + 0x380),
               *(longlong *)(lVar34 + 0x18) == 0)) {
              plVar27 = plVar36;
            }
            iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x1f;
            if (iVar14 < 0) {
              iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x3e;
            }
            iVar14 = (iVar14 >> 5) + -1 + DAT_1464c3144;
            lVar33 = (longlong)DAT_1464c3144;
            cVar11 = FUN_141636a40();
            if ((cVar11 == '\0') || (*(int *)(DAT_146a9eeb0 + 4) == 0)) {
              uVar32 = 1;
            }
            else {
              uVar32 = 0;
            }
            local_188 = &local_328;
            ppiStack_200 = &local_188;
            local_208 = &LAB_141d90ce0;
            local_118 = &LAB_141d90ce0;
            local_180 = lVar18;
            local_178 = lVar34;
            local_170 = fVar6 * fVar38;
            local_168 = plVar27;
            ppiStack_110 = ppiStack_200;
            FUN_1406a7b10((longlong)iVar14 / lVar33 & 0xffffffff,&local_118,uVar32);
            LOCK();
            if (local_328 == 0) {
              local_328 = 0;
            }
            UNLOCK();
          }
        }
        else {
          lVar18 = *(longlong *)(param_1 + 8);
          if (*(int *)(DAT_146a9ef30 + 4) == 0) {
            local_32c = 0;
            lVar33 = FUN_1428742e0();
            fVar5 = *(float *)(lVar34 + 0xf70);
            fVar6 = *(float *)(lVar33 + 0x1c);
            lVar33 = FUN_1428742e0();
            fVar38 = *(float *)(lVar33 + 0x38);
            fVar39 = fVar38 - *(float *)(lVar33 + 0x30);
            if (1e-08 < ABS(fVar39)) {
              fVar38 = *(float *)(lVar33 + 0x2c);
              fVar7 = *(float *)(lVar33 + 0x34);
              fVar37 = fVar38;
              if ((fVar38 <= fVar5) && (fVar37 = fVar7, fVar5 <= fVar7)) {
                fVar37 = fVar5;
              }
              fVar38 = ((fVar37 - fVar38) / (fVar7 - fVar38)) * fVar39 + *(float *)(lVar33 + 0x30);
            }
            if ((*(int *)(lVar18 + 0x5fa0) - *(int *)(lVar18 + 0x5fcc) < 1) ||
               (plVar27 = (longlong *)(*(longlong *)(lVar34 + 0x18) + 0x380),
               *(longlong *)(lVar34 + 0x18) == 0)) {
              plVar27 = plVar36;
            }
            iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x1f;
            if (iVar14 < 0) {
              iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x3e;
            }
            iVar14 = (iVar14 >> 5) + -1 + DAT_1464c3144;
            lVar33 = (longlong)DAT_1464c3144;
            cVar11 = FUN_141636a40();
            if (((cVar11 == '\0') ||
                (cVar11 = (**(code **)(**(longlong **)(lVar34 + 0x30a0) + 0x30))(), cVar11 == '\0'))
               || (*(int *)(DAT_146a9eeb0 + 4) == 0)) {
              uVar32 = 1;
            }
            else {
              uVar32 = 0;
            }
            local_1b0 = &local_32c;
            ppiStack_210 = &local_1b0;
            local_218 = &LAB_141d90d10;
            local_128 = &LAB_141d90d10;
            local_1a8 = lVar18;
            local_1a0 = lVar34;
            local_198 = fVar6 * fVar38;
            local_190 = plVar27;
            ppiStack_120 = ppiStack_210;
            FUN_1406a7b10((longlong)iVar14 / lVar33 & 0xffffffff,&local_128,uVar32);
            LOCK();
            if (local_32c == 0) {
              local_32c = 0;
            }
            UNLOCK();
          }
          else {
            local_330 = 0;
            lVar33 = FUN_1428742e0();
            fVar5 = *(float *)(lVar34 + 0xf70);
            fVar6 = *(float *)(lVar33 + 0x1c);
            lVar33 = FUN_1428742e0();
            fVar38 = *(float *)(lVar33 + 0x38);
            fVar39 = fVar38 - *(float *)(lVar33 + 0x30);
            if (1e-08 < ABS(fVar39)) {
              fVar38 = *(float *)(lVar33 + 0x2c);
              fVar7 = *(float *)(lVar33 + 0x34);
              fVar37 = fVar38;
              if ((fVar38 <= fVar5) && (fVar37 = fVar7, fVar5 <= fVar7)) {
                fVar37 = fVar5;
              }
              fVar38 = ((fVar37 - fVar38) / (fVar7 - fVar38)) * fVar39 + *(float *)(lVar33 + 0x30);
            }
            if ((*(int *)(lVar18 + 0x5fa0) - *(int *)(lVar18 + 0x5fcc) < 1) ||
               (plVar27 = (longlong *)(*(longlong *)(lVar34 + 0x18) + 0x380),
               *(longlong *)(lVar34 + 0x18) == 0)) {
              plVar27 = plVar36;
            }
            iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x1f;
            if (iVar14 < 0) {
              iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x3e;
            }
            iVar14 = (iVar14 >> 5) + -1 + DAT_1464c3144;
            lVar33 = (longlong)DAT_1464c3144;
            cVar11 = FUN_141636a40();
            if (((cVar11 == '\0') ||
                (cVar11 = (**(code **)(**(longlong **)(lVar34 + 0x30a0) + 0x30))(), cVar11 == '\0'))
               || (*(int *)(DAT_146a9eeb0 + 4) == 0)) {
              uVar32 = 1;
            }
            else {
              uVar32 = 0;
            }
            local_1d8 = &local_330;
            ppiStack_220 = &local_1d8;
            local_228 = &LAB_141d90ca0;
            local_138 = &LAB_141d90ca0;
            local_1d0 = lVar18;
            local_1c8 = lVar34;
            local_1c0 = fVar6 * fVar38;
            local_1b8 = plVar27;
            ppiStack_130 = ppiStack_220;
            FUN_1406a7b10((longlong)iVar14 / lVar33 & 0xffffffff,&local_138,uVar32);
            LOCK();
            if (local_330 == 0) {
              local_330 = 0;
            }
            UNLOCK();
          }
        }
        FUN_141db43d0(*(undefined8 *)(param_1 + 8),lVar34);
      }
      else {
        local_268 = lVar34 + 0x1ac0;
        local_270 = 0;
        uVar29 = 1;
        local_26c = 1;
        local_260 = 0;
        plVar27 = plVar36;
        plVar20 = plVar36;
        if (0 < *(int *)(lVar34 + 0x1ad8)) {
          do {
            lVar18 = *(longlong *)(lVar34 + 0x1ad0);
            if (*(longlong *)(lVar34 + 0x1ad0) == 0) {
              lVar18 = local_268;
            }
            local_260 = (int)plVar20 + 1;
            puVar26 = (uint *)(lVar18 + (longlong)(int)plVar27 * 4);
            *puVar26 = *puVar26 | uVar29;
            local_26c = uVar29 * 2;
            if (local_26c == 0) {
              plVar27 = (longlong *)(ulonglong)((int)plVar27 + 1);
              local_26c = 1;
            }
            plVar20 = (longlong *)(ulonglong)local_260;
            uVar29 = local_26c;
          } while ((int)local_260 < *(int *)(lVar34 + 0x1ad8));
          local_270 = SUB84(plVar27,0);
        }
      }
      uVar10 = DAT_1464a8210;
      lVar18 = lVar34 + 0x1ac0;
      if ((*(uint *)(param_1 + 0x3c) & 0x1000) != 0) {
        pDVar19 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar27 = TlsGetValue(*pDVar19);
        if (plVar27 == (longlong *)0x0) {
          plVar20 = (longlong *)operator_new(0x18);
          plVar27 = plVar36;
          if (plVar20 != (longlong *)0x0) {
            *plVar20 = 0;
            plVar20[1] = 0;
            *(undefined4 *)(plVar20 + 2) = 0;
            plVar27 = plVar20;
          }
          TlsSetValue(*pDVar19,plVar27);
        }
        plVar20 = (longlong *)plVar27[1];
        if (plVar20 == (longlong *)0x0) {
          if (*plVar27 == 0) {
            lVar33 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar19 + 2);
            plVar27[1] = lVar33;
            if (lVar33 == 0) {
              puVar21 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar27[1] = (longlong)puVar21;
              lVar33 = 0x1f;
              do {
                puVar1 = puVar21 + 0x20;
                *puVar21 = puVar1;
                lVar33 = lVar33 + -1;
                puVar21 = puVar1;
              } while (lVar33 != 0);
              *puVar1 = 0;
            }
          }
          else {
            plVar27[1] = *plVar27;
            *plVar27 = 0;
          }
          plVar20 = (longlong *)plVar27[1];
          iVar14 = 0x20;
          *(undefined4 *)(plVar27 + 2) = 0x20;
        }
        else {
          iVar14 = (int)plVar27[2];
        }
        uVar29 = local_320;
        plVar27[1] = *plVar20;
        *(int *)(plVar27 + 2) = iVar14 + -1;
        plVar27 = (longlong *)FUN_1415914c0(&local_240);
        local_320 = uVar29 & 0xfffffffd;
        local_f0 = 0;
        local_e8 = uVar10;
        lVar33 = *plVar27;
        *plVar27 = 0;
        *plVar20 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar20 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
        *plVar20 = (longlong)&PTR_FUN_143fca7b0;
        *(undefined1 *)(plVar20 + 0xe) = 0;
        plVar20[0xf] = lVar33;
        local_238 = 0;
        local_f8 = plVar20;
        if (local_240 != 0) {
          LOCK();
          piVar22 = (int *)(local_240 + 0x48);
          iVar14 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle();
          }
        }
        if (((uVar29 & 1) != 0) && (local_320 = uVar29 & 0xfffffffc, local_248 != 0)) {
          LOCK();
          piVar22 = (int *)(local_248 + 0x48);
          iVar14 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle(local_248);
          }
        }
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        puVar21 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
        if (puVar21 != (undefined8 *)0x0) {
          *puVar21 = &PTR_FUN_143f77c18;
          puVar21[1] = local_1e8;
          puVar21[2] = lStack_1e0;
        }
        local_d8 = (code *)&LAB_141d90d30;
        plVar20[8] = 0;
        *(undefined4 *)(plVar20 + 10) = 0;
        if (local_a8 == (longlong *)0x0) {
          _guard_xfg_dispatch_icall_nop(plVar20 + 4,local_c8,0x20);
        }
        if (plVar20[8] != 0) {
          FMemory::Free();
        }
        plVar20[8] = (longlong)local_a8;
        local_a8 = (longlong *)0x0;
        *(int *)(plVar20 + 10) = local_98;
        local_98 = 0;
        if ((int)plVar20[10] == 0) {
LAB_141d93aad:
          plVar20[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          plVar27 = (longlong *)plVar20[8];
          if ((longlong *)plVar20[8] == (longlong *)0x0) {
            plVar27 = plVar20 + 4;
          }
          if (plVar27 == (longlong *)0x0) goto LAB_141d93aad;
          (**(code **)(*plVar27 + 8))();
          plVar20[2] = (longlong)local_d8;
        }
        local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
        *(undefined4 *)(plVar20 + 0xc) = 0xaff;
        if (local_98 != 0) {
          plVar27 = local_c8;
          if (local_a8 != (longlong *)0x0) {
            plVar27 = local_a8;
          }
          if (plVar27 != (longlong *)0x0) {
            (**(code **)(*plVar27 + 0x10))(plVar27,0);
          }
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        lVar33 = plVar20[0xf];
        if (lVar33 != 0) {
          LOCK();
          *(int *)(lVar33 + 0x48) = *(int *)(lVar33 + 0x48) + 1;
          UNLOCK();
        }
        local_2b8 = lVar33;
        FUN_1405ab110(plVar20,0,uVar10,1);
        plVar27 = (longlong *)(lVar34 + 0x30b8);
        param_1 = local_338;
        if (plVar27 == &local_2b8) {
          if (lVar33 != 0) {
            LOCK();
            piVar22 = (int *)(lVar33 + 0x48);
            iVar14 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            lVar31 = lVar33;
            goto joined_r0x000141d93b70;
          }
        }
        else {
          lVar31 = *plVar27;
          *plVar27 = lVar33;
          local_2b8 = 0;
          if (lVar31 != 0) {
            LOCK();
            piVar22 = (int *)(lVar31 + 0x48);
            iVar14 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
joined_r0x000141d93b70:
            if (iVar14 == 1) {
              FGraphEvent::Recycle(lVar31);
              param_1 = local_338;
            }
          }
        }
      }
      uVar29 = 0;
      if (*(int *)(lVar34 + 0xfc0) != *(int *)(lVar34 + 0xfec)) {
        local_2d4 = 1;
        local_2c4 = 0;
        local_2d8 = 0;
        local_2c8 = 0xffffffff;
        local_2c0 = 0;
        plVar27 = plVar36;
        local_2d0 = lVar18;
        if (*(int *)(lVar34 + 0x1ad8) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2d8);
          plVar27 = (longlong *)(ulonglong)local_2c4;
        }
        if ((int)plVar27 < *(int *)(local_2d0 + 0x18)) {
          do {
            uVar16 = local_2d4;
            piVar22 = (int *)TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                             ::FindId(lVar34 + 0xfb8,local_258,
                                      *(longlong *)(*(longlong *)(param_1 + 8) + 0x1050) +
                                      (longlong)(int)plVar27 * 4);
            if (*piVar22 != -1) {
              lVar33 = *(longlong *)(lVar34 + 0x1ad0);
              if (*(longlong *)(lVar34 + 0x1ad0) == 0) {
                lVar33 = lVar18;
              }
              puVar26 = (uint *)(lVar33 + (longlong)local_2d8 * 4);
              *puVar26 = *puVar26 & ~uVar16;
            }
            local_2c8 = local_2c8 & ~uVar16;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2d8);
            plVar27 = (longlong *)(ulonglong)local_2c4;
          } while ((int)local_2c4 < *(int *)(local_2d0 + 0x18));
        }
      }
      if (*(char *)(lVar34 + 0x1058) != '\0') {
        local_2f8 = 0;
        uVar16 = uVar29;
        if (*(int *)(lVar34 + 0x1010) == *(int *)(lVar34 + 0x103c)) {
          uVar16 = 8;
        }
        local_2f4 = 1;
        local_2e8 = 0xffffffff;
        local_2e0 = 0;
        *(uint *)(lVar34 + 0x28cc) = uVar16 | *(uint *)(lVar34 + 0x28cc) & 0xfffffff7;
        local_2e4 = 0;
        plVar27 = plVar36;
        local_2f0 = lVar18;
        if (*(int *)(lVar34 + 0x1ad8) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
          plVar27 = (longlong *)(ulonglong)local_2e4;
        }
        if ((int)plVar27 < *(int *)(local_2f0 + 0x18)) {
          do {
            uVar16 = local_2f4;
            piVar22 = (int *)TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                             ::FindId(lVar34 + 0x1008,local_254,
                                      *(longlong *)(*(longlong *)(param_1 + 8) + 0x1050) +
                                      (longlong)(int)plVar27 * 4);
            if (*piVar22 == -1) {
              lVar33 = *(longlong *)(lVar34 + 0x1ad0);
              if (*(longlong *)(lVar34 + 0x1ad0) == 0) {
                lVar33 = lVar18;
              }
              puVar26 = (uint *)(lVar33 + (longlong)local_2f8 * 4);
              *puVar26 = *puVar26 & ~uVar16;
            }
            local_2e8 = local_2e8 & ~uVar16;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
            plVar27 = (longlong *)(ulonglong)local_2e4;
          } while ((int)local_2e4 < *(int *)(local_2f0 + 0x18));
        }
      }
      if (*(char *)(lVar34 + 0x1208) != '\0') {
        local_314 = 1;
        local_304 = 0;
        local_318 = 0;
        local_308 = 0xffffffff;
        local_300 = 0;
        plVar27 = plVar36;
        local_310 = lVar18;
        if (*(int *)(lVar34 + 0x1ad8) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
          plVar27 = (longlong *)(ulonglong)local_304;
        }
        if ((int)plVar27 < *(int *)(local_310 + 0x18)) {
          do {
            lVar33 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) +
                      (longlong)(int)plVar27 * 8);
            lVar31 = *(longlong *)(lVar33 + 8);
            uVar16 = *(uint *)(lVar31 + 0x18);
            if (((uVar16 >> 0x13 & 1) == 0) && (*(char *)(lVar33 + 0xfd) == '\0')) {
              if ((*(int *)(lVar31 + 0x10) == 2) && ((uVar16 >> 0x1e & 1) == 0)) {
                bVar9 = true;
              }
              else {
                bVar9 = false;
              }
              lVar31 = (longlong)local_318;
              lVar33 = *(longlong *)(lVar34 + 0x1ad0);
              if (*(longlong *)(lVar34 + 0x1ad0) == 0) {
                lVar33 = lVar18;
              }
              uVar16 = *(uint *)(lVar33 + lVar31 * 4);
              if (bVar9) {
                *(uint *)(lVar33 + lVar31 * 4) = ~local_314 & uVar16;
              }
              else {
                *(uint *)(lVar33 + lVar31 * 4) = uVar16 | local_314;
              }
            }
            local_308 = local_308 & ~local_314;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
            plVar27 = (longlong *)(ulonglong)local_304;
          } while ((int)local_304 < *(int *)(local_310 + 0x18));
        }
      }
      param_2 = local_278;
      if (*(char *)(lVar34 + 0x1202) == '\0') {
        FUN_141da1f00(local_278,*(undefined8 *)(param_1 + 8),lVar34);
      }
      lVar18 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar18 + 0x1208) != '\0') {
        plVar27 = plVar36;
        plVar20 = plVar36;
        if (0 < *(int *)(lVar18 + 0xfe8)) {
          do {
            uVar16 = (int)plVar20 + 1;
            puVar26 = (uint *)(*(longlong *)((longlong)plVar27 + *(longlong *)(lVar18 + 0xfe0)) +
                              0x88);
            *puVar26 = *puVar26 | 1;
            plVar27 = plVar27 + 1;
            plVar20 = (longlong *)(ulonglong)uVar16;
          } while ((int)uVar16 < *(int *)(lVar18 + 0xfe8));
        }
        *(undefined1 *)(lVar18 + 0x1208) = 0;
      }
      FUN_141d24610(*(undefined8 *)(param_1 + 8));
      if ((*(char *)(lVar34 + 0x1209) == '\0') || (*(int *)(lVar34 + 0xf60) != 1)) {
        local_358 = &local_2b0;
        local_368 = &local_2a0;
        local_360 = &local_288;
        FUN_141d91110(param_2,*(undefined8 *)(param_1 + 8),lVar34,local_348);
      }
      if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x1198) -
              *(int *)(*(longlong *)(param_1 + 8) + 0x11c4)) {
        uVar29 = 0x4000;
      }
      local_348 = local_348 << 1;
      local_31c = local_31c + 1;
      local_290 = local_290 + 1;
      *(uint *)(lVar34 + 0x28cc) = uVar29 | *(uint *)(lVar34 + 0x28cc) & 0xffffbfff;
      iVar14 = *(int *)(param_1 + 200);
    } while (local_31c < iVar14);
  }
  lVar18 = local_338;
  uVar29 = 8;
  if (((1 < iVar14) && (lVar34 = *(longlong *)(param_1 + 0xc0), *(char *)(lVar34 + 0x1209) != '\0'))
     && (*(int *)(lVar34 + 0xf60) == 1)) {
    iVar14 = *(int *)(lVar34 + 0x1ad8) + 0x1f;
    uVar16 = (int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5;
    uVar30 = *(ulonglong *)(lVar34 + 0x1ad0);
    if (*(ulonglong *)(lVar34 + 0x1ad0) == 0) {
      uVar30 = lVar34 + 0x1ac0;
    }
    uVar17 = *(ulonglong *)(lVar34 + 0x4ba0);
    if (*(ulonglong *)(lVar34 + 0x4ba0) == 0) {
      uVar17 = lVar34 + 0x4b90;
    }
    if (uVar16 != 0) {
      if ((0xf < uVar16) &&
         ((uVar17 + (ulonglong)(uVar16 - 1) * 4 < uVar30 ||
          (uVar30 + (ulonglong)(uVar16 - 1) * 4 < uVar17)))) {
        plVar27 = plVar36;
        do {
          uVar35 = (int)plVar27 + 0x10;
          plVar36 = (longlong *)(ulonglong)uVar35;
          puVar2 = (ulonglong *)(uVar30 + (longlong)plVar27 * 4);
          uVar28 = puVar2[1];
          puVar3 = (ulonglong *)(uVar17 + (longlong)plVar27 * 4);
          uVar8 = puVar3[1];
          puVar4 = (ulonglong *)(uVar30 + (longlong)plVar27 * 4);
          *puVar4 = *puVar3 | *puVar2;
          puVar4[1] = uVar8 | uVar28;
          uVar23 = (ulonglong)(uVar29 - 4);
          puVar2 = (ulonglong *)(uVar30 + uVar23 * 4);
          uVar28 = puVar2[1];
          puVar3 = (ulonglong *)(uVar17 + uVar23 * 4);
          uVar8 = puVar3[1];
          puVar4 = (ulonglong *)(uVar30 + uVar23 * 4);
          *puVar4 = *puVar3 | *puVar2;
          puVar4[1] = uVar8 | uVar28;
          uVar23 = (ulonglong)uVar29;
          puVar2 = (ulonglong *)(uVar30 + uVar23 * 4);
          uVar28 = puVar2[1];
          puVar3 = (ulonglong *)(uVar17 + uVar23 * 4);
          uVar8 = puVar3[1];
          puVar4 = (ulonglong *)(uVar30 + uVar23 * 4);
          *puVar4 = *puVar3 | *puVar2;
          puVar4[1] = uVar8 | uVar28;
          uVar23 = (ulonglong)(uVar29 + 4);
          uVar29 = uVar29 + 0x10;
          puVar2 = (ulonglong *)(uVar30 + uVar23 * 4);
          uVar28 = puVar2[1];
          puVar3 = (ulonglong *)(uVar17 + uVar23 * 4);
          uVar8 = puVar3[1];
          puVar4 = (ulonglong *)(uVar30 + uVar23 * 4);
          *puVar4 = *puVar3 | *puVar2;
          puVar4[1] = uVar8 | uVar28;
          plVar27 = plVar36;
        } while (uVar35 < uVar16 - (uVar16 & 0xf));
      }
      if ((uint)plVar36 < uVar16) {
        uVar28 = (ulonglong)(uVar16 - (uint)plVar36);
        puVar26 = (uint *)(uVar30 + (longlong)plVar36 * 4);
        do {
          *puVar26 = *puVar26 | *(uint *)((uVar17 - uVar30) + (longlong)puVar26);
          puVar26 = puVar26 + 1;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
    }
  }
  lVar34 = *(longlong *)(param_1 + 0xc0);
  cVar11 = '\x01';
  lVar33 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar34;
  for (; lVar34 != lVar33; lVar34 = lVar34 + 0x30d0) {
    if ((*(char *)(lVar34 + 0x1209) != '\0') && (*(int *)(lVar34 + 0xf60) == 1)) {
      local_358 = &local_2b0;
      local_368 = &local_2a0;
      local_360 = &local_288;
      FUN_141d91110(param_2,*(undefined8 *)(lVar18 + 8),lVar34,cVar11);
    }
    cVar11 = cVar11 * '\x02';
  }
  local_350 = lVar18 + 0xd0;
  local_358 = &local_2b0;
  local_368 = &local_2a0;
  local_360 = &local_288;
  FUN_141d9a710(lVar18,param_1 + 0xc0,*(undefined8 *)(lVar18 + 8),lVar18 + 0x10);
  return;
}



// FUNCTION 141d941b0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
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



// FUNCTION 141d94260 FUN_141d94260 body=161 status=ok
// SIG undefined FUN_141d94260(void)

undefined8 FUN_141d94260(longlong param_1,uint param_2,char param_3)

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
      FUN_141da5a50(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141d94310 ConstructCompiledInstance body=215 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TComplexityAccumulatePS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5bbb8;
    puVar1[0x18] = &PTR_LAB_144e5bbe8;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd6) = 0;
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"NormalizedComplexity",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"bShowQuadOverdraw",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"RWQuadBuffer",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d943f0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TModulatedShadowProjection<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89600(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b9b8;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    FShaderParameter::Bind(puVar1 + 0x24,*(undefined8 *)(param_1 + 0x18),L"PCSSParameters",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94460 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TModulatedShadowProjection<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89600(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b980;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    FShaderParameter::Bind(puVar1 + 0x24,*(undefined8 *)(param_1 + 0x18),L"PCSSParameters",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d944d0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TModulatedShadowProjection<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d897b0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b8a8;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    FShaderParameter::Bind(puVar1 + 0x24,*(undefined8 *)(param_1 + 0x18),L"ModulatedShadowColor",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94540 FUN_141d94540 body=46 status=ok
// SIG undefined FUN_141d94540(void)

void FUN_141d94540(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_141d89210(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141d94570 FUN_141d94570 body=77 status=ok
// SIG undefined FUN_141d94570(void)

undefined8 * FUN_141d94570(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x168);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d8a660(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e5b670;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d945c0 FUN_141d945c0 body=77 status=ok
// SIG undefined FUN_141d945c0(void)

undefined8 * FUN_141d945c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x188);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d894b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e5b780;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94610 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TShadowDepthPS<1,1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x170);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d8a760(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e5b540;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94660 FUN_141d94660 body=102 status=ok
// SIG undefined FUN_141d94660(void)

undefined8 * FUN_141d94660(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89600(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b8e0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    FTranslucencyShadowProjectionShaderParameters::Bind
              (puVar1 + 0x24,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d946d0 FUN_141d946d0 body=102 status=ok
// SIG undefined FUN_141d946d0(void)

undefined8 * FUN_141d946d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89600(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b918;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    FTranslucencyShadowProjectionShaderParameters::Bind
              (puVar1 + 0x24,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94740 FUN_141d94740 body=46 status=ok
// SIG undefined FUN_141d94740(void)

void FUN_141d94740(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FUN_141d89600(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141d94770 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TModulatedShadowProjection<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89600(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5ba28;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    FShaderParameter::Bind(puVar1 + 0x24,*(undefined8 *)(param_1 + 0x18),L"PCSSParameters",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d947e0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TModulatedShadowProjection<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89600(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b9f0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    FShaderParameter::Bind(puVar1 + 0x24,*(undefined8 *)(param_1 + 0x18),L"PCSSParameters",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94850 ConstructCompiledInstance body=149 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopyShadowMaps2DPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91290;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ShadowDepthTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"ShadowDepthSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d948f0 ConstructCompiledInstance body=149 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopyShadowMapsCubePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91290;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ShadowDepthCubeTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"ShadowDepthSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94990 FUN_141d94990 body=182 status=ok
// SIG undefined FUN_141d94990(void)

undefined8 * FUN_141d94990(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dd4a38;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x156) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15a) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"ShadowViewProjectionMatrices",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x156,*(undefined8 *)(param_1 + 0x18),L"MeshVisibleToFace",0);
    FUN_141cdf500(param_1,puVar1 + 0x22,puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94a50 FUN_141d94a50 body=111 status=ok
// SIG undefined FUN_141d94a50(void)

undefined8 * FUN_141d94a50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5bb28;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"LayerIndex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94ac0 FUN_141d94ac0 body=297 status=ok
// SIG undefined FUN_141d94ac0(void)

undefined8 * FUN_141d94ac0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe0);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144e5bad0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc6) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xca) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined2 *)(puVar2 + 0x1a) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xd2) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xd6) = 0;
    *(undefined4 *)(puVar2 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xdc) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderParameter::Bind(puVar2 + 0x18,uVar1,L"StencilingGeometryPosAndScale",0);
    FShaderParameter::Bind
              ((undefined4 *)((longlong)puVar2 + 0xc6),uVar1,L"StencilingConeParameters",0);
    FShaderParameter::Bind
              ((undefined4 *)((longlong)puVar2 + 0xcc),uVar1,L"StencilingConeTransform",0);
    FShaderParameter::Bind
              ((undefined4 *)((longlong)puVar2 + 0xd2),uVar1,L"StencilingPreViewTranslation",0);
    FShaderParameter::Bind(puVar2 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"LayerIndex",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94bf0 ConstructSerializedInstance body=87 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TComplexityAccumulatePS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5bbb8;
    puVar1[0x18] = &PTR_LAB_144e5bbe8;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94c50 FUN_141d94c50 body=72 status=ok
// SIG undefined FUN_141d94c50(void)

undefined8 * FUN_141d94c50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89710(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b9b8;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94ca0 FUN_141d94ca0 body=72 status=ok
// SIG undefined FUN_141d94ca0(void)

undefined8 * FUN_141d94ca0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89710(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b980;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94cf0 FUN_141d94cf0 body=72 status=ok
// SIG undefined FUN_141d94cf0(void)

undefined8 * FUN_141d94cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d898c0(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b8a8;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94d40 FUN_141d94d40 body=36 status=ok
// SIG undefined FUN_141d94d40(void)

void FUN_141d94d40(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_141d893a0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141d94d70 FUN_141d94d70 body=80 status=ok
// SIG undefined FUN_141d94d70(void)

undefined8 * FUN_141d94d70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x168);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    *puVar1 = &PTR_FUN_144e5b670;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94dc0 FUN_141d94dc0 body=108 status=ok
// SIG undefined FUN_141d94dc0(void)

undefined8 * FUN_141d94dc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x188);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    *(undefined2 *)(puVar1 + 0x30) = 0;
    *puVar1 = &PTR_FUN_144e5b780;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94e30 FUN_141d94e30 body=93 status=ok
// SIG undefined FUN_141d94e30(void)

undefined8 * FUN_141d94e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x170);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    *(undefined4 *)(puVar1 + 0x2d) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x16c) = 0;
    *puVar1 = &PTR_FUN_144e5b540;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94e90 FUN_141d94e90 body=73 status=ok
// SIG undefined FUN_141d94e90(void)

undefined8 * FUN_141d94e90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89710(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b8e0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94ee0 FUN_141d94ee0 body=73 status=ok
// SIG undefined FUN_141d94ee0(void)

undefined8 * FUN_141d94ee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89710(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b918;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94f30 FUN_141d94f30 body=36 status=ok
// SIG undefined FUN_141d94f30(void)

void FUN_141d94f30(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FUN_141d89710(lVar1);
    return;
  }
  return;
}



// FUNCTION 141d94f60 FUN_141d94f60 body=72 status=ok
// SIG undefined FUN_141d94f60(void)

undefined8 * FUN_141d94f60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89710(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5ba28;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d94fb0 FUN_141d94fb0 body=72 status=ok
// SIG undefined FUN_141d94fb0(void)

undefined8 * FUN_141d94fb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89710(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5b9f0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d95000 ConstructSerializedInstance body=72 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FClearReplacementPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5bb28;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d95050 ConstructSerializedInstance body=93 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FRTWriteMaskDecodeCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e5bad0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d950b0 FUN_141d950b0 body=2041 status=ok
// SIG undefined FUN_141d950b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d950b0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_1b8 [32];
  float local_198;
  float local_190;
  float local_188;
  float local_180;
  float local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_150;
  ulonglong local_148;
  undefined *local_140;
  undefined4 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  plVar14 = (longlong *)0x0;
  local_148 = local_148 & 0xffffffff00000000;
  lVar9 = *(longlong *)(param_4 + 8);
  local_130 = param_5;
  if (*(int *)(lVar9 + 0x17a0) != *(int *)(lVar9 + 0x17cc)) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x5c8) + 0x58);
    lVar10 = *(longlong *)(lVar9 + 0x17d8);
    if (*(longlong *)(lVar9 + 0x17d8) == 0) {
      lVar10 = lVar9 + 0x17d0;
    }
    iVar5 = *(int *)(lVar10 + ((longlong)*(int *)(lVar9 + 0x17e0) - 1U & (longlong)iVar6) * 4);
    if (iVar5 != -1) {
      do {
        plVar16 = (longlong *)((longlong)iVar5 * 0x270 + *(longlong *)(lVar9 + 0x1798));
        if ((int)*plVar16 == iVar6) {
          if (iVar5 != -1) goto LAB_141d95178;
          break;
        }
        iVar5 = (int)plVar16[0x4c];
      } while (iVar5 != -1);
    }
  }
  plVar16 = plVar14;
LAB_141d95178:
  local_e8 = *param_3;
  local_d8 = param_3[1];
  local_128 = *(undefined4 *)(param_3 + 5);
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
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
  if (*(char *)((longlong)plVar16 + 0x25c) == '\0') {
    return;
  }
  if ((plVar16[0x4a] == 0) && ((int)plVar16[0x49] < 1)) {
    return;
  }
  FUN_14049afe0(param_2,&local_118);
  local_e0 = FUN_140985530();
  local_d8 = FUN_141a15460();
  if ((*(byte *)(param_1 + 0x560) & 0x20) == 0) {
    lVar9 = *(longlong *)(param_5 + 0x3090);
    local_140 = &DAT_146b09c50;
    local_138 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x38,&local_148,&local_140);
    plVar15 = plVar14;
    if ((int)local_148 != -1) {
      plVar15 = (longlong *)((longlong)(int)local_148 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    local_138 = 0;
    plVar13 = plVar15 + 2;
    if (plVar15 == (longlong *)0x0) {
      plVar13 = plVar14;
    }
    local_140 = &DAT_146a9f3e0;
    lVar10 = *plVar13;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x38,&local_148,&local_140);
    plVar15 = plVar14;
    if ((int)local_148 != -1) {
      plVar15 = (longlong *)((longlong)(int)local_148 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar13 = plVar15 + 2;
    if (plVar15 == (longlong *)0x0) {
      plVar13 = plVar14;
    }
    lVar9 = *plVar13;
    local_118 = DAT_1464c2720;
    if (lVar10 == 0) {
      local_140 = (undefined *)0x0;
      plVar15 = (longlong *)&DAT_00000020;
      plStack_110 = plVar14;
    }
    else {
      lVar11 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar11 + 0x28) == '\0') {
        FUN_1419f3850(lVar11);
      }
      plStack_110 = *(longlong **)(lVar11 + 0x38);
      plVar15 = plVar14;
    }
    uVar7 = 0;
    if (plVar15 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
    }
    bVar2 = false;
    if (lVar9 == 0) {
      bVar2 = true;
      local_140 = (undefined *)0x0;
    }
    else {
      lVar11 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar11 + 0x28) == '\0') {
        FUN_1419f3850(lVar11);
      }
      uVar7 = *(undefined8 *)(lVar11 + 0x40);
    }
    local_f8 = uVar7;
    if (bVar2) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
    }
    local_cc = local_cc & 0xffffffff00000000;
    FUN_141ed6ac0(param_2,&local_118,2,1);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f489c0;
    *(undefined4 *)(puVar12 + 2) = local_128;
    FUN_141dadb30(lVar9,param_2,local_130,plVar16[0x4a]);
  }
  else {
    uVar1 = (&DAT_1464c9c48)[*(int *)(param_4 + 0x2a0)];
    iVar6 = FUN_1419ef5f0(uVar1);
    if ((iVar6 < 2) || ((uVar1 < 0x1e && ((0x28e71800U >> (uVar1 & 0x1f) & 1) != 0)))) {
      local_138 = 0;
      lVar9 = *(longlong *)(param_5 + 0x3090);
      local_140 = &DAT_146b0a3f0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x38,&local_148,&local_140);
      if ((int)local_148 == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = (longlong)(int)local_148 * 0x20 + *(longlong *)(lVar9 + 0x38);
      }
      plVar15 = (longlong *)(lVar10 + 0x10);
      if (lVar10 == 0) {
        plVar15 = (longlong *)0x0;
      }
      lVar10 = *plVar15;
      FUN_141d89430(&local_148,lVar9);
      local_118 = DAT_1464c2720;
      if (lVar10 == 0) {
        plStack_110 = (longlong *)0x0;
        plVar14 = (longlong *)&DAT_00000008;
        local_140 = (undefined *)0x0;
      }
      else {
        lVar9 = *(longlong *)(lVar10 + 0x48);
        if (*(char *)(lVar9 + 0x28) == '\0') {
          FUN_1419f3850(lVar9);
        }
        plStack_110 = *(longlong **)(lVar9 + 0x38);
      }
      uVar7 = 0;
      if (plVar14 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
      }
      uVar3 = local_148;
      bVar2 = false;
      if (local_148 == 0) {
        bVar2 = true;
        local_140 = (undefined *)0x0;
      }
      else {
        lVar9 = *(longlong *)(local_148 + 0x48);
        if (*(char *)(lVar9 + 0x28) == '\0') {
          FUN_1419f3850(lVar9);
        }
        uVar7 = *(undefined8 *)(lVar9 + 0x40);
      }
      local_f8 = uVar7;
      if (bVar2) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
      }
      local_cc = local_cc & 0xffffffff00000000;
      FUN_141ed6ac0(param_2,&local_118,2,1);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar12 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_143f489c0;
      *(undefined4 *)(puVar12 + 2) = local_128;
      FUN_141dadb30(uVar3,param_2,local_130,plVar16[0x4a]);
      plVar14 = (longlong *)plVar16[0x4a];
      if (plVar14 == (longlong *)0x0) {
        plVar14 = *(longlong **)plVar16[0x48];
      }
      lVar9 = (**(code **)(*plVar14 + 0x10))();
      local_150 = 6;
      goto LAB_141d9580b;
    }
    local_138 = 0;
    lVar9 = *(longlong *)(param_5 + 0x3090);
    local_140 = &DAT_146b0a2a0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x38,&local_148,&local_140);
    if ((int)local_148 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)(int)local_148 * 0x20 + *(longlong *)(lVar9 + 0x38);
    }
    local_138 = 0;
    plVar15 = (longlong *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      plVar15 = plVar14;
    }
    local_140 = &DAT_146a9f140;
    lVar10 = *plVar15;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x38,&local_148,&local_140);
    if ((int)local_148 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)(int)local_148 * 0x20 + *(longlong *)(lVar9 + 0x38);
    }
    plVar15 = (longlong *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      plVar15 = (longlong *)0x0;
    }
    lVar11 = *plVar15;
    FUN_141d89430(&local_140,lVar9);
    local_118 = DAT_1464c2720;
    if (lVar10 == 0) {
      plStack_110 = (longlong *)0x0;
      plVar14 = (longlong *)0x1;
      local_148 = 0;
    }
    else {
      lVar9 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      plStack_110 = *(longlong **)(lVar9 + 0x38);
    }
    uVar7 = 0;
    if (plVar14 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
    }
    bVar2 = false;
    if (lVar11 == 0) {
      bVar2 = true;
      local_148 = 0;
      uStack_f0 = uVar7;
    }
    else {
      lVar9 = *(longlong *)(lVar11 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uStack_f0 = *(undefined8 *)(lVar9 + 0x58);
    }
    if (bVar2) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
    }
    puVar4 = local_140;
    bVar2 = false;
    if (local_140 == (undefined *)0x0) {
      bVar2 = true;
      local_140 = (undefined *)0x0;
    }
    else {
      lVar9 = *(longlong *)(local_140 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar7 = *(undefined8 *)(lVar9 + 0x40);
    }
    local_f8 = uVar7;
    if (bVar2) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
    }
    local_cc = local_cc & 0xffffffff00000000;
    FUN_141ed6ac0(param_2,&local_118,2,1);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f489c0;
    *(undefined4 *)(puVar12 + 2) = local_128;
    FUN_141dadb30(puVar4,param_2,local_130,plVar16[0x4a]);
  }
  plVar14 = (longlong *)plVar16[0x4a];
  if (plVar14 == (longlong *)0x0) {
    plVar14 = *(longlong **)plVar16[0x48];
  }
  lVar9 = (**(code **)(*plVar14 + 0x10))();
  local_150 = 1;
LAB_141d9580b:
  local_170 = *(undefined8 *)(param_1 + 0x538);
  local_168 = *(undefined8 *)(lVar9 + 0x14);
  local_158 = 0;
  local_198 = (float)*(uint *)(param_1 + 0x53c);
  local_190 = (float)*(uint *)(param_1 + 0x540);
  local_180 = (float)*(uint *)(param_1 + 0x538);
  local_188 = local_190;
  local_178 = local_198;
  local_160 = lVar10;
  local_130 = local_170;
  DrawRectangle(param_2,0,0);
  return;
}



// FUNCTION 141d958b0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x2010102;
  local_84 = 0x10101;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d95980 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0x10001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d95a50 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x2010102;
  local_84 = 0x20101;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d95b20 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0x20001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d95bf0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x10102;
  local_84 = 0x30001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d95cc0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0x30001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d95d90 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x2010102;
  local_84 = 0x40101;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d95e60 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0x40001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d95f30 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x20000;
  local_84 = 0x70100;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d96000 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x2010102;
  local_84 = 0x80101;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d960d0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0x80001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d961a0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<0,0,0,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x10000;
  local_84 = 0x100;
  local_80 = 0x1000001;
  local_7c = 0x1000000;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d96270 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<0,0,0,1,0,0,1,15,0,0,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x10000;
  local_84 = 0x100;
  local_80 = 0x500;
  local_7c = 0x1000f01;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d96340 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x2010102;
  local_84 = 0xc0101;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141d96410 CreateTask body=378 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FCompileRayTracingPipelineStateTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144e5c290;
  *(undefined1 *)(plVar8 + 0x18) = 0;
  plVar8[0x19] = local_res10;
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



// FUNCTION 141d96590 CreateTask body=378 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FCompileRayTracingPipelineStateTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144e5c280;
  *(undefined1 *)(plVar8 + 0x18) = 0;
  plVar8[0x19] = local_res10;
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



// FUNCTION 141d96710 FUN_141d96710 body=372 status=ok
// SIG undefined FUN_141d96710(void)

undefined8 * FUN_141d96710(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144e5bc20;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  plVar8[0xe] = local_res10;
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



// FUNCTION 141d96890 FUN_141d96890 body=372 status=ok
// SIG undefined FUN_141d96890(void)

undefined8 * FUN_141d96890(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144e5bc30;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  plVar8[0xe] = local_res10;
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



// FUNCTION 141d96a10 FUN_141d96a10 body=485 status=ok
// SIG undefined FUN_141d96a10(void)

void FUN_141d96a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1[0xf] == 0) {
    local_18 = *(undefined4 *)(param_1 + 10);
    uStack_14 = *(undefined4 *)((longlong)param_1 + 0x54);
    uStack_10 = *(undefined4 *)(param_1 + 0xb);
    uStack_c = *(undefined4 *)((longlong)param_1 + 0x5c);
    if (*(char *)(param_1 + 10) == '\0') {
      FUN_141d7e9e0(*param_1,param_1[1],param_1[2],&local_18,param_1 + 3,param_1[0xc],param_1[0xd],0
                   );
    }
    else {
      FUN_141d7eea0(*param_1,param_1[1],param_1[0x10],&local_18,param_1 + 3,0,0,param_1 + 0x10,
                    *(undefined4 *)(param_1 + 0xe),*(undefined4 *)((longlong)param_1 + 0x74),1);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe);
    uVar4 = (ulonglong)iVar1;
    iVar7 = *(int *)((longlong)param_1 + 0x74);
    if (iVar1 <= iVar7) {
      uVar5 = uVar4;
      if (iVar7 < iVar1) goto LAB_141d96a78;
      do {
        psVar2 = (short *)(*(longlong *)param_1[0xf] + uVar5 * 2);
        do {
          if (*psVar2 != 0) break;
          uVar4 = (ulonglong)((int)uVar4 + 1);
          uVar5 = uVar5 + 1;
          psVar2 = psVar2 + 1;
        } while ((longlong)uVar5 <= (longlong)iVar7);
LAB_141d96a78:
        uVar3 = (uint)uVar4;
        if ((int)uVar3 <= iVar7) {
          uVar4 = uVar4 & 0xffffffff;
          uVar6 = uVar3;
          if ((int)uVar3 < iVar7) {
            psVar2 = (short *)(*(longlong *)param_1[0xf] + 2 + uVar5 * 2);
            do {
              uVar6 = (uint)uVar4;
              if (*psVar2 == 0) break;
              uVar6 = uVar6 + 1;
              uVar4 = (ulonglong)uVar6;
              uVar5 = uVar5 + 1;
              psVar2 = psVar2 + 1;
            } while ((longlong)uVar5 < (longlong)iVar7);
          }
          local_18 = *(undefined4 *)(param_1 + 10);
          uStack_14 = *(undefined4 *)((longlong)param_1 + 0x54);
          uStack_10 = *(undefined4 *)(param_1 + 0xb);
          uStack_c = *(undefined4 *)((longlong)param_1 + 0x5c);
          if (*(char *)(param_1 + 10) == '\0') {
            FUN_141d7e9e0(*param_1,param_1[1],param_1[2],&local_18,param_1 + 3,param_1[0xc],
                          param_1[0xd],0);
          }
          else {
            FUN_141d7eea0(*param_1,param_1[1],param_1[0x10],&local_18,param_1 + 3,0,0,param_1 + 0x10
                          ,uVar3,uVar6,1);
          }
          iVar7 = *(int *)((longlong)param_1 + 0x74);
          uVar4 = (ulonglong)(uVar6 + 1);
          uVar5 = uVar5 + 1;
        }
      } while ((int)uVar4 <= iVar7);
    }
  }
  FUN_141ec9240(param_1[1],param_3);
  return;
}



// FUNCTION 141d96c00 FUN_141d96c00 body=485 status=ok
// SIG undefined FUN_141d96c00(void)

void FUN_141d96c00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1[0xf] == 0) {
    local_18 = *(undefined4 *)(param_1 + 10);
    uStack_14 = *(undefined4 *)((longlong)param_1 + 0x54);
    uStack_10 = *(undefined4 *)(param_1 + 0xb);
    uStack_c = *(undefined4 *)((longlong)param_1 + 0x5c);
    if (*(char *)(param_1 + 10) == '\0') {
      FUN_141d7ec40(*param_1,param_1[1],param_1[2],&local_18,param_1 + 3,param_1[0xc],param_1[0xd],0
                   );
    }
    else {
      FUN_141d7f120(*param_1,param_1[1],param_1[0x10],&local_18,param_1 + 3,0,0,param_1 + 0x10,
                    *(undefined4 *)(param_1 + 0xe),*(undefined4 *)((longlong)param_1 + 0x74),1);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe);
    uVar4 = (ulonglong)iVar1;
    iVar7 = *(int *)((longlong)param_1 + 0x74);
    if (iVar1 <= iVar7) {
      uVar5 = uVar4;
      if (iVar7 < iVar1) goto LAB_141d96c68;
      do {
        psVar2 = (short *)(*(longlong *)param_1[0xf] + uVar5 * 2);
        do {
          if (*psVar2 != 0) break;
          uVar4 = (ulonglong)((int)uVar4 + 1);
          uVar5 = uVar5 + 1;
          psVar2 = psVar2 + 1;
        } while ((longlong)uVar5 <= (longlong)iVar7);
LAB_141d96c68:
        uVar3 = (uint)uVar4;
        if ((int)uVar3 <= iVar7) {
          uVar4 = uVar4 & 0xffffffff;
          uVar6 = uVar3;
          if ((int)uVar3 < iVar7) {
            psVar2 = (short *)(*(longlong *)param_1[0xf] + 2 + uVar5 * 2);
            do {
              uVar6 = (uint)uVar4;
              if (*psVar2 == 0) break;
              uVar6 = uVar6 + 1;
              uVar4 = (ulonglong)uVar6;
              uVar5 = uVar5 + 1;
              psVar2 = psVar2 + 1;
            } while ((longlong)uVar5 < (longlong)iVar7);
          }
          local_18 = *(undefined4 *)(param_1 + 10);
          uStack_14 = *(undefined4 *)((longlong)param_1 + 0x54);
          uStack_10 = *(undefined4 *)(param_1 + 0xb);
          uStack_c = *(undefined4 *)((longlong)param_1 + 0x5c);
          if (*(char *)(param_1 + 10) == '\0') {
            FUN_141d7ec40(*param_1,param_1[1],param_1[2],&local_18,param_1 + 3,param_1[0xc],
                          param_1[0xd],0);
          }
          else {
            FUN_141d7f120(*param_1,param_1[1],param_1[0x10],&local_18,param_1 + 3,0,0,param_1 + 0x10
                          ,uVar3,uVar6,1);
          }
          iVar7 = *(int *)((longlong)param_1 + 0x74);
          uVar4 = (ulonglong)(uVar6 + 1);
          uVar5 = uVar5 + 1;
        }
      } while ((int)uVar4 <= iVar7);
    }
  }
  FUN_141ec9240(param_1[1],param_3);
  return;
}



// FUNCTION 141d96df0 FUN_141d96df0 body=2296 status=ok
// SIG undefined FUN_141d96df0(void)

undefined1 *
FUN_141d96df0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 *param_6,ulonglong param_7)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res20;
  undefined8 in_stack_fffffffffffffd68;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 in_stack_fffffffffffffd78;
  undefined4 uVar15;
  longlong local_268;
  longlong local_260;
  uint local_258;
  ulonglong local_250;
  uint local_248;
  uint local_244;
  longlong local_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  uint local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined1 local_198 [8];
  longlong local_190;
  int local_174;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined1 local_128 [8];
  longlong local_120;
  int local_104;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [48];
  undefined1 local_58 [48];
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
  if ((*(byte *)(param_4 + 0x8c) & 0x20) == 0) {
    return &stack0x00000000;
  }
  local_238 = *(longlong **)(param_4 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0x1a38);
  local_228 = (longlong *)0x0;
  (**(code **)(*local_238 + 0x40))(local_238,uVar1,local_b8,&local_228);
  plVar8 = local_228;
  uVar6 = (**(code **)(*local_228 + 0x1e8))(local_228);
  iVar7 = (**(code **)(*plVar8 + 0x1f8))(plVar8);
  local_244 = *(uint *)(param_3 + 0x560) >> 5 & 0xffffff01;
  if (((char)*(uint *)(param_3 + 0x560) < '\0') && ((char)local_244 == '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((uVar6 < 2) && (iVar7 != 0)) && (iVar7 = (**(code **)(*plVar8 + 0x20))(plVar8), iVar7 != 3))
  {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((!bVar3) || (cVar5 = (**(code **)(*plVar8 + 0x48))(plVar8), cVar5 == '\0')) && (!bVar4)) {
    return (undefined1 *)0x0;
  }
  local_248 = *(uint *)(param_3 + 0x560) >> 0xb & 0xffffff01;
  local_258 = *(uint *)(param_3 + 0x560) >> 4 & 0xffffff01;
  cVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
  if ((cVar5 == '\0') && ((*(uint *)(param_7 + 0x1c) >> 10 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  uVar2 = *(uint *)(param_4 + 0x8c);
  local_1a8 = local_1a8 & 0xffffff00;
  local_250 = CONCAT44(uVar2 >> 0xc,
                       uVar6 | ((uVar2 >> 0x13 & 0x80 | uVar2 & 0x100) >> 2 | uVar2 & 0x10) >> 4 |
                               uVar2 & 8) & 0x3fffffffff;
  uStack_1a0 = param_3;
  cVar5 = FUN_141b196e0(plVar8,1);
  if (((cVar5 != '\0') && (cVar5 = FUN_14259cbc0(plVar8), cVar5 == '\0')) && (!bVar3)) {
    plVar8 = (longlong *)UMaterial::GetDefaultMaterial(0);
    local_238 = (longlong *)(**(code **)(*plVar8 + 0x2a8))(plVar8,0,0);
    local_260 = 0;
    (**(code **)(*local_238 + 0x40))(local_238,uVar1,local_b0,&local_260);
  }
  if (bVar3) {
    local_240 = 0;
    (**(code **)(*local_238 + 0x40))(local_238,uVar1,local_a8,&local_240);
    uVar6 = local_244;
    plVar8 = local_238;
    FUN_141d88c30(local_198,local_240,(undefined1)local_258,local_244 & 0xff,(char)local_248,
                  &local_250,CONCAT44(uVar15,uVar1),*(undefined8 *)(param_4 + 0xa0),local_238,
                  (byte)(*(uint *)(param_4 + 0x8c) >> 3) & 1);
    local_220 = *param_6;
    local_218 = param_6[1];
    local_210 = *(undefined4 *)(param_6 + 2);
    local_208 = param_6[3];
    if (local_208 != 0) {
      LOCK();
      *(int *)(local_208 + 8) = *(int *)(local_208 + 8) + 1;
      UNLOCK();
    }
    local_200 = param_6[4];
    local_1f0 = *(undefined4 *)(param_4 + 0x90);
    local_1f8 = *(undefined4 *)(param_6 + 5);
    local_1f4 = *(undefined4 *)((longlong)param_6 + 0x2c);
    local_1ec = 0;
    FUN_141daf2c0(&local_220,param_2,*(undefined4 *)(param_2 + 0x1a38),local_174 == 0,1,(char)uVar6)
    ;
    uVar9 = FUN_141d9aaa0(local_198,local_88,*(undefined4 *)(param_2 + 0x1a38));
    FUN_141a9adc0(param_1,local_198,&local_220,uVar9);
    local_238 = (longlong *)CONCAT44(uStack_1a4,local_1a8);
    uStack_230 = (undefined4)uStack_1a0;
    uStack_22c = uStack_1a0._4_4_;
    FShadowDepthDrawingPolicy<1>::SetSharedState(local_198,param_1,&local_220,param_2,&local_238);
    local_258 = *(uint *)(param_4 + 0x80);
    local_res20 = 0;
    if (0 < (int)local_258) {
      local_240 = 0;
      do {
        lVar10 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar10 = param_4;
        }
        uVar11 = lVar10 + local_240;
        uVar12 = param_7;
        uVar14 = uVar11;
        FUN_141daccc0(local_160,param_1,local_190,param_2,param_7,uVar11,&local_220,param_3);
        uVar15 = (undefined4)(uVar12 >> 0x20);
        local_260 = local_148;
        if ((local_148 != 0) && (local_140 != 0)) {
          lVar10 = *(longlong *)(local_148 + 0x48);
          local_268 = local_190;
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          uVar12 = (ulonglong)plVar8 & 0xffffffff00000000;
          FUN_141d84710(local_260,param_1,*(undefined8 *)(lVar10 + 0x48),local_268,param_2,param_7,
                        uVar11,&local_220,uVar12);
          local_268 = local_190;
          local_260 = local_140;
          lVar10 = *(longlong *)(local_140 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          plVar8 = (longlong *)(uVar12 & 0xffffffff00000000);
          lVar13 = param_2;
          uVar14 = param_7;
          FUN_141d83e90(local_260,param_1,*(undefined8 *)(lVar10 + 0x50),local_268,param_2,param_7,
                        uVar11,&local_220,plVar8);
          uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        }
        if (local_158 != 0) {
          lVar10 = param_2;
          FUN_141dacaa0(local_158,param_1,param_7,param_3,param_2);
          uVar15 = (undefined4)((ulonglong)lVar10 >> 0x20);
        }
        lVar10 = local_150;
        if (local_150 != 0) {
          local_268 = local_190;
          local_260 = *(longlong *)(local_150 + 0x48);
          if (*(char *)(local_260 + 0x28) == '\0') {
            FUN_1419f3850(local_260);
          }
          plVar8 = (longlong *)((ulonglong)plVar8 & 0xffffffff00000000);
          lVar13 = param_2;
          uVar14 = param_7;
          FUN_141d84bb0(lVar10,param_1,*(undefined8 *)(local_260 + 0x40),local_268,param_2,param_7,
                        uVar11,&local_220,plVar8);
          uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        }
        FUN_141b315b0(local_198,param_1,param_2,param_4,CONCAT44(uVar15,local_res20),
                      uVar14 & 0xffffffffffffff00);
        local_res20 = local_res20 + 1;
        local_240 = local_240 + 0x78;
      } while (local_res20 < (int)local_258);
    }
    plVar8 = &local_208;
  }
  else {
    local_268 = 0;
    (**(code **)(*local_238 + 0x40))(local_238,uVar1,local_a0,&local_268);
    uVar6 = local_244;
    uVar12 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd68 >> 8),(char)local_248);
    plVar8 = local_238;
    FUN_141d88ee0(local_128,local_268,(undefined1)local_258,local_244 & 0xff,uVar12,&local_250,
                  CONCAT44(uVar15,uVar1),*(undefined8 *)(param_4 + 0xa0),local_238,
                  (byte)(*(uint *)(param_4 + 0x8c) >> 3) & 1);
    local_1e8 = *param_6;
    local_1e0 = param_6[1];
    local_1d8 = *(undefined4 *)(param_6 + 2);
    local_1d0 = param_6[3];
    if (local_1d0 != 0) {
      LOCK();
      *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
      UNLOCK();
    }
    local_1c8 = param_6[4];
    local_1b8 = *(undefined4 *)(param_4 + 0x90);
    local_1c0 = *(undefined4 *)(param_6 + 5);
    local_1bc = *(undefined4 *)((longlong)param_6 + 0x2c);
    local_1b4 = 0;
    FUN_141daf2c0(&local_1e8,param_2,*(undefined4 *)(param_2 + 0x1a38),local_104 == 0,
                  uVar12 & 0xffffffffffffff00,(char)uVar6);
    uVar9 = FUN_141d9aaa0(local_128,local_58,*(undefined4 *)(param_2 + 0x1a38));
    FUN_141a9adc0(param_1,local_128,&local_1e8,uVar9);
    local_98 = local_1a8;
    uStack_94 = uStack_1a4;
    uStack_90 = (undefined4)uStack_1a0;
    uStack_8c = uStack_1a0._4_4_;
    FUN_141daef50(local_128,param_1,&local_1e8,param_2,&local_98);
    iVar7 = 0;
    if (0 < *(int *)(param_4 + 0x80)) {
      do {
        lVar10 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar10 = param_4;
        }
        uVar11 = lVar10 + (longlong)iVar7 * 0x78;
        uVar12 = param_7;
        uVar14 = uVar11;
        FUN_141daccc0(local_f0,param_1,local_120,param_2,param_7,uVar11,&local_1e8,param_3);
        uVar15 = (undefined4)(uVar12 >> 0x20);
        local_268 = local_d8;
        if ((local_d8 != 0) && (local_d0 != 0)) {
          lVar10 = *(longlong *)(local_d8 + 0x48);
          local_260 = local_120;
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          uVar12 = (ulonglong)plVar8 & 0xffffffff00000000;
          FUN_141d84710(local_268,param_1,*(undefined8 *)(lVar10 + 0x48),local_260,param_2,param_7,
                        uVar11,&local_1e8,uVar12);
          local_260 = local_120;
          local_268 = local_d0;
          lVar10 = *(longlong *)(local_d0 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          plVar8 = (longlong *)(uVar12 & 0xffffffff00000000);
          lVar13 = param_2;
          uVar14 = param_7;
          FUN_141d83e90(local_268,param_1,*(undefined8 *)(lVar10 + 0x50),local_260,param_2,param_7,
                        uVar11,&local_1e8,plVar8);
          uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        }
        if (local_e8 != 0) {
          lVar10 = param_2;
          FUN_141dacaa0(local_e8,param_1,param_7,param_3,param_2);
          uVar15 = (undefined4)((ulonglong)lVar10 >> 0x20);
        }
        lVar10 = local_e0;
        if (local_e0 != 0) {
          local_268 = local_120;
          local_260 = *(longlong *)(local_e0 + 0x48);
          if (*(char *)(local_260 + 0x28) == '\0') {
            FUN_1419f3850();
          }
          plVar8 = (longlong *)((ulonglong)plVar8 & 0xffffffff00000000);
          lVar13 = param_2;
          uVar14 = param_7;
          FUN_141d84bb0(lVar10,param_1,*(undefined8 *)(local_260 + 0x40),local_268,param_2,param_7,
                        uVar11,&local_1e8,plVar8);
          uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        }
        FUN_141b315b0(local_128,param_1,param_2,param_4,CONCAT44(uVar15,iVar7),
                      uVar14 & 0xffffffffffffff00);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_4 + 0x80));
    }
    plVar8 = &local_1d0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar8);
  return (undefined1 *)0x1;
}



// FUNCTION 141d976f0 FUN_141d976f0 body=2716 status=ok
// SIG undefined FUN_141d976f0(void)

/* WARNING: Removing unreachable block (ram,0x000141d98068) */
/* WARNING: Removing unreachable block (ram,0x000141d98075) */
/* WARNING: Removing unreachable block (ram,0x000141d98081) */

void FUN_141d976f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  DWORD *pDVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong *puVar23;
  ushort *puVar24;
  undefined2 uVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong *plVar31;
  uint uVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_194;
  uint local_18c;
  uint local_188;
  undefined1 local_184;
  undefined1 local_183 [3];
  uint local_180;
  undefined4 local_17c;
  int local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140 [3];
  undefined *local_128;
  undefined1 *puStack_120;
  code *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  code *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  iVar36 = *(int *)(param_1 + 0x38);
  lVar28 = (longlong)iVar36;
  plVar27 = (longlong *)0x0;
  local_178 = 0;
  iVar22 = *(int *)(param_6 + 0x6c);
  if (iVar36 <= *(int *)(param_6 + 0x6c)) {
    iVar22 = iVar36;
  }
  if (iVar22 != 0) {
    local_17c = DAT_1464a8210;
    local_res18 = param_3;
    local_res20 = param_4;
    if (*(char *)(param_6 + 0x78) == '\0') {
      iVar36 = *(int *)(param_1 + 0x38);
      iVar14 = iVar36 / iVar22;
      plVar31 = plVar27;
      plVar17 = plVar27;
      if (0 < iVar22) {
        do {
          local_180 = (uint)((int)plVar31 < iVar36 - iVar14 * iVar22) + (int)plVar17 + iVar14;
          local_178 = local_180 - 1;
          local_168 = FUN_141d6b6f0(param_6);
          pDVar20 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          plVar18 = TlsGetValue(*pDVar20);
          if (plVar18 == (longlong *)0x0) {
            plVar26 = (longlong *)operator_new(0x18);
            plVar18 = plVar27;
            if (plVar26 != (longlong *)0x0) {
              *plVar26 = 0;
              plVar26[1] = 0;
              *(undefined4 *)(plVar26 + 2) = 0;
              plVar18 = plVar26;
            }
            TlsSetValue(*pDVar20,plVar18);
          }
          plVar26 = (longlong *)plVar18[1];
          if (plVar26 == (longlong *)0x0) {
            if (*plVar18 == 0) {
              lVar28 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar20 + 2);
              plVar18[1] = lVar28;
              if (lVar28 == 0) {
                puVar21 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar18[1] = (longlong)puVar21;
                lVar28 = 0x1f;
                do {
                  puVar2 = puVar21 + 0x20;
                  *puVar21 = puVar2;
                  lVar28 = lVar28 + -1;
                  puVar21 = puVar2;
                } while (lVar28 != 0);
                *puVar2 = 0;
              }
            }
            else {
              plVar18[1] = *plVar18;
              *plVar18 = 0;
            }
            plVar26 = (longlong *)plVar18[1];
            iVar15 = 0x20;
            *(undefined4 *)(plVar18 + 2) = 0x20;
          }
          else {
            iVar15 = (int)plVar18[2];
          }
          plVar18[1] = *plVar26;
          *(int *)(plVar18 + 2) = iVar15 + -1;
          plVar18 = (longlong *)FUN_1415914c0(local_140);
          local_d0 = *plVar18;
          *plVar18 = 0;
          *plVar26 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar26 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar26 + 0xc) = 1;
          *plVar26 = (longlong)&PTR__scalar_deleting_destructor__144e5c290;
          *(undefined1 *)(plVar26 + 0x18) = 0;
          plVar26[0x19] = local_d0;
          if (local_140[0] != 0) {
            LOCK();
            piVar1 = (int *)(local_140[0] + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          uVar4 = local_168;
          FUN_141d88b40(plVar26 + 2,param_1,local_168,*(undefined8 *)(param_6 + 8),param_6 + 0x18,
                        param_2,local_res18,local_res20,param_5,(int)plVar17,local_178,0);
          local_148 = plVar26[0x19];
          if (local_148 != 0) {
            LOCK();
            *(int *)(local_148 + 0x48) = *(int *)(local_148 + 0x48) + 1;
            UNLOCK();
          }
          FUN_141db03b0(plVar26,0,local_17c,1);
          FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_148,0xffffffff);
          if (local_148 != 0) {
            LOCK();
            piVar1 = (int *)(local_148 + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar17 = (longlong *)(ulonglong)local_180;
          uVar29 = (int)plVar31 + 1;
          plVar31 = (longlong *)(ulonglong)uVar29;
        } while ((int)uVar29 < iVar22);
      }
    }
    else {
      puStack_120 = &local_184;
      local_184 = 0;
      local_128 = &DAT_14060d670;
      local_c8 = &DAT_14060d670;
      local_180 = iVar36;
      puStack_c0 = puStack_120;
      lVar16 = FUN_1415d8310(&local_c8,&DAT_146216a38);
      plVar17 = (longlong *)operator_new(0x10,lVar16 + 0x18,1,0);
      plVar31 = plVar27;
      if (plVar17 != (longlong *)0x0) {
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar31 = plVar17;
      }
      lVar16 = plVar31[1];
      iVar14 = (int)lVar16 + iVar36;
      *(int *)(plVar31 + 1) = iVar14;
      if (*(int *)((longlong)plVar31 + 0xc) < iVar14) {
        FUN_141ad3a00(plVar31);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar31 + (longlong)(int)lVar16 * 2),0,lVar28 * 2);
      bVar12 = false;
      iVar14 = FColorVertexBuffer::GetAllocatedSize(*(undefined8 *)(param_6 + 8));
      iVar15 = FUN_14274f350(*(undefined8 *)(param_6 + 8));
      if ((((*(char *)(param_6 + 0x7a) == '\0') || (iVar14 == 0)) ||
          (*(int *)(param_1 + 0x94) != iVar14)) || (*(int *)(param_1 + 0x90) + 1 != iVar15)) {
        puStack_110 = local_183;
        local_183[0] = 0;
        local_118 = FUN_141ab5cb0;
        local_e8 = &local_res18;
        local_e0 = &local_res20;
        local_b8 = FUN_141ab5cb0;
        local_d8 = param_5;
        local_108 = &LAB_141d90cf0;
        local_a8 = &LAB_141d90cf0;
        plStack_100 = &local_f8;
        local_f8 = param_1;
        local_f0 = plVar31;
        puStack_b0 = puStack_110;
        plStack_a0 = &local_f8;
        FUN_141ac7f60(iVar36,&local_a8,&local_b8,0);
        bVar11 = true;
        bVar12 = true;
      }
      else {
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            uVar29 = *(uint *)((longlong)
                               *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)plVar17 * 4) *
                               0xe8 + 0xd8 + *(longlong *)(param_1 + 0x40));
            uVar25 = 0xffff;
            if (uVar29 < 0x10000) {
              uVar25 = (short)uVar29;
            }
            *(undefined2 *)(*plVar31 + (longlong)plVar17 * 2) = uVar25;
            plVar17 = (longlong *)((longlong)plVar17 + 1);
          } while ((longlong)plVar17 < lVar28);
        }
        bVar11 = false;
      }
      *(int *)(param_1 + 0x90) = iVar15;
      uVar29 = 0;
      *(int *)(param_1 + 0x94) = iVar14;
      puVar23 = (ulonglong *)*plVar31;
      plVar17 = (longlong *)((longlong)(int)plVar31[1] & 0x7fffffffffffffff);
      if ((ulonglong *)((longlong)(int)plVar31[1] * 2 + (longlong)puVar23) < puVar23) {
        plVar17 = plVar27;
      }
      if (plVar17 != (longlong *)0x0) {
        plVar26 = plVar27;
        plVar18 = plVar27;
        if ((longlong *)0x7 < plVar17) {
          iVar36 = 0;
          iVar15 = 0;
          iVar38 = 0;
          iVar40 = 0;
          iVar14 = 0;
          iVar37 = 0;
          iVar39 = 0;
          iVar41 = 0;
          do {
            uVar3 = *puVar23;
            auVar5._8_4_ = 0;
            auVar5._0_8_ = uVar3;
            auVar5._12_2_ = (short)(uVar3 >> 0x30);
            auVar7._8_2_ = (short)(uVar3 >> 0x20);
            auVar7._0_8_ = uVar3;
            auVar7._10_4_ = auVar5._10_4_;
            auVar9._6_8_ = 0;
            auVar9._0_6_ = auVar7._8_6_;
            plVar26 = plVar26 + 1;
            iVar36 = (uint)(ushort)uVar3 + iVar36;
            iVar15 = (int)CONCAT82(SUB148(auVar9 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar15;
            iVar38 = auVar7._8_4_ + iVar38;
            iVar40 = (auVar5._10_4_ >> 0x10) + iVar40;
            uVar3 = puVar23[1];
            auVar6._8_4_ = 0;
            auVar6._0_8_ = uVar3;
            auVar6._12_2_ = (short)(uVar3 >> 0x30);
            auVar8._8_2_ = (short)(uVar3 >> 0x20);
            auVar8._0_8_ = uVar3;
            auVar8._10_4_ = auVar6._10_4_;
            auVar10._6_8_ = 0;
            auVar10._0_6_ = auVar8._8_6_;
            puVar23 = puVar23 + 2;
            iVar14 = (uint)(ushort)uVar3 + iVar14;
            iVar37 = (int)CONCAT82(SUB148(auVar10 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar37;
            iVar39 = auVar8._8_4_ + iVar39;
            iVar41 = (auVar6._10_4_ >> 0x10) + iVar41;
          } while (plVar26 != (longlong *)((ulonglong)plVar17 & 0xfffffffffffffff8));
          plVar18 = (longlong *)
                    (ulonglong)
                    (uint)(iVar36 + iVar14 + iVar38 + iVar39 + iVar15 + iVar37 + iVar40 + iVar41);
        }
        uVar29 = (uint)plVar18;
        for (; plVar26 != plVar17; plVar26 = (longlong *)((longlong)plVar26 + 1)) {
          uVar3 = *puVar23;
          puVar23 = (ulonglong *)((longlong)puVar23 + 2);
          uVar29 = (int)plVar18 + (uint)(ushort)uVar3;
          plVar18 = (longlong *)(ulonglong)uVar29;
        }
      }
      if ((!bVar11) || (uVar29 != 0)) {
        local_188 = 0;
        if ((int)uVar29 < 2) {
          uVar29 = 1;
        }
        uVar30 = 0xfffffffe;
        local_194 = 0xfffffffe;
        iVar36 = (int)(*(int *)(param_6 + 0x74) + -1 + uVar29) / *(int *)(param_6 + 0x74);
        if (iVar22 <= iVar36) {
          iVar36 = iVar22;
        }
        iVar36 = (int)(iVar36 + -1 + uVar29) / iVar36;
        iVar22 = iVar36 + 2;
        local_178 = (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar22 / 3 + (iVar22 >> 0x1f);
        local_18c = 0xffffffff;
        plVar18 = (longlong *)0xffffffff;
        plVar26 = plVar27;
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            iVar14 = (int)plVar18;
            iVar22 = (int)plVar26;
            if (bVar11) {
              while( true ) {
                if (lVar28 <= (longlong)plVar27) goto LAB_141d97dc4;
                if (*(short *)(*plVar31 + (longlong)plVar27 * 2) != 0) break;
                plVar17 = (longlong *)(ulonglong)((int)plVar17 + 1);
                plVar27 = (longlong *)((longlong)plVar27 + 1);
              }
            }
            if (lVar28 <= (longlong)plVar27) break;
            uVar35 = (uint)plVar17;
            puVar24 = (ushort *)(*plVar31 + (longlong)plVar27 * 2);
            uVar34 = (uint)*puVar24;
            uVar29 = uVar35;
            uVar32 = uVar35;
            plVar26 = plVar17;
            plVar33 = plVar17;
            while ((int)uVar29 < (int)(local_180 + -1)) {
              uVar29 = (uint)plVar26;
              uVar32 = (uint)plVar33;
              if (iVar36 <= (int)uVar34) break;
              uVar29 = uVar29 + 1;
              plVar26 = (longlong *)(ulonglong)uVar29;
              plVar27 = (longlong *)((longlong)plVar27 + 1);
              puVar24 = puVar24 + 1;
              if ((!bVar11) || (*puVar24 != 0)) {
                uVar34 = uVar34 + *puVar24;
                plVar33 = plVar26;
              }
              uVar32 = (uint)plVar33;
            }
            if ((uVar34 == 0) && (bVar11)) {
              plVar26 = (longlong *)(ulonglong)local_188;
              plVar17 = plVar18;
            }
            else if ((int)uVar30 < iVar14) {
              plVar26 = (longlong *)(ulonglong)uVar34;
              local_194 = uVar32;
              local_18c = uVar35;
              local_188 = uVar34;
              uVar30 = uVar32;
            }
            else {
              local_170 = FUN_141d6b6f0(param_6);
              local_168 = *(undefined8 *)(param_6 + 8);
              bVar11 = bVar12;
              if ((int)uVar34 < local_178) {
                plVar18 = (longlong *)
                          TGraphTask<FCompileRayTracingPipelineStateTask>::CreateTask
                                    (local_98,0,local_17c);
                uVar4 = local_170;
                plVar17 = (longlong *)0x0;
                if (bVar12) {
                  plVar17 = plVar31;
                }
                FUN_141d88b40(*plVar18 + 0x10,param_1,local_170,local_168,param_6 + 0x18,param_2,
                              local_res18,local_res20,param_5,local_18c,uVar32,plVar17);
                lVar28 = *plVar18;
                lVar13 = plVar18[2];
                lVar16 = plVar18[1];
                local_160 = *(longlong *)(lVar28 + 200);
                if (local_160 != 0) {
                  LOCK();
                  *(int *)(local_160 + 0x48) = *(int *)(local_160 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141db03b0(lVar28,lVar16,(int)lVar13,1);
                iVar22 = local_188 + uVar34;
                if ((int)(local_188 + uVar34) < 2) {
                  iVar22 = 1;
                }
                FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_160,iVar22);
                local_188 = 0;
                local_18c = 0xffffffff;
                local_194 = 0xfffffffe;
                plVar17 = (longlong *)0xffffffff;
                plVar26 = (longlong *)0x0;
                uVar30 = local_194;
                if (local_160 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_160 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                    plVar17 = (longlong *)0xffffffff;
                  }
                }
              }
              else {
                plVar26 = (longlong *)
                          TGraphTask<FCompileRayTracingPipelineStateTask>::CreateTask
                                    (local_80,0,local_17c);
                plVar18 = (longlong *)0x0;
                if (bVar12) {
                  plVar18 = plVar31;
                }
                FUN_141d88b40(*plVar26 + 0x10,param_1,local_170,local_168,param_6 + 0x18,param_2,
                              local_res18,local_res20,param_5,local_18c,local_194,plVar18);
                lVar28 = *plVar26;
                lVar13 = plVar26[2];
                lVar16 = plVar26[1];
                local_158 = *(longlong *)(lVar28 + 200);
                if (local_158 != 0) {
                  LOCK();
                  *(int *)(local_158 + 0x48) = *(int *)(local_158 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141db03b0(lVar28,lVar16,(int)lVar13,1);
                if ((int)local_188 < 2) {
                  local_188 = 1;
                }
                FParallelCommandListSet::AddParallelCommandList
                          (param_6,local_170,&local_158,local_188);
                plVar26 = (longlong *)(ulonglong)uVar34;
                local_194 = uVar32;
                local_18c = uVar35;
                local_188 = uVar34;
                uVar30 = uVar32;
                if (local_158 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_158 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                  }
                }
              }
            }
            iVar14 = (int)plVar17;
            iVar22 = (int)plVar26;
            lVar28 = (longlong)(int)local_180;
            plVar27 = (longlong *)((longlong)plVar27 + 1);
            plVar18 = plVar17;
            plVar17 = (longlong *)(ulonglong)(uVar29 + 1);
          } while ((longlong)plVar27 < lVar28);
LAB_141d97dc4:
          if (iVar14 <= (int)uVar30) {
            uVar19 = FUN_141d6b6f0(param_6);
            uVar4 = *(undefined8 *)(param_6 + 8);
            plVar17 = (longlong *)
                      TGraphTask<FCompileRayTracingPipelineStateTask>::CreateTask
                                (local_68,0,local_17c);
            plVar27 = (longlong *)0x0;
            if (bVar12) {
              plVar27 = plVar31;
            }
            FUN_141d88b40(*plVar17 + 0x10,param_1,uVar19,uVar4,param_6 + 0x18,param_2,local_res18,
                          local_res20,param_5,local_18c,local_194,plVar27);
            lVar28 = *plVar17;
            lVar13 = plVar17[2];
            lVar16 = plVar17[1];
            local_150 = *(longlong *)(lVar28 + 200);
            if (local_150 != 0) {
              LOCK();
              *(int *)(local_150 + 0x48) = *(int *)(local_150 + 0x48) + 1;
              UNLOCK();
            }
            FUN_141db03b0(lVar28,lVar16,(int)lVar13,1);
            if (iVar22 < 2) {
              iVar22 = 1;
            }
            FParallelCommandListSet::AddParallelCommandList(param_6,uVar19,&local_150,iVar22);
            if (local_150 != 0) {
              LOCK();
              piVar1 = (int *)(local_150 + 0x48);
              iVar36 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                FGraphEvent::Recycle();
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141d98190 FUN_141d98190 body=2716 status=ok
// SIG undefined FUN_141d98190(void)

/* WARNING: Removing unreachable block (ram,0x000141d98b08) */
/* WARNING: Removing unreachable block (ram,0x000141d98b15) */
/* WARNING: Removing unreachable block (ram,0x000141d98b21) */

void FUN_141d98190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  DWORD *pDVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong *puVar23;
  ushort *puVar24;
  undefined2 uVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong *plVar31;
  uint uVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_194;
  uint local_18c;
  uint local_188;
  undefined1 local_184;
  undefined1 local_183 [3];
  uint local_180;
  undefined4 local_17c;
  int local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140 [3];
  undefined *local_128;
  undefined1 *puStack_120;
  code *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  code *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  iVar36 = *(int *)(param_1 + 0x38);
  lVar28 = (longlong)iVar36;
  plVar27 = (longlong *)0x0;
  local_178 = 0;
  iVar22 = *(int *)(param_6 + 0x6c);
  if (iVar36 <= *(int *)(param_6 + 0x6c)) {
    iVar22 = iVar36;
  }
  if (iVar22 != 0) {
    local_17c = DAT_1464a8210;
    local_res18 = param_3;
    local_res20 = param_4;
    if (*(char *)(param_6 + 0x78) == '\0') {
      iVar36 = *(int *)(param_1 + 0x38);
      iVar14 = iVar36 / iVar22;
      plVar31 = plVar27;
      plVar17 = plVar27;
      if (0 < iVar22) {
        do {
          local_180 = (uint)((int)plVar31 < iVar36 - iVar14 * iVar22) + (int)plVar17 + iVar14;
          local_178 = local_180 - 1;
          local_168 = FUN_141d6b6f0(param_6);
          pDVar20 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          plVar18 = TlsGetValue(*pDVar20);
          if (plVar18 == (longlong *)0x0) {
            plVar26 = (longlong *)operator_new(0x18);
            plVar18 = plVar27;
            if (plVar26 != (longlong *)0x0) {
              *plVar26 = 0;
              plVar26[1] = 0;
              *(undefined4 *)(plVar26 + 2) = 0;
              plVar18 = plVar26;
            }
            TlsSetValue(*pDVar20,plVar18);
          }
          plVar26 = (longlong *)plVar18[1];
          if (plVar26 == (longlong *)0x0) {
            if (*plVar18 == 0) {
              lVar28 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar20 + 2);
              plVar18[1] = lVar28;
              if (lVar28 == 0) {
                puVar21 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar18[1] = (longlong)puVar21;
                lVar28 = 0x1f;
                do {
                  puVar2 = puVar21 + 0x20;
                  *puVar21 = puVar2;
                  lVar28 = lVar28 + -1;
                  puVar21 = puVar2;
                } while (lVar28 != 0);
                *puVar2 = 0;
              }
            }
            else {
              plVar18[1] = *plVar18;
              *plVar18 = 0;
            }
            plVar26 = (longlong *)plVar18[1];
            iVar15 = 0x20;
            *(undefined4 *)(plVar18 + 2) = 0x20;
          }
          else {
            iVar15 = (int)plVar18[2];
          }
          plVar18[1] = *plVar26;
          *(int *)(plVar18 + 2) = iVar15 + -1;
          plVar18 = (longlong *)FUN_1415914c0(local_140);
          local_d0 = *plVar18;
          *plVar18 = 0;
          *plVar26 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar26 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar26 + 0xc) = 1;
          *plVar26 = (longlong)&PTR__scalar_deleting_destructor__144e5c280;
          *(undefined1 *)(plVar26 + 0x18) = 0;
          plVar26[0x19] = local_d0;
          if (local_140[0] != 0) {
            LOCK();
            piVar1 = (int *)(local_140[0] + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          uVar4 = local_168;
          FUN_141d88b40(plVar26 + 2,param_1,local_168,*(undefined8 *)(param_6 + 8),param_6 + 0x18,
                        param_2,local_res18,local_res20,param_5,(int)plVar17,local_178,0);
          local_148 = plVar26[0x19];
          if (local_148 != 0) {
            LOCK();
            *(int *)(local_148 + 0x48) = *(int *)(local_148 + 0x48) + 1;
            UNLOCK();
          }
          FUN_141db03b0(plVar26,0,local_17c,1);
          FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_148,0xffffffff);
          if (local_148 != 0) {
            LOCK();
            piVar1 = (int *)(local_148 + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar17 = (longlong *)(ulonglong)local_180;
          uVar29 = (int)plVar31 + 1;
          plVar31 = (longlong *)(ulonglong)uVar29;
        } while ((int)uVar29 < iVar22);
      }
    }
    else {
      puStack_120 = &local_184;
      local_184 = 0;
      local_128 = &DAT_14060d670;
      local_c8 = &DAT_14060d670;
      local_180 = iVar36;
      puStack_c0 = puStack_120;
      lVar16 = FUN_1415d8310(&local_c8,&DAT_146216a38);
      plVar17 = (longlong *)operator_new(0x10,lVar16 + 0x18,1,0);
      plVar31 = plVar27;
      if (plVar17 != (longlong *)0x0) {
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar31 = plVar17;
      }
      lVar16 = plVar31[1];
      iVar14 = (int)lVar16 + iVar36;
      *(int *)(plVar31 + 1) = iVar14;
      if (*(int *)((longlong)plVar31 + 0xc) < iVar14) {
        FUN_141ad3a00(plVar31);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar31 + (longlong)(int)lVar16 * 2),0,lVar28 * 2);
      bVar12 = false;
      iVar14 = FColorVertexBuffer::GetAllocatedSize(*(undefined8 *)(param_6 + 8));
      iVar15 = FUN_14274f350(*(undefined8 *)(param_6 + 8));
      if ((((*(char *)(param_6 + 0x7a) == '\0') || (iVar14 == 0)) ||
          (*(int *)(param_1 + 0x94) != iVar14)) || (*(int *)(param_1 + 0x90) + 1 != iVar15)) {
        puStack_110 = local_183;
        local_183[0] = 0;
        local_118 = FUN_141ab5cb0;
        local_e8 = &local_res18;
        local_e0 = &local_res20;
        local_b8 = FUN_141ab5cb0;
        local_d8 = param_5;
        local_108 = &LAB_141d90cf0;
        local_a8 = &LAB_141d90cf0;
        plStack_100 = &local_f8;
        local_f8 = param_1;
        local_f0 = plVar31;
        puStack_b0 = puStack_110;
        plStack_a0 = &local_f8;
        FUN_141ac7f60(iVar36,&local_a8,&local_b8,0);
        bVar11 = true;
        bVar12 = true;
      }
      else {
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            uVar29 = *(uint *)((longlong)
                               *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)plVar17 * 4) *
                               0xe8 + 0xd8 + *(longlong *)(param_1 + 0x40));
            uVar25 = 0xffff;
            if (uVar29 < 0x10000) {
              uVar25 = (short)uVar29;
            }
            *(undefined2 *)(*plVar31 + (longlong)plVar17 * 2) = uVar25;
            plVar17 = (longlong *)((longlong)plVar17 + 1);
          } while ((longlong)plVar17 < lVar28);
        }
        bVar11 = false;
      }
      *(int *)(param_1 + 0x90) = iVar15;
      uVar29 = 0;
      *(int *)(param_1 + 0x94) = iVar14;
      puVar23 = (ulonglong *)*plVar31;
      plVar17 = (longlong *)((longlong)(int)plVar31[1] & 0x7fffffffffffffff);
      if ((ulonglong *)((longlong)(int)plVar31[1] * 2 + (longlong)puVar23) < puVar23) {
        plVar17 = plVar27;
      }
      if (plVar17 != (longlong *)0x0) {
        plVar26 = plVar27;
        plVar18 = plVar27;
        if ((longlong *)0x7 < plVar17) {
          iVar36 = 0;
          iVar15 = 0;
          iVar38 = 0;
          iVar40 = 0;
          iVar14 = 0;
          iVar37 = 0;
          iVar39 = 0;
          iVar41 = 0;
          do {
            uVar3 = *puVar23;
            auVar5._8_4_ = 0;
            auVar5._0_8_ = uVar3;
            auVar5._12_2_ = (short)(uVar3 >> 0x30);
            auVar7._8_2_ = (short)(uVar3 >> 0x20);
            auVar7._0_8_ = uVar3;
            auVar7._10_4_ = auVar5._10_4_;
            auVar9._6_8_ = 0;
            auVar9._0_6_ = auVar7._8_6_;
            plVar26 = plVar26 + 1;
            iVar36 = (uint)(ushort)uVar3 + iVar36;
            iVar15 = (int)CONCAT82(SUB148(auVar9 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar15;
            iVar38 = auVar7._8_4_ + iVar38;
            iVar40 = (auVar5._10_4_ >> 0x10) + iVar40;
            uVar3 = puVar23[1];
            auVar6._8_4_ = 0;
            auVar6._0_8_ = uVar3;
            auVar6._12_2_ = (short)(uVar3 >> 0x30);
            auVar8._8_2_ = (short)(uVar3 >> 0x20);
            auVar8._0_8_ = uVar3;
            auVar8._10_4_ = auVar6._10_4_;
            auVar10._6_8_ = 0;
            auVar10._0_6_ = auVar8._8_6_;
            puVar23 = puVar23 + 2;
            iVar14 = (uint)(ushort)uVar3 + iVar14;
            iVar37 = (int)CONCAT82(SUB148(auVar10 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar37;
            iVar39 = auVar8._8_4_ + iVar39;
            iVar41 = (auVar6._10_4_ >> 0x10) + iVar41;
          } while (plVar26 != (longlong *)((ulonglong)plVar17 & 0xfffffffffffffff8));
          plVar18 = (longlong *)
                    (ulonglong)
                    (uint)(iVar36 + iVar14 + iVar38 + iVar39 + iVar15 + iVar37 + iVar40 + iVar41);
        }
        uVar29 = (uint)plVar18;
        for (; plVar26 != plVar17; plVar26 = (longlong *)((longlong)plVar26 + 1)) {
          uVar3 = *puVar23;
          puVar23 = (ulonglong *)((longlong)puVar23 + 2);
          uVar29 = (int)plVar18 + (uint)(ushort)uVar3;
          plVar18 = (longlong *)(ulonglong)uVar29;
        }
      }
      if ((!bVar11) || (uVar29 != 0)) {
        local_188 = 0;
        if ((int)uVar29 < 2) {
          uVar29 = 1;
        }
        uVar30 = 0xfffffffe;
        local_194 = 0xfffffffe;
        iVar36 = (int)(*(int *)(param_6 + 0x74) + -1 + uVar29) / *(int *)(param_6 + 0x74);
        if (iVar22 <= iVar36) {
          iVar36 = iVar22;
        }
        iVar36 = (int)(iVar36 + -1 + uVar29) / iVar36;
        iVar22 = iVar36 + 2;
        local_178 = (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar22 / 3 + (iVar22 >> 0x1f);
        local_18c = 0xffffffff;
        plVar18 = (longlong *)0xffffffff;
        plVar26 = plVar27;
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            iVar14 = (int)plVar18;
            iVar22 = (int)plVar26;
            if (bVar11) {
              while( true ) {
                if (lVar28 <= (longlong)plVar27) goto LAB_141d98864;
                if (*(short *)(*plVar31 + (longlong)plVar27 * 2) != 0) break;
                plVar17 = (longlong *)(ulonglong)((int)plVar17 + 1);
                plVar27 = (longlong *)((longlong)plVar27 + 1);
              }
            }
            if (lVar28 <= (longlong)plVar27) break;
            uVar35 = (uint)plVar17;
            puVar24 = (ushort *)(*plVar31 + (longlong)plVar27 * 2);
            uVar34 = (uint)*puVar24;
            uVar29 = uVar35;
            uVar32 = uVar35;
            plVar26 = plVar17;
            plVar33 = plVar17;
            while ((int)uVar29 < (int)(local_180 + -1)) {
              uVar29 = (uint)plVar26;
              uVar32 = (uint)plVar33;
              if (iVar36 <= (int)uVar34) break;
              uVar29 = uVar29 + 1;
              plVar26 = (longlong *)(ulonglong)uVar29;
              plVar27 = (longlong *)((longlong)plVar27 + 1);
              puVar24 = puVar24 + 1;
              if ((!bVar11) || (*puVar24 != 0)) {
                uVar34 = uVar34 + *puVar24;
                plVar33 = plVar26;
              }
              uVar32 = (uint)plVar33;
            }
            if ((uVar34 == 0) && (bVar11)) {
              plVar26 = (longlong *)(ulonglong)local_188;
              plVar17 = plVar18;
            }
            else if ((int)uVar30 < iVar14) {
              plVar26 = (longlong *)(ulonglong)uVar34;
              local_194 = uVar32;
              local_18c = uVar35;
              local_188 = uVar34;
              uVar30 = uVar32;
            }
            else {
              local_170 = FUN_141d6b6f0(param_6);
              local_168 = *(undefined8 *)(param_6 + 8);
              bVar11 = bVar12;
              if ((int)uVar34 < local_178) {
                plVar18 = (longlong *)
                          TGraphTask<FCompileRayTracingPipelineStateTask>::CreateTask
                                    (local_98,0,local_17c);
                uVar4 = local_170;
                plVar17 = (longlong *)0x0;
                if (bVar12) {
                  plVar17 = plVar31;
                }
                FUN_141d88b40(*plVar18 + 0x10,param_1,local_170,local_168,param_6 + 0x18,param_2,
                              local_res18,local_res20,param_5,local_18c,uVar32,plVar17);
                lVar28 = *plVar18;
                lVar13 = plVar18[2];
                lVar16 = plVar18[1];
                local_160 = *(longlong *)(lVar28 + 200);
                if (local_160 != 0) {
                  LOCK();
                  *(int *)(local_160 + 0x48) = *(int *)(local_160 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141db03b0(lVar28,lVar16,(int)lVar13,1);
                iVar22 = local_188 + uVar34;
                if ((int)(local_188 + uVar34) < 2) {
                  iVar22 = 1;
                }
                FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_160,iVar22);
                local_188 = 0;
                local_18c = 0xffffffff;
                local_194 = 0xfffffffe;
                plVar17 = (longlong *)0xffffffff;
                plVar26 = (longlong *)0x0;
                uVar30 = local_194;
                if (local_160 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_160 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                    plVar17 = (longlong *)0xffffffff;
                  }
                }
              }
              else {
                plVar26 = (longlong *)
                          TGraphTask<FCompileRayTracingPipelineStateTask>::CreateTask
                                    (local_80,0,local_17c);
                plVar18 = (longlong *)0x0;
                if (bVar12) {
                  plVar18 = plVar31;
                }
                FUN_141d88b40(*plVar26 + 0x10,param_1,local_170,local_168,param_6 + 0x18,param_2,
                              local_res18,local_res20,param_5,local_18c,local_194,plVar18);
                lVar28 = *plVar26;
                lVar13 = plVar26[2];
                lVar16 = plVar26[1];
                local_158 = *(longlong *)(lVar28 + 200);
                if (local_158 != 0) {
                  LOCK();
                  *(int *)(local_158 + 0x48) = *(int *)(local_158 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141db03b0(lVar28,lVar16,(int)lVar13,1);
                if ((int)local_188 < 2) {
                  local_188 = 1;
                }
                FParallelCommandListSet::AddParallelCommandList
                          (param_6,local_170,&local_158,local_188);
                plVar26 = (longlong *)(ulonglong)uVar34;
                local_194 = uVar32;
                local_18c = uVar35;
                local_188 = uVar34;
                uVar30 = uVar32;
                if (local_158 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_158 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                  }
                }
              }
            }
            iVar14 = (int)plVar17;
            iVar22 = (int)plVar26;
            lVar28 = (longlong)(int)local_180;
            plVar27 = (longlong *)((longlong)plVar27 + 1);
            plVar18 = plVar17;
            plVar17 = (longlong *)(ulonglong)(uVar29 + 1);
          } while ((longlong)plVar27 < lVar28);
LAB_141d98864:
          if (iVar14 <= (int)uVar30) {
            uVar19 = FUN_141d6b6f0(param_6);
            uVar4 = *(undefined8 *)(param_6 + 8);
            plVar17 = (longlong *)
                      TGraphTask<FCompileRayTracingPipelineStateTask>::CreateTask
                                (local_68,0,local_17c);
            plVar27 = (longlong *)0x0;
            if (bVar12) {
              plVar27 = plVar31;
            }
            FUN_141d88b40(*plVar17 + 0x10,param_1,uVar19,uVar4,param_6 + 0x18,param_2,local_res18,
                          local_res20,param_5,local_18c,local_194,plVar27);
            lVar28 = *plVar17;
            lVar13 = plVar17[2];
            lVar16 = plVar17[1];
            local_150 = *(longlong *)(lVar28 + 200);
            if (local_150 != 0) {
              LOCK();
              *(int *)(local_150 + 0x48) = *(int *)(local_150 + 0x48) + 1;
              UNLOCK();
            }
            FUN_141db03b0(lVar28,lVar16,(int)lVar13,1);
            if (iVar22 < 2) {
              iVar22 = 1;
            }
            FParallelCommandListSet::AddParallelCommandList(param_6,uVar19,&local_150,iVar22);
            if (local_150 != 0) {
              LOCK();
              piVar1 = (int *)(local_150 + 0x48);
              iVar36 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                FGraphEvent::Recycle();
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141d98c30 ExecuteAndDestruct body=28 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FRHICommandSetLocalUniformBuffer<FRHIVertexShader_*>_>::ExecuteAndDestruct
               (longlong param_1)

{
  FRHICommandSetLocalUniformBuffer<FRHIVertexShader_*>::Execute();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  return;
}



// FUNCTION 141d98c50 FUN_141d98c50 body=28 status=ok
// SIG undefined FUN_141d98c50(void)

void FUN_141d98c50(longlong param_1)

{
  FUN_141ec2830();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  return;
}



// FUNCTION 141d98c70 ExecuteAndDestruct body=28 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FRHICommandSetLocalUniformBuffer<FRHIPixelShader>,FRHICommandSetLocalUniformBufferString>
     ::ExecuteAndDestruct(longlong param_1)

{
  FRHICommandSetLocalUniformBuffer<FRHIPixelShader>::Execute();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  return;
}



// FUNCTION 141d98c90 ExecuteAndDestruct body=28 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FRHICommandSetLocalUniformBuffer<FRHIPixelShader>,FRHICommandSetLocalUniformBufferString>
     ::ExecuteAndDestruct(longlong param_1)

{
  FRHICommandSetLocalUniformBuffer<FRHIPixelShader>::Execute();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  return;
}



// FUNCTION 141d98cb0 FUN_141d98cb0 body=277 status=ok
// SIG undefined FUN_141d98cb0(void)

void FUN_141d98cb0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d96a10(param_1 + 2,param_3,param_1 + 0x19);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_141591a60(param_1[0x19],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144e5c290;
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



// FUNCTION 141d98dd0 FUN_141d98dd0 body=277 status=ok
// SIG undefined FUN_141d98dd0(void)

void FUN_141d98dd0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d96c00(param_1 + 2,param_3,param_1 + 0x19);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_141591a60(param_1[0x19],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144e5c280;
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



// FUNCTION 141d98ef0 ExecuteTask body=295 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FDrawShadowMeshElementsThreadTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_141d7e630(param_1[3],param_1[4],param_1 + 5,param_1[2]);
  }
  else {
    FUN_141d7e1e0();
  }
  FUN_141ec9240(param_1[3],param_1 + 0xe);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_141591a60(param_1[0xe],param_2,param_3);
  *param_1 = &PTR_FUN_144e5bc20;
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



// FUNCTION 141d99020 FUN_141d99020 body=490 status=ok
// SIG undefined FUN_141d99020(void)

void FUN_141d99020(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  
  iVar11 = *(int *)(param_1 + 3);
  uVar12 = (ulonglong)iVar11;
  plVar13 = (longlong *)0x0;
  if (iVar11 < *(int *)((longlong)param_1 + 0x1c) + iVar11) {
    bVar4 = (byte)iVar11 & 0x1f;
    uVar14 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    lVar15 = uVar12 * 8;
    do {
      iVar11 = (int)uVar12;
      if ((-1 < iVar11) && (lVar10 = param_1[2], iVar11 < *(int *)(lVar10 + 0x27d0))) {
        iVar5 = iVar11;
        if (iVar11 < 0) {
          iVar5 = iVar11 + 0x1f;
        }
        lVar3 = (longlong)(iVar5 >> 5) * 4;
        lVar6 = *(longlong *)(lVar10 + 0x27e8);
        if (*(longlong *)(lVar10 + 0x27e8) == 0) {
          lVar6 = lVar10 + 0x27d8;
        }
        if ((*(uint *)(lVar6 + lVar3) & uVar14) == 0) {
          lVar6 = *(longlong *)(lVar15 + *(longlong *)(lVar10 + 0x27c8));
          iVar5 = *(int *)(lVar6 + 0xe8);
          plVar8 = plVar13;
          if ((-1 < iVar5) && (iVar5 < *(int *)(lVar10 + 0x1a50))) {
            plVar8 = *(longlong **)(*(longlong *)(lVar10 + 0x1a48) + (longlong)iVar5 * 8);
          }
          plVar9 = *(longlong **)(lVar6 + 8);
          (**(code **)(*plVar9 + 0x148))(plVar9,lVar10,plVar8);
          lVar10 = *(longlong *)(param_1[2] + 0x27e8);
          if (lVar10 == 0) {
            lVar10 = param_1[2] + 0x27d8;
          }
          puVar2 = (uint *)(lVar10 + lVar3);
          *puVar2 = *puVar2 | uVar14;
        }
      }
      uVar12 = (ulonglong)(iVar11 + 1U);
      lVar15 = lVar15 + 8;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
    } while ((int)(iVar11 + 1U) < *(int *)((longlong)param_1 + 0x1c) + *(int *)(param_1 + 3));
  }
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_141591a60(param_1[5],param_2,param_3);
  *param_1 = &PTR_FUN_144e5bba8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar8 = TlsGetValue(*pDVar7);
  if (plVar8 == (longlong *)0x0) {
    plVar9 = (longlong *)operator_new(0x18);
    plVar8 = plVar13;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      *(undefined4 *)(plVar9 + 2) = 0;
      plVar8 = plVar9;
    }
    TlsSetValue(*pDVar7,plVar8);
  }
  if ((int)plVar8[2] < 0x20) {
    plVar13 = (longlong *)plVar8[1];
  }
  else {
    if (*plVar8 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar7 + 2);
    }
    *plVar8 = plVar8[1];
    plVar8[1] = 0;
    *(undefined4 *)(plVar8 + 2) = 0;
  }
  *param_1 = plVar13;
  *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  plVar8[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d99210 ExecuteTask body=297 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FRenderDepthDynamicThreadTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141da6370(param_1[2],param_1[3],param_1[0xc],param_1[4],param_1 + 5);
  FUN_141ec9240(param_1[3],param_1 + 0xe);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_141591a60(param_1[0xe],param_2,param_3);
  *param_1 = &PTR_FUN_144e5bc30;
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



// FUNCTION 141d99340 ExecuteTask body=254 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FetchVisibilityForPrimitivesTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d812b0(param_1[2]);
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_144e5bb60;
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



// FUNCTION 141d99440 FUN_141d99440 body=4311 status=ok
// SIG undefined FUN_141d99440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_141d99440(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 *puVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  int *piVar28;
  int *piVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint uVar34;
  undefined1 auStack_498 [32];
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  uint local_474;
  int local_470;
  uint local_46c;
  uint local_468;
  int local_460;
  int local_45c;
  ulonglong local_458;
  longlong *local_450;
  longlong local_448;
  uint local_440;
  uint local_43c;
  uint *local_438;
  uint local_430;
  undefined8 local_42c;
  int local_420;
  uint local_41c;
  uint *local_418;
  uint local_410;
  undefined8 local_40c;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  int local_3c0;
  undefined1 local_3bc [4];
  int local_3b8;
  undefined **local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  undefined8 *local_398;
  undefined8 uStack_390;
  longlong local_388;
  longlong local_380;
  undefined ***local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined1 local_368;
  undefined1 local_367;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 *local_348;
  int local_340;
  longlong local_338;
  longlong local_328;
  longlong local_320 [4];
  longlong *local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong local_298 [3];
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong local_258 [3];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong local_218 [3];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8 [4];
  undefined1 local_1a8 [16];
  undefined8 local_198 [7];
  int local_160 [70];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  local_45c = 0;
  lVar19 = *(longlong *)(param_2 + 0x18);
  local_474 = 0;
  DAT_146a9fac4 = 1 - DAT_146a9fac4;
  local_478 = param_3;
  local_476 = param_4;
  local_448 = param_2;
  local_3f0 = lVar19;
  local_3e8 = param_1;
  iVar7 = FUN_141d69970(*(undefined4 *)(param_1 + 8));
  iVar8 = *(int *)(lVar19 + 0x25c);
  local_450 = (longlong *)(lVar19 + 0x1808);
  local_470 = iVar8;
  local_460 = iVar7;
  if ((DAT_146a9ecd8 != 0) && (DAT_146ab62f2 != '\0')) {
    uVar34 = 0;
    local_1c8[0] = 0;
    local_1c8[1] = 0;
    local_218[2] = 0;
    local_1c8[2] = 0;
    local_1c8[3] = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_258[2] = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218[0] = 0;
    local_218[1] = 0;
    local_298[2] = 0;
    local_280 = 0;
    local_278 = 0;
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258[0] = 0;
    local_258[1] = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_298[0] = 0;
    local_298[1] = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a9fb50) &&
       (_Init_thread_header(&DAT_146a9fb50), DAT_146a9fb50 == -1)) {
      _DAT_146a9fad0 = 0;
      _DAT_146a9fad8 = 0;
      _DAT_146a9fae0 = 0;
      _DAT_146a9fae8 = 0;
      _DAT_146a9faf0 = 0;
      _DAT_146a9faf8 = 0;
      _DAT_146a9fb00 = 0;
      _DAT_146a9fb08 = 0;
      _DAT_146a9fb10 = 0;
      _DAT_146a9fb18 = 0;
      _DAT_146a9fb20 = 0;
      _DAT_146a9fb28 = 0;
      DAT_146a9fb30 = 0;
      _DAT_146a9fb38 = 0;
      DAT_146a9fb40 = 0;
      _DAT_146a9fb48 = 0;
      atexit(`FetchVisibilityForPrimitives'::`5'::
             _dynamic_atexit_destructor_for__FrameSubIsOccluded__);
      _Init_thread_footer(&DAT_146a9fb50);
    }
    local_46c = 0;
    puVar1 = (uint *)(param_2 + 0x1ac0);
    local_2f0 = 0;
    iVar7 = *(int *)(param_2 + 0x1ad8);
    local_2e8 = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_440 = 0;
    local_43c = 1;
    uVar30 = 0;
    local_42c = 0;
    iVar8 = 0;
    if (iVar7 != 0) {
      puVar18 = *(uint **)(param_2 + 0x1ad0);
      if (*(uint **)(param_2 + 0x1ad0) == (uint *)0x0) {
        puVar18 = puVar1;
      }
      uVar32 = *puVar18;
      uVar5 = uVar34;
      while (uVar32 == 0) {
        uVar30 = uVar30 + 0x20;
        local_440 = uVar5 + 1;
        local_42c = (ulonglong)uVar30 << 0x20;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar5) {
          local_42c = CONCAT44(uVar30,iVar7);
          iVar8 = iVar7;
          goto LAB_141d99709;
        }
        uVar32 = puVar18[(longlong)(int)uVar5 + 1];
        uVar5 = local_440;
      }
      local_43c = -uVar32 & uVar32;
      local_3c0 = 0x1f;
      if (local_43c != 0) {
        for (; local_43c >> local_3c0 == 0; local_3c0 = local_3c0 + -1) {
        }
      }
      if (local_43c == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - local_3c0;
      }
      iVar8 = (uVar30 - iVar8) + 0x1f;
      if (iVar7 < iVar8) {
        iVar8 = iVar7;
      }
      uVar24 = (ulonglong)local_42c >> 0x20;
      local_42c = CONCAT44((int)uVar24,iVar8);
      local_440 = uVar5;
    }
LAB_141d99709:
    local_430 = 0xffffffff;
    iVar25 = 0;
    uVar30 = 0xffffffff;
    uVar32 = local_46c;
    local_438 = puVar1;
    if (iVar8 < iVar7) {
      do {
        local_430 = uVar30 & ~local_43c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_440);
        uVar34 = uVar34 + 1;
        uVar30 = local_430;
        uVar32 = uVar34;
      } while ((int)local_42c < (int)local_438[6]);
    }
    local_46c = uVar32;
    iVar7 = *(int *)(param_2 + 0x1ad8);
    iVar23 = 0;
    local_420 = 0;
    local_40c = 0;
    local_41c = 1;
    iVar31 = (int)(((int)local_46c >> 0x1f & 3U) + local_46c) >> 2;
    uVar34 = 0;
    iVar8 = iVar25;
    if (iVar7 != 0) {
      puVar18 = *(uint **)(local_448 + 0x1ad0);
      if (*(uint **)(local_448 + 0x1ad0) == (uint *)0x0) {
        puVar18 = puVar1;
      }
      uVar30 = *puVar18;
      iVar4 = local_420;
      while (uVar30 == 0) {
        uVar34 = uVar34 + 0x20;
        local_420 = iVar4 + 1;
        local_40c = (ulonglong)uVar34 << 0x20;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
          local_40c = CONCAT44(uVar34,iVar7);
          iVar8 = iVar7;
          goto LAB_141d99828;
        }
        uVar30 = puVar18[(longlong)iVar4 + 1];
        iVar4 = local_420;
      }
      local_41c = -uVar30 & uVar30;
      local_3b8 = 0x1f;
      if (local_41c != 0) {
        for (; local_41c >> local_3b8 == 0; local_3b8 = local_3b8 + -1) {
        }
      }
      if (local_41c == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - local_3b8;
      }
      iVar8 = (uVar34 - iVar8) + 0x1f;
      if (iVar7 < iVar8) {
        iVar8 = iVar7;
      }
      uVar24 = (ulonglong)local_40c >> 0x20;
      local_40c = CONCAT44((int)uVar24,iVar8);
      local_420 = iVar4;
    }
LAB_141d99828:
    local_410 = 0xffffffff;
    lVar19 = 0;
    local_418 = puVar1;
    if (iVar8 < iVar7) {
      iVar23 = iVar25;
      do {
        if (0xb < lVar19) break;
        iVar25 = iVar25 + 1;
        if (iVar25 == iVar31) {
          *(int *)((longlong)&local_2f0 + lVar19) = iVar23;
          iVar23 = iVar8 + 1;
          *(int *)((longlong)&local_2e0 + lVar19) = iVar25;
          lVar19 = lVar19 + 4;
          iVar25 = 0;
        }
        local_410 = local_410 & ~local_41c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_420);
        iVar8 = (int)local_40c;
      } while ((int)local_40c < (int)local_418[6]);
    }
    local_2e8 = CONCAT44(iVar23,(undefined4)local_2e8);
    plVar14 = local_1c8;
    puVar33 = local_198;
    local_2d8 = CONCAT44(local_46c + iVar31 * -3,(undefined4)local_2d8);
    local_3fc = *(int *)(local_448 + 0x1ad8);
    local_3f8 = (int)(local_3fc + (local_3fc >> 0x1f & 3U)) >> 2;
    uVar13 = 0;
    local_300 = (longlong *)0x0;
    local_2f8 = 0;
    local_468 = 0;
    local_3d8 = 0;
    local_46c = 0;
    local_458 = 0;
    uVar24 = uVar13;
    uVar27 = uVar13;
    do {
      lVar19 = local_448;
      uVar6 = local_458;
      if (local_3fc <= (int)uVar13) break;
      local_400 = local_3fc - (int)uVar13;
      iVar8 = (int)uVar24;
      if (iVar8 != 3) {
        local_400 = local_3f8;
      }
      lVar20 = (DAT_146a9fac4 + local_3d8) * 0x10;
      plVar16 = (longlong *)0x0;
      *(undefined4 *)(&DAT_146a9fad8 + lVar20) = 0;
      if (0x7fffffff < *(uint *)(&DAT_146a9fadc + lVar20)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&DAT_146a9fad0 + lVar20);
      }
      puVar33[-2] = local_3e8;
      *(undefined4 *)(puVar33 + 1) = *(undefined4 *)((longlong)&local_2f0 + uVar6);
      *(undefined4 *)((longlong)puVar33 + 0xc) = *(undefined4 *)((longlong)&local_2e0 + uVar6);
      *(undefined1 *)(puVar33 + 2) = local_478;
      *(undefined1 *)((longlong)puVar33 + 0x11) = local_476;
      puVar33[-1] = lVar19;
      lVar19 = (longlong)iVar8;
      *puVar33 = 0;
      puVar33[8] = &DAT_146a9fad0 + lVar20;
      puVar33[3] = local_218 + lVar19 * 2 + 2;
      puVar33[4] = local_258 + lVar19 * 2 + 2;
      puVar33[5] = local_298 + lVar19 * 2 + 2;
      puVar33[6] = &local_2c8 + lVar19 * 2;
      pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar11 = TlsGetValue(*pDVar10);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = 0;
          plVar11[1] = 0;
          *(undefined4 *)(plVar11 + 2) = 0;
          plVar16 = plVar11;
        }
        TlsSetValue(*pDVar10,plVar16);
        plVar11 = plVar16;
      }
      plVar16 = (longlong *)plVar11[1];
      if (plVar16 == (longlong *)0x0) {
        if (*plVar11 == 0) {
          lVar20 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
          plVar11[1] = lVar20;
          if (lVar20 == 0) {
            puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar11[1] = (longlong)puVar12;
            lVar20 = 0x1f;
            do {
              puVar2 = puVar12 + 0x20;
              *puVar12 = puVar2;
              lVar20 = lVar20 + -1;
              puVar12 = puVar2;
            } while (lVar20 != 0);
            *puVar2 = 0;
          }
        }
        else {
          plVar11[1] = *plVar11;
          *plVar11 = 0;
        }
        plVar16 = (longlong *)plVar11[1];
        iVar7 = 0x20;
        *(undefined4 *)(plVar11 + 2) = 0x20;
      }
      else {
        iVar7 = (int)plVar11[2];
      }
      uVar34 = local_474;
      plVar11[1] = *plVar16;
      *(int *)(plVar11 + 2) = iVar7 + -1;
      plVar11 = (longlong *)FUN_1415914c0(&local_3d0);
      local_474 = uVar34 & 0xfffffffd;
      local_328 = *plVar11;
      *plVar11 = 0;
      *plVar16 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar16 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
      *plVar16 = (longlong)&PTR_FUN_144e5bb60;
      *(undefined1 *)(plVar16 + 3) = 0;
      plVar16[4] = local_328;
      if (local_3d0 != 0) {
        LOCK();
        piVar29 = (int *)(local_3d0 + 0x48);
        iVar7 = *piVar29;
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if (((uVar34 & 1) != 0) && (local_474 = uVar34 & 0xfffffffc, local_3c8 != 0)) {
        LOCK();
        piVar29 = (int *)(local_3c8 + 0x48);
        iVar7 = *piVar29;
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FGraphEvent::Recycle(local_3c8);
        }
      }
      plVar16[2] = (longlong)(local_1a8 + lVar19 * 0x58);
      lVar19 = plVar16[4];
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 0x48) = *(int *)(lVar19 + 0x48) + 1;
        UNLOCK();
      }
      local_3e0 = lVar19;
      FUN_141db0940(plVar16,0,0xff,1);
      if (plVar14 == &local_3e0) {
        if (lVar19 != 0) {
          LOCK();
          piVar29 = (int *)(lVar19 + 0x48);
          iVar7 = *piVar29;
          *piVar29 = *piVar29 + -1;
          UNLOCK();
          lVar20 = lVar19;
          goto joined_r0x000141d99b9d;
        }
      }
      else {
        lVar20 = *plVar14;
        *plVar14 = lVar19;
        local_3e0 = 0;
        if (lVar20 != 0) {
          LOCK();
          piVar29 = (int *)(lVar20 + 0x48);
          iVar7 = *piVar29;
          *piVar29 = *piVar29 + -1;
          UNLOCK();
joined_r0x000141d99b9d:
          if (iVar7 == 1) {
            FGraphEvent::Recycle(lVar20);
          }
        }
      }
      uVar24 = local_2f8;
      lVar19 = (longlong)(int)local_2f8;
      iVar7 = (int)local_2f8 + 1;
      local_2f8 = CONCAT44(local_2f8._4_4_,iVar7);
      if (local_2f8._4_4_ < iVar7) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_320,uVar24 & 0xffffffff);
      }
      lVar20 = *plVar14;
      plVar16 = local_320;
      if (local_300 != (longlong *)0x0) {
        plVar16 = local_300;
      }
      plVar16[lVar19] = lVar20;
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 0x48) = *(int *)(lVar20 + 0x48) + 1;
        UNLOCK();
      }
      uVar24 = (ulonglong)(iVar8 + 1U);
      local_3d8 = local_3d8 + 2;
      local_458 = local_458 + 4;
      local_468 = local_468 + local_400;
      uVar13 = (ulonglong)local_468;
      local_46c = local_46c + 1;
      uVar27 = (ulonglong)local_46c;
      puVar33 = puVar33 + 0xb;
      plVar14 = plVar14 + 1;
    } while ((int)(iVar8 + 1U) < 4);
    local_474 = 0;
    lVar19 = local_3f0 + 0x158;
    lVar20 = local_3f0 + 0x178;
    local_3f0 = lVar19;
    local_3e8 = lVar20;
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x48))(plVar14,local_320,DAT_1464a8214);
    lVar21 = 0;
    uVar34 = (uint)uVar27;
    uVar30 = 0;
    if (0 < (int)(uint)uVar27) {
      do {
        local_458 = uVar27;
        for (iVar8 = 0;
            (iVar25 = local_460, iVar7 = local_470, -1 < iVar8 &&
            (iVar8 < *(int *)((longlong)&local_280 + lVar21))); iVar8 = iVar8 + 1) {
          lVar17 = *(longlong *)((longlong)local_298 + lVar21 + 0x10);
          lVar26 = (longlong)iVar8 * 0x20;
          uVar9 = FHZBOcclusionTester::AddBounds(lVar20,lVar26 + 8 + lVar17,lVar26 + 0x14 + lVar17);
          *(undefined4 *)(*(longlong *)(lVar17 + lVar26) + 0x34) = uVar9;
        }
        for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)((longlong)&local_240 + lVar21)));
            iVar8 = iVar8 + 1) {
          lVar20 = *(longlong *)
                    (*(longlong *)((longlong)local_258 + lVar21 + 0x10) + (longlong)iVar8 * 8);
          lVar17 = ((longlong)iVar7 % (longlong)iVar25 & 0xffffffffU) + 1;
          if (*(longlong *)(lVar20 + lVar17 * 8) != 0) {
            FRenderQueryPool::ReleaseQuery(lVar19,lVar20 + lVar17 * 8);
          }
        }
        for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)((longlong)&local_2c0 + lVar21)));
            iVar8 = iVar8 + 1) {
          lVar20 = *(longlong *)((longlong)&local_2c8 + lVar21);
          lVar19 = (longlong)iVar8 * 0x28;
          lVar17 = 0x2f60;
          if (*(char *)(lVar19 + 0x20 + lVar20) == '\0') {
            lVar17 = 0x2f38;
          }
          uVar15 = FOcclusionQueryBatcher::BatchPrimitive
                             (lVar17 + local_448,lVar20 + 8 + lVar19,lVar20 + 0x14 + lVar19);
          uVar24 = (longlong)local_470 % (longlong)iVar25;
          uVar3 = *(undefined1 *)(lVar19 + 0x20 + *(longlong *)((longlong)&local_2c8 + lVar21));
          lVar19 = *(longlong *)(lVar19 + *(longlong *)((longlong)&local_2c8 + lVar21));
          uVar27 = uVar24 & 0xffffffff;
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar19 + ((uVar24 & 0xffffffff) + 1) * 8,uVar15);
          *(int *)(lVar19 + 0x20 + uVar27 * 4) = local_470;
          *(undefined1 *)(uVar27 + 0x4d + lVar19) = uVar3;
        }
        lVar21 = lVar21 + 0x10;
        lVar19 = local_3f0;
        lVar20 = local_3e8;
        uVar27 = local_458 - 1;
      } while (local_458 - 1 != 0);
      local_458 = 0;
      uVar34 = local_46c;
      uVar30 = local_474;
    }
    plVar14 = local_450;
    lVar19 = (longlong)(int)uVar34;
    uVar34 = local_474;
    if (0 < lVar19) {
      piVar29 = local_160;
      piVar28 = (int *)&local_200;
      do {
        iVar8 = 0;
        if (0 < *piVar28) {
          do {
            FUN_141d7f3a0(plVar14,local_3bc,(longlong)iVar8 * 0x50 + *(longlong *)(piVar28 + -2),0);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *piVar28);
        }
        uVar30 = uVar30 + *piVar29;
        piVar28 = piVar28 + 4;
        piVar29 = piVar29 + 0x16;
        lVar19 = lVar19 + -1;
        uVar34 = uVar30;
      } while (lVar19 != 0);
    }
    local_474 = uVar34;
    plVar14 = local_320;
    iVar8 = (int)local_2f8;
    if (local_300 != (longlong *)0x0) {
      plVar14 = local_300;
    }
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar14 != 0) {
        LOCK();
        piVar29 = (int *)(*plVar14 + 0x48);
        iVar7 = *piVar29;
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar14 = plVar14 + 1;
    }
    if (local_300 != (longlong *)0x0) {
      FMemory::Free();
    }
    lVar20 = 4;
    plVar14 = local_298 + 2;
    lVar19 = 4;
    do {
      plVar16 = plVar14 + -2;
      plVar14 = plVar14 + -2;
      lVar19 = lVar19 + -1;
      if (*plVar16 != 0) {
        FMemory::Free();
      }
    } while (lVar19 != 0);
    lVar19 = 4;
    plVar14 = local_258 + 2;
    do {
      plVar16 = plVar14 + -2;
      plVar14 = plVar14 + -2;
      lVar19 = lVar19 + -1;
      if (*plVar16 != 0) {
        FMemory::Free();
      }
    } while (lVar19 != 0);
    lVar19 = 4;
    plVar14 = local_218 + 2;
    do {
      plVar16 = plVar14 + -2;
      plVar14 = plVar14 + -2;
      lVar19 = lVar19 + -1;
      if (*plVar16 != 0) {
        FMemory::Free();
      }
    } while (lVar19 != 0);
    lVar19 = 4;
    plVar14 = local_1c8;
    do {
      iVar8 = (int)plVar14[-1];
      plVar14 = plVar14 + -2;
      lVar21 = *plVar14;
      lVar19 = lVar19 + -1;
      if (iVar8 != 0) {
        lVar21 = lVar21 + 8;
        do {
          _vector_destructor_iterator_
                    (lVar21,8,3,TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>);
          lVar21 = lVar21 + 0x50;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar21 = *plVar14;
      }
      if (lVar21 != 0) {
        FMemory::Free();
      }
    } while (lVar19 != 0);
    puVar22 = local_1a8;
    do {
      plVar14 = (longlong *)(puVar22 + -8);
      puVar22 = puVar22 + -8;
      lVar20 = lVar20 + -1;
      if (*plVar14 != 0) {
        LOCK();
        piVar29 = (int *)(*plVar14 + 0x48);
        iVar8 = *piVar29;
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FGraphEvent::Recycle();
        }
      }
    } while (lVar20 != 0);
    return local_474;
  }
  lVar19 = param_2 + 0x1a78 + (longlong)DAT_146a9fac4 * 0x10;
  *(undefined4 *)(lVar19 + 8) = 0;
  if ((*(int *)(lVar19 + 0xc) < 0) && (*(int *)(lVar19 + 0xc) != 0)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar19,0);
  }
  piVar29 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar29 < DAT_146a9fb68) && (_Init_thread_header(&DAT_146a9fb68), DAT_146a9fb68 == -1)) {
    atexit((_func_5014 *)&LAB_143e9aa10);
    _Init_thread_footer(&DAT_146a9fb68);
  }
  if (DAT_146a9fb64 < 0) {
    DAT_146a9fb60 = 0;
    if (DAT_146a9fb64 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146a9fb58);
    }
  }
  else {
    DAT_146a9fb60 = 0;
  }
  if ((*piVar29 < DAT_146a9fb80) && (_Init_thread_header(&DAT_146a9fb80), DAT_146a9fb80 == -1)) {
    atexit((_func_5014 *)&LAB_143e9aa30);
    _Init_thread_footer(&DAT_146a9fb80);
  }
  lVar20 = 0;
  DAT_146a9fb78 = 0;
  if ((DAT_146a9fb7c < 0) && (DAT_146a9fb7c != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a9fb70,0);
  }
  local_3b0 = &PTR__scalar_deleting_destructor__144deb6d0;
  local_378 = &local_3b0;
  local_36c = *(undefined4 *)(param_2 + 0x1ad8);
  local_368 = local_478;
  local_348 = &DAT_146a9fb58;
  local_398 = (undefined8 *)0x0;
  uStack_390 = 0;
  local_370 = 0;
  local_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_3a8 = param_2;
  local_3a0 = param_2;
  local_388 = param_1;
  local_380 = param_2;
  local_367 = param_4;
  local_338 = lVar19;
  FUN_141d80390(&local_388);
  iVar25 = local_470;
  uVar34 = DAT_146a9fb60;
  lVar19 = (longlong)(int)DAT_146a9fb60;
  local_468 = DAT_146a9fb60;
  if (DAT_146a9fb60 == 0) goto LAB_141d9a3bf;
  iVar23 = *(int *)(param_2 + 0x2f68);
  iVar31 = 2;
  if (iVar7 < 3) {
    iVar31 = iVar7;
  }
  iVar31 = DAT_1464c9c1c / iVar31;
  if (iVar31 < (int)(iVar23 + DAT_146a9fb60)) {
    uVar30 = (int)(DAT_146a9fb60 + 9) / 10;
    uVar32 = iVar31 - iVar23;
    if (iVar31 <= (int)(uVar30 + iVar23)) {
      uVar32 = uVar30;
    }
    if (uVar32 == DAT_146a9fb60) goto LAB_141d9a2a2;
    if (DAT_146a9fb7c < (int)DAT_146a9fb60) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a9fb70,DAT_146a9fb60);
    }
    if (0 < (int)uVar34) {
      uVar24 = (ulonglong)uVar34;
      do {
        iVar8 = DAT_146a9fb78;
        lVar19 = (longlong)DAT_146a9fb78;
        lVar21 = DAT_146a9fb58 + lVar20;
        DAT_146a9fb78 = DAT_146a9fb78 + 1;
        if (DAT_146a9fb7c < DAT_146a9fb78) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a9fb70,iVar8);
        }
        lVar20 = lVar20 + 0x28;
        *(longlong *)(DAT_146a9fb70 + lVar19 * 8) = lVar21;
        uVar24 = uVar24 - 1;
        iVar8 = local_470;
        iVar7 = local_460;
      } while (uVar24 != 0);
    }
    local_477 = 0;
    AlgoImpl::
    IntroSortInternal<FOcclusionBounds_*,FIdentityFunctor,TDereferenceWrapper<FOcclusionBounds_*,<lambda_fa36a08a17e8b66bb8a9f51b7b42bff9>_>_>
              (DAT_146a9fb70,(longlong)DAT_146a9fb78,0,&local_477);
    iVar25 = local_470;
    if (0 < (longlong)(int)uVar32) {
      lVar19 = 0;
      uVar24 = (longlong)iVar8 % (longlong)iVar7 & 0xffffffff;
      do {
        lVar20 = 0;
        puVar33 = *(undefined8 **)(DAT_146a9fb70 + lVar19 * 8);
        FUN_141d9a660(local_450,&local_3f4,*puVar33);
        if (local_3f4 != -1) {
          lVar20 = (longlong)local_3f4 * 0x58 + *local_450;
        }
        uVar15 = FOcclusionQueryBatcher::BatchPrimitive
                           (param_2 + 0x2f38,puVar33 + 1,(longlong)puVar33 + 0x14);
        TRefCountPtr<FRHIIndexBuffer>::operator=(lVar20 + (uVar24 + 1) * 8,uVar15);
        *(int *)(lVar20 + 0x20 + uVar24 * 4) = iVar25;
        lVar19 = lVar19 + 1;
        *(undefined1 *)(uVar24 + 0x4d + lVar20) = 0;
        uVar34 = local_468;
      } while (lVar19 < (int)uVar32);
    }
  }
  else {
LAB_141d9a2a2:
    if (0 < (int)DAT_146a9fb60) {
      lVar20 = 0;
      uVar24 = (longlong)iVar8 % (longlong)local_460 & 0xffffffff;
      do {
        lVar21 = DAT_146a9fb58;
        lVar17 = 0;
        FUN_141d9a660(local_450,&local_45c,*(undefined8 *)(DAT_146a9fb58 + lVar20));
        if (local_45c != -1) {
          lVar17 = (longlong)local_45c * 0x58 + *local_450;
        }
        uVar15 = FOcclusionQueryBatcher::BatchPrimitive
                           (param_2 + 0x2f38,lVar21 + 8 + lVar20,lVar21 + 0x14 + lVar20);
        TRefCountPtr<FRHIIndexBuffer>::operator=(lVar17 + (uVar24 + 1) * 8,uVar15);
        *(int *)(lVar17 + 0x20 + uVar24 * 4) = iVar25;
        lVar20 = lVar20 + 0x28;
        *(undefined1 *)(uVar24 + 0x4d + lVar17) = 0;
        lVar19 = lVar19 + -1;
        uVar34 = local_468;
      } while (lVar19 != 0);
    }
  }
  if ((int)(uVar34 * 4) < (int)(DAT_146a9fb64 - DAT_146a9fb60)) {
    DAT_146a9fb60 = 0;
    if (DAT_146a9fb64 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146a9fb58,0);
    }
  }
  else {
    DAT_146a9fb60 = 0;
    if ((DAT_146a9fb64 < 0) && (DAT_146a9fb64 != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146a9fb58,0);
    }
    DAT_146a9fb78 = 0;
    if (-1 < DAT_146a9fb7c) goto LAB_141d9a3bf;
  }
  DAT_146a9fb78 = 0;
  if (DAT_146a9fb7c != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a9fb70,0);
  }
LAB_141d9a3bf:
  if (local_398 != (undefined8 *)0x0) {
    piVar29 = (int *)(local_398 + 1);
    *piVar29 = *piVar29 + -1;
    if (*piVar29 == 0) {
      (**(code **)*local_398)(local_398,1);
    }
  }
  return local_340;
}



// FUNCTION 141d9a520 FindId body=179 status=ok
// SIG undefined FindId(void)

int * TSet<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink,TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined1 local_res8 [8];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    iVar2 = FMeshDrawingPolicy::GetTypeHash(param_3);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        pbVar4 = (byte *)FShadowDepthDrawingPolicy<1>::Matches
                                   (lVar1 + 0x20 + (longlong)iVar2 * 0xe8,local_res8,param_3,0);
        if ((*pbVar4 & 1) != 0) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0xe8 + 0xe0 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141d9a5e0 FindId body=115 status=ok
// SIG undefined FindId(void)

int * TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      FindId(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xc) == *param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar1 * 0xc);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141d9a660 FUN_141d9a660 body=175 status=ok
// SIG undefined FUN_141d9a660(void)

int * FUN_141d9a660(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = (uint)((ulonglong)param_3 >> 0x20);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (((ulonglong)(uVar4 >> 0x14) ^ (longlong)(int)param_3) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x58;
        if ((*(int *)(lVar5 + lVar1) == (int)param_3) && (*(uint *)(lVar5 + 0x48 + lVar1) == uVar4))
        {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar5 + 0x50 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141d9a710 FUN_141d9a710 body=905 status=ok
// SIG undefined FUN_141d9a710(void)

void FUN_141d9a710(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong local_80;
  ulonglong local_78;
  
  uVar2 = *(uint *)(param_2 + 1);
  local_78 = (ulonglong)uVar2;
  iVar3 = *(int *)(param_3 + 0xfe8);
  FUN_141d91090(param_8);
  if (0 < (int)uVar2) {
    local_80 = 0;
    do {
      lVar7 = *param_2;
      FSceneViewFamily::GetFeatureLevel();
      lVar7 = lVar7 + local_80;
      iVar9 = *(int *)(param_8 + 0xb0);
      *(int *)(param_8 + 0xb0) = iVar9 + 1;
      if (*(int *)(param_8 + 0xb4) < iVar9 + 1) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(param_8 + 0x98,iVar9);
      }
      lVar8 = *(longlong *)(param_8 + 0xa8);
      if (*(longlong *)(param_8 + 0xa8) == 0) {
        lVar8 = param_8 + 0x98;
      }
      *(longlong *)(lVar8 + (longlong)iVar9 * 8) = lVar7;
      iVar9 = *(int *)(param_8 + 0x30);
      *(int *)(param_8 + 0x30) = iVar9 + 1;
      if (*(int *)(param_8 + 0x34) < iVar9 + 1) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(param_8 + 0x18,iVar9);
      }
      lVar8 = *(longlong *)(param_8 + 0x28);
      if (*(longlong *)(param_8 + 0x28) == 0) {
        lVar8 = param_8 + 0x18;
      }
      *(longlong *)(lVar8 + (longlong)iVar9 * 8) = lVar7 + 0x2280;
      iVar9 = *(int *)(param_8 + 0x50);
      *(int *)(param_8 + 0x50) = iVar9 + 1;
      if (*(int *)(param_8 + 0x54) < iVar9 + 1) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(param_8 + 0x38,iVar9);
      }
      lVar8 = *(longlong *)(param_8 + 0x48);
      if (*(longlong *)(param_8 + 0x48) == 0) {
        lVar8 = param_8 + 0x38;
      }
      *(longlong *)(lVar8 + (longlong)iVar9 * 8) = lVar7 + 0x22a0;
      iVar9 = *(int *)(param_8 + 0x70);
      *(int *)(param_8 + 0x70) = iVar9 + 1;
      if (*(int *)(param_8 + 0x74) < iVar9 + 1) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(param_8 + 0x58,iVar9);
      }
      lVar8 = *(longlong *)(param_8 + 0x68);
      if (*(longlong *)(param_8 + 0x68) == 0) {
        lVar8 = param_8 + 0x58;
      }
      *(longlong *)(lVar8 + (longlong)iVar9 * 8) = lVar7 + 0x22c0;
      iVar9 = *(int *)(param_8 + 0x90);
      *(int *)(param_8 + 0x90) = iVar9 + 1;
      if (*(int *)(param_8 + 0x94) < iVar9 + 1) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(param_8 + 0x78,iVar9);
      }
      lVar8 = *(longlong *)(param_8 + 0x88);
      if (*(longlong *)(param_8 + 0x88) == 0) {
        lVar8 = param_8 + 0x78;
      }
      local_80 = local_80 + 0x30d0;
      local_78 = local_78 - 1;
      *(longlong *)(lVar8 + (longlong)iVar9 * 8) = lVar7 + 0x22e0;
    } while (local_78 != 0);
  }
  if (0 < (longlong)iVar3) {
    lVar7 = 0;
    do {
      if (*(char *)(lVar7 + *param_5) != '\0') {
        iVar9 = 0;
        lVar8 = *(longlong *)(*(longlong *)(param_3 + 0xfe0) + lVar7 * 8);
        uVar4 = *(undefined4 *)(lVar8 + 0xc0);
        *(undefined8 *)(param_8 + 0xd8) = *(undefined8 *)(lVar8 + 8);
        if (0 < *(int *)(param_8 + 0x90)) {
          lVar6 = 0;
          do {
            lVar6 = lVar6 + 8;
            lVar5 = *(longlong *)(param_8 + 0x88);
            if (*(longlong *)(param_8 + 0x88) == 0) {
              lVar5 = param_8 + 0x78;
            }
            iVar9 = iVar9 + 1;
            *(undefined4 *)(*(longlong *)(lVar5 + -8 + lVar6) + 0x218) = uVar4;
          } while (iVar9 < *(int *)(param_8 + 0x90));
        }
        FUN_141dac980(param_2,param_7,lVar8);
        (**(code **)(**(longlong **)(lVar8 + 8) + 0x60))();
      }
      lVar8 = 0;
      if (0 < (longlong)(int)uVar2) {
        lVar6 = 0;
        do {
          lVar5 = *(longlong *)(param_8 + 0x28);
          if (*(longlong *)(param_8 + 0x28) == 0) {
            lVar5 = param_8 + 0x18;
          }
          *(undefined4 *)(*(longlong *)(lVar6 + 0x2290 + *param_2) + lVar7 * 4) =
               *(undefined4 *)(*(longlong *)(lVar5 + lVar8 * 8) + 8);
          lVar5 = *(longlong *)(param_8 + 0x48);
          if (*(longlong *)(param_8 + 0x48) == 0) {
            lVar5 = param_8 + 0x38;
          }
          lVar1 = lVar8 * 8;
          lVar8 = lVar8 + 1;
          *(undefined4 *)(*(longlong *)(lVar6 + 0x22b0 + *param_2) + lVar7 * 4) =
               *(undefined4 *)(*(longlong *)(lVar5 + lVar1) + 8);
          lVar6 = lVar6 + 0x30d0;
        } while (lVar8 < (int)uVar2);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar3);
  }
  FUN_1427596f0(param_1 + 0xd0);
  return;
}



// FUNCTION 141d9aaa0 FUN_141d9aaa0 body=401 status=ok
// SIG undefined FUN_141d9aaa0(void)

undefined8 * FUN_141d9aaa0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar5 = 0;
  local_res8 = 0;
  if ((*(byte *)(param_1 + 100) & 8) == 0) {
    puVar2 = (undefined8 *)FUN_141b34160();
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x650);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res8,*puVar2);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_40 = 0;
    uVar3 = 1;
    uVar6 = uVar5;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar3 = uVar5;
    uVar6 = *(ulonglong *)(lVar1 + 0x58);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar3 = (ulonglong)((uint)uVar3 | 2);
    local_48 = 0;
    uVar7 = uVar5;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar7 = *(ulonglong *)(lVar1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar3 = (ulonglong)((uint)uVar3 | 4);
    local_res20 = 0;
    uVar4 = uVar5;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar4 = *(ulonglong *)(lVar1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar3 = (ulonglong)((uint)uVar3 | 8);
    local_res10[0] = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar5 = *(ulonglong *)(lVar1 + 0x48);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  *param_2 = local_res8;
  param_2[1] = *(undefined8 *)(lVar1 + 0x38);
  param_2[2] = uVar5;
  param_2[3] = uVar4;
  param_2[4] = uVar7;
  param_2[5] = uVar6;
  if ((uVar3 & 8) != 0) {
    uVar3 = (ulonglong)((uint)uVar3 & 0xfffffff7);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res10);
  }
  if ((uVar3 & 4) != 0) {
    uVar3 = (ulonglong)((uint)uVar3 & 0xfffffffb);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  }
  if ((uVar3 & 2) != 0) {
    uVar3 = (ulonglong)((uint)uVar3 & 0xfffffffd);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
  }
  if ((uVar3 & 1) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  return param_2;
}



// FUNCTION 141d9ac40 FUN_141d9ac40 body=216 status=ok
// SIG undefined FUN_141d9ac40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141d9ac40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res18 [4];
  
  if (param_3 != 0) {
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_3 + 0x5f40),local_res18,param_2);
    plVar1 = (longlong *)0x0;
    if (local_res18[0] != -1) {
      plVar1 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(param_3 + 0x5f40));
    }
    plVar3 = plVar1 + 2;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      lVar4 = *plVar3;
      goto LAB_141d9aca3;
    }
  }
  lVar4 = 0;
LAB_141d9aca3:
  lVar2 = 0;
  if (lVar4 == 0) {
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1465340e0,local_res18,param_2);
    if (local_res18[0] != -1) {
      lVar2 = (longlong)local_res18[0] * 0x20 + _DAT_1465340e0;
    }
    plVar1 = (longlong *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      return *(longlong *)(*plVar1 + 0x18);
    }
  }
  return lVar4;
}



// FUNCTION 141d9ad20 FUN_141d9ad20 body=320 status=ok
// SIG undefined FUN_141d9ad20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9ad20(void)

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
  
  if (DAT_146aa6018 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9c9e0;
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
        return *(undefined8 *)(DAT_146aa6018 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6018 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6018 =
           TStaticStateRHI<TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6018 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6018 != 0) {
      lVar7 = DAT_146aa6018;
    }
    DAT_146aa6018 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6018 + 0x30);
}



// FUNCTION 141d9ae60 FUN_141d9ae60 body=320 status=ok
// SIG undefined FUN_141d9ae60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9ae60(void)

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
  
  if (DAT_146aa6038 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9c9f0;
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
        return *(undefined8 *)(DAT_146aa6038 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6038 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6038 =
           TStaticStateRHI<TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6038 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6038 != 0) {
      lVar7 = DAT_146aa6038;
    }
    DAT_146aa6038 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6038 + 0x30);
}



// FUNCTION 141d9afa0 FUN_141d9afa0 body=320 status=ok
// SIG undefined FUN_141d9afa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9afa0(void)

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
  
  if (DAT_146aa6010 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca00;
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
        return *(undefined8 *)(DAT_146aa6010 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6010 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6010 =
           TStaticStateRHI<TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6010 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6010 != 0) {
      lVar7 = DAT_146aa6010;
    }
    DAT_146aa6010 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6010 + 0x30);
}



// FUNCTION 141d9b0e0 FUN_141d9b0e0 body=320 status=ok
// SIG undefined FUN_141d9b0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9b0e0(void)

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
  
  if (DAT_146aa6030 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca10;
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
        return *(undefined8 *)(DAT_146aa6030 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6030 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6030 =
           TStaticStateRHI<TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6030 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6030 != 0) {
      lVar7 = DAT_146aa6030;
    }
    DAT_146aa6030 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6030 + 0x30);
}



// FUNCTION 141d9b220 FUN_141d9b220 body=320 status=ok
// SIG undefined FUN_141d9b220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9b220(void)

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
  
  if (DAT_146aa5ff0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca20;
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
        return *(undefined8 *)(DAT_146aa5ff0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5ff0 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5ff0 =
           TStaticStateRHI<TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5ff0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5ff0 != 0) {
      lVar7 = DAT_146aa5ff0;
    }
    DAT_146aa5ff0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5ff0 + 0x30);
}



// FUNCTION 141d9b360 FUN_141d9b360 body=320 status=ok
// SIG undefined FUN_141d9b360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9b360(void)

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
  
  if (DAT_146aa5ff8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca30;
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
        return *(undefined8 *)(DAT_146aa5ff8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5ff8 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5ff8 =
           TStaticStateRHI<TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5ff8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5ff8 != 0) {
      lVar7 = DAT_146aa5ff8;
    }
    DAT_146aa5ff8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5ff8 + 0x30);
}



// FUNCTION 141d9b4a0 FUN_141d9b4a0 body=320 status=ok
// SIG undefined FUN_141d9b4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9b4a0(void)

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
  
  if (DAT_146aa6008 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca40;
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
        return *(undefined8 *)(DAT_146aa6008 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6008 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6008 =
           TStaticStateRHI<TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6008 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6008 != 0) {
      lVar7 = DAT_146aa6008;
    }
    DAT_146aa6008 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6008 + 0x30);
}



// FUNCTION 141d9b5e0 FUN_141d9b5e0 body=320 status=ok
// SIG undefined FUN_141d9b5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9b5e0(void)

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
  
  if (DAT_146aa6028 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca50;
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
        return *(undefined8 *)(DAT_146aa6028 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6028 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6028 =
           TStaticStateRHI<TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6028 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6028 != 0) {
      lVar7 = DAT_146aa6028;
    }
    DAT_146aa6028 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6028 + 0x30);
}



// FUNCTION 141d9b720 FUN_141d9b720 body=320 status=ok
// SIG undefined FUN_141d9b720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9b720(void)

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
  
  if (DAT_146aa5fe8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca60;
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
        return *(undefined8 *)(DAT_146aa5fe8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5fe8 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5fe8 =
           TStaticStateRHI<TStaticBlendState<7,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5fe8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5fe8 != 0) {
      lVar7 = DAT_146aa5fe8;
    }
    DAT_146aa5fe8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5fe8 + 0x30);
}



// FUNCTION 141d9b860 FUN_141d9b860 body=320 status=ok
// SIG undefined FUN_141d9b860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9b860(void)

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
  
  if (DAT_146aa6000 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca70;
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
        return *(undefined8 *)(DAT_146aa6000 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6000 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6000 =
           TStaticStateRHI<TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6000 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6000 != 0) {
      lVar7 = DAT_146aa6000;
    }
    DAT_146aa6000 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6000 + 0x30);
}



// FUNCTION 141d9b9a0 FUN_141d9b9a0 body=320 status=ok
// SIG undefined FUN_141d9b9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9b9a0(void)

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
  
  if (DAT_146aa6020 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca80;
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
        return *(undefined8 *)(DAT_146aa6020 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6020 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6020 =
           TStaticStateRHI<TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6020 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6020 != 0) {
      lVar7 = DAT_146aa6020;
    }
    DAT_146aa6020 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6020 + 0x30);
}



// FUNCTION 141d9bae0 FUN_141d9bae0 body=320 status=ok
// SIG undefined FUN_141d9bae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9bae0(void)

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
  
  if (DAT_146aa6050 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9ca90;
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
        return *(undefined8 *)(DAT_146aa6050 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6050 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6050 =
           TStaticStateRHI<TStaticBlendState<0,0,0,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6050 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<0,0,0,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6050 != 0) {
      lVar7 = DAT_146aa6050;
    }
    DAT_146aa6050 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6050 + 0x30);
}



// FUNCTION 141d9bc20 FUN_141d9bc20 body=320 status=ok
// SIG undefined FUN_141d9bc20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9bc20(void)

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
  
  if (DAT_146aa6058 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9caa0;
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
        return *(undefined8 *)(DAT_146aa6058 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6058 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6058 =
           TStaticStateRHI<TStaticBlendState<0,0,0,1,0,0,1,15,0,0,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6058 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<0,0,0,1,0,0,1,15,0,0,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6058 != 0) {
      lVar7 = DAT_146aa6058;
    }
    DAT_146aa6058 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6058 + 0x30);
}



// FUNCTION 141d9bd60 FUN_141d9bd60 body=320 status=ok
// SIG undefined FUN_141d9bd60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9bd60(void)

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
  
  if (DAT_146aa5fe0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cab0;
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
        return *(undefined8 *)(DAT_146aa5fe0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5fe0 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5fe0 =
           TStaticStateRHI<TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5fe0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5fe0 != 0) {
      lVar7 = DAT_146aa5fe0;
    }
    DAT_146aa5fe0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5fe0 + 0x30);
}



// FUNCTION 141d9bea0 FUN_141d9bea0 body=320 status=ok
// SIG undefined FUN_141d9bea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9bea0(void)

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
  
  if (DAT_146aa6040 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cac0;
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
        return *(undefined8 *)(DAT_146aa6040 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6040 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6040 =
           TStaticStateRHI<TStaticDepthStencilState<1,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6040 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6040 != 0) {
      lVar7 = DAT_146aa6040;
    }
    DAT_146aa6040 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6040 + 0x30);
}



// FUNCTION 141d9bfe0 FUN_141d9bfe0 body=320 status=ok
// SIG undefined FUN_141d9bfe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9bfe0(void)

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
  
  if (DAT_146aa6048 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cad0;
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
        return *(undefined8 *)(DAT_146aa6048 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6048 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6048 =
           TStaticStateRHI<TStaticDepthStencilState<0,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6048 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6048 != 0) {
      lVar7 = DAT_146aa6048;
    }
    DAT_146aa6048 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6048 + 0x30);
}



// FUNCTION 141d9c120 FUN_141d9c120 body=320 status=ok
// SIG undefined FUN_141d9c120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9c120(void)

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
  
  if (DAT_146aa5fd0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cae0;
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
        return *(undefined8 *)(DAT_146aa5fd0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5fd0 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5fd0 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,6,0,1,7,0,7,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5fd0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,6,0,1,7,0,7,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5fd0 != 0) {
      lVar7 = DAT_146aa5fd0;
    }
    DAT_146aa5fd0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5fd0 + 0x30);
}



// FUNCTION 141d9c260 FUN_141d9c260 body=320 status=ok
// SIG undefined FUN_141d9c260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9c260(void)

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
  
  if (DAT_146aa5fc0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9caf0;
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
        return *(undefined8 *)(DAT_146aa5fc0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5fc0 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5fc0 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5fc0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5fc0 != 0) {
      lVar7 = DAT_146aa5fc0;
    }
    DAT_146aa5fc0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5fc0 + 0x30);
}



// FUNCTION 141d9c3a0 FUN_141d9c3a0 body=320 status=ok
// SIG undefined FUN_141d9c3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9c3a0(void)

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
  
  if (DAT_146aa5fd8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cb00;
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
        return *(undefined8 *)(DAT_146aa5fd8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5fd8 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5fd8 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5fd8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5fd8 != 0) {
      lVar7 = DAT_146aa5fd8;
    }
    DAT_146aa5fd8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5fd8 + 0x30);
}



// FUNCTION 141d9c4e0 FUN_141d9c4e0 body=320 status=ok
// SIG undefined FUN_141d9c4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9c4e0(void)

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
  
  if (DAT_146aa5fc8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cb10;
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
        return *(undefined8 *)(DAT_146aa5fc8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5fc8 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5fc8 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,6,1,7,0,0,7,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5fc8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,6,1,7,0,0,7,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5fc8 != 0) {
      lVar7 = DAT_146aa5fc8;
    }
    DAT_146aa5fc8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5fc8 + 0x30);
}



// FUNCTION 141d9c620 FUN_141d9c620 body=320 status=ok
// SIG undefined FUN_141d9c620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9c620(void)

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
  
  if (DAT_146aa5fb8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cb20;
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
        return *(undefined8 *)(DAT_146aa5fb8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5fb8 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5fb8 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,1,1,1,0,7,1,1,1,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5fb8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,1,1,1,0,7,1,1,1,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5fb8 != 0) {
      lVar7 = DAT_146aa5fb8;
    }
    DAT_146aa5fb8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5fb8 + 0x30);
}



// FUNCTION 141d9c760 FUN_141d9c760 body=320 status=ok
// SIG undefined FUN_141d9c760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9c760(void)

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
  
  if (DAT_146aa5fb0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cb30;
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
        return *(undefined8 *)(DAT_146aa5fb0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa5fb0 = 0;
        return _DAT_00000030;
      }
      DAT_146aa5fb0 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa5fb0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa5fb0 != 0) {
      lVar7 = DAT_146aa5fb0;
    }
    DAT_146aa5fb0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa5fb0 + 0x30);
}



// FUNCTION 141d9c8a0 FUN_141d9c8a0 body=320 status=ok
// SIG undefined FUN_141d9c8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141d9c8a0(void)

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
  
  if (DAT_146aa6070 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141d9cb40;
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
        return *(undefined8 *)(DAT_146aa6070 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aa6070 = 0;
        return _DAT_00000030;
      }
      DAT_146aa6070 =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aa6070 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aa6070 != 0) {
      lVar7 = DAT_146aa6070;
    }
    DAT_146aa6070 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aa6070 + 0x30);
}



// FUNCTION 141d9cb50 FUN_141d9cb50 body=1726 status=ok
// SIG undefined FUN_141d9cb50(void)

float * FUN_141d9cb50(longlong param_1,float *param_2,longlong param_3,byte param_4,int param_5,
                     int param_6,uint param_7,uint param_8)

{
  float *pfVar1;
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
  longlong lVar12;
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
  
  plVar13 = *(longlong **)(param_1 + 0x28);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)**(longlong **)(param_1 + 0x18);
  }
  lVar12 = (**(code **)(*plVar13 + 0x10))();
  fVar44 = *(float *)(param_1 + 0x4c) - *(float *)(param_3 + 0x8d8);
  fVar41 = *(float *)(param_1 + 0x44) - *(float *)(param_3 + 0x8d0);
  fVar43 = *(float *)(param_1 + 0x48) - *(float *)(param_3 + 0x8d4);
  fVar16 = 1.0 / (float)(int)*(undefined8 *)(lVar12 + 0x14);
  fVar22 = (float)param_7 * 0.5 * fVar16;
  fVar17 = 1.0 / (float)(int)((ulonglong)*(undefined8 *)(lVar12 + 0x14) >> 0x20);
  fVar14 = (float)param_8 * 0.5 * fVar17;
  fVar16 = (float)(uint)(param_5 + *(int *)(param_1 + 0x540)) * fVar16 + fVar22;
  lVar12 = 0x488;
  if (param_4 == 0) {
    lVar12 = 0x3c8;
  }
  fVar42 = *(float *)(lVar12 + param_3);
  lVar12 = 0x478;
  if (param_4 == 0) {
    lVar12 = 0x3b8;
  }
  fVar2 = *(float *)(lVar12 + param_3);
  fVar15 = (float)(uint)(param_6 + *(int *)(param_1 + 0x540)) * fVar17 + fVar14;
  fVar14 = -fVar14;
  lVar12 = (ulonglong)param_4 * 0x40;
  pfVar1 = (float *)(lVar12 + 0x850 + param_3);
  fVar17 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  pfVar1 = (float *)(lVar12 + 0x860 + param_3);
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar1 = (float *)(lVar12 + 0x870 + param_3);
  fVar10 = *pfVar1;
  fVar11 = pfVar1[1];
  fVar20 = pfVar1[2];
  fVar21 = pfVar1[3];
  pfVar1 = (float *)(lVar12 + 0x880 + param_3);
  fVar18 = *pfVar1;
  fVar19 = pfVar1[1];
  fVar27 = pfVar1[2];
  fVar28 = pfVar1[3];
  fVar33 = fVar17 * 1.0 + fVar6 * 0.0 + fVar10 * 0.0 + fVar18 * 0.0;
  fVar34 = fVar3 * 1.0 + fVar7 * 0.0 + fVar11 * 0.0 + fVar19 * 0.0;
  fVar35 = fVar4 * 1.0 + fVar8 * 0.0 + fVar20 * 0.0 + fVar27 * 0.0;
  fVar36 = fVar5 * 1.0 + fVar9 * 0.0 + fVar21 * 0.0 + fVar28 * 0.0;
  fVar37 = fVar17 * 0.0 + fVar6 * 1.0 + fVar10 * 0.0 + fVar18 * 0.0;
  fVar38 = fVar3 * 0.0 + fVar7 * 1.0 + fVar11 * 0.0 + fVar19 * 0.0;
  fVar39 = fVar4 * 0.0 + fVar8 * 1.0 + fVar20 * 0.0 + fVar27 * 0.0;
  fVar40 = fVar5 * 0.0 + fVar9 * 1.0 + fVar21 * 0.0 + fVar28 * 0.0;
  fVar23 = fVar17 * 0.0 + fVar6 * 0.0 + fVar2 * fVar10 + fVar18 * 1.0;
  fVar24 = fVar3 * 0.0 + fVar7 * 0.0 + fVar2 * fVar11 + fVar19 * 1.0;
  fVar25 = fVar4 * 0.0 + fVar8 * 0.0 + fVar2 * fVar20 + fVar27 * 1.0;
  fVar26 = fVar5 * 0.0 + fVar9 * 0.0 + fVar2 * fVar21 + fVar28 * 1.0;
  fVar18 = fVar17 * 0.0 + fVar6 * 0.0 + fVar42 * fVar10 + fVar18 * 0.0;
  fVar19 = fVar3 * 0.0 + fVar7 * 0.0 + fVar42 * fVar11 + fVar19 * 0.0;
  fVar20 = fVar4 * 0.0 + fVar8 * 0.0 + fVar42 * fVar20 + fVar27 * 0.0;
  fVar21 = fVar5 * 0.0 + fVar9 * 0.0 + fVar42 * fVar21 + fVar28 * 0.0;
  fVar29 = fVar34 * 0.0 + fVar33 * 1.0 + fVar35 * 0.0 + fVar36 * fVar41;
  fVar30 = fVar34 * 1.0 + fVar33 * 0.0 + fVar35 * 0.0 + fVar36 * fVar43;
  fVar31 = fVar34 * 0.0 + fVar33 * 0.0 + fVar35 * 1.0 + fVar36 * fVar44;
  fVar32 = fVar34 * 0.0 + fVar33 * 0.0 + fVar35 * 0.0 + fVar36 * 1.0;
  fVar27 = fVar38 * 0.0 + fVar37 * 1.0 + fVar39 * 0.0 + fVar40 * fVar41;
  fVar28 = fVar38 * 1.0 + fVar37 * 0.0 + fVar39 * 0.0 + fVar40 * fVar43;
  fVar33 = fVar38 * 0.0 + fVar37 * 0.0 + fVar39 * 1.0 + fVar40 * fVar44;
  fVar34 = fVar38 * 0.0 + fVar37 * 0.0 + fVar39 * 0.0 + fVar40 * 1.0;
  fVar17 = *(float *)(param_1 + 0xc0);
  fVar42 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 200);
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0x90);
  fVar5 = *(float *)(param_1 + 0x94);
  fVar6 = *(float *)(param_1 + 0x98);
  fVar7 = *(float *)(param_1 + 0x9c);
  fVar35 = fVar24 * 0.0 + fVar23 * 1.0 + fVar25 * 0.0 + fVar26 * fVar41;
  fVar36 = fVar24 * 1.0 + fVar23 * 0.0 + fVar25 * 0.0 + fVar26 * fVar43;
  fVar37 = fVar24 * 0.0 + fVar23 * 0.0 + fVar25 * 1.0 + fVar26 * fVar44;
  fVar23 = fVar24 * 0.0 + fVar23 * 0.0 + fVar25 * 0.0 + fVar26 * 1.0;
  fVar8 = *(float *)(param_1 + 0xb0);
  fVar9 = *(float *)(param_1 + 0xb4);
  fVar10 = *(float *)(param_1 + 0xb8);
  fVar11 = *(float *)(param_1 + 0xbc);
  fVar24 = fVar19 * 0.0 + fVar18 * 1.0 + fVar20 * 0.0 + fVar21 * fVar41;
  fVar25 = fVar19 * 1.0 + fVar18 * 0.0 + fVar20 * 0.0 + fVar21 * fVar43;
  fVar26 = fVar19 * 0.0 + fVar18 * 0.0 + fVar20 * 1.0 + fVar21 * fVar44;
  fVar21 = fVar19 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0 + fVar21 * 1.0;
  fVar41 = *(float *)(param_1 + 0xa0);
  fVar43 = *(float *)(param_1 + 0xa4);
  fVar44 = *(float *)(param_1 + 0xa8);
  fVar20 = *(float *)(param_1 + 0xac);
  fVar38 = fVar29 * fVar4 + fVar30 * fVar41 + fVar31 * fVar8 + fVar32 * fVar17;
  fVar39 = fVar29 * fVar5 + fVar30 * fVar43 + fVar31 * fVar9 + fVar32 * fVar42;
  fVar40 = fVar29 * fVar6 + fVar30 * fVar44 + fVar31 * fVar10 + fVar32 * fVar2;
  fVar30 = fVar29 * fVar7 + fVar30 * fVar20 + fVar31 * fVar11 + fVar32 * fVar3;
  fVar18 = fVar27 * fVar4 + fVar28 * fVar41 + fVar33 * fVar8 + fVar34 * fVar17;
  fVar19 = fVar27 * fVar5 + fVar28 * fVar43 + fVar33 * fVar9 + fVar34 * fVar42;
  fVar29 = fVar27 * fVar6 + fVar28 * fVar44 + fVar33 * fVar10 + fVar34 * fVar2;
  fVar27 = fVar27 * fVar7 + fVar28 * fVar20 + fVar33 * fVar11 + fVar34 * fVar3;
  fVar28 = fVar35 * fVar4 + fVar36 * fVar41 + fVar37 * fVar8 + fVar23 * fVar17;
  fVar33 = fVar35 * fVar5 + fVar36 * fVar43 + fVar37 * fVar9 + fVar23 * fVar42;
  fVar34 = fVar35 * fVar6 + fVar36 * fVar44 + fVar37 * fVar10 + fVar23 * fVar2;
  fVar23 = fVar35 * fVar7 + fVar36 * fVar20 + fVar37 * fVar11 + fVar23 * fVar3;
  fVar41 = fVar24 * fVar4 + fVar25 * fVar41 + fVar26 * fVar8 + fVar21 * fVar17;
  fVar43 = fVar24 * fVar5 + fVar25 * fVar43 + fVar26 * fVar9 + fVar21 * fVar42;
  fVar44 = fVar24 * fVar6 + fVar25 * fVar44 + fVar26 * fVar10 + fVar21 * fVar2;
  fVar42 = fVar24 * fVar7 + fVar25 * fVar20 + fVar26 * fVar11 + fVar21 * fVar3;
  fVar17 = *(float *)(param_1 + 0x150);
  *param_2 = fVar39 * 0.0 + fVar38 * fVar22 + fVar40 * 0.0 + fVar30 * fVar16;
  param_2[1] = fVar39 * fVar14 + fVar38 * 0.0 + fVar40 * 0.0 + fVar30 * fVar15;
  param_2[2] = fVar39 * 0.0 + fVar38 * 0.0 + fVar40 * fVar17 + fVar30 * 0.0;
  param_2[3] = fVar39 * 0.0 + fVar38 * 0.0 + fVar40 * 0.0 + fVar30 * 1.0;
  param_2[4] = fVar19 * 0.0 + fVar18 * fVar22 + fVar29 * 0.0 + fVar27 * fVar16;
  param_2[5] = fVar19 * fVar14 + fVar18 * 0.0 + fVar29 * 0.0 + fVar27 * fVar15;
  param_2[6] = fVar19 * 0.0 + fVar18 * 0.0 + fVar29 * fVar17 + fVar27 * 0.0;
  param_2[7] = fVar19 * 0.0 + fVar18 * 0.0 + fVar29 * 0.0 + fVar27 * 1.0;
  param_2[8] = fVar33 * 0.0 + fVar28 * fVar22 + fVar34 * 0.0 + fVar23 * fVar16;
  param_2[9] = fVar33 * fVar14 + fVar28 * 0.0 + fVar34 * 0.0 + fVar23 * fVar15;
  param_2[10] = fVar33 * 0.0 + fVar28 * 0.0 + fVar34 * fVar17 + fVar23 * 0.0;
  param_2[0xb] = fVar33 * 0.0 + fVar28 * 0.0 + fVar34 * 0.0 + fVar23 * 1.0;
  param_2[0xc] = fVar43 * 0.0 + fVar41 * fVar22 + fVar44 * 0.0 + fVar42 * fVar16;
  param_2[0xd] = fVar43 * fVar14 + fVar41 * 0.0 + fVar44 * 0.0 + fVar42 * fVar15;
  param_2[0xe] = fVar43 * 0.0 + fVar41 * 0.0 + fVar44 * fVar17 + fVar42 * 0.0;
  param_2[0xf] = fVar43 * 0.0 + fVar41 * 0.0 + fVar44 * 0.0 + fVar42 * 1.0;
  return param_2;
}



// FUNCTION 141d9d210 FUN_141d9d210 body=1317 status=ok
// SIG undefined FUN_141d9d210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d9d210(int param_1,longlong param_2,longlong param_3,char param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int local_res18 [4];
  undefined *local_38;
  undefined4 local_30;
  
  uVar3 = *(uint *)(param_3 + 0x560);
  if ((uVar3 >> 8 & 1) == 0) {
    if ((((uVar3 & 0x40) == 0) || (*(int *)(param_3 + 0x524) < 0)) || ((uVar3 & 0x10) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = FUN_141d822a0(*(longlong *)(param_2 + 0x3090),0);
      *param_5 = uVar4;
      if (*(int *)(DAT_146a9f610 + 4) == 1) {
        lVar6 = *(longlong *)(param_2 + 0x3090);
        local_30 = 0;
        local_38 = &DAT_146aa5bb0;
        if (*(float *)(param_3 + 0x3d4) <= 0.0) {
          local_38 = &DAT_146aa5a60;
        }
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar6 + 0x38,local_res18,&local_38);
        uVar4 = _DAT_00000000;
        if (local_res18[0] != -1) {
          lVar6 = (longlong)local_res18[0] * 0x20 + *(longlong *)(lVar6 + 0x38);
          puVar5 = (undefined8 *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          uVar4 = *puVar5;
        }
        goto LAB_141d9d71d;
      }
      uVar3 = *(uint *)(param_3 + 0x560) & 0x4000;
      if (*(float *)(param_3 + 0x3d4) <= 0.0) {
        if (uVar3 == 0) {
          if (param_1 == 1) {
LAB_141d9d530:
            local_38 = &DAT_146aa25e0;
          }
          else if (param_1 == 2) {
            local_38 = &DAT_146aa2730;
          }
          else if (param_1 == 3) {
            local_38 = &DAT_146aa2880;
          }
          else if (param_1 == 4) {
            local_38 = &DAT_146aa29d0;
          }
          else {
            if (param_1 != 5) {
              return;
            }
            local_38 = &DAT_146aa2b20;
          }
        }
        else if (param_1 == 1) {
          local_38 = &DAT_146aa2c70;
        }
        else if (param_1 == 2) {
          local_38 = &DAT_146aa2dc0;
        }
        else if (param_1 == 3) {
          local_38 = &DAT_146aa2f10;
        }
        else if (param_1 == 4) {
          local_38 = &DAT_146aa3060;
        }
        else {
          if (param_1 != 5) {
            return;
          }
          local_38 = &DAT_146aa31b0;
        }
      }
      else if (uVar3 == 0) {
        if (param_1 == 1) {
          local_38 = &DAT_146aa3300;
        }
        else if (param_1 == 2) {
          local_38 = &DAT_146aa3450;
        }
        else if (param_1 == 3) {
          local_38 = &DAT_146aa35a0;
        }
        else if (param_1 == 4) {
          local_38 = &DAT_146aa36f0;
        }
        else {
          if (param_1 != 5) {
            return;
          }
          local_38 = &DAT_146aa3840;
        }
      }
      else if (param_1 == 1) {
        local_38 = &DAT_146aa3990;
      }
      else if (param_1 == 2) {
        local_38 = &DAT_146aa3ae0;
      }
      else if (param_1 == 3) {
        local_38 = &DAT_146aa3c30;
      }
      else if (param_1 == 4) {
        local_38 = &DAT_146aa3d80;
      }
      else {
        if (param_1 != 5) {
          return;
        }
        local_38 = &DAT_146aa3ed0;
      }
    }
    else {
      plVar1 = (longlong *)(*(longlong *)(param_2 + 0x3090) + 0x38);
      local_38 = &DAT_146a9f790;
      local_30 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res18,&local_38);
      puVar5 = (undefined8 *)0x0;
      if (local_res18[0] != -1) {
        puVar5 = (undefined8 *)((longlong)local_res18[0] * 0x20 + *plVar1);
      }
      puVar7 = puVar5 + 2;
      if (puVar5 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      *param_5 = *puVar7;
      if (param_4 == '\0') {
        if ((*(uint *)(param_3 + 0x560) & 0x4000) == 0) {
          if ((*(int *)(DAT_146a9f610 + 4) == 1) &&
             (*(char *)(*(longlong *)(*(longlong *)(param_3 + 0x5c8) + 0x30) + 0x188) == '\x02')) {
            local_38 = &DAT_146aa5d00;
          }
          else {
            if (param_1 == 1) goto LAB_141d9d530;
            if (param_1 == 2) {
              local_38 = &DAT_146aa2730;
            }
            else if (param_1 == 3) {
              local_38 = &DAT_146aa2880;
            }
            else if (param_1 == 4) {
              local_38 = &DAT_146aa29d0;
            }
            else {
              if (param_1 != 5) {
                return;
              }
              local_38 = &DAT_146aa2b20;
            }
          }
        }
        else if (param_1 == 1) {
          local_38 = &DAT_146aa2c70;
        }
        else if (param_1 == 2) {
          local_38 = &DAT_146aa2dc0;
        }
        else if (param_1 == 3) {
          local_38 = &DAT_146aa2f10;
        }
        else if (param_1 == 4) {
          local_38 = &DAT_146aa3060;
        }
        else {
          if (param_1 != 5) {
            return;
          }
          local_38 = &DAT_146aa31b0;
        }
      }
      else if (param_1 == 1) {
        local_38 = &DAT_146aa4020;
      }
      else if (param_1 == 2) {
        local_38 = &DAT_146aa4170;
      }
      else if (param_1 == 3) {
        local_38 = &DAT_146aa42c0;
      }
      else if (param_1 == 4) {
        local_38 = &DAT_146aa4410;
      }
      else {
        if (param_1 != 5) {
          return;
        }
        local_38 = &DAT_146aa4560;
      }
    }
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x3090);
    local_38 = &DAT_146a9f790;
    local_30 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar6 + 0x38,local_res18,&local_38);
    puVar5 = (undefined8 *)0x0;
    if (local_res18[0] != -1) {
      puVar5 = (undefined8 *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar6 + 0x38));
    }
    puVar7 = puVar5 + 2;
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    *param_5 = *puVar7;
    if (param_1 == 1) {
      local_38 = &DAT_146aa46b0;
    }
    else if (param_1 == 2) {
      local_38 = &DAT_146aa4800;
    }
    else if (param_1 == 3) {
      local_38 = &DAT_146aa4950;
    }
    else if (param_1 == 4) {
      local_38 = &DAT_146aa4aa0;
    }
    else {
      if (param_1 != 5) {
        return;
      }
      local_38 = &DAT_146aa4bf0;
    }
  }
  lVar6 = *(longlong *)(param_2 + 0x3090);
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,local_res18,&local_38);
  puVar5 = (undefined8 *)0x0;
  if (local_res18[0] != -1) {
    puVar5 = (undefined8 *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  puVar7 = puVar5 + 2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  uVar4 = *puVar7;
LAB_141d9d71d:
  *param_6 = uVar4;
  return;
}



// FUNCTION 141d9d740 FUN_141d9d740 body=178 status=ok
// SIG undefined FUN_141d9d740(void)

int FUN_141d9d740(void)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aa25d8) {
    _Init_thread_header(&DAT_146aa25d8);
    if (DAT_146aa25d8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShadowQuality");
      lVar4 = 0;
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      DAT_146aa25d0 = lVar4;
      _Init_thread_footer(&DAT_146aa25d8);
    }
  }
  iVar1 = *(int *)(DAT_146aa25d0 + 4);
  if (iVar1 < 0) {
    return 0;
  }
  iVar2 = 5;
  if (iVar1 < 5) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 141d9d800 FUN_141d9d800 body=79 status=ok
// SIG undefined FUN_141d9d800(void)

longlong * FUN_141d9d800(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = FSceneRenderTargets::Get(param_3);
  if (*(char *)(param_4 + 0x1207) == '\0') {
    lVar1 = *(longlong *)(lVar1 + 0x438);
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x430);
  }
  lVar1 = *(longlong *)(lVar1 + 0x10);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141d9d850 GetWorldToShadowMatrix body=1257 status=ok
// SIG undefined GetWorldToShadowMatrix(void)

float * FProjectedShadowInfo::GetWorldToShadowMatrix
                  (longlong param_1,float *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  longlong lVar20;
  undefined8 uVar21;
  longlong *plVar22;
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
  
  if (param_4 == (undefined8 *)0x0) {
    plVar22 = *(longlong **)(param_1 + 0x28);
    if (plVar22 == (longlong *)0x0) {
      plVar22 = (longlong *)**(longlong **)(param_1 + 0x18);
    }
    lVar20 = (**(code **)(*plVar22 + 0x10))();
    uVar21 = *(undefined8 *)(lVar20 + 0x14);
  }
  else {
    uVar21 = *param_4;
  }
  fVar37 = *(float *)(param_1 + 0xa0);
  fVar38 = *(float *)(param_1 + 0xa4);
  fVar39 = *(float *)(param_1 + 0xa8);
  fVar7 = *(float *)(param_1 + 0xac);
  fVar8 = *(float *)(param_1 + 0x90);
  fVar9 = *(float *)(param_1 + 0x94);
  fVar10 = *(float *)(param_1 + 0x98);
  fVar11 = *(float *)(param_1 + 0x9c);
  fVar12 = *(float *)(param_1 + 0xb0);
  fVar13 = *(float *)(param_1 + 0xb4);
  fVar14 = *(float *)(param_1 + 0xb8);
  fVar15 = *(float *)(param_1 + 0xbc);
  fVar16 = *(float *)(param_1 + 0xc0);
  fVar17 = *(float *)(param_1 + 0xc4);
  fVar18 = *(float *)(param_1 + 200);
  fVar19 = *(float *)(param_1 + 0xcc);
  fVar1 = *(float *)(param_1 + 0x44);
  fVar31 = *(float *)(param_1 + 0x48);
  fVar36 = *(float *)(param_1 + 0x4c);
  fVar26 = 1.0 / (float)(int)uVar21;
  fVar27 = 1.0 / (float)(int)((ulonglong)uVar21 >> 0x20);
  fVar25 = (float)*(uint *)(param_1 + 0x538) * 0.5 * fVar26;
  fVar44 = (float)*(uint *)(param_1 + 0x53c) * 0.5 * fVar27;
  fVar23 = (float)(uint)(*(int *)(param_1 + 0x530) + *(int *)(param_1 + 0x540)) * fVar26 + fVar25;
  fVar24 = (float)(uint)(*(int *)(param_1 + 0x534) + *(int *)(param_1 + 0x540)) * fVar27 + fVar44;
  fVar44 = -fVar44;
  fVar32 = fVar8 * 1.0 + fVar37 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fVar33 = fVar9 * 1.0 + fVar38 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fVar34 = fVar10 * 1.0 + fVar39 * 0.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fVar35 = fVar11 * 1.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar19 * 0.0;
  fVar40 = fVar8 * 0.0 + fVar37 * 0.0 + fVar12 * 1.0 + fVar16 * 0.0;
  fVar41 = fVar9 * 0.0 + fVar38 * 0.0 + fVar13 * 1.0 + fVar17 * 0.0;
  fVar42 = fVar10 * 0.0 + fVar39 * 0.0 + fVar14 * 1.0 + fVar18 * 0.0;
  fVar43 = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 1.0 + fVar19 * 0.0;
  fVar28 = fVar1 * fVar8 + fVar31 * fVar37 + fVar36 * fVar12 + fVar16 * 1.0;
  fVar29 = fVar1 * fVar9 + fVar31 * fVar38 + fVar36 * fVar13 + fVar17 * 1.0;
  fVar30 = fVar1 * fVar10 + fVar31 * fVar39 + fVar36 * fVar14 + fVar18 * 1.0;
  fVar31 = fVar1 * fVar11 + fVar31 * fVar7 + fVar36 * fVar15 + fVar19 * 1.0;
  fVar36 = fVar8 * 0.0 + fVar37 * 1.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fVar37 = fVar9 * 0.0 + fVar38 * 1.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fVar38 = fVar10 * 0.0 + fVar39 * 1.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fVar39 = fVar11 * 0.0 + fVar7 * 1.0 + fVar15 * 0.0 + fVar19 * 0.0;
  fVar1 = *(float *)(param_1 + 0x150);
  *param_2 = fVar33 * 0.0 + fVar32 * fVar25 + fVar34 * 0.0 + fVar35 * fVar23;
  param_2[1] = fVar33 * fVar44 + fVar32 * 0.0 + fVar34 * 0.0 + fVar35 * fVar24;
  param_2[2] = fVar33 * 0.0 + fVar32 * 0.0 + fVar34 * fVar1 + fVar35 * 0.0;
  param_2[3] = fVar33 * 0.0 + fVar32 * 0.0 + fVar34 * 0.0 + fVar35 * 1.0;
  param_2[4] = fVar37 * 0.0 + fVar36 * fVar25 + fVar38 * 0.0 + fVar39 * fVar23;
  param_2[5] = fVar37 * fVar44 + fVar36 * 0.0 + fVar38 * 0.0 + fVar39 * fVar24;
  param_2[6] = fVar37 * 0.0 + fVar36 * 0.0 + fVar38 * fVar1 + fVar39 * 0.0;
  param_2[7] = fVar37 * 0.0 + fVar36 * 0.0 + fVar38 * 0.0 + fVar39 * 1.0;
  param_2[8] = fVar41 * 0.0 + fVar40 * fVar25 + fVar42 * 0.0 + fVar43 * fVar23;
  param_2[9] = fVar41 * fVar44 + fVar40 * 0.0 + fVar42 * 0.0 + fVar43 * fVar24;
  param_2[10] = fVar41 * 0.0 + fVar40 * 0.0 + fVar42 * fVar1 + fVar43 * 0.0;
  param_2[0xb] = fVar41 * 0.0 + fVar40 * 0.0 + fVar42 * 0.0 + fVar43 * 1.0;
  param_2[0xc] = fVar29 * 0.0 + fVar28 * fVar25 + fVar30 * 0.0 + fVar31 * fVar23;
  param_2[0xd] = fVar29 * fVar44 + fVar28 * 0.0 + fVar30 * 0.0 + fVar31 * fVar24;
  param_2[0xe] = fVar29 * 0.0 + fVar28 * 0.0 + fVar30 * fVar1 + fVar31 * 0.0;
  param_2[0xf] = fVar29 * 0.0 + fVar28 * 0.0 + fVar30 * 0.0 + fVar31 * 1.0;
  iVar2 = *(int *)(param_1 + 0x538);
  iVar3 = *(int *)(param_1 + 0x540);
  iVar4 = *(int *)(param_1 + 0x530);
  iVar5 = *(int *)(param_1 + 0x534);
  iVar6 = *(int *)(param_1 + 0x53c);
  *param_3 = (float)(uint)(iVar4 + iVar3) * fVar26;
  param_3[1] = (float)(uint)(iVar5 + iVar3) * fVar27;
  param_3[2] = (float)(uint)(iVar2 + iVar3 * 2 + iVar4) * fVar26;
  param_3[3] = (float)(uint)(iVar3 * 2 + iVar5 + iVar6) * fVar27;
  return param_2;
}



// FUNCTION 141d9dd40 FUN_141d9dd40 body=83 status=ok
// SIG undefined FUN_141d9dd40(void)

void FUN_141d9dd40(int param_1,int param_2)

{
  if (param_1 < 1) {
    return;
  }
  do {
    param_1 = param_1 / param_2;
  } while (0 < param_1);
  return;
}



// FUNCTION 141d9dda0 FUN_141d9dda0 body=549 status=ok
// SIG undefined FUN_141d9dda0(void)

void FUN_141d9dda0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res18 [2];
  int *local_res20;
  
  if (param_3[2] != 0) {
    piVar1 = (int *)(param_3[2] + 0x10);
    plVar9 = (longlong *)(param_2 + 0x410);
    uVar13 = 0;
    if (*(int *)(param_2 + 0x418) != *(int *)(param_2 + 0x444)) {
      iVar4 = *piVar1;
      lVar5 = *(longlong *)(param_2 + 0x450);
      if (*(longlong *)(param_2 + 0x450) == 0) {
        lVar5 = param_2 + 0x448;
      }
      iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_2 + 0x458) - 1U & (longlong)iVar4) * 4);
      if (iVar3 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar3 * 0x10 + *plVar9);
          if (*piVar8 == iVar4) {
            if ((iVar3 != -1) && (piVar8 != (int *)0x0)) goto LAB_141d9de59;
            break;
          }
          iVar3 = piVar8[2];
        } while (iVar3 != -1);
      }
    }
    local_res20 = piVar1;
    FUN_141d7fac0(plVar9,local_res18,&local_res20,0);
    piVar8 = (int *)((longlong)local_res18[0] * 0x10 + *plVar9);
LAB_141d9de59:
    if ((short)piVar8[1] != *(short *)(param_2 + 0x408)) {
      *(short *)(piVar8 + 1) = *(short *)(param_2 + 0x408);
      plVar9 = (longlong *)*param_3;
      uVar12 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
      if (plVar9 + (int)param_3[1] < plVar9) {
        uVar12 = uVar13;
      }
      uVar10 = uVar13;
      if (uVar12 != 0) {
        do {
          lVar5 = *plVar9;
          if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) &&
              (iVar4 = *(int *)(lVar5 + 0xe8), (iVar4 + 1U & 0x7fffffff) != 0)) &&
             ((-1 < iVar4 && (iVar4 < *(int *)(param_2 + 0x3f8))))) {
            lVar6 = *(longlong *)(param_2 + 0x3f0);
            if (*(longlong *)(param_2 + 0x3f0) == 0) {
              lVar6 = param_2 + 0x3e0;
            }
            iVar3 = iVar4;
            if (iVar4 < 0) {
              iVar3 = iVar4 + 0x1f;
            }
            puVar2 = (uint *)(lVar6 + (longlong)(iVar3 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
            if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
              lVar6 = *(longlong *)(param_1 + 0x48);
              if (*(longlong *)(param_1 + 0x48) == 0) {
                lVar6 = param_1 + 0x40;
              }
              iVar4 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x50) - 1U &
                                       (longlong)*(int *)(lVar5 + 0x10)) * 4);
              if (iVar4 != -1) {
                do {
                  uVar7 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x28;
                  if (*(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x28) ==
                      *(int *)(lVar5 + 0x10)) {
                    if (iVar4 != -1) goto LAB_141d9df83;
                    break;
                  }
                  iVar4 = *(int *)(uVar7 + 0x20);
                } while (iVar4 != -1);
              }
            }
            uVar7 = uVar13;
LAB_141d9df83:
            uVar11 = uVar7 + 8;
            if (uVar7 == 0) {
              uVar11 = uVar13;
            }
            if (uVar11 != 0) {
              FUN_141d9dda0(param_1,param_2);
            }
          }
          plVar9 = plVar9 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar12);
      }
    }
  }
  return;
}



// FUNCTION 141d9dfd0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e000 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e030 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e060 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e090 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e0c0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e0f0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e120 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e150 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e180 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e1b0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e1e0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<0,0,0,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<0,0,0,1,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e210 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<0,0,0,1,0,0,1,15,0,0,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<0,0,0,1,0,0,1,15,0,0,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e240 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e270 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000101;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e2d0 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000100;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e330 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,6,0,1,7,0,7,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010300;
  local_14 = 0x1000600;
  local_10 = 0x70007;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e390 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010300;
  local_14 = 0x1020000;
  local_10 = 0x2000007;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e3f0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010300;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e450 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,6,1,7,0,0,7,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010300;
  local_14 = 0x1060000;
  local_10 = 0x7000007;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e4b0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,1,1,1,0,7,1,1,1,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x5010700;
  local_14 = 0x10101;
  local_10 = 0x1010107;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e510 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x5010700;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e570 InitRHI body=105 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x1010101;
  local_24 = 0;
  local_18 = 0;
  local_10 = 1;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d9e5e0 FUN_141d9e5e0 body=1842 status=ok
// SIG undefined FUN_141d9e5e0(void)

bool FUN_141d9e5e0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  char cVar10;
  float *pfVar11;
  longlong *plVar12;
  void *pvVar13;
  void *_Dst;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  
  FUN_141d21070(*(undefined8 *)(param_1 + 8));
  bVar23 = DAT_146a9ecdc != 0;
  lVar16 = 0;
  if ((*(char *)(param_1 + 0x26b) == '\0') || (*(char *)(param_1 + 0x26d) != '\0')) {
    FUN_141da42f0(param_1,param_2);
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    FUN_141d92620(param_1,param_2);
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    FUN_141ab7940(param_1);
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    FUN_141da2980(param_1,param_3);
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    lVar22 = (longlong)*(int *)(param_1 + 200);
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    local_98 = 0;
    local_90 = 0.0;
    if (3 < lVar22) {
      pfVar11 = (float *)(*(longlong *)(param_1 + 0xc0) + 0x8e4);
      lVar14 = (lVar22 - 4U >> 2) + 1;
      fVar27 = 1.0 / (float)*(int *)(param_1 + 200);
      lVar16 = lVar14 * 4;
      do {
        pfVar3 = pfVar11 + 0x249b;
        pfVar4 = pfVar11 + 0x1867;
        pfVar5 = pfVar11 + 0xc33;
        pfVar1 = pfVar11 + -1;
        pfVar6 = pfVar11 + 0xc34;
        fVar9 = *pfVar11;
        fVar24 = fVar24 + (pfVar11[0x249a] + pfVar11[0x1866] + pfVar11[0xc32] + pfVar11[-2]) *
                          fVar27;
        pfVar7 = pfVar11 + 0x249c;
        pfVar8 = pfVar11 + 0x1868;
        pfVar11 = pfVar11 + 0x30d0;
        fVar25 = fVar25 + (*pfVar3 + *pfVar4 + *pfVar5 + *pfVar1) * fVar27;
        fVar26 = fVar26 + (*pfVar7 + *pfVar8 + *pfVar6 + fVar9) / (float)*(int *)(param_1 + 200);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      local_98 = CONCAT44(fVar25,fVar24);
      local_90 = fVar26;
    }
    if (lVar16 < lVar22) {
      pfVar11 = (float *)(*(longlong *)(param_1 + 0xc0) + 0x8e4 + lVar16 * 0x30d0);
      lVar22 = lVar22 - lVar16;
      fVar26 = 1.0 / (float)*(int *)(param_1 + 200);
      do {
        pfVar1 = pfVar11 + -1;
        fVar24 = fVar24 + fVar26 * pfVar11[-2];
        fVar27 = *pfVar11;
        pfVar11 = pfVar11 + 0xc34;
        fVar25 = fVar25 + fVar26 * *pfVar1;
        local_90 = local_90 + fVar26 * fVar27;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      local_98 = CONCAT44(fVar25,fVar24);
    }
    cVar10 = FUN_141636a40();
    fVar24 = local_90;
    uVar15 = local_98;
    if ((cVar10 == '\0') || (*(int *)(DAT_146a9eeb0 + 4) < 1)) {
      local_78 = local_98;
      local_70 = local_90;
      FUN_141ae2720(param_1,&local_78);
    }
    else {
      local_88 = local_98;
      local_80 = local_90;
      FUN_141ab50c0(param_1,&local_88);
    }
    cVar10 = FUN_141636a40();
    if ((cVar10 == '\0') || (*(int *)(DAT_146a9eeb0 + 4) < 1)) {
      local_68 = uVar15;
      local_60 = fVar24;
      FUN_141ae27a0(param_1,&local_68);
    }
    else {
      local_98 = uVar15;
      local_90 = fVar24;
      FUN_141ab5340(param_1,&local_98);
    }
    if (!bVar23) {
      iVar18 = (int)param_6[5];
      if (iVar18 != 0) {
        iVar19 = *(int *)(param_4 + 0x28);
        if (*(int *)(param_4 + 0x2c) < iVar19 + iVar18) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo();
          iVar19 = *(int *)(param_4 + 0x28);
        }
        plVar12 = (longlong *)param_6[4];
        if ((longlong *)param_6[4] == (longlong *)0x0) {
          plVar12 = param_6;
        }
        lVar16 = *(longlong *)(param_4 + 0x20);
        if (*(longlong *)(param_4 + 0x20) == 0) {
          lVar16 = param_4;
        }
        lVar16 = (lVar16 + (longlong)iVar19 * 8) - (longlong)plVar12;
        iVar19 = iVar18;
        do {
          lVar22 = *plVar12;
          *(longlong *)(lVar16 + (longlong)plVar12) = lVar22;
          if (lVar22 != 0) {
            LOCK();
            *(int *)(lVar22 + 0x48) = *(int *)(lVar22 + 0x48) + 1;
            UNLOCK();
          }
          plVar12 = plVar12 + 1;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + iVar18;
      }
      iVar18 = (int)param_6[5];
      plVar12 = (longlong *)param_6[4];
      if ((longlong *)param_6[4] == (longlong *)0x0) {
        plVar12 = param_6;
      }
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (*plVar12 != 0) {
          LOCK();
          piVar2 = (int *)(*plVar12 + 0x48);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar12 = plVar12 + 1;
      }
      *(undefined4 *)(param_6 + 5) = 0;
      if (*(int *)((longlong)param_6 + 0x2c) != 0) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                  (param_6,0);
      }
      if (*(int *)(param_4 + 0x28) != 0) {
        plVar12 = (longlong *)FTaskGraphInterface::Get();
        (**(code **)(*plVar12 + 0x48))(plVar12,param_4,DAT_1464a8210);
      }
      if ((((*(byte *)(param_1 + 0x3c) & 0x40) != 0) &&
          (cVar10 = FUN_141ee4480((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)]), cVar10 == '\0')) &&
         (FUN_141dd04e0(param_1,param_2), *(int *)(param_2 + 0x14) != 0)) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      }
      if (*param_3 != 0) {
        FIndirectLightingCache::FinalizeCacheUpdates
                  (*(longlong *)(param_1 + 8) + 0x13e8,*(longlong *)(param_1 + 8),param_1,param_3);
      }
      FUN_141d79460(param_1);
      FUN_141e0be00(param_1,param_2);
      iVar18 = 0;
      if (0 < *(int *)(param_1 + 200)) {
        do {
          FUN_141d4ef00(param_1,(longlong)iVar18 * 0x30d0 + *(longlong *)(param_1 + 0xc0),param_2);
          iVar18 = iVar18 + 1;
        } while (iVar18 < *(int *)(param_1 + 200));
      }
    }
    FUN_141da2540(param_1);
  }
  else {
    FRHICommandList::BeginFrame(param_2);
  }
  uVar17 = 0;
  uVar21 = uVar17;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      pvVar13 = (void *)0x0;
      lVar22 = *(longlong *)(param_1 + 0xc0) + uVar21;
      lVar16 = *(longlong *)(lVar22 + 0x1ab0);
      if (lVar16 == 0) {
        _Dst = (void *)operator_new(0x300);
        if (_Dst != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst,0,0x300);
          FForwardLightData::FForwardLightData(_Dst);
          *(undefined8 *)((longlong)_Dst + 0x280) = 0;
          *(undefined8 *)((longlong)_Dst + 0x290) = 0;
          *(undefined8 *)((longlong)_Dst + 0x298) = 0;
          *(undefined4 *)((longlong)_Dst + 0x2a0) = 0;
          *(undefined ***)((longlong)_Dst + 0x288) = &PTR__scalar_deleting_destructor__144deb628;
          *(undefined8 *)((longlong)_Dst + 0x2a8) = 0;
          *(undefined8 *)((longlong)_Dst + 0x2b0) = 0;
          *(undefined8 *)((longlong)_Dst + 0x2b8) = 0;
          *(undefined8 *)((longlong)_Dst + 0x2c0) = 0;
          *(undefined4 *)((longlong)_Dst + 0x2c8) = 0;
          *(undefined8 *)((longlong)_Dst + 0x2d0) = 0;
          *(undefined8 *)((longlong)_Dst + 0x2d8) = 0;
          *(undefined8 *)((longlong)_Dst + 0x2e0) = 0;
          *(undefined8 *)((longlong)_Dst + 0x2e8) = 0;
          *(undefined4 *)((longlong)_Dst + 0x2f0) = 0;
          *(undefined8 *)((longlong)_Dst + 0x2f8) = 0;
          pvVar13 = _Dst;
        }
        *(void **)(lVar22 + 0x2fb8) = pvVar13;
        FUN_141d15fd0(lVar22 + 0x2fb8);
        uVar15 = *(undefined8 *)(lVar22 + 0x2fb8);
      }
      else {
        if (*(longlong *)(lVar16 + 0x1320) == 0) {
          pvVar13 = (void *)operator_new(0x300);
          if (pvVar13 == (void *)0x0) {
            pvVar13 = (void *)0x0;
          }
          else {
            _guard_xfg_dispatch_icall_nop(pvVar13,0,0x300);
            FForwardLightData::FForwardLightData(pvVar13);
            *(undefined8 *)((longlong)pvVar13 + 0x280) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x290) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x298) = 0;
            *(undefined4 *)((longlong)pvVar13 + 0x2a0) = 0;
            *(undefined ***)((longlong)pvVar13 + 0x288) =
                 &PTR__scalar_deleting_destructor__144deb628;
            *(undefined8 *)((longlong)pvVar13 + 0x2a8) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x2b0) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x2b8) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x2c0) = 0;
            *(undefined4 *)((longlong)pvVar13 + 0x2c8) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x2d0) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x2d8) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x2e0) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x2e8) = 0;
            *(undefined4 *)((longlong)pvVar13 + 0x2f0) = 0;
            *(undefined8 *)((longlong)pvVar13 + 0x2f8) = 0;
          }
          *(void **)(*(longlong *)(lVar22 + 0x1ab0) + 0x1320) = pvVar13;
          FUN_141d15fd0();
          lVar16 = *(longlong *)(lVar22 + 0x1ab0);
        }
        uVar15 = *(undefined8 *)(lVar16 + 0x1320);
      }
      *(undefined8 *)(lVar22 + 0x1a30) = uVar15;
      *(undefined1 *)(lVar22 + 0x3099) = *(undefined1 *)(param_1 + 0x2e5);
      if (*(longlong *)(lVar22 + 0x1ab0) != 0) {
        FUN_141c5b340();
      }
      FUN_141d6ab00(lVar22);
      uVar20 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar20;
      uVar21 = uVar21 + 0x30d0;
    } while ((int)uVar20 < *(int *)(param_1 + 200));
  }
  FUN_141e0ae70(param_1);
  FUN_141d6bd80(param_1,param_2);
  FUN_141d4fa70(*(undefined8 *)(param_1 + 8));
  return bVar23;
}



// FUNCTION 141d9ed20 FUN_141d9ed20 body=251 status=ok
// SIG undefined FUN_141d9ed20(void)

void FUN_141d9ed20(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(int *)(param_4 + 0x28) != 0) {
    plVar2 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar2 + 0x48))(plVar2,param_4,DAT_1464a8210);
  }
  if ((*(byte *)(param_1 + 0x3c) & 0x40) != 0) {
    cVar1 = FUN_141ee4480((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)]);
    if (cVar1 == '\0') {
      FUN_141dd04e0(param_1,param_2);
      if (*(int *)(param_2 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      }
    }
  }
  if (*param_3 != 0) {
    FIndirectLightingCache::FinalizeCacheUpdates
              (*(longlong *)(param_1 + 8) + 0x13e8,*(longlong *)(param_1 + 8),param_1,param_3);
  }
  FUN_141d79460(param_1);
  FUN_141e0be00(param_1,param_2);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      FUN_141d4ef00(param_1,(longlong)iVar3 * 0x30d0 + *(longlong *)(param_1 + 0xc0),param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 200));
  }
  return;
}



// FUNCTION 141d9ee20 FUN_141d9ee20 body=265 status=ok
// SIG undefined FUN_141d9ee20(void)

undefined8 FUN_141d9ee20(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar3 = (longlong)*(int *)(param_3 + 0x58) * 0x70 + *(longlong *)(param_1 + 0x1c8);
  if (0 < *(int *)(lVar3 + 0x48)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(lVar3 + 0x40));
      if (((((*(byte *)(lVar1 + 0x560) & 1) != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) &&
          (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18), lVar2 != 0)) &&
         ((lVar2 = FSceneViewState::GetLightPropagationVolume
                             (lVar2,*(undefined4 *)(param_1 + 0x2a0),0), lVar2 != 0 &&
          ((*(byte *)(lVar1 + 0x560) & 0x40) != 0)))) {
        FUN_141ba0150(lVar2,param_2,*(undefined8 *)(lVar1 + 0x38),
                      **(longlong **)(lVar1 + 0x18) + 0x10,(*(longlong **)(lVar1 + 0x18))[1] + 0x10,
                      *(longlong *)(lVar1 + 0x28) + 0x10,lVar1,*(longlong *)(param_3 + 0x30) + 0x100
                     );
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(lVar3 + 0x48));
  }
  return 1;
}



// FUNCTION 141d9ef30 FUN_141d9ef30 body=668 status=ok
// SIG undefined FUN_141d9ef30(void)

int * FUN_141d9ef30(longlong param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x108) <= param_3) {
    iVar2 = param_3 + 1;
    *(int *)(param_1 + 0x108) = iVar2;
    if (*(int *)(param_1 + 0x10c) < iVar2) {
      FUN_14157a330();
      iVar2 = *(int *)(param_1 + 0x108);
    }
    iVar8 = *(int *)(param_1 + 0x120);
    if (iVar8 < iVar2) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar6 = param_1;
        }
        *(undefined4 *)(lVar6 + (longlong)iVar8 * 8) = 0xffffffff;
        lVar6 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar6 = param_1;
        }
        *(undefined4 *)(lVar6 + 4 + (longlong)iVar8 * 8) = *(undefined4 *)(param_1 + 0x128);
        if (*(int *)(param_1 + 300) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x100);
          if (*(longlong *)(param_1 + 0x100) == 0) {
            lVar6 = param_1;
          }
          *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x128) * 8) = iVar8;
        }
        *(int *)(param_1 + 0x128) = iVar8;
        iVar8 = *(int *)(param_1 + 0x120);
        iVar2 = iVar8 + 1;
        *(int *)(param_1 + 0x120) = iVar2;
        if (*(int *)(param_1 + 0x124) <= iVar8) {
          uVar3 = (int)(iVar8 + 0x20 + (iVar8 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          iVar4 = 1;
          if (1 < uVar3) {
            iVar2 = *(int *)(param_1 + 0x124) + 0x1f;
            lVar6 = 4;
            if (((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
              lVar6 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
            }
            uVar5 = FMemory::QuantizeSize(lVar6 * 4,0);
            iVar2 = *(int *)(param_1 + 0x120);
            iVar4 = (int)(uVar5 >> 2);
            if (iVar4 < (int)uVar3) {
              iVar4 = 0x7fffffff;
            }
          }
          *(int *)(param_1 + 0x124) = iVar4 << 5;
          TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x110,iVar2 + -1);
        }
        lVar6 = *(longlong *)(param_1 + 0x118);
        if (*(longlong *)(param_1 + 0x118) == 0) {
          lVar6 = param_1 + 0x110;
        }
        iVar2 = iVar8;
        if (iVar8 < 0) {
          iVar2 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)(lVar6 + (longlong)(iVar2 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
        iVar8 = *(int *)(param_1 + 0x120);
      } while (iVar8 < *(int *)(param_1 + 0x108));
    }
  }
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
  lVar6 = (longlong)param_3 * 8;
  lVar7 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar7 = param_1;
  }
  iVar2 = *(int *)(lVar6 + lVar7);
  iVar8 = *(int *)(lVar6 + 4 + lVar7);
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x128) = iVar8;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar2 * 8) = iVar8;
  }
  if (iVar8 != -1) {
    lVar7 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar7 = param_1;
    }
    *(int *)(lVar7 + (longlong)iVar8 * 8) = iVar2;
  }
  *param_2 = param_3;
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar7 = param_1 + 0x110;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + lVar6;
  return param_2;
}



// FUNCTION 141d9f1d0 FUN_141d9f1d0 body=443 status=ok
// SIG undefined FUN_141d9f1d0(void)

int * FUN_141d9f1d0(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] <= param_3) {
    iVar2 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      FUN_141dab650();
      iVar2 = (int)param_1[1];
    }
    iVar4 = (int)param_1[5];
    if (iVar4 < iVar2) {
      do {
        *(undefined4 *)((longlong)iVar4 * 0x70 + *param_1) = 0xffffffff;
        *(int *)((longlong)iVar4 * 0x70 + 4 + *param_1) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar4;
        }
        *(int *)(param_1 + 6) = iVar4;
        iVar2 = (int)param_1[5];
        *(int *)(param_1 + 5) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
          uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar3 < 5) {
            iVar4 = 4;
          }
          else {
            iVar4 = (int)((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10 + uVar3;
            if (iVar4 < (int)uVar3) {
              iVar4 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar4 << 5;
          TBitArray<SceneRenderingBitArrayAllocator>::Realloc(param_1 + 2,iVar2);
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        iVar4 = iVar2;
        if (iVar2 < 0) {
          iVar4 = iVar2 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar4 = (int)param_1[5];
      } while (iVar4 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar6 = *param_1;
  lVar7 = (longlong)param_3 * 0x70;
  iVar2 = *(int *)(lVar7 + lVar6);
  iVar4 = *(int *)(lVar7 + 4 + lVar6);
  if (iVar2 == -1) {
    *(int *)(param_1 + 6) = iVar4;
  }
  else {
    *(int *)((longlong)iVar2 * 0x70 + 4 + lVar6) = iVar4;
    lVar6 = *param_1;
  }
  if (iVar4 != -1) {
    *(int *)((longlong)iVar4 * 0x70 + lVar6) = iVar2;
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar7;
  return param_2;
}



// FUNCTION 141d9f390 FUN_141d9f390 body=443 status=ok
// SIG undefined FUN_141d9f390(void)

int * FUN_141d9f390(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] <= param_3) {
    iVar2 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      FUN_141dab790();
      iVar2 = (int)param_1[1];
    }
    iVar4 = (int)param_1[5];
    if (iVar4 < iVar2) {
      do {
        *(undefined4 *)((longlong)iVar4 * 0x78 + *param_1) = 0xffffffff;
        *(int *)((longlong)iVar4 * 0x78 + 4 + *param_1) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x78 + *param_1) = iVar4;
        }
        *(int *)(param_1 + 6) = iVar4;
        iVar2 = (int)param_1[5];
        *(int *)(param_1 + 5) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
          uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar3 < 5) {
            iVar4 = 4;
          }
          else {
            iVar4 = (int)((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10 + uVar3;
            if (iVar4 < (int)uVar3) {
              iVar4 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar4 << 5;
          TBitArray<SceneRenderingBitArrayAllocator>::Realloc(param_1 + 2,iVar2);
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        iVar4 = iVar2;
        if (iVar2 < 0) {
          iVar4 = iVar2 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar4 = (int)param_1[5];
      } while (iVar4 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar6 = *param_1;
  lVar7 = (longlong)param_3 * 0x78;
  iVar2 = *(int *)(lVar7 + lVar6);
  iVar4 = *(int *)(lVar7 + 4 + lVar6);
  if (iVar2 == -1) {
    *(int *)(param_1 + 6) = iVar4;
  }
  else {
    *(int *)((longlong)iVar2 * 0x78 + 4 + lVar6) = iVar4;
    lVar6 = *param_1;
  }
  if (iVar4 != -1) {
    *(int *)((longlong)iVar4 * 0x78 + lVar6) = iVar2;
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar7;
  return param_2;
}



// FUNCTION 141d9f550 FUN_141d9f550 body=704 status=ok
// SIG undefined FUN_141d9f550(void)

undefined8
FUN_141d9f550(longlong param_1,float param_2,float param_3,float param_4,longlong param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  int local_res20 [2];
  int *local_98 [12];
  
  lVar7 = FUN_1428742e0();
  fVar14 = DAT_1464c313c;
  if (DAT_146a9ecec != 0) {
    fVar14 = 0.0;
  }
  param_4 = *(float *)(lVar7 + 0x1c) * param_4;
  if (((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c) & 0x4000000) == 0) ||
     (cVar5 = (**(code **)(**(longlong **)(param_5 + 8) + 0xf8))(), cVar5 != '\0')) {
    if ((param_2 <= (param_4 + fVar14) * (param_4 + fVar14)) && (param_3 * param_3 <= param_2)) {
      bVar4 = param_2 <= param_4 * param_4;
      bVar13 = false;
      if ((((DAT_146a9ecec == 0) && ((param_4 - fVar14) * (param_4 - fVar14) < param_2)) &&
          (lVar7 = *(longlong *)(param_1 + 0x18), lVar7 != 0)) &&
         ((*(uint *)(param_1 + 0x28cc) & 0x100) == 0)) {
        iVar2 = *(int *)(param_5 + 0xe8);
        uVar12 = 1 << ((byte)iVar2 & 0x1f);
        lVar9 = *(longlong *)(param_1 + 0x1b10);
        if (*(longlong *)(param_1 + 0x1b10) == 0) {
          lVar9 = param_1 + 0x1b00;
        }
        if ((*(uint *)(lVar9 + ((longlong)iVar2 >> 5) * 4) & uVar12) == 0) {
          plVar11 = (longlong *)(lVar7 + 0x2b0);
          if (*(int *)(lVar7 + 0x2b8) != *(int *)(lVar7 + 0x2e4)) {
            iVar3 = *(int *)(param_5 + 0x10);
            lVar9 = *(longlong *)(lVar7 + 0x2f0);
            if (*(longlong *)(lVar7 + 0x2f0) == 0) {
              lVar9 = lVar7 + 0x2e8;
            }
            iVar6 = *(int *)(lVar9 + ((longlong)*(int *)(lVar7 + 0x2f8) - 1U & (longlong)iVar3) * 4)
            ;
            if (iVar6 != -1) {
              do {
                piVar10 = (int *)((longlong)iVar6 * 0x30 + *plVar11);
                if (*piVar10 == iVar3) {
                  if ((iVar6 != -1) && (piVar10 != (int *)0x0)) goto LAB_141d9f767;
                  break;
                }
                iVar6 = piVar10[10];
              } while (iVar6 != -1);
            }
          }
          local_98[0] = (int *)(param_5 + 0x10);
          FUN_141d7fd80(plVar11,local_res20,local_98,0);
          piVar10 = (int *)((longlong)local_res20[0] * 0x30 + *plVar11);
LAB_141d9f767:
          FUN_141db4810(piVar10 + 2,param_1,bVar4);
          bVar13 = *(longlong *)(piVar10 + 4) != 0;
          *(longlong *)(*(longlong *)(param_1 + 0x1b20) + (longlong)iVar2 * 8) =
               *(longlong *)(piVar10 + 4);
          lVar7 = *(longlong *)(param_1 + 0x1b10);
          if (*(longlong *)(param_1 + 0x1b10) == 0) {
            lVar7 = param_1 + 0x1b00;
          }
          puVar1 = (uint *)(lVar7 + ((longlong)iVar2 >> 5) * 4);
          *puVar1 = *puVar1 | uVar12;
        }
      }
      if ((bVar4) || (bVar13)) goto LAB_141d9f5d8;
    }
    uVar8 = 1;
  }
  else {
LAB_141d9f5d8:
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 141d9f810 FUN_141d9f810 body=399 status=ok
// SIG undefined FUN_141d9f810(void)

longlong FUN_141d9f810(longlong param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  uint7 uVar2;
  longlong lVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = _guard_xfg_dispatch_icall_nop(param_4 * 0.017453292);
  fVar5 = (float)*(undefined8 *)(param_1 + 0x8dc) - *param_3;
  fVar6 = *(float *)(param_1 + 0x8e4) - param_3[2];
  fVar4 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x8dc) >> 0x20) - param_3[1];
  uVar2 = (uint7)(uint3)((uint)*(float *)(param_1 + 0x8e4) >> 8);
  if ((((*(float *)(param_1 + 0x520) * param_2[4] + *(float *)(param_1 + 0x510) * *param_2 +
         *(float *)(param_1 + 0x530) * param_2[8] < fVar3) ||
       (*(float *)(param_1 + 0x524) * param_2[5] + *(float *)(param_1 + 0x514) * param_2[1] +
        *(float *)(param_1 + 0x534) * param_2[9] < fVar3)) ||
      (*(float *)(param_1 + 0x528) * param_2[6] + *(float *)(param_1 + 0x518) * param_2[2] +
       *(float *)(param_1 + 0x538) * param_2[10] < fVar3)) ||
     (param_5 * param_5 < fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6)) {
    lVar1 = CONCAT71(uVar2,1);
  }
  else {
    lVar1 = (ulonglong)uVar2 << 8;
  }
  return lVar1;
}


