// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a7fe40 FUN_142a7fe40 body=159 status=ok
// SIG undefined FUN_142a7fe40(void)

void FUN_142a7fe40(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) {
    iVar1 = FUN_1428cf800(lVar2);
    if (iVar1 != 1) {
      lVar2 = UWorld::GetAudioDevice(lVar2);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x358) & 0x20) != 0)) {
        local_28 = 0;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = lVar2;
          *puVar3 = &PTR_FUN_143f77b70;
        }
        local_58[0] = &LAB_142a7fb60;
        Audio::FMixerDevice::AudioRenderThreadCommand(lVar2,local_58);
      }
    }
  }
  return;
}



// FUNCTION 142a7fee0 ClearMemory body=107 status=ok
// SIG undefined ClearMemory(void)

void Audio::FOnePoleLPFBank::ClearMemory(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_1[3];
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar1 * 4),0,(longlong)(iVar2 - iVar1) << 2);
    return;
  }
  if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
    *(int *)(param_1 + 1) = iVar2;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  }
  return;
}



// FUNCTION 142a7ff50 ClearSoundEffectSubmixes body=252 status=ok
// SIG undefined ClearSoundEffectSubmixes(void)

void Audio::FMixerSubmix::ClearSoundEffectSubmixes(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x7c);
  lVar3 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x78);
  if (iVar5 < 0) {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar3 + 0x10);
      do {
        plVar4 = (longlong *)*plVar6;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar6 = plVar6 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (iVar5 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(param_1 + 0x70),0);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar3 + 0x10);
      do {
        plVar4 = (longlong *)*plVar6;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar6 = plVar6 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 142a80050 FUN_142a80050 body=506 status=ok
// SIG undefined FUN_142a80050(void)

void FUN_142a80050(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x80);
  uVar3 = *(uint *)(param_1 + 0xa8);
  puVar1 = (uint *)(param_1 + 0x90);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_142a8011d;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142a8011d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xa8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142a801e3;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142a801e3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    FUN_142a8c230((longlong)(int)uStack_4c * 0x78 + *plVar2 + 8);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 142a80250 ComputeGain body=817 status=ok
// SIG undefined ComputeGain(void)

void Audio::FDynamicsProcessor::ComputeGain(int *param_1,float param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *local_58;
  int local_50;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    fVar11 = 1.0;
  }
  else if (iVar1 == 2) {
    fVar11 = 1.0 / (float)param_1[0x1a] - 1.0;
  }
  else if (iVar1 == 3) {
    fVar11 = -1.0;
  }
  else {
    fVar11 = 1.0 - 1.0 / (float)param_1[0x1a];
  }
  fVar9 = (float)param_1[0x1b];
  if (0.0 < fVar9) {
    fVar10 = (float)param_1[0x19] - fVar9;
    if ((fVar10 < param_2) && (param_2 < (float)param_1[0x19] + fVar9)) {
      **(float **)(param_1 + 10) = fVar10;
      fVar9 = (float)param_1[0x1b] + (float)param_1[0x19];
      local_58 = (float *)0x0;
      if (0.0 <= fVar9) {
        fVar9 = 0.0;
      }
      *(float *)(*(longlong *)(param_1 + 10) + 8) = fVar9;
      *(undefined4 *)(*(longlong *)(param_1 + 10) + 4) = 0;
      *(float *)(*(longlong *)(param_1 + 10) + 0xc) = fVar11;
      local_50 = param_1[0xc];
      lVar4 = (longlong)local_50;
      _Src = *(void **)(param_1 + 10);
      if (local_50 == 0) {
        pfVar7 = (float *)0x0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
        pfVar7 = local_58;
        ::_guard_xfg_dispatch_icall_nop(local_58,_Src,lVar4 << 3);
      }
      lVar4 = (longlong)local_50;
      fVar11 = 0.0;
      if (0 < lVar4) {
        lVar6 = 0;
        pfVar8 = pfVar7;
        do {
          lVar2 = 0;
          fVar9 = 1.0;
          if (3 < lVar4) {
            lVar3 = 2;
            pfVar5 = pfVar7 + 4;
            do {
              if (lVar6 != lVar2) {
                fVar10 = *pfVar8 - pfVar5[-4];
                if (ABS(fVar10) < 1e-08) {
                  fVar10 = 1e-08;
                }
                fVar9 = fVar9 * ((param_2 - pfVar5[-4]) / fVar10);
              }
              if (lVar6 != lVar3 + -1) {
                fVar10 = *pfVar8 - pfVar5[-2];
                if (ABS(fVar10) < 1e-08) {
                  fVar10 = 1e-08;
                }
                fVar9 = fVar9 * ((param_2 - pfVar5[-2]) / fVar10);
              }
              if (lVar6 != lVar3) {
                fVar10 = *pfVar8 - *pfVar5;
                if (ABS(fVar10) < 1e-08) {
                  fVar10 = 1e-08;
                }
                fVar9 = fVar9 * ((param_2 - *pfVar5) / fVar10);
              }
              if (lVar6 != lVar3 + 1) {
                fVar10 = *pfVar8 - pfVar5[2];
                if (ABS(fVar10) < 1e-08) {
                  fVar10 = 1e-08;
                }
                fVar9 = fVar9 * ((param_2 - pfVar5[2]) / fVar10);
              }
              lVar2 = lVar2 + 4;
              pfVar5 = pfVar5 + 8;
              lVar3 = lVar3 + 4;
            } while (lVar2 < lVar4 + -3);
          }
          for (; lVar2 < lVar4; lVar2 = lVar2 + 1) {
            if (lVar6 != lVar2) {
              fVar10 = *pfVar8 - pfVar7[lVar2 * 2];
              if (ABS(fVar10) < 1e-08) {
                fVar10 = 1e-08;
              }
              fVar9 = fVar9 * ((param_2 - pfVar7[lVar2 * 2]) / fVar10);
            }
          }
          pfVar5 = pfVar8 + 1;
          lVar6 = lVar6 + 1;
          pfVar8 = pfVar8 + 2;
          fVar11 = fVar11 + fVar9 * *pfVar5;
        } while (lVar6 < lVar4);
      }
      if (pfVar7 != (float *)0x0) {
        FMemory::Free(pfVar7);
      }
    }
  }
  fVar11 = ((float)param_1[0x19] - param_2) * fVar11;
  if (0.0 <= fVar11) {
    fVar11 = 0.0;
  }
  ::_guard_xfg_dispatch_icall_nop(10.0,fVar11 * 0.05);
  return;
}



// FUNCTION 142a80590 FUN_142a80590 body=457 status=ok
// SIG undefined FUN_142a80590(void)

undefined8 FUN_142a80590(longlong param_1,byte param_2,undefined8 *param_3)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if ((((*(int *)(*(longlong *)(param_1 + 0x18) + 0xc) == 1) &&
       ((*(byte *)(*(longlong *)(param_1 + 8) + 0x359) & 4) != 0)) && (DAT_146b29e28 == 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x10) + 0xa8) == 1)) {
    uVar3 = FUN_142a81e00();
    return uVar3;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xa4);
  if ((uVar2 & 0x20) != 0) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x100);
    if ((0.01 < ABS(fVar1 - *(float *)(param_1 + 0x140))) ||
       (*(char *)((longlong)*(int *)((longlong)*(longlong **)(param_1 + 0xa8) + 0xcc) +
                 *(longlong *)(**(longlong **)(param_1 + 0xa8) + 0x110)) != '\0')) {
      *(float *)(param_1 + 0x140) = fVar1;
      *(undefined4 *)(param_3 + 1) = 0;
      if ((*(int *)((longlong)param_3 + 0xc) < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
        TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(param_3,0);
      }
      FUN_142a847f0(*(undefined8 *)(param_1 + 0x88),param_2,*(longlong *)(param_1 + 0x10),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x100),
                    *(undefined4 *)(param_1 + 0x1bc),param_3);
      return 1;
    }
  }
  if (*(int *)(param_3 + 1) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x8d0);
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x7e8 + (ulonglong)param_2 * 4);
  }
  if (8 < iVar4) {
    *(int *)(param_3 + 1) = iVar4;
    if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
      TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_3);
    }
    _guard_xfg_dispatch_icall_nop((void *)*param_3,0,(longlong)iVar4 << 2);
    return 1;
  }
  FUN_142a774f0(param_3,(longlong)(int)((iVar4 + (uVar2 >> 0xc & 1) * 8) * 8 + -8) * 0x10 +
                        DAT_146b29e98);
  return 1;
}



// FUNCTION 142a80760 FUN_142a80760 body=1453 status=ok
// SIG undefined FUN_142a80760(void)

void FUN_142a80760(longlong *param_1,char param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  float *pfVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  int local_res18;
  uint local_88;
  
  lVar7 = (longlong)param_3;
  if (lVar7 < param_4) {
    lVar10 = param_4 - lVar7;
    lVar7 = lVar7 * 0x4b0;
    do {
      uVar22 = 0;
      lVar4 = param_1[0xe];
      bVar3 = *(byte *)(lVar7 + 0x478 + lVar4);
      if ((((char)bVar3 < '\0') && ((bVar3 & 8) != 0)) &&
         ((bVar3 = *(byte *)(lVar7 + 0x479 + lVar4), (bVar3 & 8) == 0 ||
          (*(char *)(lVar7 + 0x228 + lVar4) == '\0')))) {
        iVar14 = *(int *)(lVar7 + 0xa8 + lVar4);
        if (param_2 == '\0') {
          if (iVar14 == -1) goto LAB_142a80825;
        }
        else if (iVar14 != -1) {
LAB_142a80825:
          if ((bVar3 & 0x20) == 0) {
            local_88 = 0;
            piVar13 = (int *)(lVar4 + 0x3a0 + lVar7);
            do {
              uVar23 = (uint)uVar22;
              if ((char)piVar13[2] != '\0') {
                if ((char)uVar22 == '\x05') {
                  *piVar13 = 0;
                  if (0x7fffffff < (uint)piVar13[1]) {
                    TArray<float,FDefaultAllocator>::ResizeTo(piVar13 + -2);
                  }
                  iVar17 = *(int *)(lVar7 + 0x490 + lVar4) * (int)param_1[0x27];
                  iVar14 = *piVar13;
                  iVar6 = iVar14 + iVar17;
                  *piVar13 = iVar6;
                  if (piVar13[1] < iVar6) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar13 + -2);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(piVar13 + -2) + (longlong)iVar14 * 4),0,
                             (longlong)iVar17 << 2);
                  puVar5 = *(undefined8 **)(lVar7 + 0x380 + lVar4);
                  _guard_xfg_dispatch_icall_nop
                            (*(void **)(piVar13 + -2),(void *)*puVar5,
                             (longlong)*(int *)(puVar5 + 1) << 2);
                }
                else {
                  if ((char)uVar22 == '\0') {
                    iVar14 = *(int *)(*param_1 + 0x8d0);
                  }
                  else {
                    iVar14 = *(int *)(*param_1 + 0x7e8 + (uVar22 & 0xff) * 4);
                  }
                  *piVar13 = 0;
                  if ((piVar13[1] < 0) && (piVar13[1] != 0)) {
                    TArray<float,FDefaultAllocator>::ResizeTo(piVar13 + -2);
                  }
                  iVar6 = *piVar13;
                  iVar18 = (int)param_1[0x27] * iVar14;
                  iVar17 = iVar6 + iVar18;
                  *piVar13 = iVar17;
                  if (piVar13[1] < iVar17) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar13 + -2);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(piVar13 + -2) + (longlong)iVar6 * 4),0,
                             (longlong)iVar18 << 2);
                  if ((*(byte *)(lVar7 + 0x478 + lVar4) & 0x10) == 0) {
                    iVar6 = 0;
                    lVar12 = *(longlong *)(piVar13 + -2);
                    local_res18 = 0;
                    lVar20 = **(longlong **)(lVar7 + 0x380 + lVar4);
                    if (0 < (int)param_1[0x27]) {
                      do {
                        lVar24 = 0;
                        lVar11 = (longlong)piVar13[-4];
                        uVar23 = *(uint *)(lVar7 + 0x494 + lVar4);
                        uVar22 = (ulonglong)uVar23;
                        lVar16 = lVar24;
                        if (3 < lVar11) {
                          lVar19 = (lVar11 - 4U >> 2) + 1;
                          lVar16 = lVar19 * 4;
                          lVar9 = lVar24;
                          do {
                            lVar21 = *(longlong *)(piVar13 + -6);
                            *(float *)(lVar9 + lVar21) =
                                 *(float *)(lVar9 + 0xc + lVar21) + *(float *)(lVar9 + lVar21);
                            lVar21 = *(longlong *)(piVar13 + -6);
                            *(float *)(lVar9 + 0x14 + lVar21) =
                                 *(float *)(lVar9 + 0x20 + lVar21) +
                                 *(float *)(lVar9 + 0x14 + lVar21);
                            lVar21 = *(longlong *)(piVar13 + -6);
                            *(float *)(lVar9 + 0x28 + lVar21) =
                                 *(float *)(lVar9 + 0x34 + lVar21) +
                                 *(float *)(lVar9 + 0x28 + lVar21);
                            lVar21 = *(longlong *)(piVar13 + -6);
                            *(float *)(lVar9 + 0x3c + lVar21) =
                                 *(float *)(lVar9 + 0x48 + lVar21) +
                                 *(float *)(lVar9 + 0x3c + lVar21);
                            lVar9 = lVar9 + 0x50;
                            lVar19 = lVar19 + -1;
                          } while (lVar19 != 0);
                        }
                        if (lVar16 < lVar11) {
                          lVar9 = lVar16 * 0x14;
                          lVar11 = lVar11 - lVar16;
                          do {
                            lVar16 = *(longlong *)(piVar13 + -6);
                            *(float *)(lVar9 + lVar16) =
                                 *(float *)(lVar9 + 0xc + lVar16) + *(float *)(lVar9 + lVar16);
                            lVar9 = lVar9 + 0x14;
                            lVar11 = lVar11 + -1;
                          } while (lVar11 != 0);
                        }
                        if (0 < (int)uVar23) {
                          lVar11 = 0;
                          lVar16 = (longlong)iVar14;
                          pfVar15 = (float *)(lVar20 + (longlong)(int)(uVar23 * local_res18) * 4);
                          do {
                            fVar1 = *pfVar15;
                            iVar17 = 0;
                            lVar9 = 0;
                            if (3 < lVar16) {
                              lVar21 = (lVar16 - 4U >> 2) + 1;
                              lVar9 = lVar21 * 4;
                              lVar19 = lVar11;
                              do {
                                lVar8 = *(longlong *)(piVar13 + -6);
                                if (0.0 < *(float *)(lVar19 + lVar8)) {
                                  *(float *)(lVar12 + (longlong)(iVar6 + iVar17) * 4) =
                                       *(float *)(lVar19 + lVar8) * fVar1 +
                                       *(float *)(lVar12 + (longlong)(iVar6 + iVar17) * 4);
                                  lVar8 = *(longlong *)(piVar13 + -6);
                                }
                                fVar2 = *(float *)(lVar19 + 0x14 + lVar8);
                                if (0.0 < fVar2) {
                                  *(float *)(lVar12 + 4 + (longlong)(iVar6 + iVar17) * 4) =
                                       fVar2 * fVar1 +
                                       *(float *)(lVar12 + 4 + (longlong)(iVar6 + iVar17) * 4);
                                  lVar8 = *(longlong *)(piVar13 + -6);
                                }
                                fVar2 = *(float *)(lVar19 + 0x28 + lVar8);
                                if (0.0 < fVar2) {
                                  *(float *)(lVar12 + 8 + (longlong)(iVar6 + iVar17) * 4) =
                                       fVar2 * fVar1 +
                                       *(float *)(lVar12 + 8 + (longlong)(iVar6 + iVar17) * 4);
                                  lVar8 = *(longlong *)(piVar13 + -6);
                                }
                                fVar2 = *(float *)(lVar19 + 0x3c + lVar8);
                                if (0.0 < fVar2) {
                                  *(float *)(lVar12 + 0xc + (longlong)(iVar6 + iVar17) * 4) =
                                       fVar2 * fVar1 +
                                       *(float *)(lVar12 + 0xc + (longlong)(iVar6 + iVar17) * 4);
                                }
                                iVar17 = iVar17 + 4;
                                lVar19 = lVar19 + 0x50;
                                lVar21 = lVar21 + -1;
                              } while (lVar21 != 0);
                            }
                            if (lVar9 < lVar16) {
                              lVar19 = (lVar24 + lVar9) * 0x14;
                              lVar9 = lVar16 - lVar9;
                              do {
                                if (0.0 < *(float *)(lVar19 + *(longlong *)(piVar13 + -6))) {
                                  *(float *)(lVar12 + (longlong)(iVar6 + iVar17) * 4) =
                                       *(float *)(lVar19 + *(longlong *)(piVar13 + -6)) * fVar1 +
                                       *(float *)(lVar12 + (longlong)(iVar6 + iVar17) * 4);
                                }
                                iVar17 = iVar17 + 1;
                                lVar19 = lVar19 + 0x14;
                                lVar9 = lVar9 + -1;
                              } while (lVar9 != 0);
                            }
                            pfVar15 = pfVar15 + 1;
                            lVar24 = lVar24 + lVar16;
                            lVar11 = lVar11 + lVar16 * 0x14;
                            uVar22 = uVar22 - 1;
                          } while (uVar22 != 0);
                        }
                        local_res18 = local_res18 + 1;
                        iVar6 = iVar6 + iVar14;
                        uVar23 = local_88;
                      } while (local_res18 < (int)param_1[0x27]);
                    }
                    lVar20 = (longlong)piVar13[-4];
                    lVar12 = 0;
                    if (3 < lVar20) {
                      lVar11 = (lVar20 - 4U >> 2) + 1;
                      lVar12 = lVar11 * 4;
                      lVar16 = 0;
                      do {
                        lVar24 = *(longlong *)(piVar13 + -6);
                        *(undefined4 *)(lVar16 + 0xc + lVar24) = 0;
                        *(undefined4 *)(lVar16 + lVar24) = *(undefined4 *)(lVar16 + 8 + lVar24);
                        lVar24 = *(longlong *)(piVar13 + -6);
                        *(undefined4 *)(lVar16 + 0x20 + lVar24) = 0;
                        *(undefined4 *)(lVar16 + 0x14 + lVar24) =
                             *(undefined4 *)(lVar16 + 0x1c + lVar24);
                        lVar24 = *(longlong *)(piVar13 + -6);
                        *(undefined4 *)(lVar16 + 0x34 + lVar24) = 0;
                        *(undefined4 *)(lVar16 + 0x28 + lVar24) =
                             *(undefined4 *)(lVar16 + 0x30 + lVar24);
                        lVar24 = *(longlong *)(piVar13 + -6);
                        *(undefined4 *)(lVar16 + 0x48 + lVar24) = 0;
                        *(undefined4 *)(lVar16 + 0x3c + lVar24) =
                             *(undefined4 *)(lVar16 + 0x44 + lVar24);
                        lVar11 = lVar11 + -1;
                        lVar16 = lVar16 + 0x50;
                      } while (lVar11 != 0);
                    }
                    if (lVar12 < lVar20) {
                      lVar20 = lVar20 - lVar12;
                      lVar12 = lVar12 * 0x14;
                      do {
                        lVar16 = *(longlong *)(piVar13 + -6);
                        *(undefined4 *)(lVar12 + lVar16) = *(undefined4 *)(lVar12 + 8 + lVar16);
                        *(undefined4 *)(lVar12 + 0xc + lVar16) = 0;
                        lVar20 = lVar20 + -1;
                        lVar12 = lVar12 + 0x14;
                      } while (lVar20 != 0);
                    }
                  }
                }
              }
              local_88 = uVar23 + 1;
              uVar22 = (ulonglong)local_88;
              piVar13 = piVar13 + 10;
            } while ((int)local_88 < 6);
          }
        }
      }
      lVar7 = lVar7 + 0x4b0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 142a80d10 FUN_142a80d10 body=914 status=ok
// SIG undefined FUN_142a80d10(void)

void FUN_142a80d10(longlong *param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  byte bVar16;
  float *pfVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_38;
  
  if (DAT_146b29e48 == 0) {
    pfVar19 = *(float **)(param_2 + 0x30);
    lVar13 = param_2 + 0x30;
    bVar11 = false;
    local_68[0] = param_3;
    local_58 = lVar13;
    if ((*(byte *)(param_2 + 0x479) & 4) != 0) {
      plVar1 = (longlong *)(param_2 + 0x2b0);
      local_38 = param_2 + 0x2f0;
      local_50 = *(undefined4 *)(param_2 + 0x490);
      local_60 = *(undefined8 *)(param_2 + 0x4a0);
      *(undefined4 *)(param_2 + 0x2b8) = 0;
      if ((*(int *)(param_2 + 700) < 0) && (*(int *)(param_2 + 700) != 0)) {
        TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar1);
      }
      iVar3 = *(int *)(local_58 + 8);
      iVar4 = *(int *)(param_2 + 0x2b8);
      iVar12 = iVar3 + iVar4;
      *(int *)(param_2 + 0x2b8) = iVar12;
      if (*(int *)(param_2 + 700) < iVar12) {
        TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar4 * 4),0,(longlong)iVar3 << 2);
      (**(code **)(**(longlong **)(*param_1 + 0x50) + 0x38))
                (*(longlong **)(*param_1 + 0x50),local_68,plVar1);
      bVar11 = false;
      if ((*(byte *)(*param_1 + 0x359) & 1) == 0) {
        *(undefined4 *)(param_2 + 0x378) = 0;
        if ((*(int *)(param_2 + 0x37c) < 0) && (*(int *)(param_2 + 0x37c) != 0)) {
          TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(param_2 + 0x370,0);
        }
        TArray<FNetworkGUID,FDefaultAllocator>::Append<FNetworkGUID,FDefaultAllocator>
                  (param_2 + 0x370);
        bVar11 = true;
      }
    }
    if ((*(byte *)(param_2 + 0x479) & 2) == 0) {
      if ((bVar11) && (0 < param_4)) {
        lVar18 = *(longlong *)(param_2 + 0x370) - (longlong)pfVar19;
        uVar15 = (ulonglong)((param_4 - 1U >> 2) + 1);
        do {
          pfVar17 = (float *)(lVar18 + (longlong)pfVar19);
          fVar5 = pfVar17[1];
          fVar6 = pfVar17[2];
          fVar7 = pfVar17[3];
          *pfVar19 = *pfVar17 + *pfVar19;
          pfVar19[1] = fVar5 + pfVar19[1];
          pfVar19[2] = fVar6 + pfVar19[2];
          pfVar19[3] = fVar7 + pfVar19[3];
          pfVar19 = pfVar19 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    else {
      plVar1 = (longlong *)(param_2 + 0x2b0);
      local_38 = param_2 + 0x2f0;
      local_50 = *(undefined4 *)(param_2 + 0x490);
      local_60 = *(undefined8 *)(param_2 + 0x4a0);
      *(undefined4 *)(param_2 + 0x2b8) = 0;
      local_68[0] = param_3;
      local_58 = lVar13;
      if ((*(int *)(param_2 + 700) < 0) && (*(int *)(param_2 + 700) != 0)) {
        TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar1);
      }
      iVar3 = *(int *)(local_58 + 8);
      iVar4 = *(int *)(param_2 + 0x2b8);
      iVar12 = iVar3 + iVar4;
      *(int *)(param_2 + 0x2b8) = iVar12;
      if (*(int *)(param_2 + 700) < iVar12) {
        TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar4 * 4),0,(longlong)iVar3 << 2);
      (**(code **)(**(longlong **)(*param_1 + 0x60) + 0x20))
                (*(longlong **)(*param_1 + 0x60),local_68,plVar1);
      pfVar17 = (float *)*plVar1;
      if (bVar11) {
        if (0 < param_4) {
          lVar18 = (longlong)pfVar19 - (longlong)pfVar17;
          lVar20 = *(longlong *)(param_2 + 0x370) - (longlong)pfVar17;
          uVar15 = (ulonglong)((param_4 - 1U >> 2) + 1);
          do {
            pfVar19 = (float *)(lVar20 + (longlong)pfVar17);
            fVar5 = pfVar19[1];
            fVar6 = pfVar19[2];
            fVar7 = pfVar19[3];
            fVar8 = pfVar17[1];
            fVar9 = pfVar17[2];
            fVar10 = pfVar17[3];
            pfVar2 = (float *)(lVar18 + (longlong)pfVar17);
            *pfVar2 = *pfVar19 + *pfVar17;
            pfVar2[1] = fVar5 + fVar8;
            pfVar2[2] = fVar6 + fVar9;
            pfVar2[3] = fVar7 + fVar10;
            pfVar17 = pfVar17 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      else {
        _guard_xfg_dispatch_icall_nop(pfVar19,pfVar17,(longlong)param_4 << 2);
      }
    }
    local_50 = *(undefined4 *)(param_2 + 0x490);
    if ((*(byte *)(param_2 + 0x479) & 1) == 0) {
      *(undefined4 *)(param_2 + 0x494) = local_50;
      *(longlong *)(param_2 + 0x380) = lVar13;
    }
    else {
      local_38 = param_2 + 0x2f0;
      local_68[0] = param_3;
      local_58 = lVar13;
      if ((*(byte *)(*param_1 + 0x358) & 0x40) == 0) {
        *(undefined4 *)(param_2 + 0x2b8) = 0;
        if ((*(int *)(param_2 + 700) < 0) && (*(int *)(param_2 + 700) != 0)) {
          TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(param_2 + 0x2b0,0);
        }
        TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(param_2 + 0x2b0,(int)param_1[0x27] * 2);
      }
      (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_68,param_2 + 0x2b0)
      ;
      bVar16 = *(byte *)(*param_1 + 0x358) & 0x40;
      if (bVar16 == 0) {
        uVar14 = 2;
      }
      else {
        uVar14 = *(undefined4 *)(param_2 + 0x490);
      }
      *(undefined4 *)(param_2 + 0x494) = uVar14;
      lVar13 = 0x30;
      if (bVar16 == 0) {
        lVar13 = 0x2b0;
      }
      *(longlong *)(param_2 + 0x380) = lVar13 + param_2;
    }
  }
  return;
}



// FUNCTION 142a810b0 FUN_142a810b0 body=2246 status=ok
// SIG undefined FUN_142a810b0(void)

void FUN_142a810b0(longlong param_1,char param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int iVar5;
  void *_Src;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_100 [192];
  
  lVar13 = (longlong)param_3;
  do {
    if (param_4 <= param_3) {
      return;
    }
    lVar16 = lVar13 * 0x4b0 + *(longlong *)(param_1 + 0x70);
    bVar9 = *(byte *)(lVar16 + 0x478);
    if (((((char)bVar9 < '\0') && ((bVar9 & 8) != 0)) && ((bVar9 & 0x10) == 0)) &&
       (((*(byte *)(lVar16 + 0x479) & 8) == 0 || (*(char *)(lVar16 + 0x228) == '\0')))) {
      if (param_2 == '\0') {
        if (*(int *)(lVar16 + 0xa8) == -1) goto LAB_142a81202;
      }
      else if (*(int *)(lVar16 + 0xa8) != -1) {
LAB_142a81202:
        if (0 < *(int *)(lVar16 + 0xc0)) {
          *(undefined4 *)(lVar16 + 0x48) = 0;
          if ((*(int *)(lVar16 + 0x4c) < 0) && (*(int *)(lVar16 + 0x4c) != 0)) {
            TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(lVar16 + 0x40,0);
          }
          TArray<FNetworkGUID,FDefaultAllocator>::Append<FNetworkGUID,FDefaultAllocator>
                    (lVar16 + 0x40,lVar16 + 0x50);
          bVar9 = *(byte *)(lVar16 + 0x478);
        }
        _Src = *(void **)(lVar16 + 0x50);
        iVar5 = *(int *)(lVar16 + 0x58);
        if ((bVar9 & 0x20) == 0) {
          Audio::FadeBufferFast(_Src,iVar5,*(undefined4 *)(lVar16 + 0xec));
        }
        else {
          iVar12 = *(int *)(lVar16 + 0x100) - *(int *)(lVar16 + 0xfc);
          iVar19 = *(int *)(param_1 + 0x138);
          if (iVar12 <= *(int *)(param_1 + 0x138)) {
            iVar19 = iVar12;
          }
          iVar12 = *(int *)(lVar16 + 0xfc) + iVar19;
          *(int *)(lVar16 + 0xfc) = iVar12;
          fVar22 = (float)iVar12 * *(float *)(lVar16 + 0xf4) + *(float *)(lVar16 + 0xf8);
          *(float *)(lVar16 + 0xf0) = fVar22;
          if (ABS(fVar22) <= 0.0001) {
            *(undefined4 *)(lVar16 + 0xf0) = 0;
          }
          iVar12 = *(int *)(lVar16 + 0x490) * iVar19;
          Audio::FadeBufferFast(_Src,iVar12,*(undefined4 *)(lVar16 + 0xec));
          if (iVar19 < *(int *)(param_1 + 0x138)) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)_Src + (longlong)iVar12 * 4),0,
                       (longlong)(iVar5 - iVar12) << 2);
          }
        }
        iVar19 = 0;
        *(undefined4 *)(lVar16 + 0xec) = *(undefined4 *)(lVar16 + 0xf0);
        if ((DAT_146b29e40 == 0) && (0 < *(int *)(lVar16 + 0x210))) {
          puVar2 = (undefined8 *)(lVar16 + 0x2a0);
          *(undefined4 *)(lVar16 + 0x270) = *(undefined4 *)(lVar16 + 0xf0);
          *(undefined4 *)(lVar16 + 0x2a8) = 0;
          if ((*(int *)(lVar16 + 0x2ac) < 0) && (*(int *)(lVar16 + 0x2ac) != 0)) {
            TArray<float,FDefaultAllocator>::ResizeTo(puVar2,0);
          }
          TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
                    (puVar2,*(undefined4 *)(lVar16 + 0x490));
          puVar3 = (undefined8 *)(lVar16 + 0x230);
          *(undefined4 *)(lVar16 + 0x238) = 0;
          if ((*(int *)(lVar16 + 0x23c) < 0) && (*(int *)(lVar16 + 0x23c) != 0)) {
            TArray<float,FDefaultAllocator>::ResizeTo(puVar3,0);
          }
          TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(puVar3);
          puVar6 = (undefined4 *)*puVar3;
          local_100._0_8_ = *puVar2;
          if (0 < iVar5) {
            iVar12 = *(int *)(lVar16 + 0x490);
            do {
              iVar17 = 0;
              if (0 < iVar12) {
                puVar14 = puVar6;
                iVar12 = iVar17;
                do {
                  iVar12 = iVar12 + 1;
                  *puVar14 = *(undefined4 *)
                              ((longlong)_Src + ((longlong)iVar19 * 4 - (longlong)puVar6) +
                              (longlong)puVar14);
                  puVar14 = puVar14 + 1;
                } while (iVar12 < *(int *)(lVar16 + 0x490));
              }
              if (0 < *(int *)(lVar16 + 0x210)) {
                uVar8 = local_100._0_8_;
                lVar18 = 0;
                do {
                  cVar10 = FSoundEffectBase::IsActive
                                     (*(undefined8 *)(lVar18 + *(longlong *)(lVar16 + 0x208)));
                  if (cVar10 != '\0') {
                    FSoundEffectBase::Update
                              (*(undefined8 *)(lVar18 + *(longlong *)(lVar16 + 0x208)));
                    plVar7 = *(longlong **)(lVar18 + *(longlong *)(lVar16 + 0x208));
                    (**(code **)(*plVar7 + 0x18))(plVar7,puVar3,puVar2);
                    iVar12 = 0;
                    if (0 < *(int *)(lVar16 + 0x490)) {
                      puVar14 = puVar6;
                      do {
                        iVar12 = iVar12 + 1;
                        *puVar14 = *(undefined4 *)((uVar8 - (longlong)puVar6) + (longlong)puVar14);
                        puVar14 = puVar14 + 1;
                      } while (iVar12 < *(int *)(lVar16 + 0x490));
                    }
                  }
                  iVar17 = iVar17 + 1;
                  lVar18 = lVar18 + 8;
                } while (iVar17 < *(int *)(lVar16 + 0x210));
              }
              iVar12 = *(int *)(lVar16 + 0x490);
              iVar17 = 0;
              if (0 < iVar12) {
                puVar14 = puVar6;
                do {
                  iVar17 = iVar17 + 1;
                  *(undefined4 *)
                   ((longlong)puVar14 + ((longlong)iVar19 * 4 - (longlong)puVar6) + (longlong)_Src)
                       = *puVar14;
                  puVar14 = puVar14 + 1;
                  iVar12 = *(int *)(lVar16 + 0x490);
                } while (iVar17 < iVar12);
              }
              iVar19 = iVar19 + iVar12;
            } while (iVar19 < iVar5);
          }
        }
        iVar19 = 0;
        cVar10 = *(char *)(lVar16 + 0x228);
        if (DAT_146b29e3c == 0) {
          uVar20 = FUN_142a84f90(_Src);
          Audio::FEnvelopeFollower::ProcessAudio(lVar16 + 0x2c0,uVar20);
          *(float *)(lVar16 + 0x2e8) = *(float *)(lVar16 + 0x2e0);
          if ((*(char *)(lVar16 + 0x228) != '\0') || (*(float *)(lVar16 + 0x2e0) < 1.58489e-05))
          goto LAB_142a81542;
          cVar11 = '\0';
        }
        else {
LAB_142a81542:
          cVar11 = '\x01';
        }
        *(char *)(lVar16 + 0x228) = cVar11;
        if ((cVar10 == '\0') && (cVar11 != '\0')) {
          (**(code **)(**(longlong **)(lVar16 + 0x10) + 0x18))();
        }
        if ((*(byte *)(lVar16 + 0x479) & 0x20) == 0) {
          if (DAT_146b29e34 == 0) {
            lVar18 = *(longlong *)(lVar16 + 0x30);
            if (0 < *(int *)(param_1 + 0x138)) {
              plVar7 = (longlong *)(lVar16 + 0x168);
              do {
                fVar22 = *(float *)(lVar16 + 0x118) + *(float *)(lVar16 + 0x10c);
                *(float *)(lVar16 + 0x10c) = fVar22;
                fVar23 = *(float *)(lVar16 + 0x120) + *(float *)(lVar16 + 300);
                *(float *)(lVar16 + 0x120) = fVar23;
                if (fVar22 != *(float *)(lVar16 + 0x154)) {
                  *(float *)(lVar16 + 0x154) = fVar22;
                  fVar21 = (0.5 / (float)*(int *)(lVar16 + 0x158)) * fVar22;
                  if (0.0 <= fVar21) {
                    if (1.0 <= fVar21) {
                      fVar21 = 1.0;
                    }
                  }
                  else {
                    fVar21 = 0.0;
                  }
                  fVar21 = _guard_xfg_dispatch_icall_nop(fVar21 * -3.1415927);
                  *(float *)(lVar16 + 0x15c) = fVar21;
                  *(float *)(lVar16 + 0x160) = 1.0 - fVar21;
                }
                (**(code **)(*plVar7 + 0x10))(plVar7,fVar23);
                (**(code **)(*plVar7 + 0x58))(plVar7);
                iVar12 = *(int *)(lVar16 + 0x490) * iVar19;
                if (20000.0 <= fVar22) {
                  *(byte *)(lVar16 + 0x479) = *(byte *)(lVar16 + 0x479) | 0x80;
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar18 + (longlong)iVar12 * 4),
                             (void *)((longlong)_Src + (longlong)iVar12 * 4),
                             (longlong)*(int *)(lVar16 + 0x490) << 2);
                }
                else {
                  if ((char)*(byte *)(lVar16 + 0x479) < '\0') {
                    Audio::FOnePoleLPFBank::ClearMemory();
                    *(byte *)(lVar16 + 0x479) = *(byte *)(lVar16 + 0x479) & 0x7f;
                  }
                  iVar17 = 0;
                  if (0 < *(int *)(lVar16 + 0x150)) {
                    lVar15 = 0;
                    do {
                      pfVar4 = (float *)(lVar18 + (longlong)iVar12 * 4 + lVar15);
                      fVar22 = *(float *)((longlong)pfVar4 + ((longlong)_Src - lVar18)) *
                               *(float *)(lVar16 + 0x160) +
                               *(float *)(*(longlong *)(lVar16 + 0x148) + lVar15) *
                               *(float *)(lVar16 + 0x15c);
                      if ((-1.1754944e-38 < fVar22) && (fVar22 < 1.1754944e-38)) {
                        fVar22 = 0.0;
                      }
                      *(float *)(*(longlong *)(lVar16 + 0x148) + lVar15) = fVar22;
                      iVar17 = iVar17 + 1;
                      lVar15 = lVar15 + 4;
                      *pfVar4 = fVar22;
                    } while (iVar17 < *(int *)(lVar16 + 0x150));
                  }
                }
                if ((DAT_146b29e38 != 0) || (fVar23 <= 0.0)) {
                  *(byte *)(lVar16 + 0x47a) = *(byte *)(lVar16 + 0x47a) | 1;
                }
                else {
                  if ((*(byte *)(lVar16 + 0x47a) & 1) != 0) {
                    (**(code **)(*plVar7 + 0x50))(plVar7);
                    *(byte *)(lVar16 + 0x47a) = *(byte *)(lVar16 + 0x47a) & 0xfe;
                  }
                  lVar15 = lVar18 + (longlong)iVar12 * 4;
                  (**(code **)(*plVar7 + 0x60))(plVar7,lVar15,lVar15);
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < *(int *)(param_1 + 0x138));
            }
            *(undefined4 *)(lVar16 + 0x10c) = *(undefined4 *)(lVar16 + 0x114);
            *(undefined4 *)(lVar16 + 0x118) = 0;
            *(undefined4 *)(lVar16 + 0x120) = *(undefined4 *)(lVar16 + 0x128);
            *(undefined4 *)(lVar16 + 300) = 0;
          }
          else {
LAB_142a81792:
            _guard_xfg_dispatch_icall_nop(*(void **)(lVar16 + 0x30),_Src,(longlong)iVar5 << 2);
          }
          if (DAT_146b29e44 == 0) {
            Audio::FadeBufferFast
                      (*(undefined8 *)(lVar16 + 0x30),*(undefined4 *)(lVar16 + 0x38),
                       *(undefined4 *)(lVar16 + 0x104));
            *(undefined4 *)(lVar16 + 0x104) = *(undefined4 *)(lVar16 + 0x108);
          }
          FUN_142a80d10(param_1,lVar16,param_3,iVar5);
        }
        else if (DAT_146b29e34 != 0) goto LAB_142a81792;
        if (((*(byte *)(lVar16 + 0x479) & 0x10) != 0) && (*(char *)(lVar16 + 0x228) != '\0')) {
          *(undefined4 *)(lVar16 + 0x68) = 0;
          if ((*(int *)(lVar16 + 0x6c) < 0) && (*(int *)(lVar16 + 0x6c) != 0)) {
            TArray<float,FDefaultAllocator>::ResizeTo(lVar16 + 0x60,0);
          }
          *(undefined4 *)(lVar16 + 0x78) = 0;
          if ((*(int *)(lVar16 + 0x7c) < 0) && (*(int *)(lVar16 + 0x7c) != 0)) {
            TArray<float,FDefaultAllocator>::ResizeTo(lVar16 + 0x70,0);
          }
          local_100._0_16_ = ZEXT816(0);
          if ((undefined8 *)(lVar16 + 0x18) != (undefined8 *)local_100) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar16 + 0x20,local_100 + 8);
            uVar8 = local_100._8_8_;
            if ((undefined8 *)local_100._8_8_ != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_100._8_8_ + 8);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (*(code *)**(undefined8 **)local_100._8_8_)(local_100._8_8_);
                LOCK();
                piVar1 = (int *)(uVar8 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*(longlong *)local_100._8_8_ + 8))(local_100._8_8_,1);
                }
              }
            }
          }
        }
      }
    }
    param_3 = param_3 + 1;
    lVar13 = lVar13 + 1;
  } while( true );
}



// FUNCTION 142a81980 FUN_142a81980 body=1148 status=ok
// SIG undefined FUN_142a81980(void)

void FUN_142a81980(longlong param_1,char param_2,int param_3,int param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  void *_Dst;
  void *_Src;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  float fVar15;
  
  uVar13 = (ulonglong)param_3;
  if (param_3 < param_4) {
    lVar7 = uVar13 * 0x4b0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x70);
      bVar3 = *(byte *)(lVar7 + 0x478 + lVar10);
      if ((((char)bVar3 < '\0') && ((bVar3 & 8) != 0)) && ((bVar3 & 0x10) == 0)) {
        if ((*(byte *)(lVar7 + 0x479 + lVar10) & 8) == 0) {
          iVar8 = *(int *)(lVar7 + 0xa8 + lVar10);
          if (param_2 == '\0') {
            if (iVar8 == -1) goto LAB_142a81b2d;
          }
          else if (iVar8 != -1) {
LAB_142a81b2d:
            lVar9 = lVar7 + lVar10;
            iVar14 = *(int *)(param_1 + 0x138) * *(int *)(lVar7 + 0x490 + lVar10);
            *(undefined4 *)(lVar9 + 0x58) = 0;
            if ((*(int *)(lVar9 + 0x5c) < 0) && (*(int *)(lVar9 + 0x5c) != 0)) {
              TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(lVar9 + 0x50,0);
            }
            TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(lVar9 + 0x50,iVar14);
            iVar4 = *(int *)(lVar7 + 0x3c + lVar10);
            lVar5 = lVar7 + lVar10;
            *(undefined4 *)(lVar5 + 0x38) = 0;
            if ((iVar4 < 0) && (iVar4 != 0)) {
              TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(lVar5 + 0x30,0);
            }
            TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(lVar5 + 0x30,iVar14);
            _Dst = *(void **)(lVar9 + 0x50);
            if (iVar8 == -1) {
              lVar9 = 0;
              iVar8 = 0;
              if (0 < *(int *)(param_1 + 0x138)) {
                do {
                  if ((*(byte *)(lVar7 + 0x479 + lVar10) & 0x10) != 0) break;
                  bVar3 = *(byte *)(lVar7 + 0x478 + lVar10);
                  fVar15 = *(float *)(lVar7 + 0x80 + lVar10);
                  *(byte *)(lVar7 + 0x478 + lVar10) = bVar3 | 0x40;
                  if (fVar15 < 1.0) {
                    if ((~(bVar3 >> 6) & 1) != 0) goto LAB_142a81d3c;
                  }
                  else {
                    lVar5 = *(longlong *)(lVar7 + 0x88 + lVar10);
                    iVar14 = *(int *)(lVar7 + 0x84 + lVar10);
                    do {
                      fVar15 = fVar15 + -1.0;
                      iVar14 = iVar14 + 1;
                      lVar5 = lVar5 + 1;
                    } while (1.0 <= fVar15);
                    *(float *)(lVar7 + 0x80 + lVar10) = fVar15;
                    *(longlong *)(lVar7 + 0x88 + lVar10) = lVar5;
                    *(int *)(lVar7 + 0x84 + lVar10) = iVar14;
LAB_142a81d3c:
                    FUN_142a90ae0(param_1,uVar13 & 0xffffffff);
                  }
                  lVar5 = 0;
                  iVar14 = 0;
                  if (0 < *(int *)(lVar7 + 0x490 + lVar10)) {
                    do {
                      iVar14 = iVar14 + 1;
                      fVar15 = *(float *)(lVar5 + *(longlong *)(lVar7 + 0x60 + lVar10));
                      *(float *)((longlong)_Dst + lVar9 * 4) =
                           (*(float *)(*(longlong *)(lVar7 + 0x70 + lVar10) + lVar5) - fVar15) *
                           *(float *)(lVar7 + 0x80 + lVar10) + fVar15;
                      lVar9 = lVar9 + 1;
                      lVar5 = lVar5 + 4;
                    } while (iVar14 < *(int *)(lVar7 + 0x490 + lVar10));
                  }
                  iVar8 = iVar8 + 1;
                  fVar15 = *(float *)(lVar7 + 0xe4 + lVar10) + *(float *)(lVar7 + 0xd8 + lVar10);
                  *(float *)(lVar7 + 0xd8 + lVar10) = fVar15;
                  *(float *)(lVar7 + 0x80 + lVar10) = fVar15 + *(float *)(lVar7 + 0x80 + lVar10);
                } while (iVar8 < *(int *)(param_1 + 0x138));
              }
              *(undefined4 *)(lVar7 + 0xd8 + lVar10) = *(undefined4 *)(lVar7 + 0xe0 + lVar10);
              *(undefined4 *)(lVar7 + 0xe4 + lVar10) = 0;
            }
            else {
              if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
                iVar8 = *(int *)(lVar7 + 0xa8 + lVar10);
                lVar9 = *(longlong *)(param_1 + 0xc0);
                if (*(longlong *)(param_1 + 0xc0) == 0) {
                  lVar9 = param_1 + 0xb8;
                }
                iVar14 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)iVar8)
                                          * 4);
                if (iVar14 != -1) {
                  do {
                    piVar11 = (int *)((longlong)iVar14 * 0x78 + *(longlong *)(param_1 + 0x80));
                    if (*piVar11 == iVar8) {
                      if (iVar14 != -1) goto LAB_142a81c22;
                      break;
                    }
                    iVar14 = piVar11[0x1c];
                  } while (iVar14 != -1);
                }
              }
              piVar11 = (int *)0x0;
LAB_142a81c22:
              lVar9 = *(longlong *)(lVar7 + 0xb0 + lVar10);
              piVar6 = piVar11 + 2;
              if (piVar11 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              _Src = *(void **)(piVar6 + ((longlong)piVar6[0x14] + 3) * 4);
              iVar8 = *(int *)(param_1 + 0x138);
              if ((lVar9 != -1) &&
                 (lVar5 = *(longlong *)(lVar7 + 0x88 + lVar10), lVar9 <= lVar5 + iVar8)) {
                iVar8 = (int)lVar9 - (int)lVar5;
                pbVar1 = (byte *)(lVar7 + 0x479 + lVar10);
                *pbVar1 = *pbVar1 | 0x10;
              }
              plVar2 = (longlong *)(lVar7 + 0x88 + lVar10);
              *plVar2 = *plVar2 + (longlong)iVar8;
              _guard_xfg_dispatch_icall_nop
                        (_Dst,_Src,(longlong)*(int *)(lVar7 + 0x490 + lVar10) * (longlong)iVar8 * 4)
              ;
            }
          }
        }
        else {
          lVar9 = lVar7 + lVar10;
          iVar8 = *(int *)(lVar7 + 0x490 + lVar10) * *(int *)(param_1 + 0x138);
          *(undefined4 *)(lVar9 + 0x58) = 0;
          if (0x7fffffff < *(uint *)(lVar9 + 0x5c)) {
            TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(lVar9 + 0x50);
          }
          iVar14 = *(int *)(lVar9 + 0x58);
          iVar4 = iVar14 + iVar8;
          *(int *)(lVar9 + 0x58) = iVar4;
          if (*(int *)(lVar9 + 0x5c) < iVar4) {
            TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(lVar9 + 0x50);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar9 + 0x50) + (longlong)iVar14 * 4),0,
                     (longlong)iVar8 << 2);
          lVar10 = lVar10 + lVar7;
          *(undefined4 *)(lVar10 + 0x38) = 0;
          if ((*(int *)(lVar10 + 0x3c) < 0) && (*(int *)(lVar10 + 0x3c) != 0)) {
            TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(lVar10 + 0x30);
          }
          iVar14 = *(int *)(lVar10 + 0x38);
          iVar4 = iVar14 + iVar8;
          *(int *)(lVar10 + 0x38) = iVar4;
          if (*(int *)(lVar10 + 0x3c) < iVar4) {
            TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(lVar10 + 0x30);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar14 * 4),0,
                     (longlong)iVar8 << 2);
        }
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      lVar7 = lVar7 + 0x4b0;
    } while ((int)uVar12 < param_4);
  }
  return;
}



// FUNCTION 142a81e00 FUN_142a81e00 body=642 status=ok
// SIG undefined FUN_142a81e00(void)

undefined8 FUN_142a81e00(longlong param_1,byte param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if (((((*(int *)(*(longlong *)(param_1 + 0x18) + 0xc) != 1) ||
        ((*(byte *)(*(longlong *)(param_1 + 8) + 0x359) & 4) == 0)) || (DAT_146b29e28 != 0)) ||
      (lVar2 = *(longlong *)(param_1 + 0x10), *(int *)(lVar2 + 0xa8) != 1)) &&
     (lVar2 = *(longlong *)(param_1 + 0x10), (*(byte *)(lVar2 + 0xa4) & 0x20) != 0)) {
    if (ABS(*(float *)(lVar2 + 0x100) - *(float *)(param_1 + 0x140)) <= 0.01) {
      if (*(char *)((longlong)*(int *)((longlong)*(longlong **)(param_1 + 0xa8) + 0xcc) +
                   *(longlong *)(**(longlong **)(param_1 + 0xa8) + 0x110)) == '\0')
      goto LAB_142a81fbf;
    }
    FSoundSource::UpdateStereoEmitterPositions(param_1);
    lVar2 = *(longlong *)(param_1 + 0x10);
    fVar3 = 0.0;
    if (0.0 < *(float *)(lVar2 + 0xfc)) {
      fVar3 = _guard_xfg_dispatch_icall_nop
                        ((*(float *)(lVar2 + 0xf4) * 0.5) / *(float *)(lVar2 + 0xfc));
      fVar3 = fVar3 * 57.295776;
    }
    fVar4 = *(float *)(lVar2 + 0x100) - fVar3;
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + 360.0;
    }
    fVar3 = *(float *)(lVar2 + 0x100) + fVar3;
    if (360.0 < fVar3) {
      fVar3 = fVar3 + -360.0;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
      TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(param_3,0);
    }
    FUN_142a847f0(*(undefined8 *)(param_1 + 0x88),param_2,*(undefined8 *)(param_1 + 0x10),fVar4,
                  *(undefined4 *)(param_1 + 0x1bc),param_3);
    FUN_142a847f0(*(undefined8 *)(param_1 + 0x88),param_2,*(undefined8 *)(param_1 + 0x10),fVar3,
                  *(undefined4 *)(param_1 + 0x1bc),param_3);
    return 1;
  }
LAB_142a81fbf:
  if (*(int *)(param_3 + 1) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x8d0);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x7e8 + (ulonglong)param_2 * 4);
  }
  if (8 < iVar1) {
    iVar1 = iVar1 * 2;
    *(int *)(param_3 + 1) = iVar1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1) {
      TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_3);
    }
    _guard_xfg_dispatch_icall_nop((void *)*param_3,0,(longlong)iVar1 << 2);
    return 1;
  }
  FUN_142a774f0(param_3,(longlong)
                        (int)((iVar1 + (uint)((byte)(*(uint *)(lVar2 + 0xa4) >> 0xc) & 1) * 8) * 8 +
                             -7) * 0x10 + DAT_146b29e98);
  return 1;
}



// FUNCTION 142a82090 FUN_142a82090 body=107 status=ok
// SIG undefined FUN_142a82090(void)

undefined8 * FUN_142a82090(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1454d5248;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a82100 CopyToEmptyStorage body=182 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_ac4bcb9f8b3c3b4863183fcf06799165>_>::
CopyToEmptyStorage(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1454d5278;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    puVar2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x20);
    _Src = *(void **)(param_1 + 0x18);
    *(int *)(puVar2 + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 3,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)puVar2[3],_Src,(longlong)iVar1 << 4);
    }
    *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x28);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a821c0 CopyToEmptyStorage body=249 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7b4b678abefe27ae9361864b7cb406b6>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1454d5218;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined8 *)((longlong)puVar1 + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
    *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)((longlong)puVar1 + 100) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)((longlong)puVar1 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    puVar1[0xe] = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_1 + 0x78);
    *(undefined8 *)((longlong)puVar1 + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
    *(undefined4 *)((longlong)puVar1 + 0x84) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(puVar1 + 0x11) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)((longlong)puVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a822c0 CopyToEmptyStorage body=93 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_b3cd78a615a8ca212a6160db68aba7fb>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1454d5200;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    FUN_142a79e40(puVar1 + 3,param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a82320 CopyToEmptyStorage body=189 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_0ea95d77e5bc0a5bcc8a5b020c08f2d5>_>::
CopyToEmptyStorage(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_CopyToEmptyStorage_1454d5260;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar2 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    return puVar2;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar2 + 2,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)puVar2[2],_Src,(longlong)iVar1 * 0x30);
  return puVar2;
}



// FUNCTION 142a823e0 CopyToEmptyStorage body=196 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_3d4397c39842a852d0bf407d84f904f8>_>::
CopyToEmptyStorage(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1454d5230;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)((longlong)puVar2 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    puVar2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x20);
    _Src = *(void **)(param_1 + 0x18);
    *(int *)(puVar2 + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    }
    else {
      TArray<float,TAlignedHeapAllocator<16>_>::ResizeForCopy(puVar2 + 3,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)puVar2[3],_Src,(longlong)iVar1 << 2);
    }
    *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)((longlong)puVar2 + 0x29) = *(undefined1 *)(param_1 + 0x29);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a824c0 FUN_142a824c0 body=522 status=ok
// SIG undefined FUN_142a824c0(void)

void FUN_142a824c0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 local_res8;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x620) == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_res8 = 0;
    uVar4 = FUN_1429003e0();
    lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x620) = lVar5;
    if (lVar5 != 0) {
      *(byte *)(lVar5 + 0xba) = *(byte *)(lVar5 + 0xba) & 0xfd;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0x2f0);
      *pbVar1 = *pbVar1 | 2;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0x2f0);
      *pbVar1 = *pbVar1 | 4;
      *(undefined1 *)(*(longlong *)(param_1 + 0x620) + 0x24e) = 2;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x620) + 400) == 0) &&
         (cVar3 = FUN_142390860(*(longlong *)(param_1 + 0x620),param_1), cVar3 == '\0')) {
        local_res8 = 0;
        FUN_142399e30(*(undefined8 *)(param_1 + 0x620),param_1,0);
      }
      lVar5 = *(longlong *)(param_1 + 0x620);
      plVar9 = (longlong *)(lVar5 + 0x650);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_144110668;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = 0x42a8c760;
        *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
        *(undefined4 *)(plVar6 + 3) = 0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_1441106b0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_res8);
        iVar2 = *(int *)(lVar5 + 0x658);
        *(int *)(lVar5 + 0x658) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x65c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar9);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x620) + 0x314) = *(undefined4 *)(param_1 + 0x5dc);
      *(undefined4 *)(*(longlong *)(param_1 + 0x620) + 0x318) = *(undefined4 *)(param_1 + 0x5e0);
      FUN_142a8ac70(param_1,0xffffffff);
      lVar5 = FUN_14233c7a0(*(undefined8 *)(param_1 + 0x620));
      if (lVar5 != 0) {
        *(byte *)(*(longlong *)(param_1 + 0x618) + 0x268) = *(byte *)(lVar5 + 0x358) >> 5 & 1;
      }
    }
  }
  return;
}



// FUNCTION 142a826f0 CreateEffectsManager body=89 status=ok
// SIG undefined CreateEffectsManager(void)

undefined8 * Audio::FMixerDevice::CreateEffectsManager(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x270);
  if (puVar1 != (undefined8 *)0x0) {
    FAudioEffectsManager::FAudioEffectsManager(puVar1,param_1);
    *puVar1 = &PTR_FUN_1454d46d8;
    FRuntimeFloatCurve::FRuntimeFloatCurve(puVar1 + 0x3f);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a82750 FUN_142a82750 body=46 status=ok
// SIG undefined FUN_142a82750(void)

void FUN_142a82750(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1f0);
  if (lVar1 != 0) {
    Audio::FMixerSource::FMixerSource(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142a82780 FUN_142a82780 body=3557 status=ok
// SIG undefined FUN_142a82780(void)

undefined8 * FUN_142a82780(undefined8 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_res10;
  undefined8 *local_e8;
  undefined8 *local_e0;
  
  lVar12 = (longlong)param_3;
  if ((param_2 == 0) || (param_3 < 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  puVar10 = (undefined8 *)0x0;
  puVar8 = puVar10;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR__scalar_deleting_destructor__1454d45f0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0x472c4400;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x2c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
    *(undefined4 *)(puVar4 + 3) = 0x43dc0000;
    *(float *)(puVar4 + 5) = (float)*(int *)(puVar4 + 2) * 0.009977324;
    puVar8 = puVar4;
  }
  local_e8 = puVar8;
  puVar4 = (undefined8 *)operator_new(0x18);
  local_e0 = puVar10;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = puVar8;
    local_e0 = puVar4;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_e8,puVar8,puVar8);
  puVar8 = local_e8;
  iVar13 = *(int *)(local_e8 + 2);
  iVar2 = iVar13 + param_3;
  *(int *)(local_e8 + 2) = iVar2;
  if (*(int *)((longlong)local_e8 + 0x14) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_e8 + 1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(puVar8[1] + (longlong)iVar13 * 4),0,lVar12 * 4);
  *(int *)((longlong)local_e8 + 0x34) = param_2;
  *(undefined4 *)(local_e8 + 4) = 0;
  *(float *)((longlong)local_e8 + 0x24) = (float)*(int *)(local_e8 + 2) * 0.25;
  if (param_2 - 1U < 7) {
    switch(param_2) {
    case 1:
      if (0 < param_3) {
        puVar8 = puVar10;
        do {
          fVar18 = _guard_xfg_dispatch_icall_nop
                             ((float)(int)puVar10 * 6.2831855 * (1.0 / (float)param_3));
          uVar14 = (int)puVar10 + 1;
          puVar10 = (undefined8 *)(ulonglong)uVar14;
          *(float *)((longlong)puVar8 + local_e8[1]) = fVar18;
          puVar8 = (undefined8 *)((longlong)puVar8 + 4);
        } while ((int)uVar14 < param_3);
      }
      break;
    case 2:
      uVar14 = param_3 / 2;
      lVar12 = (longlong)(int)uVar14;
      fVar18 = 1.0 / (float)(int)uVar14;
      if (3 < param_3) {
        lVar11 = 2;
        iVar13 = 1 - uVar14;
        puVar8 = puVar10;
        do {
          if (lVar11 + -2 < lVar12) {
            fVar17 = (float)(int)puVar10 * fVar18;
          }
          else {
            fVar17 = (float)(iVar13 + -2) * fVar18 - 1.0;
          }
          *(float *)((longlong)puVar8 + local_e8[1]) = fVar17;
          if (lVar11 + -1 < lVar12) {
            fVar17 = (float)(int)(iVar13 + uVar14) * fVar18;
          }
          else {
            fVar17 = (float)(iVar13 + -1) * fVar18 - 1.0;
          }
          *(float *)(local_e8[1] + 4 + (longlong)puVar8) = fVar17;
          if (lVar11 < lVar12) {
            fVar17 = (float)(int)(uVar14 + 1 + iVar13) * fVar18;
          }
          else {
            fVar17 = (float)iVar13 * fVar18 - 1.0;
          }
          *(float *)((longlong)puVar8 + local_e8[1] + 8) = fVar17;
          if (lVar11 + 1 < lVar12) {
            fVar17 = (float)(int)(uVar14 + 2 + iVar13) * fVar18;
          }
          else {
            fVar17 = (float)(iVar13 + 1) * fVar18 - 1.0;
          }
          lVar11 = lVar11 + 4;
          uVar9 = (int)puVar10 + 4;
          puVar10 = (undefined8 *)(ulonglong)uVar9;
          iVar13 = iVar13 + 4;
          *(float *)((longlong)puVar8 + local_e8[1] + 0xc) = fVar17;
          puVar8 = puVar8 + 2;
        } while ((int)uVar9 < param_3 + -3);
      }
      if ((int)puVar10 < param_3) {
        lVar11 = (longlong)(int)puVar10;
        do {
          iVar13 = (int)puVar10;
          if (lVar11 < lVar12) {
            fVar17 = (float)iVar13 * fVar18;
          }
          else {
            fVar17 = (float)(int)(~uVar14 + iVar13) * fVar18 - 1.0;
          }
          puVar10 = (undefined8 *)(ulonglong)(iVar13 + 1U);
          *(float *)(local_e8[1] + lVar11 * 4) = fVar17;
          lVar11 = lVar11 + 1;
        } while ((int)(iVar13 + 1U) < param_3);
      }
      break;
    case 3:
      iVar13 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
      lVar11 = (longlong)iVar13;
      iVar2 = (int)(param_3 * 3 + (param_3 * 3 >> 0x1f & 3U)) >> 2;
      lVar12 = (longlong)iVar2;
      fVar18 = 1.0 / (float)iVar13;
      fVar17 = -2.0 / (float)(param_3 / 2);
      if (3 < param_3) {
        iVar7 = 1 - iVar2;
        iVar6 = iVar2 - iVar13;
        lVar5 = 2;
        puVar8 = puVar10;
        do {
          iVar3 = (int)puVar10;
          if (lVar5 + -2 < lVar11) {
LAB_142a82be0:
            fVar15 = (float)iVar3 * fVar18 - 1.0;
          }
          else {
            if (lVar12 <= lVar5 + -2) {
              iVar3 = iVar7 + -1;
              goto LAB_142a82be0;
            }
            fVar15 = (float)(iVar6 + -1 + iVar7) * fVar17 + 1.0;
          }
          *(float *)((longlong)puVar8 + local_e8[1]) = fVar15;
          if (lVar5 + -1 < lVar11) {
            iVar3 = iVar7 + iVar2;
LAB_142a82c2a:
            fVar15 = (float)iVar3 * fVar18 - 1.0;
          }
          else {
            iVar3 = iVar7;
            if (lVar12 <= lVar5 + -1) goto LAB_142a82c2a;
            fVar15 = (float)(iVar6 + iVar7) * fVar17 + 1.0;
          }
          *(float *)(local_e8[1] + 4 + (longlong)puVar8) = fVar15;
          if (lVar5 < lVar11) {
            *(float *)(local_e8[1] + 8 + (longlong)puVar8) =
                 (float)(iVar2 + 1 + iVar7) * fVar18 - 1.0;
          }
          else {
            if (lVar5 < lVar12) {
              fVar15 = (float)(iVar6 + 1 + iVar7) * fVar17 + 1.0;
            }
            else {
              fVar15 = (float)(iVar7 + 1) * fVar18 - 1.0;
            }
            *(float *)((longlong)puVar8 + local_e8[1] + 8) = fVar15;
          }
          if (lVar5 + 1 < lVar11) {
            iVar3 = iVar2 + 2 + iVar7;
LAB_142a82cd8:
            fVar15 = (float)iVar3 * fVar18 - 1.0;
          }
          else {
            if (lVar12 <= lVar5 + 1) {
              iVar3 = iVar7 + 2;
              goto LAB_142a82cd8;
            }
            fVar15 = (float)(iVar7 + iVar6 + 2) * fVar17 + 1.0;
          }
          lVar5 = lVar5 + 4;
          uVar14 = (int)puVar10 + 4;
          puVar10 = (undefined8 *)(ulonglong)uVar14;
          iVar7 = iVar7 + 4;
          *(float *)((longlong)puVar8 + local_e8[1] + 0xc) = fVar15;
          puVar8 = puVar8 + 2;
        } while ((int)uVar14 < param_3 + -3);
      }
      if ((int)puVar10 < param_3) {
        lVar11 = (longlong)(int)puVar10;
        do {
          iVar7 = (int)puVar10;
          iVar6 = iVar7;
          if ((lVar11 < iVar13) || (iVar6 = iVar7 - iVar2, lVar12 <= lVar11)) {
            fVar15 = (float)iVar6 * fVar18 - 1.0;
          }
          else {
            fVar15 = (float)((iVar7 - iVar2) + (iVar2 - iVar13)) * fVar17 + 1.0;
          }
          puVar10 = (undefined8 *)(ulonglong)(iVar7 + 1U);
          *(float *)(local_e8[1] + lVar11 * 4) = fVar15;
          lVar11 = lVar11 + 1;
        } while ((int)(iVar7 + 1U) < param_3);
      }
      break;
    case 4:
      lVar11 = (longlong)(param_3 / 2);
      if (3 < lVar12) {
        lVar5 = 2;
        do {
          if ((longlong)puVar10 < lVar11) {
            *(undefined4 *)(local_e8[1] + (longlong)puVar10 * 4) = 0x3f800000;
          }
          else {
            *(undefined4 *)(local_e8[1] + (longlong)puVar10 * 4) = 0xbf800000;
          }
          if (lVar5 + -1 < lVar11) {
            *(undefined4 *)(local_e8[1] + 4 + (longlong)puVar10 * 4) = 0x3f800000;
          }
          else {
            *(undefined4 *)(local_e8[1] + 4 + (longlong)puVar10 * 4) = 0xbf800000;
          }
          if (lVar5 < lVar11) {
            *(undefined4 *)(local_e8[1] + 8 + (longlong)puVar10 * 4) = 0x3f800000;
          }
          else {
            *(undefined4 *)(local_e8[1] + 8 + (longlong)puVar10 * 4) = 0xbf800000;
          }
          if (lVar5 + 1 < lVar11) {
            *(undefined4 *)(local_e8[1] + 0xc + (longlong)puVar10 * 4) = 0x3f800000;
          }
          else {
            *(undefined4 *)(local_e8[1] + 0xc + (longlong)puVar10 * 4) = 0xbf800000;
          }
          puVar10 = (undefined8 *)((longlong)puVar10 + 4);
          lVar5 = lVar5 + 4;
        } while ((longlong)puVar10 < lVar12 + -3);
      }
      for (; (longlong)puVar10 < lVar12; puVar10 = (undefined8 *)((longlong)puVar10 + 1)) {
        if ((longlong)puVar10 < lVar11) {
          *(undefined4 *)(local_e8[1] + (longlong)puVar10 * 4) = 0x3f800000;
        }
        else {
          *(undefined4 *)(local_e8[1] + (longlong)puVar10 * 4) = 0xbf800000;
        }
      }
      break;
    case 5:
      fVar18 = 0.0;
      if (0 < param_3) {
        fVar17 = 1.0 / (float)param_3;
        puVar8 = puVar10;
        puVar4 = puVar10;
        do {
          *(undefined4 *)((longlong)puVar8 + local_e8[1]) = 0;
          fVar16 = (float)(int)puVar4 * 6.2831855;
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar17 * fVar16);
          *(float *)(lVar11 + (longlong)puVar8) = fVar15 + *(float *)(lVar11 + (longlong)puVar8);
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop((fVar16 + fVar16) * fVar17);
          *(float *)(lVar11 + (longlong)puVar8) =
               *(float *)(lVar11 + (longlong)puVar8) - fVar15 * 0.5;
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar16 * 3.0 * fVar17);
          *(float *)(lVar11 + (longlong)puVar8) =
               fVar15 * 0.33333334 + *(float *)(lVar11 + (longlong)puVar8);
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar16 * 4.0 * fVar17);
          *(float *)(lVar11 + (longlong)puVar8) =
               *(float *)(lVar11 + (longlong)puVar8) - fVar15 * 0.25;
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar16 * 5.0 * fVar17);
          *(float *)(lVar11 + (longlong)puVar8) =
               fVar15 * 0.2 + *(float *)(lVar11 + (longlong)puVar8);
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar16 * 6.0 * fVar17);
          uVar14 = (int)puVar4 + 1;
          puVar4 = (undefined8 *)(ulonglong)uVar14;
          *(float *)(lVar11 + (longlong)puVar8) =
               *(float *)(lVar11 + (longlong)puVar8) - fVar15 * 0.16666667;
          pfVar1 = (float *)(local_e8[1] + (longlong)puVar8);
          puVar8 = (undefined8 *)((longlong)puVar8 + 4);
          fVar15 = *pfVar1;
          if (*pfVar1 <= fVar18) {
            fVar15 = fVar18;
          }
          fVar18 = fVar15;
        } while ((int)uVar14 < param_3);
      }
      if (3 < lVar12) {
        fVar17 = 1.0 / fVar18;
        do {
          *(float *)(local_e8[1] + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 4 + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 4 + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 8 + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 8 + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 0xc + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 0xc + (longlong)puVar10 * 4);
          puVar10 = (undefined8 *)((longlong)puVar10 + 4);
        } while ((longlong)puVar10 < lVar12 + -3);
      }
      if ((longlong)puVar10 < lVar12) {
        do {
          *(float *)(local_e8[1] + (longlong)puVar10 * 4) =
               (1.0 / fVar18) * *(float *)(local_e8[1] + (longlong)puVar10 * 4);
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
        } while ((longlong)puVar10 < lVar12);
      }
      break;
    case 6:
      local_res10 = 0;
      fVar18 = 0.0;
      if (0 < param_3) {
        puVar8 = puVar10;
        puVar4 = puVar10;
        do {
          iVar13 = 1;
          *(undefined4 *)((longlong)puVar4 + local_e8[1]) = 0;
          do {
            fVar15 = (float)iVar13;
            lVar11 = local_e8[1];
            fVar16 = fVar15 + fVar15 + 1.0;
            fVar17 = _guard_xfg_dispatch_icall_nop
                               ((fVar15 + fVar15 + 1.0) * 6.2831855 * (float)(int)puVar8 *
                                (1.0 / (float)param_3));
            fVar15 = _guard_xfg_dispatch_icall_nop(-1.0,fVar15);
            iVar13 = iVar13 + 1;
            *(float *)(lVar11 + (longlong)puVar4) =
                 (fVar17 / (fVar16 * fVar16)) * fVar15 + *(float *)(lVar11 + (longlong)puVar4);
          } while (iVar13 < 7);
          local_res10 = local_res10 + 1;
          puVar8 = (undefined8 *)(ulonglong)local_res10;
          pfVar1 = (float *)(local_e8[1] + (longlong)puVar4);
          puVar4 = (undefined8 *)((longlong)puVar4 + 4);
          fVar17 = *pfVar1;
          if (*pfVar1 <= fVar18) {
            fVar17 = fVar18;
          }
          fVar18 = fVar17;
        } while ((int)local_res10 < param_3);
      }
      if (3 < lVar12) {
        fVar17 = 1.0 / fVar18;
        do {
          *(float *)(local_e8[1] + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 4 + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 4 + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 8 + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 8 + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 0xc + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 0xc + (longlong)puVar10 * 4);
          puVar10 = (undefined8 *)((longlong)puVar10 + 4);
        } while ((longlong)puVar10 < lVar12 + -3);
      }
      if ((longlong)puVar10 < lVar12) {
        do {
          *(float *)(local_e8[1] + (longlong)puVar10 * 4) =
               (1.0 / fVar18) * *(float *)(local_e8[1] + (longlong)puVar10 * 4);
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
        } while ((longlong)puVar10 < lVar12);
      }
      break;
    case 7:
      fVar18 = 0.0;
      if (0 < param_3) {
        fVar17 = 1.0 / (float)param_3;
        puVar8 = puVar10;
        puVar4 = puVar10;
        do {
          *(undefined4 *)((longlong)puVar8 + local_e8[1]) = 0;
          fVar16 = (float)(int)puVar4 * 6.2831855;
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar17 * fVar16);
          *(float *)(lVar11 + (longlong)puVar8) = fVar15 + *(float *)(lVar11 + (longlong)puVar8);
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop((fVar16 + fVar16) * fVar17);
          *(float *)(lVar11 + (longlong)puVar8) =
               fVar15 * 0.5 + *(float *)(lVar11 + (longlong)puVar8);
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar16 * 3.0 * fVar17);
          *(float *)(lVar11 + (longlong)puVar8) =
               fVar15 * 0.33333334 + *(float *)(lVar11 + (longlong)puVar8);
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar16 * 4.0 * fVar17);
          *(float *)(lVar11 + (longlong)puVar8) =
               fVar15 * 0.25 + *(float *)(lVar11 + (longlong)puVar8);
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar16 * 5.0 * fVar17);
          *(float *)(lVar11 + (longlong)puVar8) =
               fVar15 * 0.2 + *(float *)(lVar11 + (longlong)puVar8);
          lVar11 = local_e8[1];
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar16 * 6.0 * fVar17);
          uVar14 = (int)puVar4 + 1;
          puVar4 = (undefined8 *)(ulonglong)uVar14;
          *(float *)(lVar11 + (longlong)puVar8) =
               fVar15 * 0.16666667 + *(float *)(lVar11 + (longlong)puVar8);
          pfVar1 = (float *)(local_e8[1] + (longlong)puVar8);
          puVar8 = (undefined8 *)((longlong)puVar8 + 4);
          fVar15 = *pfVar1;
          if (*pfVar1 <= fVar18) {
            fVar15 = fVar18;
          }
          fVar18 = fVar15;
        } while ((int)uVar14 < param_3);
      }
      if (3 < lVar12) {
        fVar17 = 1.0 / fVar18;
        do {
          *(float *)(local_e8[1] + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 4 + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 4 + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 8 + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 8 + (longlong)puVar10 * 4);
          *(float *)(local_e8[1] + 0xc + (longlong)puVar10 * 4) =
               fVar17 * *(float *)(local_e8[1] + 0xc + (longlong)puVar10 * 4);
          puVar10 = (undefined8 *)((longlong)puVar10 + 4);
        } while ((longlong)puVar10 < lVar12 + -3);
      }
      if ((longlong)puVar10 < lVar12) {
        do {
          *(float *)(local_e8[1] + (longlong)puVar10 * 4) =
               (1.0 / fVar18) * *(float *)(local_e8[1] + (longlong)puVar10 * 4);
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
        } while ((longlong)puVar10 < lVar12);
      }
    }
  }
  *param_1 = local_e8;
  param_1[1] = local_e0;
  return param_1;
}



// FUNCTION 142a83590 FUN_142a83590 body=67 status=ok
// SIG undefined FUN_142a83590(void)

void FUN_142a83590(longlong *param_1)

{
  char cVar1;
  longlong *local_res8 [4];
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    FUN_142a95090(param_1);
    if ((*(byte *)((longlong)param_1 + 0xba) & 4) == 0) {
      local_res8[0] = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x21,local_res8);
    }
  }
  return;
}



// FUNCTION 142a835e0 Describe body=62 status=ok
// SIG undefined Describe(void)

undefined8 * Audio::FMixerSource::Describe(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Stub",10);
  return param_2;
}



// FUNCTION 142a83620 DestroyObject body=65 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<Audio::FMixerSourceBuffer,SharedPointerInternals::DefaultDeleter<Audio::FMixerSourceBuffer>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_142a8c8e0(lVar1);
    TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
              (lVar1 + 0x30);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar1 + 0x20);
    FMemory::operator_delete(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 142a83670 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<Audio::FMixerSubmix,SharedPointerInternals::DefaultDeleter<Audio::FMixerSubmix>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    Audio::FMixerSubmix::~FMixerSubmix(lVar1);
    FMemory::operator_delete(lVar1,0x200);
    return;
  }
  return;
}



// FUNCTION 142a836c0 DoWork body=129 status=ok
// SIG undefined DoWork(void)

void FAsyncTask<Audio::FMixerSourceManager::FAudioMixerSourceWorker>::DoWork(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  FUN_142a81980(uVar4,uVar1,uVar3,uVar2);
  FUN_142a810b0(uVar4,uVar1,uVar3,uVar2);
  FUN_142a80760(uVar4,uVar1,uVar3,uVar2);
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  UNLOCK();
  return;
}



// FUNCTION 142a83750 FUN_142a83750 body=810 status=ok
// SIG undefined FUN_142a83750(void)

ulonglong FUN_142a83750(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short *psVar12;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  short *local_18;
  int local_10;
  undefined4 local_c;
  
  iVar7 = *(int *)((longlong)param_1 + 0x4c);
  if (iVar7 == 0) {
    uVar9 = USoundWave::GetNumSoundsActive(param_1[6]);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    iVar6 = (**(code **)(*(longlong *)param_1[6] + 0x318))();
    iVar7 = *(int *)(param_1 + 8);
    if (iVar6 == 1) {
      iVar7 = (**(code **)(*(longlong *)param_1[6] + 0x310))((longlong *)param_1[6],param_1[7]);
      *(int *)(param_1 + 9) = (int)((ulonglong)(longlong)iVar7 >> 2);
    }
    else {
      uVar9 = 0;
      local_18 = (short *)0x0;
      local_c = 0;
      local_10 = *(int *)((longlong)param_1 + 0x44) * iVar7 * 2;
      if (0 < local_10) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_18,0);
        iVar7 = *(int *)(param_1 + 8);
      }
      psVar8 = local_18;
      iVar7 = (**(code **)(*(longlong *)param_1[6] + 0x310))((longlong *)param_1[6],local_18,iVar7);
      iVar7 = (int)((ulonglong)(longlong)iVar7 >> 1);
      *(int *)(param_1 + 9) = iVar7;
      uVar10 = uVar9;
      psVar12 = psVar8;
      if (0 < iVar7) {
        do {
          uVar5 = (int)uVar10 + 1;
          *(float *)(uVar9 + param_1[7]) = (float)(int)*psVar12 * 3.0517578e-05;
          uVar9 = uVar9 + 4;
          uVar10 = (ulonglong)uVar5;
          psVar12 = psVar12 + 1;
        } while ((int)uVar5 < *(int *)(param_1 + 9));
      }
      if (psVar8 != (short *)0x0) {
        FMemory::Free(psVar8);
      }
    }
  }
  else if (iVar7 == 1) {
    (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_1[1]);
  }
  else if (iVar7 == 2) {
    uVar9 = 0;
    iVar7 = *(int *)(param_1 + 4);
    local_28 = 0;
    iVar6 = *(int *)(param_1[2] + 0xc);
    local_1c = 0;
    local_20 = iVar7 * iVar6 * 2;
    if (0 < local_20) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_28,0);
      iVar7 = *(int *)(param_1 + 4);
    }
    lVar3 = local_28;
    if (*(char *)((longlong)param_1 + 0x25) != '\0') {
      lVar1 = param_1[2];
      plVar2 = *(longlong **)(lVar1 + 0x38);
      if (plVar2 != (longlong *)0x0) {
        if (*(int *)(lVar1 + 0x40) == 3) {
          (**(code **)(*plVar2 + 0x58))();
        }
        else {
          (**(code **)(*plVar2 + 0x10))
                    (plVar2,local_28,*(undefined1 *)((longlong)param_1 + 0x24),
                     *(int *)(lVar1 + 0xc) * iVar7 * 2);
        }
      }
      lVar1 = param_1[2];
      plVar2 = *(longlong **)(lVar1 + 0x38);
      if (plVar2 != (longlong *)0x0) {
        if (*(int *)(lVar1 + 0x40) == 3) {
          (**(code **)(*plVar2 + 0x58))();
        }
        else {
          (**(code **)(*plVar2 + 0x10))
                    (plVar2,lVar3,*(undefined1 *)((longlong)param_1 + 0x24),
                     *(int *)(lVar1 + 0xc) * *(int *)(param_1 + 4) * 2);
        }
      }
    }
    lVar1 = param_1[2];
    plVar2 = *(longlong **)(lVar1 + 0x38);
    if (plVar2 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else if (*(int *)(lVar1 + 0x40) == 3) {
      uVar4 = (**(code **)(*plVar2 + 0x58))();
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,lVar3,*(undefined1 *)((longlong)param_1 + 0x24),
                         *(int *)(lVar1 + 0xc) * *(int *)(param_1 + 4) * 2);
    }
    *(undefined1 *)(param_1 + 5) = uVar4;
    uVar10 = uVar9;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar7 = 0;
        if (3 < iVar6) {
          uVar5 = (iVar6 - 4U >> 2) + 1;
          uVar11 = (ulonglong)uVar5;
          iVar7 = uVar5 * 4;
          psVar8 = (short *)(lVar3 + (uVar9 + 2) * 2);
          do {
            *(float *)(param_1[3] + uVar9 * 4) = (float)(int)psVar8[-2] * 3.0517578e-05;
            *(float *)(param_1[3] + 4 + uVar9 * 4) = (float)(int)psVar8[-1] * 3.0517578e-05;
            *(float *)(param_1[3] + 8 + uVar9 * 4) = (float)(int)*psVar8 * 3.0517578e-05;
            *(float *)(param_1[3] + 0xc + uVar9 * 4) = (float)(int)psVar8[1] * 3.0517578e-05;
            uVar9 = uVar9 + 4;
            uVar11 = uVar11 - 1;
            psVar8 = psVar8 + 4;
          } while (uVar11 != 0);
        }
        if (iVar7 < iVar6) {
          uVar11 = (ulonglong)(uint)(iVar6 - iVar7);
          do {
            *(float *)(param_1[3] + uVar9 * 4) =
                 (float)(int)*(short *)(lVar3 + uVar9 * 2) * 3.0517578e-05;
            uVar9 = uVar9 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        uVar5 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(param_1 + 4));
    }
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  LOCK();
  uVar5 = *(uint *)(param_1 + 10);
  *(uint *)(param_1 + 10) = 1;
  UNLOCK();
  return (ulonglong)uVar5;
}



// FUNCTION 142a83a90 End body=159 status=ok
// SIG undefined End(void)

void Audio::FAudioRenderTimeAnalysis::End(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar4 = (double)(uint)(local_res8[0].s.LowPart - *(int *)(param_1 + 4)) * DAT_1468b02f8;
  param_1[6] = (double)((longlong)param_1[6] + 1);
  dVar2 = param_1[6];
  dVar1 = param_1[2];
  param_1[3] = dVar4 + param_1[3];
  param_1[2] = dVar4 + dVar1;
  dVar3 = (double)(longlong)dVar2;
  if ((longlong)dVar2 < 0) {
    dVar3 = dVar3 + 1.8446744073709552e+19;
  }
  *param_1 = (dVar4 + dVar1) / dVar3;
  if (param_1[1] <= dVar4 && dVar4 != param_1[1]) {
    param_1[1] = dVar4;
  }
  if (param_1[5] <= dVar4 && dVar4 != param_1[5]) {
    param_1[5] = dVar4;
  }
  if ((DAT_146b29e2c == 1) && (((ulonglong)dVar2 & 0x1f) == 0)) {
    param_1[3] = 0.0;
    param_1[5] = 0.0;
  }
  return;
}



// FUNCTION 142a83b30 EnsureCompletion body=155 status=ok
// SIG undefined EnsureCompletion(void)

void Audio::FDecodeHandleBase::EnsureCompletion(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x70);
  if (plVar2 == (longlong *)0x0) {
    LOCK();
    bVar4 = *(int *)(lVar1 + 0x60) == 0;
    if (bVar4) {
      *(int *)(lVar1 + 0x60) = 0;
    }
    UNLOCK();
    if (!bVar4) {
      FUN_142a83750(lVar1 + 8);
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
      UNLOCK();
    }
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    if (cVar3 != '\0') {
      FUN_142a83750(lVar1 + 8);
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
      UNLOCK();
      if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x10))();
        *(undefined8 *)(lVar1 + 0x70) = 0;
        return;
      }
      goto LAB_142a83bbc;
    }
  }
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    return;
  }
  (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x20))(*(longlong **)(lVar1 + 0x68),0xffffffff,0);
LAB_142a83bbc:
  *(undefined8 *)(lVar1 + 0x70) = 0;
  return;
}



// FUNCTION 142a83bd0 UpdateStateFrom body=19 status=ok
// SIG undefined UpdateStateFrom(void)

bool FRootMotionSource_ConstantForce::UpdateStateFrom(void)

{
  char cVar1;
  
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread();
  return cVar1 != '\0';
}



// FUNCTION 142a83bf0 FadeBufferFast body=203 status=ok
// SIG undefined FadeBufferFast(void)

void Audio::FadeBufferFast(float *param_1,int param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (1e-08 < ABS(param_3 - param_4)) {
    fVar9 = (param_4 - param_3) / (float)((int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2);
    if (0 < param_2) {
      uVar1 = (ulonglong)((param_2 - 1U >> 2) + 1);
      fVar6 = param_3;
      fVar7 = param_3;
      fVar8 = param_3;
      do {
        fVar2 = *param_1 * param_3;
        fVar3 = param_1[1] * fVar6;
        fVar4 = param_1[2] * fVar7;
        fVar5 = param_1[3] * fVar8;
        param_3 = param_3 + fVar9;
        fVar6 = fVar6 + fVar9;
        fVar7 = fVar7 + fVar9;
        fVar8 = fVar8 + fVar9;
        *param_1 = fVar2;
        param_1[1] = fVar3;
        param_1[2] = fVar4;
        param_1[3] = fVar5;
        param_1 = param_1 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (param_3 == 0.0) {
      ::_guard_xfg_dispatch_icall_nop(param_1,0,(longlong)param_2 << 2);
      return;
    }
    if (0 < param_2) {
      uVar1 = (ulonglong)((param_2 - 1U >> 2) + 1);
      do {
        *param_1 = *param_1 * param_3;
        param_1[1] = param_1[1] * param_3;
        param_1[2] = param_1[2] * param_3;
        param_1[3] = param_1[3] * param_3;
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 4;
      } while (uVar1 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 142a83cf0 FadeOut body=92 status=ok
// SIG undefined FadeOut(void)

ulonglong Audio::FMixerDevice::FadeOut(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x738);
  uVar3 = 0;
  LOCK();
  uVar1 = *(uint *)(lVar2 + 400);
  if (uVar1 == 0) {
    *(uint *)(lVar2 + 400) = 0;
  }
  else {
    uVar3 = (ulonglong)uVar1;
  }
  UNLOCK();
  if ((uVar1 == 0) && (*(float *)(lVar2 + 0x11c) != 0.0)) {
    LOCK();
    *(undefined4 *)(lVar2 + 0x18c) = 1;
    UNLOCK();
    uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x108) + 0x20))
                      (*(longlong **)(lVar2 + 0x108),0xffffffff,0);
    *(undefined4 *)(lVar2 + 0x11c) = 0;
  }
  return uVar3;
}



// FUNCTION 142a83d50 FUN_142a83d50 body=695 status=ok
// SIG undefined FUN_142a83d50(void)

void FUN_142a83d50(longlong param_1,byte param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float fVar17;
  longlong *local_res8;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  lVar10 = *(longlong *)(param_1 + 0x80);
  plVar9 = (longlong *)0x0;
  if (param_2 == 0) {
    iVar8 = *(int *)(lVar10 + 0x8d0);
    plVar5 = plVar9;
  }
  else {
    plVar5 = (longlong *)(ulonglong)param_2;
    iVar8 = *(int *)(lVar10 + 0x7e8 + (longlong)plVar5 * 4);
  }
  iVar15 = *(int *)(param_1 + 0x11c);
  local_38 = (longlong *)0x0;
  local_2c = 0;
  if (param_2 == 0) {
    iVar2 = *(int *)(lVar10 + 0x8d0);
  }
  else {
    iVar2 = *(int *)(lVar10 + 0x7e8 + (longlong)plVar5 * 4);
  }
  if ((iVar15 < 9) && (iVar2 < 9)) {
    puVar6 = (undefined8 *)(((longlong)(iVar15 + iVar2 * 8) + -9) * 0x10 + DAT_146b29e98);
    local_30 = *(int *)(puVar6 + 1);
    lVar10 = (longlong)local_30;
    _Src = (void *)*puVar6;
    if (local_30 != 0) {
      TArray<float,TAlignedHeapAllocator<16>_>::ResizeForCopy(&local_38,local_30,0);
      plVar9 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar10 << 2);
    }
  }
  else {
    iVar2 = iVar2 * iVar15;
    local_30 = iVar2;
    if (0 < iVar2) {
      TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(&local_38);
    }
    plVar9 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,0,(longlong)iVar2 << 2);
  }
  lVar10 = param_3[1];
  iVar15 = *(int *)((longlong)param_4 + 0xc);
  iVar2 = *(int *)(param_1 + 0x11c);
  *(undefined4 *)(param_4 + 1) = 0;
  iVar13 = 0;
  if ((iVar15 < 0) && (iVar13 = 0, iVar15 != 0)) {
    TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(param_4);
    iVar15 = *(int *)((longlong)param_4 + 0xc);
    iVar13 = (int)param_4[1];
  }
  iVar14 = ((int)lVar10 / iVar2) * iVar8;
  iVar2 = iVar13 + iVar14;
  *(int *)(param_4 + 1) = iVar2;
  if (iVar15 < iVar2) {
    TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*param_4 + (longlong)iVar13 * 4),0,(longlong)iVar14 << 2);
  iVar15 = *(int *)(param_1 + 0x13c);
  if (iVar15 == -1) {
    pfVar16 = (float *)*param_4;
    iVar15 = 0;
    if (0 < (int)param_3[1]) {
      iVar2 = *(int *)(param_1 + 0x11c);
      local_res8 = (longlong *)((longlong)iVar8 * 4);
      do {
        lVar10 = (longlong)iVar8;
        iVar13 = 0;
        if (0 < lVar10) {
          pfVar12 = pfVar16;
          do {
            iVar2 = *(int *)(param_1 + 0x11c);
            iVar14 = 0;
            if (0 < iVar2) {
              fVar17 = *pfVar12;
              lVar7 = (longlong)iVar15 * 4;
              iVar11 = iVar13;
              do {
                iVar14 = iVar14 + 1;
                lVar3 = (longlong)iVar11;
                iVar11 = iVar11 + iVar8;
                pfVar1 = (float *)(*param_3 + lVar7);
                lVar7 = lVar7 + 4;
                fVar17 = fVar17 + *(float *)((longlong)plVar9 + lVar3 * 4) * *pfVar1;
                *pfVar12 = fVar17;
                iVar2 = *(int *)(param_1 + 0x11c);
              } while (iVar14 < iVar2);
            }
            iVar13 = iVar13 + 1;
            pfVar12 = pfVar12 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        iVar15 = iVar15 + iVar2;
        pfVar16 = pfVar16 + iVar8;
      } while (iVar15 < (int)param_3[1]);
    }
  }
  else {
    local_30 = *(int *)(param_1 + 0x11c);
    local_res8 = param_4;
    local_38 = param_3;
    if (*(int *)(param_1 + 0x150) != iVar8) {
      *(int *)(param_1 + 0x150) = iVar8;
      uVar4 = FUN_1424f21f0(iVar8);
      iVar15 = *(int *)(param_1 + 0x13c);
      *(undefined8 *)(param_1 + 0x158) = uVar4;
    }
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x80) + 0xa10);
    if ((plVar5 != (longlong *)0x0) && (0 < *(int *)(*(longlong *)(param_1 + 0x80) + 0xa18))) {
      puVar6 = (undefined8 *)*plVar5;
      uVar4 = puVar6[1];
      *(undefined8 *)(param_1 + 0x160) = *puVar6;
      *(undefined8 *)(param_1 + 0x168) = uVar4;
    }
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x48))
              (*(longlong **)(param_1 + 0x128),iVar15,&local_38,param_1 + 0x150,&local_res8);
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  return;
}



// FUNCTION 142a84010 FUN_142a84010 body=510 status=ok
// SIG undefined FUN_142a84010(void)

ulonglong FUN_142a84010(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  lVar10 = *(longlong *)(param_1 + 0x90);
  if ((lVar10 != 0) && (*(longlong **)(lVar10 + 0x30) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar10 + 0x30) + 0x18))();
    puVar7 = *(undefined8 **)(lVar10 + 0x30);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    *(undefined8 *)(lVar10 + 0x30) = 0;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x1e4) = 1;
    UNLOCK();
    lVar10 = **(longlong **)(param_1 + 0xa8);
    iVar4 = *(int *)((longlong)*(longlong **)(param_1 + 0xa8) + 0xcc);
    *(int *)(lVar10 + 0x130) = *(int *)(lVar10 + 0x130) + -1;
    *(undefined1 *)((longlong)iVar4 + *(longlong *)(lVar10 + 0x100)) = 0;
    iVar5 = *(int *)(lVar10 + 0xf8);
    *(int *)(lVar10 + 0xf8) = iVar5 + 1;
    if (*(int *)(lVar10 + 0xfc) < iVar5 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar10 + 0xf0,iVar5);
    }
    local_38 = 0;
    *(int *)(*(longlong *)(lVar10 + 0xf0) + (longlong)iVar5 * 4) = iVar4;
    local_28 = 0;
    local_78 = lVar10;
    iStack_70 = iVar4;
    puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar7 + 1) = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_78._4_4_;
      *(int *)(puVar7 + 2) = iStack_70;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_142a7fb20;
    Audio::FMixerSourceManager::AudioMixerThreadCommand(lVar10,local_68);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  local_80 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x98) != &local_88) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa0,&local_80);
    plVar6 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  puVar9 = (undefined4 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  LOCK();
  uVar3 = *(uint *)(param_1 + 0x1d0);
  *(uint *)(param_1 + 0x1d0) = 0;
  uVar8 = (ulonglong)uVar3;
  UNLOCK();
  *(undefined4 *)(param_1 + 0x68) = 0;
  lVar10 = 6;
  do {
    *(undefined1 *)(puVar9 + 2) = 0;
    *puVar9 = 0;
    if (0x7fffffff < (uint)puVar9[1]) {
      uVar8 = TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(puVar9 + -2,0);
    }
    puVar9 = puVar9 + 6;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return uVar8;
}



// FUNCTION 142a84210 FUN_142a84210 body=472 status=ok
// SIG undefined FUN_142a84210(void)

void FUN_142a84210(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if ((param_2 == '\0') || (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4))) {
    if ((*(int *)(param_1 + 0x140) < 1) || (DAT_14667e9f8 != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x134);
      FUN_142a81980(param_1,param_2,0,uVar1);
      FUN_142a810b0(param_1,param_2,0,uVar1);
      FUN_142a80760(param_1,param_2,0,uVar1);
      return;
    }
    iVar5 = *(int *)(param_1 + 0xd8);
    uVar9 = 0;
    uVar8 = uVar9;
    uVar10 = uVar9;
    if (0 < iVar5) {
      do {
        *(char *)(*(longlong *)(uVar10 + *(longlong *)(param_1 + 0xd0)) + 0x18) = param_2;
        lVar3 = DAT_1468b5010;
        lVar2 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0xd0));
        LOCK();
        *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
        UNLOCK();
        *(longlong *)(lVar2 + 0x30) = lVar3;
        plVar6 = *(longlong **)(lVar2 + 0x28);
        if (lVar3 == 0) {
          FUN_1415b5910();
          *(undefined8 *)(lVar2 + 0x28) = 0;
          FAsyncTask<Audio::FMixerSourceManager::FAudioMixerSourceWorker>::DoWork(lVar2);
        }
        else {
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)FUN_1415ab270(1);
            *(longlong **)(lVar2 + 0x28) = plVar6;
          }
          (**(code **)(*plVar6 + 0x18))();
          (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x10))(*(longlong **)(lVar2 + 0x30),lVar2);
        }
        iVar5 = *(int *)(param_1 + 0xd8);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar10 = uVar10 + 8;
      } while ((int)uVar7 < iVar5);
    }
    uVar8 = uVar9;
    if (0 < iVar5) {
      do {
        lVar2 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0xd0));
        plVar6 = *(longlong **)(lVar2 + 0x30);
        if (plVar6 == (longlong *)0x0) {
          LOCK();
          bVar11 = *(int *)(lVar2 + 0x20) == 0;
          if (bVar11) {
            *(int *)(lVar2 + 0x20) = 0;
          }
          UNLOCK();
          if (!bVar11) {
            FAsyncTask<Audio::FMixerSourceManager::FAudioMixerSourceWorker>::DoWork(lVar2);
          }
code_r0x000142a8435f:
          if (*(longlong *)(lVar2 + 0x30) != 0) {
            (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x20))
                      (*(longlong **)(lVar2 + 0x28),0xffffffff,0);
            goto LAB_142a84377;
          }
        }
        else {
          cVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar2);
          if (cVar4 == '\0') goto code_r0x000142a8435f;
          FAsyncTask<Audio::FMixerSourceManager::FAudioMixerSourceWorker>::DoWork(lVar2);
          if (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x10))();
          }
LAB_142a84377:
          *(undefined8 *)(lVar2 + 0x30) = 0;
        }
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar8 = uVar8 + 8;
      } while ((int)uVar7 < *(int *)(param_1 + 0xd8));
    }
  }
  return;
}



// FUNCTION 142a843f0 Get2DChannelMap body=207 status=ok
// SIG undefined Get2DChannelMap(void)

void Audio::FMixerDevice::Get2DChannelMap
               (longlong param_1,char param_2,byte param_3,int param_4,byte param_5,
               longlong *param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    iVar3 = *(int *)(param_1 + 0x8d0);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x7e8 + (ulonglong)param_3 * 4);
  }
  if ((param_4 < 9) && (iVar3 < 9)) {
    if ((param_2 != '\0') && (param_4 == 6)) {
      FUN_142a774f0(param_6,(longlong)(iVar3 + -1) * 0x10 + DAT_146b29ea8);
      return;
    }
    FUN_142a774f0(param_6,(longlong)(int)(param_4 + -9 + (iVar3 + (uint)param_5 * 8) * 8) * 0x10 +
                          DAT_146b29e98);
    return;
  }
  lVar1 = param_6[1];
  iVar2 = (int)lVar1 + iVar3 * param_4;
  *(int *)(param_6 + 1) = iVar2;
  if (*(int *)((longlong)param_6 + 0xc) < iVar2) {
    TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_6);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_6 + (longlong)(int)lVar1 * 4),0,(longlong)(iVar3 * param_4) << 2);
  return;
}



// FUNCTION 142a844c0 FUN_142a844c0 body=812 status=ok
// SIG undefined FUN_142a844c0(void)

void FUN_142a844c0(longlong param_1,int param_2,uint param_3,char param_4,longlong *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  lVar5 = (longlong)(int)param_3 + -1;
  puVar9 = (undefined4 *)(&PTR_DAT_14667ea00)[lVar5];
  if (param_2 == 1) {
    if (param_3 == 1) {
      iVar8 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
      }
      *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = 0x3f800000;
    }
    else if (((param_3 == 3) || (4 < (int)param_3)) && (param_4 != '\0')) {
      iVar8 = 0;
      if (0 < (int)param_3) {
        do {
          iVar2 = (int)param_5[1];
          iVar4 = iVar2 + 1;
          *(int *)(param_5 + 1) = iVar4;
          if (iVar8 == 2) {
            if (*(int *)((longlong)param_5 + 0xc) < iVar4) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
            }
            *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = 0x3f800000;
          }
          else {
            if (*(int *)((longlong)param_5 + 0xc) < iVar4) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
            }
            *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = 0;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)param_3);
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0x850);
      if (cVar1 == '\0') {
        iVar8 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
        }
        *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = 0x3f000000;
        iVar8 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
        }
        *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = 0x3f000000;
      }
      else if (cVar1 == '\x01') {
        iVar8 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
        }
        *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = 0x3f34fdf4;
        iVar8 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
        }
        *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = 0x3f34fdf4;
      }
      else if (cVar1 == '\x02') {
        iVar8 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
        }
        *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = 0x3f800000;
        iVar8 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
        }
        *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = 0x3f800000;
      }
      if (2 < (int)param_3) {
        puVar9 = puVar9 + 0x10;
        uVar7 = (ulonglong)(param_3 - 2);
        do {
          iVar8 = (int)param_5[1];
          *(int *)(param_5 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
          }
          uVar3 = *puVar9;
          puVar9 = puVar9 + 8;
          *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = uVar3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
  else {
    if ((param_2 == 6) && (param_4 == '\0')) {
      puVar11 = (undefined4 *)(&PTR_DAT_14667ea40)[lVar5];
      plVar6 = (longlong *)(lVar5 * 0x10 + DAT_146b29ea8);
      *(undefined4 *)(plVar6 + 1) = 0;
      if ((*(int *)((longlong)plVar6 + 0xc) < 0) && (*(int *)((longlong)plVar6 + 0xc) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar6,0);
      }
      lVar5 = 6;
      do {
        uVar7 = (ulonglong)param_3;
        puVar10 = puVar11;
        if (0 < (int)param_3) {
          do {
            iVar8 = (int)plVar6[1];
            *(int *)(plVar6 + 1) = iVar8 + 1;
            if (*(int *)((longlong)plVar6 + 0xc) < iVar8 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
            }
            *(undefined4 *)(*plVar6 + (longlong)iVar8 * 4) = *puVar10;
            uVar7 = uVar7 - 1;
            puVar10 = puVar10 + 6;
          } while (uVar7 != 0);
        }
        puVar11 = puVar11 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    lVar5 = (longlong)param_2;
    if (0 < param_2) {
      do {
        uVar7 = (ulonglong)param_3;
        puVar11 = puVar9;
        if (0 < (int)param_3) {
          do {
            iVar8 = (int)param_5[1];
            *(int *)(param_5 + 1) = iVar8 + 1;
            if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
            }
            *(undefined4 *)(*param_5 + (longlong)iVar8 * 4) = *puVar11;
            uVar7 = uVar7 - 1;
            puVar11 = puVar11 + 8;
          } while (uVar7 != 0);
        }
        puVar9 = puVar9 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 142a847f0 FUN_142a847f0 body=1414 status=ok
// SIG undefined FUN_142a847f0(void)

void FUN_142a847f0(longlong param_1,byte param_2,longlong param_3,float param_4,float param_5,
                  longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *piVar12;
  ulonglong uVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((*(uint *)(param_3 + 0xa4) & 0x1000) == 0) {
    pbVar10 = (byte *)0x0;
    if (*(int *)(param_1 + 0x7a0) != *(int *)(param_1 + 0x7cc)) {
      lVar2 = *(longlong *)(param_1 + 0x7d8);
      if (*(longlong *)(param_1 + 0x7d8) == 0) {
        lVar2 = param_1 + 2000;
      }
      iVar8 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x7e0) - 1U & (ulonglong)param_2) * 4);
      if (iVar8 != -1) {
        do {
          pbVar6 = (byte *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x798));
          if (*pbVar6 == param_2) {
            if (iVar8 != -1) goto LAB_142a849b1;
            break;
          }
          iVar8 = *(int *)(pbVar6 + 0x18);
        } while (iVar8 != -1);
      }
    }
    pbVar6 = pbVar10;
LAB_142a849b1:
    pbVar11 = pbVar6 + 8;
    if (pbVar6 == (byte *)0x0) {
      pbVar11 = pbVar10;
    }
    iVar8 = *(int *)(pbVar11 + 8);
    if (0 < iVar8) {
      lVar2 = *(longlong *)pbVar11;
      piVar4 = (int *)(lVar2 + 4);
      pbVar6 = pbVar10;
      pbVar7 = pbVar10;
      do {
        iVar5 = (int)pbVar7;
        if (param_4 <= (float)*piVar4) {
          piVar4 = (int *)(lVar2 + (longlong)iVar5 * 8);
          iVar3 = iVar8;
          if (-1 < iVar5 + -1) {
            iVar3 = iVar5;
          }
          piVar12 = (int *)(lVar2 + (longlong)(iVar3 + -1) * 8);
          if (piVar12 != (int *)0x0) goto LAB_142a84a1b;
          break;
        }
        pbVar7 = (byte *)(ulonglong)(iVar5 + 1);
        pbVar6 = pbVar6 + 1;
        piVar4 = piVar4 + 2;
      } while ((longlong)pbVar6 < (longlong)iVar8);
    }
    piVar4 = *(int **)pbVar11;
    piVar12 = piVar4 + (longlong)(iVar8 + -1) * 2;
LAB_142a84a1b:
    fVar15 = (float)piVar4[1];
    fVar16 = (float)piVar12[1];
    if (fVar15 < fVar16) {
      fVar15 = fVar15 + 360.0;
    }
    if (param_4 < fVar16) {
      param_4 = param_4 + 360.0;
    }
    fVar15 = (param_4 - fVar16) / (fVar15 - fVar16);
    if (*(char *)(param_1 + 0x851) == '\x01') {
      fVar15 = fVar15 * 1.5707964;
      if (fVar15 < 0.0) {
        fVar16 = fVar15 * 0.15915494 - 0.5;
      }
      else {
        fVar16 = fVar15 * 0.15915494 + 0.5;
      }
      fVar15 = fVar15 - (float)(int)fVar16 * 6.2831855;
      if (fVar15 <= 1.5707964) {
        if (-1.5707964 <= fVar15) {
          fVar16 = 1.0;
        }
        else {
          fVar16 = -1.0;
          fVar15 = -3.1415927 - fVar15;
        }
      }
      else {
        fVar16 = -1.0;
        fVar15 = 3.1415927 - fVar15;
      }
      fVar17 = fVar15 * fVar15;
      fVar15 = (((((2.7525562e-06 - fVar17 * 2.3889859e-08) * fVar17 - 0.00019840874) * fVar17 +
                 0.008333331) * fVar17 - 0.16666667) * fVar17 + 1.0) * fVar15;
      fVar16 = (((((2.4760495e-05 - fVar17 * 2.6051615e-07) * fVar17 - 0.0013888378) * fVar17 +
                 0.041666638) * fVar17 - 0.5) * fVar17 + 1.0) * fVar16;
      if (0.0 <= fVar15) {
        if (1.0 <= fVar15) {
          fVar15 = 1.0;
        }
      }
      else {
        fVar15 = 0.0;
      }
      if (0.0 <= fVar16) {
        if (1.0 <= fVar16) {
          fVar16 = 1.0;
        }
      }
      else {
        fVar16 = 0.0;
      }
    }
    else {
      fVar16 = 1.0 - fVar15;
    }
    fVar17 = 0.0;
    if (1.0 < param_5 * param_5) {
      fVar17 = 1.0 - 1.0 / (param_5 * param_5);
    }
    iVar5 = iVar8 + -1;
    if (iVar8 < 5) {
      iVar5 = iVar8;
    }
    fVar21 = 1.0 / (float)iVar5;
    if (fVar17 == 0.0) {
      fVar22 = 0.0;
    }
    else {
      fVar22 = fVar21 * fVar17;
    }
    puVar1 = (undefined8 *)FUN_142a85000(param_1,param_2);
    piVar14 = (int *)*puVar1;
    pbVar6 = (byte *)((longlong)*(int *)(puVar1 + 1) & 0x3fffffffffffffff);
    if (piVar14 + *(int *)(puVar1 + 1) < piVar14) {
      pbVar6 = pbVar10;
    }
    if (pbVar6 != (byte *)0x0) {
      do {
        iVar8 = *piVar14;
        if (iVar8 == 3) {
          fVar20 = *(float *)(param_3 + 0x98);
        }
        else {
          if (iVar8 == *piVar12) {
            fVar19 = fVar16;
            if (fVar17 != 0.0) {
              fVar19 = (fVar21 - fVar16) * fVar17 + fVar16;
            }
          }
          else {
            fVar19 = fVar22;
            if ((iVar8 == *piVar4) && (fVar19 = fVar15, fVar17 != 0.0)) {
              fVar19 = (fVar21 - fVar15) * fVar17 + fVar15;
            }
          }
          fVar20 = fVar19;
          if ((iVar8 == 2) &&
             (fVar20 = *(float *)(param_3 + 0x88), *(float *)(param_3 + 0x88) <= fVar19)) {
            fVar20 = fVar19;
          }
        }
        iVar8 = (int)param_6[1];
        *(int *)(param_6 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_6 + 0xc) < iVar8 + 1) {
          TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_6,iVar8);
        }
        piVar14 = piVar14 + 1;
        pbVar10 = pbVar10 + 1;
        *(float *)(*param_6 + (longlong)iVar8 * 4) = fVar20;
      } while (pbVar10 != pbVar6);
    }
  }
  else {
    if (param_2 == 0) {
      iVar8 = *(int *)(param_1 + 0x8d0);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x7e8 + (ulonglong)param_2 * 4);
    }
    puVar1 = (undefined8 *)FUN_142a85000(param_1,param_2);
    if (iVar8 == 2) {
      iVar8 = (int)param_6[1];
      *(int *)(param_6 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_6 + 0xc) < iVar8 + 1) {
        TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_6,iVar8);
      }
      *(undefined4 *)(*param_6 + (longlong)iVar8 * 4) = DAT_14667ea80;
      iVar8 = (int)param_6[1];
      *(int *)(param_6 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_6 + 0xc) < iVar8 + 1) {
        TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_6,iVar8);
      }
      *(undefined4 *)(*param_6 + (longlong)iVar8 * 4) = DAT_14667ea80;
    }
    else {
      piVar4 = (int *)*puVar1;
      uVar9 = 0;
      uVar13 = (longlong)*(int *)(puVar1 + 1) & 0x3fffffffffffffff;
      if (piVar4 + *(int *)(puVar1 + 1) < piVar4) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        do {
          if (*piVar4 == 2) {
            uVar18 = 0x3f800000;
          }
          else {
            uVar18 = 0;
          }
          iVar8 = (int)param_6[1];
          *(int *)(param_6 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_6 + 0xc) < iVar8 + 1) {
            TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_6,iVar8);
          }
          piVar4 = piVar4 + 1;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(*param_6 + (longlong)iVar8 * 4) = uVar18;
        } while (uVar9 != uVar13);
      }
    }
  }
  return;
}



// FUNCTION 142a84d80 FUN_142a84d80 body=401 status=ok
// SIG undefined FUN_142a84d80(void)

void FUN_142a84d80(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  void *local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_48;
  undefined8 local_40;
  
  if ((((*(longlong **)(param_1 + 0x738) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x58))(), cVar2 != '\0')) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x60))
                         (*(longlong **)(param_1 + 0x738),local_res8), cVar2 != '\0')) &&
     (uVar5 = 0, local_res8[0] != 0)) {
    do {
      local_78 = (void *)0x0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_48 = 0;
      local_40 = 0;
      Audio::FAudioPlatformDeviceInfo::Reset(&local_78);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x68))
                        (*(longlong **)(param_1 + 0x738),uVar5,&local_78);
      if (cVar2 != '\0') {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
        }
        _Src = local_78;
        puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
        *puVar3 = 0;
        lVar4 = (longlong)(int)local_70;
        *(int *)(puVar3 + 1) = (int)local_70;
        if ((int)local_70 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,local_70 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,lVar4 * 2);
        }
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return;
}



// FUNCTION 142a84f20 FUN_142a84f20 body=90 status=ok
// SIG undefined FUN_142a84f20(void)

longlong FUN_142a84f20(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) &&
      (iVar1 = FUN_1428cf800(lVar2), iVar1 != 1)) &&
     ((lVar2 = UWorld::GetAudioDevice(lVar2), lVar2 != 0 && ((*(byte *)(lVar2 + 0x358) & 0x20) != 0)
      ))) {
    return lVar2;
  }
  return 0;
}



// FUNCTION 142a84f90 FUN_142a84f90 body=96 status=ok
// SIG undefined FUN_142a84f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142a84f90(uint *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  if (0 < param_2) {
    uVar5 = (ulonglong)((param_2 - 1U >> 2) + 1);
    do {
      uVar1 = *param_1;
      puVar2 = param_1 + 1;
      puVar3 = param_1 + 2;
      puVar4 = param_1 + 3;
      param_1 = param_1 + 4;
      fVar6 = fVar6 + (float)(uVar1 & _DAT_146b29f70);
      fVar7 = fVar7 + (float)(*puVar2 & uRam0000000146b29f74);
      fVar8 = fVar8 + (float)(*puVar3 & uRam0000000146b29f78);
      fVar9 = fVar9 + (float)(*puVar4 & uRam0000000146b29f7c);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return CONCAT44(fVar7,(fVar6 + fVar7 + fVar8 + fVar9) / (float)param_2);
}



// FUNCTION 142a84ff0 GetBufferData body=16 status=ok
// SIG undefined GetBufferData(void)

undefined8 Audio::FOutputBuffer::GetBufferData(longlong param_1)

{
  if (*(int *)(param_1 + 0x28) == 1) {
    return *(undefined8 *)(param_1 + 8);
  }
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 142a85000 FUN_142a85000 body=154 status=ok
// SIG undefined FUN_142a85000(void)

byte * FUN_142a85000(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_2 == 0) {
    return (byte *)(param_1 + 0x8e0);
  }
  if (*(int *)(param_1 + 0x808) != *(int *)(param_1 + 0x834)) {
    lVar2 = *(longlong *)(param_1 + 0x840);
    if (*(longlong *)(param_1 + 0x840) == 0) {
      lVar2 = param_1 + 0x838;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x848) - 1U & (ulonglong)param_2) * 4);
    if (iVar1 != -1) {
      while (pbVar4 = (byte *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x800)),
            *pbVar4 != param_2) {
        iVar1 = *(int *)(pbVar4 + 0x18);
        if (iVar1 == -1) {
          return (byte *)0x0;
        }
      }
      if (iVar1 != -1) goto LAB_142a8508e;
    }
  }
  pbVar4 = (byte *)0x0;
LAB_142a8508e:
  pbVar3 = pbVar4 + 8;
  if (pbVar4 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  return pbVar3;
}



// FUNCTION 142a850e0 FUN_142a850e0 body=189 status=ok
// SIG undefined FUN_142a850e0(void)

undefined8 FUN_142a850e0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x968) != *(int *)(param_1 + 0x994)) {
    lVar2 = *(longlong *)(param_1 + 0x9a0);
    if (*(longlong *)(param_1 + 0x9a0) == 0) {
      lVar2 = param_1 + 0x998;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x9a8) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x960));
        if (*piVar4 == param_2) {
          if (iVar1 != -1) goto LAB_142a85160;
          break;
        }
        iVar1 = piVar4[6];
      } while (iVar1 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_142a85160:
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  FUN_1408e22e0(param_3,piVar3);
  return 1;
}



// FUNCTION 142a851e0 GetNextBuffer body=728 status=ok
// SIG undefined GetNextBuffer(void)

uint Audio::FRawPCMDataBuffer::GetNextBuffer(longlong *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  byte bVar9;
  
  puVar7 = (undefined4 *)*param_2;
  lVar1 = *param_1;
  if (*(int *)((longlong)param_1 + 0xc) == -1) {
    bVar9 = 0;
    uVar2 = 0;
    if (3 < param_3) {
      uVar5 = *(uint *)(param_1 + 2);
      pfVar8 = (float *)(puVar7 + 2);
      uVar2 = (param_3 - 4 >> 2) + 1;
      uVar6 = (ulonglong)uVar2;
      uVar2 = uVar2 * 4;
      do {
        pfVar8[-2] = (float)(int)*(short *)(lVar1 + (ulonglong)uVar5 * 2) * 3.0517578e-05;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        uVar3 = (ulonglong)*(uint *)(param_1 + 2);
        if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2)) {
          *(undefined4 *)(param_1 + 2) = 0;
          bVar9 = 1;
          uVar3 = 0;
        }
        pfVar8[-1] = (float)(int)*(short *)(lVar1 + uVar3 * 2) * 3.0517578e-05;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        uVar3 = (ulonglong)*(uint *)(param_1 + 2);
        if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2)) {
          *(undefined4 *)(param_1 + 2) = 0;
          bVar9 = 1;
          uVar3 = 0;
        }
        *pfVar8 = (float)(int)*(short *)(lVar1 + uVar3 * 2) * 3.0517578e-05;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        uVar3 = (ulonglong)*(uint *)(param_1 + 2);
        if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2)) {
          *(undefined4 *)(param_1 + 2) = 0;
          bVar9 = 1;
          uVar3 = 0;
        }
        pfVar8[1] = (float)(int)*(short *)(lVar1 + uVar3 * 2) * 3.0517578e-05;
        uVar5 = (int)param_1[2] + 1;
        *(uint *)(param_1 + 2) = uVar5;
        if (*(uint *)((longlong)param_1 + 0x14) <= uVar5) {
          *(undefined4 *)(param_1 + 2) = 0;
          bVar9 = 1;
          uVar5 = 0;
        }
        pfVar8 = pfVar8 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (uVar2 < param_3) {
      uVar6 = (ulonglong)(param_3 - uVar2);
      pfVar8 = (float *)(puVar7 + uVar2);
      do {
        *pfVar8 = (float)(int)*(short *)(lVar1 + (ulonglong)*(uint *)(param_1 + 2) * 2) *
                  3.0517578e-05;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2)) {
          *(undefined4 *)(param_1 + 2) = 0;
          bVar9 = 1;
        }
        pfVar8 = pfVar8 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    return (uint)bVar9;
  }
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 < *(uint *)((longlong)param_1 + 0x14)) {
    uVar6 = 0;
    if (3 < param_3) {
      pfVar8 = (float *)(puVar7 + 2);
      do {
        if (*(uint *)((longlong)param_1 + 0x14) <= uVar2) goto LAB_142a8547c;
        pfVar8[-2] = (float)(int)*(short *)(lVar1 + (ulonglong)uVar2 * 2) * 3.0517578e-05;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        iVar4 = (int)uVar6;
        if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2)) {
          uVar6 = (ulonglong)(iVar4 + 1);
          goto LAB_142a8547c;
        }
        pfVar8[-1] = (float)(int)*(short *)(lVar1 + (ulonglong)*(uint *)(param_1 + 2) * 2) *
                     3.0517578e-05;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2)) {
          uVar6 = (ulonglong)(iVar4 + 2);
          goto LAB_142a8547c;
        }
        *pfVar8 = (float)(int)*(short *)(lVar1 + (ulonglong)*(uint *)(param_1 + 2) * 2) *
                  3.0517578e-05;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2)) {
          uVar6 = (ulonglong)(iVar4 + 3);
          goto LAB_142a8547c;
        }
        uVar6 = (ulonglong)(iVar4 + 4U);
        pfVar8[1] = (float)(int)*(short *)(lVar1 + (ulonglong)*(uint *)(param_1 + 2) * 2) *
                    3.0517578e-05;
        pfVar8 = pfVar8 + 4;
        uVar2 = (int)param_1[2] + 1;
        *(uint *)(param_1 + 2) = uVar2;
      } while (iVar4 + 4U < param_3 - 3);
    }
    if (param_3 <= (uint)uVar6) goto LAB_142a854a5;
    pfVar8 = (float *)(puVar7 + uVar6);
    while (uVar2 < *(uint *)((longlong)param_1 + 0x14)) {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      *pfVar8 = (float)(int)*(short *)(lVar1 + (ulonglong)uVar2 * 2) * 3.0517578e-05;
      pfVar8 = pfVar8 + 1;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      uVar2 = *(uint *)(param_1 + 2);
      if (param_3 <= uVar5) {
        return CONCAT31((int3)(*(uint *)((longlong)param_1 + 0x14) >> 8),
                        *(uint *)((longlong)param_1 + 0x14) <= uVar2);
      }
    }
LAB_142a8547c:
    if (param_3 <= (uint)uVar6) goto LAB_142a854a5;
    param_3 = param_3 - (uint)uVar6;
    puVar7 = puVar7 + uVar6;
  }
  else if (param_3 == 0) goto LAB_142a854a5;
  for (uVar6 = (ulonglong)param_3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
LAB_142a854a5:
  return CONCAT31((int3)(*(uint *)((longlong)param_1 + 0x14) >> 8),
                  *(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2));
}



// FUNCTION 142a854d0 FUN_142a854d0 body=176 status=ok
// SIG undefined FUN_142a854d0(void)

undefined4 FUN_142a854d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong local_18;
  undefined8 local_10;
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x830) & 0x4000) != 0)) {
    iVar2 = FUN_1428cf800(lVar3);
    if (iVar2 != 1) {
      plVar4 = (longlong *)UWorld::GetAudioDevice();
      if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 0x6b) & 0x20) != 0)) {
        local_18 = 0;
        local_10 = 0;
        cVar1 = (**(code **)(*plVar4 + 0xe0))(plVar4,*(undefined4 *)(param_2 + 0xc),&local_18);
        if (cVar1 == '\0') {
          uVar5 = *(undefined4 *)(param_2 + 0x30);
        }
        else {
          uVar5 = (undefined4)local_10;
        }
        if (local_18 != 0) {
          FMemory::Free();
        }
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 142a85580 GetPlatformSettings body=31 status=ok
// SIG undefined GetPlatformSettings(void)

undefined8 Audio::FMixerDevice::GetPlatformSettings(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x70))();
  return param_2;
}



// FUNCTION 142a85610 GetResult body=171 status=ok
// SIG undefined GetResult(void)

void Audio::FDecodeHandle::GetResult(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 0x70);
  if (plVar2 == (longlong *)0x0) {
    LOCK();
    bVar4 = *(int *)(lVar1 + 0x60) == 0;
    if (bVar4) {
      *(int *)(lVar1 + 0x60) = 0;
    }
    UNLOCK();
    if (!bVar4) {
      FUN_142a83750(lVar1 + 8);
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
      UNLOCK();
    }
code_r0x000142a8567e:
    if (*(longlong *)(lVar1 + 0x70) == 0) goto LAB_142a8569a;
    (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x20))(*(longlong **)(lVar1 + 0x68),0xffffffff,0);
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    if (cVar3 == '\0') goto code_r0x000142a8567e;
    FUN_142a83750(lVar1 + 8);
    LOCK();
    *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
    UNLOCK();
    if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x10))();
    }
  }
  *(undefined8 *)(lVar1 + 0x70) = 0;
LAB_142a8569a:
  *param_2 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x30);
  return;
}



// FUNCTION 142a856c0 GetResult body=170 status=ok
// SIG undefined GetResult(void)

void Audio::FProceduralDecodeHandle::GetResult(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 0x70);
  if (plVar2 == (longlong *)0x0) {
    LOCK();
    bVar4 = *(int *)(lVar1 + 0x60) == 0;
    if (bVar4) {
      *(int *)(lVar1 + 0x60) = 0;
    }
    UNLOCK();
    if (!bVar4) {
      FUN_142a83750(lVar1 + 8);
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
      UNLOCK();
    }
code_r0x000142a8572e:
    if (*(longlong *)(lVar1 + 0x70) == 0) goto LAB_142a8574a;
    (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x20))(*(longlong **)(lVar1 + 0x68),0xffffffff,0);
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    if (cVar3 == '\0') goto code_r0x000142a8572e;
    FUN_142a83750(lVar1 + 8);
    LOCK();
    *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
    UNLOCK();
    if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x10))();
    }
  }
  *(undefined8 *)(lVar1 + 0x70) = 0;
LAB_142a8574a:
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50);
  return;
}



// FUNCTION 142a85770 GetRuntimeFormat body=34 status=ok
// SIG undefined GetRuntimeFormat(void)

undefined8 Audio::FMixerDevice::GetRuntimeFormat(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0xb8))();
  return param_2;
}



// FUNCTION 142a857a0 GetSize body=105 status=ok
// SIG undefined GetSize(void)

int Audio::FMixerBuffer::GetSize(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (-1 < iVar1) {
    if (iVar1 < 2) {
      return *(int *)(param_1 + 0x58);
    }
    if (iVar1 == 2) {
      if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
        return *(int *)(param_1 + 0xc) * 0x4000 + iVar1;
      }
      return *(int *)(param_1 + 0xc) * 0x4000;
    }
    if (iVar1 == 3) {
      return *(int *)(param_1 + 0xc) << 0xe;
    }
  }
  return 0;
}



// FUNCTION 142a85810 FUN_142a85810 body=206 status=ok
// SIG undefined FUN_142a85810(void)

undefined8 * FUN_142a85810(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x11f,local_res8);
  puVar3 = (undefined8 *)0x0;
  puVar4 = puVar3;
  if (local_res8[0] != -1) {
    puVar4 = (undefined8 *)((longlong)local_res8[0] * 0x20 + param_1[0x11f]);
  }
  puVar2 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0x50))(param_1,param_3,CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x11f,local_res10,param_3);
    puVar2 = puVar3;
    if ((local_res10[0] != -1) &&
       (lVar1 = (longlong)local_res10[0] * 0x20 + param_1[0x11f], lVar1 != 0)) {
      puVar2 = (undefined8 *)(lVar1 + 8);
    }
  }
  *param_2 = *puVar2;
  lVar1 = puVar2[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142a85900 Init body=325 status=ok
// SIG undefined Init(void)

void Audio::FBiquadFilter::Init
               (longlong param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
               undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(float *)(param_1 + 0x18) = param_2;
  fVar8 = 5.0;
  if ((5.0 <= param_5) && (fVar8 = param_2 * 0.5 - 1.0, param_5 <= fVar8)) {
    fVar8 = param_5;
  }
  *(float *)(param_1 + 0x20) = fVar8;
  *(undefined4 *)(param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 0x28) = param_7;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    if (puVar2[-1] == 0) {
      FMemory::operator_delete(puVar2 + -1);
    }
    else {
      (**(code **)*puVar2)(puVar2,3);
    }
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x1c);
  plVar3 = (longlong *)operator_new();
  uVar4 = 0;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    *plVar3 = lVar5;
    plVar3 = plVar3 + 1;
    plVar1 = plVar3;
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar1 = (longlong)&PTR__vector_deleting_destructor__1454d43c8;
      plVar1[1] = 0x3f800000;
      plVar1[2] = 0;
      plVar1[3] = 0;
      plVar1[4] = 0;
      *(undefined4 *)(plVar1 + 5) = 0;
      plVar1 = plVar1 + 6;
    }
  }
  *(longlong **)(param_1 + 0x10) = plVar3;
  uVar7 = uVar4;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x10);
      uVar6 = (int)uVar7 + 1;
      *(undefined8 *)(uVar4 + 0x1c + lVar5) = 0;
      *(undefined8 *)(uVar4 + 0x24 + lVar5) = 0;
      uVar4 = uVar4 + 0x30;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x1c));
  }
  CalculateBiquadCoefficients(param_1);
  return;
}



// FUNCTION 142a85a50 Init body=469 status=ok
// SIG undefined Init(void)

void Audio::FDynamicsProcessor::Init(longlong param_1,float param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  if (0 < (int)param_3) {
    uVar7 = (ulonglong)param_3;
    iVar8 = 1 - (int)(param_2 * -0.1);
    do {
      iVar3 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar3 + 1;
      if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 8,iVar3);
      }
      lVar6 = *(longlong *)(param_1 + 8);
      lVar5 = (longlong)iVar3 * 0x40;
      *(undefined ***)(lVar5 + lVar6) = &PTR__scalar_deleting_destructor__1454d45f8;
      *(undefined8 *)(lVar5 + 8 + lVar6) = 0;
      *(undefined8 *)(lVar5 + 0x10 + lVar6) = 0;
      *(undefined8 *)(lVar5 + 0x18 + lVar6) = 0;
      *(undefined4 *)(lVar5 + 0x20 + lVar6) = 0xbf800000;
      puVar1 = (undefined8 *)(lVar5 + 0x24 + lVar6);
      *puVar1 = 0x38d1b71700000000;
      puVar1[1] = 0x38d1b71700000000;
      *(undefined8 *)(lVar5 + 0x34 + lVar6) = 0x3f800000;
      lVar6 = *(longlong *)(param_1 + 8) + lVar5;
      *(float *)(lVar6 + 0x1c) = param_2;
      *(int *)(lVar6 + 0x10) = iVar8;
      iVar3 = iVar8;
      if (*(longlong *)(lVar6 + 8) != 0) {
        FMemory::operator_delete();
        iVar3 = *(int *)(lVar6 + 0x10);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (longlong)iVar3;
      uVar4 = SUB168(ZEXT816(4) * auVar2,0);
      if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar4 = operator_new(uVar4);
      *(undefined8 *)(lVar6 + 8) = uVar4;
      FDelay::Reset(lVar6);
      FDelay::SetDelayMsec(*(longlong *)(param_1 + 8) + lVar5,*(undefined4 *)(param_1 + 0x58));
      iVar3 = *(int *)(param_1 + 0x20);
      lVar6 = (longlong)iVar3;
      *(int *)(param_1 + 0x20) = iVar3 + 1;
      if (*(int *)(param_1 + 0x24) < iVar3 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar3);
      }
      lVar5 = *(longlong *)(param_1 + 0x18);
      *(undefined ***)(lVar5 + lVar6 * 0x28) = &PTR_FUN_14416bf40;
      *(undefined4 *)(lVar5 + 8 + lVar6 * 0x28) = 2;
      *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x28) = 0x472c4400;
      *(undefined8 *)(lVar5 + 0x14 + lVar6 * 0x28) = 0;
      *(undefined8 *)(lVar5 + 0x1c + lVar6 * 0x28) = 0;
      *(undefined1 *)(lVar5 + 0x24 + lVar6 * 0x28) = 1;
      FEnvelopeFollower::Init
                (*(longlong *)(param_1 + 0x18) + lVar6 * 0x28,param_2,
                 *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),1,
                 *(undefined1 *)(param_1 + 0x79));
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 142a85c30 Init body=747 status=ok
// SIG undefined Init(void)

void Audio::FEarlyReflections::Init(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  
  puVar10 = (undefined8 *)(param_1 + 0x1e0);
  piVar8 = (int *)(param_1 + 0x30);
  fVar11 = (float)param_2;
  lVar9 = 2;
  DAT_14667e9f0 = fVar11 * 3.360102e-05;
  iVar7 = 1 - (int)(fVar11 * -0.2);
  DAT_14667e9f4 = param_2;
  do {
    piVar8[3] = (int)fVar11;
    *piVar8 = (int)fVar11 + 1;
    iVar3 = (int)fVar11 + 1;
    if (*(longlong *)(piVar8 + -2) != 0) {
      FMemory::operator_delete();
      iVar3 = *piVar8;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)iVar3;
    uVar4 = SUB168(ZEXT816(4) * auVar1,0);
    if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    uVar4 = operator_new(uVar4);
    *(undefined8 *)(piVar8 + -2) = uVar4;
    FDelay::Reset(piVar8 + -4);
    piVar5 = piVar8 + 0x14;
    lVar6 = 4;
    do {
      piVar5[3] = (int)fVar11;
      *piVar5 = iVar7;
      iVar3 = iVar7;
      if (*(longlong *)(piVar5 + -2) != 0) {
        FMemory::operator_delete();
        iVar3 = *piVar5;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (longlong)iVar3;
      uVar4 = SUB168(ZEXT816(4) * auVar2,0);
      if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar4 = operator_new(uVar4);
      *(undefined8 *)(piVar5 + -2) = uVar4;
      FDelay::Reset(piVar5 + -4);
      piVar5 = piVar5 + 0x12;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    piVar8 = piVar8 + 0x74;
    puVar10[-2] = 0;
    puVar10[-1] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10 = puVar10 + 0x3a;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FDelay::SetDelayMsec(param_1 + 0x70,(DAT_14667e9f0 * 710.0 * 1000.0) / (float)DAT_14667e9f4);
  FDelay::SetDelayMsec(param_1 + 0xb8,(DAT_14667e9f0 * 535.0 * 1000.0) / (float)DAT_14667e9f4);
  FDelay::SetDelayMsec(param_1 + 0x100,(DAT_14667e9f0 * 1895.0 * 1000.0) / (float)DAT_14667e9f4);
  FDelay::SetDelayMsec(param_1 + 0x148,(DAT_14667e9f0 * 1385.0 * 1000.0) / (float)DAT_14667e9f4);
  FDelay::SetDelayMsec(param_1 + 0x240,(DAT_14667e9f0 * 1395.0 * 1000.0) / (float)DAT_14667e9f4);
  FDelay::SetDelayMsec(param_1 + 0x288,(DAT_14667e9f0 * 685.0 * 1000.0) / (float)DAT_14667e9f4);
  FDelay::SetDelayMsec(param_1 + 0x2d0,(DAT_14667e9f0 * 1065.0 * 1000.0) / (float)DAT_14667e9f4);
  FDelay::SetDelayMsec(param_1 + 0x318,(DAT_14667e9f0 * 1635.0 * 1000.0) / (float)DAT_14667e9f4);
  ApplySettings(param_1);
  return;
}



// FUNCTION 142a85f20 Init body=180 status=ok
// SIG undefined Init(void)

void Audio::FEnvelopeFollower::Init
               (longlong param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               char param_6)

{
  float fVar1;
  float fVar2;
  
  fVar2 = -1002.3935;
  *(float *)(param_1 + 0xc) = param_2;
  *(float *)(param_1 + 0x10) = param_3;
  *(char *)(param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 8) = param_5;
  if (param_6 == '\0') {
    fVar1 = -4605.1704;
  }
  else {
    fVar1 = -1002.3935;
  }
  fVar1 = ::_guard_xfg_dispatch_icall_nop(fVar1 / (param_2 * param_3));
  *(float *)(param_1 + 0x14) = fVar1;
  *(float *)(param_1 + 0x18) = param_4;
  if (param_6 == '\0') {
    fVar2 = -4605.1704;
  }
  fVar2 = ::_guard_xfg_dispatch_icall_nop(fVar2 / (param_2 * param_4));
  *(float *)(param_1 + 0x1c) = fVar2;
  return;
}



// FUNCTION 142a85fe0 FUN_142a85fe0 body=181 status=ok
// SIG undefined FUN_142a85fe0(void)

undefined8 FUN_142a85fe0(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0xe4) != 0)) {
    FUN_1428742d0(DAT_146b17150);
    uVar2 = (uint)*(byte *)(param_2 + 0xb1);
    if ((param_3 == '\0') || (*(byte *)(param_2 + 0xb1) == 0)) {
      if (7 < uVar2) {
        return 0;
      }
    }
    else if (uVar2 != 7) {
      uVar2 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x000142a86064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                      *(uint *)(&DAT_142a863f8 + (longlong)(int)uVar2 * 4)))
                      (IMAGE_DOS_HEADER_140000000.e_magic +
                       *(uint *)(&DAT_142a863f8 + (longlong)(int)uVar2 * 4));
    return uVar1;
  }
  return 0;
}



// FUNCTION 142a86420 FUN_142a86420 body=3836 status=ok
// SIG undefined FUN_142a86420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a86420(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 (*pauVar3) [16];
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined4 *puVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong *plStack_220;
  undefined4 local_218;
  longlong local_210;
  longlong *local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  longlong *aplStack_1b0 [2];
  longlong local_1a0;
  longlong *local_198 [2];
  longlong local_188;
  longlong *local_180 [2];
  longlong local_170;
  longlong *local_168 [2];
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong local_118;
  longlong *plStack_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  longlong local_c0;
  int local_b8;
  int iStack_b4;
  undefined8 *local_b0;
  int local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_60;
  undefined1 local_5f;
  undefined2 local_5e;
  byte local_5c;
  byte local_5b;
  undefined1 local_5a;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  FSoundSource::InitCommon();
  uVar23 = 0xffffffff;
  lVar18 = *(longlong *)param_1[2];
  if (*(char *)(lVar18 + 0xb1) != '\x05') {
    uVar23 = (undefined4)
             ((ulonglong)(longlong)*(int *)(lVar18 + 0xe8) /
             (ulonglong)((longlong)*(int *)(lVar18 + 0xe4) * 2));
  }
  lVar19 = 0;
  *(uint *)(param_1 + 0x3d) =
       *(uint *)(param_1 + 0x3d) ^
       ((uint)*(byte *)(lVar18 + 0xb4) ^ *(uint *)(param_1 + 0x3d)) & 0x10;
  *(uint *)(param_1 + 0x3d) =
       ((uint)*(byte *)(param_1[0x11] + 0x358) * 2 ^ *(uint *)(param_1 + 0x3d)) & 0x20 ^
       *(uint *)(param_1 + 0x3d);
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x3b) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  UNLOCK();
  lVar18 = param_1[0x12];
  if (*(int *)(lVar18 + 0xc) < 1) {
    return 0;
  }
  lVar5 = param_1[0x11];
  lVar15 = **(longlong **)(lVar5 + 0x958);
  local_158 = lVar18;
  if (lVar15 == 0) {
    puVar12 = (undefined8 *)operator_new(0xd8);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      *(undefined4 *)(puVar12 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
      puVar12[9] = 0;
      *(undefined4 *)(puVar12 + 10) = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      *(undefined4 *)(puVar12 + 0x12) = 0xffffffff;
      *(undefined4 *)((longlong)puVar12 + 0x94) = 0;
      puVar12[0x14] = 0;
      *(undefined4 *)(puVar12 + 0x15) = 0;
      *(undefined4 *)(puVar12 + 0x16) = 0;
      puVar12[0xb] = 0;
      *puVar12 = 0;
      *(undefined4 *)((longlong)puVar12 + 0xb4) = 0xbf800000;
      *(undefined4 *)(puVar12 + 0x17) = 0xbf800000;
      *(undefined4 *)((longlong)puVar12 + 0xbc) = 0xbf800000;
      *(undefined4 *)(puVar12 + 0x18) = 0xbf800000;
      *(undefined4 *)((longlong)puVar12 + 0xc4) = 0xbf800000;
      puVar12[0x19] = 0xffffffffbf800000;
      *(ushort *)(puVar12 + 0x1a) = *(ushort *)(puVar12 + 0x1a) & 0xffe0;
      LOCK();
      *(undefined4 *)(puVar12 + 0x16) = 0;
      UNLOCK();
      FUN_142a92330();
    }
  }
  else {
    puVar12 = *(undefined8 **)(lVar15 + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x958);
    *(longlong *)(lVar5 + 0x958) = lVar15;
    *(undefined8 *)(lVar15 + 8) = 0;
    FMemory::operator_delete(uVar6,0x10);
  }
  FUN_142a92530(puVar12,lVar5);
  param_1[0x15] = (longlong)puVar12;
  if (puVar12 == (undefined8 *)0x0) {
    return 0;
  }
  plVar13 = (longlong *)param_1[2];
  iVar10 = 0;
  local_b8 = 0;
  iStack_b4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_5e = 0;
  local_5a = 0;
  local_108 = param_1 + 0x10;
  local_cc = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_100 = (longlong *)0x0;
  local_a8 = *(int *)(*plVar13 + 0xe4);
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xffffffff;
  local_c0 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_60 = 0;
  if ((((*(int *)(param_1[3] + 0xc) != 1) || ((*(byte *)(param_1[1] + 0x359) & 4) == 0)) ||
      (DAT_146b29e28 != 0)) || (local_5f = 1, (int)plVar13[0x15] != 1)) {
    local_5f = 0;
  }
  local_5b = (byte)(*(uint *)((longlong)plVar13 + 0xa4) >> 0xf) & 1;
  local_c8 = 0;
  local_70 = *(undefined8 *)(plVar13[0xc] + 0x20);
  local_68 = *(undefined8 *)(plVar13[0xc] + 0x18);
  local_5c = (byte)(*(uint *)(param_1 + 0x3d) >> 4) & 1;
  local_a0 = (float)*(int *)((longlong)plVar13 + 0x7c);
  local_9c = (float)(int)plVar13[0x10];
  cVar9 = '\0';
  local_b0 = puVar12;
  local_a4 = uVar23;
  if (local_a8 < 3) {
    lVar18 = plVar13[9];
    if (lVar18 != 0) {
      iVar20 = 0;
      local_c8 = *(undefined4 *)(lVar18 + 0xc);
      if (0 < *(int *)(lVar18 + 0x30)) {
        lVar18 = 0;
        local_b8 = iVar10;
        do {
          lVar15 = (longlong)local_b8;
          lVar5 = *(longlong *)(plVar13[9] + 0x28);
          iVar14 = local_b8 + 1;
          if (iVar10 < iVar14) {
            iVar10 = local_b8;
            local_b8 = iVar14;
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c0,iVar10);
            lVar19 = local_c0;
            iVar10 = iStack_b4;
            iVar14 = local_b8;
          }
          local_b8 = iVar14;
          pauVar3 = (undefined1 (*) [16])(lVar5 + lVar18);
          iVar20 = iVar20 + 1;
          lVar18 = lVar18 + 0x10;
          *(undefined1 (*) [16])(lVar19 + lVar15 * 0x10) = *pauVar3;
          plVar13 = (longlong *)param_1[2];
          local_60 = *(byte *)(plVar13[9] + 0x38) & 1;
        } while (iVar20 < *(int *)(plVar13[9] + 0x30));
      }
    }
    lVar19 = 0;
    if (local_60 != 0) {
      LOCK();
      *(undefined4 *)(param_1 + 0x3b) = 0;
      UNLOCK();
      plVar13 = (longlong *)param_1[2];
    }
    if ((*(byte *)(*plVar13 + 0xb3) & 0x10) != 0) {
      local_d0 = *(undefined4 *)(*plVar13 + 0xc);
      cVar9 = USoundBase::IsLooping();
      if (cVar9 == '\0') {
        local_cc = (**(code **)(**(longlong **)param_1[2] + 0x2a0))();
      }
    }
    local_5e = CONCAT11(*(undefined1 *)(param_1[2] + 0xa4),(undefined1)local_5e) & 0x1ff;
    do {
      puVar16 = *(undefined4 **)(lVar19 + 0x28 + param_1[2]);
      puVar21 = puVar16 + (longlong)*(int *)(lVar19 + 0x30 + param_1[2]) * 4;
      lVar18 = local_158;
      for (; local_158 = lVar18, puVar16 != puVar21; puVar16 = puVar16 + 4) {
        if (*(longlong *)(puVar16 + 2) != 0) {
          iVar10 = *(int *)((longlong)&local_e8 + lVar19);
          local_200 = *(undefined4 *)(*(longlong *)(puVar16 + 2) + 0xc);
          uStack_1fc = *puVar16;
          *(int *)((longlong)&local_e8 + lVar19) = iVar10 + 1;
          if (*(int *)((longlong)&local_e8 + lVar19 + 4) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      ((longlong)&local_f0 + lVar19,iVar10);
          }
          *(ulonglong *)(*(longlong *)((longlong)&local_f0 + lVar19) + (longlong)iVar10 * 8) =
               CONCAT44(uStack_1fc,local_200);
        }
        lVar18 = local_158;
      }
      lVar19 = lVar19 + 0x10;
    } while (lVar19 < 0x20);
    local_5e._1_1_ = (char)(local_5e >> 8);
    cVar9 = local_5e._1_1_;
  }
  if (cVar9 != '\0') goto LAB_142a86f73;
  lVar19 = param_1[2];
  if ((*(int *)(lVar19 + 0xa8) != 1) || ((*(byte *)(param_1[0x11] + 0x358) & 0x40) == 0)) {
    if ((*(uint *)(lVar19 + 0xa4) & 0x8000) == 0) {
      if (*(longlong *)(lVar19 + 0x10) == 0) {
        plVar13 = (longlong *)UAudioSettings::GetPrivateStaticClass();
        lVar19 = plVar13[0x1f];
        if (lVar19 == 0) {
          (**(code **)(*plVar13 + 0x368))(plVar13);
          lVar19 = plVar13[0x1f];
        }
        if (((*(uint *)(lVar19 + 0xd0) >> 1 & 1) == 0) &&
           ((*(uint *)(param_1[2] + 0xa4) >> 8 & 1) != 0)) {
          plVar13 = *(longlong **)(*(longlong *)(param_1[0x11] + 0x728) + 0x38);
          lVar19 = *(longlong *)(*(longlong *)(param_1[0x11] + 0x728) + 0x30);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar13 + 1;
              lVar5 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
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
          }
          if (lVar19 != 0) {
            local_180[0] = (longlong *)0x0;
            local_1e0 = *(longlong **)(*(longlong *)(param_1[0x11] + 0x728) + 0x38);
            local_188 = *(longlong *)(*(longlong *)(param_1[0x11] + 0x728) + 0x30);
            if (local_1e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
              UNLOCK();
            }
            local_1e8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(local_180,&local_1e0);
            plVar13 = local_1e0;
            if (local_1e0 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_1e0 + 1;
              lVar19 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*local_1e0)(local_1e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_1e0 + 8))(local_1e0,1);
                }
              }
            }
            uVar7 = local_f8;
            lVar19 = (longlong)(int)local_f8;
            iVar10 = (int)local_f8 + 1;
            local_f8 = CONCAT44(local_f8._4_4_,iVar10);
            if (local_f8._4_4_ < iVar10) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_100,uVar7 & 0xffffffff);
            }
            plVar13 = local_180[0];
            local_100[lVar19 * 3] = local_188;
            local_100[lVar19 * 3 + 1] = (longlong)local_180[0];
            if (local_180[0] != (longlong *)0x0) {
              LOCK();
              *(int *)(local_180[0] + 1) = (int)local_180[0][1] + 1;
              UNLOCK();
            }
            *(undefined4 *)(local_100 + lVar19 * 3 + 2) = 0x3f800000;
            *(undefined1 *)((longlong)local_100 + lVar19 * 0x18 + 0x14) = 1;
            if (local_180[0] != (longlong *)0x0) {
              LOCK();
              plVar17 = local_180[0] + 1;
              lVar19 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*local_180[0])(local_180[0]);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar13 = local_180[0];
                goto joined_r0x000142a86d05;
              }
            }
            goto LAB_142a86e1c;
          }
        }
        local_168[0] = (longlong *)0x0;
        local_1d0 = (longlong *)(*(longlong **)(param_1[0x11] + 0x728))[1];
        local_170 = **(longlong **)(param_1[0x11] + 0x728);
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
          UNLOCK();
        }
        local_1d8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_168,&local_1d0);
        plVar13 = local_1d0;
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_1d0 + 1;
          lVar19 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_1d0 + 8))(local_1d0,1);
            }
          }
        }
        uVar7 = local_f8;
        lVar19 = (longlong)(int)local_f8;
        iVar10 = (int)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,iVar10);
        if (local_f8._4_4_ < iVar10) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_100,uVar7 & 0xffffffff);
        }
        plVar13 = local_168[0];
        local_100[lVar19 * 3] = local_170;
        local_100[lVar19 * 3 + 1] = (longlong)local_168[0];
        if (local_168[0] != (longlong *)0x0) {
          LOCK();
          *(int *)(local_168[0] + 1) = (int)local_168[0][1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(local_100 + lVar19 * 3 + 2) = 0x3f800000;
        *(undefined1 *)((longlong)local_100 + lVar19 * 0x18 + 0x14) = 1;
        if (local_168[0] != (longlong *)0x0) {
          LOCK();
          plVar17 = local_168[0] + 1;
          lVar19 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*local_168[0])(local_168[0]);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar13 = local_168[0];
            goto joined_r0x000142a86d05;
          }
        }
      }
      else {
        local_1b8 = 0;
        aplStack_1b0[0] = (longlong *)0x0;
        plVar13 = (longlong *)FUN_142a85810(param_1[0x11],local_140);
        if (&local_1b8 != plVar13) {
          local_1b8 = *plVar13;
          *plVar13 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(aplStack_1b0,plVar13 + 1);
        }
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_138 + 1;
          lVar19 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
            }
          }
        }
        uVar7 = local_f8;
        lVar19 = (longlong)(int)local_f8;
        iVar10 = (int)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,iVar10);
        if (local_f8._4_4_ < iVar10) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_100,uVar7 & 0xffffffff);
        }
        plVar13 = aplStack_1b0[0];
        local_100[lVar19 * 3] = local_1b8;
        local_100[lVar19 * 3 + 1] = (longlong)aplStack_1b0[0];
        if (aplStack_1b0[0] != (longlong *)0x0) {
          LOCK();
          *(int *)(aplStack_1b0[0] + 1) = (int)aplStack_1b0[0][1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(local_100 + lVar19 * 3 + 2) = 0x3f800000;
        *(undefined1 *)((longlong)local_100 + lVar19 * 0x18 + 0x14) = 1;
        if (aplStack_1b0[0] != (longlong *)0x0) {
          LOCK();
          plVar17 = aplStack_1b0[0] + 1;
          lVar19 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*aplStack_1b0[0])(aplStack_1b0[0]);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar13 = aplStack_1b0[0];
            goto joined_r0x000142a86d05;
          }
        }
      }
    }
    else {
      local_198[0] = (longlong *)0x0;
      local_1f0 = *(longlong **)(*(longlong *)(param_1[0x11] + 0x728) + 0x48);
      local_1a0 = *(longlong *)(*(longlong *)(param_1[0x11] + 0x728) + 0x40);
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
        UNLOCK();
      }
      local_1f8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_198,&local_1f0);
      plVar13 = local_1f0;
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_1f0 + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_1f0 + 8))(local_1f0,1);
          }
        }
      }
      uVar7 = local_f8;
      lVar19 = (longlong)(int)local_f8;
      iVar10 = (int)local_f8 + 1;
      local_f8 = CONCAT44(local_f8._4_4_,iVar10);
      if (local_f8._4_4_ < iVar10) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_100,uVar7 & 0xffffffff);
      }
      plVar13 = local_198[0];
      local_100[lVar19 * 3] = local_1a0;
      local_100[lVar19 * 3 + 1] = (longlong)local_198[0];
      if (local_198[0] != (longlong *)0x0) {
        LOCK();
        *(int *)(local_198[0] + 1) = (int)local_198[0][1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(local_100 + lVar19 * 3 + 2) = 0x3f800000;
      *(undefined1 *)((longlong)local_100 + lVar19 * 0x18 + 0x14) = 1;
      if (local_198[0] != (longlong *)0x0) {
        LOCK();
        plVar17 = local_198[0] + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_198[0])(local_198[0]);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar13 = local_198[0];
joined_r0x000142a86d05:
          if (iVar10 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
    }
  }
LAB_142a86e1c:
  puVar16 = *(undefined4 **)(param_1[2] + 0x18);
  puVar21 = puVar16 + (longlong)*(int *)(param_1[2] + 0x20) * 4;
  for (; puVar16 != puVar21; puVar16 = puVar16 + 4) {
    if (*(longlong *)(puVar16 + 2) != 0) {
      local_228 = 0;
      plStack_220 = (longlong *)0x0;
      plVar13 = (longlong *)FUN_142a85810(param_1[0x11],local_130);
      if (&local_228 != plVar13) {
        local_228 = *plVar13;
        *plVar13 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_220,plVar13 + 1);
      }
      plVar13 = local_128;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_128 + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_128)(local_128);
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
      uVar7 = local_f8;
      lVar19 = (longlong)(int)local_f8;
      uVar23 = *puVar16;
      iVar10 = (int)local_f8 + 1;
      local_f8 = CONCAT44(local_f8._4_4_,iVar10);
      local_218 = uVar23;
      if (local_f8._4_4_ < iVar10) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_100,uVar7 & 0xffffffff);
      }
      plVar13 = plStack_220;
      local_100[lVar19 * 3] = local_228;
      local_100[lVar19 * 3 + 1] = (longlong)plStack_220;
      if (plStack_220 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
        UNLOCK();
        uVar23 = local_218;
      }
      *(undefined4 *)(local_100 + lVar19 * 3 + 2) = uVar23;
      *(undefined1 *)((longlong)local_100 + lVar19 * 0x18 + 0x14) = 0;
      if (plStack_220 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_220 + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plStack_220)(plStack_220);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plStack_220 + 8))(plStack_220,1);
          }
        }
      }
    }
  }
LAB_142a86f73:
  plVar13 = local_100 + (longlong)(int)local_f8 * 3;
  for (plVar17 = local_100; plVar17 != plVar13; plVar17 = plVar17 + 3) {
    bVar4 = *(byte *)(*plVar17 + 0x118);
    *(undefined1 *)(param_1 + (ulonglong)bVar4 * 3 + 0x18) = 1;
    plVar8 = param_1 + (ulonglong)bVar4 * 3 + 0x16;
    *(undefined4 *)(plVar8 + 1) = 0;
    if (*(int *)((longlong)plVar8 + 0xc) < 0) {
      TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar8,0);
    }
  }
  if (((((*(int *)(param_1[3] + 0xc) == 1) && ((*(byte *)(param_1[1] + 0x359) & 4) != 0)) &&
       (DAT_146b29e28 == 0)) && (lVar19 = param_1[2], *(int *)(lVar19 + 0xa8) == 1)) ||
     ((lVar19 = param_1[2], (*(byte *)(lVar19 + 0xa4) & 0x20) == 0 ||
      (uVar11 = 4, 2 < *(int *)(lVar18 + 0xc))))) {
    uVar11 = 0;
  }
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfffffffb;
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | uVar11;
  iVar10 = *(int *)(param_1[3] + 0xc);
  if (((((iVar10 != 1) || ((*(byte *)(param_1[1] + 0x359) & 4) == 0)) ||
       (local_88 = *(longlong *)(lVar19 + 0xb0), local_88 == 0)) && (local_88 = 0, 1 < iVar10 - 1U))
     || (((*(byte *)(param_1[1] + 0x359) & 8) == 0 ||
         (lStack_80 = *(longlong *)(lVar19 + 0xb8), lStack_80 == 0)))) {
    lStack_80 = 0;
  }
  if (((1 < iVar10 - 1U) || ((*(byte *)(param_1[1] + 0x359) & 0x10) == 0)) ||
     (local_78 = *(longlong *)(lVar19 + 0xc0), local_78 == 0)) {
    local_78 = 0;
  }
  FSoundSource::SetReverbApplied(param_1,CONCAT71((int7)((ulonglong)lVar19 >> 8),1));
  fVar22 = (float)USoundWave::GetSampleRateForCurrentPlatform(*(undefined8 *)param_1[2]);
  plVar13 = param_1 + 0x13;
  *(int *)(param_1[0x12] + 0x44) = (int)fVar22;
  lVar18 = *plVar13;
  if (((*(byte *)(*(longlong *)(lVar18 + 0x50) + 0xb3) & 4) == 0) ||
     (iVar10 = USoundWave::GetNumSoundsActive(), iVar10 < 1)) {
    USoundWave::IncrementNumSounds(*(undefined8 *)(lVar18 + 0x50));
    lVar19 = *(longlong *)(lVar18 + 0x48);
    *(undefined1 *)(lVar18 + 100) = 1;
    iVar10 = *(int *)(lVar19 + 0x40);
    if (-1 < iVar10) {
      if (iVar10 < 2) {
        *(undefined8 *)(lVar18 + 8) = 0;
        *(undefined4 *)(lVar18 + 0x10) = 0;
        *(undefined4 *)(lVar18 + 0x40) = 0;
        lVar5 = *(longlong *)(lVar19 + 0x50);
        *(longlong *)(lVar18 + 8) = lVar5;
        uVar11 = *(uint *)(lVar19 + 0x58);
        *(uint *)(lVar18 + 0x10) = uVar11;
        *(uint *)(lVar18 + 0x1c) = uVar11 >> 1;
        *(undefined4 *)(lVar18 + 0x18) = 0;
        if ((lVar5 != 0) && (uVar11 != 0)) {
          *(uint *)(lVar18 + 0x14) = -(uint)(*(int *)(lVar18 + 0x60) != 0);
          Audio::FRawPCMDataBuffer::GetNextBuffer
                    (lVar18 + 8,**(undefined8 **)(lVar18 + 0x20),*(int *)(lVar19 + 0xc) << 0xd);
          local_150 = **(undefined8 **)(lVar18 + 0x20);
          local_148 = (*(undefined8 **)(lVar18 + 0x20))[1];
          if (local_148 != 0) {
            LOCK();
            *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
            UNLOCK();
          }
          FUN_142a956e0(lVar18,&local_150);
          *(undefined4 *)(lVar18 + 0x40) = 1;
        }
      }
      else if (iVar10 < 4) {
        FUN_142a95780(lVar18);
      }
    }
  }
  plVar17 = plStack_110;
  local_58 = *plVar13;
  lStack_50 = param_1[0x14];
  if (lStack_50 != 0) {
    LOCK();
    *(int *)(lStack_50 + 8) = *(int *)(lStack_50 + 8) + 1;
    UNLOCK();
  }
  local_1c8 = local_118;
  plStack_1c0 = plStack_110;
  local_118 = local_58;
  plVar8 = (longlong *)lStack_50;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    lVar18 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      puVar12 = (undefined8 *)*plStack_110;
      plStack_110 = (longlong *)lStack_50;
      (*(code *)*puVar12)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = plStack_110;
      if (iVar10 == 1) {
        (**(code **)(*plStack_1c0 + 8))(plStack_1c0,1);
        plVar8 = plStack_110;
      }
    }
  }
  plStack_110 = plVar8;
  local_208 = (longlong *)0x0;
  if (plVar13 != &local_210) {
    *plVar13 = 0;
    local_210 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14,&local_208);
    plVar13 = local_208;
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_208 + 1;
      lVar18 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
  }
  cVar9 = FUN_142a87bf0(param_1[0x15],&local_118);
  if (cVar9 == '\0') {
    *(undefined1 *)(param_1 + 0x38) = 0;
    Audio::FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(&local_118);
    return 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 2;
  (**(code **)(*param_1 + 0x28))(param_1);
  Audio::FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(&local_118);
  return 1;
}



// FUNCTION 142a87320 FUN_142a87320 body=2248 status=ok
// SIG undefined FUN_142a87320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a87320(longlong *param_1,uint *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_118 [32];
  char local_f8;
  int local_f4;
  longlong local_f0;
  longlong *plStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (((*(byte *)((longlong)param_1 + 0x144) & 1) == 0) && (lVar11 = *param_1, lVar11 != 0)) {
    uVar13 = *param_2;
    uVar14 = (ulonglong)uVar13;
    *(uint *)((longlong)param_1 + 0x134) = uVar13;
    iVar15 = *(int *)(lVar11 + 0x1c);
    puVar17 = (undefined8 *)0x0;
    *(int *)(param_1 + 0x27) = iVar15;
    *(int *)((longlong)param_1 + 0x13c) = *(int *)(lVar11 + 0x8d0) * iVar15;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(uint *)((longlong)param_1 + 0x24) != uVar13) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 3);
    }
    if (0 < (int)uVar13) {
      do {
        iVar15 = (int)param_1[4];
        *(int *)(param_1 + 4) = iVar15 + 1;
        if (*(int *)((longlong)param_1 + 0x24) < iVar15 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 3,iVar15);
        }
        puVar16 = (undefined8 *)(param_1[3] + (longlong)iVar15 * 8);
        if (puVar16 != (undefined8 *)0x0) {
          *puVar16 = 0;
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    lVar11 = param_1[0xf];
    iVar15 = *(int *)((longlong)param_1 + 0x134);
    iVar7 = (int)lVar11 + iVar15;
    *(int *)(param_1 + 0xf) = iVar7;
    if (*(int *)((longlong)param_1 + 0x7c) < iVar7) {
      TArray<Audio::FMixerSourceManager::FSourceInfo,FDefaultAllocator>::ResizeGrow(param_1 + 0xe);
    }
    lVar11 = (longlong)(int)lVar11 * 0x4b0 + param_1[0xe];
    for (; iVar15 != 0; iVar15 = iVar15 + -1) {
      FUN_142a7a5b0(lVar11);
      lVar11 = lVar11 + 0x4b0;
    }
    iVar15 = *(int *)((longlong)param_1 + 0x134);
    local_f4 = 0;
    if (0 < iVar15) {
      local_e0 = 0;
      do {
        puVar16 = (undefined8 *)(param_1[0xe] + local_e0);
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        if (puVar16 != &local_d8) {
          *puVar16 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(puVar16 + 1,&plStack_d0);
          plVar18 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_d0 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
              }
            }
          }
        }
        *(undefined4 *)((longlong)puVar16 + 0xec) = 0xbf800000;
        *(undefined4 *)(puVar16 + 0x1e) = 0xbf800000;
        *(undefined8 *)((longlong)puVar16 + 0xf4) = 0;
        *(undefined8 *)((longlong)puVar16 + 0xfc) = 0;
        *(undefined4 *)((longlong)puVar16 + 0x104) = 0xbf800000;
        *(undefined4 *)(puVar16 + 0x21) = 0xbf800000;
        puVar16[2] = 0;
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        if (puVar16 + 3 != &local_c8) {
          puVar16[3] = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(puVar16 + 4,&plStack_c0);
          plVar18 = plStack_c0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_c0 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
              }
            }
          }
        }
        *(undefined4 *)(puVar16 + 5) = 0;
        puVar16[0x10] = 0;
        puVar16[0x11] = 0;
        puVar16[0x12] = 0;
        iVar15 = *(int *)((longlong)puVar16 + 0xa4);
        lVar11 = puVar16[0x13];
        iVar7 = *(int *)(puVar16 + 0x14);
        if (iVar15 < 0) {
          if (iVar7 != 0) {
            plVar18 = (longlong *)(lVar11 + 8);
            do {
              plVar3 = (longlong *)*plVar18;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar3 + 1;
                lVar11 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
              plVar18 = plVar18 + 3;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            iVar15 = *(int *)((longlong)puVar16 + 0xa4);
          }
          *(undefined4 *)(puVar16 + 0x14) = 0;
          if (iVar15 != 0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeTo(puVar16 + 0x13,0);
          }
        }
        else {
          if (iVar7 != 0) {
            plVar18 = (longlong *)(lVar11 + 8);
            do {
              plVar3 = (longlong *)*plVar18;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar3 + 1;
                lVar11 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
              plVar18 = plVar18 + 3;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          *(undefined4 *)(puVar16 + 0x14) = 0;
        }
        *(undefined4 *)(puVar16 + 0x15) = 0xffffffff;
        puVar16[0x16] = 0xffffffffffffffff;
        *(undefined4 *)(puVar16 + 0x18) = 0;
        if ((*(int *)((longlong)puVar16 + 0xc4) < 0) && (*(int *)((longlong)puVar16 + 0xc4) != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(puVar16 + 0x17,0);
        }
        *(undefined4 *)(puVar16 + 0x1a) = 0;
        if ((*(int *)((longlong)puVar16 + 0xd4) < 0) && (*(int *)((longlong)puVar16 + 0xd4) != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(puVar16 + 0x19,0);
        }
        cVar5 = local_f8;
        *(undefined4 *)(puVar16 + 0x40) = 0xffffffff;
        fVar21 = (float)*(int *)(*param_1 + 0x14);
        if (local_f8 == '\0') {
          fVar19 = -4605.1704;
        }
        else {
          fVar19 = -1002.3935;
        }
        fVar19 = _guard_xfg_dispatch_icall_nop((0.1 / fVar21) * fVar19);
        if (cVar5 == '\0') {
          fVar20 = -4605.1704;
        }
        else {
          fVar20 = -1002.3935;
        }
        fVar20 = _guard_xfg_dispatch_icall_nop((0.01 / fVar21) * fVar20);
        local_f4 = local_f4 + 1;
        *(float *)((longlong)puVar16 + 0x2cc) = fVar21;
        local_e0 = local_e0 + 0x4b0;
        *(float *)((longlong)puVar16 + 0x2d4) = fVar19;
        *(float *)((longlong)puVar16 + 0x2dc) = fVar20;
        *(undefined4 *)(puVar16 + 0x5c) = 0;
        *(undefined4 *)(puVar16 + 0x59) = 2;
        *(undefined4 *)(puVar16 + 0x5a) = 0x41200000;
        *(undefined4 *)(puVar16 + 0x5b) = 0x42c80000;
        *(char *)((longlong)puVar16 + 0x2e4) = cVar5;
        *(byte *)((longlong)puVar16 + 0x47a) = *(byte *)((longlong)puVar16 + 0x47a) & 0xfc;
        *(undefined4 *)(puVar16 + 0x5d) = 0;
        *(undefined1 *)(puVar16 + 0x45) = 0;
        puVar16[0x70] = 0;
        *(undefined2 *)(puVar16 + 0x8f) = 0;
        puVar16[0x92] = 0;
        *(undefined4 *)(puVar16 + 0x93) = 0;
        iVar15 = *(int *)((longlong)param_1 + 0x134);
      } while (local_f4 < iVar15);
    }
    lVar11 = param_1[0x21];
    iVar7 = (int)lVar11 + iVar15;
    *(int *)(param_1 + 0x21) = iVar7;
    if (*(int *)((longlong)param_1 + 0x10c) < iVar7) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)lVar11 + param_1[0x20]),0,(longlong)iVar15);
    iVar15 = *(int *)((longlong)param_1 + 0x134);
    lVar11 = param_1[0x23];
    iVar7 = (int)lVar11 + iVar15;
    *(int *)(param_1 + 0x23) = iVar7;
    if (*(int *)((longlong)param_1 + 0x11c) < iVar7) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x22);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)lVar11 + param_1[0x22]),0,(longlong)iVar15);
    iVar15 = *(int *)((longlong)param_1 + 0x134);
    lVar11 = param_1[0x25];
    iVar7 = (int)lVar11 + iVar15;
    *(int *)(param_1 + 0x25) = iVar7;
    if (*(int *)((longlong)param_1 + 300) < iVar7) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x24);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)lVar11 + param_1[0x24]),0,(longlong)iVar15);
    plVar18 = param_1 + 0x1e;
    *(undefined4 *)(param_1 + 0x1f) = 0;
    if (*(int *)((longlong)param_1 + 0xfc) < *(int *)((longlong)param_1 + 0x134)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar18);
    }
    iVar7 = *(int *)((longlong)param_1 + 0x134);
    iVar15 = iVar7 + -1;
    if (-1 < iVar15) {
      do {
        iVar7 = (int)param_1[0x1f];
        *(int *)(param_1 + 0x1f) = iVar7 + 1;
        if (*(int *)((longlong)param_1 + 0xfc) < iVar7 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar18,iVar7);
        }
        *(int *)(*plVar18 + (longlong)iVar7 * 4) = iVar15;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
      iVar7 = *(int *)((longlong)param_1 + 0x134);
    }
    puVar16 = puVar17;
    puVar12 = puVar17;
    if (0 < iVar7) {
      do {
        lVar11 = param_1[0xe];
        lVar4 = param_1[0x27];
        *(undefined4 *)((longlong)puVar16 + lVar11 + 0x38) = 0;
        if (*(int *)((longlong)puVar16 + lVar11 + 0x3c) < (int)lVar4 << 3) {
          TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo();
        }
        lVar4 = param_1[0x27];
        *(undefined4 *)((longlong)puVar16 + lVar11 + 0x58) = 0;
        if (*(int *)((longlong)puVar16 + lVar11 + 0x5c) < (int)lVar4 << 3) {
          TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo();
        }
        lVar4 = param_1[0x27];
        *(undefined4 *)((longlong)puVar16 + lVar11 + 0x2b8) = 0;
        if (*(int *)((longlong)puVar16 + lVar11 + 700) < (int)lVar4 * 2) {
          TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo();
        }
        uVar13 = (int)puVar12 + 1;
        puVar16 = puVar16 + 0x96;
        puVar12 = (undefined8 *)(ulonglong)uVar13;
      } while ((int)uVar13 < *(int *)((longlong)param_1 + 0x134));
    }
    plVar18 = param_1 + 0x1a;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    if ((*(int *)((longlong)param_1 + 0xdc) < 0) && (*(int *)((longlong)param_1 + 0xdc) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar18,0);
    }
    if (0 < (int)param_1[0x28]) {
      uVar13 = *(uint *)((longlong)param_1 + 0x134);
      iVar7 = (int)uVar13 / (int)param_1[0x28];
      iVar15 = 1;
      if (0 < iVar7) {
        iVar15 = iVar7;
      }
      puVar16 = puVar17;
      if (0 < (int)uVar13) {
        do {
          uVar8 = (int)puVar16 + iVar15;
          uVar10 = uVar13;
          if ((int)uVar8 <= (int)uVar13) {
            uVar10 = uVar8;
          }
          puVar9 = (undefined8 *)operator_new(0x38);
          puVar12 = puVar17;
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_Abandon_1454d4858;
            puVar9[1] = param_1;
            *(int *)(puVar9 + 2) = (int)puVar16;
            *(uint *)((longlong)puVar9 + 0x14) = uVar10;
            *(undefined1 *)(puVar9 + 3) = 0;
            *(undefined4 *)(puVar9 + 4) = 0;
            puVar9[5] = 0;
            puVar9[6] = 0;
            puVar12 = puVar9;
          }
          iVar7 = (int)param_1[0x1b];
          *(int *)(param_1 + 0x1b) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0xdc) < iVar7 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar18,iVar7);
          }
          *(undefined8 **)(*plVar18 + (longlong)iVar7 * 8) = puVar12;
          uVar13 = *(uint *)((longlong)param_1 + 0x134);
          puVar16 = (undefined8 *)(ulonglong)uVar10;
        } while ((int)uVar10 < (int)uVar13);
      }
    }
    plVar18 = param_1 + 1;
    *(int *)(param_1 + 0x28) = (int)param_1[0x1b];
    plVar3 = *(longlong **)(*param_1 + 0x48);
    lVar11 = *(longlong *)(*param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_f0 = lVar11;
    plStack_e8 = plVar3;
    if (&local_f0 != plVar18) {
      local_f0 = *plVar18;
      plStack_e8 = (longlong *)param_1[2];
      *plVar18 = lVar11;
      param_1[2] = (longlong)plVar3;
      local_b8 = lVar11;
      plStack_b0 = plVar3;
    }
    plVar3 = plStack_e8;
    if (plStack_e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_e8 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_e8)(plStack_e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plStack_e8 + 8))(plStack_e8,1);
        }
      }
    }
    bVar6 = *(byte *)((longlong)param_1 + 0x144);
    if (*plVar18 != 0) {
      bVar6 = bVar6 | 2;
    }
    *(byte *)((longlong)param_1 + 0x144) = bVar6 | 1;
    LOCK();
    *(undefined4 *)(param_1 + 0x29) = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 142a87bf0 FUN_142a87bf0 body=544 status=ok
// SIG undefined FUN_142a87bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a87bf0(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 local_164 [4];
  undefined4 *local_160;
  longlong local_158;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  longlong local_f8;
  int local_f0;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0xf8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(lVar8 + 0xf0) + -4 + (longlong)*(int *)(lVar8 + 0xf8) * 4)
    ;
    *(int *)(lVar8 + 0xf8) = *(int *)(lVar8 + 0xf8) + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar2;
    *(int *)(lVar8 + 0x130) = *(int *)(lVar8 + 0x130) + 1;
    *(undefined1 *)((longlong)*(int *)((longlong)param_1 + 0xcc) + *(longlong *)(lVar8 + 0x100)) = 1
    ;
    uVar1 = *(ushort *)(param_1 + 0x1a);
    uVar6 = (ushort)(*(byte *)(param_2 + 0xbb) & 1) << 3;
    uVar3 = 0;
    *(ushort *)(param_1 + 0x1a) = uVar6 | uVar1 & 0xfff7;
    if (*(int *)(param_2 + 0x48) != -1) {
      uVar3 = 0x10;
    }
    iVar7 = 0;
    *(ushort *)(param_1 + 0x1a) = uVar3 | uVar6 | uVar1 & 0xffe7;
    if (0 < *(int *)(param_2 + 0x20)) {
      local_160 = &local_168;
      lVar8 = 0;
      do {
        local_168 = *(undefined4 *)(*(longlong *)(lVar8 + *(longlong *)(param_2 + 0x18)) + 8);
        local_158 = *(longlong *)(param_2 + 0x18) + (longlong)iVar7 * 0x18;
        FUN_142a77f70(param_1 + 1,local_164,&local_160,0);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x18;
      } while (iVar7 < *(int *)(param_2 + 0x20));
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x16) = 0;
    UNLOCK();
    lVar8 = *param_1;
    local_f0 = *(int *)((longlong)param_1 + 0xcc);
    *(undefined1 *)((longlong)local_f0 + *(longlong *)(lVar8 + 0x110)) = 1;
    local_f8 = lVar8;
    FUN_142a79e40(local_e8,param_2);
    local_118 = 0;
    local_108 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0xd8,local_138);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_1454d5200;
      puVar4[1] = local_f8;
      *(int *)(puVar4 + 2) = local_f0;
      FUN_142a79e40(puVar4 + 3,local_e8);
    }
    local_148[0] = &LAB_142a7fdd0;
    Audio::FMixerSourceManager::AudioMixerThreadCommand(lVar8,local_148);
    Audio::FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(local_e8);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 142a87e10 FUN_142a87e10 body=899 status=ok
// SIG undefined FUN_142a87e10(void)

void FUN_142a87e10(longlong *param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  float local_50;
  undefined4 local_48;
  longlong *local_40;
  longlong *local_38 [2];
  
  if (param_2 != 0) {
    param_1[0x3f] = param_2;
    Audio::FMixerSubmix::ClearSoundEffectSubmixes();
    uVar7 = 0;
    plVar10 = *(longlong **)(param_2 + 0x48);
    uVar8 = (longlong)*(int *)(param_2 + 0x50) & 0x1fffffffffffffff;
    if (plVar10 + *(int *)(param_2 + 0x50) < plVar10) {
      uVar8 = uVar7;
    }
    if (uVar8 != 0) {
      do {
        plVar3 = (longlong *)*plVar10;
        if (plVar3 != (longlong *)0x0) {
          plVar6 = (longlong *)(**(code **)(*plVar3 + 0x290))(plVar3);
          FUN_14280cb80(plVar6,plVar3);
          local_50 = (float)*(int *)(param_1[0x10] + 0x14);
          local_58 = 0;
          (**(code **)(*plVar6 + 0x10))(plVar6,&local_58);
          FSoundEffectBase::SetPreset(plVar6,plVar3);
          FSoundEffectBase::SetEnabled(plVar6,1);
          local_48 = *(undefined4 *)((longlong)plVar3 + 0xc);
          local_38[0] = (longlong *)0x0;
          local_60 = (longlong *)operator_new(0x18);
          if (local_60 != (longlong *)0x0) {
            *(undefined4 *)(local_60 + 1) = 1;
            *local_60 = (longlong)&PTR_FUN_143f3f2e0;
            *(undefined4 *)((longlong)local_60 + 0xc) = 1;
            local_60[2] = (longlong)plVar6;
          }
          SharedPointerInternals::EnableSharedFromThis(&local_68,plVar6,plVar6);
          local_68 = 0;
          local_40 = plVar6;
          SharedPointerInternals::FSharedReferencer<1>::operator=(local_38,&local_60);
          plVar3 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_60 + 1;
            lVar9 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          iVar5 = (int)param_1[0xf];
          lVar9 = (longlong)iVar5;
          *(int *)(param_1 + 0xf) = iVar5 + 1;
          if (*(int *)((longlong)param_1 + 0x7c) < iVar5 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0xe,iVar5);
          }
          plVar3 = local_38[0];
          lVar4 = param_1[0xe];
          *(undefined4 *)(lVar4 + lVar9 * 0x18) = local_48;
          *(longlong **)(lVar4 + 8 + lVar9 * 0x18) = local_40;
          *(longlong **)(lVar4 + 0x10 + lVar9 * 0x18) = local_38[0];
          if (local_38[0] != (longlong *)0x0) {
            LOCK();
            *(int *)(local_38[0] + 1) = (int)local_38[0][1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = local_38[0] + 1;
            lVar9 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_38[0])(local_38[0]);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_38[0] + 8))(local_38[0],1);
              }
            }
          }
        }
        plVar10 = plVar10 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar8);
    }
    bVar2 = *(byte *)(param_2 + 0x40);
    lVar9 = param_1[0x10];
    *(byte *)(param_1 + 0x23) = bVar2;
    if (bVar2 == 5) {
      local_78 = *(longlong *)(lVar9 + 0x70);
      local_70 = *(longlong **)(lVar9 + 0x78);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      plVar10 = param_1 + 0x25;
      if (plVar10 != &local_78) {
        *plVar10 = local_78;
        local_78 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x26,&local_70);
      }
      plVar3 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar9 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if ((longlong *)*plVar10 != (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x58) != 0) {
          *param_1 = *(longlong *)(param_2 + 0x58);
          iVar5 = (**(code **)(*(longlong *)*plVar10 + 0x18))();
          *(int *)((longlong)param_1 + 0x11c) = iVar5;
          *(int *)(param_1 + 0x24) = *(int *)(param_1[0x10] + 0x1c) * iVar5;
          FUN_142a968f0(param_1);
          FUN_142a967f0(param_1);
          return;
        }
        *(undefined4 *)((longlong)param_1 + 0x11c) = 4;
        *(int *)(param_1 + 0x24) = *(int *)(param_1[0x10] + 0x1c) << 2;
        return;
      }
      *(undefined1 *)(param_1 + 0x23) = 0;
      iVar5 = *(int *)(param_1[0x10] + 0x8d0);
      *(int *)((longlong)param_1 + 0x11c) = iVar5;
      iVar5 = *(int *)(param_1[0x10] + 0x1c) * iVar5;
    }
    else {
      if (bVar2 == 0) {
        iVar5 = *(int *)(lVar9 + 0x8d0);
      }
      else {
        iVar5 = *(int *)(lVar9 + 0x7e8 + (ulonglong)bVar2 * 4);
      }
      *(int *)((longlong)param_1 + 0x11c) = iVar5;
      iVar5 = *(int *)(lVar9 + 0x1c) * iVar5;
    }
    *(int *)(param_1 + 0x24) = iVar5;
  }
  return;
}



// FUNCTION 142a881a0 Init body=94 status=ok
// SIG undefined Init(void)

void Audio::FOnePoleFilter::Init(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong lVar3;
  
  IFilter::Init();
  if (param_1[0x12] != 0) {
    FMemory::operator_delete();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)param_1[2];
  uVar2 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  lVar3 = operator_new(uVar2);
  param_1[0x12] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x000142a881fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 142a88200 Init body=227 status=ok
// SIG undefined Init(void)

void Audio::FOutputBuffer::Init(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 < param_3) {
    *(int *)(param_1 + 2) = param_3;
    if (*(int *)((longlong)param_1 + 0x14) < param_3) {
      TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_1 + 1);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(param_1[1] + (longlong)iVar1 * 4),0,(longlong)(param_3 - iVar1) << 2);
  }
  else if ((param_3 < iVar1) && (param_3 != iVar1)) {
    *(int *)(param_1 + 2) = param_3;
    TArray<float,TAlignedHeapAllocator<16>_>::ResizeShrink(param_1 + 1);
  }
  *(int *)(param_1 + 5) = param_4;
  *param_1 = param_2;
  if (param_4 == 2) {
    param_3 = param_3 * 2;
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < param_3) {
      *(int *)(param_1 + 4) = param_3;
      if (*(int *)((longlong)param_1 + 0x24) < param_3) {
        TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeGrow(param_1 + 3);
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar1 + param_1[3]),0,(longlong)(param_3 - iVar1));
      return;
    }
    if ((param_3 < iVar1) && (param_3 != iVar1)) {
      *(int *)(param_1 + 4) = param_3;
      TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeShrink(param_1 + 3);
    }
  }
  return;
}



// FUNCTION 142a882f0 FUN_142a882f0 body=2484 status=ok
// SIG undefined FUN_142a882f0(void)

void FUN_142a882f0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  undefined1 local_38 [8];
  longlong *local_30;
  
  DAT_14667e9f0 = (float)param_2 * 3.360102e-05;
  DAT_14667e9f4 = param_2;
  Audio::FEarlyReflections::Init(param_1 + 0x38);
  fVar21 = (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x414) = fVar21;
  iVar19 = 1 - (int)(fVar21 * -2.0);
  *(int *)(param_1 + 0x408) = iVar19;
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x408);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x400) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x3f8);
  *(float *)(param_1 + 0x464) = fVar21;
  iVar20 = 1 - (int)(fVar21 * -0.2);
  *(int *)(param_1 + 0x458) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x458);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar4,0);
  if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x450) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x448);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x448,(DAT_14667e9f0 * 142.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x4ac) = fVar21;
  *(int *)(param_1 + 0x4a0) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x4a0);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar5,0);
  if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x498) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x490);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x490,(DAT_14667e9f0 * 107.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x4f4) = fVar21;
  *(int *)(param_1 + 0x4e8) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x4e8);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar6,0);
  if (SUB168(ZEXT816(4) * auVar6,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x4e0) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x4d8);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x4d8,(DAT_14667e9f0 * 379.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x53c) = fVar21;
  *(int *)(param_1 + 0x530) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x530);
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar7,0);
  if (SUB168(ZEXT816(4) * auVar7,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x528) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x520);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x520,(DAT_14667e9f0 * 277.0 * 1000.0) / (float)DAT_14667e9f4);
  plVar2 = (longlong *)(param_1 + 0x568);
  if (*plVar2 == 0) {
    plVar18 = (longlong *)FUN_142a82780(local_38,1,0x400);
    if (plVar2 != plVar18) {
      *plVar2 = *plVar18;
      *plVar18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x570,plVar18 + 1);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_30 + 1;
      lVar16 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  lVar16 = *plVar2;
  *(float *)(lVar16 + 0x1c) = fVar21;
  *(undefined4 *)(lVar16 + 0x18) = 0x3f800000;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  *(float *)(lVar16 + 0x24) = (float)*(int *)(lVar16 + 0x10) * 0.25;
  *(float *)(lVar16 + 0x28) = (float)*(int *)(lVar16 + 0x10) / fVar21;
  lVar16 = *plVar2;
  *(undefined4 *)(lVar16 + 0x2c) = 0x3f000000;
  *(undefined4 *)(lVar16 + 0x30) = 0x3f000000;
  *(float *)(param_1 + 0x594) = fVar21;
  *(int *)(param_1 + 0x588) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x588);
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar8,0);
  if (SUB168(ZEXT816(4) * auVar8,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x580) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x578);
  *(float *)(param_1 + 0x69c) = (DAT_14667e9f0 * 908.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x6a0) = (DAT_14667e9f0 * 16.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x5dc) = fVar21;
  *(int *)(param_1 + 0x5d0) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x5d0);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar9,0);
  if (SUB168(ZEXT816(4) * auVar9,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x5c8) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x5c0);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x5c0,(DAT_14667e9f0 * 4217.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x62c) = fVar21;
  *(int *)(param_1 + 0x620) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x620);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar10,0);
  if (SUB168(ZEXT816(4) * auVar10,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x618) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x610);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x610,(DAT_14667e9f0 * 2656.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x674) = fVar21;
  *(int *)(param_1 + 0x668) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x668);
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar11,0);
  if (SUB168(ZEXT816(4) * auVar11,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x660) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x658);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x658,(DAT_14667e9f0 * 3136.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x6c4) = fVar21;
  *(int *)(param_1 + 0x6b8) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x6b8);
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar12,0);
  if (SUB168(ZEXT816(4) * auVar12,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x6b0) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x6a8);
  *(float *)(param_1 + 0x7cc) = (DAT_14667e9f0 * 672.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 2000) = (DAT_14667e9f0 * 16.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x70c) = fVar21;
  *(int *)(param_1 + 0x700) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x700);
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar13,0);
  if (SUB168(ZEXT816(4) * auVar13,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x6f8) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x6f0);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x6f0,(DAT_14667e9f0 * 4453.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x75c) = fVar21;
  *(int *)(param_1 + 0x750) = iVar20;
  iVar19 = iVar20;
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::operator_delete();
    iVar19 = *(int *)(param_1 + 0x750);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (longlong)iVar19;
  uVar17 = SUB168(ZEXT816(4) * auVar14,0);
  if (SUB168(ZEXT816(4) * auVar14,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x748) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x740);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x740,(DAT_14667e9f0 * 1800.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x7a4) = fVar21;
  *(int *)(param_1 + 0x798) = iVar20;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FMemory::operator_delete();
    iVar20 = *(int *)(param_1 + 0x798);
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (longlong)iVar20;
  uVar17 = SUB168(ZEXT816(4) * auVar15,0);
  if (SUB168(ZEXT816(4) * auVar15,8) != 0) {
    uVar17 = 0xffffffffffffffff;
  }
  uVar17 = operator_new(uVar17);
  *(undefined8 *)(param_1 + 0x790) = uVar17;
  Audio::FDelay::Reset(param_1 + 0x788);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x788,(DAT_14667e9f0 * 3720.0 * 1000.0) / (float)DAT_14667e9f4);
  *(float *)(param_1 + 0x7d8) = (DAT_14667e9f0 * 266.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7dc) = (DAT_14667e9f0 * 2974.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7e0) = (DAT_14667e9f0 * 1913.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7e4) = (DAT_14667e9f0 * 1996.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7e8) = (DAT_14667e9f0 * 1990.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7ec) = (DAT_14667e9f0 * 187.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7f0) = (DAT_14667e9f0 * 1066.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7f4) = (DAT_14667e9f0 * 353.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7f8) = (DAT_14667e9f0 * 3627.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x7fc) = (DAT_14667e9f0 * 1228.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x800) = (DAT_14667e9f0 * 2673.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x804) = (DAT_14667e9f0 * 2111.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x808) = (DAT_14667e9f0 * 335.0 * 1000.0) / (float)DAT_14667e9f4;
  *(float *)(param_1 + 0x80c) = (DAT_14667e9f0 * 121.0 * 1000.0) / (float)DAT_14667e9f4;
  Audio::FPlateReverb::ApplySettings(param_1);
  return;
}



// FUNCTION 142a88cb0 FUN_142a88cb0 body=126 status=ok
// SIG undefined FUN_142a88cb0(void)

void FUN_142a88cb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  Audio::FDynamicsProcessor::Init(param_1 + 0xa0,*(undefined4 *)(param_2 + 8),8);
  plVar3 = (longlong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x9c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar3);
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0x98) + 8;
  *(int *)(param_1 + 0x98) = iVar2;
  if (*(int *)(param_1 + 0x9c) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3);
  }
  lVar1 = *plVar3;
  *(undefined8 *)(lVar1 + lVar4 * 4) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 4) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar4 * 4) = 0;
  *(undefined8 *)(lVar1 + 0x18 + lVar4 * 4) = 0;
  return;
}



// FUNCTION 142a88d30 Init body=609 status=ok
// SIG undefined Init(void)

void FSubmixEffectReverb::Init(longlong param_1,longlong param_2)

{
  longlong lVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
  }
  *(undefined8 *)(param_1 + 0x89c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x8a4) = 0x3f0000003f4ccccd;
  *(undefined1 *)(param_1 + 0x898) = 1;
  *(undefined8 *)(param_1 + 0x8ac) = 0x3f333333;
  *(undefined8 *)(param_1 + 0x8b4) = 0x3f66666600000000;
  *(undefined8 *)(param_1 + 0x8bc) = 0x3e99999a3f266666;
  *(undefined8 *)(param_1 + 0x8c4) = 0x3f4ccccd3e4ccccd;
  *(undefined4 *)(param_1 + 0x8cc) = 0x3f800000;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
  FUN_142a882f0(param_1 + 0x80,(int)*(float *)(param_2 + 8));
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  lVar1 = param_1 + 0x8f8;
  FRichCurve::AddKey(lVar1,local_res10,0,0x3f7d70a4,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(lVar1,local_res10,0x40000000,0x3f000000,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(lVar1,local_res10,0x40a00000,0x3e4ccccd,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(lVar1,local_res10,0x41200000,0x3dcccccd,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(lVar1,local_res10,0x41900000,0x3c23d70a,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(lVar1,local_res10,0x41980000,0x3b03126f,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(lVar1,local_res10,0x41a00000,0x38d1b717,0,*puVar3);
  *(undefined1 *)(param_1 + 0x968) = 0;
  return;
}



// FUNCTION 142a88fa0 FUN_142a88fa0 body=192 status=ok
// SIG undefined FUN_142a88fa0(void)

void FUN_142a88fa0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_20;
  undefined8 local_18;
  
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 8);
  lVar3 = 4;
  *(undefined4 *)(param_1 + 0xa4) = 0x41000000;
  do {
    iVar1 = *(int *)(param_1 + 0x88);
    lVar4 = (longlong)iVar1;
    *(int *)(param_1 + 0x88) = iVar1 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x80,iVar1,param_3,param_4,1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    local_20 = 0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + lVar4 * 0x18) = 1;
    *(undefined8 *)(lVar2 + 8 + lVar4 * 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = 0;
    TArray<Audio::FBiquadFilter,FDefaultAllocator>::~TArray<Audio::FBiquadFilter,FDefaultAllocator>
              (&local_20);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}



// FUNCTION 142a89060 Init body=522 status=ok
// SIG undefined Init(void)

void Audio::IFilter::Init
               (longlong param_1,undefined4 param_2,int param_3,int param_4,longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong local_18 [2];
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 8) = param_4;
  if (7 < param_3) {
    param_3 = 8;
  }
  *(int *)(param_1 + 0x10) = param_3;
  *(longlong *)(param_1 + 0x38) = param_5;
  if (param_5 != 0) {
    plVar6 = (longlong *)((longlong)param_4 * 0x10 + *(longlong *)(param_5 + 0x30));
    uVar3 = param_5._4_4_ >> 8;
    param_5._4_4_ = uVar3 << 8;
    iVar2 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
    }
    iVar4 = 0;
    iVar5 = 0;
    *(ulonglong *)(*plVar6 + (longlong)iVar2 * 8) = (ulonglong)param_5._4_4_ << 0x20;
    *(int *)(param_1 + 0x40) = iVar2;
    plVar6 = (longlong *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(undefined4 *)(param_1 + 0x48) = 0x42c80000;
    if (plVar6 != local_18) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      *plVar6 = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    plVar6 = (longlong *)
             ((longlong)*(int *)(param_1 + 8) * 0x10 +
             *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30));
    param_5._4_4_ = uVar3 << 8;
    iVar2 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    *(ulonglong *)(*plVar6 + (longlong)iVar2 * 8) = (ulonglong)param_5._4_4_ << 0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0x41200000;
    if (plVar1 != local_18) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (*(wchar_t **)(param_1 + 0x50) != L"ModCutoffFrequencyDest") {
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x5c) != 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x50,0x17);
        iVar4 = *(int *)(param_1 + 0x58);
      }
      *(int *)(param_1 + 0x58) = iVar4 + 0x17;
      if (*(int *)(param_1 + 0x5c) < iVar4 + 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x50);
      }
      builtin_wcsncpy(*(wchar_t **)(param_1 + 0x50),L"ModCutoffFrequencyDest",0x17);
    }
    if (*(wchar_t **)(param_1 + 0x70) != L"ModQDest") {
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x7c) != 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x70,9);
        iVar5 = *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x78) = iVar5 + 9;
      if (*(int *)(param_1 + 0x7c) < iVar5 + 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar5);
      }
      builtin_wcsncpy(*(wchar_t **)(param_1 + 0x70),L"ModQDest",9);
    }
  }
  return;
}



// FUNCTION 142a89270 FUN_142a89270 body=6647 status=ok
// SIG undefined FUN_142a89270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a89270(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [16];
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  uint *puVar23;
  longlong *plVar24;
  undefined1 auStack_438 [32];
  uint local_418;
  undefined8 local_410;
  undefined1 local_408;
  undefined8 local_400;
  undefined1 local_3f8;
  undefined1 local_3e8 [8];
  undefined4 *local_3e0;
  undefined8 local_3d8;
  undefined4 *local_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined1 local_3bf;
  undefined1 local_3be;
  undefined1 local_3bd [5];
  undefined4 *local_3b8;
  undefined8 local_3b0;
  ulonglong local_3a8;
  undefined4 *local_3a0;
  undefined8 local_398;
  longlong local_390;
  longlong *local_388;
  longlong local_378;
  longlong *plStack_370;
  undefined4 *local_368;
  undefined8 local_360;
  longlong local_358;
  ulonglong local_350;
  int local_348;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  undefined4 local_330 [2];
  undefined8 local_328;
  longlong *local_320;
  longlong *local_318;
  longlong *local_310;
  undefined8 local_308;
  longlong *local_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined1 local_2e8 [16];
  uint local_2d8;
  uint uStack_2d4;
  uint *puStack_2d0;
  undefined4 local_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  int local_2b8;
  uint *local_2b0;
  uint local_2a8;
  uint uStack_2a4;
  uint local_2a0;
  longlong local_298;
  longlong *plStack_290;
  undefined1 local_288;
  undefined1 local_280 [4];
  undefined1 local_27c [4];
  undefined1 local_278 [4];
  undefined1 local_274 [4];
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  float local_260;
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  int local_228;
  int local_224;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 uStack_210;
  uint *local_208;
  uint uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  longlong local_168;
  undefined4 *local_160;
  longlong *local_158;
  undefined1 *local_150;
  undefined4 **local_148;
  undefined1 *local_140;
  undefined4 **local_138;
  undefined1 *local_130;
  undefined4 **local_128;
  undefined1 *local_120;
  undefined4 **local_118;
  undefined1 *local_110;
  undefined4 **local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  local_388 = param_1;
  cVar5 = IsInAudioThread();
  plVar22 = (longlong *)0x0;
  if (cVar5 == '\0') {
    local_68 = 0;
    local_58 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_88);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_98[0] = &LAB_142a7fb00;
    FUN_1422f8a30(local_98,local_3e8[0]);
    return;
  }
  if (DAT_146b29ee0 == 0) {
    uVar9 = FUN_142a14bf0();
    puVar8 = (undefined8 *)FName::FName(local_f0,L"Master Submix",1);
    local_410 = 0;
    local_418 = local_418 & 0xffffff00;
    lVar10 = FUN_142a79470(uVar9,*puVar8,0,0);
    iVar7 = *(int *)(lVar10 + 0xc);
    plVar11 = plVar22;
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar19 = iVar7 >> 0x1f & 0xffff;
      uVar6 = iVar7 + uVar19;
      plVar11 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18);
    }
    *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) | 0x40000000;
    iVar7 = DAT_146b29ee0;
    lVar21 = (longlong)DAT_146b29ee0;
    DAT_146b29ee0 = DAT_146b29ee0 + 1;
    if (DAT_146b29ee4 < DAT_146b29ee0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29ed8,iVar7);
    }
    *(longlong *)(DAT_146b29ed8 + lVar21 * 8) = lVar10;
    iVar7 = DAT_146b29ee0;
    if (DAT_146b29e20 == 0) {
      uVar9 = FUN_142a14bf0();
      puVar8 = (undefined8 *)FName::FName(local_e0,L"Master Reverb Plugin Submix",1);
      local_410 = 0;
      local_418 = local_418 & 0xffffff00;
      lVar10 = FUN_142a79470(uVar9,*puVar8,0,0);
      iVar7 = *(int *)(lVar10 + 0xc);
      plVar11 = plVar22;
      if (iVar7 < (int)DAT_1469e91c4) {
        uVar19 = iVar7 >> 0x1f & 0xffff;
        uVar6 = iVar7 + uVar19;
        plVar11 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18);
      }
      *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) | 0x40000000;
      iVar7 = DAT_146b29ee0;
      lVar21 = (longlong)DAT_146b29ee0;
      DAT_146b29ee0 = DAT_146b29ee0 + 1;
      if (DAT_146b29ee4 < DAT_146b29ee0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29ed8,iVar7);
      }
      *(longlong *)(DAT_146b29ed8 + lVar21 * 8) = lVar10;
    }
    else {
      lVar10 = (longlong)DAT_146b29ee0;
      DAT_146b29ee0 = DAT_146b29ee0 + 1;
      if (DAT_146b29ee4 < DAT_146b29ee0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29ed8,iVar7);
      }
      *(undefined8 *)(DAT_146b29ed8 + lVar10 * 8) = 0;
    }
    iVar7 = DAT_146b29ee0;
    if (DAT_146b29e20 == 0) {
      uVar9 = FUN_142a14bf0();
      puVar8 = (undefined8 *)FName::FName(local_e8,L"Master Reverb Submix",1);
      local_410 = 0;
      local_418 = local_418 & 0xffffff00;
      lVar10 = FUN_142a79470(uVar9,*puVar8,0,0);
      iVar7 = *(int *)(lVar10 + 0xc);
      plVar11 = plVar22;
      if (iVar7 < (int)DAT_1469e91c4) {
        uVar19 = iVar7 >> 0x1f & 0xffff;
        uVar6 = iVar7 + uVar19;
        plVar11 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18);
      }
      *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) | 0x40000000;
      iVar7 = DAT_146b29ee0;
      lVar21 = (longlong)DAT_146b29ee0;
      DAT_146b29ee0 = DAT_146b29ee0 + 1;
      if (DAT_146b29ee4 < DAT_146b29ee0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29ed8,iVar7);
      }
      *(longlong *)(DAT_146b29ed8 + lVar21 * 8) = lVar10;
    }
    else {
      lVar10 = (longlong)DAT_146b29ee0;
      DAT_146b29ee0 = DAT_146b29ee0 + 1;
      if (DAT_146b29ee4 < DAT_146b29ee0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29ed8,iVar7);
      }
      *(undefined8 *)(DAT_146b29ed8 + lVar10 * 8) = 0;
    }
    iVar7 = DAT_146b29ee0;
    if (DAT_146b29e24 == 0) {
      uVar9 = FUN_142a14bf0();
      puVar8 = (undefined8 *)FName::FName(local_f8,L"Master EQ Submix",1);
      local_410 = 0;
      local_418 = local_418 & 0xffffff00;
      lVar10 = FUN_142a79470(uVar9,*puVar8,0,0);
      iVar7 = *(int *)(lVar10 + 0xc);
      plVar11 = plVar22;
      if (iVar7 < (int)DAT_1469e91c4) {
        uVar19 = iVar7 >> 0x1f & 0xffff;
        uVar6 = iVar7 + uVar19;
        plVar11 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18);
      }
      *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) | 0x40000000;
      iVar7 = DAT_146b29ee0;
      lVar21 = (longlong)DAT_146b29ee0;
      DAT_146b29ee0 = DAT_146b29ee0 + 1;
      if (DAT_146b29ee4 < DAT_146b29ee0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29ed8,iVar7);
      }
      *(longlong *)(DAT_146b29ed8 + lVar21 * 8) = lVar10;
    }
    else {
      lVar10 = (longlong)DAT_146b29ee0;
      DAT_146b29ee0 = DAT_146b29ee0 + 1;
      if (DAT_146b29ee4 < DAT_146b29ee0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29ed8,iVar7);
      }
      *(undefined8 *)(DAT_146b29ed8 + lVar10 * 8) = 0;
    }
    uVar9 = FUN_142a14bf0();
    puVar8 = (undefined8 *)FName::FName(local_100,L"Master Ambisonics Submix",1);
    local_410 = 0;
    local_418 = local_418 & 0xffffff00;
    lVar10 = FUN_142a79470(uVar9,*puVar8,0,0);
    iVar7 = *(int *)(lVar10 + 0xc);
    plVar11 = plVar22;
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar19 = iVar7 >> 0x1f & 0xffff;
      uVar6 = iVar7 + uVar19;
      plVar11 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18);
    }
    *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) | 0x40000000;
    *(undefined1 *)(lVar10 + 0x40) = 5;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      uVar9 = (**(code **)(*(longlong *)param_1[0xe] + 0x68))();
      *(undefined8 *)(lVar10 + 0x58) = uVar9;
    }
    iVar7 = DAT_146b29ee0;
    lVar21 = (longlong)DAT_146b29ee0;
    DAT_146b29ee0 = DAT_146b29ee0 + 1;
    if (DAT_146b29ee4 < DAT_146b29ee0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29ed8,iVar7);
    }
    *(longlong *)(DAT_146b29ed8 + lVar21 * 8) = lVar10;
  }
  if ((int)param_1[0xe6] != 0) goto LAB_142a89f2a;
  plVar11 = param_1 + 0xe5;
  plVar24 = plVar22;
  do {
    if (*(longlong *)((longlong)plVar24 + DAT_146b29ed8) == 0) {
      iVar7 = (int)param_1[0xe6];
      *(int *)(param_1 + 0xe6) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0x734) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar7);
      }
      puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar11);
      *puVar8 = 0;
      puVar8[1] = 0;
    }
    else {
      lVar10 = operator_new(0x200);
      plVar12 = plVar22;
      if (lVar10 != 0) {
        plVar12 = (longlong *)FUN_142a7a0c0(lVar10,param_1);
      }
      local_318 = plVar12;
      plVar13 = (longlong *)operator_new(0x18);
      local_310 = plVar22;
      if (plVar13 != (longlong *)0x0) {
        *(undefined4 *)(plVar13 + 1) = 1;
        *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
        *plVar13 = (longlong)&PTR_DestroyObject_1454d5290;
        plVar13[2] = (longlong)plVar12;
        local_310 = plVar13;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_318,plVar12,plVar12);
      FUN_142a87e10(local_318,*(undefined8 *)((longlong)plVar24 + DAT_146b29ed8));
      iVar7 = (int)param_1[0xe6];
      *(int *)(param_1 + 0xe6) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0x734) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar7);
      }
      plVar12 = local_310;
      puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar11);
      *puVar8 = local_318;
      puVar8[1] = local_310;
      if (local_310 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_310 + 1) = (int)local_310[1] + 1;
        UNLOCK();
        if (local_310 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_310 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_310)(local_310);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
    }
    plVar24 = plVar24 + 1;
  } while ((longlong)plVar24 < 0x28);
  plVar24 = (longlong *)((longlong *)*plVar11)[1];
  local_390 = *(longlong *)*plVar11;
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
    UNLOCK();
  }
  plVar12 = (longlong *)param_1[10];
  local_260 = (float)*(int *)((longlong)param_1 + 0x14);
  if ((plVar12 == (longlong *)0x0) || (*(longlong *)(*plVar11 + 0x20) == 0)) {
    if (*(longlong *)(*plVar11 + 0x10) != 0) {
      uVar9 = *(undefined8 *)(DAT_146b29ed8 + 8);
      plVar12 = (longlong *)FName::FName(local_d0,L"Master Reverb Effect Preset",1);
      local_3a8 = 0;
      lVar10 = *plVar12;
      if (lVar10 == 0) {
        FUN_1417846f0(uVar9,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar15 = USnapDungeonStreamingChunk::GetPrivateStaticClass();
      local_3f8 = 0;
      local_400 = 0;
      local_408 = 0;
      local_410 = 0;
      local_418 = 0;
      plVar13 = (longlong *)FUN_1417985e0(uVar15,uVar9,lVar10,0);
      iVar7 = *(int *)((longlong)plVar13 + 0xc);
      plVar12 = plVar22;
      if (iVar7 < (int)DAT_1469e91c4) {
        uVar19 = iVar7 >> 0x1f & 0xffff;
        uVar6 = iVar7 + uVar19;
        plVar12 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18);
      }
      *(uint *)(plVar12 + 1) = *(uint *)(plVar12 + 1) | 0x40000000;
      plVar14 = (longlong *)(**(code **)(*plVar13 + 0x290))(plVar13);
      (**(code **)(*plVar14 + 0x10))(plVar14,local_268);
      FSoundEffectBase::SetPreset(plVar14,plVar13);
      FSoundEffectBase::SetEnabled(plVar14,1);
      local_3a8 = CONCAT44(local_3a8._4_4_,*(undefined4 *)((longlong)plVar13 + 0xc));
      plVar12 = *(longlong **)(*plVar11 + 0x18);
      uVar9 = *(undefined8 *)(*plVar11 + 0x10);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      plVar13 = (longlong *)operator_new(0x18);
      local_240 = plVar22;
      if (plVar13 != (longlong *)0x0) {
        *(undefined4 *)(plVar13 + 1) = 1;
        *plVar13 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
        plVar13[2] = (longlong)plVar14;
        local_240 = plVar13;
      }
      local_248 = plVar14;
      SharedPointerInternals::EnableSharedFromThis(&local_248,plVar14,plVar14);
      FUN_142a7ed70(uVar9,local_3a8 & 0xffffffff,&local_248);
      lVar10 = local_390;
      local_1d0 = local_390;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_1c8 = plVar24;
      FUN_142a93940(uVar9,&local_1d0);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_1c0 = uVar9;
      local_1b8 = plVar12;
      FUN_142a7eb70(lVar10,&local_1c0);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar12 + 1;
        lVar10 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            lVar10 = *plVar12;
            goto LAB_142a89c4c;
          }
        }
      }
    }
  }
  else {
    plVar13 = (longlong *)
              (**(code **)(*plVar12 + 0x30))(plVar12,*(undefined8 *)(DAT_146b29ed8 + 0x10));
    (**(code **)(*plVar13 + 0x10))(plVar13,local_268);
    FSoundEffectBase::SetEnabled(plVar13,1);
    plVar12 = *(longlong **)(*plVar11 + 0x28);
    uVar9 = *(undefined8 *)(*plVar11 + 0x20);
    local_3a8 = CONCAT44(local_3a8._4_4_,*(undefined4 *)(*(longlong *)(DAT_146b29ed8 + 0x10) + 0xc))
    ;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    plVar14 = (longlong *)operator_new(0x18);
    local_250 = plVar22;
    if (plVar14 != (longlong *)0x0) {
      *(undefined4 *)(plVar14 + 1) = 1;
      *plVar14 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
      plVar14[2] = (longlong)plVar13;
      local_250 = plVar14;
    }
    local_258 = plVar13;
    SharedPointerInternals::EnableSharedFromThis(&local_258,plVar13,plVar13);
    FUN_142a7ed70(uVar9,local_3a8 & 0xffffffff,&local_258);
    lVar10 = local_390;
    local_1f0 = local_390;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
    local_1e8 = plVar24;
    FUN_142a93940(uVar9,&local_1f0);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_1e0 = uVar9;
    local_1d8 = plVar12;
    FUN_142a7eb70(lVar10,&local_1e0);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar12 + 1;
      lVar10 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          lVar10 = *plVar12;
LAB_142a89c4c:
          (**(code **)(lVar10 + 8))(plVar12,1);
        }
      }
    }
  }
  lVar10 = *(longlong *)(DAT_146b29ed8 + 0x18);
  if (lVar10 != 0) {
    plVar12 = (longlong *)FName::FName(local_d8,L"Master EQ Effect preset",1);
    local_3a8 = 0;
    lVar21 = *plVar12;
    if (lVar21 == 0) {
      FUN_1417846f0(lVar10,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar9 = USubmixEffectSubmixEQPreset::GetPrivateStaticClass();
    local_3f8 = 0;
    local_400 = 0;
    local_408 = 0;
    local_410 = 0;
    local_418 = 0;
    plVar13 = (longlong *)FUN_1417985e0(uVar9,lVar10,lVar21,0);
    iVar7 = *(int *)((longlong)plVar13 + 0xc);
    plVar12 = plVar22;
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar19 = iVar7 >> 0x1f & 0xffff;
      uVar6 = iVar7 + uVar19;
      plVar12 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar19) * 0x18);
    }
    *(uint *)(plVar12 + 1) = *(uint *)(plVar12 + 1) | 0x40000000;
    plVar14 = (longlong *)(**(code **)(*plVar13 + 0x290))(plVar13);
    (**(code **)(*plVar14 + 0x10))(plVar14,local_268);
    FSoundEffectBase::SetPreset(plVar14,plVar13);
    FSoundEffectBase::SetEnabled(plVar14,1);
    local_3a8 = CONCAT44(local_3a8._4_4_,*(undefined4 *)((longlong)plVar13 + 0xc));
    plVar12 = *(longlong **)(*plVar11 + 0x38);
    uVar9 = *(undefined8 *)(*plVar11 + 0x30);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    plVar13 = (longlong *)operator_new(0x18);
    local_230 = plVar22;
    if (plVar13 != (longlong *)0x0) {
      *(undefined4 *)(plVar13 + 1) = 1;
      *plVar13 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      plVar13[2] = (longlong)plVar14;
      local_230 = plVar13;
    }
    local_238 = plVar14;
    SharedPointerInternals::EnableSharedFromThis(&local_238,plVar14,plVar14);
    FUN_142a7ed70(uVar9,local_3a8 & 0xffffffff,&local_238);
    lVar10 = local_390;
    local_1b0 = local_390;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
    local_1a8 = plVar24;
    FUN_142a93940(uVar9,&local_1b0);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_1a0 = uVar9;
    local_198 = plVar12;
    FUN_142a7eb70(lVar10,&local_1a0);
    plVar13 = *(longlong **)(*plVar11 + 0x48);
    local_390 = *(longlong *)(*plVar11 + 0x40);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_190 = uVar9;
    local_188 = plVar12;
    FUN_142a93940(local_390,&local_190);
    local_180 = local_390;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_178 = plVar13;
    FUN_142a7eb70(uVar9,&local_180);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar12 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  param_1 = local_388;
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar24 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      param_1 = local_388;
      if (iVar7 == 1) {
        (**(code **)(*plVar24 + 8))(plVar24,1);
        param_1 = local_388;
      }
    }
  }
LAB_142a89f2a:
  plVar11 = param_1 + 0x11f;
  TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
  ::Reset(plVar11);
  local_358 = 0;
  local_350 = 0;
  local_348 = -1;
  uVar9 = FUN_142a14bf0();
  local_418 = 0;
  FUN_1417a5560(uVar9,&local_358,1,0x10);
  uVar20 = local_350 & 0xffffffff;
  do {
    local_348 = local_348 + 1;
    if ((int)local_350 <= local_348) break;
  } while (*(longlong *)(local_358 + (longlong)local_348 * 8) == 0);
  do {
    if ((local_348 < 0) || ((int)uVar20 <= local_348)) break;
    (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(local_358 + (longlong)local_348 * 8),0);
    uVar20 = local_350 & 0xffffffff;
    do {
      local_348 = local_348 + 1;
      if ((int)local_350 <= local_348) break;
    } while (*(longlong *)(local_358 + (longlong)local_348 * 8) == 0);
  } while( true );
  if (local_358 != 0) {
    FMemory::Free(local_358);
  }
  uVar6 = *(uint *)(param_1 + 0x124);
  puStack_2d0 = (uint *)(param_1 + 0x121);
  uStack_2d4 = 1;
  local_2d8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  if (uVar6 != 0) {
    puVar23 = (uint *)param_1[0x123];
    if ((uint *)param_1[0x123] == (uint *)0x0) {
      puVar23 = puStack_2d0;
    }
    uVar19 = *puVar23;
    plVar24 = plVar22;
    plVar12 = plVar22;
    while (uVar19 == 0) {
      iVar7 = (int)plVar24;
      uStack_2c0 = (int)plVar12 + 0x20;
      plVar12 = (longlong *)(ulonglong)uStack_2c0;
      local_2d8 = iVar7 + 1;
      plVar24 = (longlong *)(ulonglong)local_2d8;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142a8a092;
      uVar19 = puVar23[(longlong)iVar7 + 1];
    }
    uStack_2d4 = -uVar19 & uVar19;
    local_228 = 0x1f;
    if (uStack_2d4 != 0) {
      for (; uStack_2d4 >> local_228 == 0; local_228 = local_228 + -1) {
      }
    }
    if (uStack_2d4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_228;
    }
    uStack_2c4 = (uStack_2c0 - iVar7) + 0x1f;
    if ((int)uVar6 < (int)uStack_2c4) {
LAB_142a8a092:
      uStack_2c4 = uVar6;
    }
  }
  local_2c8 = 0xffffffff;
  uStack_2a4 = *(uint *)(param_1 + 0x124);
  uStack_210 = CONCAT44(uStack_2d4,local_2d8);
  uStack_200 = 0xffffffff;
  uStack_1fc = uStack_2c4;
  local_1f8 = CONCAT44(uStack_2bc,uStack_2c0);
  local_2b8 = (int)uStack_2a4 >> 5;
  local_2a8 = -1 << ((byte)uStack_2a4 & 0x1f);
  local_2a0 = uStack_2a4 & 0xffffffe0;
  if (uStack_2a4 != uVar6) {
    puVar23 = (uint *)param_1[0x123];
    if ((uint *)param_1[0x123] == (uint *)0x0) {
      puVar23 = puStack_2d0;
    }
    uVar19 = puVar23[local_2b8] & local_2a8;
    while (uVar19 == 0) {
      lVar10 = (longlong)local_2b8;
      local_2a0 = local_2a0 + 0x20;
      iVar7 = local_2b8 + 1;
      bVar2 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_2b8;
      local_2b8 = iVar7;
      if (bVar2) goto LAB_142a8a1ac;
      uVar19 = puVar23[lVar10 + 1];
      local_2a8 = 0xffffffff;
    }
    uVar19 = -uVar19 & uVar19;
    local_224 = 0x1f;
    if (uVar19 != 0) {
      for (; uVar19 >> local_224 == 0; local_224 = local_224 + -1) {
      }
    }
    if (uVar19 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_224;
    }
    uStack_2a4 = (local_2a0 - iVar7) + 0x1f;
    if ((int)uVar6 < (int)uStack_2a4) {
LAB_142a8a1ac:
      uStack_2a4 = uVar6;
    }
  }
  local_3a8 = (ulonglong)uStack_2a4;
  local_2b0 = puStack_2d0;
  local_218 = plVar11;
  local_208 = puStack_2d0;
  local_c8 = plVar11;
  uStack_c0 = uStack_210;
  puStack_b8 = puStack_2d0;
  uStack_a8 = local_1f8;
  uStack_b0 = uStack_200;
  uStack_ac = uStack_1fc;
  do {
    if (((uStack_1fc == (uint)local_3a8) && (local_208 == local_2b0)) && (local_218 == plVar11)) {
      local_368 = (undefined4 *)0x0;
      local_360 = 1;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_368,0);
      uVar20 = local_360;
      *local_368 = 0;
      lVar10 = (longlong)(int)local_360;
      iVar7 = (int)local_360 + 1;
      local_360 = CONCAT44(local_360._4_4_,iVar7);
      if (local_360._4_4_ < iVar7) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_368,uVar20 & 0xffffffff);
      }
      local_3c0 = 1;
      local_368[lVar10] = 1;
      local_150 = &local_3c0;
      local_148 = &local_368;
      FUN_142a78580(param_1 + 0x100,local_280,&local_150,0);
      local_3a0 = (undefined4 *)0x0;
      local_398 = 1;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3a0,0);
      *local_3a0 = 0;
      lVar10 = (longlong)(int)local_398;
      iVar7 = (int)local_398 + 1;
      if (local_398._4_4_ < iVar7) {
        uVar20 = local_398 & 0xffffffff;
        local_398._0_4_ = iVar7;
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3a0,uVar20);
        iVar7 = (int)local_398;
      }
      local_398._0_4_ = iVar7;
      iVar7 = (int)local_398;
      local_3a0[lVar10] = 1;
      lVar10 = (longlong)(int)local_398;
      local_398._0_4_ = (int)local_398 + 1;
      if (local_398._4_4_ < (int)local_398) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3a0,iVar7);
      }
      iVar7 = (int)local_398;
      local_3a0[lVar10] = 9;
      lVar10 = (longlong)(int)local_398;
      local_398._0_4_ = (int)local_398 + 1;
      if (local_398._4_4_ < (int)local_398) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3a0,iVar7);
      }
      local_3bf = 2;
      local_3a0[lVar10] = 10;
      local_140 = &local_3bf;
      local_138 = &local_3a0;
      FUN_142a78580(param_1 + 0x100,local_27c,&local_140,0);
      local_3b8 = (undefined4 *)0x0;
      local_3b0 = 1;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,0);
      *local_3b8 = 0;
      lVar10 = (longlong)(int)local_3b0;
      iVar7 = (int)local_3b0 + 1;
      if (local_3b0._4_4_ < iVar7) {
        uVar20 = local_3b0 & 0xffffffff;
        local_3b0._0_4_ = iVar7;
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,uVar20);
        iVar7 = (int)local_3b0;
      }
      local_3b0._0_4_ = iVar7;
      iVar7 = (int)local_3b0;
      local_3b8[lVar10] = 1;
      lVar10 = (longlong)(int)local_3b0;
      local_3b0._0_4_ = (int)local_3b0 + 1;
      if (local_3b0._4_4_ < (int)local_3b0) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar7);
      }
      iVar7 = (int)local_3b0;
      local_3b8[lVar10] = 2;
      lVar10 = (longlong)(int)local_3b0;
      local_3b0._0_4_ = (int)local_3b0 + 1;
      if (local_3b0._4_4_ < (int)local_3b0) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar7);
      }
      iVar7 = (int)local_3b0;
      local_3b8[lVar10] = 3;
      lVar10 = (longlong)(int)local_3b0;
      local_3b0._0_4_ = (int)local_3b0 + 1;
      if (local_3b0._4_4_ < (int)local_3b0) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar7);
      }
      iVar7 = (int)local_3b0;
      local_3b8[lVar10] = 9;
      lVar10 = (longlong)(int)local_3b0;
      local_3b0._0_4_ = (int)local_3b0 + 1;
      if (local_3b0._4_4_ < (int)local_3b0) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar7);
      }
      local_3be = 3;
      local_3b8[lVar10] = 10;
      local_130 = &local_3be;
      local_128 = &local_3b8;
      FUN_142a78580(param_1 + 0x100,local_278,&local_130,0);
      local_3d0 = (undefined4 *)0x0;
      local_3c8 = 1;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d0,0);
      *local_3d0 = 0;
      lVar10 = (longlong)(int)local_3c8;
      iVar7 = (int)local_3c8 + 1;
      if (local_3c8._4_4_ < iVar7) {
        uVar20 = local_3c8 & 0xffffffff;
        local_3c8._0_4_ = iVar7;
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d0,uVar20);
        iVar7 = (int)local_3c8;
      }
      local_3c8._0_4_ = iVar7;
      iVar7 = (int)local_3c8;
      local_3d0[lVar10] = 1;
      lVar10 = (longlong)(int)local_3c8;
      local_3c8._0_4_ = (int)local_3c8 + 1;
      if (local_3c8._4_4_ < (int)local_3c8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d0,iVar7);
      }
      iVar7 = (int)local_3c8;
      local_3d0[lVar10] = 2;
      lVar10 = (longlong)(int)local_3c8;
      local_3c8._0_4_ = (int)local_3c8 + 1;
      if (local_3c8._4_4_ < (int)local_3c8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d0,iVar7);
      }
      iVar7 = (int)local_3c8;
      local_3d0[lVar10] = 3;
      lVar10 = (longlong)(int)local_3c8;
      local_3c8._0_4_ = (int)local_3c8 + 1;
      if (local_3c8._4_4_ < (int)local_3c8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d0,iVar7);
      }
      iVar7 = (int)local_3c8;
      local_3d0[lVar10] = 4;
      lVar10 = (longlong)(int)local_3c8;
      local_3c8._0_4_ = (int)local_3c8 + 1;
      if (local_3c8._4_4_ < (int)local_3c8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d0,iVar7);
      }
      iVar7 = (int)local_3c8;
      local_3d0[lVar10] = 5;
      lVar10 = (longlong)(int)local_3c8;
      local_3c8._0_4_ = (int)local_3c8 + 1;
      if (local_3c8._4_4_ < (int)local_3c8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d0,iVar7);
      }
      iVar7 = (int)local_3c8;
      local_3d0[lVar10] = 9;
      lVar10 = (longlong)(int)local_3c8;
      local_3c8._0_4_ = (int)local_3c8 + 1;
      if (local_3c8._4_4_ < (int)local_3c8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3d0,iVar7);
      }
      local_3bd[0] = 4;
      local_3d0[lVar10] = 10;
      local_120 = local_3bd;
      local_118 = &local_3d0;
      FUN_142a78580(param_1 + 0x100,local_274,&local_120,0);
      local_3e0 = (undefined4 *)0x0;
      local_3d8 = 1;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3e0,0);
      *local_3e0 = 0;
      lVar10 = (longlong)(int)local_3d8;
      iVar7 = (int)local_3d8 + 1;
      if (local_3d8._4_4_ < iVar7) {
        uVar20 = local_3d8 & 0xffffffff;
        local_3d8._0_4_ = iVar7;
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3e0,uVar20);
        iVar7 = (int)local_3d8;
      }
      local_3d8._0_4_ = iVar7;
      iVar7 = (int)local_3d8;
      local_3e0[lVar10] = 1;
      lVar10 = (longlong)(int)local_3d8;
      local_3d8._0_4_ = (int)local_3d8 + 1;
      if (local_3d8._4_4_ < (int)local_3d8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3e0,iVar7);
      }
      iVar7 = (int)local_3d8;
      local_3e0[lVar10] = 2;
      lVar10 = (longlong)(int)local_3d8;
      local_3d8._0_4_ = (int)local_3d8 + 1;
      if (local_3d8._4_4_ < (int)local_3d8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3e0,iVar7);
      }
      iVar7 = (int)local_3d8;
      local_3e0[lVar10] = 3;
      lVar10 = (longlong)(int)local_3d8;
      local_3d8._0_4_ = (int)local_3d8 + 1;
      if (local_3d8._4_4_ < (int)local_3d8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3e0,iVar7);
      }
      iVar7 = (int)local_3d8;
      local_3e0[lVar10] = 4;
      lVar10 = (longlong)(int)local_3d8;
      local_3d8._0_4_ = (int)local_3d8 + 1;
      if (local_3d8._4_4_ < (int)local_3d8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3e0,iVar7);
      }
      iVar7 = (int)local_3d8;
      local_3e0[lVar10] = 5;
      lVar10 = (longlong)(int)local_3d8;
      local_3d8._0_4_ = (int)local_3d8 + 1;
      if (local_3d8._4_4_ < (int)local_3d8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3e0,iVar7);
      }
      iVar7 = (int)local_3d8;
      local_3e0[lVar10] = 9;
      lVar10 = (longlong)(int)local_3d8;
      local_3d8._0_4_ = (int)local_3d8 + 1;
      if (local_3d8._4_4_ < (int)local_3d8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_3e0,iVar7);
      }
      local_3e8[0] = 5;
      local_3e0[lVar10] = 10;
      local_110 = local_3e8;
      local_108 = &local_3e0;
      FUN_142a78580(param_1 + 0x100,local_270,&local_110,0);
      if (local_3e0 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      if (local_3d0 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      if (local_3b8 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      if (local_3a0 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      if (local_368 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      return;
    }
    plStack_370 = (longlong *)0x0;
    plVar24 = (longlong *)((longlong)(int)uStack_1fc * 0x20 + *local_218);
    lVar10 = *plVar24;
    lVar21 = *(longlong *)(lVar10 + 0x38);
    local_390 = lVar10;
    if (lVar21 == 0) {
      local_2f0 = (longlong *)((longlong *)param_1[0xe5])[1];
      local_378 = *(longlong *)param_1[0xe5];
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
      }
      local_2f8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_370,&local_2f0);
      plVar12 = local_2f0;
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_2f0 + 1;
        lVar21 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          (**(code **)*local_2f0)(local_2f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar12 = local_2f0;
          goto joined_r0x000142a8a36e;
        }
      }
    }
    else {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(plVar11,&local_340,lVar21);
      plVar12 = plVar22;
      if (local_340 != -1) {
        plVar12 = (longlong *)((longlong)local_340 * 0x20 + *plVar11);
      }
      plVar13 = plVar12 + 1;
      if (plVar12 == (longlong *)0x0) {
        plVar13 = plVar22;
      }
      if (plVar13 == (longlong *)0x0) {
        (**(code **)(*param_1 + 0x50))(param_1,lVar21,1);
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(plVar11,&local_33c,lVar21);
        plVar13 = plVar22;
        if ((local_33c != -1) && (lVar21 = (longlong)local_33c * 0x20 + *plVar11, lVar21 != 0)) {
          plVar13 = (longlong *)(lVar21 + 8);
        }
      }
      local_320 = (longlong *)plVar13[1];
      local_378 = *plVar13;
      if (local_320 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_320 + 1) = (int)local_320[1] + 1;
        UNLOCK();
      }
      local_328 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_370,&local_320);
      plVar12 = local_320;
      if (local_320 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_320 + 1;
        lVar21 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          (**(code **)*local_320)(local_320);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar12 = local_320;
joined_r0x000142a8a36e:
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    local_170 = plVar24[1];
    local_168 = plVar24[2];
    if (local_168 != 0) {
      LOCK();
      *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
      UNLOCK();
    }
    FUN_142a7eb70(local_378,&local_170);
    local_2e8._8_8_ = plStack_370;
    local_2e8._0_8_ = local_378;
    uVar3 = (undefined4)((ulonglong)local_378 >> 0x20);
    uVar4 = (undefined4)((ulonglong)plStack_370 >> 0x20);
    lVar21 = plVar24[1];
    pauVar16 = (undefined1 (*) [16])(lVar21 + 0x10);
    if (plStack_370 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_370 + 1) = (int)plStack_370[1] + 1;
      UNLOCK();
    }
    if (&local_2e8 != pauVar16) {
      local_2e8 = *pauVar16;
      *(int *)*pauVar16 = (int)local_378;
      *(undefined4 *)(lVar21 + 0x14) = uVar3;
      *(int *)(lVar21 + 0x18) = (int)plStack_370;
      *(undefined4 *)(lVar21 + 0x1c) = uVar4;
      local_48 = (int)local_378;
      uStack_44 = uVar3;
      uStack_40 = (int)plStack_370;
      uStack_3c = uVar4;
    }
    uVar9 = local_2e8._8_8_;
    if ((undefined8 *)local_2e8._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_2e8._8_8_ + 8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (*(code *)**(undefined8 **)local_2e8._8_8_)(local_2e8._8_8_);
        LOCK();
        piVar1 = (int *)(uVar9 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*(longlong *)local_2e8._8_8_ + 8))(local_2e8._8_8_,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar10 + 0x28);
    plVar13 = (longlong *)((longlong)*(int *)(lVar10 + 0x30) & 0x1fffffffffffffff);
    if (plVar12 + *(int *)(lVar10 + 0x30) < plVar12) {
      plVar13 = plVar22;
    }
    plVar14 = plVar22;
    if (plVar13 != (longlong *)0x0) {
      do {
        lVar10 = *plVar12;
        if (lVar10 != 0) {
          local_288 = 1;
          local_298 = 0;
          plStack_290 = (longlong *)0x0;
          TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::FindId(plVar11,&local_338,lVar10);
          plVar18 = plVar22;
          if (local_338 != -1) {
            plVar18 = (longlong *)((longlong)local_338 * 0x20 + *plVar11);
          }
          plVar17 = plVar18 + 1;
          if (plVar18 == (longlong *)0x0) {
            plVar17 = plVar22;
          }
          if (plVar17 == (longlong *)0x0) {
            (**(code **)(*local_388 + 0x50))(local_388,lVar10,1);
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(plVar11,&local_334,lVar10);
            plVar17 = plVar22;
            if ((local_334 != -1) && (lVar10 = (longlong)local_334 * 0x20 + *plVar11, lVar10 != 0))
            {
              plVar17 = (longlong *)(lVar10 + 8);
            }
          }
          local_300 = (longlong *)plVar17[1];
          local_298 = *plVar17;
          if (local_300 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_300 + 1) = (int)local_300[1] + 1;
            UNLOCK();
          }
          local_308 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_290,&local_300);
          plVar18 = local_300;
          if (local_300 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_300 + 1;
            lVar10 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_300)(local_300);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_300 + 8))(local_300,1);
              }
            }
          }
          local_288 = 1;
          local_330[0] = *(undefined4 *)(local_298 + 8);
          local_160 = local_330;
          local_158 = &local_298;
          FUN_142a77c40(plVar24[1] + 0x20,local_220,&local_160);
          plVar18 = plStack_290;
          if (plStack_290 != (longlong *)0x0) {
            LOCK();
            plVar17 = plStack_290 + 1;
            lVar10 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plStack_290)(plStack_290);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
        }
        plVar12 = plVar12 + 1;
        plVar14 = (longlong *)((longlong)plVar14 + 1);
      } while (plVar14 != plVar13);
    }
    plVar12 = plStack_370;
    FUN_142a87e10(plVar24[1],local_390);
    plVar24 = plStack_370;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar12 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_370)(plStack_370);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_370 + 8))(plStack_370,1);
        }
      }
    }
    uStack_200 = uStack_200 & ~uStack_210._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_210);
    param_1 = local_388;
  } while( true );
}



// FUNCTION 142a8ac70 FUN_142a8ac70 body=480 status=ok
// SIG undefined FUN_142a8ac70(void)

void FUN_142a8ac70(longlong *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int local_res8 [4];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  
  if (*(char *)((longlong)param_1 + 0x62d) == '\0') {
    local_res8[0] = param_2;
    if (((param_2 == -1) && (param_1[0xc4] != 0)) && (lVar6 = FUN_14233c7a0(), lVar6 != 0)) {
      local_res8[0] = *(int *)(lVar6 + 0x14);
    }
    *(int *)(param_1 + 0xc5) = local_res8[0];
    if (local_res8[0] != -1) {
      *(undefined1 *)((longlong)param_1 + 0x62d) = 1;
      (**(code **)(*param_1 + 0x548))(param_1,local_res8);
      iVar2 = (int)param_1[0xc2];
      if (iVar2 < 1) {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
        if (iVar2 < 2) {
          iVar5 = iVar2;
        }
      }
      *(int *)(param_1 + 0xc2) = iVar5;
      plVar7 = (longlong *)FName::FName(local_res20,L"Synth",1);
      local_res18 = 0;
      lVar6 = *plVar7;
      if (lVar6 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar8 = FUN_142a987d0();
      lVar6 = FUN_1417985e0(uVar8,param_1,lVar6,0,0,0,0,0,0);
      param_1[0xc3] = lVar6;
      *(longlong *)(lVar6 + 0x80) = param_1[0xb3];
      *(longlong *)(param_1[0xc3] + 0x68) = param_1[0xb4];
      FUN_1408e22e0(param_1[0xc3] + 0x70,param_1 + 0xb5);
      FUN_1408e22e0(param_1[0xc3] + 0x88,param_1 + 0xb7);
      FUN_1408e22e0(param_1[0xc3] + 0x98,param_1 + 0xb9);
      pbVar1 = (byte *)(param_1[0xc3] + 0x30);
      *pbVar1 = *pbVar1 ^ (*(char *)((longlong)param_1 + 0x2d4) << 2 ^
                          *(byte *)(param_1[0xc3] + 0x30)) & 4;
      lVar6 = param_1[0xc3];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x614);
      lVar4 = param_1[0xc2];
      *(byte *)(lVar6 + 0xb4) = *(byte *)(lVar6 + 0xb4) | 4;
      *(byte *)(lVar6 + 0xb3) = *(byte *)(lVar6 + 0xb3) | 0x21;
      *(longlong **)(lVar6 + 0x250) = param_1;
      *(int *)(lVar6 + 0xe4) = (int)lVar4;
      *(undefined4 *)(lVar6 + 0x230) = uVar3;
      *(undefined4 *)(lVar6 + 0x50) = 0x461c4000;
      *(int *)(lVar6 + 0xec) = local_res8[0];
    }
  }
  return;
}



// FUNCTION 142a8ae50 FUN_142a8ae50 body=2287 status=ok
// SIG undefined FUN_142a8ae50(void)

void FUN_142a8ae50(longlong param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  int *piVar11;
  wchar_t *pwVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 local_res8;
  uint local_res10 [2];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  uint local_5c;
  undefined8 *local_58;
  undefined8 local_50;
  uint *local_48;
  undefined8 **local_40;
  
  lVar15 = 0;
  if (DAT_146b29ea0 == 0) {
    DAT_146b29ea0 = 0x80;
    if (DAT_146b29ea4 < 0x80) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146b29e98);
    }
    _guard_xfg_dispatch_icall_nop(DAT_146b29e98,0,0x800);
    lVar8 = (longlong)DAT_146b29eb0;
    DAT_146b29eb0 = DAT_146b29eb0 + 8;
    if (DAT_146b29eb4 < DAT_146b29eb0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146b29ea8);
    }
    _guard_xfg_dispatch_icall_nop((void *)(lVar8 * 0x10 + DAT_146b29ea8),0,0x80);
    iVar13 = 1;
    do {
      iVar6 = 1;
      lVar8 = lVar15;
      do {
        FUN_142a844c0(param_1,iVar13,iVar6,1,(longlong)DAT_146b29e98 + lVar8 + 0x400);
        FUN_142a844c0(param_1,iVar13,iVar6,0,(longlong)DAT_146b29e98 + lVar8);
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 0x80;
      } while (iVar6 < 9);
      iVar13 = iVar13 + 1;
      lVar15 = lVar15 + 0x10;
    } while (iVar13 < 9);
  }
  uVar5 = 0;
  iVar13 = 0;
  if (param_2 == 2) {
    local_res8 = 0x10e00000000;
    uVar1 = 0x5a;
  }
  else {
    local_res8 = 0x14a00000000;
    uVar1 = 0x1e;
  }
  *(undefined8 *)(param_1 + 0x740) = local_res8;
  local_res8 = CONCAT44(uVar1,1);
  *(undefined8 *)(param_1 + 0x748) = local_res8;
  if ((*(byte *)(param_1 + 0x368) & 1) == 0) {
    local_res8 = 0xffffffff00000002;
  }
  else {
    local_res8 = 2;
  }
  *(undefined8 *)(param_1 + 0x750) = local_res8;
  *(undefined8 *)(param_1 + 0x758) = 0xffffffff00000003;
  *(undefined8 *)(param_1 + 0x760) = 0xd200000004;
  *(undefined8 *)(param_1 + 0x768) = 0x9600000005;
  *(undefined8 *)(param_1 + 0x770) = 0xf00000006;
  *(undefined8 *)(param_1 + 0x778) = 0x15900000007;
  *(undefined8 *)(param_1 + 0x780) = 0xb400000008;
  *(undefined8 *)(param_1 + 0x788) = 0x10e00000009;
  local_res8 = 0x5a0000000a;
  *(undefined8 *)(param_1 + 0x790) = 0x5a0000000a;
  if (param_2 != 2) {
    local_res10[0] = 0;
    puVar10 = (uint *)(param_1 + 0x744);
    uVar4 = uVar5;
    do {
      uVar7 = (uint)uVar4;
      if (uVar7 == 2) {
        if ((*(byte *)(param_1 + 0x368) & 1) != 0) {
LAB_142a8b105:
          switch(uVar4) {
          default:
            pwVar12 = L"FrontLeft";
            break;
          case 1:
            pwVar12 = L"FrontRight";
            break;
          case 2:
            pwVar12 = L"FrontCenter";
            break;
          case 3:
            pwVar12 = L"LowFrequency";
            break;
          case 4:
            pwVar12 = L"BackLeft";
            break;
          case 5:
            pwVar12 = L"BackRight";
            break;
          case 6:
            pwVar12 = L"FrontLeftOfCenter";
            break;
          case 7:
            pwVar12 = L"FrontRightOfCenter";
            break;
          case 8:
            pwVar12 = L"BackCenter";
            break;
          case 9:
            pwVar12 = L"SideLeft";
            break;
          case 10:
            pwVar12 = L"SideRight";
          }
          goto LAB_142a8b1d6;
        }
      }
      else {
        if (uVar7 < 0x13) goto LAB_142a8b105;
        pwVar12 = L"UNSUPPORTED";
LAB_142a8b1d6:
        cVar2 = FConfigCacheIni::GetInt
                          (DAT_1468b6148,L"AudioChannelAzimuthMap",pwVar12,local_res10,
                           &DAT_1468e2360);
        if ((cVar2 != '\0') && (local_res10[0] < 0x168)) {
          puVar3 = (uint *)(param_1 + 0x744);
          uVar4 = uVar5;
          do {
            if (*puVar3 == local_res10[0]) goto LAB_142a8b223;
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 2;
          } while ((longlong)uVar4 < 0xb);
          *puVar10 = local_res10[0];
        }
      }
LAB_142a8b223:
      uVar4 = (ulonglong)(uVar7 + 1);
      puVar10 = puVar10 + 2;
    } while ((int)(uVar7 + 1) < 0xb);
  }
  lVar15 = param_1 + 0x798;
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(lVar15);
  piVar11 = *(int **)(param_1 + 0x8e0);
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  uVar4 = (longlong)*(int *)(param_1 + 0x8e8) & 0x3fffffffffffffff;
  if (piVar11 + *(int *)(param_1 + 0x8e8) < piVar11) {
    uVar4 = uVar5;
  }
  uVar9 = uVar5;
  uVar14 = uVar5;
  if (uVar4 != 0) {
    do {
      iVar13 = *piVar11;
      if ((iVar13 != 3) && (-1 < *(int *)(param_1 + 0x744 + (longlong)iVar13 * 8))) {
        local_60 = (int)uVar9 + 1;
        if ((int)uVar5 < (int)local_60) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,uVar9);
        }
        *(undefined8 *)(local_68 + (longlong)(int)uVar9 * 8) =
             *(undefined8 *)(param_1 + 0x740 + (longlong)iVar13 * 8);
        uVar5 = (ulonglong)local_5c;
        uVar9 = (ulonglong)local_60;
      }
      iVar13 = (int)uVar9;
      piVar11 = piVar11 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar4);
  }
  AlgoImpl::
  IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
            (local_68,(longlong)iVar13,(undefined1)local_res10[0],local_res10);
  local_48 = local_res10;
  local_res10[0] = local_res10[0] & 0xffffff00;
  local_40 = (undefined8 **)&local_68;
  FUN_142a782a0(lVar15,&local_res8,&local_48,0);
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  local_78 = (undefined8 *)0x0;
  local_70 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,0);
  uVar5 = local_70;
  *local_78 = *(undefined8 *)(param_1 + 0x740);
  lVar8 = (longlong)(int)local_70;
  iVar13 = (int)local_70 + 1;
  local_70 = CONCAT44(local_70._4_4_,iVar13);
  if (local_70._4_4_ < iVar13) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,uVar5 & 0xffffffff);
  }
  local_78[lVar8] = *(undefined8 *)(param_1 + 0x748);
  AlgoImpl::
  IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
            (local_78,(longlong)(int)local_70,(undefined1)local_res10[0],local_res10);
  local_48 = local_res10;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
  local_40 = &local_78;
  FUN_142a782a0(lVar15,&local_res8,&local_48,0);
  *(int *)(param_1 + 0x7ec) = (int)local_70;
  local_88 = (undefined8 *)0x0;
  local_80 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,0);
  *local_88 = *(undefined8 *)(param_1 + 0x740);
  lVar8 = (longlong)(int)local_80;
  iVar13 = (int)local_80 + 1;
  if (local_80._4_4_ < iVar13) {
    uVar5 = local_80 & 0xffffffff;
    local_80._0_4_ = iVar13;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,uVar5);
    iVar13 = (int)local_80;
  }
  local_80._0_4_ = iVar13;
  iVar13 = (int)local_80;
  local_88[lVar8] = *(undefined8 *)(param_1 + 0x748);
  lVar8 = (longlong)(int)local_80;
  local_80._0_4_ = (int)local_80 + 1;
  if (local_80._4_4_ < (int)local_80) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,iVar13);
  }
  iVar13 = (int)local_80;
  local_88[lVar8] = *(undefined8 *)(param_1 + 0x788);
  lVar8 = (longlong)(int)local_80;
  local_80._0_4_ = (int)local_80 + 1;
  if (local_80._4_4_ < (int)local_80) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,iVar13);
  }
  local_88[lVar8] = *(undefined8 *)(param_1 + 0x790);
  AlgoImpl::
  IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
            (local_88,(longlong)(int)local_80,(undefined1)local_res10[0],local_res10);
  local_48 = local_res10;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,2);
  local_40 = &local_88;
  FUN_142a782a0(lVar15,&local_res8,&local_48,0);
  *(int *)(param_1 + 0x7f0) = (int)local_80;
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,0);
  *local_98 = *(undefined8 *)(param_1 + 0x740);
  lVar8 = (longlong)(int)local_90;
  iVar13 = (int)local_90 + 1;
  if (local_90._4_4_ < iVar13) {
    uVar5 = local_90 & 0xffffffff;
    local_90._0_4_ = iVar13;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,uVar5);
    iVar13 = (int)local_90;
  }
  local_90._0_4_ = iVar13;
  iVar13 = (int)local_90;
  local_98[lVar8] = *(undefined8 *)(param_1 + 0x748);
  lVar8 = (longlong)(int)local_90;
  local_90._0_4_ = (int)local_90 + 1;
  if (local_90._4_4_ < (int)local_90) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar13);
  }
  iVar13 = (int)local_90;
  local_98[lVar8] = *(undefined8 *)(param_1 + 0x788);
  lVar8 = (longlong)(int)local_90;
  local_90._0_4_ = (int)local_90 + 1;
  if (local_90._4_4_ < (int)local_90) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar13);
  }
  local_98[lVar8] = *(undefined8 *)(param_1 + 0x790);
  AlgoImpl::
  IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
            (local_98,(longlong)(int)local_90,(undefined1)local_res10[0],local_res10);
  local_48 = local_res10;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,3);
  local_40 = &local_98;
  FUN_142a782a0(lVar15,&local_res8,&local_48,0);
  *(int *)(param_1 + 0x7f4) = (int)local_90;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  *local_a8 = *(undefined8 *)(param_1 + 0x740);
  lVar8 = (longlong)(int)local_a0;
  iVar13 = (int)local_a0 + 1;
  if (local_a0._4_4_ < iVar13) {
    uVar5 = local_a0 & 0xffffffff;
    local_a0._0_4_ = iVar13;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,uVar5);
    iVar13 = (int)local_a0;
  }
  local_a0._0_4_ = iVar13;
  iVar13 = (int)local_a0;
  local_a8[lVar8] = *(undefined8 *)(param_1 + 0x748);
  lVar8 = (longlong)(int)local_a0;
  local_a0._0_4_ = (int)local_a0 + 1;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,iVar13);
  }
  iVar13 = (int)local_a0;
  local_a8[lVar8] = *(undefined8 *)(param_1 + 0x760);
  lVar8 = (longlong)(int)local_a0;
  local_a0._0_4_ = (int)local_a0 + 1;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,iVar13);
  }
  iVar13 = (int)local_a0;
  local_a8[lVar8] = *(undefined8 *)(param_1 + 0x768);
  lVar8 = (longlong)(int)local_a0;
  local_a0._0_4_ = (int)local_a0 + 1;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,iVar13);
  }
  iVar13 = (int)local_a0;
  local_a8[lVar8] = *(undefined8 *)(param_1 + 0x788);
  lVar8 = (longlong)(int)local_a0;
  local_a0._0_4_ = (int)local_a0 + 1;
  if (local_a0._4_4_ < (int)local_a0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,iVar13);
  }
  local_a8[lVar8] = *(undefined8 *)(param_1 + 0x790);
  AlgoImpl::
  IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
            (local_a8,(longlong)(int)local_a0,(undefined1)local_res10[0],local_res10);
  local_48 = local_res10;
  local_res10[0]._0_1_ = 4;
  local_40 = &local_a8;
  FUN_142a782a0(lVar15,&local_res8,&local_48,0);
  *(int *)(param_1 + 0x7f8) = (int)local_a0;
  local_58 = (undefined8 *)0x0;
  local_50 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,0);
  *local_58 = *(undefined8 *)(param_1 + 0x750);
  AlgoImpl::
  IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
            (local_58,(longlong)(int)local_50,(undefined1)local_res10[0],local_res10);
  local_48 = local_res10;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,5);
  local_40 = &local_58;
  FUN_142a782a0(lVar15,&local_res8,&local_48,0);
  *(int *)(param_1 + 0x7fc) = (int)local_50;
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_98 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a8b7e0 FUN_142a8b7e0 body=1860 status=ok
// SIG undefined FUN_142a8b7e0(void)

ulonglong FUN_142a8b7e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong in_RAX;
  longlong *plVar8;
  longlong lVar9;
  undefined2 **ppuVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  uint uVar17;
  uint *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  double dVar23;
  longlong *local_res8;
  uint local_res10 [2];
  undefined8 local_res18;
  LARGE_INTEGER local_res20;
  undefined2 *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  uint local_1b8 [3];
  uint uStack_1ac;
  longlong *local_1a8;
  undefined2 *local_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined8 local_180;
  longlong local_168;
  undefined8 local_160;
  longlong local_148 [2];
  ulonglong local_138;
  undefined8 uStack_130;
  longlong *local_128;
  ulonglong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  ulonglong local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  ulonglong local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong local_b8 [2];
  longlong local_a8;
  longlong local_88;
  undefined8 *puVar18;
  undefined8 *puVar22;
  
  if (((longlong *)param_1[0xe7] == (longlong *)0x0) ||
     (local_res8 = param_1, in_RAX = (**(code **)(*(longlong *)param_1[0xe7] + 0x38))(),
     (char)in_RAX == '\0')) goto LAB_142a8be90;
  plVar8 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar13 = plVar8[0x1f];
  if (lVar13 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar13 = plVar8[0x1f];
  }
  *(undefined1 *)(param_1 + 0x10a) = *(undefined1 *)(lVar13 + 0xdd);
  *(undefined1 *)((longlong)param_1 + 0x851) = *(undefined1 *)(lVar13 + 0xdc);
  plVar8 = (longlong *)FUN_142875430(DAT_146b17150);
  *(bool *)(param_1 + 0xe4) = param_1 == plVar8;
  (*(code *)**(undefined8 **)(param_1[0xe7] + 0x10))();
  uVar6 = (**(code **)(*(longlong *)param_1[0xe7] + 0xc0))
                    ((longlong *)param_1[0xe7],*(undefined4 *)((longlong)param_1 + 0x1c));
  puVar19 = (uint *)(param_1 + 0x10b);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x85c) = uVar6;
  *(undefined4 *)(param_1 + 0x10e) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(param_1 + 0x10c) = (int)param_1[4];
  param_1[0x10d] = (longlong)(param_1 + 0xe3);
  *puVar19 = 0xffffffff;
  uVar6 = FAudioDevice::GetMaxChannels(param_1);
  *(undefined4 *)(param_1 + 0x10f) = uVar6;
  (**(code **)(*(longlong *)param_1[0xe7] + 0xf0))((longlong *)param_1[0xe7],&local_1d8);
  puVar18 = (undefined8 *)0x0;
  if (local_1d0 < 2) {
    cVar4 = FAudioDevice::CanUseVRAudioDevice();
    if (cVar4 != '\0') {
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar13 + 0x38) < DAT_146850178) &&
         (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
        FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
        _Init_thread_footer(&DAT_146850178);
      }
      uVar11 = DAT_146850170;
      plVar8 = (longlong *)FUN_141593110();
      iVar7 = (**(code **)(*plVar8 + 8))(plVar8,uVar11);
      if (0 < iVar7) {
        if ((*(int *)(lVar13 + 0x38) < DAT_146850178) &&
           (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
          FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
          _Init_thread_footer(&DAT_146850178);
        }
        uVar11 = DAT_146850170;
        plVar8 = (longlong *)FUN_141593110();
        local_1c8 = (undefined8 *)0x0;
        local_1c0 = 0;
        uVar17 = 0;
        local_res18 = plVar8;
        local_res10[0] = (**(code **)(*plVar8 + 8))(plVar8,uVar11);
        puVar20 = puVar18;
        if (0 < (int)local_res10[0]) {
          puVar22 = puVar18;
          iVar7 = local_1c0._4_4_;
          do {
            lVar13 = 0;
            lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar11,puVar22);
            if (lVar9 != 0) {
              lVar13 = lVar9 + -8;
            }
            iVar16 = (int)puVar18;
            uVar17 = iVar16 + 1;
            local_1c0 = CONCAT44(local_1c0._4_4_,uVar17);
            if (iVar7 < (int)uVar17) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1c8,puVar18);
              puVar20 = local_1c8;
              iVar7 = local_1c0._4_4_;
              uVar17 = (uint)local_1c0;
            }
            puVar18 = (undefined8 *)(ulonglong)uVar17;
            puVar20[iVar16] = lVar13;
            uVar21 = (int)puVar22 + 1;
            puVar22 = (undefined8 *)(ulonglong)uVar21;
            param_1 = local_res8;
            plVar8 = local_res18;
          } while ((int)uVar21 < (int)local_res10[0]);
        }
        AlgoImpl::
        IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                  (puVar20,(longlong)(int)uVar17,(ulonglong)local_res8 & 0xff,&local_res8);
        plVar8 = (longlong *)*puVar20;
        FMemory::Free(puVar20);
        ppuVar10 = (undefined2 **)(**(code **)(*plVar8 + 0x70))(plVar8,local_148);
        if (&local_1d8 != ppuVar10) {
          if (local_1d8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_1d8 = *ppuVar10;
          *ppuVar10 = (undefined2 *)0x0;
          local_1d0 = *(int *)(ppuVar10 + 1);
          local_1cc = *(undefined4 *)((longlong)ppuVar10 + 0xc);
          ppuVar10[1] = (undefined2 *)0x0;
        }
        if (local_148[0] != 0) {
          FMemory::Free();
        }
      }
      puVar19 = (uint *)(param_1 + 0x10b);
    }
    if (1 < local_1d0) goto LAB_142a8bac5;
  }
  else {
LAB_142a8bac5:
    uVar17 = 0;
    local_res10[0] = 0;
    (**(code **)(*(longlong *)param_1[0xe7] + 0x60))((longlong *)param_1[0xe7],local_res10);
    if (local_res10[0] != 0) {
      do {
        local_198 = (undefined2 *)0x0;
        local_190 = 0;
        local_188 = (undefined2 *)0x0;
        local_180 = 0;
        local_168 = 0;
        local_160 = 0;
        Audio::FAudioPlatformDeviceInfo::Reset(&local_198);
        (**(code **)(*(longlong *)param_1[0xe7] + 0x68))
                  ((longlong *)param_1[0xe7],uVar17,&local_198);
        puVar15 = &DAT_143f3eda8;
        if (local_1d0 != 0) {
          puVar15 = local_1d8;
        }
        puVar14 = &DAT_143f3eda8;
        if ((int)local_190 != 0) {
          puVar14 = local_198;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
        if (iVar7 == 0) {
LAB_142a8bbcc:
          *puVar19 = uVar17;
          *(undefined1 *)((longlong)param_1 + 0x874) = 1;
          if (local_168 != 0) {
            FMemory::Free();
          }
          if (local_188 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_198 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          break;
        }
        puVar15 = &DAT_143f3eda8;
        if (local_1d0 != 0) {
          puVar15 = local_1d8;
        }
        puVar14 = &DAT_143f3eda8;
        if ((int)local_180 != 0) {
          puVar14 = local_188;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
        if (iVar7 == 0) goto LAB_142a8bbcc;
        if (local_168 != 0) {
          FMemory::Free();
        }
        if (local_188 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_198 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < local_res10[0]);
    }
  }
  in_RAX = (**(code **)(*(longlong *)param_1[0xe7] + 0x80))((longlong *)param_1[0xe7],puVar19);
  if ((char)in_RAX != '\0') {
    uVar11 = (**(code **)(*(longlong *)param_1[0xe7] + 0xa8))((longlong *)param_1[0xe7],local_b8);
    Audio::FAudioPlatformDeviceInfo::operator=(param_1 + 0x116,uVar11);
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    FUN_142a8ae50(param_1,(int)param_1[0x11a]);
    iVar7 = FAudioDevice::GetMaxChannels(param_1);
    local_res18 = (longlong *)CONCAT44(4,iVar7 + *(int *)((longlong)param_1 + 0xc));
    FUN_142a87320(param_1 + 0x136,&local_res18);
    uStack_1ac = *(uint *)((longlong)param_1 + 0x85c);
    local_1b8[1] = 0;
    plVar8 = (longlong *)param_1[8];
    param_1[0x111] = 0;
    local_1b8[0] = *(uint *)(param_1 + 1);
    local_1b8[2] = *(undefined4 *)((longlong)param_1 + 0x14);
    uVar3 = (ulonglong)local_1b8[0];
    uVar11 = CONCAT44(uStack_1ac,local_1b8[2]);
    param_1[0x110] = (longlong)((double)uStack_1ac / (double)*(uint *)(param_1 + 0x10e));
    local_1a8 = param_1;
    if (plVar8 != (longlong *)0x0) {
      local_138 = uVar3;
      uStack_130 = uVar11;
      local_128 = param_1;
      (**(code **)(*plVar8 + 0x68))(plVar8,&local_138);
    }
    plVar8 = (longlong *)FUN_1422f18c0(0);
    if (plVar8 != (longlong *)0x0) {
      plVar12 = (longlong *)(**(code **)(*plVar8 + 0x28))(plVar8,local_1b8,param_1);
      plVar8 = param_1 + 0xe;
      if (plVar8 != plVar12) {
        *plVar8 = *plVar12;
        *plVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf,plVar12 + 1);
      }
      plVar12 = (longlong *)CONCAT44(uStack_1ac,local_1b8[2]);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar8 = (longlong *)*plVar8;
      if (plVar8 != (longlong *)0x0) {
        local_118 = uVar3;
        uStack_110 = uVar11;
        local_108 = param_1;
        (**(code **)(*plVar8 + 0x58))(plVar8,&local_118);
      }
    }
    plVar8 = (longlong *)param_1[0xc];
    if (plVar8 != (longlong *)0x0) {
      local_f8 = uVar3;
      uStack_f0 = uVar11;
      local_e8 = param_1;
      (**(code **)(*plVar8 + 8))(plVar8,&local_f8);
    }
    plVar8 = (longlong *)param_1[10];
    if (plVar8 != (longlong *)0x0) {
      local_d8 = uVar3;
      uStack_d0 = uVar11;
      local_c8 = param_1;
      (**(code **)(*plVar8 + 8))(plVar8,&local_d8);
    }
    (**(code **)(*param_1 + 0x48))(param_1);
    LOCK();
    *(undefined4 *)(param_1[0xe7] + 0x194) = 1;
    UNLOCK();
    QueryPerformanceCounter(&local_res20);
    dVar23 = (double)local_res20.QuadPart * DAT_1468b02f8;
    param_1[0x113] = 0;
    param_1[0x114] = 0;
    param_1[0x112] = (longlong)(dVar23 + 16777216.0);
    bVar5 = (**(code **)(*(longlong *)param_1[0xe7] + 0x90))();
    if (local_1d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return (ulonglong)bVar5;
  }
  if (local_1d8 != (undefined2 *)0x0) {
    in_RAX = FMemory::Free();
  }
LAB_142a8be90:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142a8bf30 IsDone body=96 status=ok
// SIG undefined IsDone(void)

undefined8 Audio::FDecodeHandleBase::IsDone(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return 1;
  }
  LOCK();
  bVar2 = *(int *)(lVar1 + 0x60) == 0;
  if (bVar2) {
    *(int *)(lVar1 + 0x60) = 0;
  }
  UNLOCK();
  if (bVar2) {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x20))(*(longlong **)(lVar1 + 0x68),0xffffffff,0)
      ;
      *(undefined8 *)(lVar1 + 0x70) = 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142a8bf90 IsFinished body=158 status=ok
// SIG undefined IsFinished(void)

undefined8 Audio::FMixerSource::IsFinished(longlong param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x78) & 8) == 0) {
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      return 1;
    }
    if (*(char *)(param_1 + 0x1c0) != '\x01') {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        return 1;
      }
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        return 1;
      }
      LOCK();
      bVar1 = *(int *)(param_1 + 0x1d4) == 0;
      if (bVar1) {
        *(int *)(param_1 + 0x1d4) = 0;
      }
      UNLOCK();
      if (!bVar1) {
        LOCK();
        bVar1 = *(int *)(param_1 + 0x1d8) == 0;
        if (bVar1) {
          *(int *)(param_1 + 0x1d8) = 0;
        }
        UNLOCK();
        if (!bVar1) {
          FUN_1422d1b70(*(undefined8 *)(param_1 + 0x10),0);
          LOCK();
          *(undefined4 *)(param_1 + 0x1cc) = 0;
          UNLOCK();
          return 1;
        }
      }
      LOCK();
      bVar1 = *(int *)(param_1 + 0x1d0) == 0;
      if (bVar1) {
        *(int *)(param_1 + 0x1d0) = 0;
      }
      UNLOCK();
      if ((!bVar1) && (*(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) == 1)) {
        FUN_1422d1b70(*(longlong *)(param_1 + 0x10),0);
        LOCK();
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        UNLOCK();
      }
    }
  }
  return 0;
}



// FUNCTION 142a8c050 FUN_142a8c050 body=43 status=ok
// SIG undefined FUN_142a8c050(void)

undefined8 FUN_142a8c050(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x620) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x620) + 0x568))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a8c080 IsPreparedToInit body=208 status=ok
// SIG undefined IsPreparedToInit(void)

undefined8 Audio::FMixerSource::IsPreparedToInit(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
    return 0;
  }
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x40))();
  if (cVar4 == '\0') {
    return 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x98);
  plVar2 = *(longlong **)(lVar6 + 0x58);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a8c0c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2);
    return uVar5;
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    return 1;
  }
  bVar1 = *(byte *)(*plVar2 + 0xb3);
  if ((bVar1 & 0x10) != 0) {
    return 1;
  }
  plVar3 = *(longlong **)(param_1 + 0x90);
  if (1 < (int)plVar3[8] - 2U) {
    return 1;
  }
  if (*plVar2 == 0) {
    return 1;
  }
  if (*(float *)(plVar2 + 0x14) <= 0.0) {
    if (((bVar1 & 0x14) == 0) && (*(longlong *)(*plVar2 + 0x128) != 0)) {
      return 1;
    }
    if (*(float *)(plVar2 + 0x14) <= 0.0) goto LAB_142a8c136;
  }
  if ((bVar1 & 0x14) == 0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    lVar6 = *(longlong *)(param_1 + 0x98);
  }
LAB_142a8c136:
  FMixerSourceBuffer::ReadMoreRealtimeData(lVar6,0,0);
  return 0;
}



// FUNCTION 142a8c150 FUN_142a8c150 body=105 status=ok
// SIG undefined FUN_142a8c150(void)

longlong FUN_142a8c150(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint7 uVar4;
  
  if (*(longlong **)(param_1 + 0x620) == (longlong *)0x0) {
LAB_142a8c17a:
    bVar1 = true;
  }
  else {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x620) + 0x568))();
    if ((char)in_RAX == '\0') goto LAB_142a8c17a;
    bVar1 = false;
  }
  if (*(longlong *)(param_1 + 0x618) != 0) {
    in_RAX = USoundWave::GetNumSoundsActive();
    if ((int)in_RAX != 0) {
      uVar3 = in_RAX & 0xffffffffffffff00;
      bVar2 = false;
      goto LAB_142a8c197;
    }
  }
  uVar3 = CONCAT71((int7)(in_RAX >> 8),1);
  bVar2 = true;
LAB_142a8c197:
  uVar4 = (uint7)(uVar3 >> 8);
  if ((bVar1) && (bVar2)) {
    return CONCAT71(uVar4,1);
  }
  return (ulonglong)uVar4 << 8;
}



// FUNCTION 142a8c1c0 IsRealTimeSourceReady body=87 status=ok
// SIG undefined IsRealTimeSourceReady(void)

char Audio::FMixerBuffer::IsRealTimeSourceReady(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    if (cVar2 != '\0') {
      puVar1 = *(undefined8 **)(param_1 + 0x30);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    return cVar2;
  }
  return '\x01';
}



// FUNCTION 142a8c230 FUN_142a8c230 body=1058 status=ok
// SIG undefined FUN_142a8c230(void)

void FUN_142a8c230(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  int *piVar29;
  float *pfVar30;
  float *pfVar31;
  longlong lVar32;
  int *piVar33;
  
  iVar27 = *(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x54);
  lVar32 = 0;
  lVar19 = ((longlong)*(int *)(param_1 + 0x50) + 3) * 0x10 + param_1;
  iVar14 = *(int *)(lVar19 + 0xc);
  *(undefined4 *)(lVar19 + 8) = 0;
  if ((iVar14 < 0) && (iVar14 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo();
  }
  plVar22 = (longlong *)(((longlong)*(int *)(param_1 + 0x50) + 3) * 0x10 + param_1);
  lVar19 = plVar22[1];
  iVar14 = (int)lVar19 + iVar27;
  *(int *)(plVar22 + 1) = iVar14;
  if (*(int *)((longlong)plVar22 + 0xc) < iVar14) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar22);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*plVar22 + (longlong)(int)lVar19 * 4),0,(longlong)iVar27 << 2);
  pfVar6 = *(float **)(param_1 + ((longlong)*(int *)(param_1 + 0x50) + 3) * 0x10);
  do {
    piVar33 = *(int **)(param_1 + (lVar32 + 1) * 0x10);
    piVar1 = piVar33 + (longlong)*(int *)(param_1 + 8 + (lVar32 + 1) * 0x10) * 2;
    if (piVar33 != piVar1) {
      pfVar30 = (float *)(piVar33 + 1);
      do {
        lVar19 = *(longlong *)(param_1 + 0x60);
        lVar25 = (longlong)*piVar33 * 0x4b0;
        lVar24 = *(longlong *)(lVar19 + 0x70);
        iVar14 = *(int *)(lVar24 + 0xa8 + lVar25);
        if (iVar14 == -1) {
          if (lVar32 == 1) {
            pfVar31 = *(float **)(lVar24 + 0x50 + lVar25);
          }
          else {
            pfVar31 = *(float **)(lVar24 + 0x40 + lVar25);
          }
        }
        else {
          if (*(int *)(lVar19 + 0x88) != *(int *)(lVar19 + 0xb4)) {
            lVar16 = *(longlong *)(lVar19 + 0xc0);
            if (*(longlong *)(lVar19 + 0xc0) == 0) {
              lVar16 = lVar19 + 0xb8;
            }
            iVar27 = *(int *)(lVar16 + ((longlong)*(int *)(lVar19 + 200) - 1U & (longlong)iVar14) *
                                       4);
            if (iVar27 != -1) {
              do {
                piVar29 = (int *)((longlong)iVar27 * 0x78 + *(longlong *)(lVar19 + 0x80));
                if (*piVar29 == iVar14) {
                  if (iVar27 != -1) goto LAB_142a8c38d;
                  break;
                }
                iVar27 = piVar29[0x1c];
              } while (iVar27 != -1);
            }
          }
          piVar29 = (int *)0x0;
LAB_142a8c38d:
          piVar20 = piVar29 + 2;
          if (piVar29 == (int *)0x0) {
            piVar20 = (int *)0x0;
          }
          lVar16 = 0x30;
          if (piVar20[0x14] == 0) {
            lVar16 = 0x40;
          }
          pfVar31 = *(float **)(lVar16 + (longlong)piVar20);
        }
        lVar16 = 0;
        iVar14 = *(int *)(lVar24 + 0x490 + lVar25);
        uVar28 = *(int *)(lVar19 + 0x138) * iVar14;
        lVar19 = (longlong)(int)uVar28;
        if (iVar14 == 1) {
          if (*(int *)(param_1 + 0x54) == 2) {
            uVar26 = 0;
            iVar14 = 2;
            uVar17 = uVar26;
            uVar23 = uVar26;
            if (0 < (int)uVar28) {
              do {
                fVar4 = pfVar31[uVar23];
                fVar5 = *pfVar30;
                uVar21 = uVar26;
                if (0 < iVar14) {
                  do {
                    uVar28 = (int)uVar21 + 1;
                    pfVar6[uVar17] = fVar4 * fVar5 * 0.5 + pfVar6[uVar17];
                    uVar17 = uVar17 + 1;
                    iVar14 = *(int *)(param_1 + 0x54);
                    uVar21 = (ulonglong)uVar28;
                  } while ((int)uVar28 < iVar14);
                }
                uVar23 = uVar23 + 1;
              } while ((longlong)uVar23 < lVar19);
            }
          }
          else {
LAB_142a8c494:
            lVar25 = 0;
            lVar24 = 0;
            if ((0 < (int)uVar28) && (lVar24 = lVar25, 0xf < uVar28)) {
              fVar4 = *pfVar30;
              if (((pfVar31 + (int)(uVar28 - 1) < pfVar6) || (pfVar6 + (int)(uVar28 - 1) < pfVar31))
                 && ((pfVar30 < pfVar6 || (pfVar6 + (int)(uVar28 - 1) < pfVar30)))) {
                uVar15 = uVar28 & 0x8000000f;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                }
                pfVar18 = pfVar6 + 4;
                lVar25 = (longlong)pfVar31 - (longlong)pfVar6;
                lVar24 = 0;
                do {
                  lVar24 = lVar24 + 0x10;
                  pfVar3 = (float *)(lVar25 + -0x10 + (longlong)pfVar18);
                  fVar5 = pfVar3[1];
                  fVar7 = pfVar3[2];
                  fVar8 = pfVar3[3];
                  pfVar2 = (float *)(lVar25 + (longlong)pfVar18);
                  fVar9 = *pfVar2;
                  fVar10 = pfVar2[1];
                  fVar11 = pfVar2[2];
                  fVar12 = pfVar2[3];
                  pfVar18[-4] = *pfVar3 * fVar4 + pfVar18[-4];
                  pfVar18[-3] = fVar5 * fVar4 + pfVar18[-3];
                  pfVar18[-2] = fVar7 * fVar4 + pfVar18[-2];
                  pfVar18[-1] = fVar8 * fVar4 + pfVar18[-1];
                  pfVar2 = (float *)(lVar25 + 0x10 + (longlong)pfVar18);
                  fVar5 = *pfVar2;
                  fVar7 = pfVar2[1];
                  fVar8 = pfVar2[2];
                  fVar13 = pfVar2[3];
                  *pfVar18 = fVar9 * fVar4 + *pfVar18;
                  pfVar18[1] = fVar10 * fVar4 + pfVar18[1];
                  pfVar18[2] = fVar11 * fVar4 + pfVar18[2];
                  pfVar18[3] = fVar12 * fVar4 + pfVar18[3];
                  pfVar18[4] = fVar5 * fVar4 + pfVar18[4];
                  pfVar18[5] = fVar7 * fVar4 + pfVar18[5];
                  pfVar18[6] = fVar8 * fVar4 + pfVar18[6];
                  pfVar18[7] = fVar13 * fVar4 + pfVar18[7];
                  pfVar2 = (float *)(lVar25 + 0x20 + (longlong)pfVar18);
                  fVar5 = pfVar2[1];
                  fVar7 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar18[8] = *pfVar2 * fVar4 + pfVar18[8];
                  pfVar18[9] = fVar5 * fVar4 + pfVar18[9];
                  pfVar18[10] = fVar7 * fVar4 + pfVar18[10];
                  pfVar18[0xb] = fVar8 * fVar4 + pfVar18[0xb];
                  pfVar18 = pfVar18 + 0x10;
                } while (lVar24 < (int)(uVar28 - uVar15));
              }
            }
            if (lVar24 < lVar19) {
              if (3 < lVar19 - lVar24) {
                pfVar18 = pfVar6 + lVar24 + 1;
                lVar16 = (longlong)pfVar31 - (longlong)pfVar6;
                lVar25 = ((lVar19 - lVar24) - 4U >> 2) + 1;
                lVar24 = lVar24 + lVar25 * 4;
                do {
                  pfVar18[-1] = *(float *)(lVar16 + -4 + (longlong)pfVar18) * *pfVar30 + pfVar18[-1]
                  ;
                  *pfVar18 = *(float *)((longlong)pfVar18 + lVar16) * *pfVar30 + *pfVar18;
                  pfVar18[1] = *(float *)(lVar16 + 4 + (longlong)pfVar18) * *pfVar30 + pfVar18[1];
                  pfVar18[2] = *(float *)(lVar16 + 8 + (longlong)pfVar18) * *pfVar30 + pfVar18[2];
                  pfVar18 = pfVar18 + 4;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
              }
              if (lVar24 < lVar19) {
                pfVar18 = pfVar6 + lVar24;
                lVar19 = lVar19 - lVar24;
                do {
                  *pfVar18 = *(float *)((longlong)pfVar18 + ((longlong)pfVar31 - (longlong)pfVar6))
                             * *pfVar30 + *pfVar18;
                  pfVar18 = pfVar18 + 1;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
              }
            }
          }
        }
        else {
          if ((iVar14 != 2) || (*(int *)(param_1 + 0x54) != 1)) goto LAB_142a8c494;
          lVar24 = lVar16;
          if (0 < (int)uVar28) {
            do {
              lVar25 = lVar24 + 1;
              pfVar18 = pfVar31 + lVar24;
              lVar24 = lVar24 + 2;
              pfVar6[lVar16] = (pfVar31[lVar25] + *pfVar18) * *pfVar30 * 0.5 + pfVar6[lVar16];
              lVar16 = lVar16 + 1;
            } while (lVar16 < lVar19);
          }
        }
        piVar33 = piVar33 + 2;
        pfVar30 = pfVar30 + 2;
      } while (piVar33 != piVar1);
    }
    lVar32 = lVar32 + 1;
    if (1 < lVar32) {
      return;
    }
  } while( true );
}



// FUNCTION 142a8c660 MixNextBuffer body=254 status=ok
// SIG undefined MixNextBuffer(void)

undefined4 Audio::FOutputBuffer::MixNextBuffer(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],0,(longlong)*(int *)(param_1 + 2) << 2);
  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,param_1 + 1);
  if (*(int *)(param_1 + 5) == 2) {
    lVar5 = (longlong)*(int *)(param_1 + 2);
    lVar4 = 0;
    lVar3 = param_1[3];
    if (3 < lVar5) {
      puVar6 = (undefined2 *)(lVar3 + 4);
      do {
        puVar6[-2] = (short)(int)(*(float *)(param_1[1] + lVar4 * 4) * 32767.0);
        puVar6[-1] = (short)(int)(*(float *)(param_1[1] + 4 + lVar4 * 4) * 32767.0);
        *puVar6 = (short)(int)(*(float *)(param_1[1] + 8 + lVar4 * 4) * 32767.0);
        lVar1 = lVar4 * 4;
        lVar4 = lVar4 + 4;
        puVar6[1] = (short)(int)(*(float *)(param_1[1] + 0xc + lVar1) * 32767.0);
        puVar6 = puVar6 + 4;
      } while (lVar4 < lVar5 + -3);
    }
    for (; lVar4 < lVar5; lVar4 = lVar4 + 1) {
      *(short *)(lVar3 + lVar4 * 2) = (short)(int)(*(float *)(param_1[1] + lVar4 * 4) * 32767.0);
    }
  }
  LOCK();
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  UNLOCK();
  return uVar2;
}



// FUNCTION 142a8c760 FUN_142a8c760 body=260 status=ok
// SIG undefined FUN_142a8c760(void)

void FUN_142a8c760(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 local_res8 [2];
  
  if (0 < *(int *)(param_1 + 0x5f0)) {
    local_res8[0] = param_4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x5e8,local_res8);
  }
  plVar8 = (longlong *)(param_1 + 0x5f8);
  plVar4 = (longlong *)*plVar8;
  plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x600) * 2;
  if (plVar4 != plVar6) {
    while (((int)plVar4[1] == 0 || (*plVar4 == 0))) {
      plVar4 = plVar4 + 2;
      if (plVar4 == plVar6) {
        return;
      }
    }
    *(int *)(param_1 + 0x60c) = *(int *)(param_1 + 0x60c) + 1;
    iVar5 = *(int *)(param_1 + 0x60c);
    bVar1 = false;
    iVar3 = *(int *)(param_1 + 0x600) + -1;
    lVar9 = (longlong)iVar3;
    if (-1 < iVar3) {
      lVar7 = lVar9 << 4;
      bVar1 = false;
      do {
        if ((*(int *)(lVar7 + 8 + *plVar8) == 0) ||
           (plVar4 = *(longlong **)(lVar7 + *plVar8), plVar4 == (longlong *)0x0)) {
LAB_142a8c823:
          bVar1 = true;
        }
        else {
          cVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,param_2,param_4);
          if (cVar2 == '\0') goto LAB_142a8c823;
        }
        lVar7 = lVar7 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar5 = *(int *)(param_1 + 0x60c);
    }
    *(int *)(param_1 + 0x60c) = iVar5 + -1;
    if (bVar1) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,0);
    }
  }
  return;
}



// FUNCTION 142a8c870 OnAudioStreamShutdown body=44 status=ok
// SIG undefined OnAudioStreamShutdown(void)

void Audio::FMixerDevice::OnAudioStreamShutdown(longlong param_1)

{
  param_1 = param_1 + 0x298;
  FMixerSourceManager::PumpCommandQueue(param_1);
  FMixerSourceManager::PumpCommandQueue(param_1);
  FUN_142a97fb0(param_1,1);
  return;
}



// FUNCTION 142a8c8e0 FUN_142a8c8e0 body=118 status=ok
// SIG undefined FUN_142a8c8e0(void)

void FUN_142a8c8e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))();
  }
  if ((*(char *)(param_1 + 100) != '\0') &&
     (plVar2 = *(longlong **)(param_1 + 0x50), plVar2 != (longlong *)0x0)) {
    if ((*(byte *)((longlong)plVar2 + 0xb3) & 4) != 0) {
      (**(code **)(*plVar2 + 0x2f0))();
      plVar2 = *(longlong **)(param_1 + 0x50);
    }
    USoundWave::DecrementNumSounds(plVar2);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(int *)(puVar1 + 8) - 2U < 2) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 142a8c980 OnGenerateAudio body=85 status=ok
// SIG undefined OnGenerateAudio(void)

undefined8 USynthComponent::OnGenerateAudio(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\AudioMixer\\Public\\Components/SynthComponent.h"
             ,0xcf,L"Pure virtual not implemented (%s)",L"USynthComponent::OnGenerateAudio");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\AudioMixer\\Public\\Components/SynthComponent.h"
             ,0xcf,L"Pure virtual not implemented (%s)",L"USynthComponent::OnGenerateAudio");
  return 0;
}



// FUNCTION 142a8c9e0 FUN_142a8c9e0 body=557 status=ok
// SIG undefined FUN_142a8c9e0(void)

ulonglong FUN_142a8c9e0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  lVar9 = 0;
  iVar11 = (int)param_3;
  uVar10 = (ulonglong)iVar11;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2);
  }
  if (*(char *)(param_1 + 0x268) == '\0') {
    plVar1 = (longlong *)(param_1 + 600);
    *(undefined4 *)(param_1 + 0x260) = 0;
    if ((*(int *)(param_1 + 0x264) < 0) && (*(int *)(param_1 + 0x264) != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    }
    iVar4 = *(int *)(param_1 + 0x260);
    iVar6 = iVar4 + iVar11 * 4;
    *(int *)(param_1 + 0x260) = iVar6;
    if (*(int *)(param_1 + 0x264) < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar4 * 4),0,(longlong)(iVar11 * 4) << 2);
    lVar2 = *plVar1;
    plVar1 = *(longlong **)(param_1 + 0x250);
    FUN_142a90410(plVar1);
    if (*(char *)((longlong)plVar1 + 0x62c) == '\0') {
      param_3 = param_3 & 0xffffffff;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x570))(plVar1,lVar2,param_3 & 0xffffffff);
      param_3 = (ulonglong)uVar5;
    }
    lVar3 = param_2[1];
    iVar4 = (int)lVar3 + iVar11 * 2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)lVar3 + *param_2),0,(longlong)(iVar11 * 2));
    lVar3 = *param_2;
    if (3 < (longlong)uVar10) {
      lVar12 = (uVar10 - 4 >> 2) + 1;
      lVar9 = lVar12 * 4;
      puVar7 = (undefined2 *)(lVar3 + 4);
      pfVar8 = (float *)(lVar2 + 8);
      do {
        puVar7[-2] = (short)(int)(pfVar8[-2] * 32767.0);
        puVar7[-1] = (short)(int)(pfVar8[-1] * 32767.0);
        *puVar7 = (short)(int)(*pfVar8 * 32767.0);
        puVar7[1] = (short)(int)(pfVar8[1] * 32767.0);
        lVar12 = lVar12 + -1;
        puVar7 = puVar7 + 4;
        pfVar8 = pfVar8 + 4;
      } while (lVar12 != 0);
    }
    for (; lVar9 < (longlong)uVar10; lVar9 = lVar9 + 1) {
      *(short *)(lVar3 + lVar9 * 2) = (short)(int)(*(float *)(lVar2 + lVar9 * 4) * 32767.0);
    }
  }
  else {
    lVar9 = param_2[1];
    iVar4 = (int)lVar9 + iVar11 * 4;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)lVar9 + *param_2),0,(longlong)(iVar11 * 4));
    plVar1 = *(longlong **)(param_1 + 0x250);
    lVar9 = *param_2;
    FUN_142a90410(plVar1);
    if (*(char *)((longlong)plVar1 + 0x62c) != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x570))(plVar1,lVar9,param_3 & 0xffffffff);
      uVar10 = (ulonglong)uVar5;
    }
    param_3 = uVar10 & 0xffffffff;
  }
  return param_3;
}



// FUNCTION 142a8cc20 FUN_142a8cc20 body=519 status=ok
// SIG undefined FUN_142a8cc20(void)

void FUN_142a8cc20(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  BOOL BVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  undefined4 local_28;
  undefined4 uStack_24;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  BVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x40));
  if (BVar10 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x40));
  }
  uVar13 = *(uint *)(lVar3 + 0x68);
  uVar4 = *(undefined4 *)(lVar3 + 0x6c);
  uVar5 = *(undefined4 *)(lVar3 + 0x70);
  uVar6 = *(undefined4 *)(lVar3 + 0x74);
  uVar7 = *(undefined4 *)(lVar3 + 0x78);
  fVar15 = *(float *)(lVar3 + 0x7c);
  fVar8 = *(float *)(lVar3 + 0x80);
  fVar9 = *(float *)(lVar3 + 0x84);
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x40));
  puVar1 = (undefined4 *)(param_1 + 0xa0);
  uVar11 = 0;
  uVar12 = uVar13 & 0xff;
  if (uVar12 == 1) {
    *puVar1 = 1;
  }
  else if (uVar12 == 2) {
    *puVar1 = 2;
  }
  else if (uVar12 == 3) {
    *puVar1 = 3;
  }
  else {
    *puVar1 = 0;
  }
  uVar13 = uVar13 >> 8 & 0xff;
  if (uVar13 == 1) {
    uVar14 = uVar11;
    if (0 < *(int *)(param_1 + 0xc0)) {
      do {
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
        *(undefined4 *)(uVar14 + 8 + *(longlong *)(param_1 + 0xb8)) = 1;
        uVar14 = uVar14 + 0x28;
      } while ((int)uVar13 < *(int *)(param_1 + 0xc0));
    }
  }
  else if (uVar13 == 2) {
    uVar14 = uVar11;
    if (0 < *(int *)(param_1 + 0xc0)) {
      do {
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
        *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + -0x20 + uVar14 + 0x28) = 2;
        uVar14 = uVar14 + 0x28;
      } while ((int)uVar13 < *(int *)(param_1 + 0xc0));
    }
  }
  else {
    uVar14 = uVar11;
    if (0 < *(int *)(param_1 + 0xc0)) {
      do {
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
        *(undefined4 *)(uVar14 + 8 + *(longlong *)(param_1 + 0xb8)) = 0;
        uVar14 = uVar14 + 0x28;
      } while ((int)uVar13 < *(int *)(param_1 + 0xc0));
    }
  }
  Audio::FDynamicsProcessor::SetLookaheadMsec(puVar1,uVar4);
  Audio::FDynamicsProcessor::SetAttackTime(puVar1,uVar5);
  Audio::FDynamicsProcessor::SetReleaseTime(puVar1,uVar6);
  if (fVar15 <= 1e-08) {
    fVar15 = 1e-08;
  }
  *(undefined4 *)(param_1 + 0x104) = uVar7;
  *(float *)(param_1 + 0x108) = fVar15;
  *(float *)(param_1 + 0x10c) = fVar8 * 0.5;
  fVar15 = _guard_xfg_dispatch_icall_nop(10.0,fVar9 * 0.05);
  local_28 = (float)uVar2;
  *(float *)(param_1 + 0x110) = fVar15;
  fVar15 = _guard_xfg_dispatch_icall_nop(10.0,local_28 * 0.05);
  uStack_24._0_1_ = (byte)((ulonglong)uVar2 >> 0x20);
  *(float *)(param_1 + 0x114) = fVar15;
  *(byte *)(param_1 + 0x118) = (byte)uStack_24 & 1;
  Audio::FDynamicsProcessor::SetAnalogMode
            (puVar1,CONCAT31((uint3)((ulonglong)uVar2 >> 0x29),
                             (char)(uint)((ulonglong)uVar2 >> 0x21)) & 0xffffff01);
  return;
}



// FUNCTION 142a8ce30 OnPresetChanged body=290 status=ok
// SIG undefined OnPresetChanged(void)

void FSubmixEffectReverb::OnPresetChanged(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  BOOL BVar14;
  undefined1 local_78 [8];
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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  BVar14 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x40));
  if (BVar14 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x40));
  }
  uVar2 = *(undefined4 *)(lVar1 + 0x68);
  uVar3 = *(undefined4 *)(lVar1 + 0x6c);
  uVar4 = *(undefined4 *)(lVar1 + 0x70);
  uVar5 = *(undefined4 *)(lVar1 + 0x74);
  uVar6 = *(undefined4 *)(lVar1 + 0x78);
  uVar7 = *(undefined4 *)(lVar1 + 0x7c);
  uVar8 = *(undefined4 *)(lVar1 + 0x80);
  uVar9 = *(undefined4 *)(lVar1 + 0x84);
  uVar10 = *(undefined4 *)(lVar1 + 0x88);
  uVar11 = *(undefined4 *)(lVar1 + 0x8c);
  uVar12 = *(undefined4 *)(lVar1 + 0x90);
  uVar13 = *(undefined4 *)(lVar1 + 0x94);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x40));
  FAudioReverbEffect::FAudioReverbEffect(local_78);
  local_40 = 0;
  local_70 = uVar13;
  local_6c = uVar2;
  local_68 = uVar3;
  local_64 = uVar4;
  local_60 = uVar5;
  local_5c = uVar6;
  local_58 = uVar7;
  local_54 = uVar8;
  local_50 = uVar9;
  local_4c = uVar10;
  local_48 = uVar11;
  local_44 = uVar12;
  SetEffectParameters(param_1,local_78);
  return;
}



// FUNCTION 142a8cf60 OnPresetChanged body=439 status=ok
// SIG undefined OnPresetChanged(void)

void FSubmixEffectSubmixEQ::OnPresetChanged(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void **ppvVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  BOOL BVar4;
  float *pfVar5;
  float *pfVar6;
  void *_Src_00;
  longlong lVar7;
  int iVar8;
  void *local_18;
  int local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x40);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_10 = *(int *)(lVar2 + 0x70);
  lVar7 = (longlong)local_10;
  _Src_00 = (void *)0x0;
  _Src = *(void **)(lVar2 + 0x68);
  local_18 = (void *)0x0;
  if (local_10 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    _Src_00 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar7 << 4);
  }
  iVar3 = local_10;
  LeaveCriticalSection(lpCriticalSection);
  ppvVar1 = (void **)(param_1 + 0xf0);
  if (*(int *)(param_1 + 0xf8) == iVar3) {
    iVar8 = 0;
    if (0 < iVar3) {
      pfVar5 = (float *)((longlong)_Src_00 + 4);
      pfVar6 = (float *)((longlong)*ppvVar1 + 4);
      do {
        if (((((((uint)pfVar5[2] ^ (uint)pfVar6[2]) & 1) != 0) || (1e-08 < ABS(*pfVar5 - *pfVar6)))
            || (1e-08 < ABS(pfVar5[-1] -
                            *(float *)((longlong)*ppvVar1 + (-4 - (longlong)_Src_00) +
                                      (longlong)pfVar5)))) || (1e-08 < ABS(pfVar5[1] - pfVar6[1])))
        goto LAB_142a8d072;
        iVar8 = iVar8 + 1;
        pfVar5 = pfVar5 + 4;
        pfVar6 = pfVar6 + 4;
      } while (iVar8 < iVar3);
    }
  }
  else {
LAB_142a8d072:
    if (ppvVar1 != &local_18) {
      *(int *)(param_1 + 0xf8) = iVar3;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0xfc) == 0)) {
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(ppvVar1,iVar3);
        ::_guard_xfg_dispatch_icall_nop(*ppvVar1,_Src_00,(longlong)iVar3 << 4);
      }
    }
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
    FUN_1408e22e0(param_1 + 0xb8,ppvVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 142a8d120 FUN_142a8d120 body=327 status=ok
// SIG undefined FUN_142a8d120(void)

void FUN_142a8d120(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  plVar2 = *(longlong **)(param_2 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x80);
  plVar3 = (longlong *)*param_3;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x8c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x88);
  iVar4 = *(int *)(param_1 + 0x88) + 8;
  *(int *)(param_1 + 0x88) = iVar4;
  if (*(int *)(param_1 + 0x8c) < iVar4) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  lVar10 = *plVar1;
  *(undefined8 *)(lVar10 + lVar8 * 4) = 0;
  *(undefined8 *)(lVar10 + 8 + lVar8 * 4) = 0;
  *(undefined8 *)(lVar10 + 0x10 + lVar8 * 4) = 0;
  *(undefined8 *)(lVar10 + 0x18 + lVar8 * 4) = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    iVar6 = *(int *)(param_2 + 0xc);
    do {
      iVar9 = 0;
      iVar5 = iVar6 * iVar4;
      if (0 < iVar6) {
        puVar7 = (undefined4 *)*plVar1;
        lVar10 = (longlong)iVar5 * 4 - (longlong)puVar7;
        lVar8 = *plVar2;
        do {
          iVar9 = iVar9 + 1;
          *puVar7 = *(undefined4 *)(lVar10 + lVar8 + (longlong)puVar7);
          puVar7 = puVar7 + 1;
          iVar6 = *(int *)(param_2 + 0xc);
        } while (iVar9 < iVar6);
      }
      FUN_142a8e2b0(param_1 + 0xa0,*plVar1,iVar6,*(undefined8 *)(param_1 + 0x90));
      iVar6 = *(int *)(param_2 + 0xc);
      iVar9 = 0;
      if (0 < iVar6) {
        lVar8 = *plVar3;
        lVar10 = 0;
        do {
          iVar9 = iVar9 + 1;
          *(undefined4 *)(lVar8 + (longlong)iVar5 * 4 + -4 + lVar10 + 4) =
               *(undefined4 *)(lVar10 + *(longlong *)(param_1 + 0x90));
          iVar6 = *(int *)(param_2 + 0xc);
          lVar10 = lVar10 + 4;
        } while (iVar9 < iVar6);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 8));
  }
  return;
}



// FUNCTION 142a8d270 OnProcessAudio body=457 status=ok
// SIG undefined OnProcessAudio(void)

void FSubmixEffectReverb::OnProcessAudio(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  undefined4 local_38;
  
  if ((1 < *(int *)(param_3 + 1)) && (*(char *)(param_1 + 0x968) != '\0')) {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
    }
    if (*(char *)(param_1 + 0x898) == '\0') {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
    }
    else {
      local_68 = *(undefined8 *)(param_1 + 0x89c);
      uStack_60 = *(undefined8 *)(param_1 + 0x8a4);
      local_38 = *(undefined4 *)(param_1 + 0x8cc);
      local_58 = *(undefined4 *)(param_1 + 0x8ac);
      uStack_54 = *(undefined4 *)(param_1 + 0x8b0);
      uStack_50 = *(undefined4 *)(param_1 + 0x8b4);
      uStack_4c = *(undefined4 *)(param_1 + 0x8b8);
      *(undefined1 *)(param_1 + 0x898) = 0;
      local_48 = *(undefined4 *)(param_1 + 0x8bc);
      uStack_44 = *(undefined4 *)(param_1 + 0x8c0);
      uStack_40 = *(undefined4 *)(param_1 + 0x8c4);
      uStack_3c = *(undefined4 *)(param_1 + 0x8c8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
      Audio::FPlateReverb::SetSettings(param_1 + 0x80,&local_68);
    }
    plVar2 = *(longlong **)(param_2 + 0x20);
    lVar3 = *plVar2;
    lVar4 = *(longlong *)*param_3;
    if (*(int *)(param_3 + 1) == 2) {
      iVar6 = 0;
      iVar7 = 2;
      if (0 < (int)plVar2[1]) {
        do {
          FUN_142a8f600(param_1 + 0x80,lVar3 + (longlong)iVar6 * 4,*(undefined4 *)(param_2 + 0xc),
                        lVar4 + (longlong)iVar6 * 4,iVar7);
          iVar7 = *(int *)(param_3 + 1);
          iVar6 = iVar6 + iVar7;
        } while (iVar6 < *(int *)(*(longlong *)(param_2 + 0x20) + 8));
      }
    }
    else if (5 < *(int *)(param_3 + 1)) {
      iVar7 = 0;
      iVar6 = 0;
      if (0 < (int)plVar2[1]) {
        do {
          lVar8 = (longlong)iVar6;
          puVar1 = (undefined4 *)(lVar4 + lVar8 * 4);
          FUN_142a8f600(param_1 + 0x80,lVar3 + (longlong)iVar7 * 4,*(undefined4 *)(param_2 + 0xc),
                        puVar1,*(undefined4 *)(param_2 + 0xc));
          *(undefined4 *)(lVar4 + 0x14 + lVar8 * 4) = *puVar1;
          *(undefined4 *)(lVar4 + 0x10 + lVar8 * 4) = *(undefined4 *)(lVar4 + 4 + lVar8 * 4);
          iVar7 = iVar7 + *(int *)(param_2 + 0xc);
          iVar6 = iVar6 + *(int *)(param_3 + 1);
        } while (iVar7 < *(int *)(*(longlong *)(param_2 + 0x20) + 8));
      }
    }
  }
  return;
}



// FUNCTION 142a8d440 FUN_142a8d440 body=497 status=ok
// SIG undefined FUN_142a8d440(void)

void FUN_142a8d440(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int local_res8;
  
  FSubmixEffectSubmixEQ::UpdateParameters(param_1,*(undefined4 *)(param_2 + 0xc));
  plVar2 = *(longlong **)(param_2 + 0x20);
  plVar3 = (longlong *)*param_3;
  if ((*(char *)(param_1 + 0xa8) == '\0') || (*(int *)(param_1 + 0x108) < 1)) {
    iVar10 = 0;
    if (0 < (int)plVar2[1]) {
      lVar5 = *plVar3;
      lVar7 = 0;
      do {
        iVar10 = iVar10 + 1;
        *(undefined4 *)(lVar7 + lVar5) = *(undefined4 *)(lVar7 + *plVar2);
        lVar7 = lVar7 + 4;
      } while (iVar10 < (int)plVar2[1]);
    }
  }
  else {
    lVar5 = (longlong)(*(int *)(param_2 + 0xc) / 2);
    if (0 < lVar5) {
      lVar7 = 0;
      local_res8 = 0;
      do {
        iVar10 = 0;
        lVar4 = *(longlong *)(param_1 + 0x80);
        if (0 < *(int *)(param_2 + 8)) {
          do {
            lVar6 = 0;
            lVar9 = (longlong)(iVar10 * *(int *)(param_2 + 0xc) + local_res8);
            *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*plVar2 + lVar9 * 4);
            *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*plVar2 + 4 + lVar9 * 4);
            uVar1 = *(uint *)(lVar4 + 0x10 + lVar7);
            if (0 < (int)uVar1) {
              uVar8 = (ulonglong)uVar1;
              do {
                Audio::FBiquadFilter::ProcessAudioFrame
                          (*(longlong *)(lVar4 + 8 + lVar7) + lVar6,param_1 + 0x90,param_1 + 0x98);
                lVar6 = lVar6 + 0x30;
                *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x98);
                *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x9c);
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            iVar10 = iVar10 + 1;
            lVar6 = *plVar3;
            *(undefined4 *)(lVar6 + lVar9 * 4) = *(undefined4 *)(param_1 + 0x98);
            *(undefined4 *)(lVar6 + 4 + lVar9 * 4) = *(undefined4 *)(param_1 + 0x9c);
          } while (iVar10 < *(int *)(param_2 + 8));
        }
        local_res8 = local_res8 + 2;
        lVar7 = lVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 142a8d640 FUN_142a8d640 body=579 status=ok
// SIG undefined FUN_142a8d640(void)

undefined8 FUN_142a8d640(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0x188) =
       ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(param_1 + 0x178);
  Audio::FMixerDevice::PumpCommandQueue(param_1 + -0x718);
  uVar9 = 0;
  lVar3 = param_1 + 0x298;
  LOCK();
  bVar13 = *(int *)(param_1 + 0x3e0) == 0;
  if (bVar13) {
    *(int *)(param_1 + 0x3e0) = 0;
  }
  UNLOCK();
  if (!bVar13) {
    LOCK();
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    UNLOCK();
    Audio::FMixerSourceManager::PumpCommandQueue(lVar3);
  }
  FUN_142a97fb0(lVar3,0);
  FUN_142a84210(lVar3,0);
  FUN_142a80050(lVar3);
  FUN_142a84210(lVar3,1);
  FUN_142a96bb0(lVar3);
  if ((*(byte *)(param_1 + 0x3dc) & 2) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x58))();
  }
  uVar10 = uVar9;
  uVar12 = uVar9;
  if (0 < *(int *)(param_1 + 0x3cc)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x308);
      bVar5 = *(byte *)(uVar12 + 0x479 + lVar3);
      if ((bVar5 & 0x18) == 0x10) {
        *(byte *)(uVar12 + 0x479 + lVar3) = bVar5 | 8;
        (**(code **)(**(longlong **)(uVar12 + 0x10 + lVar3) + 0x10))();
      }
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
      uVar12 = uVar12 + 0x4b0;
    } while ((int)uVar11 < *(int *)(param_1 + 0x3cc));
  }
  plVar7 = (longlong *)(*(undefined8 **)(param_1 + 0x10))[1];
  uVar8 = **(undefined8 **)(param_1 + 0x10);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  FUN_142a8e720(uVar8,0,param_2);
  uVar10 = uVar9;
  if (0 < *(int *)(param_1 + 0x3cc)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x308);
      bVar5 = *(byte *)(uVar9 + 0x479 + lVar3);
      if ((bVar5 & 8) == 0) {
        bVar6 = *(byte *)(uVar9 + 0x478 + lVar3);
        if (((bVar6 & 0x20) != 0) && (*(float *)(uVar9 + 0xf0 + lVar3) == 0.0)) {
          *(byte *)(uVar9 + 0x478 + lVar3) = bVar6 & 0xdf;
          *(byte *)(uVar9 + 0x479 + lVar3) = bVar5 | 8;
          (**(code **)(**(longlong **)(uVar9 + 0x10 + lVar3) + 0x10))();
        }
      }
      uVar11 = (int)uVar10 + 1;
      uVar9 = uVar9 + 0x4b0;
      uVar10 = (ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0x3cc));
  }
  if (*(char *)(param_1 + 0x408) != '\0') {
    FUN_142a94340(param_1 + -0x718,param_2);
  }
  *(double *)(param_1 + 0x170) = *(double *)(param_1 + 0x168) + *(double *)(param_1 + 0x170);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return 1;
}



// FUNCTION 142a8d890 FUN_142a8d890 body=27 status=ok
// SIG undefined FUN_142a8d890(void)

void FUN_142a8d890(undefined8 param_1)

{
  FUN_142a824c0();
  FUN_142393b20(param_1);
  return;
}



// FUNCTION 142a8d8b0 FUN_142a8d8b0 body=120 status=ok
// SIG undefined FUN_142a8d8b0(void)

void FUN_142a8d8b0(longlong param_1,float param_2)

{
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1c4)) {
    TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(param_1 + 0x1b8,0);
  }
  if (*(int *)(param_1 + 0x1c4) <
      (int)((float)*(int *)(*(longlong *)(param_1 + 0x80) + 0x14) * param_2)) {
    TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(param_1 + 0x1b8);
  }
  *(byte *)(param_1 + 0x1c8) = *(byte *)(param_1 + 0x1c8) | 1;
  return;
}



// FUNCTION 142a8d930 OnStopRecordingOutput body=142 status=ok
// SIG undefined OnStopRecordingOutput(void)

longlong Audio::FMixerSubmix::OnStopRecordingOutput(longlong param_1,float *param_2,float *param_3)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  }
  *(byte *)(param_1 + 0x1c8) = *(byte *)(param_1 + 0x1c8) & 0xfe;
  *param_2 = (float)*(int *)(param_1 + 0x11c);
  *param_3 = (float)*(int *)(*(longlong *)(param_1 + 0x80) + 0x14);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  return param_1 + 0x1b8;
}



// FUNCTION 142a8d9c0 FUN_142a8d9c0 body=81 status=ok
// SIG undefined FUN_142a8d9c0(void)

void FUN_142a8d9c0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_142394230();
  if ((*(longlong *)(param_1 + 0x118) == 0) || ((*(byte *)(param_1 + 0x2d0) & 2) != 0)) {
    FUN_142a95090(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0x620);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x620) = 0;
  }
  return;
}



// FUNCTION 142a8da20 FUN_142a8da20 body=176 status=ok
// SIG undefined FUN_142a8da20(void)

void FUN_142a8da20(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0xa8);
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = *puVar3;
      *(ushort *)(puVar3 + 0x1a) = *(ushort *)(puVar3 + 0x1a) & 0xfffb | 2;
      uVar1 = *(undefined4 *)((longlong)puVar3 + 0xcc);
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        local_68 = (undefined4)uVar2;
        uStack_64 = (undefined4)((ulonglong)uVar2 >> 0x20);
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = local_68;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_64;
        *(undefined4 *)(puVar3 + 2) = uVar1;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_5c;
      }
      local_58[0] = &LAB_142a7fca0;
      Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar2,local_58);
    }
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 8;
  }
  return;
}



// FUNCTION 142a8dad0 FUN_142a8dad0 body=263 status=ok
// SIG undefined FUN_142a8dad0(void)

void FUN_142a8dad0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0xa8);
    if ((puVar4 != (undefined8 *)0x0) && (*(char *)(param_1 + 0x1c0) == '\x02')) {
      plVar3 = (longlong *)*puVar4;
      *(ushort *)(puVar4 + 0x1a) = *(ushort *)(puVar4 + 0x1a) & 0xfffd | 5;
      uVar2 = *(undefined4 *)((longlong)puVar4 + 0xcc);
      local_28 = 0;
      local_18 = 0;
      uVar1 = *(undefined8 *)(*plVar3 + 0x898);
      puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar4 != (undefined8 *)0x0) {
        local_78 = SUB84(plVar3,0);
        uStack_74 = (undefined4)((ulonglong)plVar3 >> 0x20);
        *(undefined4 *)(puVar4 + 1) = local_78;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_74;
        *(undefined4 *)(puVar4 + 2) = uVar2;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_6c;
        *puVar4 = &PTR_FUN_143f4d0b0;
        puVar4[3] = uVar1;
      }
      local_58[0] = &LAB_142a7fb30;
      Audio::FMixerSourceManager::AudioMixerThreadCommand(plVar3,local_58);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    UNLOCK();
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7;
    LOCK();
    *(undefined4 *)(param_1 + 0x74) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 142a8dbe0 FUN_142a8dbe0 body=624 status=ok
// SIG undefined FUN_142a8dbe0(void)

undefined8
FUN_142a8dbe0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  
  *(undefined1 *)(param_1 + 0x67) = param_5;
  puVar12 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x60) = param_4;
  *(undefined1 *)(param_1 + 0x68) = 0;
  while (lVar4 = **(longlong **)(param_1 + 0x38), lVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x38) = lVar4;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    if ((undefined8 *)(lVar4 + 8) != &local_38) {
      *(undefined8 *)(lVar4 + 8) = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x10,&plStack_30);
      plVar6 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
    }
    if (lVar5 != 0) {
      plVar6 = *(longlong **)(lVar5 + 0x10);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      FMemory::operator_delete(lVar5,0x18);
    }
  }
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xc) * 0x2000;
  puVar13 = puVar12;
  do {
    puVar9 = (undefined8 *)operator_new(0x20);
    puVar10 = puVar12;
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar10 = puVar9;
    }
    local_48 = puVar10;
    puVar9 = (undefined8 *)operator_new(0x18);
    local_40 = puVar12;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 1;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
      *puVar9 = &PTR_FUN_144f96db8;
      puVar9[2] = puVar10;
      local_40 = puVar9;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_48,puVar10,puVar10);
    iVar8 = *(int *)(param_1 + 0x28);
    iVar7 = iVar8 + 1;
    *(int *)(param_1 + 0x28) = iVar7;
    if (*(int *)(param_1 + 0x2c) < iVar7) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x20);
    }
    puVar10 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x20));
    *puVar10 = local_48;
    puVar10[1] = local_40;
    local_40 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    plVar6 = *(longlong **)((longlong)puVar13 + *(longlong *)(param_1 + 0x20));
    lVar4 = plVar6[1];
    iVar8 = (int)lVar4 + iVar11;
    *(int *)(plVar6 + 1) = iVar8;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar8) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar6 + (longlong)(int)lVar4 * 4),0,(longlong)iVar11 << 2);
    *(int *)(*(longlong *)((longlong)puVar13 + *(longlong *)(param_1 + 0x20)) + 0x10) = iVar11;
    puVar3 = (uint *)(*(longlong *)((longlong)puVar13 + *(longlong *)(param_1 + 0x20)) + 0x18);
    *puVar3 = *puVar3 | 1;
    lVar4 = *(longlong *)(param_1 + 0x20);
    plVar6 = (longlong *)((longlong)puVar13 + lVar4);
    puVar13 = puVar13 + 2;
    *(undefined4 *)(*plVar6 + 0x14) = 0;
  } while ((longlong)puVar13 < 0x30);
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 142a8de50 FUN_142a8de50 body=577 status=ok
// SIG undefined FUN_142a8de50(void)

undefined8 FUN_142a8de50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  longlong *local_38;
  longlong *local_30 [3];
  
  if ((int)param_2[0x19] == 1) {
    return 0;
  }
  *(uint *)(param_1 + 0x1e8) = *(uint *)(param_1 + 0x1e8) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  fVar3 = *(float *)(param_2 + 0x14);
  lVar6 = FUN_142a85fe0(*(undefined8 *)(param_1 + 8),*param_2,0.0 < fVar3);
  *(longlong *)(param_1 + 0x90) = lVar6;
  if (lVar6 == 0) {
    return 0;
  }
  *(longlong *)(param_1 + 0x18) = lVar6;
  *(longlong **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x30) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x34) = 0x7f7fffff;
  plVar10 = (longlong *)0x0;
  LOCK();
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  UNLOCK();
  if (0.0 < *(float *)(*param_2 + 0x50)) {
    if ((*(byte *)(*param_2 + 0xb3) & 0x10) == 0) {
      fVar11 = (float)USoundWave::GetSampleRateForCurrentPlatform();
    }
    else {
      cVar5 = USoundBase::IsLooping();
      if (cVar5 != '\0') goto LAB_142a8df24;
      fVar11 = (float)*(int *)(*(longlong *)(param_1 + 8) + 0x14);
    }
    *(int *)(param_1 + 0x68) = (int)(fVar11 * *(float *)(*param_2 + 0x50));
  }
LAB_142a8df24:
  plVar7 = (longlong *)operator_new(0x70);
  plVar9 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      plVar9 = plVar8;
    }
    plVar7[7] = (longlong)plVar9;
    plVar7[6] = (longlong)plVar9;
    *(undefined4 *)(plVar7 + 8) = 0;
    plVar7[9] = 0;
    plVar7[10] = 0;
    plVar7[0xb] = 0;
    plVar7[0xc] = 0;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    plVar9 = plVar7;
  }
  local_38 = plVar9;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1454d52a0;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)plVar9;
    plVar10 = plVar7;
  }
  local_30[0] = plVar10;
  SharedPointerInternals::EnableSharedFromThis(&local_38,plVar9,plVar9);
  pplVar2 = (longlong **)(param_1 + 0x98);
  if (pplVar2 != &local_38) {
    *pplVar2 = local_38;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa0,local_30);
  }
  plVar10 = local_30[0];
  if (local_30[0] != (longlong *)0x0) {
    LOCK();
    plVar9 = local_30[0] + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30[0])(local_30[0]);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  cVar5 = FUN_142a8dbe0(*pplVar2,*(undefined8 *)(param_1 + 0x90),*param_2,
                        *(undefined4 *)((longlong)param_2 + 0x9c),0.0 < fVar3);
  if (cVar5 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 142a8e2b0 FUN_142a8e2b0 body=960 status=ok
// SIG undefined FUN_142a8e2b0(void)

void FUN_142a8e2b0(longlong param_1,longlong param_2,float param_3,longlong param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res18 [2];
  longlong local_res20;
  
  uVar8 = 0;
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  lVar11 = (longlong)(int)param_3;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (0x7fffffff < *(uint *)(param_1 + 0x44)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  fVar20 = 0.0;
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (0 < (int)param_3) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x18);
      fVar12 = ABS(*(float *)(param_2 + uVar9 * 4) * *(float *)(param_1 + 0x70));
      if (*(int *)(uVar10 + 8 + lVar5) != 2) {
        fVar12 = fVar12 * fVar12;
      }
      fVar14 = *(float *)(uVar10 + 0x20 + lVar5);
      if (fVar12 <= fVar14) {
        fVar15 = *(float *)(uVar10 + 0x1c + lVar5);
      }
      else {
        fVar15 = *(float *)(uVar10 + 0x14 + lVar5);
      }
      fVar12 = (fVar14 - fVar12) * fVar15 + fVar12;
      if ((fVar12 <= -1.1754944e-38) || (1.1754944e-38 <= fVar12)) {
        if (0.0 <= fVar12) {
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
        }
        else {
          fVar12 = 0.0;
        }
      }
      else {
        fVar12 = 0.0;
      }
      *(float *)(uVar10 + 0x20 + lVar5) = fVar12;
      iVar2 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar2 + 1;
      if (*(int *)(param_1 + 0x44) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar2);
      }
      uVar9 = uVar9 + 1;
      *(float *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 4) = fVar12;
      uVar10 = uVar10 + 0x28;
      param_3 = local_res18[0];
    } while ((longlong)uVar9 < lVar11);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(int *)(param_1 + 0x54) < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar9 = uVar8;
    if (0 < lVar11) {
      do {
        fVar20 = *(float *)(*(longlong *)(param_1 + 0x38) + uVar9 * 4);
        if (fVar20 <= 1e-08) {
          fVar20 = 1e-08;
        }
        _guard_xfg_dispatch_icall_nop(fVar20);
        uVar13 = Audio::FDynamicsProcessor::ComputeGain(param_1);
        iVar2 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar2 + 1;
        if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar2);
        }
        uVar9 = uVar9 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 4) = uVar13;
      } while ((longlong)uVar9 < lVar11);
    }
  }
  else {
    if ((0 < (int)param_3) && (7 < (uint)param_3)) {
      fVar20 = 0.0;
      fVar12 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      uVar4 = (uint)param_3 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      uVar9 = uVar8;
      uVar10 = uVar8;
      do {
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x38) + uVar9 * 4);
        uVar7 = (int)uVar10 + 8;
        uVar10 = (ulonglong)uVar7;
        fVar20 = fVar20 + *pfVar1;
        fVar12 = fVar12 + pfVar1[1];
        fVar14 = fVar14 + pfVar1[2];
        fVar15 = fVar15 + pfVar1[3];
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x38) + 0x10 + uVar9 * 4);
        uVar9 = uVar9 + 8;
        fVar16 = fVar16 + *pfVar1;
        fVar17 = fVar17 + pfVar1[1];
        fVar18 = fVar18 + pfVar1[2];
        fVar19 = fVar19 + pfVar1[3];
      } while ((longlong)uVar9 < (longlong)(int)((int)param_3 - uVar4));
      fVar20 = fVar14 + fVar18 + fVar20 + fVar16 + fVar15 + fVar19 + fVar12 + fVar17;
    }
    lVar5 = (longlong)(int)uVar7;
    if (lVar5 < lVar11) {
      if (3 < lVar11 - lVar5) {
        lVar3 = *(longlong *)(param_1 + 0x38);
        do {
          fVar20 = fVar20 + *(float *)(lVar3 + lVar5 * 4) + *(float *)(lVar3 + 4 + lVar5 * 4) +
                   *(float *)(lVar3 + 8 + lVar5 * 4) + *(float *)(lVar3 + 0xc + lVar5 * 4);
          lVar5 = lVar5 + 4;
        } while (lVar5 < lVar11 + -3);
      }
      if (lVar5 < lVar11) {
        do {
          fVar20 = fVar20 + *(float *)(*(longlong *)(param_1 + 0x38) + lVar5 * 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar11);
      }
    }
    fVar20 = fVar20 / (float)(int)param_3;
    if (fVar20 <= 1e-08) {
      fVar20 = 1e-08;
    }
    _guard_xfg_dispatch_icall_nop(fVar20);
    uVar13 = Audio::FDynamicsProcessor::ComputeGain(param_1);
    if ((int)param_3 < 1) {
      return;
    }
    uVar9 = (ulonglong)(uint)param_3;
    do {
      iVar2 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar2 + 1;
      if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar2);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 4) = uVar13;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar11 = local_res20;
  if (0 < (int)local_res18[0]) {
    uVar10 = (ulonglong)(uint)local_res18[0];
    uVar9 = uVar8;
    do {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 8) + uVar9);
      local_res18[0] = 0.0;
      (**(code **)(*plVar6 + 8))(plVar6,param_2,local_res18);
      uVar8 = uVar8 + 4;
      param_2 = param_2 + 4;
      uVar9 = uVar9 + 0x40;
      *(float *)(lVar11 + -4 + uVar8) =
           local_res18[0] * *(float *)(*(longlong *)(param_1 + 0x48) + -4 + uVar8) *
           *(float *)(param_1 + 0x74);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 142a8e670 ProcessAudio body=44 status=ok
// SIG undefined ProcessAudio(void)

int Audio::FEnvelopeFollower::ProcessAudio(undefined4 param_1,short param_2)

{
  float fVar1;
  
  fVar1 = (float)ProcessAudio(param_1,(float)(int)param_2 * 3.051851e-05);
  return (int)(fVar1 * 32767.0);
}



// FUNCTION 142a8e6a0 ProcessAudio body=117 status=ok
// SIG undefined ProcessAudio(void)

float Audio::FEnvelopeFollower::ProcessAudio(longlong param_1,float param_2)

{
  float fVar1;
  
  param_2 = ABS(param_2);
  if (*(int *)(param_1 + 8) != 2) {
    param_2 = param_2 * param_2;
  }
  if (param_2 <= *(float *)(param_1 + 0x20)) {
    fVar1 = *(float *)(param_1 + 0x1c);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x14);
  }
  param_2 = (*(float *)(param_1 + 0x20) - param_2) * fVar1 + param_2;
  if ((param_2 <= -1.1754944e-38) || (1.1754944e-38 <= param_2)) {
    if (param_2 < 0.0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 0.0;
    }
    if (1.0 <= param_2) {
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      return 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x20) = param_2;
  return param_2;
}



// FUNCTION 142a8e720 FUN_142a8e720 body=2685 status=ok
// SIG undefined FUN_142a8e720(void)

void FUN_142a8e720(longlong param_1,char param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  float *pfVar3;
  float fVar4;
  char cVar5;
  float *_Dst;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  BOOL BVar16;
  byte bVar17;
  longlong *plVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  uint *puVar25;
  uint *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  int local_1d8;
  uint uStack_1d4;
  uint uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  uint uStack_1b4;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  uint uStack_194;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_170;
  uint *puStack_168;
  uint uStack_160;
  uint uStack_15c;
  undefined8 uStack_158;
  int local_150;
  uint local_140;
  uint uStack_13c;
  uint local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  int local_108;
  int local_104;
  int local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  uint local_c4;
  undefined4 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *puStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  
  Audio::FMixerSubmix::PumpCommandQueue();
  if (*(char *)(param_1 + 0x118) == '\0') {
    iVar20 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x8d0);
    *(int *)(param_1 + 0x11c) = iVar20;
    iVar20 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) * iVar20;
    *(int *)(param_1 + 0x120) = iVar20;
  }
  else {
    iVar20 = *(int *)(param_1 + 0x120);
  }
  plVar18 = (longlong *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) < iVar20) {
    TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar18);
  }
  iVar20 = *(int *)(param_1 + 0x120);
  iVar14 = *(int *)(param_1 + 0xf0);
  iVar13 = iVar14 + iVar20;
  *(int *)(param_1 + 0xf0) = iVar13;
  if (*(int *)(param_1 + 0xf4) < iVar13) {
    TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(plVar18);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar18 + (longlong)iVar14 * 4),0,(longlong)iVar20 << 2);
  _Dst = (float *)*plVar18;
  local_130 = (longlong *)(param_1 + 0x20);
  uVar15 = *(uint *)(param_1 + 0x48);
  puStack_168 = (uint *)(param_1 + 0x30);
  local_1d8 = 0;
  uStack_1d4 = 1;
  uStack_1c4 = 0;
  iStack_1c0 = 0;
  if (uVar15 != 0) {
    puVar25 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar25 = puStack_168;
    }
    uVar21 = *puVar25;
    iStack_1c0 = 0;
    local_1d8 = 0;
    while (uVar21 == 0) {
      lVar22 = (longlong)local_1d8;
      iStack_1c0 = iStack_1c0 + 0x20;
      iVar20 = local_1d8 + 1;
      bVar8 = (int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1d8;
      local_1d8 = iVar20;
      if (bVar8) goto LAB_142a8e8a8;
      uVar21 = puVar25[lVar22 + 1];
    }
    uStack_1d4 = -uVar21 & uVar21;
    iVar20 = 0x1f;
    if (uStack_1d4 != 0) {
      for (; uStack_1d4 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uStack_1d4 == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - iVar20;
    }
    uStack_1c4 = (iStack_1c0 - iVar20) + 0x1f;
    if ((int)uVar15 < (int)uStack_1c4) {
LAB_142a8e8a8:
      uStack_1c4 = uVar15;
    }
  }
  uStack_1a4 = *(uint *)(param_1 + 0x48);
  uStack_f0 = CONCAT44(uStack_1d4,local_1d8);
  uStack_e0 = 0xffffffff;
  uStack_dc = uStack_1c4;
  local_d8 = CONCAT44(uStack_1bc,iStack_1c0);
  bVar17 = (byte)uStack_1a4 & 0x1f;
  uStack_1b4 = 1 << bVar17;
  local_1b8 = (int)uStack_1a4 >> 5;
  local_1a8 = -1 << bVar17;
  uStack_1a0 = uStack_1a4 & 0xffffffe0;
  if (uStack_1a4 != uVar15) {
    puVar25 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar25 = puStack_168;
    }
    uVar21 = puVar25[local_1b8] & local_1a8;
    while (uVar21 == 0) {
      lVar22 = (longlong)local_1b8;
      uStack_1a0 = uStack_1a0 + 0x20;
      iVar20 = local_1b8 + 1;
      bVar8 = (int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1b8;
      local_1b8 = iVar20;
      if (bVar8) goto LAB_142a8e9a5;
      uVar21 = puVar25[lVar22 + 1];
      local_1a8 = 0xffffffff;
    }
    uStack_1b4 = -uVar21 & uVar21;
    local_108 = 0x1f;
    if (uStack_1b4 != 0) {
      for (; uStack_1b4 >> local_108 == 0; local_108 = local_108 + -1) {
      }
    }
    if (uStack_1b4 == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - local_108;
    }
    uStack_1a4 = (uStack_1a0 - iVar20) + 0x1f;
    if ((int)uVar15 < (int)uStack_1a4) {
LAB_142a8e9a5:
      uStack_1a4 = uVar15;
    }
  }
  uStack_170 = CONCAT44(uStack_1b4,local_1b8);
  uStack_118 = local_1a8;
  uStack_114 = uStack_1a4;
  uStack_158 = CONCAT44(uStack_19c,uStack_1a0);
  uStack_128 = CONCAT44(uStack_1b4,local_1b8);
  puStack_120 = puStack_168;
  uStack_110 = uStack_158;
  local_f8 = local_130;
  local_e8 = puStack_168;
  uStack_160 = uStack_118;
  uStack_15c = uStack_114;
  while (((lVar22 = (longlong)(int)uStack_dc, uStack_dc != uStack_114 || (local_e8 != puStack_120))
         || (local_f8 != local_130))) {
    lVar28 = *local_f8;
    plVar18 = *(longlong **)(lVar28 + 0x10 + lVar22 * 0x28);
    uVar6 = *(undefined8 *)(lVar28 + 8 + lVar22 * 0x28);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    cVar5 = *(char *)(lVar28 + 0x18 + lVar22 * 0x28);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0x120)) {
      TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar2);
    }
    iVar20 = *(int *)(param_1 + 0x120);
    iVar14 = *(int *)(param_1 + 0xe0);
    iVar13 = iVar20 + iVar14;
    *(int *)(param_1 + 0xe0) = iVar13;
    if (*(int *)(param_1 + 0xe4) < iVar13) {
      TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(plVar2);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + (longlong)iVar14 * 4),0,(longlong)iVar20 << 2);
    FUN_142a8e720(uVar6,*(undefined1 *)(param_1 + 0x118),plVar2);
    lVar22 = *plVar2;
    if ((cVar5 == '\0') && (0 < *(int *)(param_1 + 0x120))) {
      uVar23 = (ulonglong)((*(int *)(param_1 + 0x120) - 1U >> 2) + 1);
      pfVar19 = _Dst;
      do {
        pfVar3 = (float *)((lVar22 - (longlong)_Dst) + (longlong)pfVar19);
        fVar4 = pfVar3[1];
        fVar9 = pfVar3[2];
        fVar10 = pfVar3[3];
        *pfVar19 = *pfVar3 + *pfVar19;
        pfVar19[1] = fVar4 + pfVar19[1];
        pfVar19[2] = fVar9 + pfVar19[2];
        pfVar19[3] = fVar10 + pfVar19[3];
        pfVar19 = pfVar19 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar18 + 1;
      lVar22 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
      LOCK();
      plVar2 = plVar18 + 1;
      lVar22 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    uStack_e0 = uStack_e0 & ~uStack_f0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
  }
  uStack_194 = 1;
  uVar15 = *(uint *)(param_1 + 0xb0);
  puVar25 = (uint *)(param_1 + 0x98);
  local_198 = 0;
  uStack_184 = 0;
  iStack_180 = 0;
  if (uVar15 != 0) {
    puVar26 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar26 = puVar25;
    }
    uVar21 = *puVar26;
    iVar20 = local_198;
    while (uVar21 == 0) {
      iStack_180 = iStack_180 + 0x20;
      local_198 = iVar20 + 1;
      uStack_184 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar20)
      goto LAB_142a8ec3e;
      uVar21 = puVar26[(longlong)iVar20 + 1];
      iVar20 = local_198;
    }
    uStack_194 = -uVar21 & uVar21;
    local_104 = 0x1f;
    if (uStack_194 != 0) {
      for (; uStack_194 >> local_104 == 0; local_104 = local_104 + -1) {
      }
    }
    if (uStack_194 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - local_104;
    }
    uStack_184 = (iStack_180 - iVar14) + 0x1f;
    local_198 = iVar20;
    if ((int)uVar15 < (int)uStack_184) {
      uStack_184 = uVar15;
    }
  }
LAB_142a8ec3e:
  uStack_13c = *(uint *)(param_1 + 0xb0);
  uStack_88 = CONCAT44(uStack_194,local_198);
  uStack_160 = 0xffffffff;
  uStack_15c = uStack_184;
  uStack_158 = CONCAT44(uStack_17c,iStack_180);
  local_150 = (int)uStack_13c >> 5;
  local_140 = -1 << ((byte)uStack_13c & 0x1f);
  local_138 = uStack_13c & 0xffffffe0;
  uStack_170._0_4_ = local_198;
  uStack_170._4_4_ = uStack_194;
  if (uStack_13c != uVar15) {
    puVar26 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar26 = puVar25;
    }
    uVar21 = puVar26[local_150] & local_140;
    while (uVar21 == 0) {
      lVar22 = (longlong)local_150;
      local_138 = local_138 + 0x20;
      iVar20 = local_150 + 1;
      bVar8 = (int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_150;
      local_150 = iVar20;
      if (bVar8) goto LAB_142a8ed2d;
      uVar21 = puVar26[lVar22 + 1];
      local_140 = 0xffffffff;
    }
    uVar21 = -uVar21 & uVar21;
    local_100 = 0x1f;
    if (uVar21 != 0) {
      for (; uVar21 >> local_100 == 0; local_100 = local_100 + -1) {
      }
    }
    if (uVar21 == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - local_100;
    }
    uStack_13c = (local_138 - iVar20) + 0x1f;
    if ((int)uVar15 < (int)uStack_13c) {
LAB_142a8ed2d:
      uStack_13c = uVar15;
    }
  }
  uVar15 = uStack_13c;
  puStack_168 = puVar25;
  local_90 = (longlong *)(param_1 + 0x88);
  puStack_80 = puVar25;
  uStack_70 = uStack_158;
  uStack_78 = uStack_160;
  uStack_74 = uStack_15c;
  while ((uStack_15c != uVar15 || (puStack_168 != puVar25))) {
    plVar18 = (longlong *)((longlong)(int)uStack_15c * 0x60 + *(longlong *)(param_1 + 0x88));
    fVar4 = *(float *)(plVar18 + 2);
    plVar18 = (longlong *)*plVar18;
    if (0.0 < fVar4) {
      lVar22 = (longlong)*(int *)((longlong)plVar18 + 0xcc) * 0x4b0 + *(longlong *)(*plVar18 + 0x70)
      ;
      if ((((*(byte *)(lVar22 + 0x478) & 0x10) == 0) && ((*(byte *)(lVar22 + 0x479) & 8) == 0)) &&
         ((*(byte *)(lVar22 + 0x478) & 8) != 0)) {
        pfVar19 = *(float **)(param_1 + 0xe8);
        if (0 < *(int *)(param_1 + 0xf0)) {
          lVar22 = *(longlong *)(lVar22 + ((ulonglong)*(byte *)(param_1 + 0x118) + 0x17) * 0x28) -
                   (longlong)pfVar19;
          uVar23 = (ulonglong)((*(int *)(param_1 + 0xf0) - 1U >> 2) + 1);
          do {
            pfVar3 = (float *)(lVar22 + (longlong)pfVar19);
            fVar9 = pfVar3[1];
            fVar10 = pfVar3[2];
            fVar11 = pfVar3[3];
            *pfVar19 = *pfVar3 * fVar4 + *pfVar19;
            pfVar19[1] = fVar9 * fVar4 + pfVar19[1];
            pfVar19[2] = fVar10 * fVar4 + pfVar19[2];
            pfVar19[3] = fVar11 * fVar4 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
    }
    uStack_160 = uStack_160 & ~uStack_170._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_170);
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    local_d0 = 0;
    local_b0 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0xc0))();
    local_c4 = *(uint *)(param_1 + 0x11c);
    plVar18 = (longlong *)(param_1 + 0xd8);
    lVar22 = *(longlong *)(param_1 + 0x80);
    lVar28 = *(longlong *)(param_1 + 0x70);
    local_c8 = *(int *)(param_1 + 0x120) / (int)local_c4;
    local_c0 = *(undefined4 *)(lVar22 + 0x8d0);
    local_b8 = lVar22 + 0xa10;
    local_a8 = *(undefined8 *)(lVar22 + 0x360);
    lVar22 = lVar28 + (longlong)*(int *)(param_1 + 0x78) * 0x18;
    local_98 = local_c4;
    local_a0 = plVar18;
    for (; lVar28 != lVar22; lVar28 = lVar28 + 0x18) {
      plVar2 = *(longlong **)(lVar28 + 0x10);
      plVar7 = *(longlong **)(lVar28 + 8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0x120)) {
        TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar18);
      }
      iVar20 = *(int *)(param_1 + 0x120);
      iVar14 = *(int *)(param_1 + 0xe0);
      iVar13 = iVar20 + iVar14;
      *(int *)(param_1 + 0xe0) = iVar13;
      if (*(int *)(param_1 + 0xe4) < iVar13) {
        TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(plVar18);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar18 + (longlong)iVar14 * 4),0,(longlong)iVar20 << 2);
      uVar15 = (**(code **)(*plVar7 + 0x20))(plVar7);
      if ((uVar15 < *(uint *)(param_1 + 0x11c)) && (uVar15 == 2)) {
        FUN_142a83d50(param_1,1,param_1 + 0xe8,param_1 + 0xf8);
        local_c4 = 2;
        local_b0 = param_1 + 0xf8;
      }
      else {
        local_b0 = param_1 + 0xe8;
        local_c4 = *(uint *)(param_1 + 0x11c);
      }
      FSoundEffectSubmix::ProcessAudio(plVar7,&local_d0,&local_a0);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)*plVar18,(longlong)*(int *)(param_1 + 0x120) << 2);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar2 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  uVar23 = 0;
  BVar16 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  if (BVar16 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  }
  if ((*(byte *)(param_1 + 0x1c8) & 1) != 0) {
    iVar20 = *(int *)(param_1 + 0x120);
    iVar14 = *(int *)(param_1 + 0x1c0);
    iVar13 = iVar20 + iVar14;
    *(int *)(param_1 + 0x1c0) = iVar13;
    if (*(int *)(param_1 + 0x1c4) < iVar13) {
      TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_1 + 0x1b8,iVar14);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar14 * 4),_Dst,
               (longlong)iVar20 << 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  if ((*(char *)(param_1 + 0x118) == param_2) && (*(int *)(param_1 + 0x13c) == -1)) {
    _guard_xfg_dispatch_icall_nop
              ((void *)*param_3,*(void **)(param_1 + 0xe8),(longlong)*(int *)(param_1 + 0x120) << 2)
    ;
  }
  else {
    FUN_142a83d50(param_1,param_2,(undefined8 *)(param_1 + 0xe8),param_3);
  }
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0xc0))();
  iVar20 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x14);
  BVar16 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  if (BVar16 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  }
  puVar24 = *(undefined8 **)(param_1 + 0x180);
  uVar27 = (longlong)*(int *)(param_1 + 0x188) & 0x1fffffffffffffff;
  if (puVar24 + *(int *)(param_1 + 0x188) < puVar24) {
    uVar27 = uVar23;
  }
  if (uVar27 != 0) {
    do {
      (*(code *)**(undefined8 **)*puVar24)
                ((undefined8 *)*puVar24,*(undefined8 *)(param_1 + 0x1f8),*param_3,
                 *(undefined4 *)(param_3 + 1),*(undefined4 *)(param_1 + 0x11c),(int)(float)iVar20,
                 uVar6);
      uVar23 = uVar23 + 1;
      puVar24 = puVar24 + 1;
    } while (uVar23 != uVar27);
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8f196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  return;
}



// FUNCTION 142a8f220 ProcessAudioFrame body=265 status=ok
// SIG undefined ProcessAudioFrame(void)

void Audio::FBiquadFilter::ProcessAudioFrame(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar8;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (0 < *(int *)(param_1 + 0x1c)) {
      param_2 = param_2 - (longlong)param_3;
      do {
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
        *param_3 = *(float *)((longlong)param_3 + param_2);
        param_3 = param_3 + 1;
      } while ((int)uVar6 < *(int *)(param_1 + 0x1c));
    }
  }
  else if (0 < *(int *)(param_1 + 0x1c)) {
    param_2 = param_2 - (longlong)param_3;
    uVar7 = uVar5;
    do {
      lVar4 = *(longlong *)(param_1 + 0x10);
      fVar1 = *(float *)(param_2 + (longlong)param_3);
      fVar2 = *(float *)(uVar5 + 0x1c + lVar4);
      fVar3 = *(float *)(uVar5 + 0x24 + lVar4);
      fVar8 = ((fVar2 * *(float *)(uVar5 + 0xc + lVar4) + fVar1 * *(float *)(uVar5 + 8 + lVar4) +
               *(float *)(uVar5 + 0x10 + lVar4) * *(float *)(uVar5 + 0x20 + lVar4)) -
              fVar3 * *(float *)(uVar5 + 0x14 + lVar4)) -
              *(float *)(uVar5 + 0x18 + lVar4) * *(float *)(uVar5 + 0x28 + lVar4);
      if ((-1.1754944e-38 < fVar8) && (fVar8 < 1.1754944e-38)) {
        fVar8 = 0.0;
      }
      *(float *)(uVar5 + 0x28 + lVar4) = fVar3;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *(float *)(uVar5 + 0x24 + lVar4) = fVar8;
      *(float *)(uVar5 + 0x20 + lVar4) = fVar2;
      *(float *)(uVar5 + 0x1c + lVar4) = fVar1;
      uVar5 = uVar5 + 0x30;
      *param_3 = fVar8;
      param_3 = param_3 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x1c));
    return;
  }
  return;
}



// FUNCTION 142a8f330 FUN_142a8f330 body=714 status=ok
// SIG undefined FUN_142a8f330(void)

void FUN_142a8f330(longlong param_1,longlong param_2,int param_3,float *param_4,int param_5)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float local_res18 [4];
  float local_98;
  undefined4 local_94;
  float local_90 [2];
  longlong local_88;
  
  if ((param_3 == 2) || (param_5 == 2)) {
    param_2 = param_2 - (longlong)param_4;
    lVar6 = param_1 + 0x20;
    pfVar7 = (float *)(param_1 + 100);
    local_88 = 2;
    do {
      local_94 = *(undefined4 *)(param_2 + (longlong)param_4);
      local_res18[0] = 0.0;
      (**(code **)(*(longlong *)(pfVar7 + -0x11) + 8))(lVar6,&local_94,local_res18);
      local_res18[0] = local_res18[0] * *(float *)(param_1 + 0x10);
      fVar8 = local_res18[0] * pfVar7[1] + pfVar7[2] * *pfVar7;
      if ((-1.1754944e-38 < fVar8) && (fVar8 < 1.1754944e-38)) {
        fVar8 = 0.0;
      }
      pfVar7[2] = fVar8;
      pfVar5 = pfVar7 + 0x5f;
      pfVar2 = pfVar7 + 0x4e;
      pfVar4 = pfVar7 + 3;
      fVar8 = fVar8 * 0.25;
      lVar3 = 4;
      pfVar7[0x5b] = (pfVar7[0x61] - pfVar7[0x60]) * *(float *)(param_1 + 0x1c) + fVar8;
      pfVar7[0x5c] = (*pfVar5 + pfVar7[0x62]) * *(float *)(param_1 + 0x1c) + fVar8;
      pfVar7[0x5d] = (*pfVar5 - pfVar7[0x62]) * *(float *)(param_1 + 0x1c) + fVar8;
      pfVar7[0x5e] = fVar8 - (pfVar7[0x60] + pfVar7[0x61]) * *(float *)(param_1 + 0x1c);
      *param_4 = 0.0;
      do {
        local_90[0] = pfVar5[-4];
        local_98 = 0.0;
        (**(code **)(*(longlong *)pfVar4 + 8))(pfVar4,local_90,&local_98);
        fVar8 = pfVar2[-2] * *pfVar2 + local_98 * pfVar2[-1];
        if ((-1.1754944e-38 < fVar8) && (fVar8 < 1.1754944e-38)) {
          fVar8 = 0.0;
        }
        *pfVar2 = fVar8;
        pfVar4 = pfVar4 + 0x12;
        *pfVar5 = fVar8;
        pfVar2 = pfVar2 + 4;
        fVar1 = *param_4;
        pfVar5 = pfVar5 + 1;
        *param_4 = fVar8 + fVar1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar6 = lVar6 + 0x1d0;
      pfVar7 = pfVar7 + 0x74;
      *param_4 = (1.0 - *(float *)(param_1 + 8)) * *(float *)(param_2 + (longlong)param_4) +
                 *(float *)(param_1 + 8) * (fVar8 + fVar1);
      param_4 = param_4 + 1;
      local_88 = local_88 + -1;
    } while (local_88 != 0);
  }
  return;
}



// FUNCTION 142a8f600 FUN_142a8f600 body=1776 status=ok
// SIG undefined FUN_142a8f600(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142a8f600(longlong param_1,float *param_2,undefined8 param_3,float *param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
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
  float fVar20;
  float local_res18 [2];
  float local_b8;
  float local_b4;
  float local_b0 [11];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70 [18];
  
  if (((int)param_3 == 1) && (param_5 == 1)) {
    return;
  }
  cVar4 = *(char *)(param_1 + 0x810);
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0x811) == '\0') {
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      return;
    }
  }
  else if (*(char *)(param_1 + 0x811) == '\0') {
    local_b0[10] = *param_2;
    local_84 = param_2[1];
    goto LAB_142a8f68c;
  }
  FUN_142a8f330(param_1 + 0x38,param_2,param_3,local_b0 + 10,param_5);
  cVar4 = *(char *)(param_1 + 0x810);
LAB_142a8f68c:
  local_80 = (local_84 + local_b0[10]) * 0.5;
  if (cVar4 == '\0') {
    *param_4 = local_b0[10] * *(float *)(param_1 + 0x30);
    param_4[1] = local_84 * *(float *)(param_1 + 0x30);
    return;
  }
  local_res18[0] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x3f8) + 8))
            ((longlong *)(param_1 + 0x3f8),&local_80,local_res18);
  local_res18[0] = local_res18[0] * *(float *)(param_1 + 0x1c);
  local_7c = local_res18[0] * *(float *)(param_1 + 0x440) +
             *(float *)(param_1 + 0x43c) * *(float *)(param_1 + 0x444);
  if ((-1.1754944e-38 < local_7c) && (local_7c < 1.1754944e-38)) {
    local_7c = 0.0;
  }
  *(float *)(param_1 + 0x444) = local_7c;
  local_b0[1] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x448) + 8))
            ((longlong *)(param_1 + 0x448),&local_7c,local_b0 + 1);
  local_b0[2] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x490) + 8))
            ((longlong *)(param_1 + 0x490),local_b0 + 1,local_b0 + 2);
  local_b0[3] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x4d8) + 8))
            ((longlong *)(param_1 + 0x4d8),local_b0 + 2,local_b0 + 3);
  local_b4 = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x520) + 8))
            ((longlong *)(param_1 + 0x520),local_b0 + 3,&local_b4);
  lVar2 = *(longlong *)(param_1 + 0x568);
  fVar8 = *(float *)(lVar2 + 0x20);
  lVar3 = *(longlong *)(lVar2 + 8);
  iVar1 = *(int *)(lVar2 + 0x10);
  iVar5 = (int)fVar8;
  fVar20 = fVar8 + *(float *)(lVar2 + 0x28);
  fVar9 = *(float *)(lVar3 + (longlong)iVar5 * 4);
  iVar6 = (int)*(float *)(lVar2 + 0x24);
  fVar10 = *(float *)(lVar3 + (longlong)((iVar5 + 1) % iVar1) * 4);
  fVar19 = *(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x28);
  fVar11 = *(float *)(lVar3 + (longlong)iVar6 * 4);
  fVar12 = *(float *)(lVar3 + (longlong)((iVar6 + 1) % iVar1) * 4);
  *(float *)(lVar2 + 0x20) = fVar20;
  *(float *)(lVar2 + 0x24) = fVar19;
  fVar7 = (float)iVar1;
  fVar13 = *(float *)(lVar2 + 0x2c);
  fVar14 = *(float *)(lVar2 + 0x30);
  if (fVar7 <= fVar20) {
    do {
      fVar20 = fVar20 - fVar7;
    } while (fVar7 <= fVar20);
    *(float *)(lVar2 + 0x20) = fVar20;
  }
  if (fVar7 <= fVar19) {
    do {
      fVar19 = fVar19 - fVar7;
    } while (fVar7 <= fVar19);
    *(float *)(lVar2 + 0x24) = fVar19;
  }
  fVar7 = *(float *)(param_1 + 2000);
  fVar19 = *(float *)(param_1 + 0x7cc);
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x578,
             (((fVar10 - fVar9) * (fVar8 - (float)iVar5) + fVar9) * *(float *)(lVar2 + 0x2c) +
             *(float *)(lVar2 + 0x30)) * *(float *)(param_1 + 0x6a0) + *(float *)(param_1 + 0x69c));
  Audio::FDelay::SetDelayMsec
            (param_1 + 0x6a8,
             (((fVar12 - fVar11) * (fVar8 - (float)iVar5) + fVar11) * fVar13 + fVar14) * fVar7 +
             fVar19);
  local_78 = *(float *)(param_1 + 0x698);
  if ((-1.1754944e-38 < local_78) && (local_78 < 1.1754944e-38)) {
    local_78 = 0.0;
  }
  local_78 = local_78 + local_b4;
  local_b0[4] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x6a8) + 8))(param_1 + 0x6a8,&local_78,local_b0 + 4);
  local_b8 = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x6f0) + 8))
            ((longlong *)(param_1 + 0x6f0),local_b0 + 4,&local_b8);
  local_b8 = local_b8 * (1.0 - *(float *)(param_1 + 0x24));
  local_74 = *(float *)(param_1 + 0x734) * *(float *)(param_1 + 0x73c) +
             local_b8 * *(float *)(param_1 + 0x738);
  if ((-1.1754944e-38 < local_74) && (local_74 < 1.1754944e-38)) {
    local_74 = 0.0;
  }
  *(float *)(param_1 + 0x73c) = local_74;
  local_b0[5] = 0.0;
  local_74 = (1.0 - *(float *)(param_1 + 0x28)) * local_74;
  (**(code **)(*(longlong *)(param_1 + 0x740) + 8))(param_1 + 0x740,&local_74,local_b0 + 5);
  local_b0[6] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x788) + 8))(param_1 + 0x788,local_b0 + 5,local_b0 + 6);
  local_70[0] = (1.0 - *(float *)(param_1 + 0x28)) * local_b0[6];
  *(float *)(param_1 + 0x7c8) = local_70[0];
  if ((-1.1754944e-38 < local_70[0]) && (local_70[0] < 1.1754944e-38)) {
    local_70[0] = 0.0;
  }
  local_70[0] = local_70[0] + local_b4;
  local_b0[7] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x578) + 8))(param_1 + 0x578,local_70,local_b0 + 7);
  local_b0[0] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x5c0) + 8))(param_1 + 0x5c0,local_b0 + 7,local_b0);
  local_b0[0] = local_b0[0] * (1.0 - *(float *)(param_1 + 0x24));
  local_b0[10] = local_b0[0] * *(float *)(param_1 + 0x608) +
                 *(float *)(param_1 + 0x604) * *(float *)(param_1 + 0x60c);
  if ((-1.1754944e-38 < local_b0[10]) && (local_b0[10] < 1.1754944e-38)) {
    local_b0[10] = 0.0;
  }
  *(float *)(param_1 + 0x60c) = local_b0[10];
  local_b0[8] = 0.0;
  local_b0[10] = (1.0 - *(float *)(param_1 + 0x28)) * local_b0[10];
  (**(code **)(*(longlong *)(param_1 + 0x610) + 8))(param_1 + 0x610,local_b0 + 10,local_b0 + 8);
  local_b0[9] = 0.0;
  (**(code **)(*(longlong *)(param_1 + 0x658) + 8))(param_1 + 0x658,local_b0 + 8,local_b0 + 9);
  *(float *)(param_1 + 0x698) = (1.0 - *(float *)(param_1 + 0x28)) * local_b0[9];
  fVar8 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x5c0,*(undefined4 *)(param_1 + 0x7f8));
  fVar9 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x5c0,*(undefined4 *)(param_1 + 0x7f4));
  fVar10 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x610,*(undefined4 *)(param_1 + 0x7fc));
  fVar11 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x658,*(undefined4 *)(param_1 + 0x800));
  fVar12 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x6f0,*(undefined4 *)(param_1 + 0x804));
  fVar13 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x740,*(undefined4 *)(param_1 + 0x808));
  fVar14 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x788,*(undefined4 *)(param_1 + 0x80c));
  fVar7 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x6f0,*(undefined4 *)(param_1 + 0x7dc));
  fVar19 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x6f0,*(undefined4 *)(param_1 + 0x7d8));
  fVar20 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x740,*(undefined4 *)(param_1 + 0x7e0));
  fVar15 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x788,*(undefined4 *)(param_1 + 0x7e4));
  fVar16 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x5c0,*(undefined4 *)(param_1 + 0x7e8));
  fVar17 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x610,*(undefined4 *)(param_1 + 0x7ec));
  fVar18 = (float)Audio::FDelay::ReadDelayAt(param_1 + 0x658,*(undefined4 *)(param_1 + 0x7f0));
  *param_4 = ((((((fVar7 + fVar19) - fVar20) + fVar15) - fVar16) - fVar17) - fVar18) *
             *(float *)(param_1 + 0x30);
  param_4[1] = ((((((fVar8 + fVar9) - fVar10) + fVar11) - fVar12) - fVar13) - fVar14) *
               *(float *)(param_1 + 0x30);
  return;
}



// FUNCTION 142a8fcf0 FUN_142a8fcf0 body=355 status=ok
// SIG undefined FUN_142a8fcf0(void)

void FUN_142a8fcf0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  char local_res8 [8];
  undefined4 local_res10 [2];
  longlong local_18;
  longlong local_10;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))();
    cVar5 = '\0';
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
    if (iVar4 == 0) {
      local_res10[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))
                (*(longlong **)(param_1 + 0x58),local_res10);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x40) * 0x10) +
       0x10) = local_res10[0];
    }
    else if (iVar4 == 2) {
      local_res8[0] = '\0';
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                (*(longlong **)(param_1 + 0x58),local_res8);
      *(int *)(*(longlong *)
                (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x40) * 0x10) + 0x10)
           = *(int *)(*(longlong *)(param_1 + 0x48) + 0xc) << 0xd;
      cVar5 = local_res8[0];
    }
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x60) == 0) {
        *(undefined1 *)(param_1 + 0x65) = 1;
      }
      else if (*(int *)(param_1 + 0x60) == 1) {
        *(undefined1 *)(param_1 + 0x68) = 1;
      }
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x40) * 0x10)
    ;
    if (0 < *(int *)(lVar2 + 8)) {
      local_10 = *(longlong *)
                  (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x40) * 0x10);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      local_18 = lVar2;
      FUN_142a956e0(param_1,&local_18);
    }
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    iVar4 = *(int *)(param_1 + 0x40) + 1;
    *(int *)(param_1 + 0x40) = iVar4;
    if (2 < iVar4) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      iVar4 = 0;
    }
    bVar6 = *(char *)(param_1 + 0x66) != '\0';
    if (bVar6) {
      *(undefined1 *)(param_1 + 0x66) = 0;
    }
    uVar3 = Audio::FMixerSourceBuffer::ReadMoreRealtimeData(param_1,iVar4,bVar6);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      FUN_142a95af0(param_1,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 142a8fe60 PumpCommandQueue body=535 status=ok
// SIG undefined PumpCommandQueue(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Audio::FMixerDevice::PumpCommandQueue(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [80];
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_142a8feb0:
  do {
    lVar1 = **(longlong **)(param_1 + 0xb18);
    if (lVar1 == 0) {
      if (local_48 != 0) {
        plVar4 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar4 = local_58;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    lVar2 = ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,lVar1 + 0x10);
    FGenericPlatformMemory::MemswapGreaterThan8(lVar2,local_88,0x50);
    if (*(int *)(lVar2 + 0x40) != 0) {
      plVar4 = *(longlong **)(lVar2 + 0x30);
      if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
        plVar4 = (longlong *)(lVar2 + 0x10);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      FMemory::Free();
    }
    lVar2 = *(longlong *)(param_1 + 0xb18);
    *(longlong *)(param_1 + 0xb18) = lVar1;
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    local_128[0] = AK::MemoryMgr::StartProfileThreadUsage;
    FGenericPlatformMemory::MemswapGreaterThan8(local_128,lVar1 + 0x10,0x50);
    if (local_e8 != 0) {
      plVar4 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar4 = local_f8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x50) != 0) {
        plVar4 = *(longlong **)(lVar2 + 0x40);
        if (*(longlong **)(lVar2 + 0x40) == (longlong *)0x0) {
          plVar4 = (longlong *)(lVar2 + 0x20);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar2);
    }
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*local_88[0])(uVar3);
        goto LAB_142a8feb0;
      }
    }
    (*local_88[0])(0);
  } while( true );
}



// FUNCTION 142a90080 PumpCommandQueue body=357 status=ok
// SIG undefined PumpCommandQueue(void)

void Audio::FMixerSourceManager::PumpCommandQueue(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar9 = 0;
  LOCK();
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x4c) = 0;
    iVar1 = 0;
  }
  UNLOCK();
  lVar12 = (longlong)iVar1 * 0x10 + param_1;
  iVar10 = *(int *)(lVar12 + 0x30);
  uVar8 = uVar9;
  uVar11 = uVar9;
  if (0 < iVar10) {
    do {
      puVar5 = (undefined8 *)(*(longlong *)(lVar12 + 0x28) + uVar11);
      uVar3 = uVar9;
      if (*(int *)(puVar5 + 8) != 0) {
        plVar6 = (longlong *)puVar5[6];
        if ((longlong *)puVar5[6] == (longlong *)0x0) {
          plVar6 = puVar5 + 2;
        }
        if (plVar6 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar6 + 8))();
        }
      }
      (*(code *)*puVar5)(uVar3);
      iVar10 = *(int *)(lVar12 + 0x30);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar11 = uVar11 + 0x50;
    } while ((int)uVar7 < iVar10);
  }
  iVar2 = *(int *)(lVar12 + 0x34);
  if (iVar2 < 0) {
    if (iVar10 != 0) {
      plVar6 = (longlong *)(*(longlong *)(lVar12 + 0x28) + 0x30);
      do {
        if ((int)plVar6[2] != 0) {
          plVar4 = (longlong *)*plVar6;
          if ((longlong *)*plVar6 == (longlong *)0x0) {
            plVar4 = plVar6 + -4;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 10;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar2 = *(int *)(lVar12 + 0x34);
    }
    *(undefined4 *)(lVar12 + 0x30) = 0;
    if (iVar2 != 0) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(lVar12 + 0x28,0);
    }
  }
  else {
    if (iVar10 != 0) {
      plVar6 = (longlong *)(*(longlong *)(lVar12 + 0x28) + 0x30);
      do {
        if ((int)plVar6[2] != 0) {
          plVar4 = (longlong *)*plVar6;
          if ((longlong *)*plVar6 == (longlong *)0x0) {
            plVar4 = plVar6 + -4;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 10;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    *(undefined4 *)(lVar12 + 0x30) = 0;
  }
  LOCK();
  *(uint *)(param_1 + 0x4c) = (uint)(iVar1 == 0);
  UNLOCK();
  return;
}



// FUNCTION 142a901f0 PumpCommandQueue body=535 status=ok
// SIG undefined PumpCommandQueue(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Audio::FMixerSubmix::PumpCommandQueue(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [80];
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_142a90240:
  do {
    lVar1 = **(longlong **)(param_1 + 0x178);
    if (lVar1 == 0) {
      if (local_48 != 0) {
        plVar4 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar4 = local_58;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    lVar2 = ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,lVar1 + 0x10);
    FGenericPlatformMemory::MemswapGreaterThan8(lVar2,local_88,0x50);
    if (*(int *)(lVar2 + 0x40) != 0) {
      plVar4 = *(longlong **)(lVar2 + 0x30);
      if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
        plVar4 = (longlong *)(lVar2 + 0x10);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      FMemory::Free();
    }
    lVar2 = *(longlong *)(param_1 + 0x178);
    *(longlong *)(param_1 + 0x178) = lVar1;
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    local_128[0] = AK::MemoryMgr::StartProfileThreadUsage;
    FGenericPlatformMemory::MemswapGreaterThan8(local_128,lVar1 + 0x10,0x50);
    if (local_e8 != 0) {
      plVar4 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar4 = local_f8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x50) != 0) {
        plVar4 = *(longlong **)(lVar2 + 0x40);
        if (*(longlong **)(lVar2 + 0x40) == (longlong *)0x0) {
          plVar4 = (longlong *)(lVar2 + 0x20);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar2);
    }
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*local_88[0])(uVar3);
        goto LAB_142a90240;
      }
    }
    (*local_88[0])(0);
  } while( true );
}



// FUNCTION 142a90410 FUN_142a90410 body=645 status=ok
// SIG undefined FUN_142a90410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a90410(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [80];
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
  do {
    while( true ) {
      lVar2 = *(longlong *)param_1[199];
      if (lVar2 == 0) {
        while (lVar2 = *(longlong *)param_1[0xc9], lVar2 != 0) {
          cVar1 = *(char *)(lVar2 + 8);
          lVar3 = param_1[0xc9];
          param_1[0xc9] = lVar2;
          *(undefined1 *)(lVar2 + 8) = 0;
          FMemory::operator_delete(lVar3,0x10);
          if (cVar1 == '\x01') {
            *(undefined1 *)((longlong)param_1 + 0x62c) = 1;
            (**(code **)(*param_1 + 0x550))(param_1);
          }
          else if (cVar1 == '\x02') {
            *(undefined1 *)((longlong)param_1 + 0x62c) = 0;
            (**(code **)(*param_1 + 0x558))(param_1);
          }
        }
        if (local_48 != 0) {
          plVar5 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar5 = local_58;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        return;
      }
      lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,lVar2 + 0x10);
      FGenericPlatformMemory::MemswapGreaterThan8(lVar3,local_88,0x50);
      if (*(int *)(lVar3 + 0x40) != 0) {
        plVar5 = *(longlong **)(lVar3 + 0x30);
        if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
          plVar5 = (longlong *)(lVar3 + 0x10);
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        FMemory::Free();
      }
      lVar3 = param_1[199];
      param_1[199] = lVar2;
      local_f8 = (longlong *)0x0;
      local_e8 = 0;
      local_128[0] = AK::MemoryMgr::StartProfileThreadUsage;
      FGenericPlatformMemory::MemswapGreaterThan8(local_128,lVar2 + 0x10,0x50);
      if (local_e8 != 0) {
        plVar5 = local_118;
        if (local_f8 != (longlong *)0x0) {
          plVar5 = local_f8;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x50) != 0) {
          plVar5 = *(longlong **)(lVar3 + 0x40);
          if (*(longlong **)(lVar3 + 0x40) == (longlong *)0x0) {
            plVar5 = (longlong *)(lVar3 + 0x20);
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (*(longlong *)(lVar3 + 0x40) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar3,0x60);
      }
      if (local_48 != 0) break;
LAB_142a905a1:
      (*local_88[0])(0);
    }
    plVar5 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar5 = local_58;
    }
    if (plVar5 == (longlong *)0x0) goto LAB_142a905a1;
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*local_88[0])(uVar4);
  } while( true );
}



// FUNCTION 142a90700 ReadDelayAt body=89 status=ok
// SIG undefined ReadDelayAt(void)

float Audio::FDelay::ReadDelayAt(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = param_2 * *(float *)(param_1 + 0x1c) * 0.001;
  iVar4 = (int)fVar5;
  iVar2 = *(int *)(param_1 + 0x18) - iVar4;
  if (iVar2 < 0) {
    iVar2 = iVar2 + *(int *)(param_1 + 0x10);
  }
  iVar3 = iVar2 + -1;
  fVar1 = *(float *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 4);
  if (iVar3 < 0) {
    iVar3 = *(int *)(param_1 + 0x10) + -1;
  }
  return (*(float *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 4) - fVar1) *
         (fVar5 - (float)iVar4) + fVar1;
}



// FUNCTION 142a90760 ReadMoreRealtimeData body=513 status=ok
// SIG undefined ReadMoreRealtimeData(void)

ulonglong Audio::FMixerSourceBuffer::ReadMoreRealtimeData(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0xb3) & 4) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (1 < *(int *)(lVar2 + 0x40) - 2U) {
      uVar6 = FRawPCMDataBuffer::GetNextBuffer
                        (param_1 + 8,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10),
                         *(int *)(lVar2 + 0xc) << 0xd);
      return uVar6;
    }
    iVar1 = *(int *)(param_1 + 0x60);
    uVar3 = **(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
    puVar4 = (undefined8 *)operator_new(0x10);
    if (puVar4 == (undefined8 *)0x0) goto LAB_142a90948;
    puVar4[1] = 0;
    *puVar4 = &PTR__scalar_deleting_destructor__1454d4828;
    puVar5 = (undefined8 *)operator_new(0x78);
    if (puVar5 == (undefined8 *)0x0) goto LAB_142a90930;
    local_28 = (undefined4)lVar2;
    uStack_24 = (undefined4)((ulonglong)lVar2 >> 0x20);
    uStack_20 = (undefined4)uVar3;
    uStack_1c = (undefined4)((ulonglong)uVar3 >> 0x20);
    *puVar5 = &PTR_FUN_1454d47b0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = local_28;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_24;
    *(undefined4 *)(puVar5 + 4) = uStack_20;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_1c;
    puVar5[5] = CONCAT26(uStack_12,CONCAT15(param_3 == '\x01',CONCAT14(iVar1 != 0,0x2000)));
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 2;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
  }
  else {
    uVar3 = **(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xc);
    uStack_14 = (undefined1)iVar1;
    uStack_13 = (undefined1)((uint)iVar1 >> 8);
    uStack_12 = (undefined2)((uint)iVar1 >> 0x10);
    puVar4 = (undefined8 *)operator_new(0x10);
    if (puVar4 == (undefined8 *)0x0) {
LAB_142a90948:
      uVar6 = 0;
      puVar4 = (undefined8 *)0x0;
      goto LAB_142a9094b;
    }
    puVar4[1] = 0;
    *puVar4 = &PTR__scalar_deleting_destructor__1454d47f8;
    puVar5 = (undefined8 *)operator_new(0x78);
    if (puVar5 == (undefined8 *)0x0) {
LAB_142a90930:
      puVar5 = (undefined8 *)0x0;
    }
    else {
      local_28 = (undefined4)lVar2;
      uStack_24 = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_20 = (undefined4)uVar3;
      uStack_1c = (undefined4)((ulonglong)uVar3 >> 0x20);
      *puVar5 = &PTR_FUN_1454d47b0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *(undefined2 *)((longlong)puVar5 + 0x2c) = 0;
      *(undefined1 *)(puVar5 + 6) = 0;
      *(undefined4 *)(puVar5 + 7) = local_28;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_24;
      *(undefined4 *)(puVar5 + 8) = uStack_20;
      *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_1c;
      puVar5[9] = CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(uStack_14,iVar1 << 0xd)));
      puVar5[10] = 0;
      *(undefined4 *)(puVar5 + 0xb) = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
    }
  }
  puVar4[1] = puVar5;
  uVar6 = FAsyncTask<Audio::FAsyncDecodeWorker>::StartBackgroundTask(puVar5,DAT_1468b5010);
LAB_142a9094b:
  *(undefined8 **)(param_1 + 0x58) = puVar4;
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142a90970 ReadNextBuffer body=364 status=ok
// SIG undefined ReadNextBuffer(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio::IAudioMixerPlatformInterface::ReadNextBuffer(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((int)param_1[0xd] == 4) {
    LOCK();
    bVar6 = (int)param_1[0x31] == 0;
    if (bVar6) {
      *(int *)(param_1 + 0x31) = 0;
    }
    UNLOCK();
    if (bVar6) {
      LOCK();
      *(undefined4 *)((longlong)(int)param_1[0x22] * 0x30 + param_1[0x15] + 0x2c) = 0;
      UNLOCK();
      iVar3 = ((int)param_1[0x22] + 1) % (int)param_1[0x23];
      lVar5 = (longlong)iVar3;
      piVar1 = (int *)(param_1[0x15] + 0x2c + lVar5 * 0x30);
      LOCK();
      bVar6 = *piVar1 == 0;
      if (bVar6) {
        *piVar1 = 0;
      }
      UNLOCK();
      if (bVar6) {
        _DAT_146b29fc4 = _DAT_146b29fc4 + 1;
        _DAT_146b29fc8 = _DAT_146b29fc8 + 1;
        if ((char)param_1[0x1d] == '\0') {
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        if ((int)param_1[0x1c] == 1) {
          (**(code **)(*param_1 + 0xb0))(param_1,param_1[0x18]);
        }
        else {
          (**(code **)(*param_1 + 0xb0))(param_1,param_1[0x1a]);
        }
      }
      else {
        lVar2 = (longlong)(((int)param_1[0x22] + 1) % (int)param_1[0x23]) * 0x30 + param_1[0x15];
        bVar6 = *(int *)(lVar2 + 0x28) != 1;
        if (bVar6) {
          uVar4 = *(undefined8 *)(lVar2 + 0x18);
        }
        else {
          uVar4 = *(undefined8 *)(lVar2 + 8);
        }
        if (bVar6) {
          ApplyAttenuationInternal<short>(param_1,uVar4,*(undefined4 *)(lVar2 + 0x10));
        }
        else {
          ApplyAttenuationInternal<float>();
        }
        lVar2 = param_1[0x15];
        *(undefined1 *)(param_1 + 0x1d) = 0;
        _DAT_146b29fc8 = 0;
        if (*(int *)(lVar2 + 0x28 + lVar5 * 0x30) == 1) {
          uVar4 = *(undefined8 *)(lVar2 + 8 + lVar5 * 0x30);
        }
        else {
          uVar4 = *(undefined8 *)(lVar2 + 0x18 + lVar5 * 0x30);
        }
        (**(code **)(*param_1 + 0xb0))(param_1,uVar4);
        *(int *)(param_1 + 0x22) = iVar3;
      }
      (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
    }
  }
  return;
}



// FUNCTION 142a90ae0 FUN_142a90ae0 body=1477 status=ok
// SIG undefined FUN_142a90ae0(void)

void FUN_142a90ae0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  
  lVar6 = *(longlong *)(param_1 + 0x70);
  lVar16 = (longlong)param_2 * 0x4b0;
  bVar10 = true;
  iVar13 = *(int *)(lVar16 + 0x84 + lVar6);
  uVar5 = *(uint *)(lVar16 + 0x490 + lVar6);
  uVar17 = (ulonglong)(int)uVar5;
  bVar8 = *(int *)(lVar16 + 0x28 + lVar6) <= iVar13 + 1;
  bVar9 = *(int *)(lVar16 + 0x28 + lVar6) <= iVar13;
  lVar15 = 0;
  uVar19 = uVar17;
  do {
    uVar11 = (uint)uVar19;
    if (bVar8) {
      if (!bVar9) {
        iVar13 = iVar13 * uVar11;
        bVar10 = false;
        lVar22 = **(longlong **)(lVar16 + 0x18 + lVar6);
        lVar18 = lVar15;
        if (3 < (longlong)uVar17) {
          lVar21 = (longlong)iVar13;
          lVar25 = lVar21 * 4 + lVar22;
          lVar24 = (uVar17 - 4 >> 2) + 1;
          lVar18 = lVar24 * 4;
          puVar20 = (undefined4 *)(lVar21 * 4 + lVar22);
          do {
            *(undefined4 *)((longlong)puVar20 + (*(longlong *)(lVar16 + 0x60 + lVar6) - lVar25)) =
                 *puVar20;
            *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x60 + lVar6) + (4 - lVar25))
                 = puVar20[1];
            *(undefined4 *)
             ((longlong)puVar20 + *(longlong *)(lVar16 + 0x60 + lVar6) + ((2 - lVar21) * 4 - lVar22)
             ) = puVar20[2];
            *(undefined4 *)
             ((longlong)puVar20 + *(longlong *)(lVar16 + 0x60 + lVar6) + ((3 - lVar21) * 4 - lVar22)
             ) = puVar20[3];
            lVar24 = lVar24 + -1;
            puVar20 = puVar20 + 4;
          } while (lVar24 != 0);
        }
        uVar11 = uVar5;
        if (lVar18 < (longlong)uVar17) {
          do {
            *(undefined4 *)(*(longlong *)(lVar16 + 0x60 + lVar6) + lVar18 * 4) =
                 *(undefined4 *)((longlong)iVar13 * 4 + lVar22 + lVar18 * 4);
            lVar18 = lVar18 + 1;
          } while (lVar18 < (longlong)uVar17);
        }
      }
    }
    else if (!bVar9) {
      plVar14 = *(longlong **)(lVar16 + 0x18 + lVar6);
      goto LAB_142a90e89;
    }
    plVar23 = (longlong *)(lVar6 + 0x18 + lVar16);
    plVar14 = (longlong *)*plVar23;
    if (plVar14 != (longlong *)0x0) {
      if ((*(int *)((longlong)plVar14 + 0x14) == -1) && ((*(byte *)(plVar14 + 3) & 1) == 0)) {
        iVar12 = *(int *)(lVar16 + 0x84 + lVar6) - *(int *)(lVar16 + 0x28 + lVar6);
        iVar13 = 0;
        if (-1 < iVar12) {
          iVar13 = iVar12;
        }
        *(int *)(lVar16 + 0x84 + lVar6) = iVar13;
LAB_142a90e89:
        if (plVar14 == (longlong *)0x0) {
          return;
        }
        lVar18 = *plVar14;
        lVar22 = (longlong)(int)((iVar13 + 1) * uVar11);
        if (bVar10) {
          if (3 < (longlong)uVar17) {
            lVar26 = (2 - lVar22) * 4 - lVar18;
            lVar21 = (int)(iVar13 * uVar11) - lVar22;
            lVar24 = (lVar22 * -4 + 4) - lVar18;
            lVar25 = (lVar22 * -4 + -4) - lVar18;
            lVar27 = (uVar17 - 4 >> 2) + 1;
            lVar15 = lVar27 * 4;
            puVar20 = (undefined4 *)(lVar18 + 4 + lVar22 * 4);
            do {
              *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x60 + lVar6) + lVar25) =
                   puVar20[lVar21 + -1];
              *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x70 + lVar6) + lVar25) =
                   puVar20[-1];
              *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x60 + lVar6) + lVar25 + 4)
                   = puVar20[lVar21];
              *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x70 + lVar6) + lVar25 + 4)
                   = *puVar20;
              *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x60 + lVar6) + lVar24) =
                   puVar20[lVar21 + 1];
              *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x70 + lVar6) + lVar24) =
                   puVar20[1];
              *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x60 + lVar6) + lVar26) =
                   puVar20[lVar21 + 2];
              *(undefined4 *)((longlong)puVar20 + *(longlong *)(lVar16 + 0x70 + lVar6) + lVar26) =
                   puVar20[2];
              lVar27 = lVar27 + -1;
              puVar20 = puVar20 + 4;
            } while (lVar27 != 0);
          }
          if ((longlong)uVar17 <= lVar15) {
            return;
          }
          do {
            puVar20 = (undefined4 *)(lVar18 + lVar22 * 4 + lVar15 * 4);
            *(undefined4 *)(*(longlong *)(lVar16 + 0x60 + lVar6) + lVar15 * 4) =
                 puVar20[(int)(iVar13 * uVar11) - lVar22];
            *(undefined4 *)(*(longlong *)(lVar16 + 0x70 + lVar6) + lVar15 * 4) = *puVar20;
            lVar15 = lVar15 + 1;
          } while (lVar15 < (longlong)uVar17);
          return;
        }
        if (3 < (longlong)uVar17) {
          lVar21 = lVar18 + lVar22 * 4;
          lVar24 = (uVar17 - 4 >> 2) + 1;
          lVar15 = lVar24 * 4;
          puVar20 = (undefined4 *)(lVar18 + lVar22 * 4);
          do {
            puVar3 = puVar20 + 4;
            *(undefined4 *)((longlong)puVar20 + (*(longlong *)(lVar16 + 0x70 + lVar6) - lVar21)) =
                 *puVar20;
            *(undefined4 *)
             ((longlong)puVar20 + ((*(longlong *)(lVar16 + 0x70 + lVar6) + 4) - lVar21)) =
                 puVar20[1];
            *(undefined4 *)
             (*(longlong *)(lVar16 + 0x70 + lVar6) + ((2 - lVar22) * 4 - lVar18) + -0x10 +
             (longlong)puVar3) = puVar20[2];
            *(undefined4 *)
             (*(longlong *)(lVar16 + 0x70 + lVar6) + ((3 - lVar22) * 4 - lVar18) + -0x10 +
             (longlong)puVar3) = puVar20[3];
            lVar24 = lVar24 + -1;
            puVar20 = puVar3;
          } while (lVar24 != 0);
        }
        if ((longlong)uVar17 <= lVar15) {
          return;
        }
        do {
          *(undefined4 *)(*(longlong *)(lVar16 + 0x70 + lVar6) + lVar15 * 4) =
               *(undefined4 *)(lVar18 + lVar22 * 4 + lVar15 * 4);
          lVar15 = lVar15 + 1;
        } while (lVar15 < (longlong)uVar17);
        return;
      }
      piVar7 = *(int **)(lVar16 + lVar6);
      if (((*piVar7 != 0) || (*(char *)((longlong)piVar7 + 0x65) == '\0')) &&
         (*(longlong *)(piVar7 + 0x14) != 0)) {
        FUN_142a8fcf0();
      }
    }
    piVar7 = *(int **)(lVar16 + lVar6);
    if (*piVar7 < 1) {
      pbVar4 = (byte *)(lVar16 + 0x479 + lVar6);
      *pbVar4 = *pbVar4 | 0x10;
      return;
    }
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    lVar18 = **(longlong **)(piVar7 + 0xe);
    if (lVar18 != 0) {
      plVar14 = (longlong *)(lVar18 + 8);
      if (&local_58 != plVar14) {
        local_58 = *plVar14;
        *plVar14 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_50);
      }
      lVar22 = *(longlong *)(piVar7 + 0xe);
      *(longlong *)(piVar7 + 0xe) = lVar18;
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      if (plVar14 != &local_48) {
        *plVar14 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar18 + 0x10);
        plVar14 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_40 + 1;
          lVar18 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plStack_40 + 8))();
            }
          }
        }
      }
      if (lVar22 != 0) {
        plVar14 = *(longlong **)(lVar22 + 0x10);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          lVar18 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        FMemory::operator_delete(lVar22);
      }
    }
    *piVar7 = *piVar7 + -1;
    if (plVar23 != &local_58) {
      *plVar23 = local_58;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar23 + 1);
    }
    plVar14 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar7 = (int *)((longlong)plVar14 + 0xc);
        iVar13 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plStack_50 + 8))();
        }
      }
    }
    uVar19 = (ulonglong)uVar5;
    uVar11 = *(uint *)(*plVar23 + 0x10) / uVar5;
    *(uint *)(lVar16 + 0x28 + lVar6) = uVar11;
    if (bVar10) {
      iVar13 = *(int *)(lVar16 + 0x84 + lVar6) - uVar11;
      iVar12 = 0;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
    }
    else {
      iVar12 = -1;
    }
    *(int *)(lVar16 + 0x84 + lVar6) = iVar12;
    iVar13 = *(int *)(lVar16 + 0x84 + lVar6);
    bVar8 = *(int *)(lVar16 + 0x28 + lVar6) <= iVar12 + 1;
    bVar9 = *(int *)(lVar16 + 0x28 + lVar6) <= iVar13;
  } while( true );
}



// FUNCTION 142a910b0 FUN_142a910b0 body=897 status=ok
// SIG undefined FUN_142a910b0(void)

void FUN_142a910b0(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_res10 [2];
  undefined1 local_res20 [8];
  undefined8 local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [8];
  longlong **local_d0;
  longlong **local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_res10[0] = param_2;
  cVar3 = IsInAudioThread();
  plVar9 = (longlong *)0x0;
  plVar5 = plVar9;
  if (cVar3 == '\0') {
    plStack_f0 = local_res10[0];
    local_58 = 0;
    local_48 = 0;
    local_f8 = param_1;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_78);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f77c18;
      puVar4[1] = local_f8;
      puVar4[2] = plStack_f0;
    }
    local_88[0] = &LAB_142a7fde0;
    FUN_1422f8a30(local_88,(ulonglong)local_res10[0] & 0xff);
    return;
  }
  do {
    if (local_res10[0] == *(longlong **)(DAT_146b29ed8 + (longlong)plVar5 * 8)) {
      return;
    }
    plVar5 = (longlong *)((longlong)plVar5 + 1);
  } while ((longlong)plVar5 < 5);
  piVar6 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x8f8,local_res20);
  if (*piVar6 != -1) {
    return;
  }
  lVar7 = operator_new(0x200);
  plVar5 = plVar9;
  if (lVar7 != 0) {
    plVar5 = (longlong *)FUN_142a7a0c0(lVar7,param_1);
  }
  local_e8 = plVar5;
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *plVar8 = (longlong)&PTR_DestroyObject_1454d5290;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    plVar8[2] = (longlong)plVar5;
    plVar9 = plVar8;
  }
  plStack_e0 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_e8,plVar5,plVar5);
  local_d0 = local_res10;
  local_c8 = &local_e8;
  FUN_14068d230(param_1 + 0x8f8,local_d8,&local_d0,0);
  if (param_3 == '\0') goto LAB_142a913da;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  if (local_res10[0][7] == 0) {
    plStack_f0 = (longlong *)(*(undefined8 **)(param_1 + 0x728))[1];
    local_108 = **(undefined8 **)(param_1 + 0x728);
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
      UNLOCK();
    }
    local_f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_100,&plStack_f0);
    plVar9 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_f0 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar6 = (int *)((longlong)plVar9 + 0xc);
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          lVar7 = *plStack_f0;
          local_b8 = plStack_f0;
          goto LAB_142a91326;
        }
      }
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_142a85810(param_1,local_c0);
    if (&local_108 != puVar4) {
      local_108 = *puVar4;
      *puVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_100,puVar4 + 1);
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_b8 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar6 = (int *)((longlong)local_b8 + 0xc);
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          lVar7 = *local_b8;
LAB_142a91326:
          (**(code **)(lVar7 + 8))(local_b8,1);
        }
      }
    }
  }
  plVar9 = plStack_100;
  uVar2 = local_108;
  local_a8 = local_e8;
  plStack_a0 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
    UNLOCK();
  }
  FUN_142a7eb70(local_108,&local_a8);
  local_98 = uVar2;
  plStack_90 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar9 = plStack_100;
  }
  FUN_142a93940(local_e8,&local_98);
  FUN_142a87e10(local_e8,local_res10[0]);
  plVar5 = plStack_100;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
LAB_142a913da:
  plVar9 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_e0 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar6 = (int *)((longlong)plVar9 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142a91440 FUN_142a91440 body=324 status=ok
// SIG undefined FUN_142a91440(void)

void FUN_142a91440(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x8f8,local_res8);
  plVar6 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar6 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x8f8));
  }
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)(*(longlong **)(param_1 + 0x728))[1];
    lVar3 = **(longlong **)(param_1 + 0x728);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_18[0] = param_2;
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 400));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 400));
    }
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar3 + 0x180,local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 400));
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    return;
  }
  lVar3 = *plVar5;
  local_res20 = param_2;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 400));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 400));
  }
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar3 + 0x180,&local_res20);
                    /* WARNING: Could not recover jumptable at 0x000142a914e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 400));
  return;
}



// FUNCTION 142a91590 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,Audio::FMixerBus>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerBus,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
  uint *puVar11;
  ulonglong uVar12;
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
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_142a916cf;
        uVar5 = puVar11[lVar6 + 1];
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
LAB_142a916cf:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x78 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x1d] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x1c] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142a917a0 FUN_142a917a0 body=1881 status=ok
// SIG undefined FUN_142a917a0(void)

void FUN_142a917a0(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  int *piVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int *piVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_88 [2];
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60 [4];
  
  uVar16 = (ulonglong)(int)param_2;
  plVar21 = (longlong *)(uVar16 * 0x4b0 + param_1[0xe]);
  iVar1 = (int)plVar21[0x15];
  if (iVar1 != -1) {
    if ((int)param_1[0x11] != *(int *)((longlong)param_1 + 0xb4)) {
      plVar13 = (longlong *)param_1[0x18];
      if ((longlong *)param_1[0x18] == (longlong *)0x0) {
        plVar13 = param_1 + 0x17;
      }
      iVar5 = *(int *)((longlong)plVar13 + ((longlong)(int)param_1[0x19] - 1U & (longlong)iVar1) * 4
                      );
      if (iVar5 != -1) {
        do {
          piVar12 = (int *)((longlong)iVar5 * 0x78 + param_1[0x10]);
          if (*piVar12 == iVar1) {
            if (iVar5 != -1) goto LAB_142a91841;
            break;
          }
          iVar5 = piVar12[0x1c];
        } while (iVar5 != -1);
      }
    }
    piVar12 = (int *)0x0;
LAB_142a91841:
    piVar15 = piVar12 + 2;
    if (piVar12 == (int *)0x0) {
      piVar15 = (int *)0x0;
    }
    local_res20[0] = param_2;
    TArray<unsigned_int,FDefaultAllocator>::Remove(piVar15,local_res20);
    if (((piVar15[2] == 0) && (piVar15[6] == 0)) && (piVar15[10] == 0)) {
      TSet<TTuple<unsigned_int,Audio::FMixerBus>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerBus,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x10,(int)plVar21[0x15]);
    }
  }
  uVar18 = 0;
  plVar13 = plVar21 + 0x18;
  local_res18[0] = 0;
  do {
    uVar20 = 0;
    local_68 = plVar13 + -1;
    piVar12 = (int *)*local_68;
    uVar14 = (longlong)(int)*plVar13 & 0x3fffffffffffffff;
    if (piVar12 + (int)*plVar13 < piVar12) {
      uVar14 = uVar20;
    }
    uVar17 = (uint)uVar18;
    if (uVar14 != 0) {
      local_78 = (uVar18 & 0xff) * 0x10;
      do {
        iVar1 = *piVar12;
        if ((int)param_1[0x11] != *(int *)((longlong)param_1 + 0xb4)) {
          plVar7 = (longlong *)param_1[0x18];
          if ((longlong *)param_1[0x18] == (longlong *)0x0) {
            plVar7 = param_1 + 0x17;
          }
          iVar5 = *(int *)((longlong)plVar7 +
                          ((longlong)(int)param_1[0x19] - 1U & (longlong)iVar1) * 4);
          if (iVar5 != -1) {
            do {
              piVar15 = (int *)((longlong)iVar5 * 0x78 + param_1[0x10]);
              if (*piVar15 == iVar1) {
                if (iVar5 != -1) goto LAB_142a91950;
                break;
              }
              iVar5 = piVar15[0x1c];
            } while (iVar5 != -1);
          }
        }
        piVar15 = (int *)0x0;
LAB_142a91950:
        plVar7 = (longlong *)((longlong)piVar15 + local_78 + 0x18);
        if (piVar15 == (int *)0x0) {
          plVar7 = (longlong *)(local_78 + 0x10);
        }
        iVar5 = (int)plVar7[1];
        iVar11 = iVar5 + -1;
        if (-1 < iVar11) {
          lVar19 = *plVar7;
          lVar8 = (longlong)iVar11;
          do {
            if (*(uint *)(lVar19 + lVar8 * 8) == param_2) {
              iVar6 = (iVar5 - iVar11) + -1;
              if (0 < iVar6) {
                iVar6 = 1;
              }
              if (iVar6 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar19 + (longlong)iVar11 * 8),
                           (void *)(lVar19 + (longlong)(iVar5 - iVar6) * 8),(longlong)iVar6 << 3);
                iVar5 = (int)plVar7[1];
              }
              *(int *)(plVar7 + 1) = iVar5 + -1;
              break;
            }
            iVar11 = iVar11 + -1;
            lVar8 = lVar8 + -1;
          } while (-1 < lVar8);
        }
        piVar9 = piVar15 + 4;
        if (piVar15 == (int *)0x0) {
          piVar9 = (int *)&DAT_00000008;
        }
        if (*piVar9 == 0) {
          piVar9 = piVar15 + 8;
          if (piVar15 == (int *)0x0) {
            piVar9 = (int *)&DAT_00000018;
          }
          if (*piVar9 == 0) {
            piVar9 = piVar15 + 0xc;
            if (piVar15 == (int *)0x0) {
              piVar9 = (int *)&DAT_00000028;
            }
            if (*piVar9 == 0) {
              TSet<TTuple<unsigned_int,Audio::FMixerBus>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerBus,0>,FDefaultSetAllocator>
              ::Remove(param_1 + 0x10,iVar1);
            }
          }
        }
        piVar12 = piVar12 + 1;
        uVar20 = uVar20 + 1;
        uVar17 = local_res18[0];
      } while (uVar20 != uVar14);
    }
    *(int *)plVar13 = 0;
    if (0x7fffffff < *(uint *)((longlong)plVar13 + 4)) {
      TArray<float,FDefaultAllocator>::ResizeTo(local_68,0);
    }
    local_res18[0] = uVar17 + 1;
    uVar18 = (ulonglong)local_res18[0];
    plVar13 = plVar13 + 2;
    if (1 < (int)local_res18[0]) {
      *(undefined4 *)(plVar21 + 0x15) = 0xffffffff;
      plVar21[0x16] = -1;
      if (*plVar21 != 0) {
        iVar1 = (int)param_1[0x1d];
        *(int *)(param_1 + 0x1d) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0xec) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1c,iVar1);
        }
        plVar13 = (longlong *)((longlong)iVar1 * 0x10 + param_1[0x1c]);
        *plVar13 = *plVar21;
        lVar19 = plVar21[1];
        plVar13[1] = lVar19;
        if (lVar19 != 0) {
          LOCK();
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
          UNLOCK();
        }
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
        if (plVar21 != &local_78) {
          *plVar21 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(plVar21 + 1,&plStack_70);
          plVar13 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar7 = plStack_70 + 1;
            lVar19 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar12 = (int *)((longlong)plVar13 + 0xc);
              iVar1 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar1 == 1) {
                (**(code **)(*plStack_70 + 8))(plStack_70,1);
              }
            }
          }
        }
      }
      plVar21[2] = 0;
      plVar7 = (longlong *)plVar21[0x13];
      plVar13 = plVar7 + (longlong)(int)plVar21[0x14] * 3;
      if (plVar7 != plVar13) {
        do {
          lVar19 = *plVar7;
          uVar2 = *(undefined8 *)(param_1[3] + uVar16 * 8);
          FUN_142694030(lVar19 + 0x88,local_res18,uVar2);
          if (local_res18[0] == 0xffffffff) {
            lVar8 = 0;
          }
          else {
            lVar8 = (longlong)(int)local_res18[0] * 0x60 + *(longlong *)(lVar19 + 0x88);
          }
          if (*(int *)(lVar8 + 0x14) != -1) {
            (**(code **)(**(longlong **)(lVar19 + 0x128) + 0x28))();
          }
          TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
          ::Remove(lVar19 + 0x88,uVar2);
          plVar7 = plVar7 + 3;
        } while (plVar7 != plVar13);
        uVar16 = (ulonglong)param_2;
      }
      TArray<Audio::FMixerSourceSubmixSend,FDefaultAllocator>::Reset(plVar21 + 0x13,0);
      bVar4 = *(byte *)((longlong)plVar21 + 0x479);
      if ((bVar4 & 1) != 0) {
        (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],uVar16 & 0xffffffff);
        bVar4 = *(byte *)((longlong)plVar21 + 0x479);
      }
      if ((bVar4 & 2) != 0) {
        (**(code **)(**(longlong **)(*param_1 + 0x60) + 0x18))
                  (*(longlong **)(*param_1 + 0x60),uVar16 & 0xffffffff);
        bVar4 = *(byte *)((longlong)plVar21 + 0x479);
      }
      if ((bVar4 & 4) != 0) {
        (**(code **)(**(longlong **)(*param_1 + 0x50) + 0x28))
                  (*(longlong **)(*param_1 + 0x50),uVar16 & 0xffffffff);
      }
      *(undefined4 *)(plVar21 + 0x40) = 0xffffffff;
      FUN_142a926b0(param_1,uVar16 & 0xffffffff);
      *(undefined1 *)(plVar21 + 0x45) = 1;
      *(undefined4 *)(plVar21 + 0x5c) = 0;
      lVar19 = *param_1;
      lVar8 = (longlong)(int)uVar16;
      uVar2 = *(undefined8 *)(param_1[3] + lVar8 * 8);
      puVar10 = (undefined8 *)operator_new(0x10);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = uVar2;
        puVar3 = *(undefined8 **)(lVar19 + 0x950);
        *(undefined8 **)(lVar19 + 0x950) = puVar10;
        *puVar3 = puVar10;
      }
      *(undefined8 *)(param_1[3] + lVar8 * 8) = 0;
      *(undefined1 *)(plVar21 + 0x1d) = 1;
      *(undefined4 *)((longlong)plVar21 + 0xec) = 0xbf800000;
      *(undefined4 *)(plVar21 + 0x1e) = 0xbf800000;
      *(undefined8 *)((longlong)plVar21 + 0xf4) = 0;
      *(undefined8 *)((longlong)plVar21 + 0xfc) = 0;
      *(undefined4 *)((longlong)plVar21 + 0x104) = 0xbf800000;
      *(undefined4 *)(plVar21 + 0x21) = 0xbf800000;
      *(undefined1 *)((longlong)plVar21 + 0x11c) = 1;
      *(undefined1 *)(plVar21 + 0x26) = 1;
      *(undefined4 *)((longlong)plVar21 + 0x15c) = 0;
      *(undefined4 *)(plVar21 + 0x2c) = 0x3f800000;
      Audio::FOnePoleLPFBank::ClearMemory();
      (**(code **)(plVar21[0x2d] + 0x50))();
      local_60[0] = (longlong *)0x0;
      if ((longlong **)(plVar21 + 3) != &local_68) {
        plVar21[3] = 0;
        local_68 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(plVar21 + 4,local_60);
        plVar13 = local_60[0];
        if (local_60[0] != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60[0] + 1;
          lVar19 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*local_60[0])(local_60[0]);
            LOCK();
            piVar12 = (int *)((longlong)plVar13 + 0xc);
            iVar1 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)(*local_60[0] + 8))(local_60[0],1);
            }
          }
        }
      }
      *(undefined4 *)(plVar21 + 5) = 0;
      *(undefined4 *)(plVar21 + 7) = 0;
      if ((*(int *)((longlong)plVar21 + 0x3c) < 0) && (*(int *)((longlong)plVar21 + 0x3c) != 0)) {
        TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar21 + 6,0);
      }
      *(undefined4 *)(plVar21 + 0xb) = 0;
      if ((*(int *)((longlong)plVar21 + 0x5c) < 0) && (*(int *)((longlong)plVar21 + 0x5c) != 0)) {
        TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar21 + 10,0);
      }
      *(undefined4 *)(plVar21 + 0x57) = 0;
      if ((*(int *)((longlong)plVar21 + 700) < 0) && (*(int *)((longlong)plVar21 + 700) != 0)) {
        TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar21 + 0x56,0);
      }
      *(undefined4 *)(plVar21 + 0xd) = 0;
      if ((*(int *)((longlong)plVar21 + 0x6c) < 0) && (*(int *)((longlong)plVar21 + 0x6c) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar21 + 0xc,0);
      }
      *(undefined4 *)(plVar21 + 0xf) = 0;
      if ((*(int *)((longlong)plVar21 + 0x7c) < 0) && (*(int *)((longlong)plVar21 + 0x7c) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar21 + 0xe,0);
      }
      plVar13 = plVar21 + 0x90;
      *(byte *)((longlong)plVar21 + 0x47a) = *(byte *)((longlong)plVar21 + 0x47a) & 0xfc;
      plVar21[0x10] = 0;
      *(byte *)((longlong)plVar21 + 0x479) = *(byte *)((longlong)plVar21 + 0x479) & 0x40 | 8;
      plVar21[0x11] = 0;
      plVar21[0x12] = 0;
      plVar21[0x70] = 0;
      *(undefined1 *)(plVar21 + 0x8f) = 0;
      if (plVar13 != local_88) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        *plVar13 = 0;
        plVar21[0x91] = 0;
      }
      plVar21[0x92] = 0;
      piVar12 = (int *)((longlong)plVar21 + 0x3a4);
      lVar19 = 6;
      do {
        piVar12[-1] = 0;
        if ((*piVar12 < 0) && (*piVar12 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(piVar12 + -3,0);
        }
        piVar12[-5] = 0;
        if ((piVar12[-4] < 0) && (piVar12[-4] != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeTo(piVar12 + -7);
        }
        *(undefined1 *)(piVar12 + 1) = 0;
        piVar12 = piVar12 + 10;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      *(undefined1 *)(lVar8 + param_1[0x22]) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 142a91f00 Remove body=231 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned_int,Audio::FMixerBus>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerBus,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x78;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x78;
        uVar7 = (longlong)*(int *)(lVar3 + 0x74 + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000142a91f8f;
      }
      iVar5 = *(int *)(lVar3 + 0x70 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000142a91f8f:
  if (iVar1 == -1) {
LAB_142a91fb0:
    Audio::FMixerBus::~FMixerBus(*param_1 + 8 + lVar3);
    TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x70);
    goto LAB_142a91fb0;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x78 + 0x70 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x000142a91f8f;
}



// FUNCTION 142a91ff0 FUN_142a91ff0 body=143 status=ok
// SIG undefined FUN_142a91ff0(void)

void FUN_142a91ff0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((param_2 != 0) && (lVar2 = FUN_142a84f20(), lVar2 != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      local_68 = (undefined4)lVar2;
      uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20);
      *puVar3 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar3 + 1) = local_68;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_64;
      *(undefined4 *)(puVar3 + 2) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_5c;
    }
    local_58[0] = &LAB_142a7fe10;
    Audio::FMixerDevice::AudioRenderThreadCommand(lVar2,local_58);
  }
  return;
}



// FUNCTION 142a92080 FUN_142a92080 body=401 status=ok
// SIG undefined FUN_142a92080(void)

void FUN_142a92080(undefined8 param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  void *local_28;
  undefined8 local_20;
  
  lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar5 == 0) {
    return;
  }
  if ((*(uint *)(lVar5 + 0x830) & 0x4000) == 0) {
    return;
  }
  iVar3 = FUN_1428cf800(lVar5);
  if (iVar3 == 1) {
    return;
  }
  plVar6 = (longlong *)UWorld::GetAudioDevice(lVar5);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)(plVar6 + 0x6b) & 0x20) == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  local_28 = (void *)0x0;
  local_20 = 0;
  cVar2 = (**(code **)(*plVar6 + 0xe0))(plVar6,uVar1,&local_28);
  if ((cVar2 == '\0') && (&local_28 != (void **)(param_2 + 0x28))) {
    iVar3 = *(int *)(param_2 + 0x30);
    _Src = *(void **)(param_2 + 0x28);
    local_20 = CONCAT44(local_20._4_4_,iVar3);
    if ((iVar3 == 0) && (local_20._4_4_ == 0)) {
      local_20 = 0;
      local_20._0_4_ = 0;
      goto LAB_142a92181;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,iVar3);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar3 << 4);
  }
LAB_142a92181:
  if (param_3 < (int)local_20) {
    iVar4 = ((int)local_20 - param_3) + -1;
    iVar3 = (int)local_20;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_3 * 0x10 + (longlong)local_28),
                 (void *)((longlong)(param_3 + 1) * 0x10 + (longlong)local_28),(longlong)iVar4 << 4)
      ;
      iVar3 = (int)local_20;
    }
    local_20 = CONCAT44(local_20._4_4_,iVar3 + -1);
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_28);
  }
  (**(code **)(*plVar6 + 0xd8))(plVar6,uVar1,&local_28,*(byte *)(param_2 + 0x38) & 1);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a92220 Reset body=266 status=ok
// SIG undefined Reset(void)

void TArray<Audio::FMixerSourceSubmixSend,FDefaultAllocator>::Reset(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar7 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(*param_1 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        plVar6 = plVar6 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(*param_1 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        plVar6 = plVar6 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 142a92330 FUN_142a92330 body=326 status=ok
// SIG undefined FUN_142a92330(void)

void FUN_142a92330(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_38 + 0x10 + (longlong)local_1c * 0x28);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar7 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar4 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar6 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar7;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(lVar5 + uVar6 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 142a92480 Reset body=169 status=ok
// SIG undefined Reset(void)

void Audio::FDelay::Reset(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 8),0,(longlong)*(int *)(param_1 + 0x10) << 2);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  fVar3 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x24);
  if (ABS(fVar3) < *(float *)(param_1 + 0x28)) {
    fVar3 = *(float *)(param_1 + 0x20);
  }
  else {
    fVar3 = fVar3 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar3;
    fVar3 = fVar3 * *(float *)(param_1 + 0x1c) * 0.001;
    *(float *)(param_1 + 0x20) = fVar3;
  }
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = (float)(*(int *)(param_1 + 0x10) + -1), fVar3 <= fVar2)) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x20) = fVar2;
  iVar1 = -(int)(fVar2 + 1.0);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 < 0) {
    *(int *)(param_1 + 0x14) = iVar1 + *(int *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142a92530 FUN_142a92530 body=117 status=ok
// SIG undefined FUN_142a92530(void)

void FUN_142a92530(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x9b0;
  if (param_2 == 0) {
    param_2 = 0;
    lVar1 = 0;
  }
  param_1[0xb] = param_2;
  *param_1 = lVar1;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xffe0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x17) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xbf800000;
  param_1[0x19] = -0x40800000;
  LOCK();
  lVar1 = param_1[0x16];
  *(undefined4 *)(param_1 + 0x16) = 0;
  UNLOCK();
  FUN_142a92330(param_1 + 1,param_2,(int)lVar1);
  return;
}



// FUNCTION 142a925d0 Reset body=213 status=ok
// SIG undefined Reset(void)

void Audio::FOutputBuffer::Reset(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = iVar1 + param_2;
  *(int *)(param_1 + 0x10) = iVar2;
  if (*(int *)(param_1 + 0x14) < iVar2) {
    TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(param_1 + 8);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4),0,(longlong)param_2 << 2);
  if (*(int *)(param_1 + 0x28) == 2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((*(int *)(param_1 + 0x24) < 0) && (*(int *)(param_1 + 0x24) != 0)) {
      TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeTo(param_1 + 0x18);
    }
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = iVar1 + param_2 * 2;
    *(int *)(param_1 + 0x20) = iVar2;
    if (*(int *)(param_1 + 0x24) < iVar2) {
      TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeGrow(param_1 + 0x18);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x18)),0,(longlong)(param_2 * 2));
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  UNLOCK();
  return;
}



// FUNCTION 142a926b0 FUN_142a926b0 body=277 status=ok
// SIG undefined FUN_142a926b0(void)

void FUN_142a926b0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar8 = (longlong)param_2 * 0x4b0;
  uVar4 = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(int *)(lVar8 + 0x210 + lVar1)) {
    do {
      FSoundEffectBase::UnregisterWithPreset
                (*(undefined8 *)(*(longlong *)(lVar8 + 0x208 + lVar1) + uVar7));
      lVar3 = *(longlong *)(lVar8 + 0x208 + lVar1);
      puVar2 = *(undefined8 **)(uVar7 + lVar3);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        lVar3 = *(longlong *)(lVar8 + 0x208 + lVar1);
      }
      *(undefined8 *)(uVar7 + lVar3) = 0;
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      uVar7 = uVar7 + 8;
    } while ((int)uVar6 < *(int *)(lVar8 + 0x210 + lVar1));
  }
  lVar3 = lVar1 + 0x208 + lVar8;
  *(undefined4 *)(lVar3 + 8) = 0;
  if (0x7fffffff < *(uint *)(lVar3 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar3,0);
  }
  uVar5 = uVar4;
  if (0 < *(int *)(lVar8 + 0x220 + lVar1)) {
    do {
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
      *(undefined8 *)(uVar5 + *(longlong *)(lVar8 + 0x218 + lVar1)) = 0;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(lVar8 + 0x220 + lVar1));
  }
  lVar8 = lVar1 + 0x218 + lVar8;
  *(undefined4 *)(lVar8 + 8) = 0;
  if ((*(int *)(lVar8 + 0xc) < 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar8,0);
    return;
  }
  return;
}



// FUNCTION 142a927d0 ResizeForCopy body=117 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<float,TAlignedHeapAllocator<16>_>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 2,0x10);
    iVar1 = (int)(uVar2 >> 2);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 2,0x10);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 142a92850 ResizeGrow body=126 status=ok
// SIG undefined ResizeGrow(void)

void TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 * 4,0x10);
  iVar2 = (int)(uVar3 >> 2);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 2,0x10);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 142a928d0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<Audio::FMixerSourceManager::FSourceInfo,FDefaultAllocator>::ResizeGrow
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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x4b0,0);
  iVar4 = (int)(uVar3 / 0x4b0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x4b0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 142a92960 ResizeShrink body=125 status=ok
// SIG undefined ResizeShrink(void)

void TArray<unsigned_char,TAlignedHeapAllocator<16>_>::ResizeShrink(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  iVar1 = (int)param_1[1];
  if ((0x3fff < (uint)(iVar3 - iVar1)) || (iVar1 * 3 < iVar3 * 2)) {
    if (0x40 < (uint)(iVar3 - iVar1)) {
      if (0 < iVar1) {
        iVar1 = FMemory::QuantizeSize((longlong)iVar1,0x10);
        iVar3 = *(int *)((longlong)param_1 + 0xc);
      }
      goto LAB_142a929b2;
    }
    if (iVar1 == 0) goto LAB_142a929b2;
  }
  iVar1 = iVar3;
LAB_142a929b2:
  if (iVar1 != iVar3) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1,0x10);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 142a929e0 ResizeShrink body=143 status=ok
// SIG undefined ResizeShrink(void)

void TArray<float,TAlignedHeapAllocator<16>_>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 2)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 2,0x10);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 2);
      }
      goto LAB_142a92a40;
    }
    if (iVar3 == 0) goto LAB_142a92a40;
  }
  iVar3 = iVar4;
LAB_142a92a40:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 2,0x10);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 142a92a70 ResizeTo body=105 status=ok
// SIG undefined ResizeTo(void)

void TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 2,0x10);
    iVar1 = (int)(uVar2 >> 2);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 2,0x10);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 142a92b20 RunInternal body=280 status=ok
// SIG undefined RunInternal(void)

undefined8 Audio::IAudioMixerPlatformInterface::RunInternal(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  LARGE_INTEGER local_res8;
  
  if ((int)param_1[0x1c] == 1) {
    lVar2 = param_1[0x18];
  }
  else {
    lVar2 = param_1[0x1a];
  }
  (**(code **)(*param_1 + 0xb0))(param_1,lVar2);
  FOutputBuffer::MixNextBuffer((longlong)*(int *)((longlong)param_1 + 0x114) * 0x30 + param_1[0x15])
  ;
  iVar1 = (int)param_1[0xd];
  do {
    if (iVar1 == 3) {
      (**(code **)(*(longlong *)param_1[0x12] + 8))();
      *(undefined4 *)(param_1 + 0xd) = 2;
      return 0;
    }
    QueryPerformanceCounter(&local_res8);
    *(DWORD *)(param_1 + 0x2d) = local_res8.s.LowPart;
    if ((int)param_1[0x22] != *(int *)((longlong)param_1 + 0x114)) {
      do {
        LOCK();
        bVar3 = *(int *)((longlong)param_1 + 0x194) == 0;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x194) = 0;
        }
        UNLOCK();
        if (bVar3) break;
        FOutputBuffer::MixNextBuffer
                  ((longlong)*(int *)((longlong)param_1 + 0x114) * 0x30 + param_1[0x15]);
        iVar1 = (*(int *)((longlong)param_1 + 0x114) + 1) % (int)param_1[0x23];
        *(int *)((longlong)param_1 + 0x114) = iVar1;
      } while ((int)param_1[0x22] != iVar1);
    }
    FAudioRenderTimeAnalysis::End(param_1 + 0x29);
    (**(code **)(*(longlong *)param_1[0x1f] + 0x20))((longlong *)param_1[0x1f],0xffffffff,0);
    iVar1 = (int)param_1[0xd];
  } while( true );
}



// FUNCTION 142a92c60 SetAnalogMode body=224 status=ok
// SIG undefined SetAnalogMode(void)

void Audio::FDynamicsProcessor::SetAnalogMode(longlong param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = 0;
  *(char *)(param_1 + 0x79) = param_2;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(char *)(lVar3 + 0x24 + lVar2) = param_2;
      if (param_2 == '\0') {
        fVar5 = -4605.1704;
      }
      else {
        fVar5 = -1002.3935;
      }
      fVar1 = *(float *)(lVar3 + 0xc + lVar2);
      fVar5 = ::_guard_xfg_dispatch_icall_nop(fVar5 / (fVar1 * *(float *)(lVar3 + 0x10 + lVar2)));
      *(float *)(lVar3 + 0x14 + lVar2) = fVar5;
      if (param_2 == '\0') {
        fVar5 = -4605.1704;
      }
      else {
        fVar5 = -1002.3935;
      }
      fVar5 = ::_guard_xfg_dispatch_icall_nop(fVar5 / (fVar1 * *(float *)(lVar3 + 0x18 + lVar2)));
      *(float *)(lVar3 + 0x1c + lVar2) = fVar5;
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 142a92d40 SetAttackTime body=178 status=ok
// SIG undefined SetAttackTime(void)

void Audio::FDynamicsProcessor::SetAttackTime(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  *(float *)(param_1 + 0x5c) = param_2;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(float *)(lVar2 + 0x10 + lVar1) = param_2;
      if (*(char *)(lVar2 + 0x24 + lVar1) == '\0') {
        fVar4 = -4605.1704;
      }
      else {
        fVar4 = -1002.3935;
      }
      fVar4 = ::_guard_xfg_dispatch_icall_nop(fVar4 / (param_2 * *(float *)(lVar2 + 0xc + lVar1)));
      *(float *)(lVar2 + 0x14 + lVar1) = fVar4;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 142a92e00 FUN_142a92e00 body=364 status=ok
// SIG undefined FUN_142a92e00(void)

void FUN_142a92e00(undefined8 param_1,longlong param_2,int param_3,byte param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  void *local_38;
  undefined8 local_30;
  
  lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((((lVar5 != 0) && ((*(uint *)(lVar5 + 0x830) & 0x4000) != 0)) &&
      (iVar4 = FUN_1428cf800(lVar5), iVar4 != 1)) &&
     ((plVar6 = (longlong *)UWorld::GetAudioDevice(lVar5), plVar6 != (longlong *)0x0 &&
      ((*(byte *)(plVar6 + 0x6b) & 0x20) != 0)))) {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    local_38 = (void *)0x0;
    local_30 = 0;
    cVar3 = (**(code **)(*plVar6 + 0xe0))(plVar6,uVar2,&local_38);
    if ((cVar3 == '\0') && (&local_38 != (void **)(param_2 + 0x28))) {
      iVar4 = *(int *)(param_2 + 0x30);
      _Src = *(void **)(param_2 + 0x28);
      local_30 = CONCAT44(local_30._4_4_,iVar4);
      if ((iVar4 == 0) && (local_30._4_4_ == 0)) {
        local_30 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,iVar4);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar4 << 4);
      }
    }
    if (param_3 < (int)local_30) {
      puVar1 = (uint *)((longlong)local_38 + (longlong)param_3 * 0x10 + 8);
      *puVar1 = *puVar1 & 0xfffffffe;
      puVar1 = (uint *)((longlong)local_38 + (longlong)param_3 * 0x10 + 8);
      *puVar1 = *puVar1 | (uint)param_4;
    }
    (**(code **)(*plVar6 + 0xd8))(plVar6,uVar2,&local_38,*(byte *)(param_2 + 0x38) & 1);
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142a92f70 SetDelayMsec body=140 status=ok
// SIG undefined SetDelayMsec(void)

void Audio::FDelay::SetDelayMsec(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_2 * *(float *)(param_1 + 0x1c) * 0.001;
  *(float *)(param_1 + 0x20) = fVar2;
  fVar3 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x24);
  if (*(float *)(param_1 + 0x28) <= ABS(fVar3)) {
    fVar2 = fVar3 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar2;
    fVar2 = fVar2 * *(float *)(param_1 + 0x1c) * 0.001;
  }
  fVar3 = 0.0;
  if ((0.0 <= fVar2) && (fVar3 = (float)(*(int *)(param_1 + 0x10) + -1), fVar2 <= fVar3)) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x20) = fVar3;
  iVar1 = *(int *)(param_1 + 0x18) - (int)(fVar3 + 1.0);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 < 0) {
    *(int *)(param_1 + 0x14) = iVar1 + *(int *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142a93000 FUN_142a93000 body=209 status=ok
// SIG undefined FUN_142a93000(void)

void FUN_142a93000(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x728);
  plVar4 = *(longlong **)(lVar5 + 0x38);
  lVar5 = *(longlong *)(lVar5 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x78) < 1) {
      lVar5 = 0;
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x70) + 0x10);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x70) + 8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
    }
    if (lVar5 != 0) {
      FUN_142a93330();
    }
    if (plVar6 != (longlong *)0x0) {
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
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return;
}



// FUNCTION 142a930e0 SetEffectParameters body=588 status=ok
// SIG undefined SetEffectParameters(void)

void FSubmixEffectReverb::SetEffectParameters(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar2 = *(float *)(param_2 + 0x24) * 0.3164557;
  if (0.0 <= fVar2) {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar3 = *(float *)(param_2 + 0x28) * 3.3333333;
  if (0.0 <= fVar3) {
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar9 = *(float *)(param_2 + 0x18);
  if (0.0 <= fVar9) {
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  fVar4 = *(float *)(param_2 + 0x30) * 10.0;
  if (0.0 <= fVar4) {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar12 = *(float *)(param_2 + 0x14);
  if (0.0 <= fVar12) {
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
  }
  else {
    fVar12 = 0.0;
  }
  fVar5 = *(float *)(param_2 + 0x34);
  if (0.0 <= fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar10 = *(float *)(param_2 + 0x10);
  if (0.0 <= fVar10) {
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
  }
  else {
    fVar10 = 0.0;
  }
  fVar6 = (*(float *)(param_2 + 0x20) - 0.1) * 0.5263158;
  if (0.0 <= fVar6) {
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = 0.0;
  }
  fVar11 = *(float *)(param_2 + 0xc);
  if (0.0 <= fVar11) {
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
  }
  else {
    fVar11 = 0.0;
  }
  fVar7 = *(float *)(param_2 + 8) * 0.1;
  if (0.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  uVar8 = FRichCurve::Eval(param_1 + 0x8f8,*(undefined4 *)(param_2 + 0x1c));
  if (fVar12 <= 1e-08) {
    fVar12 = 1e-08;
  }
  fVar12 = ::_guard_xfg_dispatch_icall_nop(fVar12);
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
  }
  *(undefined1 *)(param_1 + 0x898) = 1;
  *(ulonglong *)(param_1 + 0x89c) = CONCAT44(fVar3 * 300.0,fVar2);
  *(ulonglong *)(param_1 + 0x8a4) = CONCAT44(0x3f000000,fVar9);
  *(undefined4 *)(param_1 + 0x8ac) = 0x3f333333;
  *(float *)(param_1 + 0x8b0) = fVar4 * 100.0;
  *(float *)(param_1 + 0x8b4) = fVar12 * 8.685889;
  *(float *)(param_1 + 0x8b8) = fVar5 * 0.799 + 0.2;
  *(float *)(param_1 + 0x8bc) = fVar10;
  *(float *)(param_1 + 0x8c0) = fVar6 * 0.999;
  *(undefined4 *)(param_1 + 0x8c4) = uVar8;
  *(float *)(param_1 + 0x8c8) = fVar11 * 0.99 + 0.01;
  *(float *)(param_1 + 0x8cc) = fVar7 * 10.0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8d0));
  *(undefined1 *)(param_1 + 0x968) = 1;
  return;
}



// FUNCTION 142a93330 FUN_142a93330 body=1229 status=ok
// SIG undefined FUN_142a93330(void)

void FUN_142a93330(longlong param_1,longlong param_2)

{
  float **ppfVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  float *pfVar5;
  float *pfVar6;
  float *_Src;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float _X;
  float local_d8;
  float fStack_d4;
  uint uStack_cc;
  float *local_c8;
  int local_c0;
  int local_bc;
  
  local_d8 = *(float *)(param_2 + 8);
  local_c8 = (float *)0x0;
  local_bc = 0;
  if (20.0 <= local_d8) {
    if (20000.0 <= local_d8) {
      local_d8 = 20000.0;
    }
  }
  else {
    local_d8 = 20.0;
  }
  fStack_d4 = *(float *)(param_2 + 0x10);
  if (0.1 <= fStack_d4) {
    if (2.0 <= fStack_d4) {
      fStack_d4 = 2.0;
    }
  }
  else {
    fStack_d4 = 0.1;
  }
  fVar9 = *(float *)(param_2 + 0xc);
  if (0.001 <= fVar9) {
    if (7.94 <= fVar9) {
      fVar9 = 7.94;
    }
  }
  else {
    fVar9 = 0.001;
  }
  if (fVar9 <= 1e-08) {
    fVar9 = 1e-08;
  }
  fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
  local_c0 = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c8,0);
  _Src = local_c8;
  *local_c8 = local_d8;
  local_c8[1] = fStack_d4;
  local_c8[2] = fVar9 * 8.685889;
  local_c8[3] = (float)(uStack_cc | 1);
  local_d8 = *(float *)(param_2 + 0x14);
  if (20.0 <= local_d8) {
    if (20000.0 <= local_d8) {
      local_d8 = 20000.0;
    }
  }
  else {
    local_d8 = 20.0;
  }
  fStack_d4 = *(float *)(param_2 + 0x1c);
  if (0.1 <= fStack_d4) {
    if (2.0 <= fStack_d4) {
      fStack_d4 = 2.0;
    }
  }
  else {
    fStack_d4 = 0.1;
  }
  fVar9 = *(float *)(param_2 + 0x18);
  if (0.001 <= fVar9) {
    if (7.94 <= fVar9) {
      fVar9 = 7.94;
    }
  }
  else {
    fVar9 = 0.001;
  }
  if (fVar9 <= 1e-08) {
    fVar9 = 1e-08;
  }
  fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
  iVar2 = local_c0;
  lVar8 = (longlong)local_c0;
  local_c0 = local_c0 + 1;
  if (local_bc < local_c0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c8,iVar2);
    _Src = local_c8;
  }
  iVar7 = local_bc;
  iVar2 = local_c0;
  *(ulonglong *)(_Src + lVar8 * 4) = CONCAT44(fStack_d4,local_d8);
  *(ulonglong *)(_Src + lVar8 * 4 + 2) = CONCAT44(uStack_cc,fVar9 * 8.685889) | 0x100000000;
  local_d8 = *(float *)(param_2 + 0x20);
  if (20.0 <= local_d8) {
    if (20000.0 <= local_d8) {
      local_d8 = 20000.0;
    }
  }
  else {
    local_d8 = 20.0;
  }
  fStack_d4 = *(float *)(param_2 + 0x28);
  if (0.1 <= fStack_d4) {
    if (2.0 <= fStack_d4) {
      fStack_d4 = 2.0;
    }
  }
  else {
    fStack_d4 = 0.1;
  }
  fVar9 = *(float *)(param_2 + 0x24);
  if (0.001 <= fVar9) {
    if (7.94 <= fVar9) {
      fVar9 = 7.94;
    }
  }
  else {
    fVar9 = 0.001;
  }
  if (fVar9 <= 1e-08) {
    fVar9 = 1e-08;
  }
  fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
  local_c0 = iVar2 + 1;
  if (iVar7 < local_c0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c8,iVar2);
    _Src = local_c8;
    iVar7 = local_bc;
  }
  iVar3 = local_c0;
  *(ulonglong *)(_Src + (longlong)iVar2 * 4) = CONCAT44(fStack_d4,local_d8);
  *(ulonglong *)(_Src + (longlong)iVar2 * 4 + 2) =
       CONCAT44(uStack_cc,fVar9 * 8.685889) | 0x100000000;
  local_d8 = *(float *)(param_2 + 0x2c);
  if (20.0 <= local_d8) {
    if (20000.0 <= local_d8) {
      local_d8 = 20000.0;
    }
  }
  else {
    local_d8 = 20.0;
  }
  fStack_d4 = *(float *)(param_2 + 0x34);
  if (0.1 <= fStack_d4) {
    if (2.0 <= fStack_d4) {
      fStack_d4 = 2.0;
    }
  }
  else {
    fStack_d4 = 0.1;
  }
  fVar9 = *(float *)(param_2 + 0x30);
  _X = 0.001;
  if ((0.001 <= fVar9) && (_X = fVar9, 7.94 <= fVar9)) {
    _X = 7.94;
  }
  if (_X <= 1e-08) {
    _X = 1e-08;
  }
  fVar9 = _guard_xfg_dispatch_icall_nop(_X);
  local_c0 = iVar3 + 1;
  if (iVar7 < local_c0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c8,iVar3);
    _Src = local_c8;
  }
  iVar2 = local_c0;
  ppfVar1 = (float **)(param_1 + 0xf0);
  pfVar5 = _Src + (longlong)iVar3 * 4;
  *pfVar5 = local_d8;
  pfVar5[1] = fStack_d4;
  pfVar5[2] = fVar9 * 8.685889;
  pfVar5[3] = (float)(uStack_cc | 1);
  if (*(int *)(param_1 + 0xf8) == local_c0) {
    iVar7 = 0;
    if (0 < local_c0) {
      pfVar5 = _Src + 1;
      pfVar6 = *ppfVar1 + 1;
      do {
        if (((((((uint)pfVar5[2] ^ (uint)pfVar6[2]) & 1) != 0) || (1e-08 < ABS(*pfVar5 - *pfVar6)))
            || (1e-08 < ABS(pfVar5[-1] -
                            *(float *)((longlong)pfVar5 + (longlong)*ppfVar1 + (-4 - (longlong)_Src)
                                      )))) || (1e-08 < ABS(pfVar5[1] - pfVar6[1])))
        goto LAB_142a93725;
        iVar7 = iVar7 + 1;
        pfVar5 = pfVar5 + 4;
        pfVar6 = pfVar6 + 4;
      } while (iVar7 < local_c0);
    }
  }
  else {
LAB_142a93725:
    if (ppfVar1 != &local_c8) {
      *(int *)(param_1 + 0xf8) = local_c0;
      if ((local_c0 == 0) && (*(int *)(param_1 + 0xfc) == 0)) {
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(ppfVar1,local_c0);
        _guard_xfg_dispatch_icall_nop(*ppfVar1,_Src,(longlong)iVar2 << 4);
      }
    }
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
    FUN_1408e22e0(param_1 + 0xb8,ppfVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  if (_Src != (float *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 142a93840 SetLookaheadMsec body=248 status=ok
// SIG undefined SetLookaheadMsec(void)

void Audio::FDynamicsProcessor::SetLookaheadMsec(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 8);
      fVar8 = *(float *)(lVar2 + 0x1c + lVar3) * *(float *)(param_1 + 0x58) * 0.001;
      *(float *)(lVar2 + 0x20 + lVar3) = fVar8;
      fVar7 = *(float *)(lVar2 + 0x24 + lVar3);
      fVar6 = *(float *)(lVar2 + 0x2c + lVar3) - fVar7;
      if (*(float *)(lVar2 + 0x28 + lVar3) <= ABS(fVar6)) {
        fVar7 = fVar6 * *(float *)(lVar2 + 0x30 + lVar3) + fVar7;
        *(float *)(lVar2 + 0x24 + lVar3) = fVar7;
        fVar8 = fVar7 * *(float *)(lVar2 + 0x1c + lVar3) * 0.001;
      }
      iVar1 = *(int *)(lVar2 + 0x10 + lVar3);
      if (0.0 <= fVar8) {
        fVar7 = (float)(iVar1 + -1);
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
      }
      else {
        fVar7 = 0.0;
      }
      *(float *)(lVar2 + 0x20 + lVar3) = fVar7;
      iVar4 = *(int *)(lVar2 + 0x18 + lVar3) - (int)(fVar7 + 1.0);
      *(int *)(lVar2 + 0x14 + lVar3) = iVar4;
      if (iVar4 < 0) {
        *(int *)(lVar2 + 0x14 + lVar3) = iVar4 + iVar1;
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 0x40;
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 142a93940 FUN_142a93940 body=254 status=ok
// SIG undefined FUN_142a93940(void)

void FUN_142a93940(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  plVar7 = (longlong *)param_2[1];
  uVar4 = *param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_28 = 0;
  local_18 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14467a5d8;
    puVar6[1] = param_1;
    puVar6[2] = uVar4;
    puVar6[3] = plVar7;
    plVar7 = (longlong *)0x0;
  }
  local_58[0] = &LAB_142a7fdc0;
  Audio::FMixerSubmix::SubmixCommand(param_1,local_58);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 142a93a80 SetReleaseTime body=178 status=ok
// SIG undefined SetReleaseTime(void)

void Audio::FDynamicsProcessor::SetReleaseTime(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  *(float *)(param_1 + 0x60) = param_2;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(float *)(lVar2 + 0x18 + lVar1) = param_2;
      if (*(char *)(lVar2 + 0x24 + lVar1) == '\0') {
        fVar4 = -4605.1704;
      }
      else {
        fVar4 = -1002.3935;
      }
      fVar4 = ::_guard_xfg_dispatch_icall_nop(fVar4 / (param_2 * *(float *)(lVar2 + 0xc + lVar1)));
      *(float *)(lVar2 + 0x1c + lVar1) = fVar4;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 142a93b40 FUN_142a93b40 body=209 status=ok
// SIG undefined FUN_142a93b40(void)

void FUN_142a93b40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x728);
  plVar4 = *(longlong **)(lVar5 + 0x18);
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x78) < 1) {
      lVar5 = 0;
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x70) + 0x10);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x70) + 8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
    }
    if (lVar5 != 0) {
      FSubmixEffectReverb::SetEffectParameters();
    }
    if (plVar6 != (longlong *)0x0) {
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
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return;
}



// FUNCTION 142a93c20 SetSettings body=428 status=ok
// SIG undefined SetSettings(void)

void Audio::FPlateReverb::SetSettings(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2;
  if (0.0 <= fVar1) {
    if (0.9999 <= fVar1) {
      fVar1 = 0.9999;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x40) = fVar1;
  fVar1 = param_2[1];
  if (0.0 <= fVar1) {
    if (1000.0 <= fVar1) {
      fVar1 = 1000.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x44) = fVar1;
  fVar1 = param_2[2];
  if (0.0 <= fVar1) {
    if (0.99999 <= fVar1) {
      fVar1 = 0.99999;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  fVar1 = param_2[3];
  if (0.0001 <= fVar1) {
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0001;
  }
  *(float *)(param_1 + 0x4c) = fVar1;
  fVar1 = param_2[4];
  if (0.0 <= fVar1) {
    if (0.99999 <= fVar1) {
      fVar1 = 0.99999;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x50) = fVar1;
  FEarlyReflections::ApplySettings();
  fVar1 = param_2[5];
  if (0.0 <= fVar1) {
    if (2000.0 <= fVar1) {
      fVar1 = 2000.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x14) = fVar1;
  fVar1 = param_2[6];
  if (0.0 <= fVar1) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x18) = fVar1;
  fVar1 = param_2[7];
  if (0.0 <= fVar1) {
    if (0.99999 <= fVar1) {
      fVar1 = 0.99999;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar1 = param_2[9];
  if (0.0 <= fVar1) {
    if (0.999999 <= fVar1) {
      fVar1 = 0.999999;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x24) = fVar1;
  fVar1 = param_2[8];
  if (0.0 <= fVar1) {
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x20) = fVar1;
  fVar1 = param_2[10];
  fVar2 = 0.0001;
  if ((0.0001 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x28) = fVar2;
  fVar1 = param_2[0xb];
  if (0.0 <= fVar1) {
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x2c) = fVar1;
  fVar1 = param_2[0xc];
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 10.0 <= fVar1)) {
    fVar2 = 10.0;
  }
  *(float *)(param_1 + 0x30) = fVar2;
  ApplySettings(param_1);
  return;
}



// FUNCTION 142a93dd0 SetSettings body=107 status=ok
// SIG undefined SetSettings(void)

void USubmixEffectDynamicsProcessorPreset::SetSettings(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  BOOL BVar5;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = param_2[4];
  USoundEffectPreset::Update(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142a93e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 142a93e40 SetSettings body=105 status=ok
// SIG undefined SetSettings(void)

void USubmixEffectReverbPreset::SetSettings(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  BOOL BVar5;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  USoundEffectPreset::Update(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142a93ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 142a93eb0 SetSettings body=91 status=ok
// SIG undefined SetSettings(void)

void USubmixEffectSubmixEQPreset::SetSettings(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  FUN_1408e22e0(param_1 + 0x68,param_2);
  USoundEffectPreset::Update(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142a93f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 142a93f10 SetSettingsWithReverbEffect body=118 status=ok
// SIG undefined SetSettingsWithReverbEffect(void)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect
               (longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x4c);
    uVar1 = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0xc4) = param_3;
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    USoundEffectPreset::Update();
    return;
  }
  return;
}



// FUNCTION 142a93f90 FUN_142a93f90 body=17 status=ok
// SIG undefined FUN_142a93f90(void)

void FUN_142a93f90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uStackX_20;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  code *apcStack_68 [2];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  undefined4 uStack_28;
  
  lVar2 = *(longlong *)(param_1 + 0x620);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_14233c7a0();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x6b0);
    uStack_38 = 0;
    uStack_28 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x28,auStack_58);
    if (puVar4 != (undefined8 *)0x0) {
      uStack_88 = (undefined4)lVar3;
      uStack_84 = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_80 = (undefined4)uVar1;
      uStack_7c = (undefined4)((ulonglong)uVar1 >> 0x20);
      *puVar4 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar4 + 1) = uStack_88;
      *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_84;
      *(undefined4 *)(puVar4 + 2) = uStack_80;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_7c;
      puVar4[3] = param_2;
      puVar4[4] = CONCAT44(uStack_6c,param_3);
    }
    apcStack_68[0] =
         UE4Function_Private::
         TFunctionRefCaller<<lambda_fff97fdabcd2abb92fe06fbbc979fa94>,void___cdecl(void)>::Call;
    FUN_1422f8a30(apcStack_68,uStackX_20);
  }
  return;
}



// FUNCTION 142a93fb0 FUN_142a93fb0 body=248 status=ok
// SIG undefined FUN_142a93fb0(void)

void FUN_142a93fb0(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  plVar6 = (longlong *)param_3[1];
  uVar7 = *param_3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_3 + 2);
  uVar5 = *(undefined1 *)((longlong)param_3 + 0x14);
  local_48 = 0;
  local_38 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x30,local_68);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_1454d5248;
    puVar9[1] = param_1;
    *(undefined4 *)(puVar9 + 2) = param_2;
    puVar9[3] = uVar7;
    puVar9[4] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 5) = uVar3;
    *(undefined1 *)((longlong)puVar9 + 0x2c) = uVar5;
  }
  local_78[0] = &LAB_142a7fb80;
  Audio::FMixerSourceManager::AudioMixerThreadCommand(param_1,local_78);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 142a940b0 FUN_142a940b0 body=614 status=ok
// SIG undefined FUN_142a940b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a941be) */
/* WARNING: Removing unreachable block (ram,0x000142a941ca) */
/* WARNING: Removing unreachable block (ram,0x000142a941e3) */

void FUN_142a940b0(undefined8 *param_1,longlong *param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong *plStack_78;
  float local_70;
  undefined1 local_6c;
  undefined1 local_68 [8];
  undefined4 *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1 + 0x1a) & 8) == 0) {
    lVar3 = *param_2;
    if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
      puVar6 = (undefined8 *)param_1[9];
      if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
        puVar6 = param_1 + 8;
      }
      iVar5 = *(int *)((longlong)puVar6 +
                      ((longlong)*(int *)(param_1 + 10) - 1U & (longlong)*(int *)(lVar3 + 8)) * 4);
      if (iVar5 != -1) {
        do {
          lVar7 = param_1[1] + (longlong)iVar5 * 0x28;
          if (*(int *)(param_1[1] + (longlong)iVar5 * 0x28) == *(int *)(lVar3 + 8)) {
            if (iVar5 != -1) goto LAB_142a94161;
            break;
          }
          iVar5 = *(int *)(lVar7 + 0x20);
        } while (iVar5 != -1);
      }
    }
    lVar7 = 0;
LAB_142a94161:
    lVar8 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    if (lVar8 == 0) {
      plStack_78 = (longlong *)param_2[1];
      if (plStack_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
        UNLOCK();
      }
      local_90._0_4_ = (undefined4)lVar3;
      local_90._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_88._0_4_ = SUB84(plStack_78,0);
      uStack_88._4_4_ = (undefined4)((ulonglong)plStack_78 >> 0x20);
      uStack_44 = uStack_88._4_4_;
      uStack_48 = (undefined4)uStack_88;
      uStack_4c = local_90._4_4_;
      local_50 = (undefined4)local_90;
      uStack_88 = 0;
      local_90 = 0;
      local_6c = 0;
      local_98[0] = *(undefined4 *)(*param_2 + 8);
      local_60 = local_98;
      local_58 = &local_80;
      local_80 = lVar3;
      local_70 = param_3;
      FUN_142a77f70(param_1 + 1,local_68,&local_60,0);
      FUN_142a93fb0(*param_1,*(undefined4 *)((longlong)param_1 + 0xcc),&local_80);
      plVar4 = plStack_78;
      if (plStack_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_78 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_78)(plStack_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    else if (1e-08 < ABS(*(float *)(lVar8 + 0x10) - param_3)) {
      *(float *)(lVar8 + 0x10) = param_3;
      FUN_142a93fb0(*param_1,*(undefined4 *)((longlong)param_1 + 0xcc));
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142a94320 FUN_142a94320 body=17 status=ok
// SIG undefined FUN_142a94320(void)

void FUN_142a94320(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uStackX_10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  code *apcStack_68 [2];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  undefined4 uStack_28;
  
  lVar2 = *(longlong *)(param_1 + 0x620);
  if (lVar2 == 0) {
    return;
  }
  *(undefined4 *)(lVar2 + 0x310) = param_2;
  *(undefined4 *)(lVar2 + 0x30c) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x308) = 0x3f800000;
  if ((*(byte *)(lVar2 + 0xba) & 4) != 0) {
    lVar3 = FUN_14233c7a0();
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x6b0);
      uStack_38 = 0;
      uStack_28 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x20,auStack_58);
      if (puVar4 != (undefined8 *)0x0) {
        uStack_88 = (undefined4)lVar3;
        uStack_84 = (undefined4)((ulonglong)lVar3 >> 0x20);
        uStack_80 = (undefined4)uVar1;
        uStack_7c = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(puVar4 + 1) = uStack_88;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_84;
        *(undefined4 *)(puVar4 + 2) = uStack_80;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_7c;
        *puVar4 = &PTR_FUN_143f4d0b0;
        puVar4[3] = CONCAT44(uStack_74,param_2);
      }
      apcStack_68[0] = FUN_1423320c0;
      FUN_1422f8a30(apcStack_68,uStackX_10);
    }
  }
  return;
}



// FUNCTION 142a94340 FUN_142a94340 body=1659 status=ok
// SIG undefined FUN_142a94340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a94340(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  
  iVar3 = *(int *)(param_1 + 0x85c);
  iVar4 = *(int *)(param_1 + 0x8d0);
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar10 + 0x38) < DAT_146b29ff8) &&
     (_Init_thread_header(&DAT_146b29ff8), DAT_146b29ff8 == -1)) {
    _DAT_146b29fd8 = *(int *)(param_1 + 0x8d4);
    _DAT_146b29fdc = 0x43dc0000;
    fVar11 = (float)_DAT_146b29fd8;
    _DAT_146b29fd0 = &PTR_FUN_14416bf40;
    _DAT_146b29fe4 = 0x3f800000;
    _DAT_146b29ff0 = 0x3f800000;
    _DAT_146b29fe0 = _guard_xfg_dispatch_icall_nop(2764.6016 / fVar11);
    _DAT_146b29fe0 = _DAT_146b29fe0 * -2.0;
    DAT_146b29fec = _guard_xfg_dispatch_icall_nop(2764.6016 / fVar11);
    atexit((_func_5014 *)&LAB_143ebeb80);
    _Init_thread_footer(&DAT_146b29ff8);
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_146b2a028) &&
     (_Init_thread_header(&DAT_146b2a028), DAT_146b2a028 == -1)) {
    _DAT_146b2a008 = *(int *)(param_1 + 0x8d4);
    _DAT_146b2a00c = 0x435c0000;
    fVar11 = (float)_DAT_146b2a008;
    _DAT_146b2a000 = &PTR_FUN_14416bf40;
    _DAT_146b2a014 = 0x3f800000;
    _DAT_146b2a020 = 0x3f800000;
    _DAT_146b2a010 = _guard_xfg_dispatch_icall_nop(1382.3008 / fVar11);
    _DAT_146b2a010 = _DAT_146b2a010 * -2.0;
    DAT_146b2a01c = _guard_xfg_dispatch_icall_nop(1382.3008 / fVar11);
    atexit((_func_5014 *)&LAB_143ebeb90);
    _Init_thread_footer(&DAT_146b2a028);
  }
  iVar8 = 0;
  if (3 < iVar3) {
    lVar9 = (longlong)(iVar4 * 2);
    lVar1 = (iVar4 - lVar9) * 4;
    lVar10 = lVar9 * 4 + 4;
    uVar5 = (iVar3 - 4U >> 2) + 1;
    lVar2 = (iVar4 * 3 - lVar9) * 4;
    uVar7 = (ulonglong)uVar5;
    iVar8 = uVar5 * 4;
    do {
      fVar11 = DAT_146b29fec * _DAT_146b29fe4;
      lVar6 = *param_2 + lVar9 * -4 + -4;
      DAT_146b29fec = DAT_146b29fe8;
      fVar11 = -(DAT_146b29fe8 * _DAT_146b29fe0) - fVar11;
      _DAT_146b29fe4 = CONCAT44(fVar11,_DAT_146b29fe4);
      *(float *)(lVar6 + lVar10) =
           DAT_146b29ff0 * fVar11 + _DAT_146b29ff4 + *(float *)(lVar6 + lVar10);
      if (1 < iVar4) {
        fVar11 = DAT_146b2a01c * _DAT_146b2a014;
        lVar6 = *param_2 + lVar9 * -4;
        DAT_146b2a01c = DAT_146b2a018;
        fVar11 = -(DAT_146b2a018 * _DAT_146b2a010) - fVar11;
        _DAT_146b2a014 = CONCAT44(fVar11,_DAT_146b2a014);
        *(float *)(lVar6 + lVar10) =
             DAT_146b2a020 * fVar11 + _DAT_146b2a024 + *(float *)(lVar6 + lVar10);
      }
      fVar11 = DAT_146b29fec * _DAT_146b29fe4;
      lVar6 = *param_2 + lVar1 + -4;
      DAT_146b29fec = DAT_146b29fe8;
      fVar11 = -(DAT_146b29fe8 * _DAT_146b29fe0) - fVar11;
      _DAT_146b29fe4 = CONCAT44(fVar11,_DAT_146b29fe4);
      *(float *)(lVar6 + lVar10) =
           DAT_146b29ff0 * fVar11 + _DAT_146b29ff4 + *(float *)(lVar6 + lVar10);
      if (1 < iVar4) {
        fVar11 = DAT_146b2a01c * _DAT_146b2a014;
        lVar6 = *param_2 + lVar1;
        DAT_146b2a01c = DAT_146b2a018;
        fVar11 = -(DAT_146b2a018 * _DAT_146b2a010) - fVar11;
        _DAT_146b2a014 = CONCAT44(fVar11,_DAT_146b2a014);
        *(float *)(lVar6 + lVar10) =
             DAT_146b2a020 * fVar11 + _DAT_146b2a024 + *(float *)(lVar6 + lVar10);
      }
      fVar11 = DAT_146b29fec * _DAT_146b29fe4;
      DAT_146b29fec = DAT_146b29fe8;
      fVar11 = -(DAT_146b29fe8 * _DAT_146b29fe0) - fVar11;
      _DAT_146b29fe4 = CONCAT44(fVar11,_DAT_146b29fe4);
      *(float *)(lVar10 + -4 + *param_2) =
           DAT_146b29ff0 * fVar11 + _DAT_146b29ff4 + *(float *)(lVar10 + -4 + *param_2);
      if (1 < iVar4) {
        fVar11 = DAT_146b2a01c * _DAT_146b2a014;
        DAT_146b2a01c = DAT_146b2a018;
        fVar11 = -(DAT_146b2a018 * _DAT_146b2a010) - fVar11;
        _DAT_146b2a014 = CONCAT44(fVar11,_DAT_146b2a014);
        *(float *)(lVar10 + *param_2) =
             DAT_146b2a020 * fVar11 + _DAT_146b2a024 + *(float *)(lVar10 + *param_2);
      }
      fVar11 = DAT_146b29fec * _DAT_146b29fe4;
      lVar6 = *param_2 + lVar2 + -4;
      DAT_146b29fec = DAT_146b29fe8;
      fVar11 = -(DAT_146b29fe8 * _DAT_146b29fe0) - fVar11;
      _DAT_146b29fe4 = CONCAT44(fVar11,_DAT_146b29fe4);
      *(float *)(lVar6 + lVar10) =
           DAT_146b29ff0 * fVar11 + _DAT_146b29ff4 + *(float *)(lVar6 + lVar10);
      if (1 < iVar4) {
        fVar11 = DAT_146b2a01c * _DAT_146b2a014;
        lVar6 = *param_2 + lVar2;
        DAT_146b2a01c = DAT_146b2a018;
        fVar11 = -(DAT_146b2a018 * _DAT_146b2a010) - fVar11;
        _DAT_146b2a014 = CONCAT44(fVar11,_DAT_146b2a014);
        *(float *)(lVar6 + lVar10) =
             DAT_146b2a020 * fVar11 + _DAT_146b2a024 + *(float *)(lVar6 + lVar10);
      }
      lVar10 = lVar10 + (longlong)(iVar4 * 4) * 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (iVar8 < iVar3) {
    lVar10 = (longlong)(iVar8 * iVar4) << 2;
    uVar7 = (ulonglong)(uint)(iVar3 - iVar8);
    do {
      fVar11 = DAT_146b29fec * _DAT_146b29fe4;
      DAT_146b29fec = DAT_146b29fe8;
      fVar11 = -(DAT_146b29fe8 * _DAT_146b29fe0) - fVar11;
      _DAT_146b29fe4 = CONCAT44(fVar11,_DAT_146b29fe4);
      *(float *)(lVar10 + *param_2) =
           DAT_146b29ff0 * fVar11 + _DAT_146b29ff4 + *(float *)(lVar10 + *param_2);
      if (1 < iVar4) {
        fVar11 = DAT_146b2a01c * _DAT_146b2a014;
        DAT_146b2a01c = DAT_146b2a018;
        fVar11 = -(DAT_146b2a018 * _DAT_146b2a010) - fVar11;
        _DAT_146b2a014 = CONCAT44(fVar11,_DAT_146b2a014);
        *(float *)(lVar10 + 4 + *param_2) =
             DAT_146b2a020 * fVar11 + _DAT_146b2a024 + *(float *)(lVar10 + 4 + *param_2);
      }
      lVar10 = lVar10 + (longlong)iVar4 * 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 142a949c0 FUN_142a949c0 body=930 status=ok
// SIG undefined FUN_142a949c0(void)

void FUN_142a949c0(longlong param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  if ((*(byte *)(param_1 + 0xba) & 4) == 0) {
    if (((*(longlong *)(param_1 + 0x618) != 0) &&
        (cVar6 = UObjectBase::IsValidLowLevel(), cVar6 != '\0')) &&
       (iVar7 = USoundWave::GetNumSoundsActive(*(undefined8 *)(param_1 + 0x618)), 0 < iVar7)) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar8 = FUN_142a987d0();
      lVar9 = FUN_1417985e0(uVar8,param_1,0,0,0,0,0,0,0);
      *(longlong *)(param_1 + 0x618) = lVar9;
      *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)(param_1 + 0x598);
      *(undefined8 *)(*(longlong *)(param_1 + 0x618) + 0x68) = *(undefined8 *)(param_1 + 0x5a0);
      FUN_1408e22e0(*(longlong *)(param_1 + 0x618) + 0x70,param_1 + 0x5a8);
      FUN_1408e22e0(*(longlong *)(param_1 + 0x618) + 0x88,param_1 + 0x5b8);
      FUN_1408e22e0(*(longlong *)(param_1 + 0x618) + 0x98,param_1 + 0x5c8);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x618) + 0x30);
      *pbVar1 = *pbVar1 ^ (*(char *)(param_1 + 0x2d4) << 2 ^
                          *(byte *)(*(longlong *)(param_1 + 0x618) + 0x30)) & 4;
      lVar9 = *(longlong *)(param_1 + 0x618);
      uVar2 = *(undefined4 *)(param_1 + 0x614);
      uVar3 = *(undefined4 *)(param_1 + 0x628);
      uVar4 = *(undefined4 *)(param_1 + 0x610);
      *(byte *)(lVar9 + 0xb4) = *(byte *)(lVar9 + 0xb4) | 4;
      *(byte *)(lVar9 + 0xb3) = *(byte *)(lVar9 + 0xb3) | 0x21;
      *(longlong *)(lVar9 + 0x250) = param_1;
      *(undefined4 *)(lVar9 + 0xe4) = uVar4;
      *(undefined4 *)(lVar9 + 0x230) = uVar2;
      *(undefined4 *)(lVar9 + 0x50) = 0x461c4000;
      *(undefined4 *)(lVar9 + 0xec) = uVar3;
    }
    FUN_142a824c0(param_1);
    FUN_142a8ac70(param_1,0xffffffff);
    if ((*(longlong *)(param_1 + 0x618) != 0) && (*(longlong *)(param_1 + 0x620) != 0)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x620) + 0x330) = *(undefined8 *)(param_1 + 0x2d8);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0x2f0);
      *pbVar1 = *pbVar1 ^ (*(char *)(param_1 + 0x2d0) * '\x02' ^
                          *(byte *)(*(longlong *)(param_1 + 0x620) + 0x2f0)) & 0x10;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0x2f0);
      *pbVar1 = *pbVar1 ^ (*(char *)(param_1 + 0x5d8) << 6 ^
                          *(byte *)(*(longlong *)(param_1 + 0x620) + 0x2f0)) & 0x40;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0x2f2);
      *pbVar1 = *pbVar1 ^ (*(byte *)(*(longlong *)(param_1 + 0x620) + 0x2f2) ^
                          *(byte *)(param_1 + 0x5d8)) & 2;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0x2f0);
      *pbVar1 = *pbVar1 ^ (*(char *)(param_1 + 0x2d0) * '\x02' ^
                          *(byte *)(*(longlong *)(param_1 + 0x620) + 0x2f0)) & 8;
      *(undefined8 *)(*(longlong *)(param_1 + 0x620) + 0x5e0) = *(undefined8 *)(param_1 + 0x588);
      FSoundAttenuationSettings::operator=(*(longlong *)(param_1 + 0x620) + 0x338,param_1 + 0x2e0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x620) + 0x2e8) = *(undefined8 *)(param_1 + 0x590);
      *(undefined4 *)(*(longlong *)(param_1 + 0x620) + 0x314) = *(undefined4 *)(param_1 + 0x5dc);
      *(undefined4 *)(*(longlong *)(param_1 + 0x620) + 0x318) = *(undefined4 *)(param_1 + 0x5e0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x618) + 0x60) = *(undefined8 *)(param_1 + 0x2d8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x618) + 0x80) = *(undefined8 *)(param_1 + 0x598);
      *(undefined8 *)(*(longlong *)(param_1 + 0x618) + 0x68) = *(undefined8 *)(param_1 + 0x5a0);
      FUN_1408e22e0(*(longlong *)(param_1 + 0x618) + 0x70,param_1 + 0x5a8);
      FUN_142351620(*(undefined8 *)(param_1 + 0x620),*(undefined8 *)(param_1 + 0x618));
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x558))(*(longlong **)(param_1 + 0x620),0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x618) + 0x80) = *(undefined8 *)(param_1 + 0x598);
      *(undefined8 *)(*(longlong *)(param_1 + 0x618) + 0x68) = *(undefined8 *)(param_1 + 0x5a0);
      FUN_1408e22e0(*(longlong *)(param_1 + 0x618) + 0x70,param_1 + 0x5a8);
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x620) + 0x2a0))();
      *(byte *)(param_1 + 0xba) =
           *(byte *)(param_1 + 0xba) ^ (cVar6 << 2 ^ *(byte *)(param_1 + 0xba)) & 4;
      if (((*(byte *)(param_1 + 0xba) & 4) != 0) &&
         (puVar10 = (undefined8 *)operator_new(0x10), puVar10 != (undefined8 *)0x0)) {
        *puVar10 = 0;
        *(undefined1 *)(puVar10 + 1) = 1;
        puVar5 = *(undefined8 **)(param_1 + 0x640);
        *(undefined8 **)(param_1 + 0x640) = puVar10;
        *puVar5 = puVar10;
      }
    }
  }
  return;
}



// FUNCTION 142a94d70 StartBackgroundTask body=105 status=ok
// SIG undefined StartBackgroundTask(void)

void FAsyncTask<Audio::FAsyncDecodeWorker>::StartBackgroundTask(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  UNLOCK();
  *(longlong *)(param_1 + 0x70) = param_2;
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (param_2 != 0) {
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_1415ab270(1);
      *(longlong **)(param_1 + 0x68) = plVar1;
    }
    (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x000142a94db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))(*(longlong **)(param_1 + 0x70),param_1);
    return;
  }
  FUN_1415b5910();
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_142a83750(param_1 + 8);
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  UNLOCK();
  return;
}



// FUNCTION 142a94de0 FUN_142a94de0 body=223 status=ok
// SIG undefined FUN_142a94de0(void)

void FUN_142a94de0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x8f8,local_res8);
  puVar8 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar8 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x8f8));
  }
  puVar7 = puVar8 + 1;
  if (puVar8 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 == (undefined8 *)0x0) {
    plVar4 = (longlong *)(*(undefined8 **)(param_1 + 0x728))[1];
    uVar5 = **(undefined8 **)(param_1 + 0x728);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_142a8d8b0(uVar5,param_3);
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
    return;
  }
  FUN_142a8d8b0(*puVar7,param_3);
  return;
}



// FUNCTION 142a94ec0 FUN_142a94ec0 body=132 status=ok
// SIG undefined FUN_142a94ec0(void)

void FUN_142a94ec0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) {
    iVar1 = FUN_1428cf800(lVar2);
    if (iVar1 != 1) {
      plVar3 = (longlong *)UWorld::GetAudioDevice(lVar2);
      if ((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 0x6b) & 0x20) != 0)) {
        (**(code **)(*plVar3 + 0xe8))(plVar3,param_3,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142a94f50 FUN_142a94f50 body=316 status=ok
// SIG undefined FUN_142a94f50(void)

ulonglong FUN_142a94f50(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_1[0x15] != 0) {
    LOCK();
    bVar7 = *(int *)((longlong)param_1 + 0x1d4) == 0;
    if (bVar7) {
      *(int *)((longlong)param_1 + 0x1d4) = 0;
    }
    UNLOCK();
    if (bVar7) {
      uVar5 = 0;
      LOCK();
      uVar2 = *(uint *)((longlong)param_1 + 0x1cc);
      if (uVar2 == 0) {
        *(uint *)((longlong)param_1 + 0x1cc) = 0;
      }
      else {
        uVar5 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        if (param_1[0x15] != 0) {
          uVar5 = 0;
          LOCK();
          uVar2 = *(uint *)((longlong)param_1 + 0x74);
          if (uVar2 == 0) {
            *(uint *)((longlong)param_1 + 0x74) = 0;
          }
          else {
            uVar5 = (ulonglong)uVar2;
          }
          UNLOCK();
          if (uVar2 != 0) {
            if (((*(byte *)(param_1 + 0x3d) & 0x20) != 0) &&
               ((*(byte *)(*(longlong *)param_1[2] + 0xb3) & 4) == 0)) {
              puVar1 = (uint *)(param_1[2] + 0xa4);
              *puVar1 = *puVar1 | 0x10000;
              puVar6 = (undefined8 *)param_1[0x15];
              local_28 = 0;
              local_18 = 0;
              *(ushort *)(puVar6 + 0x1a) = *(ushort *)(puVar6 + 0x1a) & 0xfffd;
              uVar4 = *puVar6;
              uVar3 = *(undefined4 *)((longlong)puVar6 + 0xcc);
              puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_48);
              if (puVar6 != (undefined8 *)0x0) {
                local_68 = (undefined4)uVar4;
                uStack_64 = (undefined4)((ulonglong)uVar4 >> 0x20);
                *puVar6 = &PTR_FUN_143f77c18;
                *(undefined4 *)(puVar6 + 1) = local_68;
                *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_64;
                *(undefined4 *)(puVar6 + 2) = uVar3;
                *(undefined4 *)((longlong)puVar6 + 0x14) = 0x200;
              }
              local_58[0] = &LAB_142a7fe20;
              Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar4,local_58);
              LOCK();
              uVar2 = *(uint *)((longlong)param_1 + 0x1cc);
              *(uint *)((longlong)param_1 + 0x1cc) = 1;
              UNLOCK();
              *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xf7;
              return (ulonglong)uVar2;
            }
            uVar5 = (**(code **)(*param_1 + 0x40))(param_1);
          }
        }
        *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xf7;
      }
      return uVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142a94f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*param_1 + 0x40))();
  return uVar5;
}



// FUNCTION 142a95090 FUN_142a95090 body=98 status=ok
// SIG undefined FUN_142a95090(void)

void FUN_142a95090(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    puVar2 = (undefined8 *)operator_new(0x10);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 2;
      puVar1 = *(undefined8 **)(param_1 + 0x640);
      *(undefined8 **)(param_1 + 0x640) = puVar2;
      *puVar1 = puVar2;
    }
    if (*(longlong **)(param_1 + 0x620) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x560))();
    }
    *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) & 0xfb;
  }
  return;
}



// FUNCTION 142a95100 FUN_142a95100 body=154 status=ok
// SIG undefined FUN_142a95100(void)

void FUN_142a95100(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x68) != 2) {
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 0xf0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1415b5910();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1415b5910();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}



// FUNCTION 142a951a0 FUN_142a951a0 body=272 status=ok
// SIG undefined FUN_142a951a0(void)

void FUN_142a951a0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  uVar2 = IStreamingManager::Get();
  plVar3 = (longlong *)UNiagaraSystem::GetEffectType(uVar2);
  (**(code **)(*plVar3 + 200))(plVar3,param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      LOCK();
      bVar5 = *(int *)(param_1 + 0x74) == 0;
      if (bVar5) {
        *(int *)(param_1 + 0x74) = 0;
      }
      UNLOCK();
      if (!bVar5) {
        puVar4 = *(undefined8 **)(param_1 + 0xa8);
        *(ushort *)(puVar4 + 0x1a) = *(ushort *)(puVar4 + 0x1a) & 0xfff8;
        LOCK();
        *(undefined4 *)(puVar4 + 0x16) = 1;
        UNLOCK();
        uVar1 = *(undefined4 *)((longlong)puVar4 + 0xcc);
        uVar2 = *puVar4;
        local_28 = 0;
        local_18 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_48);
        if (puVar4 != (undefined8 *)0x0) {
          local_68 = (undefined4)uVar2;
          uStack_64 = (undefined4)((ulonglong)uVar2 >> 0x20);
          *puVar4 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar4 + 1) = local_68;
          *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_64;
          *(undefined4 *)(puVar4 + 2) = uVar1;
          *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_5c;
        }
        local_58[0] = &LAB_142a7fc60;
        Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar2,local_58);
      }
    }
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7;
    LOCK();
    *(undefined4 *)(param_1 + 0x74) = 0;
    UNLOCK();
    FUN_142a84010(param_1);
  }
  FUN_1422d9790(param_1);
  return;
}



// FUNCTION 142a952b0 FUN_142a952b0 body=225 status=ok
// SIG undefined FUN_142a952b0(void)

undefined8 FUN_142a952b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x8f8,local_res8);
  puVar8 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar8 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x8f8));
  }
  puVar7 = puVar8 + 1;
  if (puVar8 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 == (undefined8 *)0x0) {
    plVar4 = (longlong *)(*(undefined8 **)(param_1 + 0x728))[1];
    uVar6 = **(undefined8 **)(param_1 + 0x728);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar6 = Audio::FMixerSubmix::OnStopRecordingOutput(uVar6,param_3,param_4);
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
  }
  else {
    uVar6 = Audio::FMixerSubmix::OnStopRecordingOutput(*puVar7,param_3,param_4);
  }
  return uVar6;
}



// FUNCTION 142a953a0 FUN_142a953a0 body=831 status=ok
// SIG undefined FUN_142a953a0(void)

undefined8
FUN_142a953a0(undefined8 param_1,char param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined2 *_Src;
  undefined8 uVar13;
  undefined2 *puVar14;
  float *pfVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float local_a8;
  float local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  lVar8 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((((lVar8 != 0) && ((*(uint *)(lVar8 + 0x830) & 0x4000) != 0)) &&
      (iVar7 = FUN_1428cf800(lVar8), iVar7 != 1)) &&
     (((plVar9 = (longlong *)UWorld::GetAudioDevice(lVar8), plVar9 != (longlong *)0x0 &&
       ((*(byte *)(plVar9 + 0x6b) & 0x20) != 0)) &&
      (puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0xf0))(plVar9,param_5,&local_a8,&local_a4),
      *(int *)(puVar10 + 1) != 0)))) {
    puVar11 = (undefined8 *)operator_new(0x90);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar11 + 0x1c),0,0x74);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      FUN_14271e380(puVar11 + 4,0x2000);
    }
    puVar6 = DAT_146b29e90;
    if (DAT_146b29e90 != (undefined8 *)0x0) {
      puVar1 = DAT_146b29e90 + 4;
      DAT_146b29e90 = puVar11;
      Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(puVar1);
      FMemory::operator_delete(*puVar6);
      FMemory::operator_delete(puVar6,0x90);
      puVar11 = DAT_146b29e90;
    }
    DAT_146b29e90 = puVar11;
    local_9c = (int)local_a8;
    uVar3 = *(uint *)(puVar10 + 1);
    local_a0 = (int)uVar3 / local_9c;
    local_98 = (int)local_a4;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)(int)uVar3;
    uVar12 = SUB168(ZEXT816(2) * auVar4,0);
    fVar17 = (float)local_98;
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    fVar18 = (float)local_a0;
    _Src = (undefined2 *)operator_new(uVar12);
    FMemory::operator_delete(0);
    pfVar15 = (float *)*puVar10;
    if (0 < (int)uVar3) {
      uVar16 = (ulonglong)uVar3;
      puVar14 = _Src;
      do {
        fVar2 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        *puVar14 = (short)(int)(fVar2 * 32767.0);
        uVar16 = uVar16 - 1;
        puVar14 = puVar14 + 1;
      } while (uVar16 != 0);
    }
    puVar10 = DAT_146b29e90;
    *(int *)((longlong)DAT_146b29e90 + 0xc) = local_a0;
    *(int *)(puVar10 + 2) = local_9c;
    *(int *)((longlong)puVar10 + 0x14) = local_98;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)(int)uVar3;
    uVar12 = SUB168(ZEXT816(2) * auVar5,0);
    *(float *)(puVar10 + 3) = fVar18 / fVar17;
    *(uint *)(puVar10 + 1) = uVar3;
    if (SUB168(ZEXT816(2) * auVar5,8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    uVar13 = operator_new(uVar12);
    uVar12 = *puVar10;
    *puVar10 = uVar13;
    FMemory::operator_delete(uVar12);
    _guard_xfg_dispatch_icall_nop((void *)*puVar10,_Src,(longlong)*(int *)(puVar10 + 1) * 2);
    FMemory::operator_delete(_Src);
    if (param_2 == '\0') {
      uVar12 = FUN_14273d3f0(DAT_146b29e90 + 4,DAT_146b29e90,param_3,param_4);
      puVar10 = DAT_146b29e90;
      DAT_146b29e90 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(puVar10 + 4);
        FMemory::operator_delete(*puVar10);
        FMemory::operator_delete(puVar10,0x90);
      }
      if (*param_4 == 0) {
        return uVar12;
      }
      FMemory::Free();
      return uVar12;
    }
    if (param_2 == '\x01') {
      local_58 = 0;
      local_48 = 0;
      puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[1] = param_5;
        *puVar10 = &PTR_FUN_143f77b70;
      }
      local_88[0] = UE4Function_Private::
                    TFunctionRefCaller<<lambda_796cd00fd631cd64e30265ec170a96df>,void___cdecl(void)>
                    ::Call;
      FUN_1427229b0(DAT_146b29e90 + 4,DAT_146b29e90,param_3,param_4,local_88);
    }
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142a956e0 FUN_142a956e0 body=147 status=ok
// SIG undefined FUN_142a956e0(void)

void FUN_142a956e0(int *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_1 + 1;
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = *param_2;
    lVar4 = param_2[1];
    puVar7[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    puVar5 = *(undefined8 **)(param_1 + 0xc);
    *(undefined8 **)(param_1 + 0xc) = puVar7;
    *puVar5 = puVar7;
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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



// FUNCTION 142a95780 FUN_142a95780 body=873 status=ok
// SIG undefined FUN_142a95780(void)

void FUN_142a95780(longlong param_1)

{
  float *pfVar1;
  short *psVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  short *psVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong uVar22;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined2 uVar33;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  uVar19 = 0;
  uVar21 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  if (((*(char *)(param_1 + 0x67) == '\0') && (lVar6 = *(longlong *)(param_1 + 0x50), lVar6 != 0))
     && (*(longlong *)(lVar6 + 0x128) != 0)) {
    *(undefined1 *)(param_1 + 0x66) = 1;
    uVar7 = *(ulonglong *)(lVar6 + 0x128);
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0xc);
    uVar26 = (uVar20 << 0xe) + uVar7;
    uVar25 = uVar20 * 0x2000;
    uVar8 = *(ulonglong *)**(undefined8 **)(param_1 + 0x20);
    uVar9 = *(ulonglong *)(*(undefined8 **)(param_1 + 0x20))[2];
    if ((uVar20 & 0x7ffff) != 0) {
      uVar22 = uVar19;
      if (7 < uVar25) {
        uVar15 = (ulonglong)(uVar25 - 1);
        uVar16 = uVar26 + uVar15 * 2;
        uVar4 = uVar9 + uVar15 * 4;
        if ((((((uVar16 < uVar9) || (uVar4 < uVar26)) &&
              ((uVar5 = uVar7 + uVar15 * 2, uVar5 < uVar9 || (uVar4 < uVar7)))) &&
             ((uVar15 = uVar8 + uVar15 * 4, uVar22 = uVar21, uVar15 < uVar9 || (uVar4 < uVar8)))) &&
            ((uVar16 < uVar8 || (uVar15 < uVar26)))) && ((uVar5 < uVar8 || (uVar15 < uVar7)))) {
          do {
            uVar21 = *(ulonglong *)(uVar7 + uVar19 * 2);
            uVar16 = (ulonglong)((int)uVar19 + 4);
            uVar22 = *(ulonglong *)(uVar26 + uVar19 * 2);
            uVar33 = (undefined2)(uVar21 >> 0x30);
            auVar29._8_4_ = 0;
            auVar29._0_8_ = uVar21;
            auVar29._12_2_ = uVar33;
            auVar29._14_2_ = uVar33;
            uVar33 = (undefined2)(uVar21 >> 0x20);
            auVar28._12_4_ = auVar29._12_4_;
            auVar28._8_2_ = 0;
            auVar28._0_8_ = uVar21;
            auVar28._10_2_ = uVar33;
            auVar27._10_6_ = auVar28._10_6_;
            auVar27._8_2_ = uVar33;
            auVar27._0_8_ = uVar21;
            uVar33 = (undefined2)(uVar21 >> 0x10);
            auVar10._4_8_ = auVar27._8_8_;
            auVar10._2_2_ = uVar33;
            auVar10._0_2_ = uVar33;
            uVar33 = (undefined2)(uVar22 >> 0x30);
            auVar36._8_4_ = 0;
            auVar36._0_8_ = uVar22;
            auVar36._12_2_ = uVar33;
            auVar36._14_2_ = uVar33;
            uVar33 = (undefined2)(uVar22 >> 0x20);
            auVar35._12_4_ = auVar36._12_4_;
            auVar35._8_2_ = 0;
            auVar35._0_8_ = uVar22;
            auVar35._10_2_ = uVar33;
            auVar34._10_6_ = auVar35._10_6_;
            auVar34._8_2_ = uVar33;
            auVar34._0_8_ = uVar22;
            uVar33 = (undefined2)(uVar22 >> 0x10);
            auVar11._4_8_ = auVar34._8_8_;
            auVar11._2_2_ = uVar33;
            auVar11._0_2_ = uVar33;
            pfVar17 = (float *)(uVar8 + uVar19 * 4);
            *pfVar17 = (float)(int)(short)uVar21 * 3.0517578e-05;
            pfVar17[1] = (float)(auVar10._0_4_ >> 0x10) * 3.0517578e-05;
            pfVar17[2] = (float)(auVar27._8_4_ >> 0x10) * 3.0517578e-05;
            pfVar17[3] = (float)(auVar28._12_4_ >> 0x10) * 3.0517578e-05;
            uVar21 = *(ulonglong *)(uVar26 + uVar16 * 2);
            uVar33 = (undefined2)(uVar21 >> 0x30);
            auVar39._8_4_ = 0;
            auVar39._0_8_ = uVar21;
            auVar39._12_2_ = uVar33;
            auVar39._14_2_ = uVar33;
            uVar33 = (undefined2)(uVar21 >> 0x20);
            auVar38._12_4_ = auVar39._12_4_;
            auVar38._8_2_ = 0;
            auVar38._0_8_ = uVar21;
            auVar38._10_2_ = uVar33;
            auVar37._10_6_ = auVar38._10_6_;
            auVar37._8_2_ = uVar33;
            auVar37._0_8_ = uVar21;
            uVar33 = (undefined2)(uVar21 >> 0x10);
            auVar12._4_8_ = auVar37._8_8_;
            auVar12._2_2_ = uVar33;
            auVar12._0_2_ = uVar33;
            pfVar17 = (float *)(uVar9 + uVar19 * 4);
            *pfVar17 = (float)(int)(short)uVar22 * 3.0517578e-05;
            pfVar17[1] = (float)(auVar11._0_4_ >> 0x10) * 3.0517578e-05;
            pfVar17[2] = (float)(auVar34._8_4_ >> 0x10) * 3.0517578e-05;
            pfVar17[3] = (float)(auVar35._12_4_ >> 0x10) * 3.0517578e-05;
            uVar20 = (int)uVar19 + 8;
            uVar22 = (ulonglong)uVar20;
            uVar19 = *(ulonglong *)(uVar7 + uVar16 * 2);
            uVar33 = (undefined2)(uVar19 >> 0x30);
            auVar32._8_4_ = 0;
            auVar32._0_8_ = uVar19;
            auVar32._12_2_ = uVar33;
            auVar32._14_2_ = uVar33;
            uVar33 = (undefined2)(uVar19 >> 0x20);
            auVar31._12_4_ = auVar32._12_4_;
            auVar31._8_2_ = 0;
            auVar31._0_8_ = uVar19;
            auVar31._10_2_ = uVar33;
            auVar30._10_6_ = auVar31._10_6_;
            auVar30._8_2_ = uVar33;
            auVar30._0_8_ = uVar19;
            uVar33 = (undefined2)(uVar19 >> 0x10);
            auVar13._4_8_ = auVar30._8_8_;
            auVar13._2_2_ = uVar33;
            auVar13._0_2_ = uVar33;
            pfVar17 = (float *)(uVar8 + uVar16 * 4);
            *pfVar17 = (float)(int)(short)uVar19 * 3.0517578e-05;
            pfVar17[1] = (float)(auVar13._0_4_ >> 0x10) * 3.0517578e-05;
            pfVar17[2] = (float)(auVar30._8_4_ >> 0x10) * 3.0517578e-05;
            pfVar17[3] = (float)(auVar31._12_4_ >> 0x10) * 3.0517578e-05;
            pfVar17 = (float *)(uVar9 + uVar16 * 4);
            *pfVar17 = (float)(int)(short)uVar21 * 3.0517578e-05;
            pfVar17[1] = (float)(auVar12._0_4_ >> 0x10) * 3.0517578e-05;
            pfVar17[2] = (float)(auVar37._8_4_ >> 0x10) * 3.0517578e-05;
            pfVar17[3] = (float)(auVar38._12_4_ >> 0x10) * 3.0517578e-05;
            uVar19 = uVar22;
          } while (uVar20 < uVar25);
        }
      }
      uVar20 = (uint)uVar22;
      if (uVar20 < uVar25) {
        if (3 < uVar25 - uVar20) {
          lVar6 = uVar22 * 4;
          lVar23 = uVar7 - uVar26;
          lVar3 = uVar22 * 2;
          lVar24 = uVar8 - uVar9;
          uVar14 = ((uVar25 - uVar20) - 4 >> 2) + 1;
          uVar19 = (ulonglong)uVar14;
          uVar22 = (ulonglong)(uVar20 + uVar14 * 4);
          pfVar17 = (float *)(uVar9 + 4 + lVar6);
          psVar18 = (short *)(uVar26 + 2 + lVar3);
          do {
            pfVar1 = pfVar17 + 4;
            psVar2 = psVar18 + 4;
            *(float *)(lVar24 + -0x14 + (longlong)pfVar1) =
                 (float)(int)*(short *)(lVar23 + -2 + (longlong)psVar18) * 3.0517578e-05;
            pfVar17[-1] = (float)(int)psVar18[-1] * 3.0517578e-05;
            *(float *)(lVar24 + -0x10 + (longlong)pfVar1) =
                 (float)(int)*(short *)(lVar23 + -8 + (longlong)psVar2) * 3.0517578e-05;
            *pfVar17 = (float)(int)*psVar18 * 3.0517578e-05;
            *(float *)(lVar24 + -0xc + (longlong)pfVar1) =
                 (float)(int)*(short *)(lVar23 + -6 + (longlong)psVar2) * 3.0517578e-05;
            pfVar17[1] = (float)(int)psVar18[1] * 3.0517578e-05;
            *(float *)(lVar24 + -8 + (longlong)pfVar1) =
                 (float)(int)*(short *)(lVar23 + -4 + (longlong)psVar2) * 3.0517578e-05;
            pfVar17[2] = (float)(int)psVar18[2] * 3.0517578e-05;
            uVar19 = uVar19 - 1;
            pfVar17 = pfVar1;
            psVar18 = psVar2;
          } while (uVar19 != 0);
        }
        if ((uint)uVar22 < uVar25) {
          uVar19 = (ulonglong)(uVar25 - (uint)uVar22);
          pfVar17 = (float *)(uVar9 + uVar22 * 4);
          psVar18 = (short *)(uVar26 + uVar22 * 2);
          do {
            *(float *)((uVar8 - uVar9) + -4 + (longlong)(pfVar17 + 1)) =
                 (float)(int)*(short *)((uVar7 - uVar26) + (longlong)psVar18) * 3.0517578e-05;
            *pfVar17 = (float)(int)*psVar18 * 3.0517578e-05;
            uVar19 = uVar19 - 1;
            pfVar17 = pfVar17 + 1;
            psVar18 = psVar18 + 1;
          } while (uVar19 != 0);
        }
      }
    }
    local_38 = **(undefined8 **)(param_1 + 0x20);
    local_30 = (*(undefined8 **)(param_1 + 0x20))[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_142a956e0(param_1,&local_38);
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
    local_20 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_142a956e0(param_1,&local_28);
    *(undefined4 *)(param_1 + 0x40) = 2;
    return;
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0xb3) & 0x10) == 0)) {
    FUN_142a8fcf0();
  }
  return;
}



// FUNCTION 142a95af0 FUN_142a95af0 body=97 status=ok
// SIG undefined FUN_142a95af0(void)

void FUN_142a95af0(longlong param_1,char param_2)

{
  longlong local_18;
  longlong local_10;
  
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0x60) == 0) {
      *(undefined1 *)(param_1 + 0x65) = 1;
    }
    else if (*(int *)(param_1 + 0x60) == 1) {
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
  }
  local_18 = *(longlong *)
              (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x40) * 0x10);
  if (0 < *(int *)(local_18 + 8)) {
    local_10 = *(longlong *)
                (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x40) * 0x10);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_142a956e0(param_1,&local_18);
  }
  return;
}



// FUNCTION 142a95b60 SubmixCommand body=136 status=ok
// SIG undefined SubmixCommand(void)

void Audio::FMixerSubmix::SubmixCommand(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 2,param_2);
    puVar1 = *(undefined8 **)(param_1 + 0x170);
    *(undefined8 **)(param_1 + 0x170) = puVar2;
    *puVar1 = puVar2;
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar3 = (longlong *)(param_2 + 0x10);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a95c30 TeardownHardware body=158 status=ok
// SIG undefined TeardownHardware(void)

void Audio::FMixerDevice::TeardownHardware(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x738) != 0) {
    LOCK();
    iVar1 = *(int *)(param_1 + 0x9fc);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x9fc) = 0;
      iVar1 = 0;
    }
    UNLOCK();
    LOCK();
    iVar2 = *(int *)(param_1 + 0x9f8);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x9f8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (iVar1 == iVar2) {
      LOCK();
      *(uint *)(param_1 + 0x9f8) = (uint)(iVar2 == 0);
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0xaf8) = 1;
      UNLOCK();
    }
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x738) + 0x10) + 8))();
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x98))();
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x88))();
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x50))();
  }
  if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a95cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 8))();
  return;
}



// FUNCTION 142a95cd0 Tick body=148 status=ok
// SIG undefined Tick(void)

void Audio::IAudioMixerPlatformInterface::Tick(longlong param_1)

{
  int iVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  
  if (*(int *)(param_1 + 0x60) == 4) {
    LOCK();
    bVar2 = *(int *)(param_1 + 0x18c) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0x18c) = 0;
    }
    UNLOCK();
    if ((!bVar2) && (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x10c))) {
      do {
        QueryPerformanceCounter(&local_res8);
        *(DWORD *)(param_1 + 0x160) = local_res8.s.LowPart;
        FOutputBuffer::MixNextBuffer
                  ((longlong)*(int *)(param_1 + 0x10c) * 0x30 + *(longlong *)(param_1 + 0xa0));
        FAudioRenderTimeAnalysis::End(param_1 + 0x140);
        iVar1 = (*(int *)(param_1 + 0x10c) + 1) % *(int *)(param_1 + 0x110);
        *(int *)(param_1 + 0x10c) = iVar1;
      } while (*(int *)(param_1 + 0x108) != iVar1);
    }
  }
  return;
}



// FUNCTION 142a95d70 UnregisterBufferListener body=299 status=ok
// SIG undefined UnregisterBufferListener(void)

void Audio::FMixerSubmix::UnregisterBufferListener(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 400);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x188);
  if (*(int *)(param_1 + 0x188) != 0) {
    iVar7 = 0;
    bVar8 = **(longlong **)(param_1 + 0x180) != param_2;
    lVar6 = 0;
    iVar4 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar5 = iVar4 + 1;
      if (lVar6 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x180) + lVar6 * 8);
        do {
          if (bVar8 != (*plVar3 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar6 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar7 = iVar7 + (iVar5 - iVar4);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar4 = iVar5;
    } while (lVar6 < lVar2);
    *(int *)(param_1 + 0x188) = iVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a95e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142a95ea0 FUN_142a95ea0 body=198 status=ok
// SIG undefined FUN_142a95ea0(void)

void FUN_142a95ea0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_2 != 0) {
    cVar1 = IsInAudioThread();
    if (cVar1 == '\0') {
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        local_68 = (undefined4)param_1;
        uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_60 = (undefined4)param_2;
        uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
        *puVar2 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar2 + 1) = local_68;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
        *(undefined4 *)(puVar2 + 2) = uStack_60;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
      }
      local_58[0] = &LAB_142a7fda0;
      FUN_1422f8a30(local_58,local_res10);
      return;
    }
    lVar3 = 0;
    do {
      if (param_2 == *(longlong *)(DAT_146b29ed8 + lVar3 * 8)) {
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < 5);
    TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x8f8,param_2);
  }
  return;
}



// FUNCTION 142a95f70 FUN_142a95f70 body=209 status=ok
// SIG undefined FUN_142a95f70(void)

void FUN_142a95f70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int local_res8;
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x8f8);
  puVar8 = (undefined8 *)0x0;
  if (local_res8 != -1) {
    puVar8 = (undefined8 *)((longlong)local_res8 * 0x20 + *(longlong *)(param_1 + 0x8f8));
  }
  puVar7 = puVar8 + 1;
  if (puVar8 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 == (undefined8 *)0x0) {
    plVar4 = (longlong *)(*(undefined8 **)(param_1 + 0x728))[1];
    uVar5 = **(undefined8 **)(param_1 + 0x728);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    Audio::FMixerSubmix::UnregisterBufferListener(uVar5,param_2);
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
    return;
  }
  Audio::FMixerSubmix::UnregisterBufferListener(*puVar7,param_2);
  return;
}



// FUNCTION 142a96050 FUN_142a96050 body=1481 status=ok
// SIG undefined FUN_142a96050(void)

void FUN_142a96050(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char cVar24;
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  undefined1 *local_158 [2];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  
  lVar21 = *(longlong *)(param_1 + 0x10);
  if ((((lVar21 != 0) && (puVar25 = *(undefined8 **)(param_1 + 0xa8), puVar25 != (undefined8 *)0x0))
      && ((*(byte *)(param_1 + 0x78) & 8) == 0)) && (*(char *)(param_1 + 0x1c0) != '\0')) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    fVar26 = *(float *)(lVar21 + 0xe0);
    *(float *)(param_1 + 0x3c) = fVar26;
    if ((*(uint *)(lVar21 + 0xa4) & 0x200) == 0) {
      fVar26 = fVar26 * *(float *)(*(longlong *)(param_1 + 8) + 0xb8);
    }
    fVar27 = 0.1;
    if ((0.1 <= fVar26) && (fVar27 = fVar26, 4.0 <= fVar26)) {
      fVar27 = 4.0;
    }
    *(float *)(param_1 + 0x3c) = fVar27;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      fVar27 = ((float)*(int *)(*(longlong *)(param_1 + 0x90) + 0x44) /
               (float)*(int *)(*(longlong *)(param_1 + 8) + 0x14)) * fVar27;
      *(float *)(param_1 + 0x3c) = fVar27;
      if (fVar27 != *(float *)((longlong)puVar25 + 0xb4)) {
        uVar22 = *puVar25;
        uVar14 = *(undefined4 *)((longlong)puVar25 + 0xcc);
        *(float *)((longlong)puVar25 + 0xb4) = fVar27;
        local_128 = 0;
        local_118 = 0;
        puVar25 = (undefined8 *)FUN_140438ef0(0x18,local_148);
        if (puVar25 != (undefined8 *)0x0) {
          *puVar25 = &PTR_FUN_143f77c18;
          puVar25[1] = uVar22;
          puVar25[2] = CONCAT44(fVar27,uVar14);
        }
        local_158[0] = &LAB_142a7fc90;
        Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar22,local_158);
      }
    }
    cVar24 = FAudioDevice::IsAudioDeviceMuted(*(undefined8 *)(param_1 + 8));
    if (cVar24 == '\0') {
      FWaveInstance::GetVolume(*(undefined8 *)(param_1 + 0x10));
      fVar27 = (float)FUN_140a9b1a0(param_1);
      fVar26 = 0.0;
      if ((0.0 <= fVar27) && (fVar26 = fVar27, 4.0 <= fVar27)) {
        fVar26 = 4.0;
      }
    }
    else {
      fVar26 = 0.0;
    }
    puVar25 = *(undefined8 **)(param_1 + 0xa8);
    if (fVar26 != *(float *)(puVar25 + 0x17)) {
      uVar22 = *puVar25;
      *(float *)(puVar25 + 0x17) = fVar26;
      uVar14 = *(undefined4 *)((longlong)puVar25 + 0xcc);
      local_128 = 0;
      local_118 = 0;
      puVar25 = (undefined8 *)FUN_140438ef0(0x18,local_148);
      if (puVar25 != (undefined8 *)0x0) {
        *puVar25 = &PTR_FUN_143f77c18;
        puVar25[1] = uVar22;
        puVar25[2] = CONCAT44(fVar26,uVar14);
      }
      local_158[0] = &LAB_142a7fc00;
      Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar22,local_158);
    }
    fVar26 = (float)FUN_1422cb5d0(*(undefined8 *)(param_1 + 0x10));
    puVar25 = *(undefined8 **)(param_1 + 0xa8);
    if (fVar26 != *(float *)((longlong)puVar25 + 0xbc)) {
      uVar22 = *puVar25;
      *(float *)((longlong)puVar25 + 0xbc) = fVar26;
      uVar14 = *(undefined4 *)((longlong)puVar25 + 0xcc);
      local_128 = 0;
      local_118 = 0;
      puVar25 = (undefined8 *)FUN_140438ef0(0x18,local_148);
      if (puVar25 != (undefined8 *)0x0) {
        *puVar25 = &PTR_FUN_143f77c18;
        puVar25[1] = uVar22;
        puVar25[2] = CONCAT44(fVar26,uVar14);
      }
      local_158[0] = &LAB_142a7fd40;
      Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar22,local_158);
    }
    puVar25 = (undefined8 *)FSoundSource::GetSpatializationParams(param_1,local_158);
    uVar22 = puVar25[1];
    *(undefined8 *)(param_1 + 0x150) = *puVar25;
    *(undefined8 *)(param_1 + 0x158) = uVar22;
    uVar22 = puVar25[3];
    *(undefined8 *)(param_1 + 0x160) = puVar25[2];
    *(undefined8 *)(param_1 + 0x168) = uVar22;
    uVar22 = puVar25[5];
    *(undefined8 *)(param_1 + 0x170) = puVar25[4];
    *(undefined8 *)(param_1 + 0x178) = uVar22;
    uVar22 = puVar25[7];
    *(undefined8 *)(param_1 + 0x180) = puVar25[6];
    *(undefined8 *)(param_1 + 0x188) = uVar22;
    uVar22 = puVar25[9];
    *(undefined8 *)(param_1 + 400) = puVar25[8];
    *(undefined8 *)(param_1 + 0x198) = uVar22;
    uVar22 = puVar25[10];
    uVar10 = puVar25[0xb];
    *(undefined8 *)(param_1 + 0x1a0) = uVar22;
    *(undefined8 *)(param_1 + 0x1a8) = uVar10;
    uVar10 = puVar25[0xd];
    *(undefined8 *)(param_1 + 0x1b0) = puVar25[0xc];
    *(undefined8 *)(param_1 + 0x1b8) = uVar10;
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 0x20) != 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x19c);
      uVar10 = *(undefined8 *)(param_1 + 0x150);
      uVar23 = **(undefined8 **)(param_1 + 0xa8);
      uVar15 = *(undefined4 *)((longlong)*(undefined8 **)(param_1 + 0xa8) + 0xcc);
      uVar16 = *(undefined4 *)(param_1 + 0x1b4);
      uVar17 = *(undefined4 *)(param_1 + 0x184);
      uVar18 = *(undefined4 *)(param_1 + 0x1a8);
      uVar19 = *(undefined4 *)(param_1 + 0x158);
      uVar20 = *(undefined4 *)(param_1 + 0x178);
      uVar1 = *(undefined4 *)(param_1 + 0x160);
      uVar2 = *(undefined4 *)(param_1 + 0x164);
      uVar3 = *(undefined4 *)(param_1 + 0x168);
      uVar4 = *(undefined4 *)(param_1 + 0x16c);
      uVar11 = *(undefined8 *)(param_1 + 0x170);
      uVar12 = *(undefined8 *)(param_1 + 0x1ac);
      uVar13 = *(undefined8 *)(param_1 + 0x17c);
      uVar5 = *(undefined4 *)(param_1 + 0x1b8);
      uVar6 = *(undefined4 *)(param_1 + 400);
      uVar7 = *(undefined4 *)(param_1 + 0x1bc);
      uVar8 = *(undefined4 *)(param_1 + 0x194);
      uVar9 = *(undefined4 *)(param_1 + 0x198);
      local_128 = 0;
      local_118 = 0;
      puVar25 = (undefined8 *)FUN_140438ef0(0x90,local_148);
      if (puVar25 != (undefined8 *)0x0) {
        *puVar25 = &PTR_CopyToEmptyStorage_1454d5218;
        puVar25[2] = uVar23;
        *(undefined4 *)(puVar25 + 3) = uVar15;
        puVar25[4] = uVar10;
        *(undefined4 *)(puVar25 + 5) = uVar19;
        *(undefined4 *)(puVar25 + 6) = uVar1;
        *(undefined4 *)((longlong)puVar25 + 0x34) = uVar2;
        *(undefined4 *)(puVar25 + 7) = uVar3;
        *(undefined4 *)((longlong)puVar25 + 0x3c) = uVar4;
        puVar25[8] = uVar11;
        *(undefined8 *)((longlong)puVar25 + 0x4c) = uVar13;
        *(undefined4 *)(puVar25 + 9) = uVar20;
        *(undefined4 *)((longlong)puVar25 + 0x54) = uVar17;
        *(undefined4 *)((longlong)puVar25 + 0x6c) = uVar14;
        *(undefined4 *)(puVar25 + 0xc) = uVar6;
        *(undefined4 *)((longlong)puVar25 + 100) = uVar8;
        *(undefined4 *)(puVar25 + 0xd) = uVar9;
        puVar25[0xe] = uVar22;
        *(undefined8 *)((longlong)puVar25 + 0x7c) = uVar12;
        *(undefined4 *)(puVar25 + 0x11) = uVar5;
        *(undefined4 *)((longlong)puVar25 + 0x8c) = uVar7;
        *(undefined4 *)(puVar25 + 0xf) = uVar18;
        *(undefined4 *)((longlong)puVar25 + 0x84) = uVar16;
      }
      local_158[0] = &LAB_142a7fcd0;
      Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar23,local_158);
    }
    FUN_142a973c0(param_1);
    FUN_142a96db0(param_1);
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  }
  return;
}



// FUNCTION 142a96620 Update body=181 status=ok
// SIG undefined Update(void)

void Audio::FOnePoleFilter::Update(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  IFilter::Update();
  fVar2 = 1.0 / *(float *)(param_1 + 0xc);
  fVar1 = *(float *)(param_1 + 0x14) * 3.1415927 * fVar2;
  fVar2 = (((1.0 - ABS(fVar1) * 0.31830987) * fVar1) /
          ((1.0 - ABS(fVar1 + 1.5707964) * 0.31830987) * (fVar1 + 1.5707964))) *
          *(float *)(param_1 + 0xc) * fVar2;
  *(float *)(param_1 + 0x88) = fVar2 / (fVar2 + 1.0);
  return;
}



// FUNCTION 142a966e0 Update body=262 status=ok
// SIG undefined Update(void)

void Audio::IFilter::Update(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    bVar4 = *(byte *)(param_1 + 0x80);
  }
  else {
    lVar5 = (longlong)*(int *)(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 0x40);
    if ((uVar1 < *(uint *)(*(longlong *)(lVar2 + 0x30) + 8 + lVar5 * 0x10)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + lVar5 * 0x10),
       *(char *)(lVar3 + 4 + (longlong)(int)uVar1 * 8) != '\0')) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar3 + (longlong)(int)uVar1 * 8);
      bVar4 = 1;
    }
    else {
      bVar4 = 0;
    }
    bVar4 = *(byte *)(param_1 + 0x80) | bVar4;
    *(byte *)(param_1 + 0x80) = bVar4;
    uVar1 = *(uint *)(param_1 + 0x60);
    if ((uVar1 < *(uint *)(*(longlong *)(lVar2 + 0x30) + 8 + lVar5 * 0x10)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + lVar5 * 0x10),
       *(char *)(lVar2 + 4 + (longlong)(int)uVar1 * 8) != '\0')) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + (longlong)(int)uVar1 * 8);
      bVar4 = bVar4 | 1;
      *(byte *)(param_1 + 0x80) = bVar4;
    }
    else {
      *(byte *)(param_1 + 0x80) = bVar4;
    }
  }
  if (bVar4 != 0) {
    fVar7 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c);
    *(undefined1 *)(param_1 + 0x80) = 0;
    if (fVar7 == 0.0) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = ::_guard_xfg_dispatch_icall_nop(2.0,fVar7 * 0.083333336);
    }
    fVar7 = fVar7 * *(float *)(param_1 + 0x18);
    fVar6 = 80.0;
    if ((80.0 <= fVar7) && (fVar6 = fVar7, 18000.0 <= fVar7)) {
      fVar6 = 18000.0;
    }
    *(float *)(param_1 + 0x14) = fVar6;
    *(float *)(param_1 + 0x24) =
         *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 142a967f0 FUN_142a967f0 body=249 status=ok
// SIG undefined FUN_142a967f0(void)

void FUN_142a967f0(undefined8 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  
  plVar3 = (longlong *)param_1[2];
  if ((((plVar3 == (longlong *)0x0) || ((char)plVar3[0x23] != '\x05')) || (*plVar3 == 0)) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[0x25] + 0x50))((longlong *)param_1[0x25],*param_1),
     cVar6 != '\0')) {
    DAT_146b29fcc = DAT_146b29fcc + 1;
    *(int *)((longlong)param_1 + 0x13c) = DAT_146b29fcc;
    if (param_1[2] != 0) {
      bVar1 = *(byte *)(param_1[2] + 0x118);
      if (bVar1 == 0) {
        uVar2 = *(undefined4 *)(param_1[0x10] + 0x8d0);
      }
      else {
        uVar2 = *(undefined4 *)(param_1[0x10] + 0x7e8 + (ulonglong)bVar1 * 4);
      }
      *(undefined4 *)(param_1 + 0x2a) = uVar2;
      uVar7 = FUN_1424f21f0();
      param_1[0x2b] = uVar7;
    }
    uVar5 = DAT_1464aa81c;
    uVar4 = DAT_1464aa818;
    uVar2 = DAT_1464aa814;
    *(undefined4 *)(param_1 + 0x2c) = DAT_1464aa810;
    *(undefined4 *)((longlong)param_1 + 0x164) = uVar2;
    *(undefined4 *)(param_1 + 0x2d) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x16c) = uVar5;
    (**(code **)(*(longlong *)param_1[0x25] + 0x38))
              ((longlong *)param_1[0x25],*(undefined4 *)((longlong)param_1 + 0x13c),*param_1,
               param_1 + 0x2a);
  }
  else if (*(int *)((longlong)param_1 + 0x13c) != -1) {
    (**(code **)(*(longlong *)param_1[0x25] + 0x40))();
    *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
    return;
  }
  return;
}



// FUNCTION 142a968f0 FUN_142a968f0 body=693 status=ok
// SIG undefined FUN_142a968f0(void)

void FUN_142a968f0(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  bVar8 = false;
  plVar1 = param_1 + 4;
  uVar3 = *(uint *)(param_1 + 9);
  puVar2 = (uint *)(param_1 + 6);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar14 = (uint *)param_1[8];
    if ((uint *)param_1[8] == (uint *)0x0) {
      puVar14 = puVar2;
    }
    uVar4 = *puVar14;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar11 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar12 = local_98 + 1;
      bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar12;
      if (bVar7) goto LAB_142a969cb;
      uVar4 = puVar14[lVar11 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar12 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_84 = (iStack_80 - iVar12) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142a969cb:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 9);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar13 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar14 = (uint *)param_1[8];
    if ((uint *)param_1[8] == (uint *)0x0) {
      puVar14 = puVar2;
    }
    uVar10 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar12 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_142a96a93;
      uVar10 = puVar14[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar12 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_84 = (uVar13 - iVar12) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142a96a93:
      uStack_84 = uVar3;
    }
  }
  while ((lVar11 = (longlong)(int)uStack_5c, uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar5 = *plVar1;
    plVar6 = *(longlong **)(lVar5 + 8 + lVar11 * 0x28);
    if (((plVar6 == (longlong *)0x0) || ((char)plVar6[0x23] != '\x05')) ||
       ((*plVar6 != 0 &&
        (cVar9 = (**(code **)(*(longlong *)param_1[0x25] + 0x50))
                           ((longlong *)param_1[0x25],*plVar6,*param_1), cVar9 == '\0')))) {
      bVar8 = true;
    }
    else {
      *(undefined1 *)(lVar5 + lVar11 * 0x28 + 0x18) = 0;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  if (bVar8) {
    DAT_146b29fcc = DAT_146b29fcc + 1;
    *(int *)(param_1 + 0x27) = DAT_146b29fcc;
                    /* WARNING: Could not recover jumptable at 0x000142a96b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x25] + 0x20))
              ((longlong *)param_1[0x25],DAT_146b29fcc,*param_1);
    return;
  }
  if (*(int *)(param_1 + 0x27) != -1) {
    (**(code **)(*(longlong *)param_1[0x25] + 0x28))();
    *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  }
  return;
}



// FUNCTION 142a96bb0 FUN_142a96bb0 body=507 status=ok
// SIG undefined FUN_142a96bb0(void)

void FUN_142a96bb0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  plVar2 = (longlong *)(param_1 + 0x80);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0xa8);
  puVar1 = (uint *)(param_1 + 0x90);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_142a96c7c;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142a96c7c:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xa8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142a96d42;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142a96d42:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    *(uint *)(*plVar2 + 0x58 + (longlong)(int)uStack_4c * 0x78) =
         (uint)(*(int *)(*plVar2 + 0x58 + (longlong)(int)uStack_4c * 0x78) == 0);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 142a96db0 FUN_142a96db0 body=642 status=ok
// SIG undefined FUN_142a96db0(void)

void FUN_142a96db0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *_Src;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  void *_Src_00;
  longlong lVar10;
  void *local_a8;
  int local_a0;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  FSoundSource::SetStereoBleed();
  FSoundSource::SetLFEBleed(param_1);
  puVar8 = (undefined8 *)(param_1 + 0xb0);
  uVar9 = 0;
  do {
    if ((*(char *)(puVar8 + 2) != '\0') && ((char)uVar9 != '\x05')) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc);
      if (iVar1 == 1) {
        cVar6 = FUN_142a80590(param_1,uVar9 & 0xff,puVar8);
LAB_142a96e48:
        if (cVar6 == '\0') goto LAB_142a96ff0;
      }
      else {
        if (iVar1 == 2) {
          cVar6 = FUN_142a81e00(param_1,uVar9 & 0xff,puVar8);
          goto LAB_142a96e48;
        }
        if (*(int *)(puVar8 + 1) != 0) goto LAB_142a96ff0;
        Audio::FMixerDevice::Get2DChannelMap
                  (*(undefined8 *)(param_1 + 0x88),*(uint *)(param_1 + 0x1e8) >> 4 & 0xffffff01,
                   uVar9 & 0xff,iVar1,
                   (byte)(*(uint *)(*(longlong *)(param_1 + 0x10) + 0xa4) >> 0xc) & 1,puVar8);
      }
      _Src_00 = (void *)0x0;
      local_a0 = *(int *)(puVar8 + 1);
      lVar10 = (longlong)local_a0;
      _Src = (void *)*puVar8;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xa4);
      uVar3 = *(uint *)(param_1 + 0x1e8);
      uVar5 = **(undefined8 **)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)((longlong)*(undefined8 **)(param_1 + 0xa8) + 0xcc);
      local_a8 = (void *)0x0;
      if (local_a0 != 0) {
        TArray<float,TAlignedHeapAllocator<16>_>::ResizeForCopy(&local_a8,local_a0,0);
        _Src_00 = local_a8;
        _guard_xfg_dispatch_icall_nop(local_a8,_Src,lVar10 << 2);
      }
      iVar1 = local_a0;
      local_58 = 0;
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x30,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_CopyToEmptyStorage_1454d5230;
        *(undefined4 *)(puVar7 + 2) = uVar4;
        *(char *)((longlong)puVar7 + 0x14) = (char)uVar9;
        puVar7[1] = uVar5;
        puVar7[3] = 0;
        *(int *)(puVar7 + 4) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
        }
        else {
          TArray<float,TAlignedHeapAllocator<16>_>::ResizeForCopy(puVar7 + 3,iVar1,0);
          _guard_xfg_dispatch_icall_nop((void *)puVar7[3],_Src_00,(longlong)iVar1 << 2);
        }
        *(byte *)(puVar7 + 5) = (byte)(uVar3 >> 2) & 1;
        *(byte *)((longlong)puVar7 + 0x29) = (byte)(uVar2 >> 0xc) & 1;
      }
      local_88[0] = &LAB_142a7fe30;
      Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar5,local_88);
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
      }
    }
LAB_142a96ff0:
    uVar9 = uVar9 + 1;
    puVar8 = puVar8 + 3;
    if (5 < (int)uVar9) {
      return;
    }
  } while( true );
}



// FUNCTION 142a97040 FUN_142a97040 body=885 status=ok
// SIG undefined FUN_142a97040(void)

void FUN_142a97040(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  int local_res18;
  longlong local_res20;
  undefined4 local_78;
  
  local_res18 = 0;
  *(int *)((longlong)param_1 + 0x13c) = *(int *)(*param_1 + 0x8d0) * (int)param_1[0x27];
  if (0 < *(int *)((longlong)param_1 + 0x134)) {
    lVar10 = 0;
    local_res20 = 0;
    do {
      lVar5 = param_1[0xe];
      if (((*(byte *)(lVar5 + 0x478 + lVar10) & 4) != 0) &&
         (plVar7 = (longlong *)(lVar10 + 0x388 + lVar5), (char)plVar7[4] != '\0')) {
        plVar8 = (longlong *)(lVar10 + 0x360 + lVar5);
        *(undefined4 *)(plVar8 + 1) = 0;
        if (0x7fffffff < *(uint *)((longlong)plVar8 + 0xc)) {
          TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar8,0);
        }
        iVar6 = 2;
        if ((*(byte *)(lVar5 + 0x479 + lVar10) & 1) == 0) {
          iVar6 = *(int *)(lVar5 + 0x490 + lVar10);
        }
        if ((*(byte *)(lVar5 + 0x478 + lVar10) & 1) == 0) {
          *(undefined4 *)(plVar8 + 1) = 0;
          if ((*(int *)((longlong)plVar8 + 0xc) < 0) && (*(int *)((longlong)plVar8 + 0xc) != 0)) {
            TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo(plVar8,0);
          }
          Audio::FMixerDevice::Get2DChannelMap
                    (*param_1,*(byte *)(lVar5 + 0x479 + lVar10) >> 6 & 1,0,iVar6,
                     *(byte *)(lVar5 + 0x478 + lVar10) >> 1 & 1,plVar8);
        }
        else {
          *(undefined1 *)(local_res20 + param_1[0x22]) = 1;
          lVar5 = plVar8[1];
          iVar4 = (int)lVar5 + iVar6 * param_2;
          *(int *)(plVar8 + 1) = iVar4;
          if (*(int *)((longlong)plVar8 + 0xc) < iVar4) {
            TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(plVar8);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar8 + (longlong)(int)lVar5 * 4),0,(longlong)(iVar6 * param_2) << 2
                    );
        }
        iVar6 = (int)param_1[0x27];
        if ((int)plVar7[1] == (int)plVar8[1]) {
          iVar4 = 0;
          if (0 < (int)plVar8[1]) {
            lVar5 = 0;
            lVar9 = 0;
            do {
              fVar12 = *(float *)(lVar9 + *plVar8);
              lVar3 = *plVar7;
              *(float *)(lVar3 + 8 + lVar5) = fVar12;
              if ((*(char *)(lVar3 + 0x10 + lVar5) == '\0') && (iVar6 != 0)) {
                fVar11 = (fVar12 - *(float *)(lVar3 + lVar5)) / (float)iVar6;
                fVar12 = *(float *)(lVar3 + lVar5);
              }
              else {
                *(float *)(lVar3 + lVar5) = fVar12;
                fVar11 = 0.0;
                *(undefined1 *)(lVar3 + 0x10 + lVar5) = 0;
              }
              *(float *)(lVar3 + 0xc + lVar5) = fVar11;
              iVar4 = iVar4 + 1;
              *(float *)(lVar3 + 4 + lVar5) = fVar12;
              lVar9 = lVar9 + 4;
              lVar5 = lVar5 + 0x14;
            } while (iVar4 < (int)plVar8[1]);
          }
        }
        else {
          *(undefined4 *)(plVar7 + 1) = 0;
          if ((*(int *)((longlong)plVar7 + 0xc) < 0) && (*(int *)((longlong)plVar7 + 0xc) != 0)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeTo(plVar7,0);
          }
          iVar4 = 0;
          if (0 < (int)plVar8[1]) {
            lVar5 = 0;
            lVar9 = 0;
            do {
              iVar2 = (int)plVar7[1];
              local_78 = CONCAT31(local_78._1_3_,1);
              *(int *)(plVar7 + 1) = iVar2 + 1;
              if (*(int *)((longlong)plVar7 + 0xc) < iVar2 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
                ResizeGrow(plVar7,iVar2);
              }
              lVar3 = *plVar7;
              puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x14);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x14) = local_78;
              fVar12 = *(float *)(lVar9 + *plVar8);
              lVar3 = *plVar7;
              *(float *)(lVar3 + 8 + lVar5) = fVar12;
              if ((*(char *)(lVar3 + 0x10 + lVar5) == '\0') && (iVar6 != 0)) {
                fVar11 = (fVar12 - *(float *)(lVar3 + lVar5)) / (float)iVar6;
                fVar12 = *(float *)(lVar3 + lVar5);
              }
              else {
                *(float *)(lVar3 + lVar5) = fVar12;
                fVar11 = 0.0;
                *(undefined1 *)(lVar3 + 0x10 + lVar5) = 0;
              }
              *(float *)(lVar3 + 0xc + lVar5) = fVar11;
              iVar4 = iVar4 + 1;
              *(float *)(lVar3 + 4 + lVar5) = fVar12;
              lVar9 = lVar9 + 4;
              lVar5 = lVar5 + 0x14;
            } while (iVar4 < (int)plVar8[1]);
          }
        }
      }
      local_res20 = local_res20 + 1;
      local_res18 = local_res18 + 1;
      lVar10 = lVar10 + 0x4b0;
    } while (local_res18 < *(int *)((longlong)param_1 + 0x134));
  }
  return;
}



// FUNCTION 142a973c0 FUN_142a973c0 body=1172 status=ok
// SIG undefined FUN_142a973c0(void)

void FUN_142a973c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  undefined8 local_118;
  undefined4 uStack_110;
  float fStack_10c;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  FSoundSource::SetFilterFrequency();
  fVar13 = *(float *)(param_1 + 0x28);
  if (fVar13 != *(float *)(param_1 + 0x30)) {
    puVar7 = *(undefined8 **)(param_1 + 0xa8);
    if (fVar13 != *(float *)((longlong)puVar7 + 0xc4)) {
      uVar8 = *puVar7;
      *(float *)((longlong)puVar7 + 0xc4) = fVar13;
      uStack_110 = *(undefined4 *)((longlong)puVar7 + 0xcc);
      local_a8 = 0;
      local_98 = 0;
      local_118 = uVar8;
      fStack_10c = fVar13;
      puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f77c18;
        puVar7[1] = local_118;
        puVar7[2] = CONCAT44(fStack_10c,uStack_110);
      }
      local_d8[0] = &LAB_142a7fdb0;
      Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar8,local_d8);
      fVar13 = *(float *)(param_1 + 0x28);
    }
    *(float *)(param_1 + 0x30) = fVar13;
  }
  fVar13 = *(float *)(param_1 + 0x2c);
  if (fVar13 != *(float *)(param_1 + 0x34)) {
    puVar7 = *(undefined8 **)(param_1 + 0xa8);
    if (fVar13 != *(float *)(puVar7 + 0x19)) {
      uVar8 = *puVar7;
      *(float *)(puVar7 + 0x19) = fVar13;
      uStack_110 = *(undefined4 *)((longlong)puVar7 + 0xcc);
      local_58 = 0;
      local_48 = 0;
      local_118 = uVar8;
      fStack_10c = fVar13;
      puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f77c18;
        puVar7[1] = local_118;
        puVar7[2] = CONCAT44(fStack_10c,uStack_110);
      }
      local_88[0] = &LAB_142a7fb10;
      Audio::FMixerSourceManager::AudioMixerThreadCommand(uVar8,local_88);
      fVar13 = *(float *)(param_1 + 0x2c);
    }
    *(float *)(param_1 + 0x34) = fVar13;
  }
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    lVar9 = *(longlong *)(param_1 + 0x10);
    fVar13 = 0.0;
    if (*(char *)(lVar9 + 0x104) == '\x02') {
      fVar12 = *(float *)(lVar9 + 400);
      if ((0.0 <= fVar12) && (fVar13 = fVar12, 1.0 <= fVar12)) {
        fVar13 = 1.0;
      }
    }
    else {
      fVar12 = *(float *)(lVar9 + 0x114) - *(float *)(lVar9 + 0x110);
      if (fVar12 <= 1.0) {
        fVar12 = 1.0;
      }
      fVar12 = (*(float *)(lVar9 + 0xfc) - *(float *)(lVar9 + 0x110)) / fVar12;
      if (0.0 <= fVar12) {
        if (1.0 <= fVar12) {
          fVar12 = 1.0;
        }
      }
      else {
        fVar12 = 0.0;
      }
      if (*(char *)(lVar9 + 0x104) == '\0') {
        fVar12 = (*(float *)(lVar9 + 0x10c) - *(float *)(lVar9 + 0x108)) * fVar12 +
                 *(float *)(lVar9 + 0x108);
      }
      else {
        uVar8 = FRuntimeFloatCurve::GetRichCurve(lVar9 + 0x118);
        fVar12 = (float)FRichCurve::Eval(uVar8,fVar12,0);
      }
      if ((0.0 <= fVar12) && (fVar13 = fVar12, 1.0 <= fVar12)) {
        fVar13 = 1.0;
      }
    }
    if (((*(int *)(*(longlong *)(param_1 + 0x18) + 0xc) - 1U < 2) &&
        ((*(byte *)(*(longlong *)(param_1 + 8) + 0x359) & 0x10) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xc0) != 0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x728);
    if (bVar6) {
      lVar4 = *(longlong *)(lVar9 + 0x20);
      plVar5 = *(longlong **)(lVar9 + 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
      }
      if (lVar4 == 0) goto LAB_142a97759;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x728);
      local_108 = *(undefined8 *)(lVar9 + 0x20);
      local_100 = *(longlong *)(lVar9 + 0x28);
      if (local_100 != 0) {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      puVar7 = &local_108;
    }
    else {
      lVar4 = *(longlong *)(lVar9 + 0x10);
      plVar5 = *(longlong **)(lVar9 + 0x18);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
      }
      if (lVar4 == 0) goto LAB_142a97759;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x728);
      local_f8 = *(undefined8 *)(lVar9 + 0x10);
      local_f0 = *(longlong *)(lVar9 + 0x18);
      if (local_f0 != 0) {
        LOCK();
        *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
        UNLOCK();
      }
      puVar7 = &local_f8;
    }
    FUN_142a940b0(*(undefined8 *)(param_1 + 0xa8),puVar7,fVar13);
  }
LAB_142a97759:
  puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 0x18);
  puVar11 = puVar10 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 4;
  for (; puVar10 != puVar11; puVar10 = puVar10 + 4) {
    if (*(longlong *)(puVar10 + 2) != 0) {
      FUN_142a85810(*(undefined8 *)(param_1 + 0x88),&local_118);
      lStack_e0 = CONCAT44(fStack_10c,uStack_110);
      local_e8 = local_118;
      if (lStack_e0 != 0) {
        LOCK();
        *(int *)(lStack_e0 + 8) = *(int *)(lStack_e0 + 8) + 1;
        UNLOCK();
      }
      lVar9 = CONCAT44(fStack_10c,uStack_110);
      FUN_142a940b0(*(undefined8 *)(param_1 + 0xa8),&local_e8,*puVar10);
      *(undefined1 *)
       (param_1 + ((ulonglong)*(byte *)(*(longlong *)(puVar10 + 2) + 0x40) + 8) * 0x18) = 1;
      if (lVar9 != 0) {
        LOCK();
        piVar2 = (int *)(lVar9 + 8);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar7 = (undefined8 *)CONCAT44(fStack_10c,uStack_110);
          (**(code **)*puVar7)(puVar7);
          LOCK();
          piVar2 = (int *)((longlong)puVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(fStack_10c,uStack_110) + 8))
                      ((longlong *)CONCAT44(fStack_10c,uStack_110),1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142a97860 FUN_142a97860 body=671 status=ok
// SIG undefined FUN_142a97860(void)

void FUN_142a97860(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  void *_Src_00;
  undefined8 *puVar13;
  void *local_d0;
  int local_c8;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  longlong local_68 [2];
  longlong local_58;
  longlong local_38;
  
  _Src_00 = (void *)0x0;
  lVar1 = param_1 + 0x9b0;
  LOCK();
  iVar7 = *(int *)(param_1 + 0x9fc);
  if (iVar7 == 0) {
    *(int *)(param_1 + 0x9fc) = 0;
    iVar7 = 0;
  }
  UNLOCK();
  LOCK();
  iVar8 = *(int *)(param_1 + 0x9f8);
  if (iVar8 == 0) {
    *(int *)(param_1 + 0x9f8) = 0;
    iVar8 = 0;
  }
  UNLOCK();
  if (iVar7 == iVar8) {
    LOCK();
    *(uint *)(param_1 + 0x9f8) = (uint)(iVar8 == 0);
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0xaf8) = 1;
    UNLOCK();
  }
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x108))();
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x40))();
  if (cVar6 != '\0') {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0xa8))
                      (*(longlong **)(param_1 + 0x738),local_68);
    Audio::FAudioPlatformDeviceInfo::operator=(param_1 + 0x8b0,uVar9);
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    FUN_142a8ae50(param_1,*(undefined4 *)(param_1 + 0x8d0));
    FUN_142a97040(lVar1,*(undefined4 *)(param_1 + 0x8d0));
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x48))();
  }
  plVar2 = (longlong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x9c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar2,0);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x128);
  puVar13 = puVar10 + (longlong)*(int *)(param_1 + 0x130) * 0x16;
  for (; puVar10 != puVar13; puVar10 = puVar10 + 0x16) {
    iVar7 = *(int *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = iVar7 + 1;
    if (*(int *)(param_1 + 0x9c) < iVar7 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar2,iVar7);
    }
    uVar9 = puVar10[1];
    puVar11 = (undefined8 *)((longlong)iVar7 * 0x30 + *plVar2);
    *puVar11 = *puVar10;
    puVar11[1] = uVar9;
    uVar9 = puVar10[3];
    puVar11[2] = puVar10[2];
    puVar11[3] = uVar9;
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0x24);
    uVar4 = *(undefined4 *)(puVar10 + 5);
    uVar5 = *(undefined4 *)((longlong)puVar10 + 0x2c);
    *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar10 + 4);
    *(undefined4 *)((longlong)puVar11 + 0x24) = uVar3;
    *(undefined4 *)(puVar11 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar5;
  }
  local_c8 = *(int *)(param_1 + 0x98);
  lVar12 = (longlong)local_c8;
  _Src = (void *)*plVar2;
  local_d0 = (void *)0x0;
  if (local_c8 != 0) {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_d0,local_c8,0);
    _Src_00 = local_d0;
    _guard_xfg_dispatch_icall_nop(local_d0,_Src,lVar12 * 0x30);
  }
  iVar7 = local_c8;
  local_88 = 0;
  local_78 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x20,local_a8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_CopyToEmptyStorage_1454d5260;
    puVar10[1] = lVar1;
    puVar13 = puVar10 + 2;
    *puVar13 = 0;
    *(int *)(puVar10 + 3) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar13,iVar7,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar13,_Src_00,(longlong)iVar7 * 0x30);
    }
  }
  local_b8[0] = &LAB_142a7fe00;
  Audio::FMixerSourceManager::AudioMixerThreadCommand(lVar1,local_b8);
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 142a97b00 UpdateHardwareTiming body=90 status=ok
// SIG undefined UpdateHardwareTiming(void)

void Audio::FMixerDevice::UpdateHardwareTiming(longlong param_1)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  dVar1 = *(double *)(param_1 + 0x880);
  QueryPerformanceCounter(local_res8);
  *(double *)(param_1 + 0x898) =
       (((double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(param_1 + 0x890)
       ) + dVar1;
  return;
}



// FUNCTION 142a97b60 UpdateParameters body=1095 status=ok
// SIG undefined UpdateParameters(void)

void FSubmixEffectSubmixEQ::UpdateParameters(longlong param_1)

{
  void **ppvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  BOOL BVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  void *_Src_00;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  
  _Src_00 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_ac = 0;
  BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (BVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    if (*(char *)(param_1 + 0xa8) != '\0') {
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb0) = 0;
    iVar17 = 0;
    if (&local_b8 != (void **)(param_1 + 0xb8)) {
      iVar17 = *(int *)(param_1 + 0xc0);
      _Src = *(void **)(param_1 + 0xb8);
      local_b0 = iVar17;
      if (iVar17 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar17,0);
        _Src_00 = local_b8;
        ::_guard_xfg_dispatch_icall_nop(local_b8,_Src,(longlong)iVar17 << 4);
        iVar17 = local_b0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    ppvVar1 = (void **)(param_1 + 0x100);
    if (ppvVar1 != &local_b8) {
      *(int *)(param_1 + 0x108) = iVar17;
      if ((iVar17 == 0) && (*(int *)(param_1 + 0x10c) == 0)) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(ppvVar1,iVar17);
        ::_guard_xfg_dispatch_icall_nop(*ppvVar1,_Src_00,(longlong)iVar17 << 4);
      }
    }
  }
  lVar16 = 0;
  lVar10 = (longlong)*(int *)(param_1 + 0x88);
  iVar17 = *(int *)(param_1 + 0x108);
  lVar18 = (longlong)iVar17;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if (0 < lVar10) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x80);
      iVar5 = *(int *)(lVar16 + 0x10 + lVar6);
      *(undefined1 *)(lVar16 + lVar6) = 1;
      if (iVar5 < iVar17) {
        lVar15 = lVar16 + lVar6;
        uVar14 = (ulonglong)(uint)(iVar17 - iVar5);
        do {
          iVar5 = *(int *)(lVar15 + 0x10);
          iVar9 = iVar5 + 1;
          *(int *)(lVar15 + 0x10) = iVar9;
          if (*(int *)(lVar15 + 0x14) < iVar9) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar15 + 8);
          }
          lVar13 = *(longlong *)(lVar15 + 8);
          lVar11 = (longlong)iVar5 * 0x30;
          *(undefined ***)(lVar11 + lVar13) = &PTR__vector_deleting_destructor__1454d43d0;
          *(undefined4 *)(lVar11 + 8 + lVar13) = 0;
          *(undefined8 *)(lVar11 + 0x10 + lVar13) = 0;
          *(undefined8 *)(lVar11 + 0x18 + lVar13) = 0;
          *(undefined8 *)(lVar11 + 0x20 + lVar13) = 0;
          *(undefined4 *)(lVar11 + 0x28 + lVar13) = 0;
          *(undefined1 *)(lVar11 + 0x2c + lVar13) = 1;
          Audio::FBiquadFilter::Init
                    (lVar11 + *(longlong *)(lVar15 + 8),*(undefined4 *)(param_1 + 0xa0),2,4,
                     0x469c4000,0x40000000,0);
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      else if ((iVar17 < iVar5) && (lVar18 < iVar5)) {
        lVar13 = iVar5 - lVar18;
        lVar15 = lVar18 * 0x30;
        do {
          *(undefined1 *)(lVar15 + 0x2c + *(longlong *)(lVar16 + 8 + lVar6)) = 0;
          lVar13 = lVar13 + -1;
          lVar15 = lVar15 + 0x30;
        } while (lVar13 != 0);
      }
      lVar11 = 0;
      lVar15 = lVar18;
      lVar13 = lVar11;
      if (0 < lVar18) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x100);
          *(byte *)(lVar13 + 0x2c + *(longlong *)(lVar16 + 8 + lVar6)) =
               *(byte *)(lVar11 + 0xc + lVar7) & 1;
          fVar2 = *(float *)(lVar11 + lVar7);
          lVar12 = *(longlong *)(lVar16 + 8 + lVar6) + lVar13;
          fVar3 = *(float *)(lVar11 + 8 + lVar7);
          fVar4 = *(float *)(lVar11 + 4 + lVar7);
          if (5.0 <= fVar2) {
            fVar19 = *(float *)(lVar12 + 0x18) * 0.5 - 1.0;
            if (fVar2 <= fVar19) {
              fVar19 = fVar2;
            }
          }
          else {
            fVar19 = 5.0;
          }
          if ((((*(int *)(lVar12 + 8) != 4) || (1e-08 < ABS(*(float *)(lVar12 + 0x20) - fVar19))) ||
              (1e-08 < ABS(*(float *)(lVar12 + 0x24) - fVar4))) ||
             (1e-08 < ABS(*(float *)(lVar12 + 0x28) - fVar3))) {
            *(float *)(lVar12 + 0x20) = fVar19;
            *(float *)(lVar12 + 0x24) = fVar4;
            *(float *)(lVar12 + 0x28) = fVar3;
            *(undefined4 *)(lVar12 + 8) = 4;
            Audio::FBiquadFilter::CalculateBiquadCoefficients();
          }
          lVar11 = lVar11 + 0x10;
          lVar15 = lVar15 + -1;
          lVar13 = lVar13 + 0x30;
        } while (lVar15 != 0);
      }
      lVar16 = lVar16 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}



// FUNCTION 142a97fb0 FUN_142a97fb0 body=401 status=ok
// SIG undefined FUN_142a97fb0(void)

void FUN_142a97fb0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_28;
  longlong *plStack_20;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar10 = uVar7;
  if (0 < *(int *)(param_1 + 0x134)) {
    do {
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x70) + uVar10);
      if (((*plVar8 != 0) && (lVar9 = *(longlong *)(*plVar8 + 0x50), lVar9 != 0)) &&
         ((*(byte *)(lVar9 + 0xb3) & 8) != 0)) {
        FUN_142a8c8e0();
        if ((*(byte *)((longlong)plVar8 + 0x479) & 8) == 0) {
          *(byte *)((longlong)plVar8 + 0x479) = *(byte *)((longlong)plVar8 + 0x479) | 8;
          (**(code **)(*(longlong *)plVar8[2] + 0x10))();
        }
        local_28 = 0;
        plStack_20 = (longlong *)0x0;
        if (plVar8 != &local_28) {
          *plVar8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(plVar8 + 1,&plStack_20);
          plVar3 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_20 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_20)(plStack_20);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plStack_20 + 8))(plStack_20,1);
              }
            }
          }
        }
        *(byte *)(plVar8 + 0x8f) = *(byte *)(plVar8 + 0x8f) & 0xc3;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 0x4b0;
    } while ((int)uVar6 < *(int *)(param_1 + 0x134));
  }
  iVar5 = *(int *)(param_1 + 0xe8) + -1;
  if (-1 < iVar5) {
    lVar9 = (longlong)iVar5 << 4;
    do {
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar9) + 0x58);
      if (param_2 == '\0') {
        if ((plVar8 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar8 + 8))(), cVar4 != '\0'))
        goto LAB_142a98110;
      }
      else {
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x18))();
        }
LAB_142a98110:
        TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                  (param_1 + 0xe0,iVar5,1);
      }
      lVar9 = lVar9 + -0x10;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}



// FUNCTION 142a98150 FUN_142a98150 body=494 status=ok
// SIG undefined FUN_142a98150(void)

void FUN_142a98150(longlong param_1,int param_2,undefined8 *param_3,undefined1 param_4)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int *_Src_00;
  int local_res10 [4];
  undefined1 local_res20 [8];
  int *local_b8;
  int local_b0;
  int *local_a0;
  undefined8 *local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  _Src_00 = (int *)0x0;
  if (*(int *)(param_1 + 0x968) != *(int *)(param_1 + 0x994)) {
    lVar6 = *(longlong *)(param_1 + 0x9a0);
    if (*(longlong *)(param_1 + 0x9a0) == 0) {
      lVar6 = param_1 + 0x998;
    }
    iVar2 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x9a8) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x960));
        if (*piVar5 == param_2) {
          if (iVar2 != -1) goto LAB_142a981e1;
          break;
        }
        iVar2 = piVar5[6];
      } while (iVar2 != -1);
    }
  }
  piVar5 = _Src_00;
LAB_142a981e1:
  piVar4 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar4 = _Src_00;
  }
  local_res10[0] = param_2;
  if (piVar4 == (int *)0x0) {
    local_a0 = local_res10;
    local_98 = param_3;
    FUN_142a78860((longlong *)(param_1 + 0x960),local_res20,&local_a0,0);
  }
  else {
    FUN_1408e22e0(piVar4,param_3);
  }
  iVar2 = local_res10[0];
  local_b0 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_b0;
  _Src = (void *)*param_3;
  local_b8 = (int *)0x0;
  if (local_b0 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    _Src_00 = local_b8;
    _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar6 << 4);
  }
  iVar1 = local_b0;
  local_58 = 0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x30,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_CopyToEmptyStorage_1454d5278;
    puVar3[1] = param_1 + 0x9b0;
    *(int *)(puVar3 + 2) = iVar2;
    puVar3[3] = 0;
    *(int *)(puVar3 + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3 + 3,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar3[3],_Src_00,(longlong)iVar1 << 4);
    }
    *(undefined1 *)(puVar3 + 5) = param_4;
  }
  local_88[0] = &LAB_142a7fc80;
  Audio::FMixerSourceManager::AudioMixerThreadCommand(param_1 + 0x9b0,local_88);
  if (_Src_00 != (int *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 142a98340 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USubmixEffectSubmixEQPreset::GetPrivateStaticClass(void)

{
  if (DAT_146b2a158 == 0) {
    FUN_14171ccd0(L"/Script/AudioMixer",L"SubmixEffectSubmixEQPreset",&DAT_146b2a158,
                  StaticRegisterNativesUSubmixEffectSubmixEQPreset,0x88,0x10000000,0,L"Engine",
                  InternalConstructor<USubmixEffectSubmixEQPreset>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundEffectSubmixPreset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2a158;
}



// FUNCTION 142a983f0 FUN_142a983f0 body=47 status=ok
// SIG undefined FUN_142a983f0(void)

longlong FUN_142a983f0(void)

{
  if (DAT_146b2a150 == 0) {
    FUN_141786440(&DAT_146b2a150,&PTR_GetPrivateStaticClass_1454d59e0);
  }
  return DAT_146b2a150;
}



// FUNCTION 142a98420 FUN_142a98420 body=47 status=ok
// SIG undefined FUN_142a98420(void)

longlong FUN_142a98420(void)

{
  if (DAT_146b2a148 == 0) {
    FUN_141786a30(&DAT_146b2a148,&PTR_FUN_14667faf0);
  }
  return DAT_146b2a148;
}



// FUNCTION 142a98450 FUN_142a98450 body=53 status=ok
// SIG undefined FUN_142a98450(void)

void FUN_142a98450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1454d80c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a98490 FUN_142a98490 body=47 status=ok
// SIG undefined FUN_142a98490(void)

longlong FUN_142a98490(void)

{
  if (DAT_146b2a090 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a090,&PTR_s__Script_AudioMixer_1454d7888);
  }
  return DAT_146b2a090;
}



// FUNCTION 142a984e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USnapDungeonStreamingChunk::GetPrivateStaticClass(void)

{
  if (DAT_146b2a188 == 0) {
    FUN_14171ccd0(L"/Script/AudioMixer",L"SubmixEffectReverbPreset",&DAT_146b2a188,
                  StaticRegisterNativesUSnapDungeonStreamingChunk,200,0x10000000,0,L"Engine",
                  FUN_142a98d50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundEffectSubmixPreset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2a188;
}



// FUNCTION 142a98590 FUN_142a98590 body=47 status=ok
// SIG undefined FUN_142a98590(void)

longlong FUN_142a98590(void)

{
  if (DAT_146b2a180 == 0) {
    FUN_141786440(&DAT_146b2a180,&PTR_GetPrivateStaticClass_1454d5f80);
  }
  return DAT_146b2a180;
}



// FUNCTION 142a985c0 FUN_142a985c0 body=47 status=ok
// SIG undefined FUN_142a985c0(void)

longlong FUN_142a985c0(void)

{
  if (DAT_146b2a170 == 0) {
    FUN_141786a30(&DAT_146b2a170,&PTR_FUN_14667fed0);
  }
  return DAT_146b2a170;
}



// FUNCTION 142a985f0 FUN_142a985f0 body=47 status=ok
// SIG undefined FUN_142a985f0(void)

longlong FUN_142a985f0(void)

{
  if (DAT_146b2a178 == 0) {
    FUN_141786a30(&DAT_146b2a178,&PTR_FUN_14667ff50);
  }
  return DAT_146b2a178;
}



// FUNCTION 142a98620 FUN_142a98620 body=53 status=ok
// SIG undefined FUN_142a98620(void)

void FUN_142a98620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1454d84c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a98660 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USubmixEffectDynamicsProcessorPreset::GetPrivateStaticClass(void)

{
  if (DAT_146b2a120 == 0) {
    FUN_14171ccd0(L"/Script/AudioMixer",L"SubmixEffectDynamicsProcessorPreset",&DAT_146b2a120,
                  StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset,0xb8,0x10000000,0,
                  L"Engine",InternalConstructor<USubmixEffectDynamicsProcessorPreset>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundEffectSubmixPreset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2a120;
}



// FUNCTION 142a98720 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAudioMixerBlueprintLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b2a0e8 == 0) {
    FUN_14171ccd0(L"/Script/AudioMixer",L"AudioMixerBlueprintLibrary",&DAT_146b2a0e8,FUN_142a997c0,
                  0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b2a0e8;
}



// FUNCTION 142a987d0 FUN_142a987d0 body=162 status=ok
// SIG undefined FUN_142a987d0(void)

longlong FUN_142a987d0(void)

{
  if (DAT_146b2a1a0 == 0) {
    FUN_14171ccd0(L"/Script/AudioMixer",L"SynthSound",&DAT_146b2a1a0,FUN_140447710,0x270,0x10000000,
                  0,L"Engine",&LAB_142a98f00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCurveLinearColor::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2a1a0;
}



// FUNCTION 142a98880 FUN_142a98880 body=47 status=ok
// SIG undefined FUN_142a98880(void)

longlong FUN_142a98880(void)

{
  if (DAT_146b2a0e0 == 0) {
    FUN_141786440(&DAT_146b2a0e0,&PTR_GetPrivateStaticClass_1454d68d0);
  }
  return DAT_146b2a0e0;
}



// FUNCTION 142a988b0 FUN_142a988b0 body=47 status=ok
// SIG undefined FUN_142a988b0(void)

longlong FUN_142a988b0(void)

{
  if (DAT_146b2a098 == 0) {
    FUN_141786a30(&DAT_146b2a098,&PTR_FUN_14667eb10);
  }
  return DAT_146b2a098;
}



// FUNCTION 142a988e0 FUN_142a988e0 body=47 status=ok
// SIG undefined FUN_142a988e0(void)

longlong FUN_142a988e0(void)

{
  if (DAT_146b2a0a0 == 0) {
    FUN_141786a30(&DAT_146b2a0a0,&PTR_FUN_14667ec10);
  }
  return DAT_146b2a0a0;
}



// FUNCTION 142a98910 FUN_142a98910 body=47 status=ok
// SIG undefined FUN_142a98910(void)

longlong FUN_142a98910(void)

{
  if (DAT_146b2a0a8 == 0) {
    FUN_141786a30(&DAT_146b2a0a8,&PTR_FUN_14667ec90);
  }
  return DAT_146b2a0a8;
}



// FUNCTION 142a98940 FUN_142a98940 body=47 status=ok
// SIG undefined FUN_142a98940(void)

longlong FUN_142a98940(void)

{
  if (DAT_146b2a0b0 == 0) {
    FUN_141786a30(&DAT_146b2a0b0,&PTR_FUN_14667edc0);
  }
  return DAT_146b2a0b0;
}



// FUNCTION 142a98970 FUN_142a98970 body=47 status=ok
// SIG undefined FUN_142a98970(void)

longlong FUN_142a98970(void)

{
  if (DAT_146b2a0b8 == 0) {
    FUN_141786a30(&DAT_146b2a0b8,&PTR_FUN_14667ee80);
  }
  return DAT_146b2a0b8;
}



// FUNCTION 142a989a0 FUN_142a989a0 body=47 status=ok
// SIG undefined FUN_142a989a0(void)

longlong FUN_142a989a0(void)

{
  if (DAT_146b2a0c0 == 0) {
    FUN_141786a30(&DAT_146b2a0c0,&PTR_FUN_14667ef40);
  }
  return DAT_146b2a0c0;
}



// FUNCTION 142a989d0 FUN_142a989d0 body=47 status=ok
// SIG undefined FUN_142a989d0(void)

longlong FUN_142a989d0(void)

{
  if (DAT_146b2a0c8 == 0) {
    FUN_141786a30(&DAT_146b2a0c8,&PTR_FUN_14667f080);
  }
  return DAT_146b2a0c8;
}



// FUNCTION 142a98a00 FUN_142a98a00 body=47 status=ok
// SIG undefined FUN_142a98a00(void)

longlong FUN_142a98a00(void)

{
  if (DAT_146b2a0d0 == 0) {
    FUN_141786a30(&DAT_146b2a0d0,&PTR_FUN_14667f1b0);
  }
  return DAT_146b2a0d0;
}



// FUNCTION 142a98a30 FUN_142a98a30 body=47 status=ok
// SIG undefined FUN_142a98a30(void)

longlong FUN_142a98a30(void)

{
  if (DAT_146b2a0d8 == 0) {
    FUN_141786a30(&DAT_146b2a0d8,&PTR_FUN_14667f3d0);
  }
  return DAT_146b2a0d8;
}



// FUNCTION 142a98a60 FUN_142a98a60 body=47 status=ok
// SIG undefined FUN_142a98a60(void)

longlong FUN_142a98a60(void)

{
  if (DAT_146b2a1d0 == 0) {
    FUN_141786440(&DAT_146b2a1d0,&PTR_LAB_1454d6ba0);
  }
  return DAT_146b2a1d0;
}



// FUNCTION 142a98a90 FUN_142a98a90 body=47 status=ok
// SIG undefined FUN_142a98a90(void)

longlong FUN_142a98a90(void)

{
  if (DAT_146b2a1a8 == 0) {
    FUN_141786a30(&DAT_146b2a1a8,&PTR_FUN_146680150);
  }
  return DAT_146b2a1a8;
}



// FUNCTION 142a98ac0 FUN_142a98ac0 body=47 status=ok
// SIG undefined FUN_142a98ac0(void)

longlong FUN_142a98ac0(void)

{
  if (DAT_146b2a1b0 == 0) {
    FUN_141786a30(&DAT_146b2a1b0,&PTR_FUN_1466801d0);
  }
  return DAT_146b2a1b0;
}



// FUNCTION 142a98af0 FUN_142a98af0 body=47 status=ok
// SIG undefined FUN_142a98af0(void)

longlong FUN_142a98af0(void)

{
  if (DAT_146b2a1b8 == 0) {
    FUN_141786a30(&DAT_146b2a1b8,&PTR_FUN_146680210);
  }
  return DAT_146b2a1b8;
}



// FUNCTION 142a98b20 FUN_142a98b20 body=47 status=ok
// SIG undefined FUN_142a98b20(void)

longlong FUN_142a98b20(void)

{
  if (DAT_146b2a1c0 == 0) {
    FUN_141786a30(&DAT_146b2a1c0,&PTR_FUN_146680250);
  }
  return DAT_146b2a1c0;
}



// FUNCTION 142a98b50 FUN_142a98b50 body=47 status=ok
// SIG undefined FUN_142a98b50(void)

longlong FUN_142a98b50(void)

{
  if (DAT_146b2a1c8 == 0) {
    FUN_141786a30(&DAT_146b2a1c8,&PTR_FUN_146680290);
  }
  return DAT_146b2a1c8;
}



// FUNCTION 142a98ba0 FUN_142a98ba0 body=47 status=ok
// SIG undefined FUN_142a98ba0(void)

longlong FUN_142a98ba0(void)

{
  if (DAT_146b2a118 == 0) {
    FUN_141786440(&DAT_146b2a118,&PTR_GetPrivateStaticClass_1454d75a0);
  }
  return DAT_146b2a118;
}



// FUNCTION 142a98bd0 FUN_142a98bd0 body=47 status=ok
// SIG undefined FUN_142a98bd0(void)

longlong FUN_142a98bd0(void)

{
  if (DAT_146b2a110 == 0) {
    FUN_141786a30(&DAT_146b2a110,&PTR_FUN_14667f810);
  }
  return DAT_146b2a110;
}



// FUNCTION 142a98c00 FUN_142a98c00 body=53 status=ok
// SIG undefined FUN_142a98c00(void)

void FUN_142a98c00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1454d7cd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a98c60 InternalConstructor<USubmixEffectDynamicsProcessorPreset> body=230 status=ok
// SIG undefined InternalConstructor<USubmixEffectDynamicsProcessorPreset>(void)

void InternalConstructor<USubmixEffectDynamicsProcessorPreset>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1454d78b0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 8));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 8),4000);
    *(uint *)((longlong)puVar1 + 0x8c) = *(uint *)((longlong)puVar1 + 0x8c) | 3;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    *(undefined2 *)(puVar1 + 0xd) = 0x100;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0x40400000;
    *(undefined4 *)(puVar1 + 0xe) = 0x41200000;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0x42c80000;
    *(undefined4 *)(puVar1 + 0xf) = 0xc0c00000;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3fc00000;
    puVar1[0x10] = 0x41200000;
    *(uint *)((longlong)puVar1 + 0xb4) = *(uint *)((longlong)puVar1 + 0xb4) | 3;
    *(undefined2 *)(puVar1 + 0x12) = 0x100;
    *(undefined4 *)((longlong)puVar1 + 0x94) = 0x40400000;
    *(undefined4 *)(puVar1 + 0x13) = 0x41200000;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0x42c80000;
    *(undefined4 *)(puVar1 + 0x14) = 0xc0c00000;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x3fc00000;
    puVar1[0x15] = 0x41200000;
    *(undefined4 *)(puVar1 + 0x16) = 0;
  }
  return;
}



// FUNCTION 142a98d50 FUN_142a98d50 body=287 status=ok
// SIG undefined FUN_142a98d50(void)

void FUN_142a98d50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1454d81f0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 8));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 8),4000);
    *(undefined4 *)(puVar1 + 0xd) = 0x3f59999a;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0x3f59999a;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0x3f63d70a;
    *(undefined4 *)(puVar1 + 0xf) = 0x3fbeb852;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f547ae1;
    *(undefined4 *)(puVar1 + 0x10) = 0x3d4ccccd;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x3be56042;
    *(undefined4 *)(puVar1 + 0x11) = 0x3fa147ae;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x3dcccccd;
    *(undefined4 *)(puVar1 + 0x12) = 0x3f7e76c9;
    *(undefined4 *)((longlong)puVar1 + 0x94) = 0x3e99999a;
    *(undefined4 *)(puVar1 + 0x13) = 0x3f59999a;
    *(undefined8 *)((longlong)puVar1 + 0x9c) = 0x3f59999a;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x3f63d70a;
    *(undefined4 *)(puVar1 + 0x15) = 0x3fbeb852;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0x3f547ae1;
    *(undefined4 *)(puVar1 + 0x16) = 0x3d4ccccd;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x3be56042;
    *(undefined4 *)(puVar1 + 0x17) = 0x3fa147ae;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x3dcccccd;
    *(undefined4 *)(puVar1 + 0x18) = 0x3f7e76c9;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0x3e99999a;
  }
  return;
}



// FUNCTION 142a98e70 InternalConstructor<USubmixEffectSubmixEQPreset> body=97 status=ok
// SIG undefined InternalConstructor<USubmixEffectSubmixEQPreset>(void)

void InternalConstructor<USubmixEffectSubmixEQPreset>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1454d7df8;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 8));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 8),4000);
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
  }
  return;
}



// FUNCTION 142a98f20 FUN_142a98f20 body=80 status=ok
// SIG undefined FUN_142a98f20(void)

longlong FUN_142a98f20(longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142a98f70 FUN_142a98f70 body=80 status=ok
// SIG undefined FUN_142a98f70(void)

longlong FUN_142a98f70(longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142a98fc0 FUN_142a98fc0 body=108 status=ok
// SIG undefined FUN_142a98fc0(void)

longlong FUN_142a98fc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142a990e0 FUN_142a990e0 body=36 status=ok
// SIG undefined FUN_142a990e0(void)

void FUN_142a990e0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FSubmixEffectDynamicsProcessor::FSubmixEffectDynamicsProcessor(lVar1);
    return;
  }
  return;
}



// FUNCTION 142a99110 CreateNewEffect body=36 status=ok
// SIG undefined CreateNewEffect(void)

void USubmixEffectReverbPreset::CreateNewEffect(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x970);
  if (lVar1 != 0) {
    FUN_142a7aa70(lVar1);
    return;
  }
  return;
}



// FUNCTION 142a99140 FUN_142a99140 body=36 status=ok
// SIG undefined FUN_142a99140(void)

void FUN_142a99140(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FSubmixEffectSubmixEQ::FSubmixEffectSubmixEQ(lVar1);
    return;
  }
  return;
}



// FUNCTION 142a99170 FUN_142a99170 body=149 status=ok
// SIG undefined FUN_142a99170(void)

longlong * FUN_142a99170(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x280))();
  if (param_3 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  plVar2 = (longlong *)FUN_1417985e0(uVar1,param_2,param_3,param_4,0,0,0,0,0);
  (**(code **)(*plVar2 + 0x2a0))(plVar2);
  return plVar2;
}



// FUNCTION 142a99210 FUN_142a99210 body=149 status=ok
// SIG undefined FUN_142a99210(void)

longlong * FUN_142a99210(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x280))();
  if (param_3 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  plVar2 = (longlong *)FUN_1417985e0(uVar1,param_2,param_3,param_4,0,0,0,0,0);
  (**(code **)(*plVar2 + 0x2a0))(plVar2);
  return plVar2;
}



// FUNCTION 142a992b0 FUN_142a992b0 body=149 status=ok
// SIG undefined FUN_142a992b0(void)

longlong * FUN_142a992b0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x280))();
  if (param_3 == 0) {
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  plVar2 = (longlong *)FUN_1417985e0(uVar1,param_2,param_3,param_4,0,0,0,0,0);
  (**(code **)(*plVar2 + 0x2a0))(plVar2);
  return plVar2;
}



// FUNCTION 142a99350 ESubmixEffectDynamicsPeakMode_StaticEnum body=85 status=ok
// SIG undefined ESubmixEffectDynamicsPeakMode_StaticEnum(void)

void ESubmixEffectDynamicsPeakMode_StaticEnum(void)

{
  if (DAT_146b2a030 == 0) {
    if (DAT_146b2a090 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a090,&PTR_s__Script_AudioMixer_1454d7888);
    }
    DAT_146b2a030 = GetStaticEnum(FUN_142a99b10,DAT_146b2a090,L"ESubmixEffectDynamicsPeakMode");
  }
  return;
}



// FUNCTION 142a993b0 ESubmixEffectDynamicsProcessorType_StaticEnum body=85 status=ok
// SIG undefined ESubmixEffectDynamicsProcessorType_StaticEnum(void)

void ESubmixEffectDynamicsProcessorType_StaticEnum(void)

{
  if (DAT_146b2a038 == 0) {
    if (DAT_146b2a090 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a090,&PTR_s__Script_AudioMixer_1454d7888);
    }
    DAT_146b2a038 = GetStaticEnum(FUN_142a99b40,DAT_146b2a090,L"ESubmixEffectDynamicsProcessorType")
    ;
  }
  return;
}



// FUNCTION 142a99410 GetAssetActionName body=110 status=ok
// SIG undefined GetAssetActionName(void)

undefined8
USubmixEffectDynamicsProcessorPreset::GetAssetActionName(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x1e;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_18[0],0x1e,"SubmixEffectDynamicsProcessor",0x1e,0x3f);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a99480 GetAssetActionName body=110 status=ok
// SIG undefined GetAssetActionName(void)

undefined8 USubmixEffectReverbPreset::GetAssetActionName(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x13;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x13,"SubmixEffectReverb",0x13,0x3f);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a994f0 GetAssetActionName body=110 status=ok
// SIG undefined GetAssetActionName(void)

undefined8 USubmixEffectSubmixEQPreset::GetAssetActionName(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x15;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x15,"SubmixEffectSubmixEQ",0x15,0x3f);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a99560 FUN_142a99560 body=162 status=ok
// SIG undefined FUN_142a99560(void)

longlong FUN_142a99560(void)

{
  if (DAT_146b2a1d8 == 0) {
    FUN_14171ccd0(L"/Script/AudioMixer",L"SynthComponent",&DAT_146b2a1d8,FUN_142a99880,0x650,
                  0x10000000,0,L"Engine",&LAB_142a98ee0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b2a1d8;
}



// FUNCTION 142a99610 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC(void)

{
  return 0x1c421399;
}



// FUNCTION 142a99620 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC(void)

{
  return 0xdec51abf;
}



// FUNCTION 142a99630 FUN_142a99630 body=6 status=ok
// SIG undefined FUN_142a99630(void)

undefined8 FUN_142a99630(void)

{
  return 0x210692b4;
}



// FUNCTION 142a99640 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC(void)

{
  return 0x6da1f9cd;
}



// FUNCTION 142a99650 Init body=96 status=ok
// SIG undefined Init(void)

void USubmixEffectDynamicsProcessorPreset::Init(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xac);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x000142a996a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 142a996b0 FUN_142a996b0 body=94 status=ok
// SIG undefined FUN_142a996b0(void)

void FUN_142a996b0(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xc4);
                    /* WARNING: Could not recover jumptable at 0x000142a99707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 142a99710 Init body=71 status=ok
// SIG undefined Init(void)

void USubmixEffectSubmixEQPreset::Init(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  FUN_1408e22e0(param_1 + 0x68,param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000142a99750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 142a997c0 FUN_142a997c0 body=34 status=ok
// SIG undefined FUN_142a997c0(void)

void FUN_142a997c0(void)

{
  undefined8 uVar1;
  
  uVar1 = UAudioMixerBlueprintLibrary::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddMasterSubmixEffect_1454d7bb0,9);
  return;
}



// FUNCTION 142a997f0 StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset body=34 status=ok
// SIG undefined StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset(void)

void USubmixEffectDynamicsProcessorPreset::StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset
               (void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetSettings_1454d7de8,1);
  return;
}



// FUNCTION 142a99820 StaticRegisterNativesUSnapDungeonStreamingChunk body=34 status=ok
// SIG undefined StaticRegisterNativesUSnapDungeonStreamingChunk(void)

void USnapDungeonStreamingChunk::StaticRegisterNativesUSnapDungeonStreamingChunk(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetSettings_1454d85d8,2);
  return;
}


