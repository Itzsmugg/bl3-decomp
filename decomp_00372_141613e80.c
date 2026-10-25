// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141613e80 Remove body=339 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar6 = *(int *)((longlong)plVar7 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar8) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar3 = *param_1;
  while( true ) {
    lVar4 = (longlong)iVar6 * 0x20;
    if (*(longlong *)(lVar4 + lVar3) == param_2) break;
    iVar6 = *(int *)(lVar4 + 0x18 + lVar3);
    if (iVar6 == -1) {
      return 0;
    }
  }
  lVar4 = (longlong)iVar6 * 0x20;
  uVar8 = (longlong)*(int *)(lVar4 + 0x1c + lVar3) & uVar8;
  piVar5 = (int *)((longlong)plVar7 + uVar8 * 4);
  iVar2 = *(int *)((longlong)plVar7 + uVar8 * 4);
  do {
    if (iVar2 == -1) {
LAB_141613f50:
      plVar7 = *(longlong **)(lVar4 + 0x10 + *param_1);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar5 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      return 1;
    }
    if (iVar2 == iVar6) {
      *piVar5 = *(int *)(lVar4 + lVar3 + 0x18);
      goto LAB_141613f50;
    }
    piVar5 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
    iVar2 = *piVar5;
  } while( true );
}



// FUNCTION 141613fe0 Remove body=409 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::
Remove(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  uVar7 = FUN_140438070(puVar13);
  lVar12 = (longlong)(int)((int)param_1[9] - 1U & uVar7);
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar9 + lVar12 * 4);
  iVar8 = *(int *)((longlong)plVar9 + lVar12 * 4);
  while( true ) {
    if (iVar8 == -1) {
      return 0;
    }
    puVar2 = (undefined8 *)(*param_1 + (longlong)iVar8 * 0x28);
    if (*(int *)(param_2 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar2 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar2;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar13);
    if (iVar8 == 0) break;
    iVar8 = *(int *)(puVar2 + 4);
    piVar1 = (int *)(puVar2 + 4);
  }
  iVar8 = *piVar1;
  lVar12 = (longlong)iVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar3 = lVar6 + lVar12 * 0x28;
    lVar11 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar3 + 0x24));
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar4 = (undefined4 *)((longlong)plVar9 + lVar11 * 4);
    iVar5 = *(int *)((longlong)plVar9 + lVar11 * 4);
    while (iVar5 != -1) {
      if (iVar5 == iVar8) {
        *puVar4 = *(undefined4 *)(lVar3 + 0x20);
        break;
      }
      lVar11 = (longlong)iVar5 * 5 + 4;
      puVar4 = (undefined4 *)(lVar6 + lVar11 * 8);
      iVar5 = *(int *)(lVar6 + lVar11 * 8);
    }
  }
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0x10 + lVar12 * 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar3 + lVar12 * 0x28) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar8,1);
  return 1;
}



// FUNCTION 141614180 Reseat body=68 status=ok
// SIG undefined Reseat(void)

void Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::Reseat
               (longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>(param_2,&local_28);
  return;
}



// FUNCTION 141614230 Reset body=266 status=ok
// SIG undefined Reset(void)

void TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::Reset
               (longlong *param_1,int param_2)

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
      plVar6 = (longlong *)(*param_1 + 0x10);
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
      plVar6 = (longlong *)(*param_1 + 0x10);
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



// FUNCTION 141614340 FUN_141614340 body=142 status=ok
// SIG undefined FUN_141614340(void)

void FUN_141614340(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  lVar2 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      do {
        FExpressionNode::~FExpressionNode(lVar2);
        lVar2 = lVar2 + 0x58;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      FExpressionNode::~FExpressionNode(lVar2);
      lVar2 = lVar2 + 0x58;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1416143d0 Reset body=88 status=ok
// SIG undefined Reset(void)

void TOptional<TArray<FExpressionToken,FDefaultAllocator>_>::Reset(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if ((char)param_1[2] != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    lVar1 = *param_1;
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      do {
        FExpressionNode::~FExpressionNode(lVar1);
        lVar1 = lVar1 + 0x58;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      lVar1 = *param_1;
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  return;
}



// FUNCTION 141614430 ResizeGrow body=231 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)((longlong)param_1 + 0x4c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 << 4,0);
    uVar2 = uVar3 >> 4 & 0xffffffff;
    if ((int)(uVar3 >> 4) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  uVar1 = (uint)uVar2;
  *(uint *)((longlong)param_1 + 0x4c) = uVar1;
  pvVar4 = *(void **)((longlong)param_1 + 0x40);
  if (uVar1 < 5) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar1 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar1 << 4,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar1 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar5;
  return;
}



// FUNCTION 141614520 ResolveNativeCulture body=232 status=ok
// SIG undefined ResolveNativeCulture(void)

undefined8 * FPolyglotTextData::ResolveNativeCulture(char *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  if (1 < *(int *)(param_1 + 0x10)) {
    FString::FString(param_2,param_1 + 8);
    return param_2;
  }
  if (*param_1 == '\0') {
    FUN_14160b640(&local_18,0);
LAB_14161457e:
    if (1 < local_10) goto LAB_1416145e8;
  }
  else {
    if (*param_1 == '\x01') {
      FUN_14160b510(&local_18,0);
      goto LAB_14161457e;
    }
    local_18 = (undefined4 *)0x0;
    local_c = 0;
    local_10 = 0;
  }
  if (local_18 != &DAT_144cb35b8) {
    local_10 = 0;
    iVar1 = 0;
    if (local_c != 3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,3);
      iVar1 = local_10;
    }
    local_10 = iVar1 + 3;
    if (local_c < local_10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar1);
    }
    *local_18 = 0x6e0065;
    *(undefined2 *)(local_18 + 1) = 0;
  }
LAB_1416145e8:
  *param_2 = local_18;
  *(int *)((longlong)param_2 + 0xc) = local_c;
  *(int *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 141614610 FUN_141614610 body=2171 status=ok
// SIG undefined FUN_141614610(void)

void FUN_141614610(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *pvVar5;
  BOOL BVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar13;
  longlong *plVar14;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  longlong *plVar19;
  longlong *plVar20;
  bool bVar21;
  uint local_res18 [2];
  undefined8 *local_res20;
  void *local_198;
  ulonglong local_190;
  longlong local_188 [2];
  int local_178;
  uint uStack_174;
  uint *puStack_170;
  undefined4 local_168;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined1 local_128 [8];
  LPCRITICAL_SECTION local_120;
  LPCRITICAL_SECTION local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 local_c4 [4];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  int iStack_a8;
  uint uStack_a4;
  uint *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong **local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *plVar18;
  
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(param_1 + 0x1a);
  local_118 = lpCriticalSection_00;
  BVar6 = TryEnterCriticalSection(lpCriticalSection_00);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection_00);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x29);
  local_120 = lpCriticalSection;
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_res20 = param_1 + 4;
  FUN_14158ce90(param_2);
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_141614e53;
    plVar18 = (longlong *)param_2[1];
    plVar20 = (longlong *)0x0;
    local_res18[0] = 0;
    if ((uint *)plVar18[1] < (uint *)*plVar18 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar18;
      *plVar18 = *plVar18 + 4;
    }
    FStringTable::ClearSourceStrings(param_1,local_res18[0]);
    puVar3 = local_res20;
    if (0 < (int)local_res18[0]) {
      local_78 = local_188;
      local_68 = &local_c0;
      local_70 = &local_100;
      local_60 = local_188;
      plVar18 = plVar20;
      do {
        local_188[0] = 0;
        local_188[1] = 0;
        FUN_14158ce90(param_2,local_188);
        local_198 = (void *)0x0;
        local_190 = 0;
        FUN_14158ce90(param_2,&local_198);
        plVar7 = DAT_1468b5998;
        if ((DAT_1468b5998 == (longlong *)0x0) &&
           (lVar12 = operator_new(0x110), plVar7 = plVar20, lVar12 != 0)) {
          plVar7 = (longlong *)FUN_1415f3b10(lVar12);
        }
        DAT_1468b5998 = plVar7;
        puVar8 = (undefined8 *)FUN_141608340(DAT_1468b5998,local_58,puVar3,local_188,&local_198);
        pvVar5 = local_198;
        local_110 = *puVar8;
        local_108 = (longlong *)puVar8[1];
        if (local_108 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_108 + 1) = (int)local_108[1] + 1;
          UNLOCK();
        }
        lVar12 = (longlong)(int)local_190;
        local_138 = (void *)0x0;
        local_130 = (int)local_190;
        if ((int)local_190 == 0) {
          local_12c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,local_190 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_138,pvVar5,lVar12 * 2);
        }
        plVar7 = (longlong *)param_1[1];
        plVar14 = plVar7;
        plVar19 = plVar20;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          iVar10 = (int)plVar7[1];
          bVar21 = iVar10 == 0;
          if (bVar21) {
            *(int *)(plVar7 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
          while (plVar14 = plVar20, !bVar21) {
            LOCK();
            bVar21 = iVar10 == (int)plVar7[1];
            if (bVar21) {
              *(int *)(plVar7 + 1) = iVar10 + 1;
            }
            UNLOCK();
            if (bVar21) {
              plVar14 = plVar7;
              plVar19 = (longlong *)0x0;
              if (plVar7 != (longlong *)0x0) {
                plVar19 = (longlong *)*param_1;
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                LOCK();
                plVar14 = plVar7 + 1;
                lVar12 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                plVar14 = plVar7;
                if ((int)lVar12 == 1) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar7 + 0xc);
                  iVar10 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plVar7 + 8))(plVar7,1);
                  }
                }
              }
              break;
            }
            LOCK();
            iVar10 = (int)plVar7[1];
            bVar21 = iVar10 == 0;
            if (bVar21) {
              *(int *)(plVar7 + 1) = 0;
              iVar10 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        local_88 = plVar19;
        local_80 = plVar14;
        local_f8 = (longlong *)
                   SharedPointerInternals::
                   NewIntrusiveReferenceController<FStringTableEntry,TSharedRef<FStringTable_const_,1>,FString,TSharedPtr<FString,1>_>
                             (&local_88,&local_138,&local_110);
        local_100 = local_f8 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_100,local_100,local_100);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar14 + 1;
          lVar12 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        if (local_138 != (void *)0x0) {
          FMemory::Free();
        }
        plVar7 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_108 + 1;
          lVar12 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_108 + 8))(local_108,1);
            }
          }
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar14 + 1;
          lVar12 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar7 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_50 + 1;
          lVar12 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        TSet<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FStringTableEntry,1>_>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&,TSharedRef<FStringTableEntry,1>_&>_>
                  (param_1 + 6,local_c4,&local_78,0);
        local_c0 = local_100[4];
        local_b8 = (longlong *)local_100[5];
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
          UNLOCK();
        }
        TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TSharedPtr<FString,1>_&&,FString_&>_>
                  (param_1 + 0x10,local_128,&local_68,0);
        plVar7 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_b8 + 1;
          lVar12 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar7 = local_f8;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_f8 + 1;
          lVar12 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        if (local_198 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_188[0] != 0) {
          FMemory::Free();
        }
        uVar17 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar17;
        lpCriticalSection = local_120;
        lpCriticalSection_00 = local_118;
      } while ((int)uVar17 < (int)local_res18[0]);
    }
    FUN_1415f7ae0(param_2,param_1 + 0x1f);
  }
  else {
    plVar18 = (longlong *)param_2[1];
    local_res20 = (undefined8 *)
                  CONCAT44(local_res20._4_4_,
                           *(int *)(param_1 + 7) - *(int *)((longlong)param_1 + 100));
    if ((undefined4 *)plVar18[1] < (undefined4 *)*plVar18 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_res20,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_res20,4);
      }
    }
    else {
      local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,*(undefined4 *)*plVar18);
      *plVar18 = *plVar18 + 4;
    }
    uStack_174 = 1;
    plVar18 = param_1 + 6;
    uVar17 = *(uint *)(param_1 + 0xb);
    puVar1 = (uint *)(param_1 + 8);
    local_178 = 0;
    uStack_164 = 0;
    iStack_160 = 0;
    if (uVar17 != 0) {
      puVar16 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar4 = *puVar16;
      iStack_160 = 0;
      local_178 = 0;
      while (uVar4 == 0) {
        lVar12 = (longlong)local_178;
        iStack_160 = iStack_160 + 0x20;
        iVar10 = local_178 + 1;
        bVar21 = (int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_178;
        local_178 = iVar10;
        if (bVar21) goto LAB_1416147c1;
        uVar4 = puVar16[lVar12 + 1];
      }
      uStack_174 = -uVar4 & uVar4;
      iVar10 = 0x1f;
      if (uStack_174 != 0) {
        for (; uStack_174 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_174 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_164 = (iStack_160 - iVar10) + 0x1f;
      if ((int)uVar17 < (int)uStack_164) {
LAB_1416147c1:
        uStack_164 = uVar17;
      }
    }
    local_168 = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 0xb);
    uStack_e8 = CONCAT44(uStack_174,local_178);
    uStack_d8 = CONCAT44(uStack_164,0xffffffff);
    uStack_d0 = CONCAT44(uStack_15c,iStack_160);
    local_res18[0] = -1 << ((byte)uVar4 & 0x1f);
    uVar15 = uVar4 & 0xffffffe0;
    uStack_e0 = CONCAT44(uVar4,local_res18[0]);
    iStack_a8 = local_178;
    uStack_a4 = uStack_174;
    puStack_170 = puVar1;
    local_f0 = plVar18;
    local_a0 = puVar1;
    uStack_98 = uStack_d8;
    local_90 = uStack_d0;
    local_b0 = plVar18;
    uVar9 = uStack_e0;
    if (uVar4 != uVar17) {
      puVar16 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar11 = puVar16[(int)uVar4 >> 5] & local_res18[0];
      iVar10 = (int)uVar4 >> 5;
      while (uVar11 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_1416148a1;
        uVar11 = puVar16[(longlong)iVar10 + 1];
        uStack_e0 = 0xffffffff;
        iVar10 = iVar10 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar10 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      iVar10 = (uVar15 - iVar10) + 0x1f;
      uStack_e0 = CONCAT44(iVar10,(undefined4)uStack_e0);
      uVar9 = uStack_e0;
      if ((int)uVar17 < iVar10) {
LAB_1416148a1:
        uStack_e0 = CONCAT44(uVar17,(undefined4)uStack_e0);
        uVar9 = uStack_e0;
      }
    }
    while( true ) {
      if (((uStack_98._4_4_ == (int)((ulonglong)uVar9 >> 0x20)) && (local_a0 == puVar1)) &&
         (local_b0 == plVar18)) break;
      local_148 = (void *)0x0;
      local_140 = *(int *)(*local_b0 + 8 + (longlong)uStack_98._4_4_ * 0x28);
      lVar12 = (longlong)local_140;
      puVar3 = (undefined8 *)(*local_b0 + (longlong)uStack_98._4_4_ * 0x28);
      pvVar5 = (void *)*puVar3;
      if (local_140 == 0) {
        local_13c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_140,0);
        _guard_xfg_dispatch_icall_nop(local_148,pvVar5,lVar12 * 2);
      }
      FUN_14158ce90(param_2,&local_148);
      lVar12 = puVar3[2];
      local_158 = (void *)0x0;
      local_150 = *(int *)(lVar12 + 0x18);
      lVar13 = (longlong)local_150;
      pvVar5 = *(void **)(lVar12 + 0x10);
      if (local_150 == 0) {
        local_14c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
        _guard_xfg_dispatch_icall_nop(local_158,pvVar5,lVar13 * 2);
      }
      FUN_14158ce90(param_2,&local_158);
      if (local_158 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_148 != (void *)0x0) {
        FMemory::Free();
      }
      uStack_98 = CONCAT44(uStack_98._4_4_,(uint)uStack_98 & ~uStack_a4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
    }
    FUN_1415f7ae0(param_2,param_1 + 0x1f);
    lpCriticalSection = local_120;
    lpCriticalSection_00 = local_118;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if (param_1[0x27] != 0) {
      uVar9 = FMemory::Realloc(param_1[0x27],0,0);
      param_1[0x27] = uVar9;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
    ::ConditionalRehash(param_1 + 0x1f,*(int *)(param_1 + 0x20) - *(int *)((longlong)param_1 + 300),
                        0);
  }
LAB_141614e53:
  LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Could not recover jumptable at 0x000141614e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection_00);
  return;
}



// FUNCTION 141614e90 FUN_141614e90 body=403 status=ok
// SIG undefined FUN_141614e90(void)

void FUN_141614e90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar4 = (longlong *)param_2[1];
    local_res8[0] = 3;
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
  }
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_141614ffd;
    puVar7 = (undefined8 *)FUN_1404b03b0();
    local_38 = *puVar7;
    local_30 = (longlong *)puVar7[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    local_28 = 0;
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_48,&local_38);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *puVar7;
    *puVar7 = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = puVar7[1];
    puVar7[1] = uVar5;
    plVar4 = local_30;
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_30;
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          plVar4 = local_30;
        }
      }
    }
  }
  else {
    FTextFormat::GetSourceText(param_1 + 0x10,local_20);
    (**(code **)(*param_2 + 0x38))(param_2,local_20);
    plVar4 = local_18;
  }
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
LAB_141614ffd:
  FUN_1415f73f0(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 141615030 FUN_141615030 body=119 status=ok
// SIG undefined FUN_141615030(void)

void FUN_141615030(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [24];
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar1 = (longlong *)param_2[1];
    local_res10[0] = 6;
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
    }
    else {
      local_res10[0] = *(undefined1 *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  if (0x184 < (int)param_2[8]) {
    FUN_14158ce90(param_2,param_1 + 0x70);
  }
  FUN_1416158f0(param_1,param_2);
  return;
}



// FUNCTION 1416150b0 FUN_1416150b0 body=580 status=ok
// SIG undefined FUN_1416150b0(void)

void FUN_1416150b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void **ppvVar8;
  void *pvVar9;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  void *local_78;
  int local_70;
  undefined4 uStack_6c;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined8 local_30;
  
  pvVar9 = (void *)0x0;
  local_res8[0] = 0;
  bVar5 = true;
  bVar4 = false;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar3 = (longlong *)param_2[1];
    local_res10[0] = 7;
    if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
    }
    else {
      local_res10[0] = *(undefined1 *)*plVar3;
      *plVar3 = *plVar3 + 1;
    }
  }
  FUN_1404c11e0(param_2,param_1 + 0x10);
  plVar3 = (longlong *)param_2[1];
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x18));
  if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*plVar3);
    *plVar3 = *plVar3 + 1;
  }
  *(int *)(param_1 + 0x18) = (int)(char)local_res8[0];
  if (0x1a5 < (int)param_2[8]) {
    FUN_14158ce90(param_2,param_1 + 0x20);
  }
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    local_68 = (void *)0x0;
    local_60 = 0;
    FUN_14158ce90(param_2,&local_68);
    pvVar9 = local_68;
    if (1 < (int)local_60) {
      lVar7 = FInternationalization::Get();
      FICUInternationalization::GetCulture(*(undefined8 *)(lVar7 + 0x20),&local_58,&local_68);
      if ((undefined8 *)(param_1 + 0x30) != &local_58) {
        *(undefined8 *)(param_1 + 0x30) = local_58;
        local_58 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_50);
      }
      pvVar9 = local_68;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          pvVar9 = local_68;
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
            pvVar9 = local_68;
          }
        }
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_30 = 0;
      ppvVar8 = &local_38;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      puVar6 = (undefined8 *)FCulture::GetName();
      local_78 = (void *)0x0;
      iVar2 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      local_70 = iVar2;
      if (iVar2 == 0) {
        uStack_6c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar2,0);
        pvVar9 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar2 * 2);
      }
      ppvVar8 = &local_78;
    }
    *ppvVar8 = (void *)0x0;
    local_40 = *(undefined4 *)(ppvVar8 + 1);
    local_3c = *(undefined4 *)((longlong)ppvVar8 + 0xc);
    ppvVar8[1] = (void *)0x0;
    local_48 = pvVar9;
    if ((bVar4) && (local_38 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_78 != (void *)0x0)) {
      FMemory::Free();
    }
    FUN_14158ce90(param_2,&local_48);
    pvVar9 = local_48;
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141615300 FUN_141615300 body=637 status=ok
// SIG undefined FUN_141615300(void)

void FUN_141615300(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void **ppvVar8;
  void *pvVar9;
  undefined4 local_res8 [2];
  char local_res10 [8];
  undefined1 local_res18 [16];
  void *local_88;
  int local_80;
  undefined4 uStack_7c;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined8 local_40;
  
  pvVar9 = (void *)0x0;
  local_res8[0] = 0;
  bVar5 = true;
  bVar4 = false;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar3 = (longlong *)param_2[1];
    local_res18[0] = 9;
    if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,1);
    }
    else {
      local_res18[0] = *(undefined1 *)*plVar3;
      *plVar3 = *plVar3 + 1;
    }
  }
  FUN_1404c11e0(param_2,param_1 + 0x10);
  plVar3 = (longlong *)param_2[1];
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x18));
  if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*plVar3);
    *plVar3 = *plVar3 + 1;
  }
  *(int *)(param_1 + 0x18) = (int)(char)local_res8[0];
  plVar3 = (longlong *)param_2[1];
  local_res10[0] = *(char *)(param_1 + 0x1c);
  if ((char *)plVar3[1] < (char *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
  }
  else {
    local_res10[0] = *(char *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  *(int *)(param_1 + 0x1c) = (int)local_res10[0];
  FUN_14158ce90(param_2,param_1 + 0x20);
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    local_78 = (void *)0x0;
    local_70 = 0;
    FUN_14158ce90(param_2,&local_78);
    pvVar9 = local_78;
    if (1 < (int)local_70) {
      lVar7 = FInternationalization::Get();
      FICUInternationalization::GetCulture(*(undefined8 *)(lVar7 + 0x20),&local_68,&local_78);
      if ((undefined8 *)(param_1 + 0x30) != &local_68) {
        *(undefined8 *)(param_1 + 0x30) = local_68;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_60);
      }
      pvVar9 = local_78;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          pvVar9 = local_78;
          if (iVar2 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
            pvVar9 = local_78;
          }
        }
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_40 = 0;
      ppvVar8 = &local_48;
      bVar5 = false;
      bVar4 = true;
      pvVar9 = (void *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FCulture::GetName();
      local_88 = (void *)0x0;
      iVar2 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      local_80 = iVar2;
      if (iVar2 == 0) {
        ppvVar8 = &local_88;
        uStack_7c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar2,0);
        pvVar9 = local_88;
        _guard_xfg_dispatch_icall_nop(local_88,_Src,(longlong)iVar2 * 2);
        ppvVar8 = &local_88;
      }
    }
    *ppvVar8 = (void *)0x0;
    local_50 = *(undefined4 *)(ppvVar8 + 1);
    local_4c = *(undefined4 *)((longlong)ppvVar8 + 0xc);
    ppvVar8[1] = (void *)0x0;
    local_58 = pvVar9;
    if ((bVar4) && (local_48 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_88 != (void *)0x0)) {
      FMemory::Free();
    }
    FUN_14158ce90(param_2,&local_58);
    pvVar9 = local_58;
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141615580 FUN_141615580 body=98 status=ok
// SIG undefined FUN_141615580(void)

void FUN_141615580(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [24];
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar1 = (longlong *)param_2[1];
    local_res10[0] = 4;
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
    }
    else {
      local_res10[0] = *(undefined1 *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  FUN_1416158f0(param_1,param_2);
  return;
}



// FUNCTION 1416155f0 FUN_1416155f0 body=98 status=ok
// SIG undefined FUN_1416155f0(void)

void FUN_1416155f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [24];
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar1 = (longlong *)param_2[1];
    local_res10[0] = 5;
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
    }
    else {
      local_res10[0] = *(undefined1 *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  FUN_1416158f0(param_1,param_2);
  return;
}



// FUNCTION 141615660 FUN_141615660 body=571 status=ok
// SIG undefined FUN_141615660(void)

void FUN_141615660(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void **ppvVar8;
  void *pvVar9;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  void *local_78;
  int local_70;
  undefined4 uStack_6c;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined8 local_30;
  
  pvVar9 = (void *)0x0;
  local_res8[0] = 0;
  bVar5 = true;
  bVar4 = false;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar3 = (longlong *)param_2[1];
    local_res10[0] = 8;
    if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
    }
    else {
      local_res10[0] = *(undefined1 *)*plVar3;
      *plVar3 = *plVar3 + 1;
    }
  }
  FUN_1404c11e0(param_2,param_1 + 0x10);
  plVar3 = (longlong *)param_2[1];
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x18));
  if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*plVar3);
    *plVar3 = *plVar3 + 1;
  }
  *(int *)(param_1 + 0x18) = (int)(char)local_res8[0];
  FUN_14158ce90(param_2,param_1 + 0x20);
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    local_68 = (void *)0x0;
    local_60 = 0;
    FUN_14158ce90(param_2,&local_68);
    pvVar9 = local_68;
    if (1 < (int)local_60) {
      lVar7 = FInternationalization::Get();
      FICUInternationalization::GetCulture(*(undefined8 *)(lVar7 + 0x20),&local_58,&local_68);
      if ((undefined8 *)(param_1 + 0x30) != &local_58) {
        *(undefined8 *)(param_1 + 0x30) = local_58;
        local_58 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_50);
      }
      pvVar9 = local_68;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          pvVar9 = local_68;
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
            pvVar9 = local_68;
          }
        }
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_30 = 0;
      ppvVar8 = &local_38;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      puVar6 = (undefined8 *)FCulture::GetName();
      local_78 = (void *)0x0;
      iVar2 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      local_70 = iVar2;
      if (iVar2 == 0) {
        uStack_6c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar2,0);
        pvVar9 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar2 * 2);
      }
      ppvVar8 = &local_78;
    }
    *ppvVar8 = (void *)0x0;
    local_40 = *(undefined4 *)(ppvVar8 + 1);
    local_3c = *(undefined4 *)((longlong)ppvVar8 + 0xc);
    ppvVar8[1] = (void *)0x0;
    local_48 = pvVar9;
    if ((bVar4) && (local_38 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_78 != (void *)0x0)) {
      FMemory::Free();
    }
    FUN_14158ce90(param_2,&local_48);
    pvVar9 = local_48;
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416158a0 FUN_1416158a0 body=75 status=ok
// SIG undefined FUN_1416158a0(void)

void FUN_1416158a0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [24];
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar1 = (longlong *)param_2[1];
    local_res10[0] = 0;
    if (*plVar1 + 1U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 1;
      return;
    }
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
  }
  return;
}



// FUNCTION 1416158f0 FUN_1416158f0 body=584 status=ok
// SIG undefined FUN_1416158f0(void)

void FUN_1416158f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void **ppvVar8;
  void *pvVar9;
  undefined4 local_res8 [2];
  void *local_88;
  int local_80;
  undefined4 uStack_7c;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pvVar9 = (void *)0x0;
  local_res8[0] = 0;
  FUN_1415f8150(param_2,param_1 + 0x10);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x58));
  (**(code **)(*param_2 + 8))(param_2,local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((char)local_res8[0] == '\0') {
      if (*(char *)(param_1 + 0x58) != '\0') {
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
      goto LAB_14161598c;
    }
    local_38 = 0x100;
    uStack_24 = 3;
    uStack_34 = 0;
    uStack_30 = 1;
    uStack_2c = 0x144;
    uStack_28 = 0;
    if ((ulonglong *)&local_38 != (ulonglong *)(param_1 + 0x40)) {
      *(ulonglong *)(param_1 + 0x40) = (ulonglong)CONCAT22(uStack_36,0x100);
      *(undefined8 *)(param_1 + 0x48) = 0x14400000001;
      *(undefined8 *)(param_1 + 0x50) = 0x300000000;
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
  }
  if ((char)local_res8[0] != '\0') {
    FUN_1415f7210(param_2);
  }
LAB_14161598c:
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    local_78 = (void *)0x0;
    local_70 = 0;
    FUN_14158ce90(param_2,&local_78);
    pvVar9 = local_78;
    if (1 < (int)local_70) {
      lVar7 = FInternationalization::Get();
      FICUInternationalization::GetCulture(*(undefined8 *)(lVar7 + 0x20),&local_68,&local_78);
      if ((undefined8 *)(param_1 + 0x60) != &local_68) {
        *(undefined8 *)(param_1 + 0x60) = local_68;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_60);
      }
      pvVar9 = local_78;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          pvVar9 = local_78;
          if (iVar3 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
            pvVar9 = local_78;
          }
        }
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_40 = 0;
      ppvVar8 = &local_48;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      puVar6 = (undefined8 *)FCulture::GetName();
      local_88 = (void *)0x0;
      iVar3 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      local_80 = iVar3;
      if (iVar3 == 0) {
        uStack_7c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar3,0);
        pvVar9 = local_88;
        _guard_xfg_dispatch_icall_nop(local_88,_Src,(longlong)iVar3 * 2);
      }
      ppvVar8 = &local_88;
      bVar5 = true;
      bVar4 = false;
    }
    *ppvVar8 = (void *)0x0;
    local_50 = *(undefined4 *)(ppvVar8 + 1);
    local_4c = *(undefined4 *)((longlong)ppvVar8 + 0xc);
    local_58 = pvVar9;
    ppvVar8[1] = (void *)0x0;
    if ((bVar4) && (local_48 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_88 != (void *)0x0)) {
      FMemory::Free();
    }
    FUN_14158ce90(param_2,&local_58);
    pvVar9 = local_58;
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141615b40 FUN_141615b40 body=470 status=ok
// SIG undefined FUN_141615b40(void)

void FUN_141615b40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar4 = (longlong *)param_2[1];
    local_res8[0] = 1;
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
  }
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_141615cb2;
    puVar6 = (undefined8 *)FUN_1404b03b0();
    local_38 = *puVar6;
    local_30 = (longlong *)puVar6[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    local_28 = 0;
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
    puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_48,&local_38);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *puVar6;
    *puVar6 = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = puVar6[1];
    puVar6[1] = uVar7;
    plVar4 = local_30;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_30;
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          plVar4 = local_30;
        }
      }
    }
  }
  else {
    FTextFormat::GetSourceText(param_1 + 0x10,local_20);
    (**(code **)(*param_2 + 0x38))(param_2,local_20);
    plVar4 = local_18;
  }
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
LAB_141615cb2:
  FUN_1415f7e30(param_2,param_1 + 0x20);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar7 = FMemory::Realloc(*(longlong *)(param_1 + 0x60),0,0);
    *(undefined8 *)(param_1 + 0x60) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1 + 0x20,*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54),0);
  return;
}



// FUNCTION 141615d20 FUN_141615d20 body=403 status=ok
// SIG undefined FUN_141615d20(void)

void FUN_141615d20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar4 = (longlong *)param_2[1];
    local_res8[0] = 2;
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
  }
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_141615e8d;
    puVar7 = (undefined8 *)FUN_1404b03b0();
    local_38 = *puVar7;
    local_30 = (longlong *)puVar7[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    local_28 = 0;
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_48,&local_38);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *puVar7;
    *puVar7 = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = puVar7[1];
    puVar7[1] = uVar5;
    plVar4 = local_30;
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_30;
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          plVar4 = local_30;
        }
      }
    }
  }
  else {
    FTextFormat::GetSourceText(param_1 + 0x10,local_20);
    (**(code **)(*param_2 + 0x38))(param_2,local_20);
    plVar4 = local_18;
  }
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
LAB_141615e8d:
  FUN_1415f7620(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 141615ec0 FUN_141615ec0 body=846 status=ok
// SIG undefined FUN_141615ec0(void)

void FUN_141615ec0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  DWORD DVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined1 local_res8 [8];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38 [2];
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar4 = (longlong *)param_2[1];
    local_res8[0] = 0xb;
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 2) == 0) goto LAB_1416161c6;
    FUN_14160bd00(param_1,&local_58,0);
    if (local_58 != 0) {
      local_48 = *(undefined8 *)(local_58 + 0x20);
      plVar4 = *(longlong **)(local_58 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_40 = plVar4;
      uVar11 = FUN_141607d00();
      FStringTableRegistry::FindTableIdAndKey(uVar11,&local_48,param_1 + 0x10,param_1 + 0x18);
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
    }
    (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
    FUN_14158ce90(param_2,param_1 + 0x18);
    plVar4 = local_50;
    if (local_50 == (longlong *)0x0) goto LAB_1416161c6;
    LOCK();
    plVar2 = local_50 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) goto LAB_1416161c6;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    *(undefined2 *)(param_1 + 8) = 0;
    (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
    FUN_14158ce90(param_2,param_1 + 0x18);
    if ((DAT_1468b53e0 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*DAT_1468b53e0 + 0x18))(DAT_1468b53e0,*(undefined8 *)(param_1 + 0x10)),
       cVar8 == '\0')) {
      bVar7 = false;
LAB_141615fb9:
      bVar5 = bVar7;
      bVar12 = 0;
    }
    else {
      bVar5 = true;
      cVar8 = FUN_1415ad720(&DAT_1468e2448);
      bVar7 = true;
      if ((((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
          (DVar10 = GetCurrentThreadId(), DVar10 != DAT_1468c21c0)) || (DAT_1468c21ab != '\0'))
      goto LAB_141615fb9;
      bVar12 = 1;
    }
    FStringTableRedirects::RedirectTableIdAndKey(param_1 + 0x10,param_1 + 0x18,bVar12);
    if ((undefined8 *)(param_1 + 0x30) != local_38) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      plVar4 = *(longlong **)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (plVar4 != (longlong *)0x0) {
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
    FUN_14160bd00(param_1,&local_68,bVar12 ^ 1);
    if ((((local_68 == 0) && (bVar5)) &&
        ((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0' &&
         ((DAT_1468c21ae != '\0' && (DVar10 = GetCurrentThreadId(), DVar10 != DAT_1468c21c0)))))) &&
       (DAT_1468c21ab == '\0')) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    plVar4 = local_60;
    *(undefined1 *)(param_1 + 0x28) = uVar9;
    if (local_60 == (longlong *)0x0) goto LAB_1416161c6;
    LOCK();
    plVar2 = local_60 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) goto LAB_1416161c6;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    local_50 = local_60;
  }
  if (iVar3 == 1) {
    (**(code **)(*local_50 + 8))(local_50,1);
  }
LAB_1416161c6:
  if (((*(byte *)((longlong)param_2 + 0x2a) & 8) != 0) && (DAT_1468b53e0 != (longlong *)0x0)) {
    (**(code **)(*DAT_1468b53e0 + 0x10))(DAT_1468b53e0,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  return;
}



// FUNCTION 141616210 FUN_141616210 body=161 status=ok
// SIG undefined FUN_141616210(void)

void FUN_141616210(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar1 = (longlong *)param_2[1];
    local_res8[0] = 10;
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10);
  puVar2 = *(undefined1 **)param_2[1];
  if (puVar2 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *(undefined1 *)(param_1 + 0x28) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416162ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x28),1);
  return;
}



// FUNCTION 1416162c0 SerializeForDisplayString body=322 status=ok
// SIG undefined SerializeForDisplayString(void)

void FTextHistory::SerializeForDisplayString(longlong param_1,longlong param_2,longlong **param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    plVar5 = (longlong *)0x0;
    *(undefined2 *)(param_1 + 8) = 0;
    plVar4 = (longlong *)operator_new(0x20);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_144cb51c0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar5 = plVar4;
    }
    local_18 = plVar5 + 2;
    plStack_10 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
    local_28 = local_18;
    plStack_20 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_10 + 1) = (int)plStack_10[1] + 1;
      UNLOCK();
    }
    if (param_3 != &local_28) {
      *param_3 = local_18;
      local_28 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 1,&plStack_20);
    }
    plVar5 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_20 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
    plVar5 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_10)(plStack_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141616410 FUN_141616410 body=702 status=ok
// SIG undefined FUN_141616410(void)

void FUN_141616410(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68 [6];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong local_28 [2];
  
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
      return;
    }
    plVar6 = (longlong *)param_3[1];
    local_88 = 0;
    local_80 = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (DAT_1468b5998 == 0) {
      lVar4 = operator_new(0x110);
      if (lVar4 == 0) {
        DAT_1468b5998 = 0;
      }
      else {
        DAT_1468b5998 = FUN_1415f3b10(lVar4);
      }
    }
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
    if (*(longlong *)(param_2 + 0x70) != 0) {
      plVar6 = (longlong *)FUN_141618d80(local_28,&local_88);
      if (&local_88 != plVar6) {
        if (local_88 != 0) {
          FMemory::Free();
        }
        local_88 = *plVar6;
        *plVar6 = 0;
        local_80 = plVar6[1];
        plVar6[1] = 0;
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_14158ce90(param_2,&local_88);
    FUN_14158ce90(param_2,local_68 + 4);
    FUN_14158ce90(param_2,param_1 + 0x10);
    lVar4 = local_88;
    if (local_68[4] != 0) {
      FMemory::Free();
      lVar4 = local_88;
    }
  }
  else {
    *(undefined2 *)(param_1 + 8) = 0;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_14158ce90(param_2,local_68 + 2);
    FUN_14158ce90(param_2,local_68);
    FUN_14158ce90(param_2,param_1 + 0x10);
    if (DAT_1468b5998 == 0) {
      lVar4 = operator_new(0x110);
      if (lVar4 == 0) {
        DAT_1468b5998 = 0;
      }
      else {
        DAT_1468b5998 = FUN_1415f3b10(lVar4);
      }
    }
    puVar5 = (undefined8 *)
             FUN_141608340(DAT_1468b5998,local_38,local_68 + 2,local_68,param_1 + 0x10);
    local_70 = (longlong *)puVar5[1];
    local_78 = *puVar5;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    if (param_3 != &local_78) {
      *param_3 = local_78;
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 1,&local_70);
    }
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    lVar4 = local_68[2];
    if (local_68[0] != 0) {
      FMemory::Free();
      lVar4 = local_68[2];
    }
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416166e0 FUN_1416166e0 body=1723 status=ok
// SIG undefined FUN_1416166e0(void)

void FUN_1416166e0(longlong *param_1,undefined8 **param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  void *_Src;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  undefined1 local_res8 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  int local_98 [2];
  undefined8 *local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 *local_50;
  longlong *local_48 [2];
  
  lVar11 = *param_1;
  local_98[0] = 0;
  bVar10 = *(byte *)(*(longlong *)(lVar11 + 8) + 0x28) & 1;
  if (bVar10 == 0) {
    local_98[0] = (**(code **)(**param_2 + 0x38))();
    lVar11 = *param_1;
  }
  FUN_1415d6020(lVar11,local_98);
  if (local_98[0] == 1) {
    if (bVar10 == 0) {
      local_res8[0] = *(undefined1 *)(*param_2 + 1);
      (**(code **)(**(longlong **)(*param_1 + 8) + 8))(*(longlong **)(*param_1 + 8),local_res8);
      return;
    }
    puVar5 = (undefined8 *)operator_new(0x10);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_144cb5280;
      (**(code **)(**(longlong **)(*param_1 + 8) + 8))(*(longlong **)(*param_1 + 8),puVar5 + 1);
    }
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
      plVar8[2] = (longlong)puVar5;
    }
    local_50 = puVar5;
    local_48[0] = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_50,puVar5,puVar5);
    if (param_2 != &local_50) {
      *param_2 = puVar5;
      local_50 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,local_48);
      plVar8 = local_48[0];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          return;
        }
      }
    }
  }
  else if (local_98[0] == 2) {
    if (bVar10 == 0) {
      local_60 = (void *)0x0;
      local_58 = *(int *)(*param_2 + 2);
      lVar11 = (longlong)local_58;
      _Src = (void *)(*param_2)[1];
      if (local_58 == 0) {
        local_54 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_58,0);
        _guard_xfg_dispatch_icall_nop(local_60,_Src,lVar11 * 2);
      }
      FUN_14158ce90(*(undefined8 *)(*param_1 + 8),&local_60);
      if (local_60 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      puVar5 = (undefined8 *)operator_new(0x18);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        *puVar5 = &PTR_FUN_144cb5228;
        puVar5[1] = 0;
        puVar5[2] = 0;
        FUN_14158ce90(*(undefined8 *)(*param_1 + 8));
      }
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
        plVar8[2] = (longlong)puVar5;
      }
      local_70 = puVar5;
      local_68 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_70,puVar5,puVar5);
      if (param_2 != &local_70) {
        *param_2 = puVar5;
        local_70 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_68);
        plVar8 = local_68;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
  }
  else {
    if (local_98[0] == 3) {
      if (bVar10 == 0) {
        puVar5 = *param_2;
        local_res20[0] = *(undefined4 *)(puVar5 + 2);
        plVar8 = *(longlong **)(*param_1 + 8);
        puVar4 = *(undefined4 **)plVar8[1];
        if ((undefined4 *)((undefined8 *)plVar8[1])[1] < puVar4 + 1) {
          (**(code **)(*plVar8 + 0x50))(plVar8,local_res20,4);
          if ((*(byte *)((longlong)plVar8 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar8,local_res20,4);
          }
        }
        else {
          local_res20[0] = *puVar4;
          *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 4;
        }
        lVar11 = puVar5[1];
        lVar9 = (longlong)*(int *)(puVar5 + 2) * 0x10 + lVar11;
        for (; lVar11 != lVar9; lVar11 = lVar11 + 0x10) {
          FUN_1416166e0(param_1,lVar11);
        }
        return;
      }
      puVar5 = (undefined8 *)operator_new(0x18);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        *puVar5 = &PTR__scalar_deleting_destructor__144cb52d8;
        puVar5[1] = 0;
        puVar5[2] = 0;
        plVar8 = *(longlong **)(*param_1 + 8);
        piVar2 = *(int **)plVar8[1];
        if ((int *)((undefined8 *)plVar8[1])[1] < piVar2 + 1) {
          (**(code **)(*plVar8 + 0x50))(plVar8,local_res18,4);
          if ((*(byte *)((longlong)plVar8 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar8,local_res18,4);
          }
        }
        else {
          local_res18[0] = *piVar2;
          *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 4;
        }
        iVar3 = *(int *)(puVar5 + 2);
        if (iVar3 < local_res18[0]) {
          *(int *)(puVar5 + 2) = local_res18[0];
          iVar12 = local_res18[0] - iVar3;
          if (*(int *)((longlong)puVar5 + 0x14) < local_res18[0]) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar5 + 1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar3 * 0x10 + puVar5[1]),0,(longlong)iVar12 << 4);
        }
        else if (local_res18[0] < iVar3) {
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (puVar5 + 1,local_res18[0],iVar3 - local_res18[0],1);
        }
        lVar11 = puVar5[1];
        lVar9 = (longlong)*(int *)(puVar5 + 2) * 0x10 + lVar11;
        for (; lVar11 != lVar9; lVar11 = lVar11 + 0x10) {
          FUN_1416166e0(param_1,lVar11);
        }
      }
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
        plVar8[2] = (longlong)puVar5;
      }
      local_80 = puVar5;
      local_78 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_80,puVar5,puVar5);
      if (param_2 != &local_80) {
        *param_2 = puVar5;
        local_80 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_78);
        plVar8 = local_78;
      }
    }
    else {
      if (local_98[0] != 4) {
        return;
      }
      if (bVar10 == 0) {
        FUN_1415f8370(param_1,(*param_2)[1]);
        return;
      }
      puVar5 = (undefined8 *)operator_new(0x18);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        *puVar5 = &PTR_FUN_144cb5330;
        puVar6 = (undefined8 *)operator_new(0x50);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[7] = 0;
          puVar6[9] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(undefined4 *)(puVar6 + 6) = 0xffffffff;
          *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
          puVar6[8] = 0;
        }
        puVar5[1] = puVar6;
        puVar7 = (undefined8 *)operator_new(0x18);
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          *(undefined4 *)(puVar7 + 1) = 1;
          *puVar7 = &PTR_FUN_144cb63b8;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
          puVar7[2] = puVar6;
        }
        puVar5[2] = puVar7;
        SharedPointerInternals::EnableSharedFromThis(puVar5 + 1,puVar6,puVar6);
        FUN_1415f8370(param_1,puVar5[1]);
      }
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
        plVar8[2] = (longlong)puVar5;
      }
      local_90 = puVar5;
      local_88 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_90,puVar5,puVar5);
      if (param_2 != &local_90) {
        *param_2 = puVar5;
        local_90 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_88);
        plVar8 = local_88;
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141616da0 FUN_141616da0 body=3858 status=ok
// SIG undefined FUN_141616da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141616da0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  undefined1 local_298;
  undefined1 local_297 [7];
  longlong *local_290;
  longlong *local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  longlong *plStack_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  longlong *plStack_250;
  longlong *local_248;
  longlong *plStack_240;
  longlong *local_238;
  longlong *plStack_230;
  longlong *local_228;
  longlong *plStack_220;
  longlong *local_218;
  longlong *plStack_210;
  longlong *local_208;
  longlong *plStack_200;
  longlong *local_1f8;
  longlong *plStack_1f0;
  longlong *local_1e8;
  longlong *plStack_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong local_1c8 [5];
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  if (((*(byte *)(param_1 + 5) & 1) != 0) && ((int)param_1[8] < 0x170)) {
    local_280 = 0;
    local_278 = 0;
    FUN_14158ce90(param_1,&local_280);
    local_288 = (longlong *)0x0;
    if ((int)param_1[8] < 0xe2) {
      plVar7 = (longlong *)operator_new(0x20);
      plStack_140 = (longlong *)0x0;
      if (plVar7 != (longlong *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        *plVar7 = (longlong)&PTR_FUN_144cb51c0;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        plVar7[2] = 0;
        plVar7[3] = 0;
        plStack_140 = plVar7;
      }
      local_148 = plStack_140 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_148,local_148,local_148);
      plStack_250 = plStack_140;
      if (plStack_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
        UNLOCK();
      }
      local_290 = local_148;
      local_258 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_288,&plStack_250);
      plVar7 = plStack_250;
      if (plStack_250 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_250 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_250)(plStack_250);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_250 + 8))(plStack_250,1);
          }
        }
      }
      plVar7 = plStack_140;
      if (plStack_140 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_140 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_140)(plStack_140);
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
    }
    else {
      local_1c8[2] = 0;
      local_1c8[3] = 0;
      local_1c8[0] = 0;
      local_1c8[1] = 0;
      FUN_14158ce90(param_1,local_1c8 + 2);
      FUN_14158ce90(param_1,local_1c8);
      uVar5 = FUN_141607f00();
      local_2a8 = &local_280;
      local_290 = (longlong *)FUN_141608340(uVar5,local_68,local_1c8 + 2,local_1c8);
      local_1d0 = (longlong *)local_290[1];
      local_290 = (longlong *)*local_290;
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
        UNLOCK();
      }
      local_1d8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_288,&local_1d0);
      plVar7 = local_1d0;
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1d0 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_1d0)(local_1d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_1d0 + 8))(local_1d0,1);
          }
        }
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_60 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      if (local_1c8[0] != 0) {
        FMemory::Free();
      }
      if (local_1c8[2] != 0) {
        FMemory::Free();
      }
    }
    plVar7 = DAT_1468b5998;
    if ((DAT_1468b5998 == (longlong *)0x0) &&
       (lVar6 = operator_new(0x110), plVar7 = (longlong *)0x0, lVar6 != 0)) {
      plVar7 = (longlong *)FUN_1415f3b10(lVar6);
    }
    DAT_1468b5998 = plVar7;
    lVar12 = local_280;
    plVar7 = local_288;
    lVar6 = DAT_1468b5998[0x1a];
    local_260 = (undefined4)local_278;
    local_25c = local_278._4_4_;
    local_278 = 0;
    local_280 = 0;
    if (local_288 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_288 + 1) = (int)local_288[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)operator_new(0x48);
    plVar11 = local_288;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144cb6268;
      plVar10 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plVar10 = local_288;
      }
      plVar8[3] = (longlong)local_290;
      plVar8[4] = (longlong)plVar10;
      plVar8[5] = (longlong)&PTR_FUN_144cb5430;
      *(short *)(plVar8 + 6) = (short)lVar6;
      plVar8[7] = lVar12;
      lVar12 = 0;
      *(undefined4 *)(plVar8 + 8) = local_260;
      *(undefined4 *)((longlong)plVar8 + 0x44) = local_25c;
      plVar8[2] = (longlong)&PTR__scalar_deleting_destructor__144cb58f8;
      plVar7 = (longlong *)0x0;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar10 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        plVar7 = local_288;
        if ((int)lVar6 == 1) {
          (**(code **)*local_288)(local_288);
          plVar7 = local_288;
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_288 + 8))(local_288,1);
          }
        }
      }
    }
    local_248 = plVar8 + 2;
    plStack_240 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_248,local_248,local_248);
    if (plStack_240 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_240 + 1) = (int)plStack_240[1] + 1;
      UNLOCK();
      plVar7 = local_288;
    }
    local_138 = *param_2;
    *param_2 = (longlong)local_248;
    plVar11 = (longlong *)param_2[1];
    param_2[1] = (longlong)plStack_240;
    plStack_130 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = local_288;
      if ((int)lVar6 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = local_288;
        if (iVar2 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
          plVar7 = local_288;
        }
      }
    }
    plVar11 = plStack_240;
    if (plStack_240 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_240 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = local_288;
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_240)(plStack_240);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = local_288;
        if (iVar2 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
          plVar7 = local_288;
        }
      }
    }
    plVar8 = local_288;
    plVar11 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar7 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar11 = local_288;
      if ((int)lVar6 == 1) {
        (**(code **)*local_288)(local_288);
        plVar11 = local_288;
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
    plVar7 = local_288;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar11 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
    if (local_280 != 0) {
      FMemory::Free();
    }
  }
  lVar6 = param_2[2];
  if (((*(byte *)(param_1 + 5) & 2) != 0) &&
     ((**(code **)(*(longlong *)*param_2 + 0x38))(), (*(byte *)(param_1 + 5) & 0x40) != 0)) {
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) & 0xffffffeb;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 2) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  bVar9 = *(byte *)(param_1 + 5);
  if ((bVar9 & 0x41) == 0x41) {
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) & 0xffffffeb;
    bVar9 = *(byte *)(param_1 + 5);
  }
  if ((bVar9 & 2) != 0) {
    *(int *)(param_2 + 2) = (int)lVar6;
    bVar9 = *(byte *)(param_1 + 5);
  }
  if ((int)param_1[8] < 0x170) goto LAB_14161743b;
  if ((bVar9 & 2) != 0) {
    lVar6 = (**(code **)(*(longlong *)*param_2 + 0x10))();
    iVar2 = *(int *)(lVar6 + 8);
    if (iVar2 < 2) {
      plVar7 = (longlong *)param_1[1];
      local_297[0] = 0xff;
      if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,local_297,1);
      }
      else {
        local_297[0] = *(undefined1 *)*plVar7;
        *plVar7 = *plVar7 + 1;
      }
      if (iVar2 < 2) goto LAB_14161743b;
    }
    goto LAB_1416173fd;
  }
  if ((bVar9 & 1) == 0) goto LAB_1416173fd;
  plVar7 = (longlong *)param_1[1];
  local_298 = 0xff;
  if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_298,1);
  }
  else {
    local_298 = *(undefined1 *)*plVar7;
    *plVar7 = *plVar7 + 1;
  }
  switch(local_298) {
  case 0:
    plStack_230 = (longlong *)
                  SharedPointerInternals::
                  NewIntrusiveReferenceController<TLocalizedTextData<FTextHistory_Base>_>();
    local_238 = plStack_230 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_238,local_238,local_238);
    if (plStack_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_230 + 1) = (int)plStack_230[1] + 1;
      UNLOCK();
    }
    local_128 = *param_2;
    *param_2 = (longlong)local_238;
    plVar7 = (longlong *)param_2[1];
    param_2[1] = (longlong)plStack_230;
    plVar11 = plStack_230;
    plStack_120 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar7 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      plVar11 = plStack_230;
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar11 = plStack_230;
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          plVar11 = plStack_230;
        }
      }
    }
    goto LAB_141617599;
  case 1:
    plStack_220 = (longlong *)FUN_1415ef370();
    local_228 = plStack_220 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_228,local_228,local_228);
    if (plStack_220 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
      UNLOCK();
    }
    local_118 = *param_2;
    *param_2 = (longlong)local_228;
    plVar7 = (longlong *)param_2[1];
    param_2[1] = (longlong)plStack_220;
    plVar11 = plStack_220;
    plStack_110 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar7 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      plVar11 = plStack_220;
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar11 = plStack_220;
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          plVar11 = plStack_220;
        }
      }
    }
    goto LAB_141617599;
  case 2:
    plStack_210 = (longlong *)FUN_1415ef470();
    local_218 = plStack_210 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_218,local_218,local_218);
    if (plStack_210 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_210 + 1) = (int)plStack_210[1] + 1;
      UNLOCK();
    }
    local_108 = *param_2;
    *param_2 = (longlong)local_218;
    plVar7 = (longlong *)param_2[1];
    param_2[1] = (longlong)plStack_210;
    plVar11 = plStack_210;
    plStack_100 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar7 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      plVar11 = plStack_210;
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar11 = plStack_210;
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          plVar11 = plStack_210;
        }
      }
    }
    goto LAB_141617599;
  case 3:
    plStack_200 = (longlong *)FUN_1415eedc0();
    local_208 = plStack_200 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_208,local_208,local_208);
    if (plStack_200 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_200 + 1) = (int)plStack_200[1] + 1;
      UNLOCK();
    }
    local_f8 = *param_2;
    *param_2 = (longlong)local_208;
    plVar7 = (longlong *)param_2[1];
    param_2[1] = (longlong)plStack_200;
    plVar11 = plStack_200;
    plStack_f0 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar7 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      plVar11 = plStack_200;
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar11 = plStack_200;
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          plVar11 = plStack_200;
        }
      }
    }
    goto LAB_141617599;
  case 4:
    plStack_1f0 = (longlong *)FUN_1415ef100();
    local_1f8 = plStack_1f0 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_1f8,local_1f8,local_1f8);
    if (plStack_1f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1f0 + 1) = (int)plStack_1f0[1] + 1;
      UNLOCK();
    }
    local_e8 = *param_2;
    *param_2 = (longlong)local_1f8;
    plVar7 = (longlong *)param_2[1];
    param_2[1] = (longlong)plStack_1f0;
    plVar11 = plStack_1f0;
    plStack_e0 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar7 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      plVar11 = plStack_1f0;
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar11 = plStack_1f0;
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          plVar11 = plStack_1f0;
        }
      }
    }
    goto LAB_141617599;
  case 5:
    plStack_1e0 = (longlong *)FUN_1415ef190();
    local_1e8 = plStack_1e0 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_1e8,local_1e8,local_1e8);
    if (plStack_1e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1e0 + 1) = (int)plStack_1e0[1] + 1;
      UNLOCK();
    }
    local_d8 = *param_2;
    *param_2 = (longlong)local_1e8;
    plVar7 = (longlong *)param_2[1];
    param_2[1] = (longlong)plStack_1e0;
    plVar11 = plStack_1e0;
    plStack_d0 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar11 = plStack_1e0;
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          plVar11 = plStack_1e0;
        }
      }
    }
LAB_141617599:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar11)(plVar11);
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
    break;
  case 6:
    lStack_c0 = SharedPointerInternals::
                NewIntrusiveReferenceController<TLocalizedTextData<FTextHistory_AsCurrency>_>();
    local_c8 = lStack_c0 + 0x10;
    SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
    if (lStack_c0 != 0) {
      LOCK();
      *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
      UNLOCK();
    }
    local_1c8[4] = *param_2;
    *param_2 = local_c8;
    lStack_1a0 = param_2[1];
    param_2[1] = lStack_c0;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1c8 + 4);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_c8);
    break;
  case 7:
    lStack_b0 = FUN_1415eef40();
    local_b8 = lStack_b0 + 0x10;
    SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
    if (lStack_b0 != 0) {
      LOCK();
      *(int *)(lStack_b0 + 8) = *(int *)(lStack_b0 + 8) + 1;
      UNLOCK();
    }
    local_198 = *param_2;
    *param_2 = local_b8;
    lStack_190 = param_2[1];
    param_2[1] = lStack_b0;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_198);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b8);
    break;
  case 8:
    lStack_a0 = FUN_1415ef220();
    local_a8 = lStack_a0 + 0x10;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
    if (lStack_a0 != 0) {
      LOCK();
      *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
      UNLOCK();
    }
    local_188 = *param_2;
    *param_2 = local_a8;
    lStack_180 = param_2[1];
    param_2[1] = lStack_a0;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_188);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_a8);
    break;
  case 9:
    lStack_90 = FUN_1415ef020();
    local_98 = lStack_90 + 0x10;
    SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
    if (lStack_90 != 0) {
      LOCK();
      *(int *)(lStack_90 + 8) = *(int *)(lStack_90 + 8) + 1;
      UNLOCK();
    }
    local_178 = *param_2;
    *param_2 = local_98;
    lStack_170 = param_2[1];
    param_2[1] = lStack_90;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_178);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_98);
    break;
  case 10:
    lStack_80 = FUN_1415ef550();
    local_88 = lStack_80 + 0x10;
    SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
    if (lStack_80 != 0) {
      LOCK();
      *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
      UNLOCK();
    }
    local_168 = *param_2;
    *param_2 = local_88;
    lStack_160 = param_2[1];
    param_2[1] = lStack_80;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_168);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_88);
    break;
  case 0xb:
    lStack_70 = FUN_1415eece0();
    local_78 = lStack_70 + 0x10;
    SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
    if (lStack_70 != 0) {
      LOCK();
      *(int *)(lStack_70 + 8) = *(int *)(lStack_70 + 8) + 1;
      UNLOCK();
    }
    local_158 = *param_2;
    *param_2 = local_78;
    lStack_150 = param_2[1];
    param_2[1] = lStack_70;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_158);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_78);
    break;
  default:
    plVar7 = (longlong *)FUN_1404b03b0();
    lVar6 = *plVar7;
    plVar7 = (longlong *)plVar7[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_270 = lVar6;
    plStack_268 = plVar7;
    if (&local_270 != param_2) {
      local_270 = *param_2;
      plStack_268 = (longlong *)param_2[1];
      *param_2 = lVar6;
      param_2[1] = (longlong)plVar7;
      local_58 = lVar6;
      plStack_50 = plVar7;
    }
    plVar7 = plStack_268;
    if (plStack_268 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_268 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_268)(plStack_268);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_268 + 8))(plStack_268,1);
        }
      }
    }
    goto LAB_14161743b;
  }
LAB_1416173fd:
  plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x30))();
  (**(code **)(*plVar7 + 0x20))(plVar7,param_1);
  cVar4 = (**(code **)(*(longlong *)*param_2 + 8))();
  if (cVar4 != '\0') {
    lVar6 = *plVar7;
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x20))();
    (**(code **)(lVar6 + 0x28))(plVar7,param_1,uVar5);
  }
LAB_14161743b:
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    FUN_141611fd0(param_2);
  }
  cVar4 = FText::ShouldGatherForLocalization(param_2);
  if (cVar4 != '\0') {
    *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 8;
  }
  return;
}



// FUNCTION 141617cf0 FUN_141617cf0 body=502 status=ok
// SIG undefined FUN_141617cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141617cf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FICUInternationalization::GetCulture(*(undefined8 *)(param_1 + 0x20),&local_78);
  plVar1 = plStack_70;
  if (local_78 == 0) {
    uVar12 = 0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x48);
    lVar5 = *param_2;
    plVar3 = plVar9 + (longlong)*(int *)(param_1 + 0x50) * 3;
    for (; local_68 = lVar5, plVar9 != plVar3; plVar9 = plVar9 + 3) {
      if (*plVar9 == lVar5) {
        if (plVar9 != (longlong *)0x0) {
          pauVar10 = (undefined1 (*) [16])(plVar9 + 1);
          if (*(longlong *)*pauVar10 == local_78) goto LAB_141617ddc;
          local_88._8_8_ = plStack_70;
          local_88._0_8_ = local_78;
          uVar7 = (undefined4)((ulonglong)local_78 >> 0x20);
          uVar8 = (undefined4)((ulonglong)plStack_70 >> 0x20);
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
            UNLOCK();
          }
          if (&local_88 != pauVar10) {
            local_88 = *pauVar10;
            *(int *)*pauVar10 = (int)local_78;
            *(undefined4 *)((longlong)plVar9 + 0xc) = uVar7;
            *(int *)(plVar9 + 2) = (int)plStack_70;
            *(undefined4 *)((longlong)plVar9 + 0x14) = uVar8;
            local_48 = (int)local_78;
            uStack_44 = uVar7;
            uStack_40 = (int)plStack_70;
            uStack_3c = uVar8;
          }
          uVar12 = local_88._8_8_;
          if ((undefined8 *)local_88._8_8_ != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(local_88._8_8_ + 8);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (*(code *)**(undefined8 **)local_88._8_8_)(local_88._8_8_);
              LOCK();
              piVar2 = (int *)(uVar12 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*(longlong *)local_88._8_8_ + 8))(local_88._8_8_,1);
              }
            }
          }
          goto LAB_141617dd3;
        }
        break;
      }
    }
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(param_1 + 0x50);
    lVar11 = (longlong)iVar4;
    *(int *)(param_1 + 0x50) = iVar4 + 1;
    local_60 = lVar5;
    if (*(int *)(param_1 + 0x54) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x48,iVar4);
    }
    lVar6 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(lVar6 + lVar11 * 0x18) = lVar5;
    *(longlong *)(lVar6 + 8 + lVar11 * 0x18) = local_78;
    *(longlong **)(lVar6 + 0x10 + lVar11 * 0x18) = plVar1;
LAB_141617dd3:
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 8);
LAB_141617ddc:
    uVar12 = 1;
  }
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plStack_70 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  return uVar12;
}



// FUNCTION 141617ef0 SetCurrentCulture body=492 status=ok
// SIG undefined SetCurrentCulture(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FInternationalization::SetCurrentCulture(longlong param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FICUInternationalization::GetCulture(*(undefined8 *)(param_1 + 0x20),&local_78,param_2);
  lVar7 = CONCAT44(uStack_74,local_78);
  if ((lVar7 != 0) &&
     (((pauVar1 = (undefined1 (*) [16])(param_1 + 0x28), *(longlong *)(param_1 + 0x28) != lVar7 ||
       (*(longlong *)(param_1 + 0x38) != lVar7)) || (0 < *(int *)(param_1 + 0x50))))) {
    local_68._4_4_ = uStack_74;
    local_68._0_4_ = local_78;
    local_68._8_4_ = uStack_70;
    local_68._12_4_ = uStack_6c;
    lVar7 = 0;
    if (local_68._8_8_ != 0) {
      LOCK();
      piVar2 = (int *)(local_68._8_8_ + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      lVar7 = CONCAT44(uStack_6c,uStack_70);
    }
    if (&local_68 != pauVar1) {
      local_68 = *pauVar1;
      *(undefined4 *)*pauVar1 = local_78;
      *(undefined4 *)(param_1 + 0x2c) = uStack_74;
      *(undefined4 *)(param_1 + 0x30) = uStack_70;
      *(undefined4 *)(param_1 + 0x34) = uStack_6c;
    }
    uVar8 = local_68._8_8_;
    if ((undefined8 *)local_68._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_68._8_8_ + 8);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)**(undefined8 **)local_68._8_8_)(local_68._8_8_);
        LOCK();
        piVar2 = (int *)(uVar8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)local_68._8_8_ + 8))(local_68._8_8_,1);
        }
      }
      lVar7 = CONCAT44(uStack_6c,uStack_70);
    }
    puVar3 = (undefined8 *)(param_1 + 0x38);
    local_58 = CONCAT44(uStack_74,local_78);
    uStack_50 = (longlong *)CONCAT44(uStack_6c,uStack_70);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    if (&local_58 != puVar3) {
      local_58 = *puVar3;
      uStack_50 = *(longlong **)(param_1 + 0x40);
      *(undefined4 *)puVar3 = local_78;
      *(undefined4 *)(param_1 + 0x3c) = uStack_74;
      *(undefined4 *)(param_1 + 0x40) = uStack_70;
      *(undefined4 *)(param_1 + 0x44) = uStack_6c;
    }
    plVar6 = uStack_50;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_50 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*uStack_50)(uStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*uStack_50 + 8))(uStack_50,1);
        }
      }
    }
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::Reset(param_1 + 0x48,0);
    FICUInternationalization::HandleLanguageChanged(*(undefined8 *)(param_1 + 0x20),param_2);
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 8);
    lVar7 = CONCAT44(uStack_74,local_78);
  }
  if (((*(longlong *)(param_1 + 0x28) == lVar7) && (*(longlong *)(param_1 + 0x38) == lVar7)) &&
     (*(int *)(param_1 + 0x50) == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  plVar6 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1416180e0 SetCurrentLanguage body=330 status=ok
// SIG undefined SetCurrentLanguage(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FInternationalization::SetCurrentLanguage(longlong param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FICUInternationalization::GetCulture(*(undefined8 *)(param_1 + 0x20),&local_48,param_2);
  if ((local_48 != 0) &&
     (pauVar1 = (undefined1 (*) [16])(param_1 + 0x28), *(longlong *)(param_1 + 0x28) != local_48)) {
    local_58._8_8_ = plStack_40;
    local_58._0_8_ = local_48;
    uVar6 = (undefined4)((ulonglong)local_48 >> 0x20);
    uVar7 = (undefined4)((ulonglong)plStack_40 >> 0x20);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    if (&local_58 != pauVar1) {
      local_58 = *pauVar1;
      *(int *)*pauVar1 = (int)local_48;
      *(undefined4 *)(param_1 + 0x2c) = uVar6;
      *(int *)(param_1 + 0x30) = (int)plStack_40;
      *(undefined4 *)(param_1 + 0x34) = uVar7;
      local_38 = (int)local_48;
      uStack_34 = uVar6;
      uStack_30 = (int)plStack_40;
      uStack_2c = uVar7;
    }
    uVar9 = local_58._8_8_;
    if ((undefined8 *)local_58._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_58._8_8_ + 8);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)local_58._8_8_)(local_58._8_8_);
        LOCK();
        piVar2 = (int *)(uVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*(longlong *)local_58._8_8_ + 8))(local_58._8_8_,1);
        }
      }
    }
    FICUInternationalization::HandleLanguageChanged(*(undefined8 *)(param_1 + 0x20),param_2);
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 8);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plStack_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return lVar5 == local_48;
}



// FUNCTION 141618230 SetCurrentLanguageAndLocale body=469 status=ok
// SIG undefined SetCurrentLanguageAndLocale(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FInternationalization::SetCurrentLanguageAndLocale(longlong param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FICUInternationalization::GetCulture(*(undefined8 *)(param_1 + 0x20),&local_78,param_2);
  lVar7 = CONCAT44(uStack_74,local_78);
  if ((lVar7 != 0) &&
     ((pauVar1 = (undefined1 (*) [16])(param_1 + 0x28), *(longlong *)(param_1 + 0x28) != lVar7 ||
      (*(longlong *)(param_1 + 0x38) != lVar7)))) {
    local_68._4_4_ = uStack_74;
    local_68._0_4_ = local_78;
    local_68._8_4_ = uStack_70;
    local_68._12_4_ = uStack_6c;
    lVar7 = 0;
    if (local_68._8_8_ != 0) {
      LOCK();
      piVar2 = (int *)(local_68._8_8_ + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      lVar7 = CONCAT44(uStack_6c,uStack_70);
    }
    if (&local_68 != pauVar1) {
      local_68 = *pauVar1;
      *(undefined4 *)*pauVar1 = local_78;
      *(undefined4 *)(param_1 + 0x2c) = uStack_74;
      *(undefined4 *)(param_1 + 0x30) = uStack_70;
      *(undefined4 *)(param_1 + 0x34) = uStack_6c;
    }
    uVar8 = local_68._8_8_;
    if ((undefined8 *)local_68._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_68._8_8_ + 8);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)**(undefined8 **)local_68._8_8_)(local_68._8_8_);
        LOCK();
        piVar2 = (int *)(uVar8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)local_68._8_8_ + 8))(local_68._8_8_,1);
        }
      }
      lVar7 = CONCAT44(uStack_6c,uStack_70);
    }
    puVar3 = (undefined8 *)(param_1 + 0x38);
    local_58 = CONCAT44(uStack_74,local_78);
    uStack_50 = (longlong *)CONCAT44(uStack_6c,uStack_70);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    if (&local_58 != puVar3) {
      local_58 = *puVar3;
      uStack_50 = *(longlong **)(param_1 + 0x40);
      *(undefined4 *)puVar3 = local_78;
      *(undefined4 *)(param_1 + 0x3c) = uStack_74;
      *(undefined4 *)(param_1 + 0x40) = uStack_70;
      *(undefined4 *)(param_1 + 0x44) = uStack_6c;
    }
    plVar6 = uStack_50;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_50 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*uStack_50)(uStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*uStack_50 + 8))(uStack_50,1);
        }
      }
    }
    FICUInternationalization::HandleLanguageChanged(*(undefined8 *)(param_1 + 0x20),param_2);
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 8);
    lVar7 = CONCAT44(uStack_74,local_78);
  }
  if ((*(longlong *)(param_1 + 0x28) == lVar7) && (*(longlong *)(param_1 + 0x38) == lVar7)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  plVar6 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 141618410 SetCurrentLocale body=320 status=ok
// SIG undefined SetCurrentLocale(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FInternationalization::SetCurrentLocale(longlong param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  longlong *plStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FICUInternationalization::GetCulture(*(undefined8 *)(param_1 + 0x20),&local_38,param_2);
  if ((local_38 != 0) &&
     (pauVar1 = (undefined1 (*) [16])(param_1 + 0x38), *(longlong *)(param_1 + 0x38) != local_38)) {
    local_48._8_8_ = plStack_30;
    local_48._0_8_ = local_38;
    uVar6 = (undefined4)((ulonglong)local_38 >> 0x20);
    uVar7 = (undefined4)((ulonglong)plStack_30 >> 0x20);
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    if (&local_48 != pauVar1) {
      local_48 = *pauVar1;
      *(int *)*pauVar1 = (int)local_38;
      *(undefined4 *)(param_1 + 0x3c) = uVar6;
      *(int *)(param_1 + 0x40) = (int)plStack_30;
      *(undefined4 *)(param_1 + 0x44) = uVar7;
      local_28 = (int)local_38;
      uStack_24 = uVar6;
      uStack_20 = (int)plStack_30;
      uStack_1c = uVar7;
    }
    uVar9 = local_48._8_8_;
    if ((undefined8 *)local_48._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_48._8_8_ + 8);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)local_48._8_8_)(local_48._8_8_);
        LOCK();
        piVar2 = (int *)(uVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*(longlong *)local_48._8_8_ + 8))(local_48._8_8_,1);
        }
      }
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 8);
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return lVar5 == local_38;
}



// FUNCTION 141618550 FUN_141618550 body=1888 status=ok
// SIG undefined FUN_141618550(void)

void FUN_141618550(undefined8 *param_1,undefined8 *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *_Src;
  ulonglong uVar8;
  BOOL BVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar17;
  undefined2 *puVar18;
  longlong lVar19;
  uint uVar20;
  uint *puVar21;
  bool bVar22;
  undefined1 local_res20 [8];
  longlong *local_178;
  longlong *plStack_170;
  longlong *local_168;
  longlong *plStack_160;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  LPCRITICAL_SECTION local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong local_60 [4];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1a);
  local_e0 = lpCriticalSection;
  BVar9 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar9 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  psVar10 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 5) != 0) {
    psVar10 = (short *)param_1[4];
  }
  lVar19 = (longlong)puVar18 - (longlong)psVar10;
  do {
    sVar3 = *psVar10;
    sVar4 = *(short *)((longlong)psVar10 + lVar19);
    if (sVar3 != sVar4) break;
    psVar10 = psVar10 + 1;
  } while (sVar4 != 0);
  if (sVar3 != sVar4) {
    FString::operator=(param_1 + 4,param_2);
    uStack_144 = 1;
    local_c8 = param_1 + 6;
    uStack_134 = 0;
    iStack_130 = 0;
    uVar5 = *(uint *)(param_1 + 0xb);
    puStack_140 = (uint *)(param_1 + 8);
    local_148 = 0;
    if (uVar5 != 0) {
      puVar21 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar21 = puStack_140;
      }
      uVar15 = *puVar21;
      iStack_130 = 0;
      local_148 = 0;
      while (uVar15 == 0) {
        lVar19 = (longlong)local_148;
        iStack_130 = iStack_130 + 0x20;
        iVar14 = local_148 + 1;
        bVar22 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
        local_148 = iVar14;
        if (bVar22) goto LAB_1416186b3;
        uVar15 = puVar21[lVar19 + 1];
      }
      uStack_144 = -uVar15 & uVar15;
      iVar14 = 0x1f;
      if (uStack_144 != 0) {
        for (; uStack_144 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uStack_144 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_134 = (iStack_130 - iVar14) + 0x1f;
      if ((int)uVar5 < (int)uStack_134) {
LAB_1416186b3:
        uStack_134 = uVar5;
      }
    }
    local_138 = 0xffffffff;
    uVar15 = *(uint *)(param_1 + 0xb);
    uStack_108 = CONCAT44(uStack_144,local_148);
    uStack_b0 = CONCAT44(uStack_134,0xffffffff);
    uStack_f0 = CONCAT44(uStack_12c,iStack_130);
    iVar14 = (int)uVar15 >> 5;
    uVar20 = uVar15 & 0xffffffe0;
    local_110._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
    local_110 = CONCAT44(local_110._4_4_,iVar14);
    uStack_100 = SUB84(puStack_140,0);
    _uStack_100 = CONCAT44(uVar15,uStack_100);
    uStack_f8 = CONCAT44(uStack_134,uVar15) & 0xffffffffffffffe0;
    local_e8 = puStack_140;
    uStack_c0 = uStack_108;
    local_b8 = puStack_140;
    local_a8 = uStack_f0;
    if (uVar15 != uVar5) {
      puVar21 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar21 = puStack_140;
      }
      uVar15 = puVar21[iVar14] & -1 << ((byte)uVar15 & 0x1f);
      while (uVar15 == 0) {
        uVar20 = uVar20 + 0x20;
        uVar8 = uStack_f8 >> 0x20;
        uStack_f8 = CONCAT44((int)uVar8,uVar20);
        local_110._4_4_ = (undefined4)((ulonglong)local_110 >> 0x20);
        local_110 = CONCAT44(local_110._4_4_,iVar14 + 1);
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
        goto LAB_141618787;
        uVar15 = puVar21[(longlong)iVar14 + 1];
        iVar14 = iVar14 + 1;
      }
      uVar15 = -uVar15 & uVar15;
      iVar14 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uVar15 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      iVar14 = (uVar20 - iVar14) + 0x1f;
      _uStack_100 = CONCAT44(iVar14,uStack_100);
      if ((int)uVar5 < iVar14) {
LAB_141618787:
        _uStack_100 = CONCAT44(uVar5,uStack_100);
      }
    }
    while( true ) {
      if (((uStack_b0._4_4_ == uStack_fc) && (local_b8 == local_e8)) &&
         (lpCriticalSection = local_e0, local_c8 == param_1 + 6)) break;
      lVar19 = *local_c8 + (longlong)uStack_b0._4_4_ * 0x28;
      plVar6 = *(longlong **)(lVar19 + 0x18);
      pplVar1 = (longlong **)(lVar19 + 0x10);
      plVar7 = *pplVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_128 = lVar19;
      if (plVar7 != local_60) {
        *plVar7 = 0;
        plVar16 = (longlong *)plVar7[1];
        plVar7[1] = 0;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      plVar16 = (longlong *)plVar7[5];
      local_a0 = plVar7[4];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      local_98 = plVar16;
      TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x10,&local_a0);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar12 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      lVar12 = DAT_1468b5998;
      if (DAT_1468b5998 == 0) {
        lVar11 = operator_new(0x110);
        lVar12 = 0;
        if (lVar11 != 0) {
          lVar12 = FUN_1415f3b10(lVar11);
        }
      }
      DAT_1468b5998 = lVar12;
      puVar13 = (undefined8 *)FUN_141608340(DAT_1468b5998,local_70,param_1 + 4,local_128,plVar7 + 2)
      ;
      local_120 = *puVar13;
      local_118 = (longlong *)puVar13[1];
      if (local_118 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_118 + 1) = (int)local_118[1] + 1;
        UNLOCK();
      }
      local_150 = (int)plVar7[3];
      lVar12 = (longlong)local_150;
      _Src = (void *)plVar7[2];
      local_158 = (void *)0x0;
      if (local_150 == 0) {
        local_14c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
        _guard_xfg_dispatch_icall_nop(local_158,_Src,lVar12 * 2);
      }
      plVar16 = (longlong *)0x0;
      plVar7 = (longlong *)param_1[1];
      plVar17 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        iVar14 = (int)plVar7[1];
        bVar22 = iVar14 == 0;
        if (bVar22) {
          *(int *)(plVar7 + 1) = 0;
          iVar14 = 0;
        }
        UNLOCK();
        while (plVar17 = plVar16, !bVar22) {
          LOCK();
          bVar22 = iVar14 == (int)plVar7[1];
          if (bVar22) {
            *(int *)(plVar7 + 1) = iVar14 + 1;
          }
          UNLOCK();
          if (bVar22) {
            plVar16 = (longlong *)0x0;
            plVar17 = plVar7;
            if (plVar7 != (longlong *)0x0) {
              plVar16 = (longlong *)*param_1;
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              plVar17 = plVar7 + 1;
              lVar12 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              plVar17 = plVar7;
              if ((int)lVar12 == 1) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                iVar14 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar14 = (int)plVar7[1];
          bVar22 = iVar14 == 0;
          if (bVar22) {
            *(int *)(plVar7 + 1) = 0;
            iVar14 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
      }
      local_90 = plVar16;
      local_88 = plVar17;
      plStack_160 = (longlong *)
                    SharedPointerInternals::
                    NewIntrusiveReferenceController<FStringTableEntry,TSharedRef<FStringTable_const_,1>,FString,TSharedPtr<FString,1>_>
                              (&local_90,&local_158,&local_120);
      local_168 = plStack_160 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_168,local_168,local_168);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar17 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free();
      }
      plVar7 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_118 + 1;
        lVar12 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
      local_178 = local_168;
      plStack_170 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
        UNLOCK();
      }
      if (pplVar1 != &local_178) {
        *pplVar1 = local_168;
        local_178 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar19 + 0x18,&plStack_170);
      }
      plVar7 = plStack_170;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        plVar16 = plStack_170 + 1;
        lVar19 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plStack_170)(plStack_170);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plStack_170 + 8))(plStack_170,1);
          }
        }
      }
      plVar7 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar16 = plStack_160 + 1;
        lVar19 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar17 + 1;
        lVar19 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      plVar7 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_68 + 1;
        lVar19 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      local_d8 = (*pplVar1)[4];
      local_d0 = (longlong *)(*pplVar1)[5];
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      local_80 = &local_d8;
      local_78 = local_128;
      TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TSharedPtr<FString,1>_&&,FString_&>_>
                (param_1 + 0x10,local_res20,&local_80,0);
      plVar7 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_d0 + 1;
        lVar19 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        lVar19 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141618ca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141618cb0 ShouldGatherForLocalization body=194 status=ok
// SIG undefined ShouldGatherForLocalization(void)

undefined1 FText::ShouldGatherForLocalization(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  cVar1 = FUN_1415bac00();
  if (cVar1 == '\0') {
    return 0;
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x28))();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  if ((*(byte *)(param_1 + 2) & 3) == 0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x28))();
    iVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    if ((iVar2 != 0xb) && (1 < (int)plVar3[1])) {
      iVar2 = 0;
      lVar6 = 0;
      while( true ) {
        iVar5 = (int)plVar3[1] + -1;
        if ((int)plVar3[1] == 0) {
          iVar5 = 0;
        }
        if (iVar5 <= iVar2) break;
        cVar1 = IsWhitespace(*(undefined2 *)(lVar6 + *plVar3));
        if (cVar1 == '\0') {
          return 1;
        }
        iVar2 = iVar2 + 1;
        lVar6 = lVar6 + 2;
      }
    }
  }
  return 0;
}



// FUNCTION 141618d80 FUN_141618d80 body=321 status=ok
// SIG undefined FUN_141618d80(void)

undefined8 * FUN_141618d80(undefined8 *param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *local_18;
  int local_10;
  undefined4 local_c;
  
  iVar4 = *(int *)(param_2 + 1);
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = -1;
  }
  iVar6 = 0;
  if (iVar4 == 0) {
    iVar3 = iVar6;
  }
  if (0 < iVar3) {
    pwVar1 = (wchar_t *)*param_2;
    iVar2 = iVar4 + -2;
    if (iVar4 == 0) {
      iVar2 = -1;
    }
    if (pwVar1[iVar2] == L']') {
      pwVar5 = pwVar1 + iVar4;
      do {
        if (pwVar5 == pwVar1) goto LAB_141618de5;
        pwVar5 = pwVar5 + -1;
      } while (*pwVar5 != L'[');
      iVar2 = (int)((longlong)pwVar5 - (longlong)pwVar1 >> 1);
      if (iVar2 != -1) {
        pwVar5 = L"";
        if (iVar4 != 0) {
          pwVar5 = pwVar1;
        }
        iVar4 = iVar6;
        if ((-1 < iVar2) && (iVar4 = iVar3, iVar2 < iVar3)) {
          iVar4 = iVar2;
        }
        local_18 = (wchar_t *)0x0;
        local_c = 0;
        local_10 = iVar4 + 1;
        if (iVar4 == 0) {
          local_10 = iVar6;
        }
        if ((0 < local_10) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0), pwVar1 = local_18,
           0 < local_10)) {
          wcsncpy(local_18,pwVar5,(longlong)iVar4);
          pwVar1[iVar4] = L'\0';
        }
        FString::TrimEndInline(&local_18);
        *param_1 = local_18;
        *(int *)(param_1 + 1) = local_10;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
        return param_1;
      }
    }
  }
LAB_141618de5:
  FString::FString(param_1,param_2);
  return param_1;
}



// FUNCTION 141618ed0 TearDown body=103 status=ok
// SIG undefined TearDown(void)

void FInternationalization::TearDown(void)

{
  BOOL BVar1;
  longlong lVar2;
  
  if ((DAT_1468b53e8 != (char *)0x0) && (*DAT_1468b53e8 != '\0')) {
    Terminate();
    lVar2 = FUN_141607df0();
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x50));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x50));
    }
    TSet<TTuple<FTextCache::FCacheKey,FText>,TDefaultMapHashableKeyFuncs<FTextCache::FCacheKey,FText,0>,FDefaultSetAllocator>
    ::Empty(lVar2,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x50));
  }
  return;
}



// FUNCTION 141618f40 Terminate body=605 status=ok
// SIG undefined Terminate(void)

void FInternationalization::Terminate(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_50 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x28) != &local_58) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_50);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x38) != &local_48) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_40);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::Reset(param_1 + 0x48,0);
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x58) != &local_38) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,&local_30);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x68) != &local_28) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x70,&local_20);
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
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x78) != &local_18) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,&local_10);
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
  FUN_1415e7180(*(undefined8 *)(param_1 + 0x20));
  *param_1 = 0;
  lVar4 = DAT_1468b53e8;
  if (DAT_1468b53e8 != 0) {
    ~FInternationalization(DAT_1468b53e8);
    FMemory::operator_delete(lVar4,0x88);
  }
  DAT_1468b53e8 = 0;
  return;
}



// FUNCTION 1416191a0 ToFormattedString body=758 status=ok
// SIG undefined ToFormattedString(void)

void FFormatArgumentValue::ToFormattedString
               (int *param_1,char param_2,char param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  void **ppvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  void *pvVar17;
  undefined4 *puVar18;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  pvVar17 = (void *)0x0;
  if (*param_1 == 4) {
    if (param_2 != '\0') {
      FUN_141611fd0(param_1 + 4);
    }
    if (param_3 == '\0') {
      FUN_141611fd0(param_1 + 4);
      puVar11 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
      local_c8 = (void *)0x0;
      iVar16 = *(int *)(puVar11 + 1);
      pvVar4 = (void *)*puVar11;
      local_c0 = iVar16;
      if (iVar16 == 0) {
        local_bc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar16,0);
        pvVar17 = local_c8;
        ::_guard_xfg_dispatch_icall_nop(local_c8,pvVar4,(longlong)iVar16 * 2);
      }
      ppvVar13 = &local_c8;
      bVar8 = false;
      bVar7 = true;
    }
    else {
      plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 4) + 0x28))();
      (**(code **)(*plVar10 + 0x18))(plVar10,local_b8);
      ppvVar13 = local_b8;
      bVar8 = true;
      bVar7 = false;
      pvVar17 = local_c8;
    }
    pvVar4 = *ppvVar13;
    iVar16 = *(int *)(ppvVar13 + 1) + -1;
    if (*(int *)(ppvVar13 + 1) == 0) {
      iVar16 = 0;
    }
    if (iVar16 != 0) {
      iVar3 = (int)param_4[1];
      iVar9 = (uint)(iVar3 == 0) + iVar16 + iVar3;
      *(int *)(param_4 + 1) = iVar9;
      if (*(int *)((longlong)param_4 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
      }
      _Dst = (void *)(*param_4 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar4,(longlong)iVar16 * 2);
      *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
    }
    if ((bVar7) && (pvVar17 != (void *)0x0)) {
      FMemory::Free(pvVar17);
    }
    if ((bVar8) && (local_b8[0] != (void *)0x0)) {
      FMemory::Free();
    }
  }
  else if (*param_1 != 5) {
    lVar12 = FInternationalization::Get();
    plVar10 = *(longlong **)(lVar12 + 0x40);
    uVar5 = *(undefined8 *)(lVar12 + 0x38);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    lVar12 = FUN_1415db8e0(uVar5);
    iVar16 = *param_1;
    if (iVar16 == 0) {
      uVar6 = *(ulonglong *)(param_1 + 2);
      puVar18 = &local_48;
      local_48 = *(undefined4 *)(lVar12 + 0x8c);
      uStack_44 = *(undefined4 *)(lVar12 + 0x90);
      uStack_40 = *(undefined4 *)(lVar12 + 0x94);
      uStack_3c = *(undefined4 *)(lVar12 + 0x98);
      local_38 = *(undefined8 *)(lVar12 + 0x9c);
      uVar14 = uVar6 >> 0x3f;
      uVar15 = -uVar6;
      if (-1 < (longlong)uVar6) {
        uVar15 = uVar6;
      }
    }
    else {
      if (iVar16 != 1) {
        if (iVar16 == 2) {
          local_88 = *(undefined8 *)(lVar12 + 0x8c);
          uStack_80 = *(undefined8 *)(lVar12 + 0x94);
          local_78 = *(undefined8 *)(lVar12 + 0x9c);
          FastDecimalFormat::Internal::FractionalToString
                    (SUB84((double)(float)param_1[2],0),lVar12,&local_88,param_4);
          return;
        }
        if (iVar16 != 3) {
          return;
        }
        local_a8 = *(undefined8 *)(lVar12 + 0x8c);
        uStack_a0 = *(undefined8 *)(lVar12 + 0x94);
        local_98 = *(undefined8 *)(lVar12 + 0x9c);
        FastDecimalFormat::Internal::FractionalToString
                  ((int)*(undefined8 *)(param_1 + 2),lVar12,&local_a8,param_4);
        return;
      }
      local_68 = *(undefined4 *)(lVar12 + 0x8c);
      uStack_64 = *(undefined4 *)(lVar12 + 0x90);
      uStack_60 = *(undefined4 *)(lVar12 + 0x94);
      uStack_5c = *(undefined4 *)(lVar12 + 0x98);
      puVar18 = &local_68;
      local_58 = *(undefined8 *)(lVar12 + 0x9c);
      uVar14 = 0;
      uVar15 = *(ulonglong *)(param_1 + 2);
    }
    FastDecimalFormat::Internal::IntegralToString(uVar14,uVar15,lVar12,puVar18,param_4);
  }
  return;
}



// FUNCTION 1416194a0 ToLower body=341 status=ok
// SIG undefined ToLower(void)

longlong FText::ToLower(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong *local_28;
  
  FUN_141611fd0();
  uVar6 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  FTextTransformer::ToLower(local_78,uVar6);
  local_58 = *param_1;
  local_50 = param_1[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_48 = *(undefined4 *)(param_1 + 2);
  uVar6 = FUN_1415f3a40(local_40,&local_58,0);
  plStack_80 = (longlong *)
               SharedPointerInternals::
               NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_Transform>,FString,FTextHistory_Transform>
                         (local_78,uVar6);
  local_88 = plStack_80 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
  local_68 = local_88;
  plStack_60 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  FText(param_2,&local_68);
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141619600 FUN_141619600 body=1313 status=ok
// SIG undefined FUN_141619600(void)

undefined8 FUN_141619600(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  size_t _Size;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  uint *puVar14;
  short *_Src;
  longlong *plVar15;
  longlong *plVar16;
  void *_Src_00;
  uint local_res18;
  undefined2 *local_138;
  undefined8 local_130;
  void *local_128;
  ulonglong local_120;
  int local_118;
  uint uStack_114;
  uint *puStack_110;
  undefined4 local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  longlong *local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  int local_a0;
  int local_9c;
  ulonglong local_98;
  uint *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong local_60 [4];
  
  uVar3 = *(uint *)(param_1 + 5);
  puStack_110 = (uint *)(param_1 + 2);
  local_138 = (undefined2 *)0x0;
  iStack_100 = 0;
  local_130 = 0;
  local_118 = 0;
  uStack_114 = 1;
  uStack_104 = 0;
  if (uVar3 != 0) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puStack_110;
    }
    uVar4 = *puVar14;
    iStack_100 = 0;
    local_118 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_118;
      iStack_100 = iStack_100 + 0x20;
      iVar12 = local_118 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_118;
      local_118 = iVar12;
      if (bVar5) goto LAB_1416196f2;
      uVar4 = puVar14[lVar10 + 1];
    }
    uStack_114 = -uVar4 & uVar4;
    local_a0 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> local_a0 == 0; local_a0 = local_a0 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - local_a0;
    }
    uStack_104 = (iStack_100 - iVar12) + 0x1f;
    if ((int)uVar3 < (int)uStack_104) {
LAB_1416196f2:
      uStack_104 = uVar3;
    }
  }
  local_108 = 0xffffffff;
  uVar4 = *(uint *)(param_1 + 5);
  uStack_c0 = CONCAT44(uStack_114,local_118);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_104;
  uStack_a8 = CONCAT44(uStack_fc,iStack_100);
  iVar12 = (int)uVar4 >> 5;
  local_c8 = (int)param_1;
  uStack_c4 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar11 = -1 << ((byte)uVar4 & 0x1f);
  uStack_b0 = uVar4 & 0xffffffe0;
  uStack_b8 = CONCAT44(uVar4,uVar11);
  uStack_ac = uStack_104;
  local_88 = local_c8;
  uStack_84 = uStack_c4;
  iStack_80 = local_118;
  uStack_7c = uStack_114;
  local_c8 = iVar12;
  if (uVar4 != uVar3) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puStack_110;
    }
    uVar11 = puVar14[iVar12] & uVar11;
    while (uVar11 == 0) {
      lVar10 = (longlong)local_c8;
      uStack_b0 = uStack_b0 + 0x20;
      iVar12 = local_c8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar12;
      if (bVar5) goto LAB_1416197cd;
      uVar11 = puVar14[lVar10 + 1];
      uStack_b8 = 0xffffffff;
    }
    uVar11 = -uVar11 & uVar11;
    local_9c = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_9c == 0; local_9c = local_9c + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - local_9c;
    }
    iVar12 = (uStack_b0 - iVar12) + 0x1f;
    uStack_b8 = CONCAT44(iVar12,(undefined4)uStack_b8);
    if ((int)uVar3 < iVar12) {
LAB_1416197cd:
      uStack_b8 = CONCAT44(uVar3,(undefined4)uStack_b8);
    }
  }
  local_98 = uStack_b8 >> 0x20;
  local_90 = puStack_110;
  local_78 = puStack_110;
  local_68 = uStack_a8;
  while( true ) {
    puVar2 = local_138;
    if (((uStack_6c == (uint)local_98) && (local_78 == local_90)) &&
       ((longlong *)CONCAT44(uStack_84,local_88) == param_1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) break;
    lVar10 = *(longlong *)CONCAT44(uStack_84,local_88) + (longlong)(int)uStack_6c * 0x28;
    FString::FString(&local_e8,lVar10);
    plVar15 = *(longlong **)(lVar10 + 0x18);
    plVar16 = *(longlong **)(lVar10 + 0x10);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    lVar10 = (longlong)local_e0;
    local_f8 = (void *)0x0;
    local_f0 = local_e0;
    local_d0 = plVar15;
    if (local_e0 == 0) {
      local_ec = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_e0,0);
      _guard_xfg_dispatch_icall_nop(local_f8,local_e8,lVar10 * 2);
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      plVar15 = local_d0;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar16 + 8))(plVar16,local_60);
    _Src = &DAT_144cb19c4;
    if ((int)local_130 < 2) {
      _Src = &DAT_144cb190c;
    }
    if (*_Src == 0) {
      _Src_00 = (void *)*puVar9;
      *puVar9 = 0;
      local_res18 = *(uint *)(puVar9 + 1);
      puVar9[1] = 0;
    }
    else {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (_Src[lVar10] != 0);
      iVar12 = *(int *)(puVar9 + 1) + -1;
      if (*(int *)(puVar9 + 1) == 0) {
        iVar12 = 0;
      }
      local_128 = (void *)0x0;
      iVar8 = (int)lVar10;
      local_res18 = iVar12 + 1 + iVar8;
      local_120 = (ulonglong)local_res18;
      if (0 < (int)local_res18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
        local_res18 = (uint)local_120;
      }
      _Src_00 = local_128;
      _Size = (longlong)iVar8 * 2;
      _guard_xfg_dispatch_icall_nop(local_128,_Src,_Size);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src_00 + _Size),(void *)*puVar9,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)_Src_00 + ((longlong)iVar12 + (longlong)iVar8) * 2) = 0;
      local_128 = (void *)0x0;
      local_120 = 0;
    }
    uVar6 = local_130;
    if ((local_res18 != 0) && (local_res18 - 1 != 0)) {
      iVar12 = (int)local_130;
      lVar10 = (longlong)(int)local_130;
      iVar8 = (uint)((int)local_130 == 0) + (local_res18 - 1) + (int)local_130;
      local_130 = CONCAT44(local_130._4_4_,iVar8);
      if (local_130._4_4_ < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar6 & 0xffffffff);
      }
      puVar2 = local_138 + (lVar10 - (ulonglong)(iVar12 != 0));
      _guard_xfg_dispatch_icall_nop(puVar2,_Src_00,(longlong)(int)local_res18 * 2 - 2);
      puVar2[(longlong)(int)local_res18 + -1] = 0;
    }
    if (_Src_00 != (void *)0x0) {
      FMemory::Free(_Src_00);
    }
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    plVar7 = local_d0;
    plVar16 = (longlong *)0x0;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar15 + 1;
      lVar10 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      plVar16 = local_d0;
      if ((int)lVar10 == 1) {
        (**(code **)*local_d0)(local_d0);
        plVar16 = local_d0;
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free();
    }
    plVar15 = local_d0;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar16 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_e8 != (void *)0x0) {
      FMemory::Free();
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  puVar13 = &DAT_143f3eda8;
  if ((int)local_130 != 0) {
    puVar13 = local_138;
  }
  FString::PrintfImpl(param_2,L"{%s}",puVar13);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  return param_2;
}



// FUNCTION 141619b30 FUN_141619b30 body=676 status=ok
// SIG undefined FUN_141619b30(void)

undefined8 FUN_141619b30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  size_t _Size;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  short *_Src;
  longlong lVar9;
  undefined2 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  void *_Src_00;
  undefined2 *local_78;
  undefined8 local_70;
  void *local_68;
  ulonglong local_60;
  longlong local_58 [3];
  longlong lVar10;
  
  puVar13 = *(undefined8 **)(param_1 + 8);
  puVar6 = puVar13 + (longlong)*(int *)(param_1 + 0x10) * 2;
  local_78 = (undefined2 *)0x0;
  local_70 = 0;
  if (puVar13 != puVar6) {
    do {
      plVar2 = (longlong *)puVar13[1];
      plVar3 = (longlong *)*puVar13;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_58);
      _Src = &DAT_144cb1abc;
      if ((int)local_70 < 2) {
        _Src = &DAT_144cb1a5c;
      }
      if (*_Src == 0) {
        _Src_00 = (void *)*puVar7;
        *puVar7 = 0;
        uVar12 = *(uint *)(puVar7 + 1);
        puVar7[1] = 0;
      }
      else {
        lVar9 = -1;
        do {
          lVar10 = lVar9;
          lVar9 = lVar10 + 1;
        } while (_Src[lVar9] != 0);
        local_68 = (void *)0x0;
        iVar8 = *(int *)(puVar7 + 1) + -1;
        if (*(int *)(puVar7 + 1) == 0) {
          iVar8 = 0;
        }
        uVar12 = (int)lVar10 + 2 + iVar8;
        local_60 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          uVar12 = (uint)local_60;
        }
        _Src_00 = local_68;
        _Size = (longlong)(int)lVar9 * 2;
        _guard_xfg_dispatch_icall_nop(local_68,_Src,_Size);
        _guard_xfg_dispatch_icall_nop
                  ((void *)(_Size + (longlong)_Src_00),(void *)*puVar7,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)_Src_00 + ((longlong)iVar8 + (longlong)(int)lVar9) * 2) = 0;
        local_68 = (void *)0x0;
        local_60 = 0;
      }
      uVar4 = local_70;
      if ((uVar12 != 0) && (uVar12 - 1 != 0)) {
        iVar8 = (int)local_70;
        lVar9 = (longlong)(int)local_70;
        iVar5 = (uint)((int)local_70 == 0) + (uVar12 - 1) + (int)local_70;
        local_70 = CONCAT44(local_70._4_4_,iVar5);
        if (local_70._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar4 & 0xffffffff);
        }
        puVar11 = local_78 + (lVar9 - (ulonglong)(iVar8 != 0));
        _guard_xfg_dispatch_icall_nop(puVar11,_Src_00,(longlong)(int)uVar12 * 2 - 2);
        puVar11[(longlong)(int)uVar12 + -1] = 0;
      }
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
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
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar6);
    puVar11 = local_78;
    if ((int)local_70 != 0) goto LAB_141619d95;
  }
  puVar11 = &DAT_143f3eda8;
LAB_141619d95:
  FString::PrintfImpl(param_2,L"[%s]",puVar11);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141619de0 ToString body=128 status=ok
// SIG undefined ToString(void)

undefined8 * FLocMetadataValueBoolean::ToString(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"false";
  if (*(char *)(param_1 + 8) != '\0') {
    pwVar3 = L"true";
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (*pwVar3 != L'\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pwVar3[lVar2] != L'\0');
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,pwVar3,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 141619e60 FUN_141619e60 body=27 status=ok
// SIG undefined FUN_141619e60(void)

undefined8 FUN_141619e60(longlong param_1,undefined8 param_2)

{
  FUN_141619600(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 141619e80 ToString body=29 status=ok
// SIG undefined ToString(void)

void FText::ToString(undefined8 *param_1)

{
  FUN_141611fd0();
                    /* WARNING: Could not recover jumptable at 0x000141619e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x10))();
  return;
}



// FUNCTION 141619ea0 ToUpper body=341 status=ok
// SIG undefined ToUpper(void)

longlong FText::ToUpper(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong *local_28;
  
  FUN_141611fd0();
  uVar6 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  FTextTransformer::ToUpper(local_78,uVar6);
  local_58 = *param_1;
  local_50 = param_1[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_48 = *(undefined4 *)(param_1 + 2);
  uVar6 = FUN_1415f3a40(local_40,&local_58,1);
  plStack_80 = (longlong *)
               SharedPointerInternals::
               NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_Transform>,FString,FTextHistory_Transform>
                         (local_78,uVar6);
  local_88 = plStack_80 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
  local_68 = local_88;
  plStack_60 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  FText(param_2,&local_68);
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14161a000 TrimPreceding body=426 status=ok
// SIG undefined TrimPreceding(void)

longlong FText::TrimPreceding(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  
  FUN_141611fd0(param_2);
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  puVar9 = (undefined2 *)0x0;
  iVar8 = 0;
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(puVar4 + 1);
  lVar7 = (longlong)local_30;
  _Src = (void *)*puVar4;
  puVar5 = puVar9;
  if (local_30 == 0) {
    local_2c = 0;
    puVar10 = puVar9;
    iVar6 = local_30;
    puVar12 = puVar9;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    puVar10 = local_38;
    ::_guard_xfg_dispatch_icall_nop(local_38,_Src,lVar7 * 2);
    iVar6 = local_30;
    puVar12 = puVar10;
  }
  while( true ) {
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = iVar8;
    }
    iVar11 = (int)puVar5;
    if ((iVar3 <= iVar11) || (cVar2 = IsWhitespace(*puVar10), cVar2 == '\0')) break;
    puVar10 = puVar10 + 1;
    puVar5 = (undefined2 *)(ulonglong)(iVar11 + 1);
  }
  iVar3 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar3 = iVar8;
  }
  iVar3 = iVar3 - iVar11;
  if (iVar6 == 0) {
    puVar5 = &DAT_143f3eda8;
    iVar6 = iVar8;
  }
  else {
    puVar5 = puVar12;
    iVar6 = iVar6 + -1;
  }
  if ((-1 < iVar3) && (iVar8 = iVar6, iVar3 < iVar6)) {
    iVar8 = iVar3;
  }
  iVar3 = 0;
  local_28 = (undefined2 *)0x0;
  local_1c = 0;
  psVar1 = puVar5 + ((longlong)iVar6 - (longlong)iVar8);
  iVar8 = iVar3;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar1[lVar7] != 0);
    iVar6 = (int)lVar7 + 1;
    local_20 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar8 = local_1c;
    iVar3 = local_20;
    puVar9 = local_28;
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)iVar6 * 2);
  }
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  local_38 = puVar9;
  local_30 = iVar3;
  local_2c = iVar8;
  FUN_1415f0740(param_1,&local_38);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2 - ((*(uint *)(param_1 + 0x10) & 2) != 0)
  ;
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14161a1b0 FUN_14161a1b0 body=470 status=ok
// SIG undefined FUN_14161a1b0(void)

longlong FUN_14161a1b0(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  longlong lVar11;
  wchar_t *pwVar12;
  uint uVar13;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  wchar_t *pwVar10;
  
  FUN_141611fd0(param_2);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  pwVar6 = (wchar_t *)0x0;
  local_48 = (wchar_t *)0x0;
  local_40 = *(int *)(puVar2 + 1);
  lVar11 = (longlong)local_40;
  _Src = (void *)*puVar2;
  pwVar9 = pwVar6;
  if (local_40 == 0) {
    local_3c = 0;
    iVar5 = local_40;
    pwVar12 = pwVar6;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    pwVar12 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar11 * 2);
    iVar5 = local_40;
  }
  while( true ) {
    uVar3 = (uint)pwVar9;
    uVar13 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar13 = 0;
    }
    if (((int)uVar13 <= (int)uVar3) ||
       (cVar1 = FText::IsWhitespace(pwVar12[(longlong)pwVar6]), cVar1 == '\0')) break;
    pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
    pwVar9 = (wchar_t *)(ulonglong)(uVar3 + 1);
  }
  uVar13 = iVar5 - 1;
  if (iVar5 == 0) {
    uVar13 = 0;
  }
  lVar11 = (longlong)(int)uVar13;
  if ((longlong)pwVar6 < lVar11) {
    pwVar9 = pwVar12 + lVar11 + -1;
    do {
      cVar1 = FText::IsWhitespace(*pwVar9);
      if (cVar1 == '\0') break;
      uVar13 = uVar13 - 1;
      lVar11 = lVar11 + -1;
      pwVar9 = pwVar9 + -1;
    } while ((longlong)pwVar6 < lVar11);
  }
  pwVar9 = (wchar_t *)0x0;
  uVar7 = iVar5 - 1;
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  if (uVar3 < uVar7) {
    uVar7 = uVar3;
  }
  uVar3 = iVar5 - 1;
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  uVar4 = uVar7;
  if ((uVar7 <= uVar13) && (uVar4 = uVar3, uVar13 < uVar3)) {
    uVar4 = uVar13;
  }
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  pwVar6 = L"";
  if (iVar5 != 0) {
    pwVar6 = pwVar12;
  }
  iVar5 = uVar4 - uVar7;
  pwVar10 = (wchar_t *)(ulonglong)(iVar5 + 1);
  if (iVar5 == 0) {
    pwVar10 = pwVar9;
  }
  iVar8 = (int)pwVar10;
  local_30 = iVar8;
  if ((0 < iVar8) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar8 = local_30,
     pwVar9 = local_38, 0 < local_30)) {
    wcsncpy(local_38,pwVar6 + (int)uVar7,(longlong)iVar5);
    pwVar9[iVar5] = L'\0';
  }
  if (pwVar12 != (wchar_t *)0x0) {
    FMemory::Free(pwVar12);
  }
  local_3c = local_2c;
  local_48 = pwVar9;
  local_40 = iVar8;
  FUN_1415f0740(param_1,&local_48);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2 - ((*(uint *)(param_1 + 0x10) & 2) != 0)
  ;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14161a390 FUN_14161a390 body=402 status=ok
// SIG undefined FUN_14161a390(void)

longlong FUN_14161a390(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  wchar_t *_Source;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  FUN_141611fd0(param_2);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  pwVar5 = (wchar_t *)0x0;
  iVar8 = 0;
  local_38 = (wchar_t *)0x0;
  local_30 = *(int *)(puVar2 + 1);
  lVar4 = (longlong)local_30;
  _Src = (void *)*puVar2;
  pwVar6 = pwVar5;
  if (local_30 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pwVar6 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar4 * 2);
    iVar7 = local_30 + -1;
    if (local_30 != 0) goto LAB_14161a413;
  }
  iVar7 = iVar8;
LAB_14161a413:
  iVar3 = local_30;
  iVar7 = iVar7 + -1;
  lVar4 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      cVar1 = FText::IsWhitespace(pwVar6[lVar4]);
      if (cVar1 == '\0') break;
      iVar7 = iVar7 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  iVar7 = iVar7 + 1;
  if (iVar3 == 0) {
    _Source = L"";
    iVar3 = iVar8;
  }
  else {
    _Source = pwVar6;
    iVar3 = iVar3 + -1;
  }
  if ((-1 < iVar7) && (iVar8 = iVar3, iVar7 < iVar3)) {
    iVar8 = iVar7;
  }
  local_28 = (wchar_t *)0x0;
  local_1c = 0;
  iVar7 = iVar8 + 1;
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  local_20 = iVar7;
  if ((0 < iVar7) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar7 = local_20,
     pwVar5 = local_28, 0 < local_20)) {
    wcsncpy(local_28,_Source,(longlong)iVar8);
    pwVar5[iVar8] = L'\0';
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
  }
  local_2c = local_1c;
  local_38 = pwVar5;
  local_30 = iVar7;
  FUN_1415f0740(param_1,&local_38);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2 - ((*(uint *)(param_1 + 0x10) & 2) != 0)
  ;
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14161a530 UnregisterCultureNames body=494 status=ok
// SIG undefined UnregisterCultureNames(void)

void FPolyglotTextSource::UnregisterCultureNames(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  byte local_res8 [8];
  int local_res10 [2];
  byte *local_res18 [2];
  longlong *local_38;
  undefined8 local_30;
  
  plVar1 = (longlong *)(param_1 + 8);
  local_res8[0] = *param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar7 = param_1 + 0x40;
    }
    iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (ulonglong)local_res8[0]) *
                             4);
    if (iVar4 != -1) {
      do {
        pbVar6 = (byte *)((longlong)iVar4 * 0xb0 + *plVar1);
        if (*pbVar6 == local_res8[0]) {
          if ((iVar4 != -1) && (pbVar6 != (byte *)0x0)) goto LAB_14161a5e7;
          break;
        }
        iVar4 = *(int *)(pbVar6 + 0xa8);
      } while (iVar4 != -1);
    }
  }
  local_res18[0] = local_res8;
  FUN_1415e9d50(plVar1,local_res10,local_res18,0);
  pbVar6 = (byte *)((longlong)local_res10[0] * 0xb0 + *plVar1);
LAB_14161a5e7:
  pbVar2 = pbVar6 + 8;
  if (1 < *(int *)(param_2 + 0x10)) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(pbVar2,local_res10,param_2 + 8);
    if ((local_res10[0] == -1) ||
       (lVar7 = (longlong)local_res10[0] * 0x20 + *(longlong *)pbVar2, lVar7 == 0)) {
      piVar5 = (int *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                      ::Emplace<FString_const_&>(pbVar2,param_2 + 8);
    }
    else {
      piVar5 = (int *)(lVar7 + 0x10);
    }
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::Remove(pbVar2,param_2 + 8);
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  TMapBase<FString,TSharedPtr<FJsonValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,0>,0>_>
  ::GenerateKeyArray<FDefaultAllocator>(param_2 + 0x48,&local_38);
  plVar3 = local_38;
  uVar9 = (uint)local_30;
  uVar10 = (ulonglong)(int)(uint)local_30;
  AlgoImpl::
  IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            (local_38,uVar10,local_res8[0],local_res10);
  plVar1 = plVar3;
  if (plVar3 != plVar3 + uVar10 * 2) {
    pbVar6 = pbVar6 + 0x58;
    plVar8 = plVar3;
    do {
      if (1 < (int)plVar8[1]) {
        TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
        ::FindId(pbVar6,local_res10,plVar8);
        if ((local_res10[0] == -1) ||
           (lVar7 = (longlong)local_res10[0] * 0x20 + *(longlong *)pbVar6, lVar7 == 0)) {
          piVar5 = (int *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                          ::Emplace<FString_const_&>(pbVar6,plVar8);
        }
        else {
          piVar5 = (int *)(lVar7 + 0x10);
        }
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::Remove(pbVar6,plVar8);
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar3 + uVar10 * 2);
  }
  while (uVar9 != 0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    uVar9 = (int)uVar10 - 1;
    uVar10 = (ulonglong)uVar9;
    plVar1 = plVar1 + 2;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 14161a720 UnregisterStringTable body=82 status=ok
// SIG undefined UnregisterStringTable(void)

void FStringTableRegistry::UnregisterStringTable(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
  ::Remove(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014161a76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 14161a780 FUN_14161a780 body=27 status=ok
// SIG undefined FUN_14161a780(void)

void FUN_14161a780(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14161a7a0(local_18,&local_18);
  return;
}



// FUNCTION 14161a7a0 FUN_14161a7a0 body=2010 status=ok
// SIG undefined FUN_14161a7a0(void)

void FUN_14161a7a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *_Src;
  bool bVar5;
  short sVar6;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint *puVar18;
  uint *puVar19;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_1a8;
  longlong *plStack_1a0;
  uint *puStack_198;
  longlong *plStack_190;
  undefined8 uStack_188;
  int local_180;
  uint uStack_17c;
  uint *puStack_178;
  undefined4 local_170;
  uint uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  uint uStack_15c;
  uint *puStack_158;
  undefined4 local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 *local_140;
  uint *local_138;
  longlong *local_130;
  int local_128;
  uint *local_120;
  uint local_118;
  uint uStack_114;
  uint local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined1 local_f8 [8];
  int *local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  int local_d0;
  uint local_bc;
  uint local_b8;
  undefined8 local_b0;
  int iStack_a8;
  uint uStack_a4;
  uint *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int *local_60;
  undefined8 *local_58;
  short sVar7;
  
  local_140 = (undefined8 *)*param_2;
  local_d8 = local_140 + (longlong)*(int *)(param_2 + 1) * 2;
  if (local_140 != local_d8) {
    do {
      local_e0 = (longlong *)*local_140;
      uVar2 = *(uint *)(local_e0 + 5);
      puStack_198 = (uint *)(local_e0 + 2);
      local_180 = 0;
      uStack_17c = 1;
      uStack_16c = 0;
      iStack_168 = 0;
      if (uVar2 != 0) {
        puVar18 = (uint *)local_e0[4];
        if ((uint *)local_e0[4] == (uint *)0x0) {
          puVar18 = puStack_198;
        }
        uVar13 = *puVar18;
        while (uVar13 == 0) {
          lVar14 = (longlong)local_180;
          iStack_168 = iStack_168 + 0x20;
          iVar9 = local_180 + 1;
          bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_180;
          local_180 = iVar9;
          if (bVar5) goto LAB_14161a8b8;
          uVar13 = puVar18[lVar14 + 1];
        }
        uStack_17c = -uVar13 & uVar13;
        local_108 = 0x1f;
        if (uStack_17c != 0) {
          for (; uStack_17c >> local_108 == 0; local_108 = local_108 + -1) {
          }
        }
        if (uStack_17c == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_108;
        }
        uStack_16c = (iStack_168 - iVar9) + 0x1f;
        if ((int)uVar2 < (int)uStack_16c) {
LAB_14161a8b8:
          uStack_16c = uVar2;
        }
      }
      local_170 = 0xffffffff;
      uStack_114 = *(uint *)(local_e0 + 5);
      plStack_1a0 = (longlong *)CONCAT44(uStack_17c,local_180);
      plStack_190 = (longlong *)CONCAT44(uStack_16c,0xffffffff);
      uStack_188 = CONCAT44(uStack_164,iStack_168);
      local_128 = (int)uStack_114 >> 5;
      local_1a8._0_4_ = SUB84(local_e0,0);
      local_1a8._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
      local_118 = -1 << ((byte)uStack_114 & 0x1f);
      local_110 = uStack_114 & 0xffffffe0;
      local_88 = (undefined4)local_1a8;
      uStack_84 = local_1a8._4_4_;
      iStack_80 = local_180;
      uStack_7c = uStack_17c;
      if (uStack_114 != uVar2) {
        puVar18 = (uint *)local_e0[4];
        if ((uint *)local_e0[4] == (uint *)0x0) {
          puVar18 = puStack_198;
        }
        uVar13 = puVar18[local_128] & local_118;
        while (uVar13 == 0) {
          lVar14 = (longlong)local_128;
          local_110 = local_110 + 0x20;
          iVar9 = local_128 + 1;
          bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
          local_128 = iVar9;
          if (bVar5) goto LAB_14161a9a0;
          uVar13 = puVar18[lVar14 + 1];
          local_118 = 0xffffffff;
        }
        uVar13 = -uVar13 & uVar13;
        local_104 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> local_104 == 0; local_104 = local_104 + -1) {
          }
        }
        if (uVar13 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_104;
        }
        uStack_114 = (local_110 - iVar9) + 0x1f;
        if ((int)uVar2 < (int)uStack_114) {
LAB_14161a9a0:
          uStack_114 = uVar2;
        }
      }
      local_e8 = (ulonglong)uStack_114;
      local_1a8 = local_e0;
      puStack_178 = puStack_198;
      local_120 = puStack_198;
      local_78 = puStack_198;
      uStack_70 = plStack_190;
      local_68 = uStack_188;
      while( true ) {
        if (((uStack_70._4_4_ == (int)local_e8) && (local_78 == local_120)) &&
           ((longlong *)CONCAT44(uStack_84,local_88) == local_e0)) break;
        puVar15 = (undefined8 *)
                  ((longlong)uStack_70._4_4_ * 0x68 + *(longlong *)CONCAT44(uStack_84,local_88));
        if (*(int *)(puVar15 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar15;
        }
        local_res10[0] = FCrc::StrCrc32<wchar_t>(puVar11,0);
        plVar1 = puVar15 + 2;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar14 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar14 = param_1 + 0x68;
          }
          iVar9 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                    (longlong)local_res10[0]) * 4);
          if (iVar9 != -1) {
            do {
              piVar10 = (int *)((longlong)iVar9 * 0x60 + *(longlong *)(param_1 + 0x30));
              if (*piVar10 == local_res10[0]) {
                if ((iVar9 != -1) && (piVar10 != (int *)0x0)) goto LAB_14161aa9c;
                break;
              }
              iVar9 = piVar10[0x16];
            } while (iVar9 != -1);
          }
        }
        local_f0 = local_res10;
        FUN_1415ea070(param_1 + 0x30,local_res18,&local_f0,0);
        piVar10 = (int *)((longlong)local_res18[0] * 0x60 + *(longlong *)(param_1 + 0x30));
LAB_14161aa9c:
        uVar2 = *(uint *)(puVar15 + 7);
        puVar18 = (uint *)(puVar15 + 4);
        uStack_15c = 1;
        local_160 = 0;
        uStack_14c = 0;
        iStack_148 = 0;
        if (uVar2 != 0) {
          puVar19 = (uint *)puVar15[6];
          if ((uint *)puVar15[6] == (uint *)0x0) {
            puVar19 = puVar18;
          }
          uVar13 = *puVar19;
          while (uVar13 == 0) {
            lVar14 = (longlong)local_160;
            iStack_148 = iStack_148 + 0x20;
            iVar9 = local_160 + 1;
            bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_160;
            local_160 = iVar9;
            if (bVar5) goto LAB_14161ab56;
            uVar13 = puVar19[lVar14 + 1];
          }
          uStack_15c = -uVar13 & uVar13;
          local_100 = 0x1f;
          if (uStack_15c != 0) {
            for (; uStack_15c >> local_100 == 0; local_100 = local_100 + -1) {
            }
          }
          if (uStack_15c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - local_100;
          }
          uStack_14c = (iStack_148 - iVar9) + 0x1f;
          if ((int)uVar2 < (int)uStack_14c) {
LAB_14161ab56:
            uStack_14c = uVar2;
          }
        }
        local_150 = 0xffffffff;
        local_bc = *(uint *)(puVar15 + 7);
        plStack_1a0 = (longlong *)CONCAT44(uStack_15c,local_160);
        plStack_190 = (longlong *)CONCAT44(uStack_14c,0xffffffff);
        uStack_188 = CONCAT44(uStack_144,iStack_148);
        local_d0 = (int)local_bc >> 5;
        local_b8 = local_bc & 0xffffffe0;
        iStack_a8 = local_160;
        uStack_a4 = uStack_15c;
        local_1a8 = plVar1;
        puStack_198 = puVar18;
        puStack_158 = puVar18;
        local_a0 = puVar18;
        uStack_98 = plStack_190;
        local_90 = uStack_188;
        local_b0 = plVar1;
        if (local_bc != uVar2) {
          puVar19 = (uint *)puVar15[6];
          if ((uint *)puVar15[6] == (uint *)0x0) {
            puVar19 = puVar18;
          }
          uVar13 = puVar19[local_d0] & -1 << ((byte)local_bc & 0x1f);
          while (uVar13 == 0) {
            lVar14 = (longlong)local_d0;
            local_b8 = local_b8 + 0x20;
            iVar9 = local_d0 + 1;
            bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d0;
            local_d0 = iVar9;
            if (bVar5) goto LAB_14161ac39;
            uVar13 = puVar19[lVar14 + 1];
          }
          uVar13 = -uVar13 & uVar13;
          local_fc = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> local_fc == 0; local_fc = local_fc + -1) {
            }
          }
          if (uVar13 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - local_fc;
          }
          local_bc = (local_b8 - iVar9) + 0x1f;
          if ((int)uVar2 < (int)local_bc) {
LAB_14161ac39:
            local_bc = uVar2;
          }
        }
        while( true ) {
          plVar17 = (longlong *)0x0;
          if (((uStack_98._4_4_ == local_bc) && (local_a0 == puVar18)) && (local_b0 == plVar1))
          break;
          puVar15 = (undefined8 *)(*local_b0 + (longlong)(int)uStack_98._4_4_ * 0x28);
          if (*(int *)(*local_b0 + 8 + (longlong)(int)uStack_98._4_4_ * 0x28) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar15;
          }
          local_res20[0] = FCrc::StrCrc32<wchar_t>(puVar11,0);
          puVar15 = (undefined8 *)puVar15[2];
          if (piVar10[4] != piVar10[0xf]) {
            piVar8 = *(int **)(piVar10 + 0x12);
            if (*(int **)(piVar10 + 0x12) == (int *)0x0) {
              piVar8 = piVar10 + 0x10;
            }
            iVar9 = piVar8[(longlong)piVar10[0x14] - 1U & (longlong)local_res20[0]];
            if (iVar9 != -1) {
              do {
                plVar12 = (longlong *)((longlong)iVar9 * 0x38 + *(longlong *)(piVar10 + 2));
                if ((int)*plVar12 == local_res20[0]) {
                  if (iVar9 != -1) goto LAB_14161acf1;
                  break;
                }
                iVar9 = (int)plVar12[6];
              } while (iVar9 != -1);
            }
          }
          plVar12 = plVar17;
LAB_14161acf1:
          plVar16 = plVar12 + 1;
          if (plVar12 == (longlong *)0x0) {
            plVar16 = plVar17;
          }
          if (plVar16 == (longlong *)0x0) {
            plVar12 = (longlong *)operator_new(0x20);
            if (plVar12 != (longlong *)0x0) {
              *(int *)(plVar12 + 1) = 1;
              *(int *)((longlong)plVar12 + 0xc) = 1;
              *plVar12 = (longlong)&PTR_FUN_144cb51c0;
              FString::FString(plVar12 + 2,puVar15 + 3);
              plVar17 = plVar12;
            }
            local_138 = (uint *)(plVar17 + 2);
            local_130 = plVar17;
            SharedPointerInternals::EnableSharedFromThis(&local_138,local_138,local_138);
            plVar17 = local_130;
            local_1a8 = (longlong *)*puVar15;
            uVar3 = *(undefined4 *)(puVar15 + 2);
            plStack_1a0 = (longlong *)puVar15[1];
            if (plStack_1a0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
              UNLOCK();
            }
            puStack_198 = local_138;
            plStack_190 = local_130;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_130 + 1) = (int)local_130[1] + 1;
              UNLOCK();
            }
            uStack_188 = CONCAT71(uStack_188._1_7_,1);
            uStack_188 = CONCAT44(uVar3,(undefined4)uStack_188);
            if (local_130 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_130 + 1;
              lVar14 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_130)(local_130);
                LOCK();
                piVar8 = (int *)((longlong)plVar17 + 0xc);
                iVar9 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
            }
            local_60 = local_res20;
            local_58 = &local_1a8;
            FUN_1415eafe0(piVar10 + 2,local_f8,&local_60);
            plVar17 = plStack_190;
            if (plStack_190 != (longlong *)0x0) {
              LOCK();
              plVar12 = plStack_190 + 1;
              lVar14 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plStack_190)(plStack_190);
                LOCK();
                piVar8 = (int *)((longlong)plVar17 + 0xc);
                iVar9 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
            }
            plVar17 = plStack_1a0;
            if (plStack_1a0 != (longlong *)0x0) {
              LOCK();
              plVar12 = plStack_1a0 + 1;
              lVar14 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plStack_1a0)(plStack_1a0);
                LOCK();
                piVar8 = (int *)((longlong)plVar17 + 0xc);
                iVar9 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
            }
          }
          else {
            puVar4 = (undefined8 *)plVar16[2];
            if (puVar4 != puVar15 + 3) {
              iVar9 = *(int *)(puVar15 + 4);
              _Src = (void *)puVar15[3];
              *(int *)(puVar4 + 1) = iVar9;
              if ((iVar9 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
                *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar9);
                _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar9 * 2);
              }
            }
          }
          uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(uint)uStack_98 & ~uStack_a4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
        }
        uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
      }
      local_140 = local_140 + 2;
    } while (local_140 != local_d8);
  }
  sVar7 = *(short *)(param_1 + 0xd0);
  do {
    sVar6 = sVar7 + 1;
    sVar7 = 0;
  } while (sVar6 == 0);
  *(short *)(param_1 + 0xd0) = sVar6;
  TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x80,0);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xd8);
  return;
}



// FUNCTION 14161af80 FUN_14161af80 body=1736 status=ok
// SIG undefined FUN_14161af80(void)

void FUN_14161af80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  undefined2 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int local_res18 [2];
  int local_res20 [2];
  int local_198 [2];
  undefined8 local_190;
  longlong *plStack_188;
  uint *puStack_180;
  longlong *plStack_178;
  ulonglong uStack_170;
  int local_168;
  uint uStack_164;
  uint *puStack_160;
  undefined4 local_158;
  uint uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  uint *local_128;
  longlong *local_120;
  int local_118;
  uint local_108;
  uint uStack_104;
  uint local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [8];
  int *local_e0;
  ulonglong local_d8;
  uint *local_d0;
  int local_c8;
  uint local_b4;
  uint local_b0;
  undefined8 local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  int *local_58;
  undefined8 *local_50;
  
  uVar3 = *(uint *)(param_2 + 5);
  puStack_180 = (uint *)(param_2 + 2);
  uStack_164 = 1;
  local_168 = 0;
  uStack_154 = 0;
  iStack_150 = 0;
  if (uVar3 != 0) {
    puVar16 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar16 = puStack_180;
    }
    uVar12 = *puVar16;
    iStack_150 = 0;
    local_168 = 0;
    while (uVar12 == 0) {
      lVar8 = (longlong)local_168;
      iStack_150 = iStack_150 + 0x20;
      iVar14 = local_168 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_168;
      local_168 = iVar14;
      if (bVar5) goto LAB_14161b069;
      uVar12 = puVar16[lVar8 + 1];
    }
    uStack_164 = -uVar12 & uVar12;
    local_f8 = 0x1f;
    if (uStack_164 != 0) {
      for (; uStack_164 >> local_f8 == 0; local_f8 = local_f8 + -1) {
      }
    }
    if (uStack_164 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - local_f8;
    }
    uStack_154 = (iStack_150 - iVar14) + 0x1f;
    if ((int)uVar3 < (int)uStack_154) {
LAB_14161b069:
      uStack_154 = uVar3;
    }
  }
  local_158 = 0xffffffff;
  uStack_104 = *(uint *)(param_2 + 5);
  plStack_188 = (longlong *)CONCAT44(uStack_164,local_168);
  plStack_178 = (longlong *)CONCAT44(uStack_154,0xffffffff);
  uStack_170 = CONCAT44(uStack_14c,iStack_150);
  local_118 = (int)uStack_104 >> 5;
  local_190._0_4_ = SUB84(param_2,0);
  local_190._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_108 = -1 << ((byte)uStack_104 & 0x1f);
  local_100 = uStack_104 & 0xffffffe0;
  local_80 = (undefined4)local_190;
  uStack_7c = local_190._4_4_;
  iStack_78 = local_168;
  uStack_74 = uStack_164;
  if (uStack_104 != uVar3) {
    puVar16 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar16 = puStack_180;
    }
    uVar12 = puVar16[local_118] & local_108;
    while (uVar12 == 0) {
      lVar8 = (longlong)local_118;
      local_100 = local_100 + 0x20;
      iVar14 = local_118 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_118;
      local_118 = iVar14;
      if (bVar5) goto LAB_14161b150;
      uVar12 = puVar16[lVar8 + 1];
      local_108 = 0xffffffff;
    }
    uVar12 = -uVar12 & uVar12;
    local_f4 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> local_f4 == 0; local_f4 = local_f4 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - local_f4;
    }
    uStack_104 = (local_100 - iVar14) + 0x1f;
    if ((int)uVar3 < (int)uStack_104) {
LAB_14161b150:
      uStack_104 = uVar3;
    }
  }
  local_d8 = (ulonglong)uStack_104;
  local_190 = param_2;
  puStack_160 = puStack_180;
  local_d0 = puStack_180;
  local_70 = puStack_180;
  uStack_68 = plStack_178;
  local_60 = uStack_170;
  do {
    if (((uStack_68._4_4_ == (int)local_d8) && (local_70 == local_d0)) &&
       ((longlong *)CONCAT44(uStack_7c,local_80) == param_2)) {
      return;
    }
    puVar13 = (undefined8 *)
              ((longlong)uStack_68._4_4_ * 0x68 + *(longlong *)CONCAT44(uStack_7c,local_80));
    if (*(int *)(puVar13 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar13;
    }
    local_res18[0] = FCrc::StrCrc32<wchar_t>(puVar10,0);
    plVar1 = puVar13 + 2;
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
      lVar8 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar8 = param_1 + 0x68;
      }
      iVar14 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)local_res18[0])
                                * 4);
      if (iVar14 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar14 * 0x60 + *(longlong *)(param_1 + 0x30));
          if (*piVar9 == local_res18[0]) {
            if ((iVar14 != -1) && (piVar9 != (int *)0x0)) goto LAB_14161b23c;
            break;
          }
          iVar14 = piVar9[0x16];
        } while (iVar14 != -1);
      }
    }
    local_e0 = local_res18;
    FUN_1415ea070(param_1 + 0x30,local_res20,&local_e0,0);
    piVar9 = (int *)((longlong)local_res20[0] * 0x60 + *(longlong *)(param_1 + 0x30));
LAB_14161b23c:
    uVar3 = *(uint *)(puVar13 + 7);
    puVar16 = (uint *)(puVar13 + 4);
    uStack_144 = 1;
    local_148 = 0;
    uStack_134 = 0;
    iStack_130 = 0;
    if (uVar3 != 0) {
      puVar15 = (uint *)puVar13[6];
      if ((uint *)puVar13[6] == (uint *)0x0) {
        puVar15 = puVar16;
      }
      uVar12 = *puVar15;
      iStack_130 = 0;
      local_148 = 0;
      while (uVar12 == 0) {
        lVar8 = (longlong)local_148;
        iStack_130 = iStack_130 + 0x20;
        iVar14 = local_148 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
        local_148 = iVar14;
        if (bVar5) goto LAB_14161b2f4;
        uVar12 = puVar15[lVar8 + 1];
      }
      uStack_144 = -uVar12 & uVar12;
      local_f0 = 0x1f;
      if (uStack_144 != 0) {
        for (; uStack_144 >> local_f0 == 0; local_f0 = local_f0 + -1) {
        }
      }
      if (uStack_144 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - local_f0;
      }
      uStack_134 = (iStack_130 - iVar14) + 0x1f;
      if ((int)uVar3 < (int)uStack_134) {
LAB_14161b2f4:
        uStack_134 = uVar3;
      }
    }
    local_138 = 0xffffffff;
    local_b4 = *(uint *)(puVar13 + 7);
    plStack_188 = (longlong *)CONCAT44(uStack_144,local_148);
    plStack_178 = (longlong *)CONCAT44(uStack_134,0xffffffff);
    uStack_170 = CONCAT44(uStack_12c,iStack_130);
    local_c8 = (int)local_b4 >> 5;
    local_b0 = local_b4 & 0xffffffe0;
    iStack_a0 = local_148;
    uStack_9c = uStack_144;
    local_190 = plVar1;
    puStack_180 = puVar16;
    puStack_140 = puVar16;
    local_98 = puVar16;
    uStack_90 = plStack_178;
    local_88 = uStack_170;
    local_a8 = plVar1;
    if (local_b4 != uVar3) {
      puVar15 = (uint *)puVar13[6];
      if ((uint *)puVar13[6] == (uint *)0x0) {
        puVar15 = puVar16;
      }
      uVar12 = puVar15[local_c8] & -1 << ((byte)local_b4 & 0x1f);
      while (uVar12 == 0) {
        lVar8 = (longlong)local_c8;
        local_b0 = local_b0 + 0x20;
        iVar14 = local_c8 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
        local_c8 = iVar14;
        if (bVar5) goto LAB_14161b3cc;
        uVar12 = puVar15[lVar8 + 1];
      }
      uVar12 = -uVar12 & uVar12;
      local_ec = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> local_ec == 0; local_ec = local_ec + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - local_ec;
      }
      local_b4 = (local_b0 - iVar14) + 0x1f;
      if ((int)uVar3 < (int)local_b4) {
LAB_14161b3cc:
        local_b4 = uVar3;
      }
    }
    while( true ) {
      if (((uStack_90._4_4_ == local_b4) && (local_98 == puVar16)) && (local_a8 == plVar1)) break;
      puVar13 = (undefined8 *)(*local_a8 + (longlong)(int)uStack_90._4_4_ * 0x28);
      if (*(int *)(*local_a8 + 8 + (longlong)(int)uStack_90._4_4_ * 0x28) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      local_198[0] = FCrc::StrCrc32<wchar_t>(puVar10,0);
      lVar8 = puVar13[2];
      if (piVar9[4] != piVar9[0xf]) {
        piVar11 = *(int **)(piVar9 + 0x12);
        if (*(int **)(piVar9 + 0x12) == (int *)0x0) {
          piVar11 = piVar9 + 0x10;
        }
        iVar14 = piVar11[(longlong)piVar9[0x14] - 1U & (longlong)local_198[0]];
        if (iVar14 != -1) {
          do {
            piVar11 = (int *)((longlong)iVar14 * 0x38 + *(longlong *)(piVar9 + 2));
            if (*piVar11 == local_198[0]) {
              if (iVar14 != -1) goto LAB_14161b482;
              break;
            }
            iVar14 = piVar11[0xc];
          } while (iVar14 != -1);
        }
      }
      piVar11 = (int *)0x0;
LAB_14161b482:
      piVar6 = piVar11 + 2;
      if (piVar11 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      if (piVar6 == (int *)0x0) {
        plVar7 = (longlong *)operator_new(0x20);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar7 + 1) = 1;
          *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
          *plVar7 = (longlong)&PTR_FUN_144cb51c0;
          FString::FString(plVar7 + 2,lVar8 + 0x18);
        }
        local_128 = (uint *)(plVar7 + 2);
        local_120 = plVar7;
        SharedPointerInternals::EnableSharedFromThis(&local_128,local_128,local_128);
        plVar7 = local_120;
        uVar4 = *(undefined4 *)(lVar8 + 0x10);
        puStack_180 = local_128;
        plStack_178 = local_120;
        local_190 = (longlong *)0x0;
        plStack_188 = (longlong *)0x0;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_120 + 1) = (int)local_120[1] + 1;
          UNLOCK();
        }
        uStack_170 = CONCAT44(uVar4,(int)uStack_170) & 0xffffffffffffff00;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_120 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar11 = (int *)((longlong)plVar7 + 0xc);
            iVar14 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        local_58 = local_198;
        local_50 = &local_190;
        FUN_1415eafe0(piVar9 + 2,local_e8,&local_58);
        plVar7 = plStack_178;
        if (plStack_178 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_178 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_178)(plStack_178);
            LOCK();
            piVar11 = (int *)((longlong)plVar7 + 0xc);
            iVar14 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar7 = plStack_188;
        if (plStack_188 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_188 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_188)(plStack_188);
            LOCK();
            piVar11 = (int *)((longlong)plVar7 + 0xc);
            iVar14 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
      uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    }
    uStack_68 = (longlong *)CONCAT44(uStack_68._4_4_,(uint)uStack_68 & ~uStack_74);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
  } while( true );
}



// FUNCTION 14161b650 Visit body=422 status=ok
// SIG undefined Visit(void)

undefined8
`TextLocalizationResourceUtil::GetLocalizedCultureNames'::`6'::FCultureEnumeratorVistor::Visit
          (longlong param_1,short *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong local_38;
  ulonglong local_30;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  if (param_3 != '\0') {
    local_30 = 0;
    local_38 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (param_2[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_30 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar5 * 2);
    }
    FPaths::GetCleanFilename(local_18,&local_38);
    if (local_38 != 0) {
      FMemory::Free();
    }
    FGenericPlatformString::Memcpy(&local_28,local_18);
    plVar1 = *(longlong **)(param_1 + 8);
    puVar8 = (undefined8 *)*plVar1;
    lVar6 = plVar1[1];
    for (puVar7 = puVar8; puVar7 != puVar8 + (longlong)(int)lVar6 * 2; puVar7 = puVar7 + 2) {
      puVar4 = &DAT_143f3eda8;
      if (local_20 != 0) {
        puVar4 = local_28;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*puVar7;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (iVar2 == 0) {
        if ((int)((longlong)puVar7 - (longlong)puVar8 >> 4) != -1) goto LAB_14161b7bc;
        break;
      }
    }
    iVar2 = (int)plVar1[1];
    *(int *)(plVar1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar1 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = local_28;
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar8 = 0;
    *(int *)(puVar8 + 1) = local_20;
    if (local_20 == 0) {
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,local_20,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar8,puVar4,(longlong)local_20 * 2);
    }
LAB_14161b7bc:
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 14161b800 FUN_14161b800 body=1919 status=ok
// SIG undefined FUN_14161b800(void)

undefined8 FUN_14161b800(longlong *param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined2 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  void *pvVar15;
  undefined8 local_res10;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  puVar10 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  plVar11 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
  iVar7 = (**(code **)(*plVar11 + 8))();
  if (iVar7 == 0xb) {
    local_res10 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    uVar12 = FUN_141607d00();
    plVar11 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
    iVar7 = (**(code **)(*plVar11 + 8))();
    if (iVar7 == 0xb) {
      (**(code **)(*(longlong *)*param_2 + 0x38))();
      puVar10 = (undefined8 *)
                (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,local_98);
      local_c8 = *puVar10;
      local_c0 = (longlong *)puVar10[1];
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
        UNLOCK();
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_90 + 1;
        lVar13 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      cVar6 = FStringTableRegistry::FindTableIdAndKey(uVar12,&local_c8,&local_res10,&local_d8);
      if (cVar6 == '\0') {
        plVar11 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
        iVar7 = (**(code **)(*plVar11 + 8))(plVar11);
        if (iVar7 == 0xb) {
          lVar13 = (**(code **)(*(longlong *)*param_2 + 0x28))();
          local_res10 = *(undefined8 *)(lVar13 + 0x10);
          if (&local_d8 != (void **)(lVar13 + 0x18)) {
            iVar7 = *(int *)(lVar13 + 0x20);
            pvVar15 = *(void **)(lVar13 + 0x18);
            local_d0 = CONCAT44(local_d0._4_4_,iVar7);
            if ((iVar7 == 0) && (local_d0._4_4_ == 0)) {
              local_d0 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar7);
              _guard_xfg_dispatch_icall_nop(local_d8,pvVar15,(longlong)iVar7 * 2);
            }
          }
        }
      }
      plVar11 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_c0 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_c0)();
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
    iVar7 = (int)param_1[1];
    iVar8 = (0xb - (uint)(iVar7 != 0)) + iVar7;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    lVar14 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
    lVar13 = *param_1;
    puVar3 = (undefined4 *)(lVar13 + lVar14 * 2);
    *puVar3 = 0x4f004c;
    puVar3[1] = 0x540043;
    puVar3[2] = 0x420041;
    puVar3[3] = 0x45004c;
    lVar13 = lVar13 + lVar14 * 2;
    *(undefined4 *)(lVar13 + 0x10) = 0x220028;
    *(undefined2 *)(lVar13 + 0x14) = 0;
    uVar12 = FName::ToString(&local_res10,local_78);
    puVar10 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar12,local_88,0);
    pvVar15 = (void *)*puVar10;
    iVar7 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar7 = 0;
    }
    if (iVar7 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar7;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar4 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar4,pvVar15,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar4) = 0;
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    iVar7 = (int)param_1[1];
    iVar8 = (5 - (uint)(iVar7 != 0)) + iVar7;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    lVar14 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
    lVar13 = *param_1;
    *(undefined8 *)(lVar13 + lVar14 * 2) = 0x220020002c0022;
    *(undefined2 *)(lVar13 + 8 + lVar14 * 2) = 0;
    puVar10 = (undefined8 *)FString::ReplaceCharWithEscapedChar(&local_d8,local_68,0);
    pvVar15 = (void *)*puVar10;
    iVar7 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar7 = 0;
    }
    if (iVar7 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar7;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar4 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar4,pvVar15,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar4) = 0;
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    iVar7 = (int)param_1[1];
    iVar8 = (3 - (uint)(iVar7 != 0)) + iVar7;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    puVar3 = (undefined4 *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    *puVar3 = 0x290022;
    *(undefined2 *)(puVar3 + 1) = 0;
    pvVar15 = local_d8;
  }
  else {
    if ((*(uint *)(param_2 + 2) >> 1 & 1) != 0) {
      iVar7 = (int)param_1[1];
      iVar8 = (10 - (uint)(iVar7 != 0)) + iVar7;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      lVar14 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
      lVar13 = *param_1;
      puVar3 = (undefined4 *)(lVar13 + lVar14 * 2);
      *puVar3 = 0x4e0049;
      puVar3[1] = 0x540056;
      puVar3[2] = 0x580045;
      puVar3[3] = 0x280054;
      lVar13 = lVar13 + lVar14 * 2;
      *(undefined2 *)(lVar13 + 0x10) = 0x22;
      *(undefined2 *)(lVar13 + 0x12) = 0;
      puVar10 = (undefined8 *)FString::ReplaceCharWithEscapedChar(puVar10,local_58,0);
      pvVar15 = (void *)*puVar10;
      iVar7 = *(int *)(puVar10 + 1) + -1;
      if (*(int *)(puVar10 + 1) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        iVar8 = (int)param_1[1];
        iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar7;
        *(int *)(param_1 + 1) = iVar9;
        if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
        }
        pvVar4 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar4,pvVar15,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar4) = 0;
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      iVar7 = (int)param_1[1];
      iVar8 = (3 - (uint)(iVar7 != 0)) + iVar7;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      puVar3 = (undefined4 *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      *puVar3 = 0x290022;
      *(undefined2 *)(puVar3 + 1) = 0;
      return 1;
    }
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    plVar11 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
    lVar13 = (**(code **)(*plVar11 + 0x38))(plVar11);
    if (((lVar13 != 0) || (lVar13 = (**(code **)(*(longlong *)*param_2 + 0x10))(), lVar13 != 0)) &&
       (cVar6 = FText::ShouldGatherForLocalization(), cVar6 != '\0')) {
      (**(code **)(*(longlong *)*param_2 + 0x38))();
      lVar13 = (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,local_48);
      plVar11 = *(longlong **)(lVar13 + 8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_40)();
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      FUN_141607f00();
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar11)();
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    }
    if (param_3 == '\0') {
      pvVar15 = (void *)*puVar10;
      iVar7 = *(int *)(puVar10 + 1) + -1;
      if (*(int *)(puVar10 + 1) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        iVar8 = (int)param_1[1];
        iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar7;
        *(int *)(param_1 + 1) = iVar9;
        if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
        }
        pvVar4 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar4,pvVar15,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar4 + (longlong)iVar7 * 2) = 0;
      }
    }
    else {
      iVar7 = (int)param_1[1];
      iVar8 = (2 - (uint)(iVar7 != 0)) + iVar7;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      puVar5 = (undefined2 *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      *puVar5 = 0x22;
      puVar5[1] = 0;
      puVar10 = (undefined8 *)FString::ReplaceCharWithEscapedChar(puVar10,local_38,0);
      pvVar15 = (void *)*puVar10;
      iVar7 = *(int *)(puVar10 + 1) + -1;
      if (*(int *)(puVar10 + 1) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        iVar8 = (int)param_1[1];
        iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar7;
        *(int *)(param_1 + 1) = iVar9;
        if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
        }
        pvVar4 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar4,pvVar15,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar4 + (longlong)iVar7 * 2) = 0;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      iVar7 = (int)param_1[1];
      iVar8 = (2 - (uint)(iVar7 != 0)) + iVar7;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      puVar5 = (undefined2 *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      *puVar5 = 0x22;
      puVar5[1] = 0;
    }
    pvVar15 = local_a8;
    if (local_b8 != 0) {
      FMemory::Free();
      pvVar15 = local_a8;
    }
  }
  if (pvVar15 != (void *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14161bf80 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FColorList::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  FExec::~FExec(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14161bff0 FUN_14161bff0 body=212 status=ok
// SIG undefined FUN_14161bff0(void)

undefined8 * FUN_14161bff0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong *plVar8;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar6;
  uVar6 = puVar1[3];
  param_2[2] = puVar1[2];
  param_2[3] = uVar6;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar4 = *(undefined4 *)(puVar1 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 5) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0;
  if (puVar2[6] == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 8,puVar2 + 2,0x20);
  }
  if (param_2[0xc] != 0) {
    FMemory::Free();
  }
  param_2[0xc] = puVar2[6];
  puVar2[6] = 0;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(puVar2 + 8) = 0;
  if (*(int *)(param_2 + 0xe) != 0) {
    plVar8 = (longlong *)param_2[0xc];
    if ((longlong *)param_2[0xc] == (longlong *)0x0) {
      plVar8 = param_2 + 8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
      pcVar7 = (code *)*puVar2;
      goto LAB_14161c09f;
    }
  }
  pcVar7 = FUN_141622650;
LAB_14161c09f:
  param_2[6] = pcVar7;
  *puVar2 = FUN_141622650;
  return param_2;
}



// FUNCTION 14161c0d0 Cast<TextFormatTokens::FArgumentModifierTokenSpecifier> body=67 status=ok
// SIG undefined Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

int * FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_14162c970();
  if (((piVar1[3] == param_1[3] && piVar1[2] == param_1[2]) && piVar1[1] == param_1[1]) &&
      *piVar1 == *param_1) {
    return param_1 + 6;
  }
  return (int *)0x0;
}



// FUNCTION 14161c120 Cast<TextFormatTokens::FArgumentModifierTokenSpecifier> body=67 status=ok
// SIG undefined Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

int * FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_14162ca70();
  if (((piVar1[3] == param_1[3] && piVar1[2] == param_1[2]) && piVar1[1] == param_1[1]) &&
      *piVar1 == *param_1) {
    return param_1 + 6;
  }
  return (int *)0x0;
}



// FUNCTION 14161c170 Cast<TextFormatTokens::FArgumentModifierTokenSpecifier> body=67 status=ok
// SIG undefined Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

int * FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_14162cb70();
  if (((piVar1[3] == param_1[3] && piVar1[2] == param_1[2]) && piVar1[1] == param_1[1]) &&
      *piVar1 == *param_1) {
    return param_1 + 6;
  }
  return (int *)0x0;
}



// FUNCTION 14161c1c0 Cast<TextFormatTokens::FArgumentModifierTokenSpecifier> body=67 status=ok
// SIG undefined Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

int * FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_14162cef0();
  if (((piVar1[3] == param_1[3] && piVar1[2] == param_1[2]) && piVar1[1] == param_1[1]) &&
      *piVar1 == *param_1) {
    return param_1 + 6;
  }
  return (int *)0x0;
}



// FUNCTION 14161c210 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb6a3c,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162c9f0();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2410;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c2c0 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb7be0,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162ca70();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc23f0;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c370 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb6a04,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162caf0();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2390;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c420 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb7bd0,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162cb70();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2370;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c4d0 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb6a54,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162cbf0();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2470;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c580 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb69f4,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162cc70();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2350;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c630 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb76b4,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162ccf0();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2330;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c6e0 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb6a7c,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162cd70();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc24b0;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c790 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,L"sqrt",0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162cdf0();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2490;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c840 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb6a1c,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162ce70();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc23d0;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c8f0 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb7bd8,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162cef0();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc23b0;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161c9a0 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb6864,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162cf70();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2450;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161ca50 ConsumeSymbol<ExpressionParser::FSquareRoot> body=161 status=ok
// SIG undefined ConsumeSymbol<ExpressionParser::FSquareRoot>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FTokenStream::ParseToken(param_2 + 0x10,local_78,&DAT_144cb6804,0);
  if (local_60 != '\0') {
    puVar1 = (undefined4 *)FUN_14162cff0();
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = &PTR_FUN_144cc2430;
    FExpressionTokenConsumer::Add(param_2,local_78,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14161cb00 FUN_14161cb00 body=768 status=ok
// SIG undefined FUN_14161cb00(void)

int * FUN_14161cb00(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *_Src;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  char cVar17;
  bool bVar18;
  
  iVar13 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  lVar5 = *param_1;
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  bVar18 = false;
  puVar2 = (undefined4 *)(lVar5 + (longlong)iVar14 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  _Src = (int *)(lVar5 + (longlong)iVar14 * 0x18);
  _Src[4] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar14 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar10 = FCrc::MemCrc_DEPRECATED(_Src,0x10,0);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar10) * 4)
      ;
      if (iVar10 != -1) {
        do {
          piVar3 = (int *)(*param_1 + (longlong)iVar10 * 0x18);
          iVar14 = iVar10;
          if (((piVar3[1] == _Src[1] && *(int *)(*param_1 + 8 + (longlong)iVar10 * 0x18) == _Src[2])
              && piVar3[3] == _Src[3]) && *_Src == *piVar3) break;
          iVar10 = piVar3[4];
          iVar14 = iVar15;
        } while (iVar10 != -1);
      }
    }
    bVar18 = iVar14 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar14 * 0x18),_Src,0x10);
      iVar13 = *param_2;
      bVar6 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar13;
      }
      lVar5 = *param_1;
      *(undefined4 *)(lVar5 + (longlong)iVar13 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar5 + 4 + (longlong)iVar13 * 0x18) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_14161cdd3;
    }
  }
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar16) {
    uVar11 = (uVar16 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar13 = 0x20;
    cVar17 = '\0';
    if (uVar11 != 0) {
      iVar13 = 0x1f - iVar15;
    }
    uVar11 = (uVar16 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar11 != 0) {
      cVar17 = '\x1f' - (char)iVar15;
    }
    iVar13 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar17 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    iVar15 = *param_2;
    uVar16 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar16 = (int)param_1[9] - 1U & uVar16;
    _Src[5] = uVar16;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    _Src[4] = *(int *)((longlong)plVar12 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_14161cdd3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 14161ce00 FUN_14161ce00 body=782 status=ok
// SIG undefined FUN_14161ce00(void)

int * FUN_14161ce00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  int *_Src;
  bool bVar15;
  
  iVar8 = 1;
  iVar12 = -1;
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
    iVar2 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  piVar9 = (int *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  bVar15 = false;
  _Src = (int *)((longlong)iVar11 * 0x20 + *param_1);
  iVar11 = piVar9[1];
  iVar5 = piVar9[2];
  iVar2 = piVar9[3];
  *_Src = *piVar9;
  _Src[1] = iVar11;
  _Src[2] = iVar5;
  _Src[3] = iVar2;
  *(undefined8 *)(_Src + 4) = *puVar3;
  _Src[6] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar12;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FCrc::MemCrc_DEPRECATED(_Src,0x10,0);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar5 * 0x20 + *param_1);
          iVar11 = iVar5;
          if (((piVar9[1] == _Src[1] && piVar9[2] == _Src[2]) && piVar9[3] == _Src[3]) &&
              *_Src == *piVar9) break;
          iVar5 = piVar9[6];
          iVar11 = iVar12;
        } while (iVar5 != -1);
      }
    }
    bVar15 = iVar11 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 0x20 + *param_1),_Src,0x18);
      iVar8 = *param_2;
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar10 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar10[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14161d0e1;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar14 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar12;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar14 = '\x1f' - (char)iVar12;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    uVar13 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    _Src[7] = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[6] = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14161d0e1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14161d110 FUN_14161d110 body=782 status=ok
// SIG undefined FUN_14161d110(void)

int * FUN_14161d110(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int *_Src;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  bool bVar15;
  
  iVar10 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  uVar5 = ((undefined8 *)*param_3)[1];
  _Src = (int *)(*param_1 + (longlong)iVar12 * 0x28);
  piVar2 = (int *)param_3[1];
  bVar15 = false;
  *(undefined8 *)_Src = *(undefined8 *)*param_3;
  *(undefined8 *)(_Src + 2) = uVar5;
  iVar12 = piVar2[1];
  iVar7 = piVar2[2];
  iVar6 = piVar2[3];
  _Src[4] = *piVar2;
  _Src[5] = iVar12;
  _Src[6] = iVar7;
  _Src[7] = iVar6;
  _Src[8] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = iVar13;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar7 = FCrc::MemCrc_DEPRECATED(_Src,0x10,0);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
      if (iVar7 != -1) {
        do {
          piVar2 = (int *)(*param_1 + (longlong)iVar7 * 0x28);
          iVar12 = iVar7;
          if (((piVar2[1] == _Src[1] && *(int *)(*param_1 + 8 + (longlong)iVar7 * 0x28) == _Src[2])
              && piVar2[3] == _Src[3]) && *_Src == *piVar2) break;
          iVar7 = piVar2[8];
          iVar12 = iVar13;
        } while (iVar7 != -1);
      }
    }
    bVar15 = iVar12 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar12 * 0x28),_Src,0x20);
      iVar10 = *param_2;
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar10;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + (longlong)iVar10 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar3 + 4 + (longlong)iVar10 * 0x28) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14161d3f1;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar8 = (uVar11 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar14 = '\0';
    if (uVar8 != 0) {
      iVar10 = 0x1f - iVar13;
    }
    uVar8 = (uVar11 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar13 = *param_2;
    uVar11 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar11 = (int)param_1[9] - 1U & uVar11;
    _Src[9] = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[8] = *(int *)((longlong)plVar9 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14161d3f1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14161d420 FUN_14161d420 body=807 status=ok
// SIG undefined FUN_14161d420(void)

int * FUN_14161d420(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  void *_Dst;
  uint uVar13;
  int iVar14;
  void *_Src;
  bool bVar15;
  
  iVar10 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x90);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x90) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (void *)((longlong)iVar11 * 0x90 + *param_1);
  FUN_14161bff0(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x80) = 0xffffffff;
  bVar15 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar6 = GetTypeHash(_Src);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar3 = *param_1;
        do {
          lVar12 = (longlong)iVar6 * 0x90 + lVar3;
          cVar5 = operator==(lVar12,_Src);
          iVar11 = iVar6;
          if (cVar5 != '\0') break;
          iVar6 = *(int *)(lVar12 + 0x80);
          iVar11 = iVar14;
        } while (iVar6 != -1);
      }
    }
    bVar15 = iVar11 != -1;
    if (bVar15) {
      _Dst = (void *)((longlong)iVar11 * 0x90 + *param_1);
      if (*(int *)((longlong)_Dst + 0x70) != 0) {
        plVar9 = *(longlong **)((longlong)_Dst + 0x60);
        if (*(longlong **)((longlong)_Dst + 0x60) == (longlong *)0x0) {
          plVar9 = (longlong *)((longlong)_Dst + 0x40);
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (*(longlong *)((longlong)_Dst + 0x60) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x80);
      iVar10 = *param_2;
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x90) = iVar10;
      }
      puVar8 = (undefined4 *)((longlong)iVar10 * 0x90 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar8[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14161d722;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar7 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar5 = '\0';
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar14;
    }
    uVar7 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar5 = '\x1f' - (char)iVar14;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar14 = *param_2;
    uVar13 = GetTypeHash(_Src);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    *(uint *)((longlong)_Src + 0x84) = uVar13;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x80) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_141634e80(param_1);
  }
LAB_14161d722:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14161d750 Emplace<TPairInitializer<FName_const_&,unsigned_char_&&>_> body=421 status=ok
// SIG undefined Emplace<TPairInitializer<FName_const_&,unsigned_char_&&>_>(void)

int * TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,unsigned_char_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar8 = false;
  puVar1 = (undefined1 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = lVar2;
  *(undefined1 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
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
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x18) == lVar2) goto LAB_14161d81e;
          iVar5 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14161d81e:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar5;
      goto LAB_14161d8cd;
    }
  }
  cVar3 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_14161d8cd:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14161d900 HeapSortInternal<`anonymous_namespace'::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<`anonymous_namespace'::FLogCategoryPtrs>_>_> body=623 status=ok
// SIG undefined HeapSortInternal<`anonymous_namespace'::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<`anonymous_namespace'::FLogCategoryPtrs>_>_>(void)

void AlgoImpl::
     HeapSortInternal<_anonymous_namespace_::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<_anonymous_namespace_::FLogCategoryPtrs>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar12 = iVar10 * 2 + 1;
    iVar4 = iVar12;
    iVar13 = iVar10;
joined_r0x00014161d939:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar10 * 2;
        iVar16 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar16 * 3 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)param_1[(longlong)iVar16 * 3];
          }
          if (*(int *)(param_1 + ((longlong)iVar12 + 2) * 3 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)param_1[((longlong)iVar12 + 2) * 3];
          }
          iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
          if (iVar11 < 0) {
            iVar16 = iVar12;
          }
          iVar16 = iVar16 + 1;
        }
        puVar17 = param_1 + (longlong)iVar16 * 3;
        puVar1 = param_1 + (longlong)iVar10 * 3;
        if (*(int *)(param_1 + (longlong)iVar16 * 3 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar17;
        }
        if (*(int *)(puVar1 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar1;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
        if (iVar10 < 0) {
          if (puVar1 != puVar17) {
            uVar5 = *(undefined4 *)((longlong)puVar17 + 4);
            uVar6 = *(undefined4 *)(puVar17 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar17 + 0xc);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            uVar3 = puVar1[2];
            *(undefined4 *)puVar1 = *(undefined4 *)puVar17;
            *(undefined4 *)((longlong)puVar1 + 4) = uVar5;
            *(undefined4 *)(puVar1 + 1) = uVar6;
            *(undefined4 *)((longlong)puVar1 + 0xc) = uVar7;
            puVar1[2] = puVar17[2];
            *puVar17 = uVar8;
            puVar17[1] = uVar9;
            puVar17[2] = uVar3;
          }
          iVar12 = iVar16 * 2 + 1;
          iVar10 = iVar16;
          goto joined_r0x00014161d939;
        }
      }
      iVar12 = iVar4 + -2;
      iVar10 = iVar13 + -1;
      iVar4 = iVar12;
      iVar13 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar17 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar17) {
        uVar5 = *(undefined4 *)((longlong)puVar17 + 4);
        uVar6 = *(undefined4 *)(puVar17 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar17 + 0xc);
        uVar8 = *param_1;
        uVar9 = param_1[1];
        uVar3 = param_1[2];
        *(undefined4 *)param_1 = *(undefined4 *)puVar17;
        *(undefined4 *)((longlong)param_1 + 4) = uVar5;
        *(undefined4 *)(param_1 + 1) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
        param_1[2] = puVar17[2];
        *puVar17 = uVar8;
        puVar17[1] = uVar9;
        puVar17[2] = uVar3;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar10 * 2;
          iVar12 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar12 * 3 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)param_1[(longlong)iVar12 * 3];
            }
            if (*(int *)(param_1 + ((longlong)iVar4 + 2) * 3 + 1) == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = (undefined2 *)param_1[((longlong)iVar4 + 2) * 3];
            }
            iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
            if (iVar13 < 0) {
              iVar12 = iVar4;
            }
            iVar12 = iVar12 + 1;
          }
          puVar1 = param_1 + (longlong)iVar12 * 3;
          puVar2 = param_1 + (longlong)iVar10 * 3;
          if (*(int *)(param_1 + (longlong)iVar12 * 3 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar1;
          }
          if (*(int *)(puVar2 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar2;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
          if (-1 < iVar10) break;
          if (puVar2 != puVar1) {
            uVar5 = *(undefined4 *)((longlong)puVar1 + 4);
            uVar6 = *(undefined4 *)(puVar1 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar1 + 0xc);
            uVar8 = *puVar2;
            uVar9 = puVar2[1];
            uVar3 = puVar2[2];
            *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
            *(undefined4 *)((longlong)puVar2 + 4) = uVar5;
            *(undefined4 *)(puVar2 + 1) = uVar6;
            *(undefined4 *)((longlong)puVar2 + 0xc) = uVar7;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1[2] = uVar3;
          }
          iVar10 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar17 = puVar17 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14161db70 IntroSortInternal<`anonymous_namespace'::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<`anonymous_namespace'::FLogCategoryPtrs>_>_> body=990 status=ok
// SIG undefined IntroSortInternal<`anonymous_namespace'::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<`anonymous_namespace'::FLogCategoryPtrs>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<_anonymous_namespace_::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<_anonymous_namespace_::FLogCategoryPtrs>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0x18 + -0x18;
    fVar19 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar19 = fVar19 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar19 = ::_guard_xfg_dispatch_icall_nop(fVar19);
    local_338 = (undefined4)(longlong)(fVar19 + fVar19);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar15 = &local_348;
    do {
      puVar18 = (undefined8 *)*plVar15;
      puVar11 = (undefined8 *)plVar15[1];
      local_358 = plVar15[2];
      lVar9 = ((longlong)puVar11 - (longlong)puVar18) / 0x18 + 1;
      puVar17 = puVar18;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14161dc70:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar18 = puVar17 + (lVar9 >> 1) * 3;
          if (puVar18 != puVar17) {
            uVar2 = *(undefined4 *)((longlong)puVar17 + 4);
            uVar3 = *(undefined4 *)(puVar17 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar17 + 0xc);
            uVar5 = *puVar18;
            uVar6 = puVar18[1];
            uVar1 = puVar18[2];
            *(undefined4 *)puVar18 = *(undefined4 *)puVar17;
            *(undefined4 *)((longlong)puVar18 + 4) = uVar2;
            *(undefined4 *)(puVar18 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uVar4;
            puVar18[2] = puVar17[2];
            *puVar17 = uVar5;
            puVar17[1] = uVar6;
            puVar17[2] = uVar1;
          }
          puVar12 = puVar11 + 3;
          puVar18 = puVar17;
LAB_14161dcc0:
          puVar16 = puVar18;
          puVar18 = puVar16 + 3;
          if (puVar18 <= puVar11) goto code_r0x00014161dcc9;
          goto LAB_14161dd00;
        }
        for (; puVar12 = puVar17, puVar18 = puVar17, puVar17 < puVar11; puVar11 = puVar11 + -3) {
          while (puVar18 = puVar18 + 3, puVar18 <= puVar11) {
            if (*(int *)(puVar18 + 1) == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*puVar18;
            }
            if (*(int *)(puVar12 + 1) == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*puVar12;
            }
            iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
            if (iVar14 < 0) {
              puVar12 = puVar18;
            }
          }
          if (puVar12 != puVar11) {
            uVar2 = *(undefined4 *)((longlong)puVar11 + 4);
            uVar3 = *(undefined4 *)(puVar11 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar11 + 0xc);
            uVar5 = *puVar12;
            uVar6 = puVar12[1];
            uVar1 = puVar12[2];
            *(undefined4 *)puVar12 = *(undefined4 *)puVar11;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar2;
            *(undefined4 *)(puVar12 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar4;
            puVar12[2] = puVar11[2];
            *puVar11 = uVar5;
            puVar11[1] = uVar6;
            puVar11[2] = uVar1;
          }
        }
        goto LAB_14161de65;
      }
LAB_14161de4c:
      HeapSortInternal<_anonymous_namespace_::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<_anonymous_namespace_::FLogCategoryPtrs>_>_>
                (puVar18,lVar9,param_3,param_4);
LAB_14161de65:
      plVar15 = plVar15 + -3;
    } while (&local_348 <= plVar15);
  }
  return;
code_r0x00014161dcc9:
  if (*(int *)(puVar16 + 4) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar18;
  }
  if (*(int *)(puVar17 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar17;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
  if (-1 < iVar7) goto LAB_14161dcc0;
LAB_14161dd00:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if (puVar12 <= puVar17) break;
    if (*(int *)(puVar17 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar17;
    }
    if (*(int *)(puVar13 + -2) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar12;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
  } while (-1 < iVar7);
  if (puVar18 <= puVar12) {
    if (puVar18 != puVar12) {
      uVar2 = *(undefined4 *)((longlong)puVar13 + -0x14);
      uVar3 = *(undefined4 *)(puVar13 + -2);
      uVar4 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar5 = *puVar18;
      uVar6 = puVar16[4];
      uVar1 = puVar16[5];
      *(undefined4 *)puVar18 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar2;
      *(undefined4 *)(puVar16 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar16 + 0x24) = uVar4;
      puVar16[5] = puVar13[-1];
      *puVar12 = uVar5;
      puVar13[-2] = uVar6;
      puVar13[-1] = uVar1;
    }
    goto LAB_14161dcc0;
  }
  if (puVar17 != puVar12) {
    uVar2 = *(undefined4 *)((longlong)puVar13 + -0x14);
    uVar3 = *(undefined4 *)(puVar13 + -2);
    uVar4 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar5 = *puVar17;
    uVar6 = puVar17[1];
    uVar1 = puVar17[2];
    *(undefined4 *)puVar17 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar17 + 4) = uVar2;
    *(undefined4 *)(puVar17 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar17 + 0xc) = uVar4;
    puVar17[2] = puVar13[-1];
    *puVar12 = uVar5;
    puVar13[-2] = uVar6;
    puVar13[-1] = uVar1;
  }
  lVar9 = (longlong)puVar12 + (-0x18 - (longlong)puVar17);
  iVar14 = iVar14 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)puVar11 - (longlong)puVar18) / 0x18) {
    if (puVar18 < puVar11) {
      *plVar15 = (longlong)puVar18;
      plVar15[1] = (longlong)puVar11;
      *(int *)(plVar15 + 2) = iVar14;
      plVar15 = plVar15 + 3;
    }
    if (puVar12 <= puVar17 + 3) goto LAB_14161de65;
    puVar11 = puVar13 + -6;
    puVar18 = puVar17;
  }
  else {
    if (puVar17 + 3 < puVar12) {
      *plVar15 = (longlong)puVar17;
      plVar15[1] = (longlong)(puVar13 + -6);
      *(int *)(plVar15 + 2) = iVar14;
      plVar15 = plVar15 + 3;
    }
    if (puVar11 <= puVar18) goto LAB_14161de65;
  }
  lVar9 = ((longlong)puVar11 - (longlong)puVar18) / 0x18 + 1;
  puVar17 = puVar18;
  if (iVar14 == 0) goto LAB_14161de4c;
  goto LAB_14161dc70;
}



// FUNCTION 14161df50 FUN_14161df50 body=142 status=ok
// SIG undefined FUN_14161df50(void)

undefined8 * FUN_14161df50(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FString::FString(local_18,param_3);
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_144cc2280;
  FString::FString(param_1 + 2,plVar1);
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[4] = uVar2;
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_GetPoolName_144cc22c8;
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14161dfe0 FUN_14161dfe0 body=489 status=ok
// SIG undefined FUN_14161dfe0(void)

undefined8 * FUN_14161dfe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar1 = param_1 + 3;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144171b00;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FText::FText(param_1 + 5);
  FText::FText(param_1 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__144cc1f38;
  FString::FString(param_1 + 0xb,param_2);
  cVar4 = FText::IsEmpty(param_3);
  if (cVar4 == '\0') {
    FText::operator=(param_1 + 5,param_3);
  }
  else {
    uVar8 = FText::FromString(local_38,param_1 + 0xb);
    FText::operator=(param_1 + 5,uVar8);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  plVar5 = (longlong *)FString::FString(local_78,param_1 + 0xb);
  plVar6 = (longlong *)FString::FString(local_68,plVar5);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = FString::FString(local_58,plVar6);
    FUN_14161df50(plVar7,FAssetNameToken::FindAsset,uVar8);
  }
  if (*plVar6 != 0) {
    FMemory::Free();
  }
  if (*plVar5 != 0) {
    FMemory::Free();
  }
  if (local_48 != plVar1) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 4) != 0) && (plVar5 = (longlong *)*plVar1, plVar5 != (longlong *)0x0))
      {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar1 != 0) {
          lVar9 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar9;
        }
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar1);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar9 = FMemory::Realloc(plVar7,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  return param_1;
}



// FUNCTION 14161e1d0 FUN_14161e1d0 body=3875 status=ok
// SIG undefined FUN_14161e1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14161e1d0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_104 [4];
  code **local_100;
  code **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FExpressionGrammar::FExpressionGrammar(param_1 + 0x18);
  puVar5 = (undefined8 *)(param_1 + 0x158);
  local_a8 = (longlong *)0x0;
  *puVar5 = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *param_1 = 1;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeLocalizedNumberWithAgnosticFallback;
  }
  local_d8 = FUN_1416226a0;
  FTokenDefinitions::DefineToken(param_1,&local_d8);
  if (local_98 != 0) {
    plVar6 = &local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar3 = FUN_14162cf70();
  local_f0 = FUN_14162cff0();
  local_e8 = uVar3;
  FUN_14161d110(param_1 + 0x18,local_104,&local_f0,0);
  uVar3 = FUN_14162cc70();
  FUN_14161cb00(param_1 + 0x68,local_104,uVar3,0);
  uVar3 = FUN_14162caf0();
  FUN_14161cb00(param_1 + 0x68,local_104,uVar3,0);
  uVar3 = FUN_14162cdf0();
  FUN_14161cb00(param_1 + 0x68,local_104,uVar3,0);
  local_f0 = 5;
  local_100 = (code **)FUN_14162cc70();
  puVar1 = param_1 + 0x108;
  local_f8 = (code **)&local_f0;
  FUN_14161ce00(puVar1,local_104,&local_100,0);
  local_f0 = 5;
  local_100 = (code **)FUN_14162caf0();
  local_f8 = (code **)&local_f0;
  FUN_14161ce00(puVar1,local_104,&local_100,0);
  local_f0 = 4;
  local_100 = (code **)FUN_14162ce70();
  local_f8 = (code **)&local_f0;
  FUN_14161ce00(puVar1,local_104,&local_100,0);
  local_f0 = 4;
  local_100 = (code **)FUN_14162c9f0();
  local_f8 = (code **)&local_f0;
  FUN_14161ce00(puVar1,local_104,&local_100,0);
  local_f0 = 4;
  local_100 = (code **)FUN_14162cbf0();
  local_f8 = (code **)&local_f0;
  FUN_14161ce00(puVar1,local_104,&local_100,0);
  local_f0 = 4;
  local_100 = (code **)FUN_14162cd70();
  local_f8 = (code **)&local_f0;
  FUN_14161ce00(puVar1,local_104,&local_100,0);
  puVar2 = (undefined8 *)FUN_14162cc70();
  local_d8 = (code *)*puVar2;
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_c8 = 0;
  lStack_c0 = 0;
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar2 + 1) = local_108;
  }
  local_88[0] = FUN_1416228f0;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar5,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)FUN_14162caf0();
  local_d8 = (code *)*puVar2;
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_c8 = 0;
  lStack_c0 = 0;
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar2 + 1) = local_108;
  }
  local_88[0] = FUN_1416227a0;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar5,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)FUN_14162cdf0();
  local_d8 = (code *)*puVar2;
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_c8 = 0;
  lStack_c0 = 0;
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar2 + 1) = local_108;
  }
  local_88[0] = FUN_1416227d0;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar5,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)FUN_14162cc70();
  local_d8 = (code *)*puVar5;
  uStack_d0 = *(undefined4 *)(puVar5 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  plVar6 = (longlong *)FUN_14162c970();
  local_c8 = *plVar6;
  lStack_c0 = plVar6[1];
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar5 + 1) = local_108;
  }
  local_88[0] = FUN_141622830;
  puVar1 = param_1 + 0x1f8;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar1,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)FUN_14162caf0();
  local_d8 = (code *)*puVar5;
  uStack_d0 = *(undefined4 *)(puVar5 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  plVar6 = (longlong *)FUN_14162c970();
  local_c8 = *plVar6;
  lStack_c0 = plVar6[1];
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar5 + 1) = local_108;
  }
  local_88[0] = FUN_141622770;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar1,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)FUN_14162ce70();
  local_d8 = (code *)*puVar5;
  uStack_d0 = *(undefined4 *)(puVar5 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  plVar6 = (longlong *)FUN_14162c970();
  local_c8 = *plVar6;
  lStack_c0 = plVar6[1];
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar5 + 1) = local_108;
  }
  local_88[0] = FUN_1416228c0;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar1,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)FUN_14162cd70();
  local_d8 = (code *)*puVar5;
  uStack_d0 = *(undefined4 *)(puVar5 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  plVar6 = (longlong *)FUN_14162c970();
  local_c8 = *plVar6;
  lStack_c0 = plVar6[1];
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar5 + 1) = local_108;
  }
  local_88[0] = FUN_141622800;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar1,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)FUN_14162c9f0();
  local_d8 = (code *)*puVar5;
  uStack_d0 = *(undefined4 *)(puVar5 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  plVar6 = (longlong *)FUN_14162c970();
  local_c8 = *plVar6;
  lStack_c0 = plVar6[1];
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar5 + 1) = local_108;
  }
  local_88[0] = FUN_141622860;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar1,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)FUN_14162cbf0();
  local_d8 = (code *)*puVar5;
  uStack_d0 = *(undefined4 *)(puVar5 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  plVar6 = (longlong *)FUN_14162c970();
  local_c8 = *plVar6;
  lStack_c0 = plVar6[1];
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar4;
  uStack_b4 = puVar4[1];
  uStack_b0 = puVar4[2];
  uStack_ac = puVar4[3];
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar5 + 1) = local_108;
  }
  local_88[0] = FUN_141622890;
  local_100 = &local_d8;
  local_f8 = local_88;
  FUN_14161d420(puVar1,local_104,&local_100,0);
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14161f100 FBox2D body=397 status=ok
// SIG undefined FBox2D(void)

float * FBox2D::FBox2D(float *param_1,longlong param_2,int param_3)

{
  bool bVar1;
  float *pfVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = 0;
  lVar5 = (longlong)param_3;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (3 < lVar5) {
    bVar1 = false;
    pfVar2 = (float *)(param_2 + 0x14);
    lVar4 = (lVar5 - 4U >> 2) + 1;
    lVar6 = lVar4 * 4;
    do {
      if (bVar1) {
        fVar9 = pfVar2[-5];
        if (*param_1 <= pfVar2[-5]) {
          fVar9 = *param_1;
        }
        *param_1 = fVar9;
        fVar7 = pfVar2[-4];
        if (param_1[1] <= pfVar2[-4]) {
          fVar7 = param_1[1];
        }
        param_1[1] = fVar7;
        fVar7 = param_1[2];
        if (param_1[2] <= pfVar2[-5]) {
          fVar7 = pfVar2[-5];
        }
        param_1[2] = fVar7;
        fVar7 = pfVar2[-4];
        if (pfVar2[-4] <= param_1[3]) {
          fVar7 = param_1[3];
        }
        param_1[3] = fVar7;
      }
      else {
        fVar9 = pfVar2[-5];
        fVar7 = pfVar2[-4];
        bVar1 = true;
        *param_1 = fVar9;
        param_1[1] = fVar7;
        param_1[2] = fVar9;
        param_1[3] = fVar7;
        *(undefined1 *)(param_1 + 4) = 1;
        fVar9 = *param_1;
        fVar7 = param_1[3];
      }
      fVar10 = pfVar2[-3];
      if (fVar9 <= pfVar2[-3]) {
        fVar10 = fVar9;
      }
      *param_1 = fVar10;
      fVar9 = pfVar2[-2];
      if (param_1[1] <= pfVar2[-2]) {
        fVar9 = param_1[1];
      }
      param_1[1] = fVar9;
      fVar8 = param_1[2];
      if (param_1[2] <= pfVar2[-3]) {
        fVar8 = pfVar2[-3];
      }
      param_1[2] = fVar8;
      if (fVar7 <= pfVar2[-2]) {
        fVar7 = pfVar2[-2];
      }
      param_1[3] = fVar7;
      if (pfVar2[-1] <= fVar10) {
        fVar10 = pfVar2[-1];
      }
      *param_1 = fVar10;
      if (*pfVar2 <= fVar9) {
        fVar9 = *pfVar2;
      }
      param_1[1] = fVar9;
      if (fVar8 <= pfVar2[-1]) {
        fVar8 = pfVar2[-1];
      }
      param_1[2] = fVar8;
      if (fVar7 <= *pfVar2) {
        fVar7 = *pfVar2;
      }
      param_1[3] = fVar7;
      if (pfVar2[1] <= fVar10) {
        fVar10 = pfVar2[1];
      }
      *param_1 = fVar10;
      if (pfVar2[2] <= fVar9) {
        fVar9 = pfVar2[2];
      }
      param_1[1] = fVar9;
      if (fVar8 <= pfVar2[1]) {
        fVar8 = pfVar2[1];
      }
      param_1[2] = fVar8;
      if (fVar7 <= pfVar2[2]) {
        fVar7 = pfVar2[2];
      }
      pfVar2 = pfVar2 + 8;
      param_1[3] = fVar7;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar6 < lVar5) {
    cVar3 = *(char *)(param_1 + 4);
    pfVar2 = (float *)(param_2 + lVar6 * 8);
    lVar5 = lVar5 - lVar6;
    do {
      if (cVar3 == '\0') {
        fVar9 = *pfVar2;
        fVar7 = pfVar2[1];
        cVar3 = '\x01';
        *param_1 = fVar9;
        param_1[1] = fVar7;
        param_1[2] = fVar9;
        param_1[3] = fVar7;
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        fVar9 = *pfVar2;
        if (*param_1 <= *pfVar2) {
          fVar9 = *param_1;
        }
        *param_1 = fVar9;
        fVar9 = pfVar2[1];
        if (param_1[1] <= pfVar2[1]) {
          fVar9 = param_1[1];
        }
        param_1[1] = fVar9;
        fVar9 = param_1[2];
        if (param_1[2] <= *pfVar2) {
          fVar9 = *pfVar2;
        }
        param_1[2] = fVar9;
        fVar9 = param_1[3];
        if (param_1[3] <= pfVar2[1]) {
          fVar9 = pfVar2[1];
        }
        param_1[3] = fVar9;
      }
      pfVar2 = pfVar2 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 14161f290 FBox body=196 status=ok
// SIG undefined FBox(void)

float * FBox::FBox(float *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar6;
  ulonglong uVar5;
  
  uVar3 = 0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0 < (int)param_2[1]) {
    bVar2 = false;
    uVar5 = uVar3;
    do {
      lVar1 = *param_2;
      if (bVar2) {
        fVar6 = *(float *)(uVar3 + lVar1);
        if (*param_1 <= *(float *)(uVar3 + lVar1)) {
          fVar6 = *param_1;
        }
        *param_1 = fVar6;
        fVar6 = *(float *)(uVar3 + 4 + lVar1);
        if (param_1[1] <= fVar6) {
          fVar6 = param_1[1];
        }
        param_1[1] = fVar6;
        fVar6 = *(float *)(uVar3 + 8 + lVar1);
        if (param_1[2] <= fVar6) {
          fVar6 = param_1[2];
        }
        param_1[2] = fVar6;
        fVar6 = *(float *)(uVar3 + lVar1);
        if (*(float *)(uVar3 + lVar1) <= param_1[3]) {
          fVar6 = param_1[3];
        }
        param_1[3] = fVar6;
        fVar6 = *(float *)(uVar3 + 4 + lVar1);
        if (fVar6 <= param_1[4]) {
          fVar6 = param_1[4];
        }
        param_1[4] = fVar6;
        fVar6 = *(float *)(uVar3 + 8 + lVar1);
        if (fVar6 <= param_1[5]) {
          fVar6 = param_1[5];
        }
        param_1[5] = fVar6;
      }
      else {
        bVar2 = true;
        *(undefined8 *)(param_1 + 3) = *(undefined8 *)(uVar3 + lVar1);
        fVar6 = *(float *)(uVar3 + 8 + lVar1);
        param_1[5] = fVar6;
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 3);
        param_1[2] = fVar6;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 0xc;
    } while ((int)uVar4 < (int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 14161f360 FBox body=584 status=ok
// SIG undefined FBox(void)

float * FBox::FBox(float *param_1,longlong param_2,int param_3)

{
  bool bVar1;
  float *pfVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar6 = 0;
  lVar5 = (longlong)param_3;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (3 < lVar5) {
    bVar1 = false;
    pfVar2 = (float *)(param_2 + 0x14);
    lVar4 = (lVar5 - 4U >> 2) + 1;
    lVar6 = lVar4 * 4;
    do {
      if (bVar1) {
        fVar11 = pfVar2[-5];
        if (*param_1 <= pfVar2[-5]) {
          fVar11 = *param_1;
        }
        *param_1 = fVar11;
        fVar9 = pfVar2[-4];
        if (param_1[1] <= pfVar2[-4]) {
          fVar9 = param_1[1];
        }
        param_1[1] = fVar9;
        fVar9 = pfVar2[-3];
        if (param_1[2] <= pfVar2[-3]) {
          fVar9 = param_1[2];
        }
        param_1[2] = fVar9;
        fVar9 = pfVar2[-5];
        if (pfVar2[-5] <= param_1[3]) {
          fVar9 = param_1[3];
        }
        param_1[3] = fVar9;
        fVar9 = param_1[4];
        if (param_1[4] <= pfVar2[-4]) {
          fVar9 = pfVar2[-4];
        }
        param_1[4] = fVar9;
        fVar12 = pfVar2[-3];
        if (pfVar2[-3] <= param_1[5]) {
          fVar12 = param_1[5];
        }
        param_1[5] = fVar12;
      }
      else {
        *(undefined8 *)(param_1 + 3) = *(undefined8 *)(pfVar2 + -5);
        fVar11 = pfVar2[-3];
        param_1[5] = fVar11;
        fVar9 = param_1[4];
        fVar12 = param_1[5];
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 3);
        param_1[2] = fVar11;
        bVar1 = true;
        fVar11 = *param_1;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      if (pfVar2[-2] <= fVar11) {
        fVar11 = pfVar2[-2];
      }
      *param_1 = fVar11;
      fVar8 = pfVar2[-1];
      if (param_1[1] <= pfVar2[-1]) {
        fVar8 = param_1[1];
      }
      param_1[1] = fVar8;
      fVar10 = param_1[2];
      if (*pfVar2 <= param_1[2]) {
        fVar10 = *pfVar2;
      }
      param_1[2] = fVar10;
      fVar7 = pfVar2[-2];
      if (pfVar2[-2] <= param_1[3]) {
        fVar7 = param_1[3];
      }
      param_1[3] = fVar7;
      if (fVar9 <= pfVar2[-1]) {
        fVar9 = pfVar2[-1];
      }
      param_1[4] = fVar9;
      if (fVar12 <= *pfVar2) {
        fVar12 = *pfVar2;
      }
      param_1[5] = fVar12;
      if (pfVar2[1] <= fVar11) {
        fVar11 = pfVar2[1];
      }
      *param_1 = fVar11;
      if (pfVar2[2] <= fVar8) {
        fVar8 = pfVar2[2];
      }
      param_1[1] = fVar8;
      if (pfVar2[3] <= fVar10) {
        fVar10 = pfVar2[3];
      }
      param_1[2] = fVar10;
      if (fVar7 <= pfVar2[1]) {
        fVar7 = pfVar2[1];
      }
      param_1[3] = fVar7;
      if (fVar9 <= pfVar2[2]) {
        fVar9 = pfVar2[2];
      }
      param_1[4] = fVar9;
      if (fVar12 <= pfVar2[3]) {
        fVar12 = pfVar2[3];
      }
      param_1[5] = fVar12;
      if (pfVar2[4] <= fVar11) {
        fVar11 = pfVar2[4];
      }
      *param_1 = fVar11;
      if (pfVar2[5] <= fVar8) {
        fVar8 = pfVar2[5];
      }
      param_1[1] = fVar8;
      if (pfVar2[6] <= fVar10) {
        fVar10 = pfVar2[6];
      }
      param_1[2] = fVar10;
      if (fVar7 <= pfVar2[4]) {
        fVar7 = pfVar2[4];
      }
      param_1[3] = fVar7;
      if (fVar9 <= pfVar2[5]) {
        fVar9 = pfVar2[5];
      }
      param_1[4] = fVar9;
      if (fVar12 <= pfVar2[6]) {
        fVar12 = pfVar2[6];
      }
      pfVar2 = pfVar2 + 0xc;
      param_1[5] = fVar12;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar6 < lVar5) {
    cVar3 = *(char *)(param_1 + 6);
    lVar5 = lVar5 - lVar6;
    pfVar2 = (float *)(param_2 + lVar6 * 0xc + 8);
    do {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
        *(undefined8 *)(param_1 + 3) = *(undefined8 *)(pfVar2 + -2);
        fVar9 = *pfVar2;
        param_1[5] = fVar9;
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 3);
        param_1[2] = fVar9;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else {
        fVar9 = *param_1;
        if (pfVar2[-2] <= *param_1) {
          fVar9 = pfVar2[-2];
        }
        *param_1 = fVar9;
        fVar9 = pfVar2[-1];
        if (param_1[1] <= pfVar2[-1]) {
          fVar9 = param_1[1];
        }
        param_1[1] = fVar9;
        fVar9 = *pfVar2;
        if (param_1[2] <= *pfVar2) {
          fVar9 = param_1[2];
        }
        param_1[2] = fVar9;
        fVar9 = param_1[3];
        if (param_1[3] <= pfVar2[-2]) {
          fVar9 = pfVar2[-2];
        }
        param_1[3] = fVar9;
        fVar9 = param_1[4];
        if (param_1[4] <= pfVar2[-1]) {
          fVar9 = pfVar2[-1];
        }
        param_1[4] = fVar9;
        fVar9 = *pfVar2;
        if (*pfVar2 <= param_1[5]) {
          fVar9 = param_1[5];
        }
        param_1[5] = fVar9;
      }
      pfVar2 = pfVar2 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 14161f5b0 FExpressionGrammar body=197 status=ok
// SIG undefined FExpressionGrammar(void)

undefined8 * FExpressionGrammar::FExpressionGrammar(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 14161f680 FLinearColor body=66 status=ok
// SIG undefined FLinearColor(void)

undefined4 * FLinearColor::FLinearColor(undefined4 *param_1,byte *param_2)

{
  *param_1 = *(undefined4 *)(&DAT_1464aa2c0 + (ulonglong)param_2[2] * 4);
  param_1[1] = *(undefined4 *)(&DAT_1464aa2c0 + (ulonglong)param_2[1] * 4);
  param_1[2] = *(undefined4 *)(&DAT_1464aa2c0 + (ulonglong)*param_2 * 4);
  param_1[3] = (float)param_2[3] * 0.003921569;
  return param_1;
}



// FUNCTION 14161f6d0 FUN_14161f6d0 body=26 status=ok
// SIG undefined FUN_14161f6d0(void)

undefined4 * FUN_14161f6d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 14161f6f0 FLinearColor body=27 status=ok
// SIG undefined FLinearColor(void)

undefined4 * FLinearColor::FLinearColor(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0x3f800000;
  return param_1;
}



// FUNCTION 14161f710 FUN_14161f710 body=1086 status=ok
// SIG undefined FUN_14161f710(void)

uint * FUN_14161f710(uint *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  float fVar5;
  uint local_res8;
  
  uVar1 = *param_2;
  uVar3 = (ulonglong)_tls_index;
  local_res8 = (uVar1 & 0xffff8000) << 0x10;
  if ((uVar1 & 0x7c00) == 0) {
    uVar2 = uVar1 & 0x3ff;
    if ((uVar1 & 0x3ff) != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x38) <
           DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 1.442695;
        _Init_thread_footer(&DAT_1468509dc);
      }
      fVar5 = _guard_xfg_dispatch_icall_nop((float)uVar2);
      iVar4 = 10 - (int)(fVar5 * DAT_1468509d8);
      local_res8 = uVar2 << ((char)iVar4 + 0xdU & 0x1f) & 0x7fffff | (0x71U - iVar4 & 0xff) << 0x17
                   | local_res8;
    }
  }
  else if ((uVar1 & 0x7c00) == 0x7c00) {
    local_res8 = local_res8 | 0x477fe000;
  }
  else {
    local_res8 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd | local_res8;
  }
  *param_1 = local_res8;
  uVar1 = param_2[1];
  local_res8 = (uVar1 & 0xffff8000) << 0x10;
  if ((uVar1 & 0x7c00) == 0) {
    uVar2 = uVar1 & 0x3ff;
    if ((uVar1 & 0x3ff) != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x38) <
           DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 1.442695;
        _Init_thread_footer(&DAT_1468509dc);
      }
      fVar5 = _guard_xfg_dispatch_icall_nop((float)uVar2);
      iVar4 = 10 - (int)(fVar5 * DAT_1468509d8);
      local_res8 = uVar2 << ((char)iVar4 + 0xdU & 0x1f) & 0x7fffff | (0x71U - iVar4 & 0xff) << 0x17
                   | local_res8;
    }
  }
  else if ((uVar1 & 0x7c00) == 0x7c00) {
    local_res8 = local_res8 | 0x477fe000;
  }
  else {
    local_res8 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd | local_res8;
  }
  param_1[1] = local_res8;
  uVar1 = param_2[2];
  local_res8 = (uVar1 & 0xffff8000) << 0x10;
  if ((uVar1 & 0x7c00) == 0) {
    uVar2 = uVar1 & 0x3ff;
    if ((uVar1 & 0x3ff) != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x38) <
           DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 1.442695;
        _Init_thread_footer(&DAT_1468509dc);
      }
      fVar5 = _guard_xfg_dispatch_icall_nop((float)uVar2);
      iVar4 = 10 - (int)(fVar5 * DAT_1468509d8);
      local_res8 = uVar2 << ((char)iVar4 + 0xdU & 0x1f) & 0x7fffff | (0x71U - iVar4 & 0xff) << 0x17
                   | local_res8;
    }
  }
  else if ((uVar1 & 0x7c00) == 0x7c00) {
    local_res8 = local_res8 | 0x477fe000;
  }
  else {
    local_res8 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd | local_res8;
  }
  param_1[2] = local_res8;
  uVar1 = param_2[3];
  local_res8 = (uVar1 & 0xffff8000) << 0x10;
  if ((uVar1 & 0x7c00) == 0) {
    uVar2 = uVar1 & 0x3ff;
    if ((uVar1 & 0x3ff) != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x38) <
           DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
        DAT_1468509d8 = 1.442695;
        _Init_thread_footer(&DAT_1468509dc);
      }
      fVar5 = _guard_xfg_dispatch_icall_nop((float)uVar2);
      iVar4 = 10 - (int)(fVar5 * DAT_1468509d8);
      local_res8 = uVar2 << ((char)iVar4 + 0xdU & 0x1f) & 0x7fffff | (0x71U - iVar4 & 0xff) << 0x17
                   | local_res8;
    }
  }
  else if ((uVar1 & 0x7c00) == 0x7c00) {
    local_res8 = local_res8 | 0x477fe000;
  }
  else {
    local_res8 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd | local_res8;
  }
  param_1[3] = local_res8;
  return param_1;
}



// FUNCTION 14161fb50 FUN_14161fb50 body=756 status=ok
// SIG undefined FUN_14161fb50(void)

undefined8 * FUN_14161fb50(undefined8 *param_1,longlong *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  
  plVar8 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 2);
  *param_1 = 0;
  param_1[1] = 0;
  *pplVar1 = (longlong *)0x0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (((DAT_1468b5ae0 != 0) && (DAT_1468b5ad8 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*DAT_1468b5ad8 + 0x18))(), cVar3 != '\0')) {
    if (DAT_1468b5ae0 != 0) {
      plVar8 = DAT_1468b5ad8;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_38,param_2);
    local_58 = local_38;
    plStack_50 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    if (pplVar1 != &local_58) {
      *pplVar1 = local_38;
      local_58 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 3,&plStack_50);
    }
    plVar9 = plStack_50;
    plVar8 = plStack_30;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_50 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar8 = plStack_30;
        if (iVar4 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
          plVar8 = plStack_30;
        }
      }
    }
    if (plVar8 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar9 = plVar8 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return param_1;
    }
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return param_1;
    }
    lVar7 = *plVar8;
    goto LAB_14161fe25;
  }
  plVar5 = (longlong *)operator_new(0x20);
  plVar9 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (longlong)&PTR_FUN_144cc1f68;
    plVar5[3] = *param_2;
    plVar9 = plVar5;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar5 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar9;
    plVar5 = plVar6;
  }
  plVar6 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  local_48 = plVar9;
  local_40 = plVar5;
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
      if (0 < iVar4) goto LAB_14161fdbf;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar9;
    plVar8 = (longlong *)plVar6[1];
    if (plVar5 != plVar8) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar6[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
LAB_14161fdbf:
  if (pplVar1 != &local_48) {
    *pplVar1 = plVar9;
    local_48 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 3,&local_40);
  }
  plVar8 = local_40;
  if (local_40 == (longlong *)0x0) {
    return param_1;
  }
  LOCK();
  plVar9 = local_40 + 1;
  lVar7 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return param_1;
  }
  (**(code **)*local_40)(local_40);
  LOCK();
  piVar2 = (int *)((longlong)plVar8 + 0xc);
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 != 1) {
    return param_1;
  }
  lVar7 = *local_40;
  plVar8 = local_40;
LAB_14161fe25:
  (**(code **)(lVar7 + 8))(plVar8,1);
  return param_1;
}



// FUNCTION 14161fe50 FRotator body=48 status=ok
// SIG undefined FRotator(void)

undefined8 * FRotator::FRotator(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)FQuat::Rotator(param_2,local_18);
  *param_1 = *puVar1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar1 + 1);
  return param_1;
}



// FUNCTION 14161fe80 FSphere body=663 status=ok
// SIG undefined FSphere(void)

undefined1 (*) [16] FSphere::FSphere(undefined1 (*param_1) [16],longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  lVar5 = 0;
  lVar4 = (longlong)param_3;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  if (param_3 != 0) {
    FBox::FBox(&local_48,param_2,param_3);
    auVar1._4_4_ = (fStack_44 + local_38) * 0.5;
    auVar1._0_4_ = (local_48 + fStack_3c) * 0.5;
    auVar1._8_4_ = (fStack_40 + local_34) * 0.5;
    auVar1._12_4_ = 0;
    *param_1 = auVar1;
    fVar9 = *(float *)(*param_1 + 0xc);
    if (3 < lVar4) {
      pfVar2 = (float *)(param_2 + 0x14);
      lVar3 = (lVar4 - 4U >> 2) + 1;
      lVar5 = lVar3 * 4;
      do {
        fVar7 = *(float *)*param_1;
        fVar6 = *(float *)(*param_1 + 4);
        fVar8 = *(float *)(*param_1 + 8);
        fVar10 = (fVar6 - pfVar2[-4]) * (fVar6 - pfVar2[-4]) +
                 (fVar7 - pfVar2[-5]) * (fVar7 - pfVar2[-5]) +
                 (fVar8 - pfVar2[-3]) * (fVar8 - pfVar2[-3]);
        if (fVar9 < fVar10) {
          *(float *)(*param_1 + 0xc) = fVar10;
          fVar9 = fVar10;
        }
        fVar10 = (fVar6 - pfVar2[-1]) * (fVar6 - pfVar2[-1]) +
                 (fVar7 - pfVar2[-2]) * (fVar7 - pfVar2[-2]) + (fVar8 - *pfVar2) * (fVar8 - *pfVar2)
        ;
        if (fVar9 < fVar10) {
          *(float *)(*param_1 + 0xc) = fVar10;
          fVar7 = *(float *)*param_1;
          fVar6 = *(float *)(*param_1 + 4);
          fVar8 = *(float *)(*param_1 + 8);
          fVar9 = fVar10;
        }
        fVar10 = (fVar6 - pfVar2[2]) * (fVar6 - pfVar2[2]) +
                 (fVar7 - pfVar2[1]) * (fVar7 - pfVar2[1]) +
                 (fVar8 - pfVar2[3]) * (fVar8 - pfVar2[3]);
        if (fVar9 < fVar10) {
          *(float *)(*param_1 + 0xc) = fVar10;
          fVar7 = *(float *)*param_1;
          fVar6 = *(float *)(*param_1 + 4);
          fVar8 = *(float *)(*param_1 + 8);
          fVar9 = fVar10;
        }
        fVar7 = (fVar6 - pfVar2[5]) * (fVar6 - pfVar2[5]) +
                (fVar7 - pfVar2[4]) * (fVar7 - pfVar2[4]) +
                (fVar8 - pfVar2[6]) * (fVar8 - pfVar2[6]);
        if (fVar9 < fVar7) {
          *(float *)(*param_1 + 0xc) = fVar7;
          fVar9 = fVar7;
        }
        pfVar2 = pfVar2 + 0xc;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar5 < lVar4) {
      fVar9 = *(float *)(*param_1 + 0xc);
      lVar4 = lVar4 - lVar5;
      pfVar2 = (float *)(param_2 + 8 + lVar5 * 0xc);
      do {
        fVar8 = *(float *)(*param_1 + 4) - pfVar2[-1];
        fVar6 = *(float *)*param_1 - pfVar2[-2];
        fVar7 = *(float *)(*param_1 + 8) - *pfVar2;
        fVar7 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7;
        if (fVar9 < fVar7) {
          *(float *)(*param_1 + 0xc) = fVar7;
          fVar9 = fVar7;
        }
        pfVar2 = pfVar2 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *(float *)(*param_1 + 0xc) = SQRT(fVar9) * 1.001;
  }
  return param_1;
}



// FUNCTION 141620120 ~TOperatorJumpTable<void> body=223 status=ok
// SIG undefined ~TOperatorJumpTable<void>(void)

void TOperatorJumpTable<void>::~TOperatorJumpTable<void>(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  FUN_141626440(param_1 + 0x14,0);
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  FUN_141626440(param_1 + 10,0);
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
  FUN_141626440(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141620200 ~TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141620270 ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError> body=154 status=ok
// SIG undefined ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>(void)

void TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>::
     ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    iVar5 = *(int *)(param_1 + 0x28);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (iVar5 != 0) {
      do {
        FExpressionNode::~FExpressionNode(lVar4);
        lVar4 = lVar4 + 0x60;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar4 = *(longlong *)(param_1 + 0x20);
    }
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    plVar3 = *(longlong **)(param_1 + 8);
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
  }
  return;
}



// FUNCTION 141620310 ~TValueOrError<FExpressionNode,FExpressionError> body=109 status=ok
// SIG undefined ~TValueOrError<FExpressionNode,FExpressionError>(void)

void TValueOrError<FExpressionNode,FExpressionError>::
     ~TValueOrError<FExpressionNode,FExpressionError>(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined1 *)(param_1 + 0x60) = 0;
    FExpressionNode::~FExpressionNode();
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 141620380 ~FExpressionGrammar body=162 status=ok
// SIG undefined ~FExpressionGrammar(void)

void FExpressionGrammar::~FExpressionGrammar(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 141620430 ~FMessageLog body=101 status=ok
// SIG undefined ~FMessageLog(void)

void FMessageLog::~FMessageLog(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  Flush();
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1);
  return;
}



// FUNCTION 1416204a0 operator== body=115 status=ok
// SIG undefined operator==(void)

ulonglong operator==(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(*param_1 ^ *param_2);
  if ((((param_1[3] == param_2[3] && param_1[2] == param_2[2]) && param_1[1] == param_2[1]) &&
       (*param_1 ^ *param_2) == 0) &&
     (uVar2 = (ulonglong)(param_1[4] ^ param_2[4]),
     ((param_1[7] == param_2[7] && param_1[6] == param_2[6]) && param_1[5] == param_2[5]) &&
     (param_1[4] ^ param_2[4]) == 0)) {
    uVar1 = param_2[8] ^ param_1[8];
    uVar2 = (ulonglong)uVar1;
    if (((param_1[0xb] == param_2[0xb] && param_1[10] == param_2[10]) && param_1[9] == param_2[9])
        && uVar1 == 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141620520 FUN_141620520 body=325 status=ok
// SIG undefined FUN_141620520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141620520(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  undefined4 *puVar12;
  double *pdVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  int *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  double local_70;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a0 = param_4;
  local_98 = param_2;
  piVar11 = (int *)FUN_14162c970();
  iVar3 = param_4[3];
  iVar4 = param_4[2];
  iVar5 = param_4[1];
  local_a8 = piVar11[3];
  iVar6 = piVar11[2];
  iVar7 = piVar11[1];
  iVar8 = *param_4;
  iVar9 = *piVar11;
  piVar11 = (int *)FUN_14162c970();
  lVar10 = local_98;
  pdVar13 = (double *)(param_3 + 6);
  if (((piVar11[3] != param_3[3] || piVar11[2] != param_3[2]) || piVar11[1] != param_3[1]) ||
      *param_3 != *piVar11) {
    pdVar13 = (double *)0x0;
  }
  dVar1 = *pdVar13;
  pdVar13 = (double *)(local_a0 + 6);
  if (((iVar9 != iVar8 || iVar5 != iVar7) || iVar4 != iVar6) || local_a8 != iVar3) {
    pdVar13 = (double *)0x0;
  }
  dVar2 = *pdVar13;
  *(undefined1 *)(local_98 + 0x18) = 0;
  puVar12 = (undefined4 *)FUN_14162c970();
  local_88 = *puVar12;
  uStack_84 = puVar12[1];
  uStack_80 = puVar12[2];
  uStack_7c = puVar12[3];
  local_78 = &PTR_FUN_144cc2310;
  local_70 = dVar1 - dVar2;
  FExpressionNode::FExpressionNode(lVar10 + 0x20,&local_88);
  *(undefined1 *)(lVar10 + 0x60) = 1;
  FExpressionNode::~FExpressionNode(&local_88);
  return lVar10;
}



// FUNCTION 141620670 FUN_141620670 body=199 status=ok
// SIG undefined FUN_141620670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141620670(undefined8 param_1,longlong param_2,int *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  ulonglong local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  piVar2 = (int *)FUN_14162c970();
  puVar3 = (ulonglong *)(param_3 + 6);
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *piVar2 != *param_3) {
    puVar3 = (ulonglong *)0x0;
  }
  uVar1 = *puVar3;
  *(undefined1 *)(param_2 + 0x18) = 0;
  puVar4 = (undefined4 *)FUN_14162c970();
  local_68 = *puVar4;
  uStack_64 = puVar4[1];
  uStack_60 = puVar4[2];
  uStack_5c = puVar4[3];
  local_50 = uVar1 ^ 0x8000000000000000;
  local_58 = &PTR_FUN_144cc2310;
  FExpressionNode::FExpressionNode(param_2 + 0x20,&local_68);
  *(undefined1 *)(param_2 + 0x60) = 1;
  FExpressionNode::~FExpressionNode(&local_68);
  return param_2;
}



// FUNCTION 141620740 FUN_141620740 body=446 status=ok
// SIG undefined FUN_141620740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141620740(long param_1,longlong param_2,double param_3,double param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68;
  double local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (param_4 == 0.0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,L"Modulo zero",L"BasicMathExpressionEvaluator",L"ModZero");
    FText::FText(local_a8,uVar5);
    FText::FText(param_2,local_a8);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  else {
    fVar7 = (float)param_4;
    fVar8 = (float)param_3;
    if (1e-08 < ABS(fVar7)) {
      fVar7 = (float)(int)(fVar8 / fVar7) * fVar7;
      if (ABS(fVar8) < ABS(fVar7)) {
        fVar7 = fVar8;
      }
      fVar8 = fVar8 - fVar7;
    }
    else {
      AK::MemoryMgr::StartProfileThreadUsage(param_1);
      fVar8 = 0.0;
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
    puVar6 = (undefined4 *)FUN_14162c970();
    local_78 = *puVar6;
    uStack_74 = puVar6[1];
    uStack_70 = puVar6[2];
    uStack_6c = puVar6[3];
    local_68 = &PTR_FUN_144cc2310;
    local_60 = (double)fVar8;
    FExpressionNode::FExpressionNode(param_2 + 0x20,&local_78);
    *(undefined1 *)(param_2 + 0x60) = 1;
    FExpressionNode::~FExpressionNode(&local_78);
  }
  return param_2;
}



// FUNCTION 141620900 FUN_141620900 body=206 status=ok
// SIG undefined FUN_141620900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141620900(undefined8 param_1,longlong param_2,int *param_3)

{
  double dVar1;
  int *piVar2;
  double *pdVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  double local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  piVar2 = (int *)FUN_14162c970();
  pdVar3 = (double *)(param_3 + 6);
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *piVar2 != *param_3) {
    pdVar3 = (double *)0x0;
  }
  dVar1 = *pdVar3;
  *(undefined1 *)(param_2 + 0x18) = 0;
  puVar4 = (undefined4 *)FUN_14162c970();
  local_68 = *puVar4;
  uStack_64 = puVar4[1];
  uStack_60 = puVar4[2];
  uStack_5c = puVar4[3];
  local_58 = &PTR_FUN_144cc2310;
  local_50 = (double)SQRT((float)dVar1);
  FExpressionNode::FExpressionNode(param_2 + 0x20,&local_68);
  *(undefined1 *)(param_2 + 0x60) = 1;
  FExpressionNode::~FExpressionNode(&local_68);
  return param_2;
}



// FUNCTION 1416209d0 FUN_1416209d0 body=346 status=ok
// SIG undefined FUN_1416209d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1416209d0(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  double *pdVar10;
  double *pdVar11;
  undefined4 *puVar12;
  float fVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  int *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  double local_70;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a0 = param_4;
  local_98 = param_2;
  piVar9 = (int *)FUN_14162c970();
  iVar1 = param_4[3];
  iVar2 = param_4[2];
  iVar3 = param_4[1];
  local_a8 = piVar9[3];
  iVar4 = *param_4;
  iVar5 = piVar9[2];
  iVar6 = piVar9[1];
  iVar7 = *piVar9;
  piVar9 = (int *)FUN_14162c970();
  pdVar10 = (double *)(param_3 + 6);
  if (((piVar9[3] != param_3[3] || piVar9[2] != param_3[2]) || piVar9[1] != param_3[1]) ||
      *param_3 != *piVar9) {
    pdVar10 = (double *)0x0;
  }
  pdVar11 = (double *)(local_a0 + 6);
  if (((iVar4 != iVar7 || iVar3 != iVar6) || iVar5 != iVar2) || local_a8 != iVar1) {
    pdVar11 = (double *)0x0;
  }
  fVar13 = _guard_xfg_dispatch_icall_nop((float)*pdVar10,(float)*pdVar11);
  lVar8 = local_98;
  *(undefined1 *)(local_98 + 0x18) = 0;
  puVar12 = (undefined4 *)FUN_14162c970();
  local_88 = *puVar12;
  uStack_84 = puVar12[1];
  uStack_80 = puVar12[2];
  uStack_7c = puVar12[3];
  local_78 = &PTR_FUN_144cc2310;
  local_70 = (double)fVar13;
  FExpressionNode::FExpressionNode(lVar8 + 0x20,&local_88);
  *(undefined1 *)(lVar8 + 0x60) = 1;
  FExpressionNode::~FExpressionNode(&local_88);
  return lVar8;
}



// FUNCTION 141620b30 FUN_141620b30 body=325 status=ok
// SIG undefined FUN_141620b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141620b30(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  undefined4 *puVar12;
  double *pdVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  int *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  double local_70;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a0 = param_4;
  local_98 = param_2;
  piVar11 = (int *)FUN_14162c970();
  iVar3 = param_4[3];
  iVar4 = param_4[2];
  iVar5 = param_4[1];
  local_a8 = piVar11[3];
  iVar6 = piVar11[2];
  iVar7 = piVar11[1];
  iVar8 = *param_4;
  iVar9 = *piVar11;
  piVar11 = (int *)FUN_14162c970();
  lVar10 = local_98;
  pdVar13 = (double *)(param_3 + 6);
  if (((piVar11[3] != param_3[3] || piVar11[2] != param_3[2]) || piVar11[1] != param_3[1]) ||
      *param_3 != *piVar11) {
    pdVar13 = (double *)0x0;
  }
  dVar1 = *pdVar13;
  pdVar13 = (double *)(local_a0 + 6);
  if (((iVar9 != iVar8 || iVar5 != iVar7) || iVar6 != iVar4) || local_a8 != iVar3) {
    pdVar13 = (double *)0x0;
  }
  dVar2 = *pdVar13;
  *(undefined1 *)(local_98 + 0x18) = 0;
  puVar12 = (undefined4 *)FUN_14162c970();
  local_88 = *puVar12;
  uStack_84 = puVar12[1];
  uStack_80 = puVar12[2];
  uStack_7c = puVar12[3];
  local_78 = &PTR_FUN_144cc2310;
  local_70 = dVar1 + dVar2;
  FExpressionNode::FExpressionNode(lVar10 + 0x20,&local_88);
  *(undefined1 *)(lVar10 + 0x60) = 1;
  FExpressionNode::~FExpressionNode(&local_88);
  return lVar10;
}



// FUNCTION 141620c80 FUN_141620c80 body=403 status=ok
// SIG undefined FUN_141620c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141620c80(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  int *local_d8;
  int *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined1 local_98 [64];
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8 = param_4;
  local_d0 = param_3;
  local_c8 = param_1;
  local_c0 = param_2;
  piVar11 = (int *)FUN_14162c970();
  iVar2 = param_4[3];
  iVar3 = param_4[2];
  iVar4 = param_4[1];
  iVar5 = piVar11[3];
  iVar6 = piVar11[2];
  iVar7 = piVar11[1];
  iVar8 = *piVar11;
  iVar9 = *param_4;
  piVar12 = (int *)FUN_14162c970();
  piVar11 = local_d8 + 6;
  if (((iVar8 != iVar9 || iVar6 != iVar3) || iVar2 != iVar5) || iVar7 != iVar4) {
    piVar11 = (int *)0x0;
  }
  piVar13 = local_d0 + 6;
  if (((local_d0[3] != piVar12[3] || local_d0[2] != piVar12[2]) || local_d0[1] != piVar12[1]) ||
      *piVar12 != *local_d0) {
    piVar13 = (int *)0x0;
  }
  lVar14 = FUN_141620fc0(local_c8,local_b8,*(undefined8 *)piVar13,*(undefined8 *)piVar11);
  lVar10 = local_c0;
  *(undefined1 *)(local_c0 + 0x18) = 0;
  if (*(char *)(lVar14 + 0x18) != '\0') {
    FText::FText(local_c0,lVar14);
    *(undefined1 *)(lVar10 + 0x18) = 1;
  }
  *(undefined1 *)(lVar10 + 0x60) = 0;
  if (*(char *)(lVar14 + 0x60) != '\0') {
    FExpressionNode::FExpressionNode(lVar10 + 0x20);
    *(undefined1 *)(lVar10 + 0x60) = 1;
  }
  if (local_58 != '\0') {
    local_58 = '\0';
    FExpressionNode::~FExpressionNode(local_98);
  }
  if (local_a0 != '\0') {
    local_a0 = 0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar11 = (int *)((longlong)local_b0 + 0xc);
        iVar2 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  return lVar10;
}



// FUNCTION 141620e20 FUN_141620e20 body=403 status=ok
// SIG undefined FUN_141620e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141620e20(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  int *local_d8;
  int *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined1 local_98 [64];
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8 = param_4;
  local_d0 = param_3;
  local_c8 = param_1;
  local_c0 = param_2;
  piVar11 = (int *)FUN_14162c970();
  iVar2 = param_4[3];
  iVar3 = param_4[2];
  iVar4 = param_4[1];
  iVar5 = piVar11[3];
  iVar6 = piVar11[2];
  iVar7 = piVar11[1];
  iVar8 = *piVar11;
  iVar9 = *param_4;
  piVar12 = (int *)FUN_14162c970();
  piVar11 = local_d8 + 6;
  if (((iVar8 != iVar9 || iVar6 != iVar3) || iVar2 != iVar5) || iVar7 != iVar4) {
    piVar11 = (int *)0x0;
  }
  piVar13 = local_d0 + 6;
  if (((local_d0[3] != piVar12[3] || local_d0[2] != piVar12[2]) || local_d0[1] != piVar12[1]) ||
      *piVar12 != *local_d0) {
    piVar13 = (int *)0x0;
  }
  lVar14 = FUN_141620740(local_c8,local_b8,*(undefined8 *)piVar13,*(undefined8 *)piVar11);
  lVar10 = local_c0;
  *(undefined1 *)(local_c0 + 0x18) = 0;
  if (*(char *)(lVar14 + 0x18) != '\0') {
    FText::FText(local_c0,lVar14);
    *(undefined1 *)(lVar10 + 0x18) = 1;
  }
  *(undefined1 *)(lVar10 + 0x60) = 0;
  if (*(char *)(lVar14 + 0x60) != '\0') {
    FExpressionNode::FExpressionNode(lVar10 + 0x20);
    *(undefined1 *)(lVar10 + 0x60) = 1;
  }
  if (local_58 != '\0') {
    local_58 = '\0';
    FExpressionNode::~FExpressionNode(local_98);
  }
  if (local_a0 != '\0') {
    local_a0 = 0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar11 = (int *)((longlong)local_b0 + 0xc);
        iVar2 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  return lVar10;
}



// FUNCTION 141620fc0 FUN_141620fc0 body=358 status=ok
// SIG undefined FUN_141620fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141620fc0(undefined8 param_1,longlong param_2,double param_3,double param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  double local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_4 == 0.0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Division by zero",L"BasicMathExpressionEvaluator",
                       L"DivisionByZero");
    FText::FText(local_98,uVar5);
    FText::FText(param_2,local_98);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x18) = 0;
    puVar6 = (undefined4 *)FUN_14162c970();
    local_68 = *puVar6;
    uStack_64 = puVar6[1];
    uStack_60 = puVar6[2];
    uStack_5c = puVar6[3];
    local_58 = &PTR_FUN_144cc2310;
    local_50 = param_3 / param_4;
    FExpressionNode::FExpressionNode(param_2 + 0x20,&local_68);
    *(undefined1 *)(param_2 + 0x60) = 1;
    FExpressionNode::~FExpressionNode(&local_68);
  }
  return param_2;
}



// FUNCTION 141621130 FUN_141621130 body=325 status=ok
// SIG undefined FUN_141621130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141621130(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  undefined4 *puVar12;
  double *pdVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  int *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  double local_70;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a0 = param_4;
  local_98 = param_2;
  piVar11 = (int *)FUN_14162c970();
  iVar3 = param_4[3];
  iVar4 = param_4[2];
  iVar5 = param_4[1];
  local_a8 = piVar11[3];
  iVar6 = piVar11[2];
  iVar7 = piVar11[1];
  iVar8 = *param_4;
  iVar9 = *piVar11;
  piVar11 = (int *)FUN_14162c970();
  lVar10 = local_98;
  pdVar13 = (double *)(param_3 + 6);
  if (((piVar11[3] != param_3[3] || piVar11[2] != param_3[2]) || piVar11[1] != param_3[1]) ||
      *param_3 != *piVar11) {
    pdVar13 = (double *)0x0;
  }
  dVar1 = *pdVar13;
  pdVar13 = (double *)(local_a0 + 6);
  if (((iVar9 != iVar8 || iVar5 != iVar7) || iVar6 != iVar4) || local_a8 != iVar3) {
    pdVar13 = (double *)0x0;
  }
  dVar2 = *pdVar13;
  *(undefined1 *)(local_98 + 0x18) = 0;
  puVar12 = (undefined4 *)FUN_14162c970();
  local_88 = *puVar12;
  uStack_84 = puVar12[1];
  uStack_80 = puVar12[2];
  uStack_7c = puVar12[3];
  local_78 = &PTR_FUN_144cc2310;
  local_70 = dVar1 * dVar2;
  FExpressionNode::FExpressionNode(lVar10 + 0x20,&local_88);
  *(undefined1 *)(lVar10 + 0x60) = 1;
  FExpressionNode::~FExpressionNode(&local_88);
  return lVar10;
}



// FUNCTION 141621280 FUN_141621280 body=192 status=ok
// SIG undefined FUN_141621280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141621280(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  piVar2 = (int *)FUN_14162c970();
  piVar3 = param_3 + 6;
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *piVar2 != *param_3) {
    piVar3 = (int *)0x0;
  }
  uVar1 = *(undefined8 *)piVar3;
  *(undefined1 *)(param_2 + 0x18) = 0;
  puVar4 = (undefined4 *)FUN_14162c970();
  local_68 = *puVar4;
  uStack_64 = puVar4[1];
  uStack_60 = puVar4[2];
  uStack_5c = puVar4[3];
  local_58 = &PTR_FUN_144cc2310;
  local_50 = uVar1;
  FExpressionNode::FExpressionNode(param_2 + 0x20,&local_68);
  *(undefined1 *)(param_2 + 0x60) = 1;
  FExpressionNode::~FExpressionNode(&local_68);
  return param_2;
}



// FUNCTION 141621340 operator() body=278 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UE4Function_Private::
         TFunctionRefBase<TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
         ::operator()(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  char local_78;
  undefined1 local_70 [64];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar3 = 0;
  local_98 = param_4;
  if (*(int *)(param_1 + 8) != 0) {
    plVar5 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 8))();
    }
  }
  lVar4 = (*(code *)*param_1)(local_90,uVar3,param_3,&local_98);
  *(undefined1 *)(param_2 + 0x18) = 0;
  if (*(char *)(lVar4 + 0x18) != '\0') {
    FText::FText(param_2,lVar4);
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  *(undefined1 *)(param_2 + 0x60) = 0;
  if (*(char *)(lVar4 + 0x60) != '\0') {
    FExpressionNode::FExpressionNode(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  if (local_30 != '\0') {
    local_30 = '\0';
    FExpressionNode::~FExpressionNode(local_70);
  }
  if (local_78 != '\0') {
    local_78 = 0;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_88 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141621470 FUN_141621470 body=72 status=ok
// SIG undefined FUN_141621470(void)

undefined8 * FUN_141621470(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1416214c0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneGeometryCacheTrack::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_140970480(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141621510 FUN_141621510 body=98 status=ok
// SIG undefined FUN_141621510(void)

undefined8 * FUN_141621510(undefined8 *param_1,uint param_2)

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
  *param_1 = &PTR_FUN_143f48658;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141621580 `scalar_deleting_destructor' body=207 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FLogSuppressionImplementation::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x10);
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141621650 FUN_141621650 body=52 status=ok
// SIG undefined FUN_141621650(void)

undefined8 FUN_141621650(undefined8 param_1,ulonglong param_2)

{
  FUN_140970480();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141621690 FUN_141621690 body=167 status=ok
// SIG undefined FUN_141621690(void)

longlong FUN_141621690(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141621750 AddMessageInternal body=217 status=ok
// SIG undefined AddMessageInternal(void)

void FBasicMessageLog::AddMessageInternal(undefined8 param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_3 != '\0') {
    uVar5 = FUN_1416382f0(*param_2,local_28);
    FText::ToString(uVar5);
    AK::MemoryMgr::StartProfileThreadUsage(0x44cc2030);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
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



// FUNCTION 141621830 AddMessages body=302 status=ok
// SIG undefined AddMessages(void)

void FBasicMessageLog::AddMessages(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  
  for (iVar7 = 0; (-1 < iVar7 && (iVar7 < (int)param_2[1])); iVar7 = iVar7 + 1) {
    if (param_3 != '\0') {
      uVar6 = FUN_1416382f0(*(undefined8 *)((longlong)iVar7 * 0x10 + *param_2),local_38);
      FText::ToString(uVar6);
      AK::MemoryMgr::StartProfileThreadUsage(0x44cc2030);
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
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
  }
  return;
}



// FUNCTION 141621960 FUN_141621960 body=136 status=ok
// SIG undefined FUN_141621960(void)

undefined8 FUN_141621960(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x10));
  *puVar3 = *param_3;
  lVar2 = param_3[1];
  puVar3[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,param_2);
  return param_2;
}



// FUNCTION 1416219f0 FUN_1416219f0 body=23 status=ok
// SIG undefined FUN_1416219f0(void)

undefined8 FUN_1416219f0(char param_1)

{
  if (param_1 != '\v') {
    return 0x3ff0000000000000;
  }
  return 0x404ca5dc0d03cf26;
}



// FUNCTION 141621a10 ApplyGlobalChanges body=606 status=ok
// SIG undefined ApplyGlobalChanges(void)

void FLogSuppressionImplementation::ApplyGlobalChanges(longlong param_1)

{
  byte *pbVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_c8;
  uint *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  longlong lStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  local_a8 = (longlong *)(param_1 + 0x10);
  bVar10 = DAT_1464aa820 < DAT_1464aaa18;
  puStack_c0 = (uint *)(param_1 + 0x20);
  bVar2 = DAT_1464aaa18 < DAT_1464aa820;
  DAT_1464aaa18 = DAT_1464aa820;
  bVar11 = DAT_1468b5ec4 == '\0';
  iVar6 = *(int *)(param_1 + 0x38);
  bVar12 = DAT_1464aa821 == 0;
  local_c8 = 0x100000000;
  iStack_b4 = 0;
  iStack_b0 = 0;
  if (iVar6 != 0) {
    puVar9 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar9 = puStack_c0;
    }
    uVar4 = *puVar9;
    iStack_b0 = 0;
    iVar5 = 0;
    while (uVar4 == 0) {
      iStack_b0 = iStack_b0 + 0x20;
      uVar3 = (ulonglong)local_c8 >> 0x20;
      local_c8 = CONCAT44((int)uVar3,iVar5 + 1);
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141621b1c;
      uVar4 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_c8 = CONCAT44(uVar4,(undefined4)local_c8);
    if (uVar4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_b4 = (iStack_b0 - iVar5) + 0x1f;
    if (iVar6 < iStack_b4) {
LAB_141621b1c:
      iStack_b4 = iVar6;
    }
  }
  local_b8 = 0xffffffff;
  uStack_90 = CONCAT44(iStack_b4,0xffffffff);
  auStack_50._8_4_ = iStack_b0;
  auStack_50._0_8_ = uStack_90;
  auStack_50._12_4_ = uStack_ac;
  lStack_60 = local_c8;
  local_70 = 0;
  local_40._0_4_ = SUB84(local_a8,0);
  local_40._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0 = local_c8;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  iVar6 = iStack_b4;
  DAT_1468b5ec4 = DAT_1464aa821;
  local_98 = puStack_c0;
  local_78 = local_a8;
  local_68 = local_a8;
  puStack_58 = puStack_c0;
  local_40 = local_a8;
  if (iStack_b4 < *(int *)(param_1 + 0x38)) {
    do {
      pbVar1 = *(byte **)(*local_a8 + (longlong)iVar6 * 0x18);
      bVar7 = *pbVar1;
      bVar8 = bVar7;
      if ((bVar10) && (DAT_1464aa820 <= bVar7)) {
        bVar8 = DAT_1464aa820;
      }
      if (bVar2) {
        if (bVar7 <= DAT_1464aa820) {
          bVar7 = DAT_1464aa820;
        }
        bVar8 = bVar7;
        if (pbVar1[3] <= bVar7) {
          bVar8 = pbVar1[3];
        }
      }
      if (bVar8 != 0) {
        local_c8 = *local_a8 + (longlong)iVar6 * 0x18 + 8;
        puStack_c0 = (uint *)local_res8;
        local_res8[0] = bVar8;
        FUN_140c2d3a0(param_1 + 0x100,local_res10,&local_c8,0);
      }
      *pbVar1 = bVar8;
      if (bVar12 != bVar11) {
        pbVar1[1] = DAT_1464aa821;
      }
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      iVar6 = uStack_90._4_4_;
    } while (uStack_90._4_4_ < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141621c70 AreUnitsCompatible body=39 status=ok
// SIG undefined AreUnitsCompatible(void)

undefined8 FUnitConversion::AreUnitsCompatible(byte param_1,byte param_2)

{
  if (((param_1 != 0x32) && (param_2 != 0x32)) &&
     (*(int *)(&DAT_144cbe6f0 + (ulonglong)param_1 * 4) !=
      *(int *)(&DAT_144cbe6f0 + (ulonglong)param_2 * 4))) {
    return 0;
  }
  return 1;
}



// FUNCTION 141621ca0 AssertFailed body=315 status=ok
// SIG undefined AssertFailed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FDebug::AssertFailed
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined1 auStack_2988 [32];
  undefined8 local_2968;
  undefined1 *local_2960;
  undefined1 local_2958 [256];
  longlong local_2858;
  undefined8 local_2850;
  undefined1 local_2838 [2048];
  undefined1 local_2038 [8192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2988;
  if (DAT_1468c2174 == '\0') {
    DAT_1468b5a75 = 1;
    puVar1 = (ulonglong *)__local_stdio_printf_options();
    local_2968 = 0;
    local_2960 = &stack0x00000028;
    __stdio_common_vswprintf(*puVar1 | 1,local_2038,0xfff,param_4);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_2958,param_1);
    TCString<wchar_t>::SprintfImpl(local_2838,&DAT_144cbde8c,local_2850);
    if (local_2858 != 0) {
      FMemory::Free();
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_2958,param_2);
    local_2960 = local_2038;
    local_2968 = CONCAT44(local_2968._4_4_,param_3);
    FOutputDevice::LogfImpl
              (DAT_1468e28f0,L"Assertion failed: %s [File:%s] [Line: %i] \n%s\n",local_2838,
               local_2850);
    if (local_2858 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141621de0 FUN_141621de0 body=885 status=ok
// SIG undefined FUN_141621de0(void)

void FUN_141621de0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  longlong local_res18;
  undefined1 **local_98;
  undefined1 **local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int iStack_44;
  longlong *plStack_40;
  
  local_res18 = *(longlong *)(param_2 + 8);
  local_98 = &local_res10;
  local_90 = (undefined1 **)&local_res18;
  local_res10 = param_2;
  FUN_140a9d130(param_1 + 0x10,local_res8,&local_98,0);
  lVar2 = local_res18;
  plVar1 = (longlong *)(param_1 + 0x60);
  bVar3 = false;
  uStack_50 = (undefined1 *)local_res18;
  local_48 = -1;
  iStack_44 = -1;
  local_58 = plVar1;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(plVar1,*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94),0);
  puVar5 = uStack_50;
  plVar4 = local_58;
  iVar10 = -1;
  if (*(int *)(param_1 + 0xa8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar6 = param_1 + 0x98;
    }
    iStack_44 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)uStack_50) &
                                 (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4);
    iVar10 = iStack_44;
    local_48 = iStack_44;
    if (iStack_44 != -1) {
      do {
        iStack_44 = *(int *)(*plVar1 + 0x10 + (longlong)iVar10 * 0x18);
        local_48 = iVar10;
        if (*(undefined1 **)(*plVar1 + (longlong)iVar10 * 0x18) == (undefined1 *)lVar2) break;
        iVar10 = iStack_44;
        local_48 = iStack_44;
      } while (iStack_44 != -1);
    }
  }
  local_68 = CONCAT44(iStack_44,local_48);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  iStack_70 = (int)uStack_50;
  uStack_6c = uStack_50._4_4_;
  plStack_60 = plVar1;
  plStack_40 = plVar1;
  if (iVar10 != -1) {
    bVar3 = true;
    iVar10 = iStack_44;
    iVar9 = local_48;
    do {
      lVar2 = (longlong)iVar9 * 0x18;
      if (*(undefined1 **)(lVar2 + 8 + *plVar4) == local_res10) {
        puVar7 = (undefined8 *)FName::ToString(&local_res18,&local_98);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar7;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x1a5,
                   L"Log suppression category %s was somehow declared twice with the same data.",
                   puVar8);
        if (local_98 != (undefined1 **)0x0) {
          FMemory::Free();
        }
        puVar7 = (undefined8 *)FName::ToString(&local_res18,local_88);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar7;
        }
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x1a5,
                   L"Log suppression category %s was somehow declared twice with the same data.",
                   puVar8);
        if (local_88[0] != 0) {
          FMemory::Free();
        }
      }
      if (*(char *)(*(longlong *)(lVar2 + 8 + *plVar4) + 3) != local_res10[3]) {
        puVar7 = (undefined8 *)FName::ToString(&local_res18,&local_78);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar7;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x1aa,
                   L"Log suppression category %s is defined multiple times with different compile time verbosity."
                   ,puVar8);
        if (CONCAT44(uStack_74,local_78) != 0) {
          FMemory::Free();
        }
        puVar7 = (undefined8 *)FName::ToString(&local_res18,&local_58);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar7;
        }
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x1aa,
                   L"Log suppression category %s is defined multiple times with different compile time verbosity."
                   ,puVar8);
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      *local_res10 = **(undefined1 **)(lVar2 + 8 + *plVar4);
      local_res10[1] = *(undefined1 *)(*(longlong *)(lVar2 + 8 + *plVar4) + 1);
      local_res10[2] = *(undefined1 *)(*(longlong *)(lVar2 + 8 + *plVar4) + 2);
      if (iVar10 == -1) break;
      iVar9 = iVar10;
      do {
        iVar10 = *(int *)(*plVar4 + 0x10 + (longlong)iVar9 * 0x18);
        if (*(undefined1 **)(*plVar4 + (longlong)iVar9 * 0x18) == puVar5) break;
        iVar9 = iVar10;
      } while (iVar10 != -1);
    } while (iVar9 != -1);
  }
  local_98 = (undefined1 **)&local_res18;
  local_90 = &local_res10;
  FUN_14158b890(plVar1,local_res8,&local_98,0);
  if (!bVar3) {
    FUN_141636830(param_1,local_res10,local_res18);
  }
  return;
}



// FUNCTION 141622160 CInterpTo body=307 status=ok
// SIG undefined CInterpTo(void)

float * FMath::CInterpTo(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0.0 < param_5) {
    fVar1 = param_3[1];
    fVar10 = *param_2 - *param_3;
    fVar2 = param_3[2];
    fVar11 = param_2[1] - fVar1;
    fVar3 = param_3[3];
    fVar9 = param_2[2] - fVar2;
    fVar8 = param_2[3] - fVar3;
    if (0.0001 <= SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8)) {
      param_4 = param_4 * param_5;
      fVar8 = 0.0;
      if ((0.0 <= param_4) && (fVar8 = param_4, 1.0 <= param_4)) {
        fVar8 = 1.0;
      }
      fVar9 = param_2[1];
      fVar10 = param_2[2];
      fVar11 = param_2[3];
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      *param_1 = (*param_3 - *param_2) * fVar8 + *param_2;
      fVar6 = param_2[3];
      param_1[1] = (fVar1 - fVar9) * fVar8 + fVar4;
      param_1[2] = (fVar2 - fVar10) * fVar8 + fVar5;
      param_1[3] = (fVar3 - fVar11) * fVar8 + fVar6;
      return param_1;
    }
  }
  uVar7 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 2) = uVar7;
  return param_1;
}



// FUNCTION 1416222a0 CalcTangents body=931 status=ok
// SIG undefined CalcTangents(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FQuat::CalcTangents(float *param_1,float *param_2,float *param_3,undefined8 param_4,
                        float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
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
  
  fVar12 = *param_1;
  fVar5 = param_1[1];
  fVar17 = param_1[2];
  fVar18 = param_1[3];
  fVar7 = -param_2[1];
  fVar16 = param_2[3];
  fVar8 = -param_2[2];
  fVar19 = -*param_2;
  fVar9 = fVar18 * fVar19 * _DAT_1468b5bc0 + fVar16 * fVar12 + fVar17 * fVar7 * _DAT_1468b5bb0 +
          fVar5 * fVar8 * _DAT_1468b5ba0;
  fVar10 = fVar17 * fVar19 * fRam00000001468b5bc4 + fVar16 * fVar5 +
           fVar18 * fVar7 * fRam00000001468b5bb4 + fVar12 * fVar8 * fRam00000001468b5ba4;
  fVar11 = fVar5 * fVar19 * fRam00000001468b5bc8 + fVar16 * fVar17 +
           fVar12 * fVar7 * fRam00000001468b5bb8 + fVar18 * fVar8 * fRam00000001468b5ba8;
  fVar12 = fVar12 * fVar19 * fRam00000001468b5bcc + fVar16 * fVar18 +
           fVar5 * fVar7 * fRam00000001468b5bbc + fVar17 * fVar8 * fRam00000001468b5bac;
  if (ABS(fVar12) < 1.0) {
    if (-1.0 <= fVar12) {
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
    }
    else {
      fVar12 = -1.0;
    }
    fVar12 = ::_guard_xfg_dispatch_icall_nop(fVar12);
    fVar5 = ::_guard_xfg_dispatch_icall_nop(fVar12);
    if (1e-08 <= ABS(fVar5)) {
      fVar12 = fVar12 / fVar5;
      fVar9 = fVar9 * fVar12;
      fVar10 = fVar10 * fVar12;
      fVar11 = fVar11 * fVar12;
    }
  }
  fVar4 = fRam00000001468b5bac;
  fVar3 = fRam00000001468b5ba8;
  fVar2 = fRam00000001468b5ba4;
  fVar1 = _DAT_1468b5ba0;
  fVar12 = *param_3;
  fVar5 = param_3[1];
  fVar17 = param_3[2];
  fVar18 = param_3[3];
  fVar13 = fVar18 * fVar19 * _DAT_1468b5bc0 + fVar12 * fVar16 + fVar17 * fVar7 * _DAT_1468b5bb0 +
           fVar5 * fVar8 * _DAT_1468b5ba0;
  fVar14 = fVar17 * fVar19 * fRam00000001468b5bc4 + fVar5 * fVar16 +
           fVar18 * fVar7 * fRam00000001468b5bb4 + fVar12 * fVar8 * fRam00000001468b5ba4;
  fVar15 = fVar5 * fVar19 * fRam00000001468b5bc8 + fVar17 * fVar16 +
           fVar12 * fVar7 * fRam00000001468b5bb8 + fVar18 * fVar8 * fRam00000001468b5ba8;
  fVar16 = fVar12 * fVar19 * fRam00000001468b5bcc + fVar18 * fVar16 +
           fVar5 * fVar7 * fRam00000001468b5bbc + fVar17 * fVar8 * fRam00000001468b5bac;
  if (ABS(fVar16) < 1.0) {
    fVar12 = -1.0;
    if ((-1.0 <= fVar16) && (fVar12 = fVar16, 1.0 <= fVar16)) {
      fVar12 = 1.0;
    }
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar12);
    fVar12 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    if (1e-08 <= ABS(fVar12)) {
      fVar16 = fVar16 / fVar12;
      fVar13 = fVar13 * fVar16;
      fVar14 = fVar14 * fVar16;
      fVar15 = fVar15 * fVar16;
    }
  }
  fVar14 = fVar14 + fVar10;
  fVar9 = fVar9 + fVar13;
  fVar15 = fVar15 + fVar11;
  fVar17 = fVar14 * -0.5;
  fVar5 = fVar9 * -0.5;
  fVar18 = fVar15 * -0.5;
  fVar16 = SQRT((fVar14 * fVar14 + fVar9 * fVar9 + fVar15 * fVar15) * 0.25);
  uVar6 = __libm_sse2_sincosf_(fVar16);
  fVar12 = (float)((ulonglong)uVar6 >> 0x20);
  if (1e-08 <= ABS((float)uVar6)) {
    fVar16 = (float)uVar6 / fVar16;
    fVar5 = fVar5 * fVar16;
    fVar17 = fVar17 * fVar16;
    fVar18 = fVar18 * fVar16;
  }
  fVar16 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar13 = fVar18 * fVar16 * fRam00000001468b5bc4;
  fVar14 = fVar17 * fVar16 * fRam00000001468b5bc8;
  fVar15 = fVar5 * fVar16 * fRam00000001468b5bcc;
  fVar10 = fVar12 * fVar7 * fRam00000001468b5bb4;
  fVar11 = fVar5 * fVar7 * fRam00000001468b5bb8;
  fVar19 = fVar17 * fVar7 * fRam00000001468b5bbc;
  *param_5 = fVar12 * fVar16 * _DAT_1468b5bc0 + fVar9 * fVar5 + fVar18 * fVar7 * _DAT_1468b5bb0 +
             fVar17 * fVar8 * fVar1;
  param_5[1] = fVar13 + fVar9 * fVar17 + fVar10 + fVar5 * fVar8 * fVar2;
  param_5[2] = fVar14 + fVar9 * fVar18 + fVar11 + fVar12 * fVar8 * fVar3;
  param_5[3] = fVar15 + fVar9 * fVar12 + fVar19 + fVar18 * fVar8 * fVar4;
  return;
}



// FUNCTION 141622650 FUN_141622650 body=76 status=ok
// SIG undefined FUN_141622650(void)

longlong FUN_141622650(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 0x18) != '\0') {
    FText::FText();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_2 + 0x60) != '\0') {
    FExpressionNode::FExpressionNode(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return param_1;
}



// FUNCTION 1416226a0 FUN_1416226a0 body=200 status=ok
// SIG undefined FUN_1416226a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1416226a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar4 = (*(code *)*param_2)(local_48,param_3);
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(lVar4 + 0x18) != '\0') {
    FText::FText(param_1,lVar4);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (local_30 == '\0') {
    return param_1;
  }
  local_30 = 0;
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
  return param_1;
}



// FUNCTION 141622770 FUN_141622770 body=45 status=ok
// SIG undefined FUN_141622770(void)

undefined8
FUN_141622770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141620520(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416227a0 FUN_1416227a0 body=35 status=ok
// SIG undefined FUN_1416227a0(void)

undefined8
FUN_1416227a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_141620670(param_2,param_1,param_3,*param_4);
  return param_1;
}



// FUNCTION 1416227d0 FUN_1416227d0 body=35 status=ok
// SIG undefined FUN_1416227d0(void)

undefined8
FUN_1416227d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_141620900(param_2,param_1,param_3,*param_4);
  return param_1;
}



// FUNCTION 141622800 FUN_141622800 body=45 status=ok
// SIG undefined FUN_141622800(void)

undefined8
FUN_141622800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_1416209d0(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141622830 FUN_141622830 body=45 status=ok
// SIG undefined FUN_141622830(void)

undefined8
FUN_141622830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141620b30(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141622860 FUN_141622860 body=45 status=ok
// SIG undefined FUN_141622860(void)

undefined8
FUN_141622860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141620c80(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141622890 FUN_141622890 body=45 status=ok
// SIG undefined FUN_141622890(void)

undefined8
FUN_141622890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141620e20(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416228c0 FUN_1416228c0 body=45 status=ok
// SIG undefined FUN_1416228c0(void)

undefined8
FUN_1416228c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141621130(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416228f0 FUN_1416228f0 body=35 status=ok
// SIG undefined FUN_1416228f0(void)

undefined8
FUN_1416228f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_141621280(param_2,param_1,param_3,*param_4);
  return param_1;
}



// FUNCTION 141622920 ClampAngle body=497 status=ok
// SIG undefined ClampAngle(void)

undefined8 FMath::ClampAngle(undefined8 param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar2 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  fVar6 = (float)param_3 - param_2;
  fVar4 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
  if (ABS(fVar6) < ABS(fVar4)) {
    fVar4 = fVar6;
  }
  fVar6 = fVar6 - fVar4;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + 360.0;
  }
  fVar6 = fVar6 * 0.5;
  param_2 = fVar6 + param_2;
  fVar4 = (float)(int)(param_2 * 0.0027777778) * 360.0;
  if (ABS(param_2) < ABS(fVar4)) {
    fVar4 = param_2;
  }
  param_2 = param_2 - fVar4;
  if (param_2 < 0.0) {
    param_2 = param_2 + 360.0;
  }
  fVar5 = fVar1 - param_2;
  fVar4 = (float)(int)(fVar5 * 0.0027777778) * 360.0;
  if (ABS(fVar5) < ABS(fVar4)) {
    fVar4 = fVar5;
  }
  fVar5 = fVar5 - fVar4;
  if (fVar5 < 0.0) {
    fVar5 = fVar5 + 360.0;
  }
  if (180.0 < fVar5) {
    fVar5 = fVar5 - 360.0;
  }
  if (fVar5 <= fVar6) {
    if (-fVar6 <= fVar5) {
      param_2 = (float)(int)(fVar1 * 0.0027777778) * 360.0;
      if (ABS(fVar1) < ABS(param_2)) {
        param_2 = fVar1;
      }
      param_2 = fVar1 - param_2;
      if (param_2 < 0.0) {
        param_2 = param_2 + 360.0;
      }
      uVar3 = uVar2;
      if (180.0 < param_2) {
        param_2 = param_2 - 360.0;
      }
      goto LAB_141622af1;
    }
    param_2 = param_2 - fVar6;
  }
  else {
    param_2 = param_2 + fVar6;
  }
  fVar4 = (float)(int)(param_2 * 0.0027777778) * 360.0;
  if (ABS(param_2) < ABS(fVar4)) {
    fVar4 = param_2;
  }
  param_2 = param_2 - fVar4;
  if (param_2 < 0.0) {
    param_2 = param_2 + 360.0;
  }
  if (180.0 < param_2) {
    param_2 = param_2 - 360.0;
  }
LAB_141622af1:
  return CONCAT44(uVar3,param_2);
}



// FUNCTION 141622b20 ClampFloatTangent body=399 status=ok
// SIG undefined ClampFloatTangent(void)

undefined8
ClampFloatTangent(float param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  uVar2 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar3 = param_6 - param_2;
  param_6 = param_6 - param_4;
  param_4 = param_4 - param_2;
  if (param_6 <= 0.0001) {
    param_6 = 0.0001;
  }
  if (param_4 <= 0.0001) {
    param_4 = 0.0001;
  }
  if (fVar3 <= 0.0001) {
    fVar3 = 0.0001;
  }
  fVar4 = param_5 - param_1;
  param_5 = param_5 - (float)param_3;
  param_1 = (float)param_3 - param_1;
  if (0.0 <= param_1) {
    if (param_5 <= 0.0) {
      return 0;
    }
    if (0.0 < param_1) goto LAB_141622bbc;
  }
  if (0.0 <= param_5) {
    return 0;
  }
LAB_141622bbc:
  fVar3 = fVar4 / fVar3;
  fVar1 = param_1 / fVar4;
  if (fVar4 <= 0.0) {
    fVar4 = fVar3;
    if ((fVar1 < 0.333) &&
       (fVar5 = (1.0 - fVar1 * 3.003003) * (param_1 / param_4 - fVar3) + fVar3, fVar3 < fVar5)) {
      fVar4 = fVar5;
    }
    fVar5 = fVar4;
    uVar6 = 0;
    if ((0.667 < fVar1) &&
       (fVar5 = (fVar1 - 0.667) * 3.003003 * (param_5 / param_6 - fVar3) + fVar3, uVar6 = uVar2,
       fVar5 <= fVar4)) {
      fVar5 = fVar4;
    }
  }
  else {
    fVar4 = fVar3;
    if ((fVar1 < 0.333) &&
       (fVar5 = (1.0 - fVar1 * 3.003003) * (param_1 / param_4 - fVar3) + fVar3, fVar5 < fVar3)) {
      fVar4 = fVar5;
    }
    fVar5 = fVar4;
    uVar6 = 0;
    if ((0.667 < fVar1) &&
       (fVar5 = (fVar1 - 0.667) * 3.003003 * (param_5 / param_6 - fVar3) + fVar3, uVar6 = uVar2,
       fVar4 <= fVar5)) {
      fVar5 = fVar4;
    }
  }
  return CONCAT44(uVar6,fVar5);
}



// FUNCTION 141622cb0 ClosestPointOnSegment2D body=152 status=ok
// SIG undefined ClosestPointOnSegment2D(void)

float * FMath::ClosestPointOnSegment2D(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_3;
  fVar4 = *param_4 - fVar1;
  fVar5 = param_4[1] - param_3[1];
  fVar2 = (param_2[1] - param_3[1]) * fVar5 + (*param_2 - fVar1) * fVar4;
  if (fVar2 <= 0.0) {
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    return param_1;
  }
  fVar3 = fVar5 * fVar5 + fVar4 * fVar4;
  if (fVar3 <= fVar2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_4;
    return param_1;
  }
  fVar2 = fVar2 / fVar3;
  param_1[1] = fVar2 * fVar5 + param_3[1];
  *param_1 = fVar2 * fVar4 + fVar1;
  return param_1;
}



// FUNCTION 141622d50 ClosestPointOnSegment body=256 status=ok
// SIG undefined ClosestPointOnSegment(void)

float * FMath::ClosestPointOnSegment(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_4 - *param_3;
  fVar5 = param_4[1] - param_3[1];
  fVar6 = param_4[2] - param_3[2];
  fVar2 = (param_2[1] - param_3[1]) * fVar5 + (*param_2 - *param_3) * fVar4 +
          (param_2[2] - param_3[2]) * fVar6;
  if (fVar2 <= 0.0) {
    fVar2 = param_3[2];
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    param_1[2] = fVar2;
    return param_1;
  }
  fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
  if (fVar3 <= fVar2) {
    fVar2 = param_4[2];
    *(undefined8 *)param_1 = *(undefined8 *)param_4;
    param_1[2] = fVar2;
    return param_1;
  }
  fVar2 = fVar2 / fVar3;
  fVar3 = *param_3;
  fVar1 = param_3[1];
  param_1[2] = fVar2 * fVar6 + param_3[2];
  *param_1 = fVar2 * fVar4 + fVar3;
  param_1[1] = fVar2 * fVar5 + fVar1;
  return param_1;
}



// FUNCTION 141622e50 FUN_141622e50 body=1026 status=ok
// SIG undefined FUN_141622e50(void)

undefined8 *
FUN_141622e50(undefined8 *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
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
  float fVar19;
  float fVar20;
  undefined8 local_d8;
  float local_d0;
  float local_c0;
  float local_b0;
  
  fVar15 = *param_5 - *param_3;
  fVar8 = param_3[2] - param_4[2];
  fVar14 = param_5[1] - param_3[1];
  fVar12 = *param_3 - *param_4;
  local_b0 = param_4[2];
  fVar16 = param_4[2] - param_5[2];
  uVar1 = *(undefined8 *)param_4;
  fVar17 = *param_4 - *param_5;
  local_d8 = *(undefined8 *)param_3;
  fVar9 = param_3[1] - param_4[1];
  local_d0 = param_3[2];
  fVar11 = param_5[2] - param_3[2];
  fVar20 = param_4[1] - param_5[1];
  fVar7 = fVar16 * fVar9 - fVar20 * fVar8;
  fVar6 = fVar17 * fVar8 - fVar16 * fVar12;
  fVar5 = fVar20 * fVar12 - fVar17 * fVar9;
  fVar19 = fVar6 * fVar8 - fVar5 * fVar9;
  fVar18 = fVar5 * fVar12 - fVar7 * fVar8;
  fVar12 = fVar7 * fVar9 - fVar6 * fVar12;
  fVar13 = fVar6 * fVar11 - fVar5 * fVar14;
  local_c0 = param_5[2];
  fVar10 = fVar5 * fVar15 - fVar7 * fVar11;
  fVar11 = fVar7 * fVar14 - fVar6 * fVar15;
  fVar14 = fVar6 * fVar16 - fVar5 * fVar20;
  fVar8 = *param_2;
  fVar9 = param_2[2];
  fVar15 = fVar5 * fVar17 - fVar7 * fVar16;
  fVar7 = fVar7 * fVar20 - fVar6 * fVar17;
  fVar5 = param_2[1];
  uVar4 = *(undefined8 *)param_2;
  bVar2 = 0.0 < (fVar18 * fVar5 + fVar8 * fVar19 + fVar12 * fVar9) -
                (fVar18 * (float)((ulonglong)uVar1 >> 0x20) + fVar19 * (float)uVar1 +
                fVar12 * local_b0);
  fVar6 = (float)((ulonglong)local_d8 >> 0x20) * fVar10 + (float)local_d8 * fVar13 +
          local_d0 * fVar11;
  if (0.0 < (fVar13 * fVar8 + fVar10 * fVar5 + fVar11 * fVar9) - fVar6) {
    bVar2 = bVar2 | 2;
  }
  if (0.0 < (fVar15 * fVar5 + fVar8 * fVar14 + fVar7 * fVar9) -
            ((float)((ulonglong)*(undefined8 *)param_5 >> 0x20) * fVar15 +
             (float)*(undefined8 *)param_5 * fVar14 + local_c0 * fVar7)) {
    bVar2 = bVar2 | 4;
  }
  switch(bVar2) {
  case 0:
    FVector::PointPlaneProject(param_1,param_2,fVar6,param_4,param_5);
    break;
  case 1:
    param_5 = param_3;
  case 4:
    param_3 = param_4;
  case 2:
    puVar3 = (undefined8 *)FMath::ClosestPointOnSegment(&local_d8,param_2,param_3,param_5);
    uVar4 = *puVar3;
    fVar9 = *(float *)(puVar3 + 1);
  default:
    *param_1 = uVar4;
    *(float *)(param_1 + 1) = fVar9;
    break;
  case 3:
    *param_1 = *(undefined8 *)param_3;
    *(float *)(param_1 + 1) = param_3[2];
    break;
  case 5:
    *param_1 = uVar1;
    *(float *)(param_1 + 1) = param_4[2];
    break;
  case 6:
    *param_1 = *(undefined8 *)param_5;
    *(float *)(param_1 + 1) = param_5[2];
  }
  return param_1;
}



// FUNCTION 141623270 ComputeBaryCentric2D body=880 status=ok
// SIG undefined ComputeBaryCentric2D(void)

float * FMath::ComputeBaryCentric2D
                  (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar12 = (param_4[1] - fVar1) * (param_5[2] - fVar2) - (param_4[2] - fVar2) * (param_5[1] - fVar1)
  ;
  fVar11 = (*param_4 - fVar3) * (param_5[1] - fVar1) - (param_4[1] - fVar1) * (*param_5 - fVar3);
  fVar10 = (param_4[2] - fVar2) * (*param_5 - fVar3) - (*param_4 - fVar3) * (param_5[2] - fVar2);
  fVar7 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
  if (1e-08 < fVar7) {
    fVar14 = fVar11;
    fVar15 = fVar12;
    fVar8 = fVar10;
    if ((fVar7 != 1.0) &&
       (fVar14 = DAT_1468b5d98, fVar15 = DAT_1468b5d90, fVar8 = DAT_1468b5d94, 1e-08 <= fVar7)) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar14 = fVar8 * fVar11;
      fVar15 = fVar12 * fVar8;
      fVar8 = fVar10 * fVar8;
    }
    fVar7 = param_2[2];
    fVar4 = param_2[1];
    fVar5 = *param_2;
    fVar13 = *param_5 - fVar5;
    fVar6 = param_5[1] - fVar4;
    fVar11 = 1.0 / (fVar10 * fVar8 + fVar12 * fVar15 + fVar14 * fVar11);
    fVar10 = param_5[2] - fVar7;
    fVar12 = (((param_4[1] - fVar4) * fVar10 - (param_4[2] - fVar7) * fVar6) * fVar15 +
              ((param_4[2] - fVar7) * fVar13 - (*param_4 - fVar5) * fVar10) * fVar8 +
             ((*param_4 - fVar5) * fVar6 - (param_4[1] - fVar4) * fVar13) * fVar14) * fVar11;
    *param_1 = fVar12;
    fVar11 = (((fVar2 - fVar7) * fVar6 - (fVar1 - fVar4) * fVar10) * fVar15 +
              ((fVar3 - fVar5) * fVar10 - (fVar2 - fVar7) * fVar13) * fVar8 +
             ((fVar1 - fVar4) * fVar13 - (fVar3 - fVar5) * fVar6) * fVar14) * fVar11;
    param_1[1] = fVar11;
    param_1[2] = (1.0 - fVar12) - fVar11;
  }
  else {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  return param_1;
}



// FUNCTION 1416235e0 ComputeProjectedSphereScissorRect body=437 status=ok
// SIG undefined ComputeProjectedSphereScissorRect(void)

undefined8
FMath::ComputeProjectedSphereScissorRect
          (longlong param_1,float *param_2,float param_3,float *param_4,float *param_5,
          undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  if ((fVar2 - param_4[1]) * (fVar2 - param_4[1]) + (fVar1 - *param_4) * (fVar1 - *param_4) +
      (fVar3 - param_4[2]) * (fVar3 - param_4[2]) <= param_3 * param_3) {
    uVar5 = 2;
  }
  else {
    uStack_4c = 0x3f800000;
    local_58 = 0x3f800000;
    uStack_54 = 0;
    uStack_50 = 0;
    local_48 = param_5[0xc] * 1.0 + fVar3 * param_5[8] + fVar2 * param_5[4] + fVar1 * *param_5;
    fStack_44 = param_5[0xd] * 1.0 + fVar3 * param_5[9] + fVar2 * param_5[5] + fVar1 * param_5[1];
    fVar6 = param_5[0xe] * 1.0 + fVar3 * param_5[10] + fVar2 * param_5[6] + fVar1 * param_5[2];
    fStack_3c = param_5[0xf] * 1.0 + fVar3 * param_5[0xb] + fVar2 * param_5[7] + fVar1 * param_5[3];
    fStack_40 = fVar6;
    cVar4 = ComputeProjectedSphereShaft
                      (local_48,fVar6,param_3,param_6,&local_58,0x3f800000,param_1,param_1 + 8);
    if (cVar4 != '\0') {
      local_58 = 0;
      uStack_54 = 0x3f800000;
      uStack_50 = 0;
      cVar4 = ComputeProjectedSphereShaft(fStack_44,fVar6,param_3);
      if (cVar4 != '\0') {
        return 1;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1416237a0 ComputeProjectedSphereShaft body=1118 status=ok
// SIG undefined ComputeProjectedSphereShaft(void)

undefined4
ComputeProjectedSphereShaft
          (float param_1,float param_2,float param_3,float *param_4,float *param_5,float param_6,
          int *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar1 = *param_7;
  iVar2 = *param_8;
  fVar6 = param_2 * param_2;
  fVar3 = (float)iVar1;
  fVar10 = (float)(iVar2 - iVar1);
  fVar4 = ((param_1 * param_1 - param_3 * param_3) + fVar6) * fVar6;
  if (0.0 <= fVar4) {
    fVar4 = SQRT(fVar4);
    fVar6 = 1.0 / (fVar6 + param_1 * param_1);
    fVar7 = (param_1 * param_3 - fVar4) * fVar6;
    fVar6 = (param_1 * param_3 + fVar4) * fVar6;
    fVar4 = (param_3 - fVar7 * param_1) * (1.0 / param_2);
    fVar8 = (param_3 - fVar6 * param_1) * (1.0 / param_2);
    fVar9 = param_2 - fVar4 * param_3;
    param_2 = param_2 - fVar8 * param_3;
    if (0.0 < fVar9) {
      fVar4 = -((fVar9 * fVar4) / fVar7);
      fVar5 = *param_5 * fVar4;
      fVar4 = param_5[1] * fVar4;
      fVar4 = ((*param_5 *
                (param_4[0xc] * 1.0 + fVar9 * param_4[8] + fVar4 * param_4[4] + fVar5 * *param_4) +
                param_5[1] *
                (param_4[0xd] * 1.0 + fVar9 * param_4[9] + fVar4 * param_4[5] + fVar5 * param_4[1])
               + param_5[2] *
                 (param_4[0xe] * 1.0 + fVar9 * param_4[10] + fVar4 * param_4[6] + fVar5 * param_4[2]
                 )) / (param_4[0xf] * 1.0 + fVar9 * param_4[0xb] +
                      fVar4 * param_4[7] + fVar5 * param_4[3]) + param_6) * 0.5 * param_6 *
              (fVar10 + fVar10) + fVar3 + fVar3;
      if (0x7fffffff < (uint)param_6 == 0x7fffffff < (uint)fVar7) {
        iVar2 = (int)ROUND(fVar4 - 0.5) >> 1;
        if (iVar1 <= iVar2) {
          iVar1 = iVar2;
        }
        *param_7 = iVar1;
      }
      else {
        iVar1 = -((int)ROUND(-0.5 - fVar4) >> 1);
        if (iVar1 <= iVar2) {
          iVar2 = iVar1;
        }
        *param_8 = iVar2;
      }
    }
    if (0.0 < param_2) {
      fVar4 = -((param_2 * fVar8) / fVar6);
      fVar7 = *param_5 * fVar4;
      fVar4 = param_5[1] * fVar4;
      fVar3 = ((*param_5 *
                (param_4[0xc] * 1.0 + param_2 * param_4[8] + fVar4 * param_4[4] + fVar7 * *param_4)
                + param_5[1] *
                  (param_4[0xd] * 1.0 + param_2 * param_4[9] +
                  fVar4 * param_4[5] + fVar7 * param_4[1]) +
               param_5[2] *
               (param_4[0xe] * 1.0 + param_2 * param_4[10] + fVar4 * param_4[6] + fVar7 * param_4[2]
               )) / (param_4[0xf] * 1.0 + param_2 * param_4[0xb] +
                    fVar4 * param_4[7] + fVar7 * param_4[3]) + param_6) * 0.5 * param_6 *
              (fVar10 + fVar10) + fVar3 + fVar3;
      if (0x7fffffff < (uint)fVar6 == 0x7fffffff < (uint)param_6) {
        iVar2 = (int)ROUND(fVar3 - 0.5) >> 1;
        iVar1 = *param_7;
        if (*param_7 <= iVar2) {
          iVar1 = iVar2;
        }
        *param_7 = iVar1;
      }
      else {
        iVar2 = -((int)ROUND(-0.5 - fVar3) >> 1);
        iVar1 = *param_8;
        if (iVar2 <= *param_8) {
          iVar1 = iVar2;
        }
        *param_8 = iVar1;
      }
    }
  }
  return CONCAT31((int3)((uint)*param_8 >> 8),*param_7 <= *param_8);
}



// FUNCTION 141623c00 ConsumeLocalizedNumberWithAgnosticFallback body=180 status=ok
// SIG undefined ConsumeLocalizedNumberWithAgnosticFallback(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeLocalizedNumberWithAgnosticFallback
                   (longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [24];
  char local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  ParseLocalizedNumberWithAgnosticFallback(local_80,param_2 + 0x10,0,&local_88);
  if (local_68 != '\0') {
    puVar1 = (undefined8 *)FUN_14162c970();
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    local_48 = &PTR_FUN_144cc2310;
    local_40 = local_88;
    FExpressionTokenConsumer::Add(param_2,local_80,&local_58);
    FExpressionNode::~FExpressionNode(&local_58);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 141623cc0 Copy body=60 status=ok
// SIG undefined Copy(void)

undefined8 * Impl::FInlineDataStorage<double>::Copy(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)FUN_14162c970();
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = &PTR_FUN_144cc2310;
  param_2[3] = uVar1;
  return param_2;
}



// FUNCTION 141623d00 FUN_141623d00 body=40 status=ok
// SIG undefined FUN_141623d00(void)

undefined8 * FUN_141623d00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162c9f0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2410;
  return param_2;
}



// FUNCTION 141623d30 FUN_141623d30 body=40 status=ok
// SIG undefined FUN_141623d30(void)

undefined8 * FUN_141623d30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162ca70();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc23f0;
  return param_2;
}



// FUNCTION 141623d60 FUN_141623d60 body=40 status=ok
// SIG undefined FUN_141623d60(void)

undefined8 * FUN_141623d60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162caf0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2390;
  return param_2;
}



// FUNCTION 141623d90 FUN_141623d90 body=40 status=ok
// SIG undefined FUN_141623d90(void)

undefined8 * FUN_141623d90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162cb70();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2370;
  return param_2;
}



// FUNCTION 141623dc0 FUN_141623dc0 body=40 status=ok
// SIG undefined FUN_141623dc0(void)

undefined8 * FUN_141623dc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162cbf0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2470;
  return param_2;
}



// FUNCTION 141623df0 FUN_141623df0 body=40 status=ok
// SIG undefined FUN_141623df0(void)

undefined8 * FUN_141623df0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162cc70();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2350;
  return param_2;
}



// FUNCTION 141623e20 FUN_141623e20 body=40 status=ok
// SIG undefined FUN_141623e20(void)

undefined8 * FUN_141623e20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162ccf0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2330;
  return param_2;
}



// FUNCTION 141623e50 FUN_141623e50 body=40 status=ok
// SIG undefined FUN_141623e50(void)

undefined8 * FUN_141623e50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162cd70();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc24b0;
  return param_2;
}



// FUNCTION 141623e80 FUN_141623e80 body=40 status=ok
// SIG undefined FUN_141623e80(void)

undefined8 * FUN_141623e80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162cdf0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2490;
  return param_2;
}



// FUNCTION 141623eb0 FUN_141623eb0 body=40 status=ok
// SIG undefined FUN_141623eb0(void)

undefined8 * FUN_141623eb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162ce70();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc23d0;
  return param_2;
}



// FUNCTION 141623ee0 FUN_141623ee0 body=40 status=ok
// SIG undefined FUN_141623ee0(void)

undefined8 * FUN_141623ee0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162cef0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc23b0;
  return param_2;
}



// FUNCTION 141623f10 FUN_141623f10 body=40 status=ok
// SIG undefined FUN_141623f10(void)

undefined8 * FUN_141623f10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162cf70();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2450;
  return param_2;
}



// FUNCTION 141623f40 FUN_141623f40 body=40 status=ok
// SIG undefined FUN_141623f40(void)

undefined8 * FUN_141623f40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14162cff0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cc2430;
  return param_2;
}



// FUNCTION 141623f70 FUN_141623f70 body=328 status=ok
// SIG undefined FUN_141623f70(void)

undefined8 * FUN_141623f70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x68);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_14161dfe0(lVar3,param_2,param_3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  *param_1 = plVar4;
  param_1[1] = plVar6;
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_1;
        }
      }
      plVar6 = (longlong *)param_1[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  return param_1;
}



// FUNCTION 1416240c0 FUN_1416240c0 body=451 status=ok
// SIG undefined FUN_1416240c0(void)

undefined8 * FUN_1416240c0(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  
  puVar4 = (undefined8 *)operator_new(0x60);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_144171b00;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    FText::FText(puVar4 + 5);
    FText::FText(puVar4 + 8);
    *(undefined4 *)(puVar4 + 0xb) = param_2;
    *puVar4 = &PTR_FUN_144cc1f08;
    uVar5 = FUN_14162c660(local_38,param_2);
    FText::operator=(puVar4 + 5,uVar5);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar8 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)puVar4;
    plVar8 = plVar6;
  }
  *param_1 = puVar4;
  param_1[1] = plVar8;
  plVar6 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if (*plVar6 != 0) {
      if (plVar6[1] != 0) {
        piVar1 = (int *)(plVar6[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar8 = (longlong *)param_1[1];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)puVar4;
    plVar7 = (longlong *)plVar6[1];
    if (plVar8 != plVar7) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 141624290 FUN_141624290 body=920 status=ok
// SIG undefined FUN_141624290(void)

longlong * FUN_141624290(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar6 = (longlong *)operator_new(0x40);
  plVar8 = (longlong *)0x0;
  plVar9 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    *(undefined4 *)(plVar6 + 6) = 4;
    plVar6[7] = 0;
    plVar9 = plVar6;
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144cc24d0;
    plVar6[2] = (longlong)plVar9;
    plVar8 = plVar6;
  }
  *param_1 = (longlong)plVar9;
  param_1[1] = (longlong)plVar8;
  if (plVar9 != (longlong *)0x0) {
    if (*plVar9 != 0) {
      if (plVar9[1] != 0) {
        piVar1 = (int *)(plVar9[1] + 8);
        LOCK();
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          *piVar1 = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (0 < iVar5) goto LAB_1416243cd;
      }
      plVar8 = (longlong *)param_1[1];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar9 = (longlong)plVar9;
    plVar6 = (longlong *)plVar9[1];
    if (plVar8 != plVar6) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar9[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar9[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_1416243cd:
  *(undefined4 *)(*param_1 + 0x30) = param_2;
  puVar7 = (undefined8 *)FUN_1416240c0(local_48,param_2);
  plVar8 = (longlong *)puVar7[1];
  uVar2 = *puVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar3 = *param_1;
  iVar5 = *(int *)(lVar3 + 0x18);
  *(int *)(lVar3 + 0x18) = iVar5 + 1;
  if (*(int *)(lVar3 + 0x1c) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x10,iVar5);
  }
  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar3 + 0x10));
  *puVar7 = uVar2;
  puVar7[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar3,local_68);
  plVar9 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  cVar4 = FText::IsEmpty(param_3);
  if (cVar4 == '\0') {
    puVar7 = (undefined8 *)FUN_140973510(local_38,param_3);
    plVar8 = (longlong *)puVar7[1];
    uVar2 = *puVar7;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    lVar3 = *param_1;
    iVar5 = *(int *)(lVar3 + 0x18);
    *(int *)(lVar3 + 0x18) = iVar5 + 1;
    if (*(int *)(lVar3 + 0x1c) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x10,iVar5);
    }
    puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar3 + 0x10));
    *puVar7 = uVar2;
    puVar7[1] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar3,local_58);
    plVar9 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 141624630 CreateColorMap body=4803 status=ok
// SIG undefined CreateColorMap(void)

void FColorList::CreateColorMap(longlong param_1)

{
  int iVar1;
  undefined4 local_res8 [2];
  undefined *local_res10;
  longlong local_48 [2];
  longlong *local_38;
  undefined **local_30;
  
  local_48[1] = 6;
  local_res10 = &DAT_1464aa7cc;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"black",0xc);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 0xb;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa840;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"aquamarine",0x16);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 0xf;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa844;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"bakerchocolate",0x1e);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 5;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa7a4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"blue",10);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 0xb;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa848;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"blueviolet",0x16);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 6;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa84c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"brass",0xc);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 0xb;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa850;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"brightgold",0x16);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 6;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa854;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"brown",0xc);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 7;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa858;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"bronze",0xe);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 9;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa85c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"bronzeii",0x12);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 10;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa860;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"cadetblue",0x14);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 0xb;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa864;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"coolcopper",0x16);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 7;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa868;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"copper",0xe);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 6;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa86c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"coral",0xc);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 0xf;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa870;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"cornflowerblue",0x1e);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 5;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa7c4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"cyan",10);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 10;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa874;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"darkbrown",0x14);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_48[0] = 0;
  local_48[1] = 10;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  local_res10 = &DAT_1464aa878;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"darkgreen",0x14);
  local_38 = local_48;
  local_30 = &local_res10;
  FUN_14056ac70(param_1 + 8,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  local_res8[0] = 0x12;
  *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res10;
  InitializeColor(param_1,L"darkgreencopper",&DAT_1464aa87c,local_res8);
  InitializeColor(param_1,L"darkolivegreen",&DAT_1464aa880,local_res8);
  InitializeColor(param_1,L"darkorchid",&DAT_1464aa884,local_res8);
  InitializeColor(param_1,L"darkpurple",&DAT_1464aa888,local_res8);
  InitializeColor(param_1,L"darkslateblue",&DAT_1464aa88c,local_res8);
  InitializeColor(param_1,L"darkslategrey",&DAT_1464aa890,local_res8);
  InitializeColor(param_1,L"darktan",&DAT_1464aa894,local_res8);
  InitializeColor(param_1,L"darkturquoise",&DAT_1464aa898,local_res8);
  InitializeColor(param_1,L"darkwood",&DAT_1464aa89c,local_res8);
  InitializeColor(param_1,L"dimgrey",&DAT_1464aa8a0,local_res8);
  InitializeColor(param_1,L"dustyrose",&DAT_1464aa8a4,local_res8);
  InitializeColor(param_1,L"feldspar",&DAT_1464aa8a8,local_res8);
  InitializeColor(param_1,L"firebrick",&DAT_1464aa8ac,local_res8);
  InitializeColor(param_1,L"forestgreen",&DAT_1464aa8b0,local_res8);
  InitializeColor(param_1,L"gold",&DAT_1464aa8b4,local_res8);
  InitializeColor(param_1,L"goldenrod",&DAT_1464aa8b8,local_res8);
  InitializeColor(param_1,L"green",&DAT_1464aa794,local_res8);
  InitializeColor(param_1,L"greencopper",&DAT_1464aa8c0,local_res8);
  InitializeColor(param_1,L"greenyellow",&DAT_1464aa8c4,local_res8);
  InitializeColor(param_1,L"grey",&DAT_1464aa8bc,local_res8);
  InitializeColor(param_1,L"huntergreen",&DAT_1464aa8c8,local_res8);
  InitializeColor(param_1,L"indianred",&DAT_1464aa8cc,local_res8);
  InitializeColor(param_1,L"khaki",&DAT_1464aa8d0,local_res8);
  InitializeColor(param_1,L"lightblue",&DAT_1464aa8d4,local_res8);
  InitializeColor(param_1,L"lightgrey",&DAT_1464aa8d8,local_res8);
  InitializeColor(param_1,L"lightsteelblue",&DAT_1464aa8dc,local_res8);
  InitializeColor(param_1,L"lightwood",&DAT_1464aa8e0,local_res8);
  InitializeColor(param_1,L"limegreen",&DAT_1464aa8e4,local_res8);
  InitializeColor(param_1,L"magenta",&DAT_1464aa7b4,local_res8);
  InitializeColor(param_1,L"mandarianorange",&DAT_1464aa8e8,local_res8);
  InitializeColor(param_1,L"maroon",&DAT_1464aa8ec,local_res8);
  InitializeColor(param_1,L"mediumaquamarine",&DAT_1464aa8f0,local_res8);
  InitializeColor(param_1,L"mediumblue",&DAT_1464aa8f4,local_res8);
  InitializeColor(param_1,L"mediumforestgreen",&DAT_1464aa8f8,local_res8);
  InitializeColor(param_1,L"mediumgoldenrod",&DAT_1464aa8fc,local_res8);
  InitializeColor(param_1,L"mediumorchid",&DAT_1464aa900,local_res8);
  InitializeColor(param_1,L"mediumseagreen",&DAT_1464aa904,local_res8);
  InitializeColor(param_1,L"mediumslateblue",&DAT_1464aa908,local_res8);
  InitializeColor(param_1,L"mediumspringgreen",&DAT_1464aa90c,local_res8);
  InitializeColor(param_1,L"mediumturquoise",&DAT_1464aa910,local_res8);
  InitializeColor(param_1,L"mediumvioletred",&DAT_1464aa914,local_res8);
  InitializeColor(param_1,L"mediumwood",&DAT_1464aa918,local_res8);
  InitializeColor(param_1,L"midnightblue",&DAT_1464aa91c,local_res8);
  InitializeColor(param_1,L"navyblue",&DAT_1464aa920,local_res8);
  InitializeColor(param_1,L"neonblue",&DAT_1464aa924,local_res8);
  InitializeColor(param_1,L"neonpink",&DAT_1464aa928,local_res8);
  InitializeColor(param_1,L"newmidnightblue",&DAT_1464aa92c,local_res8);
  InitializeColor(param_1,L"newtan",&DAT_1464aa930,local_res8);
  InitializeColor(param_1,L"oldgold",&DAT_1464aa934,local_res8);
  InitializeColor(param_1,L"orange",&DAT_1464aa938,local_res8);
  InitializeColor(param_1,L"orangered",&DAT_1464aa93c,local_res8);
  InitializeColor(param_1,L"orchid",&DAT_1464aa940,local_res8);
  InitializeColor(param_1,L"palegreen",&DAT_1464aa944,local_res8);
  InitializeColor(param_1,L"pink",&DAT_1464aa948,local_res8);
  InitializeColor(param_1,L"plum",&DAT_1464aa94c,local_res8);
  InitializeColor(param_1,L"quartz",&DAT_1464aa950,local_res8);
  InitializeColor(param_1,&DAT_144cb7240,&DAT_1464aa784,local_res8);
  InitializeColor(param_1,L"richblue",&DAT_1464aa954,local_res8);
  InitializeColor(param_1,L"salmon",&DAT_1464aa958,local_res8);
  InitializeColor(param_1,L"scarlet",&DAT_1464aa95c,local_res8);
  InitializeColor(param_1,L"seagreen",&DAT_1464aa960,local_res8);
  InitializeColor(param_1,L"semisweetchocolate",&DAT_1464aa964,local_res8);
  InitializeColor(param_1,L"sienna",&DAT_1464aa968,local_res8);
  InitializeColor(param_1,L"silver",&DAT_1464aa96c,local_res8);
  InitializeColor(param_1,L"skyblue",&DAT_1464aa970,local_res8);
  InitializeColor(param_1,L"slateblue",&DAT_1464aa974,local_res8);
  InitializeColor(param_1,L"spicypink",&DAT_1464aa978,local_res8);
  InitializeColor(param_1,L"springgreen",&DAT_1464aa97c,local_res8);
  InitializeColor(param_1,L"steelblue",&DAT_1464aa980,local_res8);
  InitializeColor(param_1,L"summersky",&DAT_1464aa984,local_res8);
  InitializeColor(param_1,&DAT_144cb7368,&DAT_1464aa988,local_res8);
  InitializeColor(param_1,L"thistle",&DAT_1464aa98c,local_res8);
  InitializeColor(param_1,L"turquoise",&DAT_1464aa990,local_res8);
  InitializeColor(param_1,L"verydarkbrown",&DAT_1464aa994,local_res8);
  InitializeColor(param_1,L"verylightgrey",&DAT_1464aa998,local_res8);
  InitializeColor(param_1,L"violet",&DAT_1464aa99c,local_res8);
  InitializeColor(param_1,L"violetred",&DAT_1464aa9a0,local_res8);
  InitializeColor(param_1,L"wheat",&DAT_1464aa9a4,local_res8);
  InitializeColor(param_1,L"white",&DAT_1464aa764,local_res8);
  InitializeColor(param_1,L"yellow",&DAT_1464aa7c8,local_res8);
  InitializeColor(param_1,L"yellowgreen",&DAT_1464aa9a8,local_res8);
  if (*(int *)(param_1 + 100) != *(int *)(param_1 + 0x60)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x58);
  }
  return;
}



// FUNCTION 141625900 FUN_141625900 body=91 status=ok
// SIG undefined FUN_141625900(void)

void FUN_141625900(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144cc2280;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144cc22c8;
  }
  return;
}



// FUNCTION 141625960 CurveFloatFindIntervalBounds body=132 status=ok
// SIG undefined CurveFloatFindIntervalBounds(void)

void CurveFloatFindIntervalBounds
               (undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  float fVar2;
  float local_res8 [2];
  float local_res10 [6];
  
  if ((*(char *)(param_1 + 4) == '\x01') || ((byte)(*(char *)(param_1 + 4) - 3U) < 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FindBounds(local_res8,local_res10,param_1[1],param_1[3],*param_1,param_2[1],param_2[2],*param_2,
             uVar1);
  fVar2 = *param_3;
  if (local_res8[0] <= *param_3) {
    fVar2 = local_res8[0];
  }
  *param_3 = fVar2;
  fVar2 = *param_4;
  if (*param_4 <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  *param_4 = fVar2;
  return;
}



// FUNCTION 1416259f0 CurveLinearColorFindIntervalBounds body=477 status=ok
// SIG undefined CurveLinearColorFindIntervalBounds(void)

void CurveLinearColorFindIntervalBounds
               (undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  float fVar2;
  float local_res8 [2];
  float local_res10 [6];
  
  if ((*(char *)(param_1 + 0xd) == '\x01') || ((byte)(*(char *)(param_1 + 0xd) - 3U) < 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FindBounds(local_res8,local_res10,param_1[1],param_1[9],*param_1,param_2[1],param_2[5],*param_2,
             uVar1);
  fVar2 = *param_3;
  if (local_res8[0] <= *param_3) {
    fVar2 = local_res8[0];
  }
  *param_3 = fVar2;
  fVar2 = *param_4;
  if (*param_4 <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  *param_4 = fVar2;
  FindBounds(local_res8,local_res10,param_1[2],param_1[10],*param_1,param_2[2],param_2[6],*param_2,
             uVar1);
  fVar2 = param_3[1];
  if (local_res8[0] <= param_3[1]) {
    fVar2 = local_res8[0];
  }
  param_3[1] = fVar2;
  fVar2 = local_res10[0];
  if (local_res10[0] <= param_4[1]) {
    fVar2 = param_4[1];
  }
  param_4[1] = fVar2;
  FindBounds(local_res8,local_res10,param_1[3],param_1[0xb],*param_1,param_2[3],param_2[7],*param_2,
             uVar1);
  fVar2 = param_3[2];
  if (local_res8[0] <= param_3[2]) {
    fVar2 = local_res8[0];
  }
  param_3[2] = fVar2;
  fVar2 = param_4[2];
  if (param_4[2] <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  param_4[2] = fVar2;
  FindBounds(local_res8,local_res10,param_1[4],param_1[0xc],*param_1,param_2[4],param_2[8],*param_2,
             uVar1);
  fVar2 = param_3[3];
  if (local_res8[0] <= param_3[3]) {
    fVar2 = local_res8[0];
  }
  param_3[3] = fVar2;
  if (local_res10[0] <= param_4[3]) {
    local_res10[0] = param_4[3];
  }
  param_4[3] = local_res10[0];
  return;
}



// FUNCTION 141625bd0 CurveTwoVectorsFindIntervalBounds body=693 status=ok
// SIG undefined CurveTwoVectorsFindIntervalBounds(void)

void CurveTwoVectorsFindIntervalBounds
               (undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  float fVar2;
  float local_res8 [2];
  float local_res10 [2];
  
  if ((*(char *)(param_1 + 0x13) == '\x01') || ((byte)(*(char *)(param_1 + 0x13) - 3U) < 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FindBounds(local_res8,local_res10,param_1[1],param_1[0xd],*param_1,param_2[1],param_2[7],*param_2,
             uVar1);
  fVar2 = *param_3;
  if (local_res8[0] <= *param_3) {
    fVar2 = local_res8[0];
  }
  *param_3 = fVar2;
  fVar2 = *param_4;
  if (*param_4 <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  *param_4 = fVar2;
  FindBounds(local_res8,local_res10,param_1[2],param_1[0xe],*param_1,param_2[2],param_2[8],*param_2,
             uVar1);
  fVar2 = param_3[1];
  if (local_res8[0] <= param_3[1]) {
    fVar2 = local_res8[0];
  }
  param_3[1] = fVar2;
  fVar2 = local_res10[0];
  if (local_res10[0] <= param_4[1]) {
    fVar2 = param_4[1];
  }
  param_4[1] = fVar2;
  FindBounds(local_res8,local_res10,param_1[3],param_1[0xf],*param_1,param_2[3],param_2[9],*param_2,
             uVar1);
  fVar2 = param_3[2];
  if (local_res8[0] <= param_3[2]) {
    fVar2 = local_res8[0];
  }
  param_3[2] = fVar2;
  fVar2 = param_4[2];
  if (param_4[2] <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  param_4[2] = fVar2;
  FindBounds(local_res8,local_res10,param_1[4],param_1[0x10],*param_1,param_2[4],param_2[10],
             *param_2,uVar1);
  fVar2 = param_3[3];
  if (local_res8[0] <= param_3[3]) {
    fVar2 = local_res8[0];
  }
  param_3[3] = fVar2;
  fVar2 = local_res10[0];
  if (local_res10[0] <= param_4[3]) {
    fVar2 = param_4[3];
  }
  param_4[3] = fVar2;
  FindBounds(local_res8,local_res10,param_1[5],param_1[0x11],*param_1,param_2[5],param_2[0xb],
             *param_2,uVar1);
  fVar2 = param_3[4];
  if (local_res8[0] <= param_3[4]) {
    fVar2 = local_res8[0];
  }
  param_3[4] = fVar2;
  fVar2 = param_4[4];
  if (param_4[4] <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  param_4[4] = fVar2;
  FindBounds(local_res8,local_res10,param_1[6],param_1[0x12],*param_1,param_2[6],param_2[0xc],
             *param_2,uVar1);
  fVar2 = param_3[5];
  if (local_res8[0] <= param_3[5]) {
    fVar2 = local_res8[0];
  }
  param_3[5] = fVar2;
  if (local_res10[0] <= param_4[5]) {
    local_res10[0] = param_4[5];
  }
  param_4[5] = local_res10[0];
  return;
}



// FUNCTION 141625e90 CurveVector2DFindIntervalBounds body=255 status=ok
// SIG undefined CurveVector2DFindIntervalBounds(void)

void CurveVector2DFindIntervalBounds
               (undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  float fVar2;
  float local_res8 [2];
  float local_res10 [6];
  
  if ((*(char *)(param_1 + 7) == '\x01') || ((byte)(*(char *)(param_1 + 7) - 3U) < 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FindBounds(local_res8,local_res10,param_1[1],param_1[5],*param_1,param_2[1],param_2[3],*param_2,
             uVar1);
  fVar2 = *param_3;
  if (local_res8[0] <= *param_3) {
    fVar2 = local_res8[0];
  }
  *param_3 = fVar2;
  fVar2 = *param_4;
  if (*param_4 <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  *param_4 = fVar2;
  FindBounds(local_res8,local_res10,param_1[2],param_1[6],*param_1,param_2[2],param_2[4],*param_2,
             uVar1);
  fVar2 = param_3[1];
  if (local_res8[0] <= param_3[1]) {
    fVar2 = local_res8[0];
  }
  param_3[1] = fVar2;
  if (local_res10[0] <= param_4[1]) {
    local_res10[0] = param_4[1];
  }
  param_4[1] = local_res10[0];
  return;
}



// FUNCTION 141625f90 CurveVectorFindIntervalBounds body=366 status=ok
// SIG undefined CurveVectorFindIntervalBounds(void)

void CurveVectorFindIntervalBounds
               (undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  float fVar2;
  float local_res8 [2];
  float local_res10 [6];
  
  if ((*(char *)(param_1 + 10) == '\x01') || ((byte)(*(char *)(param_1 + 10) - 3U) < 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FindBounds(local_res8,local_res10,param_1[1],param_1[7],*param_1,param_2[1],param_2[4],*param_2,
             uVar1);
  fVar2 = *param_3;
  if (local_res8[0] <= *param_3) {
    fVar2 = local_res8[0];
  }
  *param_3 = fVar2;
  fVar2 = *param_4;
  if (*param_4 <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  *param_4 = fVar2;
  FindBounds(local_res8,local_res10,param_1[2],param_1[8],*param_1,param_2[2],param_2[5],*param_2,
             uVar1);
  fVar2 = param_3[1];
  if (local_res8[0] <= param_3[1]) {
    fVar2 = local_res8[0];
  }
  param_3[1] = fVar2;
  fVar2 = local_res10[0];
  if (local_res10[0] <= param_4[1]) {
    fVar2 = param_4[1];
  }
  param_4[1] = fVar2;
  FindBounds(local_res8,local_res10,param_1[3],param_1[9],*param_1,param_2[3],param_2[6],*param_2,
             uVar1);
  fVar2 = param_3[2];
  if (local_res8[0] <= param_3[2]) {
    fVar2 = local_res8[0];
  }
  param_3[2] = fVar2;
  fVar2 = param_4[2];
  if (param_4[2] <= local_res10[0]) {
    fVar2 = local_res10[0];
  }
  param_4[2] = fVar2;
  return;
}



// FUNCTION 141626100 FUN_141626100 body=68 status=ok
// SIG undefined FUN_141626100(void)

undefined8 FUN_141626100(char param_1)

{
  if (param_1 == '\"') {
    return 0x3eb0000000000000;
  }
  if (param_1 == '#') {
    return 0x3f50000000000000;
  }
  if (param_1 == '%') {
    return 0x4090000000000000;
  }
  if (param_1 != '&') {
    return 0x3ff0000000000000;
  }
  return 0x4130000000000000;
}



// FUNCTION 141626150 DecryptData body=11 status=ok
// SIG undefined DecryptData(void)

void FAES::DecryptData(void)

{
  DecryptData();
  return;
}



// FUNCTION 141626160 DecryptData body=159 status=ok
// SIG undefined DecryptData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FAES::DecryptData(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [240];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  ::_guard_xfg_dispatch_icall_nop(local_118,0,0xf0);
  uVar1 = FUN_14163b240(local_118,param_3,0x100);
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      FUN_14163a110(local_118,uVar1,(ulonglong)uVar2 + param_1,(ulonglong)uVar2 + param_1);
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < param_2);
  }
  return;
}



// FUNCTION 141626200 FUN_141626200 body=20 status=ok
// SIG undefined FUN_141626200(void)

void FUN_141626200(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_141621690(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 141626220 DisassociateSuppress body=375 status=ok
// SIG undefined DisassociateSuppress(void)

void FLogSuppressionImplementation::DisassociateSuppress(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  int local_30;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x10,local_res8,param_2);
  plVar4 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)local_res8[0] * 0x18);
  }
  plVar6 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    lVar2 = *plVar6;
    TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_1 + 0x60,*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94),0);
    if (*(int *)(param_1 + 0xa8) != 0) {
      local_30 = (int)lVar2;
      lVar5 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar5 = param_1 + 0x98;
      }
      iVar1 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + local_30) &
                               (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4);
      iVar3 = iVar1;
      if (iVar1 != -1) {
        do {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10 + (longlong)iVar3 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x18) == lVar2) break;
          iVar3 = iVar1;
        } while (iVar1 != -1);
      }
joined_r0x000141626310:
      if (iVar3 != -1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + (longlong)iVar3 * 0x18) == param_2) {
          TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x60,iVar3);
        }
        if (iVar1 == -1) goto LAB_141626377;
        iVar3 = iVar1;
        do {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10 + (longlong)iVar3 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x18) == lVar2) break;
          iVar3 = iVar1;
        } while (iVar1 != -1);
        goto joined_r0x000141626310;
      }
    }
LAB_141626377:
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x10,param_2);
  }
  return;
}



// FUNCTION 1416263a0 FUN_1416263a0 body=113 status=ok
// SIG undefined FUN_1416263a0(void)

double FUN_1416263a0(undefined1 param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  switch(param_1) {
  case 0:
    return 1e-06;
  case 1:
    return 0.001;
  case 2:
    return 0.01;
  default:
    return 1.0;
  case 4:
    return 1000.0;
  case 8:
    dVar1 = 1760.0;
  case 7:
    dVar1 = dVar1 * 3.0;
  case 6:
    dVar1 = dVar1 * 12.0;
  case 5:
    return dVar1 * 0.025400000025908;
  case 9:
    return 9.4605284e+15;
  }
}



// FUNCTION 141626440 FUN_141626440 body=475 status=ok
// SIG undefined FUN_141626440(void)

void FUN_141626440(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_141626511;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141626511:
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
      lVar5 = (longlong)iStack_2c * 0x90 + *param_1;
      if (*(int *)(lVar5 + 0x70) != 0) {
        plVar6 = *(longlong **)(lVar5 + 0x60);
        if (*(longlong **)(lVar5 + 0x60) == (longlong *)0x0) {
          plVar6 = (longlong *)(lVar5 + 0x40);
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (*(longlong *)(lVar5 + 0x60) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 141626620 Error body=111 status=ok
// SIG undefined Error(void)

undefined8 * FMessageLog::Error(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_141624290(param_2,1);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar3 = *param_2;
  lVar2 = param_2[1];
  puVar3[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141626690 Euler body=44 status=ok
// SIG undefined Euler(void)

undefined4 * FQuat::Euler(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = (undefined4 *)Rotator(param_1,local_18);
  *param_2 = puVar2[2];
  uVar1 = *puVar2;
  param_2[2] = puVar2[1];
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1416266c0 Euler body=20 status=ok
// SIG undefined Euler(void)

undefined4 * FRotator::Euler(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = param_1[2];
  param_2[1] = *param_1;
  param_2[2] = param_1[1];
  return param_2;
}



// FUNCTION 1416266e0 FUN_1416266e0 body=2139 status=ok
// SIG undefined FUN_1416266e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1416266e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 auStack_528 [32];
  int *local_508;
  int local_500;
  int local_4fc;
  int *local_4f8;
  int local_4f0;
  int local_4ec;
  undefined **local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined1 local_4d0 [8];
  longlong *local_4c8;
  undefined1 local_4b8 [8];
  longlong *local_4b0;
  undefined1 local_4a0 [8];
  longlong *local_498;
  undefined1 local_488 [8];
  longlong *local_480;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined **local_460;
  undefined8 local_458;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined **local_420;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined **local_3e0;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined **local_3a0;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined **local_360;
  undefined1 local_330 [8];
  longlong *local_328;
  char local_318;
  int *local_310;
  undefined8 local_308;
  char local_300;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  char local_2e0;
  undefined1 local_2d8 [16];
  char local_2c8;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  char local_2a8;
  undefined1 local_2a0 [64];
  char local_260;
  undefined1 local_258 [64];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined1 local_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [64];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_138 [64];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [64];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_528;
  ExpressionParser::Lex(local_330,param_3,param_1);
  uVar6 = local_308;
  piVar14 = local_310;
  if ((local_300 == '\0') || (local_318 != '\0')) {
    FText::FText(local_4a0,local_330);
    if ((local_318 != '\0') && (local_318 = '\0', local_328 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_328 + 1;
      lVar16 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_328)(local_328);
        LOCK();
        piVar14 = (int *)((longlong)local_328 + 0xc);
        iVar15 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_328 + 8))(local_328,1);
        }
      }
    }
    FText::FText(param_2,local_4a0);
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_2 + 0x28) = 0;
    if (local_498 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_498 + 1;
      lVar16 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_498)(local_498);
        LOCK();
        piVar14 = (int *)((longlong)local_498 + 0xc);
        iVar15 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_498 + 8))(local_498,1);
        }
      }
    }
    TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>::
    ~TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>(local_330);
    return param_2;
  }
  iVar15 = (int)local_308;
  lVar16 = (longlong)(int)local_308;
  iVar17 = local_308._4_4_;
  local_508 = local_310;
  local_310 = (int *)0x0;
  local_500 = (int)local_308;
  local_4fc = local_308._4_4_;
  local_308 = 0;
  local_300 = 0;
  if (iVar15 != 0) {
    uVar4 = *(undefined8 *)(piVar14 + 0x10);
    uVar5 = *(undefined8 *)(piVar14 + 0x12);
    uVar12 = *(undefined8 *)(piVar14 + 0x14);
    piVar7 = (int *)FUN_14162ccf0();
    piVar8 = piVar14 + 6;
    if (((piVar14[3] != piVar7[3] || piVar14[2] != piVar7[2]) || piVar14[1] != piVar7[1]) ||
        *piVar7 != *piVar14) {
      piVar8 = (int *)0x0;
    }
    if (piVar8 == (int *)0x0) {
      lVar10 = FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(piVar14);
      if (lVar10 == 0) {
        lVar10 = FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(piVar14);
        if (lVar10 == 0) {
          lVar10 = FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(piVar14)
          ;
          if (lVar10 == 0) goto LAB_141626bb4;
          puVar9 = (undefined4 *)FUN_14162c9f0();
          local_370 = *puVar9;
          uStack_36c = puVar9[1];
          uStack_368 = puVar9[2];
          uStack_364 = puVar9[3];
          local_360 = &PTR_FUN_144cc2410;
          FExpressionNode::FExpressionNode(local_138,&local_370);
          local_f8 = uVar4;
          uStack_f0 = uVar5;
          local_e8 = uVar12;
          FExpressionNode::~FExpressionNode(&local_370);
          local_500 = iVar15 + 1;
          if (iVar17 < local_500) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_508,uVar6 & 0xffffffff);
            piVar14 = local_508;
            iVar17 = local_4fc;
          }
          _guard_xfg_dispatch_icall_nop(piVar14 + 0x16,piVar14,lVar16 * 0x58);
          FExpressionNode::FExpressionNode(piVar14,local_138);
          puVar13 = local_138;
          piVar14[0x10] = (int)local_f8;
          piVar14[0x11] = local_f8._4_4_;
          piVar14[0x12] = (int)uStack_f0;
          piVar14[0x13] = uStack_f0._4_4_;
          uVar18 = local_e8;
        }
        else {
          puVar9 = (undefined4 *)FUN_14162ce70();
          local_3b0 = *puVar9;
          uStack_3ac = puVar9[1];
          uStack_3a8 = puVar9[2];
          uStack_3a4 = puVar9[3];
          local_3a0 = &PTR_FUN_144cc23d0;
          FExpressionNode::FExpressionNode(local_198,&local_3b0);
          local_158 = uVar4;
          uStack_150 = uVar5;
          local_148 = uVar12;
          FExpressionNode::~FExpressionNode(&local_3b0);
          local_500 = iVar15 + 1;
          if (iVar17 < local_500) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_508,uVar6 & 0xffffffff);
            piVar14 = local_508;
            iVar17 = local_4fc;
          }
          _guard_xfg_dispatch_icall_nop(piVar14 + 0x16,piVar14,lVar16 * 0x58);
          FExpressionNode::FExpressionNode(piVar14,local_198);
          puVar13 = local_198;
          piVar14[0x10] = (int)local_158;
          piVar14[0x11] = local_158._4_4_;
          piVar14[0x12] = (int)uStack_150;
          piVar14[0x13] = uStack_150._4_4_;
          uVar18 = local_148;
        }
      }
      else {
        puVar9 = (undefined4 *)FUN_14162caf0();
        local_3f0 = *puVar9;
        uStack_3ec = puVar9[1];
        uStack_3e8 = puVar9[2];
        uStack_3e4 = puVar9[3];
        local_3e0 = &PTR_FUN_144cc2390;
        FExpressionNode::FExpressionNode(local_1f8,&local_3f0);
        local_1b8 = uVar4;
        uStack_1b0 = uVar5;
        local_1a8 = uVar12;
        FExpressionNode::~FExpressionNode(&local_3f0);
        local_500 = iVar15 + 1;
        if (iVar17 < local_500) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_508,uVar6 & 0xffffffff);
          piVar14 = local_508;
          iVar17 = local_4fc;
        }
        _guard_xfg_dispatch_icall_nop(piVar14 + 0x16,piVar14,lVar16 * 0x58);
        FExpressionNode::FExpressionNode(piVar14,local_1f8);
        puVar13 = local_1f8;
        piVar14[0x10] = (int)local_1b8;
        piVar14[0x11] = local_1b8._4_4_;
        piVar14[0x12] = (int)uStack_1b0;
        piVar14[0x13] = uStack_1b0._4_4_;
        uVar18 = local_1a8;
      }
    }
    else {
      puVar9 = (undefined4 *)FUN_14162cc70();
      local_430 = *puVar9;
      uStack_42c = puVar9[1];
      uStack_428 = puVar9[2];
      uStack_424 = puVar9[3];
      local_420 = &PTR_FUN_144cc2350;
      FExpressionNode::FExpressionNode(local_258,&local_430);
      local_218 = uVar4;
      uStack_210 = uVar5;
      local_208 = uVar12;
      FExpressionNode::~FExpressionNode(&local_430);
      local_500 = iVar15 + 1;
      if (iVar17 < local_500) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_508,uVar6 & 0xffffffff);
        piVar14 = local_508;
        iVar17 = local_4fc;
      }
      _guard_xfg_dispatch_icall_nop(piVar14 + 0x16,piVar14,lVar16 * 0x58);
      FExpressionNode::FExpressionNode(piVar14,local_258);
      puVar13 = local_258;
      piVar14[0x10] = (int)local_218;
      piVar14[0x11] = local_218._4_4_;
      piVar14[0x12] = (int)uStack_210;
      piVar14[0x13] = uStack_210._4_4_;
      uVar18 = local_208;
    }
    *(undefined8 *)(piVar14 + 0x14) = uVar18;
    FExpressionNode::~FExpressionNode(puVar13);
    puVar9 = (undefined4 *)FUN_14162c970();
    local_470 = *puVar9;
    uStack_46c = puVar9[1];
    uStack_468 = puVar9[2];
    uStack_464 = puVar9[3];
    local_460 = &PTR_FUN_144cc2310;
    local_458 = param_4;
    FExpressionNode::FExpressionNode(local_d8,&local_470);
    local_98 = uVar4;
    uStack_90 = uVar5;
    local_88 = uVar12;
    FExpressionNode::~FExpressionNode(&local_470);
    iVar15 = local_500;
    lVar16 = (longlong)local_500;
    local_500 = local_500 + 1;
    if (iVar17 < local_500) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_508,iVar15);
      piVar14 = local_508;
      iVar17 = local_4fc;
    }
    iVar15 = local_500;
    _guard_xfg_dispatch_icall_nop(piVar14 + 0x16,piVar14,lVar16 * 0x58);
    FExpressionNode::FExpressionNode(piVar14,local_d8);
    piVar14[0x10] = (int)local_98;
    piVar14[0x11] = local_98._4_4_;
    piVar14[0x12] = (int)uStack_90;
    piVar14[0x13] = uStack_90._4_4_;
    *(undefined8 *)(piVar14 + 0x14) = local_88;
    FExpressionNode::~FExpressionNode(local_d8);
    FExpressionNode::~FExpressionNode(piVar14 + 0x2c);
    iVar1 = iVar15 + -3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop(piVar14 + 0x2c,piVar14 + 0x42,(longlong)iVar1 * 0x58);
    }
    iVar15 = iVar15 + -1;
    local_500 = iVar15;
  }
LAB_141626bb4:
  local_4f8 = piVar14;
  local_4f0 = iVar15;
  local_4ec = iVar17;
  ExpressionParser::Compile(local_2f8,&local_4f8,param_1 + 0x18);
  if ((local_2c8 == '\0') || (local_2e0 != '\0')) {
    FText::FText(local_4b8,local_2f8);
    if ((local_2e0 != '\0') && (local_2e0 = '\0', local_2f0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_2f0 + 1;
      lVar16 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar14 = (int *)((longlong)local_2f0 + 0xc);
        iVar15 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    FText::FText(param_2,local_4b8);
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_2 + 0x28) = 0;
    plVar2 = local_4b0;
  }
  else {
    local_4d8 = 0;
    local_4e8 = &PTR_FUN_144cc21d8;
    local_4e0 = param_1 + 0x158;
    FUN_14166b8c0(local_2c0,local_2d8,&local_4e8);
    if ((local_260 != '\0') && (local_2a8 == '\0')) {
      puVar11 = (undefined8 *)
                FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(local_2a0);
      if (puVar11 == (undefined8 *)0x0) {
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_488,L"Unrecognized result returned from expression",
                            L"BasicMathExpressionEvaluator",L"UnrecognizedResult");
        FText::FText(local_4d0,uVar12);
        FText::FText(param_2,local_4d0);
        *(undefined1 *)(param_2 + 0x18) = 1;
        if (local_4c8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_4c8 + 1;
          lVar16 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_4c8)(local_4c8);
            LOCK();
            piVar14 = (int *)((longlong)local_4c8 + 0xc);
            iVar15 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_4c8 + 8))(local_4c8,1);
            }
          }
        }
        *(undefined1 *)(param_2 + 0x28) = 0;
        if (local_480 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_480 + 1;
          lVar16 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_480)(local_480);
            LOCK();
            piVar14 = (int *)((longlong)local_480 + 0xc);
            iVar15 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_480 + 8))(local_480,1);
            }
          }
        }
        TValueOrError<FExpressionNode,FExpressionError>::
        ~TValueOrError<FExpressionNode,FExpressionError>(local_2c0);
      }
      else {
        *(undefined1 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x20) = *puVar11;
        *(undefined1 *)(param_2 + 0x28) = 1;
        TValueOrError<FExpressionNode,FExpressionError>::
        ~TValueOrError<FExpressionNode,FExpressionError>(local_2c0);
      }
      goto LAB_141626e3b;
    }
    FText::FText(param_2,local_2c0);
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_2 + 0x28) = 0;
    if (local_260 != '\0') {
      local_260 = '\0';
      FExpressionNode::~FExpressionNode(local_2a0);
    }
    if (local_2a8 == '\0') goto LAB_141626e3b;
    local_2a8 = '\0';
    plVar2 = local_2b8;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar16 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar14 = (int *)((longlong)plVar2 + 0xc);
      iVar15 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
LAB_141626e3b:
  TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>::
  ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>(local_2f8);
  TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>::
  ~TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>(local_330);
  return param_2;
}



// FUNCTION 141626f40 Evaluate body=373 status=ok
// SIG undefined Evaluate(void)

float * FSobol::Evaluate(float *param_1,uint param_2,int param_3,undefined8 param_4,
                        undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  uint local_res20;
  
  local_res20 = (uint)param_4;
  lVar9 = (longlong)param_3;
  bVar3 = (byte)param_3;
  uVar1 = (1 << (bVar3 & 0x1f)) - 1;
  local_res20 = local_res20 & uVar1;
  uVar1 = (uint)((ulonglong)param_4 >> 0x20) & uVar1;
  uVar2 = (int)((uint)((ulonglong)param_5 >> 0x20) & 0xffffff) >> (bVar3 & 0x1f);
  uVar8 = (int)((uint)param_5 & 0xffffff) >> (bVar3 & 0x1f);
  if (0 < param_3) {
    lVar5 = 0;
    do {
      if (local_res20 == 0) break;
      uVar4 = local_res20 & 1;
      lVar6 = lVar9 * 0x20 + lVar5;
      local_res20 = (int)local_res20 >> 1;
      lVar5 = lVar5 + 1;
      uVar8 = uVar8 ^ *(int *)(&DAT_144cb8c70 + lVar6 * 8) * uVar4;
      uVar2 = uVar2 ^ *(int *)(&DAT_144cb8c74 + lVar6 * 8) * uVar4;
    } while (lVar5 < lVar9);
  }
  lVar5 = (longlong)(param_3 * 2);
  lVar6 = lVar9;
  for (; (lVar6 < lVar5 && (uVar1 != 0)); uVar1 = (int)uVar1 >> 1) {
    lVar7 = lVar9 * 0x20 + lVar6;
    lVar6 = lVar6 + 1;
    uVar8 = uVar8 ^ *(int *)(&DAT_144cb8c70 + lVar7 * 8) * (uVar1 & 1);
    uVar2 = uVar2 ^ *(int *)(&DAT_144cb8c74 + lVar7 * 8) * (uVar1 & 1);
  }
  for (; (lVar5 < 0x20 && (param_2 != 0)); param_2 = (int)param_2 >> 1) {
    lVar6 = lVar9 * 0x20 + lVar5;
    lVar5 = lVar5 + 1;
    uVar8 = uVar8 ^ *(int *)(&DAT_144cb8c70 + lVar6 * 8) * (param_2 & 1);
    uVar2 = uVar2 ^ *(int *)(&DAT_144cb8c74 + lVar6 * 8) * (param_2 & 1);
  }
  fVar10 = 1.0 / (float)(1 << (0x18 - bVar3 & 0x1f));
  *param_1 = (float)(int)uVar8 * fVar10;
  param_1[1] = (float)(int)uVar2 * fVar10;
  return param_1;
}



// FUNCTION 1416270c0 Evaluate body=596 status=ok
// SIG undefined Evaluate(void)

float * FSobol::Evaluate(float *param_1,uint param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  
  lVar12 = (longlong)param_3;
  bVar5 = (byte)param_3;
  uVar2 = (1 << (bVar5 & 0x1f)) - 1;
  uVar7 = *param_4 & uVar2;
  *param_4 = uVar7;
  uVar8 = param_4[1] & uVar2;
  param_4[1] = uVar8;
  uVar2 = param_4[2] & uVar2;
  param_4[2] = uVar2;
  uVar9 = (int)(*param_5 & 0xffffff) >> (bVar5 & 0x1f);
  uVar10 = (int)(param_5[1] & 0xffffff) >> (bVar5 & 0x1f);
  uVar11 = (int)(param_5[2] & 0xffffff) >> (bVar5 & 0x1f);
  if (0 < param_3) {
    lVar13 = 0;
    do {
      if (uVar7 == 0) break;
      uVar6 = uVar7 & 1;
      lVar3 = lVar12 * 0x20 + lVar13;
      uVar7 = (int)uVar7 >> 1;
      lVar13 = lVar13 + 1;
      uVar9 = uVar9 ^ *(int *)(&DAT_144cbac70 + lVar3 * 0xc) * uVar6;
      uVar10 = uVar10 ^ *(int *)(&DAT_144cbac74 + lVar3 * 0xc) * uVar6;
      iVar1 = *(int *)(&DAT_144cbac78 + lVar3 * 0xc);
      *param_4 = uVar7;
      uVar11 = uVar11 ^ iVar1 * uVar6;
    } while (lVar13 < lVar12);
  }
  lVar3 = (longlong)(param_3 * 2);
  lVar13 = lVar12;
  while ((lVar13 < lVar3 && (uVar8 != 0))) {
    uVar7 = uVar8 & 1;
    lVar4 = lVar12 * 0x20 + lVar13;
    uVar8 = (int)uVar8 >> 1;
    lVar13 = lVar13 + 1;
    uVar9 = uVar9 ^ *(int *)(&DAT_144cbac70 + lVar4 * 0xc) * uVar7;
    uVar10 = uVar10 ^ *(int *)(&DAT_144cbac74 + lVar4 * 0xc) * uVar7;
    iVar1 = *(int *)(&DAT_144cbac78 + lVar4 * 0xc);
    param_4[1] = uVar8;
    uVar11 = uVar11 ^ iVar1 * uVar7;
  }
  lVar13 = (longlong)(param_3 * 3);
  while ((lVar3 < lVar13 && (uVar2 != 0))) {
    uVar8 = uVar2 & 1;
    lVar4 = lVar12 * 0x20 + lVar3;
    uVar2 = (int)uVar2 >> 1;
    lVar3 = lVar3 + 1;
    uVar9 = uVar9 ^ *(int *)(&DAT_144cbac70 + lVar4 * 0xc) * uVar8;
    uVar10 = uVar10 ^ *(int *)(&DAT_144cbac74 + lVar4 * 0xc) * uVar8;
    iVar1 = *(int *)(&DAT_144cbac78 + lVar4 * 0xc);
    param_4[2] = uVar2;
    uVar11 = uVar11 ^ iVar1 * uVar8;
  }
  for (; (lVar13 < 0x20 && (param_2 != 0)); param_2 = (int)param_2 >> 1) {
    uVar8 = param_2 & 1;
    lVar3 = lVar12 * 0x20 + lVar13;
    lVar13 = lVar13 + 1;
    uVar9 = uVar9 ^ *(int *)(&DAT_144cbac70 + lVar3 * 0xc) * uVar8;
    uVar10 = uVar10 ^ *(int *)(&DAT_144cbac74 + lVar3 * 0xc) * uVar8;
    uVar11 = uVar11 ^ *(int *)(&DAT_144cbac78 + lVar3 * 0xc) * uVar8;
  }
  fVar14 = 1.0 / (float)(1 << (0x18 - bVar5 & 0x1f));
  *param_1 = (float)(int)uVar9 * fVar14;
  param_1[1] = (float)(int)uVar10 * fVar14;
  param_1[2] = (float)(int)uVar11 * fVar14;
  return param_1;
}



// FUNCTION 141627320 FUN_141627320 body=675 status=ok
// SIG undefined FUN_141627320(void)

float FUN_141627320(uint param_1,int param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  return (float)(int)(param_3 & 0xffffff ^ *(int *)(&DAT_144cb7c70 + lVar1 * 0x80) * (param_1 & 1) ^
                      *(int *)(&DAT_144cb7c74 + lVar1 * 0x80) * ((int)param_1 >> 1 & 1U) ^
                      *(int *)(&DAT_144cb7c78 + lVar1 * 0x80) * ((int)param_1 >> 2 & 1U) ^
                      *(int *)(&DAT_144cb7c7c + lVar1 * 0x80) * ((int)param_1 >> 3 & 1U) ^
                      *(int *)(&DAT_144cb7c80 + lVar1 * 0x80) * ((int)param_1 >> 4 & 1U) ^
                      *(int *)(&DAT_144cb7c84 + lVar1 * 0x80) * ((int)param_1 >> 5 & 1U) ^
                      *(int *)(&DAT_144cb7c88 + lVar1 * 0x80) * ((int)param_1 >> 6 & 1U) ^
                      *(int *)(&DAT_144cb7c8c + lVar1 * 0x80) * ((int)param_1 >> 7 & 1U) ^
                      *(int *)(&DAT_144cb7c90 + lVar1 * 0x80) * ((int)param_1 >> 8 & 1U) ^
                      *(int *)(&DAT_144cb7c94 + lVar1 * 0x80) * ((int)param_1 >> 9 & 1U) ^
                      *(int *)(&DAT_144cb7c98 + lVar1 * 0x80) * ((int)param_1 >> 10 & 1U) ^
                      *(int *)(&DAT_144cb7c9c + lVar1 * 0x80) * ((int)param_1 >> 0xb & 1U) ^
                      *(int *)(&DAT_144cb7ca0 + lVar1 * 0x80) * ((int)param_1 >> 0xc & 1U) ^
                      *(int *)(&DAT_144cb7ca4 + lVar1 * 0x80) * ((int)param_1 >> 0xd & 1U) ^
                      *(int *)(&DAT_144cb7ca8 + lVar1 * 0x80) * ((int)param_1 >> 0xe & 1U) ^
                      *(int *)(&DAT_144cb7cac + lVar1 * 0x80) * ((int)param_1 >> 0xf & 1U) ^
                      *(int *)(&DAT_144cb7cb0 + lVar1 * 0x80) * ((int)param_1 >> 0x10 & 1U) ^
                      *(int *)(&DAT_144cb7cb4 + lVar1 * 0x80) * ((int)param_1 >> 0x11 & 1U) ^
                      *(int *)(&DAT_144cb7cb8 + lVar1 * 0x80) * ((int)param_1 >> 0x12 & 1U) ^
                      *(int *)(&DAT_144cb7cbc + lVar1 * 0x80) * ((int)param_1 >> 0x13 & 1U) ^
                      *(int *)(&DAT_144cb7cc0 + lVar1 * 0x80) * ((int)param_1 >> 0x14 & 1U) ^
                      *(int *)(&DAT_144cb7cc4 + lVar1 * 0x80) * ((int)param_1 >> 0x15 & 1U) ^
                      *(int *)(&DAT_144cb7cc8 + lVar1 * 0x80) * ((int)param_1 >> 0x16 & 1U) ^
                      *(int *)(&DAT_144cb7ccc + lVar1 * 0x80) * ((int)param_1 >> 0x17 & 1U) ^
                      *(int *)(&DAT_144cb7cd0 + lVar1 * 0x80) * ((int)param_1 >> 0x18 & 1U) ^
                      *(int *)(&DAT_144cb7cd4 + lVar1 * 0x80) * ((int)param_1 >> 0x19 & 1U) ^
                      *(int *)(&DAT_144cb7cd8 + lVar1 * 0x80) * ((int)param_1 >> 0x1a & 1U) ^
                      *(int *)(&DAT_144cb7cdc + lVar1 * 0x80) * ((int)param_1 >> 0x1b & 1U) ^
                      *(int *)(&DAT_144cb7ce0 + lVar1 * 0x80) * ((int)param_1 >> 0x1c & 1U) ^
                      *(int *)(&DAT_144cb7ce4 + lVar1 * 0x80) * ((int)param_1 >> 0x1d & 1U) ^
                      *(int *)(&DAT_144cb7ce8 + lVar1 * 0x80) * ((int)param_1 >> 0x1e & 1U) ^
                     *(int *)(&DAT_144cb7cec + lVar1 * 0x80) * ((int)param_1 >> 0x1f & 1U)) *
         5.9604645e-08;
}



// FUNCTION 1416275d0 EvaluateBezier body=1256 status=ok
// SIG undefined EvaluateBezier(void)

float FVector::EvaluateBezier(float *param_1,int param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
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
  
  fVar9 = param_1[1];
  fVar6 = *param_1;
  fVar10 = param_1[2];
  fVar20 = param_1[5];
  fVar8 = param_1[3];
  fVar22 = param_1[4];
  uVar1 = *(undefined8 *)param_1;
  fVar18 = param_1[2];
  fVar16 = 1.0 / (float)(param_2 + -1);
  fVar14 = ((param_1[6] - (fVar8 + fVar8)) + fVar6) * 3.0;
  fVar19 = ((param_1[7] - (fVar22 + fVar22)) + fVar9) * 3.0;
  fVar21 = ((param_1[8] - (fVar20 + fVar20)) + fVar10) * 3.0;
  fVar5 = ((param_1[9] - param_1[6] * 3.0) + fVar8 * 3.0) - fVar6;
  fVar17 = ((param_1[10] - param_1[7] * 3.0) + fVar22 * 3.0) - fVar9;
  fVar7 = ((param_1[0xb] - param_1[8] * 3.0) + fVar20 * 3.0) - fVar10;
  iVar2 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar2 + 1;
  fVar11 = fVar5 * 6.0 * fVar16;
  fVar12 = fVar17 * 6.0 * fVar16;
  fVar13 = fVar7 * 6.0 * fVar16;
  fVar15 = 0.0;
  fVar8 = ((fVar8 - fVar6) * 3.0 + fVar14 * fVar16 + fVar5 * fVar16 * fVar16) * fVar16;
  fVar6 = ((fVar7 * fVar16 + fVar21) * fVar16 + (fVar20 - fVar10) * 3.0) * fVar16;
  fVar9 = ((fVar22 - fVar9) * 3.0 + fVar19 * fVar16 + fVar17 * fVar16 * fVar16) * fVar16;
  fVar10 = (fVar11 + fVar14 + fVar14) * fVar16 * fVar16;
  fVar20 = (fVar19 + fVar19 + fVar12) * fVar16 * fVar16;
  fVar22 = (fVar21 + fVar21 + fVar13) * fVar16 * fVar16;
  if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
  }
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *(undefined8 *)param_1;
  *(float *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = param_1[2];
  if (param_2 < 2) {
    fVar15 = 0.0;
  }
  else {
    uVar4 = (ulonglong)(param_2 - 1);
    fVar5 = (float)((ulonglong)uVar1 >> 0x20);
    fVar7 = (float)uVar1;
    do {
      iVar2 = (int)param_3[1];
      fVar19 = fVar18 + fVar6;
      fVar17 = fVar7 + fVar8;
      fVar14 = fVar5 + fVar9;
      fVar8 = fVar8 + fVar10;
      fVar9 = fVar9 + fVar20;
      fVar20 = fVar20 + fVar12 * fVar16 * fVar16;
      fVar6 = fVar6 + fVar22;
      fVar22 = fVar22 + fVar13 * fVar16 * fVar16;
      *(int *)(param_3 + 1) = iVar2 + 1;
      fVar10 = fVar10 + fVar11 * fVar16 * fVar16;
      fVar15 = fVar15 + SQRT((fVar5 - fVar14) * (fVar5 - fVar14) +
                             (fVar7 - fVar17) * (fVar7 - fVar17) +
                             (fVar18 - fVar19) * (fVar18 - fVar19));
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      lVar3 = *param_3;
      *(ulonglong *)(lVar3 + (longlong)iVar2 * 0xc) = CONCAT44(fVar14,fVar17);
      *(float *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = fVar19;
      uVar4 = uVar4 - 1;
      fVar5 = fVar14;
      fVar7 = fVar17;
      fVar18 = fVar19;
    } while (uVar4 != 0);
  }
  return fVar15;
}



// FUNCTION 141627ac0 Exec body=2645 status=ok
// SIG undefined Exec(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FLogSuppressionImplementation::Exec
          (longlong param_1,undefined8 param_2,ushort *param_3,undefined8 param_4)

{
  char *pcVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort *puVar6;
  void *_Src;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint *puVar21;
  undefined4 uVar22;
  longlong *plVar23;
  undefined2 *puVar24;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  undefined1 local_178;
  undefined1 local_177;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  int iStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_138;
  undefined8 uStack_130;
  uint *local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  longlong *local_108;
  undefined2 local_100;
  undefined8 local_f8;
  ushort *local_f0;
  void *local_e8;
  int local_e0;
  void **local_d8;
  undefined1 *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_f8 = param_4;
  local_f0 = param_3;
  cVar7 = FParse::Command(&local_f0,&DAT_144cc12c8,1);
  if (cVar7 == '\0') {
LAB_1416284ec:
    uVar10 = 0;
  }
  else {
    cVar7 = FParse::Command(&local_f0,L"LIST",1);
    puVar6 = local_f0;
    if (cVar7 == '\0') {
      if (*local_f0 == 0x2e) goto LAB_1416284ec;
      iVar9 = 0;
      local_148 = 0;
      local_150 = (longlong *)0x0;
      if (*local_f0 != 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (local_f0[lVar17] != 0);
        uVar8 = (int)lVar17 + 1;
        local_148 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
        }
        FGenericPlatformString::Memcpy(local_150,puVar6,(longlong)(int)uVar8 * 2);
      }
      FString::TrimStartInline(&local_150);
      if (((uint)local_148 == 0) || ((uint)local_148 == 1)) {
        FOutputDevice::LogfImpl(param_4,L"------- Log conventions");
        FOutputDevice::LogfImpl
                  (param_4,
                   L"[cat]   = a category for the command to operate on, or \'global\' for all categories."
                  );
        FOutputDevice::LogfImpl
                  (param_4,
                   L"[level] = verbosity level, one of: none, error, warning, display, log, verbose, all, default"
                  );
        FOutputDevice::LogfImpl
                  (param_4,
                   L"At boot time, compiled in default is overridden by ini files setting, which is overridden by command line"
                  );
        FOutputDevice::LogfImpl(param_4,L"------- Log console command usage");
        FOutputDevice::LogfImpl(param_4,L"Log list            - list all log categories");
        FOutputDevice::LogfImpl
                  (param_4,L"Log list [string]   - list all log categories containing a substring");
        FOutputDevice::LogfImpl
                  (param_4,
                   L"Log reset           - reset all log categories to their boot-time default");
        FOutputDevice::LogfImpl
                  (param_4,L"Log [cat]           - toggle the display of the category [cat]");
        FOutputDevice::LogfImpl
                  (param_4,L"Log [cat] off       - disable display of the category [cat]");
        FOutputDevice::LogfImpl
                  (param_4,L"Log [cat] on        - resume display of the category [cat]");
        FOutputDevice::LogfImpl
                  (param_4,L"Log [cat] only      - enables [cat] and disables all other categories")
        ;
        FOutputDevice::LogfImpl
                  (param_4,L"Log [cat] [level]   - set the verbosity level of the category [cat]");
        FOutputDevice::LogfImpl
                  (param_4,
                   L"Log [cat] break     - toggle the debug break on display of the category [cat]")
        ;
        FOutputDevice::LogfImpl(param_4,L"------- Log command line");
        FOutputDevice::LogfImpl
                  (param_4,
                   L"-LogCmds=\"[arguments],[arguments]...\"           - applies a list of console commands at boot time"
                  );
        FOutputDevice::LogfImpl
                  (param_4,
                   L"-LogCmds=\"foo verbose, bar off\"         - turns on the foo category and turns off the bar category"
                  );
        FOutputDevice::LogfImpl(param_4,L"------- Environment variables");
        FOutputDevice::LogfImpl
                  (param_4,
                   L"Any command line option can be set via the environment variable UE-CmdLineArgs"
                  );
        FOutputDevice::LogfImpl
                  (param_4,L"set UE-CmdLineArgs=\"-LogCmds=foo verbose breakon, bar off\"");
        FOutputDevice::LogfImpl(param_4,L"------- Config file");
        FOutputDevice::LogfImpl(param_4,L"[Core.Log]");
        FOutputDevice::LogfImpl(param_4,L"global=[default verbosity for things not listed later]");
        FOutputDevice::LogfImpl(param_4,L"[cat]=[level]");
        FOutputDevice::LogfImpl(param_4,L"foo=verbose break");
      }
      else {
        cVar7 = FUN_141633a90(param_1 + -8,&local_150,param_4);
        if (cVar7 == '\0') {
          plVar19 = (longlong *)(param_1 + 8);
          local_98 = 0;
          uStack_168 = (uint *)(param_1 + 0x18);
          local_90 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0xffffffff;
          local_64 = 0;
          local_58 = (undefined1 *)0x0;
          local_50 = 0;
          iVar15 = *(int *)(param_1 + 0x30);
          local_170._0_4_ = 0;
          local_170._4_4_ = 1;
          iStack_15c = 0;
          uStack_158 = 0;
          if (iVar15 != 0) {
            puVar21 = *(uint **)(param_1 + 0x28);
            if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
              puVar21 = uStack_168;
            }
            uVar8 = *puVar21;
            local_170._0_4_ = iVar9;
            uStack_158 = iVar9;
            while (uVar8 == 0) {
              lVar17 = (longlong)(int)local_170;
              uStack_158 = uStack_158 + 0x20;
              iVar12 = (int)local_170 + 1;
              bVar2 = (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_170;
              local_170._0_4_ = iVar12;
              if (bVar2) goto LAB_141627ff1;
              uVar8 = puVar21[lVar17 + 1];
            }
            local_170._4_4_ = -uVar8 & uVar8;
            iVar12 = 0x1f;
            if (local_170._4_4_ != 0) {
              for (; local_170._4_4_ >> iVar12 == 0; iVar12 = iVar12 + -1) {
              }
            }
            if (local_170._4_4_ == 0) {
              iVar12 = 0x20;
            }
            else {
              iVar12 = 0x1f - iVar12;
            }
            iStack_15c = (uStack_158 - iVar12) + 0x1f;
            if (iVar15 < iStack_15c) {
LAB_141627ff1:
              iStack_15c = iVar15;
            }
          }
          local_160 = 0xffffffff;
          uStack_120 = CONCAT44(iStack_15c,0xffffffff);
          auVar4._8_4_ = uStack_158;
          auVar4._0_8_ = uStack_120;
          auVar4._12_4_ = uStack_154;
          local_a0._0_4_ = SUB84(plVar19,0);
          uVar16 = (undefined4)local_a0;
          local_a0._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
          uVar22 = local_a0._4_4_;
          uStack_c0._0_4_ = (int)local_170;
          uStack_c0._4_4_ = local_170._4_4_;
          local_100 = 0;
          uStack_130._0_4_ = (int)local_170;
          uStack_130._4_4_ = local_170._4_4_;
          uStack_a8 = auVar4._8_8_;
          local_118._8_4_ = (undefined4)local_a0;
          local_118._0_8_ = uStack_a8;
          local_118._12_4_ = local_a0._4_4_;
          local_138 = plVar19;
          local_128 = uStack_168;
          local_108 = plVar19;
          local_c8 = plVar19;
          puStack_b8 = uStack_168;
          uStack_b0 = uStack_120;
          local_a0 = plVar19;
          if (iStack_15c < *(int *)(param_1 + 0x30)) {
            local_d8 = &local_e8;
            local_d0 = &local_178;
            iVar15 = iStack_15c;
            do {
              local_e8 = *(void **)(*local_138 + 8 + (longlong)iVar15 * 0x18);
              local_178 = **(undefined1 **)(*local_138 + (longlong)iVar15 * 0x18);
              FUN_140c2d3a0(&local_98,&local_f8,&local_d8,0);
              uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
              iVar15 = uStack_120._4_4_;
            } while (uStack_120._4_4_ < (int)local_128[6]);
            if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_108,(int)local_108[1] - *(int *)((longlong)local_108 + 0x34)
                                  ,1);
            }
          }
          FUN_1416322e0(param_1 + -8,&local_150,0);
          iVar15 = *(int *)(param_1 + 0x30);
          uStack_168 = (uint *)(param_1 + 0x18);
          local_170 = (longlong *)0x100000000;
          iStack_15c = 0;
          uStack_158 = 0;
          if (iVar15 != 0) {
            puVar21 = *(uint **)(param_1 + 0x28);
            if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
              puVar21 = uStack_168;
            }
            uVar8 = *puVar21;
            uStack_158 = iVar9;
            while (uVar8 == 0) {
              uStack_158 = uStack_158 + 0x20;
              local_170._4_4_ = (uint)((ulonglong)local_170 >> 0x20);
              local_170 = (longlong *)CONCAT44(local_170._4_4_,iVar9 + 1);
              if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
              goto LAB_14162819f;
              uVar8 = puVar21[(longlong)iVar9 + 1];
              iVar9 = iVar9 + 1;
            }
            uVar8 = -uVar8 & uVar8;
            iVar9 = 0x1f;
            if (uVar8 != 0) {
              for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
              }
            }
            local_170 = (longlong *)CONCAT44(uVar8,(int)local_170);
            if (uVar8 == 0) {
              iVar9 = 0x20;
            }
            else {
              iVar9 = 0x1f - iVar9;
            }
            iStack_15c = (uStack_158 - iVar9) + 0x1f;
            if (iVar15 < iStack_15c) {
LAB_14162819f:
              iStack_15c = iVar15;
            }
          }
          local_160 = 0xffffffff;
          uStack_120 = CONCAT44(iStack_15c,0xffffffff);
          auVar5._8_4_ = uStack_158;
          auVar5._0_8_ = uStack_120;
          auVar5._12_4_ = uStack_154;
          uStack_a8 = auVar5._8_8_;
          uStack_c0 = local_170;
          local_100 = 0;
          uStack_130 = local_170;
          local_118._8_4_ = uVar16;
          local_118._0_8_ = uStack_a8;
          local_118._12_4_ = uVar22;
          iVar9 = iStack_15c;
          local_138 = plVar19;
          local_128 = uStack_168;
          local_108 = plVar19;
          local_c8 = plVar19;
          puStack_b8 = uStack_168;
          uStack_b0 = uStack_120;
          local_a0 = plVar19;
          if (iStack_15c < *(int *)(param_1 + 0x30)) {
            do {
              pcVar1 = *(char **)(*local_138 + (longlong)iVar9 * 0x18);
              local_e8 = *(void **)(*local_138 + 8 + (longlong)iVar9 * 0x18);
              if ((int)local_90 != local_64) {
                puVar14 = local_60;
                if (local_58 != (undefined1 *)0x0) {
                  puVar14 = local_58;
                }
                iVar9 = *(int *)(puVar14 +
                                (longlong)
                                (int)((int)((ulonglong)local_e8 >> 0x20) + (int)local_e8 &
                                     local_50 - 1U) * 4);
                while (iVar9 != -1) {
                  lVar17 = (longlong)iVar9;
                  if (*(void **)(local_98 + lVar17 * 0x18) == local_e8) {
                    if ((iVar9 != -1) && (lVar17 = local_98 + lVar17 * 0x18, lVar17 != 0)) {
                      cVar7 = *(char *)(lVar17 + 8);
                      goto LAB_141628289;
                    }
                    break;
                  }
                  iVar9 = *(int *)(local_98 + 0x10 + lVar17 * 0x18);
                }
              }
              cVar7 = '\0';
LAB_141628289:
              local_a0 = plVar19;
              if (*pcVar1 != cVar7) {
                puVar11 = (undefined8 *)FName::ToString(&local_e8,&local_d8);
                if (*(int *)(puVar11 + 1) == 0) {
                  puVar24 = &DAT_143f3eda8;
                }
                else {
                  puVar24 = (undefined2 *)*puVar11;
                }
                pwVar18 = L"";
                if (pcVar1[1] != '\0') {
                  pwVar18 = L" - DebugBreak";
                }
                uVar10 = FUN_141686ae0(*pcVar1);
                local_188 = pwVar18;
                FOutputDevice::LogfImpl(param_4,L"%-40s  %-12s  %s",puVar24,uVar10);
                if (local_d8 != (void **)0x0) {
                  FMemory::Free();
                }
              }
              uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
              iVar9 = uStack_120._4_4_;
              plVar19 = local_a0;
            } while (uStack_120._4_4_ < (int)local_128[6]);
            if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_108,(int)local_108[1] - *(int *)((longlong)local_108 + 0x34)
                                  ,1);
            }
          }
          local_50 = 0;
          if (local_58 != (undefined1 *)0x0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_98);
        }
      }
      if (local_150 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      plVar19 = (longlong *)0x0;
      local_150 = (longlong *)0x0;
      local_148 = (ulonglong)(uint)local_148;
      FParse::Token(&local_d8,&local_f0,0);
      local_138 = (longlong *)(param_1 + 8);
      iVar9 = *(int *)(param_1 + 0x30);
      uStack_168 = (uint *)(param_1 + 0x18);
      local_170 = (longlong *)0x100000000;
      iStack_15c = 0;
      uStack_158 = 0;
      if (iVar9 != 0) {
        puVar21 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar21 = uStack_168;
        }
        uVar8 = *puVar21;
        plVar13 = plVar19;
        plVar20 = plVar19;
        while (uVar8 == 0) {
          iVar15 = (int)plVar13;
          uStack_158 = (int)plVar20 + 0x20;
          plVar20 = (longlong *)(ulonglong)uStack_158;
          plVar13 = (longlong *)(ulonglong)(iVar15 + 1U);
          local_170._4_4_ = (uint)((ulonglong)local_170 >> 0x20);
          local_170 = (longlong *)CONCAT44(local_170._4_4_,iVar15 + 1U);
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar15) goto LAB_141627c04;
          uVar8 = puVar21[(longlong)iVar15 + 1];
        }
        uVar8 = -uVar8 & uVar8;
        iVar15 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar15 == 0; iVar15 = iVar15 + -1) {
          }
        }
        local_170 = (longlong *)CONCAT44(uVar8,(int)local_170);
        if (uVar8 == 0) {
          iVar15 = 0x20;
        }
        else {
          iVar15 = 0x1f - iVar15;
        }
        iStack_15c = (uStack_158 - iVar15) + 0x1f;
        if (iVar9 < iStack_15c) {
LAB_141627c04:
          iStack_15c = iVar9;
        }
      }
      local_160 = 0xffffffff;
      uStack_120 = CONCAT44(iStack_15c,0xffffffff);
      auVar3._8_4_ = uStack_158;
      auVar3._0_8_ = uStack_120;
      auVar3._12_4_ = uStack_154;
      local_a0._0_4_ = SUB84(local_138,0);
      local_a0._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
      uStack_a8 = auVar3._8_8_;
      uStack_c0 = local_170;
      local_100 = 0;
      uStack_130 = local_170;
      local_118._8_4_ = (undefined4)local_a0;
      local_118._0_8_ = uStack_a8;
      local_118._12_4_ = local_a0._4_4_;
      plVar13 = plVar19;
      plVar20 = plVar19;
      iVar9 = iStack_15c;
      local_128 = uStack_168;
      local_108 = local_138;
      local_c8 = local_138;
      puStack_b8 = uStack_168;
      uStack_b0 = uStack_120;
      local_a0 = local_138;
      if (iStack_15c < *(int *)(param_1 + 0x30)) {
        do {
          puVar14 = *(undefined1 **)(*local_138 + (longlong)iVar9 * 0x18);
          FName::ToString(*local_138 + (longlong)iVar9 * 0x18 + 8,&local_e8);
          if (((int)local_d0 == 0) || ((int)local_d0 == 1)) {
LAB_141627cc5:
            _Src = local_e8;
            local_178 = puVar14[1];
            local_177 = *puVar14;
            lVar17 = (longlong)local_e0;
            local_170 = (longlong *)0x0;
            uStack_168 = (uint *)CONCAT44(uStack_168._4_4_,local_e0);
            if (local_e0 == 0) {
              plVar23 = plVar19;
              uVar16 = 0;
              uVar22 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_170,local_e0,0);
              plVar23 = local_170;
              ::_guard_xfg_dispatch_icall_nop(local_170,_Src,lVar17 * 2);
              uVar16 = (undefined4)uStack_168;
              uVar22 = uStack_168._4_4_;
            }
            lVar17 = (longlong)(int)plVar13;
            uVar8 = (int)plVar13 + 1;
            local_148 = CONCAT44(local_148._4_4_,uVar8);
            if (local_148._4_4_ < (int)uVar8) {
              TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
                        (&local_150,plVar13);
              plVar20 = local_150;
              uVar8 = (uint)local_148;
            }
            plVar13 = (longlong *)(ulonglong)uVar8;
            plVar20[lVar17 * 3] = (longlong)plVar23;
            *(undefined4 *)(plVar20 + lVar17 * 3 + 1) = uVar16;
            *(undefined4 *)((longlong)plVar20 + lVar17 * 0x18 + 0xc) = uVar22;
            *(undefined1 *)(plVar20 + lVar17 * 3 + 2) = local_177;
            *(undefined1 *)((longlong)plVar20 + lVar17 * 0x18 + 0x11) = local_178;
          }
          else {
            local_188 = (wchar_t *)CONCAT44(local_188._4_4_,0xffffffff);
            iVar9 = FUN_141592950(&local_e8,local_d8,1);
            if (iVar9 != -1) goto LAB_141627cc5;
          }
          if (local_e8 != (void *)0x0) {
            FMemory::Free();
          }
          uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
          iVar9 = uStack_120._4_4_;
        } while (uStack_120._4_4_ < (int)local_128[6]);
        param_4 = local_f8;
        if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_108,(int)local_108[1] - *(int *)((longlong)local_108 + 0x34),1);
          param_4 = local_f8;
        }
      }
      uVar8 = (uint)plVar13;
      AlgoImpl::
      IntroSortInternal<_anonymous_namespace_::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<_anonymous_namespace_::FLogCategoryPtrs>_>_>
                (plVar20,(longlong)(int)uVar8,local_178,&local_178);
      while ((iVar9 = (int)plVar19, -1 < iVar9 && (iVar9 < (int)uVar8))) {
        lVar17 = (longlong)iVar9;
        if ((int)plVar20[lVar17 * 3 + 1] == 0) {
          puVar24 = &DAT_143f3eda8;
        }
        else {
          puVar24 = (undefined2 *)plVar20[lVar17 * 3];
        }
        pwVar18 = L"";
        if (*(char *)((longlong)plVar20 + lVar17 * 0x18 + 0x11) != '\0') {
          pwVar18 = L" - DebugBreak";
        }
        uVar10 = FUN_141686ae0((char)plVar20[lVar17 * 3 + 2]);
        local_188 = pwVar18;
        FOutputDevice::LogfImpl(param_4,L"%-40s  %-12s  %s",puVar24,uVar10);
        plVar19 = (longlong *)(ulonglong)(iVar9 + 1);
      }
      plVar19 = plVar20;
      if (local_d8 != (void **)0x0) {
        FMemory::Free();
      }
      while (uVar8 != 0) {
        if (*plVar19 != 0) {
          FMemory::Free();
        }
        uVar8 = (int)plVar13 - 1;
        plVar13 = (longlong *)(ulonglong)uVar8;
        plVar19 = plVar19 + 3;
      }
      if (plVar20 != (longlong *)0x0) {
        FMemory::Free(plVar20);
        return 1;
      }
    }
    uVar10 = 1;
  }
  return uVar10;
}



// FUNCTION 141628520 FUN_141628520 body=46 status=ok
// SIG undefined FUN_141628520(void)

undefined8 FUN_141628520(longlong param_1,undefined8 param_2)

{
  FUN_141628550(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 141628550 FUN_141628550 body=2252 status=ok
// SIG undefined FUN_141628550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141628550(longlong param_1,longlong param_2,wchar_t *param_3,longlong param_4,
                      longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  int iVar4;
  int *piVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  longlong local_278;
  undefined8 local_270;
  wchar_t *local_268;
  int local_260;
  undefined4 local_25c;
  wchar_t *local_258;
  int local_250;
  undefined4 local_24c;
  undefined8 local_248;
  wchar_t *local_240;
  int local_238;
  undefined4 local_234;
  longlong local_230;
  longlong local_228;
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_140 [8];
  longlong *local_138;
  char local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_110 [8];
  longlong *local_108;
  char local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [8];
  longlong *local_d8;
  char local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  char local_a8;
  undefined1 local_a0 [64];
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_248 = param_6;
  local_228 = param_5;
  local_258 = param_3;
  local_230 = param_4;
  piVar5 = (int *)FArchive::operator<<(param_3);
  local_220 = *piVar5;
  iStack_21c = piVar5[1];
  iStack_218 = piVar5[2];
  iStack_214 = piVar5[3];
  piVar5 = (int *)FArchive::operator<<(param_4);
  local_210 = *piVar5;
  iStack_20c = piVar5[1];
  iStack_208 = piVar5[2];
  iStack_204 = piVar5[3];
  piVar5 = (int *)FArchive::operator<<(param_5);
  pwVar6 = (wchar_t *)0x0;
  local_200 = *piVar5;
  iStack_1fc = piVar5[1];
  iStack_1f8 = piVar5[2];
  iStack_1f4 = piVar5[3];
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    iVar4 = GetTypeHash(&local_220);
    lVar7 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar7 = param_1 + 0xd8;
    }
    iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      local_268 = *(wchar_t **)(param_1 + 0xa0);
      do {
        pwVar9 = local_268 + (longlong)iVar4 * 0x48;
        if (((((*(int *)(pwVar9 + 2) == iStack_21c && *(int *)(pwVar9 + 4) == iStack_218) &&
              *(int *)(pwVar9 + 6) == iStack_214) && *(int *)pwVar9 == local_220) &&
            (((*(int *)(pwVar9 + 10) == iStack_20c && *(int *)(pwVar9 + 0xc) == iStack_208) &&
             *(int *)(pwVar9 + 0xe) == iStack_204) && local_210 == *(int *)(pwVar9 + 8))) &&
           (((*(int *)(pwVar9 + 0x12) == iStack_1fc && *(int *)(pwVar9 + 0x14) == iStack_1f8) &&
            *(int *)(pwVar9 + 0x16) == iStack_1f4) && local_200 == *(int *)(pwVar9 + 0x10))) {
          if (iVar4 != -1) goto LAB_1416286f5;
          break;
        }
        iVar4 = *(int *)(pwVar9 + 0x40);
      } while (iVar4 != -1);
    }
  }
  pwVar9 = pwVar6;
LAB_1416286f5:
  pwVar3 = local_258;
  pwVar11 = pwVar9 + 0x18;
  if (pwVar9 == (wchar_t *)0x0) {
    pwVar11 = pwVar6;
  }
  if (pwVar11 == (wchar_t *)0x0) {
    local_278 = 0;
    local_270 = 0;
    local_258 = (wchar_t *)0x0;
    pwVar6 = *(wchar_t **)(pwVar3 + 0x20);
    local_24c = 0;
    iVar4 = (int)(*(longlong *)(pwVar3 + 0x24) - (longlong)pwVar6 >> 1);
    local_250 = iVar4 + 1;
    if (iVar4 == 0) {
      local_250 = 0;
    }
    if ((0 < local_250) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0), pwVar9 = local_258,
       0 < local_250)) {
      wcsncpy(local_258,pwVar6,(longlong)iVar4);
      pwVar9[iVar4] = L'\0';
    }
    uVar8 = FText::FromString(local_1d8,&local_258);
    local_150 = 4;
    FText::FText(local_140,uVar8);
    uVar2 = local_270;
    lVar7 = (longlong)(int)local_270;
    local_128 = '\x01';
    iVar4 = (int)local_270 + 1;
    local_270 = CONCAT44(local_270._4_4_,iVar4);
    if (local_270._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar2 & 0xffffffff);
    }
    puVar10 = (undefined4 *)(lVar7 * 0x30 + local_278);
    *puVar10 = local_150;
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_144,local_148);
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_144,local_148);
    puVar10[2] = local_148;
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_144,local_148);
    *(undefined1 *)(puVar10 + 10) = 0;
    if (local_128 != '\0') {
      FText::FText(puVar10 + 4,local_140);
      *(undefined1 *)(puVar10 + 10) = 1;
      if ((local_128 != '\0') && (local_128 = '\0', local_138 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_138 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar5 = (int *)((longlong)local_138 + 0xc);
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar5 = (int *)((longlong)local_1d0 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_258 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_268 = (wchar_t *)0x0;
    local_25c = 0;
    pwVar6 = *(wchar_t **)(local_230 + 0x40);
    iVar4 = (int)(*(longlong *)(local_230 + 0x48) - (longlong)pwVar6 >> 1);
    local_260 = iVar4 + 1;
    if (iVar4 == 0) {
      local_260 = 0;
    }
    if ((0 < local_260) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0), pwVar9 = local_268,
       0 < local_260)) {
      wcsncpy(local_268,pwVar6,(longlong)iVar4);
      pwVar9[iVar4] = L'\0';
    }
    uVar8 = FText::FromString(local_1c0,&local_268);
    local_120 = 4;
    FText::FText(local_110,uVar8);
    uVar2 = local_270;
    lVar7 = (longlong)(int)local_270;
    local_f8 = '\x01';
    iVar4 = (int)local_270 + 1;
    local_270 = CONCAT44(local_270._4_4_,iVar4);
    if (local_270._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar2 & 0xffffffff);
    }
    puVar10 = (undefined4 *)(lVar7 * 0x30 + local_278);
    *puVar10 = local_120;
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_114,local_118);
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_114,local_118);
    puVar10[2] = local_118;
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_114,local_118);
    *(undefined1 *)(puVar10 + 10) = 0;
    if (local_f8 != '\0') {
      FText::FText(puVar10 + 4,local_110);
      *(undefined1 *)(puVar10 + 10) = 1;
      if ((local_f8 != '\0') && (local_f8 = '\0', local_108 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_108 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar5 = (int *)((longlong)local_108 + 0xc);
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar5 = (int *)((longlong)local_1b8 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    if (local_268 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_240 = (wchar_t *)0x0;
    local_234 = 0;
    pwVar6 = *(wchar_t **)(local_228 + 0x40);
    iVar4 = (int)(*(longlong *)(local_228 + 0x48) - (longlong)pwVar6 >> 1);
    local_238 = iVar4 + 1;
    if (iVar4 == 0) {
      local_238 = 0;
    }
    if ((0 < local_238) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0), pwVar9 = local_240,
       0 < local_238)) {
      wcsncpy(local_240,pwVar6,(longlong)iVar4);
      pwVar9[iVar4] = L'\0';
    }
    uVar8 = FText::FromString(local_1a8,&local_240);
    local_f0 = 4;
    FText::FText(local_e0,uVar8);
    uVar2 = local_270;
    lVar7 = (longlong)(int)local_270;
    local_c8 = '\x01';
    iVar4 = (int)local_270 + 1;
    local_270 = CONCAT44(local_270._4_4_,iVar4);
    if (local_270._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar2 & 0xffffffff);
    }
    puVar10 = (undefined4 *)(lVar7 * 0x30 + local_278);
    *puVar10 = local_f0;
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_e4,local_e8);
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_e4,local_e8);
    puVar10[2] = local_e8;
    *(ulonglong *)(puVar10 + 2) = CONCAT44(uStack_e4,local_e8);
    *(undefined1 *)(puVar10 + 10) = 0;
    if (local_c8 != '\0') {
      FText::FText(puVar10 + 4,local_e0);
      *(undefined1 *)(puVar10 + 10) = 1;
      if ((local_c8 != '\0') && (local_c8 = '\0', local_d8 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_d8 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar5 = (int *)((longlong)local_d8 + 0xc);
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar5 = (int *)((longlong)local_1a0 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if (local_240 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_178,L"Binary operator {0} cannot operate on {1} and {2}",
                       L"ExpressionParser",L"BinaryExecutionError");
    uVar8 = FTextFormat::FTextFormat(local_160,uVar8);
    uVar8 = FText::Format(local_190,uVar8,&local_278);
    FText::FText(local_1f0,uVar8);
    FText::FText(param_2,local_1f0);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar5 = (int *)((longlong)local_1e8 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_188 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar5 = (int *)((longlong)local_188 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar5 = (int *)((longlong)local_170 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (&local_278);
  }
  else {
    if (*(int *)(pwVar11 + 0x20) != 0) {
      pwVar9 = *(wchar_t **)(pwVar11 + 0x18);
      if (*(wchar_t **)(pwVar11 + 0x18) == (wchar_t *)0x0) {
        pwVar9 = pwVar11 + 8;
      }
      if (pwVar9 != (wchar_t *)0x0) {
        pwVar6 = (wchar_t *)(**(code **)(*(longlong *)pwVar9 + 8))();
      }
    }
    local_288 = &local_248;
    lVar7 = (**(code **)pwVar11)(local_c0,pwVar6,local_230,local_228);
    *(undefined1 *)(param_2 + 0x18) = 0;
    if (*(char *)(lVar7 + 0x18) != '\0') {
      FText::FText(param_2,lVar7);
      *(undefined1 *)(param_2 + 0x18) = 1;
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (*(char *)(lVar7 + 0x60) != '\0') {
      FExpressionNode::FExpressionNode(param_2 + 0x20);
      *(undefined1 *)(param_2 + 0x60) = 1;
    }
    if (local_60 != '\0') {
      local_60 = '\0';
      FExpressionNode::~FExpressionNode(local_a0);
    }
    if ((local_a8 != '\0') && (local_a8 = 0, local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar5 = (int *)((longlong)local_b8 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141628e20 FUN_141628e20 body=36 status=ok
// SIG undefined FUN_141628e20(void)

undefined8 FUN_141628e20(longlong param_1,undefined8 param_2)

{
  FUN_141628e50(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 141628e50 FUN_141628e50 body=1519 status=ok
// SIG undefined FUN_141628e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141628e50(longlong param_1,longlong param_2,wchar_t *param_3,longlong param_4,
                      wchar_t *param_5)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  int local_190;
  undefined4 local_18c;
  wchar_t *local_188;
  int local_180;
  undefined4 local_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_198 = param_5;
  local_188 = param_3;
  local_148 = param_4;
  piVar6 = (int *)FArchive::operator<<(param_3);
  local_178 = *piVar6;
  iStack_174 = piVar6[1];
  iStack_170 = piVar6[2];
  iStack_16c = piVar6[3];
  piVar6 = (int *)FArchive::operator<<(param_4);
  local_168 = *piVar6;
  iStack_164 = piVar6[1];
  iStack_160 = piVar6[2];
  iStack_15c = piVar6[3];
  local_158 = 0;
  local_150 = 0;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    iVar5 = GetTypeHash(&local_178);
    lVar10 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar10 = param_1 + 0x88;
    }
    iVar5 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar5 * 0x90 + *(longlong *)(param_1 + 0x50));
        if (((((piVar6[1] == iStack_174 && piVar6[2] == iStack_170) && piVar6[3] == iStack_16c) &&
              local_178 == *piVar6) &&
            (((piVar6[5] == iStack_164 && piVar6[6] == iStack_160) && piVar6[7] == iStack_15c) &&
             local_168 == piVar6[4])) &&
           (((piVar6[0xb] == local_150._4_4_ && piVar6[10] == (int)local_150) &&
            piVar6[9] == local_158._4_4_) && piVar6[8] == (int)local_158)) {
          if (iVar5 != -1) goto LAB_141628fd1;
          break;
        }
        iVar5 = piVar6[0x20];
      } while (iVar5 != -1);
    }
  }
  piVar6 = (int *)0x0;
LAB_141628fd1:
  pwVar3 = local_188;
  piVar8 = piVar6 + 0xc;
  if (piVar6 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  if (piVar8 == (int *)0x0) {
    local_1a8 = 0;
    local_1a0 = 0;
    local_188 = (wchar_t *)0x0;
    pwVar2 = *(wchar_t **)(pwVar3 + 0x20);
    local_17c = 0;
    iVar5 = (int)(*(longlong *)(pwVar3 + 0x24) - (longlong)pwVar2 >> 1);
    local_180 = iVar5 + 1;
    if (iVar5 == 0) {
      local_180 = 0;
    }
    if ((0 < local_180) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0), pwVar3 = local_188,
       0 < local_180)) {
      wcsncpy(local_188,pwVar2,(longlong)iVar5);
      pwVar3[iVar5] = L'\0';
    }
    uVar7 = FText::FromString(local_128,&local_188);
    local_b8 = 4;
    FText::FText(local_a8,uVar7);
    uVar4 = local_1a0;
    lVar10 = (longlong)(int)local_1a0;
    local_90 = '\x01';
    iVar5 = (int)local_1a0 + 1;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar5);
    if (local_1a0._4_4_ < iVar5) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar4 & 0xffffffff);
    }
    puVar9 = (undefined4 *)(lVar10 * 0x30 + local_1a8);
    *puVar9 = local_b8;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_ac,local_b0);
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_ac,local_b0);
    puVar9[2] = local_b0;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_ac,local_b0);
    *(undefined1 *)(puVar9 + 10) = 0;
    if (local_90 != '\0') {
      FText::FText(puVar9 + 4,local_a8);
      *(undefined1 *)(puVar9 + 10) = 1;
      if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_a0 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar6 = (int *)((longlong)local_a0 + 0xc);
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar6 = (int *)((longlong)local_120 + 0xc);
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    if (local_188 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_198 = (wchar_t *)0x0;
    local_18c = 0;
    pwVar3 = *(wchar_t **)(local_148 + 0x40);
    iVar5 = (int)(*(longlong *)(local_148 + 0x48) - (longlong)pwVar3 >> 1);
    local_190 = iVar5 + 1;
    if (iVar5 == 0) {
      local_190 = 0;
    }
    if ((0 < local_190) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0), pwVar2 = local_198,
       0 < local_190)) {
      wcsncpy(local_198,pwVar3,(longlong)iVar5);
      pwVar2[iVar5] = L'\0';
    }
    uVar7 = FText::FromString(local_110,&local_198);
    local_88 = 4;
    FText::FText(local_78,uVar7);
    uVar4 = local_1a0;
    lVar10 = (longlong)(int)local_1a0;
    local_60 = '\x01';
    iVar5 = (int)local_1a0 + 1;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar5);
    if (local_1a0._4_4_ < iVar5) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar4 & 0xffffffff);
    }
    puVar9 = (undefined4 *)(lVar10 * 0x30 + local_1a8);
    *puVar9 = local_88;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_7c,local_80);
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_7c,local_80);
    puVar9[2] = local_80;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_7c,local_80);
    *(undefined1 *)(puVar9 + 10) = 0;
    if (local_60 != '\0') {
      FText::FText(puVar9 + 4,local_78);
      *(undefined1 *)(puVar9 + 10) = 1;
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar6 = (int *)((longlong)local_70 + 0xc);
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar6 = (int *)((longlong)local_108 + 0xc);
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    if (local_198 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e0,L"Post-unary operator {0} cannot operate on {1}",L"ExpressionParser"
                       ,L"PostUnaryExecutionError");
    uVar7 = FTextFormat::FTextFormat(local_c8,uVar7);
    uVar7 = FText::Format(local_f8,uVar7,&local_1a8);
    FText::FText(local_140,uVar7);
    FText::FText(param_2,local_140);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar6 = (int *)((longlong)local_138 + 0xc);
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar6 = (int *)((longlong)local_f0 + 0xc);
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar6 = (int *)((longlong)local_d8 + 0xc);
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (&local_1a8);
  }
  else {
    UE4Function_Private::
    TFunctionRefBase<TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
    ::operator()(piVar8,param_2,local_148,local_198);
  }
  return param_2;
}



// FUNCTION 141629440 FUN_141629440 body=36 status=ok
// SIG undefined FUN_141629440(void)

undefined8 FUN_141629440(longlong param_1,undefined8 param_2)

{
  FUN_141629470(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 141629470 FUN_141629470 body=1518 status=ok
// SIG undefined FUN_141629470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141629470(longlong *param_1,longlong param_2,wchar_t *param_3,longlong param_4,
                      wchar_t *param_5)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  int local_190;
  undefined4 local_18c;
  wchar_t *local_188;
  int local_180;
  undefined4 local_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  longlong local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_198 = param_5;
  local_188 = param_3;
  local_148 = param_4;
  piVar5 = (int *)FArchive::operator<<(param_3);
  local_178 = *piVar5;
  iStack_174 = piVar5[1];
  iStack_170 = piVar5[2];
  iStack_16c = piVar5[3];
  local_168 = 0;
  local_160 = 0;
  piVar5 = (int *)FArchive::operator<<(param_4);
  local_158 = *piVar5;
  iStack_154 = piVar5[1];
  iStack_150 = piVar5[2];
  iStack_14c = piVar5[3];
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = GetTypeHash(&local_178);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar4 * 0x90 + *param_1);
        if (((((piVar5[1] == iStack_174 && piVar5[2] == iStack_170) && piVar5[3] == iStack_16c) &&
              local_178 == *piVar5) &&
            (((piVar5[7] == local_160._4_4_ && piVar5[6] == (int)local_160) &&
             piVar5[5] == local_168._4_4_) && (int)local_168 == piVar5[4])) &&
           (((piVar5[9] == iStack_154 && piVar5[10] == iStack_150) && piVar5[0xb] == iStack_14c) &&
            piVar5[8] == local_158)) {
          if (iVar4 != -1) goto LAB_1416295f0;
          break;
        }
        iVar4 = piVar5[0x20];
      } while (iVar4 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_1416295f0:
  pwVar2 = local_188;
  piVar8 = piVar5 + 0xc;
  if (piVar5 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  if (piVar8 == (int *)0x0) {
    local_1a8 = 0;
    local_1a0 = 0;
    local_188 = (wchar_t *)0x0;
    pwVar1 = *(wchar_t **)(pwVar2 + 0x20);
    local_17c = 0;
    iVar4 = (int)(*(longlong *)(pwVar2 + 0x24) - (longlong)pwVar1 >> 1);
    local_180 = iVar4 + 1;
    if (iVar4 == 0) {
      local_180 = 0;
    }
    if ((0 < local_180) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0), pwVar2 = local_188,
       0 < local_180)) {
      wcsncpy(local_188,pwVar1,(longlong)iVar4);
      pwVar2[iVar4] = L'\0';
    }
    uVar7 = FText::FromString(local_128,&local_188);
    local_b8 = 4;
    FText::FText(local_a8,uVar7);
    uVar3 = local_1a0;
    lVar10 = (longlong)(int)local_1a0;
    local_90 = '\x01';
    iVar4 = (int)local_1a0 + 1;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar4);
    if (local_1a0._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar3 & 0xffffffff);
    }
    puVar9 = (undefined4 *)(lVar10 * 0x30 + local_1a8);
    *puVar9 = local_b8;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_ac,local_b0);
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_ac,local_b0);
    puVar9[2] = local_b0;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_ac,local_b0);
    *(undefined1 *)(puVar9 + 10) = 0;
    if (local_90 != '\0') {
      FText::FText(puVar9 + 4,local_a8);
      *(undefined1 *)(puVar9 + 10) = 1;
      if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_a0 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar5 = (int *)((longlong)local_a0 + 0xc);
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_120 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar5 = (int *)((longlong)local_120 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    if (local_188 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_198 = (wchar_t *)0x0;
    local_18c = 0;
    pwVar2 = *(wchar_t **)(local_148 + 0x40);
    iVar4 = (int)(*(longlong *)(local_148 + 0x48) - (longlong)pwVar2 >> 1);
    local_190 = iVar4 + 1;
    if (iVar4 == 0) {
      local_190 = 0;
    }
    if ((0 < local_190) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0), pwVar1 = local_198,
       0 < local_190)) {
      wcsncpy(local_198,pwVar2,(longlong)iVar4);
      pwVar1[iVar4] = L'\0';
    }
    uVar7 = FText::FromString(local_110,&local_198);
    local_88 = 4;
    FText::FText(local_78,uVar7);
    uVar3 = local_1a0;
    lVar10 = (longlong)(int)local_1a0;
    local_60 = '\x01';
    iVar4 = (int)local_1a0 + 1;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar4);
    if (local_1a0._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar3 & 0xffffffff);
    }
    puVar9 = (undefined4 *)(lVar10 * 0x30 + local_1a8);
    *puVar9 = local_88;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_7c,local_80);
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_7c,local_80);
    puVar9[2] = local_80;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_7c,local_80);
    *(undefined1 *)(puVar9 + 10) = 0;
    if (local_60 != '\0') {
      FText::FText(puVar9 + 4,local_78);
      *(undefined1 *)(puVar9 + 10) = 1;
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar5 = (int *)((longlong)local_70 + 0xc);
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_108 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar5 = (int *)((longlong)local_108 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    if (local_198 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e0,L"Pre-unary operator {0} cannot operate on {1}",L"ExpressionParser",
                       L"PreUnaryExecutionError");
    uVar7 = FTextFormat::FTextFormat(local_c8,uVar7);
    uVar7 = FText::Format(local_f8,uVar7,&local_1a8);
    FText::FText(local_140,uVar7);
    FText::FText(param_2,local_140);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_138 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar5 = (int *)((longlong)local_138 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_f0 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar5 = (int *)((longlong)local_f0 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_d8 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar5 = (int *)((longlong)local_d8 + 0xc);
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (&local_1a8);
  }
  else {
    UE4Function_Private::
    TFunctionRefBase<TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
    ::operator()(piVar8,param_2,local_148,local_198);
  }
  return param_2;
}



// FUNCTION 141629a60 Execute body=50 status=ok
// SIG undefined Execute(void)

void TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(TSharedRef<IMessageToken,0>_const_&),FString>
     ::Execute(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FString::FString(local_18,param_1 + 0x10);
  (**(code **)(param_1 + 8))(param_2,uVar1);
  return;
}



// FUNCTION 141629aa0 ExecuteIfSafe body=52 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,0>_const_&),FString>::
ExecuteIfSafe(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FString::FString(local_18,param_1 + 0x10);
  (**(code **)(param_1 + 8))(param_2,uVar1);
  return 1;
}



// FUNCTION 141629ae0 FUN_141629ae0 body=226 status=ok
// SIG undefined FUN_141629ae0(void)

undefined8
FUN_141629ae0(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  void *local_18;
  int local_10;
  
  if ((param_5 & 0x10000000) == 0) {
    return 0;
  }
  FString::PrintfImpl(&local_18,L"FRandomStream(%i)",*param_3);
  _Src = local_18;
  iVar3 = 0;
  if (local_10 != 0) {
    iVar3 = local_10 + -1;
  }
  if (iVar3 != 0) {
    iVar1 = (int)param_2[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return 1;
}



// FUNCTION 141629bd0 FInterpConstantTo body=85 status=ok
// SIG undefined FInterpConstantTo(void)

float FMath::FInterpConstantTo(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 - param_1;
  if (1e-08 <= fVar2 * fVar2) {
    param_3 = param_3 * param_4;
    fVar1 = -param_3;
    if ((-param_3 <= fVar2) && (fVar1 = param_3, fVar2 <= param_3)) {
      fVar1 = fVar2;
    }
    return fVar1 + param_1;
  }
  return param_2;
}



// FUNCTION 141629c30 FInterpTo body=91 status=ok
// SIG undefined FInterpTo(void)

float FMath::FInterpTo(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  if ((0.0 < param_4) && (fVar2 = param_2 - param_1, 1e-08 <= fVar2 * fVar2)) {
    param_3 = param_3 * param_4;
    fVar1 = 0.0;
    if ((0.0 <= param_3) && (fVar1 = param_3, 1.0 <= param_3)) {
      fVar1 = 1.0;
    }
    return fVar1 * fVar2 + param_1;
  }
  return param_2;
}



// FUNCTION 141629c90 Factorial body=37 status=ok
// SIG undefined Factorial(void)

int Factorial(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = Factorial(param_1 + -1);
  return iVar1 * param_1;
}



// FUNCTION 141629cc0 FindAsset body=89 status=ok
// SIG undefined FindAsset(void)

void FAssetNameToken::FindAsset(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((DAT_1468b5b10 != 0) && (DAT_1468b5b08 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_1468b5b08 + 0x18))();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)0x0;
      if (DAT_1468b5b10 != 0) {
        plVar2 = DAT_1468b5b08;
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141629d20 FindBestAxisVectors body=555 status=ok
// SIG undefined FindBestAxisVectors(void)

void FVector::FindBestAxisVectors(float *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_58;
  float fStack_54;
  float local_50;
  
  if ((ABS(param_1[2]) <= ABS(*param_1)) || (ABS(param_1[2]) <= ABS(param_1[1]))) {
    uVar3 = 0;
    local_50 = 1.0;
  }
  else {
    uVar3 = 0x3f800000;
    local_50 = 0.0;
  }
  *(ulonglong *)param_2 = (ulonglong)uVar3;
  param_2[2] = local_50;
  fVar4 = *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
  local_58 = *param_2 - *param_1 * fVar4;
  fStack_54 = param_2[1] - param_1[1] * fVar4;
  local_50 = param_2[2] - param_1[2] * fVar4;
  fVar4 = fStack_54 * fStack_54 + local_58 * local_58 + local_50 * local_50;
  if (fVar4 != 1.0) {
    if (fVar4 < 1e-08) {
      local_58 = DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
      fStack_54 = DAT_1468b5d94;
    }
    else {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      local_58 = local_58 * fVar5;
      fStack_54 = fStack_54 * fVar5;
      local_50 = local_50 * fVar5;
    }
  }
  *(ulonglong *)param_2 = CONCAT44(fStack_54,local_58);
  param_2[2] = local_50;
  fVar4 = param_1[1];
  fVar5 = *param_1;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  *param_3 = CONCAT44(fVar5 * param_2[2] - param_1[2] * *param_2,
                      param_1[2] * param_2[1] - fVar4 * param_2[2]);
  *(float *)(param_3 + 1) = fVar4 * fVar1 - fVar5 * fVar2;
  return;
}



// FUNCTION 141629f50 FindBetweenNormals body=411 status=ok
// SIG undefined FindBetweenNormals(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FQuat::FindBetweenNormals(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  float local_38;
  float fStack_34;
  float fStack_30;
  
  fStack_30 = param_2[1];
  fVar1 = *param_2;
  fVar12 = param_2[2];
  fVar13 = param_3[2];
  fVar14 = *param_3;
  fVar4 = fVar14 * fVar1 + param_3[1] * fStack_30 + fVar13 * fVar12 + 1.0;
  if (fVar4 < 1e-06) {
    if (ABS(fVar1) <= ABS(fStack_30)) {
      local_38 = 0.0;
      fStack_34 = -fVar12;
    }
    else {
      fStack_34 = 0.0;
      local_38 = -fVar12;
      fStack_30 = fVar1;
    }
    *(ulonglong *)param_1 = CONCAT44(fStack_34,local_38);
    *(ulonglong *)(param_1 + 2) = (ulonglong)(uint)fStack_30;
  }
  else {
    fVar5 = param_3[1];
    *param_1 = fVar13 * fStack_30 - fVar12 * param_3[1];
    param_1[1] = fVar12 * fVar14 - fVar13 * fVar1;
    param_1[2] = fVar1 * fVar5 - fVar14 * fStack_30;
    param_1[3] = fVar4;
  }
  fVar1 = *param_1;
  fVar12 = param_1[1];
  fVar13 = param_1[2];
  fVar14 = param_1[3];
  auVar2._0_4_ = fVar1 * fVar1 + fVar13 * fVar13;
  auVar2._4_4_ = fVar12 * fVar12 + fVar14 * fVar14;
  auVar2._8_4_ = fVar13 * fVar13 + fVar1 * fVar1;
  auVar2._12_4_ = fVar14 * fVar14 + fVar12 * fVar12;
  fVar8 = auVar2._4_4_ + auVar2._0_4_;
  fVar9 = auVar2._8_4_ + auVar2._4_4_;
  fVar10 = auVar2._12_4_ + auVar2._8_4_;
  fVar11 = auVar2._0_4_ + auVar2._12_4_;
  auVar3._4_4_ = fVar9;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = fVar11;
  auVar3 = rsqrtps(auVar2,auVar3);
  fVar4 = auVar3._0_4_;
  fVar5 = auVar3._4_4_;
  fVar6 = auVar3._8_4_;
  fVar7 = auVar3._12_4_;
  fVar4 = (_DAT_1468b5be0 - fVar4 * fVar4 * _DAT_1468b5be0 * fVar8) * fVar4 + fVar4;
  fVar5 = (fRam00000001468b5be4 - fVar5 * fVar5 * fRam00000001468b5be4 * fVar9) * fVar5 + fVar5;
  fVar6 = (fRam00000001468b5be8 - fVar6 * fVar6 * fRam00000001468b5be8 * fVar10) * fVar6 + fVar6;
  fVar7 = (fRam00000001468b5bec - fVar7 * fVar7 * fRam00000001468b5bec * fVar11) * fVar7 + fVar7;
  fVar12 = (float)(((uint)(((fRam00000001468b5be4 - fVar5 * fVar5 * fRam00000001468b5be4 * fVar9) *
                            fVar5 + fVar5) * fVar12) ^ uRam00000001468b5bd4) &
                   -(uint)(1e-08 <= fVar9) ^ uRam00000001468b5bd4);
  fVar13 = (float)(((uint)(((fRam00000001468b5be8 - fVar6 * fVar6 * fRam00000001468b5be8 * fVar10) *
                            fVar6 + fVar6) * fVar13) ^ uRam00000001468b5bd8) &
                   -(uint)(1e-08 <= fVar10) ^ uRam00000001468b5bd8);
  fVar14 = (float)(((uint)(((fRam00000001468b5bec - fVar7 * fVar7 * fRam00000001468b5bec * fVar11) *
                            fVar7 + fVar7) * fVar14) ^ uRam00000001468b5bdc) &
                   -(uint)(1e-08 <= fVar11) ^ uRam00000001468b5bdc);
  *param_1 = (float)(((uint)(((_DAT_1468b5be0 - fVar4 * fVar4 * _DAT_1468b5be0 * fVar8) * fVar4 +
                             fVar4) * fVar1) ^ _DAT_1468b5bd0) & -(uint)(1e-08 <= fVar8) ^
                    _DAT_1468b5bd0);
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar14;
  return param_1;
}



// FUNCTION 14162a0f0 FindBetweenVectors body=513 status=ok
// SIG undefined FindBetweenVectors(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FQuat::FindBetweenVectors(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  float local_58;
  float fStack_54;
  float fStack_50;
  
  fVar1 = *param_2;
  fVar12 = param_2[2];
  fStack_50 = param_2[1];
  fVar13 = param_3[1];
  fVar14 = *param_3;
  fVar5 = param_3[2];
  fVar7 = SQRT((fVar1 * fVar1 + fStack_50 * fStack_50 + fVar12 * fVar12) *
               (fVar14 * fVar14 + fVar13 * fVar13 + fVar5 * fVar5));
  fVar4 = fVar1 * fVar14 + fStack_50 * fVar13 + fVar12 * fVar5 + fVar7;
  if (fVar4 < fVar7 * 1e-06) {
    if (ABS(fVar1) <= ABS(fStack_50)) {
      local_58 = 0.0;
      fStack_54 = -fVar12;
    }
    else {
      fStack_54 = 0.0;
      local_58 = -fVar12;
      fStack_50 = fVar1;
    }
    *(ulonglong *)param_1 = CONCAT44(fStack_54,local_58);
    *(ulonglong *)(param_1 + 2) = (ulonglong)(uint)fStack_50;
  }
  else {
    *param_1 = fStack_50 * fVar5 - fVar12 * fVar13;
    param_1[1] = fVar12 * fVar14 - fVar1 * fVar5;
    param_1[2] = fVar1 * fVar13 - fStack_50 * fVar14;
    param_1[3] = fVar4;
  }
  fVar1 = *param_1;
  fVar12 = param_1[1];
  fVar13 = param_1[2];
  fVar14 = param_1[3];
  auVar2._0_4_ = fVar1 * fVar1 + fVar13 * fVar13;
  auVar2._4_4_ = fVar12 * fVar12 + fVar14 * fVar14;
  auVar2._8_4_ = fVar13 * fVar13 + fVar1 * fVar1;
  auVar2._12_4_ = fVar14 * fVar14 + fVar12 * fVar12;
  fVar8 = auVar2._4_4_ + auVar2._0_4_;
  fVar9 = auVar2._8_4_ + auVar2._4_4_;
  fVar10 = auVar2._12_4_ + auVar2._8_4_;
  fVar11 = auVar2._0_4_ + auVar2._12_4_;
  auVar3._4_4_ = fVar9;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = fVar11;
  auVar3 = rsqrtps(auVar2,auVar3);
  fVar5 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar7 = auVar3._8_4_;
  fVar6 = auVar3._12_4_;
  fVar5 = (_DAT_1468b5be0 - fVar5 * fVar5 * _DAT_1468b5be0 * fVar8) * fVar5 + fVar5;
  fVar4 = (fRam00000001468b5be4 - fVar4 * fVar4 * fRam00000001468b5be4 * fVar9) * fVar4 + fVar4;
  fVar7 = (fRam00000001468b5be8 - fVar7 * fVar7 * fRam00000001468b5be8 * fVar10) * fVar7 + fVar7;
  fVar6 = (fRam00000001468b5bec - fVar6 * fVar6 * fRam00000001468b5bec * fVar11) * fVar6 + fVar6;
  fVar12 = (float)(((uint)(((fRam00000001468b5be4 - fVar4 * fVar4 * fRam00000001468b5be4 * fVar9) *
                            fVar4 + fVar4) * fVar12) ^ uRam00000001468b5bd4) &
                   -(uint)(1e-08 <= fVar9) ^ uRam00000001468b5bd4);
  fVar13 = (float)(((uint)(((fRam00000001468b5be8 - fVar7 * fVar7 * fRam00000001468b5be8 * fVar10) *
                            fVar7 + fVar7) * fVar13) ^ uRam00000001468b5bd8) &
                   -(uint)(1e-08 <= fVar10) ^ uRam00000001468b5bd8);
  fVar14 = (float)(((uint)(((fRam00000001468b5bec - fVar6 * fVar6 * fRam00000001468b5bec * fVar11) *
                            fVar6 + fVar6) * fVar14) ^ uRam00000001468b5bdc) &
                   -(uint)(1e-08 <= fVar11) ^ uRam00000001468b5bdc);
  *param_1 = (float)(((uint)(((_DAT_1468b5be0 - fVar5 * fVar5 * _DAT_1468b5be0 * fVar8) * fVar5 +
                             fVar5) * fVar1) ^ _DAT_1468b5bd0) & -(uint)(1e-08 <= fVar8) ^
                    _DAT_1468b5bd0);
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar14;
  return param_1;
}



// FUNCTION 14162a300 FindBounds body=752 status=ok
// SIG undefined FindBounds(void)

void FindBounds(float *param_1,float *param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,char param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = param_3;
  if (param_6 <= param_3) {
    fVar2 = param_6;
  }
  *param_1 = fVar2;
  fVar2 = param_3;
  if (param_3 <= param_6) {
    fVar2 = param_6;
  }
  *param_2 = fVar2;
  if (param_9 != '\0') {
    fVar6 = param_8 - param_5;
    param_4 = param_4 * fVar6;
    param_7 = fVar6 * param_7;
    fVar3 = ((param_4 + param_7) * 3.0 + param_3 * 6.0) - param_6 * 6.0;
    fVar5 = param_6 * 6.0 - (param_4 * 4.0 + param_3 * 6.0 + param_7 + param_7);
    fVar2 = fVar5 * fVar5 - fVar3 * 4.0 * param_4;
    if ((0.0 < fVar2) && (1e-08 < ABS(fVar3))) {
      fVar2 = SQRT(fVar2);
      fVar7 = (fVar2 - fVar5) * (0.5 / fVar3);
      fVar1 = fVar6 * fVar7 + param_5;
      if ((param_5 < fVar1) && (fVar1 < param_8)) {
        fVar1 = fVar7 * fVar7;
        fVar4 = fVar1 * fVar7;
        fVar7 = ((fVar4 - (fVar1 + fVar1)) + fVar7) * param_4 +
                (((fVar4 + fVar4) - fVar1 * 3.0) + 1.0) * param_3 + (fVar4 - fVar1) * param_7 +
                (fVar1 * 3.0 - (fVar4 + fVar4)) * param_6;
        fVar1 = *param_1;
        if (fVar7 <= *param_1) {
          fVar1 = fVar7;
        }
        *param_1 = fVar1;
        if (fVar7 <= *param_2) {
          fVar7 = *param_2;
        }
        *param_2 = fVar7;
      }
      fVar2 = (-fVar5 - fVar2) * (0.5 / fVar3);
      fVar3 = fVar6 * fVar2 + param_5;
      if ((param_5 < fVar3) && (fVar3 < param_8)) {
        fVar3 = fVar2 * fVar2;
        fVar5 = fVar3 * fVar2;
        fVar3 = ((fVar5 - (fVar3 + fVar3)) + fVar2) * param_4 +
                (((fVar5 + fVar5) - fVar3 * 3.0) + 1.0) * param_3 + (fVar5 - fVar3) * param_7 +
                (fVar3 * 3.0 - (fVar5 + fVar5)) * param_6;
        fVar2 = *param_1;
        if (fVar3 <= *param_1) {
          fVar2 = fVar3;
        }
        *param_1 = fVar2;
        if (fVar3 <= *param_2) {
          fVar3 = *param_2;
        }
        *param_2 = fVar3;
      }
    }
  }
  return;
}



// FUNCTION 14162a680 FixedTurn body=492 status=ok
// SIG undefined FixedTurn(void)

undefined8 FMath::FixedTurn(undefined8 param_1,undefined8 param_2,float param_3)

{
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 uVar1;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 uVar8;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar7 = (float)param_2;
  fVar3 = (float)param_1;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._0_8_ = param_2;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar2._8_4_ = in_XMM0_Dc;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = in_XMM0_Dd;
  auVar4._4_12_ = auVar2._4_12_;
  if (param_3 == 0.0) {
    fVar7 = (float)(int)(fVar3 * 0.0027777778) * 360.0;
    if (ABS(fVar3) < ABS(fVar7)) {
      fVar7 = fVar3;
    }
    auVar4._0_4_ = fVar3 - fVar7;
    goto LAB_14162a856;
  }
  auVar10._4_12_ = auVar9._4_12_;
  if (360.0 <= param_3) {
    fVar3 = (float)(int)(fVar7 * 0.0027777778) * 360.0;
    if (ABS(fVar7) < ABS(fVar3)) {
      fVar3 = fVar7;
    }
    auVar10._0_4_ = fVar7 - fVar3;
    uVar8 = auVar10._0_8_;
    if (auVar10._0_4_ < 0.0) {
      auVar11._0_4_ = auVar10._0_4_ + 360.0;
      auVar11._4_12_ = auVar10._4_12_;
      uVar8 = auVar11._0_8_;
    }
    return uVar8;
  }
  fVar12 = (float)(int)(fVar3 * 0.0027777778) * 360.0;
  if (ABS(fVar3) < ABS(fVar12)) {
    fVar12 = fVar3;
  }
  fVar3 = fVar3 - fVar12;
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + 360.0;
  }
  fVar12 = (float)(int)(fVar7 * 0.0027777778) * 360.0;
  if (ABS(fVar7) < ABS(fVar12)) {
    fVar12 = fVar7;
  }
  fVar7 = fVar7 - fVar12;
  if (fVar7 < 0.0) {
    fVar7 = fVar7 + 360.0;
  }
  param_3 = ABS(param_3);
  if (fVar3 <= fVar7) {
    fVar12 = fVar7 - fVar3;
    if (180.0 <= fVar12) {
      fVar12 = (fVar3 + 360.0) - fVar7;
      goto LAB_14162a815;
    }
    if (param_3 <= fVar12) {
      fVar12 = param_3;
    }
    auVar5._4_4_ = uVar1;
    auVar5._0_4_ = fVar12 + fVar3;
    auVar5._8_4_ = in_XMM1_Dc;
    auVar5._12_4_ = in_XMM1_Dd;
  }
  else {
    fVar12 = fVar3 - fVar7;
    if (fVar12 < 180.0) {
LAB_14162a815:
      if (param_3 <= fVar12) {
        fVar12 = param_3;
      }
      auVar5._0_4_ = fVar3 - fVar12;
      auVar5._4_12_ = auVar4._4_12_;
    }
    else {
      fVar7 = (fVar7 + 360.0) - fVar3;
      if (param_3 <= fVar7) {
        fVar7 = param_3;
      }
      auVar5._4_4_ = uVar1;
      auVar5._0_4_ = fVar7 + fVar3;
      auVar5._8_4_ = in_XMM1_Dc;
      auVar5._12_4_ = in_XMM1_Dd;
    }
  }
  fVar7 = auVar5._0_4_;
  fVar3 = (float)(int)(fVar7 * 0.0027777778) * 360.0;
  auVar2 = ZEXT416((uint)fVar3);
  if (ABS(fVar7) < ABS(fVar3)) {
    auVar2 = auVar5;
  }
  auVar4._4_12_ = auVar5._4_12_;
  auVar4._0_4_ = fVar7 - auVar2._0_4_;
LAB_14162a856:
  uVar8 = auVar4._0_8_;
  if (auVar4._0_4_ < 0.0) {
    auVar6._4_12_ = auVar4._4_12_;
    auVar6._0_4_ = auVar4._0_4_ + 360.0;
    uVar8 = auVar6._0_8_;
  }
  return uVar8;
}



// FUNCTION 14162a870 Flush body=187 status=ok
// SIG undefined Flush(void)

void FMessageLog::Flush(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (0 < (int)param_1[1]) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))
              ((longlong *)param_1[2],param_1,(char)param_1[4] == '\0');
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 8);
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
        plVar7 = plVar7 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14162a930 FUN_14162a930 body=40 status=ok
// SIG undefined FUN_14162a930(void)

undefined8 FUN_14162a930(char param_1)

{
  if (param_1 == '\x1b') {
    return 0x4011cafa9bbd0a62;
  }
  if (param_1 != '\x1c') {
    return 0x3ff0000000000000;
  }
  return 0x40239d013a92a305;
}



// FUNCTION 14162a960 FUN_14162a960 body=68 status=ok
// SIG undefined FUN_14162a960(void)

undefined8 FUN_14162a960(char param_1)

{
  if (param_1 == '\x1d') {
    return 0x3f50624dd2f1a9fc;
  }
  if (param_1 == '\x1f') {
    return 0x408f400000000000;
  }
  if (param_1 == ' ') {
    return 0x412e848000000000;
  }
  if (param_1 != '!') {
    return 0x3ff0000000000000;
  }
  return 0x3ef179ec9cbd821e;
}



// FUNCTION 14162a9b0 FUN_14162a9b0 body=1217 status=ok
// SIG undefined FUN_14162a9b0(void)

char * FUN_14162a9b0(char *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined3 uVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  int3 local_res10;
  char cStackX_13;
  
  iVar2 = (int)param_2[1];
  if ((iVar2 < 2) || (uVar11 = 1, *(short *)*param_2 != 0x23)) {
    uVar11 = 0;
  }
  iVar9 = iVar2 + -1;
  iVar13 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar13 = -1;
    iVar9 = 0;
  }
  if (iVar9 == uVar11 + 3) {
    lVar3 = *param_2;
    sVar1 = *(short *)(lVar3 + (ulonglong)uVar11 * 2);
    cVar12 = (char)sVar1;
    if ((ushort)(sVar1 - 0x30U) < 10) {
      cVar12 = cVar12 * '\x11' + -0x30;
    }
    else if ((ushort)(sVar1 - 0x61U) < 6) {
      cVar12 = cVar12 * '\x11' + '9';
    }
    else if ((ushort)(sVar1 - 0x41U) < 6) {
      cVar12 = cVar12 * '\x11' + 'Y';
    }
    else {
      cVar12 = '\0';
    }
    sVar1 = *(short *)(lVar3 + 2 + (ulonglong)uVar11 * 2);
    cVar10 = (char)sVar1;
    if ((ushort)(sVar1 - 0x30U) < 10) {
      cVar10 = cVar10 * '\x11' + -0x30;
    }
    else if ((ushort)(sVar1 - 0x61U) < 6) {
      cVar10 = cVar10 * '\x11' + '9';
    }
    else if ((ushort)(sVar1 - 0x41U) < 6) {
      cVar10 = cVar10 * '\x11' + 'Y';
    }
    else {
      cVar10 = '\0';
    }
    sVar1 = *(short *)(lVar3 + 4 + (ulonglong)uVar11 * 2);
    cVar5 = (char)sVar1;
    if ((ushort)(sVar1 - 0x30U) < 10) {
      cVar5 = cVar5 * '\x11' + -0x30;
    }
    else if ((ushort)(sVar1 - 0x61U) < 6) {
      cVar5 = cVar5 * '\x11' + '9';
    }
    else if ((ushort)(sVar1 - 0x41U) < 6) {
      cVar5 = cVar5 * '\x11' + 'Y';
    }
    else {
      cVar5 = '\0';
    }
    param_1[2] = cVar12;
    param_1[1] = cVar10;
    *param_1 = cVar5;
    param_1[3] = -1;
    return param_1;
  }
  if (iVar2 == 0) {
    iVar13 = 0;
  }
  if (iVar13 == uVar11 + 6) {
    uVar14 = (ulonglong)uVar11;
    lVar3 = *param_2;
    uVar6 = *(ushort *)(lVar3 + uVar14 * 2);
    if (9 < (ushort)(uVar6 - 0x30)) {
      if ((ushort)(uVar6 - 0x61) < 6) {
        uVar6 = (ushort)(byte)((char)uVar6 + 0xa9);
      }
      else if ((ushort)(uVar6 - 0x41) < 6) {
        uVar6 = (ushort)(byte)((char)uVar6 - 0x37);
      }
      else {
        uVar6 = 0;
      }
    }
    sVar1 = *(short *)(lVar3 + 2 + uVar14 * 2);
    cVar12 = (char)sVar1;
    if ((ushort)(sVar1 - 0x30U) < 10) {
      cVar12 = cVar12 + -0x30;
    }
    else if ((ushort)(sVar1 - 0x61U) < 6) {
      cVar12 = cVar12 + -0x57;
    }
    else if ((ushort)(sVar1 - 0x41U) < 6) {
      cVar12 = cVar12 + -0x37;
    }
    else {
      cVar12 = '\0';
    }
    uVar7 = *(ushort *)(lVar3 + 4 + uVar14 * 2);
    if (9 < (ushort)(uVar7 - 0x30)) {
      if ((ushort)(uVar7 - 0x61) < 6) {
        uVar7 = (ushort)(byte)((char)uVar7 + 0xa9);
      }
      else if ((ushort)(uVar7 - 0x41) < 6) {
        uVar7 = (ushort)(byte)((char)uVar7 - 0x37);
      }
      else {
        uVar7 = 0;
      }
    }
    sVar1 = *(short *)(lVar3 + 6 + uVar14 * 2);
    cVar10 = (char)sVar1;
    if ((ushort)(sVar1 - 0x30U) < 10) {
      cVar10 = cVar10 + -0x30;
    }
    else if ((ushort)(sVar1 - 0x61U) < 6) {
      cVar10 = cVar10 + -0x57;
    }
    else if ((ushort)(sVar1 - 0x41U) < 6) {
      cVar10 = cVar10 + -0x37;
    }
    else {
      cVar10 = '\0';
    }
    uVar8 = *(ushort *)(lVar3 + 8 + uVar14 * 2);
    if (9 < (ushort)(uVar8 - 0x30)) {
      if ((ushort)(uVar8 - 0x61) < 6) {
        uVar8 = (ushort)(byte)((char)uVar8 + 0xa9);
      }
      else if ((ushort)(uVar8 - 0x41) < 6) {
        uVar8 = (ushort)(byte)((char)uVar8 - 0x37);
      }
      else {
        uVar8 = 0;
      }
    }
    sVar1 = *(short *)(lVar3 + 10 + uVar14 * 2);
    cVar5 = (char)sVar1;
    if ((ushort)(sVar1 - 0x30U) < 10) {
      cVar5 = cVar5 + -0x30;
    }
    else if ((ushort)(sVar1 - 0x61U) < 6) {
      cVar5 = cVar5 + -0x57;
    }
    else if ((ushort)(sVar1 - 0x41U) < 6) {
      cVar5 = cVar5 + -0x37;
    }
    else {
      cVar5 = '\0';
    }
    _local_res10 = CONCAT13(0xff,(uint3)CONCAT11((char)uVar6 * '\x10' + cVar12,
                                                 (char)uVar7 * '\x10' + cVar10) << 8);
    _local_res10 = CONCAT31(stack0x00000011,(char)uVar8 * '\x10' + cVar5);
    *(undefined4 *)param_1 = _local_res10;
    return param_1;
  }
  if (iVar13 != uVar11 + 8) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    return param_1;
  }
  uVar14 = (ulonglong)uVar11;
  lVar3 = *param_2;
  uVar6 = *(ushort *)(lVar3 + uVar14 * 2);
  if (9 < (ushort)(uVar6 - 0x30)) {
    if ((ushort)(uVar6 - 0x61) < 6) {
      uVar6 = (ushort)(byte)((char)uVar6 + 0xa9);
    }
    else if ((ushort)(uVar6 - 0x41) < 6) {
      uVar6 = (ushort)(byte)((char)uVar6 - 0x37);
    }
    else {
      uVar6 = 0;
    }
  }
  sVar1 = *(short *)(lVar3 + 2 + uVar14 * 2);
  cVar12 = (char)sVar1;
  if ((ushort)(sVar1 - 0x30U) < 10) {
    cVar12 = cVar12 + -0x30;
  }
  else if ((ushort)(sVar1 - 0x61U) < 6) {
    cVar12 = cVar12 + -0x57;
  }
  else if ((ushort)(sVar1 - 0x41U) < 6) {
    cVar12 = cVar12 + -0x37;
  }
  else {
    cVar12 = '\0';
  }
  uVar7 = *(ushort *)(lVar3 + 4 + uVar14 * 2);
  if (9 < (ushort)(uVar7 - 0x30)) {
    if ((ushort)(uVar7 - 0x61) < 6) {
      uVar7 = (ushort)(byte)((char)uVar7 + 0xa9);
    }
    else if ((ushort)(uVar7 - 0x41) < 6) {
      uVar7 = (ushort)(byte)((char)uVar7 - 0x37);
    }
    else {
      uVar7 = 0;
    }
  }
  sVar1 = *(short *)(lVar3 + 6 + uVar14 * 2);
  cVar10 = (char)sVar1;
  if ((ushort)(sVar1 - 0x30U) < 10) {
    cVar10 = cVar10 + -0x30;
  }
  else if ((ushort)(sVar1 - 0x61U) < 6) {
    cVar10 = cVar10 + -0x57;
  }
  else if ((ushort)(sVar1 - 0x41U) < 6) {
    cVar10 = cVar10 + -0x37;
  }
  else {
    cVar10 = '\0';
  }
  uVar8 = *(ushort *)(lVar3 + 8 + uVar14 * 2);
  if (9 < (ushort)(uVar8 - 0x30)) {
    if ((ushort)(uVar8 - 0x61) < 6) {
      uVar8 = (ushort)(byte)((char)uVar8 + 0xa9);
    }
    else if ((ushort)(uVar8 - 0x41) < 6) {
      uVar8 = (ushort)(byte)((char)uVar8 - 0x37);
    }
    else {
      uVar8 = 0;
    }
  }
  sVar1 = *(short *)(lVar3 + 10 + uVar14 * 2);
  cVar5 = (char)sVar1;
  if ((ushort)(sVar1 - 0x30U) < 10) {
    cVar5 = cVar5 + -0x30;
  }
  else if ((ushort)(sVar1 - 0x61U) < 6) {
    cVar5 = cVar5 + -0x57;
  }
  else if ((ushort)(sVar1 - 0x41U) < 6) {
    cVar5 = cVar5 + -0x37;
  }
  else {
    cVar5 = '\0';
  }
  uVar4 = CONCAT21(CONCAT11((char)uVar6 * '\x10' + cVar12,(char)uVar7 * '\x10' + cVar10),
                   (char)uVar8 * '\x10' + cVar5);
  uVar6 = *(ushort *)(lVar3 + 0xc + uVar14 * 2);
  if (9 < (ushort)(uVar6 - 0x30)) {
    if ((ushort)(uVar6 - 0x61) < 6) {
      uVar6 = (ushort)(byte)((char)uVar6 + 0xa9);
    }
    else if ((ushort)(uVar6 - 0x41) < 6) {
      uVar6 = (ushort)(byte)((char)uVar6 - 0x37);
    }
    else {
      uVar6 = 0;
    }
  }
  sVar1 = *(short *)(lVar3 + 0xe + uVar14 * 2);
  cVar12 = (char)uVar6;
  cVar10 = (char)sVar1;
  if (9 < (ushort)(sVar1 - 0x30U)) {
    if ((ushort)(sVar1 - 0x61U) < 6) {
      _local_res10 = CONCAT13(cVar12 * '\x10' + cVar10 + -0x57,uVar4);
      *(undefined4 *)param_1 = _local_res10;
      return param_1;
    }
    if (5 < (ushort)(sVar1 - 0x41U)) {
      _local_res10 = CONCAT13(cVar12 * '\x10',uVar4);
      *(undefined4 *)param_1 = _local_res10;
      return param_1;
    }
    _local_res10 = CONCAT13(cVar12 * '\x10' + cVar10 + -0x37,uVar4);
    *(undefined4 *)param_1 = _local_res10;
    return param_1;
  }
  _local_res10 = CONCAT13(cVar12 * '\x10' + cVar10 + -0x30,uVar4);
  *(undefined4 *)param_1 = _local_res10;
  return param_1;
}



// FUNCTION 14162ae80 FromRGBE body=154 status=ok
// SIG undefined FromRGBE(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FColor::FromRGBE(byte *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  double dVar5;
  float fVar6;
  
  uVar4 = _DAT_1464aa6e8;
  if (param_1[3] == 0) {
    *(undefined8 *)param_2 = _DAT_1464aa6e0;
    *(undefined8 *)(param_2 + 2) = uVar4;
    return param_2;
  }
  dVar5 = ldexp(0.00392156862745098,param_1[3] - 0x80);
  bVar1 = param_1[2];
  fVar6 = (float)dVar5;
  param_2[3] = 1.0;
  bVar2 = param_1[1];
  bVar3 = *param_1;
  *param_2 = (float)bVar1 * fVar6;
  param_2[1] = (float)bVar2 * fVar6;
  param_2[2] = (float)bVar3 * fVar6;
  return param_2;
}



// FUNCTION 14162af20 Get body=337 status=ok
// SIG undefined Get(void)

undefined8 * FLogSuppressionInterface::Get(void)

{
  undefined8 *puVar1;
  
  if (DAT_1468b5ed8 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x150);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR__purecall_144cc0ff8;
      FSelfRegisteringExec::FSelfRegisteringExec(puVar1 + 1);
      *puVar1 = &PTR_FUN_144cc1018;
      puVar1[1] = &PTR_LAB_144cc1038;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
      *(undefined4 *)(puVar1 + 8) = 0xffffffff;
      puVar1[10] = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
      *(undefined4 *)(puVar1 + 0x12) = 0xffffffff;
      puVar1[0x14] = 0;
      *(undefined4 *)(puVar1 + 0x15) = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 0;
      *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
      *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
      puVar1[0x1e] = 0;
      *(undefined4 *)(puVar1 + 0x1f) = 0;
      puVar1[0x20] = 0;
      puVar1[0x21] = 0;
      puVar1[0x24] = 0;
      puVar1[0x25] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x134) = 0;
      *(undefined4 *)(puVar1 + 0x26) = 0xffffffff;
      puVar1[0x28] = 0;
      *(undefined4 *)(puVar1 + 0x29) = 0;
      DAT_1468b5ed8 = puVar1;
      return puVar1;
    }
    DAT_1468b5ed8 = (undefined8 *)0x0;
  }
  return DAT_1468b5ed8;
}



// FUNCTION 14162b080 GetAzimuthAndElevation body=745 status=ok
// SIG undefined GetAzimuthAndElevation(void)

float * FMath::GetAzimuthAndElevation
                  (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float _X;
  float local_88;
  
  fVar5 = param_2[1];
  fVar6 = *param_2;
  fVar1 = param_2[2];
  fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar1 * fVar1;
  if (fVar2 == 1.0) {
    local_88 = (float)*(undefined8 *)param_2;
    fVar4 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    fVar7 = param_2[2];
  }
  else {
    fVar4 = DAT_1468b5d94;
    local_88 = DAT_1468b5d90;
    fVar7 = DAT_1468b5d98;
    if (1e-08 <= fVar2) {
      auVar3 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar7 = auVar3._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar2 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar2 * 0.5 * fVar7 * fVar7);
      local_88 = fVar6 * fVar7;
      fVar4 = fVar5 * fVar7;
      fVar7 = fVar1 * fVar7;
    }
  }
  _X = param_5[1] * fVar4 + *param_5 * local_88 + param_5[2] * fVar7;
  local_88 = local_88 - *param_5 * _X;
  fVar4 = fVar4 - param_5[1] * _X;
  fVar7 = fVar7 - param_5[2] * _X;
  fVar2 = fVar4 * fVar4 + local_88 * local_88 + fVar7 * fVar7;
  fVar5 = fVar4;
  fVar6 = local_88;
  fVar1 = fVar7;
  if ((fVar2 != 1.0) &&
     (fVar5 = DAT_1468b5d94, fVar6 = DAT_1468b5d90, fVar1 = DAT_1468b5d98, 1e-08 <= fVar2)) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar1 = auVar3._0_4_;
    fVar1 = fVar1 + fVar1 * (0.5 - fVar2 * 0.5 * fVar1 * fVar1);
    fVar1 = fVar1 + fVar1 * (0.5 - fVar2 * 0.5 * fVar1 * fVar1);
    fVar5 = fVar4 * fVar1;
    fVar6 = local_88 * fVar1;
    fVar1 = fVar7 * fVar1;
  }
  if (0.0 <= fVar5 * param_4[1] + fVar6 * *param_4 + fVar1 * param_4[2]) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = -1.0;
  }
  fVar5 = fVar5 * param_3[1] + fVar6 * *param_3 + fVar1 * param_3[2];
  if (-1.0 <= _X) {
    if (1.0 <= _X) {
      _X = 1.0;
    }
  }
  else {
    _X = -1.0;
  }
  fVar1 = ::_guard_xfg_dispatch_icall_nop(_X);
  fVar6 = -1.0;
  if ((-1.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
    fVar6 = 1.0;
  }
  fVar5 = ::_guard_xfg_dispatch_icall_nop(fVar6);
  param_1[1] = fVar1;
  *param_1 = fVar5 * fVar2;
  return param_1;
}



// FUNCTION 14162b370 GetBranchName body=116 status=ok
// SIG undefined GetBranchName(void)

undefined8 * FApp::GetBranchName(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  psVar1 = (short *)BuildSettings::GetBranchName();
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 14162b3f0 GetBuildDate body=235 status=ok
// SIG undefined GetBuildDate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FApp::GetBuildDate(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined2 local_148;
  short local_138 [128];
  longlong local_38;
  short *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_30 = local_138;
  local_28 = 0xb;
  local_148 = 0x3f;
  local_38 = 0;
  FGenericPlatformString::Convert<char,wchar_t>(local_138,0xc,"Aug  2 2024");
  psVar1 = local_30;
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_30 != (short *)0x0) && (*local_30 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (local_30[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar2 * 2);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14162b4e0 FUN_14162b4e0 body=263 status=ok
// SIG undefined FUN_14162b4e0(void)

undefined2 * FUN_14162b4e0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  
  lVar3 = FUN_14158a970();
  lVar6 = 0;
  do {
    lVar1 = lVar6 * 2;
    lVar6 = lVar6 + 1;
    if (*(short *)(lVar3 + lVar1) != *(short *)(&UNK_144cb69f6 + lVar6 * 2)) {
      puVar7 = (undefined2 *)FUN_14158a970();
      return puVar7;
    }
  } while (lVar6 != 6);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b60a8) {
    _Init_thread_header(&DAT_1468b60a8);
    if (DAT_1468b60a8 == -1) {
      uVar4 = FEngineVersion::Current();
      puVar5 = (undefined8 *)FUN_1405859b0(uVar4);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar5;
      }
      uVar4 = FEngineVersion::Current();
      uVar2 = FEngineVersionBase::GetChangelist(uVar4);
      FString::PrintfImpl(&DAT_1468b6098,L"%s-CL-%u",puVar7,uVar2);
      atexit((_func_5014 *)&LAB_143e78f30);
      _Init_thread_footer(&DAT_1468b60a8);
    }
  }
  puVar7 = &DAT_143f3eda8;
  if (DAT_1468b60a0 != 0) {
    puVar7 = DAT_1468b6098;
  }
  return puVar7;
}



// FUNCTION 14162b5f0 FUN_14162b5f0 body=588 status=ok
// SIG undefined FUN_14162b5f0(void)

undefined8 * FUN_14162b5f0(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
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
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b6050) && (_Init_thread_header(&DAT_1468b6050), DAT_1468b6050 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aaa20,0);
    FGenericPlatformString::Memcpy(DAT_1464aaa20,L"BadIndex",0x12);
    atexit((_func_5014 *)&LAB_143e78ee0);
    _Init_thread_footer(&DAT_1468b6050);
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x60) <= param_2)) {
    return &DAT_1464aaa20;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  puStack_20 = (uint *)(param_1 + 0x18);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)param_2 * 8);
  puVar8 = (undefined8 *)0x0;
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar10 = puStack_20;
    }
    uVar2 = *puVar10;
    puVar7 = puVar8;
    puVar9 = puVar8;
    while (uVar2 == 0) {
      iVar6 = (int)puVar7;
      uStack_40 = (int)puVar9 + 0x20;
      puVar9 = (undefined8 *)(ulonglong)uStack_40;
      local_58 = iVar6 + 1;
      puVar7 = (undefined8 *)(ulonglong)local_58;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14162b6ff;
      uVar2 = puVar10[(longlong)iVar6 + 1];
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
LAB_14162b6ff:
      local_48._4_4_ = iVar1;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  uStack_10 = uStack_40;
  uStack_c = iStack_3c;
  uStack_28 = local_58;
  uStack_24 = uStack_54;
  uStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar5 = local_48._4_4_ < iVar1;
  local_30 = (longlong *)(param_1 + 8);
  local_48 = puStack_20;
  if (bVar5) {
    while (lVar4 = *(longlong *)(param_1 + 8),
          *(longlong *)((longlong)iStack_3c * 0x20 + 0x10 + lVar4) != lVar3) {
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      if ((int)local_48[6] <= iStack_3c) {
        return (undefined8 *)0x0;
      }
    }
    puVar8 = (undefined8 *)((longlong)iStack_3c * 0x20 + lVar4);
  }
  return puVar8;
}



// FUNCTION 14162b840 GetDeploymentName body=85 status=ok
// SIG undefined GetDeploymentName(void)

undefined * FApp::GetDeploymentName(void)

{
  undefined8 uVar1;
  
  if (DAT_1468b6130 == '\0') {
    uVar1 = FCommandLine::Get();
    FParse::Value(uVar1,L"EPICAPP=",&DAT_1468b60b0,0x3f,1);
    DAT_1468b6130 = 1;
    return &DAT_1468b60b0;
  }
  return &DAT_1468b60b0;
}



// FUNCTION 14162b8a0 GetEngineIsPromotedBuild body=23 status=ok
// SIG undefined GetEngineIsPromotedBuild(void)

bool FApp::GetEngineIsPromotedBuild(void)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  return cVar1 != '\0';
}



// FUNCTION 14162b8c0 GetEpicProductIdentifier body=59 status=ok
// SIG undefined GetEpicProductIdentifier(void)

undefined8 * FApp::GetEpicProductIdentifier(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  FGenericPlatformString::Memcpy(*param_1,L"UnrealEngine",0x1a);
  return param_1;
}



// FUNCTION 14162b900 GetFColorByIndex body=29 status=ok
// SIG undefined GetFColorByIndex(void)

undefined * FColorList::GetFColorByIndex(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x60))) {
    return *(undefined **)(*(longlong *)(param_1 + 0x58) + (longlong)param_2 * 8);
  }
  return &DAT_1464aa764;
}



// FUNCTION 14162b920 GetInverse body=101 status=ok
// SIG undefined GetInverse(void)

undefined8 FRotator::GetInverse(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined1 local_18 [16];
  
  puVar1 = (uint *)Quaternion(param_1,local_18);
  local_28 = *puVar1 ^ 0x80000000;
  local_20 = puVar1[2] ^ 0x80000000;
  local_24 = puVar1[1] ^ 0x80000000;
  local_1c = puVar1[3];
  FQuat::Rotator(&local_28,param_2);
  return param_2;
}



// FUNCTION 14162b990 GetLocalizedNumberFormattingRules body=199 status=ok
// SIG undefined GetLocalizedNumberFormattingRules(void)

undefined8 ExpressionParser::GetLocalizedNumberFormattingRules(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  bVar7 = false;
  local_res8 = 0;
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"Internationalization",L"ShouldUseLocalizedNumericInput",&local_res8,
             &DAT_1468e2420);
  if ((char)local_res8 == '\0') {
    uVar5 = FUN_1415da5f0();
    plVar6 = (longlong *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    lVar4 = FInternationalization::Get();
    plVar6 = *(longlong **)(lVar4 + 0x40);
    uVar5 = *(undefined8 *)(lVar4 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    uVar5 = FUN_1415db8e0(uVar5);
    bVar7 = true;
  }
  if ((bVar7) && (plVar6 != (longlong *)0x0)) {
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
  return uVar5;
}



// FUNCTION 14162ba60 GetReflectionVector body=646 status=ok
// SIG undefined GetReflectionVector(void)

float * FMath::GetReflectionVector(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float local_98;
  
  fVar1 = param_3[1];
  fVar4 = param_3[2];
  fVar2 = *param_3;
  fVar8 = fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4;
  if (fVar8 == 1.0) {
    fVar5 = param_3[2];
    fVar3 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_98 = (float)*(undefined8 *)param_3;
    fVar9 = local_98;
  }
  else {
    fVar3 = DAT_1468b5d94;
    fVar9 = DAT_1468b5d90;
    fVar5 = DAT_1468b5d98;
    if (1e-08 <= fVar8) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar8 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar8 * 0.5 * fVar5 * fVar5);
      fVar3 = fVar1 * fVar5;
      fVar9 = fVar2 * fVar5;
      fVar5 = fVar4 * fVar5;
    }
  }
  if (fVar8 == 1.0) {
    local_98 = (float)*(undefined8 *)param_3;
    fVar4 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    fVar6 = param_3[2];
  }
  else {
    fVar4 = DAT_1468b5d94;
    fVar6 = DAT_1468b5d98;
    local_98 = DAT_1468b5d90;
    if (1e-08 <= fVar8) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
      local_98 = fVar2 * fVar6;
      fVar4 = fVar1 * fVar6;
      fVar6 = param_3[2] * fVar6;
    }
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar4 = fVar1 * fVar4 + *param_2 * local_98 + fVar2 * fVar6;
  fVar4 = fVar4 + fVar4;
  *param_1 = *param_2 - fVar9 * fVar4;
  param_1[1] = fVar1 - fVar3 * fVar4;
  param_1[2] = fVar2 - fVar4 * fVar5;
  return param_1;
}



// FUNCTION 14162bcf0 FUN_14162bcf0 body=703 status=ok
// SIG undefined FUN_14162bcf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14162bcf0(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  undefined1 auVar7 [16];
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
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  
  uVar3 = uRam00000001468b5b88;
  uVar2 = _DAT_1468b5b80;
  uVar1 = uRam00000001468b5b78;
  fVar10 = *param_3 * *param_3;
  fVar12 = param_3[1] * param_3[1];
  fVar14 = param_3[2] * param_3[2];
  fVar15 = param_3[3] * param_3[3];
  local_78 = 0.0;
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  fStack_6c = fRam00000001468b5b3c;
  auVar7._0_4_ = (uint)_DAT_1468b5b30 & _DAT_1468b5b40;
  auVar7._4_4_ = (uint)fRam00000001468b5b34 & uRam00000001468b5b44;
  auVar7._8_4_ = (uint)fRam00000001468b5b38 & uRam00000001468b5b48;
  auVar7._12_4_ = (uint)fRam00000001468b5b3c & uRam00000001468b5b4c;
  local_68 = 0;
  uStack_60 = 0;
  fVar11 = fVar10 + fVar14;
  fVar13 = fVar12 + fVar15;
  fVar14 = fVar14 + fVar10;
  fVar15 = fVar15 + fVar12;
  auVar5._4_4_ = -(uint)(fRam00000001468b5c14 <
                        (float)((uint)(fRam00000001468b5b34 - (fVar14 + fVar13)) &
                               uRam00000001468b5b24));
  auVar5._0_4_ = -(uint)(_DAT_1468b5c10 <
                        (float)((uint)(_DAT_1468b5b30 - (fVar13 + fVar11)) & _DAT_1468b5b20));
  auVar5._8_4_ = -(uint)(fRam00000001468b5c18 <
                        (float)((uint)(fRam00000001468b5b38 - (fVar15 + fVar14)) &
                               uRam00000001468b5b28));
  auVar5._12_4_ =
       -(uint)(fRam00000001468b5c1c <
              (float)((uint)(fRam00000001468b5b3c - (fVar11 + fVar15)) & uRam00000001468b5b2c));
  iVar4 = movmskps((int)&stack0x00000000,auVar5);
  if (iVar4 == 0) {
    auVar5 = minps(*(undefined1 (*) [16])(param_1 + 8),*(undefined1 (*) [16])(param_3 + 8));
    auVar6._4_4_ = -(uint)(auVar5._4_4_ < fRam00000001468b5c04);
    auVar6._0_4_ = -(uint)(auVar5._0_4_ < _DAT_1468b5c00);
    auVar6._8_4_ = -(uint)(auVar5._8_4_ < fRam00000001468b5c08);
    auVar6._12_4_ = -(uint)(auVar5._12_4_ < fRam00000001468b5c0c);
    iVar4 = movmskps(0,auVar6);
    _local_58 = auVar7;
    if (iVar4 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1468b6090) &&
         (_Init_thread_header(&DAT_1468b6090), DAT_1468b6090 == -1)) {
        auVar7._8_4_ = 0x322bcc77;
        auVar7._0_8_ = 0x322bcc77322bcc77;
        auVar7._12_4_ = 0x322bcc77;
        _DAT_1468b6080 = auVar7;
        _Init_thread_footer(&DAT_1468b6090);
      }
      auVar5 = *(undefined1 (*) [16])(param_3 + 8);
      fVar10 = auVar5._0_4_;
      fVar11 = auVar5._4_4_;
      fVar12 = auVar5._8_4_;
      fVar13 = auVar5._12_4_;
      auVar5 = rcpps(auVar7,auVar5);
      fVar16 = (float)((uint)(param_1[4] - param_3[4]) & _DAT_1468b5b40);
      fVar17 = (float)((uint)(param_1[5] - param_3[5]) & uRam00000001468b5b44);
      fVar18 = (float)((uint)(param_1[6] - param_3[6]) & uRam00000001468b5b48);
      fVar19 = (float)((uint)(param_1[7] - param_3[7]) & uRam00000001468b5b4c);
      fVar14 = auVar5._0_4_;
      fVar15 = auVar5._4_4_;
      fVar8 = auVar5._8_4_;
      fVar9 = auVar5._12_4_;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar10;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar11;
      fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar12;
      fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar13;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar10;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar11;
      fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar12;
      fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar13;
      fVar20 = *param_3 * _DAT_1468b5b60;
      fVar21 = param_3[1] * fRam00000001468b5b64;
      fVar22 = param_3[2] * fRam00000001468b5b68;
      fVar23 = param_3[3] * fRam00000001468b5b6c;
      local_68._0_4_ =
           (float)((-(uint)((float)((uint)fVar10 & _DAT_1468b5b20) <= _DAT_1468b6080) & (uint)fVar14
                   ^ (uint)fVar14) & _DAT_1468b5b40);
      local_68._4_4_ =
           (float)((-(uint)((float)((uint)fVar11 & uRam00000001468b5b24) <= DAT_1468b6080_4) &
                    (uint)fVar15 ^ (uint)fVar15) & uRam00000001468b5b44);
      uStack_60._0_4_ =
           (float)((-(uint)((float)((uint)fVar12 & uRam00000001468b5b28) <= fRam00000001468b6088) &
                    (uint)fVar8 ^ (uint)fVar8) & uRam00000001468b5b48);
      uStack_60._4_4_ =
           (float)((-(uint)((float)((uint)fVar13 & uRam00000001468b5b2c) <= fRam00000001468b608c) &
                    (uint)fVar9 ^ (uint)fVar9) & uRam00000001468b5b4c);
      local_58._0_4_ = (float)local_68 * param_1[8];
      local_58._4_4_ = local_68._4_4_ * param_1[9];
      fStack_50 = (float)uStack_60 * param_1[10];
      fStack_4c = uStack_60._4_4_ * param_1[0xb];
      fVar14 = fVar18 * fVar21 - fVar17 * fVar22;
      fVar15 = fVar16 * fVar22 - fVar18 * fVar20;
      fVar8 = fVar17 * fVar20 - fVar16 * fVar21;
      fVar9 = fVar19 * fVar23 - fVar19 * fVar23;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar8 = fVar8 + fVar8;
      fVar9 = fVar9 + fVar9;
      fVar10 = *param_1;
      fVar11 = param_1[1];
      fVar12 = param_1[2];
      fVar13 = param_1[3];
      local_68._0_4_ =
           ((fVar8 * fVar21 - fVar15 * fVar22) + fVar23 * fVar14 + fVar16) * (float)local_68;
      local_68._4_4_ =
           ((fVar14 * fVar22 - fVar8 * fVar20) + fVar23 * fVar15 + fVar17) * local_68._4_4_;
      uStack_60._0_4_ =
           ((fVar15 * fVar20 - fVar14 * fVar21) + fVar23 * fVar8 + fVar18) * (float)uStack_60;
      uStack_60._4_4_ =
           ((fVar9 * fVar23 - fVar9 * fVar23) + fVar23 * fVar9 + fVar19) * uStack_60._4_4_;
      local_78 = fVar13 * fVar20 * _DAT_1468b5bc0 + fVar10 * fVar23 +
                 fVar12 * fVar21 * _DAT_1468b5bb0 + fVar11 * fVar22 * _DAT_1468b5ba0;
      fStack_74 = fVar12 * fVar20 * fRam00000001468b5bc4 + fVar11 * fVar23 +
                  fVar13 * fVar21 * fRam00000001468b5bb4 + fVar10 * fVar22 * fRam00000001468b5ba4;
      fStack_70 = fVar11 * fVar20 * fRam00000001468b5bc8 + fVar12 * fVar23 +
                  fVar10 * fVar21 * fRam00000001468b5bb8 + fVar13 * fVar22 * fRam00000001468b5ba8;
      fStack_6c = fVar10 * fVar20 * fRam00000001468b5bcc + fVar13 * fVar23 +
                  fVar11 * fVar21 * fRam00000001468b5bbc + fVar12 * fVar22 * fRam00000001468b5bac;
    }
    else {
      FUN_14162c0f0(&local_78,param_1);
    }
    param_2[4] = (float)local_68;
    param_2[5] = local_68._4_4_;
    param_2[6] = (float)uStack_60;
    param_2[7] = uStack_60._4_4_;
    param_2[8] = (float)local_58._0_4_;
    param_2[9] = (float)local_58._4_4_;
    param_2[10] = fStack_50;
    param_2[0xb] = fStack_4c;
    *param_2 = local_78;
    param_2[1] = fStack_74;
    param_2[2] = fStack_70;
    param_2[3] = fStack_6c;
  }
  else {
    *(undefined8 *)param_2 = _DAT_1468b5b70;
    *(undefined8 *)(param_2 + 2) = uVar1;
    uVar1 = uRam00000001468b5b98;
    *(undefined8 *)(param_2 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(param_2 + 10) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar2;
    *(undefined8 *)(param_2 + 6) = uVar3;
  }
  return param_2;
}



// FUNCTION 14162bfb0 FUN_14162bfb0 body=307 status=ok
// SIG undefined FUN_14162bfb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14162bfb0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
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
  
  fVar20 = *param_3;
  fVar14 = param_3[1];
  fVar21 = param_3[2];
  fVar1 = param_3[3];
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  auVar7 = *(undefined1 (*) [16])(param_1 + 8);
  fVar16 = auVar7._0_4_;
  fVar17 = auVar7._4_4_;
  fVar18 = auVar7._8_4_;
  fVar19 = auVar7._12_4_;
  auVar7 = rcpps(in_XMM1,auVar7);
  fVar6 = auVar7._0_4_;
  fVar8 = auVar7._4_4_;
  fVar9 = auVar7._8_4_;
  fVar10 = auVar7._12_4_;
  fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar16;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar17;
  fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar18;
  fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar19;
  fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar16;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar17;
  fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar18;
  fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar19;
  fVar11 = *param_1 * _DAT_1468b5b60;
  fVar12 = param_1[1] * fRam00000001468b5b64;
  fVar13 = param_1[2] * fRam00000001468b5b68;
  fVar15 = param_1[3] * fRam00000001468b5b6c;
  fVar22 = (float)((-(uint)((float)((uint)fVar16 & _DAT_1468b5b20) <= _DAT_1468b5b50) & (uint)fVar6
                   ^ (uint)fVar6) & _DAT_1468b5b40) * param_3[8];
  fVar23 = (float)((-(uint)((float)((uint)fVar17 & uRam00000001468b5b24) <= fRam00000001468b5b54) &
                    (uint)fVar8 ^ (uint)fVar8) & uRam00000001468b5b44) * param_3[9];
  fVar9 = (float)((-(uint)((float)((uint)fVar18 & uRam00000001468b5b28) <= fRam00000001468b5b58) &
                   (uint)fVar9 ^ (uint)fVar9) & uRam00000001468b5b48) * param_3[10];
  fVar10 = (float)((-(uint)((float)((uint)fVar19 & uRam00000001468b5b2c) <= fRam00000001468b5b5c) &
                    (uint)fVar10 ^ (uint)fVar10) & uRam00000001468b5b4c) * param_3[0xb];
  fVar16 = fVar20 * fVar15 * _DAT_1468b5bc0;
  fVar18 = fVar20 * fVar13 * fRam00000001468b5bc4;
  fVar19 = fVar20 * fVar12 * fRam00000001468b5bc8;
  fVar20 = fVar20 * fVar11 * fRam00000001468b5bcc;
  param_2[8] = fVar22;
  param_2[9] = fVar23;
  param_2[10] = fVar9;
  param_2[0xb] = fVar10;
  fVar17 = fVar16 + fVar1 * fVar11 + fVar14 * fVar13 * _DAT_1468b5bb0 +
           fVar21 * fVar12 * _DAT_1468b5ba0;
  fVar6 = fVar18 + fVar1 * fVar12 + fVar14 * fVar15 * fRam00000001468b5bb4 +
          fVar21 * fVar11 * fRam00000001468b5ba4;
  fVar8 = fVar19 + fVar1 * fVar13 + fVar14 * fVar11 * fRam00000001468b5bb8 +
          fVar21 * fVar15 * fRam00000001468b5ba8;
  fVar21 = fVar20 + fVar1 * fVar15 + fVar14 * fVar12 * fRam00000001468b5bbc +
           fVar21 * fVar13 * fRam00000001468b5bac;
  *param_2 = fVar17;
  param_2[1] = fVar6;
  param_2[2] = fVar8;
  param_2[3] = fVar21;
  fVar19 = fVar4 * fVar6 - fVar3 * fVar8;
  fVar20 = fVar2 * fVar8 - fVar4 * fVar17;
  fVar14 = fVar3 * fVar17 - fVar2 * fVar6;
  fVar18 = fVar5 * fVar21 - fVar5 * fVar21;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  fVar14 = fVar14 + fVar14;
  fVar18 = fVar18 + fVar18;
  fVar16 = (float)((uint)(param_3[5] -
                         ((fVar19 * fVar8 - fVar14 * fVar17) + fVar21 * fVar20 + fVar3) * fVar23) &
                  uRam00000001468b5b44);
  fVar17 = (float)((uint)(param_3[6] -
                         ((fVar20 * fVar17 - fVar19 * fVar6) + fVar21 * fVar14 + fVar4) * fVar9) &
                  uRam00000001468b5b48);
  fVar18 = (float)((uint)(param_3[7] -
                         ((fVar18 * fVar21 - fVar18 * fVar21) + fVar21 * fVar18 + fVar5) * fVar10) &
                  uRam00000001468b5b4c);
  param_2[4] = (float)((uint)(param_3[4] -
                             ((fVar14 * fVar6 - fVar20 * fVar8) + fVar21 * fVar19 + fVar2) * fVar22)
                      & _DAT_1468b5b40);
  param_2[5] = fVar16;
  param_2[6] = fVar17;
  param_2[7] = fVar18;
  return param_2;
}



// FUNCTION 14162c0f0 FUN_14162c0f0 body=1379 status=ok
// SIG undefined FUN_14162c0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14162c0f0(uint *param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
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
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar23 [16];
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
  uint uVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  uint uVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 local_118 [8];
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
  undefined1 local_c8 [192];
  
  fVar16 = fRam00000001468b5b3c;
  fVar25 = *param_2;
  fVar29 = param_2[1];
  fVar33 = param_2[2];
  fVar2 = param_2[3];
  fVar27 = fVar29 + fVar29;
  fVar31 = fVar33 + fVar33;
  fVar18 = fVar25 * (fVar25 + fVar25);
  fVar24 = param_2[4];
  fVar26 = param_2[5];
  fVar30 = param_2[6];
  fVar22 = param_2[8];
  fVar19 = param_2[9];
  fVar21 = param_2[10];
  fVar28 = (fVar25 + fVar25) * fVar2;
  fVar45 = fVar22 * (fVar31 * fVar2 + fVar27 * fVar25);
  fVar46 = fVar19 * (fVar28 + fVar31 * fVar29);
  fVar47 = fVar21 * (fVar27 * fVar2 + fVar31 * fVar25);
  fVar34 = (fVar27 * fVar25 - fVar31 * fVar2) * fVar19;
  fVar36 = (fVar31 * fVar29 - fVar28) * fVar21;
  fVar38 = (fVar31 * fVar25 - fVar27 * fVar2) * fVar22;
  fVar28 = (float)(_DAT_1468b5b40 &
                  (uint)(fVar22 * (_DAT_1468b5b30 - (fVar33 * fVar31 + fVar29 * fVar27))));
  fVar31 = (float)(uRam00000001468b5b44 &
                  (uint)(fVar19 * (fRam00000001468b5b34 - (fVar33 * fVar31 + fVar18))));
  fVar21 = (float)(uRam00000001468b5b48 &
                  (uint)(fVar21 * (fRam00000001468b5b38 - (fVar29 * fVar27 + fVar18))));
  fVar18 = (float)(uRam00000001468b5b4c &
                  (uint)(param_2[0xb] * (fRam00000001468b5b3c - (fVar18 + fVar18))));
  fVar25 = *param_3;
  fVar29 = param_3[1];
  fVar33 = param_3[2];
  fVar2 = param_3[3];
  fVar27 = fVar29 + fVar29;
  fVar32 = fVar33 + fVar33;
  fVar19 = fVar25 * (fVar25 + fVar25);
  fVar22 = param_3[8];
  local_108 = param_3[9];
  fStack_f4 = param_3[10];
  fStack_104 = (float)((uint)(local_108 * (fRam00000001468b5b34 - (fVar33 * fVar32 + fVar19))) &
                      uRam00000001468b5b44);
  fStack_f0 = (float)((uint)(fStack_f4 * (fRam00000001468b5b38 - (fVar29 * fVar27 + fVar19))) &
                     uRam00000001468b5b48);
  fStack_fc = (float)((uint)(param_3[0xb] * (fRam00000001468b5b3c - (fVar19 + fVar19))) &
                     uRam00000001468b5b4c);
  fVar19 = (fVar25 + fVar25) * fVar2;
  fStack_100 = local_108 * (fVar19 + fVar32 * fVar29);
  local_f8 = fStack_f4 * (fVar27 * fVar2 + fVar32 * fVar25);
  local_108 = (fVar27 * fVar25 - fVar32 * fVar2) * local_108;
  fStack_f4 = (fVar32 * fVar29 - fVar19) * fStack_f4;
  auVar23._4_4_ = fVar22 * (fVar32 * fVar2 + fVar27 * fVar25);
  auVar23._0_4_ =
       (uint)(fVar22 * (_DAT_1468b5b30 - (fVar33 * fVar32 + fVar29 * fVar27))) & _DAT_1468b5b40;
  auVar23._8_4_ = (fVar32 * fVar25 - fVar27 * fVar2) * fVar22;
  auVar23._12_4_ = fStack_fc;
  local_e8 = param_3[4];
  fStack_e4 = param_3[5];
  fStack_e0 = param_3[6];
  fStack_dc = fRam00000001468b5b3c;
  _local_118 = auVar23;
  fStack_ec = fStack_fc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b6070) && (_Init_thread_header(&DAT_1468b6070), DAT_1468b6070 == -1))
  {
    _DAT_1468b6060 = 1e-08;
    fRam00000001468b6064 = 1e-08;
    fRam00000001468b6068 = 1e-08;
    fRam00000001468b606c = 1e-08;
    _Init_thread_footer(&DAT_1468b6070);
  }
  fVar15 = fRam00000001468b5b38;
  fVar14 = fRam00000001468b5b34;
  fVar13 = _DAT_1468b5b30;
  auVar1 = *(undefined1 (*) [16])(param_3 + 8);
  fVar25 = auVar1._0_4_;
  fVar29 = auVar1._4_4_;
  fVar33 = auVar1._8_4_;
  fVar2 = auVar1._12_4_;
  auVar23 = rcpps(auVar23,auVar1);
  fVar22 = auVar23._0_4_;
  fVar19 = auVar23._4_4_;
  fVar27 = auVar23._8_4_;
  fVar32 = auVar23._12_4_;
  fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar25;
  fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar29;
  fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar33;
  fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar2;
  fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar25;
  fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar29;
  fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar33;
  fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar2;
  fVar44 = (float)((-(uint)((float)((uint)fVar2 & uRam00000001468b5b2c) <= fRam00000001468b606c) &
                    (uint)fVar32 ^ (uint)fVar32) & uRam00000001468b5b4c);
  fVar2 = param_2[0xb];
  fVar41 = (float)((-(uint)((float)((uint)fVar25 & _DAT_1468b5b20) <= _DAT_1468b6060) & (uint)fVar22
                   ^ (uint)fVar22) & _DAT_1468b5b40) * param_2[8];
  fVar42 = (float)((-(uint)((float)((uint)fVar29 & uRam00000001468b5b24) <= fRam00000001468b6064) &
                    (uint)fVar19 ^ (uint)fVar19) & uRam00000001468b5b44) * param_2[9];
  fVar43 = (float)((-(uint)((float)((uint)fVar33 & uRam00000001468b5b28) <= fRam00000001468b6068) &
                    (uint)fVar27 ^ (uint)fVar27) & uRam00000001468b5b48) * param_2[10];
  pfVar17 = (float *)FMatrix::Inverse(local_118,local_c8);
  fVar25 = pfVar17[4];
  fVar29 = pfVar17[5];
  fVar33 = pfVar17[6];
  fVar22 = pfVar17[7];
  fVar19 = *pfVar17;
  fVar27 = pfVar17[1];
  fVar32 = pfVar17[2];
  fVar4 = pfVar17[3];
  fVar5 = pfVar17[8];
  fVar6 = pfVar17[9];
  fVar7 = pfVar17[10];
  fVar8 = pfVar17[0xb];
  fVar9 = pfVar17[0xc];
  fVar10 = pfVar17[0xd];
  fVar11 = pfVar17[0xe];
  fVar12 = pfVar17[0xf];
  local_118._4_4_ = fVar28 * fVar27 + fVar45 * fVar29 + fVar38 * fVar6 + fVar18 * fVar10;
  local_118._0_4_ = fVar28 * fVar19 + fVar45 * fVar25 + fVar38 * fVar5 + fVar18 * fVar9;
  fStack_110 = fVar28 * fVar32 + fVar45 * fVar33 + fVar38 * fVar7 + fVar18 * fVar11;
  fStack_10c = fVar28 * fVar4 + fVar45 * fVar22 + fVar38 * fVar8 + fVar18 * fVar12;
  local_108 = fVar34 * fVar19 + fVar31 * fVar25 + fVar46 * fVar5 + fVar18 * fVar9;
  fStack_104 = fVar34 * fVar27 + fVar31 * fVar29 + fVar46 * fVar6 + fVar18 * fVar10;
  fStack_100 = fVar34 * fVar32 + fVar31 * fVar33 + fVar46 * fVar7 + fVar18 * fVar11;
  fStack_fc = fVar34 * fVar4 + fVar31 * fVar22 + fVar46 * fVar8 + fVar18 * fVar12;
  local_f8 = fVar47 * fVar19 + fVar36 * fVar25 + fVar21 * fVar5 + fVar18 * fVar9;
  fStack_f4 = fVar47 * fVar27 + fVar36 * fVar29 + fVar21 * fVar6 + fVar18 * fVar10;
  fStack_f0 = fVar47 * fVar32 + fVar36 * fVar33 + fVar21 * fVar7 + fVar18 * fVar11;
  fStack_ec = fVar47 * fVar4 + fVar36 * fVar22 + fVar21 * fVar8 + fVar18 * fVar12;
  local_e8 = fVar24 * fVar19 + fVar26 * fVar25 + fVar30 * fVar5 + fVar16 * fVar9;
  fStack_e4 = fVar24 * fVar27 + fVar26 * fVar29 + fVar30 * fVar6 + fVar16 * fVar10;
  fStack_e0 = fVar24 * fVar32 + fVar26 * fVar33 + fVar30 * fVar7 + fVar16 * fVar11;
  fStack_dc = fVar24 * fVar4 + fVar26 * fVar22 + fVar30 * fVar8 + fVar16 * fVar12;
  FMatrix::RemoveScaling(local_118);
  auVar23 = _local_118;
  fVar25 = (float)((_DAT_1468b5bf0 ^ (uint)fVar13) & -(uint)(_DAT_1468b5c00 <= fVar41) ^
                  _DAT_1468b5bf0);
  fVar29 = (float)((uRam00000001468b5bf4 ^ (uint)fVar14) & -(uint)(fRam00000001468b5c04 <= fVar42) ^
                  uRam00000001468b5bf4);
  fVar33 = (float)((uRam00000001468b5bf8 ^ (uint)fVar15) & -(uint)(fRam00000001468b5c08 <= fVar43) ^
                  uRam00000001468b5bf8);
  local_118._4_4_ = (float)local_118._4_4_ * fVar25;
  local_118._0_4_ = (float)local_118._0_4_ * fVar25;
  fStack_104 = fStack_104 * fVar29;
  fStack_10c = auVar23._12_4_;
  fStack_110 = fStack_110 * fVar25;
  fStack_100 = fStack_100 * fVar29;
  local_108 = local_108 * fVar29;
  fStack_f4 = fStack_f4 * fVar33;
  fStack_f0 = fStack_f0 * fVar33;
  local_f8 = local_f8 * fVar33;
  FQuat::FQuat(&local_d8,local_118);
  auVar20._0_4_ = local_d8 * local_d8 + fStack_d0 * fStack_d0;
  auVar20._4_4_ = fStack_d4 * fStack_d4 + fStack_cc * fStack_cc;
  auVar20._8_4_ = fStack_d0 * fStack_d0 + local_d8 * local_d8;
  auVar20._12_4_ = fStack_cc * fStack_cc + fStack_d4 * fStack_d4;
  fVar26 = auVar20._4_4_ + auVar20._0_4_;
  fVar30 = auVar20._8_4_ + auVar20._4_4_;
  fVar22 = auVar20._12_4_ + auVar20._8_4_;
  fVar19 = auVar20._0_4_ + auVar20._12_4_;
  auVar3._4_4_ = fVar30;
  auVar3._0_4_ = fVar26;
  auVar3._8_4_ = fVar22;
  auVar3._12_4_ = fVar19;
  auVar23 = rsqrtps(auVar20,auVar3);
  fVar25 = auVar23._0_4_;
  fVar29 = auVar23._4_4_;
  fVar33 = auVar23._8_4_;
  fVar24 = auVar23._12_4_;
  fVar25 = (_DAT_1468b5be0 - fVar25 * fVar25 * fVar26 * _DAT_1468b5be0) * fVar25 + fVar25;
  fVar29 = (fRam00000001468b5be4 - fVar29 * fVar29 * fVar30 * fRam00000001468b5be4) * fVar29 +
           fVar29;
  fVar33 = (fRam00000001468b5be8 - fVar33 * fVar33 * fVar22 * fRam00000001468b5be8) * fVar33 +
           fVar33;
  fVar24 = (fRam00000001468b5bec - fVar24 * fVar24 * fVar19 * fRam00000001468b5bec) * fVar24 +
           fVar24;
  uVar35 = ((uint)(((_DAT_1468b5be0 - fVar25 * fVar25 * fVar26 * _DAT_1468b5be0) * fVar25 + fVar25)
                  * local_d8) ^ _DAT_1468b5bd0) & -(uint)(1e-08 <= fVar26) ^ _DAT_1468b5bd0;
  uVar37 = ((uint)(((fRam00000001468b5be4 - fVar29 * fVar29 * fVar30 * fRam00000001468b5be4) *
                    fVar29 + fVar29) * fStack_d4) ^ uRam00000001468b5bd4) & -(uint)(1e-08 <= fVar30)
           ^ uRam00000001468b5bd4;
  uVar39 = ((uint)(((fRam00000001468b5be8 - fVar33 * fVar33 * fVar22 * fRam00000001468b5be8) *
                    fVar33 + fVar33) * fStack_d0) ^ uRam00000001468b5bd8) & -(uint)(1e-08 <= fVar22)
           ^ uRam00000001468b5bd8;
  uVar40 = ((uint)(((fRam00000001468b5bec - fVar24 * fVar24 * fVar19 * fRam00000001468b5bec) *
                    fVar24 + fVar24) * fStack_cc) ^ uRam00000001468b5bdc) & -(uint)(1e-08 <= fVar19)
           ^ uRam00000001468b5bdc;
  auVar1._4_4_ = fStack_e4;
  auVar1._0_4_ = local_e8;
  auVar1._8_4_ = fStack_e0;
  param_1[8] = (uint)fVar41;
  param_1[9] = (uint)fVar42;
  param_1[10] = (uint)fVar43;
  param_1[0xb] = (uint)(fVar44 * fVar2);
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 4) = auVar1;
  *param_1 = uVar35;
  param_1[1] = uVar37;
  param_1[2] = uVar39;
  param_1[3] = uVar40;
  return;
}



// FUNCTION 14162c660 FUN_14162c660 body=353 status=ok
// SIG undefined FUN_14162c660(void)

undefined8 FUN_14162c660(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Critical Error",L"Core.MessageLog",L"CritError");
    return param_1;
  }
  if (param_2 == 1) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Error",L"Core.MessageLog",L"Error");
    return param_1;
  }
  if (param_2 == 2) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Performance Warning",L"Core.MessageLog",L"PerfWarning");
    return param_1;
  }
  if (param_2 != 3) {
    if (param_2 != 4) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146852c50) {
        _Init_thread_header(&DAT_146852c50);
        if (DAT_146852c50 == -1) {
          FText::FText(&DAT_146852c38,0);
          atexit(FUN_143e3e8f0);
          _Init_thread_footer(&DAT_146852c50);
        }
      }
      FText::FText(param_1,&DAT_146852c38);
      return param_1;
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Info",L"Core.MessageLog",L"Info");
    return param_1;
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1,L"Warning",L"Core.MessageLog",L"Warning");
  return param_1;
}



// FUNCTION 14162c7d0 GetTLSCurrent body=85 status=ok
// SIG undefined GetTLSCurrent(void)

undefined1 * FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent(void)

{
  undefined1 *lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1468b5ad0);
  if (lpTlsValue == (undefined1 *)0x0) {
    lpTlsValue = (undefined1 *)operator_new(0x10);
    if (lpTlsValue == (undefined1 *)0x0) {
      lpTlsValue = (undefined1 *)0x0;
    }
    else {
      *lpTlsValue = 5;
      *(undefined8 *)(lpTlsValue + 8) = 0;
    }
    TlsSetValue(DAT_1468b5ad0,lpTlsValue);
  }
  return lpTlsValue;
}



// FUNCTION 14162c830 GetTypeHash body=318 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1 + 0x10,0x10);
  iVar2 = FCrc::MemCrc_DEPRECATED(param_1,0x10);
  uVar4 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 10;
  uVar3 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  iVar2 = FCrc::MemCrc_DEPRECATED(param_1 + 0x20,0x10);
  uVar1 = iVar2 - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar1) - uVar3 ^ uVar1 << 8;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xd;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 5;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 << 10;
  return (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xf;
}



// FUNCTION 14162c970 FUN_14162c970 body=126 status=ok
// SIG undefined FUN_14162c970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162c970(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5ef0) {
    _Init_thread_header(&DAT_1468b5ef0);
    if (DAT_1468b5ef0 == -1) {
      _DAT_1468b5ee0 = 0x8444a8a3;
      _DAT_1468b5ee4 = 0x19ae4e13;
      _DAT_1468b5ee8 = 0xbcfa75ee;
      _DAT_1468b5eec = 0x39982bd6;
      _Init_thread_footer(&DAT_1468b5ef0);
    }
  }
  return &DAT_1468b5ee0;
}



// FUNCTION 14162c9f0 FUN_14162c9f0 body=126 status=ok
// SIG undefined FUN_14162c9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162c9f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5fc8) {
    _Init_thread_header(&DAT_1468b5fc8);
    if (DAT_1468b5fc8 == -1) {
      _DAT_1468b5fb8 = 0xf99670f8;
      _DAT_1468b5fbc = 0x74794256;
      _DAT_1468b5fc0 = 0xbb0cae6d;
      _DAT_1468b5fc4 = 0xc67cd5b6;
      _Init_thread_footer(&DAT_1468b5fc8);
    }
  }
  return &DAT_1468b5fb8;
}



// FUNCTION 14162ca70 FUN_14162ca70 body=126 status=ok
// SIG undefined FUN_14162ca70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162ca70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5fe0) {
    _Init_thread_header(&DAT_1468b5fe0);
    if (DAT_1468b5fe0 == -1) {
      _DAT_1468b5fd0 = 0x4afe0cf8;
      _DAT_1468b5fd4 = 0xf9054360;
      _DAT_1468b5fd8 = 0xbe5dce80;
      _DAT_1468b5fdc = 0xdc2e22f6;
      _Init_thread_footer(&DAT_1468b5fe0);
    }
  }
  return &DAT_1468b5fd0;
}



// FUNCTION 14162caf0 FUN_14162caf0 body=126 status=ok
// SIG undefined FUN_14162caf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162caf0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5f68) {
    _Init_thread_header(&DAT_1468b5f68);
    if (DAT_1468b5f68 == -1) {
      _DAT_1468b5f58 = 0xe6240779;
      _DAT_1468b5f5c = 0xee2849cf;
      _DAT_1468b5f60 = 0x95a0e648;
      _DAT_1468b5f64 = 0x22d58713;
      _Init_thread_footer(&DAT_1468b5f68);
    }
  }
  return &DAT_1468b5f58;
}



// FUNCTION 14162cb70 FUN_14162cb70 body=126 status=ok
// SIG undefined FUN_14162cb70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162cb70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5f80) {
    _Init_thread_header(&DAT_1468b5f80);
    if (DAT_1468b5f80 == -1) {
      _DAT_1468b5f70 = 0x8d1e08e3;
      _DAT_1468b5f74 = 0x5f534245;
      _DAT_1468b5f78 = 0xa987ad7e;
      _DAT_1468b5f7c = 0xdb78a4b7;
      _Init_thread_footer(&DAT_1468b5f80);
    }
  }
  return &DAT_1468b5f70;
}



// FUNCTION 14162cbf0 FUN_14162cbf0 body=126 status=ok
// SIG undefined FUN_14162cbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162cbf0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5ff8) {
    _Init_thread_header(&DAT_1468b5ff8);
    if (DAT_1468b5ff8 == -1) {
      _DAT_1468b5fe8 = 0x936e4434;
      _DAT_1468b5fec = 0xa014f2d;
      _DAT_1468b5ff0 = 0xbeec90d3;
      _DAT_1468b5ff4 = 0x4d3ecea2;
      _Init_thread_footer(&DAT_1468b5ff8);
    }
  }
  return &DAT_1468b5fe8;
}



// FUNCTION 14162cc70 FUN_14162cc70 body=126 status=ok
// SIG undefined FUN_14162cc70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162cc70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5f38) {
    _Init_thread_header(&DAT_1468b5f38);
    if (DAT_1468b5f38 == -1) {
      _DAT_1468b5f28 = 0x6f88756b;
      _DAT_1468b5f2c = 0xf9234263;
      _DAT_1468b5f30 = 0x9b13614f;
      _DAT_1468b5f34 = 0x2706074b;
      _Init_thread_footer(&DAT_1468b5f38);
    }
  }
  return &DAT_1468b5f28;
}



// FUNCTION 14162ccf0 FUN_14162ccf0 body=126 status=ok
// SIG undefined FUN_14162ccf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162ccf0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5f50) {
    _Init_thread_header(&DAT_1468b5f50);
    if (DAT_1468b5f50 == -1) {
      _DAT_1468b5f40 = 0x5a878c9;
      _DAT_1468b5f44 = 0xe6c44a4;
      _DAT_1468b5f48 = 0x9a73920d;
      _DAT_1468b5f4c = 0x3175ab48;
      _Init_thread_footer(&DAT_1468b5f50);
    }
  }
  return &DAT_1468b5f40;
}



// FUNCTION 14162cd70 FUN_14162cd70 body=126 status=ok
// SIG undefined FUN_14162cd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162cd70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b6028) {
    _Init_thread_header(&DAT_1468b6028);
    if (DAT_1468b6028 == -1) {
      _DAT_1468b6018 = 0x93388f8d;
      _DAT_1468b601c = 0x1d9b4dfe;
      _DAT_1468b6020 = 0xbd4d6cc4;
      _DAT_1468b6024 = 0x12d1de99;
      _Init_thread_footer(&DAT_1468b6028);
    }
  }
  return &DAT_1468b6018;
}



// FUNCTION 14162cdf0 FUN_14162cdf0 body=126 status=ok
// SIG undefined FUN_14162cdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162cdf0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b6010) {
    _Init_thread_header(&DAT_1468b6010);
    if (DAT_1468b6010 == -1) {
      _DAT_1468b6000 = 0xe7c03e11;
      _DAT_1468b6004 = 0x9de84b4b;
      _DAT_1468b6008 = 0xba4c2b76;
      _DAT_1468b600c = 0x69bf028e;
      _Init_thread_footer(&DAT_1468b6010);
    }
  }
  return &DAT_1468b6000;
}



// FUNCTION 14162ce70 FUN_14162ce70 body=126 status=ok
// SIG undefined FUN_14162ce70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162ce70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5f98) {
    _Init_thread_header(&DAT_1468b5f98);
    if (DAT_1468b5f98 == -1) {
      _DAT_1468b5f88 = 0xf287b3bf;
      _DAT_1468b5f8c = 0x35df4141;
      _DAT_1468b5f90 = 0xa8b4f57b;
      _DAT_1468b5f94 = 0x7e06df47;
      _Init_thread_footer(&DAT_1468b5f98);
    }
  }
  return &DAT_1468b5f88;
}



// FUNCTION 14162cef0 FUN_14162cef0 body=126 status=ok
// SIG undefined FUN_14162cef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162cef0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5fb0) {
    _Init_thread_header(&DAT_1468b5fb0);
    if (DAT_1468b5fb0 == -1) {
      _DAT_1468b5fa0 = 0xba359bb0;
      _DAT_1468b5fa4 = 0xceb54682;
      _DAT_1468b5fa8 = 0x9160eb4f;
      _DAT_1468b5fac = 0xd1687c7f;
      _Init_thread_footer(&DAT_1468b5fb0);
    }
  }
  return &DAT_1468b5fa0;
}



// FUNCTION 14162cf70 FUN_14162cf70 body=126 status=ok
// SIG undefined FUN_14162cf70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162cf70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5f20) {
    _Init_thread_header(&DAT_1468b5f20);
    if (DAT_1468b5f20 == -1) {
      _DAT_1468b5f10 = 0x125e4c67;
      _DAT_1468b5f14 = 0x96eb48c4;
      _DAT_1468b5f18 = 0x8894e09c;
      _DAT_1468b5f1c = 0xb3cd56bf;
      _Init_thread_footer(&DAT_1468b5f20);
    }
  }
  return &DAT_1468b5f10;
}



// FUNCTION 14162cff0 FUN_14162cff0 body=126 status=ok
// SIG undefined FUN_14162cff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14162cff0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5f08) {
    _Init_thread_header(&DAT_1468b5f08);
    if (DAT_1468b5f08 == -1) {
      _DAT_1468b5ef8 = 0xcc40a083;
      _DAT_1468b5efc = 0xadbf46e2;
      _DAT_1468b5f00 = 0xa93d12bb;
      _DAT_1468b5f04 = 0x525d7417;
      _Init_thread_footer(&DAT_1468b5f08);
    }
  }
  return &DAT_1468b5ef8;
}



// FUNCTION 14162d070 GetUnfocusedVolumeMultiplier body=78 status=ok
// SIG undefined GetUnfocusedVolumeMultiplier(void)

undefined4 FApp::GetUnfocusedVolumeMultiplier(void)

{
  if (DAT_1468b5b1c == '\0') {
    DAT_1468b5b1c = '\x01';
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Audio",L"UnfocusedVolumeMultiplier",&DAT_1468b5a4c,&DAT_1468e2360);
  }
  return DAT_1468b5a4c;
}



// FUNCTION 14162d0c0 GetUnitType body=25 status=ok
// SIG undefined GetUnitType(void)

undefined4 FUnitConversion::GetUnitType(byte param_1)

{
  if (param_1 != 0x32) {
    return *(undefined4 *)(&DAT_144cbe6f0 + (ulonglong)param_1 * 4);
  }
  return 0xd;
}



// FUNCTION 14162d0e0 HSVToLinearRGB body=365 status=ok
// SIG undefined HSVToLinearRGB(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FLinearColor::HSVToLinearRGB(float *param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float local_78 [4];
  uint local_68 [20];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)local_78;
  fVar8 = *param_1 * 0.016666668;
  local_78[0] = param_1[2];
  iVar4 = (int)fVar8;
  fVar6 = fVar8;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar8)) {
    auVar7._4_4_ = fVar8;
    auVar7._0_4_ = fVar8;
    auVar7._8_8_ = 0;
    uVar3 = movmskps((int)(DAT_1468387a8 ^ (ulonglong)local_78),auVar7);
    fVar6 = (float)(int)(iVar4 - (uVar3 & 1));
  }
  local_68[1] = 3;
  local_68[0] = 0;
  local_68[0xf] = 0;
  local_68[2] = 1;
  local_68[3] = 2;
  local_68[4] = 0;
  local_68[5] = 1;
  local_68[6] = 1;
  local_68[7] = 0;
  local_68[8] = 3;
  local_68[9] = 1;
  local_68[10] = 2;
  local_68[0xb] = 0;
  local_68[0xc] = 3;
  local_78[1] = (1.0 - param_1[1]) * local_78[0];
  local_68[0xd] = 1;
  local_68[0xe] = 0;
  local_68[0x10] = 1;
  local_68[0x11] = 2;
  fVar1 = param_1[1];
  local_78[2] = (1.0 - (fVar8 - fVar6) * param_1[1]) * local_78[0];
  param_2[3] = param_1[3];
  uVar5 = (ulonglong)(uint)((int)(longlong)fVar6 + (int)(((longlong)fVar6 & 0xffffffffU) / 6) * -6);
  local_78[3] = (1.0 - (1.0 - (fVar8 - fVar6)) * fVar1) * local_78[0];
  uVar3 = local_68[uVar5 * 3 + 1];
  *param_2 = local_78[local_68[uVar5 * 3]];
  uVar2 = local_68[uVar5 * 3 + 2];
  param_2[1] = local_78[uVar3];
  param_2[2] = local_78[uVar2];
  return param_2;
}



// FUNCTION 14162d250 FUN_14162d250 body=8 status=ok
// SIG undefined FUN_14162d250(void)

undefined1 FUN_14162d250(void)

{
  return DAT_1468b5a75;
}



// FUNCTION 14162d260 Info body=111 status=ok
// SIG undefined Info(void)

undefined8 * FMessageLog::Info(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_141624290(param_2,4);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar3 = *param_2;
  lVar2 = param_2[1];
  puVar3[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}


