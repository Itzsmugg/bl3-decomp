// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c5ee60 FUN_140c5ee60 body=556 status=ok
// SIG undefined FUN_140c5ee60(void)

void FUN_140c5ee60(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_14089d0c0();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_140c5ef4d;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140c5ef4d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140c5f013;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140c5f013:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = (longlong)(int)uStack_5c * 0x38 + *(longlong *)CONCAT44(uStack_74,local_78);
    lStack_90 = local_98 + 8;
    FUN_140c60380(param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 140c5f090 FUN_140c5f090 body=203 status=ok
// SIG undefined FUN_140c5f090(void)

void FUN_140c5f090(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_2;
    *plVar2 = (longlong)&PTR_GetPoolName_1444d5098;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140c5f160 FUN_140c5f160 body=502 status=ok
// SIG undefined FUN_140c5f160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5f160(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar6 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar4 = puVar6 + 5;
    puVar5 = (undefined8 *)(param_2 + 0xa0);
    do {
      *(undefined4 *)(puVar4 + -4) = 0;
      puVar1 = puVar4 + 7;
      puVar4[-3] = 0;
      *(byte *)((longlong)puVar4 + -0xc) = *(byte *)((longlong)puVar4 + -0xc) | 1;
      *(undefined4 *)(puVar4 + -2) = 5;
      *(undefined4 *)(puVar4 + -1) = 6;
      *puVar4 = puVar6;
      *(undefined1 *)(puVar4 + 1) = 3;
      puVar4[2] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *puVar6 = &PTR_FUN_1440fbd68;
      *puVar1 = 0;
      puVar4[8] = 0;
      uVar7 = uRam000000014686c56c;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      *(undefined4 *)(puVar4 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x6c) = 0;
      *(undefined4 *)(puVar4 + 0xe) = 0;
      *(uint *)((longlong)puVar4 + 0x74) = uVar7;
      uVar7 = uRam000000014686c564 & uRam000000014686c574;
      uVar8 = uRam000000014686c568 & uRam000000014686c578;
      uVar9 = uRam000000014686c56c & uRam000000014686c57c;
      *(uint *)(puVar4 + 0x11) = _DAT_14686c560 & _DAT_14686c570;
      *(uint *)((longlong)puVar4 + 0x8c) = uVar7;
      *(uint *)(puVar4 + 0x12) = uVar8;
      *(uint *)((longlong)puVar4 + 0x94) = uVar9;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      *(undefined4 *)(puVar4 + -2) = *(undefined4 *)(puVar5 + -0x11);
      puVar4[-3] = puVar5[-0x12];
      *(byte *)((longlong)puVar4 + -0xc) =
           *(byte *)((longlong)puVar4 + -0xc) ^
           (*(byte *)((longlong)puVar5 + -0x84) ^ *(byte *)((longlong)puVar4 + -0xc)) & 1;
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + -0xe);
      if (puVar1 != puVar5 + -8) {
        iVar2 = *(int *)(puVar5 + -7);
        _Src = (void *)puVar5[-8];
        *(int *)(puVar4 + 8) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
        }
      }
      uVar3 = puVar5[-5];
      puVar6 = puVar6 + 0x1a;
      puVar4[9] = puVar5[-6];
      puVar4[10] = uVar3;
      puVar4[0xb] = puVar5[-4];
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar5 + -3);
      uVar3 = puVar5[-1];
      puVar4[0xd] = puVar5[-2];
      puVar4[0xe] = uVar3;
      uVar3 = puVar5[1];
      puVar4[0xf] = *puVar5;
      puVar4[0x10] = uVar3;
      puVar1 = puVar5 + 2;
      uVar3 = puVar5[3];
      puVar5 = puVar5 + 0x1a;
      puVar4[0x11] = *puVar1;
      puVar4[0x12] = uVar3;
      puVar4 = puVar4 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c5f360 FUN_140c5f360 body=338 status=ok
// SIG undefined FUN_140c5f360(void)

undefined8 * FUN_140c5f360(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_1444d8ea0;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c5f4c0 CreateWidget<UUserWidget,UMainPlayerWidget> body=99 status=ok
// SIG undefined CreateWidget<UUserWidget,UMainPlayerWidget>(void)

longlong CreateWidget<UUserWidget,UMainPlayerWidget>(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_1420f0e60();
  if (lVar2 != 0) {
    lVar3 = UUGStartScreenUW::GetPrivateStaticClass();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140c5f530 FUN_140c5f530 body=563 status=ok
// SIG undefined FUN_140c5f530(void)

uint * FUN_140c5f530(longlong *param_1,uint *param_2,ulonglong *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  bool bVar8;
  uint local_res8 [2];
  uint local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  *local_30 = *param_3;
  local_30[1] = param_3[1];
  local_30[2] = param_3[2];
  *(int *)(local_30 + 3) = (int)param_3[3];
  *(undefined4 *)((longlong)local_30 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[8] = 0;
  local_30[9] = 0;
  *(undefined4 *)(local_30 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)local_30 + 0x54) = 0;
  local_30[0xc] = 0;
  *(undefined4 *)(local_30 + 0xd) = 0;
  TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
  ::operator=(local_30 + 4,param_3 + 4);
  *(undefined4 *)(local_30 + 0xe) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (iVar7 != 1) {
    FUN_140c74430(param_1,local_res8,*local_30);
    uVar3 = local_res8[0];
    lVar5 = (longlong)(int)local_res8[0];
    bVar8 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar8);
    if (bVar8) {
      _Dst = (void *)(lVar5 * 0x78 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x68) = 0;
      if (*(longlong *)((longlong)_Dst + 0x60) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x20);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x70);
      TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar3;
      goto LAB_140c5f730;
    }
  }
  cVar1 = FUN_140c6e3c0(param_1,iVar7,0);
  if (cVar1 == '\0') {
    iVar7 = (int)(*local_30 >> 4);
    uVar4 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar6 = -(uVar4 + iVar7) ^ uVar4 >> 0xd;
    uVar3 = (iVar7 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar3 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x74) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0xe) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_140c5f730:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140c5f770 FUN_140c5f770 body=436 status=ok
// SIG undefined FUN_140c5f770(void)

int * FUN_140c5f770(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  *local_20 = *param_3;
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_20 + 1,param_3 + 1);
  *(undefined4 *)(local_20 + 6) = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    lVar1 = *local_20;
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)((longlong)iVar4 * 0x38 + *param_1) == lVar1) goto LAB_140c5f83c;
          iVar4 = *(int *)((longlong)iVar4 * 0x38 + 0x30 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140c5f83c:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_140c5f8f9;
    }
  }
  cVar2 = TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x34) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 6) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140c5f8f9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140c5f930 FUN_140c5f930 body=414 status=ok
// SIG undefined FUN_140c5f930(void)

int * FUN_140c5f930(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar11 = false;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *param_2 = local_38[0];
  *(undefined4 *)local_30 = uVar2;
  *(undefined4 *)((longlong)local_30 + 4) = uVar3;
  *(undefined4 *)(local_30 + 1) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  *(undefined4 *)(local_30 + 2) = param_3[4];
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar2;
  *(undefined4 *)(local_30 + 3) = uVar3;
  *(undefined4 *)((longlong)local_30 + 0x1c) = uVar4;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    lVar1 = *local_30;
    if (iVar10 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x28) == lVar1) goto LAB_140c5f9fc;
          iVar9 = *(int *)(*param_1 + 0x20 + (longlong)iVar9 * 0x28);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_140c5f9fc:
    bVar11 = iVar9 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x28),local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar9;
      goto LAB_140c5faa6;
    }
  }
  cVar6 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    uVar8 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x24) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_140c5faa6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140c5fad0 FUN_140c5fad0 body=739 status=ok
// SIG undefined FUN_140c5fad0(void)

int * FUN_140c5fad0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  byte *_Src;
  void *_Dst;
  bool local_res8;
  
  iVar7 = 1;
  iVar10 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar8 * 0xa8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xa8 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (byte *)((longlong)iVar8 * 0xa8 + *param_1);
  FUN_140c5ea70(param_3,_Src);
  _Src[0xa0] = 0xff;
  _Src[0xa1] = 0xff;
  _Src[0xa2] = 0xff;
  _Src[0xa3] = 0xff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    iVar8 = iVar10;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(byte *)((longlong)iVar9 * 0xa8 + *param_1) == *_Src) break;
          iVar9 = *(int *)((longlong)iVar9 * 0xa8 + 0xa0 + *param_1);
          iVar8 = iVar10;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0xa8 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x90) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0xa0);
      iVar7 = *param_2;
      bVar3 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xa8 + *param_1) = iVar7;
      }
      puVar5 = (undefined4 *)((longlong)iVar7 * 0xa8 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar10 = (int)param_1[6];
      }
      puVar5[1] = iVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140c5fd8a;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0xa4) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xa0) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar12) * 4) = *param_2
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_140cc92e0(param_1);
  }
LAB_140c5fd8a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140c5fdc0 FUN_140c5fdc0 body=430 status=ok
// SIG undefined FUN_140c5fdc0(void)

int * FUN_140c5fdc0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (undefined4 *)param_3[1];
  bVar11 = false;
  plVar7 = (longlong *)*param_3;
  *param_2 = local_38[0];
  lVar2 = *plVar7;
  *local_30 = lVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar3;
  *(undefined4 *)(local_30 + 2) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar5;
  local_30[3] = *(longlong *)(puVar1 + 4);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    if (iVar10 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x28) == lVar2) goto LAB_140c5fe9c;
          iVar9 = *(int *)(*param_1 + 0x20 + (longlong)iVar9 * 0x28);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_140c5fe9c:
    bVar11 = iVar9 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x28),local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar9;
      goto LAB_140c5ff46;
    }
  }
  cVar6 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    uVar8 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x24) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_140c5ff46:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140c5ff70 FUN_140c5ff70 body=477 status=ok
// SIG undefined FUN_140c5ff70(void)

int * FUN_140c5ff70(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FUN_140c5ea00(param_3,local_30);
  *(undefined4 *)(local_30 + 0xe) = 0xffffffff;
  bVar7 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    FUN_140c74430(param_1,local_res8,*local_30);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)local_res8[0] * 0x78 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x68) = 0;
      if (*(longlong *)((longlong)_Dst + 0x60) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x20);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x70);
      TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140c60123;
    }
  }
  cVar1 = FUN_140c6e3c0(param_1,iVar5,0);
  if (cVar1 == '\0') {
    iVar5 = (int)(*local_30 >> 4);
    uVar4 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar6 = -(uVar4 + iVar5) ^ uVar4 >> 0xd;
    uVar3 = (iVar5 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar3 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x74) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0xe) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_140c60123:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140c60150 FUN_140c60150 body=555 status=ok
// SIG undefined FUN_140c60150(void)

int * FUN_140c60150(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 *_Src;
  int iVar12;
  uint uVar13;
  char cVar14;
  bool bVar15;
  int local_res8 [2];
  
  iVar12 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar11 * 0x1c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined4 *)*param_3;
  puVar4 = (undefined1 *)param_3[1];
  bVar15 = false;
  _Src = (undefined4 *)((longlong)iVar11 * 0x1c + *param_1);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *_Src = *puVar3;
  _Src[1] = uVar5;
  _Src[2] = uVar6;
  _Src[3] = uVar7;
  *(undefined1 *)(_Src + 4) = *puVar4;
  _Src[5] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x1c + *param_1),_Src,0x14);
      TSparseArray<TSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140c60353;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar9 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar14 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar12;
    }
    uVar9 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar14 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    uVar13 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    _Src[6] = uVar13;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    _Src[5] = *(undefined4 *)
               ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140c60353:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 140c60380 FUN_140c60380 body=438 status=ok
// SIG undefined FUN_140c60380(void)

int * FUN_140c60380(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_28 [2];
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar1 = param_3[1];
  *param_2 = local_28[0];
  *local_20 = *(longlong *)*param_3;
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_20 + 1,uVar1);
  *(undefined4 *)(local_20 + 6) = 0xffffffff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    lVar2 = *local_20;
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)((longlong)iVar5 * 0x38 + *param_1) == lVar2) goto LAB_140c6044e;
          iVar5 = *(int *)((longlong)iVar5 * 0x38 + 0x30 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_140c6044e:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_140c6050b;
    }
  }
  cVar3 = TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x34) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 6) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_140c6050b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140c60540 EnumToString<enum_EPortNameEnum> body=364 status=ok
// SIG undefined EnumToString<enum_EPortNameEnum>(void)

undefined8 *
EnumToString<enum_EPortNameEnum>(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  short *psVar7;
  bool bVar8;
  longlong local_38 [4];
  
  psVar7 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar1 = UEnum::GetPrivateStaticClass();
  lVar6 = -1;
  lVar2 = FUN_141799410(uVar1,0xffffffffffffffff,puVar5,0);
  bVar8 = lVar2 == 0;
  if (bVar8) {
    local_38[0] = 0;
    local_38[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar2 = local_38[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_38[0],5,&DAT_14435a2b4,5,0x3f);
    plVar3 = local_38;
  }
  else {
    plVar3 = (longlong *)FUN_1417392b0(lVar2,local_38 + 2,param_3);
    lVar2 = local_38[0];
  }
  if ((int)plVar3[1] != 0) {
    psVar7 = (short *)*plVar3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar7[lVar6] != 0);
    iVar4 = (int)lVar6 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar7,(longlong)iVar4 * 2);
  }
  if ((bVar8) && (lVar2 != 0)) {
    FMemory::Free(lVar2);
  }
  if ((!bVar8) && (local_38[2] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c606b0 FUN_140c606b0 body=37 status=ok
// SIG undefined FUN_140c606b0(void)

longlong * FUN_140c606b0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  plVar1 = plVar2 + (longlong)(int)param_1[1] * 9;
  while( true ) {
    if (plVar2 == plVar1) {
      return (longlong *)0x0;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 9;
  }
  return plVar2;
}



// FUNCTION 140c606e0 FUN_140c606e0 body=139 status=ok
// SIG undefined FUN_140c606e0(void)

longlong FUN_140c606e0(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_140cbbaf0(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_140cbbaf0(&local_28);
    }
  }
  return 0;
}



// FUNCTION 140c60770 FUN_140c60770 body=139 status=ok
// SIG undefined FUN_140c60770(void)

longlong FUN_140c60770(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_140cbbbd0(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_140cbbbd0(&local_28);
    }
  }
  return 0;
}



// FUNCTION 140c60800 FindField<UObjectProperty> body=139 status=ok
// SIG undefined FindField<UObjectProperty>(void)

longlong FindField<UObjectProperty>(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_140cbbe70(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_140cbbe70(&local_28);
    }
  }
  return 0;
}



// FUNCTION 140c60890 FindObject<UEnum> body=63 status=ok
// SIG undefined FindObject<UEnum>(void)

void FindObject<UEnum>(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = UEnum::GetPrivateStaticClass();
  FUN_141799410(uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 140c608d0 FUN_140c608d0 body=168 status=ok
// SIG undefined FUN_140c608d0(void)

longlong FUN_140c608d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x510);
  plVar1 = plVar7 + *(int *)(param_1 + 0x518);
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    uVar5 = UUGHitTextureButton::GetPrivateStaticClass();
    cVar4 = FUN_142eb4a30(lVar2,uVar5);
    if (cVar4 != '\0') break;
    plVar7 = plVar7 + 1;
  }
  if (lVar2 != 0) {
    lVar6 = UUGHitTextureButton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
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



// FUNCTION 140c60980 FUN_140c60980 body=168 status=ok
// SIG undefined FUN_140c60980(void)

longlong FUN_140c60980(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x510);
  plVar1 = plVar7 + *(int *)(param_1 + 0x518);
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    uVar5 = FUN_141341750();
    cVar4 = FUN_142eb4a30(lVar2,uVar5);
    if (cVar4 != '\0') break;
    plVar7 = plVar7 + 1;
  }
  if (lVar2 != 0) {
    lVar6 = FUN_141341750();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
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



// FUNCTION 140c60a30 FUN_140c60a30 body=168 status=ok
// SIG undefined FUN_140c60a30(void)

longlong FUN_140c60a30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x510);
  plVar1 = plVar7 + *(int *)(param_1 + 0x518);
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    uVar5 = UCheckBox::GetPrivateStaticClass();
    cVar4 = FUN_142eb4a30(lVar2,uVar5);
    if (cVar4 != '\0') break;
    plVar7 = plVar7 + 1;
  }
  if (lVar2 != 0) {
    lVar6 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
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



// FUNCTION 140c60ae0 FUN_140c60ae0 body=168 status=ok
// SIG undefined FUN_140c60ae0(void)

longlong FUN_140c60ae0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x510);
  plVar1 = plVar7 + *(int *)(param_1 + 0x518);
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    uVar5 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    cVar4 = FUN_142eb4a30(lVar2,uVar5);
    if (cVar4 != '\0') break;
    plVar7 = plVar7 + 1;
  }
  if (lVar2 != 0) {
    lVar6 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
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



// FUNCTION 140c60b90 FUN_140c60b90 body=168 status=ok
// SIG undefined FUN_140c60b90(void)

longlong FUN_140c60b90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x510);
  plVar1 = plVar7 + *(int *)(param_1 + 0x518);
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    uVar5 = ACameraActor::GetPrivateStaticClass();
    cVar4 = FUN_142eb4a30(lVar2,uVar5);
    if (cVar4 != '\0') break;
    plVar7 = plVar7 + 1;
  }
  if (lVar2 != 0) {
    lVar6 = ACameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
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



// FUNCTION 140c60c40 FUN_140c60c40 body=168 status=ok
// SIG undefined FUN_140c60c40(void)

longlong FUN_140c60c40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x510);
  plVar1 = plVar7 + *(int *)(param_1 + 0x518);
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    uVar5 = FUN_141379110();
    cVar4 = FUN_142eb4a30(lVar2,uVar5);
    if (cVar4 != '\0') break;
    plVar7 = plVar7 + 1;
  }
  if (lVar2 != 0) {
    lVar6 = FUN_141379110();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
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



// FUNCTION 140c60cf0 FUN_140c60cf0 body=168 status=ok
// SIG undefined FUN_140c60cf0(void)

longlong FUN_140c60cf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x510);
  plVar1 = plVar7 + *(int *)(param_1 + 0x518);
  while( true ) {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    uVar5 = FUN_141393230();
    cVar4 = FUN_142eb4a30(lVar2,uVar5);
    if (cVar4 != '\0') break;
    plVar7 = plVar7 + 1;
  }
  if (lVar2 != 0) {
    lVar6 = FUN_141393230();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
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



// FUNCTION 140c60da0 FUN_140c60da0 body=442 status=ok
// SIG undefined FUN_140c60da0(void)

void FUN_140c60da0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = FUN_142dfb450();
    lVar7 = *(longlong *)(param_1 + 0x28);
    if (lVar7 != 0) {
      while (lVar7 != lVar5) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      local_58 = 0;
      uStack_54 = 1;
      iVar1 = *(int *)(param_1 + 0x58);
      puStack_20 = (uint *)(param_1 + 0x40);
      local_48._4_4_ = 0;
      uStack_40 = 0;
      if (iVar1 != 0) {
        puVar8 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar8 = puStack_20;
        }
        uVar2 = *puVar8;
        uStack_40 = 0;
        local_58 = 0;
        while (uVar2 == 0) {
          lVar7 = (longlong)local_58;
          uStack_40 = uStack_40 + 0x20;
          iVar6 = local_58 + 1;
          bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
          local_58 = iVar6;
          if (bVar4) goto LAB_140c60e9f;
          uVar2 = puVar8[lVar7 + 1];
        }
        uStack_54 = -uVar2 & uVar2;
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
        local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
        if (iVar1 < local_48._4_4_) {
LAB_140c60e9f:
          local_48._4_4_ = iVar1;
        }
      }
      uStack_18 = 0xffffffff;
      iStack_14 = local_48._4_4_;
      iStack_10 = uStack_40;
      uStack_c = iStack_3c;
      iStack_28 = local_58;
      uStack_24 = uStack_54;
      iStack_50 = local_58;
      uStack_4c = uStack_54;
      local_38 = uStack_40;
      uStack_34 = iStack_3c;
      uStack_40 = 0xffffffff;
      iStack_3c = local_48._4_4_;
      bVar4 = local_48._4_4_ < iVar1;
      local_30 = (longlong *)(param_1 + 0x30);
      local_48 = puStack_20;
      if (bVar4) {
        do {
          iVar1 = (int)param_3[1];
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iStack_3c * 0x18);
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
          uStack_40 = uStack_40 & ~uStack_4c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
        } while (iStack_3c < (int)local_48[6]);
      }
    }
  }
  return;
}



// FUNCTION 140c60f60 HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=395 status=ok
// SIG undefined HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 2 + 1;
    iVar2 = iVar5;
    iVar7 = iVar4;
joined_r0x000140c60fa6:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          cVar3 = FUN_140c65b20(param_4,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
          if (cVar3 != '\0') {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        cVar3 = FUN_140c65b20(param_4,param_1[iVar4],param_1[iVar6]);
        if (cVar3 != '\0') {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar6];
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = uVar1;
          iVar4 = iVar6;
          goto joined_r0x000140c60fa6;
        }
      }
      iVar5 = iVar2 + -2;
      iVar4 = iVar7 + -1;
      iVar2 = iVar5;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar1;
      if (1 < param_2) {
        do {
          iVar2 = iVar4 * 2;
          iVar5 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar3 = FUN_140c65b20(param_4,param_1[(longlong)iVar2 + 2],param_1[iVar5]);
            if (cVar3 != '\0') {
              iVar5 = iVar2;
            }
            iVar5 = iVar5 + 1;
          }
          cVar3 = FUN_140c65b20(param_4,param_1[iVar4],param_1[iVar5]);
          if (cVar3 == '\0') break;
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar4 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 140c610f0 FUN_140c610f0 body=549 status=ok
// SIG undefined FUN_140c610f0(void)

void FUN_140c610f0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  bool bVar15;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar6 = iVar11;
    iVar13 = iVar10;
joined_r0x000140c61125:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar12 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          uVar5 = *(uint *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 0xc);
          uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar11 * 0x18 + 0x3c);
          bVar15 = uVar5 < uVar3;
          if (uVar5 == uVar3) {
            bVar15 = *(uint *)(param_1 + (longlong)iVar12 * 3 + 1) <
                     *(uint *)(param_1 + (longlong)iVar11 * 3 + 7);
          }
          if (bVar15) {
            iVar12 = iVar11;
          }
          iVar12 = iVar12 + 1;
        }
        puVar14 = param_1 + (longlong)iVar12 * 3;
        uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 0xc);
        bVar15 = *(uint *)((longlong)puVar14 + 0xc) < uVar3;
        puVar1 = param_1 + (longlong)iVar10 * 3;
        if (*(uint *)((longlong)puVar14 + 0xc) == uVar3) {
          bVar15 = *(uint *)(puVar14 + 1) < *(uint *)(puVar1 + 1);
        }
        if (bVar15) {
          if (puVar1 != puVar14) {
            uVar7 = puVar14[1];
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            uVar4 = puVar1[2];
            *puVar1 = *puVar14;
            puVar1[1] = uVar7;
            puVar1[2] = puVar14[2];
            *puVar14 = uVar8;
            puVar14[1] = uVar9;
            puVar14[2] = uVar4;
          }
          iVar11 = iVar12 * 2 + 1;
          iVar10 = iVar12;
          goto joined_r0x000140c61125;
        }
      }
      iVar11 = iVar6 + -2;
      iVar10 = iVar13 + -1;
      iVar6 = iVar11;
      iVar13 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar14 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar14) {
        uVar7 = puVar14[1];
        uVar8 = *param_1;
        uVar9 = param_1[1];
        uVar4 = param_1[2];
        *param_1 = *puVar14;
        param_1[1] = uVar7;
        param_1[2] = puVar14[2];
        *puVar14 = uVar8;
        puVar14[1] = uVar9;
        puVar14[2] = uVar4;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar10 * 2;
          iVar11 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            uVar5 = *(uint *)((longlong)param_1 + (longlong)iVar11 * 0x18 + 0xc);
            uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar6 * 0x18 + 0x3c);
            bVar15 = uVar5 < uVar3;
            if (uVar5 == uVar3) {
              bVar15 = *(uint *)(param_1 + (longlong)iVar11 * 3 + 1) <
                       *(uint *)(param_1 + (longlong)iVar6 * 3 + 7);
            }
            if (bVar15) {
              iVar11 = iVar6;
            }
            iVar11 = iVar11 + 1;
          }
          puVar1 = param_1 + (longlong)iVar11 * 3;
          uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 0xc);
          bVar15 = *(uint *)((longlong)puVar1 + 0xc) < uVar3;
          puVar2 = param_1 + (longlong)iVar10 * 3;
          if (*(uint *)((longlong)puVar1 + 0xc) == uVar3) {
            bVar15 = *(uint *)(puVar1 + 1) < *(uint *)(puVar2 + 1);
          }
          if (!bVar15) break;
          if (puVar2 != puVar1) {
            uVar7 = puVar1[1];
            uVar8 = *puVar2;
            uVar9 = puVar2[1];
            uVar4 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1[2] = uVar4;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar14 = puVar14 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140c61320 IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=681 status=ok
// SIG undefined IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      local_358 = plVar7[2];
      lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_140c61400:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[lVar3 >> 1];
          puVar10[lVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_140c61430:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x000140c61439;
          goto LAB_140c61450;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            cVar2 = FUN_140c65b20(param_4,*puVar8,*puVar5);
            if (cVar2 != '\0') {
              puVar8 = puVar5;
            }
          }
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_140c61515;
      }
LAB_140c61506:
      HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
                (puVar5,lVar3,param_3,param_4);
LAB_140c61515:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x000140c61439:
  cVar2 = FUN_140c65b20(param_4,*puVar10,*puVar5);
  if (cVar2 == '\0') goto LAB_140c61430;
LAB_140c61450:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar2 = FUN_140c65b20(param_4,*puVar8,*puVar10);
  } while (cVar2 == '\0');
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_140c61430;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffff8U)) {
    if (puVar5 < puVar4) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar4;
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_140c61515;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *plVar7 = (longlong)puVar10;
      plVar7[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_140c61515;
  }
  lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_140c61506;
  goto LAB_140c61400;
}



// FUNCTION 140c615d0 FUN_140c615d0 body=861 status=ok
// SIG undefined FUN_140c615d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c615d0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar18 = _guard_xfg_dispatch_icall_nop(fVar18);
    local_328 = (undefined4)(longlong)(fVar18 + fVar18);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      puVar15 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
      puVar14 = puVar15;
      if ((int)local_348 != 0) {
LAB_140c616c0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar15 = puVar14 + (lVar9 >> 1) * 3;
          if (puVar15 != puVar14) {
            uVar3 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar4 = *(undefined4 *)(puVar14 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar2 = puVar15[2];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
            *(undefined4 *)(puVar15 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
            puVar15[2] = puVar14[2];
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar2;
          }
          puVar12 = puVar10 + 3;
          puVar15 = puVar14;
LAB_140c61710:
          puVar11 = puVar15;
          puVar15 = puVar11 + 3;
          if (puVar15 <= puVar10) goto code_r0x000140c61719;
          goto LAB_140c61732;
        }
        for (; puVar15 = puVar14, puVar12 = puVar14, puVar14 < puVar10; puVar10 = puVar10 + -3) {
          while (puVar11 = puVar15, puVar15 = puVar12 + 3, puVar15 <= puVar10) {
            bVar17 = *(uint *)((longlong)puVar12 + 0x24) < *(uint *)((longlong)puVar11 + 0xc);
            if (*(uint *)((longlong)puVar12 + 0x24) == *(uint *)((longlong)puVar11 + 0xc)) {
              bVar17 = *(uint *)(puVar12 + 4) < *(uint *)(puVar11 + 1);
            }
            puVar12 = puVar15;
            if (!bVar17) {
              puVar15 = puVar11;
            }
          }
          if (puVar11 != puVar10) {
            uVar6 = puVar10[1];
            uVar7 = *puVar11;
            uVar8 = puVar11[1];
            uVar2 = puVar11[2];
            *puVar11 = *puVar10;
            puVar11[1] = uVar6;
            puVar11[2] = puVar10[2];
            *puVar10 = uVar7;
            puVar10[1] = uVar8;
            puVar10[2] = uVar2;
          }
        }
        goto LAB_140c6186f;
      }
LAB_140c61860:
      local_348 = lVar1;
      FUN_140c610f0(puVar15,lVar9,param_3,param_4);
LAB_140c6186f:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x000140c61719:
  bVar17 = *(uint *)((longlong)puVar11 + 0x24) < *(uint *)((longlong)puVar14 + 0xc);
  if (*(uint *)((longlong)puVar11 + 0x24) == *(uint *)((longlong)puVar14 + 0xc)) {
    bVar17 = *(uint *)(puVar11 + 4) < *(uint *)(puVar14 + 1);
  }
  if (!bVar17) goto LAB_140c61710;
LAB_140c61732:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if (puVar12 <= puVar14) break;
    bVar17 = *(uint *)((longlong)puVar14 + 0xc) < *(uint *)((longlong)puVar13 + -0xc);
    if (*(uint *)((longlong)puVar14 + 0xc) == *(uint *)((longlong)puVar13 + -0xc)) {
      bVar17 = *(uint *)(puVar14 + 1) < *(uint *)(puVar13 + -2);
    }
  } while (!bVar17);
  if (puVar15 <= puVar12) {
    if (puVar15 != puVar12) {
      uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
      uVar4 = *(undefined4 *)(puVar13 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar6 = *puVar15;
      uVar7 = puVar11[4];
      uVar2 = puVar11[5];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar3;
      *(undefined4 *)(puVar11 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar5;
      puVar11[5] = puVar13[-1];
      *puVar12 = uVar6;
      puVar13[-2] = uVar7;
      puVar13[-1] = uVar2;
    }
    goto LAB_140c61710;
  }
  if (puVar14 != puVar12) {
    uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
    uVar4 = *(undefined4 *)(puVar13 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar6 = *puVar14;
    uVar7 = puVar14[1];
    uVar2 = puVar14[2];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
    *(undefined4 *)(puVar14 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
    puVar14[2] = puVar13[-1];
    *puVar12 = uVar6;
    puVar13[-2] = uVar7;
    puVar13[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = (longlong)puVar12 + (-0x18 - (longlong)puVar14);
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)puVar10 - (longlong)puVar15) / 0x18) {
    if (puVar15 < puVar10) {
      *plVar16 = (longlong)puVar15;
      plVar16[1] = (longlong)puVar10;
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar12 <= puVar14 + 3) goto LAB_140c6186f;
    puVar10 = puVar13 + -6;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 3 < puVar12) {
      *plVar16 = (longlong)puVar14;
      plVar16[1] = (longlong)(puVar13 + -6);
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar10 <= puVar15) goto LAB_140c6186f;
  }
  lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
  puVar14 = puVar15;
  if ((int)local_348 == 0) goto LAB_140c61860;
  goto LAB_140c616c0;
}



// FUNCTION 140c61930 FUN_140c61930 body=69 status=ok
// SIG undefined FUN_140c61930(void)

ulonglong FUN_140c61930(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1428dfc70();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c61980 IsA<UBlueprintGeneratedClass> body=69 status=ok
// SIG undefined IsA<UBlueprintGeneratedClass>(void)

ulonglong UObjectBaseUtility::IsA<UBlueprintGeneratedClass>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c619d0 FUN_140c619d0 body=69 status=ok
// SIG undefined FUN_140c619d0(void)

ulonglong FUN_140c619d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_14171bfe0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c61a20 FUN_140c61a20 body=69 status=ok
// SIG undefined FUN_140c61a20(void)

ulonglong FUN_140c61a20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c61a70 FUN_140c61a70 body=69 status=ok
// SIG undefined FUN_140c61a70(void)

ulonglong FUN_140c61a70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UMaterialInterface::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c61ac0 FUN_140c61ac0 body=69 status=ok
// SIG undefined FUN_140c61ac0(void)

ulonglong FUN_140c61ac0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142f71d80();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c61b10 FUN_140c61b10 body=69 status=ok
// SIG undefined FUN_140c61b10(void)

ulonglong FUN_140c61b10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142f6f900();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c61b60 FUN_140c61b60 body=69 status=ok
// SIG undefined FUN_140c61b60(void)

ulonglong FUN_140c61b60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UForceFeedbackAttenuation::StaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c61bb0 FUN_140c61bb0 body=69 status=ok
// SIG undefined FUN_140c61bb0(void)

ulonglong FUN_140c61bb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142a2f930();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c61c00 FUN_140c61c00 body=229 status=ok
// SIG undefined FUN_140c61c00(void)

undefined8 * FUN_140c61c00(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FMemory::Malloc(0x288,0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_1444da208;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f46d0(puVar1);
      *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xf7;
      *puVar1 = &PTR__scalar_deleting_destructor__1444d5280;
      puVar2[0x43] = 0;
      *(undefined1 *)(puVar2 + 0x44) = 0;
      puVar2[0x45] = 0;
      *(undefined4 *)(puVar2 + 0x46) = 0;
      puVar2[0x47] = 0x3f800000;
      *(undefined4 *)(puVar2 + 0x48) = 0x3f800000;
      *(undefined4 *)((longlong)puVar2 + 0x244) = 0x3f800000;
      *(undefined1 *)(puVar2 + 0x49) = 0;
      puVar2[0x4a] = 0;
      puVar2[0x4b] = 0;
      *(undefined1 *)(puVar2 + 0x4c) = 0;
      puVar2[0x4d] = 0;
      *(undefined4 *)(puVar2 + 0x4e) = 0;
      puVar2[0x4f] = 0;
      *(undefined4 *)(puVar2 + 0x50) = 0;
      *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xf9;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140c61cf0 FUN_140c61cf0 body=140 status=ok
// SIG undefined FUN_140c61cf0(void)

undefined8 * FUN_140c61cf0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FMemory::Malloc(0x310);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_1444da1f8;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x300);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_1444d7708;
      puVar1[0x60] = 0;
      puVar1[0x61] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140c61d80 FUN_140c61d80 body=164 status=ok
// SIG undefined FUN_140c61d80(void)

undefined8 * FUN_140c61d80(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FMemory::Malloc(0x3b8);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_1444da218;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x3a8);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_1444d7e68;
      FCurveSequence::FCurveSequence(puVar1 + 0x60);
      puVar1[0x71] = 0;
      puVar1[0x72] = 0;
      puVar1[0x73] = 0;
      puVar1[0x74] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140c61e30 NewObject<UBlackboardKeyType_Object> body=89 status=ok
// SIG undefined NewObject<UBlackboardKeyType_Object>(void)

void NewObject<UBlackboardKeyType_Object>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140c61e90 FUN_140c61e90 body=89 status=ok
// SIG undefined FUN_140c61e90(void)

void FUN_140c61e90(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142f6f900();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140c61ef0 NewObject<UDialogueSoundWaveProxy> body=89 status=ok
// SIG undefined NewObject<UDialogueSoundWaveProxy>(void)

void NewObject<UDialogueSoundWaveProxy>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UDialogueSoundWaveProxy::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140c61f50 FUN_140c61f50 body=89 status=ok
// SIG undefined FUN_140c61f50(void)

void FUN_140c61f50(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140c61fb0 NewObject<UTextureRenderTarget2D> body=89 status=ok
// SIG undefined NewObject<UTextureRenderTarget2D>(void)

void NewObject<UTextureRenderTarget2D>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UTextureRenderTarget2D::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140c62010 FUN_140c62010 body=89 status=ok
// SIG undefined FUN_140c62010(void)

void FUN_140c62010(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UUGJournalKey::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140c62070 FUN_140c62070 body=840 status=ok
// SIG undefined FUN_140c62070(void)

undefined8 * FUN_140c62070(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_142d79210();
  *param_1 = &PTR_FUN_1444d5e18;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 2;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 2;
  *(undefined1 *)(param_1 + 0xbf) = 5;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 2;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 2;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 2;
  FUN_140b4bd00(param_1 + 0xce);
  param_1[0xd3] = 0;
  lVar2 = (longlong)param_1 + 0x704;
  param_1[0xd4] = 0;
  lVar1 = 5;
  param_1[0xd5] = 2;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6c4) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 1;
  *(undefined4 *)(param_1 + 0xda) = 2;
  *(undefined1 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6f4) = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  do {
    FDifficultyFloat::FDifficultyFloat(lVar2);
    lVar2 = lVar2 + 0xc;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 0xe8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x744) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8e4) = 0;
  param_1[0x11e] = 0;
  *(undefined4 *)(param_1 + 0x11f) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  *(undefined4 *)(param_1 + 0x133) = 100;
  *(undefined4 *)((longlong)param_1 + 0x99c) = 0x32;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  *(undefined2 *)(param_1 + 0x13f) = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x147);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(undefined1 *)(param_1 + 0x149) = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0x44960000;
  *(undefined4 *)(param_1 + 0xdc) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa11) = 0;
  FUN_14246fd50((longlong)param_1 + 0x704,0x3f800000);
  FUN_14246fd50(param_1 + 0xe2,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x71c,0x3f800000);
  FUN_14246fd50(param_1 + 0xe5,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x734,0x3f800000);
  return param_1;
}



// FUNCTION 140c623c0 FUN_140c623c0 body=1196 status=ok
// SIG undefined FUN_140c623c0(void)

undefined8 * FUN_140c623c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28 [2];
  
  FUN_1424ddf70();
  *param_1 = &PTR_FUN_1444d5630;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 2;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xb6));
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined2 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)(param_1 + 0xba) = 1;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x614) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *param_1 = &PTR_FUN_1444d6658;
  param_1[0xc5] = &PTR_LAB_1444d6e40;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x6fc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xde,0);
  }
  if ((undefined2 *)param_1[0xde] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xde] = 0;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xe0] = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined4 *)(param_1 + 0xea) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 2;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 2;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 2;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 2;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 2;
  FUN_140590080(param_1 + 0x10c);
  *(undefined1 *)(param_1 + 0x10f) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x110),4000);
  param_1[0x118] = 0;
  param_1[0x117] = &PTR_FUN_1444d6648;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x11c] = &PTR_FUN_1444d6648;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  *(undefined4 *)(param_1 + 0x11f) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x904) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90c) = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0x3f800000;
  *(undefined1 *)(param_1 + 6) = 5;
  local_58 = 0;
  local_50 = 0x5a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  uVar1 = local_58;
  FGenericPlatformString::Memcpy
            (local_58,
             L"/Game/UI/Notification/VaultCardLevelUpNotificationAsset.VaultCardLevelUpNotificationAsset"
             ,0xb4);
  local_38 = (undefined4)local_50;
  local_34 = local_50._4_4_;
  local_30 = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_40 = uVar1;
  FUN_1417978e0(&local_30,&local_40);
  local_58 = local_30;
  *(undefined4 *)(param_1 + 0xdb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0;
  FString::FString(&local_50,local_28);
  FSoftObjectPath::operator=(param_1 + 0xdd,&local_58);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c62870 FUN_140c62870 body=737 status=ok
// SIG undefined FUN_140c62870(void)

undefined8 * FUN_140c62870(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *param_1 = &PTR_FUN_1444d8790;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"CaptureComponent",1);
  uVar2 = *puVar3;
  uVar4 = FUN_1429fde70();
  lVar5 = FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  param_1[0x8b] = lVar5;
  *(undefined1 *)(lVar5 + 0x328) = 1;
  *(undefined4 *)(param_1[0x8b] + 0x3c4) = 0x42200000;
  *(undefined1 *)(param_1[0x8b] + 0x3c0) = 0;
  *(undefined1 *)(param_1[0x8b] + 0x318) = 0;
  *(undefined1 *)(param_1[0x8b] + 0x319) = 0;
  *(undefined1 *)(param_1[0x8b] + 0x3d8) = 2;
  *(undefined1 *)(param_1[0x8b] + 0x31a) = 1;
  *(undefined1 *)(param_1[0x8b] + 0x32d) = 1;
  *(undefined1 *)(param_1[0x8b] + 0x32e) = 1;
  *(undefined1 *)(param_1[0x8b] + 0x32b) = 1;
  *(undefined1 *)(param_1[0x8b] + 0x333) = 1;
  *(undefined1 *)(param_1[0x8b] + 0x2d0) = 2;
  *(undefined4 *)(param_1[0x8b] + 0x34c) = 900;
  lVar5 = param_1[0x8b];
  plVar1 = (longlong *)(lVar5 + 0x398);
  if ((wchar_t *)*plVar1 != L"OakLoadingSceneCapture") {
    iVar6 = 0;
    *(undefined4 *)(lVar5 + 0x3a0) = 0;
    if (*(int *)(lVar5 + 0x3a4) != 0x17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0x17);
      iVar6 = *(int *)(lVar5 + 0x3a0);
    }
    *(int *)(lVar5 + 0x3a0) = iVar6 + 0x17;
    if (*(int *)(lVar5 + 0x3a4) < iVar6 + 0x17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    builtin_wcsncpy((wchar_t *)*plVar1,L"OakLoadingSceneCapture",0x17);
    lVar5 = param_1[0x8b];
  }
  *(undefined1 *)(lVar5 + 0x32a) = 1;
  (**(code **)(*(longlong *)param_1[0x8b] + 0x290))((longlong *)param_1[0x8b],1);
  FUN_142398ec0(param_1[0x8b],1);
  *(uint *)(param_1[0x8b] + 0x374) = *(uint *)(param_1[0x8b] + 0x374) & 0xffffffbf;
  *(uint *)(param_1[0x8b] + 0x374) = *(uint *)(param_1[0x8b] + 0x374) & 0xfffbffff;
  *(uint *)(param_1[0x8b] + 0x370) = *(uint *)(param_1[0x8b] + 0x370) & 0xffffefff;
  *(uint *)(param_1[0x8b] + 0x374) = *(uint *)(param_1[0x8b] + 0x374) & 0x7fffffff;
  *(uint *)(param_1[0x8b] + 0x370) = *(uint *)(param_1[0x8b] + 0x370) & 0xffffff7f;
  *(uint *)(param_1[0x8b] + 0x370) = *(uint *)(param_1[0x8b] + 0x370) | 1;
  *(uint *)(param_1[0x8b] + 0x374) = *(uint *)(param_1[0x8b] + 0x374) & 0xfffeffff;
  *(uint *)(param_1[0x8b] + 0x374) = *(uint *)(param_1[0x8b] + 0x374) & 0xdfffffff;
  *(uint *)(param_1[0x8b] + 0x370) = *(uint *)(param_1[0x8b] + 0x370) | 0x800;
  *(uint *)(param_1[0x8b] + 0x370) = *(uint *)(param_1[0x8b] + 0x370) | 8;
  *(uint *)(param_1[0x8b] + 0x374) = *(uint *)(param_1[0x8b] + 0x374) & 0xffdfffff;
  *(uint *)(param_1[0x8b] + 0x374) = *(uint *)(param_1[0x8b] + 0x374) & 0xfff7ffff;
  *(uint *)(param_1[0x8b] + 0x370) = *(uint *)(param_1[0x8b] + 0x370) | 2;
  *(uint *)(param_1[0x8b] + 0x370) = *(uint *)(param_1[0x8b] + 0x370) & 0xf7ffffff;
  *(uint *)(param_1[0x8b] + 0x370) = *(uint *)(param_1[0x8b] + 0x370) & 0xfffffffb;
  FUN_14223f010(param_1,param_1[0x8b]);
  return param_1;
}



// FUNCTION 140c62b60 FUN_140c62b60 body=134 status=ok
// SIG undefined FUN_140c62b60(void)

undefined8 * FUN_140c62b60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 7;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 8;
  *param_1 = &PTR_FUN_1444d80a8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"StaticMeshComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  FUN_14223f010(param_1,uVar3);
  return param_1;
}



// FUNCTION 140c62bf0 FArguments body=333 status=ok
// SIG undefined FArguments(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SImage::FArguments::FArguments(longlong param_1)

{
  undefined8 uVar1;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  uVar1 = (**(code **)(*DAT_1469eb140 + 0x68))();
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  *(undefined1 *)(param_1 + 0x110) = 1;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar1 = _DAT_1464aa6c8;
  *(undefined8 *)(param_1 + 0x128) = _DAT_1464aa6c0;
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x150) = 1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  return param_1;
}



// FUNCTION 140c62d40 FArguments body=213 status=ok
// SIG undefined FArguments(void)

longlong STSDRichInlineImage::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  return param_1;
}



// FUNCTION 140c62e20 FArguments body=302 status=ok
// SIG undefined FArguments(void)

longlong SThrobber::FArguments::FArguments(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar2 = DAT_1469eb140;
  lVar1 = *DAT_1469eb140;
  puVar3 = (undefined8 *)FName::FName(local_res8,"Throbber.Chunk",1);
  uVar4 = (**(code **)(lVar1 + 0x40))(plVar2,*puVar3,0);
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  *(undefined4 *)(param_1 + 0x110) = 3;
  *(undefined4 *)(param_1 + 0x114) = 7;
  return param_1;
}



// FUNCTION 140c62f50 FUN_140c62f50 body=222 status=ok
// SIG undefined FUN_140c62f50(void)

undefined8 * FUN_140c62f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  local_38 = param_2[3];
  FString::FString(local_30,param_2 + 4);
  FSoftObjectPath::operator=(param_1 + 3,&local_38);
  param_1[6] = param_2[6];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  param_1[0xd] = param_2[0xd];
  return param_1;
}



// FUNCTION 140c63030 FDebugDisplayInfo body=169 status=ok
// SIG undefined FDebugDisplayInfo(void)

undefined8 *
FDebugDisplayInfo::FDebugDisplayInfo(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140c630e0 FUN_140c630e0 body=178 status=ok
// SIG undefined FUN_140c630e0(void)

undefined8 * FUN_140c630e0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR__scalar_deleting_destructor__1440fbd58;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(byte *)((longlong)param_1 + 0x1c) =
       *(byte *)((longlong)param_1 + 0x1c) ^
       (*(byte *)(param_2 + 0x1c) ^ *(byte *)((longlong)param_1 + 0x1c)) & 1;
  *(undefined4 *)(param_1 + 4) = 6;
  param_1[5] = param_1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  _Src = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 10,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[10],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140c631a0 FUN_140c631a0 body=124 status=ok
// SIG undefined FUN_140c631a0(void)

undefined4 * FUN_140c631a0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0xffffffff;
  return param_1;
}



// FUNCTION 140c63220 FUN_140c63220 body=483 status=ok
// SIG undefined FUN_140c63220(void)

undefined8 * FUN_140c63220(undefined8 *param_1)

{
  longlong **pplVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_38;
  longlong *local_30;
  
  plVar7 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 4);
  *param_1 = &PTR_FUN_1444d9568;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *pplVar1 = (longlong *)0x0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar5 = (longlong *)FMemory::Malloc(0x28);
  plVar8 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (longlong)&PTR_FUN_144175298;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar8 = plVar5;
  }
  plVar6 = (longlong *)FMemory::Malloc(0x18);
  plVar5 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar8;
    plVar5 = plVar6;
  }
  plVar6 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  local_38 = plVar8;
  local_30 = plVar5;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar2 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140c63385;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar8;
    plVar7 = (longlong *)plVar6[1];
    if (plVar5 != plVar7) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
LAB_140c63385:
  if (pplVar1 != &local_38) {
    *pplVar1 = plVar8;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 5,&local_30);
  }
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 140c63410 FUN_140c63410 body=207 status=ok
// SIG undefined FUN_140c63410(void)

undefined8 * FUN_140c63410(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_1444d8e78;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1000000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0;
  FText::FText(param_1 + 0x11);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"NoOakLoadingScene");
  DAT_14686c501 = cVar1 == '\0';
  return param_1;
}



// FUNCTION 140c634e0 FUN_140c634e0 body=414 status=ok
// SIG undefined FUN_140c634e0(void)

undefined8 * FUN_140c634e0(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  
  uVar5 = 0;
  *param_1 = &PTR_FUN_1444d7320;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  uVar6 = uVar5;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1444da0c8;
    plVar2[1] = (longlong)param_1;
    plVar2[2] = (longlong)&LAB_140c67678;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_1444da110;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535868,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_146535870;
    lVar3 = (longlong)DAT_146535870;
    uVar6 = *puVar4;
    DAT_146535870 = DAT_146535870 + 1;
    if (DAT_146535874 < DAT_146535870) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535868,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146535868);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  param_1[1] = uVar6;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1444da0c8;
    plVar2[1] = (longlong)param_1;
    plVar2[2] = (longlong)FUN_140cb4b60;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_1444da110;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1464b57d8;
    lVar3 = (longlong)DAT_1464b57d8;
    uVar5 = *puVar4;
    DAT_1464b57d8 = DAT_1464b57d8 + 1;
    if (DAT_1464b57dc < DAT_1464b57d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464b57d0);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  param_1[3] = uVar5;
  FUN_140b6f290();
  return param_1;
}



// FUNCTION 140c63680 FUN_140c63680 body=1265 status=ok
// SIG undefined FUN_140c63680(void)

undefined8 * FUN_140c63680(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  param_1[0xc] = param_2[0xc];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  param_1[0xf] = param_2[0xf];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x89) = *(undefined1 *)((longlong)param_2 + 0x89);
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)((longlong)param_2 + 0xa1);
  param_1[0x15] = param_2[0x15];
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0xc4) = *(undefined1 *)((longlong)param_2 + 0xc4);
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0xd9) = *(undefined1 *)((longlong)param_2 + 0xd9);
  param_1[0x1c] = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0xf1) = *(undefined1 *)((longlong)param_2 + 0xf1);
  param_1[0x1f] = param_2[0x1f];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x109) = *(undefined1 *)((longlong)param_2 + 0x109);
  param_1[0x22] = param_2[0x22];
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x121) = *(undefined1 *)((longlong)param_2 + 0x121);
  param_1[0x25] = param_2[0x25];
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x139) = *(undefined1 *)((longlong)param_2 + 0x139);
  param_1[0x28] = param_2[0x28];
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x151) = *(undefined1 *)((longlong)param_2 + 0x151);
  param_1[0x2b] = param_2[0x2b];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x169) = *(undefined1 *)((longlong)param_2 + 0x169);
  param_1[0x2e] = param_2[0x2e];
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0x181) = *(undefined1 *)((longlong)param_2 + 0x181);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  uVar2 = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = uVar2;
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0x1a1) = *(undefined1 *)((longlong)param_2 + 0x1a1);
  lVar1 = param_2[0x35];
  param_1[0x35] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[0x36];
  param_1[0x36] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[0x37];
  param_1[0x37] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[0x38];
  param_1[0x38] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[0x39];
  param_1[0x39] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[0x3a];
  param_1[0x3a] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[0x3b];
  param_1[0x3b] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[0x3c];
  param_1[0x3c] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x3d);
  uVar2 = *(undefined8 *)((longlong)param_2 + 500);
  *(undefined8 *)((longlong)param_1 + 0x1ec) = *(undefined8 *)((longlong)param_2 + 0x1ec);
  *(undefined8 *)((longlong)param_1 + 500) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x204);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = *(undefined8 *)((longlong)param_2 + 0x1fc);
  *(undefined8 *)((longlong)param_1 + 0x204) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x214);
  *(undefined8 *)((longlong)param_1 + 0x20c) = *(undefined8 *)((longlong)param_2 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x214) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x224);
  *(undefined8 *)((longlong)param_1 + 0x21c) = *(undefined8 *)((longlong)param_2 + 0x21c);
  *(undefined8 *)((longlong)param_1 + 0x224) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x234);
  *(undefined8 *)((longlong)param_1 + 0x22c) = *(undefined8 *)((longlong)param_2 + 0x22c);
  *(undefined8 *)((longlong)param_1 + 0x234) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x244);
  *(undefined8 *)((longlong)param_1 + 0x23c) = *(undefined8 *)((longlong)param_2 + 0x23c);
  *(undefined8 *)((longlong)param_1 + 0x244) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x254);
  *(undefined8 *)((longlong)param_1 + 0x24c) = *(undefined8 *)((longlong)param_2 + 0x24c);
  *(undefined8 *)((longlong)param_1 + 0x254) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x264);
  *(undefined8 *)((longlong)param_1 + 0x25c) = *(undefined8 *)((longlong)param_2 + 0x25c);
  *(undefined8 *)((longlong)param_1 + 0x264) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x274);
  *(undefined8 *)((longlong)param_1 + 0x26c) = *(undefined8 *)((longlong)param_2 + 0x26c);
  *(undefined8 *)((longlong)param_1 + 0x274) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x284);
  *(undefined8 *)((longlong)param_1 + 0x27c) = *(undefined8 *)((longlong)param_2 + 0x27c);
  *(undefined8 *)((longlong)param_1 + 0x284) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x28c) = *(undefined1 *)((longlong)param_2 + 0x28c);
  return param_1;
}



// FUNCTION 140c63b80 FUN_140c63b80 body=707 status=ok
// SIG undefined FUN_140c63b80(void)

undefined8 * FUN_140c63b80(undefined8 *param_1,int param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  lVar6 = (longlong)param_2;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(int *)(param_1 + 0x18) = param_2;
  if ((param_2 < 1) || (*(char *)(param_3 + 0x10) != '\x02')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xc4) = uVar3;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  lVar5 = param_4[1];
  param_1[0x32] = *param_4;
  param_1[0x33] = lVar5;
  if ((*param_4 == 0) || ((char)param_4[1] != '\x02')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x34) = uVar3;
  if ((*param_4 == 0) || (*(char *)((longlong)param_4 + 10) != '\x02')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x1a1) = uVar3;
  lVar5 = 8;
  param_1[0x35] = 0;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x1ec);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  do {
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined1 *)((longlong)param_1 + 0x28c) = 0;
  if (0 < param_2) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)((param_3 - (longlong)param_1) + (longlong)puVar4);
      uVar2 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar2;
      puVar4[2] = *(undefined8 *)((param_3 - (longlong)param_1) + -8 + (longlong)(puVar4 + 3));
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 3;
    } while (lVar6 != 0);
  }
  return param_1;
}



// FUNCTION 140c63e50 FUN_140c63e50 body=118 status=ok
// SIG undefined FUN_140c63e50(void)

undefined1 * FUN_140c63e50(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 0x48);
  }
  return param_1;
}



// FUNCTION 140c63ed0 FUN_140c63ed0 body=109 status=ok
// SIG undefined FUN_140c63ed0(void)

undefined8 * FUN_140c63ed0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1444d6e60;
  param_1[5] = &PTR_LAB_1444d72b8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 4;
  if (*(int *)((longlong)param_1 + 0x19c) < 8) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x32,8);
  }
  return param_1;
}



// FUNCTION 140c63f40 FUN_140c63f40 body=451 status=ok
// SIG undefined FUN_140c63f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c63f40(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  FUN_14246e940();
  *param_1 = &PTR_FUN_1444d73e8;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x43) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x224) = 0;
  *(undefined1 *)((longlong)param_1 + 0x184) = 6;
  *(undefined1 *)(param_1 + 0x41) = 6;
  FUN_14248f360(param_1);
  *(undefined2 *)(param_1 + 0x2f) = 0x402;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x90;
  cVar2 = FUN_140cba6c0(param_1);
  if (cVar2 == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x184);
  }
  *(undefined1 *)((longlong)param_1 + 0x183) = uVar3;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  FUN_140cccea0(param_1);
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 2;
  *(undefined4 *)(param_1 + 0x35) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x43c80000;
  param_1[0x36] = 0x42480000;
  *(undefined4 *)(param_1 + 0x37) = 0x40800000;
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_1444d9f00;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140cc1830;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1444d9f48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af358,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_1464af360;
    lVar5 = (longlong)DAT_1464af360;
    DAT_1464af360 = DAT_1464af360 + 1;
    if (DAT_1464af364 < DAT_1464af360) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af358,iVar1);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af358);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 140c64110 FUN_140c64110 body=173 status=ok
// SIG undefined FUN_140c64110(void)

undefined8 * FUN_140c64110(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  FUN_14246ea10();
  *(undefined1 *)(param_1 + 99) = 0;
  *param_1 = &PTR_FUN_1444d7910;
  lVar4 = 0;
  param_1[5] = &PTR_LAB_1444d7c70;
  param_1[9] = &PTR_LAB_1444d7e58;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  lVar1 = DAT_14686ca28;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
    }
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar4 + lVar1);
  return param_1;
}



// FUNCTION 140c641c0 FUN_140c641c0 body=33 status=ok
// SIG undefined FUN_140c641c0(void)

undefined8 * FUN_140c641c0(undefined8 *param_1)

{
  ULocalMessage::ULocalMessage();
  *param_1 = &PTR_FUN_1444d92e8;
  return param_1;
}



// FUNCTION 140c641f0 FUN_140c641f0 body=33 status=ok
// SIG undefined FUN_140c641f0(void)

undefined8 * FUN_140c641f0(undefined8 *param_1)

{
  ULocalMessage::ULocalMessage();
  *param_1 = &PTR_FUN_1444d9068;
  return param_1;
}



// FUNCTION 140c64220 FUN_140c64220 body=119 status=ok
// SIG undefined FUN_140c64220(void)

void FUN_140c64220(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar1[10] != 0) {
        FMemory::Free();
      }
      puVar1 = puVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 140c642a0 FUN_140c642a0 body=119 status=ok
// SIG undefined FUN_140c642a0(void)

void FUN_140c642a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar1[10] != 0) {
        FMemory::Free();
      }
      puVar1 = puVar1 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 140c64320 FUN_140c64320 body=119 status=ok
// SIG undefined FUN_140c64320(void)

void FUN_140c64320(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar1[10] != 0) {
        FMemory::Free();
      }
      puVar1 = puVar1 + 0x1a;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 140c643a0 FUN_140c643a0 body=119 status=ok
// SIG undefined FUN_140c643a0(void)

void FUN_140c643a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar1[10] != 0) {
        FMemory::Free();
      }
      puVar1 = puVar1 + 0x11;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 140c64420 FUN_140c64420 body=140 status=ok
// SIG undefined FUN_140c64420(void)

void FUN_140c64420(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_144278ac0;
      if (puVar1[8] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR_FUN_1441d26b8;
      puVar1 = puVar1 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 140c644b0 FUN_140c644b0 body=43 status=ok
// SIG undefined FUN_140c644b0(void)

void FUN_140c644b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 140c644e0 FUN_140c644e0 body=403 status=ok
// SIG undefined FUN_140c644e0(void)

void FUN_140c644e0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140c645a1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_140c645a1:
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
      if (*(longlong *)((longlong)iStack_1c * 0xa8 + *param_1 + 0x90) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c64680 FUN_140c64680 body=100 status=ok
// SIG undefined FUN_140c64680(void)

void FUN_140c64680(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f8));
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4a0);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140c646f0 FUN_140c646f0 body=102 status=ok
// SIG undefined FUN_140c646f0(void)

void FUN_140c646f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x578);
  FUN_1404575e0(param_1);
  return;
}



// FUNCTION 140c64760 FUN_140c64760 body=484 status=ok
// SIG undefined FUN_140c64760(void)

void FUN_140c64760(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  thunk_FUN_142478640(param_1 + 0xa38);
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x988) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  if (*(longlong *)(param_1 + 0x8f0) != 0) {
    FMemory::Free();
  }
  FUN_140c644e0(param_1 + 0x8b0);
  if (*(longlong *)(param_1 + 0x898) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  lVar2 = 5;
  lVar1 = param_1 + 0x740;
  do {
    lVar1 = lVar1 + -0xc;
    thunk_FUN_142478640(lVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (*(char *)(param_1 + 0x6f4) != '\0') {
    *(undefined1 *)(param_1 + 0x6f4) = 0;
  }
  if (*(char *)(param_1 + 0x6ec) != '\0') {
    *(undefined1 *)(param_1 + 0x6ec) = 0;
  }
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x698);
  if (*(longlong *)(param_1 + 0x680) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x658);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x640);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x620);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5e0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5c8);
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  FUN_140c64680(param_1);
  return;
}



// FUNCTION 140c64950 FUN_140c64950 body=537 status=ok
// SIG undefined FUN_140c64950(void)

void FUN_140c64950(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined **ppuVar3;
  
  if (*(longlong *)(param_1 + 0x910) != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)(param_1 + 0x8e0);
  ppuVar3 = &PTR_FUN_1444d6648;
  *puVar1 = &PTR_FUN_1444d6648;
  if (*(longlong *)(param_1 + 0x8e8) != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8e8) + 8);
      FMemory::Free();
      *(longlong *)(param_1 + 0x8e8) = lVar2;
    } while (lVar2 != 0);
    ppuVar3 = (undefined **)*puVar1;
  }
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  *(undefined8 *)(param_1 + 0x8e8) = 0;
  (*(code *)ppuVar3[1])(puVar1,0);
  puVar1 = (undefined8 *)(param_1 + 0x8b8);
  ppuVar3 = &PTR_FUN_1444d6648;
  *puVar1 = &PTR_FUN_1444d6648;
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8c0) + 8);
      FMemory::Free();
      *(longlong *)(param_1 + 0x8c0) = lVar2;
    } while (lVar2 != 0);
    ppuVar3 = (undefined **)*puVar1;
  }
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  *(undefined8 *)(param_1 + 0x8c0) = 0;
  (*(code *)ppuVar3[1])(puVar1,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
  FUN_140591060(param_1 + 0x860);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x848);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x830);
  if (*(longlong *)(param_1 + 0x820) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x808);
  if (*(longlong *)(param_1 + 0x7f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7c8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7a8);
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x668);
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x628) = &PTR_FUN_1444d6628;
  FUN_140c646f0(param_1);
  return;
}



// FUNCTION 140c64b70 FUN_140c64b70 body=181 status=ok
// SIG undefined FUN_140c64b70(void)

void FUN_140c64b70(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    plVar4 = (longlong *)param_1[0x31];
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
  plVar4 = (longlong *)param_1[0x27];
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
  param_1[0x15] = &PTR_FUN_143f4c5f0;
  *param_1 = &PTR_FUN_143f4c5f0;
  return;
}



// FUNCTION 140c64c30 ~FKey body=77 status=ok
// SIG undefined ~FKey(void)

void FKey::~FKey(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
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
  return;
}



// FUNCTION 140c64c80 DestroyObject body=79 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FFreeTypeGlyphCache>::DestroyObject
               (longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_140c71a80((longlong *)(param_1 + 0x28),0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140c64cd0 FUN_140c64cd0 body=15 status=ok
// SIG undefined FUN_140c64cd0(void)

void FUN_140c64cd0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1444d8080;
  FTickableObjectRenderThread::Unregister();
  return;
}



// FUNCTION 140c64ce0 FUN_140c64ce0 body=135 status=ok
// SIG undefined FUN_140c64ce0(void)

void FUN_140c64ce0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 600);
  plVar4 = *(longlong **)(param_1 + 0x248);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x218);
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 140c64d70 FUN_140c64d70 body=99 status=ok
// SIG undefined FUN_140c64d70(void)

void FUN_140c64d70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x2f8);
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
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 140c64de0 FUN_140c64de0 body=129 status=ok
// SIG undefined FUN_140c64de0(void)

void FUN_140c64de0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x390);
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
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  FUN_1417f61f0(param_1 + 0x2f0);
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 140c64e70 FUN_140c64e70 body=169 status=ok
// SIG undefined FUN_140c64e70(void)

void FUN_140c64e70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140c64f20 FUN_140c64f20 body=479 status=ok
// SIG undefined FUN_140c64f20(void)

longlong * FUN_140c64f20(longlong *param_1,longlong *param_2)

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
    FUN_140c71a80(param_1,iVar9);
    cVar3 = FUN_140c6e3c0(param_1,iVar9);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140c6505d;
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
LAB_140c6505d:
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
        FUN_140c5f530(param_1,local_res8,(longlong)iStack_3c * 0x78 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140c65100 operator= body=479 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
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
    TSparseArray<TSetElement<TTuple<FD3D12Resource_*,CResourceState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140c6523d;
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
LAB_140c6523d:
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
        FUN_140c5f770(param_1,local_res8,(longlong)iStack_3c * 0x38 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140c652e0 operator= body=506 status=ok
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
    cVar2 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140c6543b;
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
LAB_140c6543b:
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
        FUN_140c5f930(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x28,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 140c654e0 operator= body=71 status=ok
// SIG undefined operator=(void)

undefined4 * TSoftObjectPtr<UCurveLinearColor>::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  local_28 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_20,param_2 + 6);
  FSoftObjectPath::operator=(param_1 + 4,&local_28);
  return param_1;
}



// FUNCTION 140c65530 FUN_140c65530 body=140 status=ok
// SIG undefined FUN_140c65530(void)

ulonglong FUN_140c65530(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_18 [3];
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x50);
  fVar1 = *(float *)((longlong)*(int *)param_1[1] * 0x88 + 0x70 + lVar3);
  if (1e-08 < ABS(fVar1 - *(float *)param_1[2])) {
    uVar4 = FString::PrintfImpl(local_18,
                                L"Failed to patch object due to unexpected original value. Original=%f, Expected=%f"
                                ,(double)fVar1,(double)*(float *)param_1[2]);
    if (local_18[0] != 0) {
      uVar4 = FMemory::Free();
    }
    return uVar4 & 0xffffffffffffff00;
  }
  *(undefined4 *)((longlong)*(int *)param_1[1] * 0x88 + 0x70 + lVar3) = *(undefined4 *)param_1[3];
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 140c655c0 FUN_140c655c0 body=697 status=ok
// SIG undefined FUN_140c655c0(void)

void FUN_140c655c0(longlong param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  void *_Src;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_78;
  longlong local_70 [4];
  undefined1 local_50 [24];
  
  iVar9 = 0;
  local_98 = (void *)((ulonglong)local_98 & 0xffffffff00000000);
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_98 = (void *)0x0;
  uVar3 = UCurveLinearColorAtlas::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
  _Src = local_98;
  iVar7 = iVar9;
  if (lVar4 != 0) {
    local_98 = (void *)0x0;
    local_8c = 0;
    _Src = (void *)0x0;
    if ((param_4 != (short *)0x0) && (_Src = (void *)0x0, *param_4 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_4[lVar8] != 0);
      iVar7 = (int)lVar8 + 1;
      local_90 = iVar7;
      if (0 < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      }
      iVar9 = local_90;
      _Src = local_98;
      FGenericPlatformString::Memcpy(local_98,param_4,(longlong)iVar7 * 2);
    }
    lVar8 = *(longlong *)(param_1 + 8);
    iVar7 = 1;
    if (lVar8 != 0) {
      FUN_1417846f0(lVar8,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_98 = (void *)0x0;
      uVar2 = ULevelStreamingDynamic::GetPrivateStaticClass();
      lVar5 = FUN_1417985e0(uVar2,lVar8,local_98,0,0,0,0,0,0);
      if (lVar5 != 0) {
        local_98 = (void *)0x0;
        local_90 = iVar9;
        if (iVar9 == 0) {
          local_8c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar9,0);
          _guard_xfg_dispatch_icall_nop(local_98,_Src,(longlong)iVar9 * 2);
        }
        puVar6 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_50,&local_98);
        local_88 = 0xffffffff;
        local_84 = 0;
        local_78 = *puVar6;
        FString::FString(local_70,puVar6 + 1);
        if (puVar6[1] != 0) {
          FMemory::Free();
        }
        ULevelStreaming::SetWorldAsset(lVar5,&local_88);
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        UWorld::AddStreamingLevel(lVar8,lVar5);
        lVar8 = ULevelStreamingDynamic::GetPrivateStaticClass();
        bVar1 = true;
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar1 = true;
          goto LAB_140c657e8;
        }
      }
    }
  }
  bVar1 = false;
LAB_140c657e8:
  if ((iVar7 != 0) && (_Src != (void *)0x0)) {
    FMemory::Free(_Src);
  }
  if (bVar1) {
    FUN_142cf7230(lVar4,*(undefined8 *)(param_1 + 0x18));
    FHeadMountedDisplayBase::SetHeadTrackingEnforced(lVar4,0);
    uVar2 = FUN_142c8c260(&local_88);
    FUN_142cf7260(lVar4,uVar2);
    FUN_14116bcc0(*(undefined8 *)(param_1 + 0x10),param_3,lVar4);
  }
  return;
}



// FUNCTION 140c65880 FUN_140c65880 body=382 status=ok
// SIG undefined FUN_140c65880(void)

float * FUN_140c65880(undefined8 param_1,float *param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = rand();
  param_4 = param_4 - param_3;
  fVar4 = -param_3;
  iVar2 = (int)((float)iVar1 * 3.051851e-05 + (float)iVar1 * 3.051851e-05);
  iVar1 = 1;
  if (iVar2 < 2) {
    iVar1 = iVar2;
  }
  if (iVar1 == 1) {
    iVar1 = rand();
    fVar3 = fVar4 - (float)iVar1 * 3.051851e-05 * param_4;
  }
  else {
    iVar1 = rand();
    fVar3 = (float)iVar1 * 3.051851e-05 * param_4 + param_3;
  }
  *param_2 = fVar3;
  iVar1 = rand();
  iVar2 = (int)((float)iVar1 * 3.051851e-05 + (float)iVar1 * 3.051851e-05);
  iVar1 = 1;
  if (iVar2 < 2) {
    iVar1 = iVar2;
  }
  if (iVar1 == 1) {
    iVar1 = rand();
    fVar3 = fVar4 - (float)iVar1 * 3.051851e-05 * param_4;
  }
  else {
    iVar1 = rand();
    fVar3 = (float)iVar1 * 3.051851e-05 * param_4 + param_3;
  }
  param_2[1] = fVar3;
  iVar1 = rand();
  iVar2 = (int)((float)iVar1 * 3.051851e-05 + (float)iVar1 * 3.051851e-05);
  iVar1 = 1;
  if (iVar2 < 2) {
    iVar1 = iVar2;
  }
  iVar2 = rand();
  param_4 = (float)iVar2 * 3.051851e-05 * param_4;
  if (iVar1 == 1) {
    param_2[2] = fVar4 - param_4;
  }
  else {
    param_2[2] = param_4 + param_3;
  }
  return param_2;
}



// FUNCTION 140c65a00 FUN_140c65a00 body=275 status=ok
// SIG undefined FUN_140c65a00(void)

void FUN_140c65a00(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0x38);
  if (lVar5 != 0) {
    lVar2 = FUN_142e19950();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c65a5f;
  }
  lVar5 = 0;
LAB_140c65a5f:
  lVar2 = UPawnAction_Sequence::StaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = UPawnAction_Sequence::StaticClass();
    uVar3 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    *(undefined8 *)(param_2 + 0x38) = uVar3;
    FUN_142d5e800(uVar3,lVar5,0,0x7f7fffff);
  }
  return;
}



// FUNCTION 140c65b20 FUN_140c65b20 body=144 status=ok
// SIG undefined FUN_140c65b20(void)

bool FUN_140c65b20(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_142ffa430(param_2);
  bVar2 = FUN_142ffa430(param_3);
  if (bVar1 == bVar2) {
    return *(float *)(param_3 + 0xd4) < *(float *)(param_2 + 0xd4);
  }
  if (bVar1 == 3) {
    return true;
  }
  if (bVar2 == 3) {
    return false;
  }
  return bVar2 < bVar1;
}



// FUNCTION 140c65bb0 FUN_140c65bb0 body=462 status=ok
// SIG undefined FUN_140c65bb0(void)

void FUN_140c65bb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  uVar3 = FUN_14171bfe0();
  lVar4 = StaticFindObjectFastExplicit(uVar3,*param_2,param_3,0,0);
  if (lVar4 == 0) {
LAB_140c65c30:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c65c30;
  }
  uVar3 = UForceFeedbackAttenuation::StaticClass();
  lVar5 = StaticFindObjectFastExplicit(uVar3,*param_4,param_5,0,0);
  if (lVar5 != 0) {
    lVar6 = UForceFeedbackAttenuation::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c65c93;
  }
  lVar5 = 0;
LAB_140c65c93:
  local_30 = 0;
  local_38 = &DAT_1441d2800;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_10 = 0;
  FUN_142f604c0(&local_38,lVar4,lVar5);
  iVar2 = FUN_142f5de00(*(undefined8 *)*param_1,&local_38,0,*(undefined8 *)*param_1);
  if (iVar2 == 3) {
    uVar3 = FUN_142f477c0();
    lVar4 = StaticFindObjectFastExplicit(uVar3,*param_6,param_7,0,0);
    if (lVar4 != 0) {
      lVar5 = FUN_142f477c0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c2b150(*(undefined8 *)*param_1,*(undefined8 *)param_1[1],lVar4,0);
      }
    }
  }
  return;
}



// FUNCTION 140c65d80 FUN_140c65d80 body=140 status=ok
// SIG undefined FUN_140c65d80(void)

ulonglong FUN_140c65d80(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_18 [3];
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x50);
  fVar1 = *(float *)((longlong)*(int *)param_1[1] * 0x88 + 8 + lVar3);
  if (1e-08 < ABS(fVar1 - *(float *)param_1[2])) {
    uVar4 = FString::PrintfImpl(local_18,
                                L"Failed to patch object due to unexpected original value. Original=%f, Expected=%f"
                                ,(double)fVar1,(double)*(float *)param_1[2]);
    if (local_18[0] != 0) {
      uVar4 = FMemory::Free();
    }
    return uVar4 & 0xffffffffffffff00;
  }
  *(undefined4 *)((longlong)*(int *)param_1[1] * 0x88 + 8 + lVar3) = *(undefined4 *)param_1[3];
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 140c65e10 FUN_140c65e10 body=121 status=ok
// SIG undefined FUN_140c65e10(void)

void FUN_140c65e10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    lVar2 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(param_3 + 0x668), lVar2 != 0)) {
      puVar3 = (undefined8 *)FName::FName(local_res18,L"CityMission",1);
      FUN_142df3080(lVar2,1,*puVar3);
    }
  }
  return;
}



// FUNCTION 140c65e90 FUN_140c65e90 body=267 status=ok
// SIG undefined FUN_140c65e90(void)

void FUN_140c65e90(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0x38);
  if (lVar5 != 0) {
    lVar2 = FUN_142e19bc0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c65eef;
  }
  lVar5 = 0;
LAB_140c65eef:
  lVar2 = FUN_142e19c70();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = FUN_142e19c70();
    uVar3 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    FUN_142d63210(uVar3,lVar5);
    *(undefined8 *)(param_2 + 0x38) = uVar3;
  }
  return;
}



// FUNCTION 140c65fa0 FUN_140c65fa0 body=261 status=ok
// SIG undefined FUN_140c65fa0(void)

undefined8 FUN_140c65fa0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_2;
  plVar1 = plVar5 + (int)param_2[1];
  if (plVar5 != plVar1) {
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        lVar4 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 != 0)) {
          lVar4 = UActionBuff::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar2 + 0x1d0) == param_3)) {
            if (*param_2 != 0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    plVar5 = (longlong *)*param_2;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return 0;
}



// FUNCTION 140c660b0 FUN_140c660b0 body=405 status=ok
// SIG undefined FUN_140c660b0(void)

void FUN_140c660b0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 local_res10 [8];
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  iVar9 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar9 = 0;
  }
  local_30 = iVar9 + 0x66;
  if (0 < local_30) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  }
  uVar4 = local_2c;
  iVar3 = local_30;
  pwVar2 = local_38;
  builtin_wcsncpy(local_38,
                  L"/Game/Maps/Zone_4/Desolate/Desolate_M_DestroyerOfWorlds.Desolate_M_DestroyerOfWorlds:PersistentLevel."
                  ,0x65);
  _guard_xfg_dispatch_icall_nop(local_38 + 0x65,(void *)*param_2,(longlong)iVar9 * 2);
  pwVar2[(longlong)iVar9 + 0x65] = L'\0';
  if ((int)param_2[1] == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  local_28 = pwVar2;
  local_20 = iVar3;
  local_1c = uVar4;
  puVar5 = (undefined8 *)FName::FName(local_res10,puVar8,1);
  uVar1 = *puVar5;
  uVar6 = FUN_1428dfc70();
  lVar7 = StaticFindObjectFastExplicit(uVar6,uVar1,&local_28,0,0);
  if (lVar7 != 0) {
    FUN_14223d380(lVar7,1);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c66250 FUN_140c66250 body=1520 status=ok
// SIG undefined FUN_140c66250(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140c66250(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  int *piVar13;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  lVar10 = 0;
  if (cVar4 == '\0') {
LAB_140c662db:
    bVar3 = false;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar6 + 0xc);
    lVar6 = lVar10;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar12 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar12;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) != 0) goto LAB_140c662db;
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar13 < DAT_14686d9e8) && (_Init_thread_header(&DAT_14686d9e8), DAT_14686d9e8 == -1)) {
    FName::FName(&DAT_14686d9e0,L"Initialization_InitialBoot",1);
    _Init_thread_footer(&DAT_14686d9e8);
  }
  if ((*piVar13 < DAT_14686d9f8) && (_Init_thread_header(&DAT_14686d9f8), DAT_14686d9f8 == -1)) {
    FName::FName(&DAT_14686d9f0,L"Initialization_AmmoBar",1);
    _Init_thread_footer(&DAT_14686d9f8);
  }
  if ((*piVar13 < DAT_14686da08) && (_Init_thread_header(&DAT_14686da08), DAT_14686da08 == -1)) {
    FName::FName(&DAT_14686da00,L"Initialization_ShieldBar",1);
    _Init_thread_footer(&DAT_14686da08);
  }
  if ((*piVar13 < DAT_14686da18) && (_Init_thread_header(&DAT_14686da18), DAT_14686da18 == -1)) {
    FName::FName(&DAT_14686da10,L"Initialization_MissionTracker",1);
    _Init_thread_footer(&DAT_14686da18);
  }
  if ((*piVar13 < DAT_14686da28) && (_Init_thread_header(&DAT_14686da28), DAT_14686da28 == -1)) {
    FName::FName(&DAT_14686da20,L"Initialization_Grenades",1);
    _Init_thread_footer(&DAT_14686da28);
  }
  if ((char)param_1[2] == '\0') {
    return;
  }
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x7c0) != '\0') {
    return;
  }
  if (*(char *)(lVar6 + 0x920) != '\0') {
    iVar2 = *(int *)(lVar6 + 0x918);
    *(int *)(lVar6 + 0x918) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x91c) < iVar2 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow((longlong *)(lVar6 + 0x910),iVar2);
    }
    *(char *)((longlong)iVar2 + *(longlong *)(lVar6 + 0x910)) = (char)param_1[2];
    return;
  }
  if (*(longlong *)(lVar6 + 0x630) != 0) {
    lVar6 = (**(code **)(*(longlong *)(*(longlong *)(lVar6 + 0x630) + 0x980) + 0x10))();
    if (lVar6 == 0) {
LAB_140c663fd:
      lVar6 = lVar10;
    }
    else {
      lVar7 = FUN_1414d9130();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140c663fd;
    }
    lVar7 = (**(code **)(**(longlong **)(*param_1 + 0x630) + 0xfa8))();
    if ((lVar7 != 0) && (lVar6 != 0)) {
      uVar8 = (**(code **)(**(longlong **)(*param_1 + 0x630) + 0xfa8))();
      lVar6 = FUN_142f02280(uVar8,*(undefined8 *)(lVar6 + 0x3e0));
      if (lVar6 == 0) {
LAB_140c66485:
        lVar6 = lVar10;
      }
      else {
        lVar7 = FUN_14134ca70();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140c66485;
      }
      FWeakObjectPtr::operator=(*param_1 + 0x660,lVar6);
      cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x660);
      if (cVar4 != '\0') {
        local_38 = FUN_140cc0520;
        uStack_30 = uStack_30 & 0xffffffff00000000;
        lVar6 = FWeakObjectPtr::Get(*param_1 + 0x660);
        lVar10 = *param_1;
        plVar1 = (longlong *)(lVar6 + 0x748);
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_1444da020;
          FWeakObjectPtr::operator=(plVar9 + 1,lVar10);
          *(undefined4 *)(plVar9 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)plVar9 + 0x14) = local_38._4_4_;
          *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_30._4_4_;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[5] = lVar10;
          *plVar9 = (longlong)&PTR_FUN_1444da068;
        }
        if (&local_38 != plVar1) {
          if (plVar9 == (longlong *)0x0) {
            if ((*(int *)(lVar6 + 0x750) != 0) &&
               (plVar9 = (longlong *)*plVar1, plVar9 != (longlong *)0x0)) {
              (**(code **)(*plVar9 + 0x28))(plVar9,0);
              if (*plVar1 != 0) {
                lVar10 = FMemory::Realloc(*plVar1,0,0);
                *plVar1 = lVar10;
              }
              *(undefined4 *)(lVar6 + 0x750) = 0;
            }
            goto LAB_140c66572;
          }
          (**(code **)(*plVar9 + 0x30))(plVar9,plVar1);
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar10 = FMemory::Realloc(plVar9,0,0);
          if (lVar10 != 0) {
            FMemory::Free(lVar10);
          }
        }
      }
    }
  }
LAB_140c66572:
  cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x660);
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = (char)param_1[2];
  uVar8 = 0;
  if (cVar4 == '\x01') {
    uVar8 = 1;
    *(undefined1 *)(*param_1 + 0x920) = 1;
    plVar1 = *(longlong **)(*param_1 + 0x5e8);
    uVar11 = DAT_14686d9e0;
  }
  else if (cVar4 == '\x02') {
    *(undefined1 *)(*param_1 + 0x920) = 5;
    plVar1 = *(longlong **)(*param_1 + 0x5e8);
    uVar11 = DAT_14686d9f0;
  }
  else if (cVar4 == '\x03') {
    *(undefined1 *)(*param_1 + 0x920) = 6;
    plVar1 = *(longlong **)(*param_1 + 0x5e8);
    uVar11 = DAT_14686da00;
  }
  else if (cVar4 == '\x04') {
    *(undefined1 *)(*param_1 + 0x920) = 4;
    plVar1 = *(longlong **)(*param_1 + 0x5e8);
    uVar11 = DAT_14686da10;
  }
  else {
    if (cVar4 != '\x05') goto LAB_140c666b8;
    *(undefined1 *)(*param_1 + 0x920) = 7;
    plVar1 = *(longlong **)(*param_1 + 0x5e8);
    uVar11 = DAT_14686da20;
  }
  if (plVar1 != (longlong *)0x0) {
    local_38 = (code *)0x0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x4e8))(plVar1,uVar11,&local_38);
  }
LAB_140c666b8:
  uVar11 = FWeakObjectPtr::Get(*param_1 + 0x660);
  FUN_140f509b0(uVar11,uVar8,*(undefined1 *)(*param_1 + 0x920));
  return;
}



// FUNCTION 140c66840 FUN_140c66840 body=1076 status=ok
// SIG undefined FUN_140c66840(void)

void FUN_140c66840(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  FUN_143013fe0(&local_c8,param_2,*(undefined4 *)*param_1,*(undefined8 *)param_1[1],0,0,0,0);
  iVar3 = (int)local_c0;
  uVar10 = (ulonglong)(int)local_c0;
  if ((0 < (int)local_c0) && (*local_c8 != 0)) {
    if ((int)local_c0 < 1) {
      iVar11 = 1 - (int)local_c0;
      iVar3 = (int)local_c0 + iVar11;
      local_c0 = CONCAT44(local_c0._4_4_,iVar3);
      if (local_c0._4_4_ < iVar3) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_c8);
      }
      plVar7 = local_c8 + uVar10 * 0xc;
      if (iVar11 != 0) {
        lVar5 = (longlong)plVar7 + 0x44;
        do {
          *(undefined8 *)(lVar5 + -0x24) = 0;
          *(undefined8 *)(lVar5 + -0x1c) = 0;
          *(undefined1 *)(lVar5 + -0x14) = 0;
          *(undefined8 *)(lVar5 + -0xc) = 0;
          *(undefined8 *)(lVar5 + -4) = 0;
          *(undefined8 *)(lVar5 + 4) = 0;
          *(undefined8 *)(lVar5 + 0xc) = 0;
          _guard_xfg_dispatch_icall_nop(plVar7,0,0x60);
          plVar7 = plVar7 + 0xc;
          *(undefined2 *)(lVar5 + 0x14) = 1;
          lVar5 = lVar5 + 0x60;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    else if ((1 < (int)local_c0) && (iVar11 = (int)local_c0 + -1, iVar11 != 0)) {
      plVar7 = local_c8 + 0x13;
      iVar8 = iVar11;
      do {
        if (plVar7[2] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar7 + -3);
        plVar7 = plVar7 + 0xc;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar8 = ((int)local_c0 - iVar11) + -1;
      if (iVar8 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (local_c8 + 0xc,local_c8 + (longlong)iVar3 * 0xc,(longlong)iVar8 * 0x60);
      }
      local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 - iVar11);
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(&local_c8);
    }
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_143018ff0(&local_c8,*(undefined8 *)param_1[1],&local_b8,0);
    plVar7 = local_b8 + (int)local_b0;
    for (plVar12 = local_b8; plVar12 != plVar7; plVar12 = plVar12 + 1) {
      plVar1 = (longlong *)*plVar12;
      if (plVar1 == (longlong *)0x0) {
LAB_140c66a7b:
        lVar5 = 0;
      }
      else {
        uVar4 = FUN_14301f8f0();
        lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
        if (lVar5 == 0) goto LAB_140c66a7b;
        lVar6 = FUN_14142bde0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140c66a7b;
      }
      if (lVar5 != 0) {
        lVar6 = *(longlong *)param_1[2];
        iVar3 = *(int *)(lVar6 + 0xd0);
        *(int *)(lVar6 + 0xd0) = iVar3 + 1;
        if (*(int *)(lVar6 + 0xd4) < iVar3 + 1) {
          TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
                    (lVar6 + 200,iVar3);
        }
        lVar6 = (longlong)iVar3 * 0xb0 + *(longlong *)(lVar6 + 200);
        FUN_142fde660(lVar6);
        *(undefined8 *)(lVar6 + 0x80) = 0;
        *(undefined8 *)(lVar6 + 0xa0) = 0;
        *(undefined4 *)(lVar6 + 0xac) = 0;
        *(undefined4 *)(lVar6 + 0x88) = 0xffffffff;
        *(undefined4 *)(lVar6 + 0x8c) = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined4 *)(lVar6 + 0xa8) = 0;
        if (0x7fffffff < *(uint *)(lVar6 + 0xac)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar6 + 0xa0,0);
        }
        if (*(undefined2 **)(lVar6 + 0xa0) != (undefined2 *)0x0) {
          **(undefined2 **)(lVar6 + 0xa0) = 0;
        }
        *(undefined4 *)(lVar6 + 0x90) = 0;
        *(undefined4 *)(lVar6 + 0x80) = *(undefined4 *)param_1[3];
        *(int *)param_1[3] = *(int *)param_1[3] + 1;
        *(undefined4 *)(lVar6 + 0x84) = 0;
        _guard_xfg_dispatch_icall_nop(local_a8,0,0x68);
        FUN_142ff3000(lVar5,local_a8);
        FUN_143001d10(lVar6);
        if (local_58 != 0) {
          FMemory::Free();
        }
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_142227350(plVar1,0,1);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    uVar10 = local_c0 & 0xffffffff;
  }
  if ((int)uVar10 != 0) {
    plVar7 = local_c8 + 7;
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar7 + -3);
      plVar7 = plVar7 + 0xc;
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 != 0);
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c66c80 FUN_140c66c80 body=755 status=ok
// SIG undefined FUN_140c66c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c66c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  undefined1 local_90 [40];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  if (param_4 != 1) {
    return;
  }
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 == '\0') {
    return;
  }
  uVar3 = FWeakObjectPtr::Get(param_1);
  cVar2 = UWorld::IsGameWorld(uVar3);
  if (cVar2 == '\0') {
    return;
  }
  uVar3 = FUN_14171bfe0();
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = local_c8 & 0xffffff00;
  lVar4 = FUN_141799680(uVar3,param_3,DAT_14686d550,0);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  local_a8[0] = 0;
  local_a8[1] = 0x73;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/Maps/Sanctuary3/Sanctuary3_Mission.Sanctuary3_Mission:PersistentLevel.IO_MissionPlaceable_Static_MayhemKey_2"
             ,0xe6);
  uVar3 = FUN_1428dfc70();
  puVar6 = (undefined8 *)FName::FName(local_98,L"IO_MissionPlaceable_Static_MayhemKey_2",1);
  local_c8 = 0;
  lVar5 = StaticFindObjectFastExplicit(uVar3,*puVar6,local_a8,0);
  if (lVar5 != 0) {
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c66df3;
  }
  lVar5 = 0;
LAB_140c66df3:
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    local_c8 = CONCAT31(local_c8._1_3_,1);
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = uRam000000014686c56c;
    local_38 = 0x3fa00000;
    uStack_34 = 0x3fa00000;
    uStack_30 = 0x3fa00000;
    uStack_2c = 0;
    local_48 = 0x46878c00;
    uStack_44 = 0xc3730000;
    uStack_40 = 0x42480000;
    uStack_3c = 0;
    FUN_14223d270(lVar5,&local_58,0,0);
  }
  local_a8[0] = 0;
  local_a8[1] = 0x5f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8[0],
             L"/Game/Maps/Sanctuary3/Sanctuary3_Mission.Sanctuary3_Mission:PersistentLevel.IO_MayhemStation_2"
             ,0xbe);
  puVar6 = (undefined8 *)FName::FName(local_98,L"IO_MayhemStation_2",1);
  uVar3 = *puVar6;
  uVar8 = FUN_1428dfc70();
  local_c8 = 0;
  plVar9 = (longlong *)StaticFindObjectFastExplicit(uVar8,uVar3,local_a8,0);
  if ((plVar9 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar9 + 0x148))(plVar9), lVar5 != 0)) {
    FUN_142543860(lVar5,plVar9,0,1);
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  uVar3 = FWeakObjectPtr::Get(param_1);
  cVar2 = FUN_1428cfb70(uVar3);
  if (cVar2 != '\0') {
    local_38 = _DAT_14686c560 & _DAT_14686c570;
    uStack_34 = uRam000000014686c564 & uRam000000014686c574;
    uStack_30 = uRam000000014686c568 & uRam000000014686c578;
    uStack_2c = uRam000000014686c56c & uRam000000014686c57c;
    local_48 = 0x46878c00;
    uStack_44 = 0xc3730000;
    uStack_40 = 0xc2c80000;
    uStack_3c = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = uRam000000014686c56c;
    FActorSpawnParameters::FActorSpawnParameters(local_90);
    local_68 = 1;
    uVar3 = FWeakObjectPtr::Get(param_1);
    FUN_1425518b0(uVar3,lVar4,&local_58,local_90);
  }
  return;
}



// FUNCTION 140c66f80 FUN_140c66f80 body=828 status=ok
// SIG undefined FUN_140c66f80(void)

void FUN_140c66f80(undefined8 *param_1,longlong param_2,int param_3,uint param_4,undefined8 param_5)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  undefined4 local_res8 [2];
  int local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  uint local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong local_d8 [2];
  longlong *local_c8;
  int iStack_c0;
  uint uStack_bc;
  uint *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  uint uStack_88;
  uint uStack_84;
  undefined8 uStack_80;
  
  local_res8[0] = 0;
  FString::PrintfImpl(local_d8,L"----------- %s -----------------------",param_5);
  FUN_1428a6fb0(*param_1,local_d8,local_res8);
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  uStack_f4 = 1;
  plVar1 = (longlong *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar2 = (uint *)(param_2 + 0x18);
  local_f8 = 0;
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_e0 = 0;
    local_f8 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_f8;
      iStack_e0 = iStack_e0 + 0x20;
      iVar7 = local_f8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
      local_f8 = iVar7;
      if (bVar5) goto LAB_140c670b0;
      uVar4 = puVar12[lVar9 + 1];
    }
    uStack_f4 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_e4 = (iStack_e0 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_e4) {
LAB_140c670b0:
      uStack_e4 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x30);
  uStack_b0 = 0xffffffff;
  uStack_ac = uStack_e4;
  local_a8 = CONCAT44(uStack_dc,iStack_e0);
  uStack_98 = CONCAT44(uStack_f4,local_f8);
  local_e8 = -1 << ((byte)uVar4 & 0x1f);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_c0 = local_f8;
  uStack_bc = uStack_f4;
  uStack_e4 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar8 = puVar12[(int)uVar4 >> 5] & local_e8;
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140c67172;
      uVar8 = puVar12[(longlong)iVar7 + 1];
      local_e8 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_e4 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_e4) {
LAB_140c67172:
      uStack_e4 = uVar3;
    }
  }
  uVar3 = uStack_e4;
  puStack_f0 = puVar2;
  local_b8 = puVar2;
  local_a0 = plVar1;
  puStack_90 = puVar2;
  uStack_80 = local_a8;
  local_c8 = plVar1;
  uStack_88 = uStack_b0;
  uStack_84 = uStack_ac;
  while (((uStack_ac != uVar3 || (local_b8 != puVar2)) || (local_c8 != plVar1))) {
    lVar9 = *local_c8 + (longlong)(int)uStack_ac * 0x18;
    if (*(int *)(*local_c8 + 0xc + (longlong)(int)uStack_ac * 0x18) == param_3) {
      fVar13 = (float)*(uint *)(lVar9 + 8) / (float)param_4;
      if (0.0 <= fVar13) {
        if (1.0 <= fVar13) {
          fVar13 = 1.0;
        }
      }
      else {
        fVar13 = 0.0;
      }
      puVar6 = (undefined8 *)FName::ToString(lVar9,&local_f8);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(local_d8,L"%s : %d (%.2f%%)",puVar10,*(undefined4 *)(lVar9 + 8),
                          (double)(fVar13 * 100.0));
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FMemory::Free();
      }
      local_res8[0] = 0;
      FUN_1428a6fb0(*param_1,local_d8,local_res8);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
    }
    uStack_b0 = uStack_b0 & ~uStack_bc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
  }
  return;
}



// FUNCTION 140c672c0 FUN_140c672c0 body=527 status=ok
// SIG undefined FUN_140c672c0(void)

int FUN_140c672c0(undefined8 param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
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
  
  iVar10 = 0;
  uStack_84 = 1;
  plVar1 = (longlong *)(param_2 + 8);
  local_88 = 0;
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar2 = (uint *)(param_2 + 0x18);
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar4 = *puVar11;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_140c6739d;
      uVar4 = puVar11[lVar6 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_140c6739d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar8 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar7) goto LAB_140c67463;
      uVar9 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar8 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_140c67463:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    if (*(int *)(*plVar1 + 0xc + (longlong)(int)uStack_4c * 0x18) == param_3) {
      iVar10 = iVar10 + *(int *)(*plVar1 + 8 + (longlong)(int)uStack_4c * 0x18);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return iVar10;
}



// FUNCTION 140c674d0 FUN_140c674d0 body=422 status=ok
// SIG undefined FUN_140c674d0(void)

void FUN_140c674d0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 local_res10 [8];
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  iVar9 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar9 = 0;
  }
  local_40 = iVar9 + 0x66;
  if (0 < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  }
  uVar4 = local_3c;
  iVar3 = local_40;
  pwVar2 = local_48;
  builtin_wcsncpy(local_48,
                  L"/Game/Maps/Zone_4/Desolate/Desolate_M_DestroyerOfWorlds.Desolate_M_DestroyerOfWorlds:PersistentLevel."
                  ,0x65);
  _guard_xfg_dispatch_icall_nop(local_48 + 0x65,(void *)*param_2,(longlong)iVar9 * 2);
  pwVar2[(longlong)iVar9 + 0x65] = L'\0';
  if ((int)param_2[1] == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  local_38 = pwVar2;
  local_30 = iVar3;
  local_2c = uVar4;
  puVar5 = (undefined8 *)FName::FName(local_res10,puVar8,1);
  uVar1 = *puVar5;
  uVar6 = FUN_1428dfc70();
  lVar7 = StaticFindObjectFastExplicit(uVar6,uVar1,&local_38,0,0);
  if (lVar7 != 0) {
    FUN_14223e8c0(lVar7,param_3);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c676b0 FUN_140c676b0 body=38 status=ok
// SIG undefined FUN_140c676b0(void)

undefined8 * FUN_140c676b0(undefined8 *param_1,byte param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c676e0 FUN_140c676e0 body=93 status=ok
// SIG undefined FUN_140c676e0(void)

undefined8 * FUN_140c676e0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67740 FUN_140c67740 body=124 status=ok
// SIG undefined FUN_140c67740(void)

undefined8 * FUN_140c67740(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_FUN_1444d6648;
  *param_1 = &PTR_FUN_1444d6648;
  if (param_1[1] != 0) {
    do {
      lVar1 = *(longlong *)(param_1[1] + 8);
      FMemory::Free();
      param_1[1] = lVar1;
    } while (lVar1 != 0);
    ppuVar2 = (undefined **)*param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  (*(code *)ppuVar2[1])(param_1,0);
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c677c0 FUN_140c677c0 body=38 status=ok
// SIG undefined FUN_140c677c0(void)

undefined8 * FUN_140c677c0(undefined8 *param_1,byte param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c677f0 FUN_140c677f0 body=38 status=ok
// SIG undefined FUN_140c677f0(void)

undefined8 * FUN_140c677f0(undefined8 *param_1,byte param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c67820 FUN_140c67820 body=92 status=ok
// SIG undefined FUN_140c67820(void)

undefined8 * FUN_140c67820(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1444d95c8;
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
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67880 FUN_140c67880 body=92 status=ok
// SIG undefined FUN_140c67880(void)

undefined8 * FUN_140c67880(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1444d95d8;
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
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c678e0 FUN_140c678e0 body=92 status=ok
// SIG undefined FUN_140c678e0(void)

undefined8 * FUN_140c678e0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1444d95e8;
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
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67940 FUN_140c67940 body=38 status=ok
// SIG undefined FUN_140c67940(void)

undefined8 * FUN_140c67940(undefined8 *param_1,byte param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c67970 FUN_140c67970 body=47 status=ok
// SIG undefined FUN_140c67970(void)

undefined8 FUN_140c67970(undefined8 param_1,uint param_2)

{
  FUN_140c646f0();
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c679a0 FUN_140c679a0 body=47 status=ok
// SIG undefined FUN_140c679a0(void)

undefined8 FUN_140c679a0(undefined8 param_1,uint param_2)

{
  FUN_140c64760();
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c679d0 FUN_140c679d0 body=47 status=ok
// SIG undefined FUN_140c679d0(void)

undefined8 FUN_140c679d0(undefined8 param_1,uint param_2)

{
  FUN_140c64950();
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67a00 FUN_140c67a00 body=47 status=ok
// SIG undefined FUN_140c67a00(void)

undefined8 FUN_140c67a00(undefined8 param_1,uint param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67a30 FUN_140c67a30 body=67 status=ok
// SIG undefined FUN_140c67a30(void)

undefined8 * FUN_140c67a30(undefined8 *param_1,uint param_2)

{
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c5f0;
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67a80 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimMode_OrientationWarping::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c5f0;
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67ad0 FUN_140c67ad0 body=47 status=ok
// SIG undefined FUN_140c67ad0(void)

undefined8 FUN_140c67ad0(undefined8 param_1,uint param_2)

{
  FUN_140c64b70();
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67b00 `scalar_deleting_destructor' body=45 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FCanvasTextItemBase::_scalar_deleting_destructor_(undefined8 *param_1,byte param_2)

{
  param_1[0x15] = &PTR_FUN_143f4c5f0;
  *param_1 = &PTR_FUN_143f4c5f0;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c67b30 FUN_140c67b30 body=67 status=ok
// SIG undefined FUN_140c67b30(void)

undefined8 * FUN_140c67b30(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67b80 FUN_140c67b80 body=352 status=ok
// SIG undefined FUN_140c67b80(void)

undefined8 * FUN_140c67b80(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *param_1 = &PTR_FUN_1444d9568;
  local_18 = 0;
  uStack_10 = 0;
  FMovieViewport::SetTexture(param_1[4],&local_18);
  if (param_1[6] != 0) {
    FUN_141edf360();
  }
  FUN_141ee24f0();
  local_20 = (longlong *)0x0;
  if (param_1 + 6 != &local_28) {
    param_1[6] = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_20);
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
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
  plVar4 = (longlong *)param_1[5];
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR__purecall_1441753d8;
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67ce0 FUN_140c67ce0 body=179 status=ok
// SIG undefined FUN_140c67ce0(void)

undefined8 * FUN_140c67ce0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1444d8e78;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x14);
  plVar4 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR__scalar_deleting_destructor__1444d8080;
  FTickableObjectRenderThread::Unregister(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67da0 FUN_140c67da0 body=94 status=ok
// SIG undefined FUN_140c67da0(void)

undefined8 * FUN_140c67da0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_1444d7320;
  TBaseMulticastDelegate<void>::Remove(&DAT_146535868,param_1[1]);
  TBaseMulticastDelegate<void>::Remove(&DAT_1464b57d0,param_1[3]);
  *param_1 = &PTR_FUN_1444d72e8;
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67e00 FUN_140c67e00 body=59 status=ok
// SIG undefined FUN_140c67e00(void)

longlong FUN_140c67e00(longlong param_1,uint param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x40);
  FSlotBase::~FSlotBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67e40 FUN_140c67e40 body=38 status=ok
// SIG undefined FUN_140c67e40(void)

undefined8 * FUN_140c67e40(undefined8 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_1444d72e8;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c67e70 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTickableObjectRenderThread::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1444d8080;
  Unregister();
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c67eb0 FUN_140c67eb0 body=38 status=ok
// SIG undefined FUN_140c67eb0(void)

undefined8 * FUN_140c67eb0(undefined8 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_1444d6628;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c67ee0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SUniformGridPanel::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140c64ce0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 140c67f30 FUN_140c67f30 body=78 status=ok
// SIG undefined FUN_140c67f30(void)

undefined8 FUN_140c67f30(undefined8 param_1,ulonglong param_2)

{
  FUN_140c64d70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 140c67f80 FUN_140c67f80 body=78 status=ok
// SIG undefined FUN_140c67f80(void)

undefined8 FUN_140c67f80(undefined8 param_1,ulonglong param_2)

{
  FUN_140c64de0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3a8);
  }
  return param_1;
}



// FUNCTION 140c67fd0 FUN_140c67fd0 body=137 status=ok
// SIG undefined FUN_140c67fd0(void)

longlong FUN_140c67fd0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 400);
  iVar2 = *(int *)(param_1 + 0x180);
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (iVar2 != 0) {
    do {
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x178);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c68060 FUN_140c68060 body=102 status=ok
// SIG undefined FUN_140c68060(void)

longlong FUN_140c68060(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  FUN_140c64e70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c680d0 FUN_140c680d0 body=185 status=ok
// SIG undefined FUN_140c680d0(void)

longlong FUN_140c680d0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x338);
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
  plVar4 = *(longlong **)(param_1 + 0x328);
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
  FUN_14246f910(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c68190 FUN_140c68190 body=47 status=ok
// SIG undefined FUN_140c68190(void)

undefined8 FUN_140c68190(undefined8 param_1,uint param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::Free(param_1);
  }
  return param_1;
}



// FUNCTION 140c681c0 FUN_140c681c0 body=155 status=ok
// SIG undefined FUN_140c681c0(void)

void FUN_140c681c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x6d0) != 0) {
    iVar3 = *(int *)(param_1 + 0x6d0);
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    for (plVar4 = plVar1; plVar4 != plVar1 + iVar3; plVar4 = plVar4 + 1) {
      if ((*plVar4 != 0) && (cVar2 = FUN_142ebe180(), cVar2 != '\0')) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
        if (iVar3 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0x6d0) <= iVar3) {
          return;
        }
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6c8) + (longlong)iVar3 * 8) + 0x558))
                  ();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c68260 FUN_140c68260 body=14 status=ok
// SIG undefined FUN_140c68260(void)

void FUN_140c68260(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x798,0);
  return;
}



// FUNCTION 140c68270 FUN_140c68270 body=76 status=ok
// SIG undefined FUN_140c68270(void)

void FUN_140c68270(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 600));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 600));
  }
  TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000140c682b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 600));
  return;
}



// FUNCTION 140c682c0 AddDefaulted_GetRef body=64 status=ok
// SIG undefined AddDefaulted_GetRef(void)

void TArray<TDelegate<void___cdecl(FVectorVMContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
     ::AddDefaulted_GetRef(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  return;
}



// FUNCTION 140c68300 FUN_140c68300 body=228 status=ok
// SIG undefined FUN_140c68300(void)

undefined2 * FUN_140c68300(longlong *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  puVar2 = (undefined2 *)((longlong)iVar1 * 0x78 + *param_1);
  *puVar2 = 4;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 0x1c) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  if (0x7fffffff < *(uint *)(puVar2 + 0x22)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + 0x1c,0);
  }
  if (*(undefined2 **)(puVar2 + 0x1c) != (undefined2 *)0x0) {
    **(undefined2 **)(puVar2 + 0x1c) = 0;
  }
  *(undefined4 *)(puVar2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x34) = 0;
  *(undefined4 *)(puVar2 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x26) = 0;
  *(undefined8 *)(puVar2 + 0x2c) = 0;
  *(undefined4 *)(puVar2 + 0x34) = 0;
  if ((*(int *)(puVar2 + 0x36) < 0) && (*(int *)(puVar2 + 0x36) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + 0x30,0);
  }
  if (*(undefined2 **)(puVar2 + 0x30) != (undefined2 *)0x0) {
    **(undefined2 **)(puVar2 + 0x30) = 0;
  }
  *(undefined4 *)(puVar2 + 0x28) = 0;
  *(undefined4 *)(puVar2 + 0x38) = 0;
  *(undefined1 *)(puVar2 + 0x3a) = 0;
  return puVar2;
}



// FUNCTION 140c683f0 FUN_140c683f0 body=88 status=ok
// SIG undefined FUN_140c683f0(void)

void FUN_140c683f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (((byte)param_2 != 0) && (lVar1 = FUN_140cb7010(param_1,param_2,1), lVar1 != 0)) {
    FUN_142dafbc0(lVar1,param_3);
    *(uint *)(param_1 + 0x8a8) = *(uint *)(param_1 + 0x8a8) | 1 << ((byte)param_2 - 1 & 0x1f);
  }
  return;
}



// FUNCTION 140c68450 FUN_140c68450 body=161 status=ok
// SIG undefined FUN_140c68450(void)

undefined8
FUN_140c68450(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined4 param_5,undefined8 param_6)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  if (param_3 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_3 + 0x148))(param_3);
    if (lVar2 != 0) {
      lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
      if ((lVar2 != 0) && (lVar2 = lVar2 + ((ulonglong)bVar1 * 3 + 0x1c1) * 4, lVar2 != 0)) {
        FUN_142470da0(lVar2,param_2,param_4,param_5,param_6);
        return param_2;
      }
    }
  }
  FUN_14246da50(param_2,0);
  return param_2;
}



// FUNCTION 140c68500 FUN_140c68500 body=79 status=ok
// SIG undefined FUN_140c68500(void)

void FUN_140c68500(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong local_res10 [3];
  
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x9e0), local_res10[0] = param_2,
     TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
     AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x9d8,local_res10),
     iVar1 != *(int *)(param_1 + 0x9e0))) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xa18,0);
  }
  return;
}



// FUNCTION 140c68550 FUN_140c68550 body=3122 status=ok
// SIG undefined FUN_140c68550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c68550(void)

{
  longlong local_68 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  local_68[2] = 0;
  local_68[3] = 0x4b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_AtlasHQ.ZoneMapData_AtlasHQ",0x96);
  local_68[0] = 0;
  local_68[1] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc60f7000;
  uStack_34 = 0x44188000;
  uStack_30 = 0x46f80c00;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68,local_68 + 2);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x4f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Monastery.ZoneMapData_Monastery",0x9e)
  ;
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc7490734;
  uStack_34 = 0xc72c4339;
  uStack_30 = 0x462752e9;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x4f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Monastery.ZoneMapData_Monastery",0x9e)
  ;
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc78fca00;
  uStack_34 = 0xc6c4e000;
  uStack_30 = 0x46414800;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x49;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Towers.ZoneMapData_Towers"
             ,0x92);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0x441bd568;
  uStack_34 = 0xc627fd00;
  uStack_30 = 0x442ee2a4;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x49;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Towers.ZoneMapData_Towers"
             ,0x92);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc6ae4d3b;
  uStack_34 = 0xc6754c57;
  uStack_30 = 0x457ee200;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x49;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Towers.ZoneMapData_Towers"
             ,0x92);
  local_68[2] = 0;
  local_68[3] = 0x55;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Health.POI_VendingMachine_Health"
             ,0xaa);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc6ae493a;
  uStack_34 = 0xc67235ea;
  uStack_30 = 0x457ee200;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x4b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Mansion.ZoneMapData_Mansion",0x96);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc608e06d;
  uStack_34 = 0x45f9c88d;
  uStack_30 = 0x45610000;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x4b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Mansion.ZoneMapData_Mansion",0x96);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc6400d94;
  uStack_34 = 0xc5f94465;
  uStack_30 = 0x454e3ffe;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x4b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Mansion.ZoneMapData_Mansion",0x96);
  local_68[2] = 0;
  local_68[3] = 0x55;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Health.POI_VendingMachine_Health"
             ,0xaa);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc63d2f72;
  uStack_34 = 0xc5f93962;
  uStack_30 = 0x454e3ffe;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x4f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Watership.ZoneMapData_Watership",0x9e)
  ;
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc6f5104b;
  uStack_34 = 0xc68b1dcd;
  uStack_30 = 0x453e5ea4;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x5f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_MotorcadeInterior.ZoneMapData_MotorcadeInterior"
             ,0xbe);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0x45d7f99a;
  uStack_34 = 0xc70d36a5;
  uStack_30 = 0x46280bf2;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x47;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Beach.ZoneMapData_Beach",
             0x8e);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0x4710ba00;
  uStack_34 = 0x46a62c00;
  uStack_30 = 0x461f1bd8;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x47;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Beach.ZoneMapData_Beach",
             0x8e);
  local_68[2] = 0;
  local_68[3] = 0x55;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Health.POI_VendingMachine_Health"
             ,0xaa);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0x47116e00;
  uStack_34 = 0x46a62c00;
  uStack_30 = 0x461f1bd8;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x47;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_Crypt.ZoneMapData_Crypt",
             0x8e);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0x46a8ffaa;
  uStack_34 = 0xc6415611;
  uStack_30 = 0x455008b7;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x5b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_OrbitalPlatform.ZoneMapData_OrbitalPlatform"
             ,0xb6);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0xc5a17d4e;
  uStack_34 = 0x46acbbe7;
  uStack_30 = 0xc78a4d40;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x5b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_OrbitalPlatform.ZoneMapData_OrbitalPlatform"
             ,0xb6);
  local_68[2] = 0;
  local_68[3] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Ammo.POI_VendingMachine_Ammo",
             0xa2);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  local_38 = 0x46928cec;
  uStack_34 = 0x46e48b8d;
  uStack_30 = 0xc75402a3;
  uStack_2c = 0;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 0x5b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy
            (local_68[0],
             L"/Game/GameData/ZoneMap/ZoneMapData/ZoneMapData_OrbitalPlatform.ZoneMapData_OrbitalPlatform"
             ,0xb6);
  local_68[2] = 0;
  local_68[3] = 0x55;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy
            (local_68[2],
             L"/Game/GameData/ZoneMap/POI_Types/POI_VendingMachine_Health.POI_VendingMachine_Health"
             ,0xaa);
  local_28 = _DAT_14686c560 & _DAT_14686c570;
  uStack_24 = uRam000000014686c564 & uRam000000014686c574;
  uStack_20 = uRam000000014686c568 & uRam000000014686c578;
  uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
  local_38 = 0xc59adbde;
  uStack_34 = 0x46acb50b;
  uStack_30 = 0xc78a4d40;
  uStack_2c = 0;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014686c56c;
  FUN_140c693f0(&local_48,local_68 + 2,local_68);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c69190 FUN_140c69190 body=68 status=ok
// SIG undefined FUN_140c69190(void)

void FUN_140c69190(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_142470f00();
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_140c413b0(uVar1);
  if (lVar2 != 0) {
    FUN_140c4ddd0(lVar2,param_2);
  }
  return;
}



// FUNCTION 140c691e0 FUN_140c691e0 body=36 status=ok
// SIG undefined FUN_140c691e0(void)

void FUN_140c691e0(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x9e8,local_res10);
  }
  return;
}



// FUNCTION 140c69230 AddUninitialized body=210 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x78 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x78 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 140c69310 AddUninitialized body=210 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 140c693f0 FUN_140c693f0 body=1322 status=ok
// SIG undefined FUN_140c693f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c693f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  short *psVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  longlong *local_res20;
  wchar_t *local_108;
  uint local_100;
  undefined4 local_fc;
  wchar_t *local_f8;
  uint local_f0;
  undefined4 local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong local_c0 [16];
  
  psVar3 = (short *)*param_3;
  iVar21 = *(int *)(param_3 + 1);
  pwVar18 = (wchar_t *)0x0;
  psVar23 = psVar3 + iVar21;
  uVar24 = 0;
  do {
    if (psVar23 == psVar3) {
      iVar17 = -1;
      goto LAB_140c69456;
    }
    psVar23 = psVar23 + -1;
  } while (*psVar23 != 0x2e);
  iVar17 = (int)((longlong)psVar23 - (longlong)psVar3 >> 1);
  if (iVar17 < 0) {
LAB_140c69456:
    bVar7 = false;
  }
  else {
    uVar25 = iVar21 - 1;
    if (iVar21 == 0) {
      uVar25 = uVar24;
    }
    if ((int)uVar25 <= iVar17) goto LAB_140c69456;
    bVar7 = true;
  }
  if (bVar7) {
    uVar25 = iVar17 + 0x80000000;
    uVar26 = iVar21 - 1;
    if (iVar21 == 0) {
      uVar26 = uVar24;
    }
    if (iVar17 + 1U < uVar26) {
      uVar26 = iVar17 + 1U;
    }
    uVar20 = iVar21 - 1;
    if (iVar21 == 0) {
      uVar20 = uVar24;
    }
    uVar24 = uVar26;
    if ((uVar26 <= uVar25) && (uVar24 = uVar20, uVar25 < uVar20)) {
      uVar24 = uVar25;
    }
    local_f8 = (wchar_t *)0x0;
    local_ec = 0;
    psVar23 = &DAT_143f3eda8;
    if (iVar21 != 0) {
      psVar23 = psVar3;
    }
    iVar21 = uVar24 - uVar26;
    uVar24 = iVar21 + 1;
    if (iVar21 == 0) {
      uVar24 = 0;
    }
    local_f0 = uVar24;
    if ((0 < (int)uVar24) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8), uVar24 = local_f0,
       pwVar18 = local_f8, 0 < (int)local_f0)) {
      wcsncpy(local_f8,psVar23 + (int)uVar26,(longlong)iVar21);
      pwVar18[iVar21] = L'\0';
    }
  }
  if ((*(int *)(param_3 + 1) < 2) || ((int)uVar24 < 2)) goto LAB_140c698d2;
  pwVar19 = L"";
  if (uVar24 != 0) {
    pwVar19 = pwVar18;
  }
  puVar10 = (undefined8 *)FName::FName(&local_f8,pwVar19,1);
  uVar13 = *puVar10;
  uVar11 = UMaterialInstanceDynamic::GetPrivateStaticClass();
  lVar12 = StaticFindObjectFastExplicit(uVar11,uVar13,param_3,0,0);
  if (lVar12 == 0) goto LAB_140c698d2;
  psVar3 = (short *)*param_2;
  pwVar19 = (wchar_t *)0x0;
  iVar21 = *(int *)(param_2 + 1);
  uVar24 = 0;
  psVar23 = psVar3 + iVar21;
  do {
    if (psVar23 == psVar3) {
      iVar17 = -1;
      goto LAB_140c695b4;
    }
    psVar23 = psVar23 + -1;
  } while (*psVar23 != 0x2e);
  iVar17 = (int)((longlong)psVar23 - (longlong)psVar3 >> 1);
  if (iVar17 < 0) {
LAB_140c695b4:
    bVar7 = false;
  }
  else {
    uVar25 = iVar21 - 1;
    if (iVar21 == 0) {
      uVar25 = uVar24;
    }
    if ((int)uVar25 <= iVar17) goto LAB_140c695b4;
    bVar7 = true;
  }
  if (bVar7) {
    uVar25 = iVar17 + 0x80000000;
    uVar26 = iVar21 - 1;
    if (iVar21 == 0) {
      uVar26 = uVar24;
    }
    if (iVar17 + 1U < uVar26) {
      uVar26 = iVar17 + 1U;
    }
    uVar20 = iVar21 - 1;
    if (iVar21 == 0) {
      uVar20 = uVar24;
    }
    uVar24 = uVar26;
    if ((uVar26 <= uVar25) && (uVar24 = uVar20, uVar25 < uVar20)) {
      uVar24 = uVar25;
    }
    local_108 = (wchar_t *)0x0;
    local_fc = 0;
    psVar23 = &DAT_143f3eda8;
    if (iVar21 != 0) {
      psVar23 = psVar3;
    }
    iVar21 = uVar24 - uVar26;
    uVar24 = iVar21 + 1;
    if (iVar21 == 0) {
      uVar24 = 0;
    }
    local_100 = uVar24;
    if ((0 < (int)uVar24) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0), uVar24 = local_100,
       pwVar19 = local_108, 0 < (int)local_100)) {
      wcsncpy(local_108,psVar23 + (int)uVar26,(longlong)iVar21);
      pwVar19[iVar21] = L'\0';
    }
  }
  if ((1 < *(int *)(param_2 + 1)) && (1 < (int)uVar24)) {
    pwVar14 = L"";
    if (uVar24 != 0) {
      pwVar14 = pwVar19;
    }
    uVar13 = FUN_1414f8520();
    puVar10 = (undefined8 *)FName::FName(&local_res20,pwVar14,1);
    pwVar14 = (wchar_t *)StaticFindObjectFastExplicit(uVar13,*puVar10,param_2,0,0);
    local_108 = pwVar14;
    if (pwVar14 != (wchar_t *)0x0) {
      lVar15 = FUN_1414f8520();
      if ((*(int *)(*(longlong *)(pwVar14 + 8) + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar14 + 8) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
           ) != lVar15 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        local_res20 = (longlong *)(lVar12 + 0x150);
        bVar7 = false;
        puVar10 = (undefined8 *)*local_res20;
        puVar22 = puVar10 + (longlong)*(int *)(lVar12 + 0x158) * 0xc;
        if (puVar10 != puVar22) {
          do {
            local_c8 = *puVar10;
            FString::FString(local_c0);
            local_e8 = *(float *)(puVar10 + 6);
            fStack_e4 = *(float *)((longlong)puVar10 + 0x34);
            fStack_e0 = *(float *)(puVar10 + 7);
            uStack_dc = *(undefined4 *)((longlong)puVar10 + 0x3c);
            local_d8 = *(float *)(param_1 + 2);
            fStack_d4 = *(float *)((longlong)param_1 + 0x14);
            fStack_d0 = *(float *)(param_1 + 3);
            uStack_cc = *(undefined4 *)((longlong)param_1 + 0x1c);
            if (((0.0001 < ABS(local_e8 - local_d8)) || (0.0001 < ABS(fStack_e4 - fStack_d4))) ||
               (0.0001 < ABS(fStack_e0 - fStack_d0))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              bVar7 = true;
            }
            if (local_c0[0] != 0) {
              FMemory::Free();
            }
            puVar10 = puVar10 + 0xc;
          } while (puVar10 != puVar22);
          pwVar14 = local_108;
          if (bVar7) goto LAB_140c698c5;
        }
        plVar9 = local_res20;
        iVar21 = (int)local_res20[1];
        *(int *)(local_res20 + 1) = iVar21 + 1;
        if (*(int *)((longlong)local_res20 + 0xc) < iVar21 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(local_res20);
        }
        lVar15 = *plVar9;
        lVar16 = (longlong)iVar21 * 0x60;
        *(undefined8 *)(lVar16 + lVar15) = 0;
        *(undefined8 *)(lVar16 + 8 + lVar15) = 0;
        *(undefined8 *)(lVar16 + 0x10 + lVar15) = 0;
        uVar24 = uRam000000014686c56c;
        puVar10 = (undefined8 *)(lVar16 + 0x30 + lVar15);
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar1 = (undefined4 *)(lVar16 + 0x20 + lVar15);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = uVar24;
        uVar24 = uRam000000014686c564 & uRam000000014686c574;
        uVar25 = uRam000000014686c568 & uRam000000014686c578;
        uVar26 = uRam000000014686c56c & uRam000000014686c57c;
        puVar2 = (uint *)(lVar16 + 0x40 + lVar15);
        *puVar2 = _DAT_14686c560 & _DAT_14686c570;
        puVar2[1] = uVar24;
        puVar2[2] = uVar25;
        puVar2[3] = uVar26;
        *(undefined8 *)(lVar16 + 0x50 + lVar15) = 0xffffffffffffffff;
        *(undefined8 *)(lVar16 + 0x58 + lVar15) = 0;
        if ((iVar21 < 0) || (*(int *)(lVar12 + 0x158) <= iVar21)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          *(wchar_t **)(lVar16 + *plVar9) = pwVar14;
          uVar13 = param_1[1];
          lVar12 = *plVar9;
          puVar10 = (undefined8 *)(lVar16 + 0x20 + lVar12);
          *puVar10 = *param_1;
          puVar10[1] = uVar13;
          uVar13 = param_1[3];
          puVar10 = (undefined8 *)(lVar16 + 0x30 + lVar12);
          *puVar10 = param_1[2];
          puVar10[1] = uVar13;
          uVar4 = *(undefined4 *)((longlong)param_1 + 0x24);
          uVar5 = *(undefined4 *)(param_1 + 5);
          uVar6 = *(undefined4 *)((longlong)param_1 + 0x2c);
          puVar1 = (undefined4 *)(lVar16 + 0x40 + lVar12);
          *puVar1 = *(undefined4 *)(param_1 + 4);
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
        }
      }
    }
  }
LAB_140c698c5:
  if (pwVar19 != (wchar_t *)0x0) {
    FMemory::Free(pwVar19);
  }
LAB_140c698d2:
  if (pwVar18 != (wchar_t *)0x0) {
    FMemory::Free(pwVar18);
  }
  return;
}



// FUNCTION 140c69920 FUN_140c69920 body=785 status=ok
// SIG undefined FUN_140c69920(void)

void FUN_140c69920(longlong param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *local_48;
  int local_40;
  
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x181) == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if ((*(char *)(param_1 + 0x181) != '\0') && (*(char *)(param_1 + 0x180) == '\0')) {
      uVar6 = 0x3ff00000;
      goto LAB_140c6995e;
    }
  }
  uVar6 = 0;
LAB_140c6995e:
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DefaultFeature.MotionBlur");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_48,&DAT_143f3edc0,cVar3);
    puVar2 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar4 = 0x3fe00000;
  uVar5 = uVar4;
  if (cVar3 == '\0') {
    uVar5 = 0xbff00000;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MotionBlur.Amount");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_48,&DAT_144050d74,(ulonglong)uVar5 << 0x20);
    puVar2 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar5 = uVar4;
  if (cVar3 == '\0') {
    uVar5 = 0xbff00000;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MotionBlur.Max");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_48,&DAT_144050d74,(ulonglong)uVar5 << 0x20);
    puVar2 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (cVar3 == '\0') {
    uVar4 = 0xbff00000;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MotionBlur.PerObjectSize");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_48,&DAT_144050d74,(ulonglong)uVar4 << 0x20);
    puVar2 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MotionBlur.ObjectOnly");
  if (plVar1 != (longlong *)0x0) {
    FString::PrintfImpl(&local_48,&DAT_144050d74,(ulonglong)uVar6 << 0x20);
    puVar2 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c69c40 FUN_140c69c40 body=3324 status=ok
// SIG undefined FUN_140c69c40(void)

void FUN_140c69c40(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int iVar9;
  byte bVar10;
  float fVar11;
  undefined2 *local_58;
  int local_50;
  
  UTimelineComponent::SetDirectionPropertyName(param_1,*(undefined8 *)(param_1 + 0x158));
  uVar7 = 100;
  switch(*(undefined1 *)(param_1 + 0x178)) {
  case 0:
    uVar7 = 0x32;
    break;
  case 1:
    uVar7 = 0x4b;
    break;
  case 3:
    uVar7 = 0x7d;
    break;
  case 4:
    uVar7 = 0x96;
    break;
  case 5:
    uVar7 = 0xaf;
    break;
  case 6:
    uVar7 = 200;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ScreenPercentage");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,uVar7);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140ccf440(param_1,*(undefined1 *)(param_1 + 0x179));
  FUN_140c69920(param_1);
  FUN_140c69920(param_1);
  cVar1 = *(char *)(param_1 + 0x182);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.CAS.Enable");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,cVar1 != '\0');
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140cd0420(param_1,*(undefined1 *)(param_1 + 0x185));
  FUN_140ccf940(param_1,*(undefined1 *)(param_1 + 0x186));
  FUN_140ccd420(*(undefined4 *)(param_1 + 0x188));
  cVar1 = *(char *)(param_1 + 0x18c);
  bVar10 = 2;
  bVar6 = 1;
  if ((cVar1 != '\0') && (bVar6 = bVar10, cVar1 != '\x01')) {
    if (cVar1 == '\x02') {
      bVar6 = 4;
    }
    else if (cVar1 == '\x03') {
      bVar6 = 8;
    }
    else {
      bVar6 = 1;
      if (cVar1 == '\x04') {
        bVar6 = 0x10;
      }
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaxAnisotropy");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,bVar6);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar2 = *(undefined1 *)(param_1 + 0x18d);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"sg.ShadowQuality");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,uVar2);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar7 = *(undefined4 *)(param_1 + 400);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxCoreStat.ShowStats");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,uVar7);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140ccd950(*(undefined1 *)(param_1 + 0x195));
  bVar6 = bVar10;
  if (*(byte *)(param_1 + 0x196) < 2) {
    bVar6 = *(byte *)(param_1 + 0x196);
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DetailMode");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,bVar6);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  iVar9 = 1 << (*(byte *)(param_1 + 0x196) & 0x1f);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.StaticMeshLODDistanceScale");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)(1.0 / (float)iVar9));
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SkeletalMeshLODRadiusScale");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)iVar9);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar8 = (ulonglong)*(byte *)(param_1 + 0x197);
  fVar11 = *(float *)(&DAT_146299630 + uVar8 * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.LandscapeLOD0DistributionScale");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar11);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  fVar11 = *(float *)(&DAT_146299630 + uVar8 * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.LandscapeLODDistributionScale");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar11);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar7 = *(undefined4 *)(&DAT_146299640 + uVar8 * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.LandscapeLODBias");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,uVar7);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar2 = *(undefined1 *)(param_1 + 0x198);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"sg.FoliageQuality");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,uVar2);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140cd0a20(param_1,*(undefined1 *)(param_1 + 0x199));
  cVar1 = *(char *)(param_1 + 0x19a);
  fVar11 = 50.0;
  if (cVar1 == '\0') {
    bVar10 = 0;
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      fVar11 = 75.0;
      bVar10 = 3;
    }
    else if (cVar1 == '\x03') {
      fVar11 = 100.0;
      bVar10 = 3;
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SSR.Intensity");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,0x4059000000000000);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SSR.OverrideQuality");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar11);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SSR.Quality");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,bVar10);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  fVar11 = *(float *)(&DAT_146299680 + (ulonglong)*(byte *)(param_1 + 0x19c) * 4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.SkeletalMeshLODRadiusScale.Character");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar11);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  cVar1 = *(char *)(param_1 + 0x19c);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"oak.CorpseCleanup.ShouldUseLowGraphics");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,cVar1 == '\0');
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  cVar1 = *(char *)(param_1 + 0x19d);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AmbientOcclusion.Enable");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,cVar1 != '\0');
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar2 = *(undefined1 *)(param_1 + 0x19d);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.AmbientOcclusion.ComputeAOQualityLevel");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_143f3edc0,uVar2);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  fVar11 = *(float *)(param_1 + 0x1a0);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.EdgeDetection.TexelOffsetOverride");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar11);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_14247c070(param_1,*(undefined1 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
  fVar11 = *(float *)(param_1 + 0x1ac);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar11);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140f4dc80(*(float *)(param_1 + 0x1b0) * 0.01);
  fVar11 = *(float *)(param_1 + 0x1b4);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.OverrideToe");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)(fVar11 * -0.01));
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  fVar11 = *(float *)(param_1 + 0x1b8);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.UI.Level");
  if (plVar3 != (longlong *)0x0) {
    FString::PrintfImpl(&local_58,&DAT_144050d74,(double)fVar11);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x2000000);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  cVar1 = *(char *)(param_1 + 0x1bc);
  plVar3 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      return;
    }
  }
  *(char *)(lVar4 + 0x69) = cVar1;
  if (cVar1 == '\x01') {
    if (*(char *)(lVar4 + 0x6a) == '\0') {
      *(undefined1 *)(lVar4 + 0x6a) = 2;
    }
    else if (*(char *)(lVar4 + 0x6a) == '\x01') {
      *(undefined1 *)(lVar4 + 0x6a) = 4;
    }
  }
  return;
}



// FUNCTION 140c6a960 FUN_140c6a960 body=27 status=ok
// SIG undefined FUN_140c6a960(void)

void FUN_140c6a960(undefined8 param_1)

{
  FUN_140c69c40();
  FUN_142471c40(param_1);
  return;
}



// FUNCTION 140c6a980 FUN_140c6a980 body=140 status=ok
// SIG undefined FUN_140c6a980(void)

void FUN_140c6a980(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (((param_3 != 0) && (*(char *)(param_3 + 0x128) == '\x03')) &&
     (cVar2 = APlayerController::IsPrimaryPlayer(param_3), cVar2 != '\0')) {
    FUN_140ccf780(param_1,param_2);
    iVar1 = *(int *)(param_2 + 4);
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (iVar1 < 1) {
      FUN_140b57930(param_1 + 0xce,uVar3,0);
    }
    else {
      FUN_140b506d0(param_1 + 0xce,uVar3,iVar1,*(undefined4 *)(param_2 + 8));
    }
  }
  return;
}



// FUNCTION 140c6aa10 FUN_140c6aa10 body=42 status=ok
// SIG undefined FUN_140c6aa10(void)

void FUN_140c6aa10(undefined8 param_1,undefined1 param_2)

{
  FUN_140c69c40();
  FUN_1424720e0(param_1,param_2);
  return;
}



// FUNCTION 140c6aa40 GetAnimationMode body=8 status=ok
// SIG undefined GetAnimationMode(void)

undefined1 USkeletalMeshComponent::GetAnimationMode(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x808);
}



// FUNCTION 140c6aa50 FUN_140c6aa50 body=155 status=ok
// SIG undefined FUN_140c6aa50(void)

void FUN_140c6aa50(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x6d0) != 0) {
    iVar3 = *(int *)(param_1 + 0x6d0);
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    for (plVar4 = plVar1; plVar4 != plVar1 + iVar3; plVar4 = plVar4 + 1) {
      if ((*plVar4 != 0) && (cVar2 = FUN_142ebe180(), cVar2 != '\0')) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
        if (iVar3 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0x6d0) <= iVar3) {
          return;
        }
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6c8) + (longlong)iVar3 * 8) + 0x550))
                  ();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c6aaf0 FUN_140c6aaf0 body=1411 status=ok
// SIG undefined FUN_140c6aaf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c6aaf0(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  longlong *local_58;
  char local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b8 = param_1;
  FUN_142d7d7f0();
  if ((char)param_1[0x25] == '\x03') {
    if (*(float *)(param_1 + 0xdc) <= 0.0 && *(float *)(param_1 + 0xdc) != 0.0) {
      *(int *)(param_1 + 0xdc) = (int)param_1[0xd9];
      *(int *)((longlong)param_1 + 0x6dc) = (int)param_1[0xd9];
    }
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar7 != 0) {
      local_c8 = 0;
      lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar7 + 400) == 0) {
        uVar9 = *(undefined8 *)(lVar7 + 0x3f8);
      }
      else {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_1444d7358;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        plVar8[2] = (longlong)&LAB_140ccae10;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar8[4] = lVar7;
        *plVar8 = (longlong)&PTR_FUN_1444d73a0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_a8);
      }
      FWeakObjectPtr::operator=(&local_98,0);
      local_d0 = 0xbf800000;
      local_d8 = 1;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar9,&local_c8,&local_a8,0x41200000);
      if (local_48 != 0) {
        plVar19 = &local_78;
        if (local_58 != (longlong *)0x0) {
          plVar19 = local_58;
        }
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x10))(plVar19,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar7 = FMemory::Realloc(plVar8,0,0);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar9 = FUN_140c12480(uVar9);
      lVar7 = FTcpDeserializedMessage::GetMessage(uVar9);
      if (lVar7 != 0) {
        FUN_140b63180(lVar7,param_1);
      }
      lVar7 = DAT_146af4bf0;
      if (DAT_146af4bf0 != 0) {
        uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
        FUN_140c71de0(lVar7,uVar9);
      }
    }
  }
  FUN_140e96190();
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar7 != 0) {
    if (param_1[0xa8] == 0) {
      uVar9 = FUN_1413f24c0();
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = UEffectLibrary::SpawnParticleActor(uVar10,uVar9);
      param_1[0xa8] = lVar7;
      if ((lVar7 != 0) && (param_1[0xa9] != 0)) {
        FUN_142dd8dc0(lVar7);
      }
    }
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::PopulateStreamingLevelsToConsider(uVar9);
  }
  lVar11 = AGExplodingRockProjectile::GetPrivateStaticClass();
  local_c0 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = 0;
  if (lVar11 != 0) {
    lVar12 = AGExplodingRockProjectile::GetPrivateStaticClass();
    lVar15 = lVar11;
    do {
      lVar7 = lVar11;
      if (lVar15 == lVar12) break;
      lVar15 = *(longlong *)(lVar15 + 0x30);
      lVar7 = 0;
    } while (lVar15 != 0);
  }
  local_a8 = CONCAT44(local_a8._4_4_,5);
  local_50 = '\0';
  local_c8 = lVar7;
  FUN_14044bc80(&local_a0,&local_c0,&local_c8);
  FUN_14045a130(&local_a8);
  cVar5 = local_88._4_1_;
joined_r0x000140c6ade2:
  if (cVar5 == '\0') {
    FUN_140cd74f0(param_1,local_78);
    uVar17 = local_90 & 0xffffffff;
    lVar7 = CONCAT44(uStack_9c,local_a0);
    iVar20 = (int)local_88 + 1;
    if (iVar20 < local_68 + (int)local_90) {
      lVar11 = (longlong)iVar20 * 8;
      iVar18 = local_68;
      do {
        lVar15 = 0;
        if (iVar20 < (int)uVar17) {
          lVar12 = *(longlong *)(local_98 + lVar11);
        }
        else {
          lVar12 = *(longlong *)(local_70 + (longlong)(iVar20 - (int)uVar17) * 8);
        }
        local_80 = local_80 + 1;
        if (lVar12 != 0) {
          lVar13 = AActor::GetLevel(lVar12);
          if (lVar13 != 0) {
            if ((local_a8 & 1) != 0) {
              iVar18 = *(int *)(lVar12 + 0xc);
              if (iVar18 < (int)DAT_1469e91c4) {
                uVar16 = iVar18 >> 0x1f & 0xffff;
                uVar6 = iVar18 + uVar16;
                lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                         (longlong)(int)((uVar6 & 0xffff) - uVar16) * 0x18;
              }
              if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) != 0) goto LAB_140c6afb2;
            }
            if (((uint)local_a8 >> 1 & 1) != 0) {
              cVar5 = FOutputDevice::CanBeUsedOnAnyThread(lVar12);
              if (cVar5 == '\0') goto LAB_140c6afb2;
            }
            if (((uint)local_a8 >> 2 & 1) != 0) {
              if (((*(byte *)(lVar13 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar13 + 0x205) & 0x10) == 0)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              piVar1 = *(int **)(lVar13 + 600);
              if (((*(longlong *)(lVar13 + 0xc0) == 0) ||
                  (piVar14 = (int *)UWorld::GetActiveLevelCollection(), piVar14 == (int *)0x0)) ||
                 (piVar1 == piVar14)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if ((piVar1 == (int *)0x0) || (*piVar1 == 2)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((bVar2) || (bVar2 = false, bVar3)) {
                bVar2 = true;
              }
              if ((!bVar4) || (!bVar2)) goto LAB_140c6afb2;
            }
            lVar15 = ULevel::GetWorld(lVar13);
            if (lVar15 == lVar7) {
              lVar15 = AActor::GetLevel(lVar12);
              if (lVar15 == *(longlong *)(lVar7 + 0x30)) goto LAB_140c6b058;
              lVar15 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_140c6b058;
            }
          }
LAB_140c6afb2:
          uVar17 = local_90 & 0xffffffff;
          iVar18 = local_68;
        }
        iVar20 = iVar20 + 1;
        lVar11 = lVar11 + 8;
        if (iVar18 + (int)uVar17 <= iVar20) break;
      } while( true );
    }
    local_78 = 0;
    local_88._0_5_ = CONCAT14(1,(int)local_88);
  }
  if (local_50 != '\0') {
    local_50 = 0;
    UWorld::RemoveOnActorSpawnedHandler(CONCAT44(uStack_9c,local_a0),local_58);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  return;
LAB_140c6b058:
  cVar5 = local_88._4_1_;
  local_88 = (code *)CONCAT44(local_88._4_4_,iVar20);
  param_1 = local_b8;
  local_78 = lVar12;
  goto joined_r0x000140c6ade2;
}



// FUNCTION 140c6b080 FUN_140c6b080 body=10 status=ok
// SIG undefined FUN_140c6b080(void)

void FUN_140c6b080(undefined2 param_1,undefined1 *param_2,undefined1 *param_3)

{
  *param_2 = (char)param_1;
  *param_3 = (char)((ushort)param_1 >> 8);
  return;
}



// FUNCTION 140c6b090 FUN_140c6b090 body=291 status=ok
// SIG undefined FUN_140c6b090(void)

void FUN_140c6b090(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined2 *puVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 *local_28;
  undefined8 local_20;
  
  puVar9 = (undefined8 *)*param_3;
  puVar10 = puVar9 + (longlong)(int)param_3[1] * 4;
  do {
    if (puVar9 == puVar10) {
      return;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar4 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"iodCard",0x10);
    puVar6 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar6 = puVar4;
    }
    if (*(int *)(puVar9 + 2) == 0) {
      psVar5 = &DAT_143f3eda8;
    }
    else {
      psVar5 = (short *)puVar9[1];
    }
    lVar7 = (longlong)puVar6 - (longlong)psVar5;
    do {
      sVar1 = *psVar5;
      sVar2 = *(short *)((longlong)psVar5 + lVar7);
      if (sVar1 != sVar2) break;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    if (puVar4 != (undefined2 *)0x0) {
      FMemory::Free(puVar4);
    }
    if (sVar1 == sVar2) {
      iVar3 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_2);
      *puVar8 = *puVar9;
      FString::FString(puVar8 + 1);
      *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(puVar9 + 3);
    }
    puVar9 = puVar9 + 4;
  } while( true );
}



// FUNCTION 140c6b1c0 FUN_140c6b1c0 body=720 status=ok
// SIG undefined FUN_140c6b1c0(void)

void FUN_140c6b1c0(void)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/Cores/GunnersNest/Init_GunnersNest_TurretDamageCalc.Init_GunnersNest_TurretDamageCalc_C,0,1,CalculateAttributeInitialValue,1,128,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/HardPoints/FalconStrike/Balance/Init_FalconStrike_Damage.Init_FalconStrike_Damage_C,0,1,CalculateAttributeInitialValue,1,810,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/HardPoints/FalconStrike/Balance/Init_FalconStrike_Damage_Nuke.Init_FalconStrike_Damage_Nuke_C,0,1,CalculateAttributeInitialValue,1,495,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/HardPoints/GrenadeLauncher/Balance/Init_GrenadeLauncher_Damage.Init_GrenadeLauncher_Damage_C,0,1,CalculateAttributeInitialValue,1,666,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/HardPoints/GrenadeLauncher/Balance/Init_GrenadeLauncher_Damage_Singularity.Init_GrenadeLauncher_Damage_Singularity_C,0,1,CalculateAttributeInitialValue,1,737,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/HardPoints/Jackhammer/Balance/Init_BearFist_Damage.Init_BearFist_Damage_C,0,1,CalculateAttributeInitialValue,1,627,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/HardPoints/Minigun/Balance/Init_Minigun_DamageCalc.Init_Minigun_DamageCalc_C,0,1,CalculateAttributeInitialValue,1,667,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/HardPoints/Railgun/Balance/Init_Railgun_Damage.Init_Railgun_Damage_C,0,1,CalculateAttributeInitialValue,1,862,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_58[0] = &LAB_140c6b520;
  FUN_142d8ae80(0,
                L"(1,7,0,),/Game/PlayerCharacters/Gunner/_Shared/_Design/IronBear/HardPoints/SalamanderThrower/Init_Salamander_DamageCalc.Init_Salamander_DamageCalc_C,0,1,CalculateAttributeInitialValue,1,754,121:/Game/PlayerCharacters/_Shared/_Design/Balance/Gunner/Att_Calc_Gunner_GlobalSkillDamage.Att_Calc_Gunner_GlobalSkillDamage,116:/Game/Patch/PlayerCharacters/Gunner/IronBear/Att_Calc_IronBear_GlobalSkillDamage.Att_Calc_IronBear_GlobalSkillDamage"
                ,0,1,local_58,0);
  return;
}



// FUNCTION 140c6b490 CacheActiveRenderTargets body=136 status=ok
// SIG undefined CacheActiveRenderTargets(void)

void FRHICommandListBase::CacheActiveRenderTargets
               (longlong param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  *(int *)(param_1 + 0x98) = param_2;
  if (param_2 != 0) {
    do {
      uVar4 = (int)uVar5 + 1;
      puVar1 = (undefined8 *)(param_3 + uVar5 * 0x18);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0xa0 + uVar5 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0xb0 + uVar5 * 0x18) =
           *(undefined8 *)(param_3 + 0x10 + uVar5 * 0x18);
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x98));
  }
  if (param_4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    return;
  }
  uVar3 = param_4[1];
  *(undefined8 *)(param_1 + 0x160) = *param_4;
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  return;
}



// FUNCTION 140c6b560 FUN_140c6b560 body=75 status=ok
// SIG undefined FUN_140c6b560(void)

void FUN_140c6b560(longlong *param_1)

{
  FUN_140cbcca0((longlong)*(int *)param_1[1] * 0x88 + *(longlong *)(*param_1 + 0x50) + 0x68,
                *(undefined8 *)param_1[2],*(undefined8 *)param_1[3],*(undefined8 *)param_1[4],
                *(undefined8 *)param_1[5]);
  return;
}



// FUNCTION 140c6b600 FUN_140c6b600 body=4740 status=ok
// SIG undefined FUN_140c6b600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c6b600(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
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
  bool bVar28;
  longlong *plVar29;
  char cVar30;
  longlong lVar31;
  float *pfVar32;
  float *pfVar33;
  undefined8 *puVar34;
  longlong *plVar35;
  undefined8 uVar36;
  longlong lVar37;
  uint *puVar38;
  longlong lVar39;
  int iVar40;
  undefined2 *puVar41;
  longlong *plVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_768 [32];
  longlong **local_748;
  undefined8 *local_740;
  undefined4 *local_738;
  undefined4 local_730;
  undefined4 local_728;
  undefined8 *local_720;
  undefined8 local_718;
  undefined1 local_710;
  float local_708;
  float local_704;
  longlong *local_700;
  undefined8 local_6f8;
  uint local_6f0;
  float local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  longlong local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  longlong *local_690;
  undefined8 local_688;
  int local_680;
  undefined1 local_67c;
  undefined8 local_678;
  undefined4 local_670;
  float local_66c;
  LARGE_INTEGER local_668;
  LARGE_INTEGER local_660;
  undefined1 local_658 [8];
  LARGE_INTEGER local_650;
  float local_648 [2];
  undefined8 local_640;
  undefined8 local_638;
  longlong local_630 [2];
  longlong local_620 [2];
  undefined8 local_610;
  float local_608;
  float local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined8 local_5f0;
  longlong local_5e8 [2];
  longlong local_5d8 [2];
  longlong local_5c8 [2];
  longlong local_5b8 [2];
  longlong *local_5a8;
  longlong *local_5a0;
  longlong *local_598;
  longlong *local_590;
  undefined4 local_588;
  undefined1 local_584;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined1 local_568 [8];
  undefined1 local_560 [8];
  undefined1 local_558 [8];
  undefined1 local_550 [8];
  longlong *local_548;
  undefined1 local_538 [16];
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  undefined1 local_4e8 [56];
  longlong *local_4b0;
  int local_4a0;
  undefined1 local_498 [64];
  undefined1 local_458 [64];
  undefined **local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  uint local_3d8;
  uint local_3d4;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined2 local_390;
  undefined1 local_38e;
  undefined8 local_38c;
  undefined8 uStack_384;
  undefined1 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined1 local_370 [136];
  undefined1 local_2e8 [24];
  longlong local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  longlong *local_290;
  undefined8 local_288;
  int local_280;
  undefined1 local_27c;
  undefined1 local_278;
  undefined **local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 local_234;
  uint local_230;
  uint local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined2 local_1e8;
  undefined1 local_1e6;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined1 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8 [136];
  undefined1 local_140 [24];
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined1 local_d4;
  undefined1 local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_768;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar37 = *(longlong *)(DAT_146b33f38 + 0xe8);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  lVar31 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458);
  if (lVar31 == 0) {
    return;
  }
  if (*(longlong *)(lVar31 + 0x388) == 0) {
    return;
  }
  if (*(longlong *)(lVar31 + 0x380) == 0) {
    return;
  }
  if (*(longlong *)(lVar31 + 0x3d0) == 0) {
    return;
  }
  if (lVar37 == 0) {
    return;
  }
  QueryPerformanceCounter(&local_668);
  fVar46 = *(float *)(lVar37 + 0x80);
  dVar6 = (double)local_668.QuadPart * DAT_1468b02f8 + 16777216.0;
  QueryPerformanceCounter(&local_660);
  dVar5 = dVar6 - *(double *)(param_1 + 0x18);
  dVar7 = ((double)local_660.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
  *(double *)(param_1 + 0x18) = dVar6;
  if (0 < *(int *)(param_1 + 0xa8)) {
    fVar44 = (float)((double)*(float *)(param_1 + 0xb8) - dVar5);
    *(float *)(param_1 + 0xb8) = fVar44;
    if (fVar44 < 0.0) {
      iVar40 = *(int *)(param_1 + 0xb0);
      do {
        fVar44 = fVar44 + *(float *)(param_1 + 0xb4);
        iVar40 = (iVar40 + 1) % *(int *)(param_1 + 0xa8);
      } while (fVar44 < 0.0);
      *(float *)(param_1 + 0xb8) = fVar44;
      *(int *)(param_1 + 0xb0) = iVar40;
    }
  }
  fVar44 = (float)dVar5 * *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xbc);
  if (0.0 <= fVar44) {
    if (1.0 <= fVar44) {
      fVar44 = 1.0;
    }
  }
  else {
    fVar44 = 0.0;
  }
  *(float *)(param_1 + 0xbc) = fVar44;
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (lVar37 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x168), lVar37 != 0)) {
    lVar31 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar37 + 0x10) + 0x90) < *(int *)(lVar31 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar37 + 0x10) + 0x88) + (longlong)*(int *)(lVar31 + 0x90) * 8
         ) != lVar31 + 0x88)) {
      bVar28 = false;
    }
    else {
      bVar28 = true;
    }
    if ((bVar28) && (lVar31 = *(longlong *)(lVar37 + 0x640), lVar31 != 0)) {
      pfVar32 = (float *)FUN_140cb8f20(param_1,local_498);
      pfVar33 = (float *)FMatrix::Inverse(lVar31 + 0x80,local_458);
      fVar44 = pfVar32[4];
      fVar47 = pfVar32[5];
      fVar43 = pfVar32[6];
      fVar45 = pfVar32[7];
      fVar8 = *pfVar32;
      fVar9 = pfVar32[1];
      fVar10 = pfVar32[2];
      fVar11 = pfVar32[3];
      fVar12 = pfVar32[8];
      fVar13 = pfVar32[9];
      fVar14 = pfVar32[10];
      fVar15 = pfVar32[0xb];
      fVar16 = *pfVar33;
      fVar17 = pfVar33[1];
      fVar18 = pfVar33[2];
      fVar19 = pfVar33[3];
      fVar20 = pfVar32[0xc];
      fVar21 = pfVar32[0xd];
      fVar22 = pfVar32[0xe];
      fVar23 = pfVar32[0xf];
      fVar24 = pfVar33[4];
      fVar25 = pfVar33[5];
      fVar26 = pfVar33[6];
      fVar27 = pfVar33[7];
      local_528 = fVar8 * fVar16 + fVar44 * fVar17 + fVar12 * fVar18 + fVar20 * fVar19;
      fStack_524 = fVar9 * fVar16 + fVar47 * fVar17 + fVar13 * fVar18 + fVar21 * fVar19;
      fStack_520 = fVar10 * fVar16 + fVar43 * fVar17 + fVar14 * fVar18 + fVar22 * fVar19;
      fStack_51c = fVar11 * fVar16 + fVar45 * fVar17 + fVar15 * fVar18 + fVar23 * fVar19;
      fVar16 = pfVar33[8];
      fVar17 = pfVar33[9];
      fVar18 = pfVar33[10];
      fVar19 = pfVar33[0xb];
      local_518 = fVar8 * fVar24 + fVar44 * fVar25 + fVar12 * fVar26 + fVar20 * fVar27;
      fStack_514 = fVar9 * fVar24 + fVar47 * fVar25 + fVar13 * fVar26 + fVar21 * fVar27;
      fStack_510 = fVar10 * fVar24 + fVar43 * fVar25 + fVar14 * fVar26 + fVar22 * fVar27;
      fStack_50c = fVar11 * fVar24 + fVar45 * fVar25 + fVar15 * fVar26 + fVar23 * fVar27;
      fVar24 = pfVar33[0xc];
      fVar25 = pfVar33[0xd];
      fVar26 = pfVar33[0xe];
      fVar27 = pfVar33[0xf];
      local_508 = fVar8 * fVar16 + fVar44 * fVar17 + fVar12 * fVar18 + fVar20 * fVar19;
      fStack_504 = fVar9 * fVar16 + fVar47 * fVar17 + fVar13 * fVar18 + fVar21 * fVar19;
      fStack_500 = fVar10 * fVar16 + fVar43 * fVar17 + fVar14 * fVar18 + fVar22 * fVar19;
      fStack_4fc = fVar11 * fVar16 + fVar45 * fVar17 + fVar15 * fVar18 + fVar23 * fVar19;
      local_4f8 = fVar27 * fVar20 + fVar8 * fVar24 + fVar44 * fVar25 + fVar12 * fVar26;
      fStack_4f4 = fVar27 * fVar21 + fVar9 * fVar24 + fVar47 * fVar25 + fVar13 * fVar26;
      fStack_4f0 = fVar27 * fVar22 + fVar10 * fVar24 + fVar43 * fVar25 + fVar14 * fVar26;
      fStack_4ec = fVar27 * fVar23 + fVar11 * fVar24 + fVar45 * fVar25 + fVar15 * fVar26;
      (**(code **)(**(longlong **)(lVar37 + 0x640) + 0x128))
                (*(longlong **)(lVar37 + 0x640),&local_528);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30),lVar37);
      cVar30 = FUN_1427315e0(*(undefined8 *)(lVar37 + 0x640));
      if (cVar30 != '\0') {
        FUN_14273d8d0(*(undefined8 *)(lVar37 + 0x640));
      }
    }
  }
  fVar44 = -fVar46;
  lVar37 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458);
  local_6e4 = 0x80000000;
  *(ulonglong *)(lVar37 + 0x334) = (ulonglong)(uint)fVar44;
  *(undefined4 *)(lVar37 + 0x33c) = 0;
  local_6e0 = 0x80000000;
  local_6e8 = fVar46;
  puVar34 = (undefined8 *)FVector::Rotation(&local_6e8,local_538);
  lVar37 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458);
  *(undefined8 *)(lVar37 + 0x340) = *puVar34;
  *(undefined4 *)(lVar37 + 0x348) = *(undefined4 *)(puVar34 + 1);
  (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458) + 0x380) + 0xd0)
  )();
  plVar35 = (longlong *)FUN_140cb9a00(param_1,local_658);
  lVar37 = *plVar35;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_658);
  if (lVar37 == 0) {
    return;
  }
  lVar37 = **(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458) + 0x380);
  uVar36 = FUN_140cb9a00(param_1,local_568);
  lVar37 = (**(code **)(lVar37 + 0x108))
                     (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458) + 0x380),
                      uVar36,(float)dVar7);
  if (lVar37 == 0) {
    return;
  }
  cVar30 = FWeakObjectPtr::IsValid(param_1 + 0x58);
  if (cVar30 == '\0') {
    return;
  }
  puVar38 = (uint *)(**(code **)(**(longlong **)(lVar37 + 0x58) + 0x20))
                              (*(longlong **)(lVar37 + 0x58),local_560);
  uVar3 = *puVar38;
  local_6f0 = uVar3;
  lVar31 = (**(code **)(**(longlong **)(lVar37 + 0x58) + 0x20))
                     (*(longlong **)(lVar37 + 0x58),local_558);
  puVar41 = &DAT_143f3eda8;
  uVar4 = *(uint *)(lVar31 + 4);
  if (0.0 < *(float *)(DAT_14686ca58 + 4)) {
    uVar36 = UEngine::GetSubtitleFont();
    local_738 = &DAT_1464aa6e0;
    local_740 = &local_6d8;
    local_6d8 = _DAT_1464aa700;
    uStack_6d0 = uRam00000001464aa708;
    local_748 = (longlong **)uVar36;
    FUN_1428a6e00(lVar37);
    QueryPerformanceCounter(&local_650);
    FString::PrintfImpl(local_5e8,L"Duration:                            %.2f Sec",
                        ((double)local_650.QuadPart * DAT_1468b02f8 + 16777216.0) -
                        *(double *)(param_1 + 0x20));
    local_738 = &DAT_1464aa6e0;
    local_740 = &local_6d8;
    local_748 = (longlong **)uVar36;
    FUN_1428a6e00(lVar37);
    if (local_5e8[0] != 0) {
      FMemory::Free();
    }
    FString::PrintfImpl(local_5d8,L"RenderTargetSize X: %d Y: %d",uVar3,uVar4);
    local_740 = &local_6d8;
    local_738 = &DAT_1464aa6e0;
    local_748 = (longlong **)uVar36;
    FUN_1428a6e00(lVar37);
    if (local_5d8[0] != 0) {
      FMemory::Free();
    }
    local_748 = (longlong **)0x0;
    FString::PrintfImpl(local_5c8,L"ViewLoc   X: %-8.2f   Y: %-8.2f   Z: %-8.2f",(double)fVar44,0);
    local_740 = &local_6d8;
    local_738 = &DAT_1464aa6e0;
    local_748 = (longlong **)uVar36;
    FUN_1428a6e00(lVar37);
    if (local_5c8[0] != 0) {
      FMemory::Free();
    }
    FString::PrintfImpl(local_5b8,L"GFrameNumber:                              %u",DAT_1464aaa8c);
    local_740 = &local_6d8;
    local_738 = &DAT_1464aa6e0;
    local_748 = (longlong **)uVar36;
    FUN_1428a6e00(lVar37);
    if (local_5b8[0] != 0) {
      FMemory::Free();
    }
    FString::PrintfImpl(local_630,L"GFrameNumberRenderThread:                  %u",DAT_1464aaa90);
    local_740 = &local_6d8;
    local_738 = &DAT_1464aa6e0;
    local_748 = (longlong **)uVar36;
    FUN_1428a6e00(lVar37);
    if (local_630[0] != 0) {
      FMemory::Free();
    }
    FString::PrintfImpl(local_620,L"GFrameNumberRenderThread_Actual:           %u",DAT_1464aaa94);
    local_740 = &local_6d8;
    local_738 = &DAT_1464aa6e0;
    local_748 = (longlong **)uVar36;
    FUN_1428a6e00(lVar37);
    if (local_620[0] != 0) {
      FMemory::Free();
    }
  }
  if ((*(int *)(param_1 + 0xa8) < 1) || (*(int *)(param_1 + 0x60) < 1)) goto LAB_140c6c776;
  FUN_1417efd90(&local_6c8);
  local_6c8 = FWeakObjectPtr::Get(param_1 + 0x58);
  fVar44 = (float)uVar4;
  local_680 = (int)ROUND(((float)*(int *)(param_1 + 0x60) + (float)*(int *)(param_1 + 0x60)) *
                         fVar44 * 0.0013888889 - 0.5) >> 1;
  lVar31 = FWeakObjectPtr::Get();
  local_578 = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  uStack_570 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  local_588 = 0;
  local_584 = 0;
  local_580 = 0;
  local_748 = (longlong **)&local_588;
  FSlateFontInfo::FSlateFontInfo(local_4e8,lVar31,*(undefined4 *)(lVar31 + 0x13c),lVar31 + 0x140);
  fVar46 = ((float)*(int *)(param_1 + 0x60) * fVar44 * 0.0013888889) / (float)local_4a0;
  if (local_4b0 != (longlong *)0x0) {
    LOCK();
    plVar35 = local_4b0 + 1;
    lVar31 = *plVar35;
    *(int *)plVar35 = (int)*plVar35 + -1;
    UNLOCK();
    if ((int)lVar31 == 1) {
      (**(code **)*local_4b0)(local_4b0);
      LOCK();
      piVar1 = (int *)((longlong)local_4b0 + 0xc);
      iVar40 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar40 == 1) {
        (**(code **)(*local_4b0 + 8))(local_4b0,1);
      }
    }
  }
  FUN_1418388a0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8),&local_598);
  local_748 = (longlong **)CONCAT44(local_748._4_4_,0x3f800000);
  (**(code **)(*local_598 + 0x10))(local_598,local_648,param_1 + 0x88,&local_6c8);
  if (local_590 != (longlong *)0x0) {
    LOCK();
    plVar35 = local_590 + 1;
    lVar31 = *plVar35;
    *(int *)plVar35 = (int)*plVar35 + -1;
    UNLOCK();
    if ((int)lVar31 == 1) {
      (**(code **)*local_590)(local_590);
      LOCK();
      piVar1 = (int *)((longlong)local_590 + 0xc);
      iVar40 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar40 == 1) {
        (**(code **)(*local_590 + 8))(local_590,1);
      }
    }
  }
  FUN_1418388a0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8),&local_5a8);
  local_748 = (longlong **)CONCAT44(local_748._4_4_,0x3f800000);
  (**(code **)(*local_5a8 + 0x10))
            (local_5a8,&local_708,
             *(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(param_1 + 0xb0) * 0x18,&local_6c8);
  if (local_5a0 != (longlong *)0x0) {
    LOCK();
    plVar35 = local_5a0 + 1;
    lVar31 = *plVar35;
    *(int *)plVar35 = (int)*plVar35 + -1;
    UNLOCK();
    if ((int)lVar31 == 1) {
      (**(code **)*local_5a0)(local_5a0);
      LOCK();
      piVar1 = (int *)((longlong)local_5a0 + 0xc);
      iVar40 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar40 == 1) {
        (**(code **)(*local_5a0 + 8))(local_5a0,1);
      }
    }
  }
  local_230 = local_230 & 0xfffffffc;
  local_22c = local_22c & 0xfffffffe;
  local_238 = 0;
  local_234 = 0x3f800000;
  local_1e8 = 0;
  fVar47 = (float)local_6f0;
  local_1e6 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_270 = &PTR__scalar_deleting_destructor__1444d54b8;
  local_208 = DAT_1464aa6e0;
  uStack_204 = DAT_1464aa6e4;
  uStack_200 = DAT_1464aa6e8;
  uStack_1fc = DAT_1464aa6ec;
  local_1d4 = 1;
  local_1e4 = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  uStack_1dc = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  local_640 = CONCAT44(fVar44 * *(float *)(param_1 + 100),(fVar47 - local_648[0]) * 0.5);
  local_218 = 0;
  uStack_210 = 0;
  local_248 = _DAT_1464aa6c0;
  uStack_240 = _DAT_1464aa6c8;
  local_228 = 0;
  uStack_220 = 0;
  local_1f8 = DAT_1468b5d88;
  uStack_1f0 = DAT_1468b5d88;
  local_268 = local_640;
  FCanvasTileItem::FCanvasTileItem(local_1c8,&local_640,&DAT_1468b5d88,&DAT_1464aa6c0);
  local_1d0 = 0x3f800000;
  local_1cc = 0x3f800000;
  local_260 = CONCAT44(2,(undefined4)local_260);
  local_248 = _DAT_1464aa6c0;
  uStack_240 = _DAT_1464aa6c8;
  local_270 = &PTR_FUN_1444d5500;
  FText::FText(local_140,param_1 + 0x88);
  local_128 = local_6c8;
  if (local_6c8 == 0) {
LAB_140c6c206:
    local_128 = 0;
  }
  else {
    lVar39 = UFont::GetPrivateStaticClass();
    lVar31 = *(longlong *)(local_128 + 0x10);
    if ((*(int *)(lVar31 + 0x90) < *(int *)(lVar39 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar31 + 0x88) + (longlong)*(int *)(lVar39 + 0x90) * 8) !=
        lVar39 + 0x88)) {
      bVar28 = false;
    }
    else {
      bVar28 = true;
    }
    if (!bVar28) goto LAB_140c6c206;
  }
  local_120 = local_6c8;
  local_118 = local_6c0;
  local_f0 = local_698;
  local_e8 = local_690;
  local_110 = local_6b8;
  uStack_108 = uStack_6b0;
  local_100 = local_6a8;
  uStack_f8 = uStack_6a0;
  if (local_690 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_690 + 1) = (int)local_690[1] + 1;
    UNLOCK();
  }
  lVar31 = *(longlong *)(param_1 + 0xa0);
  local_3d8 = local_3d8 & 0xfffffffc;
  local_3d4 = local_3d4 & 0xfffffffe;
  local_e0 = local_688;
  local_d8 = local_680;
  local_d4 = local_67c;
  iVar40 = *(int *)(param_1 + 0xb0);
  local_d0 = 1;
  local_260 = CONCAT44(0xb,(undefined4)local_260);
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_418 = &PTR__scalar_deleting_destructor__1444d54b8;
  local_3e0 = 0;
  local_638 = CONCAT44((1.0 - *(float *)(param_1 + 100)) * fVar44 - local_704,
                       (fVar47 - local_708) * 0.5);
  local_3dc = 0x3f800000;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_390 = 0;
  local_3f0 = _DAT_1464aa6c0;
  uStack_3e8 = _DAT_1464aa6c8;
  local_38e = 0;
  local_37c = 1;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3a0 = DAT_1468b5d88;
  uStack_398 = DAT_1468b5d88;
  local_3b0 = DAT_1464aa6e0;
  uStack_3ac = DAT_1464aa6e4;
  uStack_3a8 = DAT_1464aa6e8;
  uStack_3a4 = DAT_1464aa6ec;
  local_38c = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  uStack_384 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  local_410 = local_638;
  FCanvasTileItem::FCanvasTileItem(local_370,&local_638,&DAT_1468b5d88,&DAT_1464aa6c0);
  local_378 = 0x3f800000;
  local_374 = 0x3f800000;
  local_408 = CONCAT44(2,(undefined4)local_408);
  local_3f0 = _DAT_1464aa6c0;
  uStack_3e8 = _DAT_1464aa6c8;
  local_418 = &PTR_FUN_1444d5500;
  FText::FText(local_2e8,lVar31 + (longlong)iVar40 * 0x18);
  local_2d0 = local_6c8;
  if (local_6c8 == 0) {
LAB_140c6c42a:
    local_2d0 = 0;
  }
  else {
    lVar39 = UFont::GetPrivateStaticClass();
    lVar31 = *(longlong *)(local_2d0 + 0x10);
    if ((*(int *)(lVar31 + 0x90) < *(int *)(lVar39 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar31 + 0x88) + (longlong)*(int *)(lVar39 + 0x90) * 8) !=
        lVar39 + 0x88)) {
      bVar28 = false;
    }
    else {
      bVar28 = true;
    }
    if (!bVar28) goto LAB_140c6c42a;
  }
  local_2c8 = local_6c8;
  local_2c0 = local_6c0;
  local_298 = local_698;
  local_290 = local_690;
  local_2b8 = local_6b8;
  uStack_2b0 = uStack_6b0;
  local_2a8 = local_6a8;
  uStack_2a0 = uStack_6a0;
  if (local_690 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_690 + 1) = (int)local_690[1] + 1;
    UNLOCK();
  }
  local_38c = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  uStack_384 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  local_288 = local_688;
  local_280 = local_680;
  fVar43 = 1.0 / fVar46;
  local_27c = local_67c;
  local_278 = 1;
  local_408 = CONCAT44(0xb,(undefined4)local_408);
  local_1e6 = 1;
  local_38e = 1;
  fVar45 = 1.0 - (*(float *)(param_1 + 100) + *(float *)(param_1 + 100));
  local_1e4 = local_38c;
  uStack_1dc = uStack_384;
  local_5f8 = FWeakObjectPtr::Get(param_1 + 0x58);
  local_610 = 0;
  local_600 = 0x3f800000;
  local_5fc = 0x3f800000;
  local_5f0 = 0;
  local_700 = (longlong *)0x0;
  local_6f8 = 0;
  local_608 = fVar45 * fVar47 * fVar43;
  local_604 = fVar45 * fVar44 * fVar43;
  puVar34 = (undefined8 *)
            FText::ToString(*(longlong *)(param_1 + 0xa0) +
                            (longlong)*(int *)(param_1 + 0xb0) * 0x18);
  if (*(int *)(puVar34 + 1) != 0) {
    puVar41 = (undefined2 *)*puVar34;
  }
  local_748 = &local_700;
  local_740 = (undefined8 *)0x0;
  FUN_1428bfb00(lVar37,&local_610,0,puVar41);
  plVar35 = local_700 + (longlong)(int)local_6f8 * 3;
  fVar43 = (1.0 - *(float *)(param_1 + 100)) * fVar44 - (float)(int)local_6f8 * local_704;
  for (plVar42 = local_700; plVar42 != plVar35; plVar42 = plVar42 + 3) {
    uVar36 = FText::FromString(local_550,plVar42);
    FText::operator=(local_2e8,uVar36);
    plVar29 = local_548;
    if (local_548 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_548 + 1;
      lVar31 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar31 == 1) {
        (**(code **)*local_548)(local_548);
        LOCK();
        piVar1 = (int *)((longlong)plVar29 + 0xc);
        iVar40 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar40 == 1) {
          (**(code **)(*plVar29 + 8))(plVar29,1);
        }
      }
    }
    fVar45 = fVar43 + local_704;
    local_410 = CONCAT44(fVar43,(fVar47 - fVar46 * *(float *)(plVar42 + 2)) * 0.5);
    FCanvas::DrawItem(lVar37,&local_418);
    fVar43 = fVar45;
  }
  FCanvas::DrawItem(lVar37,&local_270);
  fVar46 = *(float *)(param_1 + 0xbc);
  local_66c = 0.002;
  if ((0.002 <= fVar46) && (local_66c = fVar46, 1.0 <= fVar46)) {
    local_66c = 1.0;
  }
  local_710 = 1;
  local_720 = &local_678;
  local_718 = 0;
  local_728 = 0x3f800000;
  local_730 = 0x3f800000;
  local_738 = (undefined4 *)((ulonglong)local_738 & 0xffffffff00000000);
  local_740 = (undefined8 *)((ulonglong)local_740 & 0xffffffff00000000);
  local_748 = (longlong **)CONCAT44(local_748._4_4_,fVar44);
  local_678 = 0;
  local_670 = 0;
  FUN_1428a8450(lVar37);
  plVar35 = local_700;
  for (iVar40 = (int)local_6f8; iVar40 != 0; iVar40 = iVar40 + -1) {
    if (*plVar35 != 0) {
      FMemory::Free();
    }
    plVar35 = plVar35 + 3;
  }
  if (local_700 != (longlong *)0x0) {
    FMemory::Free(local_700);
  }
  FUN_140c64b70(&local_418);
  FUN_140c64b70(&local_270);
  if (local_690 != (longlong *)0x0) {
    LOCK();
    plVar35 = local_690 + 1;
    lVar31 = *plVar35;
    *(int *)plVar35 = (int)*plVar35 + -1;
    UNLOCK();
    if ((int)lVar31 == 1) {
      (**(code **)*local_690)(local_690);
      LOCK();
      piVar1 = (int *)((longlong)local_690 + 0xc);
      iVar40 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar40 == 1) {
        (**(code **)(*local_690 + 8))(local_690,1);
      }
    }
  }
LAB_140c6c776:
  lVar31 = *(longlong *)(param_1 + 0x68);
  if (lVar31 != 0) {
    lVar39 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar31 + 0x10) + 0x90) < *(int *)(lVar39 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x88) + (longlong)*(int *)(lVar39 + 0x90) * 8
         ) != lVar39 + 0x88)) {
      bVar28 = false;
    }
    else {
      bVar28 = true;
    }
    if (bVar28) {
      FUN_1411dd110(lVar31 + 0x7a0,lVar37);
    }
  }
  FUN_1428aaa90(lVar37,&DAT_146ab6e78,0);
  puVar34 = *(undefined8 **)(lVar37 + 0x58);
  FUN_14289d030(lVar37);
  FMemory::Free(lVar37);
  if (puVar34 != (undefined8 *)0x0) {
    (**(code **)*puVar34)(puVar34,1);
  }
  return;
}



// FUNCTION 140c6c890 FUN_140c6c890 body=565 status=ok
// SIG undefined FUN_140c6c890(void)

ulonglong FUN_140c6c890(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong in_RAX;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  lVar9 = param_1[0x23];
  if (lVar9 != 0) {
    lVar7 = FUN_14145f370();
    iVar4 = *(int *)(lVar7 + 0x90);
    uVar8 = (longlong)iVar4;
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < iVar4) ||
       (uVar8 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + 0x88),
       *(longlong *)(uVar8 + (longlong)iVar4 * 8) != lVar7 + 0x88)) {
      in_RAX = uVar8 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar8 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      iVar4 = *(int *)((longlong)param_1 + 0xc);
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar10 = iVar4 >> 0x1f & 0xffff;
        uVar6 = iVar4 + uVar10;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      in_RAX = 0;
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
        FUN_142dcf3a0(lVar9,&local_48);
        if (local_48 == 0) {
          uVar8 = 0;
        }
        else {
          lVar9 = FUN_142b45e90();
          local_38 = local_48;
          plStack_30 = plStack_40;
          uVar5 = *(undefined8 *)(lVar9 + 0x18);
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
            UNLOCK();
          }
          FUN_142b4a990(uVar5,&local_18,&local_38);
          plVar2 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_30 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar3 = (int *)((longlong)plVar2 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          if (local_18 == 0) {
            uVar8 = 0;
          }
          else {
            FUN_142b47a30(local_18,&local_28,&DAT_14686c980);
            if (local_28 == 0) {
              (**(code **)(*param_1 + 0x3b0))(param_1,0);
            }
            uVar8 = (ulonglong)(local_28 != 0);
            if (local_20 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_20 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_20)(local_20);
                LOCK();
                piVar3 = (int *)((longlong)local_20 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_20 + 8))(local_20,1);
                }
              }
            }
          }
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_10 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar3 = (int *)((longlong)local_10 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_10 + 8))(local_10,1);
              }
            }
          }
        }
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_40 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar3 = (int *)((longlong)plStack_40 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_40 + 8))(plStack_40,1);
            }
          }
        }
        return uVar8;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c6cad0 FUN_140c6cad0 body=148 status=ok
// SIG undefined FUN_140c6cad0(void)

void FUN_140c6cad0(longlong param_1)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb4);
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * DAT_1468b02f8;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(double *)(param_1 + 0x18) = dVar1 + 16777216.0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_142543860(*(longlong *)(param_1 + 0x38),*(longlong *)(param_1 + 0x40),0,1);
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_142543860(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x48),0,1);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}



// FUNCTION 140c6cb70 FUN_140c6cb70 body=179 status=ok
// SIG undefined FUN_140c6cb70(void)

void FUN_140c6cb70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FMovieViewport::SetTexture(*(undefined8 *)(param_1 + 0x20),&local_18);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_141edf360();
  }
  FUN_141ee24f0();
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x30) != &local_28) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c6cc30 FUN_140c6cc30 body=658 status=ok
// SIG undefined FUN_140c6cc30(void)

void FUN_140c6cc30(longlong *param_1,char param_2,char param_3,float param_4,int param_5)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  char local_res10;
  char local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if ((lVar7 != 0) && ((char)param_1[0x25] == '\x03')) {
    local_res8[0] = 0;
    AlgoImpl::
    IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
              (param_1[0x134],(longlong)(int)param_1[0x135],0,local_res8);
    plVar11 = (longlong *)param_1[0x134];
    iVar12 = 0;
    plVar1 = plVar11 + (int)param_1[0x135];
    for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
      if (*plVar11 != 0) {
        bVar5 = FUN_142ffa430();
        if (bVar5 < 3) break;
        iVar12 = iVar12 + 1;
      }
    }
    fVar2 = *(float *)(lVar7 + 0x790);
    iVar13 = 0;
    if (-1 < iVar12 - param_5) {
      iVar13 = iVar12 - param_5;
    }
    iVar12 = (int)param_1[0x135] + -1;
    if (-1 < iVar12) {
      lVar7 = (longlong)iVar12 * 8;
      lVar14 = lVar7;
      do {
        lVar3 = *(longlong *)(lVar14 + param_1[0x134]);
        if ((((lVar3 != 0) && ((param_4 < 0.0 || (*(float *)(lVar3 + 0xd4) <= fVar2 - param_4)))) &&
            ((local_res10 == '\0' ||
             ((*(longlong *)(lVar3 + 0x4c0) == 0 ||
              (*(char *)(*(longlong *)(lVar3 + 0x4c0) + 0x38) == '\0')))))) &&
           ((local_res18 == '\0' || (lVar8 = FUN_14222e2a0(lVar3), lVar8 == 0)))) {
          lVar8 = *(longlong *)(lVar3 + 0x568);
          if (lVar8 != 0) {
            lVar9 = FUN_141437c50();
            lVar8 = *(longlong *)(lVar8 + 0x10);
            if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                lVar9 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) goto LAB_140c6ce77;
          }
          bVar5 = FUN_142ffa430(lVar3);
          if (2 < bVar5) {
            if (iVar13 < 1) goto LAB_140c6ce77;
            iVar13 = iVar13 + -1;
          }
          iVar10 = (int)param_1[0x137];
          *(int *)(param_1 + 0x137) = iVar10 + 1;
          if (*(int *)((longlong)param_1 + 0x9bc) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (param_1 + 0x136,iVar10);
          }
          *(longlong *)(param_1[0x136] + (longlong)iVar10 * 8) = lVar3;
          iVar10 = (int)param_1[0x135];
          iVar6 = (iVar10 - iVar12) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x134] + lVar7),
                       (void *)(param_1[0x134] + (longlong)(iVar10 - iVar6) * 8),
                       (longlong)iVar6 << 3);
            iVar10 = (int)param_1[0x135];
          }
          *(int *)(param_1 + 0x135) = iVar10 + -1;
        }
LAB_140c6ce77:
        lVar7 = lVar7 + -8;
        lVar14 = lVar14 + -8;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
  }
  return;
}



// FUNCTION 140c6ced0 FUN_140c6ced0 body=70 status=ok
// SIG undefined FUN_140c6ced0(void)

void FUN_140c6ced0(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x9e0)) {
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    if (*(int *)(param_1 + 0x9e4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9d8,0);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xa18,0);
    return;
  }
  return;
}



// FUNCTION 140c6cf20 FUN_140c6cf20 body=14 status=ok
// SIG undefined FUN_140c6cf20(void)

void FUN_140c6cf20(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x788,0);
  return;
}



// FUNCTION 140c6cf30 FUN_140c6cf30 body=768 status=ok
// SIG undefined FUN_140c6cf30(void)

void FUN_140c6cf30(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *local_48;
  int local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  if (((param_2 == (longlong *)0x0) ||
      (lVar6 = (**(code **)(*param_2 + 0x148))(param_2), lVar6 == 0)) ||
     (lVar6 = *(longlong *)(lVar6 + 400), lVar6 == 0)) {
LAB_140c6cf9e:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140c6cf9e;
  }
  if (param_3 != (longlong *)0x0) {
    plVar8 = (longlong *)FUN_142f71d80();
    plVar11 = param_3;
    do {
      if (plVar11 == plVar8) {
        plVar8 = (longlong *)FUN_142f71d80();
        plVar11 = param_3;
        goto LAB_140c6cfd0;
      }
      plVar11 = (longlong *)plVar11[6];
    } while (plVar11 != (longlong *)0x0);
  }
  goto LAB_140c6d03a;
  while (plVar11 = (longlong *)plVar11[6], plVar11 != (longlong *)0x0) {
LAB_140c6cfd0:
    if (plVar11 == plVar8) goto LAB_140c6cfe0;
  }
  param_3 = (longlong *)0x0;
LAB_140c6cfe0:
  lVar7 = param_3[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*param_3 + 0x368))(param_3);
    lVar7 = param_3[0x1f];
    if (lVar7 == 0) goto LAB_140c6d03a;
  }
  lVar9 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) goto LAB_140c6d03c;
LAB_140c6d03a:
  lVar7 = 0;
LAB_140c6d03c:
  if (((lVar6 != 0) && (lVar7 != 0)) && (param_4 != 0)) {
    uVar5 = FUN_1409ac010(lVar7);
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar10,&local_48);
    while( true ) {
      if ((local_40 < 0) || ((int)local_48[1] <= local_40)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      plVar11 = (longlong *)FWeakObjectPtr::Get(*local_48 + (longlong)local_40 * 8);
      if (plVar11 != (longlong *)0x0) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
            != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (((*(uint *)((longlong)plVar11 + 0x4cc) >> 1 & 1) == 0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x768))(plVar11), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            uVar10 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
            lVar7 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar10);
            if (lVar7 != 0) {
              FUN_142de0f80(lVar7,param_4,0);
            }
            FUN_142dcf3a0(plVar11,&local_38);
            if (local_38 != 0) {
              local_28 = local_38;
              plStack_20 = plStack_30;
              if (plStack_30 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
                UNLOCK();
              }
              uVar10 = FUN_140bb7220(lVar6);
              FUN_140d6c6b0(uVar10,&local_28,uVar5);
              plVar11 = plStack_20;
              if (plStack_20 != (longlong *)0x0) {
                LOCK();
                plVar8 = plStack_20 + 1;
                lVar7 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plStack_20)(plStack_20);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
            }
            plVar11 = plStack_30;
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              plVar8 = plStack_30 + 1;
              lVar7 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_30)(plStack_30);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
        }
      }
      local_40 = local_40 + 1;
    }
  }
  return;
}



// FUNCTION 140c6d230 FUN_140c6d230 body=789 status=ok
// SIG undefined FUN_140c6d230(void)

void FUN_140c6d230(undefined8 param_1,char param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *local_90;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  lVar10 = FUN_1422312c0();
  if (lVar10 != 0) {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140c6d297;
  }
  lVar10 = 0;
LAB_140c6d297:
  if ((param_3 != 0) && (lVar10 != 0)) {
    if (param_2 == '\x01') {
      uVar15 = 7;
    }
    else if (param_2 == '\x02') {
      uVar15 = 8;
    }
    else {
      if (param_2 != '\x03') {
        return;
      }
      uVar15 = 9;
    }
    plVar12 = (longlong *)UListView::OnItemSelectionChanged(lVar10);
    plVar16 = (longlong *)*plVar12;
    plVar12 = plVar16 + (int)plVar12[1];
    for (; plVar16 != plVar12; plVar16 = plVar16 + 1) {
      if (*plVar16 == 0) {
        plVar14 = (longlong *)0x0;
        bVar6 = true;
        local_80 = (longlong *)0x0;
        lVar11 = 0;
      }
      else {
        bVar8 = true;
        bVar7 = true;
        lVar11 = FUN_142547b50(*plVar16,local_68);
        plVar14 = *(longlong **)(lVar11 + 0x10);
        lVar11 = *(longlong *)(lVar11 + 8);
        local_90 = plVar14;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      if ((bVar6) && (bVar6 = false, local_80 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      if ((bVar7) && (bVar7 = false, local_90 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      if (bVar8) {
        bVar8 = false;
        local_68[0] = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar1 = local_58;
        local_68[0] = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_58 + 1;
          lVar9 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_58)(local_58);
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
      }
      if (lVar11 != 0) {
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        local_78 = lVar11;
        local_70 = plVar14;
        uVar13 = FUN_140bb7220(lVar10);
        FUN_140d6b680(uVar13,&local_78,uVar15,param_3);
        plVar1 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_70)(local_70);
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
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c6d550 FUN_140c6d550 body=108 status=ok
// SIG undefined FUN_140c6d550(void)

void FUN_140c6d550(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x128) != '\x03') && (lVar2 = FUN_1422312c0(), lVar2 != 0)) {
    lVar3 = FUN_14141f270();
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
      FUN_140bd56f0(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140c6d5c0 FUN_140c6d5c0 body=109 status=ok
// SIG undefined FUN_140c6d5c0(void)

void FUN_140c6d5c0(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x128) != '\x03') && (lVar2 = FUN_1422312c0(), lVar2 != 0)) {
    lVar3 = FUN_14141f270();
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
      FUN_140bd5710(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140c6d630 ClientReceive body=83 status=ok
// SIG undefined ClientReceive(void)

void ULocalMessage::ClientReceive(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine/Classes/GameFramework/LocalMessage.h",
             0x3d,L"Pure virtual not implemented (%s)",L"ULocalMessage::ClientReceive");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine/Classes/GameFramework/LocalMessage.h",
             0x3d,L"Pure virtual not implemented (%s)",L"ULocalMessage::ClientReceive");
  return;
}



// FUNCTION 140c6d690 FUN_140c6d690 body=227 status=ok
// SIG undefined FUN_140c6d690(void)

void FUN_140c6d690(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res10 [8];
  
  plVar4 = (longlong *)*param_2;
  lVar3 = 0;
  if (plVar4 != (longlong *)0x0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*plVar4 + 0x148))(plVar4);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x148);
        if (lVar3 != 0) {
          lVar2 = FUN_141424d10();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_140c6d740;
        }
        lVar3 = 0;
      }
      goto LAB_140c6d740;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140c6d740:
  if (((plVar4 != (longlong *)0x0) && (plVar4[0x285] != 0)) && (lVar3 != 0)) {
    FUN_1411d9ef0(plVar4[0x285],local_res10,param_2);
  }
  return;
}



// FUNCTION 140c6d780 FUN_140c6d780 body=1441 status=ok
// SIG undefined FUN_140c6d780(void)

void FUN_140c6d780(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (param_1 != param_2) {
    puVar6 = (undefined8 *)*param_1;
    for (iVar7 = (int)param_1[1]; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar6 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar6[10] != 0) {
        FMemory::Free();
      }
      puVar6 = puVar6 + 0x16;
    }
    iVar7 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FAnimLegIKData,FDefaultAllocator>::ResizeForCopy(param_1,iVar7);
      puVar6 = (undefined8 *)*param_1;
      if (iVar7 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0xa0);
        puVar8 = puVar6 + 0x14;
        do {
          FUN_140c630e0(puVar6,puVar5 + -0x14);
          *puVar6 = &PTR_FUN_1440fbd88;
          uVar3 = puVar5[-7];
          puVar6 = puVar6 + 0x16;
          puVar8[-8] = puVar5[-8];
          puVar8[-7] = uVar3;
          uVar3 = puVar5[-5];
          puVar8[-6] = puVar5[-6];
          puVar8[-5] = uVar3;
          uVar3 = puVar5[-3];
          puVar8[-4] = puVar5[-4];
          puVar8[-3] = uVar3;
          uVar3 = puVar5[-1];
          puVar8[-2] = puVar5[-2];
          puVar8[-1] = uVar3;
          *puVar8 = *puVar5;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
          *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar5 + 0xc);
          iVar7 = iVar7 + -1;
          puVar5 = puVar5 + 0x16;
          puVar8 = puVar8 + 0x16;
        } while (iVar7 != 0);
      }
    }
  }
  plVar1 = param_1 + 2;
  if (plVar1 != param_2 + 2) {
    puVar6 = (undefined8 *)*plVar1;
    for (iVar7 = (int)param_1[3]; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar6 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar6[10] != 0) {
        FMemory::Free();
      }
      puVar6 = puVar6 + 0x1c;
    }
    iVar7 = (int)param_2[3];
    lVar2 = param_2[2];
    *(int *)(param_1 + 3) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FAsyncPathFindingQuery,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
      puVar6 = (undefined8 *)*plVar1;
      if (iVar7 != 0) {
        puVar4 = (undefined4 *)(lVar2 + 0xa8);
        puVar5 = puVar6 + 0x15;
        do {
          FUN_140c630e0(puVar6,puVar4 + -0x2a);
          *puVar6 = &PTR_FUN_1440fbd78;
          uVar3 = *(undefined8 *)(puVar4 + -0x10);
          puVar6 = puVar6 + 0x1c;
          puVar5[-9] = *(undefined8 *)(puVar4 + -0x12);
          puVar5[-8] = uVar3;
          uVar3 = *(undefined8 *)(puVar4 + -0xc);
          puVar5[-7] = *(undefined8 *)(puVar4 + -0xe);
          puVar5[-6] = uVar3;
          uVar3 = *(undefined8 *)(puVar4 + -8);
          puVar5[-5] = *(undefined8 *)(puVar4 + -10);
          puVar5[-4] = uVar3;
          uVar3 = *(undefined8 *)(puVar4 + -4);
          puVar5[-3] = *(undefined8 *)(puVar4 + -6);
          puVar5[-2] = uVar3;
          *(undefined4 *)(puVar5 + -1) = puVar4[-2];
          *(undefined4 *)((longlong)puVar5 + -4) = puVar4[-1];
          *(undefined4 *)puVar5 = *puVar4;
          *(undefined4 *)((longlong)puVar5 + 4) = puVar4[1];
          puVar5[1] = *(undefined8 *)(puVar4 + 2);
          *(undefined4 *)(puVar5 + 2) = puVar4[4];
          *(undefined8 *)((longlong)puVar5 + 0x14) = *(undefined8 *)(puVar4 + 5);
          *(undefined4 *)((longlong)puVar5 + 0x1c) = puVar4[7];
          *(undefined4 *)(puVar5 + 4) = puVar4[8];
          *(undefined4 *)((longlong)puVar5 + 0x24) = puVar4[9];
          *(undefined4 *)(puVar5 + 5) = puVar4[10];
          iVar7 = iVar7 + -1;
          puVar4 = puVar4 + 0x38;
          puVar5 = puVar5 + 0x1c;
        } while (iVar7 != 0);
      }
    }
  }
  plVar1 = param_1 + 4;
  if (plVar1 != param_2 + 4) {
    puVar6 = (undefined8 *)*plVar1;
    for (iVar7 = (int)param_1[5]; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar6 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar6[10] != 0) {
        FMemory::Free();
      }
      puVar6 = puVar6 + 0x1a;
    }
    iVar7 = (int)param_2[5];
    lVar2 = param_2[4];
    *(int *)(param_1 + 5) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
      puVar6 = (undefined8 *)*plVar1;
      if (iVar7 != 0) {
        puVar4 = (undefined4 *)(lVar2 + 0xa8);
        puVar5 = puVar6 + 0x15;
        do {
          FUN_140c630e0(puVar6,puVar4 + -0x2a);
          *puVar6 = &PTR_FUN_1444d5498;
          uVar3 = *(undefined8 *)(puVar4 + -0x10);
          puVar6 = puVar6 + 0x1a;
          puVar5[-9] = *(undefined8 *)(puVar4 + -0x12);
          puVar5[-8] = uVar3;
          uVar3 = *(undefined8 *)(puVar4 + -0xc);
          puVar5[-7] = *(undefined8 *)(puVar4 + -0xe);
          puVar5[-6] = uVar3;
          uVar3 = *(undefined8 *)(puVar4 + -8);
          puVar5[-5] = *(undefined8 *)(puVar4 + -10);
          puVar5[-4] = uVar3;
          uVar3 = *(undefined8 *)(puVar4 + -4);
          puVar5[-3] = *(undefined8 *)(puVar4 + -6);
          puVar5[-2] = uVar3;
          *(undefined4 *)(puVar5 + -1) = puVar4[-2];
          *(undefined4 *)((longlong)puVar5 + -4) = puVar4[-1];
          *(undefined4 *)puVar5 = *puVar4;
          *(undefined4 *)((longlong)puVar5 + 4) = puVar4[1];
          puVar5[1] = *(undefined8 *)(puVar4 + 2);
          *(undefined4 *)(puVar5 + 2) = puVar4[4];
          *(undefined8 *)((longlong)puVar5 + 0x14) = *(undefined8 *)(puVar4 + 5);
          *(undefined4 *)((longlong)puVar5 + 0x1c) = puVar4[7];
          *(undefined4 *)(puVar5 + 4) = puVar4[8];
          *(undefined4 *)((longlong)puVar5 + 0x24) = puVar4[9];
          iVar7 = iVar7 + -1;
          puVar4 = puVar4 + 0x34;
          puVar5 = puVar5 + 0x1a;
        } while (iVar7 != 0);
      }
    }
  }
  plVar1 = param_1 + 6;
  if (plVar1 != param_2 + 6) {
    puVar6 = (undefined8 *)*plVar1;
    for (iVar7 = (int)param_1[7]; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (puVar6[0xc] != 0) {
        FMemory::Free();
      }
      *puVar6 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar6[10] != 0) {
        FMemory::Free();
      }
      puVar6 = puVar6 + 0x1a;
    }
    FUN_140c5f160(plVar1,param_2[6],(int)param_2[7],*(undefined4 *)((longlong)param_1 + 0x3c),0);
  }
  plVar1 = param_1 + 8;
  if (plVar1 != param_2 + 8) {
    puVar6 = (undefined8 *)*plVar1;
    for (iVar7 = (int)param_1[9]; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar6 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar6[10] != 0) {
        FMemory::Free();
      }
      puVar6 = puVar6 + 0x11;
    }
    iVar7 = (int)param_2[9];
    lVar2 = param_2[8];
    *(int *)(param_1 + 9) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x4c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      FUN_1406f4a40(plVar1,iVar7);
      puVar6 = (undefined8 *)*plVar1;
      if (iVar7 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x6c);
        puVar8 = (undefined8 *)((longlong)puVar6 + 0x6c);
        do {
          FUN_140c630e0(puVar6,(longlong)puVar5 + -0x6c);
          *puVar6 = &PTR_FUN_1444d54a8;
          *(undefined8 *)((longlong)puVar8 + -0xc) = *(undefined8 *)((longlong)puVar5 + -0xc);
          puVar6 = puVar6 + 0x11;
          *(undefined4 *)((longlong)puVar8 + -4) = *(undefined4 *)((longlong)puVar5 + -4);
          *puVar8 = *puVar5;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
          *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar5 + 0xc);
          *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar5 + 2);
          *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)((longlong)puVar5 + 0x14);
          iVar7 = iVar7 + -1;
          puVar5 = puVar5 + 0x11;
          puVar8 = puVar8 + 0x11;
        } while (iVar7 != 0);
      }
    }
  }
  return;
}



// FUNCTION 140c6dd30 FUN_140c6dd30 body=52 status=ok
// SIG undefined FUN_140c6dd30(void)

void FUN_140c6dd30(void)

{
  if (DAT_14686caa0 == 0) {
    FUN_140c6f5c0();
    if (DAT_14686caa0 == 0) {
      return;
    }
  }
  FUN_140cbad20(DAT_14686caa0,0,1);
  return;
}



// FUNCTION 140c6dd70 FUN_140c6dd70 body=159 status=ok
// SIG undefined FUN_140c6dd70(void)

void FUN_140c6dd70(void)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  plVar1 = DAT_14686ca80;
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,1);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x8000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((DAT_14686caa0 == 0) && (FUN_140c6f5c0(), DAT_14686caa0 == 0)) {
    return;
  }
  FUN_140cbad20(DAT_14686caa0,0,1);
  FUN_140cd87d0(DAT_14686caa0,1);
  *(undefined1 *)(DAT_14686caa0 + 0x12) = 1;
  return;
}



// FUNCTION 140c6de10 FUN_140c6de10 body=339 status=ok
// SIG undefined FUN_140c6de10(void)

void FUN_140c6de10(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  longlong *local_30;
  int local_28;
  longlong local_20;
  
  lVar1 = DAT_14686caa0;
  if ((DAT_14686caa0 != 0) && (0 < *(int *)(param_1 + 1))) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)*param_1;
    }
    FUN_14289aca0(local_78,0,puVar4,0);
    puVar4 = &DAT_143f3eda8;
    if (local_48 != 0) {
      puVar4 = local_50;
    }
    plVar2 = (longlong *)FPackageName::GetShortName(local_88,puVar4);
    plVar3 = (longlong *)(lVar1 + 200);
    if (plVar3 != plVar2) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      *plVar3 = *plVar2;
      *plVar2 = 0;
      *(int *)(lVar1 + 0xd0) = (int)plVar2[1];
      *(undefined4 *)(lVar1 + 0xd4) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    plVar2 = local_30;
    if (local_20 != 0) {
      FMemory::Free();
      plVar2 = local_30;
    }
    for (; local_28 != 0; local_28 = local_28 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_30 != (longlong *)0x0) {
      FMemory::Free(local_30);
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_50 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    FUN_140cd5660(DAT_14686caa0);
  }
  return;
}



// FUNCTION 140c6df70 FUN_140c6df70 body=147 status=ok
// SIG undefined FUN_140c6df70(void)

void FUN_140c6df70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_10;
  
  if (DAT_14686caa0 != 0) {
    FUN_140cd4e60(DAT_14686caa0,0);
    local_10 = (longlong *)0x0;
    DAT_14686caa0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&DAT_14686caa8,&local_10,param_3,param_4,0);
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
  return;
}



// FUNCTION 140c6e030 FUN_140c6e030 body=310 status=ok
// SIG undefined FUN_140c6e030(void)

void FUN_140c6e030(undefined8 *param_1)

{
  wint_t wVar1;
  wint_t wVar2;
  wint_t *pwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = -1;
  if (*(int *)(param_1 + 1) != 0) {
    puVar5 = &DAT_143f3eda8;
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)*param_1;
    }
    pwVar3 = &DAT_144359c5c;
    do {
      wVar1 = *(wint_t *)((longlong)(puVar4 + -0xa21ace2e) + (longlong)pwVar3);
      if ((wVar1 == 0) && (*pwVar3 == 0)) goto LAB_140c6e0bb;
      if (wVar1 != *pwVar3) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar3);
        if (wVar1 != wVar2) goto LAB_140c6e0b1;
      }
      pwVar3 = pwVar3 + 1;
    } while( true );
  }
  goto LAB_140c6e125;
LAB_140c6e106:
  iVar6 = -1;
  if (wVar1 == wVar2) {
LAB_140c6e110:
    iVar6 = 1;
  }
  goto LAB_140c6e125;
LAB_140c6e0b1:
  if (wVar1 != wVar2) {
    if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
      puVar5 = *(undefined2 **)*param_1;
    }
    pwVar3 = &DAT_14435a07c;
    do {
      wVar1 = *(wint_t *)((longlong)(puVar5 + -0xa21ad03e) + (longlong)pwVar3);
      if ((wVar1 == 0) && (*pwVar3 == 0)) goto LAB_140c6e110;
      if (wVar1 != *pwVar3) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar3);
        if (wVar1 != wVar2) goto LAB_140c6e106;
      }
      pwVar3 = pwVar3 + 1;
    } while( true );
  }
LAB_140c6e0bb:
  iVar6 = 0;
LAB_140c6e125:
  if (DAT_14686caa0 != 0) {
    bVar7 = *(char *)(DAT_14686caa0 + 0x11) == '\0';
    if (iVar6 != -1) {
      bVar7 = iVar6 != 0;
    }
    FUN_140cd87d0(DAT_14686caa0,bVar7,1);
    *(bool *)(DAT_14686caa0 + 0x12) = bVar7;
  }
  return;
}



// FUNCTION 140c6e170 Compact body=590 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = (int)param_1[1];
  uVar16 = 0;
  iVar17 = iVar3 - iVar2;
  lVar5 = *param_1;
  iVar12 = iVar3;
  iVar8 = (int)param_1[6];
  if ((int)param_1[6] != -1) {
    do {
      iVar14 = *(int *)((longlong)iVar8 * 0x18 + 4 + *param_1);
      if (iVar8 < iVar17) {
        bVar6 = (byte)iVar12 & 0x1f;
        uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        do {
          iVar13 = iVar12 + -1;
          uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
          iVar15 = iVar13;
          if (iVar13 < 0) {
            iVar15 = iVar12 + 0x1e;
          }
          iVar12 = iVar13;
        } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4) & uVar10) == 0);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x18 + lVar5),
                   (void *)(lVar5 + (longlong)iVar13 * 0x18),0x18);
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        iVar15 = iVar8;
        if (iVar8 < 0) {
          iVar15 = iVar8 + 0x1f;
        }
        uVar16 = 1;
        puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      }
      iVar8 = iVar14;
    } while (iVar14 != -1);
    iVar12 = (int)param_1[1];
  }
  iVar8 = (iVar12 - iVar17) - iVar2;
  if (iVar8 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar17 * 0x18),
               (void *)(*param_1 + (longlong)iVar3 * 0x18),(longlong)iVar8 * 0x18);
    iVar12 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar12 - iVar2;
  TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
  iVar12 = (int)param_1[5];
  if (iVar3 != iVar12) {
    iVar14 = 0;
    iVar8 = 0;
    iVar13 = 0;
    iVar15 = 0;
    uVar10 = 1;
    uVar11 = 1;
    if (0 < iVar12) {
      do {
        if ((iVar15 < iVar17) || (iVar3 <= iVar15)) {
          if (iVar8 != iVar15) {
            plVar9 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar9 = param_1 + 2;
            }
            uVar4 = *(uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            puVar1 = (uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            if ((*(uint *)((longlong)plVar9 + (longlong)iVar13 * 4) & uVar11) == 0) {
              *puVar1 = ~uVar10 & uVar4;
            }
            else {
              *puVar1 = uVar4 | uVar10;
            }
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 * 2;
          if (uVar10 == 0) {
            uVar10 = 1;
            iVar14 = iVar14 + 1;
          }
        }
        iVar12 = (int)param_1[5];
        uVar4 = uVar11 * 2;
        iVar15 = iVar15 + 1;
        iVar7 = iVar13 + 1;
        uVar11 = 1;
        if (uVar4 != 0) {
          iVar7 = iVar13;
          uVar11 = uVar4;
        }
        iVar13 = iVar7;
      } while (iVar15 < iVar12);
    }
  }
  *(int *)(param_1 + 5) = iVar12 - iVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return uVar16;
}



// FUNCTION 140c6e3c0 FUN_140c6e3c0 body=161 status=ok
// SIG undefined FUN_140c6e3c0(void)

undefined8 FUN_140c6e3c0(longlong param_1,uint param_2,char param_3)

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
      FUN_140cc9060(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c6e470 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c6e520 FUN_140c6e520 body=3404 status=ok
// SIG undefined FUN_140c6e520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c6e520(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_778 [32];
  undefined8 local_758;
  undefined1 *local_750;
  undefined4 local_748;
  longlong local_740;
  longlong local_738;
  longlong local_730;
  undefined1 local_728;
  undefined1 local_720;
  longlong local_718;
  longlong local_708;
  undefined8 local_700;
  longlong *local_6f8;
  longlong *local_6f0;
  longlong *plStack_6e8;
  longlong *local_6e0;
  int local_6d8;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined2 local_6c8;
  undefined8 local_6c0;
  undefined4 local_6b8;
  undefined8 local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  longlong local_698;
  longlong *local_690;
  longlong *local_688;
  longlong *local_680;
  longlong *local_678;
  longlong *local_670;
  longlong *local_668;
  undefined8 local_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined1 local_630;
  undefined8 local_628;
  undefined4 local_620;
  longlong local_618 [2];
  undefined8 local_608;
  undefined8 uStack_600;
  undefined1 local_5f8 [8];
  longlong *local_5f0;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  longlong *local_5d8;
  longlong *local_5d0;
  longlong *local_5c0;
  longlong *local_5b8;
  longlong *local_5a8;
  longlong *local_5a0;
  longlong *local_590;
  longlong *local_588;
  longlong *local_578;
  longlong *plStack_570;
  undefined1 local_568 [280];
  undefined1 local_450 [48];
  longlong *local_420;
  undefined1 local_410 [16];
  undefined1 local_400 [24];
  undefined1 local_3e8 [296];
  undefined1 local_2c0 [24];
  longlong *local_2a8;
  undefined1 local_288 [264];
  longlong local_180;
  undefined1 local_168 [288];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_778;
  local_698 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686d968) && (_Init_thread_header(&DAT_14686d968), DAT_14686d968 == -1))
  {
    FName::FName(&DAT_14686d960,L"/Game/UI/Loading/LoadingScreen.LoadingScreen",1);
    _Init_thread_footer(&DAT_14686d968);
  }
  puVar8 = (undefined8 *)FName::ToString(&DAT_14686d960,local_618);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*puVar8;
  }
  uVar9 = UTexture2D::GetPrivateStaticClass();
  local_748 = CONCAT31(local_748._1_3_,1);
  local_750 = (undefined1 *)0x0;
  local_758 = (ulonglong)local_758._4_4_ << 0x20;
  uVar9 = FUN_141799c90(uVar9,0,puVar16,0);
  if (local_618[0] != 0) {
    FMemory::Free();
  }
  local_608 = 0x3f8000003f800000;
  uStack_600 = 0x3f8000003f800000;
  local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
  local_6d0 = 0x44f00000;
  local_6cc = 0x44870000;
  local_758 = local_758 & 0xffffffff00000000;
  puVar8 = (undefined8 *)FUN_1427f8850(local_5f8,uVar9,&local_6d0,&local_608);
  local_6f8 = (longlong *)puVar8[1];
  local_700 = *puVar8;
  if (local_6f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6f8 + 1) = (int)local_6f8[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)(param_1 + 0x2f0);
  if (puVar8 != &local_700) {
    *puVar8 = local_700;
    local_700 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2f8,&local_6f8);
  }
  plVar15 = local_6f8;
  if (local_6f8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_6f8 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_6f8)(local_6f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_6f8 + 8))(local_6f8,1);
      }
    }
  }
  if (local_5f0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_5f0 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5f0)(local_5f0);
      LOCK();
      piVar1 = (int *)((longlong)local_5f0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_5f0 + 8))(local_5f0,1);
      }
    }
  }
  local_6a8 = &LAB_140cb8c00;
  local_640 = 0x41200000;
  uStack_63c = 0x41200000;
  uStack_638 = 0x41200000;
  uStack_634 = 0x41200000;
  uStack_6a0 = 0;
  local_630 = 1;
  local_628 = 0;
  local_620 = 0;
  lVar10 = SThrobber::FArguments::FArguments(local_168);
  local_5e8 = (undefined4)local_6a8;
  uStack_5e4 = local_6a8._4_4_;
  uStack_5e0 = uStack_6a0;
  uStack_5dc = uStack_69c;
  uVar9 = FUN_140c5f360(&local_6e0,param_1,&local_5e8);
  local_6c8 = 0x119;
  local_6c0 = 0;
  local_6b8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_6c0,uVar9);
  *(undefined1 *)(lVar10 + 0x78) = (undefined1)local_6c8;
  *(undefined1 *)(lVar10 + 0x79) = local_6c8._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x80,&local_6c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6c0);
  if (local_6d8 != 0) {
    if (local_6e0 == (longlong *)0x0) goto LAB_140c6e7c9;
    (**(code **)(*local_6e0 + 0x28))(local_6e0,0);
    if (local_6e0 != (longlong *)0x0) {
      local_6e0 = (longlong *)FMemory::Realloc(local_6e0,0,0);
    }
    local_6d8 = 0;
  }
  if (local_6e0 != (longlong *)0x0) {
    FMemory::Free(local_6e0);
  }
LAB_140c6e7c9:
  plVar11 = (longlong *)FUN_140c61d80();
  plVar15 = plVar11 + 2;
  local_5d8 = plVar15;
  local_5d0 = plVar11;
  FUN_14044f790(&local_5d8,plVar15);
  local_758 = 0x3a8;
  SWidget::SetDebugInfo
            (plVar15,"SThrobber",
             "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakGameViewportClient.cpp",0x58);
  local_748 = *(undefined4 *)(lVar10 + 0x90);
  local_718 = lVar10 + 0xf8;
  local_730 = lVar10 + 0xe8;
  local_720 = *(undefined1 *)(lVar10 + 0xf1);
  local_738 = lVar10 + 200;
  local_740 = lVar10 + 0x98;
  local_728 = *(undefined1 *)(lVar10 + 0xf0);
  local_758 = lVar10 + 0x60;
  local_750 = (undefined1 *)(lVar10 + 0x78);
  SWidget::SWidgetConstruct(plVar15,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141935a10(plVar15,lVar10);
  if (((char)plVar11[5] < '\0') || (cVar6 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar7;
  uVar18 = 0x41200000;
  uVar19 = 0x41200000;
  uVar20 = 0x41200000;
  uVar21 = 0x41200000;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    uVar18 = local_640;
    uVar19 = uStack_63c;
    uVar20 = uStack_638;
    uVar21 = uStack_634;
  }
  lVar10 = FUN_14068fde0(local_3e8);
  *(undefined4 *)(lVar10 + 0x10c) = 3;
  *(undefined4 *)(lVar10 + 0x108) = 3;
  *(undefined4 *)(lVar10 + 0x110) = uVar18;
  *(undefined4 *)(lVar10 + 0x114) = uVar19;
  *(undefined4 *)(lVar10 + 0x118) = uVar20;
  *(undefined4 *)(lVar10 + 0x11c) = uVar21;
  *(undefined1 *)(lVar10 + 0x120) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_628);
  *(undefined1 *)(lVar10 + 0x148) = 1;
  pplVar3 = (longlong **)(lVar10 + 0x138);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_6f0 = plVar15;
  plStack_6e8 = plVar11;
  if (&local_6f0 != pplVar3) {
    local_6f0 = *pplVar3;
    plStack_6e8 = *(longlong **)(lVar10 + 0x140);
    *pplVar3 = plVar15;
    *(longlong **)(lVar10 + 0x140) = plVar11;
    local_578 = plVar15;
    plStack_570 = plVar11;
  }
  plVar15 = plStack_6e8;
  if (plStack_6e8 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_6e8 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_6e8)(plStack_6e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_6e8 + 8))(plStack_6e8,1);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar11 + 1;
    lVar5 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar12 = (longlong *)FUN_14068e7a0();
  plVar15 = plVar12 + 2;
  local_5c0 = plVar15;
  local_5b8 = plVar12;
  FUN_14044f790(&local_5c0,plVar15);
  local_758 = 0x368;
  SWidget::SetDebugInfo
            (plVar15,"SSafeZone",
             "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakGameViewportClient.cpp",0x52);
  local_748 = *(undefined4 *)(lVar10 + 0x90);
  local_718 = lVar10 + 0xf8;
  local_730 = lVar10 + 0xe8;
  local_720 = *(undefined1 *)(lVar10 + 0xf1);
  local_738 = lVar10 + 200;
  local_740 = lVar10 + 0x98;
  local_728 = *(undefined1 *)(lVar10 + 0xf0);
  local_750 = (undefined1 *)(lVar10 + 0x78);
  local_758 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar15,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_1419761c0(plVar15,lVar10);
  if (((char)plVar12[5] < '\0') || (cVar6 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_680 = plVar15;
  local_678 = plVar12;
  uVar9 = (*(code *)**(undefined8 **)*puVar8)();
  local_658 = 1;
  local_650 = 0;
  local_648 = 0;
  local_660 = uVar9;
  lVar10 = SImage::FArguments::FArguments(local_568);
  *(undefined8 *)(lVar10 + 0x108) = uVar9;
  *(undefined1 *)(lVar10 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x118,&local_650);
  plVar13 = (longlong *)FUN_140c61c00();
  plVar15 = plVar13 + 2;
  local_5a8 = plVar15;
  local_5a0 = plVar13;
  FUN_14044f790(&local_5a8,plVar15);
  local_758 = 0x278;
  SWidget::SetDebugInfo
            (plVar15,"SImage",
             "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakGameViewportClient.cpp",0x4b);
  local_748 = *(undefined4 *)(lVar10 + 0x90);
  local_718 = lVar10 + 0xf8;
  local_730 = lVar10 + 0xe8;
  local_720 = *(undefined1 *)(lVar10 + 0xf1);
  local_738 = lVar10 + 200;
  local_740 = lVar10 + 0x98;
  local_728 = *(undefined1 *)(lVar10 + 0xf0);
  local_750 = (undefined1 *)(lVar10 + 0x78);
  local_758 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar15,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  SImage::Construct(plVar15,lVar10);
  if (((char)plVar13[5] < '\0') || (cVar6 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar7;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_690 = plVar15;
  local_688 = plVar13;
  puVar8 = (undefined8 *)FMemory::Malloc(0x50);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    FSlotBase::FSlotBase(puVar8);
    *puVar8 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar8 + 4) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    *(undefined1 *)(puVar8 + 7) = 1;
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 9) = 0;
  }
  puVar17 = (undefined8 *)0x0;
  *(undefined2 *)((longlong)puVar8 + 0x24) = 0;
  puVar14 = (undefined8 *)FMemory::Malloc(0x50);
  if (puVar14 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar14);
    *(undefined4 *)(puVar14 + 4) = 0;
    *puVar14 = &PTR_FUN_1444d5278;
    puVar14[5] = 0;
    puVar14[6] = 0;
    *(undefined1 *)(puVar14 + 7) = 1;
    puVar14[8] = 0;
    *(undefined4 *)(puVar14 + 9) = 0;
    puVar17 = puVar14;
  }
  *(undefined2 *)((longlong)puVar17 + 0x24) = 0;
  local_6a8 = (undefined1 *)FUN_140801a00(puVar17,&local_690);
  lVar10 = SOverlay::FArguments::FArguments(local_288);
  plVar15 = (longlong *)(lVar10 + 0x108);
  iVar4 = *(int *)(lVar10 + 0x110);
  *(int *)(lVar10 + 0x110) = iVar4 + 1;
  local_708 = lVar10;
  if (*(int *)(lVar10 + 0x114) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar4);
  }
  *(undefined1 **)(*plVar15 + (longlong)iVar4 * 8) = local_6a8;
  uVar9 = FUN_140801a00(puVar8,&local_680);
  iVar4 = *(int *)(lVar10 + 0x110);
  *(int *)(lVar10 + 0x110) = iVar4 + 1;
  if (*(int *)(lVar10 + 0x114) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar4);
  }
  *(undefined8 *)(*plVar15 + (longlong)iVar4 * 8) = uVar9;
  plVar15 = (longlong *)FMemory::Malloc(0x240,0);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar15 + 1) = 1;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar15 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar2 = plVar15 + 2;
  local_590 = plVar2;
  local_588 = plVar15;
  FUN_14044f790(&local_590,plVar2);
  local_758 = 0x230;
  SWidget::SetDebugInfo
            (plVar2,"SOverlay",
             "D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakGameViewportClient.cpp",0x46);
  local_718 = local_708 + 0xf8;
  local_730 = local_708 + 0xe8;
  local_738 = local_708 + 200;
  local_740 = local_708 + 0x98;
  local_750 = (undefined1 *)(local_708 + 0x78);
  local_758 = local_708 + 0x60;
  local_720 = *(undefined1 *)(local_708 + 0xf1);
  local_728 = *(undefined1 *)(local_708 + 0xf0);
  local_748 = *(undefined4 *)(local_708 + 0x90);
  SWidget::SWidgetConstruct(plVar2,local_708,local_708 + 0x30,local_708 + 0x40);
  SOverlay::Construct(plVar2,local_708);
  if (((char)plVar15[5] < '\0') || (cVar6 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar7;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_670 = plVar2;
  local_668 = plVar15;
  TSlotBase<FSimpleSlot>::operator[](local_698 + 0x218,&local_670);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar15 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    LOCK();
    plVar2 = plVar15 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    LOCK();
    plVar2 = plVar15 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if (local_180 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_288);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar15 = plVar13 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar15 = plVar13 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_410);
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_420 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_420)(local_420);
      LOCK();
      piVar1 = (int *)((longlong)local_420 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_420 + 8))(local_420,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_450);
  FUN_140456c70(local_568);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_650);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar15 = plVar12 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar15 = plVar12 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (local_2a8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_2a8 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2a8)(local_2a8);
      LOCK();
      piVar1 = (int *)((longlong)local_2a8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2a8 + 8))(local_2a8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2c0);
  FUN_140456c70(local_3e8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar11 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    LOCK();
    plVar15 = plVar11 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  FUN_140456c70(local_168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
  return;
}



// FUNCTION 140c6f270 FUN_140c6f270 body=469 status=ok
// SIG undefined FUN_140c6f270(void)

void FUN_140c6f270(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_142cbda20();
  if (param_2 != 0) {
    lVar2 = FUN_141405840();
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
      *(undefined1 *)(param_1 + 0x959) = *(undefined1 *)(param_2 + 0x959);
      *(undefined1 *)(param_1 + 0x962) = *(undefined1 *)(param_2 + 0x962);
      *(undefined1 *)(param_1 + 0x961) = *(undefined1 *)(param_2 + 0x961);
      *(undefined1 *)(param_1 + 0x960) = *(undefined1 *)(param_2 + 0x960);
      *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_2 + 0x964);
      *(undefined1 *)(param_1 + 0x969) = *(undefined1 *)(param_2 + 0x969);
      *(undefined1 *)(param_1 + 0x968) = *(undefined1 *)(param_2 + 0x968);
      *(undefined1 *)(param_1 + 0x95a) = *(undefined1 *)(param_2 + 0x95a);
      *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
      *(undefined1 *)(param_1 + 0x958) = *(undefined1 *)(param_2 + 0x958);
      *(undefined1 *)(param_1 + 0x95d) = *(undefined1 *)(param_2 + 0x95d);
      *(undefined1 *)(param_1 + 0x95c) = *(undefined1 *)(param_2 + 0x95c);
      *(undefined1 *)(param_1 + 0x95e) = *(undefined1 *)(param_2 + 0x95e);
      *(undefined1 *)(param_1 + 0x95b) = *(undefined1 *)(param_2 + 0x95b);
      *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(param_2 + 0x994);
      lVar2 = 0;
      if (*(longlong *)(param_1 + 0x950) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x950) + 0xe68);
      }
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x2b80) != 0)) {
        *(undefined1 *)(param_1 + 0x971) = *(undefined1 *)(param_2 + 0x971);
        *(undefined8 *)(param_1 + 0x978) = *(undefined8 *)(param_2 + 0x978);
        *(undefined8 *)(param_1 + 0x980) = *(undefined8 *)(param_2 + 0x980);
        *(undefined1 *)(param_1 + 0x988) = *(undefined1 *)(param_2 + 0x988);
        *(undefined1 *)(param_1 + 0x989) = *(undefined1 *)(param_2 + 0x989);
        *(undefined1 *)(param_1 + 0x98a) = *(undefined1 *)(param_2 + 0x98a);
        *(undefined1 *)(param_1 + 0x98b) = *(undefined1 *)(param_2 + 0x98b);
        *(undefined1 *)(param_1 + 0x98c) = *(undefined1 *)(param_2 + 0x98c);
      }
      *(undefined4 *)(param_1 + 0xacc) = *(undefined4 *)(param_2 + 0xacc);
      *(undefined1 *)(param_1 + 0xac8) = *(undefined1 *)(param_2 + 0xac8);
      *(undefined1 *)(param_1 + 0x5a8) = *(undefined1 *)(param_2 + 0x5a8);
    }
  }
  return;
}



// FUNCTION 140c6f450 FUN_140c6f450 body=54 status=ok
// SIG undefined FUN_140c6f450(void)

void FUN_140c6f450(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9d08;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140c6f490 FUN_140c6f490 body=62 status=ok
// SIG undefined FUN_140c6f490(void)

void FUN_140c6f490(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9ee8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    return;
  }
  return;
}



// FUNCTION 140c6f4d0 FUN_140c6f4d0 body=82 status=ok
// SIG undefined FUN_140c6f4d0(void)

undefined8 * FUN_140c6f4d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444da0b0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140c6f530 FUN_140c6f530 body=70 status=ok
// SIG undefined FUN_140c6f530(void)

void FUN_140c6f530(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9ed0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    return;
  }
  return;
}



// FUNCTION 140c6f580 FUN_140c6f580 body=63 status=ok
// SIG undefined FUN_140c6f580(void)

void FUN_140c6f580(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x310) != 0) {
    uVar1 = FUN_1420fe5f0();
    *(undefined4 *)(param_1 + 0x2f8) = uVar1;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c6f5c0 FUN_140c6f5c0 body=388 status=ok
// SIG undefined FUN_140c6f5c0(void)

void FUN_140c6f5c0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)FMemory::Malloc(0xd8,0);
  plVar7 = (longlong *)0x0;
  plVar8 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined2 *)(plVar5 + 1) = 0;
    *(undefined4 *)(plVar5 + 2) = 0x1000000;
    *plVar5 = (longlong)&PTR_FUN_1444d8e78;
    *(undefined1 *)((longlong)plVar5 + 0x14) = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    *(undefined4 *)(plVar5 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)plVar5 + 0x5c) = 0;
    plVar5[0xe] = 0x3f800000;
    plVar5[0xf] = 0;
    FText::FText(plVar5 + 0x11);
    plVar5[0x14] = 0;
    plVar5[0x15] = 0;
    plVar5[0x16] = 0;
    *(undefined4 *)(plVar5 + 0x17) = 0xbf800000;
    *(undefined8 *)((longlong)plVar5 + 0xbc) = 0x3f800000;
    plVar5[0x19] = 0;
    plVar5[0x1a] = 0;
    uVar6 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar6,L"NoOakLoadingScene");
    DAT_14686c501 = cVar4 == '\0';
    plVar8 = plVar5;
  }
  plVar5 = (longlong *)FMemory::Malloc(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar8;
    plVar7 = plVar5;
  }
  local_10 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_18,plVar8,plVar8);
  local_18 = 0;
  DAT_14686caa0 = plVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_14686caa8,&local_10);
  plVar7 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
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
  return;
}



// FUNCTION 140c6f750 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444d9db0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1444d9df8;
  }
  return;
}



// FUNCTION 140c6f7a0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444d9e40;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1444d9e88;
  }
  return;
}



// FUNCTION 140c6f7f0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444d9d20;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1444d9d68;
  }
  return;
}



// FUNCTION 140c6f840 FUN_140c6f840 body=58 status=ok
// SIG undefined FUN_140c6f840(void)

void FUN_140c6f840(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444da158;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1444da1a0;
  }
  return;
}



// FUNCTION 140c6f880 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444da0c8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1444da110;
  }
  return;
}



// FUNCTION 140c6f8d0 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_1444d8ea0;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 140c6f930 FUN_140c6f930 body=66 status=ok
// SIG undefined FUN_140c6f930(void)

void FUN_140c6f930(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444d9918;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1444d9960;
  }
  return;
}



// FUNCTION 140c6f980 FUN_140c6f980 body=78 status=ok
// SIG undefined FUN_140c6f980(void)

void FUN_140c6f980(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d7358;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1444d73a0;
  }
  return;
}



// FUNCTION 140c6f9d0 FUN_140c6f9d0 body=84 status=ok
// SIG undefined FUN_140c6f9d0(void)

void FUN_140c6f9d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444d9f90;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1444d9fd8;
  }
  return;
}



// FUNCTION 140c6fa30 FUN_140c6fa30 body=84 status=ok
// SIG undefined FUN_140c6fa30(void)

void FUN_140c6fa30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444da020;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1444da068;
  }
  return;
}



// FUNCTION 140c6fa90 FUN_140c6fa90 body=78 status=ok
// SIG undefined FUN_140c6fa90(void)

void FUN_140c6fa90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444d9f00;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1444d9f48;
  }
  return;
}



// FUNCTION 140c6fae0 FUN_140c6fae0 body=246 status=ok
// SIG undefined FUN_140c6fae0(void)

void FUN_140c6fae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_38;
  undefined4 local_30;
  
  *(int *)(param_1 + 0x844) = *(int *)(param_1 + 0x844) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x844);
  iVar5 = *(int *)(param_1 + 0x838) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x830);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140c6fb80:
        bVar3 = true;
      }
      else {
        local_30 = *(undefined4 *)(param_4 + 1);
        local_38 = *param_4;
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,&local_38,param_5);
        if (cVar4 == '\0') goto LAB_140c6fb80;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x844);
  }
  *(int *)(param_1 + 0x844) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x830),0);
    return;
  }
  return;
}



// FUNCTION 140c6fbe0 FUN_140c6fbe0 body=319 status=ok
// SIG undefined FUN_140c6fbe0(void)

void FUN_140c6fbe0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res10;
  undefined4 local_res14;
  
  if (((*(longlong *)(param_1 + 0x50) != 0) &&
      (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458), lVar8 != 0)) &&
     (*(longlong *)(lVar8 + 0x3d0) == 0)) {
    uVar2 = FUN_140cb67d0();
    FUN_140cb65d0(&local_res10);
    uVar4 = GetTransientPackage();
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar8 = 0;
    uVar5 = UTexture2D::GetPrivateStaticClass();
    lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
    *(byte *)(lVar6 + 0x4b) = *(byte *)(lVar6 + 0x4b) | 1;
    *(undefined4 *)(lVar6 + 200) = 0;
    *(undefined4 *)(lVar6 + 0xcc) = 0x3f000000;
    *(undefined4 *)(lVar6 + 0xd0) = 0x3f800000;
    *(undefined4 *)(lVar6 + 0xd4) = 0x3f800000;
    FUN_14287a5c0(lVar6,local_res10,local_res14,uVar2,1);
    FUN_142894320(lVar6,1);
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x458) + 0x3d0) = lVar6;
  }
  return;
}



// FUNCTION 140c6fd20 FUN_140c6fd20 body=697 status=ok
// SIG undefined FUN_140c6fd20(void)

void FUN_140c6fd20(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  bool bVar2;
  wint_t wVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  char *pcVar10;
  longlong local_48;
  int local_40;
  undefined1 local_38 [32];
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 == 0) {
LAB_140c6ffac:
    if (*param_2 != 0) {
      FMemory::Free();
    }
    if (*param_3 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  UWorld::GetPlayerControllerIterator(lVar5,&local_48);
LAB_140c6fd71:
  if ((local_40 < 0) || (*(int *)(local_48 + 8) <= local_40)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar5 = FWeakObjectPtr::Get();
    if (lVar5 != 0) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar6 = FUN_140cff1b0(), lVar6 != 0)) {
        if ((int)param_2[1] == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (ushort *)*param_2;
        }
        pcVar10 = "AreaDiscovered";
        do {
          uVar1 = *puVar9;
          if ((uVar1 == 0) && (*pcVar10 == '\0')) {
            iVar4 = 0;
            goto LAB_140c6fe48;
          }
          if ((uint)uVar1 != (int)*pcVar10) {
            wVar3 = towlower(uVar1);
            iVar4 = tolower((int)*pcVar10);
            if ((uint)wVar3 != (int)(char)iVar4) goto LAB_140c6fe46;
          }
          puVar9 = puVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while( true );
      }
    }
    goto LAB_140c6ff83;
  }
  goto LAB_140c6ffac;
LAB_140c6fe46:
  iVar4 = (uint)wVar3 - (int)(char)iVar4;
LAB_140c6fe48:
  if (iVar4 != 0) {
    if ((int)param_2[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (ushort *)*param_2;
    }
    pcVar10 = "AreaEntered";
    do {
      uVar1 = *puVar9;
      if ((uVar1 == 0) && (*pcVar10 == '\0')) {
        iVar4 = 0;
        goto LAB_140c6fee0;
      }
      if ((uint)uVar1 != (int)*pcVar10) {
        wVar3 = towlower(uVar1);
        iVar4 = tolower((int)*pcVar10);
        if ((uint)wVar3 != (int)(char)iVar4) goto LAB_140c6fede;
      }
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
  uVar7 = FText::FromString(local_38,param_3);
  uVar8 = FUN_140cff1b0(lVar5);
  FUN_140cbefa0(uVar8,uVar7);
  local_40 = local_40 + 1;
  goto LAB_140c6fd71;
LAB_140c6fede:
  iVar4 = (uint)wVar3 - (int)(char)iVar4;
LAB_140c6fee0:
  if (iVar4 != 0) {
    if ((int)param_2[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (ushort *)*param_2;
    }
    pcVar10 = "VaultReward";
    do {
      uVar1 = *puVar9;
      if ((uVar1 == 0) && (*pcVar10 == '\0')) goto LAB_140c6ff71;
      if ((uint)uVar1 != (int)*pcVar10) {
        wVar3 = towlower(uVar1);
        iVar4 = tolower((int)*pcVar10);
        if ((uint)wVar3 != (int)(char)iVar4) goto LAB_140c6ff6d;
      }
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
  uVar7 = FText::FromString(local_38,param_3);
  uVar8 = FUN_140cff1b0(lVar5);
  FUN_140cbf0c0(uVar8,uVar7,0);
  local_40 = local_40 + 1;
  goto LAB_140c6fd71;
LAB_140c6ff6d:
  if ((uint)wVar3 == (int)(char)iVar4) {
LAB_140c6ff71:
    uVar7 = FUN_140cff1b0(lVar5);
    FUN_140cc1880(uVar7,1);
  }
LAB_140c6ff83:
  local_40 = local_40 + 1;
  goto LAB_140c6fd71;
}



// FUNCTION 140c6ffe0 FUN_140c6ffe0 body=202 status=ok
// SIG undefined FUN_140c6ffe0(void)

void FUN_140c6ffe0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  FUN_142478440();
  cVar2 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar2 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      UWorld::GetPlayerControllerIterator(lVar3,&local_18);
      while( true ) {
        if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar3 = FWeakObjectPtr::Get();
        if (lVar3 != 0) {
          lVar4 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_140d1b270();
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}



// FUNCTION 140c700e0 FUN_140c700e0 body=31 status=ok
// SIG undefined FUN_140c700e0(void)

void FUN_140c700e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x7e0,local_res8);
  return;
}



// FUNCTION 140c70100 FUN_140c70100 body=133 status=ok
// SIG undefined FUN_140c70100(void)

void FUN_140c70100(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_142d7f010();
  uVar1 = FUN_142e1a5a0();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3f8))(plVar2,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 140c70190 FUN_140c70190 body=186 status=ok
// SIG undefined FUN_140c70190(void)

void FUN_140c70190(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x778,local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 140c70250 FUN_140c70250 body=248 status=ok
// SIG undefined FUN_140c70250(void)

void FUN_140c70250(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined4 local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  FText::FText(local_40);
  local_20 = 0;
  local_48 = param_2;
  FText::operator=(local_40,param_3);
  local_20 = param_5;
  local_18 = param_6;
  local_28 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x758,&local_48);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_3 + 8);
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
  return;
}



// FUNCTION 140c70350 FUN_140c70350 body=273 status=ok
// SIG undefined FUN_140c70350(void)

void FUN_140c70350(longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined4 local_20;
  undefined8 local_18;
  undefined1 local_10;
  undefined1 local_f;
  
  FText::FText(local_38);
  local_18 = 0;
  local_48 = param_2;
  local_40 = param_3;
  FText::operator=(local_38,param_4);
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_f = param_8;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x768,&local_48);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_4 + 8);
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
  return;
}



// FUNCTION 140c70470 FUN_140c70470 body=164 status=ok
// SIG undefined FUN_140c70470(void)

void FUN_140c70470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x1428) != 0)) {
      FUN_1411db4f0(*(longlong *)(lVar1 + 0x1428),local_res8,param_2,param_3,param_4,0,2);
    }
  }
  return;
}



// FUNCTION 140c70520 FUN_140c70520 body=973 status=ok
// SIG undefined FUN_140c70520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c70520(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130;
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [2];
  longlong local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar10 = param_1 + 0x6d8;
  lVar6 = FUN_1405ec200(lVar10);
  if (lVar6 != 0) {
    FUN_1413b97e0();
  }
  lVar6 = FWeakObjectPtr::Get(lVar10);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x6e0)) {
      return;
    }
    local_128 = (undefined4 *)0x0;
    if (*(longlong *)(param_1 + 0x6e8) == 0) {
      return;
    }
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar10,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x6e0) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar10);
    if (lVar6 == 0) {
      return;
    }
  }
  lVar7 = FUN_1413b97e0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a8,L"VAULT CARD LEVEL UP {0}",L"OakHUD",L"VaultCardLevelUpFormat");
  puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar8);
  local_68[0] = 0;
  local_128 = local_68;
  local_40 = '\0';
  puStack_120 = local_38;
  local_110 = *puVar9;
  local_108 = puVar9[1];
  if (local_108 != 0) {
    LOCK();
    *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
    UNLOCK();
  }
  local_60 = (longlong)param_2;
  local_f8 = local_128;
  puStack_f0 = puStack_120;
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
  uVar8 = FText::Format(local_c0,&local_110,uVar8);
  FText::FText(local_d8,uVar8);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b8 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_e8);
  if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_50 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = (longlong *)puVar9[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  local_118 = 0;
  lVar6 = FWeakObjectPtr::Get(lVar10);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x6e0)) &&
       (local_128 = (undefined4 *)0x0, *(longlong *)(param_1 + 0x6e8) != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar10,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x6e0) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(lVar10);
      if (lVar6 != 0) goto LAB_140c70832;
    }
  }
  else {
LAB_140c70832:
    lVar10 = FUN_1413b97e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140c7086b;
  }
  lVar6 = 0;
LAB_140c7086b:
  uVar8 = FText::FText(local_80,local_d8);
  local_130 = 0;
  local_138 = local_118;
  FUN_140c70250(param_1,lVar6,uVar8,0);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return;
}



// FUNCTION 140c708f0 FUN_140c708f0 body=854 status=ok
// SIG undefined FUN_140c708f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c708f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  LARGE_INTEGER local_300;
  longlong local_2f8;
  longlong local_2f0;
  LARGE_INTEGER local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined2 local_2d0;
  undefined1 local_2c8 [192];
  undefined4 local_208;
  undefined1 local_138 [92];
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  lVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_300);
  (**(code **)(*(longlong *)(*param_1 + 0x20) + 0x28))();
  local_318 = *(longlong *)(*param_1 + 8);
  if (local_318 != 0) {
    LOCK();
    *(int *)(local_318 + 8) = *(int *)(local_318 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar2 = plVar5 + 1;
  local_2f8 = local_318;
  if (*(longlong **)(lVar1 + 0x38) < plVar2) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
    plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar2 = plVar5 + 1;
  }
  *(longlong **)(lVar1 + 0x30) = plVar2;
  *plVar5 = local_2f8;
  puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 5;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x30);
    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar4;
  *(undefined8 **)(lVar1 + 8) = puVar4 + 1;
  *puVar4 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar4 + 2) = 1;
  puVar4[3] = plVar5;
  *(undefined4 *)(puVar4 + 4) = 1;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[1] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_318);
  local_310 = *(longlong *)(*param_1 + 8);
  if (local_310 != 0) {
    LOCK();
    *(int *)(local_310 + 8) = *(int *)(local_310 + 8) + 1;
    UNLOCK();
  }
  local_2d8 = 0;
  local_2d4 = 0xffffffff;
  local_2d0 = 0x102;
  local_2e0 = local_310;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_310);
  local_328 = 0;
  local_320 = 0;
  FUN_140c63b80(local_2c8,1,&local_2e0,&local_328);
  local_3c = 1;
  local_dc = _DAT_1464c9c88;
  uStack_d8 = uRam00000001464c9c8c;
  uStack_d4 = uRam00000001464c9c90;
  uStack_d0 = uRam00000001464c9c94;
  local_cc = DAT_1464c9c98;
  FRHICommandListBase::CacheActiveRenderTargets(lVar1,local_208,local_2c8,local_138);
  puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 0x54;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x2a8);
    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 0x54;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar4;
  *(undefined8 **)(lVar1 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar4 + 2,local_2c8);
  local_308 = *(longlong *)(*param_1 + 8);
  if (local_308 != 0) {
    LOCK();
    *(int *)(local_308 + 8) = *(int *)(local_308 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar2 = plVar5 + 1;
  local_2f0 = local_308;
  if (*(longlong **)(lVar1 + 0x38) < plVar2) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
    plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar2 = plVar5 + 1;
  }
  *(longlong **)(lVar1 + 0x30) = plVar2;
  *plVar5 = local_2f0;
  puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 5;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x30);
    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar4;
  *(undefined8 **)(lVar1 + 8) = puVar4 + 1;
  *puVar4 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar4 + 2) = 1;
  puVar4[3] = plVar5;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[1] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_308);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2c8);
  QueryPerformanceCounter(&local_2e8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_2e8.s.LowPart - local_300._0_4_);
  return;
}



// FUNCTION 140c70c50 FUN_140c70c50 body=491 status=ok
// SIG undefined FUN_140c70c50(void)

undefined8 FUN_140c70c50(undefined8 param_1,longlong param_2,longlong param_3)

{
  void *pvVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x60) != 0)) && (param_3 != 0)) {
    lVar5 = FUN_14057ade0(param_3);
    if (lVar5 != 0) {
      local_30 = *(int *)(lVar5 + 0xc0);
      lVar9 = (longlong)local_30;
      pvVar1 = *(void **)(lVar5 + 0xb8);
      local_38 = (void *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
        _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar9 << 3);
      }
      cVar3 = FUN_140c65fa0(local_res10,&local_38,*(undefined8 *)(param_2 + 0x60));
      if (cVar3 != '\0') {
        return 1;
      }
    }
    lVar5 = *(longlong *)(param_3 + 0x38);
    if ((lVar5 != 0) ||
       ((*(longlong *)(param_3 + 0x30) != 0 && (lVar5 = FUN_140cb9700(), lVar5 != 0)))) {
      lVar9 = *(longlong *)(lVar5 + 0x48);
      lVar5 = lVar9 + (longlong)*(int *)(lVar5 + 0x50) * 0x28;
      for (; lVar9 != lVar5; lVar9 = lVar9 + 0x28) {
        plVar7 = *(longlong **)(lVar9 + 0x18);
        plVar8 = plVar7 + (longlong)*(int *)(lVar9 + 0x20) * 8;
        for (; plVar7 != plVar8; plVar7 = plVar7 + 8) {
          lVar2 = *plVar7;
          if (lVar2 != 0) {
            lVar6 = FUN_14302b1c0();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              local_30 = *(int *)(lVar2 + 0x210);
              lVar6 = (longlong)local_30;
              pvVar1 = *(void **)(lVar2 + 0x208);
              local_38 = (void *)0x0;
              if (local_30 == 0) {
                local_2c = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (&local_38,local_30,0);
                _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar6 << 3);
              }
              cVar3 = FUN_140c65fa0(local_res10,&local_38,*(undefined8 *)(param_2 + 0x60));
              if (cVar3 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140c70e40 FUN_140c70e40 body=172 status=ok
// SIG undefined FUN_140c70e40(void)

void FUN_140c70e40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  FUN_142479e10();
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = 0;
    if (bVar2) {
      lVar3 = lVar1;
    }
    if ((*(char *)(param_1 + 0x2f0) != '\0') && (lVar3 != 0)) {
      FUN_1411dd110(lVar3 + 0x7a0,param_3);
    }
    local_res8[0] = 0;
    FUN_1424a9f80(param_3,0,0,0,local_res8);
  }
  return;
}



// FUNCTION 140c70ef0 FUN_140c70ef0 body=1397 status=ok
// SIG undefined FUN_140c70ef0(void)

void FUN_140c70ef0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float fStackX_14;
  undefined **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  longlong local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [160];
  
  if ((param_1[0xc6] != 0) && (lVar1 = *(longlong *)(param_1[0xc6] + 0x488), lVar1 != 0)) {
    uVar4 = FUN_1430a8880();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
      if ((lVar1 != 0) && (cVar2 = FUN_140b830f0(lVar1), cVar2 != '\0')) {
        iVar3 = FUN_142708650(param_1[0xc6]);
        fVar14 = 1.0;
        if (*(longlong **)(param_1[0xc6] + 0x528) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1[0xc6] + 0x528) + 0x778))();
          fVar14 = (float)FUN_14271a5d0(param_1[0xc6]);
          fVar14 = _guard_xfg_dispatch_icall_nop(fVar14 * 0.5 * 0.017453292);
        }
        fVar10 = *(float *)(param_1[0x95] + 0x30);
        fVar11 = *(float *)(param_1[0x95] + 0x34);
        fVar13 = fVar10 * 0.5;
        fVar12 = fVar11 * 0.5;
        pfVar6 = (float *)(**(code **)(*plVar5 + 0x168))(plVar5,&local_res10);
        fStackX_c = fVar11 * pfVar6[1];
        local_res8 = fVar10 * *pfVar6;
        if (((fVar13 <= fVar12) || (iVar3 != 2)) && (iVar3 != 1)) {
          fVar13 = fVar12;
        }
        fVar10 = *(float *)((longlong)param_1 + 0x8ac);
        if (fVar10 <= 0.0) {
          fVar10 = (float)(**(code **)(*plVar5 + 0x138))(plVar5,0);
          fVar10 = fVar10 * 0.5;
          lVar7 = (**(code **)(*plVar5 + 0xf0))(plVar5,0);
          if (lVar7 != 0) {
            fVar11 = (float)FUN_143079090(lVar7);
            fVar10 = fVar10 * fVar11;
          }
        }
        lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        iVar3 = 0;
        fVar11 = *(float *)(lVar7 + 0x790);
        if (*(float *)(param_1 + 0x116) <= fVar11) {
          lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          FUN_140b8c5f0(lVar1,&local_res10,*(undefined4 *)(lVar7 + 0x790));
          fVar12 = *(float *)(lVar1 + 0x3a8);
          if (fVar12 <= 0.016667) {
            fVar12 = 0.016667;
          }
          iVar9 = (int)(*(float *)(lVar1 + 0x3a4) / fVar12);
          if (iVar9 <= (int)param_1[0x11a]) {
            plVar5 = param_1 + 0x117;
            do {
              lVar1 = param_1[0x118];
              if (lVar1 != 0) {
                if ((int)param_1[0x11a] == 1) {
                  FUN_140c71a20(plVar5);
                }
                else {
                  if (lVar1 == param_1[0x118]) {
                    lVar1 = *(longlong *)(param_1[0x118] + 8);
                    param_1[0x118] = lVar1;
                    *(undefined8 *)(lVar1 + 0x10) = 0;
                  }
                  else if (lVar1 == param_1[0x119]) {
                    lVar1 = *(longlong *)(param_1[0x119] + 0x10);
                    param_1[0x119] = lVar1;
                    *(undefined8 *)(lVar1 + 8) = 0;
                  }
                  else {
                    *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10)
                    ;
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
                  }
                  FMemory::Free();
                  (**(code **)(*plVar5 + 8))(plVar5,(int)param_1[0x11a] + -1);
                }
              }
            } while (iVar9 <= (int)param_1[0x11a]);
          }
          puVar8 = (undefined8 *)FMemory::Malloc(0x18);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = CONCAT44(fStackX_14,local_res10);
            puVar8[1] = 0;
            puVar8[2] = 0;
            if (param_1[0x119] == 0) {
              param_1[0x118] = (longlong)puVar8;
            }
            else {
              *(undefined8 **)(param_1[0x119] + 8) = puVar8;
              puVar8[2] = param_1[0x119];
            }
            param_1[0x119] = (longlong)puVar8;
            (**(code **)(param_1[0x117] + 8))(param_1 + 0x117,(int)param_1[0x11a] + 1);
          }
          *(float *)(param_1 + 0x116) = fVar12 + fVar11;
        }
        fVar14 = 1.0 / fVar14;
        fVar10 = _guard_xfg_dispatch_icall_nop(fVar10 * 0.017453292);
        local_128 = 0;
        local_120 = 0;
        local_118 = 0;
        local_res10 = fVar10 * fVar14 * fVar13;
        local_138 = &PTR__scalar_deleting_destructor__1444d5570;
        local_100 = 0;
        local_f8[0] = 0;
        local_130 = CONCAT44(fStackX_c,local_res8);
        local_f8[1] = 0x18;
        local_110 = 0x3f80000000000000;
        uStack_108 = 0x3e80000000000000;
        fStackX_14 = local_res10;
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(local_f8,0);
        FUN_1428bcef0(&local_138,&local_res8,&local_res10);
        FUN_1428a6cf0(param_1[0x95],&local_138);
        pfVar6 = (float *)param_1[0x118];
        local_e8 = 0x3f800000;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0x3f800000;
        local_d8 = 0x3e4ccccd;
        uStack_d0 = 0x3f80000000000000;
        if (pfVar6 != (float *)0x0) {
          local_res10 = 2.0;
          fStackX_14 = 2.0;
          do {
            fVar10 = *pfVar6;
            fVar11 = pfVar6[1];
            iVar3 = iVar3 + 1;
            puVar8 = (undefined8 *)
                     FLinearColor::LerpUsingHSV
                               (local_b8,&local_d8,&local_e8,
                                (float)iVar3 / (float)(int)param_1[0x11a]);
            local_c8 = *puVar8;
            uStack_c0 = puVar8[1];
            fVar10 = _guard_xfg_dispatch_icall_nop(fVar10 * 0.017453292);
            fVar12 = fVar10 * fVar14 * fVar13 + local_res8;
            fVar10 = _guard_xfg_dispatch_icall_nop(fVar11 * 0.017453292);
            FUN_1428b30b0(param_1[0x95],0,CONCAT44(fVar10 * fVar14 * fVar13 + fStackX_c,fVar12),
                          0x4000000040000000,4,&local_c8);
            pfVar6 = *(float **)(pfVar6 + 2);
          } while (pfVar6 != (float *)0x0);
        }
        if (local_f8[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140c71470 FUN_140c71470 body=1096 status=ok
// SIG undefined FUN_140c71470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c71470(longlong *param_1,undefined8 param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined4 local_120;
  float local_11c;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((param_1[0xc6] != 0) && (*(longlong *)(param_1[0xc6] + 0x528) != 0)) {
    fVar8 = *param_3 + 140.0;
    lVar2 = (**(code **)(*param_1 + 0x148))();
    iVar4 = 0;
    fVar7 = *(float *)(lVar2 + 0x790);
    if (*(float *)(param_1 + 0x11b) <= fVar7) {
      if (0x62 < (int)param_1[0x11f]) {
        plVar1 = param_1 + 0x11c;
        do {
          lVar2 = param_1[0x11d];
          if (lVar2 != 0) {
            if ((int)param_1[0x11f] == 1) {
              FUN_140c71a20(plVar1);
            }
            else {
              if (lVar2 == param_1[0x11d]) {
                lVar2 = *(longlong *)(param_1[0x11d] + 8);
                param_1[0x11d] = lVar2;
                *(undefined8 *)(lVar2 + 0x10) = 0;
              }
              else if (lVar2 == param_1[0x11e]) {
                lVar2 = *(longlong *)(param_1[0x11e] + 0x10);
                param_1[0x11e] = lVar2;
                *(undefined8 *)(lVar2 + 8) = 0;
              }
              else {
                *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
                *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
              }
              FMemory::Free();
              (**(code **)(*plVar1 + 8))(plVar1,(int)param_1[0x11f] + -1);
            }
          }
        } while (0x62 < (int)param_1[0x11f]);
      }
      fVar5 = (float)(**(code **)(**(longlong **)(param_1[0xc6] + 0x528) + 0x778))();
      fVar5 = fVar5 - *(float *)(*(longlong *)(param_1[0xc6] + 0x528) + 0x470);
      fVar6 = -35.0;
      if ((-35.0 <= fVar5) && (fVar6 = fVar5, 35.0 <= fVar5)) {
        fVar6 = 35.0;
      }
      pfVar3 = (float *)FMemory::Malloc(0x18);
      if (pfVar3 != (float *)0x0) {
        *pfVar3 = fVar6;
        pfVar3[2] = 0.0;
        pfVar3[3] = 0.0;
        pfVar3[4] = 0.0;
        pfVar3[5] = 0.0;
        if (param_1[0x11e] == 0) {
          param_1[0x11d] = (longlong)pfVar3;
        }
        else {
          *(float **)(param_1[0x11e] + 8) = pfVar3;
          *(longlong *)(pfVar3 + 4) = param_1[0x11e];
        }
        param_1[0x11e] = (longlong)pfVar3;
        (**(code **)(param_1[0x11c] + 8))(param_1 + 0x11c,(int)param_1[0x11f] + 1);
      }
      *(float *)(param_1 + 0x11b) = fVar7 + 0.05;
    }
    local_f0 = 0x43460000;
    local_120 = 0x41f00000;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_128 = &PTR_FUN_1444d5548;
    local_ec = 0x438c0000;
    local_b0 = 0;
    local_a8 = 0;
    local_100 = 0;
    uStack_fc = 0x3f000000;
    uStack_f8 = 0;
    uStack_f4 = 0x3f800000;
    local_e8 = 0x40000000;
    local_11c = fVar8 - 140.0;
    FUN_1428a4ef0(&local_128,*(undefined8 *)(param_1[0x95] + 0x260));
    fVar6 = (fVar8 - 140.0) + 280.0;
    fVar7 = fVar8 - 120.0;
    if (fVar7 < fVar6) {
      local_148 = 34.0;
      local_140 = 26.0;
      do {
        local_158 = &local_138;
        local_138 = 0x3f00000000000000;
        uStack_130 = 0x3f80000000000000;
        fStack_144 = fVar7;
        fStack_13c = fVar7;
        FUN_1428b2d00(param_1[0x95],CONCAT44(fVar7,local_140),CONCAT44(fVar7,local_148),0x3f800000);
        fVar7 = fVar7 + 40.0;
      } while (fVar7 < fVar6);
    }
    pfVar3 = (float *)param_1[0x11d];
    fStack_144 = 0.0;
    local_148 = 30.0;
    fVar7 = 30.0;
    for (; fVar6 = fVar7, pfVar3 != (float *)0x0; pfVar3 = *(float **)(pfVar3 + 2)) {
      fVar5 = fVar8 - *pfVar3 * 4.0;
      if (iVar4 == 0) {
        local_148 = fVar6;
        fStack_144 = fVar5;
      }
      local_158 = &local_138;
      local_138 = 0x3f80000000000000;
      uStack_130 = 0x3f80000000000000;
      local_140 = fVar6;
      fStack_13c = fVar5;
      FUN_1428b2d00(param_1[0x95],CONCAT44(fStack_144,local_148),CONCAT44(fVar5,fVar6),0x3f800000);
      iVar4 = iVar4 + 1;
      fVar7 = fVar6 + 2.0;
      fStack_144 = fVar5;
      local_148 = fVar6;
    }
    *param_3 = *param_3 + 280.0;
    if (local_b0 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c718c0 FUN_140c718c0 body=237 status=ok
// SIG undefined FUN_140c718c0(void)

void FUN_140c718c0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1424eb2d0();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    if ((((param_1[0xc6] != 0) && (*(longlong *)(param_1[0xc6] + 0x990) != 0)) &&
        (*(longlong *)(lVar2 + 400) != 0)) &&
       (((char)param_1[0x115] != '\0' && (param_1[0x95] != 0)))) {
      FUN_140c70ef0(param_1);
    }
    lVar2 = param_1[0x8b];
    if (lVar2 != 0) {
      lVar3 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (*(longlong *)(lVar2 + 0xd50) != 0)) && (param_1[0x95] != 0)) {
        UCanvas::PopSafeZoneTransform();
        FUN_1412bd640(*(undefined8 *)(lVar2 + 0xd50),param_1,param_1[0x95]);
        FUN_14289fce0(param_1[0x95]);
      }
    }
  }
  return;
}



// FUNCTION 140c719b0 Empty body=104 status=ok
// SIG undefined Empty(void)

void TArray<`anonymous_namespace'::FGuidCustomVersion_DEPRECATED,FDefaultAllocator>::Empty
               (longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140c71a20 FUN_140c71a20 body=86 status=ok
// SIG undefined FUN_140c71a20(void)

void FUN_140c71a20(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(param_1[1] + 8);
    FMemory::Free();
    param_1[1] = lVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x000140c71a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 140c71a80 FUN_140c71a80 body=447 status=ok
// SIG undefined FUN_140c71a80(void)

void FUN_140c71a80(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_140c71b51;
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
LAB_140c71b51:
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
      lVar5 = (longlong)iStack_2c * 0x78 + *param_1;
      *(undefined4 *)(lVar5 + 0x68) = 0;
      if (*(longlong *)(lVar5 + 0x60) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x20);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140c71c40 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FD3D12Resource_*,CResourceState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_140c71d11;
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
LAB_140c71d11:
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
      if (*(longlong *)((longlong)iStack_1c * 0x38 + *param_1 + 0x20) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140c71de0 FUN_140c71de0 body=608 status=ok
// SIG undefined FUN_140c71de0(void)

void FUN_140c71de0(void)

{
  bool bVar1;
  int iVar2;
  short **ppsVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  short *psVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 local_res18 [8];
  short *local_38;
  short *local_30;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_38 = (short *)0x0;
  iVar8 = 0;
  puVar9 = (undefined2 *)0x0;
  local_30 = (short *)0x0;
  ppsVar3 = (short **)FUN_140cb9c80(&local_28);
  if (&local_38 != ppsVar3) {
    if (local_38 != (short *)0x0) {
      FMemory::Free();
    }
    local_38 = *ppsVar3;
    *ppsVar3 = (short *)0x0;
    local_30 = ppsVar3[1];
    ppsVar3[1] = (short *)0x0;
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((int)local_30 < 2) goto LAB_140c7201a;
  psVar11 = local_38 + (int)local_30;
  do {
    puVar10 = (undefined2 *)0x0;
    puVar13 = &DAT_143f3eda8;
    if (psVar11 == local_38) goto LAB_140c71f7c;
    psVar11 = psVar11 + -1;
  } while (*psVar11 != 0x2e);
  iVar12 = (int)((longlong)psVar11 - (longlong)local_38 >> 1);
  puVar10 = puVar9;
  if (iVar12 != -1) {
    iVar12 = iVar12 + 1;
    if (iVar12 < 0) {
LAB_140c71ec0:
      bVar1 = false;
    }
    else {
      iVar2 = (int)local_30 + -1;
      if ((int)local_30 == 0) {
        iVar2 = 0;
      }
      if (iVar2 <= iVar12) goto LAB_140c71ec0;
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = (int)local_30 + -1;
      if ((int)local_30 == 0) {
        iVar2 = iVar8;
      }
      iVar2 = iVar2 - iVar12;
      if ((int)local_30 == 0) {
        psVar11 = &DAT_143f3eda8;
        iVar12 = iVar8;
      }
      else {
        psVar11 = local_38;
        iVar12 = (int)local_30 + -1;
      }
      if ((-1 < iVar2) && (iVar8 = iVar12, iVar2 < iVar12)) {
        iVar8 = iVar2;
      }
      iVar2 = 0;
      local_28 = (undefined2 *)0x0;
      local_1c = 0;
      psVar11 = psVar11 + ((longlong)iVar12 - (longlong)iVar8);
      puVar10 = (undefined2 *)0x0;
      if ((psVar11 != (short *)0x0) && (puVar10 = puVar9, *psVar11 != 0)) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (psVar11[lVar7] != 0);
        iVar8 = (int)lVar7 + 1;
        local_20 = iVar8;
        if (0 < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        iVar2 = local_20;
        puVar10 = local_28;
        FGenericPlatformString::Memcpy(local_28,psVar11,(longlong)iVar8 * 2);
      }
      if (iVar2 != 0) {
        puVar13 = puVar10;
      }
    }
  }
LAB_140c71f7c:
  uVar4 = FUN_14147d9d0();
  puVar5 = (undefined8 *)FName::FName(local_res18,puVar13,1);
  plVar6 = (longlong *)StaticFindObjectFastExplicit(uVar4,*puVar5,&local_38,0,0);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_14147d9d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar6 + 0x6e8))(plVar6);
      FUN_1407c49d0(plVar6);
      FUN_1407d8030(plVar6);
    }
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
LAB_140c7201a:
  if (local_38 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c72040 FUN_140c72040 body=326 status=ok
// SIG undefined FUN_140c72040(void)

ulonglong FUN_140c72040(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_2 == (longlong *)0x0) {
LAB_140c72179:
    return in_RAX & 0xffffffffffffff00;
  }
  lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  in_RAX = 0;
  if (lVar3 == 0) goto LAB_140c72179;
  uVar6 = 0;
  lVar5 = *(longlong *)(lVar3 + 400);
  if (lVar5 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_140bca8a0(lVar5);
      if (cVar2 != '\0') {
        lVar3 = FUN_1424503b0(lVar5);
        if (lVar3 != 0) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar6 = *(uint *)(lVar3 + 0x1c70);
            goto LAB_140c72158;
          }
        }
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          uVar6 = (uint)*(byte *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x44c);
        }
        goto LAB_140c72158;
      }
    }
  }
  lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
  if (lVar3 != 0) {
    uVar6 = (uint)*(byte *)(lVar3 + 0x702);
  }
LAB_140c72158:
  return (ulonglong)(*(byte *)(param_1 + 0x88) == uVar6);
}



// FUNCTION 140c72190 FUN_140c72190 body=92 status=ok
// SIG undefined FUN_140c72190(void)

undefined1
FUN_140c72190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread(param_2,param_3,param_4);
  if (cVar1 == '\0') {
    uVar2 = FUN_14244b070(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140c721f0 FUN_140c721f0 body=367 status=ok
// SIG undefined FUN_140c721f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c721f0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [40];
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  if (param_4 == 1) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
    cVar2 = FWeakObjectPtr::IsValid();
    if (cVar2 != '\0') {
      uVar3 = FUN_14171bfe0();
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 0;
      lVar4 = FUN_141799680(uVar3,param_3,DAT_14686d558,0);
      if (lVar4 != 0) {
        lVar5 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_98 = 0;
          local_28 = _DAT_14686c560 & _DAT_14686c570;
          uStack_24 = uRam000000014686c564 & uRam000000014686c574;
          uStack_20 = uRam000000014686c568 & uRam000000014686c578;
          uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
          local_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = uRam000000014686c56c;
          local_94 = 0x42b40000;
          local_38 = 0x46825800;
          uStack_34 = 0xc4c02000;
          uStack_30 = 0xc4aee000;
          uStack_2c = 0;
          local_90 = 0;
          puVar6 = (undefined4 *)FRotator::Quaternion(&local_98,local_88);
          local_48 = *puVar6;
          uStack_44 = puVar6[1];
          uStack_40 = puVar6[2];
          uStack_3c = puVar6[3];
          FActorSpawnParameters::FActorSpawnParameters(local_78);
          local_50 = 1;
          uVar3 = FWeakObjectPtr::Get(param_1 + 8);
          FUN_1425518b0(uVar3,lVar4,&local_48,local_78);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c72360 FUN_140c72360 body=367 status=ok
// SIG undefined FUN_140c72360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c72360(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [40];
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  if (param_4 == 1) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
    cVar2 = FWeakObjectPtr::IsValid();
    if (cVar2 != '\0') {
      uVar3 = FUN_14171bfe0();
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 0;
      lVar4 = FUN_141799680(uVar3,param_3,DAT_14686d560,0);
      if (lVar4 != 0) {
        lVar5 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_98 = 0;
          local_28 = _DAT_14686c560 & _DAT_14686c570;
          uStack_24 = uRam000000014686c564 & uRam000000014686c574;
          uStack_20 = uRam000000014686c568 & uRam000000014686c578;
          uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
          local_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = uRam000000014686c56c;
          local_94 = 0xc3070000;
          local_38 = 0x46412000;
          uStack_34 = 0x4485c000;
          uStack_30 = 0xc2c80000;
          uStack_2c = 0;
          local_90 = 0;
          puVar6 = (undefined4 *)FRotator::Quaternion(&local_98,local_88);
          local_48 = *puVar6;
          uStack_44 = puVar6[1];
          uStack_40 = puVar6[2];
          uStack_3c = puVar6[3];
          FActorSpawnParameters::FActorSpawnParameters(local_78);
          local_50 = 1;
          uVar3 = FWeakObjectPtr::Get(param_1 + 8);
          FUN_1425518b0(uVar3,lVar4,&local_48,local_78);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c724f0 FUN_140c724f0 body=206 status=ok
// SIG undefined FUN_140c724f0(void)

undefined1 * FUN_140c724f0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_res8 [16];
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  puVar5 = (undefined1 *)
           (**(code **)(param_1 + 0x18))
                     ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar7,local_res8);
  *param_2 = *puVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140c725c0 Execute body=78 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AOCMissionDirector,TTypeWrapper<void>___cdecl(enum_EGameSeason,int,int)>
     ::Execute(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140c7260b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140c72610 FUN_140c72610 body=28 status=ok
// SIG undefined FUN_140c72610(void)

void FUN_140c72610(longlong param_1)

{
  FUN_141ec35a0();
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(param_1 + 0x10);
  return;
}



// FUNCTION 140c72630 FUN_140c72630 body=369 status=ok
// SIG undefined FUN_140c72630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140c72630(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [40];
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_4 == 1) {
    cVar1 = FWeakObjectPtr::IsValid();
    if (cVar1 != '\0') {
      uVar3 = FUN_14171bfe0();
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 0;
      lVar4 = FUN_141799680(uVar3,param_3,DAT_14686d558,0);
      if (lVar4 != 0) {
        lVar5 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_98 = 0;
          local_28 = _DAT_14686c560 & _DAT_14686c570;
          uStack_24 = uRam000000014686c564 & uRam000000014686c574;
          uStack_20 = uRam000000014686c568 & uRam000000014686c578;
          uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
          local_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = uRam000000014686c56c;
          local_94 = 0x42b40000;
          local_38 = 0x46825800;
          uStack_34 = 0xc4c02000;
          uStack_30 = 0xc4aee000;
          uStack_2c = 0;
          local_90 = 0;
          puVar6 = (undefined4 *)FRotator::Quaternion(&local_98,local_88);
          local_48 = *puVar6;
          uStack_44 = puVar6[1];
          uStack_40 = puVar6[2];
          uStack_3c = puVar6[3];
          FActorSpawnParameters::FActorSpawnParameters(local_78);
          local_50 = 1;
          uVar3 = FWeakObjectPtr::Get(param_1 + 8);
          FUN_1425518b0(uVar3,lVar4,&local_48,local_78);
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140c727b0 FUN_140c727b0 body=369 status=ok
// SIG undefined FUN_140c727b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140c727b0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [40];
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_4 == 1) {
    cVar1 = FWeakObjectPtr::IsValid();
    if (cVar1 != '\0') {
      uVar3 = FUN_14171bfe0();
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 0;
      lVar4 = FUN_141799680(uVar3,param_3,DAT_14686d560,0);
      if (lVar4 != 0) {
        lVar5 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_98 = 0;
          local_28 = _DAT_14686c560 & _DAT_14686c570;
          uStack_24 = uRam000000014686c564 & uRam000000014686c574;
          uStack_20 = uRam000000014686c568 & uRam000000014686c578;
          uStack_1c = uRam000000014686c56c & uRam000000014686c57c;
          local_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = uRam000000014686c56c;
          local_94 = 0xc3070000;
          local_38 = 0x46412000;
          uStack_34 = 0x4485c000;
          uStack_30 = 0xc2c80000;
          uStack_2c = 0;
          local_90 = 0;
          puVar6 = (undefined4 *)FRotator::Quaternion(&local_98,local_88);
          local_48 = *puVar6;
          uStack_44 = puVar6[1];
          uStack_40 = puVar6[2];
          uStack_3c = puVar6[3];
          FActorSpawnParameters::FActorSpawnParameters(local_78);
          local_50 = 1;
          uVar3 = FWeakObjectPtr::Get(param_1 + 8);
          FUN_1425518b0(uVar3,lVar4,&local_48,local_78);
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140c72930 FUN_140c72930 body=20 status=ok
// SIG undefined FUN_140c72930(void)

undefined1 FUN_140c72930(longlong param_1)

{
  FUN_140c66c80(param_1 + 8);
  return 1;
}



// FUNCTION 140c72950 FUN_140c72950 body=20 status=ok
// SIG undefined FUN_140c72950(void)

undefined1 FUN_140c72950(longlong param_1)

{
  FUN_140c65e10(param_1 + 8);
  return 1;
}



// FUNCTION 140c72970 ExecuteIfSafe body=109 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,AOCMissionDirector,void___cdecl(enum_EGameSeason,int,int)>::
ExecuteIfSafe(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140c729e0 FUN_140c729e0 body=239 status=ok
// SIG undefined FUN_140c729e0(void)

void FUN_140c729e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140c708f0(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1444d95c8;
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
    plVar4 = (longlong *)FMemory::Malloc(0x18,0);
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



// FUNCTION 140c72ad0 FUN_140c72ad0 body=259 status=ok
// SIG undefined FUN_140c72ad0(void)

void FUN_140c72ad0(undefined8 *param_1)

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
  FTickableObjectRenderThread::Register(param_1[2],0);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1444d95d8;
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
    plVar4 = (longlong *)FMemory::Malloc(0x18,0);
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



// FUNCTION 140c72be0 FUN_140c72be0 body=257 status=ok
// SIG undefined FUN_140c72be0(void)

void FUN_140c72be0(undefined8 *param_1)

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
  FTickableObjectRenderThread::Unregister(param_1[2]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1444d95e8;
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
    plVar4 = (longlong *)FMemory::Malloc(0x18,0);
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



// FUNCTION 140c72cf0 FUN_140c72cf0 body=48 status=ok
// SIG undefined FUN_140c72cf0(void)

void FUN_140c72cf0(longlong param_1,float param_2)

{
  if (0.0 < param_2) {
    *(float *)(param_1 + 0xc0) = -1.0 / param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}



// FUNCTION 140c72d20 FUN_140c72d20 body=48 status=ok
// SIG undefined FUN_140c72d20(void)

void FUN_140c72d20(longlong param_1,float param_2)

{
  if (0.0 < param_2) {
    *(float *)(param_1 + 0xc0) = 1.0 / param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}


