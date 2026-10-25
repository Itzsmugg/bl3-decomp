// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141f65b70 SetKeyTimes body=364 status=ok
// SIG undefined SetKeyTimes(void)

void FMovieSceneIntegerChannel::SetKeyTimes(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  local_48 = param_1 + 8;
  puVar9 = (undefined4 *)*param_3;
  lVar1 = param_1 + 0x30;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar10 = *param_2 - (longlong)puVar9;
    uVar11 = (ulonglong)*(uint *)(param_2 + 1);
    local_40 = lVar1;
    local_38 = plVar2;
    do {
      if (lVar1 != 0) {
        iVar5 = FKeyHandleLookupTable::GetIndex(lVar1,*(undefined4 *)((longlong)puVar9 + lVar10));
        if (iVar5 != -1) {
          iVar6 = FMovieSceneChannelData::MoveKeyInternal(&local_48,iVar5,*puVar9);
          if (iVar6 != iVar5) {
            lVar4 = *plVar2;
            iVar8 = *(int *)(param_1 + 0x28);
            uVar3 = *(undefined4 *)(lVar4 + (longlong)iVar5 * 4);
            iVar7 = (iVar8 - iVar5) + -1;
            if (iVar7 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar5 * 4 + lVar4),
                         (void *)(lVar4 + (longlong)(iVar5 + 1) * 4),(longlong)iVar7 << 2);
              iVar8 = *(int *)(param_1 + 0x28);
            }
            *(int *)(param_1 + 0x28) = iVar8;
            if (*(int *)(param_1 + 0x2c) < iVar8) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar8 + -1);
            }
            _Src = (void *)(*plVar2 + (longlong)iVar6 * 4);
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)_Src + 4),_Src,(longlong)((iVar8 + -1) - iVar6) << 2);
            *(undefined4 *)((longlong)iVar6 * 4 + *plVar2) = uVar3;
          }
        }
      }
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 141f65ce0 FUN_141f65ce0 body=57 status=ok
// SIG undefined FUN_141f65ce0(void)

void FUN_141f65ce0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x298))();
  if (lVar1 != 0) {
    *(byte *)(param_1 + 0x78c) = param_2 ^ 1;
  }
  return;
}



// FUNCTION 141f65d20 FUN_141f65d20 body=9 status=ok
// SIG undefined FUN_141f65d20(void)

void FUN_141f65d20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x404) = param_2;
  return;
}



// FUNCTION 141f65d30 FUN_141f65d30 body=279 status=ok
// SIG undefined FUN_141f65d30(void)

void FUN_141f65d30(longlong param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  iVar5 = (int)*(undefined8 *)(param_1 + 0x760);
  uVar2 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  auVar9._0_8_ = ((double)iVar5 * (double)param_2) / (double)(int)uVar2;
  lVar4 = (longlong)auVar9._0_8_;
  uVar3 = uVar2;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != auVar9._0_8_)) {
    auVar9._8_8_ = auVar9._0_8_;
    uVar3 = movmskpd(uVar2,auVar9);
    uVar3 = uVar3 & 1;
    auVar9._0_8_ = (double)(longlong)(lVar4 - (ulonglong)uVar3);
  }
  dVar7 = ((double)(param_3 - param_2) * (double)iVar5) / (double)(int)uVar2;
  lVar4 = (longlong)dVar7;
  dVar8 = dVar7;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar7)) {
    auVar1._8_4_ = SUB84(dVar7,0);
    auVar1._0_8_ = dVar7;
    auVar1._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    uVar3 = movmskpd(uVar3,auVar1);
    dVar8 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  dVar7 = dVar7 - dVar8;
  iVar5 = (int)dVar8;
  dVar8 = dVar7;
  if ((0.0 < dVar7) && (dVar8 = 0.9999999403953552, dVar7 <= 0.9999999403953552)) {
    dVar8 = dVar7;
  }
  fVar6 = (float)dVar8;
  if (0.0 <= fVar6) {
    if (0.99999994 <= fVar6) {
      fVar6 = 0.99999994;
    }
    if (0.5 <= fVar6) {
      iVar5 = iVar5 + 1;
    }
  }
  FUN_141f65450(param_1,(int)auVar9._0_8_,iVar5);
  return;
}



// FUNCTION 141f65e50 FUN_141f65e50 body=158 status=ok
// SIG undefined FUN_141f65e50(void)

void FUN_141f65e50(longlong *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  
  if ((*(uint *)(param_1 + 0x16) >> 1 & 1) == 0) {
    (**(code **)(*param_1 + 0x70))(param_1,1);
    cVar2 = (char)param_1[0x13];
    if (((cVar2 != '\x02') && (*param_2 != '\x02')) &&
       (iVar1 = *(int *)((longlong)param_1 + 0x9c), iVar1 < *(int *)(param_2 + 4))) {
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x12) = 1;
        *(int *)((longlong)param_1 + 0x94) = iVar1;
        return;
      }
      if (cVar2 == '\x01') {
        cVar2 = '\0';
      }
      *(char *)(param_1 + 0x12) = cVar2;
      *(int *)((longlong)param_1 + 0x94) = iVar1;
      return;
    }
    *(char *)(param_1 + 0x12) = *param_2;
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 4);
  }
  return;
}



// FUNCTION 141f65ef0 SetStartingValues body=93 status=ok
// SIG undefined SetStartingValues(void)

void FMovieSceneKeyStructHelper::SetStartingValues(undefined4 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 1) != '\0') {
    plVar3 = *(longlong **)(param_1 + 2);
    plVar1 = plVar3 + (longlong)(int)param_1[4] * 9;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 9) {
      plVar2 = plVar3;
      if ((*(byte *)(plVar3 + 8) & 2) == 0) {
        plVar2 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar2 + 8))(plVar2,*param_1);
    }
  }
  return;
}



// FUNCTION 141f65f50 FUN_141f65f50 body=156 status=ok
// SIG undefined FUN_141f65f50(void)

void FUN_141f65f50(int *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  if ((0 < param_1[1]) &&
     ((*param_1 != (int)param_2 || (param_1[1] != (int)((ulonglong)param_2 >> 0x20))))) {
    ConvertFrameTime(&local_res8,*(undefined8 *)(param_1 + 5),*(undefined8 *)param_1,param_2);
    if ((param_4 == '\0') && ((char)param_1[0x15] == '\0')) {
      uStackX_c = 0;
    }
    *(ulonglong *)(param_1 + 5) = CONCAT44(uStackX_c,local_res8);
    if ((char)param_1[9] != '\0') {
      *(undefined1 *)(param_1 + 9) = 0;
    }
    if ((char)param_1[0x14] != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
  }
  *(undefined8 *)param_1 = param_2;
  *(char *)(param_1 + 4) = param_4;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// FUNCTION 141f65ff0 FUN_141f65ff0 body=278 status=ok
// SIG undefined FUN_141f65ff0(void)

void FUN_141f65ff0(longlong param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  iVar5 = (int)*(undefined8 *)(param_1 + 0x760);
  uVar2 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  auVar9._0_8_ = ((double)iVar5 * (double)param_2) / (double)(int)uVar2;
  lVar4 = (longlong)auVar9._0_8_;
  uVar3 = uVar2;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != auVar9._0_8_)) {
    auVar9._8_8_ = auVar9._0_8_;
    uVar3 = movmskpd(uVar2,auVar9);
    uVar3 = uVar3 & 1;
    auVar9._0_8_ = (double)(longlong)(lVar4 - (ulonglong)uVar3);
  }
  dVar7 = ((double)iVar5 * (double)param_3) / (double)(int)uVar2;
  lVar4 = (longlong)dVar7;
  dVar8 = dVar7;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar7)) {
    auVar1._8_4_ = SUB84(dVar7,0);
    auVar1._0_8_ = dVar7;
    auVar1._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    uVar3 = movmskpd(uVar3,auVar1);
    dVar8 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  dVar7 = dVar7 - dVar8;
  iVar5 = (int)dVar8;
  dVar8 = dVar7;
  if ((0.0 < dVar7) && (dVar8 = 0.9999999403953552, dVar7 <= 0.9999999403953552)) {
    dVar8 = dVar7;
  }
  fVar6 = (float)dVar8;
  if (0.0 <= fVar6) {
    if (0.99999994 <= fVar6) {
      fVar6 = 0.99999994;
    }
    if (0.5 <= fVar6) {
      iVar5 = iVar5 + 1;
    }
  }
  FUN_141f65450(param_1,(int)auVar9._0_8_,iVar5);
  return;
}



// FUNCTION 141f66120 FUN_141f66120 body=1115 status=ok
// SIG undefined FUN_141f66120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong FUN_141f66120(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  void *pvVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  int local_res18 [4];
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  uint local_158;
  int iStack_154;
  uint uStack_150;
  int iStack_14c;
  longlong local_148;
  void *local_140;
  longlong local_138;
  void *local_130;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8 [4];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  char local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_res18[0] = param_3;
  local_138 = param_1;
  local_110 = param_2;
  lVar7 = FWeakObjectPtr::Get();
  if (lVar7 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    if (param_3 == DAT_146ac9ac0) {
      local_158 = (uint)lVar7;
      iStack_154 = (int)((ulonglong)lVar7 >> 0x20);
      local_148 = 0;
      uStack_150 = (uint)lVar3;
      iStack_14c = (int)((ulonglong)lVar3 >> 0x20);
    }
    else {
      local_148 = FMovieSceneSequenceHierarchy::FindSubData(lVar3 + 0xd0,local_res18);
      if (local_148 == 0) {
        return 0;
      }
      plVar4 = *(longlong **)(param_1 + 0x160);
      uStack_150 = 0;
      iStack_14c = 0;
      lVar7 = FMovieSceneSubSequenceData::GetSequence(local_148);
      local_158 = (uint)lVar7;
      iStack_154 = (int)((ulonglong)lVar7 >> 0x20);
      if (lVar7 != 0) {
        uVar8 = (**(code **)(*plVar4 + 8))(plVar4,lVar7);
        uStack_150 = (uint)uVar8;
        iStack_14c = (int)((ulonglong)uVar8 >> 0x20);
      }
    }
    local_128 = local_158;
    uStack_124 = iStack_154;
    uStack_120 = uStack_150;
    iStack_11c = iStack_14c;
    lVar7 = CONCAT44(iStack_154,local_158);
    local_118 = local_148;
    if (lVar7 == 0) {
      return 0;
    }
    lVar3 = CONCAT44(iStack_14c,uStack_150);
    if (lVar3 == 0) {
      return 0;
    }
    if (((*(int *)(lVar3 + 0x17c) != *(int *)(lVar7 + 0x34) ||
         *(int *)(lVar3 + 0x178) != *(int *)(lVar7 + 0x30)) ||
        *(int *)(lVar3 + 0x174) != *(int *)(lVar7 + 0x2c)) ||
        *(int *)(lVar7 + 0x28) != *(int *)(lVar3 + 0x170)) {
      local_108 = &PTR_AddOwnedTrack_144f1b078;
      local_f8[1] = 0;
      local_f8[2] = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0xffffffff;
      local_bc = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_100 = lVar7;
      local_f8[0] = lVar3;
      FUN_141f512b0(&local_108);
      local_a8 = 0;
      if (local_b0 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_f8 + 1);
    }
    local_158 = 0x3f800000;
    iStack_154 = 0;
    uStack_150 = 0;
    if (local_118 != 0) {
      uStack_150 = *(uint *)(local_118 + 0x20);
      local_158 = (uint)*(undefined8 *)(local_118 + 0x18);
      iStack_154 = (int)((ulonglong)*(undefined8 *)(local_118 + 0x18) >> 0x20);
    }
    if (*(uint *)(param_4 + 0x24) == 0x80000000) {
      lVar10 = 0x10;
      if (*(int *)(param_4 + 0x20) != 0) {
        lVar10 = 4;
      }
      pvVar11 = *(void **)(lVar10 + param_4);
    }
    else {
      local_140 = (void *)(ulonglong)*(uint *)(param_4 + 0x24);
      pvVar11 = local_140;
    }
    puVar9 = (undefined4 *)operator*(&local_130,pvVar11,&local_158);
    uVar1 = *puVar9;
    iVar6 = FUN_141f538b0(lVar3 + 0xa0,uVar1);
    if (iVar6 != -1) {
      local_158 = local_158 & 0xffffff00;
      iStack_154 = 0;
      uStack_150 = uStack_150 & 0xffffff00;
      iStack_14c = 0;
      local_168 = (undefined1 *)0x0;
      cVar5 = FMovieSceneEvaluationMetaData::IsDirty
                        ((longlong)iVar6 * 0x70 + *(longlong *)(lVar3 + 0xc0),lVar3 + 0xd0,
                         *(undefined8 *)(param_1 + 0x160),&local_158);
      if (cVar5 == '\0') goto LAB_141f66471;
      iVar6 = -1;
      if ((((char)local_158 == '\x02') || ((char)uStack_150 == '\x02')) ||
         ((iStack_154 <= iStack_14c &&
          ((iStack_154 != iStack_14c || (((char)local_158 != '\0' && ((char)uStack_150 != '\0'))))))
         )) {
        FMovieSceneEvaluationField::Invalidate(lVar3 + 0xa0,&local_158);
      }
    }
    if (DAT_146aca2b8 == '\0') {
      FUN_141f45e40(&local_108,uVar1,lVar7);
      if (local_68 != '\0') {
        local_158 = CONCAT31(local_158._1_3_,(undefined1)local_108);
        iStack_154 = local_108._4_4_;
        uStack_150 = CONCAT31(uStack_150._1_3_,(undefined1)local_100);
        iStack_14c = local_100._4_4_;
        local_168 = local_d8;
        iVar6 = FUN_141f55b10(lVar3 + 0xa0,uVar1,&local_158,local_f8);
        if (local_68 != '\0') {
          local_68 = '\0';
          FCompiledGroupResult::~FCompiledGroupResult(&local_108);
        }
      }
    }
    else {
      FUN_141f442e0(lVar7,*(undefined8 *)(param_1 + 0x160));
      iVar6 = FUN_141f538b0(lVar3 + 0xa0,uVar1);
    }
    if (iVar6 != -1) {
LAB_141f66471:
      lVar7 = local_138;
      puVar12 = (ulonglong *)(local_138 + 0xf0);
      puVar13 = (ulonglong *)((longlong)iVar6 * 0x70 + *(longlong *)(lVar3 + 0xc0));
      if (puVar12 != puVar13) {
        iVar2 = (int)puVar13[1];
        local_140 = (void *)*puVar13;
        *(int *)(local_138 + 0xf8) = iVar2;
        if ((iVar2 == 0) && (*(int *)(local_138 + 0xfc) == 0)) {
          *(undefined4 *)(local_138 + 0xfc) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar12,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar12,local_140,(longlong)iVar2 << 2);
        }
      }
      puVar12 = (ulonglong *)(lVar7 + 0x100);
      if (puVar12 != puVar13 + 2) {
        iVar2 = (int)puVar13[3];
        local_130 = (void *)puVar13[2];
        local_140 = (void *)CONCAT44(local_140._4_4_,iVar2);
        *(int *)(lVar7 + 0x108) = iVar2;
        if ((iVar2 == 0) && (*(int *)(lVar7 + 0x10c) == 0)) {
          *(undefined4 *)(lVar7 + 0x10c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar12,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar12,local_130,(longlong)(int)local_140 << 4);
        }
      }
      TSet<TTuple<FMovieSceneSequenceID,unsigned_int>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,unsigned_int,0>,FDefaultSetAllocator>
      ::operator=(lVar7 + 0x110,puVar13 + 4);
      FUN_141f5d670(local_138,&local_128,param_3,local_110);
      return (longlong)iVar6 * 0x20 + *(longlong *)(lVar3 + 0xb0);
    }
  }
  return 0;
}



// FUNCTION 141f66580 SetupOverrides body=131 status=ok
// SIG undefined SetupOverrides(void)

void FMovieSceneEvaluationTrack::SetupOverrides(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xa0);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0xa8) * 7;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 7) {
    if ((*(byte *)(plVar2 + 6) & 1) != 0) {
      plVar1 = plVar2;
      if ((*(byte *)(plVar2 + 6) & 2) == 0) {
        plVar1 = (longlong *)*plVar2;
      }
      (**(code **)(*plVar1 + 8))();
    }
  }
  if ((*(byte *)(param_1 + 0xe0) & 1) != 0) {
    plVar2 = (longlong *)(param_1 + 0xb0);
    if ((*(byte *)(param_1 + 0xe0) & 2) == 0) {
      plVar2 = (longlong *)*plVar2;
    }
    (**(code **)(*plVar2 + 8))();
  }
  return;
}



// FUNCTION 141f66610 SolveCubic body=807 status=ok
// SIG undefined SolveCubic(void)

uint SolveCubic(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar16 [16];
  
  dVar11 = 1.0 / param_1[3];
  dVar3 = dVar11 * param_1[2];
  dVar5 = dVar3 * 0.3333333333333333;
  dVar4 = dVar11 * param_1[1] * 0.3333333333333333 - dVar3 * dVar3 * 0.1111111111111111;
  dVar10 = dVar4 * dVar4 * dVar4;
  dVar3 = (dVar3 * 0.07407407407407407 * dVar3 * dVar3 - dVar5 * dVar11 * param_1[1]) +
          dVar11 * *param_1;
  dVar11 = dVar3 * 0.5;
  dVar3 = dVar3 * dVar3 * 0.25 + dVar10;
  if (9.99999993922529e-09 <= ABS(dVar3) && ABS(dVar3) != 9.99999993922529e-09) {
    uVar12 = 0;
    uVar15 = 0;
    if (0.0 <= dVar3) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar3;
      auVar16 = sqrtpd(unaff_XMM9,auVar16);
      dVar3 = auVar16._0_8_ - dVar11;
      if (dVar3 <= 0.0) {
        if (0.0 <= dVar3) {
          uVar13 = 0;
          uVar14 = 0;
        }
        else {
          dVar3 = _guard_xfg_dispatch_icall_nop(-dVar3,0.3333333333333333);
          uVar13 = SUB84(dVar3,0);
          uVar14 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
        }
      }
      else {
        dVar3 = _guard_xfg_dispatch_icall_nop(dVar3,0.3333333333333333);
        uVar13 = SUB84(dVar3,0);
        uVar14 = (uint)((ulonglong)dVar3 >> 0x20);
      }
      dVar11 = auVar16._0_8_ + dVar11;
      if (dVar11 <= 0.0) {
        if (dVar11 < 0.0) {
          dVar3 = _guard_xfg_dispatch_icall_nop(-dVar11,0.3333333333333333);
          uVar12 = SUB84(dVar3,0);
          uVar15 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
        }
      }
      else {
        dVar3 = _guard_xfg_dispatch_icall_nop(dVar11,0.3333333333333333);
        uVar12 = SUB84(dVar3,0);
        uVar15 = (uint)((ulonglong)dVar3 >> 0x20);
      }
      dVar3 = (double)CONCAT44(uVar14,uVar13) - (double)CONCAT44(uVar15,uVar12);
      uVar15 = 1;
    }
    else {
      dVar3 = _guard_xfg_dispatch_icall_nop((-1.0 / SQRT(-dVar10)) * dVar11);
      dVar3 = dVar3 * 0.3333333333333333;
      dVar11 = SQRT(-dVar4) + SQRT(-dVar4);
      dVar4 = _guard_xfg_dispatch_icall_nop(dVar3 + 1.0471975803375244);
      param_2[1] = -(dVar4 * dVar11);
      dVar4 = _guard_xfg_dispatch_icall_nop(dVar3 - 1.0471975803375244);
      uVar15 = 3;
      param_2[2] = -(dVar4 * dVar11);
      dVar3 = _guard_xfg_dispatch_icall_nop(dVar3);
      dVar3 = dVar3 * dVar11;
    }
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    dVar3 = 0.0;
    if (9.99999993922529e-09 <= ABS(dVar11) && ABS(dVar11) != 9.99999993922529e-09) {
      if (-dVar11 < 0.0 || -dVar11 == 0.0) {
        if (-dVar11 < 0.0) {
          dVar3 = _guard_xfg_dispatch_icall_nop(dVar11,0.3333333333333333);
          uVar12 = SUB84(dVar3,0);
          uVar14 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
        }
      }
      else {
        dVar3 = _guard_xfg_dispatch_icall_nop(-dVar11,0.3333333333333333);
        uVar12 = SUB84(dVar3,0);
        uVar14 = (uint)((ulonglong)dVar3 >> 0x20);
      }
      uVar15 = 2;
      dVar3 = (double)CONCAT44(uVar14,uVar12) + (double)CONCAT44(uVar14,uVar12);
      param_2[1] = -(double)CONCAT44(uVar14,uVar12);
    }
    else {
      uVar15 = 1;
    }
  }
  *param_2 = dVar3;
  lVar7 = 0;
  uVar9 = (ulonglong)uVar15;
  if (3 < uVar9) {
    pauVar6 = (undefined1 (*) [16])(param_2 + 2);
    lVar8 = (uVar9 - 4 >> 2) + 1;
    lVar7 = lVar8 * 4;
    do {
      dVar3 = *(double *)(pauVar6[-1] + 8) - dVar5;
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = *(double *)pauVar6[-1] - dVar5;
      auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      pauVar6[-1] = auVar1;
      dVar3 = *(double *)(*pauVar6 + 8) - dVar5;
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = *(double *)*pauVar6 - dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *pauVar6 = auVar2;
      pauVar6 = pauVar6 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  for (; lVar7 < (longlong)uVar9; lVar7 = lVar7 + 1) {
    param_2[lVar7] = param_2[lVar7] - dVar5;
  }
  return uVar15;
}



// FUNCTION 141f669d0 SortConsecutiveSections body=37 status=ok
// SIG undefined SortConsecutiveSections(void)

void MovieSceneHelpers::SortConsecutiveSections(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>
            (*param_1,(longlong)*(int *)(param_1 + 1),0,local_res8);
  return;
}



// FUNCTION 141f66a50 SpawnObject body=263 status=ok
// SIG undefined SpawnObject(void)

longlong FMovieSceneSpawnRegister::SpawnObject
                   (longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
                   longlong param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_68 [8];
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  undefined1 local_20;
  
  lVar2 = FindSpawnedObject(param_1,param_2,param_4);
  if (lVar2 == 0) {
    lVar3 = UMovieScene::FindSpawnable(param_3,param_2);
    if (lVar3 == 0) {
      return 0;
    }
    lVar2 = (**(code **)(*param_1 + 8))(param_1,lVar3,param_4,param_5);
    if (lVar2 != 0) {
      local_50 = *param_2;
      uStack_4c = param_2[1];
      uStack_48 = param_2[2];
      uStack_44 = param_2[3];
      local_40 = *param_4;
      uVar1 = *(undefined1 *)(lVar3 + 0x78);
      local_38 = local_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      FWeakObjectPtr::operator=(local_28,lVar2);
      local_60 = &local_50;
      local_58 = &local_38;
      local_20 = uVar1;
      FUN_141f33da0(param_1 + 3,local_68,&local_60,0);
      FMovieSceneEvaluationState::Invalidate(param_5 + 8,param_2,param_4);
    }
  }
  return lVar2;
}



// FUNCTION 141f66b60 FUN_141f66b60 body=406 status=ok
// SIG undefined FUN_141f66b60(void)

longlong * FUN_141f66b60(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 local_res8;
  
  iVar2 = *param_2;
  plVar5 = param_1 + 0x12;
  cVar1 = (char)*plVar5;
  uVar6 = (ulonglong)local_res8 >> 8;
  if (cVar1 != '\x02') {
    iVar3 = *(int *)((longlong)param_1 + 0x94);
    plVar8 = plVar5;
    if (iVar2 <= iVar3) {
      if (iVar2 < iVar3) {
        if (cVar1 != '\x01') {
          return (longlong *)0x0;
        }
        plVar8 = &local_res8;
      }
      else if (cVar1 != '\x01') {
        return (longlong *)0x0;
      }
    }
    if (*(int *)((longlong)plVar8 + 4) != iVar3) {
      return (longlong *)0x0;
    }
  }
  cVar1 = (char)param_1[0x13];
  plVar8 = param_1 + 0x13;
  local_res8 = CONCAT71((uint7)uVar6 & 0xffffff,1);
  local_res8 = CONCAT44(iVar2,(undefined4)local_res8);
  if (cVar1 != '\x02') {
    if ((*(int *)((longlong)param_1 + 0x9c) <= iVar2) &&
       ((*(int *)((longlong)param_1 + 0x9c) < iVar2 || (cVar1 != '\x01')))) {
      if (cVar1 != '\x01') {
        return (longlong *)0x0;
      }
      plVar8 = &local_res8;
    }
    if (*(int *)((longlong)plVar8 + 4) != *(int *)((longlong)param_1 + 0x9c)) {
      return (longlong *)0x0;
    }
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 8;
  if ((*(uint *)(param_1 + 0x16) >> 1 & 1) != 0) {
    return (longlong *)0x0;
  }
  (**(code **)(*param_1 + 0x70))(param_1,1);
  lVar7 = param_1[0x13];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x9c);
  *(char *)plVar5 = (char)*plVar5;
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_1 + 0x94);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(int *)((longlong)param_1 + 0x9c) = iVar2;
  plVar5 = (longlong *)param_1[4];
  (**(code **)(*plVar5 + 0x70))(plVar5,1);
  local_res8 = 0;
  plVar8 = plVar5;
  if (plVar5 == (longlong *)&DAT_ffffffffffffffff) {
    plVar8 = (longlong *)GetTransientPackage();
  }
  plVar8 = (longlong *)FUN_1417987a0(param_1,plVar8,local_res8,0xefffffff,0,0,0xff800000);
  if ((*(uint *)(plVar8 + 1) >> 9 & 1) == 0) {
    if ((*(uint *)(plVar8 + 0x16) >> 1 & 1) != 0) goto LAB_141f66cc3;
    (**(code **)(*plVar8 + 0x70))(plVar8,1);
  }
  *(undefined1 *)(plVar8 + 0x12) = 1;
  *(int *)((longlong)plVar8 + 0x94) = iVar2;
  *(char *)(plVar8 + 0x13) = (char)lVar7;
  *(undefined4 *)((longlong)plVar8 + 0x9c) = uVar4;
LAB_141f66cc3:
  (**(code **)(*plVar5 + 0x2e0))(plVar5,plVar8);
  return plVar8;
}



// FUNCTION 141f66d00 FUN_141f66d00 body=504 status=ok
// SIG undefined FUN_141f66d00(void)

longlong FUN_141f66d00(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  int local_res8 [2];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  cVar1 = *(char *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0x94);
  iVar6 = *(int *)(param_1 + 0x9c);
  iVar3 = *param_2;
  if (cVar1 == '\x02') {
LAB_141f66d5b:
    bVar4 = true;
  }
  else {
    iVar9 = iVar2;
    if (iVar2 < iVar3) {
LAB_141f66d48:
      if (iVar9 == iVar2) goto LAB_141f66d5b;
    }
    else {
      iVar9 = iVar3;
      if (iVar2 <= iVar3) {
        iVar9 = iVar2;
      }
      if (cVar1 == '\x01') goto LAB_141f66d48;
    }
    bVar4 = false;
  }
  if (bVar4) {
    if (*(char *)(param_1 + 0x98) == '\x02') {
LAB_141f66d87:
      bVar4 = true;
    }
    else {
      iVar9 = iVar6;
      if (iVar3 < iVar6) {
LAB_141f66d75:
        if (iVar9 == iVar6) goto LAB_141f66d87;
      }
      else {
        iVar9 = iVar3;
        if (iVar3 <= iVar6) {
          iVar9 = iVar6;
        }
        if (*(char *)(param_1 + 0x98) == '\x01') goto LAB_141f66d75;
      }
      bVar4 = false;
    }
    if (bVar4) {
      bVar4 = true;
      goto LAB_141f66d93;
    }
  }
  bVar4 = false;
LAB_141f66d93:
  if (bVar4) {
    local_38 = *param_2;
    iStack_34 = param_2[1];
    iStack_30 = param_2[2];
    iStack_2c = param_2[3];
    iVar6 = *(int *)(param_1 + 0xe0);
    lVar7 = FUN_141f66b60(param_1,&local_38);
    if (lVar7 != 0) {
      lVar8 = UMovieSceneSubSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (cVar1 == '\x02') {
          return lVar7;
        }
        lVar8 = FUN_141f53550();
        plVar11 = (longlong *)0x0;
        plVar10 = plVar11;
        if (lVar8 != param_1) {
          plVar10 = *(longlong **)(param_1 + 0x108);
        }
        lVar8 = (**(code **)(*plVar10 + 0x298))();
        local_res8[1] = 0;
        if (cVar1 == '\0') {
          plVar11 = (longlong *)&DAT_00000004;
        }
        local_res8[0] = (iVar3 - (int)plVar11[0x289e3791]) - iVar2;
        ConvertFrameTime(local_res8,local_res8[0],*(undefined8 *)(param_2 + 2),
                         *(undefined8 *)(lVar8 + 0xb8));
        auVar12._0_8_ = (double)local_res8[0] / (double)*(float *)(param_1 + 0xe4);
        lVar8 = (longlong)auVar12._0_8_;
        if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != auVar12._0_8_)) {
          auVar12._8_8_ = auVar12._0_8_;
          uVar5 = movmskpd(0,auVar12);
          auVar12._0_8_ = (double)(longlong)(lVar8 - (ulonglong)(uVar5 & 1));
        }
        iVar6 = (int)auVar12._0_8_ + iVar6;
        if (iVar6 < 0) {
          return lVar7;
        }
        *(int *)(lVar7 + 0xe0) = iVar6;
        return lVar7;
      }
    }
  }
  return 0;
}



// FUNCTION 141f66f00 FUN_141f66f00 body=480 status=ok
// SIG undefined FUN_141f66f00(void)

/* WARNING: Removing unreachable block (ram,0x000141f66fae) */

void FUN_141f66f00(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int local_res8;
  undefined8 local_18;
  longlong local_10;
  
  if (((char)param_1[0x79] != '\x01') && ((char)param_1[0x79] != '\x06')) {
    return;
  }
  if ((*(byte *)(param_1 + 0x7a) & 1) != 0) {
    iVar1 = (int)param_1[0x7f];
    *(int *)(param_1 + 0x7f) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x3fc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x7e,iVar1);
    }
    puVar3 = (undefined1 *)((longlong)iVar1 * 0x10 + param_1[0x7e]);
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x79) = 0;
  if ((*(byte *)((longlong)param_1 + 0x3cc) & 1) == 0) {
    local_res8 = (int)param_1[0x7c];
  }
  else {
    if (0 < *(int *)((longlong)param_1 + 0x3e4)) {
      uVar4 = 0x3f7fffff;
      local_res8 = *(int *)((longlong)param_1 + 0x3e4) + -1 + (int)param_1[0x7c];
      goto LAB_141f66fcd;
    }
    local_res8 = (int)param_1[0x7c];
  }
  uVar4 = 0;
LAB_141f66fcd:
  local_18 = CONCAT44(uVar4,local_res8);
  *(undefined8 *)((longlong)param_1 + 0x774) = local_18;
  if (*(char *)((longlong)param_1 + 0x784) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x784) = 0;
  }
  if ((char)param_1[0xf6] != '\0') {
    *(undefined1 *)(param_1 + 0xf6) = 0;
  }
  plVar2 = (longlong *)param_1[0x86];
  local_10 = param_1[0xec];
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_18);
  if ((char)plVar2[3] != '\0') {
    *(undefined1 *)(plVar2 + 3) = 0;
  }
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if ((char)param_1[0x82] != '\0') {
    FMovieScenePreAnimatedState::RestorePreAnimatedState(param_1 + 0x24,param_1 + 5);
    FUN_141f43d00(param_1 + 6,param_1 + 5);
  }
  FUN_141f4f4a0(param_1 + 0x89,param_1 + 5);
  if (((char)param_1[0xfd] != '\0') &&
     ((**(code **)(*DAT_146b17150 + 0x2c8))(DAT_146b17150,(float)(double)param_1[0xfc]),
     (char)param_1[0xfd] != '\0')) {
    *(undefined1 *)(param_1 + 0xfd) = 0;
  }
  (**(code **)(*param_1 + 0x2a0))(param_1);
  FWeakObjectPtr::Get(param_1 + 0x89);
  if (0 < (int)param_1[0x74]) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x73,0);
  }
  return;
}



// FUNCTION 141f670e0 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141f67106;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141f67106:
  lVar2 = UMovieSceneSubSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141f67120 TimeRangeToNumberRange body=93 status=ok
// SIG undefined TimeRangeToNumberRange(void)

undefined1 * FMovieSceneEvaluationRange::TimeRangeToNumberRange(undefined1 *param_1,char *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  float fStackX_c;
  
  *param_1 = 2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*param_2 != '\x02') {
    uVar2 = *(ulonglong *)(param_2 + 4);
    fStackX_c = (float)(uVar2 >> 0x20);
    if ((fStackX_c != 0.0) || (*param_2 == '\0')) {
      uVar2 = (ulonglong)((int)uVar2 + 1);
    }
    *param_1 = 1;
    *(int *)(param_1 + 4) = (int)uVar2;
  }
  if (param_2[0xc] != '\x02') {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    param_1[8] = param_2[0xc] != '\0';
    *(int *)(param_1 + 0xc) = (int)uVar1;
  }
  return param_1;
}



// FUNCTION 141f67180 FUN_141f67180 body=256 status=ok
// SIG undefined FUN_141f67180(void)

void FUN_141f67180(longlong *param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_res8 [4];
  int local_resc;
  
  iVar3 = *param_2;
  plVar1 = param_1 + 0x12;
  cVar2 = (char)*plVar1;
  local_resc = iVar3;
  plVar5 = plVar1;
  cVar4 = cVar2;
  if ((cVar2 != '\x02') && (iVar3 <= *(int *)((longlong)param_1 + 0x94))) {
    if ((iVar3 < *(int *)((longlong)param_1 + 0x94)) || (cVar2 != '\x01')) {
      plVar5 = (longlong *)local_res8;
    }
    cVar4 = '\x01';
  }
  if ((cVar4 == cVar2) &&
     ((cVar4 == '\x02' || (*(int *)((longlong)plVar5 + 4) == *(int *)((longlong)param_1 + 0x94)))))
  {
    cVar2 = (char)param_1[0x13];
    plVar5 = param_1 + 0x13;
    local_res8[0] = 1;
    cVar4 = cVar2;
    if ((cVar2 != '\x02') && (*(int *)((longlong)param_1 + 0x9c) <= iVar3)) {
      if ((*(int *)((longlong)param_1 + 0x9c) < iVar3) || (cVar2 != '\x01')) {
        plVar5 = (longlong *)local_res8;
      }
      cVar4 = '\x01';
    }
    if ((cVar4 == cVar2) &&
       (((cVar4 == '\x02' || (*(int *)((longlong)plVar5 + 4) == *(int *)((longlong)param_1 + 0x9c)))
        && (*(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 8,
           (*(uint *)(param_1 + 0x16) >> 1 & 1) == 0)))) {
      (**(code **)(*param_1 + 0x70))(param_1,1);
      if (param_3 == '\0') {
        *(undefined1 *)(param_1 + 0x13) = 0;
        *(int *)((longlong)param_1 + 0x9c) = iVar3;
      }
      else {
        *(char *)plVar1 = '\x01';
        *(int *)((longlong)param_1 + 0x94) = iVar3;
      }
    }
  }
  return;
}



// FUNCTION 141f67280 FUN_141f67280 body=566 status=ok
// SIG undefined FUN_141f67280(void)

int FUN_141f67280(int param_1,int *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *in_RCX;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  int local_res8;
  int iStackX_c;
  int *local_res10;
  int iVar14;
  int iVar15;
  
  local_res10 = param_2;
  iVar6 = *param_2;
  plVar9 = in_RCX + 0x12;
  cVar1 = (char)*plVar9;
  iVar3 = *(int *)((longlong)in_RCX + 0x94);
  cVar2 = (char)in_RCX[0x13];
  iVar12 = *(int *)((longlong)in_RCX + 0x9c);
  if (((cVar1 != '\x02') && (iVar6 <= iVar3)) && ((iVar6 < iVar3 || (cVar1 != '\x01')))) {
    if (cVar1 != '\x01') {
      return param_1;
    }
    if (iVar6 != iVar3) {
      return param_1;
    }
  }
  if (((cVar2 != '\x02') && (iVar12 <= iVar6)) && ((iVar12 < iVar6 || (cVar2 != '\x01')))) {
    if (cVar2 != '\x01') {
      return param_1;
    }
    if (iVar6 != iVar12) {
      return param_1;
    }
  }
  iVar12 = *param_2;
  iVar15 = param_2[2];
  cVar2 = (char)*plVar9;
  lVar4 = in_RCX[0x1c];
  iStackX_c = iVar12;
  local_res8 = CONCAT31(local_res8._1_3_,1);
  iVar14 = iVar12;
  if (cVar2 != '\x02') {
    plVar7 = plVar9;
    if (iVar12 <= iVar3) {
      if (iVar12 < iVar3) {
        if (cVar2 != '\x01') goto LAB_141f673ae;
        plVar7 = (longlong *)&local_res8;
      }
      else if (cVar2 != '\x01') goto LAB_141f673ae;
    }
    if (*(int *)((longlong)plVar7 + 4) != iVar3) goto LAB_141f673ae;
  }
  cVar2 = (char)in_RCX[0x13];
  plVar7 = in_RCX + 0x13;
  local_res8 = CONCAT31(local_res8._1_3_,1);
  if (cVar2 != '\x02') {
    if ((*(int *)((longlong)in_RCX + 0x9c) <= iVar12) &&
       ((*(int *)((longlong)in_RCX + 0x9c) < iVar12 || (cVar2 != '\x01')))) {
      if (cVar2 != '\x01') goto LAB_141f673ae;
      plVar7 = (longlong *)&local_res8;
    }
    if (*(int *)((longlong)plVar7 + 4) != *(int *)((longlong)in_RCX + 0x9c)) goto LAB_141f673ae;
  }
  *(uint *)(in_RCX + 1) = *(uint *)(in_RCX + 1) | 8;
  if ((*(uint *)(in_RCX + 0x16) >> 1 & 1) == 0) {
    iVar11 = (**(code **)(*in_RCX + 0x70))(in_RCX,1);
    if (param_3 == '\0') {
      *(undefined1 *)(in_RCX + 0x13) = 0;
      *(int *)((longlong)in_RCX + 0x9c) = iVar12;
      return iVar11;
    }
    *(char *)plVar9 = '\x01';
    *(int *)((longlong)in_RCX + 0x94) = iVar12;
    iVar12 = iVar11;
  }
LAB_141f673ae:
  if ((param_3 != '\0') && (cVar1 != '\x02')) {
    plVar7 = (longlong *)FUN_141f53550();
    plVar10 = (longlong *)0x0;
    plVar9 = plVar10;
    if (plVar7 != in_RCX) {
      plVar9 = (longlong *)in_RCX[0x21];
    }
    lVar8 = (**(code **)(*plVar9 + 0x298))();
    iStackX_c = 0;
    if (cVar1 == '\0') {
      plVar10 = (longlong *)&DAT_00000004;
    }
    local_res8 = (iVar6 - (int)plVar10[0x289e3791]) - iVar3;
    ConvertFrameTime(&local_res10,local_res8,*(undefined8 *)(local_res10 + 2),
                     *(undefined8 *)(lVar8 + 0xb8),iVar14,iVar15);
    auVar13._0_8_ = (double)(int)local_res10 / (double)*(float *)((longlong)in_RCX + 0xe4);
    iVar12 = 0;
    lVar8 = (longlong)auVar13._0_8_;
    if ((lVar8 != -0x8000000000000000) &&
       (iVar12 = SUB84((double)lVar8,0), (double)lVar8 != auVar13._0_8_)) {
      auVar13._8_8_ = auVar13._0_8_;
      uVar5 = movmskpd(0,auVar13);
      auVar13._0_8_ = (double)(longlong)(lVar8 - (ulonglong)(uVar5 & 1));
    }
    iVar6 = (int)auVar13._0_8_ + (int)lVar4;
    if (-1 < iVar6) {
      *(int *)(in_RCX + 0x1c) = iVar6;
    }
  }
  return iVar12;
}



// FUNCTION 141f674c0 TryModify body=36 status=ok
// SIG undefined TryModify(void)

undefined4 UMovieSceneSection::TryModify(longlong *param_1)

{
  if ((*(uint *)(param_1 + 0x16) >> 1 & 1) != 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x70))();
  return 1;
}



// FUNCTION 141f674f0 UnbindPossessableObjects body=83 status=ok
// SIG undefined UnbindPossessableObjects(void)

void UMovieSceneSequence::UnbindPossessableObjects(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x7b
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::UnbindPossessableObjects")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x7b
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::UnbindPossessableObjects")
  ;
  return;
}



// FUNCTION 141f67550 Unique body=52 status=ok
// SIG undefined Unique(void)

undefined8 * FMovieSceneAnimTypeID::Unique(undefined8 *param_1)

{
  undefined8 uVar1;
  
  DAT_146aca1d8 = DAT_146aca1d8 + 1;
  uVar1 = GenerateHash(&DAT_146aca1d8,DAT_146aca1d8 & 0xffffffff);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 141f67590 FUN_141f67590 body=198 status=ok
// SIG undefined FUN_141f67590(void)

void FUN_141f67590(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  undefined8 local_res8 [4];
  undefined8 local_28;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    fVar3 = *(float *)(param_1 + 0x404);
    if ((*(byte *)(param_1 + 0x3cc) & 1) != 0) {
      fVar3 = -fVar3;
    }
    (**(code **)(**(longlong **)(param_1 + 0x430) + 8))
              (*(longlong **)(param_1 + 0x430),param_2,fVar3);
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x70))(param_1 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
      if (lVar2 != 0) {
        lVar2 = UWorld::GetWorldSettings(lVar2,0,1);
        fVar3 = fVar3 * *(float *)(lVar2 + 0x5e4);
      }
    }
    local_28 = *(undefined8 *)(param_1 + 0x774);
    local_20 = *(undefined8 *)(param_1 + 0x760);
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x20))
              (*(longlong **)(param_1 + 0x430),local_res8,&local_28,fVar3);
    FUN_141f68430(param_1,local_res8[0],0);
  }
  return;
}



// FUNCTION 141f67660 FUN_141f67660 body=1717 status=ok
// SIG undefined FUN_141f67660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f67660(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int *piVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int *piVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 *puVar23;
  int *piVar24;
  undefined1 *puVar25;
  longlong *plVar26;
  undefined1 *puVar27;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_d0;
  char local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  int *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar11 = (longlong *)(param_1 + 0x10);
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_1;
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  ::FindId(plVar11,&local_b8,param_2);
  if ((local_b8 == -1) || (lVar8 = (longlong)local_b8 * 0x38 + *plVar11, lVar8 == 0)) {
    local_c0 = param_2;
    FUN_141f31580(plVar11,&local_b8,&local_c0,0);
    lVar8 = (longlong)local_b8 * 0x38 + *plVar11;
  }
  local_88 = (undefined1 *)(lVar8 + 0x10);
  puVar25 = (undefined1 *)0x0;
  lVar20 = lVar8 + 0x18;
  *(undefined4 *)(lVar8 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(lVar8 + 0x2c)) {
    FUN_1407eed70(lVar20,0);
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
  ::FindId(plVar1,&local_b8,param_2);
  puVar13 = puVar25;
  if (local_b8 != -1) {
    puVar13 = (undefined1 *)((longlong)local_b8 * 0x68 + *plVar1);
  }
  puVar14 = puVar13 + 0x10;
  if (puVar13 == (undefined1 *)0x0) {
    puVar14 = puVar25;
  }
  if (puVar14 != (undefined1 *)0x0) {
    uVar16 = (ulonglong)(*(longlong *)(puVar14 + 0x40) != 0) - 1 & (ulonglong)puVar14 |
             *(ulonglong *)(puVar14 + 0x40);
    uVar17 = (longlong)*(int *)(puVar14 + 0x48) * 0x10 + uVar16;
    param_2 = local_b0;
    param_3 = local_a8;
    for (; local_b0 = param_2, local_a8 = param_3, uVar16 != uVar17; uVar16 = uVar16 + 0x10) {
      FMovieSceneObjectCache::Invalidate(param_1,uVar16);
      param_2 = local_b0;
      param_3 = local_a8;
    }
  }
  TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
  ::Remove(plVar1,param_2);
  local_90 = (longlong *)FWeakObjectPtr::Get(param_1);
  if (local_90 == (longlong *)0x0) {
    return;
  }
  local_c8 = *(char *)((longlong)local_90 + 0x341);
  lVar9 = (**(code **)(*param_3 + 0x70))(param_3);
  local_98 = lVar9;
  lVar10 = (**(code **)(*local_90 + 0x298))(local_90);
  plVar26 = local_a8;
  piVar24 = local_b0;
  lVar22 = *(longlong *)(lVar10 + 0x60);
  lVar10 = lVar22 + (longlong)*(int *)(lVar10 + 0x68) * 0x48;
  piVar18 = param_2;
  if (lVar22 != lVar10) {
    piVar15 = (int *)(lVar22 + 0x18);
    do {
      piVar18 = local_b0;
      if (((piVar15[-1] == param_2[1] && piVar15[1] == param_2[3]) && piVar15[-2] == *param_2) &&
          *piVar15 == param_2[2]) {
        if (lVar22 != 0) {
          piVar18 = (int *)(lVar22 + 0x38);
          if (((*(int *)(lVar22 + 0x44) == 0 && *(int *)(lVar22 + 0x40) == 0) &&
              *(int *)(lVar22 + 0x3c) == 0) && *piVar18 == 0) {
            local_d0 = &local_58;
            local_50 = (undefined8 *)0x0;
            local_48 = 0;
            local_d8 = lVar9;
            (**(code **)(*local_a8 + 0x40))
                      (local_a8,local_b0,*(undefined4 *)(local_a0 + 8),local_90);
            puVar19 = &local_58;
            if (local_50 != (undefined8 *)0x0) {
              puVar19 = local_50;
            }
            puVar13 = (undefined1 *)((longlong)(int)local_48 & 0x1fffffffffffffff);
            if (puVar19 + (int)local_48 < puVar19) {
              puVar13 = puVar25;
            }
            if (puVar13 != (undefined1 *)0x0) {
              do {
                FWeakObjectPtr::operator=(&local_c0,*puVar19);
                iVar7 = *(int *)(lVar8 + 0x28);
                *(int *)(lVar8 + 0x28) = iVar7 + 1;
                if (*(int *)(lVar8 + 0x2c) < iVar7 + 1) {
                  FUN_1407eebb0(lVar20,iVar7);
                }
                lVar10 = *(longlong *)(lVar8 + 0x20);
                if (*(longlong *)(lVar8 + 0x20) == 0) {
                  lVar10 = lVar20;
                }
                puVar19 = puVar19 + 1;
                puVar25 = puVar25 + 1;
                puVar2 = (undefined4 *)(lVar10 + (longlong)iVar7 * 8);
                *puVar2 = (undefined4)local_c0;
                puVar2[1] = local_c0._4_4_;
              } while (puVar25 != puVar13);
            }
            lVar10 = local_a0;
            plVar26 = local_a8;
            if (local_50 != (undefined8 *)0x0) {
              FMemory::Free();
              lVar10 = local_a0;
              plVar26 = local_a8;
            }
          }
          else {
            TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
            ::FindId(plVar1,&local_b8,piVar18);
            if ((local_b8 == -1) || (lVar8 = (longlong)local_b8 * 0x68 + *plVar1, lVar8 == 0)) {
              local_c0 = piVar18;
              FUN_141f318a0(plVar1,&local_b8,&local_c0,0);
              lVar8 = (longlong)local_b8 * 0x68 + *plVar1;
            }
            piVar15 = local_b0;
            lVar20 = lVar8 + 0x10;
            iVar7 = TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::Find(lVar20,local_b0);
            if (iVar7 == -1) {
              iVar7 = *(int *)(lVar8 + 0x58);
              *(int *)(lVar8 + 0x58) = iVar7 + 1;
              if (*(int *)(lVar8 + 0x5c) < iVar7 + 1) {
                TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(lVar20,iVar7);
              }
              iVar3 = piVar15[1];
              iVar4 = piVar15[2];
              iVar5 = piVar15[3];
              lVar10 = *(longlong *)(lVar8 + 0x50);
              if (*(longlong *)(lVar8 + 0x50) == 0) {
                lVar10 = lVar20;
              }
              piVar24 = (int *)(lVar10 + (longlong)iVar7 * 0x10);
              *piVar24 = *piVar15;
              piVar24[1] = iVar3;
              piVar24[2] = iVar4;
              piVar24[3] = iVar5;
            }
            lVar8 = local_a0;
            FMovieSceneObjectCache::FindBoundObjects(local_a0,&local_68,piVar18,local_a8);
            TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
            ::FindId(plVar11,&local_b8,piVar15);
            puVar13 = puVar25;
            if (local_b8 != -1) {
              puVar13 = (undefined1 *)((longlong)local_b8 * 0x38 + *plVar11);
            }
            piVar18 = (int *)CONCAT44(uStack_64,local_68);
            puVar14 = puVar13 + 0x10;
            if (puVar13 == (undefined1 *)0x0) {
              puVar14 = puVar25;
            }
            piVar21 = piVar18 + (longlong)iStack_60 * 2;
            lVar10 = local_a0;
            piVar24 = local_b0;
            plVar26 = local_a8;
            local_88 = puVar14;
            local_78 = piVar21;
            if (piVar18 != piVar21) {
              do {
                local_b8 = *piVar18;
                local_b4 = piVar18[1];
                puVar13 = puVar14;
                if ((local_c8 == '\0') ||
                   (lVar9 = FWeakObjectPtr::Get(&local_b8), local_98 = lVar9, lVar9 != 0)) {
                  local_d0 = &local_58;
                  local_50 = (undefined8 *)0x0;
                  local_48 = 0;
                  local_d8 = lVar9;
                  (**(code **)(*local_a8 + 0x40))
                            (local_a8,piVar15,*(undefined4 *)(lVar8 + 8),local_90);
                  puVar19 = &local_58;
                  if (local_50 != (undefined8 *)0x0) {
                    puVar19 = local_50;
                  }
                  puVar23 = (undefined1 *)((longlong)(int)local_48 & 0x1fffffffffffffff);
                  if (puVar19 + (int)local_48 < puVar19) {
                    puVar23 = puVar25;
                  }
                  if (puVar23 != (undefined1 *)0x0) {
                    puVar27 = puVar25;
                    do {
                      FWeakObjectPtr::operator=(&local_c0,*puVar19);
                      iVar7 = *(int *)(puVar14 + 0x18);
                      *(int *)(puVar14 + 0x18) = iVar7 + 1;
                      if (*(int *)(puVar14 + 0x1c) < iVar7 + 1) {
                        FUN_1407eebb0(puVar14 + 8,iVar7);
                      }
                      puVar13 = *(undefined1 **)(puVar14 + 0x10);
                      if (*(undefined1 **)(puVar14 + 0x10) == (undefined1 *)0x0) {
                        puVar13 = puVar14 + 8;
                      }
                      puVar19 = puVar19 + 1;
                      puVar27 = puVar27 + 1;
                      *(undefined4 *)(puVar13 + (longlong)iVar7 * 8) = (undefined4)local_c0;
                      *(undefined4 *)((longlong)(puVar13 + (longlong)iVar7 * 8) + 4) =
                           local_c0._4_4_;
                      puVar13 = local_88;
                      piVar21 = local_78;
                    } while (puVar27 != puVar23);
                  }
                  lVar8 = local_a0;
                  piVar15 = local_b0;
                  if (local_50 != (undefined8 *)0x0) {
                    FMemory::Free();
                    lVar8 = local_a0;
                    piVar15 = local_b0;
                  }
                }
                piVar18 = piVar18 + 2;
                puVar14 = puVar13;
                lVar10 = local_a0;
                lVar9 = local_98;
                piVar24 = local_b0;
                plVar26 = local_a8;
              } while (piVar18 != piVar21);
            }
          }
          goto LAB_141f67bcc;
        }
        break;
      }
      lVar22 = lVar22 + 0x48;
      piVar15 = piVar15 + 0x12;
    } while (lVar22 != lVar10);
  }
  plVar11 = (longlong *)(**(code **)(*local_a8 + 0x48))(local_a8);
  if (plVar11 != (longlong *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    cVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,piVar18,*(undefined4 *)(local_a0 + 8),&local_58);
    puVar19 = &local_58;
    if (local_50 != (undefined8 *)0x0) {
      puVar19 = local_50;
    }
    puVar13 = (undefined1 *)((longlong)(int)local_48 & 0x1fffffffffffffff);
    if (puVar19 + (int)local_48 < puVar19) {
      puVar13 = puVar25;
    }
    if (puVar13 != (undefined1 *)0x0) {
      do {
        FWeakObjectPtr::operator=(&local_c0,*puVar19);
        iVar7 = *(int *)(lVar8 + 0x28);
        *(int *)(lVar8 + 0x28) = iVar7 + 1;
        if (*(int *)(lVar8 + 0x2c) < iVar7 + 1) {
          FUN_1407eebb0(lVar20,iVar7);
        }
        lVar10 = *(longlong *)(lVar8 + 0x20);
        if (*(longlong *)(lVar8 + 0x20) == 0) {
          lVar10 = lVar20;
        }
        puVar19 = puVar19 + 1;
        puVar25 = puVar25 + 1;
        puVar2 = (undefined4 *)(lVar10 + (longlong)iVar7 * 8);
        *puVar2 = (undefined4)local_c0;
        puVar2[1] = local_c0._4_4_;
      } while (puVar25 != puVar13);
    }
    if (local_50 != (undefined8 *)0x0) {
      FMemory::Free(local_50);
    }
    lVar10 = local_a0;
    piVar24 = local_b0;
    plVar26 = local_a8;
    if (cVar6 == '\0') goto LAB_141f67bcc;
  }
  lVar10 = local_a0;
  uVar12 = (**(code **)(*plVar26 + 0x50))(plVar26);
  piVar24 = local_b0;
  lVar22 = FMovieSceneSpawnRegister::FindSpawnedObject(uVar12,local_b0,lVar10 + 8);
  if (lVar22 != 0) {
    FWeakObjectPtr::operator=(&local_c0,lVar22);
    iVar7 = *(int *)(lVar8 + 0x28);
    *(int *)(lVar8 + 0x28) = iVar7 + 1;
    if (*(int *)(lVar8 + 0x2c) < iVar7 + 1) {
      FUN_1407eebb0(lVar20,iVar7);
    }
    lVar22 = *(longlong *)(lVar8 + 0x20);
    if (*(longlong *)(lVar8 + 0x20) == 0) {
      lVar22 = lVar20;
    }
    puVar2 = (undefined4 *)(lVar22 + (longlong)iVar7 * 8);
    *puVar2 = (undefined4)local_c0;
    puVar2[1] = local_c0._4_4_;
  }
LAB_141f67bcc:
  if (*(int *)(local_88 + 0x18) != 0) {
    *local_88 = 1;
    puVar25 = *(undefined1 **)(local_88 + 0x10);
    if (*(undefined1 **)(local_88 + 0x10) == (undefined1 *)0x0) {
      puVar25 = local_88 + 8;
    }
    uStack_70 = *(undefined4 *)(local_88 + 0x18);
    local_78._0_4_ = SUB84(puVar25,0);
    local_78._4_4_ = (undefined4)((ulonglong)puVar25 >> 0x20);
    local_68 = (undefined4)local_78;
    uStack_64 = local_78._4_4_;
    uStack_5c = uStack_6c;
    local_78 = (int *)puVar25;
    iStack_60 = uStack_70;
    (**(code **)(*plVar26 + 0x60))(plVar26,piVar24,lVar10 + 8,&local_68);
  }
  return;
}



// FUNCTION 141f67d20 FUN_141f67d20 body=1302 status=ok
// SIG undefined FUN_141f67d20(void)

void FUN_141f67d20(longlong *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar21;
  ulonglong uVar22;
  int local_res10;
  uint local_res18;
  int local_res20;
  int local_98;
  ulonglong local_90;
  longlong local_78;
  int local_70;
  int local_6c;
  char local_68 [4];
  int local_64;
  char local_60 [4];
  int local_5c;
  char local_58 [4];
  int local_54;
  char local_50 [4];
  int local_4c;
  ulonglong uVar20;
  
  iVar7 = FUN_141f52b10();
  local_78 = 0;
  local_6c = 0;
  local_res20 = 0;
  if (-1 < iVar7) {
    do {
      iVar21 = 0;
      if ((local_6c < 0) && (local_70 = 0, local_6c != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_78,0);
        iVar21 = local_70;
      }
      iVar17 = local_6c;
      lVar11 = local_78;
      puVar8 = (ulonglong *)(**(code **)(*param_1 + 0x2f0))();
      uVar22 = 0;
      plVar16 = (longlong *)*puVar8;
      uVar20 = (longlong)(int)puVar8[1] & 0x1fffffffffffffff;
      if (plVar16 + (int)puVar8[1] < plVar16) {
        uVar20 = uVar22;
      }
      if (uVar20 != 0) {
        do {
          lVar12 = *plVar16;
          if ((lVar12 != 0) && (*(int *)(lVar12 + 0xa8) == local_res20)) {
            local_70 = iVar21 + 1;
            if (iVar17 < local_70) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
              iVar17 = local_6c;
            }
            *(longlong *)(local_78 + (longlong)iVar21 * 8) = lVar12;
            lVar11 = local_78;
            iVar21 = local_70;
          }
          plVar16 = plVar16 + 1;
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar20);
      }
      local_98 = 0;
      local_90 = 0;
      if (0 < iVar21) {
        do {
          plVar16 = *(longlong **)(lVar11 + local_90 * 8);
          uVar9 = UMovieSceneTrack::GetPrivateStaticClass();
          uVar9 = UObjectBaseUtility::GetTypedOuter(plVar16,uVar9);
          cVar1 = (char)plVar16[0x12];
          uVar18 = 0;
          iVar17 = *(int *)((longlong)plVar16 + 0x94);
          cVar2 = (char)plVar16[0x13];
          bVar4 = false;
          iVar15 = *(int *)((longlong)plVar16 + 0x9c);
          local_res10 = 0;
          local_res18 = 0;
          local_58[0] = cVar1;
          local_54 = iVar17;
          local_50[0] = cVar2;
          local_4c = iVar15;
          uVar20 = uVar18;
          uVar22 = uVar18;
          do {
            iVar13 = local_res10;
            if (uVar22 != local_90) {
              lVar11 = *(longlong *)(local_78 + uVar22 * 8);
              local_68[0] = *(char *)(lVar11 + 0x90);
              local_60[0] = *(char *)(lVar11 + 0x98);
              local_64 = *(int *)(lVar11 + 0x94);
              local_5c = *(int *)(lVar11 + 0x9c);
              if (local_68[0] == '\x02') {
                if (local_60[0] == '\x02') {
                  uVar10 = UMovieScene::GetPrivateStaticClass();
                  lVar11 = UObjectBaseUtility::GetTypedOuter(uVar9,uVar10);
                  local_68[0] = *(char *)(lVar11 + 0xa8);
                  local_60[0] = *(char *)(lVar11 + 0xb0);
                  local_64 = *(int *)(lVar11 + 0xac);
                  local_5c = *(int *)(lVar11 + 0xb4);
                }
                if (local_68[0] != '\x02') goto LAB_141f67f37;
                pcVar14 = local_68;
                cVar6 = '\x02';
LAB_141f67f6b:
                if ((cVar6 != '\x02') && (*(int *)(pcVar14 + 4) != local_64)) goto LAB_141f67fc5;
                cVar6 = local_60[0];
                if (local_60[0] == '\x02') {
                  pcVar14 = local_60;
                }
                else if (cVar2 == '\x02') {
LAB_141f67faa:
                  pcVar14 = local_50;
                  cVar6 = cVar2;
                  if (cVar2 != local_60[0]) goto LAB_141f67fc5;
                }
                else if (iVar15 < local_5c) {
                  pcVar14 = local_60;
                }
                else {
                  if ((local_5c < iVar15) || (local_60[0] != '\x01')) goto LAB_141f67faa;
                  pcVar14 = local_60;
                }
                if ((cVar6 != '\x02') && (*(int *)(pcVar14 + 4) != local_5c)) goto LAB_141f67fc5;
                bVar4 = true;
              }
              else {
LAB_141f67f37:
                if (cVar1 != '\x02') {
                  if (local_64 < iVar17) {
                    pcVar14 = local_68;
                    cVar6 = local_68[0];
                  }
                  else {
                    if ((iVar17 < local_64) || (local_68[0] != '\x01')) goto LAB_141f67f5e;
                    pcVar14 = local_68;
                    cVar6 = '\x01';
                  }
                  goto LAB_141f67f6b;
                }
LAB_141f67f5e:
                pcVar14 = local_58;
                cVar6 = cVar1;
                if (cVar1 == local_68[0]) goto LAB_141f67f6b;
LAB_141f67fc5:
                bVar4 = false;
              }
              if (((local_60[0] == '\x02') || (cVar1 == '\x02')) ||
                 ((((local_5c <= iVar17 && ((local_5c < iVar17 || (cVar1 != '\x01')))) &&
                   ((cVar1 != '\x01' || (local_5c != iVar17)))) ||
                  ((((cVar2 != '\x02' && (iVar15 <= local_5c)) &&
                    ((iVar15 < local_5c || (cVar2 != '\x01')))) &&
                   ((cVar2 != '\x01' || (local_5c != iVar15)))))))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (((local_68[0] == '\x02') || (cVar2 == '\x02')) ||
                 (((((cVar1 != '\x02' && (local_64 <= iVar17)) &&
                    ((local_64 < iVar17 || (cVar1 != '\x01')))) &&
                   ((cVar1 != '\x01' || (local_64 != iVar17)))) ||
                  (((iVar15 <= local_64 && ((iVar15 < local_64 || (cVar2 != '\x01')))) &&
                   ((cVar2 != '\x01' || (local_64 != iVar15)))))))) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar3) {
                if (bVar5) {
                  uVar18 = (ulonglong)local_res18;
                }
                else {
                  lVar11 = 0;
                  if (cVar1 == '\0') {
                    lVar11 = 4;
                  }
                  lVar12 = 0;
                  if (local_60[0] == '\x01') {
                    lVar12 = 4;
                  }
                  iVar13 = ((*(int *)((longlong)&DAT_144f1bc90 + lVar12) -
                            *(int *)((longlong)&DAT_144f1bc88 + lVar11)) - iVar17) + local_5c;
                  uVar18 = (ulonglong)local_res18;
                  if (iVar13 <= local_res10) {
                    iVar13 = local_res10;
                  }
                }
              }
              else {
                lVar11 = 0;
                if (bVar5) {
                  lVar12 = lVar11;
                  if (cVar2 == '\x01') {
                    lVar12 = 4;
                  }
                  if (local_68[0] == '\0') {
                    lVar11 = 4;
                  }
                  uVar19 = ((*(int *)((longlong)&DAT_144f1bc90 + lVar12) -
                            *(int *)((longlong)&DAT_144f1bc88 + lVar11)) - local_64) + iVar15;
                  if ((int)uVar19 <= (int)local_res18) {
                    uVar19 = local_res18;
                  }
                  uVar18 = (ulonglong)uVar19;
                  local_res18 = uVar19;
                }
                else {
                  uVar18 = (ulonglong)local_res18;
                }
              }
            }
            local_res10 = iVar13;
            iVar13 = (int)uVar18;
            lVar11 = 0;
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
            uVar22 = uVar22 + 1;
          } while ((int)uVar19 < iVar21);
          if ((cVar1 == '\x02') || (cVar2 == '\x02')) {
            iVar15 = 0x7fffffff;
          }
          else {
            lVar12 = lVar11;
            if (cVar2 == '\x01') {
              lVar12 = 4;
            }
            if (cVar1 == '\0') {
              lVar11 = 4;
            }
            iVar15 = ((*(int *)((longlong)&DAT_144f1bc90 + lVar12) -
                      *(int *)((longlong)&DAT_144f1bc88 + lVar11)) - iVar17) + iVar15;
          }
          if ((iVar13 == 0) && (local_res10 == 0)) {
            if (bVar4) {
              local_res10 = (int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2;
              iVar13 = local_res10;
              goto LAB_141f6818d;
            }
LAB_141f68194:
            iVar17 = iVar15;
            if (local_res10 < iVar15) {
              iVar17 = local_res10;
            }
          }
          else {
LAB_141f6818d:
            if (-1 < local_res10) goto LAB_141f68194;
            iVar17 = 0;
          }
          if (iVar13 < 0) {
            iVar15 = 0;
          }
          else if (iVar13 < iVar15) {
            iVar15 = iVar13;
          }
          if (((int)plVar16[0xb] != iVar17) || (*(int *)((longlong)plVar16 + 0x5c) != iVar15)) {
            (**(code **)(*plVar16 + 0x70))(plVar16);
            *(int *)(plVar16 + 0xb) = iVar17;
            *(int *)((longlong)plVar16 + 0x5c) = iVar15;
          }
          local_98 = local_98 + 1;
          local_90 = local_90 + 1;
          lVar11 = local_78;
        } while (local_98 < iVar21);
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 <= iVar7);
    if (local_78 != 0) {
      FMemory::Free(local_78);
    }
  }
  return;
}



// FUNCTION 141f68240 FUN_141f68240 body=252 status=ok
// SIG undefined FUN_141f68240(void)

void FUN_141f68240(longlong param_1,undefined1 *param_2,undefined4 param_3,byte param_4)

{
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  *(byte *)(param_1 + 0x3d0) = *(byte *)(param_1 + 0x3d0) | 1;
  local_90 = *(undefined8 *)(param_2 + 0x18);
  local_a8[0] = *param_2;
  local_a4 = *(undefined8 *)(param_2 + 4);
  local_9c = param_2[0xc];
  local_98 = *(undefined8 *)(param_2 + 0x10);
  local_88 = *(undefined4 *)(param_2 + 0x20);
  local_84 = *(undefined4 *)(param_2 + 0x24);
  local_28 = 0;
  local_78 = 0;
  uStack_2c = 0;
  local_68 = local_68 & 0xc0 | param_4 & 1;
  local_6c = 0;
  local_80 = 0x3f800000;
  local_70 = 0x80000000;
  local_74 = param_3;
  FUN_141f4a590(param_1 + 0x448,local_a8,param_1 + 0x28,DAT_146ac9ac0);
  *(byte *)(param_1 + 0x3d0) = *(byte *)(param_1 + 0x3d0) & 0xfe;
  FUN_141f421d0(param_1);
  return;
}



// FUNCTION 141f68340 FUN_141f68340 body=236 status=ok
// SIG undefined FUN_141f68340(void)

undefined1 * FUN_141f68340(undefined1 *param_1,undefined8 *param_2,ulonglong param_3,int param_4)

{
  undefined8 *puVar1;
  ulonglong local_38;
  undefined8 local_30 [5];
  
  if (param_4 == 0) {
    FUN_141f5ae90(param_2,param_1);
    return param_1;
  }
  if (*(char *)((longlong)param_2 + 0x24) != '\0') {
    *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  }
  local_38 = param_3;
  if ((*(char *)(param_2 + 2) == '\0') && (*(char *)((longlong)param_2 + 0x54) == '\0')) {
    local_38 = param_3 & 0xffffffff;
  }
  *(ulonglong *)((longlong)param_2 + 0x14) = local_38;
  ConvertFrameTime(&local_38,local_38,*param_2,param_2[1]);
  puVar1 = param_2 + 5;
  if (local_30 != puVar1) {
    *(undefined1 *)puVar1 = 1;
    *(ulonglong *)((longlong)param_2 + 0x2c) = local_38;
    *(undefined1 *)((longlong)param_2 + 0x34) = 1;
    param_2[7] = local_38;
    param_2[8] = param_2[1];
    *(undefined4 *)(param_2 + 9) = 0;
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0x80000000;
    *(undefined1 *)(param_2 + 10) = 1;
  }
  *param_1 = *(undefined1 *)puVar1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)((longlong)param_2 + 0x2c);
  param_1[0xc] = *(undefined1 *)((longlong)param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x10) = param_2[7];
  *(undefined8 *)(param_1 + 0x18) = param_2[8];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x4c);
  return param_1;
}



// FUNCTION 141f68430 FUN_141f68430 body=123 status=ok
// SIG undefined FUN_141f68430(void)

void FUN_141f68430(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((*(byte *)(param_1 + 0x3d0) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x3f8);
    *(int *)(param_1 + 0x3f8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3fc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x3f0),iVar1);
    }
    puVar2 = (undefined1 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x3f0));
    *puVar2 = 2;
    *(undefined4 *)(puVar2 + 4) = param_3;
    *(undefined8 *)(puVar2 + 8) = param_2;
    return;
  }
  FUN_141f684b0();
  return;
}



// FUNCTION 141f684b0 FUN_141f684b0 body=2304 status=ok
// SIG undefined FUN_141f684b0(void)

/* WARNING: Removing unreachable block (ram,0x000141f687b2) */
/* WARNING: Removing unreachable block (ram,0x000141f68647) */
/* WARNING: Removing unreachable block (ram,0x000141f685ba) */
/* WARNING: Removing unreachable block (ram,0x000141f68aca) */
/* WARNING: Removing unreachable block (ram,0x000141f6884d) */
/* WARNING: Removing unreachable block (ram,0x000141f68868) */
/* WARNING: Removing unreachable block (ram,0x000141f68d1d) */
/* WARNING: Removing unreachable block (ram,0x000141f68897) */
/* WARNING: Removing unreachable block (ram,0x000141f68b86) */
/* WARNING: Removing unreachable block (ram,0x000141f68c8f) */
/* WARNING: Removing unreachable block (ram,0x000141f68ccf) */
/* WARNING: Removing unreachable block (ram,0x000141f68bbe) */
/* WARNING: Removing unreachable block (ram,0x000141f68ba1) */
/* WARNING: Removing unreachable block (ram,0x000141f68cb2) */

void FUN_141f684b0(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  int iVar19;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined8 local_res8;
  uint local_108;
  uint uStack_104;
  undefined8 uStack_100;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined8 local_68;
  uint local_60;
  float fStack_5c;
  
  if (param_3 == 0) {
    uVar18 = 1;
  }
  else if ((param_3 == 1) || (param_3 != 2)) {
    uVar18 = 0;
  }
  else {
    uVar18 = 3;
  }
  iVar19 = *(int *)((longlong)param_1 + 0x3e4);
  if (iVar19 == 0) {
    return;
  }
  if ((param_3 != 0) || ((char)param_1[0x79] != '\x01')) {
LAB_141f68d4c:
    FUN_141f68340(&local_98,param_1 + 0xec,param_2,param_3);
    local_d8._0_4_ = CONCAT31(local_d8._1_3_,(undefined1)local_98);
    uStack_cc = CONCAT31(uStack_cc._1_3_,(undefined1)uStack_8c);
    local_c8 = puStack_88;
    uStack_c0 = uStack_80;
    FUN_141f68240(param_1,&local_d8,uVar18,0);
    return;
  }
  uVar9 = *(uint *)(param_1 + 0x7c);
  uVar15 = *(uint *)((longlong)param_1 + 0x3cc) & 1;
  uVar16 = (uint)param_2;
  if (uVar15 == 0) {
    bVar3 = (int)(uVar9 + iVar19) <= (int)uVar16;
  }
  else {
    bVar3 = (int)uVar16 < (int)uVar9;
  }
  if (!bVar3) goto LAB_141f68d4c;
  uVar17 = uVar9 + iVar19;
  if (uVar15 == 0) {
    uVar17 = uVar9;
  }
  uVar6 = (int)(uVar16 - uVar17) / iVar19;
  iVar13 = (int)(uVar16 - uVar17) % iVar19;
  uVar10 = (int)uVar6 >> 0x1f;
  iVar7 = (uVar6 ^ uVar10) - uVar10;
  if ((-1 < (int)param_1[0x80]) && ((int)param_1[0x80] < (int)param_1[0x7d] + iVar7)) {
    if (iVar19 < 1) {
      local_res8._4_4_ = 0.0;
      local_res8._0_4_ = uVar9;
    }
    else {
      local_res8._4_4_ = 0.99999994;
      local_res8._0_4_ = iVar19 + -1 + uVar9;
    }
    fVar5 = local_res8._4_4_;
    local_108 = uVar9;
    uStack_104 = 0;
    local_60 = (uint)local_res8;
    fStack_5c = local_res8._4_4_;
    local_68 = param_2;
    if (((int)uVar16 < (int)uVar9) ||
       ((local_res8._4_4_ = (float)((ulonglong)param_2 >> 0x20), uVar16 == uVar9 &&
        (local_res8._4_4_ < 0.0)))) {
      puVar14 = &local_108;
    }
    else if (((int)uVar16 < (int)(uint)local_res8) ||
            ((uVar16 == (uint)local_res8 && (local_res8._4_4_ < fVar5)))) {
      puVar14 = (uint *)&local_68;
    }
    else {
      puVar14 = &local_60;
    }
    uVar1 = *(undefined8 *)puVar14;
    FUN_141f68340(&local_108,param_1 + 0xec,uVar1,0);
    local_d8._0_4_ = CONCAT31(local_d8._1_3_,(undefined1)local_108);
    local_d8._4_4_ = uStack_104;
    uStack_cc = CONCAT31(uStack_cc._1_3_,uStack_100._4_1_);
    FUN_141f68240(param_1,&local_d8,uVar18,0);
    if (*(char *)((longlong)param_1 + 0x416) == '\0') {
      FUN_141f66f00(param_1);
      *(undefined8 *)((longlong)param_1 + 0x774) = uVar1;
      if (*(char *)((longlong)param_1 + 0x784) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x784) = 0;
      }
      if ((char)param_1[0xf6] != '\0') {
        *(undefined1 *)(param_1 + 0xf6) = 0;
      }
    }
    else {
      FUN_141f5aa50();
    }
    plVar2 = (longlong *)param_1[0x86];
    local_108 = (uint)*(undefined8 *)((longlong)param_1 + 0x774);
    uStack_104 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x774) >> 0x20);
    uStack_100._0_4_ = (undefined4)param_1[0xec];
    uStack_100._4_4_ = (undefined4)((ulonglong)param_1[0xec] >> 0x20);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_108);
    if ((char)plVar2[3] != '\0') {
      *(undefined1 *)(plVar2 + 3) = 0;
    }
    if ((int)param_1[0x78] < 1) {
      return;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x77,0);
    return;
  }
  *(int *)(param_1 + 0x7d) = (int)param_1[0x7d] + iVar7;
  iVar7 = iVar13;
  if (uVar15 == 0) {
    if (iVar13 < 0) goto LAB_141f687f8;
  }
  else if (0 < iVar13) {
LAB_141f687f8:
    in_XMM1 = ZEXT416(0);
    iVar7 = iVar13 + -1 + iVar19;
  }
  lVar12 = param_1[0xf7];
  uStack_100 = (uint *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  local_98 = (longlong *)CONCAT44(local_98._4_4_,(undefined4)local_98);
  local_d8 = (longlong *)CONCAT44(local_d8._4_4_,(undefined4)local_d8);
  uStack_b0 = (longlong *)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
  if (lVar12 != 0) {
    local_a8 = (longlong *)(lVar12 + 0x18);
    local_108 = 0;
    local_c8 = (uint *)(lVar12 + 0x28);
    uStack_104 = 1;
    iStack_f4 = 0;
    iStack_f0 = 0;
    iVar19 = *(int *)(lVar12 + 0x40);
    if (iVar19 != 0) {
      puVar14 = *(uint **)(lVar12 + 0x38);
      if (*(uint **)(lVar12 + 0x38) == (uint *)0x0) {
        puVar14 = local_c8;
      }
      uVar9 = *puVar14;
      local_108 = 0;
      iStack_f0 = 0;
      while (uVar9 == 0) {
        lVar11 = (longlong)(int)local_108;
        iStack_f0 = iStack_f0 + 0x20;
        uVar9 = local_108 + 1;
        bVar3 = (int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_108;
        local_108 = uVar9;
        if (bVar3) goto LAB_141f68974;
        uVar9 = puVar14[lVar11 + 1];
      }
      uStack_104 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uStack_104 != 0) {
        for (; uStack_104 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_104 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_f4 = (iStack_f0 - iVar8) + 0x1f;
      if (iVar19 < iStack_f4) {
LAB_141f68974:
        iStack_f4 = iVar19;
      }
    }
    local_f8 = 0xffffffff;
    uStack_80 = CONCAT44(iStack_f4,0xffffffff);
    uStack_90 = local_108;
    uStack_8c = uStack_104;
    local_a0 = 0;
    uStack_c0 = uStack_80;
    auVar4._4_8_ = in_XMM1._8_8_;
    auVar4._0_4_ = iStack_f4;
    auVar20._0_8_ = auVar4._0_8_ << 0x20;
    auVar20._8_4_ = iStack_f0;
    auVar20._12_4_ = uStack_ec;
    uStack_d0 = local_108;
    uStack_cc = uStack_104;
    local_b8 = auVar20._8_8_;
    iVar19 = iStack_f4;
    puStack_88 = local_c8;
    uStack_78 = local_b8;
    local_70 = local_a8;
    uStack_100 = local_c8;
    local_98 = local_a8;
    local_d8 = local_a8;
    uStack_b0 = local_a8;
    if (iStack_f4 < *(int *)(lVar12 + 0x40)) {
      do {
        lVar12 = (longlong)iVar19 * 0x38 + *local_d8;
        if (*(char *)(lVar12 + 0x2c) == '\x02') {
          FMovieSceneEvaluationState::Invalidate(param_1 + 6,lVar12,lVar12 + 0x10);
          TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
          ::Remove(uStack_b0,iVar19);
          local_a0 = CONCAT11(local_a0._1_1_,1);
        }
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_cc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
        iVar19 = uStack_c0._4_4_;
      } while (uStack_c0._4_4_ < (int)local_c8[6]);
      if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
        TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_a8,(int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34),1);
      }
    }
  }
  uVar9 = uVar17;
  if ((*(byte *)((longlong)param_1 + 0x3cc) & 1) == 0) {
    if (iVar13 < 0) goto LAB_141f68aaa;
  }
  else if (0 < iVar13) {
LAB_141f68aaa:
    if (0 < *(int *)((longlong)param_1 + 0x3e4)) {
      local_res8 = CONCAT44(0x3f7fffff,*(int *)((longlong)param_1 + 0x3e4) + -1 + (int)param_1[0x7c]
                           );
      goto LAB_141f68b02;
    }
    uVar9 = *(uint *)(param_1 + 0x7c);
  }
  local_res8 = (ulonglong)uVar9;
LAB_141f68b02:
  *(ulonglong *)((longlong)param_1 + 0x774) = local_res8;
  if (*(char *)((longlong)param_1 + 0x784) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x784) = 0;
  }
  if ((char)param_1[0xf6] != '\0') {
    *(undefined1 *)(param_1 + 0xf6) = 0;
  }
  FUN_141f5ae90(param_1 + 0xec,&local_d8,(uVar17 - 1) + iVar7);
  local_98._0_4_ = CONCAT31(local_98._1_3_,(undefined1)local_d8);
  local_98._4_4_ = local_d8._4_4_;
  uStack_90 = uStack_d0;
  uStack_8c = CONCAT31(uStack_8c._1_3_,(undefined1)uStack_cc);
  puStack_88 = local_c8;
  uStack_80 = uStack_c0;
  uStack_78 = local_b8;
  FUN_141f68240(param_1,&local_98,uVar18,1);
  local_108 = (uVar17 - 1) + iVar7;
  plVar2 = (longlong *)param_1[0x86];
  uStack_104 = 0;
  uStack_100._0_4_ = (undefined4)param_1[0xec];
  uStack_100._4_4_ = (undefined4)((ulonglong)param_1[0xec] >> 0x20);
  if ((char)plVar2[3] != '\0') {
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_108);
    if ((char)plVar2[3] != '\0') {
      *(undefined1 *)(plVar2 + 3) = 0;
    }
    if (&local_108 != (uint *)(plVar2 + 1)) {
      plVar2[1] = CONCAT44(uStack_104,local_108);
      plVar2[2] = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
      *(undefined1 *)(plVar2 + 3) = 1;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_108);
  }
  (**(code **)(*param_1 + 0x290))(param_1);
  return;
}



// FUNCTION 141f68db0 UpgradeLegacyMovieSceneTime body=182 status=ok
// SIG undefined UpgradeLegacyMovieSceneTime(void)

int * UpgradeLegacyMovieSceneTime(int *param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 local_res18;
  
  local_res18 = param_3;
  dVar3 = (double)FFrameRate::MaxSeconds(&local_res18);
  dVar4 = (double)FFrameRate::MaxSeconds(&local_res18);
  auVar5._0_8_ = -dVar4;
  if ((-dVar4 <= param_4) && (auVar5._0_8_ = dVar3, param_4 <= dVar3)) {
    auVar5._0_8_ = param_4;
  }
  auVar5._0_8_ = ((double)(int)local_res18 * auVar5._0_8_) / (double)local_res18._4_4_;
  lVar2 = (longlong)auVar5._0_8_;
  if ((lVar2 != -0x8000000000000000) && ((double)lVar2 != auVar5._0_8_)) {
    auVar5._8_8_ = auVar5._0_8_;
    uVar1 = movmskpd(0,auVar5);
    auVar5._0_8_ = (double)(longlong)(lVar2 - (ulonglong)(uVar1 & 1));
  }
  *param_1 = (int)auVar5._0_8_;
  return param_1;
}



// FUNCTION 141f68e70 UpgradeTimeRanges body=745 status=ok
// SIG undefined UpgradeTimeRanges(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UMovieScene::UpgradeTimeRanges(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  char local_58 [4];
  uint local_54;
  longlong local_50;
  char local_48 [4];
  int local_44;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar6 = *(char *)(param_1 + 0xa8);
  uVar4 = 0;
  if (((cVar6 == '\x02') || (*(char *)(param_1 + 0xb0) == '\x02')) ||
     ((*(int *)(param_1 + 0xac) <= *(int *)(param_1 + 0xb4) &&
      ((*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xb4) ||
       ((cVar6 != '\0' && (*(char *)(param_1 + 0xb0) != '\0')))))))) {
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      *(char *)(param_1 + 0xa8) = cVar6;
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xac);
      *(undefined1 *)(param_1 + 0xb0) = 0;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    }
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x80);
    cVar6 = '\0';
    local_58[0] = '\0';
    local_54 = 0;
    uVar9 = (longlong)*(int *)(param_1 + 0x88) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0x88) < puVar5) {
      uVar9 = uVar4;
    }
    uVar8 = uVar4;
    local_50 = param_1;
    if (uVar9 != 0) {
      do {
        FUN_141f52b80(local_48,*puVar5);
        if (local_40 != '\0') {
          if (cVar6 == '\x02') {
            pcVar2 = local_58;
          }
          else if (local_48[0] == '\x02') {
            pcVar2 = local_48;
          }
          else if (local_44 < (int)uVar4) {
            pcVar2 = local_58;
          }
          else if ((int)uVar4 < local_44) {
            pcVar2 = local_48;
          }
          else {
            pcVar2 = local_58;
            if (cVar6 != '\x01') {
              pcVar2 = local_48;
            }
          }
          cVar6 = *pcVar2;
          local_58[0] = cVar6;
          local_54 = *(uint *)(pcVar2 + 4);
          uVar4 = (ulonglong)local_54;
          local_40 = '\0';
        }
        puVar5 = puVar5 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar9);
    }
    iVar3 = (int)uVar4;
    lVar7 = *(longlong *)(param_1 + 0x70);
    lVar1 = (longlong)*(int *)(param_1 + 0x78) * 0x30 + lVar7;
    for (; lVar7 != lVar1; lVar7 = lVar7 + 0x30) {
      uVar8 = 0;
      puVar5 = *(undefined8 **)(lVar7 + 0x20);
      uVar9 = (longlong)*(int *)(lVar7 + 0x28) & 0x1fffffffffffffff;
      if (puVar5 + *(int *)(lVar7 + 0x28) < puVar5) {
        uVar9 = uVar8;
      }
      if (uVar9 != 0) {
        do {
          FUN_141f52b80(local_48,*puVar5);
          if (local_40 != '\0') {
            if (cVar6 == '\x02') {
              pcVar2 = local_58;
            }
            else if (local_48[0] == '\x02') {
              pcVar2 = local_48;
            }
            else if (local_44 < (int)uVar4) {
              pcVar2 = local_58;
            }
            else if ((int)uVar4 < local_44) {
              pcVar2 = local_48;
            }
            else {
              pcVar2 = local_58;
              if (cVar6 != '\x01') {
                pcVar2 = local_48;
              }
            }
            cVar6 = *pcVar2;
            local_58[0] = cVar6;
            local_54 = *(uint *)(pcVar2 + 4);
            uVar4 = (ulonglong)local_54;
            local_40 = '\0';
          }
          puVar5 = puVar5 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar9);
      }
      iVar3 = (int)uVar4;
      param_1 = local_50;
    }
    if (cVar6 == '\x01') {
      iVar3 = iVar3 + 1;
      cVar6 = '\0';
    }
    *(undefined1 *)(param_1 + 0xa8) = 1;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(char *)(param_1 + 0xb0) = cVar6;
    *(int *)(param_1 + 0xb4) = iVar3;
  }
  if (((*(char *)(param_1 + 0xa8) == '\x02') || (*(char *)(param_1 + 0xb0) == '\x02')) ||
     ((*(char *)(param_1 + 0xa8) == '\x01' &&
      ((*(char *)(param_1 + 0xb0) == '\x01' &&
       (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4))))))) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// FUNCTION 141f69160 FUN_141f69160 body=53 status=ok
// SIG undefined FUN_141f69160(void)

void FUN_141f69160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144f222c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f691a0 FUN_141f691a0 body=53 status=ok
// SIG undefined FUN_141f691a0(void)

void FUN_141f691a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_144f223e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f691e0 FUN_141f691e0 body=53 status=ok
// SIG undefined FUN_141f691e0(void)

void FUN_141f691e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f224f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f69220 FUN_141f69220 body=53 status=ok
// SIG undefined FUN_141f69220(void)

void FUN_141f69220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144f22610;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69260 FUN_141f69260 body=53 status=ok
// SIG undefined FUN_141f69260(void)

void FUN_141f69260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_144f22728;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f692a0 FUN_141f692a0 body=53 status=ok
// SIG undefined FUN_141f692a0(void)

void FUN_141f692a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144f22840;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f692e0 FUN_141f692e0 body=53 status=ok
// SIG undefined FUN_141f692e0(void)

void FUN_141f692e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_144f22958;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f69320 FUN_141f69320 body=47 status=ok
// SIG undefined FUN_141f69320(void)

longlong FUN_141f69320(void)

{
  if (DAT_146aca4f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146aca4f0,&PTR_Z_Construct_UPackage__Script_MovieScene_1464d5540);
  }
  return DAT_146aca4f0;
}



// FUNCTION 141f69350 FUN_141f69350 body=53 status=ok
// SIG undefined FUN_141f69350(void)

void FUN_141f69350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f20de8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69390 FUN_141f69390 body=53 status=ok
// SIG undefined FUN_141f69390(void)

void FUN_141f69390(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144f21f80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f693d0 FUN_141f693d0 body=53 status=ok
// SIG undefined FUN_141f693d0(void)

void FUN_141f693d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_144f22a70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f69410 FUN_141f69410 body=53 status=ok
// SIG undefined FUN_141f69410(void)

void FUN_141f69410(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_144f20f00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69450 FUN_141f69450 body=53 status=ok
// SIG undefined FUN_141f69450(void)

void FUN_141f69450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144f22098;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69490 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2f0;
    *puVar1 = &PTR_FUN_144f22b88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f694d0 FUN_141f694d0 body=53 status=ok
// SIG undefined FUN_141f694d0(void)

void FUN_141f694d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f221b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69510 FUN_141f69510 body=53 status=ok
// SIG undefined FUN_141f69510(void)

void FUN_141f69510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144f21018;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f69550 Z_Construct_UPackage__Script_MovieScene body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_MovieScene(void)

longlong Z_Construct_UPackage__Script_MovieScene(void)

{
  if (DAT_146aca3d8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
  }
  return DAT_146aca3d8;
}



// FUNCTION 141f69580 FUN_141f69580 body=53 status=ok
// SIG undefined FUN_141f69580(void)

void FUN_141f69580(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_144f22ca0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f695c0 FUN_141f695c0 body=53 status=ok
// SIG undefined FUN_141f695c0(void)

void FUN_141f695c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_144f21130;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 141f69600 FUN_141f69600 body=53 status=ok
// SIG undefined FUN_141f69600(void)

void FUN_141f69600(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144f22db8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69640 FUN_141f69640 body=47 status=ok
// SIG undefined FUN_141f69640(void)

longlong FUN_141f69640(void)

{
  if (DAT_146aca470 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146aca470,&PTR_Z_Construct_UPackage__Script_MovieScene_1464d5140);
  }
  return DAT_146aca470;
}



// FUNCTION 141f69670 FUN_141f69670 body=53 status=ok
// SIG undefined FUN_141f69670(void)

void FUN_141f69670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_144f22ed0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f696d0 FUN_141f696d0 body=53 status=ok
// SIG undefined FUN_141f696d0(void)

void FUN_141f696d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_144f216c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69710 FUN_141f69710 body=53 status=ok
// SIG undefined FUN_141f69710(void)

void FUN_141f69710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144f22fe8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69750 FUN_141f69750 body=53 status=ok
// SIG undefined FUN_141f69750(void)

void FUN_141f69750(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144f21278;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69790 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneBindingOverridesInterface::GetPrivateStaticClass(void)

{
  if (DAT_146aca418 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneBindingOverridesInterface",&DAT_146aca418,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aca418;
}



// FUNCTION 141f69840 FUN_141f69840 body=53 status=ok
// SIG undefined FUN_141f69840(void)

void FUN_141f69840(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_144f23100;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69880 FUN_141f69880 body=53 status=ok
// SIG undefined FUN_141f69880(void)

void FUN_141f69880(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf8;
    *puVar1 = &PTR_FUN_144f23238;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f698c0 FUN_141f698c0 body=53 status=ok
// SIG undefined FUN_141f698c0(void)

void FUN_141f698c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144f23350;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69900 FUN_141f69900 body=53 status=ok
// SIG undefined FUN_141f69900(void)

void FUN_141f69900(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_144f21840;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69940 FUN_141f69940 body=53 status=ok
// SIG undefined FUN_141f69940(void)

void FUN_141f69940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144f23468;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69980 FUN_141f69980 body=53 status=ok
// SIG undefined FUN_141f69980(void)

void FUN_141f69980(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144f21958;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f699c0 FUN_141f699c0 body=53 status=ok
// SIG undefined FUN_141f699c0(void)

void FUN_141f699c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144f21a70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69a00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneEasingFunction::GetPrivateStaticClass(void)

{
  if (DAT_146aca4c0 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneEasingFunction",&DAT_146aca4c0,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aca4c0;
}



// FUNCTION 141f69ab0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneBuiltInEasingFunction::GetPrivateStaticClass(void)

{
  if (DAT_146aca498 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneBuiltInEasingFunction",&DAT_146aca498,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_141f6b0f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aca498;
}



// FUNCTION 141f69b50 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneEasingExternalCurve::StaticClass(void)

{
  if (DAT_146aca4a8 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneEasingExternalCurve",&DAT_146aca4a8,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_141f6b110,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aca4a8;
}



// FUNCTION 141f69c20 FUN_141f69c20 body=47 status=ok
// SIG undefined FUN_141f69c20(void)

longlong FUN_141f69c20(void)

{
  if (DAT_146aca4b8 == 0) {
    FUN_141786440(&DAT_146aca4b8,&PTR_GetPrivateStaticClass_144f1f610);
  }
  return DAT_146aca4b8;
}



// FUNCTION 141f69c50 FUN_141f69c50 body=47 status=ok
// SIG undefined FUN_141f69c50(void)

longlong FUN_141f69c50(void)

{
  if (DAT_146aca4b0 == 0) {
    FUN_141786a30(&DAT_146aca4b0,&PTR_FUN_1464d5370);
  }
  return DAT_146aca4b0;
}



// FUNCTION 141f69c90 FUN_141f69c90 body=53 status=ok
// SIG undefined FUN_141f69c90(void)

void FUN_141f69c90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &PTR_FUN_144f21390;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f69ce0 FUN_141f69ce0 body=53 status=ok
// SIG undefined FUN_141f69ce0(void)

void FUN_141f69ce0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_144f235e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f69d20 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneBindingOwnerInterface::StaticClass(void)

{
  if (DAT_146aca428 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneBindingOwnerInterface",&DAT_146aca428,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aca428;
}



// FUNCTION 141f69dd0 FUN_141f69dd0 body=53 status=ok
// SIG undefined FUN_141f69dd0(void)

void FUN_141f69dd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_144f23700;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f69e10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScene::GetPrivateStaticClass(void)

{
  if (DAT_146aca3d0 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieScene",&DAT_146aca3d0,FUN_140447710,0xd0,0x10000000,0
                  ,L"Engine",&LAB_141f6b0b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141f70ea0,&LAB_140447700,0);
  }
  return DAT_146aca3d0;
}



// FUNCTION 141f69ed0 FUN_141f69ed0 body=53 status=ok
// SIG undefined FUN_141f69ed0(void)

void FUN_141f69ed0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_144f23818;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f69f10 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneFolder::StaticClass(void)

{
  if (DAT_146aca668 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneFolder",&DAT_146aca668,FUN_140447710,0x70,
                  0x10000000,0,L"Engine",&LAB_141f6b150,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aca668;
}



// FUNCTION 141f69fb0 FUN_141f69fb0 body=53 status=ok
// SIG undefined FUN_141f69fb0(void)

void FUN_141f69fb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &PTR_FUN_144f214d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 141f6a000 FUN_141f6a000 body=47 status=ok
// SIG undefined FUN_141f6a000(void)

longlong FUN_141f6a000(void)

{
  if (DAT_146aca570 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146aca570,&PTR_Z_Construct_UPackage__Script_MovieScene_1464d5d90);
  }
  return DAT_146aca570;
}



// FUNCTION 141f6a030 CopyToEmpty<FMovieSceneEvaluationTreeNode> body=170 status=ok
// SIG undefined CopyToEmpty<FMovieSceneEvaluationTreeNode>(void)

void TArray<FMovieSceneEvaluationTreeNode,FDefaultAllocator>::
     CopyToEmpty<FMovieSceneEvaluationTreeNode>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_2 + 4);
    puVar2 = (undefined1 *)*param_1;
    do {
      *puVar2 = *(undefined1 *)(puVar1 + -1);
      *(undefined4 *)(puVar2 + 4) = *puVar1;
      puVar2[8] = *(undefined1 *)(puVar1 + 1);
      *(undefined4 *)(puVar2 + 0xc) = puVar1[2];
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 3);
      *(undefined4 *)(puVar2 + 0x18) = puVar1[5];
      *(undefined4 *)(puVar2 + 0x1c) = puVar1[6];
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 8;
      puVar2 = puVar2 + 0x20;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141f6a0e0 CopyToEmpty<FMovieSceneSegment> body=293 status=ok
// SIG undefined CopyToEmpty<FMovieSceneSegment>(void)

void TArray<FMovieSceneSegment,FDefaultAllocator>::CopyToEmpty<FMovieSceneSegment>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *_Dst;
  int *_Src;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar4 = (undefined1 *)*param_1;
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 0x50);
    piVar2 = (int *)(puVar4 + 0x50);
    do {
      *puVar4 = (char)piVar3[-0x14];
      piVar2[-0x13] = piVar3[-0x13];
      *(char *)(piVar2 + -0x12) = (char)piVar3[-0x12];
      piVar2[-0x11] = piVar3[-0x11];
      piVar2[-0x10] = piVar3[-0x10];
      *(char *)(piVar2 + -0xf) = (char)piVar3[-0xf];
      piVar2[-2] = 0;
      piVar2[-1] = 0;
      iVar1 = *piVar3;
      _Src = *(int **)(piVar3 + -2);
      *piVar2 = iVar1;
      if (iVar1 == 0) {
        piVar2[1] = 0;
      }
      else {
        TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
                  (piVar2 + -0xe,iVar1,0);
        if (_Src == (int *)0x0) {
          _Src = piVar3 + -0xe;
        }
        _Dst = *(int **)(piVar2 + -2);
        if (*(int **)(piVar2 + -2) == (int *)0x0) {
          _Dst = piVar2 + -0xe;
        }
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
      puVar4 = puVar4 + 0x58;
      piVar2 = piVar2 + 0x16;
      piVar3 = piVar3 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141f6a210 FUN_141f6a210 body=577 status=ok
// SIG undefined FUN_141f6a210(void)

uint * FUN_141f6a210(longlong *param_1,uint *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  void *_Src;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  bool bVar15;
  uint local_res8 [2];
  
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)(int)uVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  lVar13 = *param_1;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  puVar2 = (undefined4 *)(lVar13 + (longlong)(int)uVar12 * 0x28);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  _Src = (void *)(lVar13 + (longlong)(int)uVar12 * 0x28);
  *(undefined1 *)((longlong)_Src + 0x10) = *(undefined1 *)(param_3 + 4);
  *(undefined4 *)((longlong)_Src + 0x14) = param_3[5];
  *(undefined1 *)((longlong)_Src + 0x18) = *(undefined1 *)(param_3 + 6);
  *(undefined4 *)((longlong)_Src + 0x1c) = param_3[7];
  *(undefined4 *)((longlong)_Src + 0x20) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar12 = local_res8[0];
    lVar13 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar13 * 0x28),_Src,0x20);
      uVar10 = *param_2;
      bVar4 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar10;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + (longlong)(int)uVar10 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar13 + 4 + (longlong)(int)uVar10 * 0x28) = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar11 = (longlong *)param_1[4];
      *param_2 = uVar12;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141f6a42b;
    }
  }
  cVar8 = TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    uVar12 = *param_2;
    uVar10 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)_Src + 0x24) = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x20) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         uVar12;
  }
LAB_141f6a42b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141f6a460 FUN_141f6a460 body=673 status=ok
// SIG undefined FUN_141f6a460(void)

int * FUN_141f6a460(longlong *param_1,int *param_2,int *param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *_Src;
  bool bVar13;
  
  uVar12 = 0xffffffff;
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)iVar10 * 0x1c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x1c + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  _Src = (int *)((longlong)iVar10 * 0x1c + *param_1);
  iVar10 = param_3[1];
  iVar5 = param_3[2];
  iVar4 = param_3[3];
  *_Src = *param_3;
  _Src[1] = iVar10;
  _Src[2] = iVar5;
  _Src[3] = iVar4;
  bVar13 = false;
  _Src[4] = param_3[4];
  _Src[5] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = iVar11;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FCrc::MemCrc_DEPRECATED(_Src,0x10,0);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar5 * 0x1c + *param_1);
          iVar10 = iVar5;
          if (((piVar9[1] == _Src[1] && piVar9[2] == _Src[2]) && piVar9[3] == _Src[3]) &&
              *piVar9 == *_Src) break;
          iVar5 = piVar9[5];
          iVar10 = iVar11;
        } while (iVar5 != -1);
      }
    }
    bVar13 = iVar10 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x1c + *param_1),_Src,0x14);
      iVar11 = *param_2;
      bVar2 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = iVar11;
      }
      puVar8 = (undefined4 *)((longlong)iVar11 * 0x1c + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141f6a6d4;
    }
  }
  cVar3 = TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar11 = *param_2;
    uVar6 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    _Src[6] = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[5] = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar11;
  }
LAB_141f6a6d4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141f6a710 Emplace<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_const_&> body=411 status=ok
// SIG undefined Emplace<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_const_&>(void)

int * TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_const_&>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>::
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>(local_20,param_3);
  local_20[8] = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x28) == *local_20) goto LAB_141f6a7cb;
          iVar4 = *(int *)(*param_1 + 0x20 + (longlong)iVar4 * 0x28);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141f6a7cb:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + (longlong)iVar4 * 0x28) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop((void *)(lVar1 + (longlong)iVar4 * 0x28),local_20,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_141f6a880;
    }
  }
  cVar2 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_20;
    local_20[9] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_20[8] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141f6a880:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 141f6a8b0 FUN_141f6a8b0 body=647 status=ok
// SIG undefined FUN_141f6a8b0(void)

int * FUN_141f6a8b0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool local_res8;
  
  uVar8 = 0xffffffff;
  iVar7 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)iVar10 * 0xb8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0xb8 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar5 +
                    (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar10 & 0x1f);
  puVar11 = (uint *)((longlong)iVar10 * 0xb8 + *param_1);
  TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>::
  TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>(puVar11,param_3);
  puVar11[0x2c] = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar10 != 1) {
    iVar6 = iVar7;
    if (iVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar3 != -1) {
        do {
          iVar6 = iVar3;
          if (*(uint *)((longlong)iVar3 * 0xb8 + *param_1) == *puVar11) break;
          iVar3 = *(int *)((longlong)iVar3 * 0xb8 + 0xb0 + *param_1);
          iVar6 = iVar7;
        } while (iVar3 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0xb8 + *param_1);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0xb0);
      iVar7 = *param_2;
      bVar1 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xb8 + *param_1) = iVar7;
      }
      puVar4 = (undefined4 *)((longlong)iVar7 * 0xb8 + *param_1);
      *puVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar4[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar5 +
                        (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_141f6ab13;
    }
  }
  cVar2 = TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar2 == '\0') {
    uVar9 = (int)param_1[9] - 1U & *puVar11;
    puVar11[0x2d] = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar11[0x2c] =
         *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_141f6ab13:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141f6ab40 FUN_141f6ab40 body=648 status=ok
// SIG undefined FUN_141f6ab40(void)

int * FUN_141f6ab40(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool local_res8;
  
  uVar8 = 0xffffffff;
  iVar7 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<ATTLCharacterEditScene::MenuEditRef,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)iVar10 * 0x108 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x108 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar5 +
                    (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar10 & 0x1f);
  puVar11 = (uint *)((longlong)iVar10 * 0x108 + *param_1);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>
  ::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>
            (puVar11,param_3);
  puVar11[0x40] = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar10 != 1) {
    iVar6 = iVar7;
    if (iVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar3 != -1) {
        do {
          iVar6 = iVar3;
          if (*(uint *)((longlong)iVar3 * 0x108 + *param_1) == *puVar11) break;
          iVar3 = *(int *)((longlong)iVar3 * 0x108 + 0x100 + *param_1);
          iVar6 = iVar7;
        } while (iVar3 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0x108 + *param_1);
      FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x100);
      iVar7 = *param_2;
      bVar1 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x108 + *param_1) = iVar7;
      }
      puVar4 = (undefined4 *)((longlong)iVar7 * 0x108 + *param_1);
      *puVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar4[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar5 +
                        (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_141f6ada4;
    }
  }
  cVar2 = TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar2 == '\0') {
    uVar9 = (int)param_1[9] - 1U & *puVar11;
    puVar11[0x41] = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar11[0x40] =
         *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_141f6ada4:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141f6add0 FUN_141f6add0 body=726 status=ok
// SIG undefined FUN_141f6add0(void)

int * FUN_141f6add0(longlong *param_1,int *param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *_Src;
  bool local_res8;
  
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar11 * 0x20 + *param_1);
  FString::FString(_Src,param_3);
  puVar12 = &DAT_143f3eda8;
  *(undefined1 *)(_Src + 2) = *(undefined1 *)(param_3 + 0x10);
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (*(int *)(_Src + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*_Src;
      }
      iVar4 = FUN_140438070(puVar9);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        lVar7 = *param_1;
        do {
          lVar13 = (longlong)iVar4 * 0x20;
          if (*(int *)(_Src + 1) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)*_Src;
          }
          if (*(int *)(lVar13 + 8 + lVar7) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(lVar13 + lVar7);
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
          iVar11 = iVar4;
          if (iVar5 == 0) break;
          lVar7 = *param_1;
          iVar4 = *(int *)(lVar7 + 0x18 + lVar13);
          iVar11 = iVar15;
        } while (iVar4 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      plVar14 = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar14,_Src,0x18);
      iVar4 = *param_2;
      bVar2 = (byte)iVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar4;
      }
      puVar10 = (undefined4 *)((longlong)iVar4 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar10[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar4;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141f6b07d;
    }
  }
  cVar3 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar15 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar12 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar12);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x1c) = uVar6;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar15;
  }
LAB_141f6b07d:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141f6b110 FUN_141f6b110 body=52 status=ok
// SIG undefined FUN_141f6b110(void)

void FUN_141f6b110(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f21b88;
    puVar1[5] = &PTR_LAB_144f21e00;
  }
  return;
}



// FUNCTION 141f6b170 TMovieSceneEvaluationTree<FSectionEvaluationData> body=398 status=ok
// SIG undefined TMovieSceneEvaluationTree<FSectionEvaluationData>(void)

undefined1 *
TMovieSceneEvaluationTree<FSectionEvaluationData>::TMovieSceneEvaluationTree<FSectionEvaluationData>
          (undefined1 *param_1,undefined1 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar5 = *(int *)(param_2 + 0x28);
  pvVar1 = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    TArray<FRotator,FDefaultAllocator>::ResizeForCopy(param_1 + 0x20,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x20),pvVar1,(longlong)iVar5 * 0xc);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar5 = *(int *)(param_2 + 0x38);
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(param_1 + 0x30,iVar5,0);
    puVar3 = (undefined4 *)(lVar2 + 4);
    puVar4 = *(undefined1 **)(param_1 + 0x30);
    do {
      *puVar4 = *(undefined1 *)(puVar3 + -1);
      *(undefined4 *)(puVar4 + 4) = *puVar3;
      puVar4[8] = *(undefined1 *)(puVar3 + 1);
      *(undefined4 *)(puVar4 + 0xc) = puVar3[2];
      *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(puVar3 + 3);
      *(undefined4 *)(puVar4 + 0x18) = puVar3[5];
      *(undefined4 *)(puVar4 + 0x1c) = puVar3[6];
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 8;
      puVar4 = puVar4 + 0x20;
    } while (iVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar5 = *(int *)(param_2 + 0x48);
  pvVar1 = *(void **)(param_2 + 0x40);
  *(int *)(param_1 + 0x48) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    TArray<FRotator,FDefaultAllocator>::ResizeForCopy(param_1 + 0x40,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x40),pvVar1,(longlong)iVar5 * 0xc);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar5 = *(int *)(param_2 + 0x58);
  pvVar1 = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0x58) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    TArray<FRotator,FDefaultAllocator>::ResizeForCopy(param_1 + 0x50,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x50),pvVar1,(longlong)iVar5 * 0xc);
  }
  return param_1;
}



// FUNCTION 141f6b300 TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode> body=116 status=ok
// SIG undefined TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>(void)

undefined4 *
TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>::
TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>
          (undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 4),_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 141f6b380 TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData> body=248 status=ok
// SIG undefined TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>(void)

undefined4 *
TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>::
TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  FString::FString(param_1 + 4,param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xb);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  FMovieSceneSequenceInstanceDataPtr::FMovieSceneSequenceInstanceDataPtr
            (param_1 + 0x1c,param_2 + 0x1c);
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  uVar1 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x2a] = param_2[0x2a];
  return param_1;
}



// FUNCTION 141f6b480 TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> body=393 status=ok
// SIG undefined TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>(void)

undefined4 *
UE4Tuple_Private::
TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>
::
TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>
          (undefined4 *param_1,undefined4 *param_2)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar5 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar5;
  if (iVar5 == 0) {
    param_1[0xb] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar5,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),_Src,(longlong)iVar5 << 2);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  TArray<FMovieSceneSegment,FDefaultAllocator>::CopyToEmpty<FMovieSceneSegment>
            (param_1 + 0xc,*(undefined8 *)(param_2 + 0xc),param_2[0xe],0,0);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  TMovieSceneEvaluationTree<FSectionEvaluationData>::
  TMovieSceneEvaluationTree<FSectionEvaluationData>(param_1 + 0x12,param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  iVar5 = param_2[0x2c];
  lVar6 = *(longlong *)(param_2 + 0x2a);
  param_1[0x2c] = iVar5;
  if (iVar5 == 0) {
    param_1[0x2d] = 0;
  }
  else {
    TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(param_1 + 0x2a,iVar5,0);
    lVar4 = *(longlong *)(param_1 + 0x2a);
    do {
      *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) & 0xfe;
      *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) | 2;
      FUN_141f6c600(lVar4,lVar6);
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + 0x38;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xfe;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 2;
  FUN_141f6c600(param_1 + 0x2e,param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x3e] = param_1[0x3e] ^ (param_1[0x3e] ^ param_2[0x3e]) & 1;
  param_1[0x3e] = (param_2[0x3e] ^ param_1[0x3e]) & 2 ^ param_1[0x3e];
  return param_1;
}



// FUNCTION 141f6b610 ~FKeyHandleLookupTable body=108 status=ok
// SIG undefined ~FKeyHandleLookupTable(void)

void FKeyHandleLookupTable::~FKeyHandleLookupTable(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  iVar3 = (int)param_1[1];
  lVar2 = *param_1;
  if (iVar3 != 0) {
    pcVar1 = (char *)(lVar2 + 4);
    do {
      if (*pcVar1 != '\0') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return;
}



// FUNCTION 141f6b680 ~FMovieSceneSequenceHierarchy body=148 status=ok
// SIG undefined ~FMovieSceneSequenceHierarchy(void)

void FMovieSceneSequenceHierarchy::~FMovieSceneSequenceHierarchy(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f6b720 operator= body=387 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FMovieSceneEvaluationGroup,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if (param_1 != param_2) {
    plVar4 = (longlong *)*param_1;
    for (iVar6 = (int)param_1[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 4;
    }
    iVar6 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      puVar8 = (undefined8 *)*param_1;
      if (iVar6 != 0) {
        piVar7 = (int *)(lVar2 + 8);
        puVar5 = (undefined4 *)((longlong)puVar8 + 0x1c);
        do {
          *puVar8 = 0;
          iVar1 = *piVar7;
          pvVar3 = *(void **)(piVar7 + -2);
          puVar5[-5] = iVar1;
          if (iVar1 == 0) {
            puVar5[-4] = 0;
          }
          else {
            TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar8,iVar1,0);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar3,(longlong)iVar1 * 0xc);
          }
          *(undefined8 *)(puVar5 + -3) = 0;
          iVar1 = piVar7[4];
          pvVar3 = *(void **)(piVar7 + 2);
          puVar5[-1] = iVar1;
          if (iVar1 == 0) {
            *puVar5 = 0;
          }
          else {
            TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar5 + -3,iVar1,0);
            ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + -3),pvVar3,(longlong)iVar1 * 0xc);
          }
          puVar8 = puVar8 + 4;
          puVar5 = puVar5 + 8;
          piVar7 = piVar7 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 141f6b8b0 operator= body=461 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_1[1];
    plVar7 = (longlong *)*param_1;
    if (iVar6 != 0) {
      plVar4 = plVar7 + 0xc;
      do {
        *(undefined4 *)(plVar4 + 1) = 0;
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar4 + -8);
        if (plVar4[-10] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 0xe;
        plVar4 = plVar4 + 0xe;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      puVar9 = (undefined8 *)*param_1;
      if (iVar6 != 0) {
        lVar5 = (longlong)puVar9 + 0x4c;
        piVar8 = (int *)(lVar2 + 8);
        do {
          *puVar9 = 0;
          iVar1 = *piVar8;
          pvVar3 = *(void **)(piVar8 + -2);
          *(int *)(lVar5 + -0x44) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(lVar5 + -0x40) = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(puVar9,iVar1,0);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar3,(longlong)iVar1 << 2);
          }
          *(undefined8 *)(lVar5 + -0x3c) = 0;
          iVar1 = piVar8[4];
          pvVar3 = *(void **)(piVar8 + 2);
          *(int *)(lVar5 + -0x34) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(lVar5 + -0x30) = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(lVar5 + -0x3c,iVar1,0);
            ::_guard_xfg_dispatch_icall_nop(*(void **)(lVar5 + -0x3c),pvVar3,(longlong)iVar1 << 4);
          }
          *(undefined8 *)(lVar5 + -0x2c) = 0;
          *(undefined8 *)(lVar5 + -0x24) = 0;
          *(undefined8 *)(lVar5 + -0xc) = 0;
          *(undefined8 *)(lVar5 + -4) = 0;
          *(undefined4 *)(lVar5 + 4) = 0xffffffff;
          *(undefined4 *)(lVar5 + 8) = 0;
          *(undefined8 *)(lVar5 + 0x14) = 0;
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          TSet<TTuple<FMovieSceneSequenceID,unsigned_int>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,unsigned_int,0>,FDefaultSetAllocator>
          ::operator=(lVar5 + -0x2c,piVar8 + 6);
          puVar9 = puVar9 + 0xe;
          lVar5 = lVar5 + 0x70;
          piVar8 = piVar8 + 0x1c;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 141f6ba80 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141f6bbdb;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_141f6bbdb:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_141f6a210(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x28,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 141f6bc80 operator= body=502 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141f6bddb;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_141f6bddb:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_141f6a460(param_1,local_res8,(longlong)iStack_4c * 0x1c + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 141f6be80 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141f6bfbd;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_141f6bfbd:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        Emplace<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 141f6c060 operator= body=468 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141f6c19d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_141f6c19d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_141f6a8b0(param_1,local_res8,(longlong)iStack_3c * 0xb8 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 141f6c240 operator= body=468 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141f6c37d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_141f6c37d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_141f6ab40(param_1,local_res8,(longlong)iStack_3c * 0x108 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 141f6c420 operator= body=465 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141f6c55d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_141f6c55d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_141f6add0(param_1,local_res8,(longlong)iStack_3c * 0x20 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 141f6c600 FUN_141f6c600 body=312 status=ok
// SIG undefined FUN_141f6c600(void)

undefined8 * FUN_141f6c600(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  
  if ((*(byte *)(param_2 + 6) & 1) != 0) {
    plVar7 = param_2;
    if ((*(byte *)(param_2 + 6) & 2) == 0) {
      plVar7 = (longlong *)*param_2;
    }
    lVar4 = (**(code **)(*plVar7 + 0x20))();
    plVar7 = *(longlong **)(lVar4 + 0x90);
    bVar3 = *(byte *)(param_1 + 6);
    uVar1 = *(uint *)((longlong)plVar7 + 0xc);
    uVar2 = *(uint *)(plVar7 + 1);
    if ((bVar3 & 1) != 0) {
      puVar8 = param_1;
      if ((bVar3 & 2) == 0) {
        puVar8 = (undefined8 *)*param_1;
      }
      *(byte *)(param_1 + 6) = bVar3 & 0xfe;
      (**(code **)*puVar8)(puVar8,0);
      bVar3 = *(byte *)(param_1 + 6);
      if ((bVar3 & 2) == 0) {
        FMemory::Free();
        bVar3 = *(byte *)(param_1 + 6);
      }
    }
    if ((uVar2 < 0x31) && (uVar1 < 9)) {
      bVar6 = 2;
    }
    else {
      bVar6 = 0;
    }
    bVar3 = bVar3 & 0xfd | bVar6;
    *(byte *)(param_1 + 6) = bVar3;
    if (bVar6 == 0) {
      uVar5 = FMemory::Malloc(uVar2,uVar1);
      *param_1 = uVar5;
      bVar3 = *(byte *)(param_1 + 6);
    }
    *(byte *)(param_1 + 6) = bVar3 | 1;
    puVar8 = param_1;
    if ((bVar3 & 2) == 0) {
      puVar8 = (undefined8 *)*param_1;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar8);
    if ((*(byte *)(param_2 + 6) & 2) == 0) {
      param_2 = (longlong *)*param_2;
    }
    (**(code **)(*plVar7 + 0x98))(plVar7,puVar8,param_2,1);
    return param_1;
  }
  bVar3 = *(byte *)(param_1 + 6);
  if ((bVar3 & 1) != 0) {
    puVar8 = param_1;
    if ((bVar3 & 2) == 0) {
      puVar8 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 6) = bVar3 & 0xfe;
    (**(code **)*puVar8)(puVar8,0);
    if ((*(byte *)(param_1 + 6) & 2) == 0) {
      FMemory::Free(*param_1);
    }
  }
  return param_1;
}



// FUNCTION 141f6c740 operator= body=168 status=ok
// SIG undefined operator=(void)

longlong * FMovieSceneEvaluationField::operator=(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    iVar4 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
      if (iVar4 != 0) {
        puVar2 = (undefined4 *)(lVar1 + 4);
        puVar3 = (undefined1 *)*param_1;
        do {
          *puVar3 = *(undefined1 *)(puVar2 + -1);
          *(undefined4 *)(puVar3 + 4) = *puVar2;
          puVar3[8] = *(undefined1 *)(puVar2 + 1);
          *(undefined4 *)(puVar3 + 0xc) = puVar2[2];
          iVar4 = iVar4 + -1;
          puVar2 = puVar2 + 4;
          puVar3 = puVar3 + 0x10;
        } while (iVar4 != 0);
      }
    }
  }
  TArray<FMovieSceneEvaluationGroup,FDefaultAllocator>::operator=(param_1 + 2,param_2 + 2);
  TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>::operator=(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 141f6c7f0 operator= body=209 status=ok
// SIG undefined operator=(void)

undefined1 * FMovieSceneEvaluationTree::operator=(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  if (puVar1 != (undefined8 *)(param_2 + 0x20)) {
    _Src = *(void **)(param_2 + 0x20);
    iVar2 = *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0x28) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
    }
  }
  if (param_1 + 0x30 != param_2 + 0x30) {
    TArray<FMovieSceneEvaluationTreeNode,FDefaultAllocator>::
    CopyToEmpty<FMovieSceneEvaluationTreeNode>
              (param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38),
               *(undefined4 *)(param_1 + 0x3c),0);
  }
  return param_1;
}



// FUNCTION 141f6c8d0 operator= body=260 status=ok
// SIG undefined operator=(void)

longlong FMovieSceneSubSectionFieldData::operator=(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  
  FMovieSceneEvaluationTree::operator=();
  puVar3 = (undefined8 *)(param_1 + 0x40);
  if (puVar3 != (undefined8 *)(param_2 + 0x40)) {
    iVar5 = *(int *)(param_2 + 0x48);
    _Src = *(void **)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar3,iVar5);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar5 * 0xc);
    }
  }
  plVar6 = (longlong *)(param_1 + 0x50);
  if (plVar6 != (longlong *)(param_2 + 0x50)) {
    iVar5 = *(int *)(param_2 + 0x58);
    lVar1 = *(longlong *)(param_2 + 0x50);
    *(int *)(param_1 + 0x58) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar6,iVar5);
      puVar7 = (undefined4 *)*plVar6;
      if (iVar5 != 0) {
        puVar3 = (undefined8 *)(lVar1 + 8);
        puVar4 = (undefined8 *)(puVar7 + 2);
        do {
          *puVar7 = *(undefined4 *)(puVar3 + -1);
          puVar7 = puVar7 + 7;
          *(undefined4 *)((longlong)puVar4 + -4) = *(undefined4 *)((longlong)puVar3 + -4);
          uVar2 = puVar3[1];
          *puVar4 = *puVar3;
          puVar4[1] = uVar2;
          *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar3 + 2);
          iVar5 = iVar5 + -1;
          puVar3 = (undefined8 *)((longlong)puVar3 + 0x1c);
          puVar4 = (undefined8 *)((longlong)puVar4 + 0x1c);
        } while (iVar5 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 141f6c9e0 operator= body=211 status=ok
// SIG undefined operator=(void)

longlong FMovieSceneTrackFieldData::operator=(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  FMovieSceneEvaluationTree::operator=();
  puVar3 = (undefined8 *)(param_1 + 0x40);
  if (puVar3 != (undefined8 *)(param_2 + 0x40)) {
    iVar1 = *(int *)(param_2 + 0x48);
    pvVar2 = *(void **)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 0xc);
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x50);
  if (puVar3 != (undefined8 *)(param_2 + 0x50)) {
    iVar1 = *(int *)(param_2 + 0x58);
    pvVar2 = *(void **)(param_2 + 0x50);
    *(int *)(param_1 + 0x58) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 << 2);
    }
  }
  return param_1;
}



// FUNCTION 141f6cac0 operator<< body=497 status=ok
// SIG undefined operator<<(void)

void operator<<(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong uVar12;
  
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    piVar8 = (int *)*param_2;
    uVar9 = 0;
    local_48 = 0;
    piVar2 = piVar8 + (longlong)*(int *)(param_2 + 1) * 3;
    local_40 = 0;
    uVar12 = uVar9;
    uVar16 = uVar9;
    iVar13 = 0;
    iVar15 = 0;
    if (piVar8 != piVar2) {
      do {
        iVar13 = piVar8[1];
        if (iVar13 < 1) {
          *piVar8 = -1;
        }
        else {
          iVar15 = *piVar8;
          iVar10 = (int)uVar12;
          *piVar8 = iVar10;
          lVar4 = param_2[2];
          uVar11 = iVar10 + iVar13;
          local_40 = CONCAT44(local_40._4_4_,uVar11);
          if ((int)uVar16 < (int)uVar11) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_48,uVar12);
            uVar16 = local_40 >> 0x20;
            uVar9 = local_48;
            uVar11 = (uint)local_40;
          }
          uVar12 = (ulonglong)uVar11;
          lVar14 = (longlong)iVar15;
          puVar7 = (undefined1 *)(lVar14 * 0x20 + lVar4);
          if (iVar13 != 0) {
            puVar5 = (undefined4 *)(puVar7 + ((iVar10 - lVar14) * 0x20 - lVar4) + 4 + uVar9);
            lVar4 = ((lVar14 - iVar10) * 0x20 - uVar9) + lVar4;
            do {
              uVar3 = *puVar7;
              puVar7 = puVar7 + 0x20;
              *(undefined1 *)(puVar5 + -1) = uVar3;
              *puVar5 = *(undefined4 *)(lVar4 + (longlong)puVar5);
              *(undefined1 *)(puVar5 + 1) = *(undefined1 *)((longlong)puVar5 + lVar4 + 4);
              puVar5[2] = *(undefined4 *)(lVar4 + 8 + (longlong)puVar5);
              *(undefined8 *)(puVar5 + 3) = *(undefined8 *)((longlong)puVar5 + lVar4 + 0xc);
              puVar5[5] = *(undefined4 *)((longlong)puVar5 + lVar4 + 0x14);
              puVar5[6] = *(undefined4 *)((longlong)puVar5 + lVar4 + 0x18);
              puVar5 = puVar5 + 8;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        piVar8[2] = piVar8[1];
        piVar8 = piVar8 + 3;
      } while (piVar8 != piVar2);
      iVar13 = (int)uVar12;
      iVar15 = (int)uVar16;
      if ((int)uVar16 != (int)uVar12) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (&local_48,uVar12);
        uVar9 = local_48;
        iVar13 = (uint)local_40;
        iVar15 = local_40._4_4_;
      }
    }
    puVar1 = param_2 + 2;
    if (puVar1 == &local_48) {
      if (uVar9 != 0) {
        FMemory::Free(uVar9);
      }
    }
    else {
      if (*puVar1 != 0) {
        FMemory::Free();
      }
      *puVar1 = uVar9;
      *(int *)(param_2 + 3) = iVar13;
      *(int *)((longlong)param_2 + 0x1c) = iVar15;
    }
  }
  FArchive::UsingCustomVersion(param_1,&DAT_1464b00f8);
  uVar6 = FUN_141f6d430(param_1,param_2);
  FUN_141f6d750(uVar6,param_2 + 2);
  return;
}



// FUNCTION 141f6ccc0 operator<< body=458 status=ok
// SIG undefined operator<<(void)

void operator<<(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar16;
  undefined4 *puVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong uVar15;
  
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    piVar11 = (int *)*param_2;
    uVar12 = 0;
    local_48 = 0;
    piVar2 = piVar11 + (longlong)*(int *)(param_2 + 1) * 3;
    local_40 = 0;
    uVar15 = uVar12;
    uVar20 = uVar12;
    iVar16 = 0;
    iVar19 = 0;
    if (piVar11 != piVar2) {
      do {
        iVar16 = piVar11[1];
        if (iVar16 < 1) {
          *piVar11 = -1;
        }
        else {
          iVar19 = *piVar11;
          iVar13 = (int)uVar15;
          *piVar11 = iVar13;
          lVar5 = param_2[2];
          uVar14 = iVar13 + iVar16;
          local_40 = CONCAT44(local_40._4_4_,uVar14);
          if ((int)uVar20 < (int)uVar14) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
            ResizeGrow(&local_48,uVar15);
            uVar20 = local_40 >> 0x20;
            uVar12 = local_48;
            uVar14 = (uint)local_40;
          }
          uVar15 = (ulonglong)uVar14;
          lVar18 = (longlong)iVar19;
          puVar17 = (undefined4 *)(lVar18 * 0x1c + lVar5);
          if (iVar16 != 0) {
            lVar10 = ((lVar18 - iVar13) * 0x1c - uVar12) + lVar5;
            puVar8 = (undefined4 *)
                     ((longlong)puVar17 + ((iVar13 - lVar18) * 0x1c - lVar5) + uVar12 + 8);
            do {
              uVar4 = *puVar17;
              puVar17 = puVar17 + 7;
              puVar8[-2] = uVar4;
              puVar8[-1] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar8);
              puVar3 = (undefined4 *)(lVar10 + (longlong)puVar8);
              uVar4 = puVar3[1];
              uVar6 = puVar3[2];
              uVar7 = puVar3[3];
              *puVar8 = *puVar3;
              puVar8[1] = uVar4;
              puVar8[2] = uVar6;
              puVar8[3] = uVar7;
              *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(lVar10 + -0xc + (longlong)(puVar8 + 7));
              iVar16 = iVar16 + -1;
              puVar8 = puVar8 + 7;
            } while (iVar16 != 0);
          }
        }
        piVar11[2] = piVar11[1];
        piVar11 = piVar11 + 3;
      } while (piVar11 != piVar2);
      iVar16 = (int)uVar15;
      iVar19 = (int)uVar20;
      if ((int)uVar20 != (int)uVar15) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                  (&local_48,uVar15);
        uVar12 = local_48;
        iVar16 = (uint)local_40;
        iVar19 = local_40._4_4_;
      }
    }
    puVar1 = param_2 + 2;
    if (puVar1 == &local_48) {
      if (uVar12 != 0) {
        FMemory::Free(uVar12);
      }
    }
    else {
      if (*puVar1 != 0) {
        FMemory::Free();
      }
      *puVar1 = uVar12;
      *(int *)(param_2 + 3) = iVar16;
      *(int *)((longlong)param_2 + 0x1c) = iVar19;
    }
  }
  FArchive::UsingCustomVersion(param_1,&DAT_1464b00f8);
  uVar9 = FUN_141f6d430(param_1,param_2);
  FUN_141f6d900(uVar9,param_2 + 2);
  return;
}



// FUNCTION 141f6ce90 operator<< body=420 status=ok
// SIG undefined operator<<(void)

void operator<<(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar13;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong uVar12;
  
  uVar4 = FUN_141f6d1d0();
  lVar5 = operator<<(uVar4,param_2 + 0x20);
  if ((*(byte *)(lVar5 + 0x28) & 2) != 0) {
    piVar6 = *(int **)(param_2 + 0x40);
    uVar8 = 0;
    local_48 = 0;
    piVar1 = piVar6 + (longlong)*(int *)(param_2 + 0x48) * 3;
    local_40 = 0;
    uVar12 = uVar8;
    uVar13 = uVar8;
    iVar11 = 0;
    iVar7 = 0;
    if (piVar6 != piVar1) {
      do {
        iVar11 = piVar6[1];
        if (iVar11 < 1) {
          *piVar6 = -1;
        }
        else {
          iVar7 = *piVar6;
          iVar9 = (int)uVar12;
          *piVar6 = iVar9;
          lVar3 = *(longlong *)(param_2 + 0x50);
          uVar10 = iVar9 + iVar11;
          local_40 = CONCAT44(local_40._4_4_,uVar10);
          if ((int)uVar8 < (int)uVar10) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_48,uVar12);
            uVar8 = local_40 >> 0x20;
            uVar13 = local_48;
            uVar10 = (uint)local_40;
          }
          uVar12 = (ulonglong)uVar10;
          _guard_xfg_dispatch_icall_nop
                    ((void *)(uVar13 + (longlong)iVar9 * 0xc),
                     (void *)(lVar3 + (longlong)iVar7 * 0xc),(longlong)iVar11 * 0xc);
        }
        piVar6[2] = piVar6[1];
        piVar6 = piVar6 + 3;
      } while (piVar6 != piVar1);
      iVar11 = (int)uVar12;
      iVar7 = (int)uVar8;
      if ((int)uVar8 != (int)uVar12) {
        TArray<FRotator,FDefaultAllocator>::ResizeTo(&local_48,uVar12);
        uVar13 = local_48;
        iVar11 = (uint)local_40;
        iVar7 = local_40._4_4_;
      }
    }
    puVar2 = (ulonglong *)(param_2 + 0x50);
    if (puVar2 == &local_48) {
      if (uVar13 != 0) {
        FMemory::Free(uVar13);
      }
    }
    else {
      if (*puVar2 != 0) {
        FMemory::Free();
      }
      *puVar2 = uVar13;
      *(int *)(param_2 + 0x58) = iVar11;
      *(int *)(param_2 + 0x5c) = iVar7;
    }
  }
  FArchive::UsingCustomVersion(lVar5,&DAT_1464b00f8);
  uVar4 = FUN_141f6d5c0(lVar5,(undefined8 *)(param_2 + 0x40));
  FUN_141f6dc30(uVar4,param_2 + 0x50);
  return;
}



// FUNCTION 141f6d040 FUN_141f6d040 body=276 status=ok
// SIG undefined FUN_141f6d040(void)

longlong * FUN_141f6d040(longlong *param_1,undefined4 *param_2)

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
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 2,4);
  }
  return param_1;
}



// FUNCTION 141f6d160 FUN_141f6d160 body=111 status=ok
// SIG undefined FUN_141f6d160(void)

longlong * FUN_141f6d160(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2,4);
  }
  return param_1;
}



// FUNCTION 141f6d1d0 FUN_141f6d1d0 body=275 status=ok
// SIG undefined FUN_141f6d1d0(void)

void FUN_141f6d1d0(longlong *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  plVar4 = (longlong *)FUN_140871cc0(param_1,param_2 + 4);
  puVar2 = *(undefined1 **)plVar4[1];
  if ((undefined1 *)((undefined8 *)plVar4[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 8,1);
  }
  else {
    param_2[8] = *puVar2;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
  }
  uVar5 = FUN_140871cc0(plVar4,param_2 + 0xc);
  puVar1 = (undefined4 *)(param_2 + 0x14);
  plVar4 = (longlong *)FUN_141f6d160(uVar5);
  puVar3 = *(undefined4 **)plVar4[1];
  if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar3 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,puVar1,4);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,puVar1,4);
    }
  }
  else {
    *puVar1 = *puVar3;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
  }
  uVar5 = FUN_141f6d160(plVar4,param_2 + 0x18);
  FUN_141f6d160(uVar5,param_2 + 0x1c);
  return;
}



// FUNCTION 141f6d2f0 FUN_141f6d2f0 body=156 status=ok
// SIG undefined FUN_141f6d2f0(void)

longlong * FUN_141f6d2f0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  (**(code **)(*param_1 + 0x10))();
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_2 + 8);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  puVar1 = *(undefined1 **)param_1[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *(undefined1 *)(param_2 + 0x18) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 0x18),1);
  return param_1;
}



// FUNCTION 141f6d390 FUN_141f6d390 body=146 status=ok
// SIG undefined FUN_141f6d390(void)

longlong * FUN_141f6d390(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0068);
  iVar2 = FArchive::CustomVer(param_1,&DAT_1464b0068);
  if (0x12 < iVar2) {
    puVar1 = *(undefined4 **)param_1[1];
    if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
      *param_2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      return param_1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  return param_1;
}



// FUNCTION 141f6d430 FUN_141f6d430 body=393 status=ok
// SIG undefined FUN_141f6d430(void)

longlong * FUN_141f6d430(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x155555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141f6d040(param_1,*param_2 + (longlong)iVar4 * 0xc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141f6d040(param_1,*param_2 + (longlong)iVar2 * 0xc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141f6d5c0 FUN_141f6d5c0 body=393 status=ok
// SIG undefined FUN_141f6d5c0(void)

longlong * FUN_141f6d5c0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x155555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141f6d040(param_1,*param_2 + (longlong)iVar4 * 0xc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FRotator,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141f6d040(param_1,*param_2 + (longlong)iVar2 * 0xc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141f6d750 FUN_141f6d750 body=421 status=ok
// SIG undefined FUN_141f6d750(void)

longlong * FUN_141f6d750(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  puVar6 = (undefined1 *)0x0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x80000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141f6d1d0(param_1,(longlong)(int)puVar6 * 0x20 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined1 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined1 *)((longlong)iVar2 * 0x20 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      puVar4[8] = 0;
      *(undefined4 *)(puVar4 + 0xc) = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      puVar5 = puVar4;
    }
    FUN_141f6d1d0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined1 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141f6d900 FUN_141f6d900 body=405 status=ok
// SIG undefined FUN_141f6d900(void)

longlong * FUN_141f6d900(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
  puVar6 = (undefined4 *)0x0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x92492 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141f6d2f0(param_1,(longlong)(int)puVar6 * 0x1c + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar4 = (undefined4 *)((longlong)iVar2 * 0x1c + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xffffffff;
      *(undefined8 *)(puVar4 + 1) = 0;
      *(undefined8 *)(puVar4 + 3) = 0;
      puVar4[5] = 0;
      *(undefined1 *)(puVar4 + 6) = 0;
      puVar5 = puVar4;
    }
    FUN_141f6d2f0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141f6daa0 FUN_141f6daa0 body=389 status=ok
// SIG undefined FUN_141f6daa0(void)

longlong * FUN_141f6daa0(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x400000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141f6d390(param_1,*param_2 + (longlong)(int)puVar6 * 4);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 4);
    puVar5 = puVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xffffffff;
      puVar5 = puVar1;
    }
    FUN_141f6d390(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141f6dc30 FUN_141f6dc30 body=428 status=ok
// SIG undefined FUN_141f6dc30(void)

longlong * FUN_141f6dc30(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int local_res8 [2];
  undefined4 *puVar10;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  puVar8 = (undefined4 *)0x0;
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
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x155556)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar5 = *param_2;
          uVar6 = FSectionEvaluationData::StaticStruct();
          FUN_141725e50(uVar6,param_1,lVar5 + (longlong)(int)puVar8 * 0xc,0);
          uVar9 = (int)puVar8 + 1;
          puVar8 = (undefined4 *)(ulonglong)uVar9;
        } while ((int)uVar9 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FRotator,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    puVar10 = puVar8;
    if (0 < local_res8[0]) {
      do {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0xc);
        puVar7 = puVar8;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0xffffffff;
          puVar1[1] = 0x80000000;
          *(undefined1 *)(puVar1 + 2) = 0;
          puVar7 = puVar1;
        }
        uVar6 = FSectionEvaluationData::StaticStruct();
        FUN_141725e50(uVar6,param_1,puVar7,0);
        uVar9 = (int)puVar10 + 1;
        puVar10 = (undefined4 *)(ulonglong)uVar9;
      } while ((int)uVar9 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 141f6ddf0 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneBoolChannel::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 6);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144f215f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141f6de50 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneByteChannel::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 7);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144f215f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141f6deb0 FUN_141f6deb0 body=43 status=ok
// SIG undefined FUN_141f6deb0(void)

undefined8 * FUN_141f6deb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f215f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141f6dee0 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneFloatChannel::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 7);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144f215f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 141f6df40 `scalar_deleting_destructor' body=63 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneBuiltInEasingFunction::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144f1abf8;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141f6dfa0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141f6e050 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
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



// FUNCTION 141f6e100 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
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



// FUNCTION 141f6e1b0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
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



// FUNCTION 141f6e260 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
ConditionalRehash(longlong param_1,uint param_2,char param_3)

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



// FUNCTION 141f6e4c0 Construct body=68 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x70);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  return;
}



// FUNCTION 141f6e510 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x2f0);
  FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate(param_2);
  return;
}



// FUNCTION 141f6e670 FUN_141f6e670 body=99 status=ok
// SIG undefined FUN_141f6e670(void)

void FUN_141f6e670(undefined8 param_1,undefined1 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *param_2 = 2;
  param_2[8] = 2;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 141f6e6f0 Construct body=116 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>::Construct
               (undefined8 param_1,undefined4 *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xa8);
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_2[0x22] = 0xffffffff;
  param_2[0x23] = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  param_2[0x28] = 0;
  return;
}



// FUNCTION 141f6e790 Copy body=268 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneBinding>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_3 + 0x10);
    do {
      uVar4 = *(undefined4 *)((longlong)puVar7 + -0xc);
      uVar5 = *(undefined4 *)(puVar7 + -1);
      uVar6 = *(undefined4 *)((longlong)puVar7 + -4);
      puVar1 = (undefined8 *)(param_2 + 4);
      *param_2 = *(undefined4 *)(puVar7 + -2);
      param_2[1] = uVar4;
      param_2[2] = uVar5;
      param_2[3] = uVar6;
      if (puVar1 != puVar7) {
        iVar2 = *(int *)(puVar7 + 1);
        pvVar3 = (void *)*puVar7;
        param_2[6] = iVar2;
        if ((iVar2 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
        }
      }
      puVar1 = (undefined8 *)(param_2 + 8);
      if (puVar1 != puVar7 + 2) {
        iVar2 = *(int *)(puVar7 + 3);
        pvVar3 = (void *)puVar7[2];
        param_2[10] = iVar2;
        if ((iVar2 == 0) && (param_2[0xb] == 0)) {
          param_2[0xb] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      puVar7 = puVar7 + 6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6e8f0 Copy body=229 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneBoolChannel>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      TArray<int,FDefaultAllocator>::operator=(param_2 + 8,param_3);
      puVar1 = (undefined8 *)(param_2 + 0x20);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_3 + 0x11);
      if (puVar1 != (undefined8 *)(param_3 + 0x18)) {
        iVar2 = *(int *)(param_3 + 0x20);
        _Src = *(void **)(param_3 + 0x18);
        *(int *)(param_2 + 0x28) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2);
        }
      }
      FKeyHandleLookupTable::Reset(param_2 + 0x30);
      param_3 = param_3 + 0x90;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x90;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6e9e0 Copy body=241 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneByteChannel>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      TArray<int,FDefaultAllocator>::operator=(param_2 + 8,param_3);
      puVar1 = (undefined8 *)(param_2 + 0x20);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_3 + 0x11);
      if (puVar1 != (undefined8 *)(param_3 + 0x18)) {
        iVar2 = *(int *)(param_3 + 0x20);
        _Src = *(void **)(param_3 + 0x18);
        *(int *)(param_2 + 0x28) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2);
        }
      }
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x28);
      FKeyHandleLookupTable::Reset(param_2 + 0x38);
      param_3 = param_3 + 0x98;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x98;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6eae0 FUN_141f6eae0 body=194 status=ok
// SIG undefined FUN_141f6eae0(void)

undefined8 FUN_141f6eae0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x8c);
    do {
      TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
      ::operator=(puVar1 + -0x23,param_3 + -0x8c + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -0xf) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x3c);
      *(undefined8 *)(puVar1 + -0xd) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x34);
      *(undefined8 *)(puVar1 + -0xb) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x2c);
      *(undefined8 *)(puVar1 + -9) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x24);
      *(undefined1 *)(puVar1 + -7) = *(undefined1 *)((longlong)puVar1 + param_3 + -0x1c);
      puVar1[-6] = *(undefined4 *)(param_3 + -0x18 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -5) = *(undefined1 *)(param_3 + -0x14 + (longlong)puVar1);
      puVar1[-4] = *(undefined4 *)(param_3 + -0x10 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -3) = *(undefined1 *)((longlong)puVar1 + param_3 + -0xc);
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 0x24;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6ec20 FUN_141f6ec20 body=368 status=ok
// SIG undefined FUN_141f6ec20(void)

undefined8 FUN_141f6ec20(undefined8 param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    puVar9 = param_2 + 7;
    if ((*(byte *)(param_3 + 6) & 1) == 0) {
      bVar3 = *(byte *)(param_2 + 6);
      if ((bVar3 & 1) != 0) {
        puVar8 = param_2;
        if ((bVar3 & 2) == 0) {
          puVar8 = (undefined8 *)*param_2;
        }
        *(byte *)(param_2 + 6) = bVar3 & 0xfe;
        (**(code **)*puVar8)(puVar8,0);
        if ((*(byte *)(param_2 + 6) & 2) == 0) {
          FMemory::Free(*param_2);
        }
      }
    }
    else {
      plVar7 = param_3;
      if ((*(byte *)(param_3 + 6) & 2) == 0) {
        plVar7 = (longlong *)*param_3;
      }
      lVar4 = (**(code **)(*plVar7 + 0x20))();
      plVar7 = *(longlong **)(lVar4 + 0x90);
      bVar3 = *(byte *)(param_2 + 6);
      uVar1 = *(uint *)((longlong)plVar7 + 0xc);
      uVar2 = *(uint *)(plVar7 + 1);
      if ((bVar3 & 1) != 0) {
        puVar8 = param_2;
        if ((bVar3 & 2) == 0) {
          puVar8 = (undefined8 *)*param_2;
        }
        *(byte *)(param_2 + 6) = bVar3 & 0xfe;
        (**(code **)*puVar8)(puVar8,0);
        bVar3 = *(byte *)(param_2 + 6);
        if ((bVar3 & 2) == 0) {
          FMemory::Free();
          bVar3 = *(byte *)(param_2 + 6);
        }
      }
      if ((uVar2 < 0x31) && (uVar1 < 9)) {
        bVar6 = 2;
      }
      else {
        bVar6 = 0;
      }
      bVar3 = bVar3 & 0xfd | bVar6;
      *(byte *)(param_2 + 6) = bVar3;
      if (bVar6 == 0) {
        uVar5 = FMemory::Malloc(uVar2,uVar1);
        *param_2 = uVar5;
        bVar3 = *(byte *)(param_2 + 6);
      }
      *(byte *)(param_2 + 6) = bVar3 | 1;
      if ((bVar3 & 2) == 0) {
        param_2 = (undefined8 *)*param_2;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
      plVar10 = param_3;
      if ((*(byte *)(param_3 + 6) & 2) == 0) {
        plVar10 = (longlong *)*param_3;
      }
      (**(code **)(*plVar7 + 0x98))(plVar7,param_2,plVar10,1);
    }
    param_3 = param_3 + 7;
    param_2 = puVar9;
  }
  return 1;
}



// FUNCTION 141f6ed90 Copy body=240 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>::Copy
          (undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    do {
      if (param_2 != (longlong *)(param_3 + -0x10)) {
        iVar5 = *(int *)(param_3 + -8);
        lVar2 = *(longlong *)(param_3 + -0x10);
        *(int *)(param_2 + 1) = iVar5;
        if ((iVar5 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar5);
          if (iVar5 != 0) {
            puVar3 = (undefined4 *)(lVar2 + 4);
            puVar4 = (undefined1 *)*param_2;
            do {
              *puVar4 = *(undefined1 *)(puVar3 + -1);
              *(undefined4 *)(puVar4 + 4) = *puVar3;
              puVar4[8] = *(undefined1 *)(puVar3 + 1);
              puVar1 = puVar3 + 2;
              puVar3 = puVar3 + 4;
              *(undefined4 *)(puVar4 + 0xc) = *puVar1;
              iVar5 = iVar5 + -1;
              puVar4 = puVar4 + 0x10;
            } while (iVar5 != 0);
          }
        }
      }
      TArray<FMovieSceneEvaluationGroup,FDefaultAllocator>::operator=(param_2 + 2,param_3);
      TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>::operator=(param_2 + 4,param_3 + 0x10)
      ;
      param_3 = param_3 + 0x30;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6ee80 Copy body=260 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroup>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      if (param_2 != puVar3 + -2) {
        iVar1 = *(int *)(puVar3 + -1);
        pvVar2 = (void *)puVar3[-2];
        *(int *)(param_2 + 1) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar2,(longlong)iVar1 * 0xc);
        }
      }
      puVar4 = param_2 + 2;
      if (puVar4 != puVar3) {
        iVar1 = *(int *)(puVar3 + 1);
        pvVar2 = (void *)*puVar3;
        *(int *)(param_2 + 3) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 * 0xc);
        }
      }
      puVar3 = puVar3 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6ef90 Copy body=271 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 0x10);
    do {
      if (param_2 != puVar4 + -2) {
        iVar2 = *(int *)(puVar4 + -1);
        pvVar3 = (void *)puVar4[-2];
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar3,(longlong)iVar2 << 2);
        }
      }
      puVar1 = param_2 + 2;
      if (puVar1 != puVar4) {
        iVar2 = *(int *)(puVar4 + 1);
        pvVar3 = (void *)*puVar4;
        *(int *)(param_2 + 3) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 4);
        }
      }
      TSet<TTuple<FMovieSceneSequenceID,unsigned_int>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,unsigned_int,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 4,puVar4 + 2);
      puVar4 = puVar4 + 0xe;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6f0a0 Copy body=274 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 400;
    do {
      TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
      ::operator=(param_2 + -400,param_3 + -400 + param_2);
      TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
      ::operator=(param_2 + -0x140,param_3 + -0x140 + param_2);
      FMovieSceneEvaluationField::operator=(param_2 + -0xf0,param_3 + -0xf0 + param_2);
      TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
      ::operator=(param_2 + -0xc0,param_3 + -0xc0 + param_2);
      TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
      ::operator=(param_2 + -0x70,param_3 + -0x70 + param_2);
      puVar1 = (undefined4 *)(param_3 + -0x20 + param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + -0x20) = *puVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
      ::operator=(param_2,param_3 + param_2);
      TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 0x50,param_3 + 0x50 + param_2);
      FMovieSceneTrackFieldData::operator=(param_2 + 0xa0,param_3 + 0xa0 + param_2);
      FMovieSceneSubSectionFieldData::operator=(param_2 + 0x100,param_3 + 0x100 + param_2);
      param_2 = param_2 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6f1c0 Copy body=256 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrackSegments>::Copy
          (undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_4 != 0) {
    plVar3 = (longlong *)(param_3 + 0x10);
    do {
      if (param_2 != plVar3 + -2) {
        iVar4 = (int)plVar3[-1];
        _Src = (void *)plVar3[-2];
        *(int *)(param_2 + 1) = iVar4;
        if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar4);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar4 << 2);
        }
      }
      plVar1 = param_2 + 2;
      if (plVar1 != plVar3) {
        iVar4 = (int)param_2[3];
        if (iVar4 != 0) {
          plVar2 = (longlong *)(*plVar1 + 0x48);
          do {
            if (*plVar2 != 0) {
              FMemory::Free();
            }
            plVar2 = plVar2 + 0xb;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        TArray<FMovieSceneSegment,FDefaultAllocator>::CopyToEmpty<FMovieSceneSegment>
                  (plVar1,*plVar3,(int)plVar3[1],*(undefined4 *)((longlong)param_2 + 0x1c),0);
      }
      plVar3 = plVar3 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6f2c0 Copy body=338 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneFloatChannel>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if (param_4 != 0) {
    puVar6 = (undefined1 *)(param_3 + 8);
    do {
      *(undefined1 *)(param_2 + 8) = *puVar6;
      *(undefined1 *)(param_2 + 9) = puVar6[1];
      TArray<int,FDefaultAllocator>::operator=(param_2 + 0x10,puVar6 + 8);
      plVar1 = (longlong *)(param_2 + 0x20);
      if (plVar1 != (longlong *)(puVar6 + 0x18)) {
        iVar7 = *(int *)(puVar6 + 0x20);
        lVar3 = *(longlong *)(puVar6 + 0x18);
        *(int *)(param_2 + 0x28) = iVar7;
        if ((iVar7 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar7);
          puVar8 = (undefined4 *)*plVar1;
          if (iVar7 != 0) {
            puVar4 = (undefined1 *)(lVar3 + 0x10);
            puVar5 = puVar8 + 4;
            do {
              *puVar8 = *(undefined4 *)(puVar4 + -0x10);
              puVar8 = puVar8 + 7;
              *(undefined1 *)(puVar5 + -3) = puVar4[-0xc];
              *(undefined1 *)((longlong)puVar5 + -0xb) = puVar4[-0xb];
              puVar5[-2] = *(undefined4 *)(puVar4 + -8);
              puVar5[-1] = *(undefined4 *)(puVar4 + -4);
              *(undefined1 *)puVar5 = *puVar4;
              puVar5[1] = *(undefined4 *)(puVar4 + 4);
              puVar5[2] = *(undefined4 *)(puVar4 + 8);
              iVar7 = iVar7 + -1;
              puVar4 = puVar4 + 0x1c;
              puVar5 = puVar5 + 7;
            } while (iVar7 != 0);
          }
        }
      }
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar6 + 0x28);
      *(undefined1 *)(param_2 + 0x34) = puVar6[0x2c];
      FKeyHandleLookupTable::Reset(param_2 + 0x38);
      puVar2 = (undefined8 *)(puVar6 + 0x90);
      puVar6 = puVar6 + 0xa0;
      *(undefined8 *)(param_2 + 0x98) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xa0;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6f480 Copy body=62 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FMovieSceneKeyHandleMap>::Copy
          (undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FKeyHandleLookupTable::Reset(param_2);
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 141f6f500 Copy body=317 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneSubSectionFieldData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  
  if (param_4 != 0) {
    plVar8 = (longlong *)(param_3 + 0x50);
    do {
      FMovieSceneEvaluationTree::operator=(param_2,plVar8 + -10);
      plVar7 = (longlong *)(param_2 + 0x40);
      if (plVar7 != plVar8 + -2) {
        iVar6 = (int)plVar8[-1];
        _Src = (void *)plVar8[-2];
        *(int *)(param_2 + 0x48) = iVar6;
        if ((iVar6 == 0) && (*(int *)(param_2 + 0x4c) == 0)) {
          *(undefined4 *)(param_2 + 0x4c) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(plVar7,iVar6);
          ::_guard_xfg_dispatch_icall_nop((void *)*plVar7,_Src,(longlong)iVar6 * 0xc);
        }
      }
      plVar7 = (longlong *)(param_2 + 0x50);
      if (plVar7 != plVar8) {
        iVar6 = (int)plVar8[1];
        lVar2 = *plVar8;
        *(int *)(param_2 + 0x58) = iVar6;
        if ((iVar6 == 0) && (*(int *)(param_2 + 0x5c) == 0)) {
          *(undefined4 *)(param_2 + 0x5c) = 0;
        }
        else {
          TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar7,iVar6);
          puVar9 = (undefined4 *)*plVar7;
          if (iVar6 != 0) {
            puVar4 = (undefined8 *)(lVar2 + 8);
            puVar5 = (undefined8 *)(puVar9 + 2);
            do {
              *puVar9 = *(undefined4 *)(puVar4 + -1);
              puVar9 = puVar9 + 7;
              *(undefined4 *)((longlong)puVar5 + -4) = *(undefined4 *)((longlong)puVar4 + -4);
              uVar3 = puVar4[1];
              *puVar5 = *puVar4;
              puVar5[1] = uVar3;
              puVar1 = puVar4 + 2;
              puVar4 = (undefined8 *)((longlong)puVar4 + 0x1c);
              *(undefined1 *)(puVar5 + 2) = *(undefined1 *)puVar1;
              iVar6 = iVar6 + -1;
              puVar5 = (undefined8 *)((longlong)puVar5 + 0x1c);
            } while (iVar6 != 0);
          }
        }
      }
      plVar8 = plVar8 + 0xc;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x60;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6f690 Copy body=98 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x58;
    do {
      *(undefined4 *)(param_2 + -0x58) = *(undefined4 *)(param_3 + -0x58 + param_2);
      TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
      ::operator=(param_2 + -0x50,param_3 + -0x50 + param_2);
      TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
      ::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6f700 Copy body=271 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneTrackFieldData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x50);
    do {
      FMovieSceneEvaluationTree::operator=(param_2,puVar3 + -10);
      puVar4 = (undefined8 *)(param_2 + 0x40);
      if (puVar4 != puVar3 + -2) {
        iVar1 = *(int *)(puVar3 + -1);
        pvVar2 = (void *)puVar3[-2];
        *(int *)(param_2 + 0x48) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x4c) == 0)) {
          *(undefined4 *)(param_2 + 0x4c) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 * 0xc);
        }
      }
      puVar4 = (undefined8 *)(param_2 + 0x50);
      if (puVar4 != puVar3) {
        iVar1 = *(int *)(puVar3 + 1);
        pvVar2 = (void *)*puVar3;
        *(int *)(param_2 + 0x58) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x5c) == 0)) {
          *(undefined4 *)(param_2 + 0x5c) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 << 2);
        }
      }
      puVar3 = puVar3 + 0xc;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x60;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6f810 Copy body=295 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneTrackLabels>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      plVar2 = (longlong *)*param_2;
      for (iVar4 = *(int *)(param_2 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
      }
      iVar4 = *(int *)(param_3 + 1);
      puVar5 = (undefined8 *)*param_3;
      *(int *)(param_2 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar4);
        puVar3 = (undefined8 *)*param_2;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar3 = 0;
          iVar1 = *(int *)(puVar5 + 1);
          _Src = (void *)*puVar5;
          *(int *)(puVar3 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
          }
          puVar3 = puVar3 + 2;
          puVar5 = puVar5 + 2;
        }
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 141f6f940 Copy body=275 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSectionEvaluationDataTree>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x50);
    do {
      FMovieSceneEvaluationTree::operator=(param_2,puVar3 + -10);
      puVar4 = (undefined8 *)(param_2 + 0x40);
      if (puVar4 != puVar3 + -2) {
        iVar1 = *(int *)(puVar3 + -1);
        pvVar2 = (void *)puVar3[-2];
        *(int *)(param_2 + 0x48) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x4c) == 0)) {
          *(undefined4 *)(param_2 + 0x4c) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 * 0xc);
        }
      }
      puVar4 = (undefined8 *)(param_2 + 0x50);
      if (puVar4 != puVar3) {
        iVar1 = *(int *)(puVar3 + 1);
        pvVar2 = (void *)*puVar3;
        *(int *)(param_2 + 0x58) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x5c) == 0)) {
          *(undefined4 *)(param_2 + 0x5c) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 * 0xc);
        }
      }
      puVar3 = puVar3 + 0xc;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x60;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f6fa60 FUN_141f6fa60 body=78 status=ok
// SIG undefined FUN_141f6fa60(void)

void FUN_141f6fa60(undefined8 param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,0);
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f6fab0 FUN_141f6fab0 body=64 status=ok
// SIG undefined FUN_141f6fab0(void)

void FUN_141f6fab0(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_2 + 6);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_2;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_2;
    }
    *(byte *)(param_2 + 6) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_2 + 6) & 2) == 0) {
      FMemory::Free(*param_2);
      return;
    }
  }
  return;
}



// FUNCTION 141f6faf0 Destruct body=51 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>::
  ~TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>(param_2 + 4);
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_2 + 2);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f6fb30 Destruct body=81 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 0xd) = 0;
  if (param_2[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2 + 4);
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f6fbb0 Destruct body=42 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrackSegments>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  TArray<FMovieSceneSegment,FDefaultAllocator>::~TArray<FMovieSceneSegment,FDefaultAllocator>
            (param_2 + 2);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f6fbf0 Destruct body=76 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FMovieSceneSubSectionFieldData>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f6fc40 Destruct body=89 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>::Destruct
               (undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0xa0) = 0;
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FMemory::Free();
  }
  FUN_1407f06d0(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2 + 8);
  return;
}



// FUNCTION 141f6fca0 EEvaluationMethod_StaticEnum body=85 status=ok
// SIG undefined EEvaluationMethod_StaticEnum(void)

void EEvaluationMethod_StaticEnum(void)

{
  if (DAT_146aca2e8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    DAT_146aca2e8 = GetStaticEnum(FUN_141f72200,DAT_146aca3d8,L"EEvaluationMethod");
  }
  return;
}



// FUNCTION 141f6fd00 EMovieSceneBlendType_StaticEnum body=85 status=ok
// SIG undefined EMovieSceneBlendType_StaticEnum(void)

void EMovieSceneBlendType_StaticEnum(void)

{
  if (DAT_146aca2f8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    DAT_146aca2f8 = GetStaticEnum(FUN_141f72230,DAT_146aca3d8,L"EMovieSceneBlendType");
  }
  return;
}



// FUNCTION 141f6fd60 EMovieSceneBuiltInEasing_StaticEnum body=85 status=ok
// SIG undefined EMovieSceneBuiltInEasing_StaticEnum(void)

void EMovieSceneBuiltInEasing_StaticEnum(void)

{
  if (DAT_146aca2f0 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    DAT_146aca2f0 = GetStaticEnum(FUN_141f72260,DAT_146aca3d8,L"EMovieSceneBuiltInEasing");
  }
  return;
}



// FUNCTION 141f6fdc0 EMovieSceneKeyInterpolation_StaticEnum body=85 status=ok
// SIG undefined EMovieSceneKeyInterpolation_StaticEnum(void)

void EMovieSceneKeyInterpolation_StaticEnum(void)

{
  if (DAT_146aca2e0 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    DAT_146aca2e0 = GetStaticEnum(FUN_141f72290,DAT_146aca3d8,L"EMovieSceneKeyInterpolation");
  }
  return;
}



// FUNCTION 141f6fe20 Empty body=194 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<TSetElement<int>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::TIterator::TIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack
                ((longlong)local_1c * 0x108 + 8 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<264,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 141f6fef0 Empty body=404 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_141f6ffc1;
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
LAB_141f6ffc1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x20 + *param_1) != 0) {
        FMemory::Free();
      }
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



// FUNCTION 141f70090 FUN_141f70090 body=87 status=ok
// SIG undefined FUN_141f70090(void)

undefined4 FUN_141f70090(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res1c = 0;
  lVar1 = UObject::FindFunction(0,DAT_146aca348);
  if (lVar1 != 0) {
    local_res18 = param_2;
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,&local_res18);
  }
  return local_res1c;
}



// FUNCTION 141f700f0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneBindingOverrides::GetPrivateStaticClass(void)

{
  if (DAT_146aca408 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneBindingOverrides",&DAT_146aca408,FUN_140447710,
                  0x98,0x10000000,0,L"Engine",&LAB_141f6b0d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aca408;
}



// FUNCTION 141f70190 FUN_141f70190 body=51 status=ok
// SIG undefined FUN_141f70190(void)

void FUN_141f70190(longlong *param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0xf8))();
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  GetTypeHash(&local_18);
  return;
}



// FUNCTION 141f701d0 FUN_141f701d0 body=166 status=ok
// SIG undefined FUN_141f701d0(void)

uint FUN_141f701d0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  (**(code **)(*param_1 + 0xf8))();
  uVar1 = *param_2;
  iVar4 = (int)uVar1;
  uVar3 = (int)(uVar1 >> 0x20) - iVar4 ^ (uint)(uVar1 >> 0xd) & 0x7ffff;
  uVar2 = (-0x61c88647 - iVar4) - uVar3 ^ uVar3 << 8;
  uVar5 = (iVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  return (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}



// FUNCTION 141f70280 FUN_141f70280 body=34 status=ok
// SIG undefined FUN_141f70280(void)

uint FUN_141f70280(longlong *param_1,uint *param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  return ~param_2[1] ^ param_2[2] ^ *param_2;
}



// FUNCTION 141f702b0 FUN_141f702b0 body=31 status=ok
// SIG undefined FUN_141f702b0(void)

void FUN_141f702b0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  GetTypeHash(param_2);
  return;
}



// FUNCTION 141f702d0 GetTypeHash body=164 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,0x10);
  uVar3 = *(int *)(param_1 + 0x10) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}



// FUNCTION 141f70380 GetTypeHash body=274 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  iVar4 = (int)uVar1;
  uVar3 = (int)(uVar1 >> 0x20) - iVar4 ^ (uint)(uVar1 >> 0xd) & 0x7ffff;
  uVar2 = (-0x61c88647 - iVar4) - uVar3 ^ uVar3 << 8;
  uVar5 = (iVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = (int)param_1[1] - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar2 << 8;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  return (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}



// FUNCTION 141f704a0 FUN_141f704a0 body=6 status=ok
// SIG undefined FUN_141f704a0(void)

undefined8 FUN_141f704a0(void)

{
  return 0x4bf3380b;
}



// FUNCTION 141f704b0 Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC(void)

{
  return 0xf7446627;
}



// FUNCTION 141f704c0 Get_Z_Construct_UScriptStruct_FMovieSceneBoolChannel_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneBoolChannel_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneBoolChannel_CRC(void)

{
  return 0xd50c0519;
}



// FUNCTION 141f704d0 Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC(void)

{
  return 0xebcacce8;
}



// FUNCTION 141f704e0 Get_Z_Construct_UScriptStruct_FMovieSceneChannel_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneChannel_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneChannel_CRC(void)

{
  return 0x3c61c99c;
}



// FUNCTION 141f704f0 FUN_141f704f0 body=6 status=ok
// SIG undefined FUN_141f704f0(void)

undefined8 FUN_141f704f0(void)

{
  return 0x65664273;
}



// FUNCTION 141f70500 Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC(void)

{
  return 0xf9a86386;
}



// FUNCTION 141f70510 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC(void)

{
  return 0xea06c609;
}



// FUNCTION 141f70520 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC(void)

{
  return 0x271ffeec;
}



// FUNCTION 141f70530 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC(void)

{
  return 0xcbaf4b34;
}



// FUNCTION 141f70540 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC(void)

{
  return 0x2ea4f357;
}



// FUNCTION 141f70550 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC(void)

{
  return 0xbc68dd84;
}



// FUNCTION 141f70560 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC(void)

{
  return 0x4439832d;
}



// FUNCTION 141f70570 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC(void)

{
  return 0x88329029;
}



// FUNCTION 141f70580 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC(void)

{
  return 0x3f35358c;
}



// FUNCTION 141f70590 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC(void)

{
  return 0x15904487;
}



// FUNCTION 141f705a0 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC(void)

{
  return 0x5654daad;
}



// FUNCTION 141f705b0 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_CRC(void)

{
  return 0xc18241d1;
}



// FUNCTION 141f705c0 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC(void)

{
  return 0x7e8ee29c;
}



// FUNCTION 141f705d0 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC(void)

{
  return 0x199168b9;
}



// FUNCTION 141f705e0 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC(void)

{
  return 0x612c25cb;
}



// FUNCTION 141f705f0 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC(void)

{
  return 0x7e6ad7d2;
}



// FUNCTION 141f70600 Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC(void)

{
  return 0xd8746aff;
}



// FUNCTION 141f70610 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC(void)

{
  return 0xfceeb5e9;
}



// FUNCTION 141f70620 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC(void)

{
  return 0x38356715;
}



// FUNCTION 141f70630 Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_CRC(void)

{
  return 0xeffdafd8;
}



// FUNCTION 141f70640 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC(void)

{
  return 0x93df94df;
}



// FUNCTION 141f70650 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC(void)

{
  return 0x68cd3c7b;
}



// FUNCTION 141f70660 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC(void)

{
  return 0x2af79909;
}



// FUNCTION 141f70670 Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC(void)

{
  return 0x498b1696;
}



// FUNCTION 141f70680 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC(void)

{
  return 0xd2957266;
}



// FUNCTION 141f70690 Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC(void)

{
  return 0x7ecb7d0f;
}



// FUNCTION 141f706a0 Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC(void)

{
  return 0x6bfcbb2b;
}



// FUNCTION 141f706b0 Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC(void)

{
  return 0x6b649127;
}



// FUNCTION 141f706c0 Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_CRC(void)

{
  return 0xa781e7f1;
}



// FUNCTION 141f706d0 Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_CRC(void)

{
  return 0x3817d0d8;
}



// FUNCTION 141f70750 Rehash body=543 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
     Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
      uVar12 = 0;
      uVar13 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_38;
      }
      uVar5 = *puVar14;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141f7087f;
        uVar5 = puVar14[lVar6 + 1];
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
LAB_141f7087f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x20 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 3) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141f70970 ResizeForCopy body=124 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x58,0);
    iVar3 = (int)(uVar1 / 0x58);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x58,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 141f709f0 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<FRotator,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xc,0);
    iVar3 = (int)(uVar1 / 0xc);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xc,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141f70aa0 Serialize body=61 status=ok
// SIG undefined Serialize(void)

undefined1
UScriptStruct::TCppStructOps<FMovieSceneSubSectionFieldData>::Serialize
          (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141f6d1d0(param_2,param_3);
  uVar1 = ::operator<<(uVar1,param_3 + 0x20);
  ::operator<<(uVar1,param_3 + 0x40);
  return 1;
}



// FUNCTION 141f70af0 Serialize body=22 status=ok
// SIG undefined Serialize(void)

undefined1
UScriptStruct::TCppStructOps<FSectionEvaluationDataTree>::Serialize
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ::operator<<(param_2,param_3);
  return 1;
}



// FUNCTION 141f70b10 FUN_141f70b10 body=199 status=ok
// SIG undefined FUN_141f70b10(void)

undefined8 FUN_141f70b10(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_141f6d390(param_2,param_1 + 1);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 2,4);
  }
  return 1;
}



// FUNCTION 141f70be0 Serialize body=420 status=ok
// SIG undefined Serialize(void)

undefined8 FMovieSceneTrackFieldData::Serialize(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar13;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong uVar12;
  
  uVar4 = FUN_141f6d1d0(param_2,param_1);
  lVar5 = ::operator<<(uVar4,param_1 + 0x20);
  if ((*(byte *)(lVar5 + 0x28) & 2) != 0) {
    piVar6 = *(int **)(param_1 + 0x40);
    uVar8 = 0;
    local_48 = 0;
    piVar1 = piVar6 + (longlong)*(int *)(param_1 + 0x48) * 3;
    local_40 = 0;
    uVar12 = uVar8;
    uVar13 = uVar8;
    iVar11 = 0;
    iVar7 = 0;
    if (piVar6 != piVar1) {
      do {
        iVar11 = piVar6[1];
        if (iVar11 < 1) {
          *piVar6 = -1;
        }
        else {
          iVar7 = *piVar6;
          iVar9 = (int)uVar12;
          *piVar6 = iVar9;
          lVar3 = *(longlong *)(param_1 + 0x50);
          uVar10 = iVar9 + iVar11;
          local_40 = CONCAT44(local_40._4_4_,uVar10);
          if ((int)uVar8 < (int)uVar10) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_48,uVar12);
            uVar8 = local_40 >> 0x20;
            uVar13 = local_48;
            uVar10 = (uint)local_40;
          }
          uVar12 = (ulonglong)uVar10;
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(uVar13 + (longlong)iVar9 * 4),(void *)(lVar3 + (longlong)iVar7 * 4),
                     (longlong)iVar11 << 2);
        }
        piVar6[2] = piVar6[1];
        piVar6 = piVar6 + 3;
      } while (piVar6 != piVar1);
      iVar11 = (int)uVar12;
      iVar7 = (int)uVar8;
      if ((int)uVar8 != (int)uVar12) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_48,uVar12);
        uVar13 = local_48;
        iVar11 = (uint)local_40;
        iVar7 = local_40._4_4_;
      }
    }
    puVar2 = (ulonglong *)(param_1 + 0x50);
    if (puVar2 == &local_48) {
      if (uVar13 != 0) {
        FMemory::Free(uVar13);
      }
    }
    else {
      if (*puVar2 != 0) {
        FMemory::Free();
      }
      *puVar2 = uVar13;
      *(int *)(param_1 + 0x58) = iVar11;
      *(int *)(param_1 + 0x5c) = iVar7;
    }
  }
  FArchive::UsingCustomVersion(lVar5,&DAT_1464b00f8);
  uVar4 = FUN_141f6d430(lVar5,(undefined8 *)(param_1 + 0x40));
  FUN_141f6daa0(uVar4,param_1 + 0x50);
  return 1;
}



// FUNCTION 141f70d90 Serialize body=112 status=ok
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
  FUN_141f63640(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f70e00 Serialize body=112 status=ok
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
  UMovieSceneFolder::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f70eb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneBinding::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca3e0 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC();
    DAT_146aca3e0 = GetStaticStruct(FUN_141f722c0,lVar1,L"MovieSceneBinding",0x30,uVar2);
  }
  return;
}



// FUNCTION 141f70f30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneBindingOverrideData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca3f0 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = FUN_141f704a0();
    DAT_146aca3f0 = GetStaticStruct(FUN_141f722f0,lVar1,L"MovieSceneBindingOverrideData",0x24,uVar2)
    ;
  }
  return;
}



// FUNCTION 141f70fb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneBoolChannel::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca448 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneBoolChannel_CRC();
    DAT_146aca448 = GetStaticStruct(FUN_141f72320,lVar1,L"MovieSceneBoolChannel",0x90,uVar2);
  }
  return;
}



// FUNCTION 141f71030 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneByteChannel::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca458 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC();
    DAT_146aca458 = GetStaticStruct(FUN_141f72350,lVar1,L"MovieSceneByteChannel",0x98,uVar2);
  }
  return;
}



// FUNCTION 141f710b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneChannel::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca468 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneChannel_CRC();
    DAT_146aca468 = GetStaticStruct(FUN_141f69640,lVar1,L"MovieSceneChannel",8,uVar2);
  }
  return;
}



// FUNCTION 141f71130 FUN_141f71130 body=113 status=ok
// SIG undefined FUN_141f71130(void)

void FUN_141f71130(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca398 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = FUN_141f704f0();
    DAT_146aca398 = GetStaticStruct(FUN_141f72380,lVar1,L"MovieSceneEditorData",0x90,uVar2);
  }
  return;
}



// FUNCTION 141f711b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEmptyStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca4f8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC();
    DAT_146aca4f8 = GetStaticStruct(FUN_141f723b0,lVar1,L"MovieSceneEmptyStruct",1,uVar2);
  }
  return;
}



// FUNCTION 141f71230 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvalTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca4d8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC();
    DAT_146aca4d8 = GetStaticStruct(FUN_141f723e0,lVar1,L"MovieSceneEvalTemplate",0x20,uVar2);
  }
  return;
}



// FUNCTION 141f712b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvalTemplateBase::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca4e8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC();
    DAT_146aca4e8 = GetStaticStruct(FUN_141f69320,lVar1,L"MovieSceneEvalTemplateBase",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f71330 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvalTemplatePtr::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca4c8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC();
    DAT_146aca4c8 = GetStaticStruct(FUN_141f72410,lVar1,L"MovieSceneEvalTemplatePtr",0x38,uVar2);
  }
  return;
}



// FUNCTION 141f713b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationField::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca508 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC();
    DAT_146aca508 = GetStaticStruct(FUN_141f72440,lVar1,L"MovieSceneEvaluationField",0x30,uVar2);
  }
  return;
}



// FUNCTION 141f71430 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationFieldSegmentPtr::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca558 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC();
    DAT_146aca558 =
         GetStaticStruct(FUN_141f72470,lVar1,L"MovieSceneEvaluationFieldSegmentPtr",0xc,uVar2);
  }
  return;
}



// FUNCTION 141f714b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationFieldTrackPtr::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca568 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC();
    DAT_146aca568 =
         GetStaticStruct(FUN_141f6a000,lVar1,L"MovieSceneEvaluationFieldTrackPtr",8,uVar2);
  }
  return;
}



// FUNCTION 141f71530 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationGroup::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca538 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC();
    DAT_146aca538 = GetStaticStruct(FUN_141f724a0,lVar1,L"MovieSceneEvaluationGroup",0x20,uVar2);
  }
  return;
}



// FUNCTION 141f715b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationGroupLUTIndex::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca548 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC();
    DAT_146aca548 =
         GetStaticStruct(FUN_141f724d0,lVar1,L"MovieSceneEvaluationGroupLUTIndex",0xc,uVar2);
  }
  return;
}



// FUNCTION 141f71630 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationKey::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca578 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC();
    DAT_146aca578 = GetStaticStruct(FUN_141f72500,lVar1,L"MovieSceneEvaluationKey",0xc,uVar2);
  }
  return;
}



// FUNCTION 141f716b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationMetaData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca518 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC();
    DAT_146aca518 = GetStaticStruct(FUN_141f72530,lVar1,L"MovieSceneEvaluationMetaData",0x70,uVar2);
  }
  return;
}



// FUNCTION 141f71730 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationOperand::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca588 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_CRC();
    DAT_146aca588 = GetStaticStruct(FUN_141f72560,lVar1,L"MovieSceneEvaluationOperand",0x14,uVar2);
  }
  return;
}



// FUNCTION 141f717b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca598 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC();
    DAT_146aca598 = GetStaticStruct(FUN_141f72590,lVar1,L"MovieSceneEvaluationTemplate",0x2f0,uVar2)
    ;
  }
  return;
}



// FUNCTION 141f71830 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationTemplateSerialNumber::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca5a8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC();
    DAT_146aca5a8 =
         GetStaticStruct(FUN_141f725c0,lVar1,L"MovieSceneEvaluationTemplateSerialNumber",4,uVar2);
  }
  return;
}



// FUNCTION 141f718b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationTrack::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca600 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC();
    DAT_146aca600 = GetStaticStruct(FUN_141f725f0,lVar1,L"MovieSceneEvaluationTrack",0xf8,uVar2);
  }
  return;
}



// FUNCTION 141f71930 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvaluationTrackSegments::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca610 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC();
    DAT_146aca610 =
         GetStaticStruct(FUN_141f72620,lVar1,L"MovieSceneEvaluationTrackSegments",0x20,uVar2);
  }
  return;
}



// FUNCTION 141f719b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneExpansionState::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca3b8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC();
    DAT_146aca3b8 = GetStaticStruct(FUN_141f72650,lVar1,L"MovieSceneExpansionState",1,uVar2);
  }
  return;
}



// FUNCTION 141f71a30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneFloatChannel::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca630 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC();
    DAT_146aca630 = GetStaticStruct(FUN_141f72680,lVar1,L"MovieSceneFloatChannel",0xa0,uVar2);
  }
  return;
}



// FUNCTION 141f71ab0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneFloatValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca640 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC();
    DAT_146aca640 = GetStaticStruct(FUN_141f726b0,lVar1,L"MovieSceneFloatValue",0x1c,uVar2);
  }
  return;
}



// FUNCTION 141f71b30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneKeyHandleMap::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca478 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_CRC();
    DAT_146aca478 = GetStaticStruct(FUN_141f726e0,lVar1,L"MovieSceneKeyHandleMap",0x60,uVar2);
  }
  return;
}



// FUNCTION 141f71bb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneOrderedEvaluationKey::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca528 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC();
    DAT_146aca528 =
         GetStaticStruct(FUN_141f72710,lVar1,L"MovieSceneOrderedEvaluationKey",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f71c30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSubSectionData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca5c8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC();
    DAT_146aca5c8 = GetStaticStruct(FUN_141f72740,lVar1,L"MovieSceneSubSectionData",0x1c,uVar2);
  }
  return;
}



// FUNCTION 141f71cb0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSubSectionFieldData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca5b8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC();
    DAT_146aca5b8 = GetStaticStruct(FUN_141f72770,lVar1,L"MovieSceneSubSectionFieldData",0x60,uVar2)
    ;
  }
  return;
}



// FUNCTION 141f71d30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTangentData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca650 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC();
    DAT_146aca650 = GetStaticStruct(FUN_141f727a0,lVar1,L"MovieSceneTangentData",0x14,uVar2);
  }
  return;
}



// FUNCTION 141f71db0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTemplateGenerationLedger::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca5e8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC();
    DAT_146aca5e8 =
         GetStaticStruct(FUN_141f727d0,lVar1,L"MovieSceneTemplateGenerationLedger",0xa8,uVar2);
  }
  return;
}



// FUNCTION 141f71e30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTimecodeSource::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aca3a8 == 0) {
    if (DAT_146aca3d8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aca3d8,&PTR_s__Script_MovieScene_144f21250);
    }
    lVar1 = DAT_146aca3d8;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC();
    DAT_146aca3a8 = GetStaticStruct(FUN_141f72800,lVar1,L"MovieSceneTimecodeSource",0x18,uVar2);
  }
  return;
}


