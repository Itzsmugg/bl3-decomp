// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424eb710 FUN_1424eb710 body=451 status=ok
// SIG undefined FUN_1424eb710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424eb710(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined4 *param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 (*local_78) [16];
  undefined8 local_70;
  
  cVar8 = FUN_1424fd5d0();
  uVar7 = _DAT_1464aa6c8;
  uVar6 = _DAT_1464aa6c0;
  if ((cVar8 != '\0') && (param_2 != (longlong *)0x0)) {
    local_b8 = 0;
    local_b0 = 0;
    local_a0 = _DAT_1464aa6c0;
    uStack_98 = _DAT_1464aa6c8;
    local_a8 = 0;
    local_c8 = &PTR__scalar_deleting_destructor__1450861e0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (undefined1 (*) [16])0x0;
    local_70 = 1;
    local_c0 = param_3;
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_78,0);
    auVar1._8_4_ = (int)param_6;
    auVar1._0_8_ = param_3;
    auVar1._12_4_ = (int)((ulonglong)param_6 >> 0x20);
    *local_78 = auVar1;
    *(undefined8 *)local_78[1] = uVar6;
    *(undefined8 *)(local_78[1] + 8) = uVar7;
    auVar2._8_4_ = (int)param_7;
    auVar2._0_8_ = param_4;
    auVar2._12_4_ = (int)((ulonglong)param_7 >> 0x20);
    local_78[2] = auVar2;
    *(undefined8 *)local_78[3] = uVar6;
    *(undefined8 *)(local_78[3] + 8) = uVar7;
    *(undefined4 *)local_78[4] = (undefined4)param_5;
    *(undefined4 *)(local_78[4] + 4) = param_5._4_4_;
    *(int *)(local_78[4] + 8) = (int)param_8;
    *(int *)(local_78[4] + 0xc) = (int)((ulonglong)param_8 >> 0x20);
    *(undefined8 *)local_78[5] = uVar6;
    *(undefined8 *)(local_78[5] + 8) = uVar7;
    uVar6 = param_9[1];
    *(undefined8 *)local_78[1] = *param_9;
    *(undefined8 *)(local_78[1] + 8) = uVar6;
    uVar6 = param_10[1];
    *(undefined8 *)local_78[3] = *param_10;
    *(undefined8 *)(local_78[3] + 8) = uVar6;
    uVar3 = param_11[1];
    uVar4 = param_11[2];
    uVar5 = param_11[3];
    *(undefined4 *)local_78[5] = *param_11;
    *(undefined4 *)(local_78[5] + 4) = uVar3;
    *(undefined4 *)(local_78[5] + 8) = uVar4;
    *(undefined4 *)(local_78[5] + 0xc) = uVar5;
    local_88 = (**(code **)(*param_2 + 0x2a8))(param_2,0,0);
    FUN_1428a6cf0(*(undefined8 *)(param_1 + 0x4a8),&local_c8);
    local_c8 = &PTR__scalar_deleting_destructor__1450861e0;
    if (local_78 != (undefined1 (*) [16])0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1424eb8e0 FUN_1424eb8e0 body=170 status=ok
// SIG undefined FUN_1424eb8e0(void)

void FUN_1424eb8e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [20];
  undefined4 local_94;
  
  cVar1 = FUN_1424fd5d0();
  if (cVar1 != '\0') {
    local_b8 = param_5;
    local_b4 = param_6;
    local_b0 = param_3;
    local_ac = param_4;
    FCanvasTileItem::FCanvasTileItem(local_a8,&local_b0,DAT_146ac3d68,&local_b8,param_2);
    local_94 = 2;
    FUN_1428a6cf0(*(undefined8 *)(param_1 + 0x4a8),local_a8);
  }
  return;
}



// FUNCTION 1424eb990 FUN_1424eb990 body=359 status=ok
// SIG undefined FUN_1424eb990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424eb990(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,longlong param_6,float param_7,char param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  float local_218;
  float local_214;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [160];
  float local_158;
  float local_154;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  cVar5 = FUN_1424fd5d0();
  if (cVar5 != '\0') {
    if (param_8 != '\0') {
      param_4 = param_4 * param_7;
      param_5 = param_5 * param_7;
    }
    if (param_6 == 0) {
      param_6 = UEngine::GetMediumFont();
    }
    local_218 = param_4;
    local_214 = param_5;
    uVar6 = FText::FromString(local_210,param_2);
    local_228 = param_3;
    FCanvasTextItem::FCanvasTextItem(local_1f8,&local_218,uVar6,param_6);
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_208 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar2 = (int *)((longlong)local_208 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    local_158 = param_7;
    local_154 = param_7;
    FUN_1428a6cf0(*(undefined8 *)(param_1 + 0x4a8),local_1f8);
    FUN_140c64b70(local_1f8);
  }
  return;
}



// FUNCTION 1424ebb00 FUN_1424ebb00 body=390 status=ok
// SIG undefined FUN_1424ebb00(void)

void FUN_1424ebb00(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10,undefined8 param_11,undefined4 param_12,float param_13,
                  char param_14,uint param_15,undefined8 param_16)

{
  char cVar1;
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
  undefined4 local_a4;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_44;
  
  cVar1 = FUN_1424fd5d0();
  if ((cVar1 != '\0') && (param_2 != 0)) {
    local_dc = param_7 + param_9;
    local_d8 = param_8 + param_10;
    local_cc = param_5 * param_13;
    local_d4 = param_7;
    local_c8 = param_6 * param_13;
    local_d0 = param_8;
    local_e8 = param_3;
    local_e4 = param_4;
    FCanvasTileItem::FCanvasTileItem
              (local_b8,&local_e8,*(undefined8 *)(param_2 + 0x60),&local_cc,&local_d4,&local_dc,
               param_11);
    local_50 = (ulonglong)param_15 << 0x20;
    local_e0 = 0;
    local_44 = param_16;
    local_48 = 0;
    if (param_14 != '\0') {
      local_b0 = local_b0 * param_13;
      local_ac = local_ac * param_13;
    }
    local_a4 = FCanvas::BlendToSimpleElementBlend(param_12);
    FUN_1428a6cf0(*(undefined8 *)(param_1 + 0x4a8),local_b8);
  }
  return;
}



// FUNCTION 1424ebc90 FUN_1424ebc90 body=230 status=ok
// SIG undefined FUN_1424ebc90(void)

void FUN_1424ebc90(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,char param_6)

{
  char cVar1;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_a8 [8];
  float local_a0;
  float local_9c;
  undefined4 local_94;
  float local_70;
  float local_6c;
  
  cVar1 = FUN_1424fd5d0();
  if ((cVar1 != '\0') && (param_2 != 0)) {
    local_b8 = param_3;
    local_b4 = param_4;
    FCanvasTileItem::FCanvasTileItem
              (local_a8,&local_b8,*(undefined8 *)(param_2 + 0x60),&DAT_1464aa6c0);
    if (param_6 != '\0') {
      local_a0 = local_a0 * param_5;
      local_9c = local_9c * param_5;
    }
    local_70 = local_70 * param_5;
    local_94 = 2;
    local_6c = local_6c * param_5;
    FUN_1428a6cf0(*(undefined8 *)(param_1 + 0x4a8),local_a8);
  }
  return;
}



// FUNCTION 1424ebd80 FUN_1424ebd80 body=844 status=ok
// SIG undefined FUN_1424ebd80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424ebd80(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  longlong local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  longlong local_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined1 local_108 [64];
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b0 [64];
  longlong local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if (((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xb4) >> 0x17 & 1) != 0) &&
     ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0xb4) >> 0x17 & 1) != 0)) {
    local_1d0 = (longlong *)0x0;
    local_1c8 = 0;
    local_190 = param_2;
    FFindInstancedReferenceSubobjectHelper::
    GetInstancedSubObjects<TArray<FInstancedSubObjRef,FDefaultAllocator>_>(param_1,&local_1d0);
    if (0 < (int)local_1c8) {
      local_1c0 = (longlong *)0x0;
      local_1b8 = 0;
      FFindInstancedReferenceSubobjectHelper::
      GetInstancedSubObjects<TArray<FInstancedSubObjRef,FDefaultAllocator>_>(param_2,&local_1c0);
      uVar9 = (ulonglong)(int)local_1b8;
      plVar10 = local_1c0 + uVar9 * 3;
      plVar12 = local_1c0;
      if (local_1c0 != plVar10) {
        do {
          lVar1 = *plVar12;
          if (*(longlong *)(lVar1 + 0x20) == param_1) {
            for (plVar5 = local_1d0; plVar5 != local_1d0 + (longlong)(int)local_1c8 * 3;
                plVar5 = plVar5 + 3) {
              if (*plVar5 == lVar1) {
                bVar3 = true;
                goto LAB_1424ebe89;
              }
            }
            bVar3 = false;
LAB_1424ebe89:
            piVar6 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                            ::FindId(param_3,local_1a0,lVar1);
            lVar4 = local_190;
            if ((bVar3) && (*piVar6 == -1)) {
              FUN_1417812e0(local_148,lVar1,local_190);
              uVar2 = *(undefined8 *)(*plVar12 + 0x18);
              local_138 = uVar2;
              uVar7 = UObject::GetPrivateStaticClass();
              local_1e8 = 0;
              local_1f0 = 0;
              local_1f8 = 0;
              local_1d8 = FUN_141799680(uVar7,lVar4,uVar2,0);
              if (local_1d8 != 0) {
                local_1b0 = *plVar12;
                local_180 = &local_1b0;
                local_178 = &local_1d8;
                TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
                          (local_108,local_19c,&local_180);
                local_188 = FUN_14178ca30(local_1d8);
                if (local_188 != 0) {
                  local_170 = &local_1d8;
                  local_168 = &local_188;
                  TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                            (local_b0,local_198,&local_170);
                }
              }
              local_1a8 = FUN_141798990(local_148);
              if ((local_1d8 != 0) && (local_1a8 != 0)) {
                FUN_1417510e0(local_1a8);
              }
              local_1b0 = *plVar12;
              local_160 = &local_1b0;
              local_158 = &local_1a8;
              TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
                        (param_3,local_194,&local_160);
              iVar11 = (int)param_4[1];
              *(int *)(param_4 + 1) = iVar11 + 1;
              if (*(int *)((longlong)param_4 + 0xc) < iVar11 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4,iVar11);
              }
              *(longlong *)(*param_4 + (longlong)iVar11 * 8) = local_1a8;
              local_68 = 0;
              if (local_70 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (local_b0);
              local_c0 = 0;
              if (local_c8 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (local_108);
            }
          }
          plVar12 = plVar12 + 3;
        } while (plVar12 != plVar10);
        uVar9 = local_1b8 & 0xffffffff;
      }
      if ((int)uVar9 != 0) {
        plVar10 = local_1c0 + 1;
        do {
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 3;
          uVar8 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 != 0);
      }
      if (local_1c0 != (longlong *)0x0) {
        FMemory::Free(local_1c0);
      }
    }
    if ((int)local_1c8 != 0) {
      plVar10 = local_1d0 + 1;
      iVar11 = (int)local_1c8;
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 3;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (local_1d0 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1424ec0d0 DuplicateKeyframe body=279 status=ok
// SIG undefined DuplicateKeyframe(void)

uint UInterpTrackAnimControl::DuplicateKeyframe
               (longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0xa0) <= param_2)) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  uVar10 = 0;
  uVar12 = 0;
  lVar2 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x98);
  uVar5 = *(undefined4 *)(lVar2 + 4);
  uVar8 = *(undefined8 *)(lVar2 + 8);
  puVar3 = (undefined8 *)((longlong)param_2 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x98));
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  if (0 < *(int *)(param_4 + 0xa0)) {
    pfVar9 = *(float **)(param_4 + 0x98);
    uVar13 = uVar10;
    do {
      uVar12 = (uint)uVar13;
      if (param_3 < *pfVar9 || param_3 == *pfVar9) break;
      uVar12 = uVar12 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 8;
    } while ((longlong)uVar10 < (longlong)*(int *)(param_4 + 0xa0));
  }
  plVar1 = (longlong *)(param_4 + 0x98);
  iVar4 = *(int *)(param_4 + 0xa0);
  *(int *)(param_4 + 0xa0) = iVar4 + 1;
  if (*(int *)(param_4 + 0xa4) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar4);
  }
  lVar11 = (longlong)(int)uVar12 * 0x20;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + lVar11 + 0x20),(void *)(*plVar1 + lVar11),
             (longlong)(int)(iVar4 - uVar12) << 5);
  lVar2 = *plVar1;
  *(undefined8 *)(lVar11 + lVar2) = 0;
  *(undefined8 *)(lVar11 + 8 + lVar2) = 0;
  *(undefined8 *)(lVar11 + 0x10 + lVar2) = 0;
  *(undefined8 *)(lVar11 + 0x18 + lVar2) = 0;
  lVar2 = *plVar1;
  puVar3 = (undefined8 *)(lVar2 + lVar11);
  *puVar3 = CONCAT44(uVar5,param_3);
  puVar3[1] = uVar8;
  puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar11);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  return uVar12;
}



// FUNCTION 1424ec1f0 DuplicateKeyframe body=230 status=ok
// SIG undefined DuplicateKeyframe(void)

uint UInterpTrackBoolProp::DuplicateKeyframe
               (longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_18;
  ulonglong uVar7;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  uVar4 = 0;
  uVar6 = 0;
  local_18 = CONCAT44((int)((ulonglong)
                            *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 8)
                           >> 0x20),param_3);
  if (0 < *(int *)(param_4 + 0x78)) {
    pfVar3 = *(float **)(param_4 + 0x70);
    uVar7 = uVar4;
    do {
      uVar6 = (uint)uVar7;
      if (param_3 < *pfVar3 || param_3 == *pfVar3) break;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 2;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_4 + 0x78));
  }
  iVar2 = *(int *)(param_4 + 0x78);
  plVar1 = (longlong *)(param_4 + 0x70);
  *(int *)(param_4 + 0x78) = iVar2 + 1;
  if (*(int *)(param_4 + 0x7c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar5 = (longlong)(int)uVar6;
  _Src = (void *)(*plVar1 + lVar5 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar2 - uVar6) << 3);
  *(undefined8 *)(*plVar1 + lVar5 * 8) = 0;
  *(undefined8 *)(*plVar1 + lVar5 * 8) = local_18;
  return uVar6;
}



// FUNCTION 1424ec2e0 DuplicateKeyframe body=211 status=ok
// SIG undefined DuplicateKeyframe(void)

ulonglong UInterpTrackDirector::DuplicateKeyframe
                    (longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  uVar8 = 0;
  lVar2 = *(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x18;
  uVar5 = *(undefined4 *)(lVar2 + 4);
  uVar6 = *(undefined8 *)(lVar2 + 8);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10 + (longlong)param_2 * 0x18);
  uVar10 = uVar8;
  if (0 < *(int *)(param_4 + 0x78)) {
    pfVar7 = *(float **)(param_4 + 0x70);
    do {
      if (param_3 < *pfVar7 || param_3 == *pfVar7) break;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 6;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_4 + 0x78));
  }
  plVar1 = (longlong *)(param_4 + 0x70);
  TArray<FTabManager::FTab,FDefaultAllocator>::InsertUninitialized(plVar1,uVar10,1);
  lVar9 = (longlong)(int)uVar10;
  lVar2 = *plVar1;
  *(undefined8 *)(lVar2 + lVar9 * 0x18) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar9 * 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x18) = 0;
  lVar2 = *plVar1;
  puVar3 = (undefined8 *)(lVar2 + lVar9 * 0x18);
  *puVar3 = CONCAT44(uVar5,param_3);
  puVar3[1] = uVar6;
  *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x18) = uVar4;
  return uVar10;
}



// FUNCTION 1424ec3c0 DuplicateKeyframe body=238 status=ok
// SIG undefined DuplicateKeyframe(void)

uint UInterpTrackEvent::DuplicateKeyframe
               (longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  uVar7 = 0;
  uVar9 = 0;
  lVar2 = *(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x10;
  uVar4 = *(undefined4 *)(lVar2 + 4);
  uVar5 = *(undefined8 *)(lVar2 + 8);
  if (0 < *(int *)(param_4 + 0x78)) {
    pfVar6 = *(float **)(param_4 + 0x70);
    uVar10 = uVar7;
    do {
      uVar9 = (uint)uVar10;
      if (param_3 < *pfVar6 || param_3 == *pfVar6) break;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 4;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_4 + 0x78));
  }
  iVar3 = *(int *)(param_4 + 0x78);
  plVar1 = (longlong *)(param_4 + 0x70);
  *(int *)(param_4 + 0x78) = iVar3 + 1;
  if (*(int *)(param_4 + 0x7c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar8 = (longlong)(int)uVar9 * 0x10;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + lVar8 + 0x10),(void *)(*plVar1 + lVar8),
             (longlong)(int)(iVar3 - uVar9) << 4);
  lVar2 = *plVar1;
  *(undefined8 *)(lVar8 + lVar2) = 0;
  *(undefined8 *)(lVar8 + 8 + lVar2) = 0;
  lVar2 = *plVar1;
  *(undefined8 *)(lVar2 + lVar8) = CONCAT44(uVar4,param_3);
  ((undefined8 *)(lVar2 + lVar8))[1] = uVar5;
  return uVar9;
}



// FUNCTION 1424ec4b0 DuplicateKeyframe body=249 status=ok
// SIG undefined DuplicateKeyframe(void)

int UInterpTrackFloatBase::DuplicateKeyframe
              (longlong param_1,int param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_res10 [2];
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    if (param_4 == 0) {
      param_4 = param_1;
    }
    plVar1 = (longlong *)(param_4 + 0x70);
    local_res10[0] = 0;
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x14);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    uVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x10 + (longlong)param_2 * 0x14);
    iVar7 = FInterpCurve<float>::AddPoint(plVar1,param_3,local_res10);
    lVar4 = *plVar1;
    lVar8 = (longlong)iVar7;
    puVar2 = (undefined8 *)(lVar4 + lVar8 * 0x14);
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    *(undefined1 *)(lVar4 + 0x10 + lVar8 * 0x14) = uVar3;
    *(undefined4 *)(*plVar1 + lVar8 * 0x14) = param_3;
    FInterpCurve<float>::AutoSetTangents
              (plVar1,*(undefined4 *)(param_1 + 0x88),
               CONCAT71((int7)((ulonglong)(lVar8 * 5) >> 8),1));
    return iVar7;
  }
  return -1;
}



// FUNCTION 1424ec5b0 DuplicateKeyframe body=288 status=ok
// SIG undefined DuplicateKeyframe(void)

int UInterpTrackLinearColorBase::DuplicateKeyframe
              (longlong param_1,int param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    local_68 = 0;
    uStack_60 = 0;
    puVar13 = (undefined4 *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x70));
    if (param_4 == 0) {
      param_4 = param_1;
    }
    uVar3 = *puVar13;
    uVar6 = *(undefined8 *)(puVar13 + 1);
    uVar7 = *(undefined8 *)(puVar13 + 3);
    uVar4 = *(undefined1 *)(puVar13 + 0xd);
    uVar8 = *(undefined8 *)(puVar13 + 5);
    uVar9 = *(undefined8 *)(puVar13 + 7);
    plVar1 = (longlong *)(param_4 + 0x70);
    uVar10 = *(undefined8 *)(puVar13 + 9);
    uVar11 = *(undefined8 *)(puVar13 + 0xb);
    iVar12 = FInterpCurve<FLinearColor>::AddPoint(plVar1,param_3,&local_68);
    lVar5 = *plVar1;
    lVar14 = (longlong)iVar12 * 0x38;
    *(undefined4 *)(lVar14 + lVar5) = uVar3;
    puVar2 = (undefined8 *)(lVar14 + 4 + lVar5);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    puVar2 = (undefined8 *)(lVar14 + 0x14 + lVar5);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2 = (undefined8 *)(lVar14 + 0x24 + lVar5);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    *(undefined1 *)(lVar14 + 0x34 + lVar5) = uVar4;
    *(undefined4 *)(lVar14 + *plVar1) = param_3;
    FInterpCurve<FLinearColor>::AutoSetTangents
              (plVar1,*(undefined4 *)(param_1 + 0x88),CONCAT71((int7)((ulonglong)lVar14 >> 8),1));
    return iVar12;
  }
  return -1;
}



// FUNCTION 1424ec6d0 DuplicateKeyframe body=687 status=ok
// SIG undefined DuplicateKeyframe(void)

int UInterpTrackMove::DuplicateKeyframe(longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    return -1;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  lVar13 = *(longlong *)(param_1 + 0x70);
  lVar16 = (longlong)param_2 * 0x2c;
  uVar2 = *(undefined4 *)(lVar16 + lVar13);
  uVar3 = *(undefined8 *)(lVar16 + 4 + lVar13);
  uVar7 = *(undefined4 *)(lVar16 + 0xc + lVar13);
  uVar4 = *(undefined8 *)(lVar16 + 0x10 + lVar13);
  uVar8 = *(undefined4 *)(lVar16 + 0x18 + lVar13);
  uVar5 = *(undefined8 *)(lVar16 + 0x1c + lVar13);
  uVar9 = *(undefined4 *)(lVar16 + 0x24 + lVar13);
  uVar6 = *(undefined1 *)(lVar16 + 0x28 + lVar13);
  iVar10 = FInterpCurve<FVector>::AddPoint(param_4 + 0x70,param_3,&DAT_1468b5d90);
  lVar14 = (longlong)iVar10 * 0x2c;
  lVar13 = *(longlong *)(param_4 + 0x70);
  *(undefined8 *)(lVar14 + 4 + lVar13) = uVar3;
  *(undefined8 *)(lVar14 + 0x10 + lVar13) = uVar4;
  *(undefined8 *)(lVar14 + 0x1c + lVar13) = uVar5;
  *(undefined4 *)(lVar14 + 0xc + lVar13) = uVar7;
  *(undefined4 *)(lVar14 + 0x18 + lVar13) = uVar8;
  *(undefined4 *)(lVar14 + 0x24 + lVar13) = uVar9;
  *(undefined4 *)(lVar14 + lVar13) = uVar2;
  *(undefined1 *)(lVar14 + 0x28 + lVar13) = uVar6;
  *(float *)(lVar14 + *(longlong *)(param_4 + 0x70)) = param_3;
  lVar13 = *(longlong *)(param_1 + 0x88);
  uVar2 = *(undefined4 *)(lVar16 + lVar13);
  uVar3 = *(undefined8 *)(lVar16 + 4 + lVar13);
  uVar7 = *(undefined4 *)(lVar16 + 0xc + lVar13);
  uVar4 = *(undefined8 *)(lVar16 + 0x10 + lVar13);
  uVar8 = *(undefined4 *)(lVar16 + 0x18 + lVar13);
  uVar5 = *(undefined8 *)(lVar16 + 0x1c + lVar13);
  uVar9 = *(undefined4 *)(lVar16 + 0x24 + lVar13);
  uVar6 = *(undefined1 *)(lVar16 + 0x28 + lVar13);
  iVar11 = FInterpCurve<FVector>::AddPoint(param_4 + 0x88,param_3,&DAT_1468b5d90);
  plVar1 = (longlong *)(param_4 + 0xa0);
  lVar13 = *(longlong *)(param_4 + 0x88);
  lVar14 = (longlong)iVar11 * 0x2c;
  *(undefined8 *)(lVar14 + 4 + lVar13) = uVar3;
  *(undefined8 *)(lVar14 + 0x10 + lVar13) = uVar4;
  *(undefined8 *)(lVar14 + 0x1c + lVar13) = uVar5;
  *(undefined4 *)(lVar14 + 0x18 + lVar13) = uVar8;
  iVar15 = 0;
  *(undefined4 *)(lVar14 + lVar13) = uVar2;
  *(undefined4 *)(lVar14 + 0xc + lVar13) = uVar7;
  *(undefined4 *)(lVar14 + 0x24 + lVar13) = uVar9;
  *(undefined1 *)(lVar14 + 0x28 + lVar13) = uVar6;
  *(float *)(lVar14 + *(longlong *)(param_4 + 0x88)) = param_3;
  iVar11 = *(int *)(param_4 + 0xa8);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)param_2 * 0x10);
  if (0 < iVar11) {
    lVar13 = 0;
    pfVar12 = (float *)(*plVar1 + 8);
    do {
      if (param_3 < *pfVar12 || param_3 == *pfVar12) break;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 1;
      pfVar12 = pfVar12 + 4;
    } while (lVar13 < iVar11);
  }
  *(int *)(param_4 + 0xa8) = iVar11 + 1;
  if (*(int *)(param_4 + 0xac) < iVar11 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar11);
  }
  lVar13 = (longlong)iVar15 * 0x10;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + lVar13 + 0x10),(void *)(*plVar1 + lVar13),
             (longlong)(iVar11 - iVar15) << 4);
  *(float *)(*plVar1 + 8 + lVar13) = param_3;
  *(undefined8 *)(lVar13 + *plVar1) = uVar3;
  FInterpCurve<FVector>::AutoSetTangents(param_4 + 0x70,*(undefined4 *)(param_1 + 0xb8),1);
  FInterpCurve<FVector>::AutoSetTangents(param_4 + 0x88,*(undefined4 *)(param_1 + 0xbc),1);
  return iVar10;
}



// FUNCTION 1424ec980 DuplicateKeyframe body=293 status=ok
// SIG undefined DuplicateKeyframe(void)

ulonglong UInterpTrackMoveAxis::DuplicateKeyframe
                    (longlong param_1,int param_2,undefined4 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 local_res10 [2];
  
  lVar7 = (longlong)param_2;
  if (param_4 == 0) {
    param_4 = param_1;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    uVar9 = 0xffffffff;
  }
  else {
    local_res10[0] = 0;
    lVar8 = param_1;
    if (param_4 != 0) {
      lVar8 = param_4;
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar7 * 0x14);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x10 + lVar7 * 0x14);
    iVar6 = FInterpCurve<float>::AddPoint(lVar8 + 0x70,param_3,local_res10);
    uVar9 = (ulonglong)iVar6;
    lVar3 = *(longlong *)(lVar8 + 0x70);
    puVar1 = (undefined8 *)(lVar3 + uVar9 * 0x14);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    *(undefined1 *)(lVar3 + 0x10 + uVar9 * 0x14) = uVar2;
    *(undefined4 *)(*(longlong *)(lVar8 + 0x70) + uVar9 * 0x14) = param_3;
    FInterpCurve<float>::AutoSetTangents(lVar8 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  }
  FInterpLookupTrack::AddPoint
            ((longlong *)(param_4 + 0x98),param_3,lVar7 * 0x10 + *(longlong *)(param_4 + 0x98));
  return uVar9 & 0xffffffff;
}



// FUNCTION 1424ecab0 DuplicateKeyframe body=205 status=ok
// SIG undefined DuplicateKeyframe(void)

ulonglong UInterpTrackParticleReplay::DuplicateKeyframe
                    (longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_18;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  uVar5 = 0;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)param_2 * 0xc);
  local_18 = CONCAT44((int)((ulonglong)
                            *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0xc)
                           >> 0x20),param_3);
  uVar7 = uVar5;
  if (0 < *(int *)(param_4 + 0x78)) {
    pfVar4 = *(float **)(param_4 + 0x70);
    do {
      if (param_3 < *pfVar4 || param_3 == *pfVar4) break;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 3;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_4 + 0x78));
  }
  plVar1 = (longlong *)(param_4 + 0x70);
  TArray<FParticleReplayTrackKey,FDefaultAllocator>::InsertUninitialized(plVar1,uVar7,1);
  lVar6 = (longlong)(int)uVar7;
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar6 * 0xc) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar6 * 0xc) = 0;
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar6 * 0xc) = local_18;
  *(undefined4 *)(lVar3 + 8 + lVar6 * 0xc) = uVar2;
  return uVar7;
}



// FUNCTION 1424ecb80 DuplicateKeyframe body=230 status=ok
// SIG undefined DuplicateKeyframe(void)

ulonglong UInterpTrackSound::DuplicateKeyframe
                    (longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x98) <= param_2)) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  uVar8 = 0;
  lVar2 = *(longlong *)(param_1 + 0x90) + (longlong)param_2 * 0x18;
  uVar5 = *(undefined4 *)(lVar2 + 4);
  uVar6 = *(undefined8 *)(lVar2 + 8);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10 + (longlong)param_2 * 0x18);
  uVar10 = uVar8;
  if (0 < *(int *)(param_4 + 0x98)) {
    pfVar7 = *(float **)(param_4 + 0x90);
    do {
      if (param_3 < *pfVar7 || param_3 == *pfVar7) break;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 6;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_4 + 0x98));
  }
  plVar1 = (longlong *)(param_4 + 0x90);
  TArray<FTabManager::FTab,FDefaultAllocator>::InsertUninitialized(plVar1,uVar10,1);
  lVar9 = (longlong)(int)uVar10;
  lVar2 = *plVar1;
  *(undefined8 *)(lVar2 + lVar9 * 0x18) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar9 * 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x18) = 0;
  lVar2 = *plVar1;
  puVar3 = (undefined8 *)(lVar2 + lVar9 * 0x18);
  *puVar3 = CONCAT44(uVar5,param_3);
  puVar3[1] = uVar6;
  *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x18) = uVar4;
  return uVar10;
}



// FUNCTION 1424ecc70 DuplicateKeyframe body=246 status=ok
// SIG undefined DuplicateKeyframe(void)

uint UInterpTrackToggle::DuplicateKeyframe
               (longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  void *_Src;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  uVar6 = 0;
  uVar8 = 0;
  uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 4 + (longlong)param_2 * 8);
  if (0 < *(int *)(param_4 + 0x78)) {
    pfVar5 = *(float **)(param_4 + 0x70);
    uVar9 = uVar6;
    do {
      uVar8 = (uint)uVar9;
      if (param_3 < *pfVar5 || param_3 == *pfVar5) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 2;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_4 + 0x78));
  }
  iVar3 = *(int *)(param_4 + 0x78);
  plVar1 = (longlong *)(param_4 + 0x70);
  *(int *)(param_4 + 0x78) = iVar3 + 1;
  if (*(int *)(param_4 + 0x7c) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar7 = (longlong)(int)uVar8;
  _Src = (void *)(*plVar1 + lVar7 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar3 - uVar8) << 3);
  *(undefined8 *)(*plVar1 + lVar7 * 8) = 0;
  lVar4 = *plVar1;
  *(float *)(lVar4 + lVar7 * 8) = param_3;
  *(undefined1 *)(lVar4 + 4 + lVar7 * 8) = uVar2;
  return uVar8;
}



// FUNCTION 1424ecd70 DuplicateKeyframe body=349 status=ok
// SIG undefined DuplicateKeyframe(void)

int UInterpTrackVectorBase::DuplicateKeyframe
              (longlong param_1,int param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    puVar12 = (undefined4 *)((longlong)param_2 * 0x2c + *(longlong *)(param_1 + 0x70));
    if (param_4 == 0) {
      param_4 = param_1;
    }
    uVar2 = *puVar12;
    uVar3 = *(undefined8 *)(puVar12 + 1);
    uVar7 = puVar12[3];
    uVar4 = *(undefined8 *)(puVar12 + 4);
    plVar1 = (longlong *)(param_4 + 0x70);
    uVar8 = puVar12[6];
    uVar5 = *(undefined8 *)(puVar12 + 7);
    uVar9 = puVar12[9];
    uVar6 = *(undefined1 *)(puVar12 + 10);
    iVar11 = FInterpCurve<FVector>::AddPoint(plVar1,param_3,&DAT_1468b5d90);
    lVar10 = *plVar1;
    lVar13 = (longlong)iVar11 * 0x2c;
    *(undefined8 *)(lVar13 + 4 + lVar10) = uVar3;
    *(undefined8 *)(lVar13 + 0x10 + lVar10) = uVar4;
    *(undefined8 *)(lVar13 + 0x1c + lVar10) = uVar5;
    *(undefined4 *)(lVar13 + 0xc + lVar10) = uVar7;
    *(undefined4 *)(lVar13 + 0x18 + lVar10) = uVar8;
    *(undefined4 *)(lVar13 + 0x24 + lVar10) = uVar9;
    *(undefined4 *)(lVar13 + lVar10) = uVar2;
    *(undefined1 *)(lVar13 + 0x28 + lVar10) = uVar6;
    *(undefined4 *)(lVar13 + *plVar1) = param_3;
    FInterpCurve<FVector>::AutoSetTangents
              (plVar1,*(undefined4 *)(param_1 + 0x88),CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
    return iVar11;
  }
  return -1;
}



// FUNCTION 1424eced0 DuplicateKeyframe body=260 status=ok
// SIG undefined DuplicateKeyframe(void)

uint UInterpTrackVisibility::DuplicateKeyframe
               (longlong param_1,int param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  void *_Src;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x78) <= param_2)) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  uVar7 = 0;
  uVar9 = 0;
  uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 4 + (longlong)param_2 * 8);
  uVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 5 + (longlong)param_2 * 8);
  if (0 < *(int *)(param_4 + 0x78)) {
    pfVar6 = *(float **)(param_4 + 0x70);
    uVar10 = uVar7;
    do {
      uVar9 = (uint)uVar10;
      if (param_3 < *pfVar6 || param_3 == *pfVar6) break;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 2;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_4 + 0x78));
  }
  iVar4 = *(int *)(param_4 + 0x78);
  plVar1 = (longlong *)(param_4 + 0x70);
  *(int *)(param_4 + 0x78) = iVar4 + 1;
  if (*(int *)(param_4 + 0x7c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  lVar8 = (longlong)(int)uVar9;
  _Src = (void *)(*plVar1 + lVar8 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar4 - uVar9) << 3);
  *(undefined8 *)(*plVar1 + lVar8 * 8) = 0;
  lVar5 = *plVar1;
  *(float *)(lVar5 + lVar8 * 8) = param_3;
  *(undefined1 *)(lVar5 + 4 + lVar8 * 8) = uVar2;
  *(undefined1 *)(lVar5 + 5 + lVar8 * 8) = uVar3;
  return uVar9;
}



// FUNCTION 1424ecfe0 Empty body=111 status=ok
// SIG undefined Empty(void)

void TArray<TRefCountPtr<HHitProxy>,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  for (iVar4 = *(int *)(param_1 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1424ed050 FUN_1424ed050 body=231 status=ok
// SIG undefined FUN_1424ed050(void)

void FUN_1424ed050(longlong *param_1,undefined1 param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *local_18;
  int local_10;
  
  if ((*(byte *)((longlong)param_1 + 0x47c) & 0xf) != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))();
    UWorld::GetPlayerControllerIterator(uVar3,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      plVar4 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if ((plVar4 != (longlong *)0x0) &&
         (((*(byte *)((longlong)param_1 + 0x92) & 0x40) != 0 ||
          (cVar2 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar2 != '\0')))) {
        uVar1 = *(uint *)((longlong)param_1 + 0x47c);
        (**(code **)(*plVar4 + 0xba8))
                  (plVar4,param_2,uVar1 >> 2 & 0xffffff01,uVar1 >> 3 & 0xffffff01,(byte)uVar1 & 1,
                   (byte)(uVar1 >> 1) & 1);
      }
    }
  }
  return;
}



// FUNCTION 1424ed140 EnableGroupByName body=272 status=ok
// SIG undefined EnableGroupByName(void)

void AMatineeActor::EnableGroupByName(undefined8 param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  lVar1 = FUN_1424efd90();
  if (lVar1 != 0) {
    uVar4 = 0;
    plVar7 = *(longlong **)(*(longlong *)(lVar1 + 0x28) + 0x30);
    uVar2 = (ulonglong)*(int *)(*(longlong *)(lVar1 + 0x28) + 0x38);
    uVar6 = uVar2 & 0x1fffffffffffffff;
    if (plVar7 + uVar2 < plVar7) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        uVar3 = 0;
        lVar1 = *plVar7;
        *(uint *)(lVar1 + 0x68) = *(uint *)(lVar1 + 0x68) & 0xfffffffb;
        *(uint *)(lVar1 + 0x68) = *(uint *)(lVar1 + 0x68) | (param_3 ^ 1) * 4;
        uVar2 = uVar3;
        if (0 < *(int *)(lVar1 + 0x40)) {
          do {
            UInterpTrack::EnableTrack
                      (*(undefined8 *)(uVar2 + *(longlong *)(lVar1 + 0x38)),param_3,1);
            uVar5 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar5;
            uVar2 = uVar2 + 8;
          } while ((int)uVar5 < *(int *)(lVar1 + 0x40));
        }
        plVar7 = plVar7 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1424ed250 EnableTrack body=139 status=ok
// SIG undefined EnableTrack(void)

void UInterpTrack::EnableTrack(longlong param_1,byte param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffffb;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | (param_2 ^ 1) << 2;
  if ((param_3 != '\0') && (iVar2 = 0, 0 < *(int *)(param_1 + 0x40))) {
    lVar1 = 0;
    do {
      EnableTrack(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar1),(uint)param_2,param_3);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1424ed2e0 FUN_1424ed2e0 body=110 status=ok
// SIG undefined FUN_1424ed2e0(void)

void FUN_1424ed2e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x9f);
    param_1[0x9f] = 0;
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1424ed350 Eval body=867 status=ok
// SIG undefined Eval(void)

float * FInterpCurve<FLinearColor>::Eval
                  (undefined8 *param_1,float *param_2,float param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar10 = *(int *)(param_1 + 1);
  uVar14 = (ulonglong)iVar10;
  uVar13 = iVar10 - 1;
  if (iVar10 == 0) {
    uVar7 = param_4[1];
    *(undefined8 *)param_2 = *param_4;
    *(undefined8 *)(param_2 + 2) = uVar7;
    return param_2;
  }
  pfVar6 = (float *)*param_1;
  uVar15 = iVar10 - 1;
  if (*pfVar6 <= param_3) {
    lVar11 = uVar14 - 1;
    if (param_3 < pfVar6[lVar11 * 0xe]) {
      uVar15 = 0;
      while (1 < iVar10) {
        uVar9 = (int)((int)uVar14 + uVar15) / 2;
        uVar14 = uVar14 & 0xffffffff;
        if (param_3 < pfVar6[(longlong)(int)uVar9 * 0xe]) {
          uVar14 = (ulonglong)uVar9;
          uVar9 = uVar15;
        }
        uVar15 = uVar9;
        iVar10 = (int)uVar14 - uVar9;
      }
    }
    if (uVar15 != 0xffffffff) {
      if (uVar15 == uVar13) {
        if (*(char *)(param_1 + 2) == '\0') {
          uVar7 = *(undefined8 *)(pfVar6 + lVar11 * 0xe + 1 + 2);
          *(undefined8 *)param_2 = *(undefined8 *)(pfVar6 + lVar11 * 0xe + 1);
          *(undefined8 *)(param_2 + 2) = uVar7;
          return param_2;
        }
        if (*(float *)((longlong)param_1 + 0x14) + pfVar6[lVar11 * 0xe] <= param_3)
        goto LAB_1424ed6a5;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (uVar15 != uVar13)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      lVar11 = (longlong)(int)uVar15;
      iVar10 = 0;
      if (!bVar8) {
        iVar10 = uVar15 + 1;
      }
      pfVar12 = pfVar6 + (longlong)iVar10 * 0xe;
      if (bVar8) {
        fVar22 = *(float *)((longlong)param_1 + 0x14);
      }
      else {
        fVar22 = *pfVar12 - pfVar6[lVar11 * 0xe];
      }
      if ((0.0 < fVar22) && (*(char *)(pfVar6 + lVar11 * 0xe + 0xd) != '\x02')) {
        fVar21 = (param_3 - pfVar6[lVar11 * 0xe]) / fVar22;
        if (*(char *)(pfVar6 + lVar11 * 0xe + 0xd) == '\0') {
          fVar22 = pfVar12[2];
          fVar1 = pfVar6[lVar11 * 0xe + 2];
          fVar16 = pfVar6[lVar11 * 0xe + 2];
          *param_2 = (pfVar12[1] - pfVar6[lVar11 * 0xe + 1]) * fVar21 + pfVar6[lVar11 * 0xe + 1];
          fVar19 = pfVar12[3];
          fVar2 = pfVar6[lVar11 * 0xe + 3];
          param_2[1] = (fVar22 - fVar1) * fVar21 + fVar16;
          fVar22 = pfVar12[4];
          fVar1 = pfVar6[lVar11 * 0xe + 4];
          fVar16 = pfVar6[lVar11 * 0xe + 4];
          param_2[2] = (fVar19 - fVar2) * fVar21 + pfVar6[lVar11 * 0xe + 3];
          param_2[3] = (fVar22 - fVar1) * fVar21 + fVar16;
          return param_2;
        }
        fVar16 = fVar21 * fVar21;
        fVar1 = pfVar6[lVar11 * 0xe + 10];
        fVar19 = fVar16 * fVar21;
        fVar17 = fVar19 - fVar16;
        fVar20 = fVar16 * 3.0 - (fVar19 + fVar19);
        fVar18 = ((fVar19 + fVar19) - fVar16 * 3.0) + 1.0;
        fVar21 = (fVar19 - (fVar16 + fVar16)) + fVar21;
        fVar16 = pfVar12[6];
        fVar19 = pfVar6[lVar11 * 0xe + 2];
        *param_2 = fVar22 * pfVar6[lVar11 * 0xe + 9] * fVar21 + fVar18 * pfVar6[lVar11 * 0xe + 1] +
                   fVar22 * pfVar12[5] * fVar17 + fVar20 * pfVar12[1];
        fVar2 = pfVar6[lVar11 * 0xe + 0xb];
        fVar3 = pfVar12[7];
        fVar4 = pfVar6[lVar11 * 0xe + 4];
        fVar5 = pfVar6[lVar11 * 0xe + 3];
        param_2[1] = fVar22 * fVar1 * fVar21 + fVar18 * fVar19 + fVar22 * fVar16 * fVar17 +
                     fVar20 * pfVar12[2];
        fVar1 = pfVar12[4];
        fVar16 = pfVar6[lVar11 * 0xe + 0xc];
        fVar19 = pfVar12[8];
        param_2[2] = fVar22 * fVar2 * fVar21 + fVar18 * fVar5 + fVar22 * fVar3 * fVar17 +
                     fVar20 * pfVar12[3];
        param_2[3] = fVar22 * fVar16 * fVar21 + fVar18 * fVar4 + fVar22 * fVar19 * fVar17 +
                     fVar20 * fVar1;
        return param_2;
      }
      uVar7 = *(undefined8 *)(pfVar6 + lVar11 * 0xe + 1 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)(pfVar6 + lVar11 * 0xe + 1);
      *(undefined8 *)(param_2 + 2) = uVar7;
      return param_2;
    }
  }
LAB_1424ed6a5:
  uVar7 = *(undefined8 *)(pfVar6 + 3);
  *(undefined8 *)param_2 = *(undefined8 *)(pfVar6 + 1);
  *(undefined8 *)(param_2 + 2) = uVar7;
  return param_2;
}



// FUNCTION 1424ed6c0 Eval body=586 status=ok
// SIG undefined Eval(void)

float * FInterpCurve<MatineeKeyReduction::SFLOAT>::Eval
                  (undefined8 *param_1,float *param_2,float param_3,float *param_4)

{
  float *pfVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar4 = *(int *)(param_1 + 1);
  uVar9 = (ulonglong)iVar4;
  uVar7 = iVar4 - 1;
  if (iVar4 == 0) {
    *param_2 = *param_4;
    return param_2;
  }
  pfVar1 = (float *)*param_1;
  uVar8 = iVar4 - 1;
  if (*pfVar1 <= param_3) {
    lVar5 = uVar9 - 1;
    if (param_3 < pfVar1[lVar5 * 5]) {
      uVar8 = 0;
      while (1 < iVar4) {
        uVar3 = (int)((int)uVar9 + uVar8) / 2;
        uVar9 = uVar9 & 0xffffffff;
        if (param_3 < pfVar1[(longlong)(int)uVar3 * 5]) {
          uVar9 = (ulonglong)uVar3;
          uVar3 = uVar8;
        }
        uVar8 = uVar3;
        iVar4 = (int)uVar9 - uVar3;
      }
    }
    if (uVar8 != 0xffffffff) {
      if (uVar8 == uVar7) {
        if (*(char *)(param_1 + 2) == '\0') {
          *param_2 = pfVar1[lVar5 * 5 + 1];
          return param_2;
        }
        if (*(float *)((longlong)param_1 + 0x14) + pfVar1[lVar5 * 5] <= param_3) goto LAB_1424ed8fa;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (uVar8 != uVar7)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar5 = (longlong)(int)uVar8;
      iVar4 = 0;
      if (!bVar2) {
        iVar4 = uVar8 + 1;
      }
      lVar6 = (longlong)iVar4;
      if (!bVar2) {
        fVar13 = pfVar1[lVar6 * 5] - pfVar1[lVar5 * 5];
      }
      else {
        fVar13 = *(float *)((longlong)param_1 + 0x14);
      }
      if ((0.0 < fVar13) && (*(char *)(pfVar1 + lVar5 * 5 + 4) != '\x02')) {
        fVar12 = (param_3 - pfVar1[lVar5 * 5]) / fVar13;
        if (*(char *)(pfVar1 + lVar5 * 5 + 4) == '\0') {
          *param_2 = (pfVar1[lVar6 * 5 + 1] - pfVar1[lVar5 * 5 + 1]) * fVar12 +
                     pfVar1[lVar5 * 5 + 1];
          return param_2;
        }
        fVar11 = fVar12 * fVar12;
        fVar10 = fVar11 * fVar12;
        *param_2 = ((fVar10 - (fVar11 + fVar11)) + fVar12) * fVar13 * pfVar1[lVar5 * 5 + 3] +
                   (((fVar10 + fVar10) - fVar11 * 3.0) + 1.0) * pfVar1[lVar5 * 5 + 1] +
                   fVar13 * pfVar1[lVar6 * 5 + 2] * (fVar10 - fVar11) +
                   (fVar11 * 3.0 - (fVar10 + fVar10)) * pfVar1[lVar6 * 5 + 1];
        return param_2;
      }
      *param_2 = pfVar1[lVar5 * 5 + 1];
      return param_2;
    }
  }
LAB_1424ed8fa:
  *param_2 = pfVar1[1];
  return param_2;
}



// FUNCTION 1424ed910 FUN_1424ed910 body=1584 status=ok
// SIG undefined FUN_1424ed910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424ed910(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  bool bVar4;
  float *pfVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_res8;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  
  fVar18 = DAT_1468b5d98;
  fVar19 = (float)param_4;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      *param_2 = _DAT_1468b5d90;
      local_f0 = fVar18;
      goto LAB_1424edf0b;
    }
    if ((1 < iVar1) &&
       (pfVar2 = *(float **)(param_1 + 0x70), *pfVar2 <= fVar19 && fVar19 != *pfVar2)) {
      if ((fVar19 < pfVar2[(longlong)iVar1 * 0xb + -0xb]) && (iVar10 = 1, 1 < iVar1)) {
        lVar9 = 1;
        pfVar5 = pfVar2;
        do {
          pfVar5 = pfVar5 + 0xb;
          if (fVar19 < *pfVar5) {
            fVar18 = pfVar2[(longlong)iVar10 * 0xb] - pfVar2[(longlong)iVar10 * 0xb + -0xb];
            if ((fVar18 <= 0.0) || (*(char *)(pfVar2 + (longlong)iVar10 * 0xb + -1) == '\x02')) {
              FUN_1424f6e30(param_1,param_3,iVar10 + -1,&local_res8,&local_f8,0,0);
              *param_2 = local_f8;
            }
            else {
              fVar19 = (fVar19 - pfVar2[(longlong)iVar10 * 0xb + -0xb]) / fVar18;
              if (*(char *)(pfVar2 + (longlong)iVar10 * 0xb + -1) == '\0') {
                FUN_1424f6e30(param_1,param_3,iVar10 + -1,&local_res8,&local_e8,0,0);
                FUN_1424f6e30(param_1,param_3,iVar10,&local_res8,&local_f8,0,0);
                local_f0 = local_e0 + (local_f0 - local_e0) * fVar19;
                *param_2 = CONCAT44(local_e4 + (local_f8._4_4_ - local_e4) * fVar19,
                                    local_e8 + ((float)local_f8 - local_e8) * fVar19);
              }
              else {
                FUN_1424f6e30(param_1,param_3,iVar10 + -1,&local_res8,&local_c8,0,&local_f8);
                FUN_1424f6e30(param_1,param_3,iVar10,&local_res8,&local_d8,&local_e8,0);
                fVar16 = fVar19 * fVar19;
                fVar17 = fVar16 * fVar19;
                fVar14 = fVar17 - fVar16;
                fVar11 = fVar16 * 3.0 - (fVar17 + fVar17);
                fVar19 = (fVar17 - (fVar16 + fVar16)) + fVar19;
                fVar16 = ((fVar17 + fVar17) - fVar16 * 3.0) + 1.0;
                local_f0 = local_d0 * fVar11 +
                           local_e0 * fVar18 * fVar14 +
                           local_f0 * fVar18 * fVar19 + local_c0 * fVar16;
                *param_2 = CONCAT44(local_d4 * fVar11 +
                                    local_e4 * fVar18 * fVar14 +
                                    local_f8._4_4_ * fVar18 * fVar19 + local_c8._4_4_ * fVar16,
                                    local_d8 * fVar11 +
                                    local_e8 * fVar18 * fVar14 +
                                    (float)local_f8 * fVar18 * fVar19 + (float)local_c8 * fVar16);
              }
            }
            goto LAB_1424edf0b;
          }
          iVar10 = iVar10 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar1);
      }
      FUN_1424f6e30(param_1,param_3,iVar1 + -1,&local_res8,&local_f8,0,0);
      *param_2 = local_f8;
      goto LAB_1424edf0b;
    }
    lVar9 = 0;
    local_res8 = 0;
    local_f8 = **(longlong **)(param_1 + 0xa0);
    if ((local_f8 != 0) && (param_3 != 0)) {
      plVar7 = *(longlong **)(param_3 + 0x20);
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar7 + 0x278))(plVar7);
        lVar8 = *(longlong *)(param_3 + 0x20);
      }
      uVar15 = *(undefined8 *)(lVar8 + 0x20);
      uVar6 = FName::ToString(&local_f8,&local_c8);
      plVar7 = (longlong *)FUN_1424efd90(uVar15,uVar6);
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (((lVar9 != 0) && (plVar7 != (longlong *)0x0)) &&
         (lVar9 = (**(code **)(*plVar7 + 0x278))(plVar7), lVar9 != 0)) {
        lVar9 = (**(code **)(*plVar7 + 0x278))(plVar7);
        if (lVar9 != 0) {
          lVar8 = FUN_1429e18b0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(longlong *)(lVar9 + 0x488) != 0)) {
            lVar9 = *(longlong *)(lVar9 + 0x488);
          }
        }
        lVar9 = *(longlong *)(lVar9 + 0x168);
        uVar15 = _DAT_1468b5d90;
        local_f0 = DAT_1468b5d98;
        if (lVar9 != 0) {
          local_f0 = *(float *)(lVar9 + 0x228);
          uVar15 = *(undefined8 *)(lVar9 + 0x220);
        }
        goto LAB_1424edf07;
      }
    }
    local_f0 = *(float *)(*(longlong *)(param_1 + 0x70) + 0xc);
    uVar15 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 4);
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    uVar15 = puVar3[1];
    uVar6 = puVar3[2];
    uVar12 = UInterpTrackMoveAxis::EvalValueAtTime(*puVar3,param_3,param_4);
    uVar13 = UInterpTrackMoveAxis::EvalValueAtTime(uVar15,param_3,param_4);
    local_f0 = (float)UInterpTrackMoveAxis::EvalValueAtTime(uVar6,param_3,param_4);
    uVar15 = CONCAT44(uVar13,uVar12);
  }
LAB_1424edf07:
  *param_2 = uVar15;
LAB_1424edf0b:
  *(float *)(param_2 + 1) = local_f0;
  return param_2;
}



// FUNCTION 1424edf40 FUN_1424edf40 body=1637 status=ok
// SIG undefined FUN_1424edf40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424edf40(longlong param_1,undefined8 *param_2,longlong param_3,float param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint7 uVar10;
  undefined8 *puVar9;
  longlong lVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_res8;
  undefined8 local_128;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  longlong local_e8 [2];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  fVar18 = DAT_1468b5d98;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar4 = *(int *)(param_1 + 0x90);
    if (iVar4 == 0) {
      *param_2 = _DAT_1468b5d90;
      local_120 = fVar18;
    }
    else {
      if ((iVar4 < 2) ||
         (pfVar1 = *(float **)(param_1 + 0x88), param_4 < *pfVar1 || param_4 == *pfVar1)) {
        lVar11 = 0;
        local_res8 = 0;
        local_128 = **(longlong **)(param_1 + 0xa0);
        if ((local_128 != 0) && (param_3 != 0)) {
          plVar7 = *(longlong **)(param_3 + 0x20);
          lVar8 = 0;
          if (plVar7 != (longlong *)0x0) {
            lVar11 = (**(code **)(*plVar7 + 0x278))(plVar7);
            lVar8 = *(longlong *)(param_3 + 0x20);
          }
          uVar2 = *(undefined8 *)(lVar8 + 0x20);
          uVar6 = FName::ToString(&local_128,local_e8);
          plVar7 = (longlong *)FUN_1424efd90(uVar2,uVar6);
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
          if (((lVar11 != 0) && (plVar7 != (longlong *)0x0)) &&
             (lVar11 = (**(code **)(*plVar7 + 0x278))(plVar7), lVar11 != 0)) {
            lVar8 = (**(code **)(*plVar7 + 0x278))(plVar7);
            lVar11 = 0;
            if (lVar8 != 0) {
              lVar11 = FUN_1429e18b0();
              uVar10 = (uint7)((ulonglong)(lVar11 + 0x88) >> 8);
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                lVar11 = (ulonglong)uVar10 << 8;
              }
              else {
                lVar11 = CONCAT71(uVar10,1);
              }
              if (((char)lVar11 != '\0') && (lVar11 = *(longlong *)(lVar8 + 0x488), lVar11 != 0)) {
                lVar8 = lVar11;
              }
            }
            lVar8 = *(longlong *)(lVar8 + 0x168);
            if (lVar8 == 0) {
              uVar14 = (undefined4)DAT_1468b5da0;
              uVar15 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
              local_100 = (float)DAT_1468b5da8;
            }
            else {
              local_d8 = *(float *)(lVar8 + 0x210);
              fStack_d4 = *(float *)(lVar8 + 0x214);
              fStack_d0 = *(float *)(lVar8 + 0x218);
              fStack_cc = *(float *)(lVar8 + 0x21c);
              auVar3._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_d4);
              auVar3._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_d8);
              auVar3._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_d0);
              auVar3._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_cc);
              iVar4 = movmskps((int)lVar11,auVar3);
              if (iVar4 != 0) {
                *(float *)(lVar8 + 0x250) = local_d8;
                *(float *)(lVar8 + 0x254) = fStack_d4;
                *(float *)(lVar8 + 600) = fStack_d0;
                *(float *)(lVar8 + 0x25c) = fStack_cc;
                puVar9 = (undefined8 *)FQuat::Rotator(&local_d8,&local_118);
                *(undefined8 *)(lVar8 + 0x260) = *puVar9;
                *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar9 + 1);
              }
              uVar14 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
              uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
              local_100 = (float)*(undefined4 *)(lVar8 + 0x268);
            }
            local_108 = CONCAT44(uVar15,uVar14);
            local_f8 = local_108;
            local_f0 = local_100;
            puVar9 = (undefined8 *)FRotator::Euler(&local_108,local_e8);
            uVar14 = *(undefined4 *)(puVar9 + 1);
            *param_2 = *puVar9;
            *(undefined4 *)(param_2 + 1) = uVar14;
            return param_2;
          }
        }
        uVar14 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xc);
        *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 4);
        *(undefined4 *)(param_2 + 1) = uVar14;
        return param_2;
      }
      if ((param_4 < pfVar1[(longlong)iVar4 * 0xb + -0xb]) && (iVar12 = 1, 1 < iVar4)) {
        lVar11 = 1;
        pfVar5 = pfVar1;
        do {
          pfVar5 = pfVar5 + 0xb;
          if (param_4 < *pfVar5) {
            fVar18 = pfVar1[(longlong)iVar12 * 0xb] - pfVar1[(longlong)iVar12 * 0xb + -0xb];
            if ((fVar18 <= 0.0) || (*(char *)(pfVar1 + (longlong)iVar12 * 0xb + -1) == '\x02')) {
              FUN_1424f71f0(param_1,param_3,iVar12 + -1,&local_res8,&local_128,0,0);
              *param_2 = local_128;
            }
            else {
              fVar19 = (param_4 - pfVar1[(longlong)iVar12 * 0xb + -0xb]) / fVar18;
              if (*(char *)(pfVar1 + (longlong)iVar12 * 0xb + -1) == '\0') {
                FUN_1424f71f0(param_1,param_3,iVar12 + -1,&local_res8,&local_118,0,0);
                FUN_1424f71f0(param_1,param_3,iVar12,&local_res8,&local_128,0,0);
                local_120 = local_110 + (local_120 - local_110) * fVar19;
                *param_2 = CONCAT44(local_114 + (local_128._4_4_ - local_114) * fVar19,
                                    local_118 + ((float)local_128 - local_118) * fVar19);
              }
              else {
                FUN_1424f71f0(param_1,param_3,iVar12 + -1,&local_res8,&local_f8,0,&local_128);
                FUN_1424f71f0(param_1,param_3,iVar12,&local_res8,&local_108,&local_118,0);
                fVar17 = fVar19 * fVar19;
                fVar20 = fVar17 * fVar19;
                fVar16 = fVar20 - fVar17;
                fVar13 = fVar17 * 3.0 - (fVar20 + fVar20);
                fVar19 = (fVar20 - (fVar17 + fVar17)) + fVar19;
                fVar17 = ((fVar20 + fVar20) - fVar17 * 3.0) + 1.0;
                local_120 = local_100 * fVar13 +
                            local_110 * fVar18 * fVar16 +
                            fVar19 * local_120 * fVar18 + local_f0 * fVar17;
                *param_2 = CONCAT44(local_108._4_4_ * fVar13 +
                                    local_114 * fVar18 * fVar16 +
                                    fVar19 * local_128._4_4_ * fVar18 + local_f8._4_4_ * fVar17,
                                    (float)local_108 * fVar13 +
                                    local_118 * fVar18 * fVar16 +
                                    fVar19 * (float)local_128 * fVar18 + (float)local_f8 * fVar17);
              }
            }
            goto LAB_1424ee579;
          }
          iVar12 = iVar12 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar4);
      }
      FUN_1424f71f0(param_1,param_3,iVar4 + -1,&local_res8,&local_128,0,0);
      *param_2 = local_128;
    }
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(lVar11 + 0x20);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar14 = UInterpTrackMoveAxis::EvalValueAtTime(*(undefined8 *)(lVar11 + 0x18),param_3,param_4);
    uVar15 = UInterpTrackMoveAxis::EvalValueAtTime(uVar2,param_3,param_4);
    local_120 = (float)UInterpTrackMoveAxis::EvalValueAtTime(uVar6,param_3,param_4);
    *param_2 = CONCAT44(uVar15,uVar14);
  }
LAB_1424ee579:
  *(float *)(param_2 + 1) = local_120;
  return param_2;
}



// FUNCTION 1424ee5b0 EvalValueAtTime body=757 status=ok
// SIG undefined EvalValueAtTime(void)

undefined8
UInterpTrackMoveAxis::EvalValueAtTime(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  float local_res20 [2];
  float local_58;
  float local_54;
  float local_50 [14];
  
  uVar6 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar9 = (float)param_3;
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    return 0;
  }
  if ((iVar1 < 2) || (pfVar2 = *(float **)(param_1 + 0x70), fVar9 < *pfVar2 || fVar9 == *pfVar2)) {
    FUN_1424f7750(param_1,param_2,0,local_res8,local_res20,0,0);
    uVar6 = 0;
  }
  else if (fVar9 < pfVar2[(longlong)iVar1 * 5 + -5]) {
    iVar5 = 1;
    if (1 < iVar1) {
      lVar4 = 1;
      pfVar3 = pfVar2;
      do {
        pfVar3 = pfVar3 + 5;
        if (fVar9 < *pfVar3) {
          lVar4 = (longlong)iVar5;
          fVar10 = pfVar2[lVar4 * 5] - pfVar2[lVar4 * 5 + -5];
          if ((fVar10 <= 0.0) || (*(char *)(pfVar2 + lVar4 * 5 + -1) == '\x02')) {
            FUN_1424f7750(param_1,param_2,iVar5 + -1,local_res8,local_res20,0,0);
            uVar6 = 0;
          }
          else {
            fVar9 = (fVar9 - pfVar2[lVar4 * 5 + -5]) / fVar10;
            if (*(char *)(pfVar2 + lVar4 * 5 + -1) == '\0') {
              FUN_1424f7750(param_1,param_2,iVar5 + -1,local_res8,&local_58,0,0);
              FUN_1424f7750(param_1,param_2,iVar5,local_res8,local_res20,0,0);
              uVar6 = 0;
              local_res20[0] = (local_res20[0] - local_58) * fVar9 + local_58;
            }
            else {
              FUN_1424f7750(param_1,param_2,iVar5 + -1,local_res8,&local_58,0,local_res20);
              FUN_1424f7750(param_1,param_2,iVar5,local_res8,local_50,&local_54,0);
              fVar7 = fVar9 * fVar9;
              fVar8 = fVar7 * fVar9;
              local_res20[0] =
                   ((fVar8 - (fVar7 + fVar7)) + fVar9) * local_res20[0] * fVar10 +
                   (((fVar8 + fVar8) - fVar7 * 3.0) + 1.0) * local_58 +
                   (fVar8 - fVar7) * local_54 * fVar10 +
                   (fVar7 * 3.0 - (fVar8 + fVar8)) * local_50[0];
            }
          }
          goto LAB_1424ee75a;
        }
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar1);
    }
    FUN_1424f7750(param_1,param_2,iVar1 + -1,local_res8,local_res20,0,0);
    uVar6 = 0;
  }
  else {
    FUN_1424f7750(param_1,param_2,iVar1 + -1,local_res8,local_res20,0,0);
    uVar6 = 0;
  }
LAB_1424ee75a:
  return CONCAT44(uVar6,local_res20[0]);
}



// FUNCTION 1424ee8b0 Evaluate body=570 status=ok
// SIG undefined Evaluate(void)

float MatineeKeyReduction::MKey<FTwoVectors,6>::Evaluate
                (undefined4 *param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  fVar6 = 0.0;
  FInterpCurve<FTwoVectors>::Eval(param_2,&local_68,*param_1,&local_50);
  iVar2 = 0;
  do {
    if (iVar2 == 0) {
      pfVar4 = (float *)(param_1 + 1);
    }
    else if (iVar2 == 1) {
      pfVar4 = (float *)(param_1 + 4);
    }
    else if (iVar2 == 2) {
      pfVar4 = (float *)(param_1 + 2);
    }
    else if (iVar2 == 3) {
      pfVar4 = (float *)(param_1 + 5);
    }
    else if (iVar2 == 4) {
      pfVar4 = (float *)(param_1 + 3);
    }
    else {
      pfVar4 = (float *)(param_1 + 6);
    }
    if (iVar2 == 0) {
      pfVar1 = &local_68;
    }
    else if (iVar2 == 1) {
      pfVar1 = &local_5c;
    }
    else if (iVar2 == 2) {
      pfVar1 = &local_64;
    }
    else if (iVar2 == 3) {
      pfVar1 = &local_58;
    }
    else if (iVar2 == 4) {
      pfVar1 = &local_60;
    }
    else {
      pfVar1 = &local_54;
    }
    if (iVar2 == 0) {
      pfVar3 = (float *)(param_1 + 1);
    }
    else if (iVar2 == 1) {
      pfVar3 = (float *)(param_1 + 4);
    }
    else if (iVar2 == 2) {
      pfVar3 = (float *)(param_1 + 2);
    }
    else if (iVar2 == 3) {
      pfVar3 = (float *)(param_1 + 5);
    }
    else if (iVar2 == 4) {
      pfVar3 = (float *)(param_1 + 3);
    }
    else {
      pfVar3 = (float *)(param_1 + 6);
    }
    fVar5 = local_68;
    if ((((iVar2 != 0) && (fVar5 = local_5c, iVar2 != 1)) && (fVar5 = local_64, iVar2 != 2)) &&
       ((fVar5 = local_58, iVar2 != 3 && (fVar5 = local_60, iVar2 != 4)))) {
      fVar5 = local_54;
    }
    fVar5 = (*pfVar3 - fVar5) * (*pfVar4 - *pfVar1);
    pfVar4 = param_3;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        pfVar4 = param_3 + 3;
      }
      else if (iVar2 == 2) {
        pfVar4 = param_3 + 1;
      }
      else if (iVar2 == 3) {
        pfVar4 = param_3 + 4;
      }
      else if (iVar2 == 4) {
        pfVar4 = param_3 + 2;
      }
      else {
        pfVar4 = param_3 + 5;
      }
    }
    pfVar1 = param_3;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        pfVar1 = param_3 + 3;
      }
      else if (iVar2 == 2) {
        pfVar1 = param_3 + 1;
      }
      else if (iVar2 == 3) {
        pfVar1 = param_3 + 4;
      }
      else if (iVar2 == 4) {
        pfVar1 = param_3 + 2;
      }
      else {
        pfVar1 = param_3 + 5;
      }
    }
    if (*pfVar1 * *pfVar4 < fVar5) {
      fVar6 = fVar6 + fVar5;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return SQRT(fVar6);
}



// FUNCTION 1424eeaf0 ExecuteTask body=290 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FPerInstanceRenderData::UpdateFromPreallocatedData'::`2'::EURCMacro_FInstanceBuffer_UpdateFromPreallocatedData>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_1424ea9c0(param_1 + 2,param_3,param_1 + 6);
  plVar7 = (longlong *)param_1[3];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
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



// FUNCTION 1424eec20 FUN_1424eec20 body=237 status=ok
// SIG undefined FUN_1424eec20(void)

void FUN_1424eec20(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1424eaac0(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 1424eed10 ExitTimedSection body=60 status=ok
// SIG undefined ExitTimedSection(void)

void FInGamePerformanceTracker::ExitTimedSection(longlong param_1)

{
  int *piVar1;
  LARGE_INTEGER local_res8 [4];
  
  piVar1 = (int *)(param_1 + 0x28);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (DAT_146afbc80 != 0)) {
    QueryPerformanceCounter(local_res8);
    LOCK();
    *(int *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) + (local_res8[0].s.LowPart - *(int *)(param_1 + 0x2c));
    UNLOCK();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 1424eed50 FUN_1424eed50 body=1429 status=ok
// SIG undefined FUN_1424eed50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1424eed50(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  int local_200;
  undefined4 local_1fc;
  void *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198 [2];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [24];
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  uVar7 = *(undefined8 *)(param_2 + 200);
  uVar12 = 0;
  *param_1 = (int)uVar7;
  param_1[1] = (int)((ulonglong)uVar7 >> 0x20);
  bVar5 = true;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_208 = (undefined8 *)0x0;
  iVar11 = 0;
  local_1fc = 0;
  iVar10 = iVar11;
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    iVar10 = *(int *)(*(longlong *)(param_2 + 0xd8) + 0x18);
  }
  local_200 = iVar10;
  local_1b0 = param_3;
  if (0 < iVar10) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_208);
  }
  _guard_xfg_dispatch_icall_nop(local_208,0,(longlong)iVar10 << 3);
  UTexture2D::GetMipData(param_2,0,local_208);
  lVar3 = *(longlong *)(param_2 + 0xd8);
  if (lVar3 != 0) {
    iVar11 = *(int *)(lVar3 + 0xc);
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
    bVar5 = false;
    FName::FName(local_1b8,"ImageUtils",1);
    local_1c8 = *(undefined8 *)(param_2 + 0x18);
    FName::ToString(&local_1c8,local_198);
    local_1e8 = FText::FromString(local_88,local_198);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_118,L"Failed to read Mip Data in: \'{0}\'",L"ImageUtils",
                       L"ExportHDRFailedToReadMipData");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar7);
    local_70[0] = 4;
    local_1c0 = puVar8;
    FText::FText(local_60,local_1e8);
    local_1a8 = *puVar8;
    local_1d8 = local_70;
    puStack_1d0 = &local_40;
    local_1a0 = puVar8[1];
    local_48 = '\x01';
    if (local_1a0 != 0) {
      LOCK();
      *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
      UNLOCK();
    }
    local_188 = local_1d8;
    uStack_180 = puStack_1d0;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_188);
    uVar7 = FText::Format(local_130,&local_1a8,uVar7);
    FText::FText(local_148,uVar7);
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_128 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_178);
    if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_58 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    plVar4 = (longlong *)local_1c0[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    plVar4 = *(longlong **)(local_1e8 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    uVar7 = FUN_14161fb50(local_d8,local_1b8);
    FMessageLog::Warning(uVar7,local_168,local_148);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_160 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_160 + 8))(local_160);
        }
      }
    }
    FMessageLog::~FMessageLog(local_d8);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_140 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_140 + 8))(local_140);
        }
      }
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_110 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_110 + 8))(local_110);
        }
      }
    }
    if (local_198[0] != 0) {
      FMemory::Free();
    }
  }
  if ((iVar11 == 2) || (iVar11 == 10)) {
    param_1[2] = iVar11;
    if (bVar5) {
      uVar6 = IStreamingManager::GetNumWantingResourcesID
                        (**(longlong **)(*(longlong *)(param_2 + 0xd8) + 0x10) + 8);
      local_1f0 = CONCAT44(local_1f0._4_4_,uVar6);
      if (0 < (int)uVar6) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1f8);
      }
      _guard_xfg_dispatch_icall_nop(local_1f8,0,(longlong)(int)uVar6);
      _guard_xfg_dispatch_icall_nop(local_1f8,(void *)*local_208,(ulonglong)uVar6);
    }
  }
  else {
    bVar5 = false;
    FName::FName(&local_1d8,"ImageUtils",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_100,L"Unsupported texture format provided.",L"ImageUtils",
                       L"ExportHDRUnsupportedTextureFormat");
    uVar9 = FUN_14161fb50(local_b0,&local_1d8);
    FMessageLog::Warning(uVar9,local_158,uVar7);
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_150 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_b0);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f8 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_f8 + 8))(local_f8,1);
          bVar5 = false;
        }
      }
    }
  }
  uVar13 = (ulonglong)((longlong)(local_208 + local_200) + (7 - (longlong)local_208)) >> 3;
  if (local_208 + local_200 < local_208) {
    uVar13 = uVar12;
  }
  puVar8 = local_208;
  if (uVar13 != 0) {
    do {
      FMemory::Free(*puVar8);
      uVar12 = uVar12 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar12 != uVar13);
  }
  if (bVar5) {
    FUN_142510350(param_1,&local_1f8,local_1b0);
  }
  if (local_208 != (undefined8 *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  return bVar5;
}



// FUNCTION 1424ef2f0 FUN_1424ef2f0 body=508 status=ok
// SIG undefined FUN_1424ef2f0(void)

undefined8 FUN_1424ef2f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res18 [8];
  uint in_stack_ffffffffffffffa8;
  longlong local_38;
  undefined8 local_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  
  bVar2 = *(byte *)(param_1 + 0xe2);
  uVar7 = 0;
  if (bVar2 == 0) {
    uVar5 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)(ulonglong)bVar2;
    uVar5 = (uint)bVar2;
  }
  iVar6 = (int)plVar11;
  if (uVar5 != 2) {
    if (bVar2 == 0) {
      iVar6 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
    }
    if (iVar6 != 10) {
      return 0;
    }
  }
  lVar8 = FHdrImageWrapper::GetHeight(param_1);
  plVar11 = (longlong *)(lVar8 + 0x68);
  if (lVar8 == 0) {
    plVar11 = (longlong *)0x0;
  }
  (**(code **)(*plVar11 + 0x20))(plVar11,&local_res8);
  local_38 = 0;
  local_30 = 0;
  FUN_1424f8c90(param_1,&local_38);
  bVar2 = *(byte *)(param_1 + 0xe2);
  if (bVar2 == 0) {
    uVar5 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
  }
  else {
    uVar5 = (uint)bVar2;
    uVar7 = (uint)bVar2;
  }
  uVar12 = 0x10;
  if (uVar5 == 2) {
    uVar12 = 8;
  }
  if (bVar2 == 0) {
    uVar7 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
  }
  FUN_14168dc80();
  puVar9 = (undefined8 *)FName::FName(local_res18,L"ImageWrapper",1);
  uVar3 = *puVar9;
  uVar10 = FUN_14168dc80();
  plVar11 = (longlong *)FUN_141690010(uVar10,uVar3);
  (**(code **)(*plVar11 + 0x40))(plVar11,&local_28,5,2,in_stack_ffffffffffffffa8 & 0xffffff00);
  lVar8 = local_38;
  (**(code **)(*local_28 + 8))
            (local_28,local_38,uStack_2c,local_res8,local_resc,(uVar7 == 2) + '\x01',uVar12);
  puVar9 = (undefined8 *)(**(code **)(*local_28 + 0x10))(local_28,100);
  (**(code **)(*param_2 + 0x50))(param_2,*puVar9,*(undefined4 *)((longlong)puVar9 + 0xc));
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_20 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    lVar8 = local_38;
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar8 = local_38;
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
        lVar8 = local_38;
      }
    }
  }
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  return 1;
}



// FUNCTION 1424ef4f0 FUN_1424ef4f0 body=352 status=ok
// SIG undefined FUN_1424ef4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1424ef4f0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_478 [32];
  longlong local_458 [2];
  undefined4 local_448;
  undefined4 local_444;
  uint local_440;
  undefined1 local_438 [16];
  char local_428 [255];
  undefined1 local_329;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  lVar7 = FHdrImageWrapper::GetHeight();
  if (lVar7 == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)(lVar7 + 0x68);
  }
  puVar8 = (undefined4 *)(**(code **)(*plVar11 + 0x20))(plVar11,local_438);
  uVar1 = *puVar8;
  uVar2 = puVar8[1];
  local_448 = uVar1;
  local_444 = uVar2;
  if (*(byte *)(param_1 + 0xe2) == 0) {
    uVar5 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
  }
  else {
    uVar5 = (uint)*(byte *)(param_1 + 0xe2);
  }
  local_458[0] = 0;
  local_458[1] = 0;
  local_440 = uVar5;
  cVar4 = FUN_1424f8c90(param_1,local_458);
  if (cVar4 == '\0') {
    if (local_458[0] != 0) {
      FMemory::Free();
    }
    uVar9 = 0;
  }
  else {
    TCString<wchar_t>::SprintfImpl
              (local_428,"#?RADIANCE\nFORMAT=32-bit_rle_rgbe\n\n-Y %d +X %d\n",uVar2,uVar1);
    local_329 = 0;
    lVar7 = -1;
    do {
      lVar12 = lVar7 + 1;
      lVar3 = lVar7 + 1;
      lVar7 = lVar12;
    } while (local_428[lVar3] != '\0');
    iVar10 = (int)lVar12;
    iVar6 = 0x100;
    if (iVar10 < 0x101) {
      iVar6 = iVar10;
    }
    (**(code **)(*param_2 + 0x50))(param_2,local_428,(longlong)iVar6);
    lVar7 = local_458[0];
    if (uVar5 == 10) {
      FUN_1424dd850();
    }
    else {
      FUN_1424dd130(&local_448,param_2,local_458[0]);
    }
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 1424ef650 FUN_1424ef650 body=403 status=ok
// SIG undefined FUN_1424ef650(void)

ulonglong FUN_1424ef650(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res18 [16];
  uint in_stack_ffffffffffffffa8;
  longlong local_38;
  undefined8 local_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  
  if (*(byte *)(param_1 + 0xe2) == 0) {
    uVar6 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
  }
  else {
    uVar6 = (ulonglong)*(byte *)(param_1 + 0xe2);
  }
  if ((int)uVar6 != 2) {
    return uVar6 & 0xffffffffffffff00;
  }
  lVar7 = FHdrImageWrapper::GetHeight(param_1);
  plVar10 = (longlong *)(lVar7 + 0x68);
  if (lVar7 == 0) {
    plVar10 = (longlong *)0x0;
  }
  (**(code **)(*plVar10 + 0x20))(plVar10,&local_res8);
  local_38 = 0;
  local_30 = 0;
  bVar5 = FUN_1424f8c90(param_1,&local_38);
  FUN_14168dc80();
  puVar8 = (undefined8 *)FName::FName(local_res18,L"ImageWrapper",1);
  uVar3 = *puVar8;
  uVar9 = FUN_14168dc80();
  plVar10 = (longlong *)FUN_141690010(uVar9,uVar3);
  (**(code **)(*plVar10 + 0x40))(plVar10,&local_28,0,2,in_stack_ffffffffffffffa8 & 0xffffff00);
  lVar7 = local_38;
  (**(code **)(*local_28 + 8))(local_28,local_38,uStack_2c,local_res8,local_resc,2,8);
  puVar8 = (undefined8 *)(**(code **)(*local_28 + 0x10))(local_28,100);
  (**(code **)(*param_2 + 0x50))(param_2,*puVar8,*(undefined4 *)((longlong)puVar8 + 0xc));
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    lVar7 = local_38;
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar7 = local_38;
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
        lVar7 = local_38;
      }
    }
  }
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
  return (ulonglong)bVar5;
}



// FUNCTION 1424ef7f0 FUN_1424ef7f0 body=25 status=ok
// SIG undefined FUN_1424ef7f0(void)

void FUN_1424ef7f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_18 [24];
  
  FUN_1424eed50(local_18,param_1,param_2);
  return;
}



// FUNCTION 1424ef810 FUN_1424ef810 body=116 status=ok
// SIG undefined FUN_1424ef810(void)

void FUN_1424ef810(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x458);
  iVar5 = 0;
  if (0 < *(int *)(lVar2 + 0x38)) {
    lVar6 = 0;
    do {
      iVar4 = 0;
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(lVar2 + 0x30));
      *(uint *)(lVar2 + 0x4c) = *(uint *)(lVar2 + 0x4c) | 2;
      if (0 < *(int *)(lVar2 + 0x38)) {
        lVar3 = 0;
        do {
          iVar4 = iVar4 + 1;
          puVar1 = (uint *)(*(longlong *)(lVar3 + *(longlong *)(lVar2 + 0x30)) + 0x68);
          *puVar1 = *puVar1 | 0x40;
          lVar3 = lVar3 + 8;
        } while (iVar4 < *(int *)(lVar2 + 0x38));
      }
      lVar2 = *(longlong *)(param_2 + 0x458);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(lVar2 + 0x38));
  }
  return;
}



// FUNCTION 1424ef890 FUN_1424ef890 body=1187 status=ok
// SIG undefined FUN_1424ef890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001424efa07) */

void FUN_1424ef890(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong **pplVar10;
  longlong lVar11;
  longlong lVar12;
  longlong **pplVar13;
  uint uVar14;
  longlong **pplVar15;
  undefined8 local_res10;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  ulonglong local_180;
  longlong *local_178;
  longlong **local_170;
  undefined8 *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148 [2];
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  int local_100;
  int local_fc;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58;
  ushort local_57;
  undefined1 local_55;
  ulonglong local_48;
  longlong **pplVar16;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_res10 = param_2;
  local_160 = param_3;
  local_148[0] = param_1;
  puVar2 = (undefined8 *)FName::FName(&local_178,L"AssetRegistry",1);
  uVar6 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar6);
  local_178 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  pplVar10 = (longlong **)0x0;
  local_170 = (longlong **)0x0;
  local_168 = (undefined8 *)(ulonglong)(uint)local_168;
  local_188 = (longlong *)0x0;
  local_180 = 0;
  FPackageName::QueryRootContentPaths(&local_188);
  uVar8 = (ulonglong)(int)local_180;
  plVar5 = local_188 + uVar8 * 2;
  pplVar13 = pplVar10;
  plVar4 = local_188;
  pplVar16 = pplVar10;
  pplVar15 = pplVar10;
  uVar6 = local_190;
  if (local_188 != plVar5) {
    do {
      local_190 = uVar6;
      iVar1 = (int)plVar4[1];
      local_198 = (longlong *)0x0;
      _Src = (void *)*plVar4;
      local_190 = CONCAT44(local_190._4_4_,iVar1);
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_198,(6 - (uint)(iVar1 != 0)) + iVar1,0);
      _guard_xfg_dispatch_icall_nop(local_198,_Src,(longlong)iVar1 * 2);
      FString::PathAppend(&local_198);
      uVar14 = (int)pplVar15 + 1;
      local_168 = (undefined8 *)CONCAT44(local_168._4_4_,uVar14);
      if ((int)pplVar13 < (int)uVar14) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_170);
        pplVar13 = (longlong **)((ulonglong)local_168 >> 0x20);
        pplVar10 = local_170;
        uVar14 = (uint)local_168;
      }
      pplVar16 = (longlong **)(ulonglong)uVar14;
      pplVar15 = pplVar10 + (longlong)(int)pplVar15 * 2;
      *pplVar15 = (longlong *)0x0;
      *pplVar15 = local_198;
      *(undefined4 *)(pplVar15 + 1) = (undefined4)local_190;
      *(undefined4 *)((longlong)pplVar15 + 0xc) = local_190._4_4_;
      local_190 = 0;
      uVar6 = local_190;
      local_190 = 0;
      local_198 = (longlong *)0x0;
      plVar4 = plVar4 + 2;
      pplVar15 = pplVar16;
    } while (plVar4 != plVar5);
    uVar8 = local_180 & 0xffffffff;
    param_3 = local_160;
  }
  uVar14 = (uint)uVar8;
  plVar4 = local_188;
  while (uVar14 != 0) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
    uVar14 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar14;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  uVar14 = (uint)pplVar16;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_57 = 0;
  local_55 = 0;
  local_58 = 1;
  iVar1 = local_100;
  for (pplVar13 = pplVar10; pplVar13 != pplVar10 + (longlong)(int)uVar14 * 2;
      pplVar13 = pplVar13 + 2) {
    if (*(int *)(pplVar13 + 1) == 0) {
      plVar4 = (longlong *)&DAT_143f3eda8;
    }
    else {
      plVar4 = *pplVar13;
    }
    local_100 = iVar1;
    FName::FName(&local_160,plVar4,1);
    uVar8 = local_120;
    lVar11 = (longlong)(int)local_120;
    iVar1 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar1);
    if (local_120._4_4_ < iVar1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar8 & 0xffffffff);
    }
    *(undefined8 *)(local_128 + lVar11 * 8) = local_160;
    iVar1 = local_100;
  }
  local_100 = iVar1 + 1;
  local_57 = local_57 & 0xff;
  if (local_fc < local_100) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_108,iVar1);
  }
  *(undefined8 *)(local_108 + (longlong)iVar1 * 8) = param_3;
  local_57 = local_57 & 0xff00;
  local_158 = 0;
  local_150 = 0;
  (**(code **)(*local_178 + 0x40))(local_178,&local_138,&local_158);
  lVar11 = local_148[0];
  lVar12 = (longlong)(int)local_150 * 0x58 + local_158;
  if (local_158 != lVar12) {
    local_170 = &local_178;
    local_168 = &local_res10;
    lVar9 = local_158;
    do {
      uVar6 = FName::ToString(lVar9 + 8,local_148);
      puVar2 = (undefined8 *)FPackageName::GetSourcePackagePath(&local_188,uVar6);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar2;
      }
      FName::FName(&local_178,puVar7,1);
      if (local_188 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_148[0] != 0) {
        FMemory::Free();
      }
      TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                (lVar11 + 0x60,&local_198,&local_170,0);
      lVar9 = lVar9 + 0x58;
    } while (lVar9 != lVar12);
  }
  FUN_1404be960(&local_158);
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  local_b0 = 0;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_f8,0);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  pplVar13 = pplVar10;
  if (local_138 != 0) {
    FMemory::Free();
  }
  while (uVar14 != 0) {
    if (*pplVar13 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar14 = (int)pplVar16 - 1;
    pplVar16 = (longlong **)(ulonglong)uVar14;
    pplVar13 = pplVar13 + 2;
  }
  if (pplVar10 != (longlong **)0x0) {
    FMemory::Free(pplVar10);
  }
  return;
}



// FUNCTION 1424efd40 FUN_1424efd40 body=73 status=ok
// SIG undefined FUN_1424efd40(void)

longlong FUN_1424efd40(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar1 = 0;
    if (0 < *(int *)(param_1 + 0x4a0)) {
      plVar2 = *(longlong **)(param_1 + 0x498);
      uVar3 = uVar1;
      do {
        if (*(longlong *)(*plVar2 + 0x28) == param_2) {
          return (*(longlong **)(param_1 + 0x498))[(int)uVar3];
        }
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar1 = uVar1 + 1;
        plVar2 = plVar2 + 1;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x4a0));
    }
  }
  return 0;
}



// FUNCTION 1424efd90 FUN_1424efd90 body=204 status=ok
// SIG undefined FUN_1424efd90(void)

undefined8 FUN_1424efd90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4a0)) {
    lVar6 = 0;
    do {
      puVar2 = (undefined8 *)
               FName::ToString(*(longlong *)
                                (*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x498)) + 0x28) +
                               0x40,local_18);
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
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (iVar1 == 0) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x498) + (longlong)iVar5 * 8);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x4a0));
  }
  return 0;
}



// FUNCTION 1424efe60 FUN_1424efe60 body=192 status=ok
// SIG undefined FUN_1424efe60(void)

undefined8 FUN_1424efe60(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    uVar7 = 0;
    uVar5 = uVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    if (((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) && (uVar5 = uVar7, 0 < *(int *)(param_1 + 0x4a0)))
    {
      do {
        plVar2 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x498));
        cVar3 = (**(code **)(*plVar2 + 0x290))(plVar2,param_2);
        if (cVar3 != '\0') {
          return *(undefined8 *)(*(longlong *)(param_1 + 0x498) + (longlong)(int)uVar7 * 8);
        }
        uVar4 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar4;
        uVar5 = uVar5 + 8;
      } while ((int)uVar4 < *(int *)(param_1 + 0x4a0));
    }
  }
  return 0;
}



// FUNCTION 1424eff20 FindKey body=90 status=ok
// SIG undefined FindKey(void)

undefined8 *
UInheritableComponentHandler::FindKey(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x80 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      return param_2;
    }
    if ((*(longlong *)(lVar2 + 0x18) == param_3) ||
       ((*(longlong *)(lVar2 + 8) != 0 &&
        (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x18) == param_3)))) break;
    lVar2 = lVar2 + 0x80;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  *param_2 = *(undefined8 *)(lVar2 + 0x10);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  param_2[2] = *(undefined8 *)(lVar2 + 0x20);
  param_2[3] = uVar1;
  return param_2;
}



// FUNCTION 1424eff80 FUN_1424eff80 body=498 status=ok
// SIG undefined FUN_1424eff80(void)

void FUN_1424eff80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res18 [2];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar3 = (undefined8 *)FName::FName(local_res18,L"AssetRegistry",1);
  uVar6 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FUN_141690010(uVar4,uVar6);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5);
  local_38 = 0;
  local_30 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  lVar9 = *plVar5;
  puVar3 = (undefined8 *)FName::FName(local_res18,puVar7,1);
  (**(code **)(lVar9 + 0x20))(plVar5,*puVar3,&local_38,1,0);
  lVar9 = (longlong)(int)local_30 * 0x58 + local_38;
  if (local_38 != lVar9) {
    lVar8 = local_38 + 8;
    do {
      uVar6 = FName::ToString(lVar8,local_18);
      puVar3 = (undefined8 *)FPackageName::GetSourcePackagePath(local_28,uVar6);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar3;
      }
      FName::FName(&local_48,puVar7,1);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar5 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar5 = param_4 + 7;
        }
        iVar2 = *(int *)((longlong)plVar5 +
                        ((longlong)((int)((ulonglong)local_48 >> 0x20) + (int)local_48) &
                        (longlong)(int)param_4[9] - 1U) * 4);
        if (iVar2 != -1) {
          do {
            plVar5 = (longlong *)((longlong)iVar2 * 0x20 + *param_4);
            if (*plVar5 == local_48) {
              if ((iVar2 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_1424f0134;
              break;
            }
            iVar2 = (int)plVar5[3];
          } while (iVar2 != -1);
        }
      }
      local_40 = &local_48;
      FUN_1416e0780(param_4,local_res18,&local_40,0);
      plVar5 = (longlong *)((longlong)local_res18[0] * 0x20 + *param_4);
LAB_1424f0134:
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar5 + 1,lVar8);
      lVar1 = lVar8 + 0x50;
      lVar8 = lVar8 + 0x58;
    } while (lVar1 != lVar9);
  }
  FUN_1404be960(&local_38);
  return;
}



// FUNCTION 1424f0180 FindTracksByClass body=182 status=ok
// SIG undefined FindTracksByClass(void)

void UInterpGroup::FindTracksByClass(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x30));
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(param_2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(param_2 + 0x90) * 8) !=
          param_2 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1424f0240 FinishDestroy body=177 status=ok
// SIG undefined FinishDestroy(void)

void UStringTable::FinishDestroy(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_18;
  longlong *local_10;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar6 = FUN_141607d00();
    FStringTableRegistry::UnregisterStringTable(uVar6);
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x28) != &local_18) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_10);
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
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1424f0300 FUN_1424f0300 body=165 status=ok
// SIG undefined FUN_1424f0300(void)

int FUN_1424f0300(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x278))();
  iVar3 = 0;
  if (0 < param_2) {
    iVar3 = *(int *)(param_1[0xe] + -8 + (longlong)param_2 * 0x18);
  }
  if (param_2 < iVar1 + -1) {
    iVar1 = *(int *)(param_1[0xe] + 0x28 + (longlong)param_2 * 0x18);
    iVar2 = iVar3 + 0x14;
    if (iVar1 != 0) {
      iVar2 = iVar1;
    }
    if (iVar2 <= iVar3) {
      return iVar3 + 1;
    }
    iVar1 = (iVar3 / 10 + 1) * 10;
    if ((iVar1 <= iVar3) || (iVar2 <= iVar1)) {
      return (iVar2 - iVar3) / 2 + iVar3;
    }
  }
  else {
    iVar1 = iVar3 + 10;
  }
  return iVar1;
}



// FUNCTION 1424f03b0 FUN_1424f03b0 body=185 status=ok
// SIG undefined FUN_1424f03b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1424f03b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc3f0) {
    _Init_thread_header(&DAT_146afc3f0);
    if (DAT_146afc3f0 == -1) {
      _DAT_146afc3c0 = 0xffffffff;
      _DAT_146afc390 = 0;
      _DAT_146afc398 = 0;
      _DAT_146afc3b0 = 0;
      _DAT_146afc3b8 = 0;
      _DAT_146afc3c4 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146afc3c8);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146afc3c8,4000);
      atexit(FUN_143eafcf0);
      _Init_thread_footer(&DAT_146afc3f0);
      return &DAT_146afc390;
    }
  }
  return &DAT_146afc390;
}



// FUNCTION 1424f0470 FUN_1424f0470 body=1747 status=ok
// SIG undefined FUN_1424f0470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424f0470(longlong *param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
                  longlong *param_5,undefined1 param_6,char param_7)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  float *pfVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
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
  undefined1 auStack_248 [32];
  float local_228;
  float local_224;
  float local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  float local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  uint local_198 [2];
  longlong local_190;
  longlong local_188;
  int local_180;
  int local_178;
  char local_174;
  int local_170;
  longlong *local_168;
  longlong local_160;
  int local_158;
  undefined8 local_148;
  char local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1f0 = param_5;
  *(undefined4 *)(param_5 + 1) = 0;
  local_1e8 = param_1;
  if (0x7fffffff < *(uint *)((longlong)param_5 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_5,0);
  }
  uVar1 = *param_3;
  fVar21 = *param_4;
  fVar20 = (float)uVar1;
  local_220 = fVar21;
  if (fVar20 <= fVar21) {
    local_220 = fVar20;
  }
  local_1d0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar22 = param_4[1];
  local_228 = local_1d0._4_4_;
  local_224 = fVar22;
  if (local_1d0._4_4_ <= fVar22) {
    local_224 = local_1d0._4_4_;
  }
  local_208 = uVar1;
  if (fVar20 < fVar21) {
    local_208 = CONCAT44(local_1d0._4_4_,fVar21);
  }
  if (local_1d0._4_4_ < fVar22) {
    local_228 = fVar22;
  }
  local_138 = 0x3f8000003f800000;
  uStack_130 = 0x3f8000003f800000;
  local_128 = 0xbf8000003f800000;
  uStack_120 = 0xbf8000003f800000;
  local_118 = 0x3f8000003f800000;
  uStack_110 = 0xbf800000bf800000;
  local_108 = 0x3f800000bf800000;
  uStack_100 = 0xbf8000003f800000;
  local_f8 = 0x3f800000;
  uStack_f4 = 0xbf800000;
  uStack_f0 = 0xbf800000;
  uStack_ec = 0xbf800000;
  local_e8 = 0x3f800000;
  uStack_e4 = 0xbf800000;
  uStack_e0 = 0xbf800000;
  uStack_dc = 0xbf800000;
  local_1d0 = uVar1;
  local_218 = (**(code **)(*param_1 + 0x148))(param_1,0x3f800000);
  local_198[0] = 5;
  local_140 = '\0';
  local_200 = param_2;
  FUN_14044bc80(&local_190,&local_218,&local_200);
  FUN_14045a130(local_198);
  iVar18 = local_178;
  plVar14 = local_168;
joined_r0x0001424f05c0:
  do {
    local_178 = iVar18;
    local_168 = plVar14;
    if (local_174 != '\0') {
      if (local_140 != '\0') {
        local_140 = 0;
        UWorld::RemoveOnActorSpawnedHandler(local_190,local_148);
        if (local_160 != 0) {
          FMemory::Free();
        }
        if (local_188 != 0) {
          FMemory::Free();
        }
      }
      return;
    }
    (**(code **)(*plVar14 + 0x560))(plVar14,&local_1b8,param_6);
    pfVar15 = (float *)((longlong)&local_138 + 4);
    fVar27 = local_1b0 + local_1a4;
    fVar28 = local_1b4 + local_1a8;
    fVar29 = local_1b8 + local_1ac;
    fVar24 = local_1a4 - local_1b0;
    fVar25 = local_1a8 - local_1b4;
    fVar26 = local_1ac - local_1b8;
    bVar4 = false;
    lVar19 = 8;
    fVar21 = (float)DAT_1468b5d88;
    fVar20 = DAT_1468b5d88._4_4_;
    fVar22 = DAT_1468b5d88._4_4_;
    fVar23 = (float)DAT_1468b5d88;
    do {
      local_1f8 = fVar24 * 0.5 * pfVar15[1] + fVar27 * 0.5;
      local_200 = CONCAT44(fVar25 * 0.5 * *pfVar15 + fVar28 * 0.5,
                           fVar26 * 0.5 * pfVar15[-1] + fVar29 * 0.5);
      cVar7 = FUN_1424fd5d0(param_1);
      if (cVar7 == '\0') {
        local_218._0_4_ = 0.0;
        local_210 = 0;
        local_218._4_4_ = 0.0;
        local_218 = 0;
      }
      else {
        local_1d8 = local_200;
        local_1d0 = CONCAT44(local_1d0._4_4_,local_1f8);
        UCanvas::Project(param_1[0x95],&local_218,&local_1d8,0);
      }
      if (bVar4) {
        if ((float)local_218 <= fVar21) {
          fVar21 = (float)local_218;
        }
        if (local_218._4_4_ <= fVar20) {
          fVar20 = local_218._4_4_;
        }
        if (fVar23 < (float)local_218) {
          fVar23 = (float)local_218;
        }
        if (fVar22 < local_218._4_4_) goto LAB_1424f07b9;
      }
      else {
        bVar4 = true;
        fVar21 = (float)local_218;
        fVar20 = local_218._4_4_;
        fVar23 = (float)local_218;
LAB_1424f07b9:
        fVar22 = local_218._4_4_;
      }
      pfVar15 = pfVar15 + 3;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    if (param_7 == '\0') {
      if ((((local_220 <= fVar23) && (fVar21 <= (float)local_208)) && (local_224 <= fVar22)) &&
         (fVar20 <= local_228)) goto LAB_1424f085e;
    }
    else {
      if (((fVar21 <= local_220) || ((float)local_208 <= fVar21)) ||
         ((fVar20 <= local_224 || (local_228 <= fVar20)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (((fVar23 <= local_220) || ((float)local_208 <= fVar23)) ||
           ((fVar22 <= local_224 || (local_228 <= fVar22)))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1424f0830;
        bVar4 = true;
      }
      else {
LAB_1424f0830:
        bVar4 = false;
      }
      if (bVar4) {
LAB_1424f085e:
        iVar18 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar18 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar18 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5,iVar18);
        }
        *(longlong **)(*param_5 + (longlong)iVar18 * 8) = plVar14;
      }
    }
    lVar19 = local_190;
    iVar18 = local_178 + 1;
    if (iVar18 < local_158 + local_180) {
      lVar17 = (longlong)iVar18 * 8;
      iVar16 = local_158;
      iVar12 = local_180;
      do {
        if (iVar18 < iVar12) {
          plVar14 = *(longlong **)(lVar17 + local_188);
        }
        else {
          plVar14 = *(longlong **)(local_160 + (longlong)(iVar18 - iVar12) * 8);
        }
        local_170 = local_170 + 1;
        if ((plVar14 != (longlong *)0x0) &&
           (lVar9 = AActor::GetLevel(plVar14), iVar16 = local_158, iVar12 = local_180, lVar9 != 0))
        {
          if ((local_198[0] & 1) != 0) {
            iVar2 = *(int *)((longlong)plVar14 + 0xc);
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar13 = iVar2 >> 0x1f & 0xffff;
              uVar8 = iVar2 + uVar13;
              lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar13) * 0x18;
            }
            else {
              lVar10 = 0;
            }
            if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_1424f0a25;
          }
          if (((local_198[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(plVar14), iVar16 = local_158,
             iVar12 = local_180, cVar7 != '\0')) {
            if ((local_198[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              piVar3 = *(int **)(lVar9 + 600);
              if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                  (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0)) ||
                 (piVar3 == piVar11)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              if ((bVar5) || (bVar5 = false, bVar6)) {
                bVar5 = true;
              }
              iVar16 = local_158;
              iVar12 = local_180;
              if ((!bVar4) || (!bVar5)) goto LAB_1424f0a25;
            }
            lVar9 = ULevel::GetWorld(lVar9);
            iVar16 = local_158;
            iVar12 = local_180;
            if (lVar9 == lVar19) {
              lVar9 = AActor::GetLevel(plVar14);
              param_1 = local_1e8;
              param_5 = local_1f0;
              if (lVar9 == *(longlong *)(lVar19 + 0x30)) goto joined_r0x0001424f05c0;
              lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              iVar16 = local_158;
              iVar12 = local_180;
              param_1 = local_1e8;
              param_5 = local_1f0;
              if (!bVar4) goto joined_r0x0001424f05c0;
            }
          }
        }
LAB_1424f0a25:
        iVar18 = iVar18 + 1;
        lVar17 = lVar17 + 8;
      } while (iVar18 < iVar16 + iVar12);
    }
    plVar14 = (longlong *)0x0;
    local_174 = '\x01';
    param_1 = local_1e8;
    iVar18 = local_178;
    param_5 = local_1f0;
  } while( true );
}



// FUNCTION 1424f0b50 GetAnimForTime body=579 status=ok
// SIG undefined GetAnimForTime(void)

bool UInterpTrackAnimControl::GetAnimForTime
               (longlong param_1,float param_2,undefined8 *param_3,float *param_4,byte *param_5)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    *param_3 = 0;
    *param_4 = 0.0;
    return false;
  }
  pfVar2 = *(float **)(param_1 + 0x98);
  if (param_2 < *pfVar2) {
    *param_3 = *(undefined8 *)(pfVar2 + 2);
    *param_4 = *(float *)(*(longlong *)(param_1 + 0x98) + 0x10);
    lVar7 = *(longlong *)(param_1 + 0x98);
    if ((*(byte *)(lVar7 + 0x1c) & 2) != 0) {
      if (*(longlong *)(lVar7 + 8) != 0) {
        fVar10 = (float)ConditionallyReversePosition(param_1,lVar7);
        *param_4 = fVar10;
        lVar7 = *(longlong *)(param_1 + 0x98);
      }
      *param_5 = *(byte *)(lVar7 + 0x1c) & 1;
    }
    return true;
  }
  iVar5 = 0;
  iVar6 = *(int *)(param_1 + 0xa0) + -1;
  if (0 < iVar6) {
    lVar7 = 0;
    pfVar4 = pfVar2;
    do {
      pfVar4 = pfVar4 + 8;
      if (param_2 < *pfVar4) break;
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  lVar8 = (longlong)iVar5 * 0x20;
  *param_3 = *(undefined8 *)(pfVar2 + (longlong)iVar5 * 8 + 2);
  fVar10 = (param_2 - *(float *)(lVar8 + *(longlong *)(param_1 + 0x98))) *
           *(float *)(lVar8 + 0x18 + *(longlong *)(param_1 + 0x98));
  *param_4 = fVar10;
  lVar7 = *(longlong *)(param_1 + 0x98);
  lVar3 = *(longlong *)(lVar8 + 8 + lVar7);
  if (lVar3 == 0) {
    bVar9 = false;
  }
  else {
    fVar12 = *(float *)(lVar8 + 0x10 + lVar7);
    fVar1 = *(float *)(lVar8 + 0x14 + lVar7);
    fVar11 = *(float *)(lVar3 + 0x90) - (fVar12 + fVar1);
    if (fVar11 <= 0.01) {
      fVar11 = 0.01;
    }
    if ((*(byte *)(lVar8 + 0x1c + lVar7) & 1) == 0) {
      fVar12 = fVar12 + fVar10;
      fVar10 = 0.0;
      if ((0.0 <= fVar12) &&
         (fVar10 = (*(float *)(lVar3 + 0x90) - fVar1) + 0.0001, fVar12 <= fVar10)) {
        fVar10 = fVar12;
      }
    }
    else {
      if (1e-08 < fVar11) {
        fVar11 = (float)(int)(fVar10 / fVar11) * fVar11;
        if (ABS(fVar10) < ABS(fVar11)) {
          fVar11 = fVar10;
        }
        fVar10 = fVar10 - fVar11;
      }
      else {
        AK::MemoryMgr::StartProfileThreadUsage(iVar5);
        fVar10 = 0.0;
      }
      *param_4 = fVar10;
      fVar10 = fVar10 + *(float *)(lVar8 + 0x10 + *(longlong *)(param_1 + 0x98));
    }
    *param_4 = fVar10;
    lVar7 = *(longlong *)(param_1 + 0x98);
    if ((*(byte *)(lVar8 + 0x1c + lVar7) & 2) == 0) {
      bVar9 = fVar10 == *(float *)(lVar8 + 0x10 + lVar7);
    }
    else {
      fVar12 = *(float *)(lVar8 + 0x10 + lVar7);
      fVar12 = ((*(float *)(lVar3 + 0x90) - (fVar12 + *(float *)(lVar8 + 0x14 + lVar7))) -
               (fVar10 - fVar12)) + fVar12;
      *param_4 = fVar12;
      lVar7 = *(longlong *)(param_1 + 0x98);
      bVar9 = fVar12 == *(float *)(lVar3 + 0x90) - *(float *)(lVar8 + 0x14 + lVar7);
    }
    *param_5 = *(byte *)(lVar8 + 0x1c + lVar7) & 1;
  }
  return bVar9;
}



// FUNCTION 1424f0da0 FUN_1424f0da0 body=503 status=ok
// SIG undefined FUN_1424f0da0(void)

undefined8 * FUN_1424f0da0(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 local_res10;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong local_30;
  
  local_res10 = param_2;
  FName::ToString(&local_res10,&local_38);
  pvVar1 = local_38;
  iVar3 = (int)local_30;
  pwVar6 = (wchar_t *)0x0;
  iVar5 = 0;
  local_58 = (wchar_t *)0x0;
  local_50 = iVar3;
  if (iVar3 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar1,(longlong)iVar3 * 2);
  }
  pwVar7 = local_58;
  do {
    if (pwVar7 == local_58 + local_50) {
LAB_1424f0ee5:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      cVar2 = FPackageName::IsValidLongPackageName(&local_58,1,0);
      if ((cVar2 != '\0') &&
         (cVar2 = FUN_1416f0740(&local_58,0,0,1), pvVar1 = local_38, cVar2 != '\0')) {
        local_48 = (wchar_t *)0x0;
        iVar5 = (int)local_30;
        local_40 = iVar5;
        if (iVar5 == 0) {
          local_3c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_30 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)iVar5 * 2);
        }
        FUN_1417978e0(param_1,&local_48);
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      return param_1;
    }
    if (*pwVar7 == L'.') {
      iVar3 = (int)((longlong)pwVar7 - (longlong)local_58 >> 1);
      if (iVar3 != -1) {
        if (local_50 == 0) {
          pwVar7 = L"";
          iVar4 = iVar5;
        }
        else {
          pwVar7 = local_58;
          iVar4 = local_50 + -1;
        }
        if ((-1 < iVar3) && (iVar5 = iVar4, iVar3 < iVar4)) {
          iVar5 = iVar3;
        }
        local_48 = (wchar_t *)0x0;
        local_3c = 0;
        iVar3 = iVar5 + 1;
        if (iVar5 == 0) {
          iVar3 = 0;
        }
        local_40 = iVar3;
        if ((0 < iVar3) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar3 = local_40,
           pwVar6 = local_48, 0 < local_40)) {
          wcsncpy(local_48,pwVar7,(longlong)iVar5);
          pwVar6[iVar5] = L'\0';
        }
        if (local_58 != (wchar_t *)0x0) {
          FMemory::Free(local_58);
        }
        local_4c = local_3c;
        local_58 = pwVar6;
        local_50 = iVar3;
      }
      goto LAB_1424f0ee5;
    }
    pwVar7 = pwVar7 + 1;
  } while( true );
}



// FUNCTION 1424f0fa0 GetClosestSnapPosition body=369 status=ok
// SIG undefined GetClosestSnapPosition(void)

undefined8
UInterpTrackAnimControl::GetClosestSnapPosition
          (longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  lVar7 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar13 = 3.4e+38;
  iVar8 = 0;
  fVar14 = 0.0;
  uVar9 = 0;
  if (0 < iVar2) {
    piVar3 = (int *)*param_3;
    lVar10 = 0;
    piVar6 = piVar3;
joined_r0x0001424f101b:
    do {
      if (piVar6 == piVar3 + *(int *)(param_3 + 1)) {
        lVar4 = *(longlong *)(param_1 + 0x98);
        lVar5 = *(longlong *)(lVar10 + 8 + lVar4);
        fVar1 = *(float *)(lVar10 + lVar4);
        fVar11 = fVar1;
        if (lVar5 != 0) {
          fVar11 = (*(float *)(lVar5 + 0x90) -
                   (*(float *)(lVar10 + 0x14 + lVar4) + *(float *)(lVar10 + 0x10 + lVar4))) /
                   *(float *)(lVar10 + 0x18 + lVar4);
          if (fVar11 <= 0.01) {
            fVar11 = 0.01;
          }
          fVar11 = fVar11 + fVar1;
        }
        fVar12 = fVar11;
        piVar6 = piVar3;
        if (iVar8 < *(int *)(param_1 + 0xa0) + -1) {
          for (; piVar6 != piVar3 + *(int *)(param_3 + 1); piVar6 = piVar6 + 1) {
            if (*piVar6 == iVar8 + 1) goto LAB_1424f10a6;
          }
          fVar12 = *(float *)(lVar10 + 0x20 + lVar4);
          if (fVar11 <= fVar12) {
            fVar12 = fVar11;
          }
        }
LAB_1424f10a6:
        if (ABS(fVar1 - param_2) < fVar13) {
          uVar9 = 1;
          fVar13 = ABS(fVar1 - param_2);
          fVar14 = fVar1;
        }
        if (ABS(fVar12 - param_2) < fVar13) {
          uVar9 = 1;
          fVar13 = ABS(fVar12 - param_2);
          fVar14 = fVar12;
        }
      }
      else if (*piVar6 != iVar8) {
        piVar6 = piVar6 + 1;
        goto joined_r0x0001424f101b;
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 0x20;
      lVar7 = lVar7 + -1;
      piVar6 = piVar3;
    } while (lVar7 != 0);
  }
  *param_4 = fVar14;
  return uVar9;
}



// FUNCTION 1424f1120 GetClosestSnapPosition body=173 status=ok
// SIG undefined GetClosestSnapPosition(void)

undefined1
UInterpTrackBoolProp::GetClosestSnapPosition
          (longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    return 0;
  }
  fVar8 = 3.4e+38;
  uVar6 = 0;
  iVar4 = 0;
  fVar9 = 0.0;
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      for (piVar3 = (int *)*param_3; piVar3 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar3 = piVar3 + 1) {
        if (*piVar3 == iVar4) goto LAB_1424f11af;
      }
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x70) + lVar5 * 8);
      fVar7 = ABS(fVar1 - param_2);
      if (fVar7 < fVar8) {
        uVar6 = 1;
        fVar8 = fVar7;
        fVar9 = fVar1;
      }
LAB_1424f11af:
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  *param_4 = fVar9;
  return uVar6;
}



// FUNCTION 1424f11d0 GetClosestSnapPosition body=175 status=ok
// SIG undefined GetClosestSnapPosition(void)

undefined1
UInterpTrackDirector::GetClosestSnapPosition
          (longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x78);
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar9 = 3.4e+38;
  uVar7 = 0;
  iVar5 = 0;
  fVar10 = 0.0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      for (piVar4 = (int *)*param_3; piVar4 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_1424f125f;
      }
      fVar1 = *(float *)(lVar6 + *(longlong *)(param_1 + 0x70));
      fVar8 = ABS(fVar1 - param_2);
      if (fVar8 < fVar9) {
        uVar7 = 1;
        fVar9 = fVar8;
        fVar10 = fVar1;
      }
LAB_1424f125f:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar10;
  return uVar7;
}



// FUNCTION 1424f1280 GetClosestSnapPosition body=175 status=ok
// SIG undefined GetClosestSnapPosition(void)

undefined1
UInterpTrackEvent::GetClosestSnapPosition
          (longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x78);
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar9 = 3.4e+38;
  uVar7 = 0;
  iVar5 = 0;
  fVar10 = 0.0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      for (piVar4 = (int *)*param_3; piVar4 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_1424f130f;
      }
      fVar1 = *(float *)(lVar6 + *(longlong *)(param_1 + 0x70));
      fVar8 = ABS(fVar1 - param_2);
      if (fVar8 < fVar9) {
        uVar7 = 1;
        fVar9 = fVar8;
        fVar10 = fVar1;
      }
LAB_1424f130f:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar10;
  return uVar7;
}



// FUNCTION 1424f1330 FUN_1424f1330 body=175 status=ok
// SIG undefined FUN_1424f1330(void)

undefined1 FUN_1424f1330(longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x78);
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar9 = 3.4e+38;
  uVar7 = 0;
  iVar5 = 0;
  fVar10 = 0.0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      for (piVar4 = (int *)*param_3; piVar4 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_1424f13bf;
      }
      fVar1 = *(float *)(lVar6 + *(longlong *)(param_1 + 0x70));
      fVar8 = ABS(fVar1 - param_2);
      if (fVar8 < fVar9) {
        uVar7 = 1;
        fVar9 = fVar8;
        fVar10 = fVar1;
      }
LAB_1424f13bf:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x14;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar10;
  return uVar7;
}



// FUNCTION 1424f13e0 GetClosestSnapPosition body=175 status=ok
// SIG undefined GetClosestSnapPosition(void)

undefined1
UInterpTrackLinearColorBase::GetClosestSnapPosition
          (longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x78);
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar9 = 3.4e+38;
  uVar7 = 0;
  iVar5 = 0;
  fVar10 = 0.0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      for (piVar4 = (int *)*param_3; piVar4 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_1424f146f;
      }
      fVar1 = *(float *)(lVar6 + *(longlong *)(param_1 + 0x70));
      fVar8 = ABS(fVar1 - param_2);
      if (fVar8 < fVar9) {
        uVar7 = 1;
        fVar9 = fVar8;
        fVar10 = fVar1;
      }
LAB_1424f146f:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x38;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar10;
  return uVar7;
}



// FUNCTION 1424f1490 GetClosestSnapPosition body=175 status=ok
// SIG undefined GetClosestSnapPosition(void)

undefined1
UInterpTrackMove::GetClosestSnapPosition
          (longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x78);
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar9 = 3.4e+38;
  uVar7 = 0;
  iVar5 = 0;
  fVar10 = 0.0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      for (piVar4 = (int *)*param_3; piVar4 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_1424f151f;
      }
      fVar1 = *(float *)(lVar6 + *(longlong *)(param_1 + 0x70));
      fVar8 = ABS(fVar1 - param_2);
      if (fVar8 < fVar9) {
        uVar7 = 1;
        fVar9 = fVar8;
        fVar10 = fVar1;
      }
LAB_1424f151f:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x2c;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar10;
  return uVar7;
}



// FUNCTION 1424f1540 FUN_1424f1540 body=175 status=ok
// SIG undefined FUN_1424f1540(void)

undefined1 FUN_1424f1540(longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x78);
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  fVar9 = 3.4e+38;
  uVar7 = 0;
  iVar5 = 0;
  fVar10 = 0.0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      for (piVar4 = (int *)*param_3; piVar4 != (int *)*param_3 + *(int *)(param_3 + 1);
          piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_1424f15cf;
      }
      fVar1 = *(float *)(lVar6 + *(longlong *)(param_1 + 0x70));
      fVar8 = ABS(fVar1 - param_2);
      if (fVar8 < fVar9) {
        uVar7 = 1;
        fVar9 = fVar8;
        fVar10 = fVar1;
      }
LAB_1424f15cf:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0xc;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar10;
  return uVar7;
}



// FUNCTION 1424f15f0 FUN_1424f15f0 body=435 status=ok
// SIG undefined FUN_1424f15f0(void)

ulonglong FUN_1424f15f0(longlong param_1,float param_2,undefined8 *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  ulonglong in_RAX;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar7 = *(int *)(param_1 + 0x98);
  if (iVar7 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar5 = 0;
  uVar8 = 0;
  fVar11 = 3.4e+38;
  fVar12 = 0.0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      piVar4 = (int *)*param_3;
      piVar1 = piVar4 + *(int *)(param_3 + 1);
      for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar5) goto LAB_1424f174e;
      }
      plVar3 = *(longlong **)(lVar6 + 0x10 + *(longlong *)(param_1 + 0x90));
      fVar2 = *(float *)(lVar6 + *(longlong *)(param_1 + 0x90));
      fVar9 = fVar2;
      if (plVar3 != (longlong *)0x0) {
        fVar9 = (float)(**(code **)(*plVar3 + 0x2a0))();
        fVar9 = fVar9 + fVar2;
      }
      iVar7 = *(int *)(param_1 + 0x98);
      fVar10 = fVar9;
      if (iVar5 < iVar7 + -1) {
        piVar4 = (int *)*param_3;
        piVar1 = piVar4 + *(int *)(param_3 + 1);
        for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
          if (*piVar4 == iVar5 + 1) goto LAB_1424f1714;
        }
        fVar10 = *(float *)(lVar6 + 0x18 + *(longlong *)(param_1 + 0x90));
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
      }
LAB_1424f1714:
      if (ABS(fVar2 - param_2) < fVar11) {
        uVar8 = 1;
        fVar11 = ABS(fVar2 - param_2);
        fVar12 = fVar2;
      }
      if (ABS(fVar10 - param_2) < fVar11) {
        uVar8 = 1;
        fVar11 = ABS(fVar10 - param_2);
        fVar12 = fVar10;
      }
LAB_1424f174e:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar5 < iVar7);
  }
  *param_4 = fVar12;
  return uVar8;
}



// FUNCTION 1424f17b0 GetColor body=32 status=ok
// SIG undefined GetColor(void)

undefined1 * FHitProxyId::GetColor(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  param_2[2] = (char)((uint)uVar1 >> 0x10);
  param_2[1] = (char)((uint)uVar1 >> 8);
  *param_2 = (char)uVar1;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 1424f17d0 FUN_1424f17d0 body=543 status=ok
// SIG undefined FUN_1424f17d0(void)

float * FUN_1424f17d0(longlong *param_1,float *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [176];
  
  lVar6 = param_1[0x8b];
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  plVar2 = *(longlong **)(lVar6 + 0x508);
  if (plVar2 == (longlong *)0x0) {
    return param_2;
  }
  lVar6 = ULocalPlayer::GetPrivateStaticClass();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return param_2;
  }
  lVar6 = plVar2[0xe];
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  local_120 = *(longlong **)(lVar7 + 0x1b8);
  local_128 = *(undefined8 *)(plVar2[0xe] + 0xb0);
  local_118 = *(undefined8 *)(lVar6 + 0xa0);
  local_110 = *(undefined4 *)(lVar6 + 0xa8);
  local_10c = 0xffffffff;
  local_ec = local_ec & 0xfffffff4 | 4;
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0x3f80000000000000;
  local_f0 = 0;
  if ((local_120 == (longlong *)0x0) ||
     (lVar6 = (**(code **)(*local_120 + 0x208))(local_120), lVar6 == 0)) goto LAB_1424f1950;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    bVar3 = false;
    if (DVar5 == DAT_1468c21c0) goto LAB_1424f190d;
  }
  else {
LAB_1424f190d:
    bVar3 = true;
  }
  if (bVar3) {
    local_100 = CONCAT44(*(undefined4 *)(lVar6 + 0x7b0),*(undefined4 *)(lVar6 + 0x790));
    local_ec = local_ec | 8;
    uStack_f8 = CONCAT44(uStack_f8._4_4_,*(undefined4 *)(lVar6 + 0x798));
    local_f0 = FUN_1428ccc70(lVar6);
  }
LAB_1424f1950:
  local_ec = local_ec | 1;
  FUN_142743490(local_c8,&local_128);
  lVar6 = (**(code **)(*plVar2 + 0x288))
                    (plVar2,local_c8,local_d8,local_e8,*(undefined8 *)(plVar2[0xe] + 0xb0),0,0);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x36c);
    *param_2 = (float)-*(int *)(lVar6 + 0x368);
    param_2[1] = (float)-iVar1;
  }
  FUN_142745e10(local_c8);
  return param_2;
}



// FUNCTION 1424f19f0 FUN_1424f19f0 body=662 status=ok
// SIG undefined FUN_1424f19f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1424f19f0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 *local_190;
  undefined *local_188;
  undefined1 local_178 [8];
  undefined8 local_170;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [24];
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined1 local_bc [36];
  undefined1 local_98 [72];
  longlong local_50;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (((*(byte *)(param_1 + 0x8d) & 8) == 0) ||
     (plVar1 = (longlong *)param_1[0x8b], plVar1[0xa5] == 0)) {
    if (param_1[0x9a] != 0) {
      return param_1[0x9a];
    }
    if (*(longlong *)(param_1[0x8b] + 0x528) == 0) {
      return 0;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1[0x8b] + 0x528) + 0x1190);
    if (lVar6 == 0) {
      return 0;
    }
    return lVar6;
  }
  (**(code **)(*plVar1 + 0x7a8))(plVar1,&local_160,local_150);
  local_170 = 0;
  local_198 = *(undefined8 *)(*(longlong *)(param_1[0x8b] + 0x528) + 0x1190);
  FUN_1422ffb20(local_98,0,local_178,1);
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  pfVar4 = (float *)FRotator::Vector(local_150,local_140);
  local_168 = local_158 + pfVar4[2] * 100000.0;
  local_170 = CONCAT44(local_15c + pfVar4[1] * 100000.0,local_160 + *pfVar4 * 100000.0);
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  local_188 = &DAT_146aefe68;
  local_190 = local_98;
  local_198 = CONCAT44(local_198._4_4_,1);
  cVar3 = UWorld::LineTraceSingleByChannel(uVar5,local_128,&local_160,&local_170);
  if ((cVar3 != '\0') && (lVar6 = FWeakObjectPtr::Get(local_bc), lVar6 != 0)) {
    if (param_1[0x99] != 0) {
      lVar7 = FUN_1428dfc70();
      lVar9 = param_1[0x99];
      for (lVar8 = lVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar7) {
          if (lVar9 != 0) {
            lVar7 = FUN_1428dfc70();
            lVar8 = lVar9;
            goto LAB_1424f1bc0;
          }
          break;
        }
      }
    }
    goto LAB_1424f1c0d;
  }
  goto LAB_1424f1c06;
  while (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0) {
LAB_1424f1bc0:
    if (lVar8 == lVar7) goto LAB_1424f1bd0;
  }
  lVar9 = 0;
LAB_1424f1bd0:
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) goto LAB_1424f1c0d;
LAB_1424f1c06:
  lVar6 = param_1[0x9a];
LAB_1424f1c0d:
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return lVar6;
}



// FUNCTION 1424f1c90 FUN_1424f1c90 body=1374 status=ok
// SIG undefined FUN_1424f1c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424f1c90(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_e8;
  ulonglong local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_c8 = param_2;
  local_c0 = param_1;
  uVar8 = (**(code **)(*param_1 + 0x148))();
  local_d0 = uVar8;
  local_b8 = FUN_1429d7ab0();
  if (local_b8 != 0) {
    lVar9 = FUN_1429d7ab0();
    lVar14 = local_b8;
    do {
      if (lVar14 == lVar9) goto LAB_1424f1d00;
      lVar14 = *(longlong *)(lVar14 + 0x30);
    } while (lVar14 != 0);
  }
  local_b8 = 0;
LAB_1424f1d00:
  local_a8[0] = 5;
  local_50 = '\0';
  local_b0 = uVar8;
  FUN_14044bc80(&local_a0,&local_b0,&local_b8);
  FUN_14045a130(local_a8);
  if (local_84 == '\0') {
LAB_1424f1d60:
    FUN_1424e2ad0(local_78,param_2,uVar8);
    lVar14 = local_a0;
    iVar20 = local_88 + 1;
    if (iVar20 < local_68 + local_90) {
      lVar9 = (longlong)iVar20 * 8;
      iVar15 = local_90;
      iVar19 = local_68;
      do {
        if (iVar20 < iVar15) {
          lVar18 = *(longlong *)(lVar9 + local_98);
        }
        else {
          lVar18 = *(longlong *)(local_70 + (longlong)(iVar20 - iVar15) * 8);
        }
        local_80 = local_80 + 1;
        if ((lVar18 != 0) &&
           (lVar10 = AActor::GetLevel(lVar18), iVar15 = local_90, iVar19 = local_68, lVar10 != 0)) {
          if ((local_a8[0] & 1) != 0) {
            iVar1 = *(int *)(lVar18 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar16 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar16;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar16) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_1424f1f0d;
          }
          if (((local_a8[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar18), iVar15 = local_90,
             iVar19 = local_68, cVar6 != '\0')) {
            if ((local_a8[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar10 + 600);
              if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                  (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                 (piVar2 == piVar12)) {
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
              iVar15 = local_90;
              iVar19 = local_68;
              if ((!bVar5) || (!bVar3)) goto LAB_1424f1f0d;
            }
            lVar10 = ULevel::GetWorld(lVar10);
            iVar15 = local_90;
            iVar19 = local_68;
            if (lVar10 == lVar14) {
              lVar10 = AActor::GetLevel(lVar18);
              if (lVar10 == *(longlong *)(lVar14 + 0x30)) goto LAB_1424f2024;
              lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar15 = local_90;
              iVar19 = local_68;
              if (!bVar5) goto LAB_1424f2024;
            }
          }
        }
LAB_1424f1f0d:
        iVar20 = iVar20 + 1;
        lVar9 = lVar9 + 8;
        if (iVar19 + iVar15 <= iVar20) break;
      } while( true );
    }
    local_78 = 0;
    local_84 = '\x01';
    param_1 = local_c0;
    param_2 = local_c8;
    uVar8 = local_d0;
  }
LAB_1424f1f51:
  if (local_50 != '\0') {
    local_50 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x740))(param_1,&DAT_146afbd00);
  if (cVar6 != '\0') {
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = -1;
    uVar13 = FUN_142a07000();
    local_f8 = 0;
    FUN_1417a5560(uVar13,&local_e8,1,0x10);
    uVar17 = local_e0 & 0xffffffff;
    do {
      local_d8 = local_d8 + 1;
      if ((int)local_e0 <= local_d8) break;
    } while (*(longlong *)(local_e8 + (longlong)local_d8 * 8) == 0);
LAB_1424f2017:
    if ((local_d8 < 0) || ((int)uVar17 <= local_d8)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar14 = FUN_1423ac7e0(*(undefined8 *)(local_e8 + (longlong)local_d8 * 8));
      if (((lVar14 != 0) && (lVar14 = *(longlong *)(local_e8 + (longlong)local_d8 * 8), lVar14 != 0)
          ) && (lVar14 = *(longlong *)(lVar14 + 0x118), lVar14 != 0)) {
        FUN_1424e2ad0(lVar14,param_2,uVar8);
      }
      uVar17 = local_e0 & 0xffffffff;
      do {
        local_d8 = local_d8 + 1;
        if ((int)local_e0 <= local_d8) break;
      } while (*(longlong *)(local_e8 + (longlong)local_d8 * 8) == 0);
      goto LAB_1424f2017;
    }
    if (local_e8 != 0) {
      FMemory::Free(local_e8);
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x740))(param_1,&DAT_146afbd08);
  if (cVar6 != '\0') {
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = -1;
    uVar13 = UEnvQueryTest::GetPrivateStaticClass();
    local_f8 = 0;
    FUN_1417a5560(uVar13,&local_e8,1,0x10);
    uVar17 = local_e0 & 0xffffffff;
    do {
      local_d8 = local_d8 + 1;
      lVar14 = local_e8;
      if ((int)local_e0 <= local_d8) break;
    } while (*(longlong *)(local_e8 + (longlong)local_d8 * 8) == 0);
LAB_1424f2158:
    if ((local_d8 < 0) || ((int)uVar17 <= local_d8)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar9 = *(longlong *)(lVar14 + (longlong)local_d8 * 8);
      if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x118), lVar9 != 0)) {
        FUN_1424e2ad0(lVar9,param_2,uVar8);
        uVar17 = local_e0 & 0xffffffff;
        lVar14 = local_e8;
      }
      do {
        local_d8 = local_d8 + 1;
        if ((int)uVar17 <= local_d8) break;
      } while (*(longlong *)(lVar14 + (longlong)local_d8 * 8) == 0);
      goto LAB_1424f2158;
    }
    if (lVar14 != 0) {
      FMemory::Free(lVar14);
    }
  }
  return;
LAB_1424f2024:
  param_1 = local_c0;
  param_2 = local_c8;
  uVar8 = local_d0;
  local_88 = iVar20;
  local_78 = lVar18;
  if (local_84 != '\0') goto LAB_1424f1f51;
  goto LAB_1424f1d60;
}



// FUNCTION 1424f21f0 FUN_1424f21f0 body=1115 status=ok
// SIG undefined FUN_1424f21f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1424f21f0(int param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_1 == 1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afc3f4) &&
       (_Init_thread_header(&DAT_146afc3f4), DAT_146afc3f4 == -1)) {
      local_78 = 0x3f800000;
      uStack_74 = 0;
      uStack_70 = 0;
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&DAT_146533250,1);
      puVar1 = DAT_146533250;
      *DAT_146533250 = CONCAT44(uStack_74,local_78);
      *(undefined4 *)(puVar1 + 1) = uStack_70;
      atexit((_func_5014 *)&LAB_143eafc90);
      _Init_thread_footer(&DAT_146afc3f4);
    }
    puVar1 = &DAT_146533250;
  }
  else if (param_1 == 2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afc3f8) &&
       (_Init_thread_header(&DAT_146afc3f8), DAT_146afc3f8 == -1)) {
      local_78 = 0x3f800000;
      uStack_74 = 0xbf800000;
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      local_68 = 0x3f800000;
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&DAT_146533260,2);
      puVar1 = DAT_146533260;
      *DAT_146533260 = CONCAT44(uStack_74,local_78);
      puVar1[1] = CONCAT44(uStack_6c,uStack_70);
      puVar1[2] = local_68;
      atexit((_func_5014 *)&LAB_143eafd20);
      _Init_thread_footer(&DAT_146afc3f8);
      return &DAT_146533260;
    }
    puVar1 = &DAT_146533260;
  }
  else if (param_1 == 4) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afc3fc) &&
       (_Init_thread_header(&DAT_146afc3fc), DAT_146afc3fc == -1)) {
      local_78 = 0x3f800000;
      uStack_74 = 0xbf800000;
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      local_68 = 0x3f800000;
      uStack_60 = 0xbf800000bf800000;
      local_58 = 0xbf80000000000000;
      uStack_50 = 0x3f800000;
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&DAT_146533270,4);
      puVar1 = DAT_146533270;
      *DAT_146533270 = CONCAT44(uStack_74,local_78);
      puVar1[1] = CONCAT44(uStack_6c,uStack_70);
      puVar1[2] = local_68;
      puVar1[3] = uStack_60;
      puVar1[4] = local_58;
      puVar1[5] = uStack_50;
      atexit((_func_5014 *)&LAB_143eafcb0);
      _Init_thread_footer(&DAT_146afc3fc);
      return &DAT_146533270;
    }
    puVar1 = &DAT_146533270;
  }
  else if (param_1 == 6) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afc400) &&
       (_Init_thread_header(&DAT_146afc400), DAT_146afc400 == -1)) {
      local_78 = 0x3f800000;
      uStack_74 = 0xbf800000;
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      local_68 = 0x3f800000;
      uStack_60 = 0x3f800000;
      local_58 = 0;
      uStack_50 = 0xbf80000000000000;
      local_48 = 0xbf800000bf800000;
      uStack_40 = 0xbf80000000000000;
      local_38 = 0x3f800000;
      uStack_34 = 0;
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&DAT_146533280,6);
      puVar1 = DAT_146533280;
      *DAT_146533280 = CONCAT44(uStack_74,local_78);
      puVar1[1] = CONCAT44(uStack_6c,uStack_70);
      puVar1[2] = local_68;
      puVar1[3] = uStack_60;
      puVar1[4] = local_58;
      puVar1[5] = uStack_50;
      puVar1[6] = local_48;
      puVar1[7] = uStack_40;
      puVar1[8] = CONCAT44(uStack_34,local_38);
      atexit((_func_5014 *)&LAB_143eafae0);
      _Init_thread_footer(&DAT_146afc400);
      return &DAT_146533280;
    }
    puVar1 = &DAT_146533280;
  }
  else if (param_1 == 8) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afc404) &&
       (_Init_thread_header(&DAT_146afc404), DAT_146afc404 == -1)) {
      local_78 = 0x3f800000;
      uStack_74 = 0xbf800000;
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      local_68 = 0x3f800000;
      uStack_60 = 0x3f800000;
      local_58 = 0;
      uStack_50 = 0xbf80000000000000;
      local_48 = 0xbf800000bf800000;
      uStack_40 = 0xbf80000000000000;
      local_38 = 0x3f800000;
      uStack_34 = 0;
      uStack_30 = 0x3f333333;
      uStack_2c = 0xbf800000;
      local_28 = 0;
      uStack_24 = 0x3f333333;
      uStack_20 = 0x3f800000;
      uStack_1c = 0;
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&DAT_146533290,8);
      puVar1 = DAT_146533290;
      *DAT_146533290 = CONCAT44(uStack_74,local_78);
      puVar1[1] = CONCAT44(uStack_6c,uStack_70);
      puVar1[2] = local_68;
      puVar1[3] = uStack_60;
      puVar1[4] = local_58;
      puVar1[5] = uStack_50;
      puVar1[6] = local_48;
      puVar1[7] = uStack_40;
      puVar1[8] = CONCAT44(uStack_34,local_38);
      puVar1[9] = CONCAT44(uStack_2c,uStack_30);
      puVar1[10] = CONCAT44(uStack_24,local_28);
      puVar1[0xb] = CONCAT44(uStack_1c,uStack_20);
      atexit((_func_5014 *)&LAB_143eafcd0);
      _Init_thread_footer(&DAT_146afc404);
      return &DAT_146533290;
    }
    puVar1 = &DAT_146533290;
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 1424f2650 GetDirectorTrack body=148 status=ok
// SIG undefined GetDirectorTrack(void)

longlong UInterpGroupDirector::GetDirectorTrack(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x30));
      if (lVar1 != 0) {
        lVar3 = UInterpTrackDirector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && ((*(uint *)(lVar1 + 0x68) >> 2 & 1) == 0)) {
          return lVar1;
        }
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  return 0;
}



// FUNCTION 1424f26f0 FUN_1424f26f0 body=3836 status=ok
// SIG undefined FUN_1424f26f0(void)

void FUN_1424f26f0(longlong param_1,int *param_2,float *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  longlong lVar4;
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
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_1b8;
  float local_1b4;
  float local_1a8;
  float local_198;
  float local_190;
  float local_188;
  undefined8 local_178;
  float local_170;
  float fStack_15c;
  float fStack_14c;
  float fStack_13c;
  float *local_128;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    iVar24 = 0;
  }
  else {
    iVar24 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x48) + 0x30);
  }
  *param_2 = iVar24;
  if (0 < iVar24) {
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f0) + 0x48);
    pfVar3 = (float *)puVar2[3];
    local_178 = param_1;
    local_128 = param_3;
    if (*(char *)((longlong)puVar2 + 0x34) == '\0') {
      (**(code **)(*(longlong *)puVar2[2] + 0x28))();
      (**(code **)(*(longlong *)puVar2[2] + 0x20))();
      local_1a8 = *pfVar3;
      fVar26 = pfVar3[6];
      fVar27 = pfVar3[8];
      fVar28 = pfVar3[9];
      local_1b8 = pfVar3[10];
      local_198 = pfVar3[1];
      local_190 = pfVar3[2];
      local_188 = pfVar3[4];
      local_1b4 = pfVar3[5];
    }
    else {
      (**(code **)(*(longlong *)puVar2[2] + 0x28))();
      (**(code **)(*(longlong *)puVar2[2] + 0x20))();
      uVar1 = *(ushort *)pfVar3;
      uVar25 = (ulonglong)_tls_index;
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar26 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      uVar1 = *(ushort *)((longlong)pfVar3 + 2);
      local_1a8 = local_1b8;
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar26 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      uVar1 = *(ushort *)(pfVar3 + 1);
      local_198 = local_1b8;
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar26 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      local_190 = local_1b8;
      if (((((*(ushort *)((longlong)pfVar3 + 6) & 0x7c00) == 0) &&
           ((*(ushort *)((longlong)pfVar3 + 6) & 0x3ff) != 0)) &&
          (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
           DAT_1468509dc)) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 1.442695;
        _Init_thread_footer(&DAT_1468509dc);
      }
      uVar1 = *(ushort *)(pfVar3 + 2);
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar26 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      uVar1 = *(ushort *)((longlong)pfVar3 + 10);
      local_188 = local_1b8;
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar26 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      uVar1 = *(ushort *)(pfVar3 + 3);
      local_1b4 = local_1b8;
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar26 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar26 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      fVar26 = local_1b8;
      if (((((*(ushort *)((longlong)pfVar3 + 0xe) & 0x7c00) == 0) &&
           ((*(ushort *)((longlong)pfVar3 + 0xe) & 0x3ff) != 0)) &&
          (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
           DAT_1468509dc)) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 1.442695;
        _Init_thread_footer(&DAT_1468509dc);
      }
      uVar1 = *(ushort *)(pfVar3 + 4);
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar27 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar27 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      fVar27 = local_1b8;
      uVar1 = *(ushort *)((longlong)pfVar3 + 0x12);
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar28 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar28 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      fVar28 = local_1b8;
      uVar1 = *(ushort *)(pfVar3 + 5);
      local_1b8 = (float)((uVar1 & 0xffff8000) << 0x10);
      if ((uVar1 & 0x7c00) == 0) {
        uVar23 = uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
               DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
            DAT_1468509d8 = 1.442695;
            _Init_thread_footer(&DAT_1468509dc);
          }
          fVar29 = _guard_xfg_dispatch_icall_nop((float)uVar23);
          iVar24 = 10 - (int)(fVar29 * DAT_1468509d8);
          local_1b8 = (float)(uVar23 << ((char)iVar24 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar24 & 0xff) << 0x17 | (uint)local_1b8);
        }
      }
      else if ((uVar1 & 0x7c00) == 0x7c00) {
        local_1b8 = (float)((uint)local_1b8 | 0x477fe000);
      }
      else {
        local_1b8 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                           (uint)local_1b8);
      }
      if (((((*(ushort *)((longlong)pfVar3 + 0x16) & 0x7c00) == 0) &&
           ((*(ushort *)((longlong)pfVar3 + 0x16) & 0x3ff) != 0)) &&
          (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x38) <
           DAT_1468509dc)) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 1.442695;
        _Init_thread_footer(&DAT_1468509dc);
      }
    }
    pfVar3 = (float *)puVar2[1];
    fStack_15c = 0.0;
    fStack_14c = 0.0;
    fStack_13c = 0.0;
    (**(code **)(*(longlong *)*puVar2 + 0x28))();
    (**(code **)(*(longlong *)*puVar2 + 0x20))();
    lVar4 = local_178;
    fVar29 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    fVar7 = *(float *)(local_178 + 0x80);
    fVar8 = *(float *)(local_178 + 0x84);
    fVar9 = *(float *)(local_178 + 0x88);
    fVar10 = *(float *)(local_178 + 0x8c);
    fVar11 = *(float *)(local_178 + 0x90);
    fVar12 = *(float *)(local_178 + 0x94);
    fVar13 = *(float *)(local_178 + 0x98);
    fVar14 = *(float *)(local_178 + 0x9c);
    fVar15 = *(float *)(local_178 + 0xa0);
    fVar16 = *(float *)(local_178 + 0xa4);
    fVar17 = *(float *)(local_178 + 0xa8);
    fVar18 = *(float *)(local_178 + 0xac);
    fVar19 = *(float *)(local_178 + 0xb0);
    fVar20 = *(float *)(local_178 + 0xb4);
    fVar21 = *(float *)(local_178 + 0xb8);
    fVar22 = *(float *)(local_178 + 0xbc);
    local_118 = local_1a8 * fVar7 + local_198 * fVar11 + local_190 * fVar15 + fStack_15c * fVar19;
    fStack_114 = local_1a8 * fVar8 + local_198 * fVar12 + local_190 * fVar16 + fStack_15c * fVar20;
    fStack_110 = local_1a8 * fVar9 + local_198 * fVar13 + local_190 * fVar17 + fStack_15c * fVar21;
    fStack_10c = local_1a8 * fVar10 + local_198 * fVar14 + local_190 * fVar18 + fStack_15c * fVar22;
    local_108 = local_188 * fVar7 + local_1b4 * fVar11 + fVar26 * fVar15 + fStack_14c * fVar19;
    fStack_104 = local_188 * fVar8 + local_1b4 * fVar12 + fVar26 * fVar16 + fStack_14c * fVar20;
    fStack_100 = local_188 * fVar9 + local_1b4 * fVar13 + fVar26 * fVar17 + fStack_14c * fVar21;
    fStack_fc = local_188 * fVar10 + local_1b4 * fVar14 + fVar26 * fVar18 + fStack_14c * fVar22;
    local_f8 = fVar27 * fVar7 + fVar28 * fVar11 + local_1b8 * fVar15 + fStack_13c * fVar19;
    fStack_f4 = fVar27 * fVar8 + fVar28 * fVar12 + local_1b8 * fVar16 + fStack_13c * fVar20;
    fStack_f0 = fVar27 * fVar9 + fVar28 * fVar13 + local_1b8 * fVar17 + fStack_13c * fVar21;
    fStack_ec = fVar27 * fVar10 + fVar28 * fVar14 + local_1b8 * fVar18 + fStack_13c * fVar22;
    local_e8 = fVar29 * fVar7 + fVar5 * fVar11 + fVar6 * fVar15 + fVar19 * 1.0;
    fStack_e4 = fVar29 * fVar8 + fVar5 * fVar12 + fVar6 * fVar16 + fVar20 * 1.0;
    fStack_e0 = fVar29 * fVar9 + fVar5 * fVar13 + fVar6 * fVar17 + fVar21 * 1.0;
    fStack_dc = fVar29 * fVar10 + fVar5 * fVar14 + fVar6 * fVar18 + fVar22 * 1.0;
    FMatrix::GetScaleVector(&local_118,&local_178,0x322bcc77);
    lVar4 = *(longlong *)(lVar4 + 0x3a0);
    local_178._0_4_ = (float)local_178 * *(float *)(lVar4 + 0x4c);
    local_170 = local_170 * *(float *)(lVar4 + 0x54);
    local_178._4_4_ = local_178._4_4_ * *(float *)(lVar4 + 0x50);
    local_178._0_4_ = (float)local_178 + (float)local_178;
    local_170 = local_170 + local_170;
    local_178._0_4_ = (float)local_178 + (float)local_178;
    *local_128 = (local_170 + local_170 + (float)local_178) * (local_178._4_4_ + local_178._4_4_) +
                 (float)local_178 * local_170;
  }
  return;
}



// FUNCTION 1424f35f0 FUN_1424f35f0 body=3697 status=ok
// SIG undefined FUN_1424f35f0(void)

void FUN_1424f35f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  longlong *param_9)

{
  float *pfVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
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
  void *pvVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_188;
  uint local_184;
  float local_178;
  float local_168;
  float local_158;
  
  FUN_14281d310(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_184 = 0;
  *(undefined4 *)(param_9 + 1) = 0;
  if ((*(int *)((longlong)param_9 + 0xc) < 0) && (*(int *)((longlong)param_9 + 0xc) != 0)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_9,0);
  }
  pvVar24 = ThreadLocalStoragePointer;
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x48) + 0x30);
  if (uVar3 != 0) {
    uVar28 = (ulonglong)_tls_index;
    do {
      lVar27 = (longlong)(int)local_184;
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f0) + 0x48);
      lVar5 = puVar4[3];
      if (*(char *)((longlong)puVar4 + 0x34) == '\0') {
        (**(code **)(*(longlong *)puVar4[2] + 0x28))();
        (**(code **)(*(longlong *)puVar4[2] + 0x20))();
        local_168 = *(float *)(lVar5 + lVar27 * 0x30);
        fVar29 = *(float *)(lVar5 + 8 + lVar27 * 0x30);
        fVar30 = *(float *)(lVar5 + 0x14 + lVar27 * 0x30);
        fVar31 = *(float *)(lVar5 + 0x18 + lVar27 * 0x30);
        fVar32 = *(float *)(lVar5 + 0x20 + lVar27 * 0x30);
        fVar33 = *(float *)(lVar5 + 0x24 + lVar27 * 0x30);
        local_188 = *(float *)(lVar5 + 0x28 + lVar27 * 0x30);
        local_158 = *(float *)(lVar5 + 4 + lVar27 * 0x30);
        local_178 = *(float *)(lVar5 + 0x10 + lVar27 * 0x30);
      }
      else {
        (**(code **)(*(longlong *)puVar4[2] + 0x28))();
        (**(code **)(*(longlong *)puVar4[2] + 0x20))();
        uVar2 = *(ushort *)(lVar5 + lVar27 * 0x18);
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar29 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar29 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        uVar2 = *(ushort *)(lVar5 + 2 + lVar27 * 0x18);
        local_168 = local_188;
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar29 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar29 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        uVar2 = *(ushort *)(lVar5 + 4 + lVar27 * 0x18);
        local_158 = local_188;
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar29 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar29 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        fVar29 = local_188;
        uVar2 = *(ushort *)(lVar5 + 6 + lVar27 * 0x18);
        if (((((uVar2 & 0x7c00) == 0) && ((uVar2 & 0x3ff) != 0)) &&
            (*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc)) &&
           (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
          DAT_1468509d8 = 1.442695;
          _Init_thread_footer(&DAT_1468509dc);
        }
        uVar2 = *(ushort *)(lVar5 + 8 + lVar27 * 0x18);
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar30 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar30 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        uVar2 = *(ushort *)(lVar5 + 10 + lVar27 * 0x18);
        local_178 = local_188;
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar30 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar30 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        fVar30 = local_188;
        uVar2 = *(ushort *)(lVar5 + 0xc + lVar27 * 0x18);
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar31 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar31 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        fVar31 = local_188;
        uVar2 = *(ushort *)(lVar5 + 0xe + lVar27 * 0x18);
        if (((((uVar2 & 0x7c00) == 0) && ((uVar2 & 0x3ff) != 0)) &&
            (*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc)) &&
           (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
          DAT_1468509d8 = 1.442695;
          _Init_thread_footer(&DAT_1468509dc);
        }
        uVar2 = *(ushort *)(lVar5 + 0x10 + lVar27 * 0x18);
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar32 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar32 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        fVar32 = local_188;
        uVar2 = *(ushort *)(lVar5 + 0x12 + lVar27 * 0x18);
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar33 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar33 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        fVar33 = local_188;
        uVar2 = *(ushort *)(lVar5 + 0x14 + lVar27 * 0x18);
        local_188 = (float)((uVar2 & 0xffff8000) << 0x10);
        if ((uVar2 & 0x7c00) == 0) {
          uVar26 = uVar2 & 0x3ff;
          if ((uVar2 & 0x3ff) != 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc) &&
               (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
              DAT_1468509d8 = 1.442695;
              _Init_thread_footer(&DAT_1468509dc);
            }
            fVar34 = _guard_xfg_dispatch_icall_nop((float)uVar26);
            iVar25 = 10 - (int)(fVar34 * DAT_1468509d8);
            local_188 = (float)(uVar26 << ((char)iVar25 + 0xdU & 0x1f) & 0x7fffff |
                                (0x71U - iVar25 & 0xff) << 0x17 | (uint)local_188);
          }
        }
        else if ((uVar2 & 0x7c00) == 0x7c00) {
          local_188 = (float)((uint)local_188 | 0x477fe000);
        }
        else {
          local_188 = (float)(((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                             (uint)local_188);
        }
        uVar2 = *(ushort *)(lVar5 + 0x16 + lVar27 * 0x18);
        if (((((uVar2 & 0x7c00) == 0) && ((uVar2 & 0x3ff) != 0)) &&
            (*(int *)(*(longlong *)((longlong)pvVar24 + uVar28 * 8) + 0x38) < DAT_1468509dc)) &&
           (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
          DAT_1468509d8 = 1.442695;
          _Init_thread_footer(&DAT_1468509dc);
        }
      }
      lVar5 = puVar4[1];
      (**(code **)(*(longlong *)*puVar4 + 0x28))();
      (**(code **)(*(longlong *)*puVar4 + 0x20))();
      fVar34 = *(float *)(param_1 + 0x80);
      fVar6 = *(float *)(param_1 + 0x84);
      fVar7 = *(float *)(param_1 + 0x88);
      fVar8 = *(float *)(param_1 + 0x8c);
      fVar9 = *(float *)(param_1 + 0x90);
      fVar10 = *(float *)(param_1 + 0x94);
      fVar11 = *(float *)(param_1 + 0x98);
      fVar12 = *(float *)(param_1 + 0x9c);
      fVar13 = *(float *)(param_1 + 0xa0);
      fVar14 = *(float *)(param_1 + 0xa4);
      fVar15 = *(float *)(param_1 + 0xa8);
      fVar16 = *(float *)(param_1 + 0xac);
      pfVar1 = (float *)(lVar5 + lVar27 * 0x10);
      fVar17 = *pfVar1;
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar20 = *(float *)(param_1 + 0xb0);
      fVar21 = *(float *)(param_1 + 0xb4);
      fVar22 = *(float *)(param_1 + 0xb8);
      fVar23 = *(float *)(param_1 + 0xbc);
      iVar25 = (int)param_9[1];
      *(int *)(param_9 + 1) = iVar25 + 1;
      if (*(int *)((longlong)param_9 + 0xc) < iVar25 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_9,iVar25);
      }
      lVar5 = *param_9;
      local_184 = local_184 + 1;
      lVar27 = (longlong)iVar25 * 0x40;
      pfVar1 = (float *)(lVar27 + lVar5);
      *pfVar1 = local_168 * fVar34 + local_158 * fVar9 + fVar29 * fVar13 + fVar20 * 0.0;
      pfVar1[1] = local_168 * fVar6 + local_158 * fVar10 + fVar29 * fVar14 + fVar21 * 0.0;
      pfVar1[2] = local_168 * fVar7 + local_158 * fVar11 + fVar29 * fVar15 + fVar22 * 0.0;
      pfVar1[3] = local_168 * fVar8 + local_158 * fVar12 + fVar29 * fVar16 + fVar23 * 0.0;
      pfVar1 = (float *)(lVar27 + 0x10 + lVar5);
      *pfVar1 = local_178 * fVar34 + fVar30 * fVar9 + fVar31 * fVar13 + fVar20 * 0.0;
      pfVar1[1] = local_178 * fVar6 + fVar30 * fVar10 + fVar31 * fVar14 + fVar21 * 0.0;
      pfVar1[2] = local_178 * fVar7 + fVar30 * fVar11 + fVar31 * fVar15 + fVar22 * 0.0;
      pfVar1[3] = local_178 * fVar8 + fVar30 * fVar12 + fVar31 * fVar16 + fVar23 * 0.0;
      pfVar1 = (float *)(lVar27 + 0x20 + lVar5);
      *pfVar1 = fVar32 * fVar34 + fVar33 * fVar9 + local_188 * fVar13 + fVar20 * 0.0;
      pfVar1[1] = fVar32 * fVar6 + fVar33 * fVar10 + local_188 * fVar14 + fVar21 * 0.0;
      pfVar1[2] = fVar32 * fVar7 + fVar33 * fVar11 + local_188 * fVar15 + fVar22 * 0.0;
      pfVar1[3] = fVar32 * fVar8 + fVar33 * fVar12 + local_188 * fVar16 + fVar23 * 0.0;
      pfVar1 = (float *)(lVar27 + 0x30 + lVar5);
      *pfVar1 = fVar17 * fVar34 + fVar18 * fVar9 + fVar19 * fVar13 + fVar20 * 1.0;
      pfVar1[1] = fVar17 * fVar6 + fVar18 * fVar10 + fVar19 * fVar14 + fVar21 * 1.0;
      pfVar1[2] = fVar17 * fVar7 + fVar18 * fVar11 + fVar19 * fVar15 + fVar22 * 1.0;
      pfVar1[3] = fVar17 * fVar8 + fVar18 * fVar12 + fVar19 * fVar16 + fVar23 * 1.0;
    } while (local_184 < uVar3);
  }
  return;
}



// FUNCTION 1424f4470 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrack::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackHelper",0x36);
  return param_2;
}



// FUNCTION 1424f44b0 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackAnimControl::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackAnimControlHelper",0x4c);
  return param_2;
}



// FUNCTION 1424f44f0 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackBoolProp::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackBoolPropHelper",0x46);
  return param_2;
}



// FUNCTION 1424f4530 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackColorProp::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackColorPropHelper",0x48);
  return param_2;
}



// FUNCTION 1424f4570 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackDirector::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackDirectorHelper",0x46);
  return param_2;
}



// FUNCTION 1424f45b0 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackEvent::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackEventHelper",0x40);
  return param_2;
}



// FUNCTION 1424f45f0 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackFloatProp::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackFloatPropHelper",0x48);
  return param_2;
}



// FUNCTION 1424f4630 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 *
UInterpTrackLinearColorProp::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackLinearColorPropHelper",0x54);
  return param_2;
}



// FUNCTION 1424f4670 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 *
UInterpTrackParticleReplay::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackParticleReplayHelper",0x52);
  return param_2;
}



// FUNCTION 1424f46b0 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackSound::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackSoundHelper",0x40);
  return param_2;
}



// FUNCTION 1424f46f0 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackToggle::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackToggleHelper",0x42);
  return param_2;
}



// FUNCTION 1424f4730 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackVectorProp::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackVectorPropHelper",0x4a);
  return param_2;
}



// FUNCTION 1424f4770 GetEdHelperClassName body=62 status=ok
// SIG undefined GetEdHelperClassName(void)

undefined8 * UInterpTrackVisibility::GetEdHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"UnrealEd.InterpTrackVisibilityHelper",0x4a);
  return param_2;
}



// FUNCTION 1424f47b0 FUN_1424f47b0 body=89 status=ok
// SIG undefined FUN_1424f47b0(void)

undefined8 FUN_1424f47b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423d1820();
  if ((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x7b0))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1424f4840 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 *
FStaticMeshInstanceBuffer::FInstanceLightmapBuffer::GetFriendlyName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FInstanceLightmapBuffer",0x30);
  return param_2;
}



// FUNCTION 1424f4880 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 *
FStaticMeshInstanceBuffer::FInstanceOriginBuffer::GetFriendlyName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FInstanceOriginBuffer",0x2c);
  return param_2;
}



// FUNCTION 1424f48c0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 *
FStaticMeshInstanceBuffer::FInstanceTransformBuffer::GetFriendlyName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FInstanceTransformBuffer",0x32);
  return param_2;
}



// FUNCTION 1424f4900 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FStaticMeshInstanceBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Static-mesh instances",0x2c);
  return param_2;
}



// FUNCTION 1424f49a0 GetGroupActor body=22 status=ok
// SIG undefined GetGroupActor(void)

undefined8 UInterpTrackInst::GetGroupActor(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424f49ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1424f49c0 FUN_1424f49c0 body=146 status=ok
// SIG undefined FUN_1424f49c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1424f49c0(void)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc380) {
    _Init_thread_header(&DAT_146afc380);
    if (DAT_146afc380 == -1) {
      local_18 = 0;
      uStack_10 = 0;
      FUN_1424e85d0(&DAT_146533190,&local_18);
      _DAT_1465331d1 = 0;
      atexit(FUN_143eafbb0);
      _Init_thread_footer(&DAT_146afc380);
      return &DAT_146533190;
    }
  }
  return &DAT_146533190;
}



// FUNCTION 1424f4a60 FUN_1424f4a60 body=181 status=ok
// SIG undefined FUN_1424f4a60(void)

longlong FUN_1424f4a60(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [16];
  undefined8 local_28;
  
  if (0 < *(int *)(param_1 + 0x4e0)) {
    pfVar2 = (float *)FUN_1424f17d0(param_1,local_res8);
    lVar3 = *(longlong *)(param_1 + 0x4d8);
    local_28._0_4_ = (float)param_2;
    local_28._4_4_ = (float)((ulonglong)param_2 >> 0x20);
    lVar4 = (longlong)*(int *)(param_1 + 0x4e0) * 0x20 + lVar3;
    local_28 = CONCAT44(local_28._4_4_ - pfVar2[1],(float)local_28 - *pfVar2);
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      if (((param_3 == '\0') || (*(char *)(lVar3 + 0x18) != '\0')) &&
         (cVar1 = FHUDHitBox::Contains(lVar3,local_28), cVar1 != '\0')) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1424f4b20 FUN_1424f4b20 body=7 status=ok
// SIG undefined FUN_1424f4b20(void)

undefined4 FUN_1424f4b20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x7b0);
}



// FUNCTION 1424f4b30 FUN_1424f4b30 body=1468 status=ok
// SIG undefined FUN_1424f4b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1424f4b30(longlong param_1,int param_2,float *param_3,char param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar16 [16];
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x7b0))) {
    pfVar11 = (float *)((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x7a8));
    fVar15 = *pfVar11;
    fVar22 = pfVar11[1];
    fVar19 = pfVar11[2];
    fVar23 = pfVar11[3];
    fVar26 = pfVar11[4];
    fVar30 = pfVar11[5];
    fVar32 = pfVar11[6];
    fVar36 = pfVar11[7];
    auVar1 = *(undefined1 (*) [16])(pfVar11 + 8);
    fVar2 = auVar1._0_4_;
    fVar4 = auVar1._4_4_;
    fVar6 = auVar1._8_4_;
    *param_3 = fVar15;
    param_3[1] = fVar22;
    param_3[2] = fVar19;
    param_3[3] = fVar23;
    param_3[4] = fVar26;
    param_3[5] = fVar30;
    param_3[6] = fVar32;
    param_3[7] = fVar36;
    *(undefined1 (*) [16])(param_3 + 8) = auVar1;
    fVar42 = fRam0000000146afbca8;
    fVar40 = fRam0000000146afbca4;
    fVar38 = _DAT_146afbca0;
    if (param_4 != '\0') {
      fVar35 = *(float *)(param_1 + 0x210);
      fVar21 = *(float *)(param_1 + 0x214);
      fVar18 = *(float *)(param_1 + 0x218);
      fVar9 = *(float *)(param_1 + 0x21c);
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar3 = auVar12._0_4_;
      fVar5 = auVar12._4_4_;
      fVar7 = auVar12._8_4_;
      fVar8 = auVar12._12_4_;
      auVar12 = minps(auVar1,auVar12);
      auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146afc304);
      auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146afc300);
      auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146afc308);
      auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146afc30c);
      iVar10 = movmskps(param_2,auVar13);
      if (iVar10 == 0) {
        fVar26 = fVar3 * fVar26;
        fVar30 = fVar5 * fVar30;
        fVar32 = fVar7 * fVar32;
        fVar36 = fVar8 * fVar36;
        fVar38 = fVar35 * fVar23 * _DAT_146afc2e0 + fVar9 * fVar15 +
                 fVar21 * fVar19 * _DAT_146afc2d0 + fVar18 * fVar22 * _DAT_146afc2c0;
        fVar40 = fVar35 * fVar19 * fRam0000000146afc2e4 + fVar9 * fVar22 +
                 fVar21 * fVar23 * fRam0000000146afc2d4 + fVar18 * fVar15 * fRam0000000146afc2c4;
        fVar42 = fVar35 * fVar22 * fRam0000000146afc2e8 + fVar9 * fVar19 +
                 fVar21 * fVar15 * fRam0000000146afc2d8 + fVar18 * fVar23 * fRam0000000146afc2c8;
        fVar14 = fVar35 * fVar15 * fRam0000000146afc2ec + fVar9 * fVar23 +
                 fVar21 * fVar22 * fRam0000000146afc2dc + fVar18 * fVar19 * fRam0000000146afc2cc;
        fVar15 = fVar32 * fVar21 - fVar30 * fVar18;
        fVar22 = fVar26 * fVar18 - fVar32 * fVar35;
        fVar19 = fVar30 * fVar35 - fVar26 * fVar21;
        fVar23 = fVar36 * fVar9 - fVar36 * fVar9;
        fVar15 = fVar15 + fVar15;
        fVar22 = fVar22 + fVar22;
        fVar19 = fVar19 + fVar19;
        fVar23 = fVar23 + fVar23;
        local_b8 = (fVar19 * fVar21 - fVar22 * fVar18) + fVar9 * fVar15 + fVar26 +
                   *(float *)(param_1 + 0x220);
        fStack_b4 = (fVar15 * fVar18 - fVar19 * fVar35) + fVar9 * fVar22 + fVar30 +
                    *(float *)(param_1 + 0x224);
        fStack_b0 = (fVar22 * fVar35 - fVar15 * fVar21) + fVar9 * fVar19 + fVar32 +
                    *(float *)(param_1 + 0x228);
        fVar15 = (fVar23 * fVar9 - fVar23 * fVar9) + fVar9 * fVar23 + fVar36 +
                 *(float *)(param_1 + 0x22c);
      }
      else {
        fVar17 = fVar21 + fVar21;
        fVar20 = fVar18 + fVar18;
        fVar27 = fVar35 * (fVar35 + fVar35);
        fVar36 = fVar9 * (fVar35 + fVar35);
        fVar43 = (fVar9 * fVar20 + fVar35 * fVar17) * fVar3;
        fVar44 = (fVar36 + fVar21 * fVar20) * fVar5;
        fVar45 = (fVar9 * fVar17 + fVar35 * fVar20) * fVar7;
        fVar28 = fVar5 * (fVar35 * fVar17 - fVar9 * fVar20);
        fVar31 = fVar7 * (fVar21 * fVar20 - fVar36);
        fVar33 = fVar3 * (fVar35 * fVar20 - fVar9 * fVar17);
        fVar24 = fVar22 + fVar22;
        fVar25 = fVar19 + fVar19;
        fVar36 = *(float *)(param_1 + 0x220);
        fVar35 = *(float *)(param_1 + 0x224);
        fVar9 = *(float *)(param_1 + 0x228);
        fVar14 = (float)((uint)((_DAT_146afbca0 - (fVar18 * fVar20 + fVar21 * fVar17)) * fVar3) &
                        _DAT_146afbcb0);
        fVar18 = (float)((uint)((fRam0000000146afbca4 - (fVar18 * fVar20 + fVar27)) * fVar5) &
                        uRam0000000146afbcb4);
        fVar21 = (float)((uint)((fRam0000000146afbca8 - (fVar21 * fVar17 + fVar27)) * fVar7) &
                        uRam0000000146afbcb8);
        fVar17 = (float)((uint)((fRam0000000146afbcac - (fVar27 + fVar27)) * fVar8) &
                        uRam0000000146afbcbc);
        fVar27 = fVar15 * (fVar15 + fVar15);
        fVar20 = (fVar15 + fVar15) * fVar23;
        fVar37 = (fVar25 * fVar23 + fVar24 * fVar15) * fVar2;
        fVar39 = (fVar20 + fVar25 * fVar22) * fVar4;
        fVar41 = (fVar24 * fVar23 + fVar25 * fVar15) * fVar6;
        fVar29 = fVar4 * (fVar24 * fVar15 - fVar25 * fVar23);
        fVar20 = fVar6 * (fVar25 * fVar22 - fVar20);
        fVar34 = fVar2 * (fVar25 * fVar15 - fVar24 * fVar23);
        fVar15 = (float)((uint)((_DAT_146afbca0 - (fVar19 * fVar25 + fVar22 * fVar24)) * fVar2) &
                        _DAT_146afbcb0);
        fVar19 = (float)((uint)((fRam0000000146afbca4 - (fVar19 * fVar25 + fVar27)) * fVar4) &
                        uRam0000000146afbcb4);
        fVar22 = (float)((uint)((fRam0000000146afbca8 - (fVar22 * fVar24 + fVar27)) * fVar6) &
                        uRam0000000146afbcb8);
        fVar23 = (float)((uint)((fRam0000000146afbcac - (fVar27 + fVar27)) * auVar1._12_4_) &
                        uRam0000000146afbcbc);
        local_e8 = fVar37 * fVar28 + fVar15 * fVar14 + fVar34 * fVar45 + fVar23 * fVar36;
        fStack_e4 = fVar37 * fVar18 + fVar15 * fVar43 + fVar34 * fVar31 + fVar23 * fVar35;
        fStack_e0 = fVar37 * fVar44 + fVar15 * fVar33 + fVar34 * fVar21 + fVar23 * fVar9;
        fStack_dc = fVar37 * fVar17 + fVar15 * fVar17 + fVar34 * fVar17 +
                    fVar23 * fRam0000000146afbcac;
        local_d8 = fVar19 * fVar28 + fVar29 * fVar14 + fVar39 * fVar45 + fVar23 * fVar36;
        fStack_d4 = fVar19 * fVar18 + fVar29 * fVar43 + fVar39 * fVar31 + fVar23 * fVar35;
        fStack_d0 = fVar19 * fVar44 + fVar29 * fVar33 + fVar39 * fVar21 + fVar23 * fVar9;
        fStack_cc = fVar19 * fVar17 + fVar29 * fVar17 + fVar39 * fVar17 +
                    fVar23 * fRam0000000146afbcac;
        local_c8 = fVar20 * fVar28 + fVar41 * fVar14 + fVar22 * fVar45 + fVar23 * fVar36;
        fStack_c4 = fVar20 * fVar18 + fVar41 * fVar43 + fVar22 * fVar31 + fVar23 * fVar35;
        fStack_c0 = fVar20 * fVar44 + fVar41 * fVar33 + fVar22 * fVar21 + fVar23 * fVar9;
        fStack_bc = fVar20 * fVar17 + fVar41 * fVar17 + fVar22 * fVar17 +
                    fVar23 * fRam0000000146afbcac;
        local_b8 = fVar30 * fVar28 + fVar26 * fVar14 + fVar32 * fVar45 +
                   fRam0000000146afbcac * fVar36;
        fStack_b4 = fVar30 * fVar18 + fVar26 * fVar43 + fVar32 * fVar31 +
                    fRam0000000146afbcac * fVar35;
        fStack_b0 = fVar30 * fVar44 + fVar26 * fVar33 + fVar32 * fVar21 +
                    fRam0000000146afbcac * fVar9;
        fStack_ac = fVar30 * fVar17 + fVar26 * fVar17 + fVar32 * fVar17 +
                    fRam0000000146afbcac * fRam0000000146afbcac;
        FMatrix::RemoveScaling(&local_e8);
        fVar15 = (float)(-(uint)(_DAT_146afc300 <= fVar3 * fVar2) & (_DAT_146afc2f0 ^ (uint)fVar38)
                        ^ _DAT_146afc2f0);
        fVar22 = (float)(-(uint)(fRam0000000146afc304 <= fVar5 * fVar4) &
                         (uRam0000000146afc2f4 ^ (uint)fVar40) ^ uRam0000000146afc2f4);
        fVar19 = (float)(-(uint)(fRam0000000146afc308 <= fVar7 * fVar6) &
                         (uRam0000000146afc2f8 ^ (uint)fVar42) ^ uRam0000000146afc2f8);
        local_e8 = local_e8 * fVar15;
        fStack_e4 = fStack_e4 * fVar15;
        fStack_e0 = fStack_e0 * fVar15;
        fStack_d0 = fStack_d0 * fVar22;
        fStack_d4 = fStack_d4 * fVar22;
        local_d8 = local_d8 * fVar22;
        fStack_c0 = fStack_c0 * fVar19;
        local_c8 = local_c8 * fVar19;
        fStack_c4 = fStack_c4 * fVar19;
        FQuat::FQuat(&local_f8,&local_e8);
        auVar16._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
        auVar16._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
        auVar16._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
        auVar16._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
        fVar30 = auVar16._4_4_ + auVar16._0_4_;
        fVar32 = auVar16._8_4_ + auVar16._4_4_;
        fVar36 = auVar16._12_4_ + auVar16._8_4_;
        fVar35 = auVar16._0_4_ + auVar16._12_4_;
        auVar12._4_4_ = fVar32;
        auVar12._0_4_ = fVar30;
        auVar12._8_4_ = fVar36;
        auVar12._12_4_ = fVar35;
        auVar12 = rsqrtps(auVar16,auVar12);
        fVar22 = auVar12._0_4_;
        fVar19 = auVar12._4_4_;
        fVar23 = auVar12._8_4_;
        fVar26 = auVar12._12_4_;
        fVar22 = (_DAT_146afbd30 - fVar22 * fVar22 * fVar30 * _DAT_146afbd30) * fVar22 + fVar22;
        fVar19 = (fRam0000000146afbd34 - fVar19 * fVar19 * fVar32 * fRam0000000146afbd34) * fVar19 +
                 fVar19;
        fVar23 = (fRam0000000146afbd38 - fVar23 * fVar23 * fVar36 * fRam0000000146afbd38) * fVar23 +
                 fVar23;
        fVar26 = (fRam0000000146afbd3c - fVar26 * fVar26 * fVar35 * fRam0000000146afbd3c) * fVar26 +
                 fVar26;
        fVar15 = 0.0;
        fVar38 = (float)(((uint)(((_DAT_146afbd30 - fVar22 * fVar22 * fVar30 * _DAT_146afbd30) *
                                  fVar22 + fVar22) * local_f8) ^ _DAT_146afbd20) &
                         -(uint)(1e-08 <= fVar30) ^ _DAT_146afbd20);
        fVar40 = (float)(((uint)(((fRam0000000146afbd34 -
                                  fVar19 * fVar19 * fVar32 * fRam0000000146afbd34) * fVar19 + fVar19
                                 ) * fStack_f4) ^ uRam0000000146afbd24) & -(uint)(1e-08 <= fVar32) ^
                        uRam0000000146afbd24);
        fVar42 = (float)(((uint)(((fRam0000000146afbd38 -
                                  fVar23 * fVar23 * fVar36 * fRam0000000146afbd38) * fVar23 + fVar23
                                 ) * fStack_f0) ^ uRam0000000146afbd28) & -(uint)(1e-08 <= fVar36) ^
                        uRam0000000146afbd28);
        fVar14 = (float)(((uint)(((fRam0000000146afbd3c -
                                  fVar26 * fVar26 * fVar35 * fRam0000000146afbd3c) * fVar26 + fVar26
                                 ) * fStack_ec) ^ uRam0000000146afbd2c) & -(uint)(1e-08 <= fVar35) ^
                        uRam0000000146afbd2c);
      }
      *param_3 = fVar38;
      param_3[1] = fVar40;
      param_3[2] = fVar42;
      param_3[3] = fVar14;
      param_3[4] = local_b8;
      param_3[5] = fStack_b4;
      param_3[6] = fStack_b0;
      param_3[7] = fVar15;
      param_3[8] = fVar3 * fVar2;
      param_3[9] = fVar5 * fVar4;
      param_3[10] = fVar7 * fVar6;
      param_3[0xb] = fVar8 * auVar1._12_4_;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1424f50f0 FUN_1424f50f0 body=4345 status=ok
// SIG undefined FUN_1424f50f0(void)

void FUN_1424f50f0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  uint local_res8;
  uint local_res20;
  uint local_f8;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  int local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  plVar8 = *(longlong **)(*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
  if ((plVar8[7] & 0x2008000000000U) == 0) {
    return;
  }
  lVar6 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar6 = plVar8[0xe];
    if (lVar6 != 0) {
      lVar7 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar7 = *(longlong *)(lVar6 + 0x70);
        if (lVar7 == 0) {
          return;
        }
        iVar23 = 0;
        plVar12 = (longlong *)(*(int *)((longlong)plVar8 + 0x44) + param_2);
        iVar19 = *(int *)(plVar8[0xe] + 0x34);
        iVar11 = (int)plVar12[1];
        if (iVar11 < 1) {
          return;
        }
        local_res8 = 0;
        do {
          lVar20 = 0;
          if (iVar11 != 0) {
            lVar20 = (longlong)(int)local_res8 + *plVar12;
          }
          for (lVar21 = *(longlong *)(lVar7 + 0x60); lVar21 != 0;
              lVar21 = *(longlong *)(lVar21 + 0x58)) {
            iVar11 = (int)param_1[1];
            *(int *)(param_1 + 1) = iVar11 + 1;
            local_98 = (longlong *)lVar6;
            iStack_90 = iVar23;
            if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar11);
            }
            puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x10);
            *puVar1 = (undefined4)local_98;
            puVar1[1] = local_98._4_4_;
            puVar1[2] = iStack_90;
            puVar1[3] = uStack_8c;
            local_c8 = (longlong *)*param_3;
            iStack_c0 = (int)param_3[1];
            uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
            FUN_1424f50f0(param_1,lVar20,&local_c8);
            iVar11 = (int)param_1[1];
            iVar10 = (iVar11 - (iVar11 + -1)) + -1;
            if (iVar10 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)(iVar11 + -1) * 0x10 + *param_1),
                         (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar10 << 4);
              iVar11 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar11 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
          }
          local_res8 = local_res8 + iVar19;
          iVar23 = iVar23 + 1;
          iVar11 = (int)plVar12[1];
        } while (iVar23 < iVar11);
        return;
      }
    }
    plVar12 = (longlong *)plVar8[0xe];
    if (plVar12 == (longlong *)0x0) {
      return;
    }
    lVar6 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    if (((ulonglong)plVar12[7] >> 0x31 & 1) == 0) {
      return;
    }
    uVar13 = 0;
    plVar22 = (longlong *)(*(int *)((longlong)plVar8 + 0x44) + param_2);
    iVar19 = *(int *)(plVar8[0xe] + 0x34);
    iVar11 = (int)plVar22[1];
    uVar15 = uVar13;
    uVar17 = uVar13;
    if (iVar11 < 1) {
      return;
    }
    do {
      uVar14 = uVar13;
      if (iVar11 != 0) {
        uVar14 = (longlong)(int)uVar15 + *plVar22;
      }
      plVar8 = (longlong *)(**(code **)(*plVar12 + 0x378))(plVar12,uVar14);
      if (plVar8 != (longlong *)0x0) {
        FInstancedPropertyPath::Push(param_1,plVar12,uVar17);
        local_c8 = plVar8;
        FInstancedPropertyPath::FInstancedPropertyPath(&iStack_c0,param_1);
        (*(code *)*param_3)(param_3[1],&local_c8);
        if (CONCAT44(uStack_bc,iStack_c0) != 0) {
          FMemory::Free();
        }
        iVar11 = (int)param_1[1];
        iVar23 = (iVar11 - (iVar11 + -1)) + -1;
        if (iVar23 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(iVar11 + -1) * 0x10 + *param_1),
                     (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar23 << 4);
          iVar11 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar11 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
      }
      uVar16 = (int)uVar17 + 1;
      iVar11 = (int)plVar22[1];
      uVar15 = (ulonglong)(uint)((int)uVar15 + iVar19);
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < iVar11);
    return;
  }
  lVar6 = UMapProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    lVar6 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (((ulonglong)plVar8[7] >> 0x31 & 1) != 0) {
        lVar6 = UObjectProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return;
        }
        iVar19 = 0;
        if ((int)plVar8[6] < 1) {
          return;
        }
        do {
          plVar12 = (longlong *)
                    (**(code **)(*plVar8 + 0x378))
                              (plVar8,(longlong)*(int *)((longlong)plVar8 + 0x44) +
                                      *(int *)((longlong)plVar8 + 0x34) * iVar19 + param_2);
          if (plVar12 != (longlong *)0x0) {
            local_c8 = plVar12;
            FInstancedPropertyPath::FInstancedPropertyPath(&iStack_c0,param_1);
            (*(code *)*param_3)(param_3[1],&local_c8);
            if (CONCAT44(uStack_bc,iStack_c0) != 0) {
              FMemory::Free();
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < (int)plVar8[6]);
        return;
      }
      cVar4 = UObjectBaseUtility::IsA<UStructProperty>(plVar8);
      if (cVar4 == '\0') {
        return;
      }
      if (plVar8[0xe] == 0) {
        return;
      }
      iVar19 = 0;
      if ((int)plVar8[6] < 1) {
        return;
      }
      do {
        iVar11 = *(int *)((longlong)plVar8 + 0x44);
        iVar23 = *(int *)((longlong)plVar8 + 0x34);
        for (lVar6 = *(longlong *)(plVar8[0xe] + 0x60); lVar6 != 0;
            lVar6 = *(longlong *)(lVar6 + 0x58)) {
          FInstancedPropertyPath::Push(param_1,lVar6,iVar19);
          local_c8 = (longlong *)*param_3;
          iStack_c0 = (int)param_3[1];
          uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
          FUN_1424f50f0(param_1,(longlong)iVar11 + iVar19 * iVar23 + param_2,&local_c8);
          iVar10 = (int)param_1[1];
          iVar5 = (iVar10 - (iVar10 + -1)) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)(iVar10 + -1) * 0x10 + *param_1),
                       (void *)((longlong)iVar10 * 0x10 + *param_1),(longlong)iVar5 << 4);
            iVar10 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar10 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)plVar8[6]);
      return;
    }
    lVar6 = plVar8[0xe];
    local_98 = (longlong *)lVar6;
    if (lVar6 != 0) {
      lVar7 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar6 = *(longlong *)(lVar6 + 0x70);
        if (lVar6 == 0) {
          return;
        }
        lVar7 = plVar8[0x12];
        plVar8 = (longlong *)(*(int *)((longlong)plVar8 + 0x44) + param_2);
        iVar19 = 0;
        uVar16 = (int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34);
        if (uVar16 == 0) {
          return;
        }
        local_f8 = 0;
        local_res8 = 1;
        local_res20 = uVar16;
        do {
          lVar20 = (longlong)local_98;
          lVar21 = 0;
          if ((iVar19 < 0) || ((int)plVar8[5] <= iVar19)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            plVar12 = (longlong *)plVar8[4];
            if ((longlong *)plVar8[4] == (longlong *)0x0) {
              plVar12 = plVar8 + 2;
            }
            iVar11 = iVar19;
            if (iVar19 < 0) {
              iVar11 = iVar19 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar12 + (longlong)(iVar11 >> 5) * 4) & local_res8) == 0)
            goto LAB_1424f5d46;
            bVar3 = true;
          }
          else {
LAB_1424f5d46:
            bVar3 = false;
          }
          if (bVar3) {
            if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
              lVar21 = (longlong)(int)local_f8 + *plVar8;
            }
            for (lVar2 = *(longlong *)(lVar6 + 0x60); lVar2 != 0;
                lVar2 = *(longlong *)(lVar2 + 0x58)) {
              iVar11 = (int)param_1[1];
              local_c8 = (longlong *)lVar20;
              *(int *)(param_1 + 1) = iVar11 + 1;
              iStack_c0 = iVar19;
              if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar11);
              }
              puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x10);
              *puVar1 = (undefined4)local_c8;
              puVar1[1] = local_c8._4_4_;
              puVar1[2] = iStack_c0;
              puVar1[3] = uStack_bc;
              local_d8 = (longlong *)*param_3;
              uStack_d0 = (undefined4)param_3[1];
              uStack_cc = *(undefined4 *)((longlong)param_3 + 0xc);
              FUN_1424f50f0(param_1,lVar21,&local_d8);
              iVar11 = (int)param_1[1];
              iVar23 = (iVar11 - (iVar11 + -1)) + -1;
              if (iVar23 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)(iVar11 + -1) * 0x10 + *param_1),
                           (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar23 << 4);
                iVar11 = (int)param_1[1];
              }
              *(int *)(param_1 + 1) = iVar11 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
              uVar16 = local_res20;
            }
            uVar16 = uVar16 + -1;
            local_res20 = uVar16;
          }
          local_f8 = local_f8 + (int)lVar7;
          local_res8 = local_res8 << 1 | (uint)((int)local_res8 < 0);
          iVar19 = iVar19 + 1;
          if (uVar16 == 0) {
            return;
          }
        } while( true );
      }
    }
    plVar12 = (longlong *)plVar8[0xe];
    if (plVar12 == (longlong *)0x0) {
      return;
    }
    lVar6 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    if (((ulonglong)plVar12[7] >> 0x31 & 1) == 0) {
      return;
    }
    local_b8 = (undefined4)plVar8[0xf];
    uStack_b4 = *(undefined4 *)((longlong)plVar8 + 0x7c);
    uStack_b0 = (undefined4)plVar8[0x10];
    uStack_ac = *(undefined4 *)((longlong)plVar8 + 0x84);
    plVar22 = (longlong *)(*(int *)((longlong)plVar8 + 0x44) + param_2);
    lVar6 = plVar8[0x12];
    local_a8 = plVar8[0x11];
    iVar19 = 0;
    iVar11 = (int)plVar22[1] - *(int *)((longlong)plVar22 + 0x34);
    if (iVar11 == 0) {
      return;
    }
    local_res20 = 0;
    local_res8 = 1;
    do {
      if ((iVar19 < 0) || ((int)plVar22[5] <= iVar19)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar8 = (longlong *)plVar22[4];
        if ((longlong *)plVar22[4] == (longlong *)0x0) {
          plVar8 = plVar22 + 2;
        }
        iVar23 = iVar19;
        if (iVar19 < 0) {
          iVar23 = iVar19 + 0x1f;
        }
        if ((*(uint *)((longlong)plVar8 + (longlong)(iVar23 >> 5) * 4) & local_res8) == 0)
        goto LAB_1424f5f47;
        bVar3 = true;
      }
      else {
LAB_1424f5f47:
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)plVar22[1] == *(int *)((longlong)plVar22 + 0x34)) {
          lVar7 = 0;
        }
        else {
          lVar7 = (longlong)(int)local_res20 + *plVar22;
        }
        plVar8 = (longlong *)(**(code **)(*plVar12 + 0x378))(plVar12,lVar7);
        if (plVar8 != (longlong *)0x0) {
          FInstancedPropertyPath::Push(param_1,plVar12,iVar19);
          local_c8 = plVar8;
          FInstancedPropertyPath::FInstancedPropertyPath(&iStack_c0,param_1);
          (*(code *)*param_3)(param_3[1],&local_c8);
          if (CONCAT44(uStack_bc,iStack_c0) != 0) {
            FMemory::Free();
          }
          iVar23 = (int)param_1[1];
          iVar10 = (iVar23 - (iVar23 + -1)) + -1;
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)(iVar23 + -1) * 0x10 + *param_1),
                       (void *)((longlong)iVar23 * 0x10 + *param_1),(longlong)iVar10 << 4);
            iVar23 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar23 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
        }
        iVar11 = iVar11 + -1;
      }
      local_res20 = local_res20 + (int)lVar6;
      iVar19 = iVar19 + 1;
      local_res8 = local_res8 << 1 | (uint)((int)local_res8 < 0);
      if (iVar11 == 0) {
        return;
      }
    } while( true );
  }
  plVar12 = (longlong *)plVar8[0xe];
  uVar15 = 0;
  uVar16 = 1;
  local_res8 = 1;
  local_d8 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    lVar6 = UStructProperty::GetPrivateStaticClass();
    plVar22 = local_d8;
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = plVar12[0xe];
      if (lVar6 != 0) {
        lVar7 = plVar8[0x14];
        local_70 = (int)plVar8[0x10];
        iStack_6c = *(undefined4 *)((longlong)plVar8 + 0x84);
        uStack_68 = (undefined4)plVar8[0x11];
        uStack_64 = *(undefined4 *)((longlong)plVar8 + 0x8c);
        plVar12 = (longlong *)(*(int *)((longlong)plVar8 + 0x44) + param_2);
        iVar19 = (int)plVar12[1];
        iVar11 = *(int *)((longlong)plVar12 + 0x34);
        if (0 < iVar19 - iVar11) {
          local_res20 = 0;
          uVar17 = uVar15;
          local_98 = plVar12;
          do {
            uVar16 = (uint)uVar15;
            iVar23 = (int)uVar17;
            if ((iVar23 < 0) || ((int)plVar12[5] <= iVar23)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              plVar9 = (longlong *)plVar12[4];
              if ((longlong *)plVar12[4] == (longlong *)0x0) {
                plVar9 = plVar12 + 2;
              }
              iVar10 = iVar23;
              if (iVar23 < 0) {
                iVar10 = iVar23 + 0x1f;
              }
              if ((*(uint *)((longlong)plVar9 + (longlong)(iVar10 >> 5) * 4) &
                  1 << ((byte)uVar17 & 0x1f)) == 0) goto LAB_1424f5587;
              bVar3 = true;
            }
            else {
LAB_1424f5587:
              bVar3 = false;
            }
            if (bVar3) {
              if (iVar19 == iVar11) {
                local_d8 = (longlong *)0x0;
              }
              else {
                local_d8 = (longlong *)((longlong)local_70 + (longlong)(int)uVar16 + *plVar12);
              }
              plVar9 = local_d8;
              for (lVar20 = *(longlong *)(lVar6 + 0x60); lVar20 != 0;
                  lVar20 = *(longlong *)(lVar20 + 0x58)) {
                iVar19 = (int)param_1[1];
                local_c8 = plVar22;
                *(int *)(param_1 + 1) = iVar19 + 1;
                iStack_c0 = iVar23;
                if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar19);
                }
                puVar1 = (undefined4 *)(*param_1 + (longlong)iVar19 * 0x10);
                *puVar1 = (undefined4)local_c8;
                puVar1[1] = local_c8._4_4_;
                puVar1[2] = iStack_c0;
                puVar1[3] = uStack_bc;
                local_d8 = (longlong *)*param_3;
                uStack_d0 = (undefined4)param_3[1];
                uStack_cc = *(undefined4 *)((longlong)param_3 + 0xc);
                FUN_1424f50f0(param_1,plVar9,&local_d8);
                iVar19 = (int)param_1[1];
                iVar11 = (iVar19 - (iVar19 + -1)) + -1;
                if (iVar11 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)(iVar19 + -1) * 0x10 + *param_1),
                             (void *)((longlong)iVar19 * 0x10 + *param_1),(longlong)iVar11 << 4);
                  iVar19 = (int)param_1[1];
                }
                *(int *)(param_1 + 1) = iVar19 + -1;
                TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
                plVar12 = local_98;
                uVar16 = local_res20;
              }
            }
            local_res20 = uVar16 + (int)lVar7;
            uVar15 = (ulonglong)local_res20;
            uVar17 = (ulonglong)(iVar23 + 1U);
            iVar19 = (int)plVar12[1];
            iVar11 = *(int *)((longlong)plVar12 + 0x34);
          } while ((int)(iVar23 + 1U) < iVar19 - iVar11);
        }
      }
      goto LAB_1424f5876;
    }
  }
  plVar12 = (longlong *)plVar8[0xe];
  if (plVar12 != (longlong *)0x0) {
    local_98 = plVar12;
    lVar6 = UObjectProperty::GetPrivateStaticClass();
    plVar22 = local_98;
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (((ulonglong)plVar12[7] >> 0x31 & 1) != 0)) {
      lVar6 = plVar8[0x14];
      local_70 = (int)plVar8[0x10];
      iStack_6c = *(undefined4 *)((longlong)plVar8 + 0x84);
      uStack_68 = (undefined4)plVar8[0x11];
      uStack_64 = *(undefined4 *)((longlong)plVar8 + 0x8c);
      plVar12 = (longlong *)(*(int *)((longlong)plVar8 + 0x44) + param_2);
      local_res20 = (int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34);
      if (local_res20 != 0) {
        local_f8 = 0;
        uVar17 = uVar15;
        uVar13 = uVar15;
        do {
          uVar18 = (uint)uVar13;
          iVar19 = (int)uVar17;
          if ((iVar19 < 0) || ((int)plVar12[5] <= iVar19)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            plVar9 = (longlong *)plVar12[4];
            if ((longlong *)plVar12[4] == (longlong *)0x0) {
              plVar9 = plVar12 + 2;
            }
            iVar11 = iVar19;
            if (iVar19 < 0) {
              iVar11 = iVar19 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar9 + (longlong)(iVar11 >> 5) * 4) & uVar16) == 0)
            goto LAB_1424f5782;
            bVar3 = true;
          }
          else {
LAB_1424f5782:
            bVar3 = false;
          }
          if (bVar3) {
            uVar13 = uVar15;
            if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
              uVar13 = (longlong)local_70 + (longlong)(int)uVar18 + *plVar12;
            }
            plVar9 = (longlong *)(**(code **)(*plVar22 + 0x378))(plVar22,uVar13);
            if (plVar9 != (longlong *)0x0) {
              FInstancedPropertyPath::Push(param_1,plVar22,uVar17);
              local_c8 = plVar9;
              FInstancedPropertyPath::FInstancedPropertyPath(&iStack_c0,param_1);
              (*(code *)*param_3)(param_3[1],&local_c8);
              if (CONCAT44(uStack_bc,iStack_c0) != 0) {
                FMemory::Free();
              }
              iVar11 = (int)param_1[1];
              iVar23 = (iVar11 - (iVar11 + -1)) + -1;
              if (iVar23 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)(iVar11 + -1) * 0x10 + *param_1),
                           (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar23 << 4);
                iVar11 = (int)param_1[1];
              }
              *(int *)(param_1 + 1) = iVar11 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
            }
            local_res20 = local_res20 + -1;
            uVar18 = local_f8;
          }
          local_f8 = uVar18 + (int)lVar6;
          uVar13 = (ulonglong)local_f8;
          uVar17 = (ulonglong)(iVar19 + 1);
          uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
        } while (local_res20 != 0);
      }
    }
  }
LAB_1424f5876:
  uVar16 = 1;
  uVar15 = 0;
  lVar6 = plVar8[0xf];
  local_98 = (longlong *)lVar6;
  if (lVar6 != 0) {
    lVar7 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = *(longlong *)(lVar6 + 0x70);
      if (lVar6 == 0) {
        return;
      }
      lVar7 = plVar8[0x14];
      plVar8 = (longlong *)(*(int *)((longlong)plVar8 + 0x44) + param_2);
      uVar16 = (int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34);
      if (uVar16 == 0) {
        return;
      }
      local_f8 = 0;
      uVar17 = uVar15;
      local_res20 = uVar16;
      do {
        lVar20 = (longlong)local_98;
        lVar21 = 0;
        uVar18 = (uint)uVar15;
        iVar19 = (int)uVar17;
        if ((iVar19 < 0) || ((int)plVar8[5] <= iVar19)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar12 = (longlong *)plVar8[4];
          if ((longlong *)plVar8[4] == (longlong *)0x0) {
            plVar12 = plVar8 + 2;
          }
          iVar11 = iVar19;
          if (iVar19 < 0) {
            iVar11 = iVar19 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar12 + (longlong)(iVar11 >> 5) * 4) & local_res8) == 0)
          goto LAB_1424f594f;
          bVar3 = true;
        }
        else {
LAB_1424f594f:
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
            lVar21 = (longlong)(int)uVar18 + *plVar8;
          }
          for (lVar2 = *(longlong *)(lVar6 + 0x60); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x58))
          {
            iVar11 = (int)param_1[1];
            local_c8 = (longlong *)lVar20;
            *(int *)(param_1 + 1) = iVar11 + 1;
            iStack_c0 = iVar19;
            if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar11);
            }
            puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x10);
            *puVar1 = (undefined4)local_c8;
            puVar1[1] = local_c8._4_4_;
            puVar1[2] = iStack_c0;
            puVar1[3] = uStack_bc;
            local_d8 = (longlong *)*param_3;
            uStack_d0 = (undefined4)param_3[1];
            uStack_cc = *(undefined4 *)((longlong)param_3 + 0xc);
            FUN_1424f50f0(param_1,lVar21,&local_d8);
            iVar11 = (int)param_1[1];
            iVar23 = (iVar11 - (iVar11 + -1)) + -1;
            if (iVar23 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)(iVar11 + -1) * 0x10 + *param_1),
                         (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar23 << 4);
              iVar11 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar11 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
            uVar16 = local_res20;
            uVar18 = local_f8;
          }
          uVar16 = uVar16 + -1;
          local_res20 = uVar16;
        }
        local_f8 = uVar18 + (int)lVar7;
        uVar15 = (ulonglong)local_f8;
        local_res8 = local_res8 << 1 | (uint)((int)local_res8 < 0);
        uVar17 = (ulonglong)(iVar19 + 1);
        if (uVar16 == 0) {
          return;
        }
      } while( true );
    }
  }
  local_d8 = (longlong *)plVar8[0xf];
  if (local_d8 != (longlong *)0x0) {
    lVar6 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(local_d8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_d8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (((ulonglong)local_d8[7] >> 0x31 & 1) != 0)) {
      local_70 = (int)plVar8[0x10];
      iStack_6c = *(int *)((longlong)plVar8 + 0x84);
      uStack_68 = (undefined4)plVar8[0x11];
      uStack_64 = *(undefined4 *)((longlong)plVar8 + 0x8c);
      lVar6 = plVar8[0x14];
      plVar8 = (longlong *)(*(int *)((longlong)plVar8 + 0x44) + param_2);
      iVar19 = (int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34);
      if (iVar19 != 0) {
        local_res8 = 0;
        uVar17 = uVar15;
        plVar12 = local_d8;
        uVar13 = uVar15;
        do {
          iVar11 = (int)uVar17;
          if ((iVar11 < 0) || ((int)plVar8[5] <= iVar11)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            plVar22 = (longlong *)plVar8[4];
            if ((longlong *)plVar8[4] == (longlong *)0x0) {
              plVar22 = plVar8 + 2;
            }
            iVar23 = iVar11;
            if (iVar11 < 0) {
              iVar23 = iVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar22 + (longlong)(iVar23 >> 5) * 4) & uVar16) == 0)
            goto LAB_1424f5b42;
            bVar3 = true;
          }
          else {
LAB_1424f5b42:
            bVar3 = false;
          }
          uVar18 = (uint)uVar13;
          if (bVar3) {
            uVar14 = uVar15;
            if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
              uVar14 = (longlong)(int)(uint)uVar13 + (longlong)iStack_6c + *plVar8;
            }
            plVar12 = (longlong *)(**(code **)(*plVar12 + 0x378))(plVar12,uVar14);
            if (plVar12 != (longlong *)0x0) {
              FInstancedPropertyPath::Push(param_1,local_d8,uVar17);
              local_c8 = plVar12;
              FInstancedPropertyPath::FInstancedPropertyPath(&iStack_c0,param_1);
              (*(code *)*param_3)(param_3[1],&local_c8);
              if (CONCAT44(uStack_bc,iStack_c0) != 0) {
                FMemory::Free();
              }
              iVar23 = (int)param_1[1];
              iVar10 = (iVar23 - (iVar23 + -1)) + -1;
              if (iVar10 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)(iVar23 + -1) * 0x10 + *param_1),
                           (void *)((longlong)iVar23 * 0x10 + *param_1),(longlong)iVar10 << 4);
                iVar23 = (int)param_1[1];
              }
              *(int *)(param_1 + 1) = iVar23 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
            }
            iVar19 = iVar19 + -1;
            plVar12 = local_d8;
            uVar18 = local_res8;
          }
          local_res8 = uVar18 + (int)lVar6;
          uVar13 = (ulonglong)local_res8;
          uVar17 = (ulonglong)(iVar11 + 1);
          uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
        } while (iVar19 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1424f61f0 FUN_1424f61f0 body=769 status=ok
// SIG undefined FUN_1424f61f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1424f61f0(longlong param_1,longlong *param_2,float *param_3,char param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_118 [32];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = *(longlong *)(param_1 + 0x728);
  if (lVar6 != 0) {
    local_e8 = *(ulonglong *)(param_3 + 4);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_e8;
    local_e0 = param_3[6];
    local_f8 = *param_3;
    fStack_f4 = param_3[1];
    fStack_f0 = param_3[2];
    fStack_ec = param_3[3];
    if (param_4 != '\0') {
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar15 = auVar2._0_4_;
      fVar16 = auVar2._4_4_;
      fVar17 = auVar2._8_4_;
      fVar18 = auVar2._12_4_;
      auVar3._4_4_ = -(uint)(fRam0000000146afc324 < (float)((uint)fVar16 & uRam0000000146afc334));
      auVar3._0_4_ = -(uint)(_DAT_146afc320 < (float)((uint)fVar15 & _DAT_146afc330));
      auVar3._8_4_ = -(uint)(fRam0000000146afc328 < (float)((uint)fVar17 & uRam0000000146afc338));
      auVar3._12_4_ = -(uint)(fRam0000000146afc32c < (float)((uint)fVar18 & uRam0000000146afc33c));
      iVar4 = movmskps(local_e0,auVar3);
      if (iVar4 == 0) {
        local_a8 = _DAT_1468b5b70;
        uStack_a0 = uRam00000001468b5b78;
        local_88 = _DAT_1468b5b90;
        fStack_84 = fRam00000001468b5b94;
        fStack_80 = fRam00000001468b5b98;
        fStack_7c = fRam00000001468b5b9c;
        local_98 = _DAT_1468b5b80;
        uStack_90 = uRam00000001468b5b88;
      }
      else {
        fVar19 = *(float *)(param_1 + 0x210) * _DAT_146afc310;
        fVar20 = *(float *)(param_1 + 0x214) * fRam0000000146afc314;
        fVar21 = *(float *)(param_1 + 0x218) * fRam0000000146afc318;
        fVar22 = *(float *)(param_1 + 0x21c) * fRam0000000146afc31c;
        auVar11 = rcpps(auVar11,auVar2);
        local_a8 = CONCAT44(fVar20,fVar19);
        uStack_a0 = CONCAT44(fVar22,fVar21);
        fVar10 = auVar11._0_4_;
        fVar12 = auVar11._4_4_;
        fVar13 = auVar11._8_4_;
        fVar14 = auVar11._12_4_;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar15;
        fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar16;
        fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar17;
        fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar18;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar15;
        fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar16;
        fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar17;
        fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar18;
        local_88 = (float)(((uint)fVar10 &
                            -(uint)((float)((uint)fVar15 & _DAT_146afc330) <= _DAT_146afc320) ^
                           (uint)fVar10) & _DAT_146afbcb0);
        fStack_84 = (float)(((uint)fVar12 &
                             -(uint)((float)((uint)fVar16 & uRam0000000146afc334) <=
                                    fRam0000000146afc324) ^ (uint)fVar12) & uRam0000000146afbcb4);
        fStack_80 = (float)(((uint)fVar13 &
                             -(uint)((float)((uint)fVar17 & uRam0000000146afc338) <=
                                    fRam0000000146afc328) ^ (uint)fVar13) & uRam0000000146afbcb8);
        fStack_7c = (float)(((uint)fVar14 &
                             -(uint)((float)((uint)fVar18 & uRam0000000146afc33c) <=
                                    fRam0000000146afc32c) ^ (uint)fVar14) & uRam0000000146afbcbc);
        fVar10 = *(float *)(param_1 + 0x220) * local_88;
        fVar12 = *(float *)(param_1 + 0x224) * fStack_84;
        fVar13 = *(float *)(param_1 + 0x228) * fStack_80;
        fVar14 = *(float *)(param_1 + 0x22c) * fStack_7c;
        fVar15 = fVar13 * fVar20 - fVar12 * fVar21;
        fVar16 = fVar10 * fVar21 - fVar13 * fVar19;
        fVar17 = fVar12 * fVar19 - fVar10 * fVar20;
        fVar18 = fVar14 * fVar22 - fVar14 * fVar22;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar17 + fVar17;
        fVar18 = fVar18 + fVar18;
        local_98 = CONCAT44((uint)(0.0 - ((fVar15 * fVar21 - fVar17 * fVar19) +
                                         fVar22 * fVar16 + fVar12)) & uRam0000000146afbcb4,
                            (uint)(0.0 - ((fVar17 * fVar20 - fVar16 * fVar21) +
                                         fVar22 * fVar15 + fVar10)) & _DAT_146afbcb0);
        uStack_90 = CONCAT44((uint)(0.0 - ((fVar18 * fVar22 - fVar18 * fVar22) +
                                          fVar22 * fVar18 + fVar14)) & uRam0000000146afbcbc,
                             (uint)(0.0 - ((fVar16 * fVar19 - fVar15 * fVar20) +
                                          fVar22 * fVar17 + fVar13)) & uRam0000000146afbcb8);
      }
      pfVar5 = (float *)FBox::TransformBy(&local_f8,local_c8,&local_a8);
      local_f8 = *pfVar5;
      fStack_f4 = pfVar5[1];
      fStack_f0 = pfVar5[2];
      fStack_ec = pfVar5[3];
      local_e8 = *(ulonglong *)(pfVar5 + 4);
      local_e0 = pfVar5[6];
    }
    lVar6 = UStaticMesh::GetBounds(lVar6,local_c8);
    uVar1 = *(undefined8 *)(lVar6 + 0xc);
    fVar15 = *(float *)(lVar6 + 0x14);
    if (0 < *(int *)(param_1 + 0x7b0)) {
      local_d8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      fVar17 = local_d8._4_4_;
      local_d8._0_4_ = (float)uVar1;
      fVar16 = (float)local_d8;
      uVar9 = uVar8;
      local_d8 = uVar1;
      local_d0 = fVar15;
      do {
        auVar11 = *(undefined1 (*) [16])(uVar9 + 0x10 + *(longlong *)(param_1 + 0x7a8));
        if ((((local_f8 <= auVar11._0_4_ + fVar16) && (auVar11._0_4_ - fVar16 <= fStack_ec)) &&
            (fStack_f4 <= auVar11._4_4_ + fVar17)) &&
           (((auVar11._4_4_ - fVar17 <= (float)local_e8 && (fStack_f0 <= auVar11._8_4_ + fVar15)) &&
            (auVar11._8_4_ - fVar15 <= local_e8._4_4_)))) {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          *(int *)(*param_2 + (longlong)iVar4 * 4) = (int)uVar8;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar9 = uVar9 + 0x30;
      } while ((int)uVar7 < *(int *)(param_1 + 0x7b0));
    }
  }
  return param_2;
}



// FUNCTION 1424f6500 FUN_1424f6500 body=753 status=ok
// SIG undefined FUN_1424f6500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1424f6500(longlong param_1,longlong *param_2,undefined8 *param_3,float param_4,char param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar7 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = *(longlong *)(param_1 + 0x728);
  if (lVar6 != 0) {
    local_c8 = *param_3;
    fStack_c0 = *(float *)(param_3 + 1);
    fStack_bc = param_4;
    if (param_5 != '\0') {
      auVar11 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar15 = auVar11._0_4_;
      fVar16 = auVar11._4_4_;
      fVar17 = auVar11._8_4_;
      fVar18 = auVar11._12_4_;
      auVar3._4_4_ = -(uint)(fRam0000000146afc324 < (float)((uint)fVar16 & uRam0000000146afc334));
      auVar3._0_4_ = -(uint)(_DAT_146afc320 < (float)((uint)fVar15 & _DAT_146afc330));
      auVar3._8_4_ = -(uint)(fRam0000000146afc328 < (float)((uint)fVar17 & uRam0000000146afc338));
      auVar3._12_4_ = -(uint)(fRam0000000146afc32c < (float)((uint)fVar18 & uRam0000000146afc33c));
      iVar4 = movmskps(fStack_c0,auVar3);
      if (iVar4 == 0) {
        local_98 = _DAT_1468b5b70;
        uStack_90 = uRam00000001468b5b78;
        local_78 = _DAT_1468b5b90;
        fStack_74 = fRam00000001468b5b94;
        fStack_70 = fRam00000001468b5b98;
        fStack_6c = fRam00000001468b5b9c;
        local_88 = _DAT_1468b5b80;
        uStack_80 = uRam00000001468b5b88;
      }
      else {
        fVar19 = *(float *)(param_1 + 0x210) * _DAT_146afc310;
        fVar20 = *(float *)(param_1 + 0x214) * fRam0000000146afc314;
        fVar21 = *(float *)(param_1 + 0x218) * fRam0000000146afc318;
        fVar22 = *(float *)(param_1 + 0x21c) * fRam0000000146afc31c;
        auVar11 = rcpps(in_XMM1,auVar11);
        local_98 = CONCAT44(fVar20,fVar19);
        uStack_90 = CONCAT44(fVar22,fVar21);
        fVar10 = auVar11._0_4_;
        fVar12 = auVar11._4_4_;
        fVar13 = auVar11._8_4_;
        fVar14 = auVar11._12_4_;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar15;
        fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar16;
        fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar17;
        fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar18;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar15;
        fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar16;
        fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar17;
        fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar18;
        local_78 = (float)(((uint)fVar10 &
                            -(uint)((float)((uint)fVar15 & _DAT_146afc330) <= _DAT_146afc320) ^
                           (uint)fVar10) & _DAT_146afbcb0);
        fStack_74 = (float)(((uint)fVar12 &
                             -(uint)((float)((uint)fVar16 & uRam0000000146afc334) <=
                                    fRam0000000146afc324) ^ (uint)fVar12) & uRam0000000146afbcb4);
        fStack_70 = (float)(((uint)fVar13 &
                             -(uint)((float)((uint)fVar17 & uRam0000000146afc338) <=
                                    fRam0000000146afc328) ^ (uint)fVar13) & uRam0000000146afbcb8);
        fStack_6c = (float)(((uint)fVar14 &
                             -(uint)((float)((uint)fVar18 & uRam0000000146afc33c) <=
                                    fRam0000000146afc32c) ^ (uint)fVar14) & uRam0000000146afbcbc);
        fVar10 = *(float *)(param_1 + 0x220) * local_78;
        fVar12 = *(float *)(param_1 + 0x224) * fStack_74;
        fVar13 = *(float *)(param_1 + 0x228) * fStack_70;
        fVar14 = *(float *)(param_1 + 0x22c) * fStack_6c;
        fVar15 = fVar13 * fVar20 - fVar12 * fVar21;
        fVar16 = fVar10 * fVar21 - fVar13 * fVar19;
        fVar17 = fVar12 * fVar19 - fVar10 * fVar20;
        fVar18 = fVar14 * fVar22 - fVar14 * fVar22;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar17 + fVar17;
        fVar18 = fVar18 + fVar18;
        local_88 = CONCAT44((uint)(0.0 - ((fVar15 * fVar21 - fVar17 * fVar19) +
                                         fVar22 * fVar16 + fVar12)) & uRam0000000146afbcb4,
                            (uint)(0.0 - ((fVar17 * fVar20 - fVar16 * fVar21) +
                                         fVar22 * fVar15 + fVar10)) & _DAT_146afbcb0);
        uStack_80 = CONCAT44((uint)(0.0 - ((fVar18 * fVar22 - fVar18 * fVar22) +
                                          fVar22 * fVar18 + fVar14)) & uRam0000000146afbcbc,
                             (uint)(0.0 - ((fVar16 * fVar19 - fVar15 * fVar20) +
                                          fVar22 * fVar17 + fVar13)) & uRam0000000146afbcb8);
      }
      puVar5 = (undefined8 *)FSphere::TransformBy(&local_c8,local_b8,&local_98);
      local_c8 = *puVar5;
      fStack_c0 = *(float *)(puVar5 + 1);
      fStack_bc = *(float *)((longlong)puVar5 + 0xc);
    }
    lVar6 = UStaticMesh::GetBounds(lVar6,local_b8);
    fVar15 = *(float *)(lVar6 + 0x18);
    uVar9 = uVar7;
    if (0 < *(int *)(param_1 + 0x7b0)) {
      do {
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x7a8) + 0x10 + uVar7);
        pfVar2 = (float *)(*(longlong *)(param_1 + 0x7a8) + 0x20 + uVar7);
        fVar16 = pfVar2[1];
        if (pfVar2[1] <= *pfVar2) {
          fVar16 = *pfVar2;
        }
        if (fVar16 <= pfVar2[2]) {
          fVar16 = pfVar2[2];
        }
        fVar16 = fVar16 * fVar15 + fStack_bc + 0.0001;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        if ((local_c8._4_4_ - pfVar1[1]) * (local_c8._4_4_ - pfVar1[1]) +
            ((float)local_c8 - *pfVar1) * ((float)local_c8 - *pfVar1) +
            (fStack_c0 - pfVar1[2]) * (fStack_c0 - pfVar1[2]) <= fVar16 * fVar16) {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          *(int *)(*param_2 + (longlong)iVar4 * 4) = (int)uVar9;
        }
        uVar8 = (int)uVar9 + 1;
        uVar7 = uVar7 + 0x30;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x7b0));
    }
  }
  return param_2;
}



// FUNCTION 1424f6800 FUN_1424f6800 body=944 status=ok
// SIG undefined FUN_1424f6800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424f6800(longlong param_1,undefined8 param_2,float param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  float *pfVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_res8 [8];
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [80];
  
  if ((*(int *)(param_1 + 0x40) == 0) && ((*(byte *)(param_1 + 0xc0) & 1) != 0)) {
    iVar13 = *(int *)(param_1 + 0x90);
    lVar6 = (longlong)iVar13;
    if (iVar13 == 0) {
      local_c8 = DAT_1464aa810;
      uStack_c4 = DAT_1464aa814;
      uStack_c0 = DAT_1464aa818;
      uStack_bc = DAT_1464aa81c;
      puVar7 = (undefined8 *)FRotator::FRotator(local_e0,&local_c8);
    }
    else {
      if ((iVar13 < 2) ||
         (pfVar9 = *(float **)(param_1 + 0x88), param_3 < *pfVar9 || param_3 == *pfVar9)) {
        FUN_1424f71f0(param_1,param_2,0,local_res8,local_e0,0,0);
        puVar8 = (uint *)FQuat::MakeFromEuler(local_88,local_e0);
        local_c8 = *puVar8;
        uStack_c4 = puVar8[1];
        uStack_c0 = puVar8[2];
        uStack_bc = puVar8[3];
      }
      else if (param_3 < pfVar9[lVar6 * 0xb + -0xb]) {
        bVar5 = false;
        iVar13 = 1;
        if (1 < lVar6) {
          lVar11 = 0x2c;
          lVar12 = 1;
          do {
            if (bVar5) break;
            lVar1 = *(longlong *)(param_1 + 0x88);
            if (param_3 < *(float *)(lVar11 + lVar1)) {
              fVar24 = (param_3 - *(float *)(lVar11 + -0x2c + lVar1)) /
                       (*(float *)(lVar11 + lVar1) - *(float *)(lVar11 + -0x2c + lVar1));
              if (0.0 <= fVar24) {
                if (1.0 <= fVar24) {
                  fVar24 = 1.0;
                }
              }
              else {
                fVar24 = 0.0;
              }
              FUN_1424f71f0(param_1,param_2,iVar13 + -1,local_res8,local_f0,0,0);
              FUN_1424f71f0(param_1,param_2,iVar13,local_res8,local_e0,0,0);
              FQuat::MakeFromEuler(local_98,local_f0);
              FQuat::MakeFromEuler(local_a8,local_e0);
              pfVar9 = (float *)FQuat::Slerp_NotNormalized(local_88,local_98,local_a8,fVar24);
              bVar5 = true;
              fVar24 = *pfVar9;
              fVar2 = pfVar9[1];
              fVar3 = pfVar9[2];
              fVar4 = pfVar9[3];
              auVar14._0_4_ = fVar24 * fVar24 + fVar3 * fVar3;
              auVar14._4_4_ = fVar2 * fVar2 + fVar4 * fVar4;
              auVar14._8_4_ = fVar3 * fVar3 + fVar24 * fVar24;
              auVar14._12_4_ = fVar4 * fVar4 + fVar2 * fVar2;
              fVar20 = auVar14._4_4_ + auVar14._0_4_;
              fVar21 = auVar14._8_4_ + auVar14._4_4_;
              fVar22 = auVar14._12_4_ + auVar14._8_4_;
              fVar23 = auVar14._0_4_ + auVar14._12_4_;
              auVar15._4_4_ = fVar21;
              auVar15._0_4_ = fVar20;
              auVar15._8_4_ = fVar22;
              auVar15._12_4_ = fVar23;
              auVar15 = rsqrtps(auVar14,auVar15);
              fVar16 = auVar15._0_4_;
              fVar17 = auVar15._4_4_;
              fVar18 = auVar15._8_4_;
              fVar19 = auVar15._12_4_;
              fVar16 = (_DAT_146afbd30 - fVar16 * fVar16 * fVar20 * _DAT_146afbd30) * fVar16 +
                       fVar16;
              fVar17 = (fRam0000000146afbd34 - fVar17 * fVar17 * fVar21 * fRam0000000146afbd34) *
                       fVar17 + fVar17;
              fVar18 = (fRam0000000146afbd38 - fVar18 * fVar18 * fVar22 * fRam0000000146afbd38) *
                       fVar18 + fVar18;
              fVar19 = (fRam0000000146afbd3c - fVar19 * fVar19 * fVar23 * fRam0000000146afbd3c) *
                       fVar19 + fVar19;
              local_c8 = ((uint)(((_DAT_146afbd30 - fVar16 * fVar16 * fVar20 * _DAT_146afbd30) *
                                  fVar16 + fVar16) * fVar24) ^ _DAT_146afbd20) &
                         -(uint)(1e-08 <= fVar20) ^ _DAT_146afbd20;
              uStack_c4 = ((uint)(((fRam0000000146afbd34 -
                                   fVar17 * fVar17 * fVar21 * fRam0000000146afbd34) * fVar17 +
                                  fVar17) * fVar2) ^ uRam0000000146afbd24) &
                          -(uint)(1e-08 <= fVar21) ^ uRam0000000146afbd24;
              uStack_c0 = ((uint)(((fRam0000000146afbd38 -
                                   fVar18 * fVar18 * fVar22 * fRam0000000146afbd38) * fVar18 +
                                  fVar18) * fVar3) ^ uRam0000000146afbd28) &
                          -(uint)(1e-08 <= fVar22) ^ uRam0000000146afbd28;
              uStack_bc = ((uint)(((fRam0000000146afbd3c -
                                   fVar19 * fVar19 * fVar23 * fRam0000000146afbd3c) * fVar19 +
                                  fVar19) * fVar4) ^ uRam0000000146afbd2c) &
                          -(uint)(1e-08 <= fVar23) ^ uRam0000000146afbd2c;
              local_b8 = local_c8;
              uStack_b4 = uStack_c4;
              uStack_b0 = uStack_c0;
              uStack_ac = uStack_bc;
            }
            iVar13 = iVar13 + 1;
            lVar12 = lVar12 + 1;
            lVar11 = lVar11 + 0x2c;
          } while (lVar12 < lVar6);
        }
      }
      else {
        FUN_1424f71f0(param_1,param_2,iVar13 + -1,local_res8,local_f0,0,0);
        puVar8 = (uint *)FQuat::MakeFromEuler(local_98,local_f0);
        local_c8 = *puVar8;
        uStack_c4 = puVar8[1];
        uStack_c0 = puVar8[2];
        uStack_bc = puVar8[3];
      }
      puVar7 = (undefined8 *)FRotator::FRotator(local_e0,&local_c8);
    }
  }
  else {
    uVar10 = FUN_1424edf40(param_1,local_e0,param_2,param_3);
    puVar7 = (undefined8 *)FRotator::MakeFromEuler(local_f0,uVar10);
  }
  *param_5 = *puVar7;
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar7 + 1);
  puVar7 = (undefined8 *)FUN_1424ed910(param_1,local_e0,param_2,param_3);
  *param_4 = *puVar7;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar7 + 1);
  return;
}



// FUNCTION 1424f6e30 FUN_1424f6e30 body=957 status=ok
// SIG undefined FUN_1424f6e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424f6e30(longlong param_1,longlong param_2,int param_3,undefined4 *param_4,float *param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  float local_res18 [2];
  undefined4 *local_res20;
  longlong local_98 [2];
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_78;
  float local_70;
  
  lVar8 = (longlong)param_3;
  local_98[0] = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar8 * 0x10);
  lVar3 = 0;
  local_res8 = 0;
  local_res20 = param_4;
  if ((local_98[0] != 0) && (param_2 != 0)) {
    plVar5 = *(longlong **)(param_2 + 0x20);
    lVar6 = 0;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x278))(plVar5);
      lVar6 = *(longlong *)(param_2 + 0x20);
    }
    uVar1 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = FName::ToString(local_98,&local_78);
    plVar5 = (longlong *)FUN_1424efd90(uVar1,uVar4);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (((lVar3 != 0) && (plVar5 != (longlong *)0x0)) &&
       (lVar3 = (**(code **)(*plVar5 + 0x278))(plVar5), lVar3 != 0)) {
      lVar3 = (**(code **)(*plVar5 + 0x278))(plVar5);
      if (lVar3 != 0) {
        lVar6 = FUN_1429e18b0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(longlong *)(lVar3 + 0x488) != 0)) {
          lVar3 = *(longlong *)(lVar3 + 0x488);
        }
      }
      lVar3 = *(longlong *)(lVar3 + 0x168);
      if (lVar3 == 0) {
        local_70 = DAT_1468b5d98;
        pfVar7 = (float *)&local_78;
        local_78 = _DAT_1468b5d90;
      }
      else {
        pfVar7 = &local_88;
        local_88 = *(float *)(lVar3 + 0x220);
        local_80 = *(float *)(lVar3 + 0x228);
        fStack_84 = *(float *)(lVar3 + 0x224);
      }
      fVar11 = pfVar7[2];
      *(undefined8 *)param_5 = *(undefined8 *)pfVar7;
      param_5[2] = fVar11;
      *local_res20 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8 + lVar8 * 0x10);
      if ((param_7 == (undefined8 *)0x0) && (param_6 == (undefined8 *)0x0)) {
        return;
      }
      if ((param_3 != 0) && (param_3 != *(int *)(param_1 + 0xa8) + -1)) {
        FUN_1424f6e30(param_1,param_2,param_3 + -1,&local_res8,&local_78,0,0);
        FUN_1424f6e30(param_1,param_2,param_3 + 1,local_res18,&local_88,0,0);
        fVar11 = 1.0 - *(float *)(param_1 + 0xb8);
        local_res18[0] = local_res18[0] - (float)local_res8;
        if (local_res18[0] <= 0.0001) {
          local_res18[0] = 0.0001;
        }
        local_res18[0] = 1.0 / local_res18[0];
        fVar9 = local_res18[0] * fVar11 * ((local_88 - *param_5) + (*param_5 - (float)local_78));
        fVar10 = local_res18[0] *
                 fVar11 * ((fStack_84 - param_5[1]) + (param_5[1] - local_78._4_4_));
        local_res18[0] =
             local_res18[0] * fVar11 * ((local_80 - param_5[2]) + (param_5[2] - local_70));
        if (param_6 != (undefined8 *)0x0) {
          *param_6 = CONCAT44(fVar10,fVar9);
          *(float *)(param_6 + 1) = local_res18[0];
        }
        if (param_7 == (undefined8 *)0x0) {
          return;
        }
        *param_7 = CONCAT44(fVar10,fVar9);
        *(float *)(param_7 + 1) = local_res18[0];
        return;
      }
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = 0;
        *(undefined4 *)(param_6 + 1) = 0;
      }
      if (param_7 == (undefined8 *)0x0) {
        return;
      }
      *param_7 = 0;
      *(undefined4 *)(param_7 + 1) = 0;
      return;
    }
  }
  lVar8 = lVar8 * 0x2c;
  *local_res20 = *(undefined4 *)(lVar8 + *(longlong *)(param_1 + 0x70));
  lVar3 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)param_5 = *(undefined8 *)(lVar8 + 4 + lVar3);
  param_5[2] = *(float *)(lVar8 + 0xc + lVar3);
  if (param_6 != (undefined8 *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    *param_6 = *(undefined8 *)(lVar8 + 0x10 + lVar3);
    *(undefined4 *)(param_6 + 1) = *(undefined4 *)(lVar8 + 0x18 + lVar3);
  }
  if (param_7 != (undefined8 *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    *param_7 = *(undefined8 *)(lVar8 + 0x1c + lVar3);
    *(undefined4 *)(param_7 + 1) = *(undefined4 *)(lVar8 + 0x24 + lVar3);
  }
  return;
}



// FUNCTION 1424f71f0 FUN_1424f71f0 body=1053 status=ok
// SIG undefined FUN_1424f71f0(void)

void FUN_1424f71f0(longlong param_1,longlong param_2,int param_3,undefined4 *param_4,float *param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint7 uVar9;
  undefined8 *puVar8;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res8;
  float local_res18 [2];
  undefined4 *local_res20;
  longlong local_c8 [2];
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined1 local_98 [16];
  longlong local_88 [2];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar10 = (longlong)param_3;
  local_c8[0] = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar10 * 0x10);
  lVar4 = 0;
  local_res8 = 0;
  local_res20 = param_4;
  if ((local_c8[0] != 0) && (param_2 != 0)) {
    plVar6 = *(longlong **)(param_2 + 0x20);
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar6 + 0x278))(plVar6);
      lVar7 = *(longlong *)(param_2 + 0x20);
    }
    uVar1 = *(undefined8 *)(lVar7 + 0x20);
    uVar5 = FName::ToString(local_c8,local_88);
    plVar6 = (longlong *)FUN_1424efd90(uVar1,uVar5);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (((lVar4 != 0) && (plVar6 != (longlong *)0x0)) &&
       (lVar4 = (**(code **)(*plVar6 + 0x278))(plVar6), lVar4 != 0)) {
      lVar7 = (**(code **)(*plVar6 + 0x278))(plVar6);
      lVar4 = 0;
      if (lVar7 != 0) {
        lVar4 = FUN_1429e18b0();
        uVar9 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          lVar4 = (ulonglong)uVar9 << 8;
        }
        else {
          lVar4 = CONCAT71(uVar9,1);
        }
        if (((char)lVar4 != '\0') && (lVar4 = *(longlong *)(lVar7 + 0x488), lVar4 != 0)) {
          lVar7 = lVar4;
        }
      }
      lVar7 = *(longlong *)(lVar7 + 0x168);
      if (lVar7 == 0) {
        local_b8 = (float)DAT_1468b5da0;
        fStack_b4 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_b0 = DAT_1468b5da8;
      }
      else {
        local_78 = *(float *)(lVar7 + 0x210);
        fStack_74 = *(float *)(lVar7 + 0x214);
        fStack_70 = *(float *)(lVar7 + 0x218);
        fStack_6c = *(float *)(lVar7 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_74);
        auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_78);
        auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_70);
        auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_6c);
        iVar3 = movmskps((int)lVar4,auVar2);
        if (iVar3 != 0) {
          *(float *)(lVar7 + 0x250) = local_78;
          *(float *)(lVar7 + 0x254) = fStack_74;
          *(float *)(lVar7 + 600) = fStack_70;
          *(float *)(lVar7 + 0x25c) = fStack_6c;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_78,local_98);
          *(undefined8 *)(lVar7 + 0x260) = *puVar8;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        local_b8 = (float)*(undefined8 *)(lVar7 + 0x260);
        fStack_b4 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
        local_b0 = *(float *)(lVar7 + 0x268);
      }
      local_a0 = local_b0;
      local_a8 = local_b8;
      fStack_a4 = fStack_b4;
      puVar8 = (undefined8 *)FRotator::Euler(&local_b8,local_88);
      *(undefined8 *)param_5 = *puVar8;
      param_5[2] = *(float *)(puVar8 + 1);
      *local_res20 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8 + lVar10 * 0x10);
      if ((param_7 == (undefined8 *)0x0) && (param_6 == (undefined8 *)0x0)) {
        return;
      }
      if ((param_3 == 0) || (param_3 == *(int *)(param_1 + 0xa8) + -1)) {
        if (param_6 != (undefined8 *)0x0) {
          *param_6 = 0;
          *(undefined4 *)(param_6 + 1) = 0;
        }
        if (param_7 == (undefined8 *)0x0) {
          return;
        }
        *param_7 = 0;
        *(undefined4 *)(param_7 + 1) = 0;
        return;
      }
      FUN_1424f71f0(param_1,param_2,param_3 + -1,&local_res8,&local_a8,0,0);
      FUN_1424f71f0(param_1,param_2,param_3 + 1,local_res18,&local_b8,0,0);
      fVar13 = 1.0 - *(float *)(param_1 + 0xb8);
      local_res18[0] = local_res18[0] - (float)local_res8;
      if (local_res18[0] <= 0.0001) {
        local_res18[0] = 0.0001;
      }
      local_res18[0] = 1.0 / local_res18[0];
      fVar11 = local_res18[0] * fVar13 * ((local_b8 - *param_5) + (*param_5 - local_a8));
      fVar12 = local_res18[0] * fVar13 * ((fStack_b4 - param_5[1]) + (param_5[1] - fStack_a4));
      local_res18[0] = local_res18[0] * fVar13 * ((local_b0 - param_5[2]) + (param_5[2] - local_a0))
      ;
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = CONCAT44(fVar12,fVar11);
        *(float *)(param_6 + 1) = local_res18[0];
      }
      if (param_7 == (undefined8 *)0x0) {
        return;
      }
      *param_7 = CONCAT44(fVar12,fVar11);
      *(float *)(param_7 + 1) = local_res18[0];
      return;
    }
  }
  lVar10 = lVar10 * 0x2c;
  *local_res20 = *(undefined4 *)(lVar10 + *(longlong *)(param_1 + 0x88));
  lVar4 = *(longlong *)(param_1 + 0x88);
  *(undefined8 *)param_5 = *(undefined8 *)(lVar10 + 4 + lVar4);
  param_5[2] = *(float *)(lVar10 + 0xc + lVar4);
  if (param_6 != (undefined8 *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    *param_6 = *(undefined8 *)(lVar10 + 0x10 + lVar4);
    *(undefined4 *)(param_6 + 1) = *(undefined4 *)(lVar10 + 0x18 + lVar4);
  }
  if (param_7 != (undefined8 *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    *param_7 = *(undefined8 *)(lVar10 + 0x1c + lVar4);
    *(undefined4 *)(param_7 + 1) = *(undefined4 *)(lVar10 + 0x24 + lVar4);
  }
  return;
}



// FUNCTION 1424f7750 FUN_1424f7750 body=975 status=ok
// SIG undefined FUN_1424f7750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424f7750(longlong param_1,longlong param_2,int param_3,undefined4 *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint7 uVar11;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 local_res8;
  longlong local_res10;
  float local_res18 [2];
  undefined4 *local_res20;
  float local_98;
  float local_94;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  undefined1 local_74 [12];
  longlong local_68 [2];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  lVar6 = 0;
  lVar12 = (longlong)param_3;
  local_res8 = 0;
  plVar13 = (longlong *)(*(longlong *)(param_1 + 0x98) + lVar12 * 0x10);
  local_res20 = param_4;
  if ((*plVar13 != 0) && (param_2 != 0)) {
    plVar2 = *(longlong **)(param_2 + 0x20);
    local_res10 = param_2;
    if (plVar2 == (longlong *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar6 = (**(code **)(*plVar2 + 0x278))(plVar2);
      lVar8 = *(longlong *)(local_res10 + 0x20);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    uVar7 = FName::ToString(plVar13,local_68);
    plVar13 = (longlong *)FUN_1424efd90(uVar3,uVar7);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (((lVar6 != 0) && (plVar13 != (longlong *)0x0)) &&
       (lVar6 = (**(code **)(*plVar13 + 0x278))(plVar13), lVar6 != 0)) {
      lVar8 = (**(code **)(*plVar13 + 0x278))(plVar13);
      lVar6 = 0;
      if (lVar8 != 0) {
        lVar6 = FUN_1429e18b0();
        uVar11 = (uint7)((ulonglong)(lVar6 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          lVar6 = (ulonglong)uVar11 << 8;
        }
        else {
          lVar6 = CONCAT71(uVar11,1);
        }
        if (((char)lVar6 != '\0') && (lVar6 = *(longlong *)(lVar8 + 0x488), lVar6 != 0)) {
          lVar8 = lVar6;
        }
      }
      bVar1 = *(byte *)(param_1 + 0x90);
      if (bVar1 < 3) {
        lVar6 = *(longlong *)(lVar8 + 0x168);
        if (lVar6 == 0) {
          local_80 = _DAT_1468b5d90;
          local_78 = DAT_1468b5d98;
        }
        else {
          local_80 = *(undefined8 *)(lVar6 + 0x220);
          local_78 = *(float *)(lVar6 + 0x228);
        }
        local_90 = local_80;
        local_88 = local_78;
        if (bVar1 == 0) {
          local_90._0_4_ = (float)local_80;
          fVar15 = (float)local_90;
        }
        else {
          fVar15 = local_78;
          if (bVar1 == 1) {
            local_90._4_4_ = (float)((ulonglong)local_80 >> 0x20);
            fVar15 = local_90._4_4_;
          }
        }
      }
      else {
        lVar8 = *(longlong *)(lVar8 + 0x168);
        if (lVar8 == 0) {
          uVar14 = (undefined4)DAT_1468b5da0;
          uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_88 = DAT_1468b5da8;
        }
        else {
          local_58 = *(float *)(lVar8 + 0x210);
          fStack_54 = *(float *)(lVar8 + 0x214);
          fStack_50 = *(float *)(lVar8 + 0x218);
          fStack_4c = *(float *)(lVar8 + 0x21c);
          auVar4._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_54);
          auVar4._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_58);
          auVar4._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_50);
          auVar4._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_4c);
          iVar5 = movmskps((int)lVar6,auVar4);
          if (iVar5 != 0) {
            *(float *)(lVar8 + 0x250) = local_58;
            *(float *)(lVar8 + 0x254) = fStack_54;
            *(float *)(lVar8 + 600) = fStack_50;
            *(float *)(lVar8 + 0x25c) = fStack_4c;
            puVar9 = (undefined8 *)FQuat::Rotator(&local_58,local_74);
            *(undefined8 *)(lVar8 + 0x260) = *puVar9;
            *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          uVar14 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
          uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
          local_88 = *(float *)(lVar8 + 0x268);
        }
        local_90 = CONCAT44(uVar16,uVar14);
        local_80 = local_90;
        local_78 = local_88;
        pfVar10 = (float *)FRotator::Euler(&local_90,local_68);
        if (bVar1 != 3) {
          if (bVar1 == 4) {
            fVar15 = pfVar10[1];
            goto LAB_1424f79ad;
          }
          pfVar10 = pfVar10 + 2;
        }
        fVar15 = *pfVar10;
      }
LAB_1424f79ad:
      *param_5 = fVar15;
      *local_res20 = *(undefined4 *)(lVar12 * 0x10 + 8 + *(longlong *)(param_1 + 0x98));
      if ((param_7 == (float *)0x0) && (param_6 == (float *)0x0)) {
        return;
      }
      if ((param_3 != 0) && (param_3 != *(int *)(param_1 + 0xa0) + -1)) {
        FUN_1424f7750(param_1,local_res10,param_3 + -1,&local_94,local_res18,0,0);
        FUN_1424f7750(param_1,local_res10,param_3 + 1,&local_98,&local_res8,0,0);
        local_98 = local_98 - local_94;
        if (local_98 <= 0.0001) {
          local_98 = 0.0001;
        }
        local_98 = (((*param_5 - local_res18[0]) + ((float)local_res8 - *param_5)) *
                   (1.0 - *(float *)(param_1 + 0x88))) / local_98;
        if (param_6 != (float *)0x0) {
          *param_6 = local_98;
        }
        if (param_7 == (float *)0x0) {
          return;
        }
        *param_7 = local_98;
        return;
      }
      if (param_6 != (float *)0x0) {
        *param_6 = 0.0;
      }
      if (param_7 == (float *)0x0) {
        return;
      }
      *param_7 = 0.0;
      return;
    }
  }
  *local_res20 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + lVar12 * 0x14);
  *param_5 = *(float *)(*(longlong *)(param_1 + 0x70) + 4 + lVar12 * 0x14);
  if (param_6 != (float *)0x0) {
    *param_6 = *(float *)(*(longlong *)(param_1 + 0x70) + 8 + lVar12 * 0x14);
  }
  if (param_7 != (float *)0x0) {
    *param_7 = *(float *)(*(longlong *)(param_1 + 0x70) + 0xc + lVar12 * 0x14);
  }
  return;
}



// FUNCTION 1424f7b20 FUN_1424f7b20 body=320 status=ok
// SIG undefined FUN_1424f7b20(void)

void FUN_1424f7b20(longlong *param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  *param_3 = 0;
  *param_2 = 0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  (**(code **)(*param_1 + 0x668))(param_1,local_res10,local_res8);
  if ((local_res10[0] != 0) && (local_res8[0] != 0)) {
    iVar5 = 1 << ((char)DAT_1464c9c0c - 2U & 0x1f);
    uVar1 = (longlong)iVar5 % (longlong)local_res10[0];
    iVar4 = ((iVar5 / 2) / local_res8[0]) * (iVar5 / local_res10[0]);
    while (((iVar4 < (int)param_1[0xf6] && (3 < local_res10[0])) && (3 < local_res8[0]))) {
      local_res10[0] = local_res10[0] / 2;
      local_res8[0] = local_res8[0] / 2;
      uVar1 = (longlong)iVar5 % (longlong)local_res10[0];
      iVar4 = ((iVar5 / 2) / local_res8[0]) * (iVar5 / local_res10[0]);
    }
    cVar3 = FUN_14238efd0(param_1,uVar1 & 0xffffffff);
    if (((cVar3 != '\0') && (param_1[0xe5] != 0)) &&
       (cVar3 = (**(code **)(*param_1 + 0x938))(param_1,local_res10[0],local_res8[0]),
       cVar3 == '\x01')) {
      (**(code **)(*param_1 + 0x948))(param_1,local_res10[0],local_res8[0],param_2,param_3);
    }
    lVar2 = param_1[0xf6];
    *param_2 = *param_2 * (int)lVar2;
    *param_3 = *param_3 * (int)lVar2;
  }
  return;
}



// FUNCTION 1424f7c60 FUN_1424f7c60 body=392 status=ok
// SIG undefined FUN_1424f7c60(void)

ulonglong FUN_1424f7c60(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (((int)param_1[8] == 0) && ((int)param_1[0x12] == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  (**(code **)(*param_1 + 0x388))(param_1,param_2,param_3,local_28,local_38);
  FUN_1424e8c70(param_1,param_2,local_28,local_38,param_4,param_5);
  uVar6 = 0;
  if (*(char *)((longlong)param_1 + 0xc4) == '\x02') {
    if (*(longlong **)(param_2 + 0x20) == (longlong *)0x0) goto LAB_1424f7dcc;
    lVar4 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x278))();
    uVar6 = 0;
    if (lVar4 == 0) goto LAB_1424f7dcc;
    lVar1 = *(longlong *)(lVar4 + 0x168);
    if (lVar1 == 0) {
      local_40 = DAT_1468b5da8;
      puVar5 = &local_48;
      local_48 = DAT_1468b5da0;
    }
    else {
      local_18 = *(float *)(lVar1 + 0x210);
      fStack_14 = *(float *)(lVar1 + 0x214);
      fStack_10 = *(float *)(lVar1 + 0x218);
      fStack_c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
      iVar3 = movmskps((int)lVar4,auVar2);
      if (iVar3 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_18,&local_48);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      local_40 = *(undefined4 *)(lVar1 + 0x268);
      puVar5 = &local_48;
      local_48 = *(undefined8 *)(lVar1 + 0x260);
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0xc4) != '\x01') goto LAB_1424f7dcc;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x3a0))(param_1,&local_48,param_2);
  }
  *param_5 = *puVar5;
  uVar6 = (ulonglong)*(uint *)(puVar5 + 1);
  *(uint *)(param_5 + 1) = *(uint *)(puVar5 + 1);
LAB_1424f7dcc:
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 1424f7df0 FUN_1424f7df0 body=803 status=ok
// SIG undefined FUN_1424f7df0(void)

undefined8 * FUN_1424f7df0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if ((*(longlong *)(param_1 + 0xb0) != 0) &&
     (plVar6 = *(longlong **)(param_3 + 0x20), plVar6 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*plVar6 + 0x278))(plVar6);
    if (*(longlong *)(param_3 + 0x20) != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0x20);
      uVar5 = FName::ToString((longlong *)(param_1 + 0xb0),&local_58);
      plVar6 = (longlong *)FUN_1424efd90(uVar2,uVar5);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (((lVar4 != 0) && (plVar6 != (longlong *)0x0)) &&
         (lVar7 = (**(code **)(*plVar6 + 0x278))(plVar6), lVar7 != 0)) {
        lVar7 = (**(code **)(*plVar6 + 0x278))(plVar6);
        if (lVar7 != 0) {
          lVar8 = FUN_1429e18b0();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar7 + 0x488) != 0)) {
            lVar7 = *(longlong *)(lVar7 + 0x488);
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0x168);
        if (lVar4 == 0) {
          local_50 = DAT_1468b5d98;
          local_58._0_4_ = DAT_1468b5d90;
          local_58._4_4_ = DAT_1468b5d94;
        }
        else {
          local_50 = *(float *)(lVar4 + 0x228);
          local_58._0_4_ = *(float *)(lVar4 + 0x220);
          local_58._4_4_ = *(float *)(lVar4 + 0x224);
        }
        local_70 = local_50;
        local_74 = local_58._4_4_;
        local_78 = (float)local_58;
        local_60 = local_50;
        lVar4 = *(longlong *)(lVar7 + 0x168);
        local_68 = (float)local_58;
        fStack_64 = local_58._4_4_;
        if (lVar4 == 0) {
          local_50 = DAT_1468b5d98;
          local_58._0_4_ = DAT_1468b5d90;
          local_58._4_4_ = DAT_1468b5d94;
        }
        else {
          local_50 = *(float *)(lVar4 + 0x228);
          local_58._0_4_ = *(float *)(lVar4 + 0x220);
          local_58._4_4_ = *(float *)(lVar4 + 0x224);
        }
        local_78 = (float)local_58 - local_78;
        local_74 = local_58._4_4_ - local_74;
        local_70 = local_50 - local_70;
        fVar10 = local_78 * local_78 + local_74 * local_74 + local_70 * local_70;
        if (fVar10 != 1.0) {
          if (1e-08 <= fVar10) {
            auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
            fVar11 = auVar12._0_4_;
            fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
            fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
            local_78 = fVar11 * local_78;
            local_70 = fVar11 * local_70;
            local_74 = fVar11 * local_74;
          }
          else {
            local_78 = DAT_1468b5d90;
            local_70 = DAT_1468b5d98;
            local_74 = DAT_1468b5d94;
          }
        }
        puVar9 = (undefined8 *)FVector::Rotation(&local_78,&local_58);
        uVar1 = *(undefined4 *)(puVar9 + 1);
        *param_2 = *puVar9;
        *(undefined4 *)(param_2 + 1) = uVar1;
      }
    }
  }
  return param_2;
}



// FUNCTION 1424f8140 FUN_1424f8140 body=287 status=ok
// SIG undefined FUN_1424f8140(void)

void FUN_1424f8140(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
     (lVar4 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0xc);
    uVar8 = 0;
    uVar5 = uVar8;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
      lVar6 = AAfrPlayerState::GetPrivateStaticClass();
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
        uVar5 = uVar8;
        if (0 < *(int *)(lVar4 + 0x460)) {
          do {
            FUN_1424e4230(param_1,param_2,*(undefined8 *)(uVar5 + *(longlong *)(lVar4 + 0x458)));
            uVar3 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar3;
            uVar5 = uVar5 + 8;
          } while ((int)uVar3 < *(int *)(lVar4 + 0x460));
        }
      }
      else {
        FUN_1424e4230(param_1,param_2,lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1424f8260 FUN_1424f8260 body=149 status=ok
// SIG undefined FUN_1424f8260(void)

undefined8
FUN_1424f8260(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined1 param_5,
             undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined8 param_9)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_2 < *(int *)(param_1 + 0x408)) &&
     (uVar2 = param_9, cVar1 = FUN_14281e460(), cVar1 != '\0')) {
    FUN_1425098d0(param_1,param_2,param_3,param_9,param_5,param_6,param_7,param_8,uVar2);
    return 1;
  }
  return 0;
}



// FUNCTION 1424f8300 FUN_1424f8300 body=176 status=ok
// SIG undefined FUN_1424f8300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424f8300(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 0x20) == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))();
  }
  uVar2 = uRam00000001468b5b78;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar2;
  uVar5 = uRam00000001468b5b8c;
  uVar4 = uRam00000001468b5b88;
  uVar3 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 3) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
  uVar5 = uRam00000001468b5b9c;
  uVar4 = uRam00000001468b5b98;
  uVar3 = uRam00000001468b5b94;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 5) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
  if (((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x168), lVar6 != 0)) &&
     (plVar1 = *(longlong **)(lVar6 + 400), plVar1 != (longlong *)0x0)) {
    puVar7 = (undefined8 *)
             (**(code **)(*plVar1 + 0x420))(plVar1,local_48,*(undefined8 *)(lVar6 + 0x198),0);
    uVar2 = puVar7[1];
    *param_2 = *puVar7;
    param_2[1] = uVar2;
    uVar2 = puVar7[3];
    param_2[2] = puVar7[2];
    param_2[3] = uVar2;
    uVar2 = puVar7[5];
    param_2[4] = puVar7[4];
    param_2[5] = uVar2;
  }
  return param_2;
}



// FUNCTION 1424f83b0 FUN_1424f83b0 body=320 status=ok
// SIG undefined FUN_1424f83b0(void)

void FUN_1424f83b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((*(longlong *)(param_1 + 0x458) != 0) &&
      (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x458) + 0x160), plVar3 != (longlong *)0x0))
     && ((*(byte *)(plVar3 + 5) & 1) != 0)) {
    (**(code **)(*plVar3 + 0x288))(plVar3,param_2 + 0x70,&DAT_1468b5b70);
    uStack_10 = 0;
    local_18 = &LAB_1424e1b5c;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1 + -0x2d0);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_144012f78;
    }
    plVar1 = (longlong *)(param_2 + 0x50);
    if (&local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x58) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x58) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1424f84f0 FUN_1424f84f0 body=1561 status=ok
// SIG undefined FUN_1424f84f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424f84f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar19 [16];
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  pfVar13 = *(float **)(param_1 + 0x7a8);
  uVar11 = (ulonglong)*(int *)(param_1 + 0x7b0);
  pfVar14 = pfVar13 + uVar11 * 0xc;
  fVar42 = fRam0000000146afc308;
  fVar39 = fRam0000000146afc304;
  fVar36 = _DAT_146afc300;
  fVar31 = fRam0000000146afbca8;
  fVar37 = fRam0000000146afbca4;
  fVar40 = _DAT_146afbca0;
  for (; pfVar13 != pfVar14; pfVar13 = pfVar13 + 0xc) {
    auVar1 = *(undefined1 (*) [16])(pfVar13 + 8);
    fVar2 = auVar1._0_4_;
    fVar4 = auVar1._4_4_;
    fVar6 = auVar1._8_4_;
    local_108 = pfVar13[4];
    fStack_104 = pfVar13[5];
    fStack_100 = pfVar13[6];
    fStack_fc = pfVar13[7];
    fVar18 = *pfVar13;
    fVar23 = pfVar13[1];
    fVar21 = pfVar13[2];
    fVar25 = pfVar13[3];
    _DAT_146afbca0 = fVar40;
    fRam0000000146afbca4 = fVar37;
    fRam0000000146afbca8 = fVar31;
    _DAT_146afc300 = fVar36;
    fRam0000000146afc304 = fVar39;
    fRam0000000146afc308 = fVar42;
    if (((fVar2 != 0.0) || (fVar4 != 0.0)) || (fVar6 != 0.0)) {
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar3 = auVar15._0_4_;
      fVar5 = auVar15._4_4_;
      fVar7 = auVar15._8_4_;
      fVar8 = auVar15._12_4_;
      fVar17 = *(float *)(param_1 + 0x210);
      fVar22 = *(float *)(param_1 + 0x214);
      fVar20 = *(float *)(param_1 + 0x218);
      fVar24 = *(float *)(param_1 + 0x21c);
      auVar15 = minps(auVar1,auVar15);
      auVar16._4_4_ = -(uint)(auVar15._4_4_ < fVar39);
      auVar16._0_4_ = -(uint)(auVar15._0_4_ < fVar36);
      auVar16._8_4_ = -(uint)(auVar15._8_4_ < fVar42);
      auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146afc30c);
      iVar9 = movmskps((int)uVar11,auVar16);
      if (iVar9 == 0) {
        fVar42 = fVar3 * local_108;
        fVar39 = fVar5 * fStack_104;
        fVar33 = fVar7 * fStack_100;
        fVar34 = fVar8 * fStack_fc;
        fVar44 = fVar25 * fVar17 * _DAT_146afc2e0 + fVar24 * fVar18 +
                 fVar21 * fVar22 * _DAT_146afc2d0 + fVar23 * fVar20 * _DAT_146afc2c0;
        fVar26 = fVar21 * fVar17 * fRam0000000146afc2e4 + fVar24 * fVar23 +
                 fVar25 * fVar22 * fRam0000000146afc2d4 + fVar18 * fVar20 * fRam0000000146afc2c4;
        fVar27 = fVar23 * fVar17 * fRam0000000146afc2e8 + fVar24 * fVar21 +
                 fVar18 * fVar22 * fRam0000000146afc2d8 + fVar25 * fVar20 * fRam0000000146afc2c8;
        fVar18 = fVar18 * fVar17 * fRam0000000146afc2ec + fVar24 * fVar25 +
                 fVar23 * fVar22 * fRam0000000146afc2dc + fVar21 * fVar20 * fRam0000000146afc2cc;
        fVar36 = fVar33 * fVar22 - fVar39 * fVar20;
        fVar31 = fVar42 * fVar20 - fVar33 * fVar17;
        fVar37 = fVar39 * fVar17 - fVar42 * fVar22;
        fVar40 = fVar34 * fVar24 - fVar34 * fVar24;
        fVar36 = fVar36 + fVar36;
        fVar31 = fVar31 + fVar31;
        fVar37 = fVar37 + fVar37;
        fVar40 = fVar40 + fVar40;
        fVar42 = (fVar37 * fVar22 - fVar31 * fVar20) + fVar24 * fVar36 + fVar42 +
                 *(float *)(param_1 + 0x220);
        fVar39 = (fVar36 * fVar20 - fVar37 * fVar17) + fVar24 * fVar31 + fVar39 +
                 *(float *)(param_1 + 0x224);
        fVar36 = (fVar31 * fVar17 - fVar36 * fVar22) + fVar24 * fVar37 + fVar33 +
                 *(float *)(param_1 + 0x228);
        fVar31 = (fVar40 * fVar24 - fVar40 * fVar24) + fVar24 * fVar40 + fVar34 +
                 *(float *)(param_1 + 0x22c);
      }
      else {
        fVar33 = *(float *)(param_1 + 0x220);
        fVar34 = *(float *)(param_1 + 0x224);
        fVar44 = *(float *)(param_1 + 0x228);
        fVar26 = fVar22 + fVar22;
        fVar29 = fVar20 + fVar20;
        fVar32 = fVar17 * (fVar17 + fVar17);
        fVar27 = (fVar17 + fVar17) * fVar24;
        fVar28 = fVar23 + fVar23;
        fVar30 = fVar21 + fVar21;
        fVar47 = (fVar29 * fVar24 + fVar26 * fVar17) * fVar3;
        fVar48 = (fVar27 + fVar29 * fVar22) * fVar5;
        fVar49 = (fVar26 * fVar24 + fVar29 * fVar17) * fVar7;
        fVar35 = fVar5 * (fVar26 * fVar17 - fVar29 * fVar24);
        fVar38 = fVar7 * (fVar29 * fVar22 - fVar27);
        fVar41 = fVar3 * (fVar29 * fVar17 - fVar26 * fVar24);
        fVar27 = (fVar18 + fVar18) * fVar18;
        fVar17 = (float)((uint)((fVar40 - (fVar20 * fVar29 + fVar22 * fVar26)) * fVar3) &
                        _DAT_146afbcb0);
        fVar20 = (float)((uint)((fVar37 - (fVar20 * fVar29 + fVar32)) * fVar5) &
                        uRam0000000146afbcb4);
        fVar22 = (float)((uint)((fVar31 - (fVar22 * fVar26 + fVar32)) * fVar7) &
                        uRam0000000146afbcb8);
        fVar24 = (float)((uint)((fRam0000000146afbcac - (fVar32 + fVar32)) * fVar8) &
                        uRam0000000146afbcbc);
        fVar26 = (fVar18 + fVar18) * fVar25;
        fVar43 = (fVar30 * fVar25 + fVar28 * fVar18) * fVar2;
        fVar45 = (fVar26 + fVar30 * fVar23) * fVar4;
        fVar46 = (fVar28 * fVar25 + fVar30 * fVar18) * fVar6;
        fVar29 = fVar4 * (fVar28 * fVar18 - fVar30 * fVar25);
        fVar26 = fVar6 * (fVar30 * fVar23 - fVar26);
        fVar32 = fVar2 * (fVar30 * fVar18 - fVar28 * fVar25);
        fVar18 = (float)((uint)((fVar40 - (fVar30 * fVar21 + fVar28 * fVar23)) * fVar2) &
                        _DAT_146afbcb0);
        fVar21 = (float)((uint)((fVar37 - (fVar30 * fVar21 + fVar27)) * fVar4) &
                        uRam0000000146afbcb4);
        fVar23 = (float)((uint)((fVar31 - (fVar28 * fVar23 + fVar27)) * fVar6) &
                        uRam0000000146afbcb8);
        fVar25 = (float)((uint)((fRam0000000146afbcac - (fVar27 + fVar27)) * auVar1._12_4_) &
                        uRam0000000146afbcbc);
        local_f8 = fVar43 * fVar35 + fVar18 * fVar17 + fVar32 * fVar49 + fVar25 * fVar33;
        fStack_f4 = fVar43 * fVar20 + fVar18 * fVar47 + fVar32 * fVar38 + fVar25 * fVar34;
        fStack_f0 = fVar43 * fVar48 + fVar18 * fVar41 + fVar32 * fVar22 + fVar25 * fVar44;
        fStack_ec = fVar43 * fVar24 + fVar18 * fVar24 + fVar32 * fVar24 +
                    fVar25 * fRam0000000146afbcac;
        local_e8 = fVar21 * fVar35 + fVar29 * fVar17 + fVar45 * fVar49 + fVar25 * fVar33;
        fStack_e4 = fVar21 * fVar20 + fVar29 * fVar47 + fVar45 * fVar38 + fVar25 * fVar34;
        fStack_e0 = fVar21 * fVar48 + fVar29 * fVar41 + fVar45 * fVar22 + fVar25 * fVar44;
        fStack_dc = fVar21 * fVar24 + fVar29 * fVar24 + fVar45 * fVar24 +
                    fVar25 * fRam0000000146afbcac;
        local_d8 = fVar26 * fVar35 + fVar46 * fVar17 + fVar23 * fVar49 + fVar25 * fVar33;
        fStack_d4 = fVar26 * fVar20 + fVar46 * fVar47 + fVar23 * fVar38 + fVar25 * fVar34;
        fStack_d0 = fVar26 * fVar48 + fVar46 * fVar41 + fVar23 * fVar22 + fVar25 * fVar44;
        fStack_cc = fVar26 * fVar24 + fVar46 * fVar24 + fVar23 * fVar24 +
                    fVar25 * fRam0000000146afbcac;
        local_c8 = fStack_104 * fVar35 + local_108 * fVar17 + fStack_100 * fVar49 +
                   fRam0000000146afbcac * fVar33;
        fStack_c4 = fStack_104 * fVar20 + local_108 * fVar47 + fStack_100 * fVar38 +
                    fRam0000000146afbcac * fVar34;
        fStack_c0 = fStack_104 * fVar48 + local_108 * fVar41 + fStack_100 * fVar22 +
                    fRam0000000146afbcac * fVar44;
        fStack_bc = fStack_104 * fVar24 + local_108 * fVar24 + fStack_100 * fVar24 +
                    fRam0000000146afbcac * fRam0000000146afbcac;
        FMatrix::RemoveScaling(&local_f8);
        fVar36 = (float)(-(uint)(fVar36 <= fVar3 * fVar2) & (_DAT_146afc2f0 ^ (uint)fVar40) ^
                        _DAT_146afc2f0);
        fVar39 = (float)(-(uint)(fVar39 <= fVar5 * fVar4) & (uRam0000000146afc2f4 ^ (uint)fVar37) ^
                        uRam0000000146afc2f4);
        fVar42 = (float)(-(uint)(fVar42 <= fVar7 * fVar6) & (uRam0000000146afc2f8 ^ (uint)fVar31) ^
                        uRam0000000146afc2f8);
        local_f8 = local_f8 * fVar36;
        fStack_f4 = fStack_f4 * fVar36;
        fStack_f0 = fStack_f0 * fVar36;
        fStack_e4 = fStack_e4 * fVar39;
        fStack_e0 = fStack_e0 * fVar39;
        local_e8 = local_e8 * fVar39;
        fStack_d4 = fStack_d4 * fVar42;
        fStack_d0 = fStack_d0 * fVar42;
        local_d8 = local_d8 * fVar42;
        FQuat::FQuat(&local_118,&local_f8);
        auVar19._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
        auVar19._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
        auVar19._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
        auVar19._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
        fVar37 = auVar19._4_4_ + auVar19._0_4_;
        fVar40 = auVar19._8_4_ + auVar19._4_4_;
        fVar18 = auVar19._12_4_ + auVar19._8_4_;
        fVar23 = auVar19._0_4_ + auVar19._12_4_;
        auVar15._4_4_ = fVar40;
        auVar15._0_4_ = fVar37;
        auVar15._8_4_ = fVar18;
        auVar15._12_4_ = fVar23;
        auVar15 = rsqrtps(auVar19,auVar15);
        fVar42 = auVar15._0_4_;
        fVar39 = auVar15._4_4_;
        fVar36 = auVar15._8_4_;
        fVar31 = auVar15._12_4_;
        fVar42 = (_DAT_146afbd30 - fVar42 * fVar42 * fVar37 * _DAT_146afbd30) * fVar42 + fVar42;
        fVar39 = (fRam0000000146afbd34 - fVar39 * fVar39 * fVar40 * fRam0000000146afbd34) * fVar39 +
                 fVar39;
        fVar36 = (fRam0000000146afbd38 - fVar36 * fVar36 * fVar18 * fRam0000000146afbd38) * fVar36 +
                 fVar36;
        fVar31 = (fRam0000000146afbd3c - fVar31 * fVar31 * fVar23 * fRam0000000146afbd3c) * fVar31 +
                 fVar31;
        fVar44 = (float)(((uint)(((_DAT_146afbd30 - fVar42 * fVar42 * fVar37 * _DAT_146afbd30) *
                                  fVar42 + fVar42) * local_118) ^ _DAT_146afbd20) &
                         -(uint)(1e-08 <= fVar37) ^ _DAT_146afbd20);
        fVar26 = (float)(((uint)(((fRam0000000146afbd34 -
                                  fVar39 * fVar39 * fVar40 * fRam0000000146afbd34) * fVar39 + fVar39
                                 ) * fStack_114) ^ uRam0000000146afbd24) & -(uint)(1e-08 <= fVar40)
                        ^ uRam0000000146afbd24);
        fVar27 = (float)(((uint)(((fRam0000000146afbd38 -
                                  fVar36 * fVar36 * fVar18 * fRam0000000146afbd38) * fVar36 + fVar36
                                 ) * fStack_110) ^ uRam0000000146afbd28) & -(uint)(1e-08 <= fVar18)
                        ^ uRam0000000146afbd28);
        fVar18 = (float)(((uint)(((fRam0000000146afbd3c -
                                  fVar31 * fVar31 * fVar23 * fRam0000000146afbd3c) * fVar31 + fVar31
                                 ) * fStack_10c) ^ uRam0000000146afbd2c) & -(uint)(1e-08 <= fVar23)
                        ^ uRam0000000146afbd2c);
        fVar31 = 0.0;
        fVar42 = local_c8;
        fVar39 = fStack_c4;
        fVar36 = fStack_c0;
        local_118 = fVar44;
        fStack_114 = fVar26;
        fStack_110 = fVar27;
        fStack_10c = fVar18;
      }
      iVar9 = (int)param_3[1];
      uVar10 = iVar9 + 1;
      uVar11 = (ulonglong)uVar10;
      *(uint *)(param_3 + 1) = uVar10;
      if (*(int *)((longlong)param_3 + 0xc) < (int)uVar10) {
        uVar11 = TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar9);
      }
      pfVar12 = (float *)((longlong)iVar9 * 0x30 + *param_3);
      *pfVar12 = fVar44;
      pfVar12[1] = fVar26;
      pfVar12[2] = fVar27;
      pfVar12[3] = fVar18;
      pfVar12[4] = fVar42;
      pfVar12[5] = fVar39;
      pfVar12[6] = fVar36;
      pfVar12[7] = fVar31;
      pfVar12[8] = fVar3 * fVar2;
      pfVar12[9] = fVar5 * fVar4;
      pfVar12[10] = fVar7 * fVar6;
      pfVar12[0xb] = fVar8 * auVar1._12_4_;
    }
    fVar42 = fRam0000000146afc308;
    fVar39 = fRam0000000146afc304;
    fVar36 = _DAT_146afc300;
    fVar31 = fRam0000000146afbca8;
    fVar37 = fRam0000000146afbca4;
    fVar40 = _DAT_146afbca0;
  }
  _DAT_146afbca0 = fVar40;
  fRam0000000146afbca4 = fVar37;
  fRam0000000146afbca8 = fVar31;
  _DAT_146afc300 = fVar36;
  fRam0000000146afc304 = fVar39;
  fRam0000000146afc308 = fVar42;
  return;
}



// FUNCTION 1424f8b40 GetOverridenComponentTemplate body=144 status=ok
// SIG undefined GetOverridenComponentTemplate(void)

undefined8
UInheritableComponentHandler::GetOverridenComponentTemplate(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x80 + lVar2;
  if (lVar2 != lVar3) {
    piVar1 = (int *)(lVar2 + 0x28);
    do {
      if ((*(longlong *)(piVar1 + -6) == *param_2) &&
         ((((int)((ulonglong)param_2[3] >> 0x20) == piVar1[1] &&
           (int)((ulonglong)param_2[2] >> 0x20) == piVar1[-1]) && piVar1[-2] == (int)param_2[2]) &&
          *piVar1 == (int)param_2[3])) {
        if (lVar2 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar2 + 8);
      }
      lVar2 = lVar2 + 0x80;
      piVar1 = piVar1 + 0x20;
    } while (lVar2 != lVar3);
  }
  return 0;
}



// FUNCTION 1424f8bd0 GetOverridenComponentTemplateData body=148 status=ok
// SIG undefined GetOverridenComponentTemplateData(void)

longlong UInheritableComponentHandler::GetOverridenComponentTemplateData
                   (longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar2 = 0;
  lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x80 + lVar3;
  lVar4 = lVar2;
  if (lVar3 != lVar5) {
    piVar1 = (int *)(lVar3 + 0x28);
    do {
      if ((*(longlong *)(piVar1 + -6) == *param_2) &&
         (lVar4 = lVar3,
         (((int)((ulonglong)param_2[3] >> 0x20) == piVar1[1] &&
          (int)((ulonglong)param_2[2] >> 0x20) == piVar1[-1]) && piVar1[-2] == (int)param_2[2]) &&
         *piVar1 == (int)param_2[3])) break;
      lVar3 = lVar3 + 0x80;
      piVar1 = piVar1 + 0x20;
      lVar4 = lVar2;
    } while (lVar3 != lVar5);
  }
  lVar3 = lVar4 + 0x30;
  if (lVar4 == 0) {
    lVar3 = lVar2;
  }
  return lVar3;
}



// FUNCTION 1424f8c70 FUN_1424f8c70 body=21 status=ok
// SIG undefined FUN_1424f8c70(void)

undefined8 FUN_1424f8c70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x488);
  }
  return 0;
}



// FUNCTION 1424f8c90 FUN_1424f8c90 body=359 status=ok
// SIG undefined FUN_1424f8c90(void)

char FUN_1424f8c90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  uint local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  
  lVar5 = FHdrImageWrapper::GetHeight();
  lVar6 = lVar5 + 0x68;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  if (*(byte *)(param_1 + 0xe2) == 0) {
    uVar3 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + 0xe2);
  }
  iVar4 = CalculateImageBytes(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),0,
                              (char)uVar3);
  iVar1 = *(int *)(param_2 + 1);
  *(int *)(param_2 + 1) = iVar1 + iVar4;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + iVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2);
  }
  if (uVar3 == 2) {
    local_58 = 6;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,1);
    local_48 = (local_48 >> 8 & 0xff) << 8;
    local_28 = local_48;
    local_38 = 6;
    uStack_34 = 0;
    uStack_30 = uStack_50;
    uStack_2c = 0x467a0000;
    cVar2 = FRenderTarget::ReadPixelsPtr(lVar6,*param_2,&local_38,&local_68);
  }
  else {
    if (uVar3 != 10) goto LAB_1424f8dc5;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    cVar2 = FRenderTarget::ReadFloat16Pixels(lVar6,&local_68,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,local_68,(longlong)iVar4);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (cVar2 != '\0') {
    return cVar2;
  }
LAB_1424f8dc5:
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  return '\0';
}



// FUNCTION 1424f8e00 FUN_1424f8e00 body=233 status=ok
// SIG undefined FUN_1424f8e00(void)

void FUN_1424f8e00(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_14238d310();
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    *(longlong *)(param_2 + 8) =
         *(longlong *)(param_2 + 8) + *(longlong *)(*(longlong *)(param_1 + 0x7e8) + 0x10);
  }
  iVar3 = 0;
  lVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0x824) << 3) + *(longlong *)(param_2 + 8);
  *(longlong *)(param_2 + 8) = lVar2;
  if (0 < *(int *)(param_1 + 0x820)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 0x818)) != 0) {
        cVar1 = FBodyInstance::IsValidBodyInstance();
        if (cVar1 != '\0') {
          FUN_142696210(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + lVar2),param_2);
        }
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x820));
    lVar2 = *(longlong *)(param_2 + 8);
  }
  lVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0x7b4) * 0x30) + lVar2;
  *(longlong *)(param_2 + 8) = lVar2;
  lVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0x7d4) << 2) + lVar2;
  *(longlong *)(param_2 + 8) = lVar2;
  *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)(*(int *)(param_1 + 0x804) * 0x60) + lVar2;
  return;
}



// FUNCTION 1424f8ef0 FUN_1424f8ef0 body=107 status=ok
// SIG undefined FUN_1424f8ef0(void)

undefined8
FUN_1424f8ef0(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
             undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_2 < *(int *)(param_1 + 0x408)) &&
     (uVar2 = param_5, cVar1 = FUN_14281ec00(), cVar1 != '\0')) {
    FUN_1425098d0(param_1,param_2,param_3,param_5,uVar2,param_6);
    return 1;
  }
  return 0;
}



// FUNCTION 1424f8f60 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrack::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.InterpTrackHelper",0x34);
  return param_2;
}



// FUNCTION 1424f8fa0 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 *
UInterpTrackAnimControl::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackAnimControlHelper",0x4c);
  return param_2;
}



// FUNCTION 1424f8fe0 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackBoolProp::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackBoolPropHelper",0x46);
  return param_2;
}



// FUNCTION 1424f9020 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackColorProp::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackColorPropHelper",0x48);
  return param_2;
}



// FUNCTION 1424f9060 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackDirector::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackDirectorHelper",0x46);
  return param_2;
}



// FUNCTION 1424f90a0 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackEvent::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackEventHelper",0x40);
  return param_2;
}



// FUNCTION 1424f90e0 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackFloatProp::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackFloatPropHelper",0x48);
  return param_2;
}



// FUNCTION 1424f9120 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 *
UInterpTrackLinearColorProp::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackLinearColorPropHelper",0x54);
  return param_2;
}



// FUNCTION 1424f9160 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 *
UInterpTrackParticleReplay::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackParticleReplayHelper",0x52);
  return param_2;
}



// FUNCTION 1424f91a0 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackSound::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackSoundHelper",0x40);
  return param_2;
}



// FUNCTION 1424f91e0 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackToggle::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackToggleHelper",0x42);
  return param_2;
}



// FUNCTION 1424f9220 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackVectorProp::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackVectorPropHelper",0x4a);
  return param_2;
}



// FUNCTION 1424f9260 GetSlateHelperClassName body=62 status=ok
// SIG undefined GetSlateHelperClassName(void)

undefined8 * UInterpTrackVisibility::GetSlateHelperClassName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Matinee.MatineeTrackVisibilityHelper",0x4a);
  return param_2;
}



// FUNCTION 1424f92c0 FUN_1424f92c0 body=121 status=ok
// SIG undefined FUN_1424f92c0(void)

void FUN_1424f92c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6)

{
  char cVar1;
  
  cVar1 = FUN_1424fd5d0();
  if (cVar1 != '\0') {
    if (param_5 == 0) {
      param_5 = UEngine::GetMediumFont();
    }
    UCanvas::TextSize(*(undefined8 *)(param_1 + 0x4a8),param_5,param_2,param_3,param_4,param_6,
                      param_6);
  }
  return;
}



// FUNCTION 1424f9340 FUN_1424f9340 body=176 status=ok
// SIG undefined FUN_1424f9340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1424f9340(longlong param_1)

{
  undefined1 auVar1 [16];
  uint *puVar2;
  longlong lVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  
  if (*(int *)(param_1 + 0x7b0) < 1) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = (float)FUN_1423d6250();
    lVar3 = (longlong)*(int *)(param_1 + 0x7b0);
    fVar12 = 0.0;
    fVar13 = 0.0;
    if (0 < lVar3) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x7a8) + 0x20);
      do {
        uVar5 = _DAT_146afc330 & *puVar2;
        uVar6 = uRam0000000146afc334 & puVar2[1];
        uVar7 = uRam0000000146afc338 & puVar2[2];
        uVar8 = uRam0000000146afc33c & puVar2[3];
        puVar2 = puVar2 + 0xc;
        auVar10._4_4_ = uVar6;
        auVar10._0_4_ = uVar5;
        auVar10._8_4_ = uVar7;
        auVar10._12_4_ = uVar8;
        auVar11._4_4_ = uVar7;
        auVar11._0_4_ = uVar6;
        auVar11._8_4_ = uVar5;
        auVar11._12_4_ = uVar8;
        auVar11 = maxps(auVar10,auVar11);
        auVar1._4_4_ = uVar5;
        auVar1._0_4_ = uVar7;
        auVar1._8_4_ = uVar6;
        auVar1._12_4_ = uVar8;
        auVar11 = maxps(auVar11,auVar1);
        fVar9 = auVar11._0_4_;
        fVar13 = fVar13 + fVar9;
        fVar12 = fVar12 + fVar9 * fVar9;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if (1e-08 < fVar13) {
        fVar4 = fVar4 * (fVar12 / fVar13);
      }
      return fVar4;
    }
  }
  return fVar4;
}



// FUNCTION 1424f9580 GetTimeRange body=244 status=ok
// SIG undefined GetTimeRange(void)

void UInterpTrackMove::GetTimeRange(longlong param_1,float *param_2,float *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float local_res8 [2];
  float local_res20 [2];
  
  if (*(int *)(param_1 + 0x40) != 0) {
    local_res8[0] = 0.0;
    local_res20[0] = 0.0;
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x38) + 0x280))();
    iVar2 = 1;
    if (1 < *(int *)(param_1 + 0x40)) {
      lVar3 = 8;
      do {
        plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x38));
        (**(code **)(*plVar1 + 0x280))(plVar1,local_res8,local_res20);
        lVar3 = lVar3 + 8;
        fVar4 = *param_2;
        if (local_res8[0] <= *param_2) {
          fVar4 = local_res8[0];
        }
        iVar2 = iVar2 + 1;
        *param_2 = fVar4;
        fVar4 = *param_3;
        if (*param_3 <= local_res20[0]) {
          fVar4 = local_res20[0];
        }
        *param_3 = fVar4;
      } while (iVar2 < *(int *)(param_1 + 0x40));
    }
    return;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    *param_2 = **(float **)(param_1 + 0x70);
    *param_3 = *(float *)((longlong)*(int *)(param_1 + 0x78) * 0x2c + -0x2c +
                         *(longlong *)(param_1 + 0x70));
    return;
  }
  *param_2 = 0.0;
  *param_3 = 0.0;
  return;
}



// FUNCTION 1424f98f0 FUN_1424f98f0 body=8 status=ok
// SIG undefined FUN_1424f98f0(void)

undefined * FUN_1424f98f0(void)

{
  return &DAT_146533220;
}



// FUNCTION 1424f9910 FUN_1424f9910 body=119 status=ok
// SIG undefined FUN_1424f9910(void)

undefined8
FUN_1424f9910(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined1 param_5,
             undefined1 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_2 < *(int *)(param_1 + 0x408)) &&
     (uVar2 = param_7, cVar1 = FUN_142820660(), cVar1 != '\0')) {
    FUN_1425098d0(param_1,param_2,param_3,param_7,param_5,param_6,uVar2);
    return 1;
  }
  return 0;
}



// FUNCTION 1424f9990 FUN_1424f9990 body=80 status=ok
// SIG undefined FUN_1424f9990(void)

void FUN_1424f9990(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if (plVar1 != (longlong *)0x0) goto LAB_1424f99cb;
  }
  uVar2 = FUN_1428dfc70();
  plVar1 = (longlong *)UObjectBaseUtility::GetTypedOuter(param_1,uVar2);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_1424f99cb:
                    /* WARNING: Could not recover jumptable at 0x0001424f99d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x148))();
  return;
}



// FUNCTION 1424f99e0 HandleAssetAdded body=194 status=ok
// SIG undefined HandleAssetAdded(void)

void FEnginePackageLocalizationCache::HandleAssetAdded(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_28 [2];
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar4 = (longlong)*(int *)(param_1 + 0x48) * 0x20 + lVar5;
    if (lVar5 != lVar4) {
      do {
        uVar1 = *(undefined8 *)(lVar5 + 0x10);
        uVar2 = FName::ToString(param_2 + 8,local_28);
        FUN_1416ea600(uVar1,uVar2);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != lVar4);
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}



// FUNCTION 1424f9ab0 HandleAssetRemoved body=176 status=ok
// SIG undefined HandleAssetRemoved(void)

void FEnginePackageLocalizationCache::HandleAssetRemoved(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_28 [2];
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  lVar4 = (longlong)*(int *)(param_1 + 0x48) * 0x20 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x20) {
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    uVar2 = FName::ToString(param_2 + 8,local_28);
    FPackageLocalizationCultureCache::RemovePackage(uVar1,uVar2);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001424f9b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1424f9b60 HandleAssetRenamed body=232 status=ok
// SIG undefined HandleAssetRenamed(void)

void FEnginePackageLocalizationCache::HandleAssetRenamed
               (longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_38 [2];
  longlong local_28 [2];
  
  FUN_1417006f0(local_38,param_3);
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  lVar4 = (longlong)*(int *)(param_1 + 0x48) * 0x20 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x20) {
    FPackageLocalizationCultureCache::RemovePackage(*(undefined8 *)(lVar5 + 0x10),local_38);
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    uVar2 = FName::ToString(param_2 + 8,local_28);
    FUN_1416ea600(uVar1,uVar2);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424f9c50 HasActor body=30 status=ok
// SIG undefined HasActor(void)

bool UInterpGroupInst::HasActor(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x278))();
  return lVar1 == param_2;
}



// FUNCTION 1424f9c70 HasMoveTrack body=152 status=ok
// SIG undefined HasMoveTrack(void)

ulonglong UInterpGroup::HasMoveTrack(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x38) < 1) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar4 = 0;
  while( true ) {
    lVar1 = UInterpTrackMove::GetPrivateStaticClass();
    uVar2 = *(ulonglong *)(*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x30)) + 0x10);
    if ((*(int *)(uVar2 + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (uVar2 = *(ulonglong *)(uVar2 + 0x88),
       *(longlong *)(uVar2 + (longlong)*(int *)(lVar1 + 0x90) * 8) != lVar1 + 0x88)) {
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
    if ((char)uVar2 != '\0') break;
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 8;
    if (*(int *)(param_1 + 0x38) <= iVar3) {
      return uVar2;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1424f9d10 HideInstance body=43 status=ok
// SIG undefined HideInstance(void)

void FInstanceUpdateCmdBuffer::HideInstance(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1424e3000();
  *puVar1 = param_2;
  puVar1[1] = 2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}



// FUNCTION 1424f9d40 FUN_1424f9d40 body=1723 status=ok
// SIG undefined FUN_1424f9d40(void)

void FUN_1424f9d40(int param_1,int param_2,longlong *param_3,uint param_4,uint param_5,
                  longlong *param_6,char param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 uVar18;
  byte *pbVar19;
  ushort uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 local_c0 [128];
  
  iVar21 = 0;
  uVar25 = (ulonglong)(int)param_4;
  iVar22 = *(int *)((longlong)param_6 + 0xc);
  iVar16 = param_4 * param_5;
  *(undefined4 *)(param_6 + 1) = 0;
  if (iVar22 != iVar16) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_6);
    iVar22 = *(int *)((longlong)param_6 + 0xc);
    iVar21 = (int)param_6[1];
  }
  *(int *)(param_6 + 1) = iVar21 + iVar16;
  if (iVar22 < iVar21 + iVar16) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_6);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*param_6 + (longlong)iVar21 * 4),0,(longlong)iVar16 << 2);
  fVar32 = 0.0;
  if (0 < (int)param_5) {
    lVar9 = uVar25 << 2;
    local_e0 = 0;
    local_d8 = (ulonglong)param_5;
    local_e8 = lVar9;
    do {
      if (0 < (int)uVar25) {
        local_100 = param_2 + -1;
        uVar25 = uVar25 & 0xffffffff;
        local_fc = (int)(fVar32 + 0.5);
        lVar9 = local_e0;
        fVar27 = 0.0;
        do {
          local_108 = param_1 + -1;
          iVar21 = 0;
          iVar22 = 0;
          fVar31 = (float)param_1 / (float)(int)param_4 + fVar27;
          if (local_fc < 0) {
            iVar16 = 0;
          }
          else {
            iVar16 = local_100;
            if (local_fc < local_100) {
              iVar16 = local_fc;
            }
          }
          iVar6 = (int)(fVar27 + 0.5);
          if (iVar6 < 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = local_108;
            if (iVar6 < local_108) {
              iVar17 = iVar6;
            }
          }
          iVar6 = (int)((float)param_2 / (float)(int)param_5 + fVar32 + 0.5);
          if (iVar6 < 0) {
            iVar24 = 0;
          }
          else {
            iVar24 = local_100;
            if (iVar6 < local_100) {
              iVar24 = iVar6;
            }
          }
          iVar6 = (int)(fVar31 + 0.5);
          if (iVar6 < 0) {
            local_108 = 0;
          }
          else if (iVar6 < local_108) {
            local_108 = iVar6;
          }
          if (param_7 == '\0') {
            fVar27 = 0.0;
            fVar28 = 0.0;
            fVar29 = 0.0;
            fVar30 = 0.0;
            for (; iVar17 <= local_108; iVar17 = iVar17 + 1) {
              if (iVar16 <= iVar24) {
                iVar21 = iVar16;
                if (3 < (iVar24 - iVar16) + 1) {
                  lVar13 = (longlong)((iVar16 + 2) * param_1 + iVar17);
                  pbVar19 = (byte *)(*param_3 + 2 + lVar13 * 4);
                  lVar15 = ((iVar16 + 1) * param_1 + iVar17) - lVar13;
                  lVar23 = ((iVar16 + 3) * param_1 + iVar17) - lVar13;
                  lVar13 = (iVar16 * param_1 + iVar17) - lVar13;
                  uVar7 = ((iVar24 - iVar16) - 3U >> 2) + 1;
                  uVar14 = (ulonglong)uVar7;
                  iVar21 = uVar7 * 4;
                  iVar22 = iVar22 + iVar21;
                  iVar21 = iVar21 + iVar16;
                  do {
                    fVar27 = (float)pbVar19[lVar13 * 4] + fVar27 + (float)pbVar19[lVar15 * 4] +
                             (float)*pbVar19 + (float)pbVar19[lVar23 * 4];
                    fVar28 = (float)pbVar19[lVar13 * 4 + -1] + fVar28 +
                             (float)pbVar19[lVar15 * 4 + -1] + (float)pbVar19[-1] +
                             (float)pbVar19[lVar23 * 4 + -1];
                    pbVar2 = pbVar19 + lVar13 * 4 + 1;
                    pbVar3 = pbVar19 + lVar15 * 4 + 1;
                    fVar29 = (float)pbVar19[lVar13 * 4 + -2] + fVar29 +
                             (float)pbVar19[lVar15 * 4 + -2] + (float)pbVar19[-2] +
                             (float)pbVar19[lVar23 * 4 + -2];
                    pbVar1 = pbVar19 + 1;
                    pbVar4 = pbVar19 + lVar23 * 4 + 1;
                    pbVar19 = pbVar19 + (longlong)(param_1 * 4) * 4;
                    fVar30 = (float)*pbVar2 + fVar30 + (float)*pbVar3 + (float)*pbVar1 +
                             (float)*pbVar4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                if (iVar21 <= iVar24) {
                  pbVar19 = (byte *)(*param_3 + 1 + (longlong)(iVar21 * param_1 + iVar17) * 4);
                  iVar21 = (iVar24 - iVar21) + 1;
                  lVar15 = (longlong)iVar21;
                  iVar22 = iVar22 + iVar21;
                  do {
                    pbVar1 = pbVar19 + -1;
                    fVar27 = fVar27 + (float)pbVar19[1];
                    pbVar2 = pbVar19 + 2;
                    fVar28 = fVar28 + (float)*pbVar19;
                    pbVar19 = pbVar19 + (longlong)param_1 * 4;
                    fVar29 = fVar29 + (float)*pbVar1;
                    fVar30 = fVar30 + (float)*pbVar2;
                    lVar15 = lVar15 + -1;
                  } while (lVar15 != 0);
                }
              }
            }
            fVar26 = 1.0 / (float)iVar22;
            iVar22 = (int)(fVar27 * fVar26);
            if (iVar22 < 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0xff;
              if (iVar22 < 0xff) {
                uVar20 = (ushort)iVar22 & 0xff;
              }
            }
            iVar22 = (int)(fVar28 * fVar26);
            if (iVar22 < 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = 0xff;
              if (iVar22 < 0xff) {
                uVar18 = (char)iVar22;
              }
            }
            iVar22 = (int)(fVar29 * fVar26);
            if (iVar22 < 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = 0xff;
              if (iVar22 < 0xff) {
                uVar12 = (undefined1)iVar22;
              }
            }
            iVar22 = (int)(fVar30 * fVar26);
            if (iVar22 < 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0xff;
              if (iVar22 < 0xff) {
                uVar11 = (char)iVar22;
              }
            }
            uVar8 = CONCAT13(uVar11,(int3)CONCAT31(CONCAT21(uVar20,uVar18),uVar12));
          }
          else {
            _local_118 = ZEXT416(0);
            local_f8 = lVar9;
            local_f0 = uVar25;
            iVar22 = local_108;
            if (iVar17 <= local_108) {
              do {
                if (iVar16 <= iVar24) {
                  lVar9 = (longlong)(iVar16 * param_1 + iVar17) << 2;
                  local_104 = (iVar24 - iVar16) + 1;
                  lVar15 = (longlong)local_104;
                  local_104 = iVar21 + local_104;
                  do {
                    FLinearColor::FLinearColor(&local_d0,*param_3 + lVar9);
                    auVar5 = _local_118;
                    lVar9 = lVar9 + (longlong)param_1 * 4;
                    local_118._4_4_ = (float)local_118._4_4_ + local_cc;
                    local_118._0_4_ = (float)local_118._0_4_ + local_d0;
                    fStack_10c = auVar5._12_4_;
                    fStack_110 = fStack_110 + local_c8;
                    fStack_10c = fStack_10c + local_c4;
                    lVar15 = lVar15 + -1;
                    iVar22 = local_108;
                    iVar21 = local_104;
                  } while (lVar15 != 0);
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 <= iVar22);
            }
            uVar25 = local_f0;
            lVar9 = local_f8;
            fVar27 = 1.0 / (float)iVar21;
            local_118._4_4_ = (float)local_118._4_4_ * fVar27;
            local_118._0_4_ = (float)local_118._0_4_ * fVar27;
            fStack_110 = fStack_110 * fVar27;
            fStack_10c = fStack_10c * fVar27;
            puVar10 = (undefined4 *)FLinearColor::ToFColor(local_118,local_c0);
            uVar8 = *puVar10;
          }
          *(undefined4 *)(lVar9 + *param_6) = uVar8;
          lVar9 = lVar9 + 4;
          uVar25 = uVar25 - 1;
          fVar27 = fVar31;
        } while (uVar25 != 0);
        uVar25 = (ulonglong)param_4;
        lVar9 = local_e8;
      }
      local_e0 = local_e0 + lVar9;
      fVar32 = fVar32 + (float)param_2 / (float)(int)param_5;
      local_d8 = local_d8 - 1;
    } while (local_d8 != 0);
  }
  return;
}



// FUNCTION 1424fa400 FUN_1424fa400 body=947 status=ok
// SIG undefined FUN_1424fa400(void)

longlong * FUN_1424fa400(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  void *pvVar15;
  void *pvVar16;
  undefined2 *puVar17;
  undefined1 uVar18;
  wint_t *pwVar19;
  undefined2 *puVar20;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong local_88;
  undefined8 local_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined1 local_48 [16];
  longlong local_38 [2];
  
  FUN_14168dc80();
  puVar11 = (undefined8 *)FName::FName(local_res10,L"ImageWrapper",1);
  uVar2 = *puVar11;
  uVar12 = FUN_14168dc80();
  plVar13 = (longlong *)FUN_141690010(uVar12,uVar2);
  plVar14 = (longlong *)0x0;
  puVar20 = &DAT_143f3eda8;
  local_88 = 0;
  local_80 = 0;
  iVar8 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*param_1;
  }
  cVar4 = FUN_141676460(&local_88,puVar17,0);
  if (cVar4 != '\0') {
    puVar11 = (undefined8 *)FUN_141672300(local_38,param_1,0);
    if (*(int *)(puVar11 + 1) != 0) {
      puVar20 = (undefined2 *)*puVar11;
    }
    pwVar19 = &DAT_1450d1038;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar19 + (longlong)(puVar20 + -0xa286881c));
      if ((wVar5 == 0) && (iVar9 = iVar8, *pwVar19 == 0)) goto LAB_1424fa4ef;
      if (wVar5 != *pwVar19) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar19);
        if (wVar5 != wVar6) goto LAB_1424fa4e6;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_1424fa778:
  if (local_88 != 0) {
    FMemory::Free();
  }
  return plVar14;
LAB_1424fa4e6:
  iVar9 = (uint)wVar5 - (uint)wVar6;
LAB_1424fa4ef:
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (iVar9 == 0) {
    FHDRLoadHelper::FHDRLoadHelper(local_48);
    cVar4 = FHDRLoadHelper::IsValid(local_48);
    if (cVar4 == '\0') goto LAB_1424fa778;
    local_78 = 0;
    local_70 = 0;
    FHDRLoadHelper::ExtractDDSInRGBE(local_48,&local_78);
    FDDSLoadHelper::FDDSLoadHelper(local_58,local_78,local_70 & 0xffffffff);
    cVar4 = FDDSLoadHelper::IsValid2DTexture(local_58);
    if (cVar4 != '\0') {
      uVar7 = FUN_1423e8d50(local_58);
      plVar14 = (longlong *)
                FUN_142851030(*(undefined4 *)(local_58[0] + 0xc),*(undefined4 *)(local_58[0] + 8),
                              uVar7);
      if (plVar14 != (longlong *)0x0) {
        pvVar15 = (void *)FUN_14171efb0(**(longlong **)(plVar14[0x1b] + 0x10) + 8,2);
        iVar8 = FUntypedBulkData::GetBulkDataSize(**(longlong **)(plVar14[0x1b] + 0x10) + 8);
        pvVar16 = (void *)FUN_1423eddb0(local_58,0);
        _guard_xfg_dispatch_icall_nop(pvVar15,pvVar16,(longlong)iVar8);
        FUntypedBulkData::Unlock(**(longlong **)(plVar14[0x1b] + 0x10) + 8);
      }
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  else {
    cVar4 = (**(code **)(*plVar13 + 0x48))(plVar13,local_88,uStack_7c);
    if (cVar4 == -1) goto LAB_1424fa778;
    (**(code **)(*plVar13 + 0x40))(plVar13,&local_68,cVar4,2,0);
    cVar4 = (**(code **)*local_68)(local_68,local_88,uStack_7c);
    if (cVar4 != '\0') {
      uVar18 = 0;
      iVar9 = (**(code **)(*local_68 + 0x30))();
      uVar7 = (**(code **)(*local_68 + 0x20))();
      uVar10 = (**(code **)(*local_68 + 0x28))();
      if (iVar9 == 0x10) {
        iVar8 = 10;
        uVar18 = 2;
      }
      else if (iVar9 == 8) {
        iVar8 = 2;
        uVar18 = 2;
      }
      local_res8 = (undefined8 *)0x0;
      (**(code **)(*local_68 + 0x18))(local_68,uVar18,iVar9,&local_res8);
      plVar14 = (longlong *)FUN_142851030(uVar7,uVar10,iVar8);
      if (plVar14 != (longlong *)0x0) {
        pvVar16 = (void *)FUN_14171efb0(**(longlong **)(plVar14[0x1b] + 0x10) + 8,2);
        pvVar15 = (void *)*local_res8;
        iVar8 = FUntypedBulkData::GetBulkDataSize(**(longlong **)(plVar14[0x1b] + 0x10) + 8);
        _guard_xfg_dispatch_icall_nop(pvVar16,pvVar15,(longlong)iVar8);
        FUntypedBulkData::Unlock(**(longlong **)(plVar14[0x1b] + 0x10) + 8);
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_60 + 1;
      lVar3 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x278))(plVar14);
  }
  goto LAB_1424fa778;
}



// FUNCTION 1424fa7c0 FUN_1424fa7c0 body=516 status=ok
// SIG undefined FUN_1424fa7c0(void)

void FUN_1424fa7c0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 local_res18 [16];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar12 = (ulonglong)param_2;
  puVar9 = (undefined8 *)FName::FName(local_res18,"ImageWrapper",1);
  uVar6 = *puVar9;
  uVar10 = FUN_14168dc80();
  plVar11 = (longlong *)FUN_141690010(uVar10,uVar6);
  if (plVar11 != (longlong *)0x0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x7c) < (int)param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,param_2);
    }
    plVar13 = (longlong *)(param_1 + 0x80);
    if (*(int *)(param_1 + 0x8c) < (int)param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (plVar13,param_2);
    }
    if (param_2 != 0) {
      do {
        puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x40))(plVar11,local_48,0,2,0);
        iVar5 = *(int *)(param_1 + 0x78);
        *(int *)(param_1 + 0x78) = iVar5 + 1;
        if (*(int *)(param_1 + 0x7c) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar5);
        }
        plVar8 = local_40;
        puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x18);
        *puVar4 = *puVar9;
        lVar7 = puVar9[1];
        puVar4[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(puVar4 + 2) = 0;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x40))(plVar11,local_38,5,2,0);
        iVar5 = *(int *)(param_1 + 0x88);
        *(int *)(param_1 + 0x88) = iVar5 + 1;
        if (*(int *)(param_1 + 0x8c) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar13,iVar5);
        }
        plVar8 = local_30;
        puVar4 = (undefined8 *)(*plVar13 + (longlong)iVar5 * 0x18);
        *puVar4 = *puVar9;
        lVar7 = puVar9[1];
        puVar4[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(puVar4 + 2) = 0;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_30 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return;
}



// FUNCTION 1424fa9d0 FUN_1424fa9d0 body=472 status=ok
// SIG undefined FUN_1424fa9d0(void)

void FUN_1424fa9d0(longlong param_1,undefined8 param_2)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  plVar6 = (longlong *)operator_new(0x48);
  plStack_10 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_1450e12e0;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    *(undefined4 *)(plVar6 + 8) = 0;
    *(undefined1 *)((longlong)plVar6 + 0x44) = 0;
    plStack_10 = plVar6;
  }
  local_18 = plStack_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  local_28 = local_18;
  plStack_20 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_10 + 1) = (int)plStack_10[1] + 1;
    UNLOCK();
  }
  pplVar1 = (longlong **)(param_1 + 0x30);
  if (pplVar1 != &local_28) {
    *pplVar1 = local_18;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&plStack_20);
  }
  plVar6 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_20 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar6 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_10 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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
  FGenericPlatformMemory::MemswapGreaterThan8(param_2,*pplVar1,0x38);
  plVar6 = *pplVar1;
  uVar4 = *(undefined1 *)(param_1 + 0x40);
  if ((longlong *)*plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar6 + 0x38))();
    (**(code **)(*plVar7 + 0x28))(plVar7,uVar4);
  }
  if ((longlong *)plVar6[4] != (longlong *)0x0) {
    plVar7 = (longlong *)(**(code **)(*(longlong *)plVar6[4] + 0x38))();
    (**(code **)(*plVar7 + 0x28))(plVar7,uVar4);
  }
  if ((longlong *)plVar6[2] != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*(longlong *)plVar6[2] + 0x38))();
    (**(code **)(*plVar6 + 0x28))(plVar6,uVar4);
  }
  return;
}



// FUNCTION 1424fabb0 FUN_1424fabb0 body=528 status=ok
// SIG undefined FUN_1424fabb0(void)

void FUN_1424fabb0(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res8;
  longlong local_res20;
  
  if ((int)param_1[8] != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1,1);
  }
  lVar9 = 0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  local_res8 = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    local_res20 = 0;
    do {
      lVar11 = *(longlong *)(local_res20 + *(longlong *)(param_2 + 0x30));
      lVar10 = lVar9;
      if (*(longlong *)(lVar11 + 0x48) != 0) {
        lVar5 = UInterpTrackInst::GetPrivateStaticClass();
        lVar11 = *(longlong *)(lVar11 + 0x48);
        for (lVar2 = lVar11; (lVar10 = lVar9, lVar2 != 0 && (lVar10 = lVar11, lVar2 != lVar5));
            lVar2 = *(longlong *)(lVar2 + 0x30)) {
        }
      }
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      plVar6 = (longlong *)FUN_1417985e0(lVar10,param_1,0,8,0,0,0,0,0);
      iVar1 = (int)param_1[8];
      *(int *)(param_1 + 8) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x44) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 7,iVar1);
      }
      *(longlong **)(param_1[7] + (longlong)iVar1 * 8) = plVar6;
      (**(code **)(*plVar6 + 0x288))
                (plVar6,*(undefined8 *)(local_res20 + *(longlong *)(param_2 + 0x30)));
      local_res20 = local_res20 + 8;
      local_res8 = local_res8 + 1;
    } while (local_res8 < *(int *)(param_2 + 0x38));
    param_2 = param_1[5];
  }
  lVar11 = (longlong)*(int *)(param_2 + 0x38);
  bVar3 = false;
  if (0 < lVar11) {
    plVar6 = *(longlong **)(param_2 + 0x30);
    do {
      lVar10 = *plVar6;
      plVar6 = plVar6 + 1;
      if ((*(byte *)(lVar10 + 0x68) & 0x10) != 0) {
        bVar3 = true;
      }
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if ((bVar3) && (lVar11 = param_1[6], lVar11 != 0)) {
      iVar1 = *(int *)(lVar11 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar8;
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
      }
      if (((byte)((uint)*(undefined4 *)(lVar9 + 8) >> 0x1d) & 1) == 0) {
        uVar7 = UMatineeAnimInterface::GetPrivateStaticClass();
        plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar7);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x40))(plVar6,param_1[5]);
        }
      }
    }
  }
  return;
}



// FUNCTION 1424fadc0 FUN_1424fadc0 body=245 status=ok
// SIG undefined FUN_1424fadc0(void)

void FUN_1424fadc0(longlong param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar5 = (longlong *)FUN_1424f03b0();
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 7));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar5 + 7));
  }
  if (*(int *)((longlong)plVar5 + 0x34) == 0) {
    iVar6 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar6 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(plVar5 + 2,0);
  }
  else {
    iVar6 = (int)plVar5[6];
    iVar1 = *(int *)((longlong)plVar5 + 0x34) + -1;
    iVar3 = *(int *)(*plVar5 + 4 + (longlong)iVar6 * 8);
    *(int *)(plVar5 + 6) = iVar3;
    *(int *)((longlong)plVar5 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*plVar5 + (longlong)iVar3 * 8) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)plVar5[4];
  if ((longlong *)plVar5[4] == (longlong *)0x0) {
    plVar7 = plVar5 + 2;
  }
  puVar2 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
  *(longlong *)(*plVar5 + (longlong)iVar6 * 8) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar5 + 7));
  *(int *)(param_1 + 0x18) = iVar6;
  return;
}



// FUNCTION 1424faec0 FUN_1424faec0 body=1615 status=ok
// SIG undefined FUN_1424faec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424faec0(longlong *param_1,int param_2,int *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  float *pfVar13;
  longlong *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
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
  undefined1 auStack_188 [32];
  undefined8 local_168;
  float *local_160;
  undefined4 local_158;
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
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (param_1[0xe5] != 0) {
    uVar11 = (**(code **)(*param_1 + 0x6b8))();
    fVar9 = fRam0000000146afc308;
    fVar8 = fRam0000000146afc304;
    fVar37 = _DAT_146afc300;
    fVar36 = fRam0000000146afbca8;
    fVar32 = fRam0000000146afbca4;
    fVar29 = _DAT_146afbca0;
    auVar15 = *(undefined1 (*) [16])(param_1 + 0x46);
    fVar2 = auVar15._0_4_;
    fVar3 = auVar15._4_4_;
    fVar4 = auVar15._8_4_;
    fStack_cc = auVar15._12_4_;
    fVar17 = *(float *)(param_1 + 0x42);
    fVar44 = *(float *)((longlong)param_1 + 0x214);
    fVar19 = *(float *)(param_1 + 0x43);
    fVar20 = *(float *)((longlong)param_1 + 0x21c);
    pfVar13 = (float *)((longlong)param_2 * 0x30 + param_1[0xf5]);
    auVar1 = *(undefined1 (*) [16])(pfVar13 + 8);
    local_d8 = auVar1._0_4_;
    fStack_d4 = auVar1._4_4_;
    fStack_d0 = auVar1._8_4_;
    local_108 = pfVar13[4];
    fStack_104 = pfVar13[5];
    fStack_100 = pfVar13[6];
    fStack_fc = pfVar13[7];
    fVar21 = *pfVar13;
    fVar22 = pfVar13[1];
    fVar35 = pfVar13[2];
    fVar34 = pfVar13[3];
    auVar15 = minps(auVar1,auVar15);
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146afc304);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146afc300);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146afc308);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146afc30c);
    iVar10 = movmskps((int)uVar11,auVar16);
    if (iVar10 == 0) {
      fVar29 = fVar2 * local_108;
      fVar32 = fVar3 * fStack_104;
      fVar36 = fVar4 * fStack_100;
      fVar37 = fStack_cc * fStack_fc;
      local_f8 = fVar34 * fVar17 * _DAT_146afc2e0 + fVar21 * fVar20 +
                 fVar35 * fVar44 * _DAT_146afc2d0 + fVar22 * fVar19 * _DAT_146afc2c0;
      fStack_f4 = fVar35 * fVar17 * fRam0000000146afc2e4 + fVar22 * fVar20 +
                  fVar34 * fVar44 * fRam0000000146afc2d4 + fVar21 * fVar19 * fRam0000000146afc2c4;
      fStack_f0 = fVar22 * fVar17 * fRam0000000146afc2e8 + fVar35 * fVar20 +
                  fVar21 * fVar44 * fRam0000000146afc2d8 + fVar34 * fVar19 * fRam0000000146afc2c8;
      fStack_ec = fVar21 * fVar17 * fRam0000000146afc2ec + fVar34 * fVar20 +
                  fVar22 * fVar44 * fRam0000000146afc2dc + fVar35 * fVar19 * fRam0000000146afc2cc;
      fVar21 = fVar36 * fVar44 - fVar32 * fVar19;
      fVar22 = fVar29 * fVar19 - fVar36 * fVar17;
      fVar35 = fVar32 * fVar17 - fVar29 * fVar44;
      fVar34 = fVar37 * fVar20 - fVar37 * fVar20;
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar22 + fVar22;
      fVar35 = fVar35 + fVar35;
      fVar34 = fVar34 + fVar34;
      local_e8._4_4_ =
           (fVar21 * fVar19 - fVar35 * fVar17) + fVar22 * fVar20 + fVar32 +
           *(float *)((longlong)param_1 + 0x224);
      local_e8._0_4_ =
           (fVar35 * fVar44 - fVar22 * fVar19) + fVar21 * fVar20 + fVar29 +
           *(float *)(param_1 + 0x44);
      fStack_e0 = (fVar22 * fVar17 - fVar21 * fVar44) + fVar35 * fVar20 + fVar36 +
                  *(float *)(param_1 + 0x45);
      fStack_dc = (fVar34 * fVar20 - fVar34 * fVar20) + fVar34 * fVar20 + fVar37 +
                  *(float *)((longlong)param_1 + 0x22c);
    }
    else {
      fVar23 = fVar44 + fVar44;
      fVar25 = fVar19 + fVar19;
      fVar5 = *(float *)(param_1 + 0x44);
      fVar6 = *(float *)((longlong)param_1 + 0x224);
      fVar7 = *(float *)(param_1 + 0x45);
      fVar26 = (fVar17 + fVar17) * fVar17;
      fVar24 = (fVar17 + fVar17) * fVar20;
      fVar41 = (fVar25 * fVar20 + fVar23 * fVar17) * fVar2;
      fVar42 = (fVar24 + fVar25 * fVar44) * fVar3;
      fVar43 = (fVar23 * fVar20 + fVar25 * fVar17) * fVar4;
      fVar27 = fVar3 * (fVar23 * fVar17 - fVar25 * fVar20);
      fVar30 = fVar4 * (fVar25 * fVar44 - fVar24);
      fVar33 = fVar2 * (fVar25 * fVar17 - fVar23 * fVar20);
      fVar17 = (float)((uint)((_DAT_146afbca0 - (fVar25 * fVar19 + fVar23 * fVar44)) * fVar2) &
                      _DAT_146afbcb0);
      fVar19 = (float)((uint)((fRam0000000146afbca4 - (fVar25 * fVar19 + fVar26)) * fVar3) &
                      uRam0000000146afbcb4);
      fVar23 = (float)((uint)((fRam0000000146afbca8 - (fVar23 * fVar44 + fVar26)) * fVar4) &
                      uRam0000000146afbcb8);
      fVar25 = (float)((uint)((fRam0000000146afbcac - (fVar26 + fVar26)) * fStack_cc) &
                      uRam0000000146afbcbc);
      fVar20 = fVar22 + fVar22;
      fVar24 = fVar35 + fVar35;
      fVar26 = (fVar21 + fVar21) * fVar21;
      fVar44 = fVar34 * (fVar21 + fVar21);
      fVar38 = (fVar34 * fVar24 + fVar21 * fVar20) * local_d8;
      fVar39 = (fVar44 + fVar22 * fVar24) * fStack_d4;
      fVar40 = (fVar34 * fVar20 + fVar21 * fVar24) * fStack_d0;
      fVar28 = fStack_d4 * (fVar21 * fVar20 - fVar34 * fVar24);
      fVar31 = fStack_d0 * (fVar22 * fVar24 - fVar44);
      fVar34 = local_d8 * (fVar21 * fVar24 - fVar34 * fVar20);
      fVar44 = (float)((uint)((_DAT_146afbca0 - (fVar24 * fVar35 + fVar20 * fVar22)) * local_d8) &
                      _DAT_146afbcb0);
      fVar21 = (float)((uint)((fRam0000000146afbca4 - (fVar24 * fVar35 + fVar26)) * fStack_d4) &
                      uRam0000000146afbcb4);
      fVar20 = (float)((uint)((fRam0000000146afbca8 - (fVar20 * fVar22 + fVar26)) * fStack_d0) &
                      uRam0000000146afbcb8);
      fVar22 = (float)((uint)((fRam0000000146afbcac - (fVar26 + fVar26)) * auVar1._12_4_) &
                      uRam0000000146afbcbc);
      local_148 = fVar38 * fVar27 + fVar44 * fVar17 + fVar34 * fVar43 + fVar22 * fVar5;
      fStack_144 = fVar38 * fVar19 + fVar44 * fVar41 + fVar34 * fVar30 + fVar22 * fVar6;
      fStack_140 = fVar38 * fVar42 + fVar44 * fVar33 + fVar34 * fVar23 + fVar22 * fVar7;
      fStack_13c = fVar38 * fVar25 + fVar44 * fVar25 + fVar34 * fVar25 +
                   fVar22 * fRam0000000146afbcac;
      local_138 = fVar21 * fVar27 + fVar28 * fVar17 + fVar39 * fVar43 + fVar22 * fVar5;
      fStack_134 = fVar21 * fVar19 + fVar28 * fVar41 + fVar39 * fVar30 + fVar22 * fVar6;
      fStack_130 = fVar21 * fVar42 + fVar28 * fVar33 + fVar39 * fVar23 + fVar22 * fVar7;
      fStack_12c = fVar21 * fVar25 + fVar28 * fVar25 + fVar39 * fVar25 +
                   fVar22 * fRam0000000146afbcac;
      local_128 = fVar31 * fVar27 + fVar40 * fVar17 + fVar20 * fVar43 + fVar22 * fVar5;
      fStack_124 = fVar31 * fVar19 + fVar40 * fVar41 + fVar20 * fVar30 + fVar22 * fVar6;
      fStack_120 = fVar31 * fVar42 + fVar40 * fVar33 + fVar20 * fVar23 + fVar22 * fVar7;
      fStack_11c = fVar31 * fVar25 + fVar40 * fVar25 + fVar20 * fVar25 +
                   fVar22 * fRam0000000146afbcac;
      local_118 = fStack_104 * fVar27 + local_108 * fVar17 + fStack_100 * fVar43 +
                  fRam0000000146afbcac * fVar5;
      fStack_114 = fStack_104 * fVar19 + local_108 * fVar41 + fStack_100 * fVar30 +
                   fRam0000000146afbcac * fVar6;
      fStack_110 = fStack_104 * fVar42 + local_108 * fVar33 + fStack_100 * fVar23 +
                   fRam0000000146afbcac * fVar7;
      fStack_10c = fStack_104 * fVar25 + local_108 * fVar25 + fStack_100 * fVar25 +
                   fRam0000000146afbcac * fRam0000000146afbcac;
      FMatrix::RemoveScaling(&local_148);
      fVar17 = (float)(-(uint)(fVar37 <= local_d8 * fVar2) & (_DAT_146afc2f0 ^ (uint)fVar29) ^
                      _DAT_146afc2f0);
      fVar44 = (float)(-(uint)(fVar8 <= fStack_d4 * fVar3) & (uRam0000000146afc2f4 ^ (uint)fVar32) ^
                      uRam0000000146afc2f4);
      fVar19 = (float)(-(uint)(fVar9 <= fStack_d0 * fVar4) & (uRam0000000146afc2f8 ^ (uint)fVar36) ^
                      uRam0000000146afc2f8);
      local_148 = local_148 * fVar17;
      fStack_144 = fStack_144 * fVar17;
      fStack_140 = fStack_140 * fVar17;
      fStack_134 = fStack_134 * fVar44;
      fStack_130 = fStack_130 * fVar44;
      local_138 = local_138 * fVar44;
      fStack_124 = fStack_124 * fVar19;
      fStack_120 = fStack_120 * fVar19;
      local_128 = local_128 * fVar19;
      FQuat::FQuat(&local_108,&local_148);
      local_158 = 0x322bcc77;
      auVar18._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
      auVar18._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
      auVar18._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
      auVar18._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
      fVar21 = auVar18._4_4_ + auVar18._0_4_;
      fVar22 = auVar18._8_4_ + auVar18._4_4_;
      fVar35 = auVar18._12_4_ + auVar18._8_4_;
      fVar34 = auVar18._0_4_ + auVar18._12_4_;
      auVar15._4_4_ = fVar22;
      auVar15._0_4_ = fVar21;
      auVar15._8_4_ = fVar35;
      auVar15._12_4_ = fVar34;
      auVar15 = rsqrtps(auVar18,auVar15);
      fVar17 = auVar15._0_4_;
      fVar44 = auVar15._4_4_;
      fVar19 = auVar15._8_4_;
      fVar20 = auVar15._12_4_;
      fVar17 = (_DAT_146afbd30 - fVar17 * fVar17 * fVar21 * _DAT_146afbd30) * fVar17 + fVar17;
      fVar44 = (fRam0000000146afbd34 - fVar44 * fVar44 * fVar22 * fRam0000000146afbd34) * fVar44 +
               fVar44;
      fVar19 = (fRam0000000146afbd38 - fVar19 * fVar19 * fVar35 * fRam0000000146afbd38) * fVar19 +
               fVar19;
      fVar20 = (fRam0000000146afbd3c - fVar20 * fVar20 * fVar34 * fRam0000000146afbd3c) * fVar20 +
               fVar20;
      local_e8._4_4_ = fStack_114;
      local_e8._0_4_ = local_118;
      fStack_e0 = fStack_110;
      local_f8 = (float)(((uint)(((_DAT_146afbd30 - fVar17 * fVar17 * fVar21 * _DAT_146afbd30) *
                                  fVar17 + fVar17) * local_108) ^ _DAT_146afbd20) &
                         -(uint)(1e-08 <= fVar21) ^ _DAT_146afbd20);
      fStack_f4 = (float)(((uint)(((fRam0000000146afbd34 -
                                   fVar44 * fVar44 * fVar22 * fRam0000000146afbd34) * fVar44 +
                                  fVar44) * fStack_104) ^ uRam0000000146afbd24) &
                          -(uint)(1e-08 <= fVar22) ^ uRam0000000146afbd24);
      fStack_f0 = (float)(((uint)(((fRam0000000146afbd38 -
                                   fVar19 * fVar19 * fVar35 * fRam0000000146afbd38) * fVar19 +
                                  fVar19) * fStack_100) ^ uRam0000000146afbd28) &
                          -(uint)(1e-08 <= fVar35) ^ uRam0000000146afbd28);
      fStack_ec = (float)(((uint)(((fRam0000000146afbd3c -
                                   fVar20 * fVar20 * fVar34 * fRam0000000146afbd3c) * fVar20 +
                                  fVar20) * fStack_fc) ^ uRam0000000146afbd2c) &
                          -(uint)(1e-08 <= fVar34) ^ uRam0000000146afbd2c);
      fStack_dc = 0.0;
    }
    fStack_cc = auVar1._12_4_ * fStack_cc;
    fStack_d0 = fStack_d0 * fVar4;
    fStack_d4 = fStack_d4 * fVar3;
    local_d8 = local_d8 * fVar2;
    thunk_FUN_142686190(param_3);
    *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) & 0xb7;
    *param_3 = param_2;
    plVar14 = (longlong *)0x0;
    if (DAT_146533118 != 0) {
      plVar14 = param_1;
    }
    FUN_142685570(&local_108,plVar14);
    lVar12 = param_1[0x24];
    if (lVar12 == 0) {
      lVar12 = FUN_1423407b0(param_1);
    }
    local_168 = *(undefined8 *)(lVar12 + 0x218);
    local_160 = &local_108;
    FUN_14269a1d0(param_3,uVar11,&local_f8,param_1);
  }
  return;
}



// FUNCTION 1424fb510 FUN_1424fb510 body=1752 status=ok
// SIG undefined FUN_1424fb510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424fb510(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  int local_108;
  int local_104;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  ulonglong uVar11;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if ((int)param_1[0x94] != 0) {
    FUN_14250ae20();
  }
  if (param_1[0x8b] != 0) {
    cVar2 = FWeakObjectPtr::IsValid(DAT_146b17150 + 0x100);
    if (cVar2 == '\0') {
      FWeakObjectPtr::operator=(DAT_146b17150 + 0x100,param_1);
    }
    iVar9 = 0;
    local_58 = 0xffffffff;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_54 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    if (0 < (int)param_1[0x91]) {
      local_e8 = &local_f8;
      do {
        local_f8 = param_1[0x90] + (longlong)iVar9 * 0x18;
        local_f0 = local_f8;
        TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                  (&local_88,&local_104,&local_f0,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)param_1[0x91]);
    }
    *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) | 1;
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar4 != 0) {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar4 = UWorld::GetWorldSettings(uVar5,0,1);
      if (lVar4 != 0) {
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar7 = *(longlong **)(lVar4 + 0x148);
        if (plVar7 != (longlong *)0x0) {
          lVar4 = ARemnantQuest::GetPrivateStaticClass();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            bVar3 = (**(code **)(*plVar7 + 0x7c0))(plVar7);
            *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) & 0xfffffffe;
            *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) | bVar3 & 1;
          }
        }
      }
    }
    lVar4 = param_1[0x8b];
    local_108 = 0;
    if (0 < *(int *)(lVar4 + 0x38)) {
      local_100 = 0;
      do {
        lVar4 = *(longlong *)(local_100 + *(longlong *)(lVar4 + 0x30));
        local_98 = lVar4;
        if (lVar4 == 0) {
LAB_1424fb8ca:
          if ((*(byte *)(lVar4 + 0x4c) & 4) == 0) {
            lVar6 = *(longlong *)(lVar4 + 0x18);
            if ((int)local_80 != local_54) {
              puVar8 = local_50;
              if (local_48 != (undefined1 *)0x0) {
                puVar8 = local_48;
              }
              iVar9 = *(int *)(puVar8 + (longlong)
                                        (int)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6 &
                                             local_40 - 1U) * 4);
              if (iVar9 != -1) {
LAB_1424fb920:
                lVar13 = (longlong)iVar9;
                if (*(longlong *)(local_88 + lVar13 * 0x18) != lVar6) goto code_r0x0001424fb931;
                if ((((iVar9 != -1) && (lVar6 = local_88 + lVar13 * 0x18, lVar6 != 0)) &&
                    (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) && (0 < *(int *)(lVar6 + 0x10)))
                {
                  local_b8 = 0;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_104 = 0;
                  do {
                    local_a0 = *(undefined8 *)(local_b0 + *(longlong *)(lVar6 + 8));
                    FUN_1417846f0(param_1,
                                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                                 );
                    uVar5 = UInterpGroupInst::GetPrivateStaticClass();
                    local_118 = 0;
                    local_120 = 0;
                    local_128 = 0;
                    local_130 = 0;
                    local_138 = 0;
                    plVar7 = (longlong *)FUN_1417985e0(uVar5,param_1,0,8);
                    iVar9 = (int)param_1[0x94];
                    *(int *)(param_1 + 0x94) = iVar9 + 1;
                    if (*(int *)((longlong)param_1 + 0x4a4) < iVar9 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (param_1 + 0x93,iVar9);
                    }
                    *(longlong **)(param_1[0x93] + (longlong)iVar9 * 8) = plVar7;
                    (**(code **)(*plVar7 + 0x298))(plVar7,local_98,local_a0);
                    local_104 = local_104 + 1;
                    local_b0 = local_b0 + 8;
                  } while (local_104 < *(int *)(lVar6 + 0x10));
                  goto LAB_1424fb9e7;
                }
              }
            }
LAB_1424fb93b:
            local_a8 = 0;
            local_f8 = 0;
            FUN_1417846f0(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            uVar5 = UInterpGroupInst::GetPrivateStaticClass();
LAB_1424fb96b:
            local_118 = 0;
            local_120 = 0;
            local_128 = 0;
            local_130 = 0;
            local_138 = 0;
            plVar7 = (longlong *)FUN_1417985e0(uVar5,param_1,0,8);
            iVar9 = (int)param_1[0x94];
            *(int *)(param_1 + 0x94) = iVar9 + 1;
            if (*(int *)((longlong)param_1 + 0x4a4) < iVar9 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x93,iVar9);
            }
            *(longlong **)(param_1[0x93] + (longlong)iVar9 * 8) = plVar7;
            (**(code **)(*plVar7 + 0x298))(plVar7,lVar4,0);
          }
        }
        else {
          lVar6 = UInterpGroupDirector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1424fb8ca;
          uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          cVar2 = UWorld::IsGameWorld(uVar5);
          if (cVar2 == '\0') {
            local_d0 = 0;
            local_c8 = 0;
            FUN_1417846f0(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            uVar5 = UInterpGroupInstDirector::GetPrivateStaticClass();
            goto LAB_1424fb96b;
          }
          uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          UWorld::GetPlayerControllerIterator(uVar5,&local_f0);
          iVar9 = (int)local_e8;
          while( true ) {
            if ((iVar9 < 0) || (*(int *)(local_f0 + 8) <= iVar9)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) break;
            lVar6 = FWeakObjectPtr::Get();
            if ((lVar6 != 0) && (cVar2 = FUN_1424fd940(param_1,lVar6), cVar2 != '\0')) {
              local_e0 = 0;
              local_d8 = 0;
              FUN_1417846f0(param_1,
                            L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                           );
              uVar5 = UInterpGroupInstDirector::GetPrivateStaticClass();
              local_118 = 0;
              local_120 = 0;
              local_128 = 0;
              local_130 = 0;
              local_138 = 0;
              plVar7 = (longlong *)FUN_1417985e0(uVar5,param_1,0,8);
              iVar9 = (int)param_1[0x94];
              *(int *)(param_1 + 0x94) = iVar9 + 1;
              if (*(int *)((longlong)param_1 + 0x4a4) < iVar9 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x93,iVar9);
              }
              *(longlong **)(param_1[0x93] + (longlong)iVar9 * 8) = plVar7;
              (**(code **)(*plVar7 + 0x298))(plVar7,lVar4,lVar6);
            }
            iVar9 = (int)local_e8 + 1;
            local_e8 = (longlong *)CONCAT44(local_e8._4_4_,iVar9);
          }
        }
LAB_1424fb9e7:
        lVar4 = param_1[0x8b];
        local_108 = local_108 + 1;
        local_100 = local_100 + 8;
      } while (local_108 < *(int *)(lVar4 + 0x38));
    }
    uVar11 = 0;
    uVar12 = uVar11;
    if (0 < (int)param_1[0x94]) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1[0x93] + uVar12) + 0x30);
        if (lVar4 != 0) {
          FUN_1422222c0(lVar4,param_1);
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar12 = uVar12 + 8;
      } while ((int)uVar10 < (int)param_1[0x94]);
    }
    FUN_1424ed050(param_1,1);
    local_40 = 0;
    if (local_48 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
  }
  FUN_1425094e0(param_1);
  (**(code **)(*param_1 + 0x720))(param_1,1);
  return;
code_r0x0001424fb931:
  iVar9 = *(int *)(local_88 + 0x10 + lVar13 * 0x18);
  if (iVar9 == -1) goto LAB_1424fb93b;
  goto LAB_1424fb920;
}



// FUNCTION 1424fbbf0 FUN_1424fbbf0 body=1119 status=ok
// SIG undefined FUN_1424fbbf0(void)

void FUN_1424fbbf0(longlong param_1,char param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong **pplVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  plVar8 = (longlong *)(param_1 + 0x7e8);
  if (*plVar8 != 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x7b8);
  while (iVar4 == 0) {
    iVar4 = rand();
    *(int *)(param_1 + 0x7b8) = iVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  iVar4 = DAT_1464c9c14;
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0x1c0);
  }
  if (param_4 == '\0') {
    if (1 < iVar4) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146afc450) &&
         (_Init_thread_header(&DAT_146afc450), DAT_146afc450 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GenerateMeshDistanceFields")
        ;
        piVar7 = (int *)0x0;
        if (plVar6 != (longlong *)0x0) {
          piVar7 = (int *)(**(code **)(*plVar6 + 0x38))(plVar6);
        }
        DAT_146afc448 = piVar7;
        _Init_thread_footer(&DAT_146afc450);
      }
      if (((*(byte *)(param_1 + 0x2f1) & 0x50) == 0x50) &&
         ((*DAT_146afc448 != 0 ||
          ((*(longlong *)(param_1 + 0x728) != 0 &&
           ((*(byte *)(*(longlong *)(param_1 + 0x728) + 0x9c) & 1) != 0)))))) goto LAB_1424fbcdc;
    }
    uVar10 = 0;
  }
  else {
LAB_1424fbcdc:
    uVar10 = 1;
  }
  if (param_3 == (longlong *)0x0) {
    local_34 = 1;
    local_90 = 0;
    local_38 = 0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_98 = param_3;
    FStaticMeshInstanceData::AllocateBuffers(&local_68,0,0);
    iVar9 = 0;
    if (param_2 != '\0') {
      FInstanceUpdateCmdBuffer::Reset(param_1 + 0x7f8);
      FUN_1424e67a0(param_1,&local_68,&local_98);
      param_3 = local_98;
      iVar9 = (int)local_90;
    }
    lVar5 = operator_new(0x130);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1424decf0(lVar5,&local_68,iVar4,uVar10);
    }
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_1450e12f0;
      plVar6[2] = lVar5;
    }
    local_78 = lVar5;
    local_70 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_78,lVar5,lVar5);
    if (plVar8 != &local_78) {
      *plVar8 = lVar5;
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x7f0,&local_70);
      plVar6 = local_70;
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
        piVar7 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      param_3 = local_98;
      iVar9 = (int)local_90;
    }
    pplVar2 = (longlong **)*plVar8;
    if (pplVar2 != &local_98) {
      iVar4 = *(int *)(pplVar2 + 1);
      plVar8 = *pplVar2;
      if (iVar4 != 0) {
        do {
          puVar3 = (undefined8 *)*plVar8;
          if (puVar3 != (undefined8 *)0x0) {
            piVar7 = (int *)(puVar3 + 1);
            *piVar7 = *piVar7 + -1;
            if (*piVar7 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          plVar8 = plVar8 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar8 = *pplVar2;
      }
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
      *pplVar2 = param_3;
      param_3 = (longlong *)0x0;
      *(int *)(pplVar2 + 1) = iVar9;
      iVar9 = 0;
      *(undefined4 *)((longlong)pplVar2 + 0xc) = local_90._4_4_;
    }
    if (local_68 != (undefined8 *)0x0) {
      (**(code **)*local_68)(local_68,1);
    }
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
    plVar8 = param_3;
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,1);
    }
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar3 = (undefined8 *)*plVar8;
      if (puVar3 != (undefined8 *)0x0) {
        piVar7 = (int *)(puVar3 + 1);
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      plVar8 = plVar8 + 1;
    }
    if (param_3 != (longlong *)0x0) {
      FMemory::Free(param_3);
    }
  }
  else {
    lVar5 = operator_new(0x130);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1424decf0(lVar5,param_3,iVar4,uVar10);
    }
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_1450e12f0;
      plVar6[2] = lVar5;
    }
    local_88 = lVar5;
    local_80 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_88,lVar5,lVar5);
    if (plVar8 != &local_88) {
      *plVar8 = lVar5;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x7f0,&local_80);
      plVar6 = local_80;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar7 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1424fc050 FUN_1424fc050 body=1999 status=ok
// SIG undefined FUN_1424fc050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424fc050(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 **ppuVar12;
  longlong lVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_228 [32];
  char local_208;
  undefined2 local_204 [2];
  undefined8 *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [4];
  undefined2 auStack_144 [126];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_208 = DAT_1464c9c6c;
  local_48 = 0;
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    puVar5 = (undefined1 *)FUN_1419e2500(param_1,local_1c8,(longlong *)(param_1 + 0x7d8),0);
    uVar15 = local_48;
    lVar10 = (longlong)(int)local_48;
    iVar7 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar7);
    if (local_48._4_4_ < iVar7) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar15 & 0xffffffff);
    }
    lVar10 = lVar10 * 8;
    local_148[lVar10] = *puVar5;
    local_148[lVar10 + 1] = puVar5[1];
    local_148[lVar10 + 2] = puVar5[2];
    local_148[lVar10 + 3] = puVar5[3];
    *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
    *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
  }
  plVar11 = (longlong *)(param_1 + 0x7e8);
  local_204[0] = 0x201;
  puVar14 = local_204;
  lVar10 = 2;
  plVar6 = plVar11;
  do {
    if (*plVar11 != 0) {
      puVar5 = (undefined1 *)FUN_1419e2500(param_1,local_1c0,plVar6,*(undefined1 *)puVar14);
      uVar15 = local_48;
      lVar13 = (longlong)(int)local_48;
      iVar7 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      if (local_48._4_4_ < iVar7) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar15 & 0xffffffff);
      }
      lVar13 = lVar13 * 8;
      local_148[lVar13] = *puVar5;
      local_148[lVar13 + 1] = puVar5[1];
      local_148[lVar13 + 2] = puVar5[2];
      local_148[lVar13 + 3] = puVar5[3];
      *(undefined2 *)(local_148 + lVar13 + 4) = *(undefined2 *)(puVar5 + 4);
      *(undefined2 *)(local_148 + lVar13 + 6) = *(undefined2 *)(puVar5 + 6);
    }
    plVar6 = plVar6 + 2;
    plVar11 = plVar11 + 2;
    puVar14 = (undefined2 *)((longlong)puVar14 + 1);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uVar15 = 0;
  if ((*(int *)(param_1 + 0x888) != 0) && (0 < *(int *)(param_1 + 0x888))) {
    uVar9 = uVar15;
    do {
      iVar7 = (int)uVar9;
      lVar10 = *(longlong *)(param_1 + 0x880);
      if (*(longlong *)(param_1 + 0x880) == 0) {
        lVar10 = param_1 + 0x860;
      }
      ppuVar12 = (undefined8 **)(lVar10 + (longlong)iVar7 * 0x10);
      if (*ppuVar12 == (undefined8 *)0x0) {
        local_1f8 = 0;
        local_1f4 = 0x4080000;
        local_200 = &DAT_146ac3d70 + (longlong)iVar7 * 9;
        ppuVar12 = &local_200;
        puVar5 = local_1b0;
      }
      else {
        puVar5 = local_1b8;
      }
      puVar5 = (undefined1 *)FUN_1419e2500(param_1,puVar5,ppuVar12,iVar7 + 0x10);
      uVar9 = local_48;
      lVar10 = (longlong)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      if (local_48._4_4_ < iVar8) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar9 & 0xffffffff);
      }
      local_148[lVar10 * 8] = *puVar5;
      lVar10 = lVar10 * 8;
      uVar9 = (ulonglong)(iVar7 + 1U);
      local_148[lVar10 + 1] = puVar5[1];
      local_148[lVar10 + 2] = puVar5[2];
      local_148[lVar10 + 3] = puVar5[3];
      *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
      *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
    } while ((int)(iVar7 + 1U) < *(int *)(param_1 + 0x888));
  }
  iVar7 = *(int *)(param_1 + 0x848);
  if (iVar7 != 0) {
    uVar9 = uVar15;
    if (0 < iVar7) {
      do {
        iVar8 = (int)uVar9;
        puVar5 = (undefined1 *)
                 FUN_1419e2500(param_1,local_1a8,param_1 + 0x808 + (longlong)iVar8 * 0x10,iVar8 + 4)
        ;
        uVar9 = local_48;
        lVar10 = (longlong)(int)local_48;
        iVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        if (local_48._4_4_ < iVar7) {
          TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar9 & 0xffffffff);
        }
        lVar10 = lVar10 * 8;
        uVar9 = (ulonglong)(iVar8 + 1U);
        local_148[lVar10] = *puVar5;
        local_148[lVar10 + 1] = puVar5[1];
        local_148[lVar10 + 2] = puVar5[2];
        local_148[lVar10 + 3] = puVar5[3];
        *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
        iVar7 = *(int *)(param_1 + 0x848);
        *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
      } while ((int)(iVar8 + 1U) < iVar7);
    }
    for (; iVar7 < 4; iVar7 = iVar7 + 1) {
      puVar5 = (undefined1 *)
               FUN_1419e2500(param_1,local_1a0,
                             param_1 + 0x7f8 + (longlong)*(int *)(param_1 + 0x848) * 0x10,iVar7 + 4)
      ;
      uVar9 = local_48;
      lVar10 = (longlong)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      if (local_48._4_4_ < iVar8) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar9 & 0xffffffff);
      }
      lVar10 = lVar10 * 8;
      local_148[lVar10] = *puVar5;
      local_148[lVar10 + 1] = puVar5[1];
      local_148[lVar10 + 2] = puVar5[2];
      local_148[lVar10 + 3] = puVar5[3];
      *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
      *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
    }
  }
  plVar11 = (longlong *)(param_1 + 0x850);
  if (*plVar11 == 0) {
    if (*(int *)(param_1 + 0x848) == 0) goto LAB_1424fc48d;
    plVar11 = (longlong *)(param_1 + 0x808);
    puVar5 = local_190;
  }
  else {
    puVar5 = local_198;
  }
  puVar5 = (undefined1 *)FUN_1419e2500(param_1,puVar5,plVar11,0xf);
  uVar9 = local_48;
  lVar10 = (longlong)(int)local_48;
  iVar7 = (int)local_48 + 1;
  local_48 = CONCAT44(local_48._4_4_,iVar7);
  if (local_48._4_4_ < iVar7) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar9 & 0xffffffff);
  }
  local_148[lVar10 * 8] = *puVar5;
  lVar10 = lVar10 * 8;
  local_148[lVar10 + 1] = puVar5[1];
  local_148[lVar10 + 2] = puVar5[2];
  local_148[lVar10 + 3] = puVar5[3];
  *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
  *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
LAB_1424fc48d:
  if (local_208 != '\0') {
    if (*(longlong *)(param_1 + 0x770) != 0) {
      puVar5 = (undefined1 *)FUN_1419e2500(param_1,local_188,(longlong *)(param_1 + 0x770),8);
      uVar9 = local_48;
      lVar10 = (longlong)(int)local_48;
      iVar7 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      if (local_48._4_4_ < iVar7) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar9 & 0xffffffff);
      }
      lVar10 = lVar10 * 8;
      local_148[lVar10] = *puVar5;
      local_148[lVar10 + 1] = puVar5[1];
      local_148[lVar10 + 2] = puVar5[2];
      local_148[lVar10 + 3] = puVar5[3];
      *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
      *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
    }
    if (*(longlong *)(param_1 + 0x780) != 0) {
      puVar5 = (undefined1 *)FUN_1419e2500(param_1,local_180,(longlong *)(param_1 + 0x780),9);
      lVar10 = (longlong)(int)local_48;
      iVar7 = (int)local_48 + 1;
      if (local_48._4_4_ < iVar7) {
        uVar9 = local_48 & 0xffffffff;
        local_48._0_4_ = iVar7;
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar9);
        iVar7 = (int)local_48;
      }
      local_48._0_4_ = iVar7;
      local_148[lVar10 * 8] = *puVar5;
      lVar10 = lVar10 * 8;
      local_148[lVar10 + 1] = puVar5[1];
      local_148[lVar10 + 2] = puVar5[2];
      local_148[lVar10 + 3] = puVar5[3];
      *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
      *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
      puVar5 = (undefined1 *)FUN_1419e2500(param_1,local_178,param_1 + 0x790,10);
      iVar7 = (int)local_48;
      lVar10 = (longlong)(int)local_48;
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,iVar7);
      }
      local_148[lVar10 * 8] = *puVar5;
      lVar10 = lVar10 * 8;
      local_148[lVar10 + 1] = puVar5[1];
      local_148[lVar10 + 2] = puVar5[2];
      local_148[lVar10 + 3] = puVar5[3];
      *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
      *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
      puVar5 = (undefined1 *)FUN_1419e2500(param_1,local_170,param_1 + 0x7a0,0xb);
      iVar7 = (int)local_48;
      lVar10 = (longlong)(int)local_48;
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,iVar7);
      }
      lVar10 = lVar10 * 8;
      local_148[lVar10] = *puVar5;
      local_148[lVar10 + 1] = puVar5[1];
      local_148[lVar10 + 2] = puVar5[2];
      local_148[lVar10 + 3] = puVar5[3];
      *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
      *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
    }
    if (*(longlong *)(param_1 + 0x7b0) != 0) {
      puVar5 = (undefined1 *)FUN_1419e2500(param_1,local_168,(longlong *)(param_1 + 0x7b0),0xc);
      uVar9 = local_48;
      lVar10 = (longlong)(int)local_48;
      iVar7 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      if (local_48._4_4_ < iVar7) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar9 & 0xffffffff);
      }
      lVar10 = lVar10 * 8;
      local_148[lVar10] = *puVar5;
      local_148[lVar10 + 1] = puVar5[1];
      local_148[lVar10 + 2] = puVar5[2];
      local_148[lVar10 + 3] = puVar5[3];
      *(undefined2 *)(local_148 + lVar10 + 4) = *(undefined2 *)(puVar5 + 4);
      *(undefined2 *)(local_148 + lVar10 + 6) = *(undefined2 *)(puVar5 + 6);
    }
  }
  FUN_1419f1da0(param_1,local_148);
  if (((*(char *)(param_1 + 0x339) != '\0') &&
      ((0x1d < DAT_146ab62cc || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)))) &&
     ((0x1b < DAT_146ab62cc ||
      (((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) == 0 ||
       (uVar4 = RHIGetShaderLanguageVersion(), 1 < uVar4)))))) {
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = uStack_1cc;
    plVar6 = (longlong *)FUN_1425695d0(local_1e8,param_1,&local_158);
    plVar11 = (longlong *)(param_1 + 0x758);
    if (plVar11 != plVar6) {
      puVar2 = (undefined8 *)*plVar11;
      *plVar11 = *plVar6;
      *plVar6 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar16 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar16) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar16) {
              uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar4 != 0) {
                uVar15 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(uVar15 + 8) = puVar2;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1e8);
  }
  return;
}



// FUNCTION 1424fc820 FUN_1424fc820 body=295 status=ok
// SIG undefined FUN_1424fc820(void)

void FUN_1424fc820(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (0 < *(int *)(*(undefined8 **)(param_1 + 0x30) + 6)) {
    uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x30) + 0x38))();
    uVar3 = 0x10;
    FUN_1424ea3f0(param_1,uVar2,0x201,0x10,1,param_1 + 0x78,param_1 + 0x80);
    uVar1 = 1;
    if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x34) != '\0') {
      uVar3 = 8;
      uVar1 = 10;
    }
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x38))();
    FUN_1424ea3f0(param_1,uVar2,0x201,uVar3,uVar1,param_1 + 0xb8,param_1 + 0xc0);
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x20) + 0x38))();
    FUN_1424ea3f0(param_1,uVar2,0x201,8,0x3f,param_1 + 0xf8,param_1 + 0x100);
  }
  return;
}



// FUNCTION 1424fc950 InitResource body=57 status=ok
// SIG undefined InitResource(void)

void FStaticMeshInstanceBuffer::InitResource(longlong param_1)

{
  FRenderResource::InitResource();
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x28))(param_1 + 0x48);
  (**(code **)(*(longlong *)(param_1 + 0x88) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x0001424fc985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 200) + 0x28))();
  return;
}



// FUNCTION 1424fc990 FUN_1424fc990 body=922 status=ok
// SIG undefined FUN_1424fc990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424fc990(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_1d8 [32];
  char local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0 [3];
  int7 local_188;
  undefined1 uStack_181;
  longlong local_180;
  int7 local_178;
  undefined1 uStack_171;
  longlong local_170;
  int7 local_168;
  undefined1 uStack_161;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1b8 = DAT_1464c9c6c;
  uVar9 = 0;
  uVar11 = uVar9;
  local_1b0 = param_2;
  local_1a8 = param_3;
  if (0 < (int)param_1[1]) {
    do {
      lVar6 = local_1a8;
      lVar2 = *(longlong *)(uVar9 + **(longlong **)(param_2 + 0x28));
      local_60 = 0;
      local_58 = 0;
      local_48 = 0;
      local_1a0[0] = 0;
      local_1a0[2] = 0;
      local_180 = 0;
      local_170 = 0;
      local_160 = 0;
      local_128 = 0;
      local_118 = 0;
      local_c0 = 0;
      local_90 = 0;
      uStack_78 = 0;
      local_1a0[1] = 0;
      _local_188 = 0;
      _local_178 = 0;
      _local_168 = 0;
      local_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_130 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_120 = 0;
      local_110 = 0;
      local_c8 = 0;
      local_b8 = 0;
      local_88 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_50 = 0xffffffffffffffff;
      plVar3 = *(longlong **)(uVar9 + *param_1);
      local_80 = *(undefined8 *)(lVar2 + 0x240);
      FUN_1426fb810(lVar2 + 0xe8,plVar3,&uStack_138);
      FUN_142723e40(lVar2,plVar3,&uStack_138);
      FUN_142723ca0(lVar2,plVar3,&uStack_138);
      if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar2 + 0xd8)) && (-1 < *(int *)(lVar6 + 0x90))) {
        FUN_142723be0(lVar2,plVar3,&uStack_138);
      }
      iVar7 = 0;
      if (0 < *(int *)(lVar2 + 0x1f8)) {
        do {
          lVar6 = *(longlong *)(lVar2 + 0x1f0);
          if (*(longlong *)(lVar2 + 0x1f0) == 0) {
            lVar6 = lVar2 + 0x140;
          }
          FUN_142723a20(lVar6 + (longlong)iVar7 * 0x58,iVar7,plVar3,&uStack_138);
          iVar7 = iVar7 + 1;
          param_2 = local_1b0;
        } while (iVar7 < *(int *)(lVar2 + 0x1f8));
      }
      if ((local_1b8 != '\0') && (lVar2 = *(longlong *)(param_2 + 8), lVar2 != 0)) {
        local_150 = *(undefined8 *)(lVar2 + 0x98);
        local_1a0[2] = lVar2 + 0xa0;
        uStack_148 = *(undefined8 *)(lVar2 + 0xd8);
        local_140 = *(undefined8 *)(lVar2 + 0x118);
        local_1a0[0] = lVar2 + 0x60;
        local_1a0[1] = 0x504100000000000;
        cVar1 = *(char *)(*(longlong *)(lVar2 + 0x48) + 0x34);
        cVar8 = '\x10';
        if (cVar1 != '\0') {
          cVar8 = '\b';
        }
        cVar4 = cVar8 * '\x03';
        uVar5 = 4;
        if (cVar1 != '\0') {
          uVar5 = 0xd;
        }
        _local_188 = CONCAT17(5,(uint7)CONCAT11(uVar5,cVar4) << 0x28);
        _local_178 = CONCAT17(5,(uint7)CONCAT12(uVar5,CONCAT11(cVar4,cVar8)) << 0x20);
        local_160 = lVar2 + 0xe0;
        _local_168 = CONCAT17(5,(uint7)CONCAT12(uVar5,CONCAT11(cVar4,cVar8 * '\x02')) << 0x20);
        local_158 = 0x50e080000000000;
        local_180 = local_1a0[2];
        local_170 = local_1a0[2];
      }
      FUN_142578240(plVar3,&uStack_138);
      FInstancedStaticMeshVertexFactory::FDataType::operator=(plVar3 + 0xee,local_1a0);
      FRenderResource::UpdateRHI(plVar3);
      if ((char)plVar3[5] == '\0') {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      else {
        FRenderResource::UpdateRHI();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
      uVar10 = (int)uVar11 + 1;
      uVar9 = uVar9 + 8;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1424fcd30 FUN_1424fcd30 body=153 status=ok
// SIG undefined FUN_1424fcd30(void)

void FUN_1424fcd30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))(), lVar1 != 0)) {
    uVar2 = FUN_1425bf4b0(lVar1,*(undefined8 *)(param_2 + 0x80),param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    local_res8 = 0;
    lVar1 = FUN_1425bd470(&local_res8,param_1 + 0x28,lVar1,*(undefined8 *)(param_2 + 0x80),0,0);
    if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar1 != 0)) {
      *(longlong *)(param_1 + 0x30) = lVar1;
    }
  }
  return;
}



// FUNCTION 1424fcdd0 FUN_1424fcdd0 body=225 status=ok
// SIG undefined FUN_1424fcdd0(void)

void FUN_1424fcdd0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
  if (lVar2 == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar3 = UInterpTrackColorProp::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1424fce46;
  }
  param_2 = 0;
LAB_1424fce46:
  uVar4 = FMatineeUtils::GetInterpColorPropertyRef(lVar2,*(undefined8 *)(param_2 + 0x90));
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  local_res8 = 0;
  lVar2 = FUN_1425bd470(&local_res8,param_1 + 0x28,lVar2,*(undefined8 *)(param_2 + 0x90),0,0);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar2 != 0)) {
    *(longlong *)(param_1 + 0x30) = lVar2;
  }
  return;
}



// FUNCTION 1424fced0 InitTrackInst body=131 status=ok
// SIG undefined InitTrackInst(void)

void UInterpTrackInstFloatMaterialParam::InitTrackInst(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UInterpTrackFloatMaterialParam::GetPrivateStaticClass();
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
      FUN_1424f8140(param_1 + 0x48,param_2 + 0x90,param_1);
      FUN_1424feaa0(param_1 + 0x28,param_1 + 0x48,param_1);
    }
  }
  return;
}



// FUNCTION 1424fcf60 FUN_1424fcf60 body=225 status=ok
// SIG undefined FUN_1424fcf60(void)

void FUN_1424fcf60(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
  if (lVar2 == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar3 = UInterpTrackFloatProp::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1424fcfd6;
  }
  param_2 = 0;
LAB_1424fcfd6:
  uVar4 = FUN_1425bf7b0(lVar2,*(undefined8 *)(param_2 + 0x90));
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  local_res8 = 0;
  lVar2 = FUN_1425bd470(&local_res8,param_1 + 0x28,lVar2,*(undefined8 *)(param_2 + 0x90),0,0);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar2 != 0)) {
    *(longlong *)(param_1 + 0x30) = lVar2;
  }
  return;
}



// FUNCTION 1424fd050 FUN_1424fd050 body=225 status=ok
// SIG undefined FUN_1424fd050(void)

void FUN_1424fd050(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
  if (lVar2 == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar3 = UInterpTrackLinearColorProp::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1424fd0c6;
  }
  param_2 = 0;
LAB_1424fd0c6:
  uVar4 = FMatineeUtils::GetInterpLinearColorPropertyRef(lVar2,*(undefined8 *)(param_2 + 0x90));
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  local_res8 = 0;
  lVar2 = FUN_1425bd470(&local_res8,param_1 + 0x28,lVar2,*(undefined8 *)(param_2 + 0x90),0,0);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar2 != 0)) {
    *(longlong *)(param_1 + 0x30) = lVar2;
  }
  return;
}



// FUNCTION 1424fd140 FUN_1424fd140 body=58 status=ok
// SIG undefined FUN_1424fd140(void)

void FUN_1424fd140(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_142509b80();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetWorldSettings(uVar2,0,1);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar3 + 0x5e4);
  }
  return;
}



// FUNCTION 1424fd180 InitTrackInst body=131 status=ok
// SIG undefined InitTrackInst(void)

void UInterpTrackInstVectorMaterialParam::InitTrackInst(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UInterpTrackVectorMaterialParam::GetPrivateStaticClass();
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
      FUN_1424f8140(param_1 + 0x48,param_2 + 0x90,param_1);
      FUN_1424feaa0(param_1 + 0x28,param_1 + 0x48,param_1);
    }
  }
  return;
}



// FUNCTION 1424fd210 FUN_1424fd210 body=225 status=ok
// SIG undefined FUN_1424fd210(void)

void FUN_1424fd210(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
  if (lVar2 == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar3 = UInterpTrackVectorProp::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1424fd286;
  }
  param_2 = 0;
LAB_1424fd286:
  uVar4 = FMatineeUtils::GetInterpVectorPropertyRef(lVar2,*(undefined8 *)(param_2 + 0x90));
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  local_res8 = 0;
  lVar2 = FUN_1425bd470(&local_res8,param_1 + 0x28,lVar2,*(undefined8 *)(param_2 + 0x90),0,0);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar2 != 0)) {
    *(longlong *)(param_1 + 0x30) = lVar2;
  }
  return;
}



// FUNCTION 1424fd300 FUN_1424fd300 body=464 status=ok
// SIG undefined FUN_1424fd300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424fd300(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afc4b0) && (_Init_thread_header(&DAT_146afc4b0), DAT_146afc4b0 == -1))
  {
    _DAT_146afc460 = &PTR_FUN_144024f50;
    lVar5 = 0;
    _DAT_146afc468 = &PTR__scalar_deleting_destructor__143f73ca8;
    DAT_146afc470 = 0;
    if (DAT_1468c217e == '\0') {
      if (DAT_1469e6880 == 0) {
        uVar3 = GetTransientPackage();
        FUN_1417846f0(uVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar4 = UGCObjectReferencer::GetPrivateStaticClass();
        DAT_1469e6880 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
        iVar1 = *(int *)(DAT_1469e6880 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar6;
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
        }
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x40000000;
      }
      UGCObjectReferencer::AddObject(DAT_1469e6880,&DAT_146afc468);
      DAT_146afc470 = 1;
    }
    DAT_146afc478 = 0;
    _DAT_146afc460 = &PTR__scalar_deleting_destructor__1450d5e10;
    _DAT_146afc480 = 0;
    _DAT_146afc468 = &PTR_LAB_1450d5e30;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146afc488);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146afc488,4000);
    atexit(`FStringTableEngineBridge::Initialize'::`2'::_dynamic_atexit_destructor_for__Instance__);
    _Init_thread_footer(&DAT_146afc4b0);
    DAT_1468b53e0 = &DAT_146afc460;
    return;
  }
  DAT_1468b53e0 = &DAT_146afc460;
  return;
}



// FUNCTION 1424fd4d0 InsertUninitialized body=114 status=ok
// SIG undefined InsertUninitialized(void)

void TArray<FParticleReplayTrackKey,FDefaultAllocator>::InsertUninitialized
               (longlong *param_1,int param_2,int param_3)

{
  void *_Src;
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_2 * 0xc);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + (longlong)param_3 * 0xc),_Src,
             (longlong)(iVar1 - param_2) * 0xc);
  return;
}



// FUNCTION 1424fd550 FUN_1424fd550 body=114 status=ok
// SIG undefined FUN_1424fd550(void)

void FUN_1424fd550(longlong *param_1,int param_2,int param_3)

{
  void *_Src;
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_2 * 0x14);
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + (longlong)param_3 * 0x14),_Src,
             (longlong)(iVar1 - param_2) * 0x14);
  return;
}



// FUNCTION 1424fd5d0 FUN_1424fd5d0 body=869 status=ok
// SIG undefined FUN_1424fd5d0(void)

bool FUN_1424fd5d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [40];
  
  lVar5 = *(longlong *)(param_1 + 0x4a8);
  if (lVar5 == 0) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,
                       L"Canvas Draw functions may only be called during the handling of the DrawHUD event"
                       ,&DAT_1450d0098,L"PIE_Warning_Message_CanvasCallOutsideOfDrawCanvas");
    puVar8 = (undefined8 *)FUN_140973510(local_88,uVar7);
    local_d8 = *puVar8;
    local_d0 = (longlong *)puVar8[1];
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    uVar7 = FText::FText(local_60);
    puVar8 = (undefined8 *)FUN_1416ed870(local_98,param_1,uVar7);
    local_e8 = *puVar8;
    local_e0 = (longlong *)puVar8[1];
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FName::FName(local_res8,&DAT_1450cef5c,1);
    uVar7 = FText::FText(local_78);
    uVar9 = FUN_14161fb50(local_30,local_res8);
    puVar8 = (undefined8 *)FMessageLog::Warning(uVar9,local_a8,uVar7);
    puVar8 = (undefined8 *)FUN_141621960(*puVar8,local_b8,&local_e8);
    FUN_141621960(*puVar8,local_c8,&local_d8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_30);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    plVar1 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_e0 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_58)(local_58);
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
    plVar1 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d0 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  return lVar5 != 0;
}



// FUNCTION 1424fd940 FUN_1424fd940 body=279 status=ok
// SIG undefined FUN_1424fd940(void)

undefined1 FUN_1424fd940(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 uVar10;
  
  uVar10 = 1;
  if ((int)param_1[0x8f] != 0) {
    lVar1 = param_2[0xa1];
    uVar10 = 0;
    if (lVar1 != 0) {
      lVar5 = ULocalPlayer::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar7 = (longlong *)FUN_1428749e0(DAT_146b17150,uVar6);
        plVar2 = (longlong *)*plVar7;
        for (plVar9 = plVar2; plVar9 != plVar2 + (int)plVar7[1]; plVar9 = plVar9 + 1) {
          if (*plVar9 == lVar1) {
            iVar8 = (int)((longlong)plVar9 - (longlong)plVar2 >> 3);
            goto LAB_1424fd9f3;
          }
        }
        iVar8 = -1;
LAB_1424fd9f3:
        uVar10 = 0;
        if (iVar8 + 1 == (int)param_1[0x8f]) {
          uVar10 = 1;
        }
      }
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x92) & 0x40) == 0) {
    cVar4 = (**(code **)(*param_2 + 0x768))(param_2);
    if (cVar4 == '\0') {
      uVar10 = 0;
    }
    return uVar10;
  }
  return uVar10;
}



// FUNCTION 1424fda60 IsStringTableFromAssetImpl body=55 status=ok
// SIG undefined IsStringTableFromAssetImpl(void)

bool FStringTableEngineBridge::IsStringTableFromAssetImpl(void)

{
  longlong local_28;
  longlong local_20;
  
  FUN_1424f0da0(&local_28);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return local_28 != 0;
}



// FUNCTION 1424fdaa0 MergeMaskIntoAlpha body=117 status=ok
// SIG undefined MergeMaskIntoAlpha(void)

undefined8 FHighResScreenshotConfig::MergeMaskIntoAlpha(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    plVar1 = (longlong *)FScreenshotRequest::GetHighresScreenshotMaskColorArray();
    iVar4 = 0;
    if (0 < (int)plVar1[1]) {
      lVar3 = 0;
      do {
        lVar3 = lVar3 + 4;
        iVar4 = iVar4 + 1;
        *(undefined1 *)(*param_2 + -1 + lVar3) = *(undefined1 *)(*plVar1 + -2 + lVar3);
      } while (iVar4 < (int)plVar1[1]);
    }
    return 1;
  }
  lVar2 = *param_2;
  lVar3 = lVar2 + (longlong)(int)param_2[1] * 4;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 4) {
    *(undefined1 *)(lVar2 + 3) = 0xff;
  }
  return 0;
}



// FUNCTION 1424fdb20 ModifyCompilationEnvironment body=41 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FEmulatedInstancedStaticMeshVertexFactory::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1424fdb80();
  FUN_1404a3a40(param_3,L"USE_INSTANCING_EMULATED",&DAT_143f591f0);
  return;
}



// FUNCTION 1424fdb50 ModifyCompilationEnvironment body=41 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FEmulatedInstancedStaticMeshVertexFactory::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1424fdb80();
  FUN_1404a3a40(param_3,L"USE_SHADER_BASED_INDEX_BUFFER",&DAT_143f591f0);
  return;
}



// FUNCTION 1424fdb80 FUN_1424fdb80 body=680 status=ok
// SIG undefined FUN_1424fdb80(void)

void FUN_1424fdb80(uint param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  short *psVar5;
  undefined1 local_res18 [8];
  longlong local_68;
  ulonglong local_60;
  longlong local_58 [2];
  short *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_58[1] = 0x14;
  local_58[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  lVar4 = local_58[0];
  FGenericPlatformString::Convert<char,wchar_t>(local_58[0],0x14,"MANUAL_VERTEX_FETCH",0x14,0x3f);
  piVar3 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_3 + 0x200,local_res18,local_58);
  iVar1 = *piVar3;
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  if (((iVar1 == -1) && ((0x1d < param_1 || ((0x25e2efcaU >> (param_1 & 0x1f) & 1) == 0)))) &&
     ((0x1b < param_1 ||
      (((0x8051000U >> (param_1 & 0x1f) & 1) == 0 ||
       (uVar2 = RHIGetShaderLanguageVersion(param_1), 1 < uVar2)))))) {
    FUN_1404a3a40(param_3,L"MANUAL_VERTEX_FETCH",&DAT_143f591f0);
  }
  FUN_1404a3a40(param_3,L"USE_INSTANCING",&DAT_143f591f0);
  FString::PrintfImpl(&local_48,&DAT_143f3edc0,1);
  local_60 = 0;
  psVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    psVar5 = local_48;
  }
  local_68 = 0;
  if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar5[lVar4] != 0);
    uVar2 = (int)lVar4 + 1;
    local_60 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    FGenericPlatformString::Memcpy(local_68,psVar5,(longlong)(int)uVar2 * 2);
  }
  local_58[0] = 0;
  local_58[1] = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"USE_DITHERED_LOD_TRANSITION_FOR_INSTANCED",0x54);
  local_38 = local_58;
  local_30 = &local_68;
  FUN_140497620(param_3 + 0x200,local_res18,&local_38,0);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_48 != (short *)0x0) {
    FMemory::Free();
  }
  FUN_1404a3a40(param_3,L"VF_SUPPORTS_SPEEDTREE_WIND",&DAT_143f591f0);
  local_58[0] = 0;
  local_58[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  lVar4 = local_58[0];
  FGenericPlatformString::Convert<char,wchar_t>(local_58[0],0x14,"MANUAL_VERTEX_FETCH",0x14,0x3f);
  piVar3 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_3 + 0x200,local_res18,local_58);
  iVar1 = *piVar3;
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  if ((iVar1 == -1) && ((0x1d < param_1 || ((0x25e2efcaU >> (param_1 & 0x1f) & 1) == 0)))) {
    if ((param_1 < 0x1c) &&
       (((0x8051000U >> (param_1 & 0x1f) & 1) != 0 &&
        (uVar2 = RHIGetShaderLanguageVersion(param_1), uVar2 < 2)))) {
      return;
    }
    FUN_1404a3a40(param_3,L"MANUAL_VERTEX_FETCH",&DAT_143f591f0);
  }
  return;
}



// FUNCTION 1424fde30 MovePoint body=145 status=ok
// SIG undefined MovePoint(void)

ulonglong FInterpLookupTrack::MovePoint(longlong *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *_Dst;
  undefined8 local_res20;
  
  if ((-1 < (int)param_2) && (iVar1 = (int)param_1[1], (int)param_2 < iVar1)) {
    _Dst = (undefined8 *)((longlong)(int)param_2 * 0x10 + *param_1);
    local_res20 = *_Dst;
    iVar2 = (iVar1 - param_2) + -1;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((longlong)(int)(param_2 + 1) * 0x10 + *param_1),(longlong)iVar2 << 4)
      ;
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    uVar3 = AddPoint(param_1,param_3,&local_res20);
    return uVar3;
  }
  return (ulonglong)param_2;
}



// FUNCTION 1424fded0 FUN_1424fded0 body=264 status=ok
// SIG undefined FUN_1424fded0(void)

ulonglong FUN_1424fded0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar3 = (**(code **)(*param_1 + 0x758))(param_1,&local_18);
  lVar1 = param_1[0x9a];
  if (lVar1 != 0) {
    iVar2 = *(int *)((longlong)param_1 + 0x464);
    uVar3 = (ulonglong)iVar2;
    if (((iVar2 < 0) || ((int)local_10 <= iVar2)) || (local_18[uVar3] != lVar1)) {
      for (plVar4 = local_18; plVar4 != local_18 + (int)local_10; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar1) {
          iVar2 = (int)((longlong)plVar4 - (longlong)local_18 >> 3);
          if (iVar2 != -1) {
            *(int *)((longlong)param_1 + 0x464) = iVar2;
          }
          break;
        }
      }
    }
  }
  if ((int)local_10 < 1) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)((longlong)param_1 + 0x464) + 1;
    uVar3 = (longlong)iVar2 / (longlong)(int)local_10 & 0xffffffff;
    iVar2 = iVar2 % (int)local_10;
  }
  *(int *)((longlong)param_1 + 0x464) = iVar2;
  if ((-1 < iVar2) && (iVar2 < (int)local_10)) {
    iVar2 = (iVar2 + 1) % (int)local_10;
    *(int *)((longlong)param_1 + 0x464) = iVar2;
    if ((iVar2 < 0) || ((int)local_10 <= iVar2)) {
      uVar3 = 0;
      if ((*(longlong *)(param_1[0x8b] + 0x528) != 0) &&
         (uVar3 = *(ulonglong *)(*(longlong *)(param_1[0x8b] + 0x528) + 0x1190), uVar3 != 0)) {
        param_1[0x9a] = uVar3;
      }
    }
    else {
      uVar3 = (ulonglong)iVar2;
      param_1[0x9a] = local_18[uVar3];
    }
  }
  if (local_18 != (longlong *)0x0) {
    uVar3 = FMemory::Free(local_18);
  }
  return uVar3;
}



// FUNCTION 1424fdfe0 FUN_1424fdfe0 body=318 status=ok
// SIG undefined FUN_1424fdfe0(void)

void FUN_1424fdfe0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30 [2];
  longlong local_20 [3];
  
  lVar2 = AActor::GetLevel();
  plVar1 = *(longlong **)(lVar2 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    uVar6 = 0;
    local_50 = param_2;
    if (param_4 == '\0') {
      puVar3 = (undefined8 *)FName::ToString(&local_50,local_20);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar3;
      }
      puVar3 = (undefined8 *)FName::ToString(param_1 + 0x460,local_30);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar3;
      }
      FString::PrintfImpl(&local_40,L"%s_%s",puVar5,puVar4,uVar6);
      puVar4 = &DAT_143f3eda8;
      if (local_38 != 0) {
        puVar4 = local_40;
      }
      FName::FName(&local_48,puVar4,1);
      param_2 = local_48;
      if (local_40 != (undefined2 *)0x0) {
        FMemory::Free();
        param_2 = local_48;
      }
      if (local_30[0] != 0) {
        FMemory::Free();
      }
      if (local_20[0] != 0) {
        FMemory::Free();
      }
    }
    lVar2 = UObject::FindFunction(plVar1,param_2);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x8c) == '\0')) {
      (**(code **)(*plVar1 + 0x208))(plVar1,lVar2,0);
    }
  }
  return;
}



// FUNCTION 1424fe160 FUN_1424fe160 body=170 status=ok
// SIG undefined FUN_1424fe160(void)

void FUN_1424fe160(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_142343790();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar1 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar1,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
     ((*(byte *)(param_1 + 8) & 0x30) == 0)) {
    FUN_1424fbbf0(param_1,0,0,0);
    return;
  }
  return;
}



// FUNCTION 1424fe210 FUN_1424fe210 body=63 status=ok
// SIG undefined FUN_1424fe210(void)

void FUN_1424fe210(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  if (*(longlong *)(lVar1 + 0x218) != 0) {
    FUN_1424e96f0(param_1);
    FUN_1423437b0(param_1);
    return;
  }
  return;
}



// FUNCTION 1424fe250 FUN_1424fe250 body=231 status=ok
// SIG undefined FUN_1424fe250(void)

void FUN_1424fe250(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  plVar1 = (longlong *)(param_1 + 0x818);
  plVar4 = (longlong *)*plVar1;
  plVar2 = plVar4 + *(int *)(param_1 + 0x820);
  for (; (plVar4 != plVar2 &&
         ((lVar5 = *plVar4, lVar5 == 0 ||
          ((*(short *)(lVar5 + 6) == 0 && (*(short *)(lVar5 + 8) == 0)))))); plVar4 = plVar4 + 1) {
  }
  UActorComponent::OnDestroyPhysicsState();
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x820)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar5 + *plVar1) != 0) {
        FUN_1426adfd0();
        lVar3 = *(longlong *)(lVar5 + *plVar1);
        if (lVar3 != 0) {
          FUN_14061f570(lVar3);
          FMemory::operator_delete(lVar3,0x1b0);
        }
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x820));
  }
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (*(int *)(param_1 + 0x824) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1424fe340 FUN_1424fe340 body=100 status=ok
// SIG undefined FUN_1424fe340(void)

void FUN_1424fe340(longlong param_1,byte param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0x460) & 1) != param_2) {
    iVar1 = FUN_142235230();
    if (iVar1 != 3) {
      *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) & 0xfe;
      *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) | param_2;
      local_18 = 0;
      local_10 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x458) + 0xb68))
                (*(longlong **)(param_1 + 0x458),param_2,&local_18);
    }
  }
  return;
}



// FUNCTION 1424fe3b0 FUN_1424fe3b0 body=150 status=ok
// SIG undefined FUN_1424fe3b0(void)

void FUN_1424fe3b0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if ((*(byte *)(param_1 + 8) & 0x30) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x810);
    *(undefined8 *)(param_1 + 0x810) = 0;
    FUN_1424fbbf0(param_1,1,uVar1,0);
  }
  plVar2 = *(longlong **)(param_1 + 0x810);
  *(undefined8 *)(param_1 + 0x810) = 0;
  if (plVar2 != (longlong *)0x0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)plVar2[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)plVar2[2];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FMemory::operator_delete(plVar2,0x38);
  }
  return;
}



// FUNCTION 1424fe450 FUN_1424fe450 body=1608 status=ok
// SIG undefined FUN_1424fe450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424fe450(longlong param_1,byte param_2,char param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
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
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
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
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((((*(byte *)(param_1 + 0xb8) & 4) != 0) && ((~param_2 & 1) != 0)) &&
     (iVar15 = 0, 0 < *(int *)(param_1 + 0x7b0))) {
    lVar14 = 0;
    do {
      fVar38 = fRam0000000146afbca8;
      fVar36 = fRam0000000146afbca4;
      fVar34 = _DAT_146afbca0;
      lVar3 = *(longlong *)(param_1 + 0x7a8);
      auVar16 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar4 = auVar16._0_4_;
      fVar6 = auVar16._4_4_;
      fVar8 = auVar16._8_4_;
      fVar10 = auVar16._12_4_;
      auVar2 = *(undefined1 (*) [16])(lVar14 + 0x20 + lVar3);
      fVar5 = auVar2._0_4_;
      fVar7 = auVar2._4_4_;
      fVar9 = auVar2._8_4_;
      pfVar1 = (float *)(lVar14 + 0x10 + lVar3);
      local_128 = *pfVar1;
      fStack_124 = pfVar1[1];
      fStack_120 = pfVar1[2];
      fStack_11c = pfVar1[3];
      pfVar1 = (float *)(lVar14 + lVar3);
      fVar19 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar22 = pfVar1[2];
      fVar26 = pfVar1[3];
      fVar18 = *(float *)(param_1 + 0x210);
      fVar23 = *(float *)(param_1 + 0x214);
      fVar21 = *(float *)(param_1 + 0x218);
      fVar25 = *(float *)(param_1 + 0x21c);
      local_108 = 0.0;
      fStack_104 = 0.0;
      fStack_100 = 0.0;
      fStack_fc = fRam0000000146afbcac;
      local_e8 = (float)((uint)_DAT_146afbca0 & _DAT_146afbcb0);
      fStack_e4 = (float)((uint)fRam0000000146afbca4 & uRam0000000146afbcb4);
      fStack_e0 = (float)((uint)fRam0000000146afbca8 & uRam0000000146afbcb8);
      fStack_dc = (float)((uint)fRam0000000146afbcac & uRam0000000146afbcbc);
      auVar16 = minps(auVar2,auVar16);
      auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146afc304);
      auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146afc300);
      auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146afc308);
      auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146afc30c);
      iVar13 = movmskps((int)lVar3,auVar17);
      _local_f8 = ZEXT816(0);
      local_118 = _DAT_146afc300;
      fStack_114 = fRam0000000146afc304;
      fStack_110 = fRam0000000146afc308;
      fStack_10c = fRam0000000146afc30c;
      if (iVar13 == 0) {
        fVar34 = fVar4 * local_128;
        fVar36 = fVar6 * fStack_124;
        fVar38 = fVar8 * fStack_120;
        fVar39 = fVar10 * fStack_11c;
        local_108 = fVar26 * fVar18 * _DAT_146afc2e0 + fVar25 * fVar19 +
                    fVar22 * fVar23 * _DAT_146afc2d0 + fVar24 * fVar21 * _DAT_146afc2c0;
        fStack_104 = fVar22 * fVar18 * fRam0000000146afc2e4 + fVar25 * fVar24 +
                     fVar26 * fVar23 * fRam0000000146afc2d4 + fVar19 * fVar21 * fRam0000000146afc2c4
        ;
        fStack_100 = fVar24 * fVar18 * fRam0000000146afc2e8 + fVar25 * fVar22 +
                     fVar19 * fVar23 * fRam0000000146afc2d8 + fVar26 * fVar21 * fRam0000000146afc2c8
        ;
        fStack_fc = fVar19 * fVar18 * fRam0000000146afc2ec + fVar25 * fVar26 +
                    fVar24 * fVar23 * fRam0000000146afc2dc + fVar22 * fVar21 * fRam0000000146afc2cc;
        fVar19 = fVar38 * fVar23 - fVar36 * fVar21;
        fVar24 = fVar34 * fVar21 - fVar38 * fVar18;
        fVar22 = fVar36 * fVar18 - fVar34 * fVar23;
        fVar26 = fVar39 * fVar25 - fVar39 * fVar25;
        fVar19 = fVar19 + fVar19;
        fVar24 = fVar24 + fVar24;
        fVar22 = fVar22 + fVar22;
        fVar26 = fVar26 + fVar26;
        local_f8._4_4_ =
             (fVar19 * fVar21 - fVar22 * fVar18) + fVar25 * fVar24 + fVar36 +
             *(float *)(param_1 + 0x224);
        local_f8._0_4_ =
             (fVar22 * fVar23 - fVar24 * fVar21) + fVar25 * fVar19 + fVar34 +
             *(float *)(param_1 + 0x220);
        fStack_f0 = (fVar24 * fVar18 - fVar19 * fVar23) + fVar25 * fVar22 + fVar38 +
                    *(float *)(param_1 + 0x228);
        fStack_ec = (fVar26 * fVar25 - fVar26 * fVar25) + fVar25 * fVar26 + fVar39 +
                    *(float *)(param_1 + 0x22c);
      }
      else {
        fVar39 = *(float *)(param_1 + 0x220);
        fVar11 = *(float *)(param_1 + 0x224);
        fVar12 = *(float *)(param_1 + 0x228);
        fVar27 = fVar23 + fVar23;
        fVar30 = fVar21 + fVar21;
        fVar32 = fVar18 * (fVar18 + fVar18);
        fVar28 = (fVar18 + fVar18) * fVar25;
        fVar29 = fVar24 + fVar24;
        fVar31 = fVar22 + fVar22;
        fVar43 = (fVar30 * fVar25 + fVar18 * fVar27) * fVar4;
        fVar44 = (fVar28 + fVar23 * fVar30) * fVar6;
        fVar45 = (fVar27 * fVar25 + fVar18 * fVar30) * fVar8;
        fVar33 = fVar6 * (fVar18 * fVar27 - fVar30 * fVar25);
        fVar35 = fVar8 * (fVar23 * fVar30 - fVar28);
        fVar37 = fVar4 * (fVar18 * fVar30 - fVar27 * fVar25);
        fVar28 = (fVar19 + fVar19) * fVar19;
        fVar18 = (float)((uint)((_DAT_146afbca0 - (fVar21 * fVar30 + fVar23 * fVar27)) * fVar4) &
                        _DAT_146afbcb0);
        fVar21 = (float)((uint)((fRam0000000146afbca4 - (fVar21 * fVar30 + fVar32)) * fVar6) &
                        uRam0000000146afbcb4);
        fVar23 = (float)((uint)((fRam0000000146afbca8 - (fVar23 * fVar27 + fVar32)) * fVar8) &
                        uRam0000000146afbcb8);
        fVar25 = (float)((uint)((fRam0000000146afbcac - (fVar32 + fVar32)) * fVar10) &
                        uRam0000000146afbcbc);
        fVar27 = (fVar19 + fVar19) * fVar26;
        fVar40 = (fVar31 * fVar26 + fVar29 * fVar19) * fVar5;
        fVar41 = (fVar27 + fVar31 * fVar24) * fVar7;
        fVar42 = (fVar29 * fVar26 + fVar31 * fVar19) * fVar9;
        fVar30 = fVar7 * (fVar29 * fVar19 - fVar31 * fVar26);
        fVar27 = fVar9 * (fVar31 * fVar24 - fVar27);
        fVar32 = fVar5 * (fVar31 * fVar19 - fVar29 * fVar26);
        fVar19 = (float)((uint)((_DAT_146afbca0 - (fVar31 * fVar22 + fVar29 * fVar24)) * fVar5) &
                        _DAT_146afbcb0);
        fVar22 = (float)((uint)((fRam0000000146afbca4 - (fVar31 * fVar22 + fVar28)) * fVar7) &
                        uRam0000000146afbcb4);
        fVar24 = (float)((uint)((fRam0000000146afbca8 - (fVar29 * fVar24 + fVar28)) * fVar9) &
                        uRam0000000146afbcb8);
        fVar26 = (float)((uint)((fRam0000000146afbcac - (fVar28 + fVar28)) * auVar2._12_4_) &
                        uRam0000000146afbcbc);
        local_178 = fVar40 * fVar33 + fVar19 * fVar18 + fVar32 * fVar45 + fVar26 * fVar39;
        fStack_174 = fVar40 * fVar21 + fVar19 * fVar43 + fVar32 * fVar35 + fVar26 * fVar11;
        fStack_170 = fVar40 * fVar44 + fVar19 * fVar37 + fVar32 * fVar23 + fVar26 * fVar12;
        fStack_16c = fVar40 * fVar25 + fVar19 * fVar25 + fVar32 * fVar25 +
                     fVar26 * fRam0000000146afbcac;
        local_168 = fVar22 * fVar33 + fVar30 * fVar18 + fVar41 * fVar45 + fVar26 * fVar39;
        fStack_164 = fVar22 * fVar21 + fVar30 * fVar43 + fVar41 * fVar35 + fVar26 * fVar11;
        fStack_160 = fVar22 * fVar44 + fVar30 * fVar37 + fVar41 * fVar23 + fVar26 * fVar12;
        fStack_15c = fVar22 * fVar25 + fVar30 * fVar25 + fVar41 * fVar25 +
                     fVar26 * fRam0000000146afbcac;
        local_158 = fVar27 * fVar33 + fVar42 * fVar18 + fVar24 * fVar45 + fVar26 * fVar39;
        fStack_154 = fVar27 * fVar21 + fVar42 * fVar43 + fVar24 * fVar35 + fVar26 * fVar11;
        fStack_150 = fVar27 * fVar44 + fVar42 * fVar37 + fVar24 * fVar23 + fVar26 * fVar12;
        fStack_14c = fVar27 * fVar25 + fVar42 * fVar25 + fVar24 * fVar25 +
                     fVar26 * fRam0000000146afbcac;
        local_148 = fStack_124 * fVar33 + local_128 * fVar18 + fStack_120 * fVar45 +
                    fRam0000000146afbcac * fVar39;
        fStack_144 = fStack_124 * fVar21 + local_128 * fVar43 + fStack_120 * fVar35 +
                     fRam0000000146afbcac * fVar11;
        fStack_140 = fStack_124 * fVar44 + local_128 * fVar37 + fStack_120 * fVar23 +
                     fRam0000000146afbcac * fVar12;
        fStack_13c = fStack_124 * fVar25 + local_128 * fVar25 + fStack_120 * fVar25 +
                     fRam0000000146afbcac * fRam0000000146afbcac;
        FMatrix::RemoveScaling(&local_178);
        fVar19 = (float)(-(uint)(local_118 <= fVar4 * fVar5) & (_DAT_146afc2f0 ^ (uint)fVar34) ^
                        _DAT_146afc2f0);
        fVar24 = (float)(-(uint)(fStack_114 <= fVar6 * fVar7) &
                         (uRam0000000146afc2f4 ^ (uint)fVar36) ^ uRam0000000146afc2f4);
        fVar22 = (float)(-(uint)(fStack_110 <= fVar8 * fVar9) &
                         (uRam0000000146afc2f8 ^ (uint)fVar38) ^ uRam0000000146afc2f8);
        local_178 = local_178 * fVar19;
        fStack_174 = fStack_174 * fVar19;
        fStack_170 = fStack_170 * fVar19;
        fStack_164 = fStack_164 * fVar24;
        fStack_160 = fStack_160 * fVar24;
        local_168 = local_168 * fVar24;
        fStack_154 = fStack_154 * fVar22;
        fStack_150 = fStack_150 * fVar22;
        local_158 = local_158 * fVar22;
        FQuat::FQuat(&local_138,&local_178);
        local_188 = 0x322bcc77;
        auVar20._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
        auVar20._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
        auVar20._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
        auVar20._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
        fVar18 = auVar20._4_4_ + auVar20._0_4_;
        fVar23 = auVar20._8_4_ + auVar20._4_4_;
        fVar21 = auVar20._12_4_ + auVar20._8_4_;
        fVar25 = auVar20._0_4_ + auVar20._12_4_;
        auVar16._4_4_ = fVar23;
        auVar16._0_4_ = fVar18;
        auVar16._8_4_ = fVar21;
        auVar16._12_4_ = fVar25;
        auVar16 = rsqrtps(auVar20,auVar16);
        fVar19 = auVar16._0_4_;
        fVar24 = auVar16._4_4_;
        fVar22 = auVar16._8_4_;
        fVar26 = auVar16._12_4_;
        fVar19 = (_DAT_146afbd30 - fVar19 * fVar19 * fVar18 * _DAT_146afbd30) * fVar19 + fVar19;
        fVar24 = (fRam0000000146afbd34 - fVar24 * fVar24 * fVar23 * fRam0000000146afbd34) * fVar24 +
                 fVar24;
        fVar22 = (fRam0000000146afbd38 - fVar22 * fVar22 * fVar21 * fRam0000000146afbd38) * fVar22 +
                 fVar22;
        fVar26 = (fRam0000000146afbd3c - fVar26 * fVar26 * fVar25 * fRam0000000146afbd3c) * fVar26 +
                 fVar26;
        local_f8._4_4_ = fStack_144;
        local_f8._0_4_ = local_148;
        fStack_f0 = fStack_140;
        local_138 = (float)(((uint)(((_DAT_146afbd30 - fVar19 * fVar19 * fVar18 * _DAT_146afbd30) *
                                     fVar19 + fVar19) * local_138) ^ _DAT_146afbd20) &
                            -(uint)(1e-08 <= fVar18) ^ _DAT_146afbd20);
        fStack_134 = (float)(((uint)(((fRam0000000146afbd34 -
                                      fVar24 * fVar24 * fVar23 * fRam0000000146afbd34) * fVar24 +
                                     fVar24) * fStack_134) ^ uRam0000000146afbd24) &
                             -(uint)(1e-08 <= fVar23) ^ uRam0000000146afbd24);
        fStack_130 = (float)(((uint)(((fRam0000000146afbd38 -
                                      fVar22 * fVar22 * fVar21 * fRam0000000146afbd38) * fVar22 +
                                     fVar22) * fStack_130) ^ uRam0000000146afbd28) &
                             -(uint)(1e-08 <= fVar21) ^ uRam0000000146afbd28);
        fStack_12c = (float)(((uint)(((fRam0000000146afbd3c -
                                      fVar26 * fVar26 * fVar25 * fRam0000000146afbd3c) * fVar26 +
                                     fVar26) * fStack_12c) ^ uRam0000000146afbd2c) &
                             -(uint)(1e-08 <= fVar25) ^ uRam0000000146afbd2c);
        fStack_ec = 0.0;
        local_108 = local_138;
        fStack_104 = fStack_134;
        fStack_100 = fStack_130;
        fStack_fc = fStack_12c;
      }
      fStack_dc = fVar10 * auVar2._12_4_;
      fStack_e0 = fVar8 * fVar9;
      fStack_e4 = fVar6 * fVar7;
      local_e8 = fVar4 * fVar5;
      FUN_14250c490(param_1,iVar15,&local_108,param_3 == '\x01');
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 0x30;
    } while (iVar15 < *(int *)(param_1 + 0x7b0));
  }
  return;
}



// FUNCTION 1424feaa0 FUN_1424feaa0 body=366 status=ok
// SIG undefined FUN_1424feaa0(void)

void FUN_1424feaa0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar10 = 0;
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  *(undefined4 *)(param_1 + 1) = 0;
  iVar7 = 0;
  if ((iVar5 < 0) && (iVar7 = 0, iVar5 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
    iVar5 = *(int *)((longlong)param_1 + 0xc);
    iVar7 = (int)param_1[1];
  }
  lVar3 = param_2[1];
  iVar2 = iVar7 + (int)lVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar5 < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + (longlong)iVar7 * 8),0,(longlong)(int)lVar3 << 3);
  uVar11 = uVar10;
  uVar12 = uVar10;
  if (0 < (int)param_2[1]) {
    do {
      plVar8 = (longlong *)(*param_2 + uVar12);
      plVar6 = (longlong *)*plVar8;
      if (((plVar6 != (longlong *)0x0) ||
          (plVar6 = (longlong *)plVar8[1], plVar6 != (longlong *)0x0)) &&
         (lVar3 = (**(code **)(*plVar6 + 0x560))(plVar6,(int)plVar8[2]), lVar3 != 0)) {
        lVar4 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          lVar3 = UMaterialInstanceDynamic::Create(lVar3,param_3);
          plVar6 = (longlong *)*plVar8;
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)plVar8[1];
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x568))(plVar6,(int)plVar8[2],lVar3);
            }
          }
          else {
            (**(code **)(*plVar6 + 0x568))(plVar6,(int)plVar8[2],lVar3);
          }
        }
        *(longlong *)(uVar11 + *param_1) = lVar3;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
      uVar12 = uVar12 + 0x18;
    } while ((int)uVar9 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1424fec10 ParseConsoleCommand body=262 status=ok
// SIG undefined ParseConsoleCommand(void)

ulonglong FHighResScreenshotConfig::ParseConsoleCommand
                    (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  
  pfVar1 = (float *)(param_1 + 0x20);
  DAT_1468c2188 = 0;
  DAT_1468c218c = 0;
  *pfVar1 = 1.0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_142874af0(puVar3,param_3,&DAT_1468c2188,&DAT_1468c218c,pfVar1,param_1 + 0x10,
                        param_1 + 0x28,param_1 + 0x29,param_1 + 0x41,param_1 + 0x48);
  if ((char)uVar2 != '\0') {
    uVar2 = (ulonglong)DAT_1468c218c;
    DAT_1468c2188 = (uint)(longlong)((float)DAT_1468c2188 * *pfVar1);
    DAT_1468c218c = (uint)(longlong)((float)uVar2 * *pfVar1);
    if ((DAT_1468c2188 <= DAT_1464c9c64) && (DAT_1468c218c <= DAT_1464c9c64)) {
      DAT_1468c2184 = 1;
      return CONCAT71((int7)((ulonglong)(longlong)((float)uVar2 * *pfVar1) >> 8),1);
    }
    uVar2 = FOutputDevice::LogfImpl
                      (param_3,
                       L"Error: Screenshot size exceeds the maximum allowed texture size (%d x %d)",
                       DAT_1464c9c64,DAT_1464c9c64);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1424fed30 FUN_1424fed30 body=144 status=ok
// SIG undefined FUN_1424fed30(void)

void FUN_1424fed30(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 0x4b8) & 1) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x4b8) & 4) == 0) {
    if (*(int *)(param_1 + 0x4f0) < 1) goto LAB_1424fed70;
    lVar2 = param_1 + 0x4e8;
  }
  else {
    if (*(int *)(param_1 + 0x4d0) < 1) goto LAB_1424fed70;
    lVar2 = param_1 + 0x4c8;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2,0);
LAB_1424fed70:
  lVar2 = FUN_142875430(DAT_146b17150);
  if (lVar2 != 0) {
    FAudioDevice::EnableRadioEffect(lVar2,1);
  }
  uVar1 = *(uint *)(param_1 + 0x4b8) ^ 4;
  *(uint *)(param_1 + 0x4b8) = uVar1;
  AActor::SetActorTickEnabled(param_1,~(byte)(uVar1 >> 2) & 1);
  return;
}



// FUNCTION 1424fedc0 FUN_1424fedc0 body=233 status=ok
// SIG undefined FUN_1424fedc0(void)

void FUN_1424fedc0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (((byte)(int)param_1[0x97] & 5) != 1) {
    lVar3 = FUN_142875430(DAT_146b17150);
    if (lVar3 != 0) {
      FAudioDevice::EnableRadioEffect
                (lVar3,CONCAT31((uint3)(*(uint *)((longlong)param_1 + 0x474) >> 0xc),
                                ~(byte)(*(uint *)((longlong)param_1 + 0x474) >> 4)) & 0xffffff01);
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar1 = UWorld::IsGameWorld(uVar4);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x97) & 5) == 0)) {
    FUN_1424fb510(param_1);
  }
  if (((*(byte *)((longlong)param_1 + 0x46c) & 2) == 0) || ((*(uint *)(param_1 + 0x97) & 1) != 0)) {
    if (((*(uint *)((longlong)param_1 + 0x474) & 2) == 0) ||
       (((*(uint *)(param_1 + 0x97) & 1) != 0 && ((*(uint *)((longlong)param_1 + 0x474) & 8) == 0)))
       ) goto LAB_1424fee67;
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)param_1[0x8e];
  }
  FUN_14250cc70(param_1,uVar5,0,1);
LAB_1424fee67:
  uVar2 = *(uint *)(param_1 + 0x97);
  if (((uVar2 & 1) == 0) && (0 < (int)param_1[0x9a])) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x99,0);
    uVar2 = *(uint *)(param_1 + 0x97);
  }
  *(uint *)(param_1 + 0x97) = uVar2 & 0xfffffff9 | 1;
  AActor::SetActorTickEnabled(param_1,1);
  return;
}



// FUNCTION 1424feeb0 PostDuplicate body=59 status=ok
// SIG undefined PostDuplicate(void)

void UInstancedStaticMeshComponent::PostDuplicate(longlong param_1,char param_2)

{
  FUN_142394430();
  if (((*(byte *)(param_1 + 8) & 0x30) == 0) && (param_2 != '\0')) {
    FUN_1424fbbf0(param_1,1,0,0);
  }
  return;
}



// FUNCTION 1424feef0 FUN_1424feef0 body=116 status=ok
// SIG undefined FUN_1424feef0(void)

void FUN_1424feef0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142238430();
  lVar3 = param_1[0x23];
  if (lVar3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1424fef46;
  }
  lVar3 = 0;
LAB_1424fef46:
  param_1[0x8b] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x0001424fef5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x728))(param_1);
  return;
}



// FUNCTION 1424fef70 FUN_1424fef70 body=410 status=ok
// SIG undefined FUN_1424fef70(void)

void FUN_1424fef70(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  void *_Src;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_58;
  uint local_50;
  int local_4c;
  void *local_48;
  int local_40;
  longlong local_38 [2];
  
  FUN_1422384a0();
  uVar3 = 0;
  local_58 = 0;
  local_4c = 0;
  uVar6 = uVar3;
  uVar8 = uVar3;
  uVar9 = uVar3;
  if (0 < *(int *)(param_1 + 0x460)) {
    do {
      lVar1 = *(longlong *)(uVar9 + *(longlong *)(param_1 + 0x458));
      if ((lVar1 != 0) && (cVar2 = FUN_142235f50(lVar1), cVar2 != '\0')) {
        UObjectBaseUtility::GetFullName(lVar1,local_38,0);
        FString::PrintfImpl(&local_48);
        _Src = local_48;
        if (local_40 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = local_40 + -1;
        }
        if (iVar4 != 0) {
          iVar5 = (int)uVar3;
          local_50 = (uint)(iVar5 == 0) + iVar5 + iVar4;
          if (local_4c < (int)local_50) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar3);
            uVar6 = local_58;
          }
          uVar3 = (ulonglong)local_50;
          _Dst = (void *)(uVar6 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x460));
    if (uVar6 != 0) {
      FMemory::Free(uVar6);
    }
  }
  return;
}



// FUNCTION 1424ff110 FUN_1424ff110 body=41 status=ok
// SIG undefined FUN_1424ff110(void)

void FUN_1424ff110(longlong param_1)

{
  FUN_14223ef90(param_1,CONCAT31((uint3)(*(uint *)(param_1 + 0x474) >> 0xd),
                                 ~(byte)(*(uint *)(param_1 + 0x474) >> 5)) & 0xffffff01);
  FUN_1422384a0(param_1);
  return;
}



// FUNCTION 1424ff140 FUN_1424ff140 body=355 status=ok
// SIG undefined FUN_1424ff140(void)

void FUN_1424ff140(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  UObject::PostLoad();
  iVar8 = *(int *)(param_1 + 0x30) + -1;
  if (-1 < iVar8) {
    lVar9 = (longlong)iVar8 << 7;
    lVar10 = lVar9;
    do {
      lVar7 = *(longlong *)(param_1 + 0x28) + lVar9;
      if (*(longlong *)(lVar7 + 8) != 0) {
        uVar4 = FUN_14178ca30();
        cVar2 = FUN_142340f90(uVar4);
        if (cVar2 == '\0') {
          uVar3 = *(uint *)(*(longlong *)(lVar7 + 8) + 0xc);
          if ((int)uVar3 < (int)DAT_1469e91c4) {
            uVar6 = uVar3 & 0xffff;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0xffff;
              uVar6 = uVar6 - 0x10000;
            }
            lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)uVar6 * 0x18;
          }
          else {
            lVar7 = 0;
          }
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x20000000;
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(lVar7 + 0x70 + lVar10) != 0) {
            FMemory::Free();
          }
          TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
          ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(lVar7 + 0x60 + lVar10);
          if (*(longlong *)(lVar7 + 0x38 + lVar10) != 0) {
            FMemory::Free();
          }
          iVar1 = *(int *)(param_1 + 0x30);
          iVar5 = (iVar1 - iVar8) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar10 + *(longlong *)(param_1 + 0x28)),
                       (void *)((longlong)(iVar1 - iVar5) * 0x80 + *(longlong *)(param_1 + 0x28)),
                       (longlong)iVar5 << 7);
            iVar1 = *(int *)(param_1 + 0x30);
          }
          *(int *)(param_1 + 0x30) = iVar1 + -1;
          TArray<FComponentOverrideRecord,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
        }
        else if (*(char *)(lVar7 + 0x30) != '\0') {
          FUN_1422f4930(lVar7 + 0x30,*(undefined8 *)(lVar7 + 8));
        }
      }
      lVar10 = lVar10 + -0x80;
      lVar9 = lVar9 + -0x80;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 1424ff2b0 BeginPlay body=32 status=ok
// SIG undefined BeginPlay(void)

void ACharactor_LBBase::BeginPlay(longlong *param_1)

{
  FUN_1423daa60();
                    /* WARNING: Could not recover jumptable at 0x0001424ff2c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x9d8))(param_1);
  return;
}



// FUNCTION 1424ff2d0 PostLoad body=492 status=ok
// SIG undefined PostLoad(void)

void UInterpCurveEdSetup::PostLoad(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_res10;
  
  UObject::PostLoad();
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    local_res10 = 0;
    do {
      lVar11 = *(longlong *)(param_1 + 0x28) + local_res10;
      iVar8 = *(int *)(lVar11 + 0x18) + -1;
      if (-1 < iVar8) {
        lVar9 = (longlong)iVar8 * 0x38;
        lVar7 = (longlong)*(int *)(lVar11 + 0x18) * 0x38;
        lVar12 = lVar9;
        do {
          lVar4 = *(longlong *)(lVar11 + 0x10);
          lVar6 = *(longlong *)(lVar4 + lVar9);
          if (lVar6 == 0) {
LAB_1424ff393:
            lVar6 = *(longlong *)(lVar4 + lVar9);
            if (lVar6 != 0) {
              lVar3 = UDistributionVector::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) goto LAB_1424ff411;
            }
            lVar6 = *(longlong *)(lVar4 + lVar9);
            if (lVar6 != 0) {
              lVar4 = UInterpTrack::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) goto LAB_1424ff411;
            }
LAB_1424ff417:
            if (*(longlong *)(lVar12 + 0x10 + *(longlong *)(lVar11 + 0x10)) != 0) {
              FMemory::Free();
            }
            iVar5 = *(int *)(lVar11 + 0x18);
            iVar2 = (iVar5 - iVar8) + -1;
            if (iVar2 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar11 + 0x10) + lVar12),
                         (void *)(*(longlong *)(lVar11 + 0x10) + lVar7),(longlong)iVar2 * 0x38);
              iVar5 = *(int *)(lVar11 + 0x18);
            }
            *(int *)(lVar11 + 0x18) = iVar5 + -1;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeShrink(lVar11 + 0x10);
          }
          else {
            lVar3 = UDistributionFloat::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_1424ff393;
LAB_1424ff411:
            if (lVar6 == -0x28) goto LAB_1424ff417;
          }
          lVar7 = lVar7 + -0x38;
          lVar12 = lVar12 + -0x38;
          lVar9 = lVar9 + -0x38;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      local_res10 = local_res10 + 0x30;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1424ff4c0 PostLoad body=151 status=ok
// SIG undefined PostLoad(void)

void UInterpData::PostLoad(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  UObject::PostLoad();
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar6 = uVar5;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      lVar1 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x30));
      if (lVar1 != 0) {
        lVar3 = UInterpGroupDirector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(longlong *)(param_1 + 0x58) = lVar1;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1424ff560 PostLoad body=141 status=ok
// SIG undefined PostLoad(void)

void UInterpGroup::PostLoad(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  UObject::PostLoad();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(lVar5 + lVar1) == 0) {
        iVar3 = *(int *)(param_1 + 0x38);
        iVar2 = (iVar3 - iVar4) + -1;
        if (iVar2 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar4 * 8),
                     (void *)(lVar1 + (longlong)(iVar4 + 1) * 8),(longlong)iVar2 << 3);
          iVar3 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x38) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x30);
      }
      else {
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      }
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1424ff5f0 PostLoad body=76 status=ok
// SIG undefined PostLoad(void)

void UInterpTrackAnimControl::PostLoad(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  
  UObject::PostLoad();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar2 = 0;
    do {
      pfVar1 = (float *)(lVar2 + 0x18 + *(longlong *)(param_1 + 0x98));
      if (*pfVar1 <= 0.001 && *pfVar1 != 0.001) {
        *(undefined4 *)(lVar2 + 0x18 + *(longlong *)(param_1 + 0x98)) = 0x3f800000;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0xa0));
  }
  return;
}



// FUNCTION 1424ff640 FUN_1424ff640 body=130 status=ok
// SIG undefined FUN_1424ff640(void)

void FUN_1424ff640(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  UObject::PostLoad();
  uVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x278))(param_1);
  uVar6 = uVar4;
  if (0 < iVar2) {
    do {
      if (*(int *)(param_1[0xe] + 0x10 + uVar4) == 0) {
        FUN_1424f0300(param_1,uVar6);
        lVar1 = param_1[0xe];
        uVar3 = FUN_1424f0300(param_1,uVar6);
        *(undefined4 *)(lVar1 + 0x10 + uVar4) = uVar3;
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x18;
      iVar2 = (**(code **)(*param_1 + 0x278))(param_1);
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  return;
}



// FUNCTION 1424ff6d0 PostLoad body=53 status=ok
// SIG undefined PostLoad(void)

void UStringTable::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  TResourceArray<FMediaElementVertex,0>::SetAllowCPUAccess(*(undefined8 *)(param_1 + 0x28),1);
  if (DAT_1469eaf38 != 0) {
    FUN_1418476f0();
    return;
  }
  return;
}



// FUNCTION 1424ff710 FUN_1424ff710 body=2089 status=ok
// SIG undefined FUN_1424ff710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424ff710(longlong *param_1)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  float *pfVar21;
  float *pfVar22;
  undefined4 uVar23;
  float local_res8;
  float fStackX_c;
  undefined8 local_res10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if ((lVar6 != 0) && (param_1[0x95] != 0)) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    *(float *)((longlong)param_1 + 0x484) = *(float *)(lVar6 + 0x790) - *(float *)(param_1 + 0x90);
    if (param_1[0x8b] != 0) {
      FUN_1424eac80(param_1);
    }
    pfVar17 = (float *)0x0;
    if ((*(byte *)(param_1 + 0x8c) & 4) == 0) {
      local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88);
      if ((*(byte *)(param_1 + 0x8c) & 2) != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_1468509e4) &&
           (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
          uVar9 = FCommandLine::Get();
          DAT_1468509e0 = FParse::Param(uVar9,L"nullrhi");
          _Init_thread_footer(&DAT_1468509e4);
        }
        if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88);
        if (bVar2) {
          (**(code **)(*param_1 + 0x778))(param_1);
          if ((int)param_1[0x9c] < 1) {
            plVar10 = param_1 + 0x9f;
            if (0 < (int)param_1[0xa0] - *(int *)((longlong)param_1 + 0x52c)) {
              uVar14 = *(uint *)(param_1 + 0xa4);
              puVar1 = (uint *)(param_1 + 0xa1);
              local_a8 = (float *)0x100000000;
              uStack_94 = 0;
              uStack_90 = 0;
              if (uVar14 != 0) {
                puVar19 = (uint *)param_1[0xa3];
                if ((uint *)param_1[0xa3] == (uint *)0x0) {
                  puVar19 = puVar1;
                }
                uVar4 = *puVar19;
                pfVar13 = pfVar17;
                pfVar15 = pfVar17;
                while (uVar4 == 0) {
                  iVar5 = (int)pfVar13;
                  uStack_90 = (int)pfVar15 + 0x20;
                  pfVar15 = (float *)(ulonglong)uStack_90;
                  pfVar13 = (float *)(ulonglong)(iVar5 + 1U);
                  uVar20 = (ulonglong)local_a8 >> 0x20;
                  local_a8 = (float *)CONCAT44((int)uVar20,iVar5 + 1U);
                  if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
                  goto LAB_1424ffb2d;
                  uVar4 = puVar19[(longlong)iVar5 + 1];
                }
                uVar4 = -uVar4 & uVar4;
                iVar5 = 0x1f;
                if (uVar4 != 0) {
                  for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                  }
                }
                local_a8 = (float *)CONCAT44(uVar4,SUB84(local_a8,0));
                if (uVar4 == 0) {
                  iVar5 = 0x20;
                }
                else {
                  iVar5 = 0x1f - iVar5;
                }
                uStack_94 = (uStack_90 - iVar5) + 0x1f;
                if ((int)uVar14 < (int)uStack_94) {
LAB_1424ffb2d:
                  uStack_94 = uVar14;
                }
              }
              uVar4 = *(uint *)(param_1 + 0xa4);
              uStack_70 = CONCAT44(uStack_94,0xffffffff);
              local_68 = CONCAT44(uStack_8c,uStack_90);
              uStack_58 = local_a8;
              pfVar13 = uStack_58;
              local_98 = -1 << ((byte)uVar4 & 0x1f);
              uStack_58._0_4_ = SUB84(local_a8,0);
              uStack_58._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
              uVar18 = uVar4 & 0xffffffe0;
              uStack_80 = (undefined4)uStack_58;
              uStack_7c = uStack_58._4_4_;
              uStack_a0 = puVar1;
              uStack_94 = uVar4;
              local_78 = puVar1;
              local_60 = plVar10;
              uStack_58 = pfVar13;
              puStack_50 = puVar1;
              uStack_48 = uStack_70;
              uStack_40 = local_68;
              local_88 = plVar10;
              if (uVar4 != uVar14) {
                puVar19 = (uint *)param_1[0xa3];
                if ((uint *)param_1[0xa3] == (uint *)0x0) {
                  puVar19 = puVar1;
                }
                uVar12 = puVar19[(int)uVar4 >> 5] & local_98;
                iVar5 = (int)uVar4 >> 5;
                while (uVar12 == 0) {
                  uVar18 = uVar18 + 0x20;
                  if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
                  goto LAB_1424ffc06;
                  uVar12 = puVar19[(longlong)iVar5 + 1];
                  local_98 = 0xffffffff;
                  iVar5 = iVar5 + 1;
                }
                uVar12 = -uVar12 & uVar12;
                iVar5 = 0x1f;
                if (uVar12 != 0) {
                  for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                  }
                }
                if (uVar12 == 0) {
                  iVar5 = 0x20;
                }
                else {
                  iVar5 = 0x1f - iVar5;
                }
                uStack_94 = (uVar18 - iVar5) + 0x1f;
                uVar4 = uStack_94;
                if ((int)uVar14 < (int)uStack_94) {
LAB_1424ffc06:
                  uStack_94 = uVar14;
                  uVar4 = uVar14;
                }
              }
              while( true ) {
                if ((uStack_70._4_4_ == uVar4) && (local_78 == puVar1)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if ((bVar2) && (local_88 == plVar10)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) break;
                (**(code **)(*param_1 + 0x710))
                          (param_1,*(undefined8 *)
                                    (*local_88 + (longlong)(int)uStack_70._4_4_ * 0x10));
                uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
              }
              *(undefined4 *)(param_1 + 0xa0) = 0;
              if (0x7fffffff < *(uint *)((longlong)param_1 + 0x504)) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar10,0);
              }
              *(undefined4 *)(param_1 + 0xa5) = 0xffffffff;
              *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
              iVar5 = (int)param_1[0xa4] + 0x1f;
              plVar10 = (longlong *)param_1[0xa3];
              if ((longlong *)param_1[0xa3] == (longlong *)0x0) {
                plVar10 = param_1 + 0xa1;
              }
              _guard_xfg_dispatch_icall_nop
                        (plVar10,0,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2);
              *(undefined4 *)(param_1 + 0xa4) = 0;
              if (0 < (int)*(uint *)(param_1 + 0xa8)) {
                uVar20 = (ulonglong)*(uint *)(param_1 + 0xa8);
                pfVar13 = pfVar17;
                do {
                  plVar10 = (longlong *)param_1[0xa7];
                  if ((longlong *)param_1[0xa7] == (longlong *)0x0) {
                    plVar10 = param_1 + 0xa6;
                  }
                  uVar8 = (longlong)(int)param_1[0xa8] - 1U & (ulonglong)pfVar13;
                  pfVar13 = (float *)((longlong)pfVar13 + 1);
                  *(undefined4 *)((longlong)plVar10 + uVar8 * 4) = 0xffffffff;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
            }
          }
          else {
            local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88);
            if ((param_1[0x8b] != 0) &&
               (lVar6 = *(longlong *)(param_1[0x8b] + 0x508),
               local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88), lVar6 != 0)) {
              lVar7 = ULocalPlayer::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88);
              if ((bVar2) &&
                 (local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88),
                 *(longlong *)(lVar6 + 0x70) != 0)) {
                local_a8 = (float *)0x0;
                uStack_a0 = (uint *)((ulonglong)uStack_a0 & 0xffffffff);
                cVar3 = FSlateApplication::IsFakingTouchEvents(DAT_1469f4590);
                pfVar15 = pfVar17;
                pfVar21 = pfVar17;
                pfVar13 = pfVar17;
                pfVar22 = pfVar17;
                if ((cVar3 == '\0') &&
                   (cVar3 = FUN_142480f40(*(undefined8 *)(lVar6 + 0x70),&local_res8),
                   pfVar15 = (float *)0x0, pfVar13 = (float *)0x0, cVar3 != '\0')) {
                  uStack_a0 = (uint *)CONCAT44(uStack_a0._4_4_,1);
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,0);
                  pfVar13 = (float *)((ulonglong)uStack_a0 >> 0x20);
                  pfVar15 = (float *)((ulonglong)uStack_a0 & 0xffffffff);
                  *(ulonglong *)local_a8 = CONCAT44(fStackX_c,local_res8);
                  pfVar21 = local_a8;
                }
                do {
                  local_res8 = (float)((uint)local_res8 & 0xffffff00);
                  FUN_14270ae80(param_1[0x8b],pfVar22,&local_res10,(longlong)&local_res10 + 4,
                                &local_res8);
                  if (local_res8._0_1_ != '\0') {
                    iVar5 = (int)pfVar15;
                    uVar14 = iVar5 + 1;
                    uStack_a0 = (uint *)CONCAT44(uStack_a0._4_4_,uVar14);
                    if ((int)pfVar13 < (int)uVar14) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (&local_a8,pfVar15);
                      pfVar13 = (float *)((ulonglong)uStack_a0 >> 0x20);
                      pfVar21 = local_a8;
                      uVar14 = (uint)uStack_a0;
                    }
                    pfVar15 = (float *)(ulonglong)uVar14;
                    *(undefined8 *)(pfVar21 + (longlong)iVar5 * 2) = local_res10;
                  }
                  uVar14 = (int)pfVar22 + 1;
                  pfVar22 = (float *)(ulonglong)uVar14;
                } while ((int)uVar14 < 0xb);
                FUN_1424f17d0(param_1,&local_res8);
                if ((local_res8 == 0.0) && (fStackX_c == 0.0)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (!bVar2) {
                  for (pfVar22 = pfVar21; pfVar22 != pfVar21 + (longlong)(int)pfVar15 * 2;
                      pfVar22 = pfVar22 + 2) {
                    *pfVar22 = local_res8 + *pfVar22;
                    pfVar22[1] = fStackX_c + pfVar22[1];
                  }
                }
                uStack_a0 = (uint *)CONCAT44((int)pfVar13,(int)pfVar15);
                local_a8 = pfVar21;
                FUN_14250bcf0(param_1,&local_a8);
              }
            }
          }
        }
      }
    }
    else {
      local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88);
      if (param_1[0x96] != 0) {
        lVar7 = UEngine::GetTinyFont();
        lVar6 = param_1[0x96];
        if ((lVar7 != 0) && (lVar7 != *(longlong *)(lVar6 + 0x1e0))) {
          *(longlong *)(lVar6 + 0x1e0) = lVar7;
          uVar23 = FUN_14244fa00(lVar7);
          *(undefined4 *)(lVar6 + 0x24c) = uVar23;
        }
        *(longlong *)(lVar6 + 600) = lVar6;
        *(undefined4 *)(lVar6 + 0x250) = 0x40800000;
        *(undefined4 *)(lVar6 + 0x254) = 0x42480000;
        *(undefined4 *)(lVar6 + 0x240) = 0x40800000;
        *(undefined8 *)(lVar6 + 0x244) = 0x42480000;
        (**(code **)(*param_1 + 0x748))(param_1,param_1[0x96] + 0x24c,param_1[0x96] + 0x244);
        local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88);
      }
    }
    if ((*(byte *)(param_1 + 0x8d) & 1) != 0) {
      lVar6 = param_1[0x9b];
      lVar7 = (longlong)(int)param_1[0x9c] * 0x20 + lVar6;
      uVar9 = *(undefined8 *)(param_1[0x95] + 0x260);
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x20) {
        plVar11 = (longlong *)param_1[0x9d];
        plVar10 = plVar11 + (int)param_1[0x9e];
        local_a8 = (float *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
        uStack_a0 = (uint *)CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
        for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
          if (*plVar11 == lVar6) {
            local_a8 = (float *)CONCAT44(uRam00000001464aa6f4,_DAT_1464aa6f0);
            uStack_a0 = (uint *)CONCAT44(uRam00000001464aa6fc,uRam00000001464aa6f8);
            break;
          }
        }
        FUN_14244aaf0(lVar6,uVar9,&local_a8);
      }
    }
    (**(code **)(*param_1 + 0x720))(param_1);
    bVar2 = false;
    DAT_14653315c = DAT_14653315c + 1;
    lVar6 = param_1[0x96];
    lVar7 = (longlong)(DAT_146533150 + -1);
    if (-1 < DAT_146533150 + -1) {
      lVar16 = lVar7 << 4;
      bVar2 = false;
      do {
        if ((*(int *)(lVar16 + 8 + DAT_146533148) == 0) ||
           (plVar10 = *(longlong **)(lVar16 + DAT_146533148), plVar10 == (longlong *)0x0)) {
LAB_1424ffdf6:
          bVar2 = true;
        }
        else {
          cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,param_1,lVar6);
          if (cVar3 == '\0') goto LAB_1424ffdf6;
        }
        lVar16 = lVar16 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    iVar5 = DAT_146533150;
    DAT_14653315c = DAT_14653315c + -1;
    if ((bVar2) && (DAT_14653315c < 1)) {
      pfVar13 = pfVar17;
      if (0 < DAT_146533150) {
        do {
          if ((*(int *)((longlong)pfVar17 + DAT_146533148 + 8) == 0) ||
             (*(longlong **)((longlong)pfVar17 + DAT_146533148) == (longlong *)0x0)) {
LAB_1424ffe6b:
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533148,pfVar13,1,1);
          }
          else {
            cVar3 = (**(code **)(**(longlong **)((longlong)pfVar17 + DAT_146533148) + 0x10))();
            if (cVar3 != '\0') goto LAB_1424ffe6b;
            pfVar13 = (float *)(ulonglong)((int)pfVar13 + 1);
            pfVar17 = pfVar17 + 4;
          }
        } while ((int)pfVar13 < DAT_146533150);
      }
      _DAT_146533158 = DAT_146533150 * 2;
      if (_DAT_146533158 < 3) {
        _DAT_146533158 = 2;
      }
      if ((_DAT_146533158 < iVar5) && (DAT_146533154 != DAT_146533150)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533148);
      }
    }
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar6 + 0x790);
  }
  return;
}



// FUNCTION 1424fff40 FUN_1424fff40 body=23 status=ok
// SIG undefined FUN_1424fff40(void)

void FUN_1424fff40(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  param_2 = param_2 + *(int *)(param_1 + 0x7b0);
  if (*(int *)(param_1 + 0x7b4) < param_2) {
    iVar3 = 0;
    if (param_2 != 0) {
      uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x30,0);
      iVar3 = (int)(uVar1 / 0x30);
      if (iVar3 < param_2) {
        iVar3 = 0x7fffffff;
      }
    }
    if (iVar3 != *(int *)(param_1 + 0x7b4)) {
      *(int *)(param_1 + 0x7b4) = iVar3;
      lVar2 = *(longlong *)(param_1 + 0x7a8);
      if ((lVar2 != 0) || (iVar3 != 0)) {
        lVar2 = FMemory::Realloc(lVar2,(longlong)iVar3 * 0x30,0);
        *(longlong *)(param_1 + 0x7a8) = lVar2;
      }
    }
    return;
  }
  return;
}



// FUNCTION 1424fff60 PreloadAll body=284 status=ok
// SIG undefined PreloadAll(void)

void UInheritableComponentHandler::PreloadAll
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_28 [16];
  longlong local_18;
  
  if (((*(uint *)(param_1 + 8) >> 10 & 1) != 0) && (lVar1 = FUN_1417a53c0(), lVar1 != 0)) {
    FUN_141740c00(lVar1 + 0x200,param_1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x30) * 0x10;
  if (puVar3 != puVar4) {
    puVar5 = puVar3 + 2;
    do {
      lVar1 = puVar5[-1];
      FBlueprintCookedComponentInstancingData::FBlueprintCookedComponentInstancingData
                (local_58,puVar5 + 4,param_3,param_4,*puVar3,lVar1,*(undefined4 *)puVar5,
                 *(undefined4 *)(puVar5 + 1),*(undefined4 *)(puVar5 + 2),*(undefined4 *)(puVar5 + 3)
                );
      if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 10 & 1) != 0)) &&
         (lVar2 = FUN_1417a53c0(lVar1), lVar2 != 0)) {
        FUN_141740c00(lVar2 + 0x200,lVar1);
      }
      if (local_18 != 0) {
        FMemory::Free();
      }
      TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
      ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(local_28);
      if (local_50 != 0) {
        FMemory::Free();
      }
      puVar3 = puVar3 + 0x10;
      puVar5 = puVar5 + 0x10;
    } while (puVar3 != puVar4);
  }
  return;
}



// FUNCTION 142500080 PreviewStopPlayback body=40 status=ok
// SIG undefined PreviewStopPlayback(void)

void UInterpTrackSound::PreviewStopPlayback(longlong param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x560))();
  }
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xffffffdf;
  return;
}



// FUNCTION 1425000b0 FUN_1425000b0 body=338 status=ok
// SIG undefined FUN_1425000b0(void)

void FUN_1425000b0(longlong param_1,float param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  float fVar7;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined1 *puVar8;
  undefined4 uVar9;
  longlong local_48 [6];
  
  if ((*(longlong **)(param_3 + 0x20) != (longlong *)0x0) &&
     (lVar3 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x278))(), lVar3 != 0)) {
    uVar2 = UInterpTrackAnimControl::CalcChannelIndex(param_1);
    local_48[0] = 0;
    if (((~*(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x20) + 0x20) + 0x4b8) & 1) != 0) ||
       (param_2 < *(float *)(param_3 + 0x28))) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = param_2 - *(float *)(param_3 + 0x28);
    }
    puVar8 = local_res18;
    cVar1 = UInterpTrackAnimControl::GetAnimForTime(param_1,param_2,local_48,local_res20,puVar8);
    uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
    if (local_48[0] != 0) {
      if (((*(byte *)(param_1 + 0xa8) & 1) == 0) && (cVar1 == '\0')) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      uVar4 = UMatineeAnimInterface::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x18))
                  (plVar5,*(undefined8 *)(param_1 + 0x90),uVar2,local_48[0],
                   CONCAT44(uVar9,local_res20[0]),local_res18[0],uVar6,fVar7);
      }
      *(float *)(param_3 + 0x28) = param_2;
    }
  }
  return;
}



// FUNCTION 142500210 FUN_142500210 body=147 status=ok
// SIG undefined FUN_142500210(void)

void FUN_142500210(longlong *param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if ((char)param_1[0x15] != '\0') {
    if (param_3 != 0) {
      lVar2 = UInterpTrackInstFloatAnimBPParam::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_1425023d0(param_3,param_1);
      }
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014250029c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 1425002b0 FUN_1425002b0 body=228 status=ok
// SIG undefined FUN_1425002b0(void)

void FUN_1425002b0(longlong *param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  if (0 < (int)param_1[0x13]) {
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x20);
    if (((*(float *)(*(longlong *)(param_1[4] + 0x20) + 0x28) <= param_2) &&
        ((*(byte *)(param_1 + 0x14) & 2) == 0)) &&
       (*(longlong **)(param_3 + 0x30) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x568))();
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_3 + 0x30) + 0x560))();
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffdf;
      }
    }
    if ((param_2 < *(float *)(lVar1 + 0x4bc)) && ((*(byte *)(lVar1 + 0x4b8) & 1) != 0)) {
      if (*(longlong **)(param_3 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_3 + 0x30) + 0x560))();
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffdf;
      *(float *)(param_3 + 0x28) = param_2 - 0.1;
    }
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3,~*(byte *)(lVar1 + 0x4b8) & 1);
  }
  return;
}



// FUNCTION 1425003a0 FUN_1425003a0 body=236 status=ok
// SIG undefined FUN_1425003a0(void)

void FUN_1425003a0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x758))(param_1,&local_18);
  lVar2 = param_1[0x9a];
  if (lVar2 != 0) {
    iVar3 = *(int *)((longlong)param_1 + 0x464);
    if (((iVar3 < 0) || ((int)local_10 <= iVar3)) || (local_18[iVar3] != lVar2)) {
      for (plVar4 = local_18; plVar4 != local_18 + (int)local_10; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar2) {
          iVar3 = (int)((longlong)plVar4 - (longlong)local_18 >> 3);
          if (iVar3 != -1) {
            *(int *)((longlong)param_1 + 0x464) = iVar3;
          }
          break;
        }
      }
    }
  }
  piVar1 = (int *)((longlong)param_1 + 0x464);
  *piVar1 = *piVar1 + -1;
  iVar3 = *(int *)((longlong)param_1 + 0x464);
  if (*piVar1 < 0) {
    iVar3 = (int)local_10 + -1;
    *(int *)((longlong)param_1 + 0x464) = iVar3;
  }
  if ((iVar3 < 0) || ((int)local_10 <= iVar3)) {
    if ((*(longlong *)(param_1[0x8b] + 0x528) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1[0x8b] + 0x528) + 0x1190), lVar2 != 0)) {
      param_1[0x9a] = lVar2;
    }
  }
  else {
    param_1[0x9a] = local_18[iVar3];
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 142500490 FUN_142500490 body=119 status=ok
// SIG undefined FUN_142500490(void)

undefined8 * FUN_142500490(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar1 = FUN_1424fd5d0();
  if (cVar1 != '\0') {
    local_18 = *param_3;
    local_10 = *(undefined4 *)(param_3 + 1);
    UCanvas::Project(*(undefined8 *)(param_1 + 0x4a8),param_2,&local_18,0);
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 142500510 FUN_142500510 body=99 status=ok
// SIG undefined FUN_142500510(void)

void FUN_142500510(longlong *param_1)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1 + 0x17) & 3) == 3) {
    (**(code **)(*param_1 + 0x300))();
    plVar1 = param_1;
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  *(int *)((longlong)param_1 + 0x80c) = *(int *)((longlong)param_1 + 0x80c) + 1;
  FUN_1423424e0(param_1);
  if (((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x17) & 2) == 0)) &&
     ((*(byte *)(plVar1 + 0x17) & 1) != 0)) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1);
  }
  return;
}



// FUNCTION 142500580 Push body=74 status=ok
// SIG undefined Push(void)

void FInstancedPropertyPath::Push(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uStack_c;
  
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = CONCAT44(uStack_c,param_3);
  return;
}



// FUNCTION 1425005d0 RecalculateTangents body=2984 status=ok
// SIG undefined RecalculateTangents(void)

void MatineeKeyReduction::MCurve<FTwoVectors,6>::RecalculateTangents(longlong *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  
  lVar4 = *param_1;
  pfVar9 = (float *)0x0;
  iVar15 = (int)param_1[1] + -1;
  iVar6 = param_2 + -1;
  if (param_2 < 1) {
    iVar6 = 0;
  }
  pfVar18 = (float *)((longlong)iVar6 * 0x50 + lVar4);
  pfVar12 = (float *)((longlong)param_2 * 0x50 + lVar4);
  iVar6 = param_2 + 1;
  if (iVar15 <= param_2) {
    iVar6 = iVar15;
  }
  pfVar1 = pfVar12 + 7;
  pfVar2 = pfVar12 + 0xd;
  pfVar17 = (float *)((longlong)iVar6 * 0x50 + lVar4);
  if (((*(char *)(pfVar12 + 0x13) != '\x04') || (param_2 == 0)) || (param_2 == iVar15)) {
    do {
      iVar6 = (int)pfVar9;
      if (iVar6 == 0) {
        pfVar9 = pfVar12 + 1;
      }
      else if (iVar6 == 1) {
        pfVar9 = pfVar12 + 4;
      }
      else if (iVar6 == 2) {
        pfVar9 = pfVar12 + 2;
      }
      else if (iVar6 == 3) {
        pfVar9 = pfVar12 + 5;
      }
      else if (iVar6 == 4) {
        pfVar9 = pfVar12 + 3;
      }
      else {
        pfVar9 = pfVar12 + 6;
      }
      if (iVar6 == 0) {
        pfVar11 = pfVar17 + 1;
      }
      else if (iVar6 == 1) {
        pfVar11 = pfVar17 + 4;
      }
      else if (iVar6 == 2) {
        pfVar11 = pfVar17 + 2;
      }
      else if (iVar6 == 3) {
        pfVar11 = pfVar17 + 5;
      }
      else if (iVar6 == 4) {
        pfVar11 = pfVar17 + 3;
      }
      else {
        pfVar11 = pfVar17 + 6;
      }
      if (*pfVar9 <= *pfVar11 && *pfVar11 != *pfVar9) {
LAB_142500e70:
        if (iVar6 == 0) {
          pfVar9 = pfVar12 + 1;
        }
        else if (iVar6 == 1) {
          pfVar9 = pfVar12 + 4;
        }
        else if (iVar6 == 2) {
          pfVar9 = pfVar12 + 2;
        }
        else if (iVar6 == 3) {
          pfVar9 = pfVar12 + 5;
        }
        else if (iVar6 == 4) {
          pfVar9 = pfVar12 + 3;
        }
        else {
          pfVar9 = pfVar12 + 6;
        }
        if (iVar6 == 0) {
          pfVar11 = pfVar17 + 1;
        }
        else if (iVar6 == 1) {
          pfVar11 = pfVar17 + 4;
        }
        else if (iVar6 == 2) {
          pfVar11 = pfVar17 + 2;
        }
        else if (iVar6 == 3) {
          pfVar11 = pfVar17 + 5;
        }
        else if (iVar6 == 4) {
          pfVar11 = pfVar17 + 3;
        }
        else {
          pfVar11 = pfVar17 + 6;
        }
        if (*pfVar9 <= *pfVar11) {
          if (iVar6 == 0) {
            pfVar9 = pfVar12 + 1;
          }
          else if (iVar6 == 1) {
            pfVar9 = pfVar12 + 4;
          }
          else if (iVar6 == 2) {
            pfVar9 = pfVar12 + 2;
          }
          else if (iVar6 == 3) {
            pfVar9 = pfVar12 + 5;
          }
          else if (iVar6 == 4) {
            pfVar9 = pfVar12 + 3;
          }
          else {
            pfVar9 = pfVar12 + 6;
          }
          if (iVar6 == 0) {
            pfVar11 = pfVar18 + 1;
          }
          else if (iVar6 == 1) {
            pfVar11 = pfVar18 + 4;
          }
          else if (iVar6 == 2) {
            pfVar11 = pfVar18 + 2;
          }
          else if (iVar6 == 3) {
            pfVar11 = pfVar18 + 5;
          }
          else if (iVar6 == 4) {
            pfVar11 = pfVar18 + 3;
          }
          else {
            pfVar11 = pfVar18 + 6;
          }
          if (*pfVar9 <= *pfVar11) goto LAB_142500f90;
        }
        if (iVar6 == 0) {
          pfVar9 = pfVar17 + 1;
        }
        else if (iVar6 == 1) {
          pfVar9 = pfVar17 + 4;
        }
        else if (iVar6 == 2) {
          pfVar9 = pfVar17 + 2;
        }
        else if (iVar6 == 3) {
          pfVar9 = pfVar17 + 5;
        }
        else if (iVar6 == 4) {
          pfVar9 = pfVar17 + 3;
        }
        else {
          pfVar9 = pfVar17 + 6;
        }
        if (iVar6 == 0) {
          pfVar11 = pfVar18 + 1;
        }
        else if (iVar6 == 1) {
          pfVar11 = pfVar18 + 4;
        }
        else if (iVar6 == 2) {
          pfVar11 = pfVar18 + 2;
        }
        else if (iVar6 == 3) {
          pfVar11 = pfVar18 + 5;
        }
        else if (iVar6 == 4) {
          pfVar11 = pfVar18 + 3;
        }
        else {
          pfVar11 = pfVar18 + 6;
        }
        fVar19 = (*pfVar9 - *pfVar11) / (*pfVar17 - *pfVar18);
        pfVar9 = pfVar2;
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            pfVar9 = pfVar12 + 0x10;
          }
          else if (iVar6 == 2) {
            pfVar9 = pfVar12 + 0xe;
          }
          else if (iVar6 == 3) {
            pfVar9 = pfVar12 + 0x11;
          }
          else if (iVar6 == 4) {
            pfVar9 = pfVar12 + 0xf;
          }
          else {
            pfVar9 = pfVar12 + 0x12;
          }
        }
        *pfVar9 = fVar19;
        pfVar9 = pfVar1;
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            pfVar9 = pfVar12 + 10;
          }
          else if (iVar6 == 2) {
            pfVar9 = pfVar12 + 8;
          }
          else if (iVar6 == 3) {
            pfVar9 = pfVar12 + 0xb;
          }
          else if (iVar6 == 4) {
            pfVar9 = pfVar12 + 9;
          }
          else {
            pfVar9 = pfVar12 + 0xc;
          }
        }
        *pfVar9 = fVar19;
      }
      else {
        if (iVar6 == 0) {
          pfVar9 = pfVar12 + 1;
        }
        else if (iVar6 == 1) {
          pfVar9 = pfVar12 + 4;
        }
        else if (iVar6 == 2) {
          pfVar9 = pfVar12 + 2;
        }
        else if (iVar6 == 3) {
          pfVar9 = pfVar12 + 5;
        }
        else if (iVar6 == 4) {
          pfVar9 = pfVar12 + 3;
        }
        else {
          pfVar9 = pfVar12 + 6;
        }
        if (iVar6 == 0) {
          pfVar11 = pfVar18 + 1;
        }
        else if (iVar6 == 1) {
          pfVar11 = pfVar18 + 4;
        }
        else if (iVar6 == 2) {
          pfVar11 = pfVar18 + 2;
        }
        else if (iVar6 == 3) {
          pfVar11 = pfVar18 + 5;
        }
        else if (iVar6 == 4) {
          pfVar11 = pfVar18 + 3;
        }
        else {
          pfVar11 = pfVar18 + 6;
        }
        if (*pfVar9 <= *pfVar11 && *pfVar11 != *pfVar9) goto LAB_142500e70;
LAB_142500f90:
        pfVar9 = pfVar2;
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            pfVar9 = pfVar12 + 0x10;
          }
          else if (iVar6 == 2) {
            pfVar9 = pfVar12 + 0xe;
          }
          else if (iVar6 == 3) {
            pfVar9 = pfVar12 + 0x11;
          }
          else if (iVar6 == 4) {
            pfVar9 = pfVar12 + 0xf;
          }
          else {
            pfVar9 = pfVar12 + 0x12;
          }
        }
        *pfVar9 = 0.0;
        if (iVar6 == 0) {
          *pfVar1 = 0.0;
        }
        else if (iVar6 == 1) {
          pfVar12[10] = 0.0;
        }
        else if (iVar6 == 2) {
          pfVar12[8] = 0.0;
        }
        else if (iVar6 == 3) {
          pfVar12[0xb] = 0.0;
        }
        else if (iVar6 == 4) {
          pfVar12[9] = 0.0;
        }
        else {
          pfVar12[0xc] = 0.0;
        }
      }
      pfVar9 = (float *)(ulonglong)(iVar6 + 1U);
      if (5 < (int)(iVar6 + 1U)) {
        return;
      }
    } while( true );
  }
  iVar6 = (int)param_1[4];
  uVar14 = (ulonglong)iVar6;
  fVar19 = *pfVar12;
  pfVar11 = pfVar9;
  if (iVar6 < 8) {
    if (0 < iVar6) {
      pfVar7 = pfVar9;
      pfVar13 = (float *)param_1[3];
      pfVar8 = pfVar9;
      do {
        if ((-0.001 < *pfVar13 - fVar19) && (*pfVar13 - fVar19 < 0.001)) {
          pfVar11 = (float *)param_1[3] + (longlong)(int)pfVar8 * 9;
          break;
        }
        pfVar8 = (float *)(ulonglong)((int)pfVar8 + 1);
        pfVar7 = (float *)((longlong)pfVar7 + 1);
        pfVar13 = pfVar13 + 9;
      } while ((longlong)pfVar7 < (longlong)uVar14);
    }
  }
  else if (0 < iVar6) {
    pfVar7 = pfVar9;
    do {
      uVar16 = iVar6 / 2;
      fVar3 = *(float *)(param_1[3] + (longlong)(int)uVar16 * 0x24);
      if ((-0.001 < fVar3 - fVar19) &&
         (pfVar11 = (float *)(param_1[3] + (longlong)(int)uVar16 * 0x24), fVar3 - fVar19 < 0.001))
      break;
      uVar5 = uVar16;
      if (fVar3 <= fVar19) {
        uVar5 = (uint)uVar14;
      }
      uVar14 = (ulonglong)uVar5;
      if (fVar3 <= fVar19) {
        pfVar7 = (float *)(ulonglong)(uVar16 + 1);
      }
      iVar6 = (int)pfVar7 + uVar5;
      pfVar11 = pfVar9;
    } while ((int)pfVar7 < (int)uVar5);
  }
  pfVar7 = pfVar12 + 1;
  pfVar13 = pfVar9;
  do {
    iVar6 = (int)pfVar9;
    if (*(char *)((longlong)pfVar11 + 0x1d + (longlong)pfVar13) == '\0') {
      pfVar9 = pfVar7;
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          pfVar9 = pfVar12 + 4;
        }
        else if (iVar6 == 2) {
          pfVar9 = pfVar12 + 2;
        }
        else if (iVar6 == 3) {
          pfVar9 = pfVar12 + 5;
        }
        else if (iVar6 == 4) {
          pfVar9 = pfVar12 + 3;
        }
        else {
          pfVar9 = pfVar12 + 6;
        }
      }
      if (iVar6 == 0) {
        pfVar8 = pfVar18 + 1;
      }
      else if (iVar6 == 1) {
        pfVar8 = pfVar18 + 4;
      }
      else if (iVar6 == 2) {
        pfVar8 = pfVar18 + 2;
      }
      else if (iVar6 == 3) {
        pfVar8 = pfVar18 + 5;
      }
      else if (iVar6 == 4) {
        pfVar8 = pfVar18 + 3;
      }
      else {
        pfVar8 = pfVar18 + 6;
      }
      pfVar10 = pfVar1;
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          pfVar10 = pfVar12 + 10;
        }
        else if (iVar6 == 2) {
          pfVar10 = pfVar12 + 8;
        }
        else if (iVar6 == 3) {
          pfVar10 = pfVar12 + 0xb;
        }
        else if (iVar6 == 4) {
          pfVar10 = pfVar12 + 9;
        }
        else {
          pfVar10 = pfVar12 + 0xc;
        }
      }
      *pfVar10 = *pfVar9 - *pfVar8;
      if (iVar6 == 0) {
        pfVar9 = pfVar17 + 1;
      }
      else if (iVar6 == 1) {
        pfVar9 = pfVar17 + 4;
      }
      else if (iVar6 == 2) {
        pfVar9 = pfVar17 + 2;
      }
      else if (iVar6 == 3) {
        pfVar9 = pfVar17 + 5;
      }
      else if (iVar6 == 4) {
        pfVar9 = pfVar17 + 3;
      }
      else {
        pfVar9 = pfVar17 + 6;
      }
      pfVar8 = pfVar7;
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          pfVar8 = pfVar12 + 4;
        }
        else if (iVar6 == 2) {
          pfVar8 = pfVar12 + 2;
        }
        else if (iVar6 == 3) {
          pfVar8 = pfVar12 + 5;
        }
        else if (iVar6 == 4) {
          pfVar8 = pfVar12 + 3;
        }
        else {
          pfVar8 = pfVar12 + 6;
        }
      }
      pfVar10 = pfVar2;
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          pfVar10 = pfVar12 + 0x10;
        }
        else if (iVar6 == 2) {
          pfVar10 = pfVar12 + 0xe;
        }
        else if (iVar6 == 3) {
          pfVar10 = pfVar12 + 0x11;
        }
        else if (iVar6 == 4) {
          pfVar10 = pfVar12 + 0xf;
        }
        else {
          pfVar10 = pfVar12 + 0x12;
        }
      }
      *pfVar10 = *pfVar9 - *pfVar8;
    }
    else {
      pfVar9 = pfVar7;
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          pfVar9 = pfVar12 + 4;
        }
        else if (iVar6 == 2) {
          pfVar9 = pfVar12 + 2;
        }
        else if (iVar6 == 3) {
          pfVar9 = pfVar12 + 5;
        }
        else if (iVar6 == 4) {
          pfVar9 = pfVar12 + 3;
        }
        else {
          pfVar9 = pfVar12 + 6;
        }
      }
      if (iVar6 == 0) {
        pfVar8 = pfVar17 + 1;
      }
      else if (iVar6 == 1) {
        pfVar8 = pfVar17 + 4;
      }
      else if (iVar6 == 2) {
        pfVar8 = pfVar17 + 2;
      }
      else if (iVar6 == 3) {
        pfVar8 = pfVar17 + 5;
      }
      else if (iVar6 == 4) {
        pfVar8 = pfVar17 + 3;
      }
      else {
        pfVar8 = pfVar17 + 6;
      }
      if (*pfVar9 <= *pfVar8 && *pfVar8 != *pfVar9) {
LAB_142500879:
        pfVar9 = pfVar7;
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            pfVar9 = pfVar12 + 4;
          }
          else if (iVar6 == 2) {
            pfVar9 = pfVar12 + 2;
          }
          else if (iVar6 == 3) {
            pfVar9 = pfVar12 + 5;
          }
          else if (iVar6 == 4) {
            pfVar9 = pfVar12 + 3;
          }
          else {
            pfVar9 = pfVar12 + 6;
          }
        }
        if (iVar6 == 0) {
          pfVar8 = pfVar17 + 1;
        }
        else if (iVar6 == 1) {
          pfVar8 = pfVar17 + 4;
        }
        else if (iVar6 == 2) {
          pfVar8 = pfVar17 + 2;
        }
        else if (iVar6 == 3) {
          pfVar8 = pfVar17 + 5;
        }
        else if (iVar6 == 4) {
          pfVar8 = pfVar17 + 3;
        }
        else {
          pfVar8 = pfVar17 + 6;
        }
        if (*pfVar9 <= *pfVar8) {
          pfVar9 = pfVar7;
          if (iVar6 != 0) {
            if (iVar6 == 1) {
              pfVar9 = pfVar12 + 4;
            }
            else if (iVar6 == 2) {
              pfVar9 = pfVar12 + 2;
            }
            else if (iVar6 == 3) {
              pfVar9 = pfVar12 + 5;
            }
            else if (iVar6 == 4) {
              pfVar9 = pfVar12 + 3;
            }
            else {
              pfVar9 = pfVar12 + 6;
            }
          }
          if (iVar6 == 0) {
            pfVar8 = pfVar18 + 1;
          }
          else if (iVar6 == 1) {
            pfVar8 = pfVar18 + 4;
          }
          else if (iVar6 == 2) {
            pfVar8 = pfVar18 + 2;
          }
          else if (iVar6 == 3) {
            pfVar8 = pfVar18 + 5;
          }
          else if (iVar6 == 4) {
            pfVar8 = pfVar18 + 3;
          }
          else {
            pfVar8 = pfVar18 + 6;
          }
          if (*pfVar9 <= *pfVar8) goto LAB_142500997;
        }
        if (iVar6 == 0) {
          pfVar9 = pfVar17 + 1;
        }
        else if (iVar6 == 1) {
          pfVar9 = pfVar17 + 4;
        }
        else if (iVar6 == 2) {
          pfVar9 = pfVar17 + 2;
        }
        else if (iVar6 == 3) {
          pfVar9 = pfVar17 + 5;
        }
        else if (iVar6 == 4) {
          pfVar9 = pfVar17 + 3;
        }
        else {
          pfVar9 = pfVar17 + 6;
        }
        if (iVar6 == 0) {
          pfVar8 = pfVar18 + 1;
        }
        else if (iVar6 == 1) {
          pfVar8 = pfVar18 + 4;
        }
        else if (iVar6 == 2) {
          pfVar8 = pfVar18 + 2;
        }
        else if (iVar6 == 3) {
          pfVar8 = pfVar18 + 5;
        }
        else if (iVar6 == 4) {
          pfVar8 = pfVar18 + 3;
        }
        else {
          pfVar8 = pfVar18 + 6;
        }
        fVar19 = (*pfVar9 - *pfVar8) / (*pfVar17 - *pfVar18);
        pfVar9 = pfVar2;
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            pfVar9 = pfVar12 + 0x10;
          }
          else if (iVar6 == 2) {
            pfVar9 = pfVar12 + 0xe;
          }
          else if (iVar6 == 3) {
            pfVar9 = pfVar12 + 0x11;
          }
          else if (iVar6 == 4) {
            pfVar9 = pfVar12 + 0xf;
          }
          else {
            pfVar9 = pfVar12 + 0x12;
          }
        }
        *pfVar9 = fVar19;
        if (iVar6 == 0) {
          *pfVar1 = fVar19;
        }
        else if (iVar6 == 1) {
          pfVar12[10] = fVar19;
        }
        else if (iVar6 == 2) {
          pfVar12[8] = fVar19;
        }
        else if (iVar6 == 3) {
          pfVar12[0xb] = fVar19;
        }
        else if (iVar6 == 4) {
          pfVar12[9] = fVar19;
        }
        else {
          pfVar12[0xc] = fVar19;
        }
      }
      else {
        pfVar9 = pfVar7;
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            pfVar9 = pfVar12 + 4;
          }
          else if (iVar6 == 2) {
            pfVar9 = pfVar12 + 2;
          }
          else if (iVar6 == 3) {
            pfVar9 = pfVar12 + 5;
          }
          else if (iVar6 == 4) {
            pfVar9 = pfVar12 + 3;
          }
          else {
            pfVar9 = pfVar12 + 6;
          }
        }
        if (iVar6 == 0) {
          pfVar8 = pfVar18 + 1;
        }
        else if (iVar6 == 1) {
          pfVar8 = pfVar18 + 4;
        }
        else if (iVar6 == 2) {
          pfVar8 = pfVar18 + 2;
        }
        else if (iVar6 == 3) {
          pfVar8 = pfVar18 + 5;
        }
        else if (iVar6 == 4) {
          pfVar8 = pfVar18 + 3;
        }
        else {
          pfVar8 = pfVar18 + 6;
        }
        if (*pfVar9 <= *pfVar8 && *pfVar8 != *pfVar9) goto LAB_142500879;
LAB_142500997:
        pfVar9 = pfVar2;
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            pfVar9 = pfVar12 + 0x10;
          }
          else if (iVar6 == 2) {
            pfVar9 = pfVar12 + 0xe;
          }
          else if (iVar6 == 3) {
            pfVar9 = pfVar12 + 0x11;
          }
          else if (iVar6 == 4) {
            pfVar9 = pfVar12 + 0xf;
          }
          else {
            pfVar9 = pfVar12 + 0x12;
          }
        }
        *pfVar9 = 0.0;
        if (iVar6 == 0) {
          *pfVar1 = 0.0;
        }
        else if (iVar6 == 1) {
          pfVar12[10] = 0.0;
        }
        else if (iVar6 == 2) {
          pfVar12[8] = 0.0;
        }
        else if (iVar6 == 3) {
          pfVar12[0xb] = 0.0;
        }
        else if (iVar6 == 4) {
          pfVar12[9] = 0.0;
        }
        else {
          pfVar12[0xc] = 0.0;
        }
      }
    }
    pfVar9 = (float *)(ulonglong)(iVar6 + 1U);
    pfVar13 = (float *)((longlong)pfVar13 + 1);
    if (5 < (int)(iVar6 + 1U)) {
      return;
    }
  } while( true );
}



// FUNCTION 142501180 RecalculateTangents body=487 status=ok
// SIG undefined RecalculateTangents(void)

void MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::RecalculateTangents
               (longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  float fVar15;
  
  lVar2 = *param_1;
  iVar13 = (int)param_1[1] + -1;
  pfVar10 = (float *)0x0;
  iVar4 = param_2 + -1;
  if (param_2 < 1) {
    iVar4 = 0;
  }
  lVar5 = (longlong)iVar4;
  lVar6 = (longlong)param_2;
  iVar4 = param_2 + 1;
  if (iVar13 <= param_2) {
    iVar4 = iVar13;
  }
  lVar7 = (longlong)iVar4;
  if (((*(char *)(lVar2 + 0x10 + lVar6 * 0x14) == '\x04') && (param_2 != 0)) && (param_2 != iVar13))
  {
    iVar4 = (int)param_1[4];
    uVar14 = (ulonglong)iVar4;
    fVar15 = *(float *)(lVar2 + lVar6 * 0x14);
    pfVar9 = pfVar10;
    if (iVar4 < 8) {
      if (0 < iVar4) {
        pfVar8 = (float *)param_1[3];
        pfVar11 = pfVar10;
        do {
          if ((-0.001 < *pfVar8 - fVar15) && (*pfVar8 - fVar15 < 0.001)) {
            pfVar9 = (float *)param_1[3] + (longlong)(int)pfVar11 * 3;
            break;
          }
          pfVar11 = (float *)(ulonglong)((int)pfVar11 + 1);
          pfVar10 = (float *)((longlong)pfVar10 + 1);
          pfVar8 = pfVar8 + 3;
        } while ((longlong)pfVar10 < (longlong)uVar14);
      }
    }
    else if (0 < iVar4) {
      pfVar8 = pfVar10;
      do {
        uVar12 = iVar4 / 2;
        fVar1 = *(float *)(param_1[3] + (longlong)(int)uVar12 * 0xc);
        if ((-0.001 < fVar1 - fVar15) &&
           (pfVar9 = (float *)(param_1[3] + (longlong)(int)uVar12 * 0xc), fVar1 - fVar15 < 0.001))
        break;
        uVar3 = uVar12;
        if (fVar1 <= fVar15) {
          uVar3 = (uint)uVar14;
        }
        uVar14 = (ulonglong)uVar3;
        if (fVar1 <= fVar15) {
          pfVar8 = (float *)(ulonglong)(uVar12 + 1);
        }
        iVar4 = uVar3 + (int)pfVar8;
        pfVar9 = pfVar10;
      } while ((int)pfVar8 < (int)uVar3);
    }
    fVar15 = *(float *)(lVar2 + 4 + lVar6 * 0x14);
    if (*(char *)((longlong)pfVar9 + 9) == '\0') {
      *(float *)(lVar2 + 8 + lVar6 * 0x14) = fVar15 - *(float *)(lVar2 + 4 + lVar5 * 0x14);
      *(float *)(lVar2 + 0xc + lVar6 * 0x14) =
           *(float *)(lVar2 + 4 + lVar7 * 0x14) - *(float *)(lVar2 + 4 + lVar6 * 0x14);
      return;
    }
  }
  else {
    fVar15 = *(float *)(lVar2 + 4 + lVar6 * 0x14);
  }
  fVar1 = *(float *)(lVar2 + 4 + lVar7 * 0x14);
  if (fVar15 < fVar1) {
LAB_14250132d:
    pfVar10 = (float *)(lVar2 + 4 + lVar5 * 0x14);
    if (*pfVar10 <= fVar15 && fVar15 != *pfVar10) {
LAB_14250133a:
      fVar15 = (fVar1 - *(float *)(lVar2 + 4 + lVar5 * 0x14)) /
               (*(float *)(lVar2 + lVar7 * 0x14) - *(float *)(lVar2 + lVar5 * 0x14));
      goto LAB_142501351;
    }
  }
  else if (fVar15 < *(float *)(lVar2 + 4 + lVar5 * 0x14)) {
    if (fVar15 <= fVar1) goto LAB_14250132d;
    goto LAB_14250133a;
  }
  fVar15 = 0.0;
LAB_142501351:
  *(float *)(lVar2 + 0xc + lVar6 * 0x14) = fVar15;
  *(float *)(lVar2 + 8 + lVar6 * 0x14) = fVar15;
  return;
}



// FUNCTION 142501370 RedirectAndLoadStringTableAssetImpl body=409 status=ok
// SIG undefined RedirectAndLoadStringTableAssetImpl(void)

void FStringTableEngineBridge::RedirectAndLoadStringTableAssetImpl
               (longlong param_1,undefined8 *param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_28;
  longlong local_20;
  
  FUN_1424f0da0(&local_28,*param_2);
  if (local_28 == 0) goto LAB_1425014e6;
  lVar5 = FUN_141796df0(&local_28);
  if (lVar5 == 0) {
LAB_142501409:
    if (param_3 == '\0') goto LAB_1425014e6;
LAB_142501411:
    lVar5 = FSoftObjectPath::TryLoad(&local_28);
    if (lVar5 == 0) goto LAB_1425014e6;
    lVar6 = UStringTable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1425014e6;
  }
  else {
    lVar6 = UStringTable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142501409;
    if (((*(uint *)(lVar5 + 8) & 0x1400) != 0) && (param_3 == '\x02')) goto LAB_142501411;
  }
  if (lVar5 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
    *param_2 = *(undefined8 *)(lVar5 + 0x38);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
    for (plVar7 = plVar2; plVar7 != plVar2 + iVar1; plVar7 = plVar7 + 1) {
      if (*plVar7 == lVar5) {
        if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) != -1) goto LAB_1425014d8;
        break;
      }
    }
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x18));
    }
    *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = lVar5;
LAB_1425014d8:
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_1425014e6:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142501510 Reduce body=596 status=ok
// SIG undefined Reduce(void)

void MatineeKeyReduction::MCurve<FTwoVectors,6>::Reduce(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *_Dst;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 local_res8;
  
  iVar7 = (int)param_1[4];
  iVar2 = (int)param_1[1];
  lVar15 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar11 = 0;
    do {
      lVar3 = *param_1;
      pfVar12 = (float *)0x0;
      iVar14 = 0;
      lVar8 = 0;
      fVar1 = *(float *)(lVar11 + lVar3);
      if (3 < iVar7) {
        pfVar9 = (float *)(param_1[3] + 0x48);
        uVar6 = (iVar7 - 4U >> 2) + 1;
        uVar13 = (ulonglong)uVar6;
        iVar14 = uVar6 * 4;
        lVar8 = (ulonglong)uVar6 * 4;
        pfVar10 = pfVar9;
        do {
          if ((-0.001 < pfVar10[-0x12] - fVar1) && (pfVar10[-0x12] - fVar1 < 0.001)) {
            pfVar12 = pfVar9 + -0x12;
          }
          if ((-0.001 < pfVar10[-9] - fVar1) && (pfVar10[-9] - fVar1 < 0.001)) {
            pfVar12 = pfVar9 + -9;
          }
          if ((-0.001 < *pfVar10 - fVar1) && (*pfVar10 - fVar1 < 0.001)) {
            pfVar12 = pfVar9;
          }
          if ((-0.001 < pfVar10[9] - fVar1) && (pfVar10[9] - fVar1 < 0.001)) {
            pfVar12 = pfVar9 + 9;
          }
          pfVar10 = pfVar10 + 0x24;
          pfVar9 = pfVar9 + 0x24;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (iVar14 < iVar7) {
        pfVar10 = (float *)(param_1[3] + lVar8 * 0x24);
        pfVar9 = (float *)(param_1[3] + (longlong)iVar14 * 0x24);
        uVar13 = (ulonglong)(uint)(iVar7 - iVar14);
        do {
          if ((-0.001 < *pfVar10 - fVar1) && (*pfVar10 - fVar1 < 0.001)) {
            pfVar12 = pfVar9;
          }
          pfVar10 = pfVar10 + 9;
          pfVar9 = pfVar9 + 9;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      fVar1 = pfVar12[2];
      fVar4 = pfVar12[3];
      fVar5 = pfVar12[4];
      pfVar10 = (float *)(lVar11 + 4 + lVar3);
      *pfVar10 = pfVar12[1];
      pfVar10[1] = fVar1;
      pfVar10[2] = fVar4;
      pfVar10[3] = fVar5;
      *(undefined8 *)(lVar11 + 0x14 + lVar3) = *(undefined8 *)(pfVar12 + 5);
      *(undefined1 *)(lVar11 + 0x4c + *param_1) = *(undefined1 *)(pfVar12 + 7);
      lVar11 = lVar11 + 0x50;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  iVar14 = 0;
  if (0 < iVar2) {
    do {
      RecalculateTangents(param_1,iVar14);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar2);
  }
  if (1 < iVar7) {
    uVar6 = iVar7 - 1;
    if (*(int *)((longlong)param_1 + 0x34) < (int)uVar6) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 5,uVar6);
    }
    iVar7 = (int)param_1[6];
    bVar16 = false;
    if (iVar7 == 0) {
      local_res8 = (ulonglong)uVar6 << 0x20;
      *(undefined4 *)(param_1 + 6) = 1;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,0);
      }
      *(longlong *)param_1[5] = local_res8;
      iVar7 = (int)param_1[6];
      bVar16 = iVar7 == 0;
    }
    if (!bVar16 && -1 < iVar7) {
      do {
        iVar7 = (int)param_1[6];
        _Dst = (ulonglong *)param_1[5];
        uVar13 = *_Dst;
        if (iVar7 + -1 != 0) {
          ::_guard_xfg_dispatch_icall_nop(_Dst,_Dst + 1,(longlong)(iVar7 + -1) << 3);
          iVar7 = (int)param_1[6];
        }
        *(int *)(param_1 + 6) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 5);
        local_res8._4_4_ = (undefined4)(uVar13 >> 0x20);
        ReduceSegment(param_1,uVar13 & 0xffffffff,local_res8._4_4_);
      } while (0 < (int)param_1[6]);
    }
    return;
  }
  FInterpCurve<FTwoVectors>::AddPoint
            (param_1,*(undefined4 *)param_1[3],(undefined4 *)param_1[3] + 1);
  return;
}



// FUNCTION 142501770 Reduce body=580 status=ok
// SIG undefined Reduce(void)

void MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::Reduce(longlong *param_1)

{
  float fVar1;
  int iVar2;
  ulonglong *_Dst;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 local_res8;
  
  iVar4 = (int)param_1[4];
  iVar2 = (int)param_1[1];
  lVar12 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar8 = 0;
    do {
      pfVar9 = (float *)0x0;
      iVar11 = 0;
      lVar5 = 0;
      fVar1 = *(float *)(lVar8 + *param_1);
      if (3 < iVar4) {
        pfVar6 = (float *)(param_1[3] + 0x18);
        uVar3 = (iVar4 - 4U >> 2) + 1;
        uVar10 = (ulonglong)uVar3;
        iVar11 = uVar3 * 4;
        lVar5 = (ulonglong)uVar3 * 4;
        pfVar7 = pfVar6;
        do {
          if ((-0.001 < pfVar7[-6] - fVar1) && (pfVar7[-6] - fVar1 < 0.001)) {
            pfVar9 = pfVar6 + -6;
          }
          if ((-0.001 < pfVar7[-3] - fVar1) && (pfVar7[-3] - fVar1 < 0.001)) {
            pfVar9 = pfVar6 + -3;
          }
          if ((-0.001 < *pfVar7 - fVar1) && (*pfVar7 - fVar1 < 0.001)) {
            pfVar9 = pfVar6;
          }
          if ((-0.001 < pfVar7[3] - fVar1) && (pfVar7[3] - fVar1 < 0.001)) {
            pfVar9 = pfVar6 + 3;
          }
          pfVar7 = pfVar7 + 0xc;
          pfVar6 = pfVar6 + 0xc;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (iVar11 < iVar4) {
        pfVar7 = (float *)(param_1[3] + lVar5 * 0xc);
        pfVar6 = (float *)(param_1[3] + (longlong)iVar11 * 0xc);
        uVar10 = (ulonglong)(uint)(iVar4 - iVar11);
        do {
          if ((-0.001 < *pfVar7 - fVar1) && (*pfVar7 - fVar1 < 0.001)) {
            pfVar9 = pfVar6;
          }
          pfVar7 = pfVar7 + 3;
          pfVar6 = pfVar6 + 3;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      *(float *)(lVar8 + 4 + *param_1) = pfVar9[1];
      *(undefined1 *)(lVar8 + 0x10 + *param_1) = *(undefined1 *)(pfVar9 + 2);
      lVar8 = lVar8 + 0x14;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar11 = 0;
  if (0 < iVar2) {
    do {
      RecalculateTangents(param_1,iVar11);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar2);
  }
  if (1 < iVar4) {
    uVar3 = iVar4 - 1;
    if (*(int *)((longlong)param_1 + 0x34) < (int)uVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 5,uVar3);
    }
    iVar4 = (int)param_1[6];
    bVar13 = false;
    if (iVar4 == 0) {
      local_res8 = (ulonglong)uVar3 << 0x20;
      *(undefined4 *)(param_1 + 6) = 1;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,0);
      }
      *(longlong *)param_1[5] = local_res8;
      iVar4 = (int)param_1[6];
      bVar13 = iVar4 == 0;
    }
    if (!bVar13 && -1 < iVar4) {
      do {
        iVar4 = (int)param_1[6];
        _Dst = (ulonglong *)param_1[5];
        uVar10 = *_Dst;
        if (iVar4 + -1 != 0) {
          ::_guard_xfg_dispatch_icall_nop(_Dst,_Dst + 1,(longlong)(iVar4 + -1) << 3);
          iVar4 = (int)param_1[6];
        }
        *(int *)(param_1 + 6) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 5);
        local_res8._4_4_ = (undefined4)(uVar10 >> 0x20);
        ReduceSegment(param_1,uVar10 & 0xffffffff,local_res8._4_4_);
      } while (0 < (int)param_1[6]);
    }
    return;
  }
  FInterpCurve<float>::AddPoint(param_1,*(undefined4 *)param_1[3],(undefined4 *)param_1[3] + 1);
  return;
}



// FUNCTION 1425019c0 ReduceKeys body=212 status=ok
// SIG undefined ReduceKeys(void)

void UInterpTrackFloatProp::ReduceKeys(longlong param_1,float param_2,float param_3,float param_4)

{
  longlong local_58 [2];
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  local_18 = param_2 - 0.0005;
  local_14 = param_3 + 0.0005;
  local_1c = param_4 * 0.01;
  param_1 = param_1 + 0x70;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
  CreateControlPoints<MatineeKeyReduction::SFLOAT>(local_58,param_1,0);
  if (0 < (int)local_38) {
    MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
    FillControlPoints<MatineeKeyReduction::SFLOAT>(local_58,param_1,1);
    MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::Reduce(local_58);
    MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
    CopyCurvePoints<FInterpCurvePoint<MatineeKeyReduction::SFLOAT>_>(local_58,param_1,1);
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142501aa0 FUN_142501aa0 body=696 status=ok
// SIG undefined FUN_142501aa0(void)

void FUN_142501aa0(longlong param_1,float param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  void *_Src;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong local_b8 [2];
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float local_64;
  float local_60;
  ulonglong uVar7;
  
  uVar9 = 0;
  if (*(int *)(param_1 + 0x40) == 0) {
    local_64 = param_2 - 0.0005;
    local_60 = param_3 + 0.0005;
    local_68 = param_4 * 0.01;
    plVar1 = (longlong *)(param_1 + 0x70);
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    MatineeKeyReduction::MCurve<FTwoVectors,6>::CreateControlPoints<FVector>(local_b8,plVar1,0);
    MatineeKeyReduction::MCurve<FTwoVectors,6>::CreateControlPoints<FVector>
              (local_b8,param_1 + 0x88,3);
    if (0 < (int)local_98) {
      MatineeKeyReduction::MCurve<FTwoVectors,6>::FillControlPoints<FVector>(local_b8,plVar1,3,0);
      MatineeKeyReduction::MCurve<FTwoVectors,6>::FillControlPoints<FVector>
                (local_b8,param_1 + 0x88,3);
      MatineeKeyReduction::MCurve<FTwoVectors,6>::Reduce(local_b8);
      MatineeKeyReduction::MCurve<FTwoVectors,6>::CopyCurvePoints<FInterpCurvePoint<FVector>_>
                (local_b8,plVar1,3,0);
      MatineeKeyReduction::MCurve<FTwoVectors,6>::CopyCurvePoints<FInterpCurvePoint<FVector>_>
                (local_b8,param_1 + 0x88,3);
    }
    plVar2 = (longlong *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar2,0);
    }
    uVar11 = *(uint *)(param_1 + 0x78);
    uVar10 = uVar9;
    if (uVar11 != 0) {
      do {
        iVar4 = *(int *)(param_1 + 0xa8);
        fVar3 = *(float *)((longlong)(int)uVar10 * 0x2c + *plVar1);
        uVar8 = uVar9;
        uVar6 = 0;
        if (0 < iVar4) {
          pfVar5 = (float *)(*plVar2 + 8);
          uVar7 = uVar9;
          do {
            uVar6 = (uint)uVar7;
            if (fVar3 < *pfVar5 || fVar3 == *pfVar5) break;
            uVar6 = uVar6 + 1;
            uVar7 = (ulonglong)uVar6;
            uVar8 = uVar8 + 1;
            pfVar5 = pfVar5 + 4;
          } while ((longlong)uVar8 < (longlong)iVar4);
        }
        *(int *)(param_1 + 0xa8) = iVar4 + 1;
        if (*(int *)(param_1 + 0xac) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar4);
        }
        _Src = (void *)((longlong)(int)uVar6 * 0x10 + *plVar2);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 0x10),_Src,(longlong)(int)(iVar4 - uVar6) << 4);
        uVar6 = (int)uVar10 + 1;
        *(float *)(*plVar2 + 8 + uVar8 * 0x10) = fVar3;
        *(undefined8 *)(*plVar2 + uVar8 * 0x10) = 0;
        uVar10 = (ulonglong)uVar6;
      } while (uVar6 < uVar11);
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar10 = uVar9;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        plVar1 = *(longlong **)(uVar9 + *(longlong *)(param_1 + 0x38));
        (**(code **)(*plVar1 + 0x70))(plVar1,1);
        plVar1 = *(longlong **)(uVar9 + *(longlong *)(param_1 + 0x38));
        (**(code **)(*plVar1 + 0x360))(plVar1,param_2,param_3,param_4);
        uVar11 = (int)uVar10 + 1;
        uVar9 = uVar9 + 8;
        uVar10 = (ulonglong)uVar11;
      } while ((int)uVar11 < *(int *)(param_1 + 0x40));
    }
  }
  return;
}



// FUNCTION 142501d60 FUN_142501d60 body=512 status=ok
// SIG undefined FUN_142501d60(void)

void FUN_142501d60(longlong param_1,float param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  void *_Src;
  uint uVar7;
  ulonglong uVar9;
  uint uVar10;
  longlong local_98 [2];
  undefined1 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong uVar8;
  
  local_58 = param_2 - 0.0005;
  local_54 = param_3 + 0.0005;
  local_5c = param_4 * 0.01;
  uVar10 = 0;
  plVar1 = (longlong *)(param_1 + 0x70);
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
  CreateControlPoints<MatineeKeyReduction::SFLOAT>(local_98,plVar1,0);
  if (0 < (int)local_78) {
    MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
    FillControlPoints<MatineeKeyReduction::SFLOAT>(local_98,plVar1,1,0);
    MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::Reduce(local_98);
    MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::
    CopyCurvePoints<FInterpCurvePoint<MatineeKeyReduction::SFLOAT>_>(local_98,plVar1,1,0);
  }
  plVar2 = (longlong *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar2,0);
  }
  uVar4 = *(uint *)(param_1 + 0x78);
  if (uVar4 != 0) {
    do {
      uVar8 = 0;
      iVar5 = *(int *)(param_1 + 0xa0);
      uVar7 = 0;
      fVar3 = *(float *)(*plVar1 + (longlong)(int)uVar10 * 0x14);
      uVar9 = uVar8;
      if (0 < iVar5) {
        pfVar6 = (float *)(*plVar2 + 8);
        do {
          uVar7 = (uint)uVar8;
          if (fVar3 < *pfVar6 || fVar3 == *pfVar6) break;
          uVar7 = uVar7 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar9 = uVar9 + 1;
          pfVar6 = pfVar6 + 4;
        } while ((longlong)uVar9 < (longlong)iVar5);
      }
      *(int *)(param_1 + 0xa0) = iVar5 + 1;
      if (*(int *)(param_1 + 0xa4) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar5);
      }
      _Src = (void *)((longlong)(int)uVar7 * 0x10 + *plVar2);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 0x10),_Src,(longlong)(int)(iVar5 - uVar7) << 4);
      uVar10 = uVar10 + 1;
      *(float *)(*plVar2 + 8 + uVar9 * 0x10) = fVar3;
      *(undefined8 *)(*plVar2 + uVar9 * 0x10) = 0;
    } while (uVar10 < uVar4);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142501f60 ReduceSegment body=508 status=ok
// SIG undefined ReduceSegment(void)

void MatineeKeyReduction::MCurve<FTwoVectors,6>::ReduceSegment
               (longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (1 < param_3 - param_2) {
    iVar2 = param_2 + 1;
    iVar5 = 0;
    fVar9 = 0.0;
    if (iVar2 < param_3) {
      lVar3 = (longlong)iVar2 * 0x24;
      lVar4 = lVar3;
      do {
        fVar6 = (float)MKey<FTwoVectors,6>::Evaluate(param_1[3] + lVar4,param_1,param_1 + 7);
        if (0.0 < fVar6) {
          lVar1 = param_1[3];
          fVar7 = *(float *)(lVar3 + lVar1) - *(float *)(lVar1 + (longlong)param_2 * 0x24);
          fVar8 = *(float *)(lVar1 + (longlong)param_3 * 0x24) - *(float *)(lVar3 + lVar1);
          if (fVar8 < fVar7) {
            fVar7 = fVar8;
          }
          if (fVar9 < fVar6 * fVar7) {
            fVar9 = fVar6 * fVar7;
            iVar5 = iVar2;
          }
        }
        iVar2 = iVar2 + 1;
        lVar4 = lVar4 + 0x24;
        lVar3 = lVar3 + 0x24;
      } while (iVar2 < param_3);
      if (0.0 < fVar9) {
        iVar2 = FInterpCurve<FTwoVectors>::AddPoint
                          (param_1,*(undefined4 *)(param_1[3] + (longlong)iVar5 * 0x24),
                           param_1[3] + 4 + (longlong)iVar5 * 0x24);
        *(undefined1 *)(*param_1 + 0x4c + (longlong)iVar2 * 0x50) = 3;
        RecalculateTangents(param_1,iVar2);
        if (0 < iVar2) {
          RecalculateTangents(param_1,iVar2 + -1);
        }
        if (iVar2 < (int)param_1[1] + -1) {
          RecalculateTangents(param_1,iVar2 + 1);
        }
        if (1 < iVar5 - param_2) {
          iVar2 = (int)param_1[6];
          *(int *)(param_1 + 6) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0x34) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar2);
          }
          *(ulonglong *)(param_1[5] + (longlong)iVar2 * 8) = CONCAT44(iVar5,param_2);
        }
        if (1 < param_3 - iVar5) {
          iVar2 = (int)param_1[6];
          *(int *)(param_1 + 6) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0x34) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar2);
          }
          *(ulonglong *)(param_1[5] + (longlong)iVar2 * 8) = CONCAT44(param_3,iVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 142502160 ReduceSegment body=620 status=ok
// SIG undefined ReduceSegment(void)

void MatineeKeyReduction::MCurve<MatineeKeyReduction::SFLOAT,1>::ReduceSegment
               (longlong *param_1,int param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res18 [2];
  undefined8 local_res20;
  
  if (1 < param_3 - param_2) {
    iVar3 = param_2 + 1;
    iVar5 = 0;
    fVar9 = 0.0;
    if (iVar3 < param_3) {
      lVar2 = param_1[3];
      local_res20 = (longlong)param_3 * 3;
      fVar1 = *(float *)(param_1 + 7);
      pfVar4 = (float *)(lVar2 + (longlong)iVar3 * 0xc);
      do {
        fVar8 = *pfVar4;
        FInterpCurve<MatineeKeyReduction::SFLOAT>::Eval(param_1,local_res18,fVar8,&local_res20);
        fVar6 = (pfVar4[1] - local_res18[0]) * (pfVar4[1] - local_res18[0]);
        fVar7 = 0.0;
        if (fVar1 * fVar1 < fVar6) {
          fVar7 = fVar6;
        }
        if (0.0 < SQRT(fVar7)) {
          fVar6 = fVar8 - *(float *)(lVar2 + (longlong)param_2 * 0xc);
          fVar8 = *(float *)(lVar2 + (longlong)param_3 * 0xc) - fVar8;
          if (fVar8 < fVar6) {
            fVar6 = fVar8;
          }
          fVar6 = SQRT(fVar7) * fVar6;
          if (fVar9 < fVar6) {
            fVar9 = fVar6;
            iVar5 = iVar3;
          }
        }
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 3;
      } while (iVar3 < param_3);
      if (0.0 < fVar9) {
        iVar3 = FInterpCurve<float>::AddPoint
                          (param_1,*(undefined4 *)(lVar2 + (longlong)iVar5 * 0xc),
                           lVar2 + 4 + (longlong)iVar5 * 0xc);
        *(undefined1 *)(*param_1 + 0x10 + (longlong)iVar3 * 0x14) = 3;
        RecalculateTangents(param_1,iVar3);
        if (0 < iVar3) {
          RecalculateTangents(param_1,iVar3 + -1);
        }
        if (iVar3 < (int)param_1[1] + -1) {
          RecalculateTangents(param_1,iVar3 + 1);
        }
        if (1 < iVar5 - param_2) {
          iVar3 = (int)param_1[6];
          local_res20 = CONCAT44(iVar5,param_2);
          *(int *)(param_1 + 6) = iVar3 + 1;
          if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar3);
          }
          *(longlong *)(param_1[5] + (longlong)iVar3 * 8) = local_res20;
        }
        if (1 < param_3 - iVar5) {
          iVar3 = (int)param_1[6];
          local_res20 = CONCAT44(param_3,iVar5);
          *(int *)(param_1 + 6) = iVar3 + 1;
          if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar3);
          }
          *(longlong *)(param_1[5] + (longlong)iVar3 * 8) = local_res20;
        }
      }
    }
  }
  return;
}



// FUNCTION 1425023d0 FUN_1425023d0 body=432 status=ok
// SIG undefined FUN_1425023d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425023d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0 [24];
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  (**(code **)(*param_1 + 0x280))();
  param_1[5] = 0;
  param_1[7] = 0;
  if (param_2 != 0) {
    lVar4 = UInterpTrackFloatAnimBPParam::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((bVar3) && (local_f8 = 0, *(longlong *)(param_2 + 0xa0) != 0)) &&
        ((longlong *)param_1[4] != (longlong *)0x0)) &&
       (lVar4 = (**(code **)(*(longlong *)param_1[4] + 0x278))(), lVar4 != 0)) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_140609cc0(lVar4,local_f0,0);
      if (0 < (int)local_28) {
        puVar6 = local_f0;
        if (local_30 != (undefined8 *)0x0) {
          puVar6 = local_30;
        }
        lVar4 = FUN_1423ac7e0(*puVar6);
        if (lVar4 != 0) {
          lVar1 = *(longlong *)(lVar4 + 0x10);
          lVar7 = 0;
          if (*(longlong *)(param_2 + 0x98) != 0) {
            lVar5 = FUN_1428eccf0();
            for (lVar2 = *(longlong *)(param_2 + 0x98);
                (lVar7 = 0, lVar2 != 0 && (lVar7 = *(longlong *)(param_2 + 0x98), lVar2 != lVar5));
                lVar2 = *(longlong *)(lVar2 + 0x30)) {
            }
          }
          if (lVar1 == lVar7) {
            param_1[5] = lVar4;
            lVar4 = UStruct::FindPropertyByName
                              (*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(param_2 + 0xa0));
            param_1[7] = lVar4;
          }
        }
      }
      if (local_30 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
  }
  (**(code **)(*param_1 + 0x278))(param_1,param_2);
  return;
}



// FUNCTION 142502580 FUN_142502580 body=731 status=ok
// SIG undefined FUN_142502580(void)

void FUN_142502580(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  DWORD DVar5;
  longlong *plVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  longlong local_40;
  longlong *aplStack_38 [2];
  
  plVar8 = (longlong *)(param_1 + 0x7e8);
  if (*plVar8 != 0) {
    TArray<TRefCountPtr<HHitProxy>,FDefaultAllocator>::Empty(*plVar8,0);
    plVar6 = (longlong *)operator_new(0x10);
    plVar11 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      *plVar6 = *plVar8;
      lVar9 = *(longlong *)(param_1 + 0x7f0);
      plVar6[1] = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
    }
    local_40 = 0;
    aplStack_38[0] = (longlong *)0x0;
    if (plVar8 != &local_40) {
      *plVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x7f0,aplStack_38);
      plVar8 = aplStack_38[0];
      if (aplStack_38[0] != (longlong *)0x0) {
        LOCK();
        plVar1 = aplStack_38[0] + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*aplStack_38[0])(aplStack_38[0]);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*aplStack_38[0] + 8))(aplStack_38[0],1);
          }
        }
      }
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      if (plVar6 != (longlong *)0x0) {
        plVar8 = (longlong *)plVar6[1];
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar8 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        FMemory::operator_delete(plVar6,0x10);
      }
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar11 = plVar8;
        }
        TlsSetValue(*pDVar7,plVar11);
        plVar8 = plVar11;
      }
      plVar11 = (longlong *)plVar8[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar8;
        if (plVar11 == (longlong *)0x0) {
          lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
          plVar8[1] = lVar9;
          if (lVar9 == 0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar10;
            lVar9 = 0x1f;
            do {
              puVar3 = puVar10 + 0x20;
              *puVar10 = puVar3;
              lVar9 = lVar9 + -1;
              puVar10 = puVar3;
            } while (lVar9 != 0);
            *puVar3 = 0;
          }
          plVar11 = (longlong *)plVar8[1];
          iVar12 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar12 = 0x20;
          plVar8[1] = (longlong)plVar11;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar12 = (int)plVar8[2];
      }
      plVar8[1] = *plVar11;
      *(int *)(plVar8 + 2) = iVar12 + -1;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_1450d5b58;
      *(undefined1 *)(plVar11 + 3) = 0;
      plVar11[4] = 0;
      plVar11[2] = (longlong)plVar6;
      lVar9 = plVar11[4];
      piVar2 = (int *)(lVar9 + 0x48);
      if (lVar9 != 0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      local_res10 = lVar9;
      FUN_140445100(plVar11,0,0xff,1,0);
      if (lVar9 != 0) {
        LOCK();
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
  }
  return;
}



// FUNCTION 142502860 ReleaseRHI body=91 status=ok
// SIG undefined ReleaseRHI(void)

void FStaticMeshInstanceBuffer::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x80,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xc0,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x100,0);
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x20))(param_1 + 0x48);
  (**(code **)(*(longlong *)(param_1 + 0x88) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0001425028b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 200) + 0x20))();
  return;
}



// FUNCTION 1425028c0 ReleaseResource body=57 status=ok
// SIG undefined ReleaseResource(void)

void FStaticMeshInstanceBuffer::ReleaseResource(longlong param_1)

{
  FRenderResource::ReleaseResource();
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x30))(param_1 + 0x48);
  (**(code **)(*(longlong *)(param_1 + 0x88) + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001425028f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 200) + 0x30))();
  return;
}



// FUNCTION 142502900 FUN_142502900 body=163 status=ok
// SIG undefined FUN_142502900(void)

void FUN_142502900(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar2 = *(int *)(param_1 + 0x4c4);
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  iVar3 = *(int *)(param_1 + 0x4c0);
  if (-1 < iVar2) {
    if (iVar3 != 0) {
      plVar4 = (longlong *)(lVar1 + 0x20);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    return;
  }
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = *(int *)(param_1 + 0x4c4);
  }
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  if (iVar2 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo((longlong *)(param_1 + 0x4b8),0);
  }
  return;
}



// FUNCTION 1425029b0 RemoveAtImpl body=258 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x40);
    iVar6 = param_3;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar7 + 1);
      plVar3 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x40),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + *param_1),(longlong)iVar5 << 6);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142502ac0 FUN_142502ac0 body=276 status=ok
// SIG undefined FUN_142502ac0(void)

void FUN_142502ac0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = *param_1 + 0x28 + (longlong)param_2 * 0x60;
    iVar6 = param_3;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + 0x10);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      plVar3 = *(longlong **)(lVar7 + -0x10);
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
      lVar7 = lVar7 + 0x60;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar5 * 0x60);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142502be0 FUN_142502be0 body=216 status=ok
// SIG undefined FUN_142502be0(void)

void FUN_142502be0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar5 = -1;
  if (0 < *(int *)(param_1 + 0x4c0)) {
    plVar1 = (longlong *)(param_1 + 0x4b8);
    lVar4 = 0;
    do {
      if (iVar5 != -1) goto LAB_142502c42;
      if ((*(longlong *)(lVar4 + *plVar1) == param_2) &&
         ((param_3 == '\0' || (*(float *)(lVar4 + 0x30 + *plVar1) == -1.0)))) {
        iVar5 = iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0x4c0));
    if (iVar5 != -1) {
LAB_142502c42:
      if (*(longlong *)((longlong)iVar5 * 0x60 + 0x20 + *plVar1) != 0) {
        FMemory::Free();
      }
      iVar2 = *(int *)(param_1 + 0x4c0);
      iVar3 = (iVar2 - iVar5) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar5 * 0x60),
                   (void *)((longlong)(iVar5 + 1) * 0x60 + *plVar1),(longlong)iVar3 * 0x60);
        iVar2 = *(int *)(param_1 + 0x4c0);
      }
      *(int *)(param_1 + 0x4c0) = iVar2 + -1;
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 142502cc0 FUN_142502cc0 body=181 status=ok
// SIG undefined FUN_142502cc0(void)

undefined8 FUN_142502cc0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x9c8))(param_1,param_2);
  if ((-1 < param_2) && (param_2 < (int)param_1[0xf6])) {
    plVar1 = param_1 + 0xf5;
    iVar3 = (int)param_1[0xf6];
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x30 + *plVar1),
                 (void *)((longlong)(param_2 + 1) * 0x30 + *plVar1),(longlong)iVar2 * 0x30);
      iVar3 = (int)param_1[0xf6];
    }
    *(int *)(param_1 + 0xf6) = iVar3 + -1;
    TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
    FUN_1424e8820(param_1);
    FUN_1424e96f0(param_1);
  }
  *(int *)((longlong)param_1 + 0x80c) = *(int *)((longlong)param_1 + 0x80c) + 1;
  FUN_1423424e0(param_1);
  return 1;
}



// FUNCTION 142502d80 RemoveKeyframe body=112 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackAnimControl::RemoveKeyframe(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xa0))) {
    plVar1 = (longlong *)(param_1 + 0x98);
    iVar3 = *(int *)(param_1 + 0xa0);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x20 + *plVar1),
                 (void *)((longlong)(param_2 + 1) * 0x20 + *plVar1),(longlong)iVar2 << 5);
      iVar3 = *(int *)(param_1 + 0xa0);
    }
    *(int *)(param_1 + 0xa0) = iVar3 + -1;
    TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
    return;
  }
  return;
}



// FUNCTION 142502e00 RemoveKeyframe body=100 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackBoolProp::RemoveKeyframe(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar3 = *(int *)(param_1 + 0x78);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x70);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 8),
                 (void *)(lVar1 + (longlong)(param_2 + 1) * 8),(longlong)iVar2 << 3);
      iVar3 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar3 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x70));
    return;
  }
  return;
}



// FUNCTION 142502e70 RemoveKeyframe body=111 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackDirector::RemoveKeyframe(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar3 = *(int *)(param_1 + 0x78);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x70);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 0x18),
                 (void *)(lVar1 + (longlong)(param_2 + 1) * 0x18),(longlong)iVar2 * 0x18);
      iVar3 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar3 + -1;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x70));
    return;
  }
  return;
}



// FUNCTION 142502ef0 FUN_142502ef0 body=634 status=ok
// SIG undefined FUN_142502ef0(void)

void FUN_142502ef0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  int local_res10;
  longlong local_res18;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar12 = *(int *)(param_1 + 0x78);
    iVar6 = (iVar12 - param_2) + -1;
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x70)),
                 (void *)((longlong)(param_2 + 1) * 0x10 + *(longlong *)(param_1 + 0x70)),
                 (longlong)iVar6 << 4);
      iVar12 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar12 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x70);
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (lVar8 != 0) {
      lVar7 = UInterpGroup::GetPrivateStaticClass();
      lVar1 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        plVar2 = *(longlong **)(lVar8 + 0x20);
        (**(code **)(*plVar2 + 0x70))(plVar2,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
        *(undefined4 *)(plVar2 + 0xd) = 0;
        if (*(int *)((longlong)plVar2 + 0x6c) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2 + 0xc,0);
        }
        plVar13 = (longlong *)0x0;
        uVar9 = 0;
        local_48 = (longlong *)0x0;
        local_3c = 0;
        lVar8 = UInterpTrackEvent::GetPrivateStaticClass();
        local_res10 = 0;
        if (0 < (int)plVar2[7]) {
          local_res18 = 0;
          uVar10 = uVar9;
          do {
            iVar12 = 0;
            lVar1 = *(longlong *)(local_res18 + plVar2[6]);
            if (0 < *(int *)(lVar1 + 0x38)) {
              lVar7 = 0;
              do {
                lVar3 = *(longlong *)(lVar7 + *(longlong *)(lVar1 + 0x30));
                lVar4 = *(longlong *)(lVar3 + 0x10);
                if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                    lVar8 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  iVar6 = (int)uVar10;
                  local_40 = iVar6 + 1;
                  if ((int)uVar9 < (int)local_40) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_48,uVar10);
                    uVar9 = (ulonglong)local_3c;
                    plVar13 = local_48;
                  }
                  uVar10 = (ulonglong)local_40;
                  plVar13[iVar6] = lVar3;
                }
                iVar12 = iVar12 + 1;
                lVar7 = lVar7 + 8;
              } while (iVar12 < *(int *)(lVar1 + 0x38));
            }
            local_res10 = local_res10 + 1;
            local_res18 = local_res18 + 8;
          } while (local_res10 < (int)plVar2[7]);
          plVar11 = plVar13;
          if (0 < (int)uVar10) {
            do {
              lVar8 = *plVar11;
              iVar12 = 0;
              if (0 < *(int *)(lVar8 + 0x78)) {
                do {
                  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                  AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                            (plVar2 + 0xc,*(longlong *)(lVar8 + 0x70) + (longlong)iVar12 * 0x10 + 8)
                  ;
                  iVar12 = iVar12 + 1;
                } while (iVar12 < *(int *)(lVar8 + 0x78));
              }
              uVar10 = uVar10 - 1;
              plVar11 = plVar11 + 1;
            } while (uVar10 != 0);
          }
          if (plVar13 != (longlong *)0x0) {
            FMemory::Free(plVar13);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142503170 RemoveKeyframe body=130 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackFloatBase::RemoveKeyframe(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar1 = (iVar2 - param_2) + -1;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x14),
                 (void *)(*(longlong *)(param_1 + 0x70) + (longlong)(param_2 + 1) * 0x14),
                 (longlong)iVar1 * 0x14);
      iVar2 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar2 + -1;
    TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
    FInterpCurve<float>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  }
  return;
}



// FUNCTION 142503200 RemoveKeyframe body=122 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackLinearColorBase::RemoveKeyframe(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar1 = (iVar2 - param_2) + -1;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x70)),
                 (void *)((longlong)(param_2 + 1) * 0x38 + *(longlong *)(param_1 + 0x70)),
                 (longlong)iVar1 * 0x38);
      iVar2 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar2 + -1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeShrink
              (param_1 + 0x70);
    FInterpCurve<FLinearColor>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  }
  return;
}



// FUNCTION 142503280 RemoveKeyframe body=342 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackMove::RemoveKeyframe(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar2 = *(int *)(param_1 + 0x78);
    lVar4 = (longlong)param_2 * 0x2c;
    lVar5 = (longlong)(param_2 + 1);
    iVar3 = (iVar2 - param_2) + -1;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x70) + lVar4),
                 (void *)(lVar5 * 0x2c + *(longlong *)(param_1 + 0x70)),(longlong)iVar3 * 0x2c);
      iVar2 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar2 + -1;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
    plVar1 = (longlong *)(param_1 + 0x88);
    iVar2 = *(int *)(param_1 + 0x90);
    iVar3 = (iVar2 - param_2) + -1;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + lVar4),(void *)(lVar5 * 0x2c + *plVar1),(longlong)iVar3 * 0x2c);
      iVar2 = *(int *)(param_1 + 0x90);
    }
    *(int *)(param_1 + 0x90) = iVar2 + -1;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(plVar1);
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar3 = (iVar2 - param_2) + -1;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0xa0) + (longlong)param_2 * 0x10),
                 (void *)(*(longlong *)(param_1 + 0xa0) + lVar5 * 0x10),(longlong)iVar3 << 4);
      iVar2 = *(int *)(param_1 + 0xa8);
    }
    *(int *)(param_1 + 0xa8) = iVar2 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0xa0);
    FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0xb8),1);
    FInterpCurve<FVector>::AutoSetTangents(plVar1,*(undefined4 *)(param_1 + 0xbc),1);
  }
  return;
}



// FUNCTION 1425033e0 RemoveKeyframe body=207 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackMoveAxis::RemoveKeyframe(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar1 = (iVar2 - param_2) + -1;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x14),
                 (void *)(*(longlong *)(param_1 + 0x70) + (longlong)(param_2 + 1) * 0x14),
                 (longlong)iVar1 * 0x14);
      iVar2 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar2 + -1;
    TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
    FInterpCurve<float>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  }
  plVar3 = (longlong *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar1 = (iVar2 - param_2) + -1;
  if (iVar1 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_2 * 0x10 + *plVar3),
               (void *)((longlong)(param_2 + 1) * 0x10 + *plVar3),(longlong)iVar1 << 4);
    iVar2 = *(int *)(param_1 + 0xa0);
  }
  *(int *)(param_1 + 0xa0) = iVar2 + -1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar3);
  return;
}



// FUNCTION 1425034b0 RemoveKeyframe body=111 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackParticleReplay::RemoveKeyframe(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar3 = *(int *)(param_1 + 0x78);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x70);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 0xc),
                 (void *)(lVar1 + (longlong)(param_2 + 1) * 0xc),(longlong)iVar2 * 0xc);
      iVar3 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar3 + -1;
    TArray<FVector,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x70));
    return;
  }
  return;
}



// FUNCTION 142503530 RemoveKeyframe body=117 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackSound::RemoveKeyframe(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x98))) {
    iVar3 = *(int *)(param_1 + 0x98);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x90);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 0x18),
                 (void *)(lVar1 + (longlong)(param_2 + 1) * 0x18),(longlong)iVar2 * 0x18);
      iVar3 = *(int *)(param_1 + 0x98);
    }
    *(int *)(param_1 + 0x98) = iVar3 + -1;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x90));
    return;
  }
  return;
}



// FUNCTION 1425035b0 RemoveKeyframe body=122 status=ok
// SIG undefined RemoveKeyframe(void)

void UInterpTrackVectorBase::RemoveKeyframe(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar1 = (iVar2 - param_2) + -1;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x2c + *(longlong *)(param_1 + 0x70)),
                 (void *)((longlong)(param_2 + 1) * 0x2c + *(longlong *)(param_1 + 0x70)),
                 (longlong)iVar1 * 0x2c);
      iVar2 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x78) = iVar2 + -1;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
    FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),1);
  }
  return;
}



// FUNCTION 142503680 Rename body=215 status=ok
// SIG undefined Rename(void)

char UStringTable::Rename(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [3];
  
  cVar2 = FUN_14175ed80();
  if ((cVar2 != '\0') && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = FUN_141607d00();
    FStringTableRegistry::UnregisterStringTable(uVar3,uVar1);
    puVar4 = (undefined8 *)UObjectBaseUtility::GetPathName(param_1,local_20,0);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar4;
    }
    FName::FName(&local_38,puVar5,1);
    *(undefined8 *)(param_1 + 0x38) = local_38;
    if (local_20[0] != 0) {
      FMemory::Free();
    }
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_28 = *(longlong *)(param_1 + 0x30);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = FUN_141607d00();
    FStringTableRegistry::RegisterStringTable(uVar3,uVar1,&local_30);
  }
  return cVar2;
}



// FUNCTION 142503760 Reset body=61 status=ok
// SIG undefined Reset(void)

void FInstanceUpdateCmdBuffer::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1425037a0 FUN_1425037a0 body=113 status=ok
// SIG undefined FUN_1425037a0(void)

void FUN_1425037a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  byte *pbVar4;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if (((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
       (lVar1 = *(longlong *)(param_1 + 0x40), lVar1 != 0)) {
      pbVar4 = (byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + *(longlong *)(param_1 + 0x38));
      if (*(char *)(param_1 + 0x48) == '\0') {
        bVar3 = 0;
      }
      else {
        bVar3 = *(byte *)(lVar1 + 0x72);
      }
      *pbVar4 = ~*(byte *)(lVar1 + 0x73) & *pbVar4 | bVar3;
                    /* WARNING: Could not recover jumptable at 0x000142503804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x4e8))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142503820 FUN_142503820 body=70 status=ok
// SIG undefined FUN_142503820(void)

void FUN_142503820(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if ((plVar1 != (longlong *)0x0) && (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0)) {
      **(undefined4 **)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000142503859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x4e8))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1425038a0 RestoreActorState body=188 status=ok
// SIG undefined RestoreActorState(void)

void UInterpTrackInstFloatMaterialParam::RestoreActorState(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar3 = UInterpTrackFloatMaterialParam::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x30))) {
      lVar3 = 0;
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x28));
        if (lVar1 != 0) {
          FUN_1425a2750(lVar1,*(undefined8 *)(param_2 + 0xa0),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar3));
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
        lVar3 = lVar3 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 142503960 FUN_142503960 body=137 status=ok
// SIG undefined FUN_142503960(void)

void FUN_142503960(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))(), lVar2 != 0)) {
    lVar3 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14260f0c0(*(undefined8 *)(lVar2 + 0x458),*(undefined8 *)(param_2 + 0x90),
                    *(undefined4 *)(param_1 + 0x28));
    }
  }
  return;
}



// FUNCTION 1425039f0 FUN_1425039f0 body=72 status=ok
// SIG undefined FUN_1425039f0(void)

void FUN_1425039f0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if ((plVar5 != (longlong *)0x0) &&
       (puVar1 = *(undefined4 **)(param_1 + 0x38), puVar1 != (undefined4 *)0x0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x44);
      uVar3 = *(undefined4 *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      *puVar1 = *(undefined4 *)(param_1 + 0x40);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000142503a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x4e8))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 142503a40 FUN_142503a40 body=142 status=ok
// SIG undefined FUN_142503a40(void)

void FUN_142503a40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))(), lVar2 != 0)) {
    lVar3 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar2 + 0x458) != 0)) {
      *(undefined1 *)(*(longlong *)(lVar2 + 0x458) + 0x71f) = 0;
      *(undefined4 *)(*(longlong *)(lVar2 + 0x458) + 2000) = 0;
      *(undefined4 *)(*(longlong *)(lVar2 + 0x458) + 0x7d4) = 0;
    }
  }
  return;
}



// FUNCTION 142503ad0 FUN_142503ad0 body=46 status=ok
// SIG undefined FUN_142503ad0(void)

void FUN_142503ad0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = UWorld::GetWorldSettings(uVar1,0,1);
  *(int *)(lVar2 + 0x5e4) = (int)param_1[5];
  return;
}



// FUNCTION 142503b00 FUN_142503b00 body=303 status=ok
// SIG undefined FUN_142503b00(void)

void FUN_142503b00(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
LAB_142503b69:
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if (plVar3 == (longlong *)0x0) goto LAB_142503b69;
    lVar4 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar5 = plVar3;
    if (!bVar1) goto LAB_142503b69;
  }
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1429a6e30();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142503ba8;
  }
  plVar3 = (longlong *)0x0;
LAB_142503ba8:
  if (plVar5 == (longlong *)0x0) {
    if ((plVar3 != (longlong *)0x0) && (cVar2 = FUN_14254a3e0(plVar3), cVar2 != '\0')) {
      FUN_142398ec0(plVar3[0x8b],*(byte *)(param_1 + 0x30) & 1,1);
    }
    return;
  }
  (**(code **)(*(longlong *)plVar5[0x8b] + 0x290))
            ((longlong *)plVar5[0x8b],*(byte *)(param_1 + 0x30) & 1,0);
  *(uint *)(plVar5 + 0x8c) =
       *(uint *)(plVar5 + 0x8c) ^ (*(int *)(param_1 + 0x30) << 2 ^ *(uint *)(plVar5 + 0x8c)) & 4;
                    /* WARNING: Could not recover jumptable at 0x000142503bf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x5f8))(plVar5);
  return;
}



// FUNCTION 142503c30 RestoreActorState body=216 status=ok
// SIG undefined RestoreActorState(void)

void UInterpTrackInstVectorMaterialParam::RestoreActorState(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    lVar3 = UInterpTrackVectorMaterialParam::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (iVar5 = 0, 0 < *(int *)(param_1 + 0x30))) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x28));
        if (lVar1 != 0) {
          puVar4 = (undefined4 *)
                   FLinearColor::FLinearColor
                             (local_18,*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0xc);
          local_28 = *puVar4;
          uStack_24 = puVar4[1];
          uStack_20 = puVar4[2];
          uStack_1c = puVar4[3];
          FUN_1425a2be0(lVar1,*(undefined8 *)(param_2 + 0xa0),&local_28);
        }
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar5 < *(int *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 142503d10 FUN_142503d10 body=80 status=ok
// SIG undefined FUN_142503d10(void)

void FUN_142503d10(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if ((plVar2 != (longlong *)0x0) &&
       (puVar1 = *(undefined8 **)(param_1 + 0x38), puVar1 != (undefined8 *)0x0)) {
      *puVar1 = *(undefined8 *)(param_1 + 0x40);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000142503d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x4e8))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142503d60 RestoreGroupActorState body=89 status=ok
// SIG undefined RestoreGroupActorState(void)

void UInterpGroupInst::RestoreGroupActorState(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 0x38));
      (**(code **)(*plVar1 + 0x280))
                (plVar1,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + lVar2)
                );
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 142503dc0 FUN_142503dc0 body=113 status=ok
// SIG undefined FUN_142503dc0(void)

void FUN_142503dc0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  cVar1 = UWorld::IsGameWorld(uVar3);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x97) & 5) == 0)) {
    FUN_1424fb510(param_1);
  }
  uVar2 = *(uint *)(param_1 + 0x97);
  if (((uVar2 & 1) == 0) && (0 < (int)param_1[0x9a])) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x99,0);
    uVar2 = *(uint *)(param_1 + 0x97);
  }
  *(uint *)(param_1 + 0x97) = uVar2 & 0xfffffffb | 3;
  AActor::SetActorTickEnabled(param_1,1);
  return;
}



// FUNCTION 142503e40 FUN_142503e40 body=73 status=ok
// SIG undefined FUN_142503e40(void)

void FUN_142503e40(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
    if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
       (lVar1 = *(longlong *)(param_1 + 0x40), lVar1 != 0)) {
      *(bool *)(param_1 + 0x48) =
           (*(byte *)(lVar1 + 0x73) &
           *(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + *(longlong *)(param_1 + 0x38))) != 0;
    }
  }
  return;
}


